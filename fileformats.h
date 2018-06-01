#ifndef FILEFORMATS_H
#define FILEFORMATS_H

#include <vector>

namespace convraw {

void writeCSV(char *csv_file,  std::vector< std::vector<double> > &sim_points,
              std::vector<std::string> &var_list, bool isComplex);
std::string to_string_with_precision(const double a_value, const int n = 9);
}


#endif // FILEFORMATS_H
