// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 163

// Construct<FSourceEffectChorusBaseSettings> @ 14f09e0c0

void __cdecl UE::CoreUObject::Private::Construct<FSourceEffectChorusBaseSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 4) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3e99999a;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f000000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x3f000000;
  return;
}

// ConstructForTests<FSourceEffectChorusBaseSettings> @ 14f09e130

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FSourceEffectChorusBaseSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 4) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3e99999a;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f000000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x3f000000;
  return;
}

// Destruct<FSourceEffectChorusBaseSettings> @ 14f09e160

void __cdecl UE::CoreUObject::Private::Destruct<FSourceEffectChorusBaseSettings>(void *param_1)

{
  return;
}

// Construct<FSourceEffectMotionFilterSettings> @ 14f09e1b0

void __cdecl UE::CoreUObject::Private::Construct<FSourceEffectMotionFilterSettings>(void *param_1)

{
  ForAnyElementType *this;
  uint *puVar1;
  int *piVar2;
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  uint uVar14;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  this = (ForAnyElementType *)((longlong)param_1 + 0x20);
  *(undefined2 *)((longlong)param_1 + 8) = 2;
  uVar10 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x44480000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x40000000;
  puVar1 = (uint *)((longlong)param_1 + 0x68);
  *(undefined2 *)((longlong)param_1 + 0x14) = 2;
  piVar2 = (int *)((longlong)param_1 + 0x2c);
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x44480000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x40000000;
  *piVar2 = 0;
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  this->Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *puVar1 = 0;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0xc2c00000;
  for (lVar7 = 0x3f; 0x15UL >> lVar7 == 0; lVar7 = lVar7 + -1) {
  }
  uVar14 = 1 << ((byte)lVar7 & 0x1f);
  if (((int)*puVar1 < (int)uVar14) || ((int)uVar14 < (int)*puVar1)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
    TSet<TTuple<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings>,TDefaultMapHashableKeyFuncs<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings,0>,FDefaultSetAllocator>
    ::UnhashElements(this);
  }
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  if (*piVar2 != 7) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,7,this,0,piVar2);
  }
  this_00 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_1 + 0x30);
  *(undefined4 *)((longlong)param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  if ((*(int *)((longlong)param_1 + 0x4c) < 0x20) || (0x80 < *(int *)((longlong)param_1 + 0x4c))) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(this_00,0);
  }
  if (!bVar4) {
    return;
  }
  *puVar1 = uVar14;
  if (*(longlong *)((longlong)param_1 + 0x60) != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)param_1 + 0x60),0,0,4);
  }
  if (uVar14 == 0) goto LAB_14f0b86a4;
  uVar11 = uVar14;
  if (uVar14 < 2) {
    if (*(longlong *)((longlong)param_1 + 0x60) != 0) {
      uVar11 = 0;
      goto LAB_14f0b865d;
    }
  }
  else {
LAB_14f0b865d:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)param_1 + 0x60),0,uVar11,4);
  }
  if (0 < (int)uVar14) {
    uVar12 = (ulonglong)uVar14;
    uVar8 = uVar10;
    do {
      lVar7 = (longlong)param_1 + 0x58;
      if (*(longlong *)((longlong)param_1 + 0x60) != 0) {
        lVar7 = *(longlong *)((longlong)param_1 + 0x60);
      }
      uVar5 = uVar8 & (longlong)(int)uVar14 - 1U;
      uVar8 = uVar8 + 1;
      *(undefined4 *)(lVar7 + uVar5 * 4) = 0xffffffff;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
LAB_14f0b86a4:
  if (*puVar1 != 0) {
    uVar14 = *(uint *)((longlong)param_1 + 0x48);
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar14 != 0) {
      pTVar13 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)param_1 + 0x40);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)param_1 + 0x40) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar13 = this_00;
      }
      uVar11 = *(uint *)(pTVar13->AllocatorInstance).InlineData;
      uVar8 = uVar10;
      while (uVar11 == 0) {
        iVar9 = (int)uVar10;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        uStack_78 = iVar9 + 1;
        uVar10 = (ulonglong)uStack_78;
        if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_14f0b873e;
        uVar11 = *(uint *)((pTVar13->AllocatorInstance).InlineData + (longlong)iVar9 * 4 + 4);
      }
      uStack_74 = -uVar11 & uVar11;
      uVar10 = (ulonglong)uStack_74 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      uStack_64 = (uStack_60 - 1) + (int)lVar7;
      uVar10 = (ulonglong)uStack_64;
      if ((int)uVar14 < (int)uStack_64) {
LAB_14f0b873e:
        uVar10 = (ulonglong)uVar14;
        uStack_64 = uVar14;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    TStack_50.Array = this_00;
    if ((int)uVar10 < (int)uVar14) {
      do {
        pFVar3 = this->Data;
        lVar6 = (longlong)(int)uVar10;
        uVar14 = *puVar1 - 1 & (uint)(byte)pFVar3[lVar6 * 0x50];
        *(uint *)(pFVar3 + lVar6 * 0x50 + 0x4c) = uVar14;
        lVar7 = (longlong)param_1 + 0x58;
        if (*(longlong *)((longlong)param_1 + 0x60) != 0) {
          lVar7 = *(longlong *)((longlong)param_1 + 0x60);
        }
        uVar8 = (longlong)(int)*puVar1 - 1U & (ulonglong)uVar14;
        *(undefined4 *)(pFVar3 + lVar6 * 0x50 + 0x48) = *(undefined4 *)(lVar7 + uVar8 * 4);
        *(int *)(lVar7 + uVar8 * 4) = (int)uVar10;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar10 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return;
}

// ConstructForTests<FSourceEffectMotionFilterSettings> @ 14f09e1c0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FSourceEffectMotionFilterSettings>(void *param_1)

{
  ForAnyElementType *this;
  uint *puVar1;
  int *piVar2;
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  uint uVar14;
  uint uStack_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  this = (ForAnyElementType *)((longlong)param_1 + 0x20);
  *(undefined2 *)((longlong)param_1 + 8) = 2;
  uVar10 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x44480000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x40000000;
  puVar1 = (uint *)((longlong)param_1 + 0x68);
  *(undefined2 *)((longlong)param_1 + 0x14) = 2;
  piVar2 = (int *)((longlong)param_1 + 0x2c);
  *(undefined4 *)((longlong)param_1 + 0x18) = 0x44480000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x40000000;
  *piVar2 = 0;
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  this->Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *puVar1 = 0;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0xc2c00000;
  for (lVar7 = 0x3f; 0x15UL >> lVar7 == 0; lVar7 = lVar7 + -1) {
  }
  uVar14 = 1 << ((byte)lVar7 & 0x1f);
  if (((int)*puVar1 < (int)uVar14) || ((int)uVar14 < (int)*puVar1)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
    TSet<TTuple<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings>,TDefaultMapHashableKeyFuncs<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings,0>,FDefaultSetAllocator>
    ::UnhashElements(this);
  }
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  if (*piVar2 != 7) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,7,this,0,piVar2);
  }
  this_00 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_1 + 0x30);
  *(undefined4 *)((longlong)param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  if ((*(int *)((longlong)param_1 + 0x4c) < 0x20) || (0x80 < *(int *)((longlong)param_1 + 0x4c))) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(this_00,0);
  }
  if (!bVar4) {
    return;
  }
  *puVar1 = uVar14;
  if (*(longlong *)((longlong)param_1 + 0x60) != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)param_1 + 0x60),0,0,4);
  }
  if (uVar14 == 0) goto LAB_14f0b86a4;
  uVar11 = uVar14;
  if (uVar14 < 2) {
    if (*(longlong *)((longlong)param_1 + 0x60) != 0) {
      uVar11 = 0;
      goto LAB_14f0b865d;
    }
  }
  else {
LAB_14f0b865d:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)((longlong)param_1 + 0x60),0,uVar11,4);
  }
  if (0 < (int)uVar14) {
    uVar12 = (ulonglong)uVar14;
    uVar8 = uVar10;
    do {
      lVar7 = (longlong)param_1 + 0x58;
      if (*(longlong *)((longlong)param_1 + 0x60) != 0) {
        lVar7 = *(longlong *)((longlong)param_1 + 0x60);
      }
      uVar5 = uVar8 & (longlong)(int)uVar14 - 1U;
      uVar8 = uVar8 + 1;
      *(undefined4 *)(lVar7 + uVar5 * 4) = 0xffffffff;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
LAB_14f0b86a4:
  if (*puVar1 != 0) {
    uVar14 = *(uint *)((longlong)param_1 + 0x48);
    uStack_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar14 != 0) {
      pTVar13 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)param_1 + 0x40);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)param_1 + 0x40) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar13 = this_00;
      }
      uVar11 = *(uint *)(pTVar13->AllocatorInstance).InlineData;
      uVar8 = uVar10;
      while (uVar11 == 0) {
        iVar9 = (int)uVar10;
        uStack_60 = (int)uVar8 + 0x20;
        uVar8 = (ulonglong)uStack_60;
        uStack_78 = iVar9 + 1;
        uVar10 = (ulonglong)uStack_78;
        if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_78)
        goto LAB_14f0b873e;
        uVar11 = *(uint *)((pTVar13->AllocatorInstance).InlineData + (longlong)iVar9 * 4 + 4);
      }
      uStack_74 = -uVar11 & uVar11;
      uVar10 = (ulonglong)uStack_74 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      uStack_64 = (uStack_60 - 1) + (int)lVar7;
      uVar10 = (ulonglong)uStack_64;
      if ((int)uVar14 < (int)uStack_64) {
LAB_14f0b873e:
        uVar10 = (ulonglong)uVar14;
        uStack_64 = uVar14;
      }
    }
    TStack_50._padding_._0_4_ = uStack_78;
    TStack_50._padding_._4_4_ = uStack_74;
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_64;
    TStack_50._28_4_ = uStack_5c;
    TStack_50.BaseBitIndex = uStack_60;
    TStack_50.Array = this_00;
    if ((int)uVar10 < (int)uVar14) {
      do {
        pFVar3 = this->Data;
        lVar6 = (longlong)(int)uVar10;
        uVar14 = *puVar1 - 1 & (uint)(byte)pFVar3[lVar6 * 0x50];
        *(uint *)(pFVar3 + lVar6 * 0x50 + 0x4c) = uVar14;
        lVar7 = (longlong)param_1 + 0x58;
        if (*(longlong *)((longlong)param_1 + 0x60) != 0) {
          lVar7 = *(longlong *)((longlong)param_1 + 0x60);
        }
        uVar8 = (longlong)(int)*puVar1 - 1U & (ulonglong)uVar14;
        *(undefined4 *)(pFVar3 + lVar6 * 0x50 + 0x48) = *(undefined4 *)(lVar7 + uVar8 * 4);
        *(int *)(lVar7 + uVar8 * 4) = (int)uVar10;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar10 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
  return;
}

// Copy<FSourceEffectChorusBaseSettings> @ 14f09e1d0

bool __cdecl
UE::CoreUObject::Private::Copy<FSourceEffectChorusBaseSettings>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      puVar4[2] = uVar2;
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSubmixEffectStereoToQuadSettings> @ 14f09e210

void __cdecl UE::CoreUObject::Private::Construct<FSubmixEffectStereoToQuadSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  return;
}

