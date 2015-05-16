//
//  report_rust.h
//  lemon
//
//  Created by Martin Mroz on 5/10/15.
//  Copyright (c) 2015 Martin Mroz. All rights reserved.
//

#ifndef __lemon_report_rust__
#define __lemon_report_rust__

#include "lemon.h"

/**
 * Emits the major token type declaration to the output file in Rust.
 * @param inputFilename The name of the Lemon input file.
 * @param inputLineno The line number within the Lemon file corresponding to the token major declaration.
 * @param lineno The current line number within the output Rust file.
 * @param fp The output file to write the declaration into.
 * @param tokenType The literal name of the major token (in Rust).
 * @return The new line number within the output file (lineno + number of lines written to the output file).
 */
int ReportRustWriteTokenMajorDeclaration(char *const inputFilename, int inputLineno, int lineno, FILE* fp, char* const tokenType);

/**
 * Emits the minor token type declaration to the output file in Rust.
 * @param inputFilename The name of the Lemon input file.
 * @param inputLineno The line number within the Lemon file corresponding to the token minor declaration.
 * @param lineno The current line number within the output Rust file.
 * @param fp The output file to write the declaration into.
 * @param types The array of data types to include within the minor token union.
 * @param typeCount The number of types.
 * @param hasErrorSymbol Indication (0 or 1) that the grammar includes an error symbol.
 * @param errorDataTypeNumber Index into `types` corresponding to the data type of the error symbol.
 * @return The new line number within the output file (lineno + number of lines written to the output file).
 */
int ReportRustWriteTokenMinorDeclaration(char *const inputFilename, int inputLineno, int lineno, FILE* fp, char* const* types, int typeCount, int hasErrorSymbol, int errorDataTypeNumber);

#endif /* defined(__lemon_report_rust__) */
