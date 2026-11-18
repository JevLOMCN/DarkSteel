// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FEtcParametersUniformBuffer @ 1458cb660

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FEtcParametersUniformBuffer * __thiscall
RuntimeVirtualTexture::FEtcParametersUniformBuffer::FEtcParametersUniformBuffer
          (FEtcParametersUniformBuffer *this)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  FRenderResource::FRenderResource((FRenderResource *)this);
  *(undefined4 *)&this->field_0x20 = 2;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined ***)this = &___7FEtcParametersUniformBuffer_RuntimeVirtualTexture__6B_;
  lVar3 = 0x10;
  *(undefined8 *)&this->field_0x30 = 0;
  puVar2 = &uStack_190;
  do {
    puVar2[-1] = 0;
    *(undefined4 *)puVar2 = 0;
    *(undefined4 *)((longlong)puVar2 + 4) = 0x3f800000;
    puVar2 = puVar2 + 2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  local_198 = ___xmm_416000004100000040a0000040000000;
  uStack_190 = _UNK_15104e5d8;
  local_188 = ___xmm_414000004110000040c0000040000000;
  uStack_180 = _UNK_15104e5c8;
  local_178 = ___xmm_4140000040e00000408000003f800000;
  uStack_170 = _UNK_15104e5b8;
  local_168 = ___xmm_4140000040a00000404000003f800000;
  uStack_160 = _UNK_15104e5a8;
  local_158 = ___xmm_4130000040e0000040a0000040000000;
  uStack_150 = _UNK_15104e598;
  local_148 = ___xmm_412000004100000040c0000040000000;
  uStack_140 = _UNK_15104e588;
  local_138 = ___xmm_4120000040e0000040c0000040400000;
  uStack_130 = _UNK_15104e578;
  local_128 = ___xmm_4120000040e000004080000040000000;
  uStack_120 = _UNK_15104e568;
  local_118 = ___xmm_4110000040e0000040a000003f800000;
  uStack_110 = _UNK_15104e558;
  local_108 = ___xmm_4110000040e00000408000003f800000;
  uStack_100 = _UNK_15104e548;
  local_f8 = ___xmm_4110000040e00000404000003f800000;
  uStack_f0 = _UNK_15104e538;
  local_e8 = ___xmm_4110000040c00000408000003f800000;
  uStack_e0 = _UNK_15104e528;
  local_d8 = ___xmm_4110000040c000004040000040000000;
  uStack_d0 = _UNK_15104e518;
  local_c8 = ___xmm_41100000400000003f80000000000000;
  uStack_c0 = _UNK_15104e508;
  local_b8 = ___xmm_4100000040e0000040a0000040400000;
  uStack_b0 = _UNK_15104e4f8;
  local_a8 = ___xmm_4100000040c000004080000040000000;
  uStack_a0 = _UNK_15076c178;
  local_98 = ___xmm_4100000040000000c0000000c1000000;
  uStack_90 = _UNK_15104e4e8;
  local_88 = ___xmm_4188000040a00000c0a00000c1880000;
  uStack_80 = _UNK_15104e5e8;
  local_78 = ___xmm_41e8000041100000c1100000c1e80000;
  uStack_70 = _UNK_15104e5f8;
  local_68 = ___xmm_4228000041500000c1500000c2280000;
  uStack_60 = _UNK_15104e608;
  local_58 = ___xmm_4270000041900000c1900000c2700000;
  uStack_50 = _UNK_15104e618;
  local_48 = ___xmm_42a0000041c00000c1c00000c2a00000;
  uStack_40 = _UNK_15104e628;
  local_38 = ___xmm_42d4000042040000c2040000c2d40000;
  uStack_30 = _UNK_15104e638;
  local_28 = ___xmm_43370000423c0000c23c0000c3370000;
  uStack_20 = _UNK_15104e648;
  puVar2 = FMemory::Malloc(0x180,0x10);
  *(undefined8 **)&this->field_0x30 = puVar2;
  lVar3 = 3;
  puVar4 = &local_198;
  do {
    uVar1 = puVar4[1];
    *puVar2 = *puVar4;
    puVar2[1] = uVar1;
    uVar1 = puVar4[3];
    puVar2[2] = puVar4[2];
    puVar2[3] = uVar1;
    uVar1 = puVar4[5];
    puVar2[4] = puVar4[4];
    puVar2[5] = uVar1;
    uVar1 = puVar4[7];
    puVar2[6] = puVar4[6];
    puVar2[7] = uVar1;
    uVar1 = puVar4[9];
    puVar2[8] = puVar4[8];
    puVar2[9] = uVar1;
    uVar1 = puVar4[0xb];
    puVar2[10] = puVar4[10];
    puVar2[0xb] = uVar1;
    uVar1 = puVar4[0xd];
    puVar2[0xc] = puVar4[0xc];
    puVar2[0xd] = uVar1;
    uVar1 = puVar4[0xf];
    puVar2[0xe] = puVar4[0xe];
    puVar2[0xf] = uVar1;
    lVar3 = lVar3 + -1;
    puVar2 = puVar2 + 0x10;
    puVar4 = puVar4 + 0x10;
  } while (lVar3 != 0);
  return this;
}