// Destruct<FSourceEffectMotionFilterSettings> @ 14f09e230

void __cdecl UE::CoreUObject::Private::Destruct<FSourceEffectMotionFilterSettings>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  TSparseArray<TSparseSetElement<TTuple<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((void *)((longlong)param_1 + 0x20));
  return;
}

// ConstructForTests<FSubmixEffectStereoToQuadSettings> @ 14f09e2b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FSubmixEffectStereoToQuadSettings>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  return;
}

// Destruct<FSubmixEffectStereoToQuadSettings> @ 14f09e2d0

void __cdecl UE::CoreUObject::Private::Destruct<FSubmixEffectStereoToQuadSettings>(void *param_1)

{
  return;
}

// Copy<FSourceEffectMotionFilterSettings> @ 14f09e360

bool __cdecl
UE::CoreUObject::Private::Copy<FSourceEffectMotionFilterSettings>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar2);
      *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_2 + 4);
      *(undefined8 *)((longlong)param_1 + 8) = *(undefined8 *)((longlong)param_2 + 8);
      *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_2 + 0x10);
      *(undefined8 *)((longlong)param_1 + 0x14) = *(undefined8 *)((longlong)param_2 + 0x14);
      *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
      TSet<TTuple<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings>,TDefaultMapHashableKeyFuncs<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings,0>,FDefaultSetAllocator>
      ::operator=((undefined1 *)((longlong)param_1 + 0x20),
                  (TSet<TTuple<ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings>,TDefaultMapHashableKeyFuncs<ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings,0>,FDefaultSetAllocator>
                   *)((longlong)param_2 + 0x20));
      puVar1 = (undefined4 *)((longlong)param_2 + 0x70);
      param_2 = (void *)((longlong)param_2 + 0x78);
      *(undefined4 *)((longlong)param_1 + 0x70) = *puVar1;
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x78);
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FSubmixEffectStereoToQuadSettings> @ 14f09e410

bool __cdecl
UE::CoreUObject::Private::Copy<FSubmixEffectStereoToQuadSettings>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSourceEffectMotionFilterModulationSettings> @ 14f09ed10

void __cdecl
UE::CoreUObject::Private::Construct<FSourceEffectMotionFilterModulationSettings>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0x42480000;
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x3ff0000000000000;
  return;
}

// ConstructForTests<FSourceEffectMotionFilterModulationSettings> @ 14f09ed50

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FSourceEffectMotionFilterModulationSettings>
          (void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x3ff0000000000000;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0x3ff0000000000000;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0x42480000;
  return;
}

// Destruct<FSourceEffectMotionFilterModulationSettings> @ 14f09ed90

void __cdecl
UE::CoreUObject::Private::Destruct<FSourceEffectMotionFilterModulationSettings>(void *param_1)

{
  return;
}

// Construct<FSubmixEffectStereoDelaySettings> @ 14f09eda0

void __cdecl UE::CoreUObject::Private::Construct<FSubmixEffectStereoDelaySettings>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 3) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0x3f800000;
  *(undefined1 *)param_1 = 2;
  *(undefined4 *)((longlong)param_1 + 4) = 0x43fa0000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3ecccccd;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x469c4000;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x40000000;
  return;
}

// Construct<FSourceEffectBitCrusherSettings> @ 14f09edf0

void __cdecl UE::CoreUObject::Private::Construct<FSourceEffectBitCrusherSettings>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x88) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x90) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined4 *)param_1 = 0x45fa0000;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0x41000000;
  return;
}

// ConstructForTests<FSubmixEffectStereoDelaySettings> @ 14f09ee70

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FSubmixEffectStereoDelaySettings>(void *param_1)

{
  *(undefined1 *)param_1 = 2;
  *(undefined4 *)((longlong)param_1 + 4) = 0x43fa0000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3ecccccd;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x469c4000;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x40000000;
  return;
}

// ConstructForTests<FSourceEffectBitCrusherSettings> @ 14f09eed0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FSourceEffectBitCrusherSettings>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined4 *)((longlong)param_1 + 0x88) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x90) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined4 *)param_1 = 0x45fa0000;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0x41000000;
  return;
}

// Destruct<FSubmixEffectStereoDelaySettings> @ 14f09ef90

void __cdecl UE::CoreUObject::Private::Destruct<FSubmixEffectStereoDelaySettings>(void *param_1)

{
  return;
}

// Destruct<FSourceEffectBitCrusherSettings> @ 14f09efa0

void __cdecl UE::CoreUObject::Private::Destruct<FSourceEffectBitCrusherSettings>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xa8) = 0;
  if (*(void **)((longlong)param_1 + 0xa0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xa0));
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x60));
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 8));
  return;
}

// Copy<FSourceEffectMotionFilterModulationSettings> @ 14f09f140

bool __cdecl
UE::CoreUObject::Private::Copy<FSourceEffectMotionFilterModulationSettings>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  if (param_3 != 0) {
    lVar9 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = ((undefined8 *)(lVar9 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar9 + 0x10 + (longlong)param_1);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x20 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      puVar1 = (undefined8 *)(lVar9 + 0x30 + (longlong)param_1);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar9 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar2;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x28) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x30) = uVar7;
      *(undefined8 *)((longlong)param_1 + 0x38) = uVar8;
      param_1 = (void *)((longlong)param_1 + 0x40);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FSubmixEffectStereoDelaySettings> @ 14f09f230

bool __cdecl
UE::CoreUObject::Private::Copy<FSubmixEffectStereoDelaySettings>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined4 *)(lVar6 + 0x20 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar6 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar6 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined4 *)((longlong)param_1 + 0x20) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x24);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FSourceEffectBitCrusherSettings> @ 14f09f270

bool __cdecl
UE::CoreUObject::Private::Copy<FSourceEffectBitCrusherSettings>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
      ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                   *)((longlong)param_1 + 8),
                  (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                   *)((longlong)param_2 + 8));
      *(undefined4 *)((longlong)param_1 + 0x58) = *(undefined4 *)((longlong)param_2 + 0x58);
      TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
      ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                   *)((longlong)param_1 + 0x60),
                  (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                   *)((longlong)param_2 + 0x60));
      param_2 = (void *)((longlong)param_2 + 0xb0);
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0xb0);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSourceEffectIndividualFilterSettings> @ 14f09fc20

void __cdecl
UE::CoreUObject::Private::Construct<FSourceEffectIndividualFilterSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 2;
  *(undefined4 *)((longlong)param_1 + 4) = 0x44480000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x40000000;
  return;
}

// ConstructForTests<FSourceEffectIndividualFilterSettings> @ 14f09fc40

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FSourceEffectIndividualFilterSettings>(void *param_1)

{
  *(undefined2 *)param_1 = 2;
  *(undefined4 *)((longlong)param_1 + 4) = 0x44480000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x40000000;
  return;
}

// Destruct<FSourceEffectIndividualFilterSettings> @ 14f09fca0

void __cdecl
UE::CoreUObject::Private::Destruct<FSourceEffectIndividualFilterSettings>(void *param_1)

{
  return;
}

// Copy<FSourceEffectIndividualFilterSettings> @ 14f09fd70

bool __cdecl
UE::CoreUObject::Private::Copy<FSourceEffectIndividualFilterSettings>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSourceEffectBitCrusherBaseSettings> @ 14f09fe70

void __cdecl UE::CoreUObject::Private::Construct<FSourceEffectBitCrusherBaseSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x45fa0000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x41000000;
  return;
}

// ConstructForTests<FSourceEffectBitCrusherBaseSettings> @ 14f09fed0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FSourceEffectBitCrusherBaseSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x45fa0000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x41000000;
  return;
}

// Destruct<FSourceEffectBitCrusherBaseSettings> @ 14f09ff30

void __cdecl UE::CoreUObject::Private::Destruct<FSourceEffectBitCrusherBaseSettings>(void *param_1)

{
  return;
}

// Construct<FSubmixEffectMultibandCompressorSettings> @ 14f09ff80

void __cdecl
UE::CoreUObject::Private::Construct<FSubmixEffectMultibandCompressorSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x10100;
  *(undefined8 *)((longlong)param_1 + 8) = 0x101;
  *(undefined2 *)((longlong)param_1 + 0x25) = 0;
  *(undefined1 *)((longlong)param_1 + 0x27) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x40400000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  return;
}

// ConstructForTests<FSubmixEffectMultibandCompressorSettings> @ 14f0a0080

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FSubmixEffectMultibandCompressorSettings>(void *param_1)

{
  *(undefined2 *)param_1 = 0x100;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined1 *)((longlong)param_1 + 2) = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x101;
  return;
}

// Destruct<FSubmixEffectMultibandCompressorSettings> @ 14f0a00c0

void __cdecl
UE::CoreUObject::Private::Destruct<FSubmixEffectMultibandCompressorSettings>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x28);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FSourceEffectBitCrusherBaseSettings> @ 14f0a00f0

