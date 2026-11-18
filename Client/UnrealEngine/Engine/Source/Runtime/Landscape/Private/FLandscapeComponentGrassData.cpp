// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 12

// FLandscapeComponentGrassData @ 145f41fc0

FLandscapeComponentGrassData * __thiscall
FLandscapeComponentGrassData::FLandscapeComponentGrassData
          (FLandscapeComponentGrassData *this,ULandscapeComponent *param_1)

{
  this->NumElements = -1;
  *(undefined8 *)&this->WeightOffsets = 0;
  *(undefined8 *)&(this->WeightOffsets).field_0x8 = 0;
  *(undefined8 *)&(this->WeightOffsets).field_0x20 = 0;
  *(undefined4 *)&(this->WeightOffsets).field_0x28 = 0;
  *(undefined4 *)&(this->WeightOffsets).field_0x2c = 0x80;
  *(undefined4 *)&(this->WeightOffsets).field_0x34 = 0;
  *(undefined4 *)&(this->WeightOffsets).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->WeightOffsets).field_0x40 = 0;
  *(undefined4 *)&(this->WeightOffsets).field_0x48 = 0;
  (this->HeightWeightData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HeightWeightData).ArrayNum = 0;
  (this->HeightWeightData).ArrayMax = 0;
  return this;
}

// operator= @ 145f43c80

FLandscapeComponentGrassData * __thiscall
FLandscapeComponentGrassData::operator=
          (FLandscapeComponentGrassData *this,FLandscapeComponentGrassData *param_1)

{
  TMap<TObjectPtr<ULandscapeGrassType>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<ULandscapeGrassType>,int,0>_>
  *pTVar1;
  TMap<TObjectPtr<ULandscapeGrassType>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<ULandscapeGrassType>,int,0>_>
  *pTVar2;
  undefined1 *_Src;
  undefined1 *_Dst;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar4;
  void *pvVar5;
  FScriptContainerElement *pFVar6;
  
  pTVar1 = &param_1->WeightOffsets;
  pTVar2 = &this->WeightOffsets;
  this->NumElements = param_1->NumElements;
  if (pTVar2 != pTVar1) {
    if (*(void **)pTVar2 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar2);
    }
    _Src = &(param_1->WeightOffsets).field_0x10;
    *(undefined8 *)pTVar2 = *(undefined8 *)pTVar1;
    _Dst = &(this->WeightOffsets).field_0x10;
    *(undefined8 *)pTVar1 = 0;
    *(undefined4 *)&(this->WeightOffsets).field_0x8 =
         *(undefined4 *)&(param_1->WeightOffsets).field_0x8;
    *(undefined4 *)&(this->WeightOffsets).field_0xc =
         *(undefined4 *)&(param_1->WeightOffsets).field_0xc;
    *(undefined8 *)&(param_1->WeightOffsets).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->WeightOffsets).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar5 = *(void **)&(this->WeightOffsets).field_0x20;
      if (pvVar5 != (void *)0x0) {
        FMemory::Free(pvVar5);
      }
      *(undefined8 *)&(this->WeightOffsets).field_0x20 =
           *(undefined8 *)&(param_1->WeightOffsets).field_0x20;
      *(undefined8 *)&(param_1->WeightOffsets).field_0x20 = 0;
      *(undefined4 *)&(this->WeightOffsets).field_0x28 =
           *(undefined4 *)&(param_1->WeightOffsets).field_0x28;
      *(undefined4 *)&(this->WeightOffsets).field_0x2c =
           *(undefined4 *)&(param_1->WeightOffsets).field_0x2c;
      *(undefined8 *)&(param_1->WeightOffsets).field_0x28 = 0;
    }
    *(undefined4 *)&(this->WeightOffsets).field_0x30 =
         *(undefined4 *)&(param_1->WeightOffsets).field_0x30;
    *(undefined4 *)&(this->WeightOffsets).field_0x34 =
         *(undefined4 *)&(param_1->WeightOffsets).field_0x34;
    *(undefined4 *)&(param_1->WeightOffsets).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->WeightOffsets).field_0x34 = 0;
    if (*(longlong *)&(param_1->WeightOffsets).field_0x40 == 0) {
      *(undefined4 *)&(this->WeightOffsets).field_0x38 =
           *(undefined4 *)&(param_1->WeightOffsets).field_0x38;
    }
    pvVar5 = *(void **)&(this->WeightOffsets).field_0x40;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
    }
    *(undefined8 *)&(this->WeightOffsets).field_0x40 =
         *(undefined8 *)&(param_1->WeightOffsets).field_0x40;
    *(undefined8 *)&(param_1->WeightOffsets).field_0x40 = 0;
    *(undefined4 *)&(this->WeightOffsets).field_0x48 =
         *(undefined4 *)&(param_1->WeightOffsets).field_0x48;
    *(undefined4 *)&(param_1->WeightOffsets).field_0x48 = 0;
  }
  pTVar3 = &param_1->HeightWeightData;
  pTVar4 = &this->HeightWeightData;
  if (pTVar4 != pTVar3) {
    pFVar6 = (pTVar4->AllocatorInstance).Data;
    if (pFVar6 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar6);
    }
    (pTVar4->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->HeightWeightData).ArrayNum = (param_1->HeightWeightData).ArrayNum;
    (this->HeightWeightData).ArrayMax = (param_1->HeightWeightData).ArrayMax;
    (param_1->HeightWeightData).ArrayNum = 0;
    (param_1->HeightWeightData).ArrayMax = 0;
  }
  return this;
}

