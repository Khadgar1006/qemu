/*
 * QEMU model of the XPIO_DCI_COMPONENT Describes DCI,Ofset registers
 *
 * Copyright (c) 2019 Xilinx Inc.
 *
 * Autogenerated by xregqemu.py 2019-02-05.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include "qemu/osdep.h"
#include "hw/sysbus.h"
#include "hw/register.h"
#include "qemu/bitops.h"
#include "qemu/log.h"

#ifndef XILINX_XPIO_DCI_COMPONENT_ERR_DEBUG
#define XILINX_XPIO_DCI_COMPONENT_ERR_DEBUG 0
#endif

#define TYPE_XILINX_XPIO_DCI_COMPONENT "xlnx.versal-xpio-dci"

#define XILINX_XPIO_DCI_COMPONENT(obj) \
     OBJECT_CHECK(XPIO_DCI_COMPONENT, (obj), TYPE_XILINX_XPIO_DCI_COMPONENT)

REG32(REG_PCSR_MASK, 0x0)
    FIELD(REG_PCSR_MASK, DCI_OFC_RST, 21, 1)
    FIELD(REG_PCSR_MASK, TEST_SAFE, 20, 1)
    FIELD(REG_PCSR_MASK, SLVERREN, 19, 1)
    FIELD(REG_PCSR_MASK, MEM_CLEAR_TRIGGER, 18, 1)
    FIELD(REG_PCSR_MASK, SYS_RST_MASK, 15, 3)
    FIELD(REG_PCSR_MASK, PWRDN, 14, 1)
    FIELD(REG_PCSR_MASK, DISNPICLK, 13, 1)
    FIELD(REG_PCSR_MASK, APBEN, 12, 1)
    FIELD(REG_PCSR_MASK, SCAN_CLEAR_TRIGGER, 11, 1)
    FIELD(REG_PCSR_MASK, STARTCAL, 10, 1)
    FIELD(REG_PCSR_MASK, FABRICEN, 9, 1)
    FIELD(REG_PCSR_MASK, TRISTATE, 8, 1)
    FIELD(REG_PCSR_MASK, HOLDSTATE, 7, 1)
    FIELD(REG_PCSR_MASK, INITSTATE, 6, 1)
    FIELD(REG_PCSR_MASK, ODISABLE, 2, 4)
    FIELD(REG_PCSR_MASK, GATEREG, 1, 1)
    FIELD(REG_PCSR_MASK, PCOMPLETE, 0, 1)
REG32(REG_PCSR_CONTROL, 0x4)
    FIELD(REG_PCSR_CONTROL, DCI_OFC_RST, 21, 1)
    FIELD(REG_PCSR_CONTROL, TEST_SAFE, 20, 1)
    FIELD(REG_PCSR_CONTROL, SLVERREN, 19, 1)
    FIELD(REG_PCSR_CONTROL, MEM_CLEAR_TRIGGER, 18, 1)
    FIELD(REG_PCSR_CONTROL, SYS_RST_MASK, 15, 3)
    FIELD(REG_PCSR_CONTROL, PWRDN, 14, 1)
    FIELD(REG_PCSR_CONTROL, DISNPICLK, 13, 1)
    FIELD(REG_PCSR_CONTROL, APBEN, 12, 1)
    FIELD(REG_PCSR_CONTROL, SCAN_CLEAR_TRIGGER, 11, 1)
    FIELD(REG_PCSR_CONTROL, STARTCAL, 10, 1)
    FIELD(REG_PCSR_CONTROL, FABRICEN, 9, 1)
    FIELD(REG_PCSR_CONTROL, TRISTATE, 8, 1)
    FIELD(REG_PCSR_CONTROL, HOLDSTATE, 7, 1)
    FIELD(REG_PCSR_CONTROL, INITSTATE, 6, 1)
    FIELD(REG_PCSR_CONTROL, ODISABLE, 2, 4)
    FIELD(REG_PCSR_CONTROL, GATEREG, 1, 1)
    FIELD(REG_PCSR_CONTROL, PCOMPLETE, 0, 1)
REG32(REG_PCSR_STATUS, 0x8)
    FIELD(REG_PCSR_STATUS, HARD_FAIL_OR, 11, 3)
    FIELD(REG_PCSR_STATUS, HARD_FAIL_AND, 8, 3)
    FIELD(REG_PCSR_STATUS, MEM_CLEAR_PASS, 7, 1)
    FIELD(REG_PCSR_STATUS, MEM_CLEAR_DONE, 6, 1)
    FIELD(REG_PCSR_STATUS, CALERROR, 5, 1)
    FIELD(REG_PCSR_STATUS, CALDONE, 4, 1)
    FIELD(REG_PCSR_STATUS, INCAL, 3, 1)
    FIELD(REG_PCSR_STATUS, SCAN_CLEAR_PASS, 2, 1)
    FIELD(REG_PCSR_STATUS, SCAN_CLEAR_DONE, 1, 1)
    FIELD(REG_PCSR_STATUS, PCSRLOCK, 0, 1)
REG32(REG_PCSR_LOCK, 0xc)
    FIELD(REG_PCSR_LOCK, STATE, 0, 1)
REG32(DCI_CFG_0, 0x24)
    FIELD(DCI_CFG_0, XMC_DCI_DEBUG_SEL_1, 12, 16)
    FIELD(DCI_CFG_0, XMC_UPDATE_CONTROL, 10, 2)
    FIELD(DCI_CFG_0, XMC_DCI_CASCADE_SEL, 8, 2)
    FIELD(DCI_CFG_0, XMC_DCI_FLTR_CTRL, 4, 4)
    FIELD(DCI_CFG_0, XMC_EN_OUT_FLTR, 3, 1)
    FIELD(DCI_CFG_0, XMC_WAIT_BYPASS, 2, 1)
    FIELD(DCI_CFG_0, XMC_TST_EN, 1, 1)
    FIELD(DCI_CFG_0, XMC_EN_DCI, 0, 1)
REG32(DCI_CFG_1, 0x28)
    FIELD(DCI_CFG_1, XMC_DCI_DEBUG_SEL_3, 16, 8)
    FIELD(DCI_CFG_1, XMC_DCI_DEBUG_SEL_2, 0, 16)
REG32(DCI_CFG_2, 0x2c)
    FIELD(DCI_CFG_2, XMC_CSSD_CTRL_2, 16, 16)
    FIELD(DCI_CFG_2, XMC_CSSD_CTRL_1, 0, 16)
REG32(DCI_CFG_3, 0x30)
    FIELD(DCI_CFG_3, XMC_DCI_REF_OPT, 0, 13)
REG32(DCI_CFG_4, 0x34)
    FIELD(DCI_CFG_4, XMC_DCI_SCL_CTRL_2, 16, 16)
    FIELD(DCI_CFG_4, XMC_DCI_SCL_CTRL_1, 0, 16)
REG32(DCI_CFG_5, 0x38)
    FIELD(DCI_CFG_5, XMC_DCI_SCL_CTRL_4, 16, 16)
    FIELD(DCI_CFG_5, XMC_DCI_SCL_CTRL_3, 0, 16)
REG32(DCI_CFG_6, 0x3c)
    FIELD(DCI_CFG_6, XMC_CSSD_CTRL_3, 0, 4)
REG32(DCI_CFG_7, 0x40)
    FIELD(DCI_CFG_7, XMC_DCI_SCL_CTRL_5, 0, 16)
REG32(DCI_CFG_8, 0x44)
    FIELD(DCI_CFG_8, XMC_DCI_SCL_CTRL_7, 16, 16)
    FIELD(DCI_CFG_8, XMC_DCI_SCL_CTRL_6, 0, 16)
REG32(DCI_CFG_9, 0x48)
    FIELD(DCI_CFG_9, MC_CSSD_TRIG_N, 31, 1)
    FIELD(DCI_CFG_9, MCI_DCI_LOCK_DIR_UPXDWN, 30, 1)
    FIELD(DCI_CFG_9, XMC_DCI_SCL_CTRL_8, 0, 30)
REG32(DCI_CFG_10, 0x4c)
REG32(DCI_CFG_11, 0x50)
REG32(DCI_CFG_12, 0x54)
    FIELD(DCI_CFG_12, EN_DCI, 17, 1)
    FIELD(DCI_CFG_12, XMC_DCI_SCL_CTRL_11, 1, 16)
    FIELD(DCI_CFG_12, BROADCAST_DISABLE, 0, 1)
REG32(DCI_CFG_13, 0x58)
    FIELD(DCI_CFG_13, CUR_ST_RD, 4, 7)
    FIELD(DCI_CFG_13, DCI_LOCK_DONE_DOWN, 2, 1)
    FIELD(DCI_CFG_13, DCI_LOCK_DONE_UP, 1, 1)
    FIELD(DCI_CFG_13, DCI_LOCK, 0, 1)
REG32(DCI_CFG_14, 0x5c)
    FIELD(DCI_CFG_14, DCI_ZBUS, 0, 18)
REG32(DCI_CFG_15, 0x60)
    FIELD(DCI_CFG_15, MC_RTRIM_BUS, 0, 31)
REG32(OFC_CFG_0, 0x64)
REG32(OFC_CFG_1, 0x68)
REG32(OFC_CFG_2, 0x6c)
REG32(OFC_CFG_3, 0x70)
    FIELD(OFC_CFG_3, OFC_REG_BUS_3, 0, 12)
REG32(OFC_CFG_4, 0x74)
REG32(OFC_CFG_5, 0x78)
REG32(OFC_CFG_6, 0x7c)
    FIELD(OFC_CFG_6, MC_VRDMY_CODE, 0, 21)

#define XPIO_DCI_COMPONENT_R_MAX (R_OFC_CFG_6 + 1)

typedef struct XPIO_DCI_COMPONENT {
    SysBusDevice parent_obj;
    MemoryRegion iomem;

    uint32_t regs[XPIO_DCI_COMPONENT_R_MAX];
    RegisterInfo regs_info[XPIO_DCI_COMPONENT_R_MAX];
} XPIO_DCI_COMPONENT;

#define LOCK_VAL 0xF9E8D7C6

static void xpio_dci_lock_postw(RegisterInfo *reg, uint64_t val64)
{
    XPIO_DCI_COMPONENT *s = XILINX_XPIO_DCI_COMPONENT(reg->opaque);
    bool locked = val64 != LOCK_VAL;

    ARRAY_FIELD_DP32(s->regs, REG_PCSR_STATUS, PCSRLOCK, locked);
    ARRAY_FIELD_DP32(s->regs, REG_PCSR_LOCK, STATE, locked);
}

static const RegisterAccessInfo xpio_dci_component_regs_info[] = {
    {   .name = "REG_PCSR_MASK",  .addr = A_REG_PCSR_MASK,
        .reset = 0x200000,
        .rsvd = 0xffc00000,
    },{ .name = "REG_PCSR_CONTROL",  .addr = A_REG_PCSR_CONTROL,
        .reset = 0x2001fe,
        .rsvd = 0xffc00000,
    },{ .name = "REG_PCSR_STATUS",  .addr = A_REG_PCSR_STATUS,
        .reset = R_REG_PCSR_STATUS_PCSRLOCK_MASK \
                 | R_REG_PCSR_STATUS_MEM_CLEAR_PASS_MASK \
                 | R_REG_PCSR_STATUS_MEM_CLEAR_DONE_MASK \
                 | R_REG_PCSR_STATUS_CALDONE_MASK \
                 | R_REG_PCSR_STATUS_SCAN_CLEAR_PASS_MASK \
                 | R_REG_PCSR_STATUS_SCAN_CLEAR_DONE_MASK,
        .rsvd = 0xffffc000,
        .ro = 0x3fff,
    },{ .name = "REG_PCSR_LOCK",  .addr = A_REG_PCSR_LOCK,
        .reset = 0x1,
        .post_write = xpio_dci_lock_postw
    },{ .name = "DCI_CFG_0",  .addr = A_DCI_CFG_0,
        .rsvd = 0xf0000000,
    },{ .name = "DCI_CFG_1",  .addr = A_DCI_CFG_1,
        .rsvd = 0xff000000,
    },{ .name = "DCI_CFG_2",  .addr = A_DCI_CFG_2,
    },{ .name = "DCI_CFG_3",  .addr = A_DCI_CFG_3,
        .rsvd = 0xffffe000,
    },{ .name = "DCI_CFG_4",  .addr = A_DCI_CFG_4,
    },{ .name = "DCI_CFG_5",  .addr = A_DCI_CFG_5,
    },{ .name = "DCI_CFG_6",  .addr = A_DCI_CFG_6,
        .rsvd = 0xfffffff0,
    },{ .name = "DCI_CFG_7",  .addr = A_DCI_CFG_7,
        .rsvd = 0xffff0000,
    },{ .name = "DCI_CFG_8",  .addr = A_DCI_CFG_8,
    },{ .name = "DCI_CFG_9",  .addr = A_DCI_CFG_9,
    },{ .name = "DCI_CFG_10",  .addr = A_DCI_CFG_10,
    },{ .name = "DCI_CFG_11",  .addr = A_DCI_CFG_11,
    },{ .name = "DCI_CFG_12",  .addr = A_DCI_CFG_12,
        .rsvd = 0xfffc0000,
    },{ .name = "DCI_CFG_13",  .addr = A_DCI_CFG_13,
        .reset = 0x6,
        .rsvd = 0xfffff800,
        .ro = 0x7f7,
    },{ .name = "DCI_CFG_14",  .addr = A_DCI_CFG_14,
        .rsvd = 0xfffc0000,
        .ro = 0x3ffff,
    },{ .name = "DCI_CFG_15",  .addr = A_DCI_CFG_15,
        .rsvd = 0x80000000,
    },{ .name = "OFC_CFG_0",  .addr = A_OFC_CFG_0,
    },{ .name = "OFC_CFG_1",  .addr = A_OFC_CFG_1,
    },{ .name = "OFC_CFG_2",  .addr = A_OFC_CFG_2,
    },{ .name = "OFC_CFG_3",  .addr = A_OFC_CFG_3,
        .rsvd = 0xfffff000,
    },{ .name = "OFC_CFG_4",  .addr = A_OFC_CFG_4,
    },{ .name = "OFC_CFG_5",  .addr = A_OFC_CFG_5,
    },{ .name = "OFC_CFG_6",  .addr = A_OFC_CFG_6,
        .rsvd = 0xffe00000,
    }
};

static void xpio_dci_component_reset(DeviceState *dev)
{
    XPIO_DCI_COMPONENT *s = XILINX_XPIO_DCI_COMPONENT(dev);
    unsigned int i;

    for (i = 0; i < ARRAY_SIZE(s->regs_info); ++i) {
        register_reset(&s->regs_info[i]);
    }
}

static MemTxResult reg_write(void *opaque, hwaddr addr,
                             uint64_t data, unsigned size, MemTxAttrs attrs)
{
    RegisterInfoArray *reg_array = opaque;
    XPIO_DCI_COMPONENT *s = XILINX_XPIO_DCI_COMPONENT(reg_array->r[0]->opaque);

    /* Is the register set Locked?  */
    if (ARRAY_FIELD_EX32(s->regs, REG_PCSR_LOCK, STATE)
        && addr != A_REG_PCSR_LOCK) {
        return MEMTX_ERROR;
    }

    register_write_memory(opaque, addr, data, size);
    return MEMTX_OK;
}