bool __cdecl
UE::CoreUObject::Private::Copy<FSourceEffectBitCrusherBaseSettings>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      uVar1 = *(undefined4 *)((longlong)param_2 + 4);
      *(undefined4 *)(lVar2 + (longlong)param_2) = *(undefined4 *)param_2;
      *(undefined4 *)(lVar2 + 4 + (longlong)param_2) = uVar1;
      param_2 = (void *)((longlong)param_2 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FSubmixEffectMultibandCompressorSettings> @ 14f0a0170

bool __cdecl
UE::CoreUObject::Private::Copy<FSubmixEffectMultibandCompressorSettings>
          (void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  void *pvVar4;
  undefined1 *puVar5;
  
  if (param_3 != 0) {
    pvVar4 = param_2;
    puVar5 = param_1;
    do {
      *puVar5 = puVar5[(longlong)param_2 - (longlong)param_1];
      puVar5[1] = *(undefined1 *)((longlong)pvVar4 + 1);
      puVar5[2] = *(undefined1 *)((longlong)pvVar4 + 2);
      *(undefined4 *)(puVar5 + 4) = *(undefined4 *)((longlong)pvVar4 + 4);
      puVar5[8] = *(undefined1 *)((longlong)pvVar4 + 8);
      puVar5[9] = *(undefined1 *)((longlong)pvVar4 + 9);
      puVar5[10] = *(undefined1 *)((longlong)pvVar4 + 10);
      puVar5[0xb] = *(undefined1 *)((longlong)pvVar4 + 0xb);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar4 + 0x10) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar4 + 0x10));
      }
      *(undefined8 *)(puVar5 + 0x10) = *(undefined8 *)((longlong)pvVar4 + 0x10);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar4 + 0x18) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar4 + 0x18));
      }
      *(undefined8 *)(puVar5 + 0x18) = *(undefined8 *)((longlong)pvVar4 + 0x18);
      *(undefined4 *)(puVar5 + 0x20) = *(undefined4 *)((longlong)pvVar4 + 0x20);
      puVar5[0x24] = *(undefined1 *)((longlong)pvVar4 + 0x24);
      pFVar1 = (ForAnyElementType *)(puVar5 + 0x28);
      if (pFVar1 != (ForAnyElementType *)((longlong)pvVar4 + 0x28)) {
        iVar3 = *(int *)((longlong)pvVar4 + 0x30);
        piVar2 = (int *)(puVar5 + 0x34);
        _Src = ((ForAnyElementType *)((longlong)pvVar4 + 0x28))->Data;
        *(int *)(puVar5 + 0x30) = iVar3;
        if ((iVar3 == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,4,iVar3,*piVar2,pFVar1,iVar3,piVar2);
          if (iVar3 != 0) {
            memcpy(pFVar1->Data,_Src,(longlong)iVar3 << 5);
          }
        }
      }
      param_3 = param_3 + -1;
      pvVar4 = (void *)((longlong)pvVar4 + 0x38);
      puVar5 = puVar5 + 0x38;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FDynamicsBandSettings> @ 14f0a1240

void __cdecl UE::CoreUObject::Private::Construct<FDynamicsBandSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x469c4000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xc0c00000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3fc00000;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0x41200000;
  return;
}

// ConstructForTests<FDynamicsBandSettings> @ 14f0a1280

void __cdecl UE::CoreUObject::Private::ConstructForTests<FDynamicsBandSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x469c4000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xc0c00000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3fc00000;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0x41200000;
  return;
}

// Destruct<FDynamicsBandSettings> @ 14f0a12c0

void __cdecl UE::CoreUObject::Private::Destruct<FDynamicsBandSettings>(void *param_1)

{
  return;
}

// Copy<FDynamicsBandSettings> @ 14f0a1550

bool __cdecl
UE::CoreUObject::Private::Copy<FDynamicsBandSettings>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      puVar1 = (undefined8 *)(lVar6 + (longlong)param_1);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      *(undefined8 *)param_1 = *puVar1;
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      param_1 = (void *)((longlong)param_1 + 0x20);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FModularSynthPresetBankEntry> @ 14f0a1d80

void __cdecl UE::CoreUObject::Private::Construct<FModularSynthPresetBankEntry>(void *param_1)

{
  ::FString::FString(param_1,L"Init");
  FModularSynthPreset::FModularSynthPreset((FModularSynthPreset *)((longlong)param_1 + 0x10));
  return;
}

// ConstructForTests<FModularSynthPresetBankEntry> @ 14f0a1db0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FModularSynthPresetBankEntry>(void *param_1)

{
  ::FString::FString(param_1,L"Init");
  FModularSynthPreset::FModularSynthPreset((FModularSynthPreset *)((longlong)param_1 + 0x10));
  return;
}

// Destruct<FModularSynthPresetBankEntry> @ 14f0a1de0

void __cdecl UE::CoreUObject::Private::Destruct<FModularSynthPresetBankEntry>(void *param_1)

{
  DestructItems<FEpicSynth1Patch,int>
            (*(FEpicSynth1Patch **)((longlong)param_1 + 0xe0),*(int *)((longlong)param_1 + 0xe8));
  if (*(void **)((longlong)param_1 + 0xe0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xe0));
  }
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FTableRowBase__6B_;
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FModularSynthPresetBankEntry> @ 14f0a1f40

bool __cdecl
UE::CoreUObject::Private::Copy<FModularSynthPresetBankEntry>
          (void *param_1,void *param_2,int param_3)

{
  FString *pFVar1;
  FString *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      pFVar1 = (FString *)(((longlong)param_2 - (longlong)param_1) + (longlong)this);
      ::FString::operator=(this,pFVar1);
      FModularSynthPreset::operator=
                ((FModularSynthPreset *)(this + 1),(FModularSynthPreset *)(pFVar1 + 1));
      param_3 = param_3 + -1;
      this = this + 0xf;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSourceEffectMidSideSpreaderSettings> @ 14f0a20d0

void __cdecl
UE::CoreUObject::Private::Construct<FSourceEffectMidSideSpreaderSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)param_1 = 0x3f000000;
  *(undefined2 *)((longlong)param_1 + 4) = 0x101;
  return;
}

// ConstructForTests<FSourceEffectMidSideSpreaderSettings> @ 14f0a2130

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FSourceEffectMidSideSpreaderSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3f000000;
  *(undefined2 *)((longlong)param_1 + 4) = 0x101;
  *(undefined1 *)((longlong)param_1 + 6) = 0;
  return;
}

// Destruct<FSourceEffectMidSideSpreaderSettings> @ 14f0a2150

void __cdecl UE::CoreUObject::Private::Destruct<FSourceEffectMidSideSpreaderSettings>(void *param_1)

{
  return;
}

// Copy<FSourceEffectMidSideSpreaderSettings> @ 14f0a2320

bool __cdecl
UE::CoreUObject::Private::Copy<FSourceEffectMidSideSpreaderSettings>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FModularSynthPreset> @ 14f0a3340

void __cdecl UE::CoreUObject::Private::Construct<FModularSynthPreset>(void *param_1)

{
  *(uint *)((longlong)param_1 + 8) = *(uint *)((longlong)param_1 + 8) & 0xfffffffe;
  *(uint *)((longlong)param_1 + 0x40) = *(uint *)((longlong)param_1 + 0x40) & 0xfffffffc;
  *(uint *)((longlong)param_1 + 0x7c) = *(uint *)((longlong)param_1 + 0x7c) & 0xfffffffc;
  *(uint *)((longlong)param_1 + 0xa4) = *(uint *)((longlong)param_1 + 0xa4) | 1;
  *(uint *)((longlong)param_1 + 0xbc) = *(uint *)((longlong)param_1 + 0xbc) & 0xfffffffe;
  *(undefined ***)param_1 = &___7FModularSynthPreset__6B_;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x3f800000;
  *(uint *)((longlong)param_1 + 0x94) = *(uint *)((longlong)param_1 + 0x94) & 0xfffffffd | 1;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3f000000;
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x40200000;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0x3f000000;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x3f000000;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)((longlong)param_1 + 0x56) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x60) = 0;
  *(undefined1 *)((longlong)param_1 + 0x62) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0xc0400000;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0x3f34fdf4;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x459c4000;
  *(undefined2 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x88) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x3f34fdf4;
  *(undefined4 *)((longlong)param_1 + 0x90) = 0x459c4000;
  *(undefined4 *)((longlong)param_1 + 0x98) = 0x45fa0000;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x40000000;
  *(undefined2 *)((longlong)param_1 + 0xa0) = 0x200;
  *(undefined1 *)((longlong)param_1 + 0xa8) = 2;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x442f0000;
  *(undefined4 *)((longlong)param_1 + 0xb0) = 0x3f333333;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x3e99999a;
  *(undefined4 *)((longlong)param_1 + 0xb8) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 200) = 0x40000000;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  return;
}

// ConstructForTests<FModularSynthPreset> @ 14f0a3350

void __cdecl UE::CoreUObject::Private::ConstructForTests<FModularSynthPreset>(void *param_1)

{
  *(uint *)((longlong)param_1 + 8) = *(uint *)((longlong)param_1 + 8) & 0xfffffffe;
  *(uint *)((longlong)param_1 + 0x40) = *(uint *)((longlong)param_1 + 0x40) & 0xfffffffc;
  *(uint *)((longlong)param_1 + 0x7c) = *(uint *)((longlong)param_1 + 0x7c) & 0xfffffffc;
  *(uint *)((longlong)param_1 + 0xa4) = *(uint *)((longlong)param_1 + 0xa4) | 1;
  *(uint *)((longlong)param_1 + 0xbc) = *(uint *)((longlong)param_1 + 0xbc) & 0xfffffffe;
  *(undefined ***)param_1 = &___7FModularSynthPreset__6B_;
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x3f800000;
  *(uint *)((longlong)param_1 + 0x94) = *(uint *)((longlong)param_1 + 0x94) & 0xfffffffd | 1;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3f000000;
  *(undefined1 *)((longlong)param_1 + 0x24) = 1;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x40200000;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0x3f000000;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x3f000000;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)((longlong)param_1 + 0x56) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x60) = 0;
  *(undefined1 *)((longlong)param_1 + 0x62) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0xc0400000;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0x3f34fdf4;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x459c4000;
  *(undefined2 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x88) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x3f34fdf4;
  *(undefined4 *)((longlong)param_1 + 0x90) = 0x459c4000;
  *(undefined4 *)((longlong)param_1 + 0x98) = 0x45fa0000;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x40000000;
  *(undefined2 *)((longlong)param_1 + 0xa0) = 0x200;
  *(undefined1 *)((longlong)param_1 + 0xa8) = 2;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x442f0000;
  *(undefined4 *)((longlong)param_1 + 0xb0) = 0x3f333333;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x3e99999a;
  *(undefined4 *)((longlong)param_1 + 0xb8) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 200) = 0x40000000;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  return;
}

