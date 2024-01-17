/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ***REMOVED*** <***REMOVED***@student.***REMOVED***.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 19:30:16 by ***REMOVED***             #+#    #+#             */
/*   Updated: 2024/01/17 13:22:32 by ***REMOVED***            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

bool    check_if_valid(int argc)
{
    if (argc != 4)
        return (false);
    return (true);
}

int main(int argc, char **argv)
{
    if (!check_if_valid(argc))
    {
        std::cerr << "Invalid input. Try again!" << std::endl;
        return (1);
    }
    Sed sed_obj(argv[1]);
    sed_obj.replace_and_export(argv[2], argv[3]);
    return (0);
}
