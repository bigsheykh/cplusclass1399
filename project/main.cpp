#include "data_receiver.h"
#include "file_type.h"
#include <iostream>
int main()
{
    //data_receiver as(8888) ;
    boost::filesystem::path pa=("/home/amirreza/Desktop/sajad_project/cplusclass1399/.git/logs/refs") ;
    boost::filesystem::path new_pa=("/home/amirreza/Desktop/sajad_project/cplusclass1399/project/biggy") ;

    std::string a=file_type::vector_of_files_to_string(
            file_type::files_of_a_path(
                boost::filesystem::path("/home/amirreza/Desktop/sajad_project/cplusclass1399/.git/logs/refs")
                )
            ) ;
    std::vector<file_type> b=file_type::string_to_vector_of_files(a) ;
    int c=0 ;/*
    for (file_type f:b)
    {
        std::cout<<c++<<":\n" ;
        std::cout<<f.get_path().string()<<"\n" ;
        std::cout<<f.get_data()<<"\n" ;
        std::cout<<f.get_size()<<"\n" ;
        
    }*/
    file_type::output_files(pa,new_pa,b) ;

}
