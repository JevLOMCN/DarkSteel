// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// Finalize @ 1416ee340

FXxHash64 __thiscall FXxHash64Builder::Finalize(FXxHash64Builder *this)

{
  ulong64 uVar1;
  ulong64 *in_RDX;
  
  uVar1 = XXH_INLINE_XXH3_64bits_digest((XXH_INLINE_XXH3_state_s *)this);
  *in_RDX = uVar1;
  return (FXxHash64)(ulong64)in_RDX;
}

// Reset @ 14170db80

void __thiscall FXxHash64Builder::Reset(FXxHash64Builder *this)

{
  if (this != (FXxHash64Builder *)0x0) {
    this->StateBytes[0x200] = '\0';
    this->StateBytes[0x201] = '\0';
    this->StateBytes[0x202] = '\0';
    this->StateBytes[0x203] = '\0';
    this->StateBytes[0x204] = '\0';
    this->StateBytes[0x205] = '\0';
    this->StateBytes[0x206] = '\0';
    this->StateBytes[0x207] = '\0';
    this->StateBytes[0x208] = '\0';
    this->StateBytes[0x209] = '\0';
    this->StateBytes[0x20a] = '\0';
    this->StateBytes[0x20b] = '\0';
    this->StateBytes[0x20c] = '\0';
    this->StateBytes[0x20d] = '\0';
    this->StateBytes[0x20e] = '\0';
    this->StateBytes[0x20f] = '\0';
    this->StateBytes[0x210] = '\0';
    this->StateBytes[0x211] = '\0';
    this->StateBytes[0x212] = '\0';
    this->StateBytes[0x213] = '\0';
    this->StateBytes[0x214] = '\0';
    this->StateBytes[0x215] = '\0';
    this->StateBytes[0x216] = '\0';
    this->StateBytes[0x217] = '\0';
    this->StateBytes[0] = '=';
    this->StateBytes[1] = -0x52;
    this->StateBytes[2] = -0x4e;
    this->StateBytes[3] = -0x3e;
    this->StateBytes[4] = '\0';
    this->StateBytes[5] = '\0';
    this->StateBytes[6] = '\0';
    this->StateBytes[7] = '\0';
    this->StateBytes[8] = -0x79;
    this->StateBytes[9] = -0x36;
    this->StateBytes[10] = -0x15;
    this->StateBytes[0xb] = -0x7b;
    this->StateBytes[0xc] = -0x4f;
    this->StateBytes[0xd] = 'y';
    this->StateBytes[0xe] = '7';
    this->StateBytes[0xf] = -0x62;
    this->StateBytes[0x10] = 'O';
    this->StateBytes[0x11] = -0x15;
    this->StateBytes[0x12] = -0x2c;
    this->StateBytes[0x13] = '\'';
    this->StateBytes[0x14] = '=';
    this->StateBytes[0x15] = -0x52;
    this->StateBytes[0x16] = -0x4e;
    this->StateBytes[0x17] = -0x3e;
    this->StateBytes[0x18] = -7;
    this->StateBytes[0x19] = 'y';
    this->StateBytes[0x1a] = '7';
    this->StateBytes[0x1b] = -0x62;
    this->StateBytes[0x1c] = -0x4f;
    this->StateBytes[0x1d] = 'g';
    this->StateBytes[0x1e] = 'V';
    this->StateBytes[0x1f] = '\x16';
    this->StateBytes[0x20] = 'c';
    this->StateBytes[0x21] = -0x52;
    this->StateBytes[0x22] = -0x4e;
    this->StateBytes[0x23] = -0x3e;
    this->StateBytes[0x24] = 'w';
    this->StateBytes[0x25] = -0x36;
    this->StateBytes[0x26] = -0x15;
    this->StateBytes[0x27] = -0x7b;
    this->StateBytes[0x28] = 'w';
    this->StateBytes[0x29] = -0x36;
    this->StateBytes[0x2a] = -0x15;
    this->StateBytes[0x2b] = -0x7b;
    this->StateBytes[0x2c] = '\0';
    this->StateBytes[0x2d] = '\0';
    this->StateBytes[0x2e] = '\0';
    this->StateBytes[0x2f] = '\0';
    this->StateBytes[0x30] = -0x3b;
    this->StateBytes[0x31] = 'g';
    this->StateBytes[0x32] = 'V';
    this->StateBytes[0x33] = '\x16';
    this->StateBytes[0x34] = '/';
    this->StateBytes[0x35] = -0x15;
    this->StateBytes[0x36] = -0x2c;
    this->StateBytes[0x37] = '\'';
    this->StateBytes[0x38] = -0x4f;
    this->StateBytes[0x39] = 'y';
    this->StateBytes[0x3a] = '7';
    this->StateBytes[0x3b] = -0x62;
    this->StateBytes[0x3c] = '\0';
    this->StateBytes[0x3d] = '\0';
    this->StateBytes[0x3e] = '\0';
    this->StateBytes[0x3f] = '\0';
    *(uchar **)(this->StateBytes + 0x238) = XXH3_kSecret;
    this->StateBytes[0x228] = '\0';
    this->StateBytes[0x229] = '\0';
    this->StateBytes[0x22a] = '\0';
    this->StateBytes[0x22b] = '\0';
    this->StateBytes[0x22c] = '\0';
    this->StateBytes[0x22d] = '\0';
    this->StateBytes[0x22e] = '\0';
    this->StateBytes[0x22f] = '\0';
    this->StateBytes[0x220] = -0x80;
    this->StateBytes[0x221] = '\0';
    this->StateBytes[0x222] = '\0';
    this->StateBytes[0x223] = '\0';
    this->StateBytes[0x224] = '\0';
    this->StateBytes[0x225] = '\0';
    this->StateBytes[0x226] = '\0';
    this->StateBytes[0x227] = '\0';
    this->StateBytes[0x218] = '\x10';
    this->StateBytes[0x219] = '\0';
    this->StateBytes[0x21a] = '\0';
    this->StateBytes[0x21b] = '\0';
    this->StateBytes[0x21c] = '\0';
    this->StateBytes[0x21d] = '\0';
    this->StateBytes[0x21e] = '\0';
    this->StateBytes[0x21f] = '\0';
  }
  return;
}

// Update @ 141719a00

void __thiscall FXxHash64Builder::Update(FXxHash64Builder *this,FCompositeBuffer *param_1)