// Destruct<FModularSynthPreset> @ 14f0a33a0

void __cdecl UE::CoreUObject::Private::Destruct<FModularSynthPreset>(void *param_1)

{
  DestructItems<FEpicSynth1Patch,int>
            (*(FEpicSynth1Patch **)((longlong)param_1 + 0xd0),*(int *)((longlong)param_1 + 0xd8));
  if (*(void **)((longlong)param_1 + 0xd0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xd0));
  }
  *(undefined ***)param_1 = &___7FTableRowBase__6B_;
  return;
}

// Copy<FModularSynthPreset> @ 14f0a3530

bool __cdecl
UE::CoreUObject::Private::Copy<FModularSynthPreset>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  FEpicSynth1Patch *pFVar4;
  void *pvVar5;
  uint uVar6;
  ForAnyElementType *pFVar7;
  
  pvVar5 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(uint *)((longlong)pvVar5 + 8) =
         *(uint *)((longlong)pvVar5 + 8) ^
         (*(uint *)((longlong)pvVar5 + 8) ^
         *(uint *)((longlong)pvVar5 + (longlong)param_2 + (8 - (longlong)param_1))) & 1;
    *(undefined1 *)((longlong)pvVar5 + 0xc) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0xc - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar5 + 0x10) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0x10 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar5 + 0x14) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0x14 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar5 + 0x18) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0x18 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar5 + 0x1c) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0x1c - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar5 + 0x20) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0x20 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar5 + 0x24) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0x24 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar5 + 0x28) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0x28 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar5 + 0x2c) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0x2c - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar5 + 0x30) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0x30 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar5 + 0x34) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0x34 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar5 + 0x38) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0x38 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar5 + 0x3c) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0x3c - (longlong)param_1));
    uVar6 = (*(uint *)((longlong)pvVar5 + 0x40) ^
            *(uint *)((longlong)pvVar5 + (longlong)param_2 + (0x40 - (longlong)param_1))) & 1 ^
            *(uint *)((longlong)pvVar5 + 0x40);
    *(uint *)((longlong)pvVar5 + 0x40) = uVar6;
    *(uint *)((longlong)pvVar5 + 0x40) =
         (uVar6 ^ *(uint *)((longlong)pvVar5 + (longlong)param_2 + (0x40 - (longlong)param_1))) & 2
         ^ uVar6;
    *(undefined4 *)((longlong)pvVar5 + 0x44) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0x44 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar5 + 0x48) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0x48 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar5 + 0x4c) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0x4c - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar5 + 0x50) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0x50 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar5 + 0x54) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0x54 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar5 + 0x55) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0x55 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar5 + 0x56) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0x56 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar5 + 0x58) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0x58 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar5 + 0x5c) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0x5c - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar5 + 0x60) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0x60 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar5 + 0x61) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0x61 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar5 + 0x62) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0x62 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar5 + 100) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (100 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar5 + 0x68) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0x68 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar5 + 0x6c) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0x6c - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar5 + 0x70) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0x70 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar5 + 0x74) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0x74 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar5 + 0x78) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0x78 - (longlong)param_1));
    pFVar2 = (ForAnyElementType *)
             ((longlong)pvVar5 + (longlong)param_2 + (0xd0 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar5 + 0x79) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0x79 - (longlong)param_1));
    pFVar7 = (ForAnyElementType *)((longlong)pvVar5 + 0xd0);
    uVar6 = (*(uint *)((longlong)pvVar5 + 0x7c) ^
            *(uint *)((longlong)pvVar5 + (longlong)param_2 + (0x7c - (longlong)param_1))) & 1 ^
            *(uint *)((longlong)pvVar5 + 0x7c);
    *(uint *)((longlong)pvVar5 + 0x7c) = uVar6;
    *(uint *)((longlong)pvVar5 + 0x7c) =
         (uVar6 ^ *(uint *)((longlong)pvVar5 + (longlong)param_2 + (0x7c - (longlong)param_1))) & 2
         ^ uVar6;
    *(undefined4 *)((longlong)pvVar5 + 0x80) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0x80 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar5 + 0x84) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0x84 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar5 + 0x88) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0x88 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar5 + 0x8c) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0x8c - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar5 + 0x90) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0x90 - (longlong)param_1));
    uVar6 = (*(uint *)((longlong)pvVar5 + 0x94) ^
            *(uint *)((longlong)pvVar5 + (longlong)param_2 + (0x94 - (longlong)param_1))) & 1 ^
            *(uint *)((longlong)pvVar5 + 0x94);
    *(uint *)((longlong)pvVar5 + 0x94) = uVar6;
    *(uint *)((longlong)pvVar5 + 0x94) =
         (uVar6 ^ *(uint *)((longlong)pvVar5 + (longlong)param_2 + (0x94 - (longlong)param_1))) & 2
         ^ uVar6;
    *(undefined4 *)((longlong)pvVar5 + 0x98) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0x98 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar5 + 0x9c) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0x9c - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar5 + 0xa0) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0xa0 - (longlong)param_1));
    *(undefined1 *)((longlong)pvVar5 + 0xa1) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0xa1 - (longlong)param_1));
    *(uint *)((longlong)pvVar5 + 0xa4) =
         (*(uint *)((longlong)pvVar5 + 0xa4) ^
         *(uint *)((longlong)pvVar5 + (longlong)param_2 + (0xa4 - (longlong)param_1))) & 1 ^
         *(uint *)((longlong)pvVar5 + 0xa4);
    *(undefined1 *)((longlong)pvVar5 + 0xa8) =
         *(undefined1 *)((longlong)pvVar5 + (longlong)param_2 + (0xa8 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar5 + 0xac) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0xac - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar5 + 0xb0) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0xb0 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar5 + 0xb4) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0xb4 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar5 + 0xb8) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0xb8 - (longlong)param_1));
    *(uint *)((longlong)pvVar5 + 0xbc) =
         (*(uint *)((longlong)pvVar5 + 0xbc) ^
         *(uint *)((longlong)pvVar5 + (longlong)param_2 + (0xbc - (longlong)param_1))) & 1 ^
         *(uint *)((longlong)pvVar5 + 0xbc);
    *(undefined4 *)((longlong)pvVar5 + 0xc0) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0xc0 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar5 + 0xc4) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (0xc4 - (longlong)param_1));
    *(undefined4 *)((longlong)pvVar5 + 200) =
         *(undefined4 *)((longlong)pvVar5 + (longlong)param_2 + (200 - (longlong)param_1));
    if (pFVar7 != pFVar2) {
      DestructItems<FEpicSynth1Patch,int>
                ((FEpicSynth1Patch *)pFVar7->Data,*(int *)((longlong)pvVar5 + 0xd8));
      iVar3 = *(int *)((longlong)pvVar5 + (longlong)param_2 + (0xd8 - (longlong)param_1));
      piVar1 = (int *)((longlong)pvVar5 + 0xdc);
      pFVar4 = (FEpicSynth1Patch *)pFVar2->Data;
      *(int *)((longlong)pvVar5 + 0xd8) = iVar3;
      if ((iVar3 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,iVar3,*piVar1,pFVar7,iVar3,piVar1);
        ConstructItems<FEpicSynth1Patch,FEpicSynth1Patch,int>(pFVar7->Data,pFVar4,iVar3);
      }
    }
    pvVar5 = (void *)((longlong)pvVar5 + 0xe0);
  }
  return true;
}

// Construct<FSourceEffectFoldbackDistortionSettings> @ 14f0a3960

void __cdecl
UE::CoreUObject::Private::Construct<FSourceEffectFoldbackDistortionSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0xc0c00000;
  *(undefined4 *)((longlong)param_1 + 8) = 0xc0400000;
  return;
}

// ConstructForTests<FSourceEffectFoldbackDistortionSettings> @ 14f0a3990

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FSourceEffectFoldbackDistortionSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0xc0c00000;
  *(undefined4 *)((longlong)param_1 + 8) = 0xc0400000;
  return;
}

// Destruct<FSourceEffectFoldbackDistortionSettings> @ 14f0a39f0

void __cdecl
UE::CoreUObject::Private::Destruct<FSourceEffectFoldbackDistortionSettings>(void *param_1)

{
  return;
}

// Copy<FSourceEffectFoldbackDistortionSettings> @ 14f0a3ac0

bool __cdecl
UE::CoreUObject::Private::Copy<FSourceEffectFoldbackDistortionSettings>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSubmixEffectFlexiverbSettings> @ 14f0a4860

void __cdecl UE::CoreUObject::Private::Construct<FSubmixEffectFlexiverbSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x40e00000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x435c0000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 2;
  return;
}

// ConstructForTests<FSubmixEffectFlexiverbSettings> @ 14f0a4890

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FSubmixEffectFlexiverbSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x40e00000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x435c0000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 2;
  return;
}

// Destruct<FSubmixEffectFlexiverbSettings> @ 14f0a48c0

void __cdecl UE::CoreUObject::Private::Destruct<FSubmixEffectFlexiverbSettings>(void *param_1)

{
  return;
}

// Copy<FSubmixEffectFlexiverbSettings> @ 14f0a4ad0

bool __cdecl
UE::CoreUObject::Private::Copy<FSubmixEffectFlexiverbSettings>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FEpicSynth1Patch> @ 14f0a4e60

void __cdecl UE::CoreUObject::Private::Construct<FEpicSynth1Patch>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FEpicSynth1Patch> @ 14f0a4e80

void __cdecl UE::CoreUObject::Private::ConstructForTests<FEpicSynth1Patch>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FEpicSynth1Patch> @ 14f0a4ee0

void __cdecl UE::CoreUObject::Private::Destruct<FEpicSynth1Patch>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FEpicSynth1Patch> @ 14f0a4f80

