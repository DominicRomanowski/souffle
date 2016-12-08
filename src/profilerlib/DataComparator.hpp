//
// Created by Dominic Romanowski on 7/12/16.
//

#pragma once

#include <vector>
#include "CellInterface.hpp"

class DataComparator {
public:
    static bool TIME(std::shared_ptr<Row> a, std::shared_ptr<Row> b) { return b->cells[0]->getDoubVal() < a->cells[0]->getDoubVal(); }
    static bool NR_T(std::shared_ptr<Row> a, std::shared_ptr<Row> b) { return b->cells[1]->getDoubVal() < a->cells[1]->getDoubVal(); }
    static bool R_T(std::shared_ptr<Row> a, std::shared_ptr<Row> b) { return b->cells[2]->getDoubVal() < a->cells[2]->getDoubVal(); }
    static bool C_T(std::shared_ptr<Row> a, std::shared_ptr<Row> b) { return b->cells[3]->getDoubVal() < a->cells[3]->getDoubVal(); }
    static bool TUP(std::shared_ptr<Row> a, std::shared_ptr<Row> b) { return b->cells[4]->getLongVal() < a->cells[4]->getLongVal(); }
    static bool NAME(std::shared_ptr<Row> a, std::shared_ptr<Row> b) { return b->cells[5]->getStringVal() < a->cells[5]->getStringVal(); }
    static bool ID(std::shared_ptr<Row> a, std::shared_ptr<Row> b) { return b->cells[6]->getStringVal() < a->cells[6]->getStringVal(); }
};