// ConditionalDiscardDataOnLoad @ 145f4ea60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FLandscapeComponentGrassData::ConditionalDiscardDataOnLoad(FLandscapeComponentGrassData *this)

{
  TMap<TObjectPtr<ULandscapeGrassType>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<ULandscapeGrassType>,int,0>_>
  *pTVar1;
  FScriptContainerElement *_Src;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  TSet<TTuple<TObjectPtr<ULandscapeGrassType>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<ULandscapeGrassType>,int,0>,FDefaultSetAllocator>
  *this_00;
  longlong *plVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  TSet<TTuple<ULandscapeGrassType_*,int>,TDefaultMapHashableKeyFuncs<ULandscapeGrassType_*,int,0>,FDefaultSetAllocator>
  *pTVar12;
  byte bVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auStackY_278 [32];
  int local_248;
  undefined1 local_244 [4];
  int local_240;
  longlong *local_238;
  undefined1 auStack_230 [16];
  uint uStack_220;
  uint uStack_21c;
  longlong local_218;
  TSet<TTuple<TObjectPtr<ULandscapeGrassType>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<ULandscapeGrassType>,int,0>,FDefaultSetAllocator>
  *pTStack_210;
  TSet<TTuple<TObjectPtr<ULandscapeGrassType>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<ULandscapeGrassType>,int,0>,FDefaultSetAllocator>
  *local_208;
  char local_200;
  char cStack_1ff;
  undefined4 local_1f8;
  int local_1f4;
  int local_1f0;
  undefined1 local_1ec [20];
  TSet<TTuple<TObjectPtr<ULandscapeGrassType>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<ULandscapeGrassType>,int,0>,FDefaultSetAllocator>
  *local_1d8;
  UObject *local_1d0;
  FScriptContainerElement *local_1c8;
  longlong *local_1c0;
  uint uStack_1b8;
  uint uStack_1b4;
  TBitArray<FDefaultBitArrayAllocator> *local_1b0;
  undefined4 uStack_1a8;
  uint uStack_1a4;
  uint local_1a0;
  undefined4 uStack_19c;
  int iStack_198;
  undefined4 uStack_194;
  longlong *local_190;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_188;
  undefined8 uStack_168;
  UObject **local_160;
  int *local_158;
  undefined1 local_150 [32];
  longlong local_130;
  TSet<TTuple<TObjectPtr<ULandscapeGrassType>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<ULandscapeGrassType>,int,0>,FDefaultSetAllocator>
  *pTStack_128;
  undefined4 local_104;
  undefined1 local_f8 [32];
  uint *local_d8;
  uint local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  int local_c4;
  ForElementType<FSetElementId> local_b8;
  int local_b0;
  undefined1 local_a8 [8];
  ForAnyElementType local_a0;
  undefined8 local_98;
  TBitArray<FDefaultBitArrayAllocator> local_90;
  undefined8 uStack_70;
  undefined8 local_68;
  void *local_60;
  ulonglong local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_278;
  if (GGrassDiscardDataOnLoad != 0) {
    bVar9 = false;
    pTVar1 = &this->WeightOffsets;
    local_1ec._4_8_ = this;
    local_1d8 = (TSet<TTuple<TObjectPtr<ULandscapeGrassType>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<ULandscapeGrassType>,int,0>,FDefaultSetAllocator>
                 *)pTVar1;
    TSet<TTuple<TObjectPtr<ULandscapeGrassType>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<ULandscapeGrassType>,int,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_150,
               (TSet<TTuple<TObjectPtr<ULandscapeGrassType>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<ULandscapeGrassType>,int,0>,FDefaultSetAllocator>
                *)pTVar1);
    uVar11 = 1;
    local_200 = '\0';
    cStack_1ff = '\0';
    stack0xfffffffffffffdd8 = local_150._16_16_;
    local_238 = (longlong *)local_150._0_8_;
    auStack_230._0_8_ = local_150._8_8_;
    local_218 = local_130;
    pTStack_210 = pTStack_128;
    uVar14 = local_150._24_8_ >> 0x20;
    uVar17 = local_150._28_4_;
    local_208 = (TSet<TTuple<TObjectPtr<ULandscapeGrassType>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<ULandscapeGrassType>,int,0>,FDefaultSetAllocator>
                 *)pTVar1;
    bVar8 = false;
    if ((int)uVar17 < *(int *)(local_150._16_8_ + 0x18)) {
      do {
        bVar9 = bVar8;
        lVar15 = *(longlong *)(*local_238 + (longlong)(int)uVar14 * 0x18);
        if ((lVar15 == 0) || ((*(byte *)(lVar15 + 0x38) & 1) != 0)) {
          TSet<TTuple<TObjectPtr<ULandscapeGrassType>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<ULandscapeGrassType>,int,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_210,uVar17);
          local_200 = '\x01';
          bVar9 = true;
        }
        uStack_220 = uStack_220 & ~auStack_230._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_230);
        uVar14 = (ulonglong)uStack_21c;
        uVar17 = uStack_21c;
        bVar8 = bVar9;
      } while ((int)uStack_21c < *(int *)(auStack_230._8_8_ + 0x18));
      if ((local_200 != '\0') && (cStack_1ff != '\0')) {
        uVar17 = *(int *)&(local_208->Elements).field_0x8 -
                 *(int *)&(local_208->Elements).field_0x34;
        if (uVar17 < 4) {
          iVar10 = 1;
        }
        else {
          uVar14 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
          lVar15 = 0x3f;
          if (uVar14 != 0) {
            for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          local_1f8 = (undefined4)lVar15;
          iVar10 = 1 << ((byte)lVar15 & 0x1f);
        }
        if (((0 < (int)uVar17) && (local_208->HashSize < iVar10)) || (iVar10 < local_208->HashSize))
        {
          local_208->HashSize = iVar10;
          TSet<TTuple<TObjectPtr<ULandscapeGrassType>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<ULandscapeGrassType>,int,0>,FDefaultSetAllocator>
          ::Rehash(local_208);
        }
      }
    }
    if (*(int *)&(this->WeightOffsets).field_0x8 == *(int *)&(this->WeightOffsets).field_0x34) {
      local_a8._0_4_ = -1;
      local_a0.Data = (FScriptContainerElement *)0x0;
      local_a8._4_4_ = 0;
      local_90.AllocatorInstance.InlineData[0] = '\0';
      local_90.AllocatorInstance.InlineData[1] = '\0';
      local_90.AllocatorInstance.InlineData[2] = '\0';
      local_90.AllocatorInstance.InlineData[3] = '\0';
      local_90.AllocatorInstance.InlineData[4] = '\0';
      local_90.AllocatorInstance.InlineData[5] = '\0';
      local_90.AllocatorInstance.InlineData[6] = '\0';
      local_90.AllocatorInstance.InlineData[7] = '\0';
      local_90.AllocatorInstance.InlineData[8] = '\0';
      local_90.AllocatorInstance.InlineData[9] = '\0';
      local_90.AllocatorInstance.InlineData[10] = '\0';
      local_90.AllocatorInstance.InlineData[0xb] = '\0';
      local_90.AllocatorInstance.InlineData[0xc] = '\0';
      local_90.AllocatorInstance.InlineData[0xd] = '\0';
      local_90.AllocatorInstance.InlineData[0xe] = '\0';
      local_90.AllocatorInstance.InlineData[0xf] = '\0';
      local_90.NumBits = ___xmm_00000000ffffffff0000008000000000;
      local_90.MaxBits = _UNK_150631d94;
      uStack_70 = _UNK_150631d98;
      local_68 = 0;
      local_58 = 0;
      local_98 = 0;
      local_90.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_60 = (void *)0x0;
      local_50.Data = (FScriptContainerElement *)0x0;
      local_48._0_4_ = 0;
      local_48._4_4_ = 0;
      operator=(this,(FLandscapeComponentGrassData *)local_a8);
      if (local_50.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data);
      }
      local_58 = local_58 & 0xffffffff00000000;
      if (local_60 != (void *)0x0) {
        FMemory::Free(local_60);
      }
      uVar14 = local_98 >> 0x20;
      local_98 = local_98 & 0xffffffff00000000;
      if ((int)uVar14 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&local_a0,0,(int *)((longlong)&local_98 + 4));
      }
      iVar10 = local_90.MaxBits;
      uStack_70 = 0xffffffff;
      local_90._24_8_ = (ulonglong)(uint)local_90.MaxBits << 0x20;
      if (0x80 < (uint)iVar10) {
        local_90.NumBits = 0;
        local_90.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_90,0);
      }
      if (local_90.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_90.AllocatorInstance.SecondaryData);
      }
      if (local_a0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data);
      }
      this->NumElements = 0;
    }
    else if (bVar9) {
      pTVar12 = (TSet<TTuple<ULandscapeGrassType_*,int>,TDefaultMapHashableKeyFuncs<ULandscapeGrassType_*,int,0>,FDefaultSetAllocator>
                 *)ObjectPtrDecay<TMap<TObjectPtr<ULandscapeGrassType>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<ULandscapeGrassType>,int,0>_>,UE::Core::Private::TObjectPtrDecayTypeOf<TMap<TObjectPtr<ULandscapeGrassType>,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<ULandscapeGrassType>,int,0>_>_>,TMap<ULandscapeGrassType_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ULandscapeGrassType_*,int,0>_>_>
                             (pTVar1);
      local_cc = 0x80;
      local_f8._0_8_ = 0;
      local_f8._8_8_ = 0;
      local_d8 = (uint *)0x0;
      uVar17 = 0;
      local_d0 = 0;
      local_c4 = 0;
      local_b8 = (ForElementType<FSetElementId>)0x0;
      local_b0 = 0;
      local_c8 = 0xffffffff;
      TSet<TTuple<ULandscapeGrassType_*,int>,TDefaultMapHashableKeyFuncs<ULandscapeGrassType_*,int,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<ULandscapeGrassType_*,int>,TDefaultMapHashableKeyFuncs<ULandscapeGrassType_*,int,0>,FDefaultSetAllocator>
                   *)local_f8,pTVar12);
      _Src = (this->HeightWeightData).AllocatorInstance.Data;
      (this->HeightWeightData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_240 = (this->HeightWeightData).ArrayNum;
      (this->HeightWeightData).ArrayNum = 0;
      (this->HeightWeightData).ArrayMax = 0;
      local_1ec._12_8_ = _Src;
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->HeightWeightData,((local_f8._8_4_ - local_c4) + 2) * this->NumElements,
                 Default);
      pFVar2 = (this->HeightWeightData).AllocatorInstance.Data;
      iVar10 = this->NumElements * 2;
      local_248 = 0;
      local_1c8 = pFVar2;
      if (((this->HeightWeightData).ArrayNum < iVar10) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(CopyOffset + CopySize) <= HeightWeightData.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrass.cpp"
                             ,0x69b,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      memcpy(pFVar2 + local_248,_Src,(longlong)iVar10);
      uVar19 = local_d0;
      local_248 = local_248 + iVar10;
      local_1a0 = 0;
      iVar10 = this->NumElements;
      uStack_1a4 = local_1a0;
      if (local_d0 != 0) {
        puVar18 = (uint *)(local_f8 + 0x10);
        if (local_d8 != (uint *)0x0) {
          puVar18 = local_d8;
        }
        uVar20 = *puVar18;
        local_1a0 = 0;
        uVar17 = 0;
        while (uVar20 == 0) {
          lVar15 = (longlong)(int)uVar17;
          local_1a0 = local_1a0 + 0x20;
          uVar17 = uVar17 + 1;
          uStack_1a4 = local_d0;
          if ((int)((local_d0 - 1) + ((int)(local_d0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar17)
          goto LAB_145f4ee91;
          uVar20 = puVar18[lVar15 + 1];
        }
        uVar11 = -uVar20 & uVar20;
        uVar14 = (ulonglong)uVar11 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        local_1f4 = (int)lVar15;
        uStack_1a4 = (local_1a0 - 1) + local_1f4;
        if ((int)local_d0 < (int)uStack_1a4) {
          uStack_1a4 = local_d0;
        }
      }
LAB_145f4ee91:
      local_1c0 = (longlong *)local_f8;
      uStack_19c = local_104;
      local_1b0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10);
      iStack_198 = local_f8._8_4_ - local_c4;
      uVar20 = local_d0 & 0xffffffe0;
      uStack_1a8 = 0xffffffff;
      TStack_188.CurrentBitIndex = uStack_1a4;
      TStack_188.UnvisitedBitMask = 0xffffffff;
      TStack_188._padding_ = CONCAT44(uVar11,uVar17);
      iVar16 = (int)local_d0 >> 5;
      TStack_188._28_4_ = local_104;
      TStack_188.BaseBitIndex = local_1a0;
      uStack_168 = CONCAT44(uStack_194,iStack_198);
      bVar13 = (byte)local_d0;
      uStack_1b8 = uVar17;
      uStack_1b4 = uVar11;
      local_190 = local_1c0;
      TStack_188.Array = local_1b0;
      if (((int)local_d0 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar9)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_00 = local_1d8;
      uVar6 = local_1ec._12_8_;
      uVar5 = local_1ec._4_8_;
      iVar4 = local_240;
      if (uVar19 != local_d0) {
        puVar18 = (uint *)(local_f8 + 0x10);
        if (local_d8 != (uint *)0x0) {
          puVar18 = local_d8;
        }
        uVar17 = -1 << (bVar13 & 0x1f) & puVar18[iVar16];
        while (uVar17 == 0) {
          lVar15 = (longlong)iVar16;
          uVar20 = uVar20 + 0x20;
          iVar16 = iVar16 + 1;
          uVar19 = local_d0;
          if ((int)((local_d0 - 1) + ((int)(local_d0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
          goto LAB_145f4efc0;
          uVar17 = puVar18[lVar15 + 1];
        }
        uVar14 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
        lVar15 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        local_1f0 = (int)lVar15;
        uVar19 = local_1f0 + -1 + uVar20;
        if ((int)local_d0 < (int)uVar19) {
          uVar19 = local_d0;
        }
      }
LAB_145f4efc0:
      while( true ) {
        plVar7 = local_190;
        if ((int)local_190[1] - *(int *)((longlong)local_190 + 0x34) != (int)uStack_168) {
          local_244[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<ULandscapeGrassType_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_244);
        }
        if (((TStack_188.CurrentBitIndex == uVar19) &&
            (TStack_188.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_f8 + 0x10))) &&
           (plVar7 == (longlong *)local_f8)) break;
        lVar15 = *plVar7;
        iVar16 = *(int *)(lVar15 + 8 + (longlong)TStack_188.CurrentBitIndex * 0x18);
        local_1d0 = *(UObject **)(lVar15 + (longlong)TStack_188.CurrentBitIndex * 0x18);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1d0 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_1d0);
        }
        local_160 = &local_1d0;
        local_158 = &local_248;
        TSet<TTuple<TObjectPtr<ULandscapeGrassType>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<ULandscapeGrassType>,int,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<TObjectPtr<ULandscapeGrassType>_&&,int_const_&>_>
                  (this_00,(TPairInitializer<TObjectPtr<ULandscapeGrassType>_&&,int_const_&> *)
                           local_1ec,(bool *)&local_160);
        if ((((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(uVar5 + 0x58))->ArrayNum <
             local_248 + iVar10) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(CopyOffset + CopySize) <= HeightWeightData.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrass.cpp"
                               ,0x6a6,L""), bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((iVar4 < iVar16 + iVar10) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(PreviousOffset + CopySize) <= PreviousHeightWeightData.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrass.cpp"
                               ,0x6a7,L""), bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        memcpy(local_1c8 + local_248,(FScriptContainerElement *)(uVar6 + (longlong)iVar16),
               (longlong)iVar10);
        local_248 = local_248 + iVar10;
        TStack_188.UnvisitedBitMask = TStack_188.UnvisitedBitMask & ~TStack_188._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_188);
      }
      if ((FScriptContainerElement *)uVar6 != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)uVar6);
      }
      local_b0 = 0;
      if (local_b8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_b8);
      }
      TSparseArray<TSparseSetElement<TTuple<ULandscapeGrassType_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<ULandscapeGrassType_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<ULandscapeGrassType_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_f8);
    }
  }
  return;
}

