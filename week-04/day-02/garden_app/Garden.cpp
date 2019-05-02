//
// Created by Viktor on 2019. 04. 23..
//

#include "Garden.h"

Garden::Garden()
{
}

void Garden::add(Plants *plants)
{
    _plants.insert(_plants.end(), plants);
}

void Garden::watering(double waterAmount)
{
    double amount = waterAmount / howManyNeedsWater();
    std::cout << "Watering with "  << waterAmount << std::endl;

    for (int i = 0; i < _plants.size(); ++i) {
        double plantWaterAmount = _plants.at(i)->getWaterAmount();
        if (_plants.at(i)->getType() == FLOWER && plantWaterAmount < 5) {
            _plants.at(i)->setWaterAmount(plantWaterAmount + amount * 0.75);
        } else if (_plants.at(i)->getType() == TREE && plantWaterAmount < 10) {
            _plants.at(i)->setWaterAmount(plantWaterAmount + amount * 0.40);
        }
    }
}

int Garden::howManyNeedsWater()
{
    int counter = 0;
    for (int i = 0; i < _plants.size(); ++i) {
        if (_plants.at(i)->getType() == FLOWER && _plants.at(i)->getWaterAmount() < 5) {
            counter++;
        } else if (_plants.at(i)->getType() == TREE && _plants.at(i)->getWaterAmount() < 10) {
            counter++;
        }
    }
    return counter;
}

void Garden::status()
{
    for (int i = 0; i < _plants.size(); ++i) {
        if (_plants.at(i)->getType() == FLOWER && _plants.at(i)->getWaterAmount() < 5) {
            std::cout << "The " << _plants.at(i)->getColor() << " " << "Flower needs water." << std::endl;
        } else if (_plants.at(i)->getType() == TREE && _plants.at(i)->getWaterAmount() < 10) {
            std::cout << "The " << _plants.at(i)->getColor() << " " << "Tree needs water." << std::endl;
        } else if (_plants.at(i)->getType() == FLOWER && _plants.at(i)->getWaterAmount() >= 5) {
            std::cout << "The " << _plants.at(i)->getColor() << " " << "Flower doesn't need water." << std::endl;
        } else if (_plants.at(i)->getType() == TREE && _plants.at(i)->getWaterAmount() >= 10) {
            std::cout << "The " << _plants.at(i)->getColor() << " " << "Tree doesn't need water." << std::endl;
        }
    }
}

