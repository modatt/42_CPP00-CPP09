/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modat <modat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 14:06:41 by modat             #+#    #+#             */
/*   Updated: 2025/12/26 15:15:32 by modat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

// func - 0 // static variables
// Initialize static members
// statics are handle the same regardless private/public
int     Account::_nbAccounts = 0;
int	    Account::_totalAmount = 0;
int	    Account::_totalNbDeposits = 0;
int     Account::_totalNbWithdrawals = 0;

// static functions
// st_func - 1
int 	Account::getNbAccounts( void )
{
    return _nbAccounts;
}

// st_func - 2
int	    Account::getTotalAmount( void )
{
    return _totalAmount;
}

// st_func - 3
int	    Account::getNbDeposits( void )
{
    return _totalNbDeposits;
}

// st_func - 4
int	    Account::getNbWithdrawals( void )
{
    return _totalNbWithdrawals;
}

// st_func - 5
void    Account::_displayTimestamp(void)
{
    // 1. get raw time.
    std::time_t currentTime = std::time(NULL); // get raw time
    // 2. convert to human time
    std::tm* tm = std::localtime(&currentTime); // tm* tm structure holds time (yy/mm/dd/hh,mm,ss)
    // 3. turn those numbers to string "formating into str".
    char buffer[20];
    std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", tm);
    // 4. print it.
    std::cout << buffer;
}

// st_func - 6
void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";"
                << "total:" << getTotalAmount() << ";"
                << "deposits:" << getNbDeposits() << ";"
                << "withdrawals:" << getNbWithdrawals() << std::endl;
}


// Constructor
Account::Account(int    initial_deposit)
{
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _nbAccounts++;
    _totalAmount += initial_deposit;

    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

// Destructor
Account::~Account(void)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed\n";
}


// func - 1
void    Account::makeDeposit(int deposit)
{
    int     p_amount = _amount;

    _amount += deposit;
    _nbDeposits++;
    _totalAmount += deposit;
    _totalNbDeposits++;

    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
                << "p_amount:" << p_amount << ";"
                << "deposit:" << deposit << ";"
                << "amount:" << _amount << ";"
                << "nb_deposits:" << _nbDeposits << std::endl;
}

// func - 2
bool    Account::makeWithdrawal(int withdrawal) 
{
    int     p_amount = _amount;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
                << "p_amount:"  << p_amount << ";";
    if (_amount < withdrawal)
    {
        std::cout << "withdrawal:refused" << std::endl;
        return false;
    }

    _amount -= withdrawal;
    _nbWithdrawals++;

    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;

    std::cout << "withdrawal:" << withdrawal << ";"
                << "amount:" << _amount << ";"
                << "nb_withdrawals:" << _nbWithdrawals << std::endl;
    return true;
}

// func - 3
int     Account::checkAmount(void) const
{
    return _amount;
}

// func - 4
void    Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
                << "amount:" << _amount << ";"
                << "deposits:"  << _nbDeposits << ";"
                << "withdrawals:" << _nbWithdrawals << std::endl;
}
