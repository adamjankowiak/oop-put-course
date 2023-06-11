#include <iostream>
#include <vector>

using namespace std;

class IntegerSequence
{
public:
    virtual vector<int>Numbers()=0;
};
class VectorSequence : public IntegerSequence
{
private:
    vector<int>sequence;
public:
    VectorSequence(vector<int>& data) : sequence(data){}
    vector<int>Numbers() override
    {
        return sequence;
    }
};
class PositiveSequence : public IntegerSequence
{
private:
    IntegerSequence *sequence;
public:
    PositiveSequence(IntegerSequence* seq) : sequence(seq){}
    vector<int>Numbers() override {
        vector<int>original=sequence->Numbers();
        vector<int>result;
        for(int i : original)
        {
            if(i>0)
            {
                result.push_back(i);
            }
        }
        return result;
    }
};
int main()
{
    vector<int>Sequence={1,-8,22,420,-69,2137};
    VectorSequence vectorSeq(Sequence);
    IntegerSequence *sequence = &vectorSeq;
    sequence = new PositiveSequence(sequence);
    vector<int> processedSequence = sequence->Numbers();
    for(int i : processedSequence)
    {
        cout<<i<<" ";
    }

    return 0;
}