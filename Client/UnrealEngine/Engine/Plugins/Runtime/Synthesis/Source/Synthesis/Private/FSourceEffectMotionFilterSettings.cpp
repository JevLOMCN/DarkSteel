// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 3

// StaticStruct @ 14f0a7db0

UScriptStruct * __cdecl FSourceEffectMotionFilterSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSourceEffectMotionFilterSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Synthesis();
    Z_Registration_Info_UScriptStruct_FSourceEffectMotionFilterSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSourceEffectMotionFilterSettings,
                         (UObject *)pUVar1,L"SourceEffectMotionFilterSettings");
  }
  return Z_Registration_Info_UScriptStruct_FSourceEffectMotionFilterSettings.OuterSingleton;
}

// FSourceEffectMotionFilterSettings @ 14f0b8390

FSourceEffectMotionFilterSettings * __thiscall
FSourceEffectMotionFilterSettings::FSourceEffectMotionFilterSettings
          (FSourceEffectMotionFilterSettings *this,FSourceEffectMotionFilterSettings *param_1)

{
  TMap<ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings,0>_>
  *pTVar1;
  TMap<ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings,0>_>
  *pTVar2;
  undefined1 *_Dst;
  undefined1 *_Src;
  void *pvVar3;
  ESourceEffectMotionFilterType EVar4;
  undefined2 uVar5;
  float fVar6;
  
  pTVar1 = &this->ModulationMappings;
  this->MotionFilterTopology = param_1->MotionFilterTopology;
  pTVar2 = &param_1->ModulationMappings;
  this->MotionFilterMix = param_1->MotionFilterMix;
  EVar4 = (param_1->FilterASettings).FilterType;
  uVar5 = *(undefined2 *)&(param_1->FilterASettings).field_0x2;
  fVar6 = (param_1->FilterASettings).CutoffFrequency;
  (this->FilterASettings).FilterCircuit = (param_1->FilterASettings).FilterCircuit;
  (this->FilterASettings).FilterType = EVar4;
  *(undefined2 *)&(this->FilterASettings).field_0x2 = uVar5;
  (this->FilterASettings).CutoffFrequency = fVar6;
  (this->FilterASettings).FilterQ = (param_1->FilterASettings).FilterQ;
  EVar4 = (param_1->FilterBSettings).FilterType;
  uVar5 = *(undefined2 *)&(param_1->FilterBSettings).field_0x2;
  fVar6 = (param_1->FilterBSettings).CutoffFrequency;
  (this->FilterBSettings).FilterCircuit = (param_1->FilterBSettings).FilterCircuit;
  (this->FilterBSettings).FilterType = EVar4;
  *(undefined2 *)&(this->FilterBSettings).field_0x2 = uVar5;
  (this->FilterBSettings).CutoffFrequency = fVar6;
  (this->FilterBSettings).FilterQ = (param_1->FilterBSettings).FilterQ;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->ModulationMappings).field_0x8 = 0;
  *(undefined8 *)&(this->ModulationMappings).field_0x20 = 0;
  *(undefined4 *)&(this->ModulationMappings).field_0x28 = 0;
  *(undefined4 *)&(this->ModulationMappings).field_0x2c = 0x80;
  *(undefined4 *)&(this->ModulationMappings).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ModulationMappings).field_0x34 = 0;
  *(undefined8 *)&(this->ModulationMappings).field_0x40 = 0;
  *(undefined4 *)&(this->ModulationMappings).field_0x48 = 0;
  if (pTVar1 != pTVar2) {
    *(undefined8 *)pTVar1 = *(undefined8 *)pTVar2;
    *(undefined8 *)pTVar2 = 0;
    _Dst = &(this->ModulationMappings).field_0x10;
    *(undefined4 *)&(this->ModulationMappings).field_0x8 =
         *(undefined4 *)&(param_1->ModulationMappings).field_0x8;
    _Src = &(param_1->ModulationMappings).field_0x10;
    *(undefined4 *)&(this->ModulationMappings).field_0xc =
         *(undefined4 *)&(param_1->ModulationMappings).field_0xc;
    *(undefined8 *)&(param_1->ModulationMappings).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->ModulationMappings).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar3 = *(void **)&(this->ModulationMappings).field_0x20;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      *(undefined8 *)&(this->ModulationMappings).field_0x20 =
           *(undefined8 *)&(param_1->ModulationMappings).field_0x20;
      *(undefined8 *)&(param_1->ModulationMappings).field_0x20 = 0;
      *(undefined4 *)&(this->ModulationMappings).field_0x28 =
           *(undefined4 *)&(param_1->ModulationMappings).field_0x28;
      *(undefined4 *)&(this->ModulationMappings).field_0x2c =
           *(undefined4 *)&(param_1->ModulationMappings).field_0x2c;
      *(undefined8 *)&(param_1->ModulationMappings).field_0x28 = 0;
    }
    *(undefined4 *)&(this->ModulationMappings).field_0x30 =
         *(undefined4 *)&(param_1->ModulationMappings).field_0x30;
    *(undefined4 *)&(this->ModulationMappings).field_0x34 =
         *(undefined4 *)&(param_1->ModulationMappings).field_0x34;
    *(undefined4 *)&(param_1->ModulationMappings).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->ModulationMappings).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->ModulationMappings).field_0x40 == 0) {
    *(undefined4 *)&(this->ModulationMappings).field_0x38 =
         *(undefined4 *)&(param_1->ModulationMappings).field_0x38;
  }
  pvVar3 = *(void **)&(this->ModulationMappings).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  *(undefined8 *)&(this->ModulationMappings).field_0x40 =
       *(undefined8 *)&(param_1->ModulationMappings).field_0x40;
  *(undefined8 *)&(param_1->ModulationMappings).field_0x40 = 0;
  *(undefined4 *)&(this->ModulationMappings).field_0x48 =
       *(undefined4 *)&(param_1->ModulationMappings).field_0x48;
  *(undefined4 *)&(param_1->ModulationMappings).field_0x48 = 0;
  this->DryVolumeDb = param_1->DryVolumeDb;
  return this;
}

