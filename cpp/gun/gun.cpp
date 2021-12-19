#include "gun.h"

Gun::Gun(const std::string& model, int capacity)
{
    this->model = model;
    this->capacity = capacity;
    this->amount = 0;
    this->isReady = false;
    this->totalShots = 0;
}

Gun::~Gun()
{

}

int Gun::getAmount() const
{
    return this->amount;
}

int Gun::getCapacity() const
{
    return this->capacity;
}

bool Gun::ready() const
{
    return this->isReady;
}

const std::string& Gun::getModel() const
{
    return this->model;
}

int Gun::getTotalShots() const
{
    return this->totalShots;
}

void Gun::prepare()
{
    this->isReady = !this->isReady;
    // if (this->isReady == true)
    // {
    //     this->isReady = false;
    // } 
    // else
    // {
    //     this->isReady = true;
    // }
}

void Gun::reload()
{
    this->amount = this->capacity;
}

void Gun::shoot()
{
    if (!this->isReady)
    {
        throw NotReady();
    }

    if (this->amount == 0)
    {
        throw OutOfRounds();
    }

    std::cout << "Bang!" << std::endl;

    this->amount -= 1;
    this->totalShots += 1;
}

std::ostream& operator<<(std::ostream& out, const Gun& gun)
{
    out << gun.model << " " << "capacity: " << gun.capacity
        << "  totalShots: " << gun.totalShots
        << "  amount: " << gun.amount;


    return out;
}