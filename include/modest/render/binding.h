/*
 Copyright (C) 2016 Alexander Borisov
 
 This library is free software; you can redistribute it and/or
 modify it under the terms of the GNU Lesser General Public
 License as published by the Free Software Foundation; either
 version 2.1 of the License, or (at your option) any later version.
 
 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 Lesser General Public License for more details.
 
 You should have received a copy of the GNU Lesser General Public
 License along with this library; if not, write to the Free Software
 Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 
 Author: lex.borisov@gmail.com (Alexander Borisov)
*/

#ifndef MODEST_RENDER_BINDING_H
#define MODEST_RENDER_BINDING_H
#pragma once

#include "modest/myosi.h"
#include "modest/modest.h"
#include "modest/node/node.h"
#include "modest/render/tree.h"
#include "modest/render/tree_node.h"
#include "modest/declaration.h"

#include "myhtml/tree.h"

#ifdef __cplusplus
extern "C" {
#endif

modest_render_tree_node_t * modest_render_binding(modest_t* modest, modest_render_tree_t* render_tree, myhtml_tree_t* html_tree);
modest_render_tree_node_t * modest_layer_binding_node(modest_t* modest, modest_render_tree_t* render_tree,
                                                      modest_render_tree_node_t* render_root, myhtml_tree_node_t* html_node);
    
#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* MODEST_RENDER_BINDING_H */