// Contains @ 145f4f4c0

bool __thiscall
FLandscapeComponentGrassData::Contains
          (FLandscapeComponentGrassData *this,ULandscapeGrassType *param_1)

{
  int iVar1;
  uint uVar2;
  TObjectPtr<ULandscapeGrassType_const_>_u_0 local_res8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (ULandscapeGrassType *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.DebugPtr = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (param_1 != (ULandscapeGrassType *)0x0) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_1 != (ULandscapeGrassType *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
  }
  uVar2 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  iVar1 = TSet<TTuple<TObjectPtr<ULandscapeGrassType>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<ULandscapeGrassType>,int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TObjectPtr<ULandscapeGrassType_const_>_>
                    ((TSet<TTuple<TObjectPtr<ULandscapeGrassType>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<ULandscapeGrassType>,int,0>,FDefaultSetAllocator>
                      *)&this->WeightOffsets,uVar2 >> 0x10 ^ uVar2,
                     (TObjectPtr<ULandscapeGrassType_const_> *)&local_res8.ObjectPtr);
  return iVar1 != -1;
}

// GetAllocatedSize @ 145f533f0

ulong64 __thiscall
FLandscapeComponentGrassData::GetAllocatedSize(FLandscapeComponentGrassData *this)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)&(this->WeightOffsets).field_0x48;
  if (uVar1 < 2) {
    lVar2 = 0;
  }
  else {
    lVar2 = (longlong)(int)uVar1 << 2;
  }
  return lVar2 + (ulonglong)((*(int *)&(this->WeightOffsets).field_0x2c + 0x1fU >> 5) << 2) +
         (longlong)*(int *)&(this->WeightOffsets).field_0xc * 0x18 + 0x68 +
         (longlong)(this->HeightWeightData).ArrayMax;
}

