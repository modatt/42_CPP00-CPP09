/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/27 19:13:55 by modat             #+#    #+#             */
/*   Updated: 2025/12/27 19:13:55 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>


std::string     ft_replace(std::string line, const std::string& s1, const std::string &s2)
{
    if (s1.empty())
        return line;
    
    std::string res;
    size_t  pos = 0;
    size_t foundPos;

    while ((foundPos = line.find(s1, pos)) != std::string::npos)
    {
        res += line.substr(pos, foundPos - pos);
        res += s2;
        pos = foundPos + s1.length();
    }
    res += line.substr(pos);
    return res;
}

int     main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "Error: Enter 3 args only.\n";
        return 1;
    }
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    
    // infile
    std::ifstream fi(filename.c_str());
    if (!fi.is_open())
    {
        std::cerr << "Error: Could not open input file." << std::endl;
        return 1;
    }
    // outfile
    std::ofstream fo((filename + ".replace").c_str());
    if (!fo.is_open())
    {
        std::cerr << "Error: Could not open output file." << std::endl;
        return 1;   
    }
    // process line by line
    std::string line;
    while (std::getline(fi, line))
    {
        // fo << //logic of manual replace
        fo << ft_replace(line, av[2], av[3]);
        if (!fi.eof())
            fo << std::endl;
    }
    // close files
    fi.close();
    fo.close();
    return 0;
}