bool __cdecl
UE::CoreUObject::Private::Copy<FEpicSynth1Patch>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = (longlong)param_2 - (longlong)param_1;
    do {
      pFVar3 = (ForAnyElementType *)((longlong)param_1 + 8);
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar4);
      if (pFVar3 != (ForAnyElementType *)((longlong)param_1 + lVar4 + 8)) {
        iVar2 = *(int *)((longlong)param_1 + lVar4 + 0x10);
        piVar1 = (int *)((longlong)param_1 + 0x14);
        _Src = ((ForAnyElementType *)((longlong)param_1 + lVar4 + 8))->Data;
        *(int *)((longlong)param_1 + 0x10) = iVar2;
        if ((iVar2 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,iVar2,*piVar1,pFVar3,iVar2,piVar1);
          if (iVar2 != 0) {
            memcpy(pFVar3->Data,_Src,(longlong)iVar2 << 3);
          }
        }
      }
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x18);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSourceEffectFilterSettings> @ 14f0a51c0

void __cdecl UE::CoreUObject::Private::Construct<FSourceEffectFilterSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 1;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x44480000;
  return;
}

// ConstructForTests<FSourceEffectFilterSettings> @ 14f0a5230

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSourceEffectFilterSettings>(void *param_1)

{
  *(undefined2 *)param_1 = 1;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x44480000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x40000000;
  return;
}

// Destruct<FSourceEffectFilterSettings> @ 14f0a52a0

void __cdecl UE::CoreUObject::Private::Destruct<FSourceEffectFilterSettings>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x10);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FSourceEffectFilterSettings> @ 14f0a5400

bool __cdecl
UE::CoreUObject::Private::Copy<FSourceEffectFilterSettings>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  FSourceEffectFilterAudioBusModulationSettings *pFVar3;
  ForAnyElementType *pFVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    lVar5 = (longlong)param_2 - (longlong)param_1;
    do {
      pFVar4 = (ForAnyElementType *)((longlong)param_1 + 0x10);
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar5);
      *(undefined1 *)((longlong)param_1 + 1) = *(undefined1 *)((longlong)param_1 + lVar5 + 1);
      *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_1 + lVar5 + 4);
      *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_1 + lVar5 + 8);
      if (pFVar4 != (ForAnyElementType *)((longlong)param_1 + lVar5 + 0x10)) {
        iVar2 = *(int *)((longlong)param_1 + lVar5 + 0x18);
        piVar1 = (int *)((longlong)param_1 + 0x1c);
        pFVar3 = (FSourceEffectFilterAudioBusModulationSettings *)
                 ((ForAnyElementType *)((longlong)param_1 + lVar5 + 0x10))->Data;
        *(int *)((longlong)param_1 + 0x18) = iVar2;
        if ((iVar2 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,iVar2,*piVar1,pFVar4,iVar2,piVar1);
          ConstructItems<FSourceEffectFilterAudioBusModulationSettings,FSourceEffectFilterAudioBusModulationSettings,int>
                    (pFVar4->Data,pFVar3,iVar2);
        }
      }
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x20);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSubmixEffectFilterSettings> @ 14f0a5880

void __cdecl UE::CoreUObject::Private::Construct<FSubmixEffectFilterSettings>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 4) = 0x469c4000;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0x40000000;
  return;
}

// ConstructForTests<FSubmixEffectFilterSettings> @ 14f0a58a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSubmixEffectFilterSettings>(void *param_1)

{
  *(undefined2 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x469c4000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x40000000;
  return;
}

// Destruct<FSubmixEffectFilterSettings> @ 14f0a58c0

void __cdecl UE::CoreUObject::Private::Destruct<FSubmixEffectFilterSettings>(void *param_1)

{
  return;
}

// Copy<FSubmixEffectFilterSettings> @ 14f0a5950

bool __cdecl
UE::CoreUObject::Private::Copy<FSubmixEffectFilterSettings>(void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSourceEffectFilterAudioBusModulationSettings> @ 14f0a5c50

void __cdecl
UE::CoreUObject::Private::Construct<FSourceEffectFilterAudioBusModulationSettings>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 0x15) = 0;
  *(undefined1 *)((longlong)param_1 + 0x17) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 10;
  *(undefined4 *)((longlong)param_1 + 0xc) = 100;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0xc1400000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x41400000;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x40400000;
  return;
}

// ConstructForTests<FSourceEffectFilterAudioBusModulationSettings> @ 14f0a5ca0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FSourceEffectFilterAudioBusModulationSettings>
          (void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 10;
  *(undefined4 *)((longlong)param_1 + 0xc) = 100;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0xc1400000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x41400000;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x40400000;
  return;
}

// Destruct<FSourceEffectFilterAudioBusModulationSettings> @ 14f0a5cf0

void __cdecl
UE::CoreUObject::Private::Destruct<FSourceEffectFilterAudioBusModulationSettings>(void *param_1)

{
  return;
}

// Copy<FSourceEffectFilterAudioBusModulationSettings> @ 14f0a5d00

bool __cdecl
UE::CoreUObject::Private::Copy<FSourceEffectFilterAudioBusModulationSettings>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar2);
      if ((GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar1 != (UObject *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)*puVar1);
      }
      *puVar2 = *puVar1;
      *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar1 + 1);
      *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
      *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar1 + 2);
      *(undefined1 *)((longlong)puVar2 + 0x14) = *(undefined1 *)((longlong)puVar1 + 0x14);
      *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(puVar1 + 3);
      *(undefined4 *)((longlong)puVar2 + 0x1c) = *(undefined4 *)((longlong)puVar1 + 0x1c);
      *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar1 + 4);
      *(undefined4 *)((longlong)puVar2 + 0x24) = *(undefined4 *)((longlong)puVar1 + 0x24);
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 5;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSubmixEffectDelaySettings> @ 14f0a60b0

void __cdecl UE::CoreUObject::Private::Construct<FSubmixEffectDelaySettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x44fa0000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x43c80000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x447a0000;
  return;
}

// ConstructForTests<FSubmixEffectDelaySettings> @ 14f0a6190

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSubmixEffectDelaySettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x44fa0000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x43c80000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x447a0000;
  return;
}

// Destruct<FSubmixEffectDelaySettings> @ 14f0a61b0

void __cdecl UE::CoreUObject::Private::Destruct<FSubmixEffectDelaySettings>(void *param_1)

{
  return;
}

// Copy<FSubmixEffectDelaySettings> @ 14f0a61c0

bool __cdecl
UE::CoreUObject::Private::Copy<FSubmixEffectDelaySettings>(void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSubmixEffectConvolutionReverbSettings> @ 14f0a69f0

void __cdecl
UE::CoreUObject::Private::Construct<FSubmixEffectConvolutionReverbSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0xc1c00000;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  *(undefined2 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0xc2c00000;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0xe) = 1;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xc2700000;
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// ConstructForTests<FSubmixEffectConvolutionReverbSettings> @ 14f0a6a30

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FSubmixEffectConvolutionReverbSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0xc1c00000;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  *(undefined2 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0xc2c00000;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0xe) = 1;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xc2700000;
  *(undefined1 *)((longlong)param_1 + 0x28) = 1;
  return;
}

// Destruct<FSubmixEffectConvolutionReverbSettings> @ 14f0a6a70

void __cdecl
UE::CoreUObject::Private::Destruct<FSubmixEffectConvolutionReverbSettings>(void *param_1)

{
  return;
}

// Copy<FSubmixEffectConvolutionReverbSettings> @ 14f0a6a80

bool __cdecl
UE::CoreUObject::Private::Copy<FSubmixEffectConvolutionReverbSettings>
          (void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  undefined4 *puVar2;
  
  if (param_3 != 0) {
    pvVar1 = param_2;
    puVar2 = param_1;
    do {
      *puVar2 = *(undefined4 *)((longlong)puVar2 + ((longlong)param_2 - (longlong)param_1));
      puVar2[1] = *(undefined4 *)((longlong)pvVar1 + 4);
      puVar2[2] = *(undefined4 *)((longlong)pvVar1 + 8);
      *(undefined1 *)(puVar2 + 3) = *(undefined1 *)((longlong)pvVar1 + 0xc);
      *(undefined1 *)((longlong)puVar2 + 0xd) = *(undefined1 *)((longlong)pvVar1 + 0xd);
      *(undefined1 *)((longlong)puVar2 + 0xe) = *(undefined1 *)((longlong)pvVar1 + 0xe);
      puVar2[4] = *(undefined4 *)((longlong)pvVar1 + 0x10);
      *(undefined1 *)(puVar2 + 5) = *(undefined1 *)((longlong)pvVar1 + 0x14);
      *(undefined1 *)((longlong)puVar2 + 0x15) = *(undefined1 *)((longlong)pvVar1 + 0x15);
      puVar2[6] = *(undefined4 *)((longlong)pvVar1 + 0x18);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)pvVar1 + 0x20) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)pvVar1 + 0x20));
      }
      *(undefined8 *)(puVar2 + 8) = *(undefined8 *)((longlong)pvVar1 + 0x20);
      *(undefined1 *)(puVar2 + 10) = *(undefined1 *)((longlong)pvVar1 + 0x28);
      param_3 = param_3 + -1;
      pvVar1 = (void *)((longlong)pvVar1 + 0x30);
      puVar2 = puVar2 + 0xc;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSynthSlateStyle> @ 14f0a6c50

void __cdecl UE::CoreUObject::Private::Construct<FSynthSlateStyle>(void *param_1)

{
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined2 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FSynthSlateStyle__6B_;
  if (FSynthSlateStyle::SynthSlateResources == (ISynthSlateResources *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f0a6c8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(FSynthSlateStyle::SynthSlateResources->_padding_ + 8))();
  return;
}

// ConstructForTests<FSynthSlateStyle> @ 14f0a6ca0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSynthSlateStyle>(void *param_1)

{
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined2 *)((longlong)param_1 + 8) = 0;
  *(undefined ***)param_1 = &___7FSynthSlateStyle__6B_;
  if (FSynthSlateStyle::SynthSlateResources == (ISynthSlateResources *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f0a6cdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(FSynthSlateStyle::SynthSlateResources->_padding_ + 8))();
  return;
}

// Destruct<FSynthSlateStyle> @ 14f0a6df0

void __cdecl UE::CoreUObject::Private::Destruct<FSynthSlateStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FSynthSlateStyle__6B_;
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// Copy<FSynthSlateStyle> @ 14f0a7010

bool __cdecl
UE::CoreUObject::Private::Copy<FSynthSlateStyle>(void *param_1,void *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)pvVar1 + 8) =
         *(undefined1 *)((longlong)param_2 + (8 - (longlong)param_1) + (longlong)pvVar1);
    *(undefined1 *)((longlong)pvVar1 + 9) =
         *(undefined1 *)((longlong)pvVar1 + (longlong)param_2 + (9 - (longlong)param_1));
    pvVar1 = (void *)((longlong)pvVar1 + 0x10);
  }
  return true;
}