static const MemoryRegionOps xpio_dci_component_ops = {
    .read = register_read_memory,
    .write_with_attrs = reg_write,
    .endianness = DEVICE_LITTLE_ENDIAN,
    .valid = {
        .min_access_size = 4,
        .max_access_size = 4,
    },
};

static void xpio_dci_component_realize(DeviceState *dev, Error **errp)
{
    /* Delete this if you don't need it */
}

static void xpio_dci_component_init(Object *obj)
{
    XPIO_DCI_COMPONENT *s = XILINX_XPIO_DCI_COMPONENT(obj);
    SysBusDevice *sbd = SYS_BUS_DEVICE(obj);
    RegisterInfoArray *reg_array;

    memory_region_init(&s->iomem, obj, TYPE_XILINX_XPIO_DCI_COMPONENT,
                       XPIO_DCI_COMPONENT_R_MAX * 4);
    reg_array =
        register_init_block32(DEVICE(obj), xpio_dci_component_regs_info,
                              ARRAY_SIZE(xpio_dci_component_regs_info),
                              s->regs_info, s->regs,
                              &xpio_dci_component_ops,
                              XILINX_XPIO_DCI_COMPONENT_ERR_DEBUG,
                              XPIO_DCI_COMPONENT_R_MAX * 4);
    memory_region_add_subregion(&s->iomem,
                                0x0,
                                &reg_array->mem);
    sysbus_init_mmio(sbd, &s->iomem);
}

static const VMStateDescription vmstate_xpio_dci_component = {
    .name = TYPE_XILINX_XPIO_DCI_COMPONENT,
    .version_id = 1,
    .minimum_version_id = 1,
    .fields = (VMStateField[]) {
        VMSTATE_UINT32_ARRAY(regs, XPIO_DCI_COMPONENT,
                             XPIO_DCI_COMPONENT_R_MAX),
        VMSTATE_END_OF_LIST(),
    }
};

static void xpio_dci_component_class_init(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);

    dc->reset = xpio_dci_component_reset;
    dc->realize = xpio_dci_component_realize;
    dc->vmsd = &vmstate_xpio_dci_component;
}

static const TypeInfo xpio_dci_component_info = {
    .name          = TYPE_XILINX_XPIO_DCI_COMPONENT,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(XPIO_DCI_COMPONENT),
    .class_init    = xpio_dci_component_class_init,
    .instance_init = xpio_dci_component_init,
};

static void xpio_dci_component_register_types(void)
{
    type_register_static(&xpio_dci_component_info);
}

type_init(xpio_dci_component_register_types)