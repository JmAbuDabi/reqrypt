/*
 * aes.h
 * (C) 2017, all rights reserved,
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __AES_H
#define __AES_H

#define AES_ROUNDS      10

extern void aes_expandkey(const uint8_t *key, size_t keysize, uint8_t *ekey);
extern void aes_encrypt(const uint8_t *v, const uint32_t *rk, uint8_t *o);

#endif      /* __AES_H */
