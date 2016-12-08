


#include <iostream>
#include <string>

#include "profilerlib/Cli.hpp"


 int main(int argc, char* argv[]) {
    Cli cli_obj = Cli(argc, argv);
    cli_obj.parse();
    //std::cout << "clean exit.\n";
    return 0;
 }


// #include "profilerlib/Rule.hpp"
// int main() {
// 	Rule r1("R1","1"),
// 		r2("R2",1,"2"),
// 		r3("R3","3");
// 	std::cout << r1.toString();
// }


// #include "profilerlib/Relation.hpp"
// int main() {
//     Iteration x = Iteration();
// }


// #include "profilerlib/Iteration.hpp"
// int main() {
//     Iteration x = Iteration();
//     x.insert("hello", "world");
//     std::cout << x.get("hello");
// }


//#include "profilerlib/Relation.hpp"
//#include "profilerlib/Reader.hpp"
//
//int main() {
//	ProgramRun x = ProgramRun();
//    Reader read = Reader("/Users/Dom/souffle_test/prof1.prof", x, false, false);
//    read.readFile();
//
//    std::unordered_map<std::string, std::shared_ptr<Relation>> rel_map = read.retRelationMap();
//
//    std::cout <<"\nReader Relation map:\n";
//    for (auto it = rel_map.begin(); it != rel_map.end(); ++it) {
//    	std::cout << it->first << ":" << it->second->toString() << "\n";
//    }
//
//}

//#include "profilerlib/Table.hpp"
//#include "profilerlib/Cell.hpp"
//
//int main() {
//
//    Table table;
//
//    Row row = Row(5);
//    table.addRow(std::make_shared<Row>(row));
//    row[0] = std::shared_ptr<CellInterface>(new Cell<long>(1212312344));
//
//    std::cout << row[0]->getLongVal()+ 500 << "\n";
//}