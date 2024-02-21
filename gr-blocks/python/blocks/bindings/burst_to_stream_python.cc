/*
 * Copyright 2024 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(burst_to_stream.h)                                         */
/* BINDTOOL_HEADER_FILE_HASH(ff147894d6c6b1801b1222d98cbfb7ac)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/blocks/burst_to_stream.h>
// pydoc.h is automatically generated in the build directory
#include <burst_to_stream_pydoc.h>

void bind_burst_to_stream(py::module& m)
{

    using burst_to_stream = ::gr::blocks::burst_to_stream;


    py::class_<burst_to_stream,
               gr::block,
               gr::basic_block,
               std::shared_ptr<burst_to_stream>>(m, "burst_to_stream", D(burst_to_stream))

        .def(py::init(&burst_to_stream::make),
             py::arg("itemsize"),
             py::arg("len_tag_key") = "packet_len",
             py::arg("propagate_tags") = false,
             D(burst_to_stream, make))


        ;
}