// Construct<FSourceEffectEQSettings> @ 14f0a7950

void __cdecl UE::CoreUObject::Private::Construct<FSourceEffectEQSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FSourceEffectEQSettings> @ 14f0a79a0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSourceEffectEQSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FSourceEffectEQSettings> @ 14f0a79f0

void __cdecl UE::CoreUObject::Private::Destruct<FSourceEffectEQSettings>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FSourceEffectEQSettings> @ 14f0a7a10

bool __cdecl
UE::CoreUObject::Private::Copy<FSourceEffectEQSettings>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar5;
  
  if (param_3 != 0) {
    pFVar5 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar5);
      if (pFVar5 != pFVar2) {
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
        _Src = pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar5[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,iVar3,iVar4,pFVar5,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar5->Data,_Src,(longlong)iVar3 << 4);
          }
        }
      }
      param_3 = param_3 + -1;
      pFVar5 = pFVar5 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSourceEffectWaveShaperSettings> @ 14f0a7da0

void __cdecl UE::CoreUObject::Private::Construct<FSourceEffectWaveShaperSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0x3f800000;
  return;
}

// ConstructForTests<FSourceEffectWaveShaperSettings> @ 14f0a7df0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FSourceEffectWaveShaperSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0x3f800000;
  return;
}

// Destruct<FSourceEffectWaveShaperSettings> @ 14f0a7e00

void __cdecl UE::CoreUObject::Private::Destruct<FSourceEffectWaveShaperSettings>(void *param_1)

{
  return;
}

// Copy<FSourceEffectWaveShaperSettings> @ 14f0a7e50

bool __cdecl
UE::CoreUObject::Private::Copy<FSourceEffectWaveShaperSettings>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      uVar1 = *(undefined4 *)((longlong)param_2 + 4);
      *(undefined4 *)(lVar2 + (longlong)param_2) = *(undefined4 *)param_2;
      *(undefined4 *)(lVar2 + 4 + (longlong)param_2) = uVar1;
      param_2 = (void *)((longlong)param_2 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSourceEffectEQBand> @ 14f0a7e90

void __cdecl UE::CoreUObject::Private::Construct<FSourceEffectEQBand>(void *param_1)

{
  *(uint *)((longlong)param_1 + 0xc) = *(uint *)((longlong)param_1 + 0xc) & 0xfffffffe;
  *(undefined4 *)param_1 = 0x43fa0000;
  *(undefined8 *)((longlong)param_1 + 4) = 0x40000000;
  return;
}

// Construct<FSynthKnobStyle> @ 14f0a7eb0

void __cdecl UE::CoreUObject::Private::Construct<FSynthKnobStyle>(void *param_1)

{
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FSynthKnobStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x10));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xc0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x170));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x220));
  *(undefined1 *)((longlong)param_1 + 0x2d8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2d0) = 0xbecccccd;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0x3ecccccd;
  FSynthKnobResources::LoadImages(&Resources);
  FSlateBrush::operator=
            ((FSlateBrush *)((longlong)param_1 + 0x170),
             (FSlateBrush *)Resources.DefaultMediumKnob.Object);
  FSlateBrush::operator=
            ((FSlateBrush *)((longlong)param_1 + 0x220),
             (FSlateBrush *)Resources.DefaultMediumKnobOverlay.Object);
  FSlateBrush::operator=
            ((FSlateBrush *)((longlong)param_1 + 0x10),
             (FSlateBrush *)Resources.DefaultLargeKnob.Object);
  FSlateBrush::operator=
            ((FSlateBrush *)((longlong)param_1 + 0xc0),
             (FSlateBrush *)Resources.DefaultLargeKnobOverlay.Object);
  return;
}

// ConstructForTests<FSourceEffectEQBand> @ 14f0a7ec0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSourceEffectEQBand>(void *param_1)

{
  *(uint *)((longlong)param_1 + 0xc) = *(uint *)((longlong)param_1 + 0xc) & 0xfffffffe;
  *(undefined4 *)param_1 = 0x43fa0000;
  *(undefined8 *)((longlong)param_1 + 4) = 0x40000000;
  return;
}

// ConstructForTests<FSynthKnobStyle> @ 14f0a7ee0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSynthKnobStyle>(void *param_1)

{
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FSynthKnobStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x10));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xc0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x170));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x220));
  *(undefined1 *)((longlong)param_1 + 0x2d8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2d0) = 0xbecccccd;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0x3ecccccd;
  FSynthKnobResources::LoadImages(&Resources);
  FSlateBrush::operator=
            ((FSlateBrush *)((longlong)param_1 + 0x170),
             (FSlateBrush *)Resources.DefaultMediumKnob.Object);
  FSlateBrush::operator=
            ((FSlateBrush *)((longlong)param_1 + 0x220),
             (FSlateBrush *)Resources.DefaultMediumKnobOverlay.Object);
  FSlateBrush::operator=
            ((FSlateBrush *)((longlong)param_1 + 0x10),
             (FSlateBrush *)Resources.DefaultLargeKnob.Object);
  FSlateBrush::operator=
            ((FSlateBrush *)((longlong)param_1 + 0xc0),
             (FSlateBrush *)Resources.DefaultLargeKnobOverlay.Object);
  return;
}

// Destruct<FSourceEffectEQBand> @ 14f0a7ef0

void __cdecl UE::CoreUObject::Private::Destruct<FSourceEffectEQBand>(void *param_1)

{
  return;
}

// Destruct<FSynthKnobStyle> @ 14f0a7f00

void __cdecl UE::CoreUObject::Private::Destruct<FSynthKnobStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FSynthKnobStyle__6B_;
  *(undefined ***)((longlong)param_1 + 0x220) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x2c0));
  *(undefined ***)((longlong)param_1 + 0x170) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x210));
  *(undefined ***)((longlong)param_1 + 0xc0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x160));
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xb0));
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// Copy<FSourceEffectEQBand> @ 14f0a7f10

bool __cdecl
UE::CoreUObject::Private::Copy<FSourceEffectEQBand>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FSynthKnobStyle> @ 14f0a7f40

bool __cdecl
UE::CoreUObject::Private::Copy<FSynthKnobStyle>(void *param_1,void *param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x10),(FSlateBrush *)((longlong)param_2 + 0x10));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0xc0),(FSlateBrush *)((longlong)param_2 + 0xc0));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x170),(FSlateBrush *)((longlong)param_2 + 0x170)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x220),(FSlateBrush *)((longlong)param_2 + 0x220)
              );
    *(undefined4 *)((longlong)param_1 + 0x2d0) = *(undefined4 *)((longlong)param_2 + 0x2d0);
    *(undefined4 *)((longlong)param_1 + 0x2d4) = *(undefined4 *)((longlong)param_2 + 0x2d4);
    *(undefined1 *)((longlong)param_1 + 0x2d8) = *(undefined1 *)((longlong)param_2 + 0x2d8);
    param_1 = (void *)((longlong)param_1 + 0x2e0);
    param_2 = (void *)((longlong)param_2 + 0x2e0);
  }
  return true;
}

// Construct<FPatchId> @ 14f0a83a0

void __cdecl UE::CoreUObject::Private::Construct<FPatchId>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  return;
}

// ConstructForTests<FPatchId> @ 14f0a83b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FPatchId>(void *param_1)

{
  *(undefined4 *)param_1 = 0xffffffff;
  return;
}

// Destruct<FPatchId> @ 14f0a83c0

void __cdecl UE::CoreUObject::Private::Destruct<FPatchId>(void *param_1)

{
  return;
}

// Copy<FPatchId> @ 14f0a84d0

bool __cdecl UE::CoreUObject::Private::Copy<FPatchId>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 4);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSourceEffectStereoDelaySettings> @ 14f0a8500

void __cdecl UE::CoreUObject::Private::Construct<FSourceEffectStereoDelaySettings>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 3) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0x3f800000;
  *(undefined1 *)param_1 = 2;
  *(undefined4 *)((longlong)param_1 + 4) = 0x43fa0000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3ecccccd;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x469c4000;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x40000000;
  return;
}

// ConstructForTests<FSourceEffectStereoDelaySettings> @ 14f0a8550

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FSourceEffectStereoDelaySettings>(void *param_1)

{
  *(undefined1 *)param_1 = 2;
  *(undefined4 *)((longlong)param_1 + 4) = 0x43fa0000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3ecccccd;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x469c4000;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0x40000000;
  return;
}

// Destruct<FSourceEffectStereoDelaySettings> @ 14f0a85a0

void __cdecl UE::CoreUObject::Private::Destruct<FSourceEffectStereoDelaySettings>(void *param_1)

{
  return;
}

// Copy<FSourceEffectStereoDelaySettings> @ 14f0a8670

bool __cdecl
UE::CoreUObject::Private::Copy<FSourceEffectStereoDelaySettings>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined4 *)(lVar6 + 0x20 + (longlong)param_1);
      uVar3 = ((undefined8 *)(lVar6 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar6 + 0x10 + (longlong)param_1);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar6 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar3;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar5;
      *(undefined4 *)((longlong)param_1 + 0x20) = uVar2;
      param_1 = (void *)((longlong)param_1 + 0x24);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSynth2DSliderStyle> @ 14f0a86b0

void __cdecl UE::CoreUObject::Private::Construct<FSynth2DSliderStyle>(void *param_1)

{
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FSynth2DSliderStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x10));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xc0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x170));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x220));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x2d0));
  *(undefined4 *)((longlong)param_1 + 0x380) = 0x40000000;
  return;
}

// ConstructForTests<FSynth2DSliderStyle> @ 14f0a86c0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSynth2DSliderStyle>(void *param_1)

{
  FSlateWidgetStyle::FSlateWidgetStyle(param_1);
  *(undefined ***)param_1 = &___7FSynth2DSliderStyle__6B_;
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x10));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0xc0));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x170));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x220));
  FSlateBrush::FSlateBrush((FSlateBrush *)((longlong)param_1 + 0x2d0));
  *(undefined4 *)((longlong)param_1 + 0x380) = 0x40000000;
  return;
}

// Destruct<FSynth2DSliderStyle> @ 14f0a86d0

