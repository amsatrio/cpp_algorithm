#include <vector>

class Partition {
  private:
  public:
    ~Partition();
    virtual int execute(std::vector<int> &input, int low, int high) { return 0; };
};

class NaivePartition : public Partition {
  private:
  public:
    ~NaivePartition();
    int execute(std::vector<int> &input, int low, int high) override;
};

class LomutoPartition : public Partition {
  private:
  public:
    ~LomutoPartition();
    int execute(std::vector<int> &input, int low, int high) override;
};