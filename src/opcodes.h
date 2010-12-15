/*
MMIX Emulator

Copyright (C) 2010 Jonathan Lamothe <jonathan@jlamothe.net>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or (at
your option) any later version.

This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see: http://www.gnu.org/licenses/
*/

#ifndef OPCODES_H
#define OPCODES_H

/**
   @brief MMIX opcodes.
 */
enum { opcode_trap, opcode_fcmp, opcode_fun, opcode_feql, opcode_fadd,
       opcode_fix, opcode_fsub, opcode_fixu, opcode_flot,
       opcode_floti, opcode_flotu, opcode_flotui, opcode_sflot,
       opcode_sfloti, opcode_sflotu, opcode_sflotui, opcode_fmul,
       opcode_fcmpe, opcode_fune, opcode_feqle, opcode_fdiv,
       opcode_fsqrt, opcode_frem, opcode_fint, opcode_mul,
       opcode_muli, opcode_mulu, opcode_mului, opcode_div,
       opcode_divi, opcode_divu, opcode_divui, opcode_add,
       opcode_addi, opcode_addu, opdode_addui, opcode_sub,
       opcode_subi, opcode_subu, opcode_subui, opcode_2addu,
       opcode_2addui, opcode_4addu, opcode_4addui, opcode_8addu,
       opcode_8addui, opcode_16addu, opcode_16addui, opcode_cmp,
       opcode_cmpi, opcode_cmpu, opcode_cmpui, opcode_neg,
       opcode_negi, opcode_negu, opcode_negui, opcode_sl, opcode_sli,
       opcode_slu, opcode_slui, opcode_sr, opcode_sri, opcode_sru,
       opcode_srui, opcode_bn, opcode_bnb, opcode_bz, opcode_bzb,
       opcode_bp, opcode_bpb, opcode_bod, opcode_bodb, opcode_bnn,
       opcode_bnnb, opcode_bnz, opcode_bnzb, opcode_bnp, opcode_bnpb,
       opcode_bev, opcode_bevb, opcode_pbn, opcode_pbnb, opcode_pbz,
       opcode_pbzb, opcode_pbp, opcode_pbpb, opcode_pbod,
       opcode_pbodb, opcode_pbnn, opcode_pbnnb, opcode_pbnz,
       opcode_pbnzb, opcode_pbnp, opcode_pbnpb, opcode_pbev,
       opcode_pbevb, opcode_csn, opcode_csni, opcode_csz, opcode_cszi,
       opcode_csp, opcode_cspi, opcode_csod, opcode_csodi,
       opcode_csnn, opcode_csnni, opcode_csnz, opcode_csnzi,
       opcode_csnp, opcode_csnpi, opcode_csev, opcode_csevi,
       opcode_zsn, opcode_zsni, opcode_zsz, opcode_zszi, opcode_zsp,
       opcode_zspi, opcode_zsod, opcode_zsodi, opcode_zsnn,
       opcode_zsnni, opcode_zsnz, opcode_zsnzi, opcode_zsnp,
       opcode_zsnpi, opcode_zsev, opcode_zsevi, opcode_ldb,
       opcode_ldbi, opcode_ldbu, opcode_ldbui, opcode_ldw,
       opcode_ldwi, opcode_ldwu, opcode_ldwui, opcode_ldt,
       opcode_ldti, opcode_ldtu, opcode_ldtui, opcode_ldo,
       opcode_ldoi, opcode_ldou, opcode_ldoui, opcode_ldsf,
       opcode_ldsfi, opcode_ldht, opcode_ldhti, opcode_cswap,
       opcode_cswapi, opcode_ldunc, opcode_ldunci, opcode_ldvts,
       opcode_ldvtsi, opcode_preld, opcode_preldi, opcode_prego,
       opcode_pregoi, opcode_go, opcode_goi, opcode_stb, opcode_stbi,
       opcode_stbu, opcode_stbui, opcode_stw, opcode_stwi,
       opcode_stwu, opcode_stwui, opcode_stt, opcode_stti,
       opcode_sttu, opcode_sttui, opcode_sto, opcode_stoi,
       opcode_stou, opcode_stoui, opcode_stsf, opcode_stsfi,
       opcode_stht, opcode_sthti, opcode_stco, opcode_stcoi,
       opcode_stunc, opcode_stunci, opcode_syncd, opcode_syncdi,
       opcode_prest, opcode_presti, opcode_syncid, opcode_syncidi,
       opcode_pushgo, opcode_pushgoi, opcode_or, opcode_ori,
       opcode_orn, opcode_orni, opcode_nor, opcode_nori, opcode_xor,
       opcode_xori, opcode_and, opcode_andi, opcode_andn,
       opcode_andni, opcode_nand, opcode_nandi, opcode_nxor,
       opcode_nxori, opcode_bdif, opcode_bdifi, opcode_wdif,
       opcode_wdifi, opcode_tdif, opcode_tdifi, opcode_odif,
       opcode_odifi, opcode_mux, opcode_muxi, opcode_sadd,
       opcode_saddi, opcode_mor, opcode_mori, opcode_mxor,
       opcode_mxori, opcode_seth, opcode_setmh, opcode_setml,
       opcode_setl, opcode_inch, opcode_incmh, opcode_incml,
       opcode_incl, opcode_orh, opcode_ormh, opcode_orml, opcode_orl,
       opcode_andnh, opcode_andnmh, opcode_andnml, opcode_andnl,
       opcode_jmp, opcode_jmpb, opcode_pushj, opcode_pushjb,
       opcode_geta, opcode_getab, opcode_put, opcode_puti, opcode_pop,
       opcode_resume, opcode_save, opcode_unsave, opcode_sync,
       opcode_swym, opcode_get, opcode_trip };

#endif	/* OPCODES_H */

/* jl */