void __cdecl UE::CoreUObject::Private::Destruct<FSynth2DSliderStyle>(void *param_1)

{
  *(undefined ***)param_1 = &___7FSynth2DSliderStyle__6B_;
  *(undefined ***)((longlong)param_1 + 0x2d0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x370));
  *(undefined ***)((longlong)param_1 + 0x220) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x2c0));
  *(undefined ***)((longlong)param_1 + 0x170) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x210));
  *(undefined ***)((longlong)param_1 + 0xc0) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x160));
  *(undefined ***)((longlong)param_1 + 0x10) = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xb0));
  FSlateWidgetStyle::~FSlateWidgetStyle(param_1);
  return;
}

// Copy<FSynth2DSliderStyle> @ 14f0a86e0

bool __cdecl
UE::CoreUObject::Private::Copy<FSynth2DSliderStyle>(void *param_1,void *param_2,int param_3)

{
  undefined4 *puVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x10),(FSlateBrush *)((longlong)param_2 + 0x10));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0xc0),(FSlateBrush *)((longlong)param_2 + 0xc0));
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x170),(FSlateBrush *)((longlong)param_2 + 0x170)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x220),(FSlateBrush *)((longlong)param_2 + 0x220)
              );
    FSlateBrush::operator=
              ((FSlateBrush *)((longlong)param_1 + 0x2d0),(FSlateBrush *)((longlong)param_2 + 0x2d0)
              );
    puVar1 = (undefined4 *)((longlong)param_2 + 0x380);
    param_2 = (void *)((longlong)param_2 + 0x390);
    *(undefined4 *)((longlong)param_1 + 0x380) = *puVar1;
    param_1 = (void *)((longlong)param_1 + 0x390);
  }
  return true;
}

// Construct<FSynth1PatchCable> @ 14f0a8d50

void __cdecl UE::CoreUObject::Private::Construct<FSynth1PatchCable>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)param_1 = 0;
  return;
}

// ConstructForTests<FSynth1PatchCable> @ 14f0a8d60

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSynth1PatchCable>(void *param_1)

{
  *(undefined4 *)param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 4) = 0;
  return;
}

// Destruct<FSynth1PatchCable> @ 14f0a8dc0

void __cdecl UE::CoreUObject::Private::Destruct<FSynth1PatchCable>(void *param_1)

{
  return;
}

// Copy<FSynth1PatchCable> @ 14f0a8df0

bool __cdecl
UE::CoreUObject::Private::Copy<FSynth1PatchCable>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSourceEffectSimpleDelaySettings> @ 14f0a8e40

void __cdecl UE::CoreUObject::Private::Construct<FSourceEffectSimpleDelaySettings>(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 3;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)param_1 = 0x43ab8000;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0x3f800000;
  return;
}

// ConstructForTests<FSourceEffectSimpleDelaySettings> @ 14f0a8e80

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FSourceEffectSimpleDelaySettings>(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) | 3;
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)param_1 = 0x43ab8000;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0x3f800000;
  return;
}

// Destruct<FSourceEffectSimpleDelaySettings> @ 14f0a8ea0

void __cdecl UE::CoreUObject::Private::Destruct<FSourceEffectSimpleDelaySettings>(void *param_1)

{
  return;
}

// Construct<FSourceEffectEnvelopeFollowerSettings> @ 14f0a8ed0

void __cdecl
UE::CoreUObject::Private::Construct<FSourceEffectEnvelopeFollowerSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x42c80000;
  *(undefined2 *)((longlong)param_1 + 8) = 0x102;
  return;
}

// ConstructForTests<FSourceEffectEnvelopeFollowerSettings> @ 14f0a8ef0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FSourceEffectEnvelopeFollowerSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 4) = 0x42c80000;
  *(undefined2 *)((longlong)param_1 + 8) = 0x102;
  return;
}

// Destruct<FSourceEffectEnvelopeFollowerSettings> @ 14f0a8f10

void __cdecl
UE::CoreUObject::Private::Destruct<FSourceEffectEnvelopeFollowerSettings>(void *param_1)

{
  return;
}

// Copy<FSourceEffectSimpleDelaySettings> @ 14f0a8f20

bool __cdecl
UE::CoreUObject::Private::Copy<FSourceEffectSimpleDelaySettings>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      puVar4[2] = uVar2;
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Copy<FSourceEffectEnvelopeFollowerSettings> @ 14f0a8fe0

bool __cdecl
UE::CoreUObject::Private::Copy<FSourceEffectEnvelopeFollowerSettings>
          (void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar1 = *(undefined4 *)(lVar2 + 8 + (longlong)param_1);
      *(undefined8 *)param_1 = *(undefined8 *)(lVar2 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 8) = uVar1;
      param_1 = (void *)((longlong)param_1 + 0xc);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSourceEffectRingModulationSettings> @ 14f0a9460

void __cdecl UE::CoreUObject::Private::Construct<FSourceEffectRingModulationSettings>(void *param_1)

{
  *(undefined2 *)((longlong)param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 3) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x3f800000;
  *(undefined1 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x42c80000;
  *(undefined8 *)((longlong)param_1 + 8) = 0x3f000000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FSourceEffectRingModulationSettings> @ 14f0a94a0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FSourceEffectRingModulationSettings>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x42c80000;
  *(undefined8 *)((longlong)param_1 + 8) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0x3f800000;
  return;
}

// Destruct<FSourceEffectRingModulationSettings> @ 14f0a95d0

void __cdecl UE::CoreUObject::Private::Destruct<FSourceEffectRingModulationSettings>(void *param_1)

{
  return;
}

// Construct<FSourceEffectDynamicsProcessorSettings> @ 14f0a9620

void __cdecl
UE::CoreUObject::Private::Construct<FSourceEffectDynamicsProcessorSettings>(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) | 3;
  *(byte *)((longlong)param_1 + 0x28) = *(byte *)((longlong)param_1 + 0x28) & 0xfe;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined2 *)param_1 = 0x100;
  *(undefined4 *)((longlong)param_1 + 4) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xc0c00000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3fc00000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x41200000;
  return;
}

// ConstructForTests<FSourceEffectDynamicsProcessorSettings> @ 14f0a96b0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FSourceEffectDynamicsProcessorSettings>(void *param_1)

{
  *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) | 3;
  *(byte *)((longlong)param_1 + 0x28) = *(byte *)((longlong)param_1 + 0x28) & 0xfe;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0;
  *(undefined2 *)param_1 = 0x100;
  *(undefined4 *)((longlong)param_1 + 4) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x10) = 0xc0c00000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x3fc00000;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0x41200000;
  return;
}

// Copy<FSourceEffectRingModulationSettings> @ 14f0a9700

bool __cdecl
UE::CoreUObject::Private::Copy<FSourceEffectRingModulationSettings>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_1 + lVar1 + 4);
      *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_1 + lVar1 + 8);
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_1 + lVar1 + 0xc);
      *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_1 + lVar1 + 0x10);
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)((longlong)param_1 + lVar1 + 0x18) != (UObject *)0x0)) {
        GC::MarkAsReachable(*(UObject **)((longlong)param_1 + lVar1 + 0x18));
      }
      *(undefined8 *)((longlong)param_1 + 0x18) = *(undefined8 *)((longlong)param_1 + lVar1 + 0x18);
      param_3 = param_3 + -1;
      param_1 = (undefined1 *)((longlong)param_1 + 0x20);
    } while (param_3 != 0);
  }
  return true;
}

// Destruct<FSourceEffectDynamicsProcessorSettings> @ 14f0a97b0

void __cdecl
UE::CoreUObject::Private::Destruct<FSourceEffectDynamicsProcessorSettings>(void *param_1)

{
  return;
}

// Copy<FSourceEffectDynamicsProcessorSettings> @ 14f0a97c0

bool __cdecl
UE::CoreUObject::Private::Copy<FSourceEffectDynamicsProcessorSettings>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    lVar7 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined8 *)(lVar7 + 0x20 + (longlong)param_1);
      uVar3 = *(undefined4 *)(lVar7 + 0x28 + (longlong)param_1);
      uVar4 = ((undefined8 *)(lVar7 + (longlong)param_1))[1];
      puVar1 = (undefined8 *)(lVar7 + 0x10 + (longlong)param_1);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      *(undefined8 *)param_1 = *(undefined8 *)(lVar7 + (longlong)param_1);
      *(undefined8 *)((longlong)param_1 + 8) = uVar4;
      *(undefined8 *)((longlong)param_1 + 0x10) = uVar5;
      *(undefined8 *)((longlong)param_1 + 0x18) = uVar6;
      *(undefined8 *)((longlong)param_1 + 0x20) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x28) = uVar3;
      param_1 = (void *)((longlong)param_1 + 0x2c);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSubmixEffectTapDelaySettings> @ 14f0a9a60

void __cdecl UE::CoreUObject::Private::Construct<FSubmixEffectTapDelaySettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x461c4000;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x43c80000;
  return;
}

// ConstructForTests<FSubmixEffectTapDelaySettings> @ 14f0a9a80

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FSubmixEffectTapDelaySettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x461c4000;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x43c80000;
  return;
}

// Destruct<FSubmixEffectTapDelaySettings> @ 14f0a9aa0

void __cdecl UE::CoreUObject::Private::Destruct<FSubmixEffectTapDelaySettings>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FSubmixEffectTapDelaySettings> @ 14f0a9b00

bool __cdecl
UE::CoreUObject::Private::Copy<FSubmixEffectTapDelaySettings>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_1 + lVar1 + 4);
      TArray<FTapDelayInfo,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FTapDelayInfo,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 8),
                 (TArray<FTapDelayInfo,TSizedDefaultAllocator<32>_> *)
                 ((longlong)param_1 + lVar1 + 8));
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x18);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSourceEffectPhaserSettings> @ 14f0a9e80

void __cdecl UE::CoreUObject::Private::Construct<FSourceEffectPhaserSettings>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0x3e99999a;
  *(undefined4 *)param_1 = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 4) = 0x40000000;
  return;
}

// ConstructForTests<FSourceEffectPhaserSettings> @ 14f0a9ea0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSourceEffectPhaserSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 4) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3e99999a;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0;
  return;
}

// Destruct<FSourceEffectPhaserSettings> @ 14f0a9ed0

void __cdecl UE::CoreUObject::Private::Destruct<FSourceEffectPhaserSettings>(void *param_1)

{
  return;
}

