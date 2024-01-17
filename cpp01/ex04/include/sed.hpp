/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbock <fbock@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:40:01 by fbock             #+#    #+#             */
/*   Updated: 2024/01/17 13:37:16 by fbock            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <fstream>
#include <iostream>
#include <stdexcept>

class Sed
{
	public:
		Sed(std::string filename);
		~Sed(void);
		void			replace_and_export(std::string s1, std::string s2);
	private:
		std::ifstream 	_in_fs;
    	std::ofstream 	_out_fs;
		bool			_invalid_ip;
		void			_close_fs(void);
		bool			_open_files(std::string filename);
};