// GetHeightData @ 145f539c0

TArrayView<unsigned_short,int> * __thiscall
FLandscapeComponentGrassData::GetHeightData
          (FLandscapeComponentGrassData *this,TArrayView<unsigned_short,int> *__return_storage_ptr__
          )

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<unsigned_short,int> *pTVar5;
  
  iVar1 = (this->HeightWeightData).ArrayNum;
  if (iVar1 == 0) {
    __return_storage_ptr__->DataPtr = (ushort *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    return __return_storage_ptr__;
  }
  if (iVar1 < this->NumElements) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumElements <= HeightWeightData.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrass.cpp"
                       ,0x5b7,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<unsigned_short,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  iVar1 = this->NumElements;
  if ((this->HeightWeightData).ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<unsigned_short,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (this->HeightWeightData).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  __return_storage_ptr__->DataPtr = (ushort *)pFVar2;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<unsigned_short,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

// GetWeightData @ 145f570e0

TArrayView<unsigned_char,int> * __thiscall
FLandscapeComponentGrassData::GetWeightData
          (FLandscapeComponentGrassData *this,TArrayView<unsigned_char,int> *__return_storage_ptr__,
          ULandscapeGrassType *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<unsigned_char,int> *pTVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  TObjectPtr<ULandscapeGrassType_const_>_u_0 local_res8;
  
  if ((this->HeightWeightData).ArrayNum != 0) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (ULandscapeGrassType *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.DebugPtr = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (param_1 != (ULandscapeGrassType *)0x0) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (param_1 != (ULandscapeGrassType *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
    }
    uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    iVar4 = TSet<TTuple<TObjectPtr<ULandscapeGrassType>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<ULandscapeGrassType>,int,0>,FDefaultSetAllocator>
            ::FindIndexByHash<TObjectPtr<ULandscapeGrassType_const_>_>
                      ((TSet<TTuple<TObjectPtr<ULandscapeGrassType>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<ULandscapeGrassType>,int,0>,FDefaultSetAllocator>
                        *)&this->WeightOffsets,uVar6 >> 0x10 ^ uVar6,
                       (TObjectPtr<ULandscapeGrassType_const_> *)&local_res8.ObjectPtr);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&this->WeightOffsets + (longlong)iVar4 * 0x18;
      puVar7 = (uint *)(lVar1 + 8);
      if (lVar1 == 0) {
        puVar7 = (uint *)0x0;
      }
      if (puVar7 != (uint *)0x0) {
        uVar6 = *puVar7;
        if (((this->HeightWeightData).ArrayNum < (int)(this->NumElements + uVar6)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Offset + NumElements <= HeightWeightData.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrass.cpp"
                               ,0x5a2,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TArrayView<unsigned_char,int> *)(*pcVar2)();
          return pTVar5;
        }
        if ((this->NumElements == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumElements",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrass.cpp"
                               ,0x5a3,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TArrayView<unsigned_char,int> *)(*pcVar2)();
          return pTVar5;
        }
        iVar4 = this->NumElements;
        uVar8 = 0;
        if ((int)uVar6 < (this->HeightWeightData).ArrayNum) {
          uVar8 = ~uVar6 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TArrayView<unsigned_char,int> *)(*pcVar2)();
          return pTVar5;
        }
        __return_storage_ptr__->ArrayNum = iVar4;
        __return_storage_ptr__->DataPtr =
             (uchar *)((this->HeightWeightData).AllocatorInstance.Data + (int)uVar6);
        if (-1 < iVar4) {
          return __return_storage_ptr__;
        }
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (!bVar3) {
          return __return_storage_ptr__;
        }
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArrayView<unsigned_char,int> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  __return_storage_ptr__->DataPtr = (uchar *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  return __return_storage_ptr__;
}

// HasData @ 145f57730

bool __thiscall FLandscapeComponentGrassData::HasData(FLandscapeComponentGrassData *this)

{
  if (-1 < this->NumElements) {
    return 0 < (this->HeightWeightData).ArrayNum;
  }
  return false;
}

// HasValidData @ 145f57750

bool __thiscall FLandscapeComponentGrassData::HasValidData(FLandscapeComponentGrassData *this)

{
  return (bool)((byte)((uint)this->NumElements >> 0x1f) ^ 1);
}

// HasWeightData @ 145f57760

bool __thiscall FLandscapeComponentGrassData::HasWeightData(FLandscapeComponentGrassData *this)

{
  return *(int *)&(this->WeightOffsets).field_0x8 != *(int *)&(this->WeightOffsets).field_0x34;
}

// InitializeFrom @ 145f581c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FLandscapeComponentGrassData::InitializeFrom
          (FLandscapeComponentGrassData *this,
          TArray<unsigned_short,TSizedDefaultAllocator<32>_> *param_1,
          TMap<ULandscapeGrassType_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ULandscapeGrassType_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>
          *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  TMap<ULandscapeGrassType_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ULandscapeGrassType_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar9;
  bool bVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  uint uVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  undefined1 local_res8 [8];
  int local_res18 [2];
  int local_res20;
  undefined1 local_e4 [12];
  UObject *local_d8;
  TMap<ULandscapeGrassType_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ULandscapeGrassType_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>
  *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  TMap<ULandscapeGrassType_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ULandscapeGrassType_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>,0>_>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  UObject **local_70;
  int *local_68;
  undefined4 local_44;
  
  TSet<TTuple<TObjectPtr<ULandscapeGrassType>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<ULandscapeGrassType>,int,0>,FDefaultSetAllocator>
  ::Empty((TSet<TTuple<TObjectPtr<ULandscapeGrassType>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<ULandscapeGrassType>,int,0>,FDefaultSetAllocator>
           *)&this->WeightOffsets,*(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34);
  if (*(int *)&param_2->field_0x8 == *(int *)&param_2->field_0x34) {
    piVar1 = &(this->HeightWeightData).ArrayMax;
    this->NumElements = 0;
    (this->HeightWeightData).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&(this->HeightWeightData).AllocatorInstance,0,piVar1);
      return;
    }
  }
  else {
    iVar3 = param_1->ArrayNum;
    this->NumElements = iVar3;
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&this->HeightWeightData,
               ((*(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34) + 2) * iVar3,Default);
    iVar12 = 0;
    pFVar6 = (this->HeightWeightData).AllocatorInstance.Data;
    iVar3 = param_1->ArrayNum * 2;
    local_res18[0] = 0;
    local_e4._4_8_ = pFVar6;
    if (((this->HeightWeightData).ArrayNum < iVar3) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(CopyOffset + CopySize) <= HeightWeightData.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrass.cpp"
                            ,0x5ce,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    memcpy(pFVar6 + local_res18[0],(param_1->AllocatorInstance).Data,(longlong)iVar3);
    local_res18[0] = local_res18[0] + iVar3;
    uStack_c4 = 1;
    iVar3 = *(int *)&param_2->field_0x28;
    local_c0 = &param_2->field_0x10;
    iVar4 = this->NumElements;
    local_b0 = 0;
    iStack_b4 = 0;
    if (iVar3 != 0) {
      puVar18 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar18 = (uint *)local_c0;
      }
      uVar16 = *puVar18;
      local_b0 = 0;
      while (uVar16 == 0) {
        lVar11 = (longlong)iVar12;
        local_b0 = local_b0 + 0x20;
        iVar12 = iVar12 + 1;
        iStack_b4 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_145f5833d;
        uVar16 = puVar18[lVar11 + 1];
      }
      uStack_c4 = -uVar16 & uVar16;
      uVar2 = (ulonglong)uStack_c4 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_res20 = (int)lVar11;
      iStack_b4 = local_b0 + -1 + local_res20;
      if (iVar3 < iStack_b4) {
        iStack_b4 = iVar3;
      }
    }
LAB_145f5833d:
    uVar16 = *(uint *)&param_2->field_0x28;
    uStack_ac = local_44;
    iStack_a8 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
    uStack_b8 = 0xffffffff;
    uVar15 = uVar16 & 0xffffffe0;
    TStack_98.CurrentBitIndex = iStack_b4;
    TStack_98.UnvisitedBitMask = 0xffffffff;
    TStack_98._padding_ = CONCAT44(uStack_c4,iVar12);
    iVar13 = (int)uVar16 >> 5;
    TStack_98._28_4_ = local_44;
    TStack_98.BaseBitIndex = local_b0;
    uStack_78 = CONCAT44(uStack_a4,iStack_a8);
    local_d0 = param_2;
    iStack_c8 = iVar12;
    local_a0 = param_2;
    TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_c0;
    if ((((int)uVar16 < 0) || (iVar3 < (int)uVar16)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar8 = local_e4._4_8_;
    uVar5 = *(uint *)&param_2->field_0x28;
    if (uVar16 != uVar5) {
      puVar17 = *(undefined1 **)&param_2->field_0x20;
      if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
        puVar17 = &param_2->field_0x10;
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar13 * 4);
      while (uVar16 == 0) {
        lVar11 = (longlong)iVar13;
        uVar15 = uVar15 + 0x20;
        iVar13 = iVar13 + 1;
        uVar16 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_145f58450;
        uVar16 = *(uint *)(puVar17 + lVar11 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar16 = (int)lVar11 + -1 + uVar15;
      if ((int)uVar5 < (int)uVar16) {
        uVar16 = uVar5;
      }
    }
LAB_145f58450:
    while( true ) {
      pTVar9 = local_a0;
      if (*(int *)&local_a0->field_0x8 - *(int *)&local_a0->field_0x34 != (int)uStack_78) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<ULandscapeGrassType_*,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_98.CurrentBitIndex == uVar16) &&
          (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)&param_2->field_0x10)) &&
         (pTVar9 == param_2)) break;
      puVar14 = (undefined8 *)(*(longlong *)pTVar9 + (longlong)TStack_98.CurrentBitIndex * 0x20);
      local_d8 = (UObject *)*puVar14;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_d8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_d8);
      }
      local_70 = &local_d8;
      local_68 = local_res18;
      TSet<TTuple<TObjectPtr<ULandscapeGrassType>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<ULandscapeGrassType>,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<TObjectPtr<ULandscapeGrassType>_&&,int_const_&>_>
                ((TSet<TTuple<TObjectPtr<ULandscapeGrassType>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<ULandscapeGrassType>,int,0>,FDefaultSetAllocator>
                  *)&this->WeightOffsets,
                 (TPairInitializer<TObjectPtr<ULandscapeGrassType>_&&,int_const_&> *)local_e4,
                 (bool *)&local_70);
      if ((*(int *)(puVar14 + 2) != this->NumElements) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair.Value.Num() == NumElements",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrass.cpp"
                              ,0x5d8,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (((this->HeightWeightData).ArrayNum < local_res18[0] + iVar4) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(CopyOffset + CopySize) <= HeightWeightData.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrass.cpp"
                              ,0x5d9,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      memcpy((FScriptContainerElement *)(uVar8 + (longlong)local_res18[0]),(void *)puVar14[1],
             (longlong)iVar4);
      local_res18[0] = local_res18[0] + iVar4;
      TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
    }
  }
  return;
}

// InitializeFrom @ 145f58590

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FLandscapeComponentGrassData::InitializeFrom
          (FLandscapeComponentGrassData *this,IBuffer2DView<unsigned_short> *param_1,
          TMap<ULandscapeGrassType_*,IBuffer2DView<unsigned_char>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ULandscapeGrassType_*,IBuffer2DView<unsigned_char>_*,0>_>
          *param_2,bool param_3)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  code *pcVar8;
  ForElementType<unsigned_int> FVar9;
  TMap<ULandscapeGrassType_*,IBuffer2DView<unsigned_char>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ULandscapeGrassType_*,IBuffer2DView<unsigned_char>_*,0>_>
  *pTVar10;
  bool bVar11;
  char cVar12;
  int iVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  ForElementType<unsigned_int> FVar19;
  uint *puVar20;
  uint uVar21;
  undefined1 local_res8 [8];
  uint local_108 [2];
  ForElementType<unsigned_int> local_100;
  int local_f8;
  int local_f4;
  TPairInitializer<TObjectPtr<ULandscapeGrassType>_&&,int_const_&> local_f0;
  UObject *local_e0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_d8;
  TMap<ULandscapeGrassType_*,IBuffer2DView<unsigned_char>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ULandscapeGrassType_*,IBuffer2DView<unsigned_char>_*,0>_>
  *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  TMap<ULandscapeGrassType_*,IBuffer2DView<unsigned_char>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ULandscapeGrassType_*,IBuffer2DView<unsigned_char>_*,0>_>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  UObject **local_70;
  uint *local_68;
  undefined4 local_44;
  
  iVar16 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  TSet<TTuple<TObjectPtr<ULandscapeGrassType>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<ULandscapeGrassType>,int,0>,FDefaultSetAllocator>
  ::Empty((TSet<TTuple<TObjectPtr<ULandscapeGrassType>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<ULandscapeGrassType>,int,0>,FDefaultSetAllocator>
           *)&this->WeightOffsets,iVar16);
  pTVar1 = &this->HeightWeightData;
  local_d8 = pTVar1;
  if (iVar16 == 0) {
    this->NumElements = 0;
    piVar2 = &(this->HeightWeightData).ArrayMax;
    (this->HeightWeightData).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&pTVar1->AllocatorInstance,0,piVar2);
      return;
    }
  }
  else {
    iVar13 = (**(code **)((longlong)*param_1 + 0x10))(param_1);
    this->NumElements = iVar13;
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (pTVar1,(iVar16 + 2) * iVar13,Default);
    iVar13 = 0;
    pFVar15 = (pTVar1->AllocatorInstance).Data;
    iVar16 = this->NumElements * 2;
    local_108[0] = 0;
    local_f0.Value = (int *)pFVar15;
    if (((this->HeightWeightData).ArrayNum < iVar16) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(CopyOffset + CopySize) <= HeightWeightData.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrass.cpp"
                            ,0x5f7,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    (**(code **)*param_1)(param_1,pFVar15 + (int)local_108[0],(ulonglong)(longlong)iVar16 >> 1);
    local_108[0] = local_108[0] + iVar16;
    local_100 = (ForElementType<unsigned_int>)&param_2->field_0x10;
    iVar16 = *(int *)&param_2->field_0x28;
    uStack_c4 = 1;
    iVar5 = this->NumElements;
    iStack_b4 = iVar13;
    local_b0 = iVar13;
    if (iVar16 != 0) {
      puVar20 = *(uint **)&param_2->field_0x20;
      if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
        puVar20 = (uint *)local_100;
      }
      uVar18 = *puVar20;
      while (uVar18 == 0) {
        lVar14 = (longlong)iVar13;
        local_b0 = local_b0 + 0x20;
        iVar13 = iVar13 + 1;
        iStack_b4 = iVar16;
        if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_145f58721;
        uVar18 = (puVar20 + 1)[lVar14];
      }
      uStack_c4 = -uVar18 & uVar18;
      uVar4 = (ulonglong)uStack_c4 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_f8 = (int)lVar14;
      iStack_b4 = local_b0 + -1 + local_f8;
      if (iVar16 < iStack_b4) {
        iStack_b4 = iVar16;
      }
    }
LAB_145f58721:
    uStack_ac = local_44;
    iStack_a8 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
    uVar18 = *(uint *)&param_2->field_0x28;
    TStack_98._padding_ = CONCAT44(uStack_c4,iVar13);
    uStack_b8 = 0xffffffff;
    uVar21 = uVar18 & 0xffffffe0;
    TStack_98.CurrentBitIndex = iStack_b4;
    TStack_98.UnvisitedBitMask = 0xffffffff;
    iVar17 = (int)uVar18 >> 5;
    TStack_98._28_4_ = local_44;
    TStack_98.BaseBitIndex = local_b0;
    uStack_78 = CONCAT44(uStack_a4,iStack_a8);
    local_d0 = param_2;
    iStack_c8 = iVar13;
    local_c0 = (undefined1 *)local_100;
    local_a0 = param_2;
    TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_100;
    if ((((int)uVar18 < 0) || (iVar16 < (int)uVar18)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    FVar9 = local_100;
    uVar6 = *(int *)((longlong)local_100 + 0x18);
    if (uVar18 != uVar6) {
      FVar19 = *(ForElementType<unsigned_int> *)((longlong)local_100 + 0x10);
      if (*(ForElementType<unsigned_int> *)((longlong)local_100 + 0x10) ==
          (ForElementType<unsigned_int>)0x0) {
        FVar19 = local_100;
      }
      uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)((longlong)FVar19 + (longlong)iVar17 * 4);
      while (uVar18 == 0) {
        lVar14 = (longlong)iVar17;
        uVar21 = uVar21 + 0x20;
        iVar17 = iVar17 + 1;
        uVar18 = uVar6;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
        goto LAB_145f58830;
        uVar18 = *(uint *)((undefined1 *)((longlong)FVar19 + 4) + lVar14 * 4);
      }
      uVar4 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_f4 = (int)lVar14;
      uVar18 = local_f4 + -1 + uVar21;
      if ((int)uVar6 < (int)uVar18) {
        uVar18 = uVar6;
      }
    }
LAB_145f58830:
    piVar2 = &(this->HeightWeightData).ArrayNum;
    while( true ) {
      pTVar10 = local_a0;
      if (*(int *)&local_a0->field_0x8 - *(int *)&local_a0->field_0x34 != (int)uStack_78) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<ULandscapeGrassType_*,IBuffer2DView<unsigned_char>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      pTVar1 = local_d8;
      uVar21 = local_108[0];
      if (((TStack_98.CurrentBitIndex == uVar18) &&
          ((ForElementType<unsigned_int>)TStack_98.Array == FVar9)) && (pTVar10 == param_2)) break;
      lVar14 = *(longlong *)pTVar10;
      puVar3 = (undefined8 *)(lVar14 + (longlong)TStack_98.CurrentBitIndex * 0x18);
      iVar16 = (**(code **)(**(longlong **)(lVar14 + 8 + (longlong)TStack_98.CurrentBitIndex * 0x18)
                           + 0x10))();
      if ((iVar16 != this->NumElements) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair.Value->Num() == NumElements",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrass.cpp"
                              ,0x600,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((*piVar2 < (int)(local_108[0] + iVar5)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(CopyOffset + CopySize) <= HeightWeightData.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeGrass.cpp"
                              ,0x601,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      plVar7 = (longlong *)puVar3[1];
      cVar12 = (**(code **)(*plVar7 + 8))
                         (plVar7,(FScriptContainerElement *)
                                 ((longlong)local_f0.Value + (longlong)(int)local_108[0]),iVar5);
      if ((!param_3) || (cVar12 == '\0')) {
        local_e0 = (UObject *)*puVar3;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e0 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_e0);
        }
        local_70 = &local_e0;
        local_68 = local_108;
        TSet<TTuple<TObjectPtr<ULandscapeGrassType>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<ULandscapeGrassType>,int,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<TObjectPtr<ULandscapeGrassType>_&&,int_const_&>_>
                  ((TSet<TTuple<TObjectPtr<ULandscapeGrassType>,int>,TDefaultMapHashableKeyFuncs<TObjectPtr<ULandscapeGrassType>,int,0>,FDefaultSetAllocator>
                    *)&this->WeightOffsets,&local_f0,(bool *)&local_70);
        local_108[0] = local_108[0] + iVar5;
      }
      TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
    }
    lVar14 = (longlong)(int)local_108[0];
    iVar16 = local_d8->ArrayNum;
    if (iVar16 < (int)local_108[0]) {
      iVar16 = local_108[0] - iVar16;
      iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (1,1,iVar16,&local_d8->AllocatorInstance,piVar2,&local_d8->ArrayMax);
      memset((pTVar1->AllocatorInstance).Data + iVar13,0,(longlong)iVar16);
    }
    else {
      if ((int)local_108[0] < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_108[0]);
      }
      if ((int)local_108[0] < iVar16) {
        uVar18 = iVar16 - local_108[0];
        if (((int)(uVar18 | local_108[0]) < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (uVar18 != 0) {
          pFVar15 = (pTVar1->AllocatorInstance).Data + lVar14;
          iVar16 = (pTVar1->ArrayNum - uVar18) - uVar21;
          if (iVar16 != 0) {
            memmove(pFVar15,pFVar15 + (int)uVar18,(longlong)iVar16);
          }
          pTVar1->ArrayNum = pTVar1->ArrayNum - uVar18;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,&pTVar1->AllocatorInstance,pTVar1->ArrayNum,&pTVar1->ArrayMax);
        }
      }
    }
  }
  return;
}