// Construct<FSourceEffectConvolutionReverbSettings> @ 14f0a9f20

void __cdecl
UE::CoreUObject::Private::Construct<FSourceEffectConvolutionReverbSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0xc1c00000;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0xc2c00000;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  return;
}

// Copy<FSourceEffectPhaserSettings> @ 14f0a9f40

bool __cdecl
UE::CoreUObject::Private::Copy<FSourceEffectPhaserSettings>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// ConstructForTests<FSourceEffectConvolutionReverbSettings> @ 14f0a9f70

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FSourceEffectConvolutionReverbSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0xc1c00000;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 8) = 0xc2c00000;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  return;
}

// Destruct<FSourceEffectConvolutionReverbSettings> @ 14f0a9f90

void __cdecl
UE::CoreUObject::Private::Destruct<FSourceEffectConvolutionReverbSettings>(void *param_1)

{
  return;
}

// Copy<FSourceEffectConvolutionReverbSettings> @ 14f0a9fa0

bool __cdecl
UE::CoreUObject::Private::Copy<FSourceEffectConvolutionReverbSettings>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FTapDelayInfo> @ 14f0a9fd0

void __cdecl UE::CoreUObject::Private::Construct<FTapDelayInfo>(void *param_1)

{
  int iVar1;
  
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0x447a0000;
  *(undefined4 *)((longlong)param_1 + 8) = 0xc0400000;
  iVar1 = TapDelayUtils::IdCount + 1;
  *(int *)((longlong)param_1 + 0x14) = TapDelayUtils::IdCount;
  TapDelayUtils::IdCount = iVar1;
  return;
}

// ConstructForTests<FTapDelayInfo> @ 14f0aa000

void __cdecl UE::CoreUObject::Private::ConstructForTests<FTapDelayInfo>(void *param_1)

{
  int iVar1;
  
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined1 *)param_1 = 1;
  *(undefined4 *)((longlong)param_1 + 4) = 0x447a0000;
  *(undefined4 *)((longlong)param_1 + 8) = 0xc0400000;
  iVar1 = TapDelayUtils::IdCount + 1;
  *(int *)((longlong)param_1 + 0x14) = TapDelayUtils::IdCount;
  TapDelayUtils::IdCount = iVar1;
  return;
}

// Destruct<FTapDelayInfo> @ 14f0aa030

void __cdecl UE::CoreUObject::Private::Destruct<FTapDelayInfo>(void *param_1)

{
  return;
}

// Copy<FTapDelayInfo> @ 14f0aa100

bool __cdecl UE::CoreUObject::Private::Copy<FTapDelayInfo>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      puVar4[2] = uVar2;
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSourceEffectPannerSettings> @ 14f0aa240

void __cdecl UE::CoreUObject::Private::Construct<FSourceEffectPannerSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0x3f800000;
  return;
}

// ConstructForTests<FSourceEffectPannerSettings> @ 14f0aa250

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSourceEffectPannerSettings>(void *param_1)

{
  *(undefined8 *)param_1 = 0x3f800000;
  return;
}

// Destruct<FSourceEffectPannerSettings> @ 14f0aa270

void __cdecl UE::CoreUObject::Private::Destruct<FSourceEffectPannerSettings>(void *param_1)

{
  return;
}

// Copy<FSourceEffectPannerSettings> @ 14f0aa280

bool __cdecl
UE::CoreUObject::Private::Copy<FSourceEffectPannerSettings>(void *param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_1 - (longlong)param_2;
    do {
      uVar1 = *(undefined4 *)((longlong)param_2 + 4);
      *(undefined4 *)(lVar2 + (longlong)param_2) = *(undefined4 *)param_2;
      *(undefined4 *)(lVar2 + 4 + (longlong)param_2) = uVar1;
      param_2 = (void *)((longlong)param_2 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FSourceEffectChorusSettings> @ 14f0aa2c0

void __cdecl UE::CoreUObject::Private::Construct<FSourceEffectChorusSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3e4ccccd;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3e99999a;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f000000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa8) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  *(undefined4 *)((longlong)param_1 + 0x100) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined4 *)((longlong)param_1 + 0x118) = 0;
  *(undefined8 *)((longlong)param_1 + 0x130) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined4 *)((longlong)param_1 + 0x150) = 0;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x158) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x168) = 0;
  *(undefined4 *)((longlong)param_1 + 0x170) = 0;
  *(undefined8 *)((longlong)param_1 + 0x188) = 0;
  *(undefined8 *)((longlong)param_1 + 0x180) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b0) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x1c0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1f8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d0) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x200) = 0;
  *(undefined4 *)((longlong)param_1 + 0x204) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x20c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x208) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x218) = 0;
  *(undefined4 *)((longlong)param_1 + 0x220) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 200) = 0x3e99999a;
  *(undefined4 *)((longlong)param_1 + 0x120) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x178) = 0x3f000000;
  return;
}

// ConstructForTests<FSourceEffectChorusSettings> @ 14f0aa310

void __cdecl UE::CoreUObject::Private::ConstructForTests<FSourceEffectChorusSettings>(void *param_1)

{
  *(undefined4 *)param_1 = 0x3e4ccccd;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 8) = 0x3e99999a;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x3f000000;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa8) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  *(undefined4 *)((longlong)param_1 + 0x100) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined4 *)((longlong)param_1 + 0x118) = 0;
  *(undefined8 *)((longlong)param_1 + 0x130) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  *(undefined8 *)((longlong)param_1 + 0x148) = 0;
  *(undefined4 *)((longlong)param_1 + 0x150) = 0;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x158) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x168) = 0;
  *(undefined4 *)((longlong)param_1 + 0x170) = 0;
  *(undefined8 *)((longlong)param_1 + 0x188) = 0;
  *(undefined8 *)((longlong)param_1 + 0x180) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b0) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x1c0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1f8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d0) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x200) = 0;
  *(undefined4 *)((longlong)param_1 + 0x204) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x20c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x208) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x218) = 0;
  *(undefined4 *)((longlong)param_1 + 0x220) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 200) = 0x3e99999a;
  *(undefined4 *)((longlong)param_1 + 0x120) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x178) = 0x3f000000;
  return;
}

// Destruct<FSourceEffectChorusSettings> @ 14f0aa320

void __cdecl UE::CoreUObject::Private::Destruct<FSourceEffectChorusSettings>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x220) = 0;
  if (*(void **)((longlong)param_1 + 0x218) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x218));
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x1d8));
  *(undefined4 *)((longlong)param_1 + 0x1c8) = 0;
  if (*(void **)((longlong)param_1 + 0x1c0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x1c0));
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x180));
  *(undefined4 *)((longlong)param_1 + 0x170) = 0;
  if (*(void **)((longlong)param_1 + 0x168) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x168));
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x128));
  *(undefined4 *)((longlong)param_1 + 0x118) = 0;
  if (*(void **)((longlong)param_1 + 0x110) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x110));
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0xd0));
  *(undefined4 *)((longlong)param_1 + 0xc0) = 0;
  if (*(void **)((longlong)param_1 + 0xb8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xb8));
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x78));
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TObjectPtr<USoundModulatorBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x20));
  return;
}

// Copy<FSourceEffectChorusSettings> @ 14f0aa3f0

bool __cdecl
UE::CoreUObject::Private::Copy<FSourceEffectChorusSettings>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_2 + 4);
      *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)((longlong)param_2 + 8);
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
      *(undefined4 *)((longlong)param_1 + 0x10) = *(undefined4 *)((longlong)param_2 + 0x10);
      *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
      *(undefined4 *)((longlong)param_1 + 0x18) = *(undefined4 *)((longlong)param_2 + 0x18);
      TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
      ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                   *)((longlong)param_1 + 0x20),
                  (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                   *)((longlong)param_2 + 0x20));
      *(undefined4 *)((longlong)param_1 + 0x70) = *(undefined4 *)((longlong)param_2 + 0x70);
      TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
      ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                   *)((longlong)param_1 + 0x78),
                  (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                   *)((longlong)param_2 + 0x78));
      *(undefined4 *)((longlong)param_1 + 200) = *(undefined4 *)((longlong)param_2 + 200);
      TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
      ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                   *)((longlong)param_1 + 0xd0),
                  (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                   *)((longlong)param_2 + 0xd0));
      *(undefined4 *)((longlong)param_1 + 0x120) = *(undefined4 *)((longlong)param_2 + 0x120);
      TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
      ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                   *)((longlong)param_1 + 0x128),
                  (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                   *)((longlong)param_2 + 0x128));
      *(undefined4 *)((longlong)param_1 + 0x178) = *(undefined4 *)((longlong)param_2 + 0x178);
      TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
      ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                   *)((longlong)param_1 + 0x180),
                  (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                   *)((longlong)param_2 + 0x180));
      *(undefined4 *)((longlong)param_1 + 0x1d0) = *(undefined4 *)((longlong)param_2 + 0x1d0);
      TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
      ::operator=((TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                   *)((longlong)param_1 + 0x1d8),
                  (TSet<TObjectPtr<USoundModulatorBase>,DefaultKeyFuncs<TObjectPtr<USoundModulatorBase>,0>,FDefaultSetAllocator>
                   *)((longlong)param_2 + 0x1d8));
      param_2 = (void *)((longlong)param_2 + 0x228);
      param_3 = param_3 + -1;
      param_1 = (undefined4 *)((longlong)param_1 + 0x228);
    } while (param_3 != 0);
  }
  return true;
}

// DereferenceIfNecessary<FSubmixEffectMultibandCompressor,FSubmixEffectMultibandCompressor_*_&> @ 14f0ab5e0

FSubmixEffectMultibandCompressor * __cdecl
UE::Core::Private::
DereferenceIfNecessary<FSubmixEffectMultibandCompressor,FSubmixEffectMultibandCompressor_*_&>
          (FSubmixEffectMultibandCompressor **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<USynth2DSlider,USynth2DSlider_*_&> @ 14f0ab600

USynth2DSlider * __cdecl
UE::Core::Private::DereferenceIfNecessary<USynth2DSlider,USynth2DSlider_*_&>
          (USynth2DSlider **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<USynthKnob,USynthKnob_*_&> @ 14f0ab620

USynthKnob * __cdecl
UE::Core::Private::DereferenceIfNecessary<USynthKnob,USynthKnob_*_&>(USynthKnob **param_1)

{
  return *param_1;
}

