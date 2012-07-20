/*!The Treasure Box Library
 * 
 * TBox is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 * 
 * TBox is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with TBox; 
 * If not, see <a href="http://www.gnu.org/licenses/"> http://www.gnu.org/licenses/</a>
 * 
 * Copyright (C) 2009 - 2012, ruki All rights reserved.
 *
 * @author		ruki
 * @file		find.h
 *
 */
#ifndef TB_ALGORITHM_FIND_H
#define TB_ALGORITHM_FIND_H

/* ///////////////////////////////////////////////////////////////////////
 * includes
 */
#include "prefix.h"
#include "iterator.h"

/* ///////////////////////////////////////////////////////////////////////
 * interfaces
 */

/// the adaptive finder
tb_size_t tb_find(tb_iterator_t* iterator, tb_size_t head, tb_size_t tail, tb_iterator_comp_t comp);

/// the order finder
tb_size_t tb_order_find(tb_iterator_t* iterator, tb_size_t head, tb_size_t tail, tb_iterator_comp_t comp);

/// the binary finder
tb_size_t tb_binary_find(tb_iterator_t* iterator, tb_size_t head, tb_size_t tail, tb_iterator_comp_t comp);


#endif