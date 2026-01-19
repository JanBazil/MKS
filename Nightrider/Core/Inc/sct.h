/*
 * sct.h
 *
 *  Created on: Oct 8, 2025
 *      Author: 268094
 */

#ifndef SRC_SCT_H_
#define SRC_SCT_H_

#include "main.h"

typedef enum
{
    SCT_DIR_CW = 0,
    SCT_DIR_CCW
} sct_dir_t;

/* Public functions */
void SCT_SpinStep(sct_dir_t dir);
void sct_init(void);

#endif /* SRC_SCT_H_ */
