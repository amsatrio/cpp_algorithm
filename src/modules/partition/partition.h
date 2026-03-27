#include <vector>

class Partition {
  private:
  public:
    ~Partition();
    virtual void execute(std::vector<int> &input) = 0;
};

class NaivePartition : public Partition {
  private:
  public:
    ~NaivePartition();
    void execute(std::vector<int> &input) override;
};