{
  int iVar1;
  ForElementType<FSharedBuffer> FVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  void *pvVar6;
  ulong64 uVar7;
  
  FVar2 = (param_1->Segments).AllocatorInstance.SecondaryData;
  iVar1 = (param_1->Segments).ArrayNum;
  if (FVar2 != (ForElementType<FSharedBuffer>)0x0) {
    param_1 = (FCompositeBuffer *)FVar2;
  }
  if ((iVar1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar2 = (ForElementType<FSharedBuffer>)((longlong)param_1 + (longlong)iVar1 * 8);
  for (; (ForElementType<FSharedBuffer>)param_1 != FVar2;
      param_1 = (FCompositeBuffer *)((longlong)param_1 + 8)) {
    plVar3 = *(longlong **)param_1;
    if (plVar3 == (longlong *)0x0) {
      uVar7 = 0;
    }
    else {
      if (((ulonglong)plVar3[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      uVar7 = plVar3[2];
    }
    plVar3 = *(longlong **)param_1;
    if (plVar3 == (longlong *)0x0) {
      pvVar6 = (void *)0x0;
    }
    else {
      if (((ulonglong)plVar3[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      pvVar6 = (void *)plVar3[1];
    }
    XXH_INLINE_XXH3_64bits_update((XXH_INLINE_XXH3_state_s *)this,pvVar6,uVar7);
  }
  return;
}

// Update @ 141719af0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FXxHash64Builder::Update(FXxHash64Builder *this,void *param_1,ulong64 param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  undefined1 (*pauVar9) [16];
  char *pcVar10;
  ulonglong uVar11;
  longlong lVar12;
  void *pvVar13;
  ulonglong uVar14;
  longlong lVar15;
  char *pcVar16;
  uint uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  uint uVar42;
  uint uVar59;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  longlong lVar79;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  longlong lVar83;
  undefined1 auVar82 [16];
  longlong lVar84;
  undefined1 auVar85 [16];
  longlong lVar87;
  undefined1 auVar86 [16];
  longlong lVar88;
  undefined1 auVar89 [16];
  longlong lVar91;
  undefined1 auVar90 [16];
  longlong lVar92;
  undefined1 auVar93 [16];
  longlong lVar95;
  undefined1 auVar94 [16];
  
  if (param_1 == (void *)0x0) {
    return;
  }
  pcVar16 = *(char **)(this->StateBytes + 0x238);
  uVar1 = (longlong)param_1 + param_2;
  if (pcVar16 == (char *)0x0) {
    pcVar16 = this->StateBytes + 0x40;
  }
  *(ulong64 *)(this->StateBytes + 0x210) = *(longlong *)(this->StateBytes + 0x210) + param_2;
  uVar7 = _UNK_15066df88;
  uVar6 = ___xmm_9e3779b19e3779b19e3779b19e3779b1;
  uVar17 = *(uint *)(this->StateBytes + 0x200);
  uVar11 = (ulonglong)uVar17;
  if (uVar11 + param_2 < 0x101) {
    memcpy(this->StateBytes + uVar11 + 0x100,param_1,param_2);
    *(int *)(this->StateBytes + 0x200) = *(int *)(this->StateBytes + 0x200) + (int)param_2;
  }
  else {
    if (uVar17 != 0) {
      memcpy(this->StateBytes + uVar11 + 0x100,param_1,(ulonglong)(0x100 - uVar17));
      lVar79 = *(longlong *)(this->StateBytes + 0x208);
      param_1 = (void *)((longlong)param_1 + (ulonglong)(0x100 - uVar17));
      lVar92 = *(longlong *)(this->StateBytes + 0x220);
      uVar11 = *(longlong *)(this->StateBytes + 0x218) - lVar79;
      if (uVar11 < 5) {
        lVar15 = 4 - uVar11;
        if (uVar11 != 0) {
          pcVar8 = this->StateBytes + 0x110;
          pcVar10 = pcVar16 + lVar79 * 8 + 0x20;
          uVar14 = uVar11;
          do {
            auVar43 = *(undefined1 (*) [16])(pcVar8 + -0x10);
            uVar17 = *(uint *)(pcVar10 + -0x18);
            auVar60._0_8_ = auVar43._8_8_;
            auVar60._8_4_ = auVar43._0_4_;
            auVar60._12_4_ = auVar43._4_4_;
            lVar79 = *(longlong *)(this->StateBytes + 8);
            uVar42 = *(uint *)(pcVar10 + -0x20) ^ auVar43._0_4_;
            uVar59 = *(uint *)(pcVar10 + -0x1c) ^ auVar43._4_4_;
            auVar18._4_4_ = uVar42;
            auVar18._0_4_ = uVar59;
            auVar18._8_4_ = *(uint *)(pcVar10 + -0x14) ^ auVar43._12_4_;
            auVar18._12_4_ = uVar42;
            *(ulonglong *)this->StateBytes =
                 auVar60._0_8_ + *(longlong *)this->StateBytes +
                 (ulonglong)uVar59 * (ulonglong)uVar42;
            *(ulonglong *)(this->StateBytes + 8) =
                 auVar60._8_8_ + lVar79 +
                 (auVar18._8_8_ & 0xffffffff) * (ulonglong)(uVar17 ^ auVar43._8_4_);
            auVar43 = *(undefined1 (*) [16])pcVar8;
            uVar17 = *(uint *)(pcVar10 + -8);
            auVar61._0_8_ = auVar43._8_8_;
            auVar61._8_4_ = auVar43._0_4_;
            auVar61._12_4_ = auVar43._4_4_;
            uVar42 = *(uint *)(pcVar10 + -0x10) ^ auVar43._0_4_;
            uVar59 = *(uint *)(pcVar10 + -0xc) ^ auVar43._4_4_;
            auVar19._4_4_ = uVar42;
            auVar19._0_4_ = uVar59;
            auVar19._8_4_ = *(uint *)(pcVar10 + -4) ^ auVar43._12_4_;
            auVar19._12_4_ = uVar42;
            *(ulonglong *)(this->StateBytes + 0x10) =
                 auVar61._0_8_ + *(longlong *)(this->StateBytes + 0x10) +
                 (ulonglong)uVar59 * (ulonglong)uVar42;
            *(ulonglong *)(this->StateBytes + 0x18) =
                 auVar61._8_8_ + *(longlong *)(this->StateBytes + 0x18) +
                 (auVar19._8_8_ & 0xffffffff) * (ulonglong)(uVar17 ^ auVar43._8_4_);
            auVar43 = *(undefined1 (*) [16])(pcVar8 + 0x10);
            uVar17 = *(uint *)(pcVar10 + 8);
            auVar80._0_8_ = auVar43._8_8_;
            auVar80._8_4_ = auVar43._0_4_;
            auVar80._12_4_ = auVar43._4_4_;
            uVar42 = auVar43._0_4_ ^ *(uint *)pcVar10;
            uVar59 = auVar43._4_4_ ^ *(uint *)(pcVar10 + 4);
            auVar20._4_4_ = uVar42;
            auVar20._0_4_ = uVar59;
            auVar20._8_4_ = auVar43._12_4_ ^ *(uint *)(pcVar10 + 0xc);
            auVar20._12_4_ = uVar42;
            *(ulonglong *)(this->StateBytes + 0x20) =
                 auVar80._0_8_ + *(longlong *)(this->StateBytes + 0x20) +
                 (ulonglong)uVar59 * (ulonglong)uVar42;
            *(ulonglong *)(this->StateBytes + 0x28) =
                 auVar80._8_8_ + *(longlong *)(this->StateBytes + 0x28) +
                 (auVar20._8_8_ & 0xffffffff) * (ulonglong)(auVar43._8_4_ ^ uVar17);
            auVar43 = *(undefined1 (*) [16])(pcVar8 + 0x20);
            uVar17 = *(uint *)(pcVar10 + 0x10) ^ auVar43._0_4_;
            uVar42 = *(uint *)(pcVar10 + 0x14) ^ auVar43._4_4_;
            auVar62._4_4_ = uVar17;
            auVar62._0_4_ = uVar42;
            auVar62._8_4_ = *(uint *)(pcVar10 + 0x1c) ^ auVar43._12_4_;
            auVar62._12_4_ = uVar17;
            auVar21._0_8_ = auVar43._8_8_;
            auVar21._8_4_ = auVar43._0_4_;
            auVar21._12_4_ = auVar43._4_4_;
            auVar63._0_8_ =
                 (ulonglong)uVar42 * (ulonglong)uVar17 +
                 auVar21._0_8_ + *(longlong *)(this->StateBytes + 0x30);
            auVar63._8_8_ =
                 (auVar62._8_8_ & 0xffffffff) *
                 (ulonglong)(*(uint *)(pcVar10 + 0x18) ^ auVar43._8_4_) +
                 auVar21._8_8_ + *(longlong *)(this->StateBytes + 0x38);
            *(undefined1 (*) [16])(this->StateBytes + 0x30) = auVar63;
            uVar14 = uVar14 - 1;
            pcVar8 = pcVar8 + 0x40;
            pcVar10 = pcVar10 + 8;
          } while (uVar14 != 0);
        }
        pcVar8 = pcVar16 + lVar92;
        auVar43._0_4_ =
             *(uint *)(this->StateBytes + 4) >> 0xf ^ *(uint *)this->StateBytes ^ *(uint *)pcVar8;
        auVar43._4_4_ = *(uint *)(this->StateBytes + 4) ^ *(uint *)(pcVar8 + 4);
        auVar43._8_4_ =
             *(uint *)(this->StateBytes + 0xc) >> 0xf ^ *(uint *)(this->StateBytes + 8) ^
             *(uint *)(pcVar8 + 8);
        auVar43._12_4_ = *(uint *)(this->StateBytes + 0xc) ^ *(uint *)(pcVar8 + 0xc);
        auVar81._4_4_ = auVar43._0_4_;
        auVar81._0_4_ = auVar43._4_4_;
        auVar81._8_4_ = auVar43._12_4_;
        auVar81._12_4_ = auVar43._0_4_;
        lVar79 = ((ulonglong)auVar43._4_4_ * (ulonglong)uVar6 << 0x20) +
                 (ulonglong)auVar43._0_4_ * (ulonglong)uVar6;
        lVar83 = ((auVar81._8_8_ & 0xffffffff) * (ulonglong)uVar7 << 0x20) +
                 (auVar43._8_8_ & 0xffffffff) * (ulonglong)uVar7;
        uVar17 = *(uint *)(this->StateBytes + 0x14);
        uVar42 = *(uint *)(this->StateBytes + 0x1c);
        uVar59 = *(uint *)(this->StateBytes + 0x10);
        uVar2 = *(uint *)(this->StateBytes + 0x14);
        uVar3 = *(uint *)(this->StateBytes + 0x18);
        uVar4 = *(uint *)(this->StateBytes + 0x1c);
        *(longlong *)this->StateBytes = lVar79;
        *(longlong *)(this->StateBytes + 8) = lVar83;
        pcVar8 = pcVar16 + lVar92 + 0x10;
        auVar44._0_4_ = uVar17 >> 0xf ^ uVar59 ^ *(uint *)pcVar8;
        auVar44._4_4_ = uVar2 ^ *(uint *)(pcVar8 + 4);
        auVar44._8_4_ = uVar42 >> 0xf ^ uVar3 ^ *(uint *)(pcVar8 + 8);
        auVar44._12_4_ = uVar4 ^ *(uint *)(pcVar8 + 0xc);
        auVar85._4_4_ = auVar44._0_4_;
        auVar85._0_4_ = auVar44._4_4_;
        auVar85._8_4_ = auVar44._12_4_;
        auVar85._12_4_ = auVar44._0_4_;
        lVar84 = ((ulonglong)auVar44._4_4_ * (ulonglong)uVar6 << 0x20) +
                 (ulonglong)auVar44._0_4_ * (ulonglong)uVar6;
        lVar87 = ((auVar85._8_8_ & 0xffffffff) * (ulonglong)uVar7 << 0x20) +
                 (auVar44._8_8_ & 0xffffffff) * (ulonglong)uVar7;
        *(longlong *)(this->StateBytes + 0x10) = lVar84;
        *(longlong *)(this->StateBytes + 0x18) = lVar87;
        pcVar8 = pcVar16 + lVar92 + 0x20;
        auVar45._0_4_ =
             *(uint *)(this->StateBytes + 0x24) >> 0xf ^ *(uint *)(this->StateBytes + 0x20) ^
             *(uint *)pcVar8;
        auVar45._4_4_ = *(uint *)(this->StateBytes + 0x24) ^ *(uint *)(pcVar8 + 4);
        auVar45._8_4_ =
             *(uint *)(this->StateBytes + 0x2c) >> 0xf ^ *(uint *)(this->StateBytes + 0x28) ^
             *(uint *)(pcVar8 + 8);
        auVar45._12_4_ = *(uint *)(this->StateBytes + 0x2c) ^ *(uint *)(pcVar8 + 0xc);
        auVar89._4_4_ = auVar45._0_4_;
        auVar89._0_4_ = auVar45._4_4_;
        auVar89._8_4_ = auVar45._12_4_;
        auVar89._12_4_ = auVar45._0_4_;
        lVar88 = ((ulonglong)auVar45._4_4_ * (ulonglong)uVar6 << 0x20) +
                 (ulonglong)auVar45._0_4_ * (ulonglong)uVar6;
        lVar91 = ((auVar89._8_8_ & 0xffffffff) * (ulonglong)uVar7 << 0x20) +
                 (auVar45._8_8_ & 0xffffffff) * (ulonglong)uVar7;
        *(longlong *)(this->StateBytes + 0x20) = lVar88;
        *(longlong *)(this->StateBytes + 0x28) = lVar91;
        pcVar8 = pcVar16 + lVar92 + 0x30;
        auVar46._0_4_ =
             *(uint *)(this->StateBytes + 0x34) >> 0xf ^ *(uint *)(this->StateBytes + 0x30) ^
             *(uint *)pcVar8;
        auVar46._4_4_ = *(uint *)(this->StateBytes + 0x34) ^ *(uint *)(pcVar8 + 4);
        auVar46._8_4_ =
             *(uint *)(this->StateBytes + 0x3c) >> 0xf ^ *(uint *)(this->StateBytes + 0x38) ^
             *(uint *)(pcVar8 + 8);
        auVar46._12_4_ = *(uint *)(this->StateBytes + 0x3c) ^ *(uint *)(pcVar8 + 0xc);
        auVar93._4_4_ = auVar46._0_4_;
        auVar93._0_4_ = auVar46._4_4_;
        auVar93._8_4_ = auVar46._12_4_;
        auVar93._12_4_ = auVar46._0_4_;
        lVar92 = ((ulonglong)auVar46._4_4_ * (ulonglong)uVar6 << 0x20) +
                 (ulonglong)auVar46._0_4_ * (ulonglong)uVar6;
        lVar95 = ((auVar93._8_8_ & 0xffffffff) * (ulonglong)uVar7 << 0x20) +
                 (auVar46._8_8_ & 0xffffffff) * (ulonglong)uVar7;
        *(longlong *)(this->StateBytes + 0x30) = lVar92;
        *(longlong *)(this->StateBytes + 0x38) = lVar95;
        if (lVar15 != 0) {
          pauVar9 = (undefined1 (*) [16])((longlong)this + uVar11 * 0x40 + 0x110);
          pcVar8 = pcVar16 + 0x20;
          lVar12 = lVar15;
          do {
            auVar43 = pauVar9[-1];
            uVar17 = *(uint *)(pcVar8 + -0x20) ^ auVar43._0_4_;
            uVar42 = *(uint *)(pcVar8 + -0x1c) ^ auVar43._4_4_;
            auVar22._0_8_ = auVar43._8_8_;
            auVar22._8_4_ = auVar43._0_4_;
            auVar22._12_4_ = auVar43._4_4_;
            auVar47._4_4_ = uVar17;
            auVar47._0_4_ = uVar42;
            auVar47._8_4_ = *(uint *)(pcVar8 + -0x14) ^ auVar43._12_4_;
            auVar47._12_4_ = uVar17;
            lVar79 = lVar79 + auVar22._0_8_ + (ulonglong)uVar42 * (ulonglong)uVar17;
            lVar83 = lVar83 + auVar22._8_8_ +
                     (auVar47._8_8_ & 0xffffffff) *
                     (ulonglong)(*(uint *)(pcVar8 + -0x18) ^ auVar43._8_4_);
            *(longlong *)this->StateBytes = lVar79;
            *(longlong *)(this->StateBytes + 8) = lVar83;
            auVar43 = *pauVar9;
            uVar17 = *(uint *)(pcVar8 + -0x10) ^ auVar43._0_4_;
            uVar42 = *(uint *)(pcVar8 + -0xc) ^ auVar43._4_4_;
            auVar23._0_8_ = auVar43._8_8_;
            auVar23._8_4_ = auVar43._0_4_;
            auVar23._12_4_ = auVar43._4_4_;
            auVar48._4_4_ = uVar17;
            auVar48._0_4_ = uVar42;
            auVar48._8_4_ = *(uint *)(pcVar8 + -4) ^ auVar43._12_4_;
            auVar48._12_4_ = uVar17;
            lVar84 = lVar84 + auVar23._0_8_ + (ulonglong)uVar42 * (ulonglong)uVar17;
            lVar87 = lVar87 + auVar23._8_8_ +
                     (auVar48._8_8_ & 0xffffffff) *
                     (ulonglong)(*(uint *)(pcVar8 + -8) ^ auVar43._8_4_);
            *(longlong *)(this->StateBytes + 0x10) = lVar84;
            *(longlong *)(this->StateBytes + 0x18) = lVar87;
            auVar43 = pauVar9[1];
            uVar17 = *(uint *)pcVar8 ^ auVar43._0_4_;
            uVar42 = *(uint *)(pcVar8 + 4) ^ auVar43._4_4_;
            auVar49._4_4_ = uVar17;
            auVar49._0_4_ = uVar42;
            auVar49._8_4_ = *(uint *)(pcVar8 + 0xc) ^ auVar43._12_4_;
            auVar49._12_4_ = uVar17;
            auVar24._0_8_ = auVar43._8_8_;
            auVar24._8_4_ = auVar43._0_4_;
            auVar24._12_4_ = auVar43._4_4_;
            lVar88 = (ulonglong)uVar42 * (ulonglong)uVar17 + auVar24._0_8_ + lVar88;
            lVar91 = (auVar49._8_8_ & 0xffffffff) *
                     (ulonglong)(*(uint *)(pcVar8 + 8) ^ auVar43._8_4_) + auVar24._8_8_ + lVar91;
            *(longlong *)(this->StateBytes + 0x20) = lVar88;
            *(longlong *)(this->StateBytes + 0x28) = lVar91;
            auVar43 = pauVar9[2];
            uVar17 = *(uint *)(pcVar8 + 0x10) ^ auVar43._0_4_;
            uVar42 = *(uint *)(pcVar8 + 0x14) ^ auVar43._4_4_;
            auVar25._0_8_ = auVar43._8_8_;
            auVar25._8_4_ = auVar43._0_4_;
            auVar25._12_4_ = auVar43._4_4_;
            auVar50._4_4_ = uVar17;
            auVar50._0_4_ = uVar42;
            auVar50._8_4_ = *(uint *)(pcVar8 + 0x1c) ^ auVar43._12_4_;
            auVar50._12_4_ = uVar17;
            lVar92 = lVar92 + auVar25._0_8_ + (ulonglong)uVar42 * (ulonglong)uVar17;
            lVar95 = lVar95 + auVar25._8_8_ +
                     (auVar50._8_8_ & 0xffffffff) *
                     (ulonglong)(*(uint *)(pcVar8 + 0x18) ^ auVar43._8_4_);
            *(longlong *)(this->StateBytes + 0x30) = lVar92;
            *(longlong *)(this->StateBytes + 0x38) = lVar95;
            lVar12 = lVar12 + -1;
            pauVar9 = pauVar9 + 4;
            pcVar8 = pcVar8 + 8;
          } while (lVar12 != 0);
        }
        *(longlong *)(this->StateBytes + 0x208) = lVar15;
      }
      else {
        lVar92 = 4;
        pcVar8 = this->StateBytes + 0x110;
        pcVar10 = pcVar16 + lVar79 * 8 + 0x20;
        do {
          auVar43 = *(undefined1 (*) [16])(pcVar8 + -0x10);
          uVar17 = *(uint *)(pcVar10 + -0x18);
          auVar64._0_8_ = auVar43._8_8_;
          auVar64._8_4_ = auVar43._0_4_;
          auVar64._12_4_ = auVar43._4_4_;
          lVar79 = *(longlong *)(this->StateBytes + 8);
          uVar42 = *(uint *)(pcVar10 + -0x20) ^ auVar43._0_4_;
          uVar59 = *(uint *)(pcVar10 + -0x1c) ^ auVar43._4_4_;
          auVar26._4_4_ = uVar42;
          auVar26._0_4_ = uVar59;
          auVar26._8_4_ = *(uint *)(pcVar10 + -0x14) ^ auVar43._12_4_;
          auVar26._12_4_ = uVar42;
          *(ulonglong *)this->StateBytes =
               auVar64._0_8_ + *(longlong *)this->StateBytes + (ulonglong)uVar59 * (ulonglong)uVar42
          ;
          *(ulonglong *)(this->StateBytes + 8) =
               auVar64._8_8_ + lVar79 +
               (auVar26._8_8_ & 0xffffffff) * (ulonglong)(uVar17 ^ auVar43._8_4_);
          auVar43 = *(undefined1 (*) [16])pcVar8;
          uVar17 = *(uint *)(pcVar10 + -8);
          uVar42 = *(uint *)(pcVar10 + -0x10) ^ auVar43._0_4_;
          uVar59 = *(uint *)(pcVar10 + -0xc) ^ auVar43._4_4_;
          auVar65._4_4_ = uVar42;
          auVar65._0_4_ = uVar59;
          auVar65._8_4_ = *(uint *)(pcVar10 + -4) ^ auVar43._12_4_;
          auVar65._12_4_ = uVar42;
          auVar27._0_8_ = auVar43._8_8_;
          auVar27._8_4_ = auVar43._0_4_;
          auVar27._12_4_ = auVar43._4_4_;
          *(ulonglong *)(this->StateBytes + 0x10) =
               (ulonglong)uVar59 * (ulonglong)uVar42 +
               auVar27._0_8_ + *(longlong *)(this->StateBytes + 0x10);
          *(ulonglong *)(this->StateBytes + 0x18) =
               (auVar65._8_8_ & 0xffffffff) * (ulonglong)(uVar17 ^ auVar43._8_4_) +
               auVar27._8_8_ + *(longlong *)(this->StateBytes + 0x18);
          auVar43 = *(undefined1 (*) [16])(pcVar8 + 0x10);
          uVar17 = *(uint *)(pcVar10 + 8);
          uVar42 = *(uint *)pcVar10 ^ auVar43._0_4_;
          uVar59 = *(uint *)(pcVar10 + 4) ^ auVar43._4_4_;
          auVar66._4_4_ = uVar42;
          auVar66._0_4_ = uVar59;
          auVar66._8_4_ = *(uint *)(pcVar10 + 0xc) ^ auVar43._12_4_;
          auVar66._12_4_ = uVar42;
          auVar28._0_8_ = auVar43._8_8_;
          auVar28._8_4_ = auVar43._0_4_;
          auVar28._12_4_ = auVar43._4_4_;
          *(ulonglong *)(this->StateBytes + 0x20) =
               (ulonglong)uVar59 * (ulonglong)uVar42 +
               auVar28._0_8_ + *(longlong *)(this->StateBytes + 0x20);
          *(ulonglong *)(this->StateBytes + 0x28) =
               (auVar66._8_8_ & 0xffffffff) * (ulonglong)(uVar17 ^ auVar43._8_4_) +
               auVar28._8_8_ + *(longlong *)(this->StateBytes + 0x28);
          auVar43 = *(undefined1 (*) [16])(pcVar8 + 0x20);
          auVar67._0_8_ = auVar43._8_8_;
          auVar67._8_4_ = auVar43._0_4_;
          auVar67._12_4_ = auVar43._4_4_;
          uVar17 = *(uint *)(pcVar10 + 0x10) ^ auVar43._0_4_;
          uVar42 = *(uint *)(pcVar10 + 0x14) ^ auVar43._4_4_;
          auVar29._4_4_ = uVar17;
          auVar29._0_4_ = uVar42;
          auVar29._8_4_ = *(uint *)(pcVar10 + 0x1c) ^ auVar43._12_4_;
          auVar29._12_4_ = uVar17;
          auVar68._0_8_ =
               auVar67._0_8_ + *(longlong *)(this->StateBytes + 0x30) +
               (ulonglong)uVar42 * (ulonglong)uVar17;
          auVar68._8_8_ =
               auVar67._8_8_ + *(longlong *)(this->StateBytes + 0x38) +
               (auVar29._8_8_ & 0xffffffff) * (ulonglong)(*(uint *)(pcVar10 + 0x18) ^ auVar43._8_4_)
          ;
          *(undefined1 (*) [16])(this->StateBytes + 0x30) = auVar68;
          lVar92 = lVar92 + -1;
          pcVar8 = pcVar8 + 0x40;
          pcVar10 = pcVar10 + 8;
        } while (lVar92 != 0);
        *(longlong *)(this->StateBytes + 0x208) = *(longlong *)(this->StateBytes + 0x208) + 4;
      }
      this->StateBytes[0x200] = '\0';
      this->StateBytes[0x201] = '\0';
      this->StateBytes[0x202] = '\0';
      this->StateBytes[0x203] = '\0';
    }
    if ((longlong)param_1 + 0x100U < uVar1) {
      do {
        pvVar13 = param_1;
        lVar79 = *(longlong *)(this->StateBytes + 0x208);
        lVar92 = *(longlong *)(this->StateBytes + 0x220);
        uVar11 = *(longlong *)(this->StateBytes + 0x218) - lVar79;
        if (uVar11 < 5) {
          lVar15 = 4 - uVar11;
          if (uVar11 != 0) {
            pauVar9 = (undefined1 (*) [16])((longlong)pvVar13 + 0x10);
            pcVar8 = pcVar16 + lVar79 * 8 + 0x20;
            uVar14 = uVar11;
            do {
              auVar43 = pauVar9[-1];
              uVar17 = *(uint *)(pcVar8 + -0x18);
              uVar42 = *(uint *)(pcVar8 + -0x20) ^ auVar43._0_4_;
              uVar59 = *(uint *)(pcVar8 + -0x1c) ^ auVar43._4_4_;
              auVar69._4_4_ = uVar42;
              auVar69._0_4_ = uVar59;
              auVar69._8_4_ = *(uint *)(pcVar8 + -0x14) ^ auVar43._12_4_;
              auVar69._12_4_ = uVar42;
              auVar30._0_8_ = auVar43._8_8_;
              auVar30._8_4_ = auVar43._0_4_;
              auVar30._12_4_ = auVar43._4_4_;
              lVar79 = *(longlong *)(this->StateBytes + 8);
              *(ulonglong *)this->StateBytes =
                   (ulonglong)uVar59 * (ulonglong)uVar42 +
                   auVar30._0_8_ + *(longlong *)this->StateBytes;
              *(ulonglong *)(this->StateBytes + 8) =
                   (auVar69._8_8_ & 0xffffffff) * (ulonglong)(uVar17 ^ auVar43._8_4_) +
                   auVar30._8_8_ + lVar79;
              auVar43 = *pauVar9;
              uVar17 = *(uint *)(pcVar8 + -8);
              uVar42 = *(uint *)(pcVar8 + -0x10) ^ auVar43._0_4_;
              uVar59 = *(uint *)(pcVar8 + -0xc) ^ auVar43._4_4_;
              auVar70._4_4_ = uVar42;
              auVar70._0_4_ = uVar59;
              auVar70._8_4_ = *(uint *)(pcVar8 + -4) ^ auVar43._12_4_;
              auVar70._12_4_ = uVar42;
              auVar31._0_8_ = auVar43._8_8_;
              auVar31._8_4_ = auVar43._0_4_;
              auVar31._12_4_ = auVar43._4_4_;
              *(ulonglong *)(this->StateBytes + 0x10) =
                   (ulonglong)uVar59 * (ulonglong)uVar42 +
                   auVar31._0_8_ + *(longlong *)(this->StateBytes + 0x10);
              *(ulonglong *)(this->StateBytes + 0x18) =
                   (auVar70._8_8_ & 0xffffffff) * (ulonglong)(uVar17 ^ auVar43._8_4_) +
                   auVar31._8_8_ + *(longlong *)(this->StateBytes + 0x18);
              auVar43 = pauVar9[1];
              uVar17 = *(uint *)(pcVar8 + 8);
              auVar71._0_8_ = auVar43._8_8_;
              auVar71._8_4_ = auVar43._0_4_;
              auVar71._12_4_ = auVar43._4_4_;
              uVar42 = *(uint *)pcVar8 ^ auVar43._0_4_;
              uVar59 = *(uint *)(pcVar8 + 4) ^ auVar43._4_4_;
              auVar32._4_4_ = uVar42;
              auVar32._0_4_ = uVar59;
              auVar32._8_4_ = *(uint *)(pcVar8 + 0xc) ^ auVar43._12_4_;
              auVar32._12_4_ = uVar42;
              *(ulonglong *)(this->StateBytes + 0x20) =
                   auVar71._0_8_ + *(longlong *)(this->StateBytes + 0x20) +
                   (ulonglong)uVar59 * (ulonglong)uVar42;
              *(ulonglong *)(this->StateBytes + 0x28) =
                   auVar71._8_8_ + *(longlong *)(this->StateBytes + 0x28) +
                   (auVar32._8_8_ & 0xffffffff) * (ulonglong)(uVar17 ^ auVar43._8_4_);
              auVar43 = pauVar9[2];
              auVar72._0_8_ = auVar43._8_8_;
              auVar72._8_4_ = auVar43._0_4_;
              auVar72._12_4_ = auVar43._4_4_;
              uVar17 = *(uint *)(pcVar8 + 0x10) ^ auVar43._0_4_;
              uVar42 = *(uint *)(pcVar8 + 0x14) ^ auVar43._4_4_;
              auVar33._4_4_ = uVar17;
              auVar33._0_4_ = uVar42;
              auVar33._8_4_ = *(uint *)(pcVar8 + 0x1c) ^ auVar43._12_4_;
              auVar33._12_4_ = uVar17;
              auVar73._0_8_ =
                   auVar72._0_8_ + *(longlong *)(this->StateBytes + 0x30) +
                   (ulonglong)uVar42 * (ulonglong)uVar17;
              auVar73._8_8_ =
                   auVar72._8_8_ + *(longlong *)(this->StateBytes + 0x38) +
                   (auVar33._8_8_ & 0xffffffff) *
                   (ulonglong)(*(uint *)(pcVar8 + 0x18) ^ auVar43._8_4_);
              *(undefined1 (*) [16])(this->StateBytes + 0x30) = auVar73;
              uVar14 = uVar14 - 1;
              pauVar9 = pauVar9 + 4;
              pcVar8 = pcVar8 + 8;
            } while (uVar14 != 0);
          }
          pcVar8 = pcVar16 + lVar92;
          auVar51._0_4_ =
               *(uint *)(this->StateBytes + 4) >> 0xf ^ *(uint *)this->StateBytes ^ *(uint *)pcVar8;
          auVar51._4_4_ = *(uint *)(this->StateBytes + 4) ^ *(uint *)(pcVar8 + 4);
          auVar51._8_4_ =
               *(uint *)(this->StateBytes + 0xc) >> 0xf ^ *(uint *)(this->StateBytes + 8) ^
               *(uint *)(pcVar8 + 8);
          auVar51._12_4_ = *(uint *)(this->StateBytes + 0xc) ^ *(uint *)(pcVar8 + 0xc);
          auVar82._4_4_ = auVar51._0_4_;
          auVar82._0_4_ = auVar51._4_4_;
          auVar82._8_4_ = auVar51._12_4_;
          auVar82._12_4_ = auVar51._0_4_;
          lVar79 = ((ulonglong)auVar51._4_4_ * (ulonglong)uVar6 << 0x20) +
                   (ulonglong)auVar51._0_4_ * (ulonglong)uVar6;
          lVar83 = ((auVar82._8_8_ & 0xffffffff) * (ulonglong)uVar7 << 0x20) +
                   (auVar51._8_8_ & 0xffffffff) * (ulonglong)uVar7;
          uVar17 = *(uint *)(this->StateBytes + 0x14);
          uVar42 = *(uint *)(this->StateBytes + 0x1c);
          uVar59 = *(uint *)(this->StateBytes + 0x10);
          uVar2 = *(uint *)(this->StateBytes + 0x14);
          uVar3 = *(uint *)(this->StateBytes + 0x18);
          uVar4 = *(uint *)(this->StateBytes + 0x1c);
          *(longlong *)this->StateBytes = lVar79;
          *(longlong *)(this->StateBytes + 8) = lVar83;
          pcVar8 = pcVar16 + lVar92 + 0x10;
          auVar52._0_4_ = uVar17 >> 0xf ^ uVar59 ^ *(uint *)pcVar8;
          auVar52._4_4_ = uVar2 ^ *(uint *)(pcVar8 + 4);
          auVar52._8_4_ = uVar42 >> 0xf ^ uVar3 ^ *(uint *)(pcVar8 + 8);
          auVar52._12_4_ = uVar4 ^ *(uint *)(pcVar8 + 0xc);
          auVar86._4_4_ = auVar52._0_4_;
          auVar86._0_4_ = auVar52._4_4_;
          auVar86._8_4_ = auVar52._12_4_;
          auVar86._12_4_ = auVar52._0_4_;
          lVar84 = ((ulonglong)auVar52._4_4_ * (ulonglong)uVar6 << 0x20) +
                   (ulonglong)auVar52._0_4_ * (ulonglong)uVar6;
          lVar87 = ((auVar86._8_8_ & 0xffffffff) * (ulonglong)uVar7 << 0x20) +
                   (auVar52._8_8_ & 0xffffffff) * (ulonglong)uVar7;
          *(longlong *)(this->StateBytes + 0x10) = lVar84;
          *(longlong *)(this->StateBytes + 0x18) = lVar87;
          pcVar8 = pcVar16 + lVar92 + 0x20;
          auVar53._0_4_ =
               *(uint *)(this->StateBytes + 0x24) >> 0xf ^ *(uint *)(this->StateBytes + 0x20) ^
               *(uint *)pcVar8;
          auVar53._4_4_ = *(uint *)(this->StateBytes + 0x24) ^ *(uint *)(pcVar8 + 4);
          auVar53._8_4_ =
               *(uint *)(this->StateBytes + 0x2c) >> 0xf ^ *(uint *)(this->StateBytes + 0x28) ^
               *(uint *)(pcVar8 + 8);
          auVar53._12_4_ = *(uint *)(this->StateBytes + 0x2c) ^ *(uint *)(pcVar8 + 0xc);
          auVar90._4_4_ = auVar53._0_4_;
          auVar90._0_4_ = auVar53._4_4_;
          auVar90._8_4_ = auVar53._12_4_;
          auVar90._12_4_ = auVar53._0_4_;
          lVar88 = ((ulonglong)auVar53._4_4_ * (ulonglong)uVar6 << 0x20) +
                   (ulonglong)auVar53._0_4_ * (ulonglong)uVar6;
          lVar91 = ((auVar90._8_8_ & 0xffffffff) * (ulonglong)uVar7 << 0x20) +
                   (auVar53._8_8_ & 0xffffffff) * (ulonglong)uVar7;
          *(longlong *)(this->StateBytes + 0x20) = lVar88;
          *(longlong *)(this->StateBytes + 0x28) = lVar91;
          pcVar8 = pcVar16 + lVar92 + 0x30;
          auVar54._0_4_ =
               *(uint *)(this->StateBytes + 0x34) >> 0xf ^ *(uint *)(this->StateBytes + 0x30) ^
               *(uint *)pcVar8;
          auVar54._4_4_ = *(uint *)(this->StateBytes + 0x34) ^ *(uint *)(pcVar8 + 4);
          auVar54._8_4_ =
               *(uint *)(this->StateBytes + 0x3c) >> 0xf ^ *(uint *)(this->StateBytes + 0x38) ^
               *(uint *)(pcVar8 + 8);
          auVar54._12_4_ = *(uint *)(this->StateBytes + 0x3c) ^ *(uint *)(pcVar8 + 0xc);
          auVar94._4_4_ = auVar54._0_4_;
          auVar94._0_4_ = auVar54._4_4_;
          auVar94._8_4_ = auVar54._12_4_;
          auVar94._12_4_ = auVar54._0_4_;
          lVar92 = ((ulonglong)auVar54._4_4_ * (ulonglong)uVar6 << 0x20) +
                   (ulonglong)auVar54._0_4_ * (ulonglong)uVar6;
          lVar95 = ((auVar94._8_8_ & 0xffffffff) * (ulonglong)uVar7 << 0x20) +
                   (auVar54._8_8_ & 0xffffffff) * (ulonglong)uVar7;
          *(longlong *)(this->StateBytes + 0x30) = lVar92;
          *(longlong *)(this->StateBytes + 0x38) = lVar95;
          if (lVar15 != 0) {
            pauVar9 = (undefined1 (*) [16])(uVar11 * 0x40 + 0x10 + (longlong)pvVar13);
            pcVar8 = pcVar16 + 0x20;
            lVar12 = lVar15;
            do {
              auVar43 = pauVar9[-1];
              uVar17 = *(uint *)(pcVar8 + -0x20) ^ auVar43._0_4_;
              uVar42 = *(uint *)(pcVar8 + -0x1c) ^ auVar43._4_4_;
              auVar55._4_4_ = uVar17;
              auVar55._0_4_ = uVar42;
              auVar55._8_4_ = *(uint *)(pcVar8 + -0x14) ^ auVar43._12_4_;
              auVar55._12_4_ = uVar17;
              auVar34._0_8_ = auVar43._8_8_;
              auVar34._8_4_ = auVar43._0_4_;
              auVar34._12_4_ = auVar43._4_4_;
              lVar79 = (ulonglong)uVar42 * (ulonglong)uVar17 + auVar34._0_8_ + lVar79;
              lVar83 = (auVar55._8_8_ & 0xffffffff) *
                       (ulonglong)(*(uint *)(pcVar8 + -0x18) ^ auVar43._8_4_) +
                       auVar34._8_8_ + lVar83;
              *(longlong *)this->StateBytes = lVar79;
              *(longlong *)(this->StateBytes + 8) = lVar83;
              auVar43 = *pauVar9;
              uVar17 = *(uint *)(pcVar8 + -0x10) ^ auVar43._0_4_;
              uVar42 = *(uint *)(pcVar8 + -0xc) ^ auVar43._4_4_;
              auVar56._4_4_ = uVar17;
              auVar56._0_4_ = uVar42;
              auVar56._8_4_ = *(uint *)(pcVar8 + -4) ^ auVar43._12_4_;
              auVar56._12_4_ = uVar17;
              auVar35._0_8_ = auVar43._8_8_;
              auVar35._8_4_ = auVar43._0_4_;
              auVar35._12_4_ = auVar43._4_4_;
              lVar84 = (ulonglong)uVar42 * (ulonglong)uVar17 + auVar35._0_8_ + lVar84;
              lVar87 = (auVar56._8_8_ & 0xffffffff) *
                       (ulonglong)(*(uint *)(pcVar8 + -8) ^ auVar43._8_4_) + auVar35._8_8_ + lVar87;
              *(longlong *)(this->StateBytes + 0x10) = lVar84;
              *(longlong *)(this->StateBytes + 0x18) = lVar87;
              auVar43 = pauVar9[1];
              uVar17 = *(uint *)pcVar8 ^ auVar43._0_4_;
              uVar42 = *(uint *)(pcVar8 + 4) ^ auVar43._4_4_;
              auVar36._0_8_ = auVar43._8_8_;
              auVar36._8_4_ = auVar43._0_4_;
              auVar36._12_4_ = auVar43._4_4_;
              auVar57._4_4_ = uVar17;
              auVar57._0_4_ = uVar42;
              auVar57._8_4_ = *(uint *)(pcVar8 + 0xc) ^ auVar43._12_4_;
              auVar57._12_4_ = uVar17;
              lVar88 = lVar88 + auVar36._0_8_ + (ulonglong)uVar42 * (ulonglong)uVar17;
              lVar91 = lVar91 + auVar36._8_8_ +
                       (auVar57._8_8_ & 0xffffffff) *
                       (ulonglong)(*(uint *)(pcVar8 + 8) ^ auVar43._8_4_);
              *(longlong *)(this->StateBytes + 0x20) = lVar88;
              *(longlong *)(this->StateBytes + 0x28) = lVar91;
              auVar43 = pauVar9[2];
              uVar17 = *(uint *)(pcVar8 + 0x10) ^ auVar43._0_4_;
              uVar42 = *(uint *)(pcVar8 + 0x14) ^ auVar43._4_4_;
              auVar58._4_4_ = uVar17;
              auVar58._0_4_ = uVar42;
              auVar58._8_4_ = *(uint *)(pcVar8 + 0x1c) ^ auVar43._12_4_;
              auVar58._12_4_ = uVar17;
              auVar37._0_8_ = auVar43._8_8_;
              auVar37._8_4_ = auVar43._0_4_;
              auVar37._12_4_ = auVar43._4_4_;
              lVar92 = (ulonglong)uVar42 * (ulonglong)uVar17 + auVar37._0_8_ + lVar92;
              lVar95 = (auVar58._8_8_ & 0xffffffff) *
                       (ulonglong)(*(uint *)(pcVar8 + 0x18) ^ auVar43._8_4_) +
                       auVar37._8_8_ + lVar95;
              *(longlong *)(this->StateBytes + 0x30) = lVar92;
              *(longlong *)(this->StateBytes + 0x38) = lVar95;
              lVar12 = lVar12 + -1;
              pauVar9 = pauVar9 + 4;
              pcVar8 = pcVar8 + 8;
            } while (lVar12 != 0);
          }
          *(longlong *)(this->StateBytes + 0x208) = lVar15;
        }
        else {
          lVar92 = 4;
          pauVar9 = (undefined1 (*) [16])((longlong)pvVar13 + 0x10);
          pcVar8 = pcVar16 + lVar79 * 8 + 0x20;
          do {
            auVar43 = pauVar9[-1];
            uVar17 = *(uint *)(pcVar8 + -0x18);
            auVar74._0_8_ = auVar43._8_8_;
            auVar74._8_4_ = auVar43._0_4_;
            auVar74._12_4_ = auVar43._4_4_;
            lVar79 = *(longlong *)(this->StateBytes + 8);
            uVar42 = *(uint *)(pcVar8 + -0x20) ^ auVar43._0_4_;
            uVar59 = *(uint *)(pcVar8 + -0x1c) ^ auVar43._4_4_;
            auVar38._4_4_ = uVar42;
            auVar38._0_4_ = uVar59;
            auVar38._8_4_ = *(uint *)(pcVar8 + -0x14) ^ auVar43._12_4_;
            auVar38._12_4_ = uVar42;
            *(ulonglong *)this->StateBytes =
                 auVar74._0_8_ + *(longlong *)this->StateBytes +
                 (ulonglong)uVar59 * (ulonglong)uVar42;
            *(ulonglong *)(this->StateBytes + 8) =
                 auVar74._8_8_ + lVar79 +
                 (auVar38._8_8_ & 0xffffffff) * (ulonglong)(uVar17 ^ auVar43._8_4_);
            auVar43 = *pauVar9;
            uVar17 = *(uint *)(pcVar8 + -8);
            uVar42 = *(uint *)(pcVar8 + -0x10) ^ auVar43._0_4_;
            uVar59 = *(uint *)(pcVar8 + -0xc) ^ auVar43._4_4_;
            auVar75._4_4_ = uVar42;
            auVar75._0_4_ = uVar59;
            auVar75._8_4_ = *(uint *)(pcVar8 + -4) ^ auVar43._12_4_;
            auVar75._12_4_ = uVar42;
            auVar39._0_8_ = auVar43._8_8_;
            auVar39._8_4_ = auVar43._0_4_;
            auVar39._12_4_ = auVar43._4_4_;
            *(ulonglong *)(this->StateBytes + 0x10) =
                 (ulonglong)uVar59 * (ulonglong)uVar42 +
                 auVar39._0_8_ + *(longlong *)(this->StateBytes + 0x10);
            *(ulonglong *)(this->StateBytes + 0x18) =
                 (auVar75._8_8_ & 0xffffffff) * (ulonglong)(uVar17 ^ auVar43._8_4_) +
                 auVar39._8_8_ + *(longlong *)(this->StateBytes + 0x18);
            auVar43 = pauVar9[1];
            uVar17 = *(uint *)(pcVar8 + 8);
            uVar42 = *(uint *)pcVar8 ^ auVar43._0_4_;
            uVar59 = *(uint *)(pcVar8 + 4) ^ auVar43._4_4_;
            auVar76._4_4_ = uVar42;
            auVar76._0_4_ = uVar59;
            auVar76._8_4_ = *(uint *)(pcVar8 + 0xc) ^ auVar43._12_4_;
            auVar76._12_4_ = uVar42;
            auVar40._0_8_ = auVar43._8_8_;
            auVar40._8_4_ = auVar43._0_4_;
            auVar40._12_4_ = auVar43._4_4_;
            *(ulonglong *)(this->StateBytes + 0x20) =
                 (ulonglong)uVar59 * (ulonglong)uVar42 +
                 auVar40._0_8_ + *(longlong *)(this->StateBytes + 0x20);
            *(ulonglong *)(this->StateBytes + 0x28) =
                 (auVar76._8_8_ & 0xffffffff) * (ulonglong)(uVar17 ^ auVar43._8_4_) +
                 auVar40._8_8_ + *(longlong *)(this->StateBytes + 0x28);
            auVar43 = pauVar9[2];
            auVar77._0_8_ = auVar43._8_8_;
            auVar77._8_4_ = auVar43._0_4_;
            auVar77._12_4_ = auVar43._4_4_;
            uVar17 = *(uint *)(pcVar8 + 0x10) ^ auVar43._0_4_;
            uVar42 = *(uint *)(pcVar8 + 0x14) ^ auVar43._4_4_;
            auVar41._4_4_ = uVar17;
            auVar41._0_4_ = uVar42;
            auVar41._8_4_ = *(uint *)(pcVar8 + 0x1c) ^ auVar43._12_4_;
            auVar41._12_4_ = uVar17;
            auVar78._0_8_ =
                 auVar77._0_8_ + *(longlong *)(this->StateBytes + 0x30) +
                 (ulonglong)uVar42 * (ulonglong)uVar17;
            auVar78._8_8_ =
                 auVar77._8_8_ + *(longlong *)(this->StateBytes + 0x38) +
                 (auVar41._8_8_ & 0xffffffff) *
                 (ulonglong)(*(uint *)(pcVar8 + 0x18) ^ auVar43._8_4_);
            *(undefined1 (*) [16])(this->StateBytes + 0x30) = auVar78;
            lVar92 = lVar92 + -1;
            pauVar9 = pauVar9 + 4;
            pcVar8 = pcVar8 + 8;
          } while (lVar92 != 0);
          *(longlong *)(this->StateBytes + 0x208) = *(longlong *)(this->StateBytes + 0x208) + 4;
        }
        param_1 = (void *)((longlong)pvVar13 + 0x100);
      } while (param_1 < (void *)(uVar1 - 0x100));
      uVar5 = *(undefined8 *)((longlong)pvVar13 + 200);
      *(undefined8 *)(this->StateBytes + 0x1c0) = *(undefined8 *)((longlong)pvVar13 + 0xc0);
      *(undefined8 *)(this->StateBytes + 0x1c8) = uVar5;
      uVar5 = *(undefined8 *)((longlong)pvVar13 + 0xd8);
      *(undefined8 *)(this->StateBytes + 0x1d0) = *(undefined8 *)((longlong)pvVar13 + 0xd0);
      *(undefined8 *)(this->StateBytes + 0x1d8) = uVar5;
      uVar5 = *(undefined8 *)((longlong)pvVar13 + 0xe8);
      *(undefined8 *)(this->StateBytes + 0x1e0) = *(undefined8 *)((longlong)pvVar13 + 0xe0);
      *(undefined8 *)(this->StateBytes + 0x1e8) = uVar5;
      uVar5 = *(undefined8 *)((longlong)pvVar13 + 0xf8);
      *(undefined8 *)(this->StateBytes + 0x1f0) = *(undefined8 *)((longlong)pvVar13 + 0xf0);
      *(undefined8 *)(this->StateBytes + 0x1f8) = uVar5;
    }
    memcpy(this->StateBytes + 0x100,param_1,uVar1 - (longlong)param_1);
    *(int *)(this->StateBytes + 0x200) = (int)uVar1 - (int)param_1;
  }
  return;
}

// Update @ 141719b00

void __thiscall FXxHash64Builder::Update(FXxHash64Builder *this,TMemoryView<void_const_> *param_1)

{
  XXH_INLINE_XXH3_64bits_update((XXH_INLINE_XXH3_state_s *)this,param_1->Data,param_1->Size);
  return;
}

