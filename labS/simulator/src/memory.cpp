/*
 * @Author       : Chivier Humber
 * @Date         : 2021-09-15 21:15:24
 * @LastEditors  : Chivier Humber
 * @LastEditTime : 2021-11-23 16:08:51
 * @Description  : file content
 */
#include "common.h"
#include "memory.h"

namespace virtual_machine_nsp {
    void memory_tp::ReadMemoryFromFile(std::string filename, int beginning_address) {
        // Read from the file
        if (filename.find(".obj") != filename.npos) {
            std::ifstream input(filename, std::ios::binary | std::ios::in);
            while (!input.eof()) {
                input.read((char*)(memory + (beginning_address++)), sizeof(int16_t));
                if (beginning_address > kVirtualMachineMemorySize) return;
            }
        }
        else {
            std::ifstream input(filename);
            int cnt = 0;
            char c;
            int16_t current = 0, current_cnt = 0;
            while (!input.eof()) {
                c = input.get();
                if (c == '0' || c == '1') {
                    ++current_cnt;
                    current = (current << 1) | (c - '0');
                }
                if (current_cnt == 16) {
                    current_cnt = 0;
                    memory[beginning_address++] = current;
                    if (beginning_address > kVirtualMachineMemorySize) return;
                }
            }
        }
    }

    int16_t memory_tp::GetContent(int address) const {
        // get the content
        return memory[address];
    }

    int16_t& memory_tp::operator[](int address) {
        // get the content
        return memory[address];
    }    
}; // virtual machine namespace