// FSourceEffectMotionFilterSettings @ 14f0b8500

FSourceEffectMotionFilterSettings * __thiscall
FSourceEffectMotionFilterSettings::FSourceEffectMotionFilterSettings
          (FSourceEffectMotionFilterSettings *this)

{
  TMap<ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings,0>_>
  *this_00;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  longlong lVar4;
  bool bVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint *puVar15;
  uint uVar16;
  uint local_78;
  uint uStack_74;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  this_00 = &this->ModulationMappings;
  (this->FilterASettings).FilterCircuit = Ladder;
  (this->FilterASettings).FilterType = LowPass;
  uVar12 = 0;
  (this->FilterASettings).CutoffFrequency = 800.0;
  (this->FilterASettings).FilterQ = 2.0;
  puVar1 = &(this->ModulationMappings).field_0x48;
  (this->FilterBSettings).FilterCircuit = Ladder;
  (this->FilterBSettings).FilterType = LowPass;
  puVar3 = &(this->ModulationMappings).field_0xc;
  (this->FilterBSettings).CutoffFrequency = 800.0;
  (this->FilterBSettings).FilterQ = 2.0;
  *(undefined4 *)puVar3 = 0;
  this->MotionFilterTopology = ParallelMode;
  this->MotionFilterMix = 0.0;
  *(undefined8 *)this_00 = 0;
  *(undefined4 *)&(this->ModulationMappings).field_0x8 = 0;
  *(undefined8 *)&(this->ModulationMappings).field_0x20 = 0;
  *(undefined4 *)&(this->ModulationMappings).field_0x28 = 0;
  *(undefined4 *)&(this->ModulationMappings).field_0x2c = 0x80;
  *(undefined4 *)&(this->ModulationMappings).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ModulationMappings).field_0x34 = 0;
  *(undefined8 *)&(this->ModulationMappings).field_0x40 = 0;
  *(undefined4 *)puVar1 = 0;
  this->DryVolumeDb = -96.0;
  for (lVar4 = 0x3f; 0x15UL >> lVar4 == 0; lVar4 = lVar4 + -1) {
  }
  uVar16 = 1 << ((byte)lVar4 & 0x1f);
  if ((*(int *)puVar1 < (int)uVar16) || ((int)uVar16 < *(int *)puVar1)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
    TSet<TTuple<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings>,TDefaultMapHashableKeyFuncs<enum_ESourceEffectMotionFilterModDestination,FSourceEffectMotionFilterModulationSettings,0>,FDefaultSetAllocator>
    ::UnhashElements(this_00);
  }
  *(undefined4 *)&(this->ModulationMappings).field_0x8 = 0;
  if (*(int *)puVar3 != 7) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,7,(ForAnyElementType *)this_00,0,(int *)puVar3);
  }
  puVar3 = &(this->ModulationMappings).field_0x10;
  *(undefined4 *)&(this->ModulationMappings).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ModulationMappings).field_0x34 = 0;
  iVar11 = *(int *)&(this->ModulationMappings).field_0x2c;
  *(undefined4 *)&(this->ModulationMappings).field_0x28 = 0;
  if ((iVar11 < 0x20) || (0x80 < iVar11)) {
    *(undefined4 *)&(this->ModulationMappings).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc((TBitArray<FDefaultBitArrayAllocator> *)puVar3,0);
  }
  if (!bVar5) {
    return this;
  }
  puVar2 = &(this->ModulationMappings).field_0x38;
  *(uint *)puVar1 = uVar16;
  if (*(longlong *)&(this->ModulationMappings).field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->ModulationMappings).field_0x40,0,0,4);
  }
  if (uVar16 == 0) goto LAB_14f0b86a4;
  uVar13 = uVar16;
  if (uVar16 < 2) {
    if (*(longlong *)&(this->ModulationMappings).field_0x40 != 0) {
      uVar13 = 0;
      goto LAB_14f0b865d;
    }
  }
  else {
LAB_14f0b865d:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->ModulationMappings).field_0x40,0,uVar13,4);
  }
  if (0 < (int)uVar16) {
    uVar14 = (ulonglong)uVar16;
    uVar9 = uVar12;
    do {
      puVar10 = *(undefined1 **)&(this->ModulationMappings).field_0x40;
      puVar8 = puVar2;
      if (puVar10 != (undefined1 *)0x0) {
        puVar8 = puVar10;
      }
      uVar6 = uVar9 & (longlong)(int)uVar16 - 1U;
      uVar9 = uVar9 + 1;
      *(undefined4 *)(puVar8 + uVar6 * 4) = 0xffffffff;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
LAB_14f0b86a4:
  if (*(int *)puVar1 != 0) {
    uVar16 = *(uint *)&(this->ModulationMappings).field_0x28;
    local_78 = 0;
    uStack_74 = 1;
    uStack_64 = 0;
    uStack_60 = 0;
    if (uVar16 != 0) {
      puVar15 = *(uint **)&(this->ModulationMappings).field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)puVar3;
      }
      uVar13 = *puVar15;
      uVar9 = uVar12;
      while (uVar13 == 0) {
        iVar11 = (int)uVar12;
        uStack_60 = (int)uVar9 + 0x20;
        uVar9 = (ulonglong)uStack_60;
        local_78 = iVar11 + 1;
        uVar12 = (ulonglong)local_78;
        if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_78)
        goto LAB_14f0b873e;
        uVar13 = puVar15[(longlong)iVar11 + 1];
      }
      uStack_74 = -uVar13 & uVar13;
      uVar12 = (ulonglong)uStack_74 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      uStack_64 = (uStack_60 - 1) + (int)lVar4;
      uVar12 = (ulonglong)uStack_64;
      if ((int)uVar16 < (int)uStack_64) {
LAB_14f0b873e:
        uVar12 = (ulonglong)uVar16;
        uStack_64 = uVar16;
      }
    }
    local_50._padding_._0_4_ = local_78;
    local_50._padding_._4_4_ = uStack_74;
    local_50.UnvisitedBitMask = 0xffffffff;
    local_50.CurrentBitIndex = uStack_64;
    local_50._28_4_ = uStack_5c;
    local_50.BaseBitIndex = uStack_60;
    local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
    if ((int)uVar12 < (int)uVar16) {
      do {
        lVar4 = *(longlong *)this_00;
        lVar7 = (longlong)(int)uVar12;
        uVar16 = *(int *)puVar1 - 1U & (uint)*(byte *)(lVar4 + lVar7 * 0x50);
        *(uint *)(lVar4 + lVar7 * 0x50 + 0x4c) = uVar16;
        puVar3 = *(undefined1 **)&(this->ModulationMappings).field_0x40;
        puVar10 = puVar2;
        if (puVar3 != (undefined1 *)0x0) {
          puVar10 = puVar3;
        }
        uVar9 = (longlong)*(int *)puVar1 - 1U & (ulonglong)uVar16;
        *(undefined4 *)(lVar4 + lVar7 * 0x50 + 0x48) = *(undefined4 *)(puVar10 + uVar9 * 4);
        *(int *)(puVar10 + uVar9 * 4) = (int)uVar12;
        local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
        uVar12 = (ulonglong)(uint)local_50.CurrentBitIndex;
      } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
    }
  }
  return this;
}

