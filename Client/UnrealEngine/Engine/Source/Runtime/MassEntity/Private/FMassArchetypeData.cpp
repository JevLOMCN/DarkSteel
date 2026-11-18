// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 53

// FMassArchetypeData @ 1471d6690

/* WARNING: Enum "Type": Some values do not have unique names */

FMassArchetypeData * __thiscall
FMassArchetypeData::FMassArchetypeData
          (FMassArchetypeData *this,FMassArchetypeCreationParams *param_1)

{
  int *piVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  int iVar4;
  UClass *this_00;
  uint uVar5;
  uint uVar6;
  
  *(undefined8 *)&(this->CompositionDescriptor).Fragments.field_0x10 = 0;
  *(undefined4 *)&(this->CompositionDescriptor).Fragments.field_0x18 = 0;
  *(undefined4 *)&(this->CompositionDescriptor).Fragments.field_0x1c = 0x80;
  *(undefined8 *)&(this->CompositionDescriptor).Tags.field_0x10 = 0;
  *(undefined4 *)&(this->CompositionDescriptor).Tags.field_0x18 = 0;
  *(undefined4 *)&(this->CompositionDescriptor).Tags.field_0x1c = 0x80;
  *(undefined8 *)&(this->CompositionDescriptor).ChunkFragments.field_0x10 = 0;
  *(undefined4 *)&(this->CompositionDescriptor).ChunkFragments.field_0x18 = 0;
  *(undefined4 *)&(this->CompositionDescriptor).ChunkFragments.field_0x1c = 0x80;
  *(undefined8 *)&(this->CompositionDescriptor).SharedFragments.field_0x10 = 0;
  *(undefined4 *)&(this->CompositionDescriptor).SharedFragments.field_0x18 = 0;
  *(undefined4 *)&(this->CompositionDescriptor).SharedFragments.field_0x1c = 0x80;
  *(undefined8 *)&(this->CompositionDescriptor).ConstSharedFragments.field_0x10 = 0;
  *(undefined4 *)&(this->CompositionDescriptor).ConstSharedFragments.field_0x18 = 0;
  *(undefined4 *)&(this->CompositionDescriptor).ConstSharedFragments.field_0x1c = 0x80;
  (this->ChunkFragmentsTemplate).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChunkFragmentsTemplate).ArrayNum = 0;
  (this->ChunkFragmentsTemplate).ArrayMax = 0;
  (this->FragmentConfigs).AllocatorInstance.SecondaryData =
       (ForElementType<FMassArchetypeFragmentConfig>)0x0;
  (this->FragmentConfigs).ArrayNum = 0;
  (this->FragmentConfigs).ArrayMax = 0x10;
  (this->Chunks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Chunks).ArrayNum = 0;
  (this->Chunks).ArrayMax = 0;
  *(undefined8 *)&this->EntityMap = 0;
  *(undefined8 *)&(this->EntityMap).field_0x8 = 0;
  *(undefined8 *)&(this->EntityMap).field_0x20 = 0;
  *(undefined4 *)&(this->EntityMap).field_0x28 = 0;
  *(undefined4 *)&(this->EntityMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->EntityMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EntityMap).field_0x34 = 0;
  *(undefined8 *)&(this->EntityMap).field_0x40 = 0;
  *(undefined4 *)&(this->EntityMap).field_0x48 = 0;
  *(undefined8 *)&this->FragmentIndexMap = 0;
  *(undefined8 *)&(this->FragmentIndexMap).field_0x8 = 0;
  *(undefined8 *)&(this->FragmentIndexMap).field_0x20 = 0;
  *(undefined4 *)&(this->FragmentIndexMap).field_0x28 = 0;
  *(undefined4 *)&(this->FragmentIndexMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->FragmentIndexMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FragmentIndexMap).field_0x34 = 0;
  *(undefined8 *)&(this->FragmentIndexMap).field_0x40 = 0;
  *(undefined4 *)&(this->FragmentIndexMap).field_0x48 = 0;
  *(undefined8 *)&(this->Groups).IDContainer = 0;
  *(undefined8 *)&(this->Groups).IDContainer.field_0x8 = 0;
  *(undefined8 *)&(this->Groups).IDContainer.field_0x20 = 0;
  *(undefined4 *)&(this->Groups).IDContainer.field_0x28 = 0;
  *(undefined4 *)&(this->Groups).IDContainer.field_0x2c = 0x80;
  *(undefined4 *)&(this->Groups).IDContainer.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Groups).IDContainer.field_0x34 = 0;
  this->NumEntitiesPerChunk = -1;
  this->TotalBytesPerEntity = 0;
  this->EntityListOffsetWithinChunk = -1;
  this->CreatedArchetypeDataVersion = 0;
  this->EntityOrderVersion = 0;
  uVar6 = param_1->ChunkMemorySize;
  if (uVar6 == 0) {
    this_00 = UMassEntitySettings::StaticClass();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    uVar6 = *(uint *)((this_00->ClassDefaultObject).field0_0x0.DebugPtr + 1);
  }
  uVar3 = 0x80000;
  if (uVar6 < 0x80000) {
    uVar3 = uVar6;
  }
  uVar5 = 0x400;
  if (0x400 < uVar3) {
    uVar5 = uVar3;
  }
  if ((2 < (byte)LogMass._0_1_) && (uVar5 != uVar6)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
  }
  this->ChunkMemorySize = uVar5;
  pTVar2 = &this->DebugNames;
  piVar1 = &(this->DebugNames).ArrayMax;
  *piVar1 = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->DebugNames).ArrayNum = 0;
  iVar4 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x408,&pTVar2->AllocatorInstance,piVar1);
  (this->DebugNames).ArrayNum = iVar4 + 1;
  *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar4 * 8) = param_1->DebugName;
  (this->DebugColor).field0_0x0 = (param_1->DebugColor).field0_0x0;
  return this;
}

// AddEntity @ 1471ed580

void __thiscall
FMassArchetypeData::AddEntity
          (FMassArchetypeData *this,FMassEntityHandle param_1,
          FMassArchetypeSharedFragmentValues *param_2)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ForElementType<FMassArchetypeFragmentConfig> FVar10;
  ForElementType<FMassArchetypeFragmentConfig> FVar11;
  undefined1 local_res8 [8];
  
  iVar7 = AddEntityInternal(this,param_1,param_2);
  iVar1 = this->NumEntitiesPerChunk;
  uVar8 = iVar7 / iVar1;
  uVar9 = 0;
  if ((int)uVar8 < (this->Chunks).ArrayNum) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar2 = (this->FragmentConfigs).ArrayNum;
  pFVar3 = (this->Chunks).AllocatorInstance.Data;
  FVar10 = (this->FragmentConfigs).AllocatorInstance.SecondaryData;
  if (FVar10 == (ForElementType<FMassArchetypeFragmentConfig>)0x0) {
    FVar10 = (ForElementType<FMassArchetypeFragmentConfig>)&this->FragmentConfigs;
  }
  FVar11 = (ForElementType<FMassArchetypeFragmentConfig>)((longlong)iVar2 * 0x10 + (longlong)FVar10)
  ;
  while( true ) {
    if ((this->FragmentConfigs).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FMassArchetypeFragmentConfig,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar10 == FVar11) break;
    plVar4 = *(longlong **)FVar10;
    (**(code **)(*plVar4 + 0x2f8))
              (plVar4,(longlong)
                      (((int)plVar4[0xb] + -1 + (int)*(short *)((longlong)plVar4 + 0x5c) &
                       -(int)*(short *)((longlong)plVar4 + 0x5c)) * (iVar7 % iVar1)) +
                      (longlong)*(int *)((longlong)FVar10 + 8) +
                      *(longlong *)(pFVar3 + (longlong)(int)uVar8 * 0x90),1);
    FVar10 = (ForElementType<FMassArchetypeFragmentConfig>)((longlong)FVar10 + 0x10);
  }
  return;
}

// AddEntityInternal @ 1471ed6b0

int __thiscall
FMassArchetypeData::AddEntityInternal
          (FMassArchetypeData *this,FMassEntityHandle param_1,
          FMassArchetypeSharedFragmentValues *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FMassArchetypeChunk *pFVar4;
  int local_res8 [2];
  FMassEntityHandle local_res10;
  int local_res18 [4];
  FMassEntityHandle *local_28;
  int *local_20;
  
  local_res10 = param_1;
  if (param_2->bSorted == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SharedFragmentValues.IsSorted()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeData.cpp"
                       ,0xc6,L"Expecting shared fragment values to be previously sorted");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  bVar2 = TBitArray<FDefaultBitArrayAllocator>::CompareSetBits<FDefaultBitArrayAllocator>
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->SharedFragmentBitSet,
                     (TBitArray<FDefaultBitArrayAllocator> *)
                     &(this->CompositionDescriptor).SharedFragments,false);
  if (bVar2) {
    bVar2 = TBitArray<FDefaultBitArrayAllocator>::CompareSetBits<FDefaultBitArrayAllocator>
                      ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->ConstSharedFragmentBitSet,
                       (TBitArray<FDefaultBitArrayAllocator> *)
                       &(this->CompositionDescriptor).ConstSharedFragments,false);
    if (bVar2) goto LAB_1471ed73f;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("SharedFragmentValues.HasExactFragmentTypesMatch(CompositionDescriptor.GetSharedFragments(), CompositionDescriptor.GetConstSharedFragments())"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeData.cpp"
                     ,200,
                     L"Expecting values for every specified shared fragment in the archetype and only those"
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
LAB_1471ed73f:
  local_res18[0] = 0;
  local_res8[0] = 0;
  pFVar4 = GetOrAddChunk(this,param_2,local_res8,local_res18);
  pFVar4->NumInstances = pFVar4->NumInstances + 1;
  pFVar4->SerialModificationNumber = pFVar4->SerialModificationNumber + 1;
  local_28 = &local_res10;
  local_20 = local_res8;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,int_const_&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &this->EntityMap,(TPairInitializer<int_const_&,int_const_&> *)(local_res18 + 2),
             (bool *)&local_28);
  *(FMassEntityHandle *)
   (pFVar4->RawMemory + (longlong)this->EntityListOffsetWithinChunk + (longlong)local_res18[0] * 8)
       = local_res10;
  return local_res8[0];
}

// BatchAddEntities @ 1471f4660

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMassArchetypeData::BatchAddEntities
          (FMassArchetypeData *this,TArrayView<FMassEntityHandle_const_,int> *param_1,
          FMassArchetypeSharedFragmentValues *param_2,
          TArray<FMassArchetypeEntityCollection::FArchetypeEntityRange,TSizedDefaultAllocator<32>_>
          *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_Mass_ArchetypeBatchAdd> FVar13;
  FArchetypeEntityRange *pFVar14;
  uint uVar15;
  FNameEntryId FVar16;
  uint uVar17;
  ForElementType<FMassArchetypeFragmentConfig> FVar18;
  FName FVar19;
  ForElementType<FMassArchetypeFragmentConfig> FVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined1 local_c7 [7];
  uint local_c0;
  int iStack_bc;
  int iStack_b8;
  uint local_b0;
  uint uStack_ac;
  FColor_u_0 local_a8 [2];
  FName local_a0;
  FName local_98;
  FName local_90;
  FMassEntityHandle *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FName local_68 [2];
  TArrayView<FMassEntityHandle_const_,int> local_58;
  FArchetypeEntityRange local_48;
  
  uVar17 = 0;
  FVar13 = StatPtr_STAT_Mass_ArchetypeBatchAdd;
  if (StatPtr_STAT_Mass_ArchetypeBatchAdd ==
      (FThreadSafeStaticStat<FStat_STAT_Mass_ArchetypeBatchAdd>)0x0) {
    pFVar12 = ::FName::FName(local_68,"STAT_Mass_ArchetypeBatchAdd");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_Mass_ArchetypeBatchAdd>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Mass_ArchetypeBatchAdd,*pFVar12,
                        L"Mass Archetype BatchAdd","STATGROUP_Mass","STATCAT_Advanced",L"Mass",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar13;
  bVar6 = false;
  bVar7 = false;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  bVar9 = false;
  bVar10 = false;
  FVar16 = FVar19.ComparisonIndex.Value;
  uVar15 = FVar19.Number;
  if ((FVar16.Value == 0) && (uVar15 == 0)) {
LAB_1471f47bc:
    bVar7 = bVar10;
    bVar6 = bVar9;
    bVar9 = false;
    local_98 = local_90;
    FVar19 = local_90;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_a8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_a8[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar6 = false;
      bVar7 = true;
      bVar9 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a0.ComparisonIndex.Value = FVar16.Value;
        local_a0.Number = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a0,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeData.cpp"
                   ,0x47c);
        bVar6 = true;
        bVar7 = true;
        bVar9 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1471f47bc;
    local_b0 = FVar16.Value;
    uStack_ac = uVar15;
    local_98 = FVar19;
    FThreadStats::AddMessage(FVar19,CycleScopeStart);
    bVar9 = true;
  }
  bVar10 = TBitArray<FDefaultBitArrayAllocator>::CompareSetBits<FDefaultBitArrayAllocator>
                     ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->SharedFragmentBitSet,
                      (TBitArray<FDefaultBitArrayAllocator> *)
                      &(this->CompositionDescriptor).SharedFragments,false);
  if (UE::AITestSuite::TestsInProgress < 1) {
    if ((!bVar10) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("SharedFragmentValues.HasExactSharedFragmentTypesMatch(GetCompositionDescriptor().GetSharedFragments())"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeData.cpp"
                            ,0x47e,
                            L"%hs parameter SharedFragmentValues doesn\'t match archetype\'s composition"
                           ), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (!bVar10) {
    if (1 < (byte)LogTestableEnsures._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTestableEnsures);
    }
    goto LAB_1471f4bac;
  }
  bVar10 = TBitArray<FDefaultBitArrayAllocator>::CompareSetBits<FDefaultBitArrayAllocator>
                     ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->ConstSharedFragmentBitSet,
                      (TBitArray<FDefaultBitArrayAllocator> *)
                      &(this->CompositionDescriptor).ConstSharedFragments,false);
  if (UE::AITestSuite::TestsInProgress < 1) {
    if ((!bVar10) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("SharedFragmentValues.HasExactConstSharedFragmentTypesMatch(GetCompositionDescriptor().GetConstSharedFragments())"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeData.cpp"
                            ,0x47f,
                            L"%hs parameter ConstSharedFragmentValues doesn\'t match archetype\'s composition"
                           ), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (!bVar10) {
    if (1 < (byte)LogTestableEnsures._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTestableEnsures);
    }
    goto LAB_1471f4bac;
  }
  iStack_bc = 0;
  iStack_b8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  do {
    local_78 = param_1->DataPtr + (int)uVar17;
    iStack_70 = param_1->ArrayNum - uVar17;
    if ((iStack_70 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_58._12_4_ = uStack_6c;
    local_58.ArrayNum = iStack_70;
    local_58.DataPtr = local_78;
    uVar22 = (ulonglong)local_c0;
    pFVar14 = PrepareNextEntitiesSpanInternal(this,&local_48,&local_58,param_2,local_c0);
    uVar1 = pFVar14->ChunkIndex;
    uVar2 = pFVar14->SubchunkStart;
    iStack_b8 = pFVar14->Length;
    local_c0 = uVar1;
    iStack_bc = uVar2;
    if (((int)uVar1 < 0) || ((this->Chunks).ArrayNum <= (int)uVar1)) {
LAB_1471f49c4:
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Chunks.IsValidIndex(ResultSubchunk.ChunkIndex) && Chunks[ResultSubchunk.ChunkIndex].IsValidSubChunk(ResultSubchunk.SubchunkStart, ResultSubchunk.Length)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeData.cpp"
                          ,0x487,L"");
      if (bVar10) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      uVar17 = 0;
      if ((int)uVar1 < (this->Chunks).ArrayNum) {
        uVar17 = (uint)~uVar1 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (uVar22 = (longlong)(int)uVar1,
         bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (((iStack_bc < 0) ||
          (iVar11 = *(int *)((this->Chunks).AllocatorInstance.Data +
                            (longlong)(int)uVar1 * 0x90 + 0x10), iVar11 <= iStack_bc)) ||
         (iVar11 < iStack_b8 + iStack_bc)) goto LAB_1471f49c4;
    }
    FVar18 = (this->FragmentConfigs).AllocatorInstance.SecondaryData;
    iVar11 = (this->FragmentConfigs).ArrayNum;
    FVar20 = (ForElementType<FMassArchetypeFragmentConfig>)&this->FragmentConfigs;
    if (FVar18 != (ForElementType<FMassArchetypeFragmentConfig>)0x0) {
      FVar20 = FVar18;
    }
    FVar18 = (ForElementType<FMassArchetypeFragmentConfig>)
             ((longlong)iVar11 * 0x10 + (longlong)FVar20);
    while( true ) {
      if ((this->FragmentConfigs).ArrayNum != iVar11) {
        local_c7[0] = 0;
        `TCheckedPointerIterator<FMassArchetypeFragmentConfig,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_c7);
      }
      iVar8 = iStack_bc;
      if (FVar20 == FVar18) break;
      uVar21 = (ulonglong)(int)local_c0;
      uVar17 = 0;
      if ((int)local_c0 < (this->Chunks).ArrayNum) {
        uVar17 = ~local_c0 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (uVar22 = uVar21,
         bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      plVar3 = *(longlong **)FVar20;
      (**(code **)(*plVar3 + 0x2f8))
                (plVar3,(longlong)
                        (((int)plVar3[0xb] + -1 + (int)*(short *)((longlong)plVar3 + 0x5c) &
                         -(int)*(short *)((longlong)plVar3 + 0x5c)) * iVar8) +
                        *(longlong *)((this->Chunks).AllocatorInstance.Data + uVar21 * 0x90) +
                        (longlong)*(int *)((longlong)FVar20 + 8),iStack_b8,plVar3,uVar22);
      FVar20 = (ForElementType<FMassArchetypeFragmentConfig>)((longlong)FVar20 + 0x10);
    }
    uVar17 = local_b0 + iStack_b8;
    pFVar4 = (param_3->AllocatorInstance).Data;
    local_b0 = uVar17;
    if (((pFVar4 <= (FScriptContainerElement *)&local_c0) &&
        ((FScriptContainerElement *)&local_c0 < pFVar4 + (longlong)param_3->ArrayMax * 0xc)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar11 = param_3->ArrayNum;
    if (iVar11 == param_3->ArrayMax) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40c,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar11 + 1;
    pFVar4 = (param_3->AllocatorInstance).Data;
    *(ulonglong *)(pFVar4 + (longlong)iVar11 * 0xc) = CONCAT44(iStack_bc,local_c0);
    *(int *)(pFVar4 + (longlong)iVar11 * 0xc + 8) = iStack_b8;
    FVar19 = local_98;
  } while ((int)uVar17 < param_1->ArrayNum);
LAB_1471f4bac:
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FThreadStats::AddMessage(FVar19,CycleScopeEnd);
  }
  return;
}

// BatchDestroyEntityChunks @ 1471f80a0

void __thiscall
FMassArchetypeData::BatchDestroyEntityChunks
          (FMassArchetypeData *this,
          TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> *param_1,
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *param_2)

{
  FArchetypeEntityRange *pFVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  code *pcVar4;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  TArray<FMassArchetypeChunk,TSizedDefaultAllocator<32>_> *pTVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ForAnyElementType FVar15;
  void *_Src;
  ForElementType<FMassArchetypeFragmentConfig> FVar16;
  longlong lVar17;
  int iVar18;
  uint *puVar19;
  TArray<FMassArchetypeChunk,TSizedDefaultAllocator<32>_> *pTVar20;
  ulonglong uVar21;
  ForElementType<FMassArchetypeFragmentConfig> FVar22;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this_00;
  FScriptContainerElement *pFVar23;
  undefined1 local_res10 [8];
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_res18;
  undefined1 local_res20 [8];
  undefined1 local_98 [4];
  uint local_94;
  ForAnyElementType local_90;
  uint local_88;
  int local_84;
  int local_80;
  uint local_7c;
  FArchetypeEntityRange *local_78;
  undefined8 local_70;
  TArray<FMassArchetypeChunk,TSizedDefaultAllocator<32>_> *local_60;
  FArchetypeEntityRange *local_58;
  int *local_50;
  
  local_88 = param_1->ArrayNum;
  lVar14 = (longlong)(int)local_88;
  local_50 = &param_2->ArrayNum;
  local_94 = *local_50;
  pFVar1 = param_1->DataPtr;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_res18 = param_2;
  if (local_88 == 0) {
    local_84 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,local_88,0,&local_90,local_88,&local_84);
    memcpy(local_90.Data,pFVar1,lVar14 * 0xc);
  }
  AlgoImpl::
  IntroSortInternal<FMassArchetypeEntityCollection::FArchetypeEntityRange,int,FIdentityFunctor,TDereferenceWrapper<FMassArchetypeEntityCollection::FArchetypeEntityRange,_FMassArchetypeData::BatchDestroyEntityChunks_::__l2::<lambda_1>_>_>
            ((FArchetypeEntityRange *)local_90.Data,local_88,local_res18._0_1_,
             (<lambda_1> *)local_98);
  uVar13 = (ulonglong)(int)local_88;
  local_60 = &this->Chunks;
  local_7c = local_88;
  local_58 = (FArchetypeEntityRange *)(local_90.Data + uVar13 * 0xc);
  FVar15.Data = local_90.Data;
  uVar21 = uVar13;
  while( true ) {
    pFVar1 = local_58;
    pTVar7 = local_60;
    pTVar20 = &this->Chunks;
    local_78 = (FArchetypeEntityRange *)FVar15.Data;
    if ((int)uVar13 != (int)uVar21) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FMassArchetypeEntityCollection::FArchetypeEntityRange,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
      pTVar20 = pTVar7;
    }
    pTVar5 = local_res18;
    if ((FArchetypeEntityRange *)FVar15.Data == pFVar1) break;
    local_70._0_4_ = ((FArchetypeEntityRange *)FVar15.Data)->ChunkIndex;
    local_70._4_4_ = ((FArchetypeEntityRange *)FVar15.Data)->SubchunkStart;
    iVar18 = ((FArchetypeEntityRange *)FVar15.Data)->Length;
    lVar14 = (longlong)(int)(undefined4)local_70;
    local_80 = (undefined4)local_70;
    if (((int)(undefined4)local_70 < 0 || (this->Chunks).ArrayNum <= (int)(undefined4)local_70) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar23 = (this->Chunks).AllocatorInstance.Data + lVar14 * 0x90;
    iVar6 = local_70._4_4_;
    if (iVar18 < 1) {
      iVar18 = *(int *)(pFVar23 + 0x10) - local_70._4_4_;
    }
    _Src = (void *)((longlong)this->EntityListOffsetWithinChunk + (longlong)local_70._4_4_ * 8 +
                   *(longlong *)pFVar23);
    if (((_Src == (void *)0x0) && (iVar18 != 0)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar5 = local_res18;
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar18,&local_res18->AllocatorInstance,&local_res18->ArrayNum,
                       &local_res18->ArrayMax);
    if (iVar18 != 0) {
      memcpy((pTVar5->AllocatorInstance).Data + (longlong)iVar9 * 8,_Src,(longlong)iVar18 << 3);
    }
    FVar22 = (this->FragmentConfigs).AllocatorInstance.SecondaryData;
    FVar16 = (ForElementType<FMassArchetypeFragmentConfig>)&this->FragmentConfigs;
    iVar9 = (this->FragmentConfigs).ArrayNum;
    if (FVar22 != (ForElementType<FMassArchetypeFragmentConfig>)0x0) {
      FVar16 = FVar22;
    }
    FVar22 = (ForElementType<FMassArchetypeFragmentConfig>)
             ((longlong)iVar9 * 0x10 + (longlong)FVar16);
    while( true ) {
      if ((this->FragmentConfigs).ArrayNum != iVar9) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FMassArchetypeFragmentConfig,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res20);
      }
      if (FVar16 == FVar22) break;
      plVar2 = *(longlong **)FVar16;
      (**(code **)(*plVar2 + 0x300))
                (plVar2,(longlong)
                        (((int)plVar2[0xb] + -1 + (int)*(short *)((longlong)plVar2 + 0x5c) &
                         -(int)*(short *)((longlong)plVar2 + 0x5c)) * iVar6) +
                        (longlong)*(int *)((longlong)FVar16 + 8) + *(longlong *)pFVar23,iVar18);
      FVar16 = (ForElementType<FMassArchetypeFragmentConfig>)((longlong)FVar16 + 0x10);
    }
    BatchRemoveEntitiesInternal(this,local_80,iVar6,iVar18);
    uVar13 = (ulonglong)local_88;
    FVar15.Data = (FScriptContainerElement *)(local_78 + 1);
    uVar21 = (ulonglong)local_7c;
  }
  uVar21 = (ulonglong)(int)local_94;
  iVar18 = *local_50;
  if ((int)local_94 < iVar18) {
    lVar14 = uVar21 * 8;
    this_00 = &this->EntityMap;
    do {
      uVar10 = 0;
      if ((int)(uint)uVar21 < iVar18) {
        uVar10 = ~(uint)uVar21 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar10 = *(uint *)((pTVar5->AllocatorInstance).Data + lVar14);
      if (*(int *)&(this->EntityMap).field_0x8 != *(int *)&(this->EntityMap).field_0x34) {
        puVar3 = *(undefined1 **)&(this->EntityMap).field_0x40;
        puVar11 = &(this->EntityMap).field_0x38;
        if (puVar3 != (undefined1 *)0x0) {
          puVar11 = puVar3;
        }
        uVar12 = *(uint *)(puVar11 +
                          (ulonglong)(*(int *)&(this->EntityMap).field_0x48 - 1U & uVar10) * 4);
        if (uVar12 != 0xffffffff) {
          do {
            if (*(uint *)(*(longlong *)&this_00->field_0x0 + (longlong)(int)uVar12 * 0x10) == uVar10
               ) {
              if (uVar12 != 0xffffffff) goto LAB_1471f84b4;
              goto LAB_1471f848e;
            }
            uVar12 = *(uint *)(*(longlong *)&this_00->field_0x0 + 8 + (longlong)(int)uVar12 * 0x10);
          } while (uVar12 != 0xffffffff);
        }
      }
      uVar12 = 0xffffffff;
LAB_1471f848e:
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("PairId.IsValidId()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x556,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
LAB_1471f84b4:
      if (((int)uVar12 < 0) || (*(int *)&(this->EntityMap).field_0x28 <= (int)uVar12)) {
LAB_1471f8514:
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Elements.IsValidIndex(ElementIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        if ((*(int *)&(this->EntityMap).field_0x28 <= (int)uVar12) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar3 = *(undefined1 **)&(this->EntityMap).field_0x20;
        puVar11 = &(this->EntityMap).field_0x10;
        if (puVar3 != (undefined1 *)0x0) {
          puVar11 = puVar3;
        }
        uVar10 = uVar12;
        if ((int)uVar12 < 0) {
          uVar10 = uVar12 + 0x1f;
        }
        if ((*(uint *)(puVar11 + (longlong)((int)uVar10 >> 5) * 4) >> (uVar12 & 0x1f) & 1) == 0)
        goto LAB_1471f8514;
      }
      puVar3 = *(undefined1 **)&(this->EntityMap).field_0x40;
      lVar17 = (longlong)(int)uVar12 * 0x10 + *(longlong *)&this_00->field_0x0;
      puVar11 = &(this->EntityMap).field_0x38;
      if (puVar3 != (undefined1 *)0x0) {
        puVar11 = puVar3;
      }
      puVar19 = (uint *)(puVar11 + (longlong)*(int *)(lVar17 + 0xc) * 4);
      while( true ) {
        uVar10 = *puVar19;
        if ((uVar10 == 0xffffffff) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("NextElementIndex != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                               ,0x2b5,L"Corrupt hash"), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (uVar10 == uVar12) break;
        puVar19 = (uint *)(*(longlong *)&this_00->field_0x0 + 8 + (longlong)(int)uVar10 * 0x10);
      }
      *puVar19 = *(uint *)(lVar17 + 8);
      TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this_00,uVar12,1);
      lVar14 = lVar14 + 8;
      iVar18 = pTVar5->ArrayNum;
      local_94 = local_94 + 1;
      uVar21 = (ulonglong)local_94;
    } while ((int)local_94 < iVar18);
    pTVar20 = &this->Chunks;
  }
  iVar18 = (this->Chunks).ArrayNum;
  while (0 < iVar18) {
    uVar12 = pTVar20->ArrayNum - 1;
    uVar10 = 0;
    if ((int)uVar12 < pTVar20->ArrayNum) {
      uVar10 = ~uVar12 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(int *)((pTVar20->AllocatorInstance).Data + (longlong)pTVar20->ArrayNum * 0x90 + -0x80) !=
        0) break;
    iVar18 = (this->Chunks).ArrayNum;
    uVar12 = iVar18 - 1;
    uVar10 = 0;
    if ((int)uVar12 < iVar18) {
      uVar10 = ~uVar12 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar23 = (pTVar20->AllocatorInstance).Data + (longlong)(int)uVar12 * 0x90;
    if (*(void **)pFVar23 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar23);
      *(undefined8 *)pFVar23 = 0;
    }
    FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues
              ((FMassArchetypeSharedFragmentValues *)(pFVar23 + 0x28));
    DestructItems<FInstancedStruct,int>
              (*(FInstancedStruct **)(pFVar23 + 0x18),*(int *)(pFVar23 + 0x20));
    if (*(void **)(pFVar23 + 0x18) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar23 + 0x18));
    }
    iVar18 = pTVar20->ArrayNum + ~uVar12;
    if (iVar18 != 0) {
      memmove(pFVar23,pFVar23 + 0x90,(longlong)iVar18 * 0x90);
    }
    pTVar20->ArrayNum = pTVar20->ArrayNum + -1;
    iVar18 = (this->Chunks).ArrayNum;
  }
  if ((FArchetypeEntityRange *)local_90.Data != (FArchetypeEntityRange *)0x0) {
    FMemory::Free(local_90.Data);
  }
  return;
}

// BatchMoveEntitiesToAnotherArchetype @ 1471f9320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMassArchetypeData::BatchMoveEntitiesToAnotherArchetype
          (FMassArchetypeData *this,FMassArchetypeEntityCollection *param_1,
          FMassArchetypeData *param_2,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *param_3
          ,TArray<FMassArchetypeEntityCollection::FArchetypeEntityRange,TSizedDefaultAllocator<32>_>
           *param_4,FMassArchetypeSharedFragmentValues *param_5,
          TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
          *param_6,TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                   *param_7)

{
  FMassEntityHandle *pFVar1;
  TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *this_00;
  TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *this_01;
  FSharedStruct *pFVar2;
  undefined1 *puVar3;
  code *pcVar4;
  FMassArchetypeData *pFVar5;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *pTVar6;
  FArchetypeEntityRange *pFVar7;
  bool bVar8;
  int iVar9;
  FArchetypeEntityRange *pFVar10;
  uint uVar11;
  TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *_Buf1;
  ForElementType<unsigned_int> FVar12;
  TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *_Buf1_00;
  undefined1 *puVar13;
  ForElementType<unsigned_int> FVar14;
  ulonglong uVar15;
  uint uVar16;
  ForAnyElementType FVar17;
  int iVar18;
  void *_Src;
  longlong lVar19;
  uint *puVar20;
  int iVar21;
  FScriptContainerElement *pFVar22;
  int iVar23;
  FMassArchetypeSharedFragmentValues *pFVar24;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this_02;
  longlong lVar25;
  undefined1 auStackY_2d8 [32];
  FIdentityFunctor local_287;
  undefined1 local_286;
  undefined1 local_285;
  undefined1 local_284;
  FIdentityFunctor local_283 [3];
  undefined8 local_280;
  int local_278;
  int local_270;
  ForAnyElementType local_268;
  uint local_260;
  int local_25c;
  <lambda_1> local_258;
  undefined1 local_257;
  undefined1 local_256 [2];
  uint local_254;
  FMassArchetypeData *local_250;
  FMassArchetypeData *local_248;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_240;
  int local_238;
  uint local_234;
  FMassArchetypeSharedFragmentValues *local_230;
  FMassArchetypeSharedFragmentValues *local_228;
  FArchetypeEntityRange *local_220;
  FScriptContainerElement *local_218;
  void *local_210;
  int *local_208;
  TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *local_200;
  TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *local_1f8;
  undefined8 local_1f0;
  FArchetypeEntityRange *local_1e0;
  FMassEntityHandle *local_1d8;
  int iStack_1d0;
  undefined4 uStack_1cc;
  FMassEntityHandle *local_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  uchar *local_1b8;
  int iStack_1b0;
  undefined4 uStack_1ac;
  uchar *local_1a8;
  int iStack_1a0;
  undefined4 uStack_19c;
  TArrayView<FMassEntityHandle_const_,int> local_198;
  TArrayView<FMassEntityHandle_const_,int> local_188;
  FTransientChunkLocation local_178;
  FTransientChunkLocation local_168;
  FArchetypeEntityRange local_158;
  FArchetypeEntityRange local_14c;
  TBitArray<FDefaultBitArrayAllocator> local_140;
  TBitArray<FDefaultBitArrayAllocator> local_120;
  undefined1 local_f8 [40];
  undefined1 local_d0 [32];
  ForAnyElementType local_b0;
  int local_a8;
  int local_a4;
  ForAnyElementType local_a0;
  int local_98;
  int local_94 [3];
  TBitArray<FDefaultBitArrayAllocator> local_88;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_230 = param_5;
  local_200 = param_6;
  local_1f8 = param_7;
  local_250 = this;
  local_248 = param_2;
  local_240 = param_3;
  if ((param_2 == this) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("&NewArchetype != this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeData.cpp"
                         ,0x49b,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (param_5 == (FMassArchetypeSharedFragmentValues *)0x0) goto LAB_1471f97bb;
  if (param_6 ==
      (TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
       *)0x0) {
LAB_1471f958f:
    if (param_7 ==
        (TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
         *)0x0) goto LAB_1471f97bb;
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)&local_120,
               (FBitSetContainer *)&(local_250->CompositionDescriptor).ConstSharedFragments);
    FStructTypeBitSet::FBitSetContainer::operator-=
              ((FBitSetContainer *)&local_120,(TBitArray<FDefaultBitArrayAllocator> *)param_7);
    if ((&local_120 == (TBitArray<FDefaultBitArrayAllocator> *)&param_5->ConstSharedFragmentBitSet)
       && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("&A != &B",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x52d,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_68.MaxBits = 0x80;
    local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_68.NumBits = 0;
    UE::Core::Private::
    BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
              (&local_120,
               (TBitArray<FDefaultBitArrayAllocator> *)&param_5->ConstSharedFragmentBitSet,&local_68
               ,MaxSize,(<lambda_1> *)&local_287);
    local_120.NumBits = 0;
    uVar11 = local_68.NumBits + 0x1fU & 0xffffffe0;
    if ((local_120.MaxBits < (int)uVar11) || (0x80 < local_120.MaxBits)) {
      local_120.MaxBits = 0x80;
      if (0x80 < (int)uVar11) {
        local_120.MaxBits = uVar11;
      }
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_120,0);
    }
    local_120.NumBits = local_68.NumBits;
    if (local_68.NumBits != 0) {
      FVar14 = (ForElementType<unsigned_int>)&local_68;
      if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar14 = local_68.AllocatorInstance.SecondaryData;
      }
      FVar12 = (ForElementType<unsigned_int>)&local_120;
      if (local_120.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar12 = local_120.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)FVar12,(void *)FVar14,(ulonglong)(local_68.NumBits + 0x1fU >> 5) << 2);
    }
    if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
    }
    this_01 = &(param_2->CompositionDescriptor).ConstSharedFragments;
    bVar8 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty((FConstBitSetContainer *)this_01);
    if ((bVar8) &&
       (bVar8 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                          ((FConstBitSetContainer *)&local_120), bVar8)) {
      bVar8 = true;
    }
    else {
      iVar23 = *(int *)&(param_2->CompositionDescriptor).ConstSharedFragments.field_0x18;
      if (iVar23 == local_120.NumBits) {
        _Buf1_00 = *(TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                     **)&(param_2->CompositionDescriptor).ConstSharedFragments.field_0x10;
        FVar14 = (ForElementType<unsigned_int>)&local_120;
        if (local_120.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar14 = local_120.AllocatorInstance.SecondaryData;
        }
        if (_Buf1_00 ==
            (TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
             *)0x0) {
          _Buf1_00 = this_01;
        }
        iVar23 = memcmp(_Buf1_00,(void *)FVar14,(ulonglong)(iVar23 + 0x1fU >> 5) << 2);
        if (iVar23 == 0) {
          bVar8 = true;
          goto LAB_1471f9742;
        }
      }
      bVar8 = false;
    }
LAB_1471f9742:
    if (local_120.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_120.AllocatorInstance.SecondaryData);
    }
    if (bVar8) goto LAB_1471f97bb;
  }
  else {
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)&local_140,
               (FBitSetContainer *)&(local_250->CompositionDescriptor).SharedFragments);
    FStructTypeBitSet::FBitSetContainer::operator-=
              ((FBitSetContainer *)&local_140,(TBitArray<FDefaultBitArrayAllocator> *)param_6);
    if ((&local_140 == (TBitArray<FDefaultBitArrayAllocator> *)&param_5->SharedFragmentBitSet) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("&A != &B",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x52d,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_88.MaxBits = 0x80;
    local_88.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_88.NumBits = 0;
    UE::Core::Private::
    BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
              (&local_140,(TBitArray<FDefaultBitArrayAllocator> *)&param_5->SharedFragmentBitSet,
               &local_88,MaxSize,&local_258);
    local_140.NumBits = 0;
    uVar11 = local_88.NumBits + 0x1fU & 0xffffffe0;
    if ((local_140.MaxBits < (int)uVar11) || (0x80 < local_140.MaxBits)) {
      local_140.MaxBits = 0x80;
      if (0x80 < (int)uVar11) {
        local_140.MaxBits = uVar11;
      }
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_140,0);
    }
    local_140.NumBits = local_88.NumBits;
    if (local_88.NumBits != 0) {
      FVar14 = (ForElementType<unsigned_int>)&local_88;
      if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar14 = local_88.AllocatorInstance.SecondaryData;
      }
      FVar12 = (ForElementType<unsigned_int>)&local_140;
      if (local_140.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar12 = local_140.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)FVar12,(void *)FVar14,(ulonglong)(local_88.NumBits + 0x1fU >> 5) << 2);
    }
    if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
    }
    this_00 = &(param_2->CompositionDescriptor).SharedFragments;
    bVar8 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty((FConstBitSetContainer *)this_00);
    if ((bVar8) &&
       (bVar8 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                          ((FConstBitSetContainer *)&local_140), bVar8)) {
      bVar8 = true;
    }
    else {
      iVar23 = *(int *)&(param_2->CompositionDescriptor).SharedFragments.field_0x18;
      if (iVar23 == local_140.NumBits) {
        _Buf1 = *(TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                  **)&(param_2->CompositionDescriptor).SharedFragments.field_0x10;
        FVar14 = (ForElementType<unsigned_int>)&local_140;
        if (local_140.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar14 = local_140.AllocatorInstance.SecondaryData;
        }
        if (_Buf1 == (TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                      *)0x0) {
          _Buf1 = this_00;
        }
        iVar23 = memcmp(_Buf1,(void *)FVar14,(ulonglong)(iVar23 + 0x1fU >> 5) << 2);
        if (iVar23 == 0) {
          bVar8 = true;
          goto LAB_1471f9575;
        }
      }
      bVar8 = false;
    }
LAB_1471f9575:
    if (local_140.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_140.AllocatorInstance.SecondaryData);
    }
    param_5 = local_230;
    if (bVar8) goto LAB_1471f958f;
  }
  if (0 < UE::AITestSuite::TestsInProgress) {
    if ((byte)LogTestableEnsures._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTestableEnsures);
    return;
  }
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("bIsValidArchetype",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeData.cpp"
                     ,0x4b1,
                     L"%hs parameter SharedFragmentValues doesn\'t match archetype\'s composition");
  if (bVar8) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_1471f97bb:
  uVar11 = (param_1->Ranges).ArrayNum;
  pFVar22 = (param_1->Ranges).AllocatorInstance.Data;
  if (((int)uVar11 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_220 = (FArchetypeEntityRange *)0x0;
  local_268.Data = (FScriptContainerElement *)0x0;
  local_260 = uVar11;
  if (uVar11 == 0) {
    local_25c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar11,0,&local_268,uVar11,&local_25c);
    memcpy(local_268.Data,pFVar22,(longlong)(int)uVar11 * 0xc);
    local_220 = (FArchetypeEntityRange *)local_268.Data;
  }
  uVar15 = (ulonglong)(int)local_260;
  local_208 = &local_240->ArrayNum;
  local_1e0 = local_220 + uVar15;
  local_234 = local_260;
  local_254 = *local_208;
  local_268.Data = (FScriptContainerElement *)local_220;
  while( true ) {
    pFVar7 = local_1e0;
    pFVar10 = local_220;
    if (local_260 != (uint)uVar15) {
      local_286 = 0;
      `TCheckedPointerIterator<FMassArchetypeEntityCollection::FArchetypeEntityRange,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_286);
    }
    if (pFVar10 == pFVar7) break;
    lVar19._0_4_ = pFVar10->ChunkIndex;
    lVar19._4_4_ = pFVar10->SubchunkStart;
    iVar23 = pFVar10->Length;
    local_270 = iVar23;
    local_1f0 = lVar19;
    if ((((undefined4)lVar19 == 0xffffffff) || (lVar19 < 0)) || (iVar23 < 0)) {
      local_285 = 0;
      bVar8 = `FMassArchetypeData::BatchMoveEntitiesToAnotherArchetype'::__l58::<lambda_1>::
              operator()(&local_285);
      if (bVar8) goto LAB_1471f98e0;
    }
    else {
LAB_1471f98e0:
      pFVar5 = local_250;
      uVar11 = 0;
      if ((int)(undefined4)lVar19 < (local_250->Chunks).ArrayNum) {
        uVar11 = (uint)~(undefined4)lVar19 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar22 = (pFVar5->Chunks).AllocatorInstance.Data + (longlong)(int)(undefined4)lVar19 * 0x90;
      if (iVar23 < 1) {
        iVar23 = *(int *)(pFVar22 + 0x10) - lVar19._4_4_;
        local_270 = iVar23;
      }
      local_238 = local_1f0._4_4_;
      _Src = (void *)((longlong)pFVar5->EntityListOffsetWithinChunk + (longlong)local_1f0._4_4_ * 8
                     + *(longlong *)pFVar22);
      local_218 = pFVar22;
      local_210 = _Src;
      if (((_Src == (void *)0x0) && (iVar23 != 0)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr || Count == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9c1,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar6 = local_240;
      iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar23,&local_240->AllocatorInstance,&local_240->ArrayNum,
                         &local_240->ArrayMax);
      if (iVar23 != 0) {
        memcpy((pTVar6->AllocatorInstance).Data + (longlong)iVar9 * 8,_Src,(longlong)iVar23 << 3);
      }
      iVar23 = 0;
      local_280 = 0;
      local_278 = 0;
      if (((local_230 != (FMassArchetypeSharedFragmentValues *)0x0) ||
          (local_200 !=
           (TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
            *)0x0)) ||
         (iVar9 = iVar23,
         local_1f8 !=
         (TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
          *)0x0)) {
        iVar9 = 1;
      }
      pFVar24 = (FMassArchetypeSharedFragmentValues *)(pFVar22 + 0x28);
      local_228 = pFVar24;
      do {
        iVar21 = local_238 + iVar23;
        if ((char)iVar9 == '\0') {
          pFVar1 = (FMassEntityHandle *)((longlong)_Src + (longlong)iVar23 * 8);
          iVar18 = local_270 - iVar23;
          if ((iVar18 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar24 = local_228;
          local_198._12_4_ = uStack_1cc;
          local_198.ArrayNum = iVar18;
          local_1d8 = pFVar1;
          iStack_1d0 = iVar18;
          local_198.DataPtr = pFVar1;
          pFVar10 = PrepareNextEntitiesSpanInternal
                              (local_248,&local_158,&local_198,local_228,(uint)local_280);
          local_280._0_4_ = pFVar10->ChunkIndex;
          local_280._4_4_ = pFVar10->SubchunkStart;
          local_278 = pFVar10->Length;
        }
        else {
          local_f8._0_4_ = pFVar24->HashCache;
          local_f8[4] = pFVar24->bSorted;
          FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                    ((FBitSetContainer *)(local_f8 + 8),
                     (FBitSetContainer *)&pFVar24->SharedFragmentBitSet);
          FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                    ((FBitSetContainer *)local_d0,
                     (FBitSetContainer *)&pFVar24->ConstSharedFragmentBitSet);
          iVar18 = (pFVar24->ConstSharedFragments).ArrayNum;
          pFVar22 = (pFVar24->ConstSharedFragments).AllocatorInstance.Data;
          local_b0.Data = (FScriptContainerElement *)0x0;
          local_a8 = iVar18;
          if (iVar18 == 0) {
            local_a4 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar18,0,&local_b0,iVar18,&local_a4);
            ConstructItems<FConstSharedStruct,FConstSharedStruct,int>
                      (local_b0.Data,(FConstSharedStruct *)pFVar22,iVar18);
          }
          local_a0.Data = (FScriptContainerElement *)0x0;
          iVar18 = *(int *)(local_218 + 0x88);
          pFVar2 = *(FSharedStruct **)(local_218 + 0x80);
          local_98 = iVar18;
          if (iVar18 == 0) {
            local_94[0] = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar18,0,&local_a0,iVar18,local_94);
            ConstructItems<FSharedStruct,FSharedStruct,int>(local_a0.Data,pFVar2,iVar18);
          }
          if (local_200 !=
              (TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
               *)0x0) {
            FMassArchetypeSharedFragmentValues::Remove
                      ((FMassArchetypeSharedFragmentValues *)local_f8,local_200);
          }
          if (local_1f8 !=
              (TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
               *)0x0) {
            FMassArchetypeSharedFragmentValues::Remove
                      ((FMassArchetypeSharedFragmentValues *)local_f8,local_1f8);
          }
          if (local_230 != (FMassArchetypeSharedFragmentValues *)0x0) {
            FMassArchetypeSharedFragmentValues::Append
                      ((FMassArchetypeSharedFragmentValues *)local_f8,local_230);
          }
          if (local_f8[4] == false) {
            AlgoImpl::
            IntroSortInternal<FConstSharedStruct,int,FIdentityFunctor,TDereferenceWrapper<FConstSharedStruct,FStructTypeSortOperator>_>
                      ((FConstSharedStruct *)local_b0.Data,local_a8,local_287,
                       (FStructTypeSortOperator *)&local_257);
            AlgoImpl::
            IntroSortInternal<FSharedStruct,int,FIdentityFunctor,TDereferenceWrapper<FSharedStruct,FStructTypeSortOperator>_>
                      ((FSharedStruct *)local_a0.Data,local_98,local_287,
                       (FStructTypeSortOperator *)local_256);
            local_f8[4] = true;
          }
          iVar18 = local_270 - iVar23;
          pFVar1 = (FMassEntityHandle *)((longlong)local_210 + (longlong)iVar23 * 8);
          if ((iVar18 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_188._12_4_ = uStack_1bc;
          local_188.ArrayNum = iVar18;
          local_1c8 = pFVar1;
          iStack_1c0 = iVar18;
          local_188.DataPtr = pFVar1;
          pFVar10 = PrepareNextEntitiesSpanInternal
                              (local_248,&local_14c,&local_188,
                               (FMassArchetypeSharedFragmentValues *)local_f8,(uint)local_280);
          local_280._0_4_ = pFVar10->ChunkIndex;
          local_280._4_4_ = pFVar10->SubchunkStart;
          local_278 = pFVar10->Length;
          DestructItems<FSharedStruct,int>((FSharedStruct *)local_a0.Data,local_98);
          if (local_a0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.Data);
          }
          DestructItems<FConstSharedStruct,int>((FConstSharedStruct *)local_b0.Data,local_a8);
          if (local_b0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b0.Data);
          }
          if ((void *)local_d0._16_8_ != (void *)0x0) {
            FMemory::Free((void *)local_d0._16_8_);
          }
          pFVar24 = local_228;
          if ((void *)local_f8._24_8_ != (void *)0x0) {
            FMemory::Free((void *)local_f8._24_8_);
            pFVar24 = local_228;
          }
        }
        lVar19 = (longlong)(int)(uint)local_280;
        uVar11 = 0;
        if ((int)(uint)local_280 < (local_248->Chunks).ArrayNum) {
          uVar11 = ~(uint)local_280 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_1b8 = *(uchar **)local_218;
        local_178._12_4_ = uStack_1ac;
        local_178.IndexWithinChunk = iVar21;
        local_1a8 = *(uchar **)((local_248->Chunks).AllocatorInstance.Data + lVar19 * 0x90);
        iStack_1a0 = local_280._4_4_;
        local_168._12_4_ = uStack_19c;
        local_168.IndexWithinChunk = local_280._4_4_;
        iStack_1b0 = iVar21;
        local_178.RawChunkMemory = local_1b8;
        local_168.RawChunkMemory = local_1a8;
        MoveFragmentsToAnotherArchetypeInternal(local_250,local_248,&local_168,&local_178,local_278)
        ;
        iVar23 = iVar23 + local_278;
        if (param_4 !=
            (TArray<FMassArchetypeEntityCollection::FArchetypeEntityRange,TSizedDefaultAllocator<32>_>
             *)0x0) {
          iVar21 = param_4->ArrayNum;
          if (iVar21 != 0) {
            uVar11 = 0;
            if ((int)(iVar21 - 1U) < iVar21) {
              uVar11 = ~(iVar21 - 1U) >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar21 = param_4->ArrayNum;
            pFVar22 = (param_4->AllocatorInstance).Data + ((longlong)iVar21 + -1) * 0xc;
            if ((*(int *)pFVar22 == (uint)local_280) &&
               (*(int *)(pFVar22 + 8) + *(int *)(pFVar22 + 4) == local_280._4_4_)) {
              uVar11 = 0;
              if ((int)(iVar21 - 1U) < iVar21) {
                uVar11 = ~(iVar21 - 1U) >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar22 = (param_4->AllocatorInstance).Data + (longlong)param_4->ArrayNum * 0xc + -4;
              *(int *)pFVar22 = *(int *)pFVar22 + local_278;
              goto LAB_1471f9fca;
            }
          }
          pFVar22 = (param_4->AllocatorInstance).Data;
          if (((pFVar22 <= (FScriptContainerElement *)&local_280) &&
              ((FScriptContainerElement *)&local_280 < pFVar22 + (longlong)param_4->ArrayMax * 0xc))
             && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar21 = param_4->ArrayNum;
          if (iVar21 == param_4->ArrayMax) {
            iVar21 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x40c,&param_4->AllocatorInstance,&param_4->ArrayMax);
          }
          param_4->ArrayNum = iVar21 + 1;
          pFVar22 = (param_4->AllocatorInstance).Data;
          *(undefined8 *)(pFVar22 + (longlong)iVar21 * 0xc) = local_280;
          *(int *)(pFVar22 + (longlong)iVar21 * 0xc + 8) = local_278;
        }
LAB_1471f9fca:
        _Src = local_210;
      } while (iVar23 < local_270);
    }
    uVar15 = (ulonglong)local_234;
    local_220 = local_220 + 1;
  }
  AlgoImpl::
  IntroSortInternal<FMassArchetypeEntityCollection::FArchetypeEntityRange,int,FIdentityFunctor,TDereferenceWrapper<FMassArchetypeEntityCollection::FArchetypeEntityRange,_FMassArchetypeData::BatchMoveEntitiesToAnotherArchetype_::__l2::<lambda_2>_>_>
            ((FArchetypeEntityRange *)local_268.Data,local_260,local_283[0],(<lambda_2> *)local_283)
  ;
  pFVar5 = local_250;
  uVar11 = local_260;
  uVar15 = (ulonglong)(int)local_260;
  pFVar10 = (FArchetypeEntityRange *)(local_268.Data + uVar15 * 0xc);
  FVar17.Data = local_268.Data;
  while( true ) {
    if ((uint)uVar15 != uVar11) {
      local_284 = 0;
      `TCheckedPointerIterator<FMassArchetypeEntityCollection::FArchetypeEntityRange,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_284);
    }
    if ((FArchetypeEntityRange *)FVar17.Data == pFVar10) break;
    BatchRemoveEntitiesInternal
              (pFVar5,((FArchetypeEntityRange *)FVar17.Data)->ChunkIndex,
               ((FArchetypeEntityRange *)FVar17.Data)->SubchunkStart,
               ((FArchetypeEntityRange *)FVar17.Data)->Length);
    uVar15 = (ulonglong)local_260;
    FVar17.Data = FVar17.Data + 0xc;
  }
  uVar15 = (ulonglong)(int)local_254;
  iVar23 = *local_208;
  if ((int)local_254 < iVar23) {
    this_02 = &pFVar5->EntityMap;
    lVar19 = uVar15 * 8;
    do {
      uVar11 = 0;
      if ((int)(uint)uVar15 < iVar23) {
        uVar11 = ~(uint)uVar15 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar11 = *(uint *)((local_240->AllocatorInstance).Data + lVar19);
      if (*(int *)&(pFVar5->EntityMap).field_0x8 != *(int *)&(pFVar5->EntityMap).field_0x34) {
        puVar3 = *(undefined1 **)&(pFVar5->EntityMap).field_0x40;
        puVar13 = &(pFVar5->EntityMap).field_0x38;
        if (puVar3 != (undefined1 *)0x0) {
          puVar13 = puVar3;
        }
        uVar16 = *(uint *)(puVar13 +
                          (ulonglong)(*(int *)&(pFVar5->EntityMap).field_0x48 - 1U & uVar11) * 4);
        if (uVar16 != 0xffffffff) {
          do {
            if (*(uint *)(*(longlong *)&this_02->field_0x0 + (longlong)(int)uVar16 * 0x10) == uVar11
               ) {
              if (uVar16 != 0xffffffff) goto LAB_1471fa153;
              goto LAB_1471fa12d;
            }
            uVar16 = *(uint *)(*(longlong *)&this_02->field_0x0 + 8 + (longlong)(int)uVar16 * 0x10);
          } while (uVar16 != 0xffffffff);
        }
      }
      uVar16 = 0xffffffff;
LAB_1471fa12d:
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("PairId.IsValidId()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x556,L"");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
LAB_1471fa153:
      if (((int)uVar16 < 0) || (*(int *)&(pFVar5->EntityMap).field_0x28 <= (int)uVar16)) {
LAB_1471fa1b3:
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Elements.IsValidIndex(ElementIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        if ((*(int *)&(pFVar5->EntityMap).field_0x28 <= (int)uVar16) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        puVar3 = *(undefined1 **)&(pFVar5->EntityMap).field_0x20;
        puVar13 = &(pFVar5->EntityMap).field_0x10;
        if (puVar3 != (undefined1 *)0x0) {
          puVar13 = puVar3;
        }
        uVar11 = uVar16;
        if ((int)uVar16 < 0) {
          uVar11 = uVar16 + 0x1f;
        }
        if ((*(uint *)(puVar13 + (longlong)((int)uVar11 >> 5) * 4) >> (uVar16 & 0x1f) & 1) == 0)
        goto LAB_1471fa1b3;
      }
      puVar3 = *(undefined1 **)&(pFVar5->EntityMap).field_0x40;
      lVar25 = (longlong)(int)uVar16 * 0x10 + *(longlong *)&this_02->field_0x0;
      puVar13 = &(pFVar5->EntityMap).field_0x38;
      if (puVar3 != (undefined1 *)0x0) {
        puVar13 = puVar3;
      }
      puVar20 = (uint *)(puVar13 + (longlong)*(int *)(lVar25 + 0xc) * 4);
      while( true ) {
        uVar11 = *puVar20;
        if ((uVar11 == 0xffffffff) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("NextElementIndex != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                               ,0x2b5,L"Corrupt hash"), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (uVar11 == uVar16) break;
        puVar20 = (uint *)(*(longlong *)&this_02->field_0x0 + 8 + (longlong)(int)uVar11 * 0x10);
      }
      *puVar20 = *(uint *)(lVar25 + 8);
      TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this_02,uVar16,1);
      lVar19 = lVar19 + 8;
      local_254 = local_254 + 1;
      uVar15 = (ulonglong)local_254;
      iVar23 = *local_208;
    } while ((int)local_254 < iVar23);
  }
  if ((FArchetypeEntityRange *)local_268.Data != (FArchetypeEntityRange *)0x0) {
    FMemory::Free(local_268.Data);
  }
  return;
}

// BatchRemoveEntitiesInternal @ 1471fa2d0

void __thiscall
FMassArchetypeData::BatchRemoveEntitiesInternal
          (FMassArchetypeData *this,int param_1,int param_2,int param_3)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  int iVar3;
  undefined1 *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  longlong lVar12;
  ForElementType<FMassArchetypeFragmentConfig> FVar13;
  uint *puVar14;
  FScriptContainerElement *pFVar15;
  ForElementType<FMassArchetypeFragmentConfig> FVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_58 [8];
  longlong local_50;
  FScriptContainerElement *local_48;
  
  if (0 < param_3) {
    this->EntityOrderVersion = this->EntityOrderVersion + 1;
    uVar18 = 0;
    if (param_1 < (this->Chunks).ArrayNum) {
      uVar18 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar15 = (this->Chunks).AllocatorInstance.Data + (longlong)param_1 * 0x90;
    iVar7 = (*(int *)(pFVar15 + 0x10) - param_2) - param_3;
    iVar9 = param_3;
    if (iVar7 < param_3) {
      iVar9 = iVar7;
    }
    local_48 = pFVar15;
    if (iVar9 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumberToMove >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeData.cpp"
                         ,0x562,
                         L"Trying to move a negative number of elements indicates a problem with sub-chunk indicators, it\'s possibly out of date."
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else if (0 < iVar9) {
      iVar7 = *(int *)(pFVar15 + 0x10) - iVar9;
      local_50 = (longlong)this->EntityListOffsetWithinChunk + (longlong)param_2 * 8 +
                 *(longlong *)pFVar15;
      if ((iVar7 <= param_2 + -1 + iVar9) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(StartIndexWithinChunk + NumberToMove - 1) < SwapStartIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeData.cpp"
                             ,0x569,L"Remove and Move ranges overlap"), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar12 = *(longlong *)pFVar15;
      FVar16 = (this->FragmentConfigs).AllocatorInstance.SecondaryData;
      iVar3 = (this->FragmentConfigs).ArrayNum;
      if (FVar16 == (ForElementType<FMassArchetypeFragmentConfig>)0x0) {
        FVar16 = (ForElementType<FMassArchetypeFragmentConfig>)&this->FragmentConfigs;
      }
      FVar13 = (ForElementType<FMassArchetypeFragmentConfig>)
               ((longlong)iVar3 * 0x10 + (longlong)FVar16);
      while( true ) {
        if ((this->FragmentConfigs).ArrayNum != iVar3) {
          local_58[0] = 0;
          `TCheckedPointerIterator<FMassArchetypeFragmentConfig,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_58);
        }
        if (FVar16 == FVar13) break;
        iVar8 = (int)*(short *)(*(longlong *)FVar16 + 0x5c);
        uVar18 = *(int *)(*(longlong *)FVar16 + 0x58) + -1 + iVar8 & ~(iVar8 - 1U);
        memcpy((void *)((int)(uVar18 * param_2) + lVar12 + (longlong)*(int *)((longlong)FVar16 + 8))
               ,(void *)((int)(uVar18 * iVar7) + lVar12 + (longlong)*(int *)((longlong)FVar16 + 8)),
               (longlong)(int)(uVar18 * iVar9));
        FVar16 = (ForElementType<FMassArchetypeFragmentConfig>)((longlong)FVar16 + 0x10);
      }
      lVar12 = (longlong)iVar9;
      puVar14 = (uint *)((longlong)this->EntityListOffsetWithinChunk + (longlong)iVar7 * 8 +
                        *(longlong *)local_48);
      pFVar15 = local_48;
      if (0 < lVar12) {
        local_50 = local_50 - (longlong)puVar14;
        uVar18 = param_1 * this->NumEntitiesPerChunk + param_2;
        do {
          *(undefined8 *)(local_50 + (longlong)puVar14) = *(undefined8 *)puVar14;
          if (*(int *)&(this->EntityMap).field_0x8 != *(int *)&(this->EntityMap).field_0x34) {
            puVar4 = *(undefined1 **)&(this->EntityMap).field_0x40;
            puVar11 = &(this->EntityMap).field_0x38;
            if (puVar4 != (undefined1 *)0x0) {
              puVar11 = puVar4;
            }
            uVar10 = *(uint *)(puVar11 +
                              (ulonglong)(*(int *)&(this->EntityMap).field_0x48 - 1U & *puVar14) * 4
                              );
            if (uVar10 != 0xffffffff) {
              do {
                puVar17 = (uint *)((longlong)(int)uVar10 * 0x10 + *(longlong *)&this->EntityMap);
                if (*puVar17 == *puVar14) {
                  if (puVar17 != (uint *)0x0) goto LAB_1471fa583;
                  goto LAB_1471fa55d;
                }
                uVar10 = puVar17[2];
              } while (uVar10 != 0xffffffff);
            }
          }
          puVar17 = (uint *)0x0;
LAB_1471fa55d:
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x288,L"");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
LAB_1471fa583:
          puVar14 = puVar14 + 2;
          puVar17[1] = uVar18;
          lVar12 = lVar12 + -1;
          pFVar15 = local_48;
          uVar18 = uVar18 + 1;
        } while (lVar12 != 0);
      }
    }
    pFVar1 = pFVar15 + 0x10;
    *(int *)pFVar1 = *(int *)pFVar1 - param_3;
    if ((*(int *)pFVar1 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumInstances >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                           ,0x5d,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(int *)(pFVar15 + 0x14) = *(int *)(pFVar15 + 0x14) + 1;
    if (*(int *)(pFVar15 + 0x10) == 0) {
      FMemory::Free(*(void **)pFVar15);
      *(longlong *)pFVar15 = 0;
    }
    iVar9 = (this->Chunks).ArrayNum;
    while (0 < iVar9) {
      iVar9 = (this->Chunks).ArrayNum;
      uVar10 = iVar9 - 1;
      uVar18 = 0;
      if ((int)uVar10 < iVar9) {
        uVar18 = ~uVar10 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(int *)((this->Chunks).AllocatorInstance.Data +
                  (longlong)(this->Chunks).ArrayNum * 0x90 + -0x80) != 0) {
        return;
      }
      iVar9 = (this->Chunks).ArrayNum;
      uVar10 = iVar9 - 1;
      uVar18 = 0;
      if ((int)uVar10 < iVar9) {
        uVar18 = ~uVar10 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar15 = (this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x90;
      if (*(void **)pFVar15 != (void *)0x0) {
        FMemory::Free(*(void **)pFVar15);
        *(undefined8 *)pFVar15 = 0;
      }
      FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues
                ((FMassArchetypeSharedFragmentValues *)(pFVar15 + 0x28));
      DestructItems<FInstancedStruct,int>
                (*(FInstancedStruct **)(pFVar15 + 0x18),*(int *)(pFVar15 + 0x20));
      if (*(void **)(pFVar15 + 0x18) != (void *)0x0) {
        FMemory::Free(*(void **)(pFVar15 + 0x18));
      }
      iVar9 = (this->Chunks).ArrayNum + ~uVar10;
      if (iVar9 != 0) {
        memmove(pFVar15,pFVar15 + 0x90,(longlong)iVar9 * 0x90);
      }
      piVar2 = &(this->Chunks).ArrayNum;
      *piVar2 = *piVar2 + -1;
      iVar9 = (this->Chunks).ArrayNum;
    }
  }
  return;
}

// BatchSetFragmentValues @ 1471fab20

void __thiscall
FMassArchetypeData::BatchSetFragmentValues
          (FMassArchetypeData *this,
          TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> *param_1,
          FMassGenericPayloadViewSlice *param_2)

{
  FArchetypeEntityRange *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  UScriptStruct *this_00;
  ForElementType<FMassArchetypeFragmentConfig> FVar5;
  longlong lVar6;
  code *pcVar7;
  longlong lVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  void *pvVar13;
  TTuple<UScriptStruct_const_*,int> *pTVar14;
  uint uVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  ForElementType<FMassArchetypeFragmentConfig> FVar18;
  FArchetypeEntityRange *pFVar19;
  FStructArrayView *this_01;
  longlong *plVar20;
  int iVar21;
  uint uVar22;
  uint local_res10;
  longlong local_70;
  int local_48;
  
  pFVar19 = param_1->DataPtr;
  local_res10 = 0;
  pFVar1 = pFVar19 + param_1->ArrayNum;
  do {
    if (pFVar19 == pFVar1) {
      return;
    }
    uVar2 = pFVar19->ChunkIndex;
    uVar3 = pFVar19->SubchunkStart;
    iVar21 = pFVar19->Length;
    if (((int)uVar2 < 0 || (this->Chunks).ArrayNum <= (int)uVar2) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar17 = (this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x90;
    if (iVar21 < 1) {
      iVar21 = *(int *)(pFVar17 + 0x10) - uVar3;
    }
    iVar10 = (param_2->Source).Content.ArrayNum;
    uVar22 = 0;
    if (0 < iVar10) {
      local_70 = 0;
      do {
        uVar15 = 0;
        if ((int)uVar22 < iVar10) {
          uVar15 = ~uVar22 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar10 = param_2->Count;
        this_01 = (FStructArrayView *)
                  ((longlong)&((param_2->Source).Content.DataPtr)->DataPtr + local_70);
        iVar4 = param_2->StartIndex;
        if ((iVar4 < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructArrayView.h"
                               ,0x61,L"Invalid index (%d)"), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((iVar10 < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructArrayView.h"
                               ,0x62,L"Invalid count (%d)"), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((this_01->ArrayNum < iVar10 + iVar4) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index + InNum <= ArrayNum",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructArrayView.h"
                               ,99,
                               L"Range (index: %d, count: %d) lies outside the view of %d elements")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar15 = this_01->ElementSize;
        pvVar13 = FStructArrayView::GetDataAt(this_01,iVar4);
        this_00 = this_01->ScriptStruct;
        if (pvVar13 == (void *)0x0) {
          if ((((this_00 != (UScriptStruct *)0x0) || (uVar15 != 0)) || (iVar10 != 0)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(InData != nullptr) || ((InScriptStruct == nullptr) && (InElementSize == 0) && (InCount == 0))"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructArrayView.h"
                                 ,0x2d,L""), bVar9)) goto code_r0x0001471fadb4;
        }
        else if ((((this_00 == (UScriptStruct *)0x0) || (uVar15 == 0)) || (iVar10 < 0)) &&
                (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(InData == nullptr) || ((InScriptStruct != nullptr) && (InElementSize > 0) && (InCount >= 0))"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructArrayView.h"
                                    ,0x2c,L""), bVar9)) {
code_r0x0001471fadb4:
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (((int)(iVar10 - local_res10) < iVar21) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("FragmentPayload.Num() - EntitiesHandled >= RangeLength",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeData.cpp"
                               ,0x5c0,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((this_00 == (UScriptStruct *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("FragmentType",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeData.cpp"
                               ,0x5c3,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pTVar14 = TSet<TTuple<UScriptStruct_const_*,int>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,int,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<UScriptStruct_const_*,int>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,int,0>,FDefaultSetAllocator>
                          *)&this->FragmentIndexMap,this_00);
        if ((pTVar14 == (TTuple<UScriptStruct_const_*,int> *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Pair != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                               ,0x288,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar12 = *(uint *)&pTVar14->field_0x8;
        uVar11 = 0;
        if ((int)uVar12 < (this->FragmentConfigs).ArrayNum) {
          uVar11 = ~uVar12 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar5 = (this->FragmentConfigs).AllocatorInstance.SecondaryData;
        FVar18 = (ForElementType<FMassArchetypeFragmentConfig>)&this->FragmentConfigs;
        if (FVar5 != (ForElementType<FMassArchetypeFragmentConfig>)0x0) {
          FVar18 = FVar5;
        }
        plVar20 = (longlong *)((longlong)(int)uVar12 * 0x10 + (longlong)FVar18);
        lVar6 = *plVar20;
        iVar16 = (int)*(short *)(lVar6 + 0x5c);
        iVar4 = *(int *)(lVar6 + 0x58);
        lVar8 = plVar20[1];
        lVar6 = *(longlong *)pFVar17;
        uVar12 = 0;
        if ((int)local_res10 < iVar10) {
          uVar12 = ~local_res10 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructArrayView.h"
                               ,0x55,L"Array index out of bounds: %d from an array of size %d"),
           bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        UScriptStruct::CopyScriptStruct
                  (this_00,(void *)((longlong)((iVar4 + -1 + iVar16 & -iVar16) * uVar3) +
                                    (longlong)(int)lVar8 + lVar6),
                   (void *)((ulonglong)uVar15 * (longlong)(int)local_res10 + (longlong)pvVar13),
                   iVar21);
        uVar22 = uVar22 + 1;
        iVar10 = (param_2->Source).Content.ArrayNum;
        local_70 = local_70 + 0x18;
      } while ((int)uVar22 < iVar10);
    }
    local_res10 = local_res10 + iVar21;
    pFVar19 = pFVar19 + 1;
  } while( true );
}

// BindChunkFragmentRequirements @ 1471fb040

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassArchetypeData::BindChunkFragmentRequirements
          (FMassArchetypeData *this,FMassExecutionContext *param_1,
          TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *param_2,
          FMassArchetypeChunk *param_3)

{
  int iVar1;
  ForElementType<int> FVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  ForElementType<int> FVar10;
  FScriptContainerElement *pFVar11;
  ForElementType<FMassExecutionContext::TFragmentView<FStructView>_> FVar12;
  ForElementType<FMassExecutionContext::TFragmentView<FStructView>_> FVar13;
  uint uVar14;
  uchar *puVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38 [2];
  
  if (param_2->ArrayNum < 1) {
    FVar12 = (param_1->ChunkFragmentViews).AllocatorInstance.SecondaryData;
    iVar1 = (param_1->ChunkFragmentViews).ArrayNum;
    if (FVar12 == (ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>)0x0) {
      FVar12 = (ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>)
               &param_1->ChunkFragmentViews;
    }
    if ((iVar1 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar13 = (ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>)
             ((longlong)iVar1 * 0x20 + (longlong)FVar12);
    if (FVar12 != FVar13) {
      puVar15 = (uchar *)((longlong)FVar12 + 0x10);
      do {
        pFVar11 = (param_3->ChunkFragmentData).AllocatorInstance.Data;
        lVar17 = *(longlong *)FVar12;
        pFVar16 = pFVar11 + (longlong)(param_3->ChunkFragmentData).ArrayNum * 0x10;
        for (; pFVar11 != pFVar16; pFVar11 = pFVar11 + 0x10) {
          if (lVar17 != 0) {
            lVar18 = *(longlong *)pFVar11;
            if ((*(int *)(lVar18 + 0x38) < *(int *)(lVar17 + 0x38)) ||
               (*(longlong *)(*(longlong *)(lVar18 + 0x30) + (longlong)*(int *)(lVar17 + 0x38) * 8)
                != lVar17 + 0x30)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (bVar5) {
              plVar9 = &local_58;
              lStack_50 = *(longlong *)(pFVar11 + 8);
              local_58 = lVar18;
              goto LAB_1471fb37d;
            }
          }
        }
        if (((puVar15[-7] != '\x03') && (puVar15[-7] != '\x01')) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ChunkFragmentInstance != nullptr || ChunkRequirement.Requirement.IsOptional()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeData.cpp"
                               ,0x35e,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        plVar9 = local_38;
        local_38[0] = 0;
        local_38[1] = 0;
LAB_1471fb37d:
        lVar17 = plVar9[1];
        FVar12 = (ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>)
                 ((longlong)FVar12 + 0x20);
        *(longlong *)puVar15 = *plVar9;
        *(longlong *)(puVar15 + 8) = lVar17;
        puVar15 = puVar15 + 0x20;
      } while (FVar12 != FVar13);
    }
  }
  else {
    iVar1 = (param_1->ChunkFragmentViews).ArrayNum;
    if ((iVar1 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((iVar1 != param_2->ArrayNum) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("RunContext.GetMutableChunkRequirements().Num() == ChunkFragmentsMapping.Num()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeData.cpp"
                           ,0x34e,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar14 = 0;
    if (0 < param_2->ArrayNum) {
      lVar18 = 0;
      lVar17 = 0;
      while( true ) {
        uVar6 = 0;
        if ((int)uVar14 < (param_1->ChunkFragmentViews).ArrayNum) {
          uVar6 = ~uVar14 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar12 = (param_1->ChunkFragmentViews).AllocatorInstance.SecondaryData;
        FVar13 = (ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>)
                 &param_1->ChunkFragmentViews;
        if (FVar12 != (ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>)0x0) {
          FVar13 = FVar12;
        }
        uVar6 = 0;
        if ((int)uVar14 < param_2->ArrayNum) {
          uVar6 = ~uVar14 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) break;
        FVar2 = (param_2->AllocatorInstance).SecondaryData;
        FVar10 = (ForElementType<int>)param_2;
        if (FVar2 != (ForElementType<int>)0x0) {
          FVar10 = FVar2;
        }
        uVar6 = *(uint *)((longlong)FVar10 + lVar18 * 4);
        if (uVar6 == 0xffffffff) {
          if (((((uchar *)((longlong)FVar13 + 9))[lVar17] != '\x03') &&
              (((uchar *)((longlong)FVar13 + 9))[lVar17] != '\x01')) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ChunkFragmentIndex != INDEX_NONE || ChunkRequirement.Requirement.IsOptional()"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeData.cpp"
                                 ,0x355,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          puVar8 = &local_48;
          local_48 = 0;
          uStack_40 = 0;
        }
        else {
          uVar7 = 0;
          if ((int)uVar6 < (param_3->ChunkFragmentData).ArrayNum) {
            uVar7 = ~uVar6 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar11 = (param_3->ChunkFragmentData).AllocatorInstance.Data +
                    (longlong)(int)uVar6 * 0x10;
          local_68 = *(undefined8 *)pFVar11;
          local_60 = *(undefined8 *)(pFVar11 + 8);
          puVar8 = &local_68;
        }
        uVar4 = puVar8[1];
        uVar14 = uVar14 + 1;
        lVar18 = lVar18 + 1;
        *(undefined8 *)((uchar *)((longlong)FVar13 + 0x10) + lVar17) = *puVar8;
        *(undefined8 *)((uchar *)((longlong)FVar13 + 0x10) + lVar17 + 8) = uVar4;
        lVar17 = lVar17 + 0x20;
        if (param_2->ArrayNum <= (int)uVar14) {
          return;
        }
      }
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// BindConstSharedFragmentRequirements @ 1471fb3c0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassArchetypeData::BindConstSharedFragmentRequirements
          (FMassArchetypeData *this,FMassExecutionContext *param_1,
          FMassArchetypeSharedFragmentValues *param_2,
          TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *param_3)

{
  int iVar1;
  ForElementType<int> FVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  FScriptContainerElement *pFVar9;
  longlong *plVar10;
  ForElementType<int> FVar11;
  ForElementType<FMassExecutionContext::TFragmentView<FConstStructView>_> FVar12;
  ForElementType<FMassExecutionContext::TFragmentView<FConstStructView>_> FVar13;
  uint uVar14;
  uchar *puVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  longlong lVar18;
  longlong local_68;
  ulonglong local_60;
  longlong local_58;
  ulonglong local_50;
  longlong local_48 [4];
  
  if (param_3->ArrayNum < 1) {
    FVar12 = (param_1->ConstSharedFragmentViews).AllocatorInstance.SecondaryData;
    iVar1 = (param_1->ConstSharedFragmentViews).ArrayNum;
    if (FVar12 == (ForElementType<FMassExecutionContext::TFragmentView<FConstStructView>_>)0x0) {
      FVar12 = (ForElementType<FMassExecutionContext::TFragmentView<FConstStructView>_>)
               &param_1->ConstSharedFragmentViews;
    }
    if ((iVar1 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar13 = (ForElementType<FMassExecutionContext::TFragmentView<FConstStructView>_>)
             ((longlong)iVar1 * 0x20 + (longlong)FVar12);
    if (FVar12 != FVar13) {
      puVar15 = (uchar *)((longlong)FVar12 + 0x10);
      do {
        pFVar9 = (param_2->ConstSharedFragments).AllocatorInstance.Data;
        pFVar16 = pFVar9 + (longlong)(param_2->ConstSharedFragments).ArrayNum * 0x10;
        for (; pFVar9 != pFVar16; pFVar9 = pFVar9 + 0x10) {
          plVar8 = *(longlong **)pFVar9;
          if (plVar8 == (longlong *)0x0) {
            lVar17 = 0;
          }
          else {
            lVar17 = *plVar8;
          }
          if (lVar17 == *(longlong *)FVar12) {
            if (plVar8 == (longlong *)0x0) {
              plVar10 = &local_58;
              local_50 = 0;
              local_58 = 0;
            }
            else {
              local_58 = *plVar8;
              lVar17 = (longlong)*(short *)(*plVar8 + 0x5c);
              plVar10 = &local_58;
              local_50 = lVar17 + 7 + (longlong)plVar8 & -lVar17;
            }
            goto LAB_1471fb704;
          }
        }
        if (((puVar15[-7] != '\x03') && (puVar15[-7] != '\x01')) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("SharedFragment != nullptr || Requirement.Requirement.IsOptional()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeData.cpp"
                               ,0x378,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        plVar10 = local_48 + 2;
        local_48[2] = 0;
        local_48[3] = 0;
LAB_1471fb704:
        lVar17 = plVar10[1];
        FVar12 = (ForElementType<FMassExecutionContext::TFragmentView<FConstStructView>_>)
                 ((longlong)FVar12 + 0x20);
        *(longlong *)puVar15 = *plVar10;
        *(longlong *)(puVar15 + 8) = lVar17;
        puVar15 = puVar15 + 0x20;
      } while (FVar12 != FVar13);
    }
  }
  else {
    iVar1 = (param_1->ConstSharedFragmentViews).ArrayNum;
    if ((iVar1 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((iVar1 != param_3->ArrayNum) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("RunContext.GetMutableConstSharedRequirements().Num() == FragmentsMapping.Num()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeData.cpp"
                           ,0x368,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar14 = 0;
    if (0 < param_3->ArrayNum) {
      lVar18 = 0;
      lVar17 = 0;
      while( true ) {
        uVar6 = 0;
        if ((int)uVar14 < (param_1->ConstSharedFragmentViews).ArrayNum) {
          uVar6 = ~uVar14 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar12 = (param_1->ConstSharedFragmentViews).AllocatorInstance.SecondaryData;
        FVar13 = (ForElementType<FMassExecutionContext::TFragmentView<FConstStructView>_>)
                 &param_1->ConstSharedFragmentViews;
        if (FVar12 != (ForElementType<FMassExecutionContext::TFragmentView<FConstStructView>_>)0x0)
        {
          FVar13 = FVar12;
        }
        uVar6 = 0;
        if ((int)uVar14 < param_3->ArrayNum) {
          uVar6 = ~uVar14 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) break;
        FVar2 = (param_3->AllocatorInstance).SecondaryData;
        FVar11 = (ForElementType<int>)param_3;
        if (FVar2 != (ForElementType<int>)0x0) {
          FVar11 = FVar2;
        }
        uVar6 = *(uint *)((longlong)FVar11 + lVar18 * 4);
        if (uVar6 == 0xffffffff) {
          if (((((uchar *)((longlong)FVar13 + 9))[lVar17] != '\x03') &&
              (((uchar *)((longlong)FVar13 + 9))[lVar17] != '\x01')) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("FragmentIndex != INDEX_NONE || Requirement.Requirement.IsOptional()"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeData.cpp"
                                 ,0x36f,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          plVar8 = local_48;
          local_48[0] = 0;
          local_48[1] = 0;
        }
        else {
          uVar7 = 0;
          if ((int)uVar6 < (param_2->ConstSharedFragments).ArrayNum) {
            uVar7 = ~uVar6 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          plVar8 = *(longlong **)
                    ((param_2->ConstSharedFragments).AllocatorInstance.Data +
                    (longlong)(int)uVar6 * 0x10);
          if (plVar8 == (longlong *)0x0) {
            local_60 = 0;
            local_68 = 0;
          }
          else {
            local_68 = *plVar8;
            local_60 = (longlong)*(short *)(local_68 + 0x5c) + 7 + (longlong)plVar8 &
                       -(longlong)*(short *)(local_68 + 0x5c);
          }
          plVar8 = &local_68;
        }
        lVar4 = plVar8[1];
        uVar14 = uVar14 + 1;
        lVar18 = lVar18 + 1;
        *(longlong *)((uchar *)((longlong)FVar13 + 0x10) + lVar17) = *plVar8;
        *(longlong *)((uchar *)((longlong)FVar13 + 0x10) + lVar17 + 8) = lVar4;
        lVar17 = lVar17 + 0x20;
        if (param_3->ArrayNum <= (int)uVar14) {
          return;
        }
      }
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// BindEntityRequirements @ 1471fb770

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassArchetypeData::BindEntityRequirements
          (FMassArchetypeData *this,FMassExecutionContext *param_1,
          TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *param_2,
          FMassArchetypeChunk *param_3,int param_4,int param_5)

{
  ForElementType<int> FVar1;
  ForElementType<FMassArchetypeFragmentConfig> FVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  TTuple<UScriptStruct_const_*,int> *pTVar8;
  int iVar9;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> FVar10;
  ForElementType<int> FVar11;
  uchar *puVar12;
  uint *puVar13;
  uchar *puVar14;
  ForElementType<FMassArchetypeFragmentConfig> FVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_> FVar20;
  longlong lVar21;
  undefined4 uVar22;
  longlong local_res18;
  undefined4 uStack_8c;
  undefined4 uStack_7c;
  undefined4 uStack_6c;
  undefined4 uStack_5c;
  undefined4 uStack_4c;
  
  iVar9 = param_3->NumInstances;
  iVar19 = iVar9;
  if ((-1 < param_5) && (iVar19 = iVar9 - param_4, param_5 < iVar9 - param_4)) {
    iVar19 = param_5;
  }
  if (((param_4 < 0) || (iVar9 <= param_4)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("SubchunkStart >= 0 && SubchunkStart < Chunk.GetNumInstances()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeData.cpp"
                         ,0x31e,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar20 = (param_1->FragmentViews).AllocatorInstance.SecondaryData;
  if (param_2->ArrayNum < 1) {
    iVar9 = (param_1->FragmentViews).ArrayNum;
    FVar10 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
             param_1;
    if (FVar20 != (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
                   )0x0) {
      FVar10 = FVar20;
    }
    if ((iVar9 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar20 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>)
             ((longlong)iVar9 * 0x20 + (longlong)FVar10);
    if (FVar10 != FVar20) {
      puVar12 = (uchar *)((longlong)FVar10 + 0x10);
      do {
        pTVar8 = TSet<TTuple<UScriptStruct_const_*,int>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,int,0>,FDefaultSetAllocator>
                 ::Find((TSet<TTuple<UScriptStruct_const_*,int>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,int,0>,FDefaultSetAllocator>
                         *)&this->FragmentIndexMap,
                        *(UScriptStruct **)
                         ((ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
                           *)(puVar12 + -0x10))->InlineData);
        puVar13 = (uint *)&pTVar8->field_0x8;
        if (pTVar8 == (TTuple<UScriptStruct_const_*,int> *)0x0) {
          puVar13 = (uint *)0x0;
        }
        if (puVar13 == (uint *)0x0) {
          if (((puVar12[-7] != '\x03') && (puVar12[-7] != '\x01')) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("FragmentIndex != nullptr || Requirement.Requirement.IsOptional()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeData.cpp"
                                 ,0x33b,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          puVar14 = (uchar *)0x0;
          iVar9 = 0;
          uVar22 = uStack_6c;
        }
        else {
          puVar14 = param_3->RawMemory;
          uVar6 = *puVar13;
          uVar16 = 0;
          if ((int)uVar6 < (this->FragmentConfigs).ArrayNum) {
            uVar16 = ~uVar6 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar2 = (this->FragmentConfigs).AllocatorInstance.SecondaryData;
          FVar15 = (ForElementType<FMassArchetypeFragmentConfig>)&this->FragmentConfigs;
          if (FVar2 != (ForElementType<FMassArchetypeFragmentConfig>)0x0) {
            FVar15 = FVar2;
          }
          lVar21 = *(longlong *)((longlong)FVar15 + (longlong)(int)uVar6 * 0x10);
          iVar9 = (int)*(short *)(lVar21 + 0x5c);
          puVar14 = puVar14 + (longlong)
                              *(int *)((uchar *)((longlong)FVar15 + 8) + (longlong)(int)uVar6 * 0x10
                                      ) +
                              (longlong)((*(int *)(lVar21 + 0x58) + -1 + iVar9 & -iVar9) * param_4);
          iVar9 = iVar19;
          uVar22 = uStack_5c;
          if ((iVar19 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        *(uchar **)puVar12 = puVar14;
        *(int *)(puVar12 + 8) = iVar9;
        *(undefined4 *)(puVar12 + 0xc) = uVar22;
        FVar10 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
                  )((longlong)puVar12 + 0x10);
        puVar12 = puVar12 + 0x20;
      } while (FVar10 != FVar20);
    }
  }
  else {
    iVar9 = (param_1->FragmentViews).ArrayNum;
    if ((iVar9 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((iVar9 != param_2->ArrayNum) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("RunContext.GetMutableRequirements().Num() == EntityFragmentsMapping.Num()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeData.cpp"
                           ,0x322,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar17 = 0;
    if (0 < param_2->ArrayNum) {
      local_res18 = 0;
      uVar18 = uVar17;
      do {
        uVar16 = (uint)uVar17;
        uVar6 = 0;
        if ((int)uVar16 < (param_1->FragmentViews).ArrayNum) {
          uVar6 = ~uVar16 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar20 = (param_1->FragmentViews).AllocatorInstance.SecondaryData;
        FVar10 = (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
                  )param_1;
        if (FVar20 != (ForElementType<FMassExecutionContext::TFragmentView<TArrayView<FMassFragment,int>_>_>
                       )0x0) {
          FVar10 = FVar20;
        }
        lVar21 = local_res18 + (longlong)FVar10;
        uVar6 = 0;
        if ((int)uVar16 < param_2->ArrayNum) {
          uVar6 = ~uVar16 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar1 = (param_2->AllocatorInstance).SecondaryData;
        FVar11 = (ForElementType<int>)param_2;
        if (FVar1 != (ForElementType<int>)0x0) {
          FVar11 = FVar1;
        }
        uVar6 = *(uint *)((longlong)FVar11 + uVar18 * 4);
        if (uVar6 == 0xffffffff) {
          if (((*(char *)(lVar21 + 9) != '\x03') && (*(char *)(lVar21 + 9) != '\x01')) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("FragmentIndex != INDEX_NONE || Requirement.Requirement.IsOptional()"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeData.cpp"
                                 ,0x329,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          puVar12 = (uchar *)0x0;
          iVar9 = 0;
          uVar22 = uStack_8c;
        }
        else {
          puVar12 = param_3->RawMemory;
          uVar7 = 0;
          if ((int)uVar6 < (this->FragmentConfigs).ArrayNum) {
            uVar7 = ~uVar6 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar2 = (this->FragmentConfigs).AllocatorInstance.SecondaryData;
          FVar15 = (ForElementType<FMassArchetypeFragmentConfig>)&this->FragmentConfigs;
          if (FVar2 != (ForElementType<FMassArchetypeFragmentConfig>)0x0) {
            FVar15 = FVar2;
          }
          lVar3 = *(longlong *)((longlong)FVar15 + (longlong)(int)uVar6 * 0x10);
          iVar9 = (int)*(short *)(lVar3 + 0x5c);
          puVar12 = puVar12 + (longlong)
                              *(int *)((uchar *)((longlong)FVar15 + 8) + (longlong)(int)uVar6 * 0x10
                                      ) +
                              (longlong)((*(int *)(lVar3 + 0x58) + -1 + iVar9 & -iVar9) * param_4);
          iVar9 = iVar19;
          uVar22 = uStack_7c;
          if ((iVar19 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ArrayNum >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xfe,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        *(uchar **)(lVar21 + 0x10) = puVar12;
        *(int *)(lVar21 + 0x18) = iVar9;
        *(undefined4 *)(lVar21 + 0x1c) = uVar22;
        uVar17 = (ulonglong)(uVar16 + 1);
        local_res18 = local_res18 + 0x20;
        uVar18 = uVar18 + 1;
      } while ((int)(uVar16 + 1) < param_2->ArrayNum);
    }
  }
  iVar9 = this->EntityListOffsetWithinChunk;
  puVar12 = param_3->RawMemory;
  if ((iVar19 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (param_1->EntityListView).DataPtr =
       (FMassEntityHandle *)(puVar12 + (longlong)iVar9 + (longlong)param_4 * 8);
  *(ulonglong *)&(param_1->EntityListView).ArrayNum = CONCAT44(uStack_4c,iVar19);
  return;
}

// BindSharedFragmentRequirements @ 1471fbd40

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassArchetypeData::BindSharedFragmentRequirements
          (FMassArchetypeData *this,FMassExecutionContext *param_1,
          FMassArchetypeSharedFragmentValues *param_2,
          TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *param_3)

{
  int iVar1;
  ForElementType<int> FVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  FScriptContainerElement *pFVar9;
  longlong *plVar10;
  ForElementType<int> FVar11;
  ForElementType<FMassExecutionContext::TFragmentView<FStructView>_> FVar12;
  ForElementType<FMassExecutionContext::TFragmentView<FStructView>_> FVar13;
  uint uVar14;
  uchar *puVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  longlong lVar18;
  longlong local_68;
  ulonglong local_60;
  longlong local_58;
  ulonglong local_50;
  longlong local_48 [4];
  
  if (param_3->ArrayNum < 1) {
    FVar12 = (param_1->SharedFragmentViews).AllocatorInstance.SecondaryData;
    iVar1 = (param_1->SharedFragmentViews).ArrayNum;
    if (FVar12 == (ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>)0x0) {
      FVar12 = (ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>)
               &param_1->SharedFragmentViews;
    }
    if ((iVar1 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar13 = (ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>)
             ((longlong)iVar1 * 0x20 + (longlong)FVar12);
    if (FVar12 != FVar13) {
      puVar15 = (uchar *)((longlong)FVar12 + 0x10);
      do {
        pFVar9 = (param_2->SharedFragments).AllocatorInstance.Data;
        pFVar16 = pFVar9 + (longlong)(param_2->SharedFragments).ArrayNum * 0x10;
        for (; pFVar9 != pFVar16; pFVar9 = pFVar9 + 0x10) {
          plVar8 = *(longlong **)pFVar9;
          if (plVar8 == (longlong *)0x0) {
            lVar17 = 0;
          }
          else {
            lVar17 = *plVar8;
          }
          if (lVar17 == *(longlong *)FVar12) {
            if (plVar8 == (longlong *)0x0) {
              plVar10 = &local_58;
              local_50 = 0;
              local_58 = 0;
            }
            else {
              local_58 = *plVar8;
              lVar17 = (longlong)*(short *)(*plVar8 + 0x5c);
              plVar10 = &local_58;
              local_50 = lVar17 + 7 + (longlong)plVar8 & -lVar17;
            }
            goto LAB_1471fc084;
          }
        }
        if (((puVar15[-7] != '\x03') && (puVar15[-7] != '\x01')) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("SharedFragment != nullptr || Requirement.Requirement.IsOptional()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeData.cpp"
                               ,0x392,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        plVar10 = local_48 + 2;
        local_48[2] = 0;
        local_48[3] = 0;
LAB_1471fc084:
        lVar17 = plVar10[1];
        FVar12 = (ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>)
                 ((longlong)FVar12 + 0x20);
        *(longlong *)puVar15 = *plVar10;
        *(longlong *)(puVar15 + 8) = lVar17;
        puVar15 = puVar15 + 0x20;
      } while (FVar12 != FVar13);
    }
  }
  else {
    iVar1 = (param_1->SharedFragmentViews).ArrayNum;
    if ((iVar1 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((iVar1 != param_3->ArrayNum) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("RunContext.GetMutableSharedRequirements().Num() == FragmentsMapping.Num()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeData.cpp"
                           ,0x382,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar14 = 0;
    if (0 < param_3->ArrayNum) {
      lVar18 = 0;
      lVar17 = 0;
      while( true ) {
        uVar6 = 0;
        if ((int)uVar14 < (param_1->SharedFragmentViews).ArrayNum) {
          uVar6 = ~uVar14 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar12 = (param_1->SharedFragmentViews).AllocatorInstance.SecondaryData;
        FVar13 = (ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>)
                 &param_1->SharedFragmentViews;
        if (FVar12 != (ForElementType<FMassExecutionContext::TFragmentView<FStructView>_>)0x0) {
          FVar13 = FVar12;
        }
        uVar6 = 0;
        if ((int)uVar14 < param_3->ArrayNum) {
          uVar6 = ~uVar14 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) break;
        FVar2 = (param_3->AllocatorInstance).SecondaryData;
        FVar11 = (ForElementType<int>)param_3;
        if (FVar2 != (ForElementType<int>)0x0) {
          FVar11 = FVar2;
        }
        uVar6 = *(uint *)((longlong)FVar11 + lVar18 * 4);
        if (uVar6 == 0xffffffff) {
          if (((((uchar *)((longlong)FVar13 + 9))[lVar17] != '\x03') &&
              (((uchar *)((longlong)FVar13 + 9))[lVar17] != '\x01')) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("FragmentIndex != INDEX_NONE || Requirement.Requirement.IsOptional()"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeData.cpp"
                                 ,0x389,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          plVar8 = local_48;
          local_48[0] = 0;
          local_48[1] = 0;
        }
        else {
          uVar7 = 0;
          if ((int)uVar6 < (param_2->SharedFragments).ArrayNum) {
            uVar7 = ~uVar6 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          plVar8 = *(longlong **)
                    ((param_2->SharedFragments).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x10
                    );
          if (plVar8 == (longlong *)0x0) {
            local_60 = 0;
            local_68 = 0;
          }
          else {
            local_68 = *plVar8;
            local_60 = (longlong)*(short *)(local_68 + 0x5c) + 7 + (longlong)plVar8 &
                       -(longlong)*(short *)(local_68 + 0x5c);
          }
          plVar8 = &local_68;
        }
        lVar4 = plVar8[1];
        uVar14 = uVar14 + 1;
        lVar18 = lVar18 + 1;
        *(longlong *)((uchar *)((longlong)FVar13 + 0x10) + lVar17) = *plVar8;
        *(longlong *)((uchar *)((longlong)FVar13 + 0x10) + lVar17 + 8) = lVar4;
        lVar17 = lVar17 + 0x20;
        if (param_3->ArrayNum <= (int)uVar14) {
          return;
        }
      }
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// CompactEntities @ 147204280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall FMassArchetypeData::CompactEntities(FMassArchetypeData *this,double param_1)

{
  ForAnyElementType *pFVar1;
  longlong *plVar2;
  ulonglong uVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  int iVar11;
  FMassArchetypeData *pFVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  byte bVar19;
  int iVar20;
  longlong lVar21;
  ForElementType<FSetElementId> FVar22;
  uint *puVar23;
  undefined1 *puVar24;
  FIdentityFunctor FVar25;
  longlong lVar26;
  ForElementType<FMassArchetypeFragmentConfig> FVar27;
  uint uVar28;
  FScriptContainerElement *pFVar29;
  ForElementType<FMassArchetypeFragmentConfig> FVar30;
  uint *puVar31;
  uint uVar32;
  longlong lVar33;
  int *piVar34;
  FScriptContainerElement *pFVar35;
  longlong lVar36;
  undefined1 auStack_248 [32];
  FScriptContainerElement **local_228;
  FScriptContainerElement *local_220;
  longlong local_218;
  longlong local_210;
  undefined8 local_208;
  FIdentityFunctor local_1f8;
  undefined1 local_1f7;
  undefined1 local_1f6 [2];
  uint local_1f4;
  undefined1 local_1f0 [4];
  int local_1ec;
  int local_1e8;
  uint local_1e4;
  int local_1e0;
  int local_1dc;
  uint local_1d8;
  FScriptContainerElement *local_1d0;
  FMassArchetypeData *local_1c8;
  uint local_1c0;
  int local_1bc;
  int *local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  void *local_1a0;
  undefined8 local_198;
  int local_190;
  int local_18c;
  LARGE_INTEGER local_188;
  LARGE_INTEGER local_180;
  longlong local_178;
  longlong *local_170;
  longlong *local_168;
  longlong local_160;
  longlong local_158;
  longlong *local_150;
  uint uStack_148;
  uint uStack_144;
  TBitArray<FDefaultBitArrayAllocator> *local_140;
  undefined4 uStack_138;
  uint uStack_134;
  uint local_130;
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  longlong *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_118;
  undefined8 uStack_f8;
  uint *local_f0;
  void **local_e8;
  undefined4 local_c4;
  undefined1 local_b8 [32];
  uint *local_98;
  uint local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int local_84;
  undefined1 local_80 [8];
  ForElementType<FSetElementId> local_78;
  int local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_248;
  uVar32 = 0;
  local_1e0 = 0;
  local_1c8 = this;
  QueryPerformanceCounter(&local_188);
  dVar10 = __real_4170000000000000;
  iVar18 = (this->Chunks).ArrayNum;
  pFVar29 = (this->Chunks).AllocatorInstance.Data;
  local_b8._0_8_ = 0;
  local_b8._8_8_ = 0;
  local_98 = (uint *)0x0;
  pFVar35 = pFVar29 + (longlong)iVar18 * 0x90;
  local_90 = 0;
  local_8c = 0x80;
  dVar9 = (double)local_188.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  local_88 = 0xffffffff;
  local_84 = 0;
  local_78 = (ForElementType<FSetElementId>)0x0;
  local_70 = 0;
  while( true ) {
    if ((this->Chunks).ArrayNum != iVar18) {
      local_1f7 = 0;
      `TCheckedPointerIterator<FMassArchetypeChunk,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_1f7);
    }
    uVar17 = local_90;
    if (pFVar29 == pFVar35) break;
    if ((0 < *(int *)(pFVar29 + 0x10)) && (*(int *)(pFVar29 + 0x10) < this->NumEntitiesPerChunk)) {
      uVar17 = *(uint *)(pFVar29 + 0x28);
      if (uVar17 == 0xffffffff) {
        uVar17 = FMassArchetypeSharedFragmentValues::CalculateHash
                           ((FMassArchetypeSharedFragmentValues *)(pFVar29 + 0x28));
        *(uint *)(pFVar29 + 0x28) = uVar17;
      }
      local_1a0 = (void *)0x0;
      local_198 = 0;
      local_1c0 = uVar17;
      if (local_b8._8_4_ != local_84) {
        FVar22 = (ForElementType<FSetElementId>)local_80;
        if (local_78 != (ForElementType<FSetElementId>)0x0) {
          FVar22 = local_78;
        }
        uVar28 = *(uint *)((longlong)FVar22 + (ulonglong)(local_70 - 1U & uVar17) * 4);
        while (uVar28 != 0xffffffff) {
          puVar23 = (uint *)((longlong)(int)uVar28 * 0x20 + local_b8._0_8_);
          if (*puVar23 == uVar17) {
            if (puVar23 != (uint *)0x0) goto LAB_14720445e;
            break;
          }
          uVar28 = puVar23[6];
        }
      }
      local_f0 = &local_1c0;
      local_228 = (FScriptContainerElement **)0x0;
      local_e8 = &local_1a0;
      TSet<TTuple<unsigned_int,TArray<FMassArchetypeChunk_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FMassArchetypeChunk_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::
      EmplaceByHash<TPairInitializer<unsigned_int_const_&,TArray<FMassArchetypeChunk_*,TSizedDefaultAllocator<32>_>_&&>_>
                ((TSet<TTuple<unsigned_int,TArray<FMassArchetypeChunk_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<FMassArchetypeChunk_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)local_b8,(uint)&local_1bc,
                 (TPairInitializer<unsigned_int_const_&,TArray<FMassArchetypeChunk_*,TSizedDefaultAllocator<32>_>_&&>
                  *)(ulonglong)uVar17,(bool *)&local_f0);
      puVar23 = (uint *)((longlong)local_1bc * 0x20 + local_b8._0_8_);
LAB_14720445e:
      pFVar1 = (ForAnyElementType *)(puVar23 + 2);
      if (local_1a0 != (void *)0x0) {
        FMemory::Free(local_1a0);
      }
      pFVar4 = pFVar1->Data;
      local_1d0 = pFVar29;
      if ((pFVar4 <= (FScriptContainerElement *)&local_1d0) &&
         ((FScriptContainerElement *)&local_1d0 < pFVar4 + (longlong)(int)puVar23[5] * 8)) {
        local_210 = (longlong)(int)puVar23[4];
        local_208 = 8;
        local_228 = &local_1d0;
        local_220 = pFVar4;
        local_218 = (longlong)(int)puVar23[5];
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar16) {
          pcVar8 = (code *)swi(3);
          iVar18 = (*pcVar8)();
          return iVar18;
        }
      }
      uVar17 = puVar23[4];
      if (uVar17 == puVar23[5]) {
        uVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,pFVar1,(int *)(puVar23 + 5));
      }
      puVar23[4] = uVar17 + 1;
      *(FScriptContainerElement **)(pFVar1->Data + (longlong)(int)uVar17 * 8) = local_1d0;
    }
    pFVar29 = pFVar29 + 0x90;
  }
  uStack_144 = 1;
  local_130 = 0;
  uStack_134 = local_130;
  if (local_90 != 0) {
    puVar23 = (uint *)(local_b8 + 0x10);
    if (local_98 != (uint *)0x0) {
      puVar23 = local_98;
    }
    uVar28 = *puVar23;
    uVar32 = 0;
    local_130 = 0;
    while (uVar28 == 0) {
      lVar21 = (longlong)(int)uVar32;
      local_130 = local_130 + 0x20;
      uVar32 = uVar32 + 1;
      uStack_134 = local_90;
      if ((int)((local_90 - 1) + ((int)(local_90 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar32)
      goto LAB_1472045a0;
      uVar28 = puVar23[lVar21 + 1];
    }
    uStack_144 = -uVar28 & uVar28;
    uVar3 = (ulonglong)uStack_144 * 2 + 1;
    lVar21 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_190 = (int)lVar21;
    uStack_134 = (local_130 - 1) + local_190;
    if ((int)local_90 < (int)uStack_134) {
      uStack_134 = local_90;
    }
  }
LAB_1472045a0:
  local_150 = (longlong *)local_b8;
  uVar28 = local_90 & 0xffffffe0;
  uStack_12c = local_c4;
  local_140 = (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10);
  iStack_128 = local_b8._8_4_ - local_84;
  uStack_138 = 0xffffffff;
  TStack_118.CurrentBitIndex = uStack_134;
  TStack_118.UnvisitedBitMask = 0xffffffff;
  TStack_118._padding_ = CONCAT44(uStack_144,uVar32);
  iVar18 = (int)local_90 >> 5;
  TStack_118._28_4_ = local_c4;
  TStack_118.BaseBitIndex = local_130;
  uStack_f8 = CONCAT44(uStack_124,iStack_128);
  bVar19 = (byte)local_90;
  local_1f4 = local_90;
  uStack_148 = uVar32;
  local_120 = local_150;
  TStack_118.Array = local_140;
  if (((int)local_90 < 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar16)) {
    pcVar8 = (code *)swi(3);
    iVar18 = (*pcVar8)();
    return iVar18;
  }
  FVar25 = local_1f8;
  if (uVar17 != local_90) {
    puVar23 = (uint *)(local_b8 + 0x10);
    if (local_98 != (uint *)0x0) {
      puVar23 = local_98;
    }
    uVar32 = -1 << (bVar19 & 0x1f) & puVar23[iVar18];
    while (uVar32 == 0) {
      lVar21 = (longlong)iVar18;
      uVar28 = uVar28 + 0x20;
      iVar18 = iVar18 + 1;
      if ((int)((local_90 - 1) + ((int)(local_90 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) {
        local_1f4 = local_90;
        uVar17 = local_90;
        goto LAB_1472046c0;
      }
      uVar32 = puVar23[lVar21 + 1];
    }
    uVar3 = (ulonglong)(-uVar32 & uVar32) * 2 + 1;
    lVar21 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_18c = (int)lVar21;
    local_1f4 = local_18c + -1 + uVar28;
    uVar17 = local_1f4;
    if ((int)local_90 < (int)local_1f4) {
      uVar17 = local_90;
      local_1f4 = local_90;
    }
  }
LAB_1472046c0:
  do {
    plVar5 = local_120;
    uVar32 = 0;
    if ((int)local_120[1] - *(int *)((longlong)local_120 + 0x34) != (int)uStack_f8) {
      local_1f6[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<FMassArchetypeChunk_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1f6);
    }
    iVar18 = local_1e0;
    if (((TStack_118.CurrentBitIndex == uVar17) &&
        (TStack_118.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10))) &&
       (plVar5 == (longlong *)local_b8)) {
      if (0 < local_1e0) {
        this->EntityOrderVersion = this->EntityOrderVersion + 1;
      }
      local_70 = 0;
      if (local_78 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_78);
      }
      TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<FMassArchetypeChunk_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<FMassArchetypeChunk_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<FMassArchetypeChunk_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_b8);
      return iVar18;
    }
    lVar21 = *plVar5;
    lVar36 = (longlong)TStack_118.CurrentBitIndex * 0x20;
    iVar18 = *(int *)(lVar36 + 0x10 + lVar21);
    local_160 = lVar36;
    local_158 = lVar21;
    if (1 < iVar18) {
      AlgoImpl::
      IntroSortInternal<FMassArchetypeChunk_*,int,FIdentityFunctor,TDereferenceWrapper<FMassArchetypeChunk_*,_FMassArchetypeData::CompactEntities_::__l13::<lambda_1>_>_>
                (*(FMassArchetypeChunk ***)(lVar36 + 8 + lVar21),iVar18,FVar25,
                 (<lambda_1> *)local_1f0);
      uVar28 = *(int *)(lVar36 + 0x10 + lVar21) - 1;
      local_1e4 = 0;
      local_1a8 = 0;
      uVar17 = local_1f4;
      local_1d8 = uVar28;
      if (0 < (int)uVar28) {
        local_1b0 = (longlong)(int)uVar28;
        piVar34 = &this->NumEntitiesPerChunk;
LAB_147204770:
        lVar33 = local_1a8;
        lVar26 = local_1b0;
        local_1b8 = piVar34;
        QueryPerformanceCounter(&local_180);
        this = local_1c8;
        uVar17 = local_1f4;
        FVar25 = local_1f8;
        if ((double)local_180.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar10 <
            dVar9 + param_1) {
          iVar18 = *(int *)(lVar36 + 0x10 + lVar21);
          pFVar29 = local_220;
          uVar14 = local_1e4;
          uVar17 = local_1d8;
          lVar13 = local_1b0;
          lVar15 = local_1a8;
          if ((int)uVar32 < iVar18) {
            do {
              uVar17 = 0;
              if ((int)uVar32 < iVar18) {
                uVar17 = ~uVar32 >> 0x1f;
              }
              if (uVar17 == 0) {
                local_220 = (FScriptContainerElement *)(longlong)iVar18;
                local_228 = (FScriptContainerElement **)(longlong)(int)uVar32;
                bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar16) {
                  pcVar8 = (code *)swi(3);
                  iVar18 = (*pcVar8)();
                  return iVar18;
                }
              }
              pFVar29 = local_220;
              uVar14 = uVar32;
              uVar17 = local_1d8;
              lVar13 = local_1b0;
              lVar15 = lVar33;
              if (*(int *)(*(longlong *)(*(longlong *)(lVar36 + 8 + lVar21) + lVar33 * 8) + 0x10) !=
                  *piVar34) break;
              iVar18 = *(int *)(lVar36 + 0x10 + lVar21);
              uVar32 = uVar32 + 1;
              lVar33 = lVar33 + 1;
              uVar14 = uVar32;
              lVar15 = lVar33;
            } while ((int)uVar32 < iVar18);
          }
          do {
            local_1a8 = lVar15;
            local_1e4 = uVar14;
            local_220 = pFVar29;
            if ((int)uVar28 < 0) goto LAB_147204898;
            iVar18 = *(int *)(lVar36 + 0x10 + lVar21);
            local_220 = (FScriptContainerElement *)(longlong)iVar18;
            uVar17 = 0;
            if ((int)uVar28 < iVar18) {
              uVar17 = ~uVar28 >> 0x1f;
            }
            if (uVar17 == 0) {
              local_228 = (FScriptContainerElement **)(ulonglong)uVar28;
              bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              pFVar29 = local_220;
              if (bVar16) {
                pcVar8 = (code *)swi(3);
                iVar18 = (*pcVar8)();
                return iVar18;
              }
            }
            local_220 = pFVar29;
            uVar17 = uVar28;
            lVar13 = lVar26;
            if (*(int *)(*(longlong *)(*(longlong *)(lVar36 + 8 + lVar21) + lVar26 * 8) + 0x10) != 0
               ) goto LAB_147204898;
            lVar26 = lVar26 + -1;
            uVar28 = uVar28 - 1;
            pFVar29 = local_220;
            uVar14 = local_1e4;
            uVar17 = uVar28;
            lVar13 = lVar26;
            lVar15 = local_1a8;
          } while( true );
        }
      }
    }
LAB_147204c92:
    TStack_118.UnvisitedBitMask = TStack_118.UnvisitedBitMask & ~TStack_118._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_118);
  } while( true );
LAB_147204898:
  local_1b0 = lVar13;
  local_1d8 = uVar17;
  this = local_1c8;
  uVar17 = local_1f4;
  FVar25 = local_1f8;
  if ((int)uVar28 <= (int)uVar32) goto LAB_147204c92;
  iVar18 = *(int *)(lVar36 + 0x10 + lVar21);
  uVar17 = 0;
  if ((int)uVar32 < iVar18) {
    uVar17 = ~uVar32 >> 0x1f;
  }
  if (uVar17 == 0) {
    local_228 = (FScriptContainerElement **)(longlong)(int)uVar32;
    local_220 = (FScriptContainerElement *)(longlong)iVar18;
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar16) {
      pcVar8 = (code *)swi(3);
      iVar18 = (*pcVar8)();
      return iVar18;
    }
  }
  iVar18 = *(int *)(lVar36 + 0x10 + lVar21);
  plVar5 = *(longlong **)(*(longlong *)(lVar36 + 8 + lVar21) + lVar33 * 8);
  uVar32 = 0;
  if ((int)uVar28 < iVar18) {
    uVar32 = ~uVar28 >> 0x1f;
  }
  local_170 = plVar5;
  if (uVar32 == 0) {
    local_228 = (FScriptContainerElement **)(longlong)(int)uVar28;
    local_220 = (FScriptContainerElement *)(longlong)iVar18;
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar16) {
      pcVar8 = (code *)swi(3);
      iVar18 = (*pcVar8)();
      return iVar18;
    }
  }
  local_1ec = (int)plVar5[2];
  plVar6 = *(longlong **)(*(longlong *)(lVar36 + 8 + lVar21) + lVar26 * 8);
  local_1dc = (int)plVar6[2];
  local_1e8 = local_1dc;
  if (*local_1b8 - local_1ec < local_1dc) {
    local_1e8 = *local_1b8 - local_1ec;
  }
  local_1dc = local_1dc - local_1e8;
  local_168 = plVar6;
  if ((local_1e8 < 1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumberOfEntitiesToMove > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeData.cpp"
                          ,0x2a7,L""), bVar16)) {
    pcVar8 = (code *)swi(3);
    iVar18 = (*pcVar8)();
    return iVar18;
  }
  pFVar12 = local_1c8;
  iVar11 = local_1dc;
  lVar21 = *plVar6;
  FVar30 = (ForElementType<FMassArchetypeFragmentConfig>)&local_1c8->FragmentConfigs;
  FVar27 = (local_1c8->FragmentConfigs).AllocatorInstance.SecondaryData;
  lVar36 = *plVar5;
  iVar18 = (local_1c8->FragmentConfigs).ArrayNum;
  if (FVar27 != (ForElementType<FMassArchetypeFragmentConfig>)0x0) {
    FVar30 = FVar27;
  }
  lVar26 = (longlong)local_1dc;
  FVar27 = (ForElementType<FMassArchetypeFragmentConfig>)
           ((longlong)iVar18 * 0x10 + (longlong)FVar30);
  local_178 = lVar21;
  while( true ) {
    if ((pFVar12->FragmentConfigs).ArrayNum != iVar18) {
      local_1f8 = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<FMassArchetypeFragmentConfig,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_1f8);
    }
    plVar6 = local_168;
    plVar5 = local_170;
    iVar20 = local_1e8;
    if (FVar30 == FVar27) break;
    iVar20 = (int)*(short *)(*(longlong *)FVar30 + 0x5c);
    uVar32 = *(int *)(*(longlong *)FVar30 + 0x58) + -1 + iVar20 & ~(iVar20 - 1U);
    memcpy((void *)((int)(uVar32 * local_1ec) + lVar36 + (longlong)*(int *)((longlong)FVar30 + 8)),
           (void *)((int)(uVar32 * iVar11) + lVar21 + (longlong)*(int *)((longlong)FVar30 + 8)),
           (longlong)(int)(uVar32 * local_1e8));
    FVar30 = (ForElementType<FMassArchetypeFragmentConfig>)((longlong)FVar30 + 0x10);
  }
  lVar21 = (longlong)pFVar12->EntityListOffsetWithinChunk;
  puVar23 = (uint *)(lVar21 + (longlong)local_1ec * 8 + *local_170);
  memcpy(puVar23,(void *)(*local_168 + lVar26 * 8 + lVar21),(longlong)local_1e8 << 3);
  uVar28 = local_1d8;
  uVar32 = local_1e4;
  *(int *)(plVar5 + 2) = (int)plVar5[2] + iVar20;
  *(int *)((longlong)plVar5 + 0x14) = *(int *)((longlong)plVar5 + 0x14) + 1;
  plVar2 = plVar6 + 2;
  *(int *)plVar2 = (int)*plVar2 - iVar20;
  if (((int)*plVar2 < 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumInstances >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                          ,0x5d,L""), bVar16)) {
    pcVar8 = (code *)swi(3);
    iVar18 = (*pcVar8)();
    return iVar18;
  }
  *(int *)((longlong)plVar6 + 0x14) = *(int *)((longlong)plVar6 + 0x14) + 1;
  if ((int)plVar6[2] == 0) {
    FMemory::Free((void *)*plVar6);
    *plVar6 = 0;
  }
  pFVar12 = local_1c8;
  iVar18 = (local_1c8->Chunks).ArrayNum;
  if (iVar18 < 1) {
    local_228 = (FScriptContainerElement **)0x0;
    local_220 = (FScriptContainerElement *)(longlong)iVar18;
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar16) {
      pcVar8 = (code *)swi(3);
      iVar18 = (*pcVar8)();
      return iVar18;
    }
  }
  lVar21 = (longlong)plVar5 - (longlong)(pFVar12->Chunks).AllocatorInstance.Data;
  lVar21 = lVar21 / 0x12 + (lVar21 >> 0x3f);
  iVar18 = (int)(lVar21 >> 3) - (int)(lVar21 >> 0x3f);
  if (((iVar18 < 0) || ((pFVar12->Chunks).ArrayNum <= iVar18)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("ChunkToFillIdx >= 0 && ChunkToFillIdx < Chunks.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeData.cpp"
                          ,0x2b3,L""), bVar16)) {
    pcVar8 = (code *)swi(3);
    iVar18 = (*pcVar8)();
    return iVar18;
  }
  iVar11 = local_1e8;
  iVar20 = 0;
  iVar18 = iVar18 * *local_1b8 + local_1ec;
  if (0 < local_1e8) {
    do {
      if (*(int *)&(pFVar12->EntityMap).field_0x8 != *(int *)&(pFVar12->EntityMap).field_0x34) {
        puVar7 = *(undefined1 **)&(pFVar12->EntityMap).field_0x40;
        puVar24 = &(pFVar12->EntityMap).field_0x38;
        if (puVar7 != (undefined1 *)0x0) {
          puVar24 = puVar7;
        }
        uVar32 = *(uint *)(puVar24 +
                          (ulonglong)(*(int *)&(pFVar12->EntityMap).field_0x48 - 1U & *puVar23) * 4)
        ;
        if (uVar32 != 0xffffffff) {
          do {
            puVar31 = (uint *)((longlong)(int)uVar32 * 0x10 + *(longlong *)&pFVar12->EntityMap);
            if (*puVar31 == *puVar23) {
              if (puVar31 == (uint *)0x0) goto LAB_147204c1a;
              goto LAB_147204c40;
            }
            uVar32 = puVar31[2];
          } while (uVar32 != 0xffffffff);
        }
      }
      puVar31 = (uint *)0x0;
LAB_147204c1a:
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Pair != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                          ,0x288,L"");
      if (bVar16) {
        pcVar8 = (code *)swi(3);
        iVar18 = (*pcVar8)();
        return iVar18;
      }
LAB_147204c40:
      uVar32 = iVar20 + iVar18;
      puVar23 = puVar23 + 2;
      iVar20 = iVar20 + 1;
      puVar31[1] = uVar32;
      uVar32 = local_1e4;
    } while (iVar20 < iVar11);
  }
  local_1e0 = local_1e0 + iVar11;
  lVar21 = local_158;
  piVar34 = local_1b8;
  lVar36 = local_160;
  goto LAB_147204770;
}

// ConfigureFragments @ 147205b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassArchetypeData::ConfigureFragments(FMassArchetypeData *this,FMassEntityManager *param_1)

{
  TArray<FMassArchetypeFragmentConfig,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  short sVar2;
  int iVar3;
  code *pcVar4;
  UScriptStruct *pUVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ForElementType<UScriptStruct_const_*> FVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ForElementType<FMassArchetypeFragmentConfig> FVar13;
  ForElementType<FMassArchetypeFragmentConfig> FVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 auStackY_128 [32];
  FIdentityFunctor local_f8 [4];
  uint local_f4;
  undefined1 local_f0 [8];
  UScriptStruct *local_e8;
  TPairInitializer<UScriptStruct_const_*_const_&,int_const_&> local_e0;
  uint *local_d0;
  TArray<UScriptStruct_const_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> local_c8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_c8.AllocatorInstance.SecondaryData = (ForElementType<UScriptStruct_const_*>)0x0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0x10;
  TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
  ::ExportTypes<UScriptStruct,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
            ((TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
              *)this,&local_c8);
  FVar9 = (ForElementType<UScriptStruct_const_*>)&local_c8;
  if (local_c8.AllocatorInstance.SecondaryData != (ForElementType<UScriptStruct_const_*>)0x0) {
    FVar9 = local_c8.AllocatorInstance.SecondaryData;
  }
  AlgoImpl::
  IntroSortInternal<UScriptStruct_const_*,int,FIdentityFunctor,TDereferenceWrapper<UScriptStruct_const_*,FScriptStructSortOperator>_>
            ((UScriptStruct **)FVar9,local_c8.ArrayNum,local_f8[0],
             (FScriptStructSortOperator *)local_f8);
  iVar3 = local_c8.ArrayNum;
  uVar12 = 8;
  pTVar1 = &this->FragmentConfigs;
  lVar16 = 0;
  iVar7 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassArchetypeFragmentConfig>_>
                    (0x10,8,local_c8.ArrayNum,&pTVar1->AllocatorInstance,
                     &(this->FragmentConfigs).ArrayNum,&(this->FragmentConfigs).ArrayMax);
  FVar14 = (this->FragmentConfigs).AllocatorInstance.SecondaryData;
  if (FVar14 == (ForElementType<FMassArchetypeFragmentConfig>)0x0) {
    FVar14 = (ForElementType<FMassArchetypeFragmentConfig>)pTVar1;
  }
  DefaultConstructItems<FMassArchetypeFragmentConfig,int>
            ((void *)((longlong)FVar14 + (longlong)iVar7 * 0x10),iVar3);
  TSet<TTuple<UScriptStruct_const_*,int>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,int,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<UScriptStruct_const_*,int>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,int,0>,FDefaultSetAllocator>
             *)&this->FragmentIndexMap,local_c8.ArrayNum);
  local_f4 = 0;
  if (0 < local_c8.ArrayNum) {
    do {
      uVar15 = local_f4;
      uVar8 = 0;
      if ((int)local_f4 < local_c8.ArrayNum) {
        uVar8 = ~local_f4 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar9 = (ForElementType<UScriptStruct_const_*>)&local_c8;
      if (local_c8.AllocatorInstance.SecondaryData != (ForElementType<UScriptStruct_const_*>)0x0) {
        FVar9 = local_c8.AllocatorInstance.SecondaryData;
      }
      local_e8 = *(UScriptStruct **)((longlong)FVar9 + (longlong)(int)uVar15 * 8);
      if ((local_e8 == (UScriptStruct *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("FragmentType",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeData.cpp"
                             ,0x9a,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pUVar5 = local_e8;
      lVar10 = (longlong)(int)local_f4;
      uVar15 = 0;
      if ((int)local_f4 < (this->FragmentConfigs).ArrayNum) {
        uVar15 = ~local_f4 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar14 = (this->FragmentConfigs).AllocatorInstance.SecondaryData;
      FVar13 = (ForElementType<FMassArchetypeFragmentConfig>)pTVar1;
      if (FVar14 != (ForElementType<FMassArchetypeFragmentConfig>)0x0) {
        FVar13 = FVar14;
      }
      *(UScriptStruct **)((longlong)FVar13 + lVar10 * 0x10) = pUVar5;
      sVar2 = *(short *)((longlong)&local_e8->_padding_ + 4);
      lVar16 = lVar16 + sVar2;
      local_e0.Value = (int *)&local_e8;
      uVar12 = uVar12 + (longlong)((int)local_e8->_padding_ + -1 + (int)sVar2 & -(int)sVar2);
      local_d0 = &local_f4;
      TSet<TTuple<UScriptStruct_const_*,int>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UScriptStruct_const_*_const_&,int_const_&>_>
                ((TSet<TTuple<UScriptStruct_const_*,int>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,int,0>,FDefaultSetAllocator>
                  *)&this->FragmentIndexMap,&local_e0,(bool *)&local_e0.Value);
      local_f4 = local_f4 + 1;
    } while ((int)local_f4 < local_c8.ArrayNum);
    if ((0xfffffffe < uVar12) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("FragmentSizeTallyBytes < TNumericLimits<uint32>::Max()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeData.cpp"
                           ,0xa3,L"Single entity\'s size exceeds 2^32. This is not supported."),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar11 = (ulonglong)this->ChunkMemorySize - lVar16;
  this->TotalBytesPerEntity = (uint)uVar12;
  if ((uVar11 < (uVar12 & 0xffffffff)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TotalBytesPerEntity <= ChunkAvailableSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeData.cpp"
                         ,0xa6,
                         L"Single entity\'s size is larger than max chunk size - no entities will be created."
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = (int)(uVar11 / this->TotalBytesPerEntity);
  this->NumEntitiesPerChunk = iVar7;
  FVar14 = (this->FragmentConfigs).AllocatorInstance.SecondaryData;
  iVar3 = (this->FragmentConfigs).ArrayNum;
  iVar7 = iVar7 * 8;
  if (FVar14 == (ForElementType<FMassArchetypeFragmentConfig>)0x0) {
    FVar14 = (ForElementType<FMassArchetypeFragmentConfig>)pTVar1;
  }
  FVar13 = (ForElementType<FMassArchetypeFragmentConfig>)((longlong)iVar3 * 0x10 + (longlong)FVar14)
  ;
  while( true ) {
    if ((this->FragmentConfigs).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FMassArchetypeFragmentConfig,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_f0);
    }
    if (FVar14 == FVar13) break;
    lVar16 = *(longlong *)FVar14;
    uVar15 = iVar7 + -1 + (int)*(short *)(lVar16 + 0x5c) & -(int)*(short *)(lVar16 + 0x5c);
    *(uint *)((longlong)FVar14 + 8) = uVar15;
    iVar7 = (*(short *)(lVar16 + 0x5c) + -1 + *(int *)(lVar16 + 0x58) &
            -(int)*(short *)(lVar16 + 0x5c)) * this->NumEntitiesPerChunk + uVar15;
    FVar14 = (ForElementType<FMassArchetypeFragmentConfig>)((longlong)FVar14 + 0x10);
  }
  if (local_c8.AllocatorInstance.SecondaryData != (ForElementType<UScriptStruct_const_*>)0x0) {
    FMemory::Free((void *)local_c8.AllocatorInstance.SecondaryData);
  }
  return;
}

// DebugGetDescription @ 14720eb30

FString * __thiscall
FMassArchetypeData::DebugGetDescription(FMassArchetypeData *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  FString local_38;
  FOutputDevice local_28;
  FString local_18;
  
  ::FString::FString(&local_18,L"");
  FOutputDevice::FOutputDevice(&local_28);
  local_28._padding_ = (longlong)&___7FStringOutputDevice__6B_;
  local_28.bAutoEmitLineTerminator = false;
  if ((this->DebugNames).ArrayNum != 0) {
    ::FString::FString(&local_38,L"Name: ");
    if (*(code **)(local_28._padding_ + 0x58) == FStringOutputDevice::operator+=) {
      ::FString::Append<FString_const_&,wchar_t>(&local_18,&local_38);
    }
    else {
      (**(code **)(local_28._padding_ + 0x58))(&local_28);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar1 = GetCombinedDebugNamesAsString(this,&local_38);
    if (*(code **)(local_28._padding_ + 0x58) == FStringOutputDevice::operator+=) {
      ::FString::Append<FString_const_&,wchar_t>(&local_18,pFVar1);
    }
    else {
      (**(code **)(local_28._padding_ + 0x58))(&local_28);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    ::FString::FString(&local_38,L"\n");
    if (*(code **)(local_28._padding_ + 0x58) == FStringOutputDevice::operator+=) {
      ::FString::Append<FString_const_&,wchar_t>(&local_18,&local_38);
    }
    else {
      (**(code **)(local_28._padding_ + 0x58))(&local_28);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  ::FString::FString(&local_38,L"Chunk fragments: ");
  if (*(code **)(local_28._padding_ + 0x58) == FStringOutputDevice::operator+=) {
    ::FString::Append<FString_const_&,wchar_t>(&local_18,&local_38);
  }
  else {
    (**(code **)(local_28._padding_ + 0x58))(&local_28);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  TTypeBitSetBase<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassChunkFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
  ::DebugGetStringDesc
            ((TTypeBitSetBase<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassChunkFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
              *)&(this->CompositionDescriptor).ChunkFragments,&local_28);
  ::FString::FString(&local_38,L"\nTags: ");
  if (*(code **)(local_28._padding_ + 0x58) == FStringOutputDevice::operator+=) {
    ::FString::Append<FString_const_&,wchar_t>(&local_18,&local_38);
  }
  else {
    (**(code **)(local_28._padding_ + 0x58))(&local_28);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
  ::DebugGetStringDesc
            ((TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
              *)&(this->CompositionDescriptor).Tags,&local_28);
  ::FString::FString(&local_38,L"\nFragments: ");
  if (*(code **)(local_28._padding_ + 0x58) == FStringOutputDevice::operator+=) {
    ::FString::Append<FString_const_&,wchar_t>(&local_18,&local_38);
  }
  else {
    (**(code **)(local_28._padding_ + 0x58))(&local_28);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
  ::DebugGetStringDesc
            ((TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
              *)this,&local_28);
  ::FString::FString(__return_storage_ptr__,&local_18);
  FOutputDevice::~FOutputDevice(&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// DebugGetEntityMemoryNumbers @ 14720ee30

void __thiscall
FMassArchetypeData::DebugGetEntityMemoryNumbers
          (FMassArchetypeData *this,ulong64 *param_1,ulong64 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = this->ChunkMemorySize;
  iVar2 = GetNonEmptyChunkCount(this);
  *param_1 = (longlong)iVar2 * (ulonglong)uVar1;
  *param_2 = (ulonglong)
             ((*(int *)&(this->EntityMap).field_0x8 - *(int *)&(this->EntityMap).field_0x34) *
             this->TotalBytesPerEntity);
  return;
}

// DebugPrintArchetype @ 14720fde0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMassArchetypeData::DebugPrintArchetype(FMassArchetypeData *this,FOutputDevice *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  uint uVar9;
  ForElementType<FMassArchetypeFragmentConfig> FVar10;
  longlong lVar11;
  ForElementType<FMassArchetypeFragmentConfig> FVar12;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  FName local_res20;
  FString local_98;
  FString local_88;
  FString local_78;
  FOutputDevice local_68;
  FString local_58 [2];
  
  GetCombinedDebugNamesAsString(this,&local_88);
  FOutputDevice::LogfImpl(param_1,Log,L"Name: %s");
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  ::FString::FString(local_58,L"");
  FOutputDevice::FOutputDevice(&local_68);
  local_68.bAutoEmitLineTerminator = false;
  local_68._padding_ = (longlong)&___7FStringOutputDevice__6B_;
  TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
  ::DebugGetStringDesc
            ((TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
              *)&(this->CompositionDescriptor).Tags,&local_68);
  FOutputDevice::LogfImpl(param_1,Log,L"Tags: %s");
  DebugGetDescription(this,&local_78);
  FOutputDevice::LogfImpl(param_1,Log,L"Fragments: %s");
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  FOutputDevice::LogfImpl(param_1,Log,L"\tChunks: %d x %llu KB = %llu KB total");
  iVar1 = (this->Chunks).ArrayNum;
  iVar8 = 0;
  pFVar5 = (this->Chunks).AllocatorInstance.Data;
  pFVar7 = pFVar5 + (longlong)iVar1 * 0x90;
  while( true ) {
    if ((this->Chunks).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMassArchetypeChunk,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar5 == pFVar7) break;
    iVar8 = iVar8 + (uint)(0 < *(int *)(pFVar5 + 0x20));
    pFVar5 = pFVar5 + 0x90;
  }
  if (iVar8 != 0) {
    FOutputDevice::LogfImpl(param_1,Log,L"\tChunks with fragments: %d");
  }
  iVar8 = (this->Chunks).ArrayNum * this->NumEntitiesPerChunk;
  FOutputDevice::LogfImpl(param_1,Log,L"\tEntity Count    : %d");
  FOutputDevice::LogfImpl(param_1,Log,L"\tEntity Capacity : %d");
  iVar1 = (this->Chunks).ArrayNum;
  if (iVar1 < 2) {
    FOutputDevice::LogfImpl(param_1,Log,L"\tEntity Occupancy: %.1f%%");
  }
  else {
    iVar6 = 0;
    uVar9 = 0;
    if (0 < iVar1 + -1) {
      lVar11 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar9 < (this->Chunks).ArrayNum) {
          uVar4 = ~uVar9 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar1 = *(int *)((this->Chunks).AllocatorInstance.Data + lVar11 + 0x10);
        if (iVar1 < iVar8) {
          iVar8 = iVar1;
        }
        if (iVar6 < iVar1) {
          iVar6 = iVar1;
        }
        uVar9 = uVar9 + 1;
        lVar11 = lVar11 + 0x90;
      } while ((int)uVar9 < (this->Chunks).ArrayNum + -1);
    }
    FOutputDevice::LogfImpl(param_1,Log,L"\tEntity Occupancy: %.1f%% (min: %.1f%%, max: %.1f%%)");
  }
  FOutputDevice::LogfImpl(param_1,Log,L"\tBytes / Entity  : %u");
  FOutputDevice::LogfImpl(param_1,Log,L"\tEntities / Chunk: %d");
  FOutputDevice::LogfImpl(param_1,Log,L"\tOffset 0x%04X: Entity[] (%llu bytes each)");
  FVar10 = (this->FragmentConfigs).AllocatorInstance.SecondaryData;
  iVar1 = (this->FragmentConfigs).ArrayNum;
  iVar8 = this->NumEntitiesPerChunk << 3;
  if (FVar10 == (ForElementType<FMassArchetypeFragmentConfig>)0x0) {
    FVar10 = (ForElementType<FMassArchetypeFragmentConfig>)&this->FragmentConfigs;
  }
  FVar12 = (ForElementType<FMassArchetypeFragmentConfig>)((longlong)iVar1 * 0x10 + (longlong)FVar10)
  ;
  while( true ) {
    if ((this->FragmentConfigs).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FMassArchetypeFragmentConfig,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (FVar10 == FVar12) break;
    lVar11 = *(longlong *)FVar10;
    iVar8 = iVar8 + (*(int *)(lVar11 + 0x58) + -1 + (int)*(short *)(lVar11 + 0x5c) &
                    ~((int)*(short *)(lVar11 + 0x5c) - 1U)) * this->NumEntitiesPerChunk;
    local_res20 = *(FName *)(lVar11 + 0x18);
    ::FName::ToString(&local_res20,&local_98);
    FOutputDevice::LogfImpl(param_1,Log,L"\tOffset 0x%04X: %s[] (%d bytes each)");
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    FVar10 = (ForElementType<FMassArchetypeFragmentConfig>)((longlong)FVar10 + 0x10);
  }
  lVar11 = (ulonglong)this->ChunkMemorySize -
           (ulonglong)(this->NumEntitiesPerChunk * this->TotalBytesPerEntity);
  if (lVar11 != 0) {
    FOutputDevice::LogfImpl(param_1,Log,L"\tOffset 0x%04llX: WastePadding[] (%llu bytes total)");
  }
  if ((ulonglong)this->ChunkMemorySize != iVar8 + lVar11) {
    FOutputDevice::LogfImpl
              (param_1,Log,L"\t@TODO: EXTRA PADDING HERE:  TotalBytesOfValidData: %d (%llu missing)"
              );
  }
  FOutputDevice::~FOutputDevice(&local_68);
  if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
  }
  return;
}

// DebugPrintEntity @ 1472106c0

void __thiscall
FMassArchetypeData::DebugPrintEntity
          (FMassArchetypeData *this,FMassEntityHandle param_1,FOutputDevice *param_2,
          wchar_t *param_3)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  ForElementType<FMassArchetypeFragmentConfig> FVar5;
  ForElementType<FMassArchetypeFragmentConfig> FVar6;
  FName local_res8;
  FString local_58;
  FString local_48;
  size_t sVar4;
  
  FVar6 = (this->FragmentConfigs).AllocatorInstance.SecondaryData;
  iVar1 = (this->FragmentConfigs).ArrayNum;
  if (FVar6 == (ForElementType<FMassArchetypeFragmentConfig>)0x0) {
    FVar6 = (ForElementType<FMassArchetypeFragmentConfig>)&this->FragmentConfigs;
  }
  FVar5 = (ForElementType<FMassArchetypeFragmentConfig>)((longlong)iVar1 * 0x10 + (longlong)FVar6);
  while( true ) {
    if ((this->FragmentConfigs).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FMassArchetypeFragmentConfig_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (FVar6 == FVar5) break;
    pvVar3 = GetFragmentDataForEntityChecked(this,*(UScriptStruct **)FVar6,param_1.Index);
    local_res8 = *(FName *)(*(longlong *)FVar6 + 0x18);
    ::FName::ToString(&local_res8,&local_48);
    if (param_3 == (wchar_t *)0x0) {
      iVar2 = 0;
    }
    else {
      sVar4 = wcslen(param_3);
      iVar2 = (int)sVar4;
    }
    ::FString::RemoveFromStart(&local_48,param_3,iVar2,IgnoreCase);
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    UScriptStruct::ExportText
              (*(UScriptStruct **)FVar6,&local_58,pvVar3,(void *)0x0,(UObject *)0x0,0x20000,
               (UObject *)0x0,true);
    FOutputDevice::LogfImpl(param_2,L"%s: %s");
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    FVar6 = (ForElementType<FMassArchetypeFragmentConfig>)((longlong)FVar6 + 0x10);
  }
  return;
}

// ExecuteFunction @ 147216bd0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassArchetypeData::ExecuteFunction
          (FMassArchetypeData *this,FMassExecutionContext *param_1,
          TFunction<void___cdecl(FMassExecutionContext_&)> *param_2,
          FMassQueryRequirementIndicesMapping *param_3,
          TFunction<bool___cdecl(FMassExecutionContext_const_&)> *param_4,FExecutionLimiter *param_5
          )

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong *plVar8;
  uint uVar9;
  FMassArchetypeChunk *pFVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int local_res8;
  uint local_48;
  
  if (*(int *)&(this->EntityMap).field_0x8 != *(int *)&(this->EntityMap).field_0x34) {
    FMassArchetypeCompositionDescriptor::operator=
              (&param_1->CurrentArchetypeCompositionDescriptor,&this->CompositionDescriptor);
    uVar9 = 0;
    (param_1->DebugColor).field0_0x0 = (this->DebugColor).field0_0x0;
    iVar11 = (this->Chunks).ArrayNum;
    local_res8 = 0x7fffffff;
    iVar7 = iVar11;
    if (param_5 != (FExecutionLimiter *)0x0) {
      local_res8 = param_5->EntityCountRemaining;
      uVar9 = 0;
      if (0 < param_5->ChunkIndex) {
        uVar9 = param_5->ChunkIndex;
      }
      iVar7 = param_5->MaxChunkIndex;
      if (iVar11 < param_5->MaxChunkIndex) {
        iVar7 = iVar11;
      }
    }
    lVar13 = (longlong)(int)uVar9;
    local_48 = 0xffffffff;
    iVar11 = local_res8;
    if (lVar13 < iVar7) {
      lVar12 = lVar13 * 0x90;
      do {
        if (iVar11 < 1) break;
        uVar5 = 0;
        if ((int)uVar9 < (this->Chunks).ArrayNum) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , iVar11 = local_res8, bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar10 = (FMassArchetypeChunk *)((this->Chunks).AllocatorInstance.Data + lVar12);
        iVar1 = pFVar10->NumInstances;
        if (iVar1 != 0) {
          uVar5 = (pFVar10->SharedFragmentValues).HashCache;
          if (uVar5 == 0xffffffff) {
            uVar5 = FMassArchetypeSharedFragmentValues::CalculateHash
                              (&pFVar10->SharedFragmentValues);
            (pFVar10->SharedFragmentValues).HashCache = uVar5;
          }
          if (local_48 != uVar5) {
            BindConstSharedFragmentRequirements
                      (this,param_1,&pFVar10->SharedFragmentValues,&param_3->ConstSharedFragments);
            BindSharedFragmentRequirements
                      (this,param_1,&pFVar10->SharedFragmentValues,&param_3->SharedFragments);
            local_48 = uVar5;
          }
          param_1->ChunkSerialModificationNumber = pFVar10->SerialModificationNumber;
          BindChunkFragmentRequirements(this,param_1,&param_3->ChunkFragments,pFVar10);
          if (*(void **)param_4 != (void *)0x0) {
            UE::Core::Private::Function::CheckCallable(*(void **)param_4);
            pcVar2 = *(code **)param_4;
            plVar8 = *(longlong **)&param_4->field_0x28;
            if (*(longlong **)&param_4->field_0x28 == (longlong *)0x0) {
              plVar8 = (longlong *)&param_4->field_0x10;
            }
            uVar6 = (**(code **)(*plVar8 + 8))();
            cVar4 = (*pcVar2)(uVar6,param_1);
            iVar11 = local_res8;
            if (cVar4 == '\0') goto LAB_147216e24;
          }
          BindEntityRequirements
                    (this,param_1,&param_3->EntityFragments,pFVar10,0,pFVar10->NumInstances);
          UE::Core::Private::Function::CheckCallable(*(void **)param_2);
          pcVar2 = *(code **)param_2;
          plVar8 = *(longlong **)&param_2->field_0x28;
          if (*(longlong **)&param_2->field_0x28 == (longlong *)0x0) {
            plVar8 = (longlong *)&param_2->field_0x10;
          }
          uVar6 = (**(code **)(*plVar8 + 8))();
          (*pcVar2)(uVar6,param_1);
          local_res8 = local_res8 - iVar1;
          iVar11 = local_res8;
        }
LAB_147216e24:
        uVar9 = uVar9 + 1;
        lVar13 = lVar13 + 1;
        lVar12 = lVar12 + 0x90;
      } while (lVar13 < iVar7);
    }
    if (param_5 != (FExecutionLimiter *)0x0) {
      param_5->EntityCountRemaining = iVar11;
      param_5->ChunkIndex = uVar9 + 1;
    }
  }
  return;
}

// ExecuteFunction @ 147216e80

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassArchetypeData::ExecuteFunction
          (FMassArchetypeData *this,FMassExecutionContext *param_1,
          TFunction<void___cdecl(FMassExecutionContext_&)> *param_2,
          FMassQueryRequirementIndicesMapping *param_3,
          TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> *param_4,
          TFunction<bool___cdecl(FMassExecutionContext_const_&)> *param_5)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  FArchetypeEntityRange *pFVar6;
  undefined8 uVar7;
  longlong *plVar8;
  FMassArchetypeChunk *pFVar9;
  int iVar10;
  int iVar11;
  uint local_res8;
  TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> local_58;
  int local_48;
  
  if (*(int *)&(this->EntityMap).field_0x8 != *(int *)&(this->EntityMap).field_0x34) {
    FMassArchetypeCompositionDescriptor::operator=
              (&param_1->CurrentArchetypeCompositionDescriptor,&this->CompositionDescriptor);
    iVar10 = 0;
    (param_1->DebugColor).field0_0x0 = (this->DebugColor).field0_0x0;
    local_res8 = 0xffffffff;
    local_58.DataPtr = param_4->DataPtr;
    local_58.ArrayNum = param_4->ArrayNum;
    local_58._12_4_ = *(undefined4 *)&param_4->field_0xc;
    while ((((-1 < iVar10 && (iVar10 < local_58.ArrayNum)) &&
            (local_48 = iVar10,
            pFVar6 = TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int>::
                     operator[](&local_58,iVar10), pFVar6->ChunkIndex != -1)) &&
           (-1 < pFVar6->SubchunkStart))) {
      pFVar6 = TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int>::
               operator[](&local_58,iVar10);
      if (((pFVar6->ChunkIndex == -1) || (pFVar6->SubchunkStart < 0)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("bool(*this)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassArchetypeTypes.h"
                             ,0x115,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar6 = TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int>::
               operator[](&local_58,iVar10);
      uVar5 = pFVar6->ChunkIndex;
      uVar4 = 0;
      if ((int)uVar5 < (this->Chunks).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar9 = (FMassArchetypeChunk *)
               ((this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x90);
      if (((((iVar10 < 0) || (local_58.ArrayNum <= iVar10)) ||
           (pFVar6 = TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int>::
                     operator[](&local_58,iVar10), pFVar6->ChunkIndex == -1)) ||
          (pFVar6->SubchunkStart < 0)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("bool(*this)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassArchetypeTypes.h"
                             ,0x115,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar6 = TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int>::
               operator[](&local_58,iVar10);
      if (pFVar6->Length < 1) {
        if ((((iVar10 < 0) || (local_58.ArrayNum <= iVar10)) ||
            ((pFVar6 = TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int>
                       ::operator[](&local_58,iVar10), pFVar6->ChunkIndex == -1 ||
             (pFVar6->SubchunkStart < 0)))) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("bool(*this)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassArchetypeTypes.h"
                               ,0x115,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar6 = TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int>::
                 operator[](&local_58,iVar10);
        iVar11 = pFVar9->NumInstances - pFVar6->SubchunkStart;
      }
      else {
        if ((((iVar10 < 0) || (local_58.ArrayNum <= iVar10)) ||
            ((pFVar6 = TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int>
                       ::operator[](&local_58,iVar10), pFVar6->ChunkIndex == -1 ||
             (pFVar6->SubchunkStart < 0)))) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("bool(*this)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassArchetypeTypes.h"
                               ,0x115,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar6 = TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int>::
                 operator[](&local_58,iVar10);
        iVar11 = pFVar6->Length;
      }
      if (iVar11 != 0) {
        uVar5 = (pFVar9->SharedFragmentValues).HashCache;
        if (uVar5 == 0xffffffff) {
          uVar5 = FMassArchetypeSharedFragmentValues::CalculateHash(&pFVar9->SharedFragmentValues);
          (pFVar9->SharedFragmentValues).HashCache = uVar5;
        }
        if (local_res8 != uVar5) {
          BindConstSharedFragmentRequirements
                    (this,param_1,&pFVar9->SharedFragmentValues,&param_3->ConstSharedFragments);
          BindSharedFragmentRequirements
                    (this,param_1,&pFVar9->SharedFragmentValues,&param_3->SharedFragments);
          local_res8 = uVar5;
        }
        if (((((iVar10 < 0) || (local_58.ArrayNum <= iVar10)) ||
             (pFVar6 = TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int>
                       ::operator[](&local_58,iVar10), pFVar6->ChunkIndex == -1)) ||
            (pFVar6->SubchunkStart < 0)) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("bool(*this)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassArchetypeTypes.h"
                               ,0x115,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar6 = TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int>::
                 operator[](&local_58,iVar10);
        if (((pFVar9->NumInstances < pFVar6->SubchunkStart + iVar11) || (iVar11 < 1)) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ChunkIterator->SubchunkStart + SubchunkLength) <= Chunk.GetNumInstances() && SubchunkLength > 0"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeData.cpp"
                               ,0x20c,
                               L"Invalid subchunk, it is going over the number of instances in the chunk or it is empty."
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        param_1->ChunkSerialModificationNumber = pFVar9->SerialModificationNumber;
        BindChunkFragmentRequirements(this,param_1,&param_3->ChunkFragments,pFVar9);
        if (*(void **)param_5 != (void *)0x0) {
          UE::Core::Private::Function::CheckCallable(*(void **)param_5);
          pcVar1 = *(code **)param_5;
          plVar8 = *(longlong **)&param_5->field_0x28;
          if (*(longlong **)&param_5->field_0x28 == (longlong *)0x0) {
            plVar8 = (longlong *)&param_5->field_0x10;
          }
          uVar7 = (**(code **)(*plVar8 + 8))();
          cVar3 = (*pcVar1)(uVar7,param_1);
          if (cVar3 == '\0') goto LAB_1472172b2;
        }
        if ((((iVar10 < 0) || (local_58.ArrayNum <= iVar10)) ||
            ((pFVar6 = TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int>
                       ::operator[](&local_58,iVar10), pFVar6->ChunkIndex == -1 ||
             (pFVar6->SubchunkStart < 0)))) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("bool(*this)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassArchetypeTypes.h"
                               ,0x115,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar6 = TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int>::
                 operator[](&local_58,iVar10);
        BindEntityRequirements
                  (this,param_1,&param_3->EntityFragments,pFVar9,pFVar6->SubchunkStart,iVar11);
        UE::Core::Private::Function::CheckCallable(*(void **)param_2);
        pcVar1 = *(code **)param_2;
        plVar8 = *(longlong **)&param_2->field_0x28;
        if (*(longlong **)&param_2->field_0x28 == (longlong *)0x0) {
          plVar8 = (longlong *)&param_2->field_0x10;
        }
        uVar7 = (**(code **)(*plVar8 + 8))();
        (*pcVar1)(uVar7,param_1);
      }
LAB_1472172b2:
      iVar10 = iVar10 + 1;
    }
  }
  return;
}

// ExecutionFunctionForChunk @ 147218b60

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassArchetypeData::ExecutionFunctionForChunk
          (FMassArchetypeData *this,FMassExecutionContext *param_1,
          TFunction<void___cdecl(FMassExecutionContext_&)> *param_2,
          FMassQueryRequirementIndicesMapping *param_3,FArchetypeEntityRange *param_4,
          TFunction<bool___cdecl(FMassExecutionContext_const_&)> *param_5)

{
  undefined4 uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  FMassArchetypeChunk *pFVar9;
  int iVar10;
  
  uVar2 = param_4->ChunkIndex;
  uVar6 = 0;
  if ((int)uVar2 < (this->Chunks).ArrayNum) {
    uVar6 = ~uVar2 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar1 = param_4->SubchunkStart;
  iVar10 = param_4->Length;
  pFVar9 = (FMassArchetypeChunk *)
           ((this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x90);
  if ((0 < iVar10) || (iVar10 = pFVar9->NumInstances - uVar1, 0 < iVar10)) {
    BindConstSharedFragmentRequirements
              (this,param_1,&pFVar9->SharedFragmentValues,&param_3->ConstSharedFragments);
    BindSharedFragmentRequirements
              (this,param_1,&pFVar9->SharedFragmentValues,&param_3->SharedFragments);
    FMassArchetypeCompositionDescriptor::operator=
              (&param_1->CurrentArchetypeCompositionDescriptor,&this->CompositionDescriptor);
    param_1->ChunkSerialModificationNumber = pFVar9->SerialModificationNumber;
    (param_1->DebugColor).field0_0x0 = (this->DebugColor).field0_0x0;
    BindChunkFragmentRequirements(this,param_1,&param_3->ChunkFragments,pFVar9);
    if (*(void **)param_5 != (void *)0x0) {
      UE::Core::Private::Function::CheckCallable(*(void **)param_5);
      pcVar3 = *(code **)param_5;
      plVar8 = (longlong *)&param_5->field_0x10;
      if (*(longlong **)&param_5->field_0x28 != (longlong *)0x0) {
        plVar8 = *(longlong **)&param_5->field_0x28;
      }
      uVar7 = (**(code **)(*plVar8 + 8))();
      cVar5 = (*pcVar3)(uVar7,param_1);
      if (cVar5 == '\0') {
        return;
      }
    }
    BindEntityRequirements
              (this,param_1,&param_3->EntityFragments,pFVar9,param_4->SubchunkStart,iVar10);
    UE::Core::Private::Function::CheckCallable(*(void **)param_2);
    pcVar3 = *(code **)param_2;
    plVar8 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar8 = *(longlong **)&param_2->field_0x28;
    }
    uVar7 = (**(code **)(*plVar8 + 8))();
    (*pcVar3)(uVar7,param_1);
  }
  return;
}

// ExportEntityHandles @ 147218d30

void __thiscall
FMassArchetypeData::ExportEntityHandles
          (FMassArchetypeData *this,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  void *_Src;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Chunks).ArrayNum;
  pFVar6 = (this->Chunks).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x90;
  while( true ) {
    if ((this->Chunks).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMassArchetypeChunk_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar7) break;
    iVar2 = *(int *)(pFVar6 + 0x10);
    _Src = (void *)((longlong)this->EntityListOffsetWithinChunk + *(longlong *)pFVar6);
    if ((_Src == (void *)0x0) && (iVar2 != 0)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr != nullptr || Count == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x9c1,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar2,&param_1->AllocatorInstance,&param_1->ArrayNum,&param_1->ArrayMax);
    if (iVar2 != 0) {
      memcpy((param_1->AllocatorInstance).Data + (longlong)iVar5 * 8,_Src,(longlong)iVar2 << 3);
    }
    pFVar6 = pFVar6 + 0x90;
  }
  return;
}

// ExportEntityHandles @ 147218e30

void __thiscall
FMassArchetypeData::ExportEntityHandles
          (FMassArchetypeData *this,
          TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> *param_1,
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *param_2)

{
  FArchetypeEntityRange *pFVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  FArchetypeEntityRange *pFVar11;
  int iVar12;
  uint uVar13;
  
  pFVar11 = param_1->DataPtr;
  iVar12 = 0;
  pFVar1 = pFVar11 + param_1->ArrayNum;
  for (; pFVar11 != pFVar1; pFVar11 = pFVar11 + 1) {
    if (((pFVar11->ChunkIndex < 0) || ((this->Chunks).ArrayNum <= pFVar11->ChunkIndex)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Chunks.IsValidIndex(Range.ChunkIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeData.cpp"
                           ,0x3b7,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = pFVar11->Length;
    if (iVar8 < 1) {
      uVar13 = pFVar11->ChunkIndex;
      uVar7 = 0;
      if ((int)uVar13 < (this->Chunks).ArrayNum) {
        uVar7 = ~uVar13 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = *(int *)((this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x90 + 0x10)
              - pFVar11->SubchunkStart;
    }
    iVar12 = iVar12 + iVar8;
  }
  uVar13 = param_2->ArrayNum;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar12,&param_2->AllocatorInstance,&param_2->ArrayNum,&param_2->ArrayMax);
  pFVar11 = param_1->DataPtr;
  pFVar1 = pFVar11 + param_1->ArrayNum;
  while( true ) {
    if (pFVar11 == pFVar1) {
      return;
    }
    uVar7 = pFVar11->ChunkIndex;
    uVar9 = 0;
    if ((int)uVar7 < (this->Chunks).ArrayNum) {
      uVar9 = ~uVar7 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    iVar12 = this->EntityListOffsetWithinChunk;
    uVar2 = pFVar11->SubchunkStart;
    iVar8 = pFVar11->Length;
    pFVar10 = (this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x90;
    lVar4 = *(longlong *)pFVar10;
    if (iVar8 < 1) {
      iVar8 = *(int *)(pFVar10 + 0x10) - uVar2;
    }
    iVar3 = pFVar11->SubchunkStart;
    uVar7 = 0;
    if ((int)uVar13 < param_2->ArrayNum) {
      uVar7 = ~uVar13 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    memcpy((param_2->AllocatorInstance).Data + (longlong)(int)uVar13 * 8,
           (void *)(iVar12 + lVar4 + (longlong)iVar3 * 8),(longlong)iVar8 << 3);
    uVar13 = uVar13 + iVar8;
    pFVar11 = pFVar11 + 1;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// ForEachFragmentType @ 14721d130

void __thiscall
FMassArchetypeData::ForEachFragmentType
          (FMassArchetypeData *this,TFunction<void___cdecl(UScriptStruct_const_*)> *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ForElementType<FMassArchetypeFragmentConfig> FVar5;
  ForElementType<FMassArchetypeFragmentConfig> FVar6;
  undefined1 local_38 [8];
  undefined8 local_30;
  
  FVar6 = (this->FragmentConfigs).AllocatorInstance.SecondaryData;
  iVar1 = (this->FragmentConfigs).ArrayNum;
  if (FVar6 == (ForElementType<FMassArchetypeFragmentConfig>)0x0) {
    FVar6 = (ForElementType<FMassArchetypeFragmentConfig>)&this->FragmentConfigs;
  }
  FVar5 = (ForElementType<FMassArchetypeFragmentConfig>)((longlong)iVar1 * 0x10 + (longlong)FVar6);
  while( true ) {
    if ((this->FragmentConfigs).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FMassArchetypeFragmentConfig_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_38);
    }
    if (FVar6 == FVar5) break;
    local_30 = *(undefined8 *)FVar6;
    UE::Core::Private::Function::CheckCallable(*(void **)param_1);
    pcVar2 = *(code **)param_1;
    plVar4 = *(longlong **)&param_1->field_0x28;
    if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
      plVar4 = (longlong *)&param_1->field_0x10;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(uVar3,&local_30);
    FVar6 = (ForElementType<FMassArchetypeFragmentConfig>)((longlong)FVar6 + 0x10);
  }
  if (*(longlong *)param_1 != 0) {
    plVar4 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return;
}

// GetAllocatedSize @ 14721e710

ulong64 __thiscall FMassArchetypeData::GetAllocatedSize(FMassArchetypeData *this)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = GetNonEmptyChunkCount(this);
  uVar1 = (this->FragmentConfigs).ArrayMax;
  lVar3 = (longlong)(this->ChunkFragmentsTemplate).ArrayMax;
  if (0x10 < uVar1) {
    lVar3 = (int)uVar1 + lVar3;
  }
  lVar4 = 0;
  uVar1 = *(uint *)&(this->EntityMap).field_0x48;
  lVar5 = lVar4;
  if (1 < uVar1) {
    lVar5 = (longlong)(int)uVar1 << 2;
  }
  uVar1 = *(uint *)&(this->FragmentIndexMap).field_0x48;
  if (1 < uVar1) {
    lVar4 = (longlong)(int)uVar1 << 2;
  }
  return (*(int *)&(this->EntityMap).field_0xc + lVar3) * 0x10 +
         (ulonglong)((*(int *)&(this->FragmentIndexMap).field_0x2c + 0x1fU >> 5) << 2) +
         (longlong)(this->Chunks).ArrayMax * 0x90 +
         (longlong)*(int *)&(this->FragmentIndexMap).field_0xc * 0x18 +
         (longlong)iVar2 * (ulonglong)this->ChunkMemorySize + lVar5 +
         (ulonglong)((*(int *)&(this->EntityMap).field_0x2c + 0x1fU >> 5) << 2) + 0x2d8 + lVar4;
}

// GetCombinedDebugNamesAsString @ 14721fce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FMassArchetypeData::GetCombinedDebugNamesAsString
          (FMassArchetypeData *this,FString *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  void *pvVar6;
  FString *pFVar7;
  ulong64 uVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_2a8 [32];
  longlong local_288;
  longlong local_280;
  FString local_278;
  TStringBuilderBase<wchar_t> local_268;
  wchar_t local_248 [256];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_2a8;
  local_268.Base = local_248;
  local_268.CurPos = local_248;
  local_268.bIsDynamic = false;
  local_268.bIsExternal = false;
  local_268.End = (wchar_t *)local_48;
  uVar9 = 0;
  if (0 < (this->DebugNames).ArrayNum) {
    do {
      if (0 < (int)uVar9) {
        if (local_268.End < local_268.CurPos + 2) {
          TStringBuilderBase<wchar_t>::Extend(&local_268,2);
        }
        pvVar6 = FGenericPlatformString::Memcpy(local_268.CurPos,L", ",4);
        local_268.CurPos = (wchar_t *)((longlong)pvVar6 + 4);
      }
      iVar10 = (this->DebugNames).ArrayNum;
      uVar5 = 0;
      if ((int)uVar9 < iVar10) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_288 = (longlong)(int)uVar9;
        local_280 = (longlong)iVar10;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FString *)(*pcVar3)();
          return pFVar7;
        }
      }
      pFVar7 = ::FName::ToString((FName *)((this->DebugNames).AllocatorInstance.Data +
                                          (longlong)(int)uVar9 * 8),&local_278);
      iVar1 = (pFVar7->Data).ArrayNum;
      pFVar2 = (pFVar7->Data).AllocatorInstance.Data;
      iVar10 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar10 = 0;
      }
      uVar8 = (ulong64)iVar10;
      if (local_268.End < local_268.CurPos + uVar8) {
        TStringBuilderBase<wchar_t>::Extend(&local_268,uVar8);
      }
      if (iVar10 != 0) {
        pvVar6 = FGenericPlatformString::Memcpy(local_268.CurPos,pFVar2,uVar8 * 2);
        local_268.CurPos = (wchar_t *)((longlong)pvVar6 + uVar8 * 2);
      }
      if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_278.Data.AllocatorInstance.Data);
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (this->DebugNames).ArrayNum);
  }
  if (local_268.End < local_268.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_268,1);
  }
  *local_268.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_268.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_268);
  return __return_storage_ptr__;
}

// GetFragmentDataForEntity @ 147221b10

void * __thiscall
FMassArchetypeData::GetFragmentDataForEntity
          (FMassArchetypeData *this,UScriptStruct *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  TTuple<UScriptStruct_const_*,int> *pTVar8;
  int *piVar9;
  void *pvVar10;
  int iVar11;
  ForElementType<FMassArchetypeFragmentConfig> FVar12;
  uint uVar13;
  uint *puVar14;
  longlong *plVar15;
  
  pTVar8 = TSet<TTuple<UScriptStruct_const_*,int>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UScriptStruct_const_*,int>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,int,0>,FDefaultSetAllocator>
                   *)&this->FragmentIndexMap,param_1);
  puVar14 = (uint *)&pTVar8->field_0x8;
  if (pTVar8 == (TTuple<UScriptStruct_const_*,int> *)0x0) {
    puVar14 = (uint *)0x0;
  }
  if (puVar14 != (uint *)0x0) {
    piVar9 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
             FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                          *)&this->EntityMap,param_2);
    iVar1 = *piVar9;
    uVar7 = iVar1 / this->NumEntitiesPerChunk;
    uVar13 = 0;
    if ((int)uVar7 < (this->Chunks).ArrayNum) {
      uVar13 = ~uVar7 >> 0x1f;
    }
    if (uVar13 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pvVar10 = (void *)(*pcVar5)();
        return pvVar10;
      }
    }
    uVar13 = *puVar14;
    lVar3 = *(longlong *)((this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x90);
    iVar2 = this->NumEntitiesPerChunk;
    uVar7 = 0;
    if ((int)uVar13 < (this->FragmentConfigs).ArrayNum) {
      uVar7 = ~uVar13 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pvVar10 = (void *)(*pcVar5)();
        return pvVar10;
      }
    }
    FVar12 = (this->FragmentConfigs).AllocatorInstance.SecondaryData;
    if (FVar12 == (ForElementType<FMassArchetypeFragmentConfig>)0x0) {
      FVar12 = (ForElementType<FMassArchetypeFragmentConfig>)&this->FragmentConfigs;
    }
    plVar15 = (longlong *)((longlong)(int)uVar13 * 0x10 + (longlong)FVar12);
    lVar4 = *plVar15;
    iVar11 = (int)*(short *)(lVar4 + 0x5c);
    return (void *)((longlong)(int)plVar15[1] +
                   (*(int *)(lVar4 + 0x58) + -1 + iVar11 & -iVar11) * (iVar1 % iVar2) + lVar3);
  }
  return (void *)0x0;
}

// GetFragmentDataForEntityChecked @ 147221ca0

void * __thiscall
FMassArchetypeData::GetFragmentDataForEntityChecked
          (FMassArchetypeData *this,UScriptStruct *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int *piVar8;
  void *pvVar9;
  TTuple<UScriptStruct_const_*,int> *pTVar10;
  int iVar11;
  ForElementType<FMassArchetypeFragmentConfig> FVar12;
  uint uVar13;
  longlong *plVar14;
  
  piVar8 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
           FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                        *)&this->EntityMap,param_2);
  iVar1 = *piVar8;
  uVar7 = iVar1 / this->NumEntitiesPerChunk;
  uVar13 = 0;
  if ((int)uVar7 < (this->Chunks).ArrayNum) {
    uVar13 = ~uVar7 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pvVar9 = (void *)(*pcVar5)();
      return pvVar9;
    }
  }
  lVar3 = *(longlong *)((this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x90);
  iVar2 = this->NumEntitiesPerChunk;
  pTVar10 = TSet<TTuple<UScriptStruct_const_*,int>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,int,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<UScriptStruct_const_*,int>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,int,0>,FDefaultSetAllocator>
                    *)&this->FragmentIndexMap,param_1);
  if (pTVar10 == (TTuple<UScriptStruct_const_*,int> *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pvVar9 = (void *)(*pcVar5)();
      return pvVar9;
    }
  }
  uVar13 = *(uint *)&pTVar10->field_0x8;
  uVar7 = 0;
  if ((int)uVar13 < (this->FragmentConfigs).ArrayNum) {
    uVar7 = ~uVar13 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pvVar9 = (void *)(*pcVar5)();
      return pvVar9;
    }
  }
  FVar12 = (this->FragmentConfigs).AllocatorInstance.SecondaryData;
  if (FVar12 == (ForElementType<FMassArchetypeFragmentConfig>)0x0) {
    FVar12 = (ForElementType<FMassArchetypeFragmentConfig>)&this->FragmentConfigs;
  }
  plVar14 = (longlong *)((longlong)(int)uVar13 * 0x10 + (longlong)FVar12);
  lVar4 = *plVar14;
  iVar11 = (int)*(short *)(lVar4 + 0x5c);
  return (void *)((longlong)(int)plVar14[1] +
                 (*(int *)(lVar4 + 0x58) + -1 + iVar11 & -iVar11) * (iVar1 % iVar2) + lVar3);
}

// GetNonEmptyChunkCount @ 147223550

int __thiscall FMassArchetypeData::GetNonEmptyChunkCount(FMassArchetypeData *this)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Chunks).ArrayNum;
  iVar5 = 0;
  pFVar3 = (this->Chunks).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x90;
  while( true ) {
    if ((this->Chunks).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FMassArchetypeChunk_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    iVar2 = iVar5 + 1;
    if (*(longlong *)pFVar3 == 0) {
      iVar2 = iVar5;
    }
    iVar5 = iVar2;
    pFVar3 = pFVar3 + 0x90;
  }
  return iVar5;
}

// GetOrAddChunk @ 147223900

FMassArchetypeChunk * __thiscall
FMassArchetypeData::GetOrAddChunk
          (FMassArchetypeData *this,FMassArchetypeSharedFragmentValues *param_1,int *param_2,
          int *param_3)

{
  int *piVar1;
  TArray<FMassArchetypeChunk,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FInstancedStruct *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  FMassArchetypeChunk *pFVar11;
  FMassArchetypeSharedFragmentValues *pFVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  FMassArchetypeChunk *pFVar16;
  uint uVar17;
  undefined1 local_res18 [8];
  int *local_res20;
  int local_f8;
  undefined4 uStack_dc;
  undefined4 uStack_cc;
  TArrayView<FInstancedStruct_const_,int> local_c8;
  TArrayView<FInstancedStruct_const_,int> local_b8;
  FMassArchetypeSharedFragmentValues local_a8;
  
  *param_2 = 0;
  uVar15 = 0xffffffff;
  *param_3 = 0;
  pFVar11 = (FMassArchetypeChunk *)(this->Chunks).AllocatorInstance.Data;
  uVar14 = (this->Chunks).ArrayNum;
  uVar13 = (ulonglong)(int)uVar14;
  uVar17 = 0;
  local_f8 = -1;
  pFVar16 = pFVar11 + uVar13;
  local_res20 = param_3;
  do {
    if ((this->Chunks).ArrayNum != (int)uVar13) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FMassArchetypeChunk,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar11 == pFVar16) goto LAB_147223a26;
    if (pFVar11->NumInstances == 0) {
      if (uVar15 == 0xffffffff) {
        local_f8 = *param_2;
        uVar15 = uVar17;
      }
    }
    else if (pFVar11->NumInstances < this->NumEntitiesPerChunk) {
      uVar8 = (pFVar11->SharedFragmentValues).HashCache;
      if (uVar8 == 0xffffffff) {
        uVar8 = FMassArchetypeSharedFragmentValues::CalculateHash(&pFVar11->SharedFragmentValues);
        (pFVar11->SharedFragmentValues).HashCache = uVar8;
      }
      uVar9 = param_1->HashCache;
      if (uVar9 == 0xffffffff) {
        uVar9 = FMassArchetypeSharedFragmentValues::CalculateHash(param_1);
        param_1->HashCache = uVar9;
      }
      if (uVar8 == uVar9) {
        iVar10 = pFVar11->NumInstances;
        *local_res20 = iVar10;
        *param_2 = *param_2 + iVar10;
        if (pFVar11 == (FMassArchetypeChunk *)0x0) {
LAB_147223a26:
          pTVar2 = &this->Chunks;
          if (uVar15 == 0xffffffff) {
            iVar10 = (this->Chunks).ArrayNum;
            piVar1 = &(this->Chunks).ArrayMax;
            uVar14 = this->ChunkMemorySize;
            if (iVar10 == *piVar1) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x890,&pTVar2->AllocatorInstance,piVar1);
            }
            (this->Chunks).ArrayNum = iVar10 + 1;
            pFVar5 = (pTVar2->AllocatorInstance).Data;
            pFVar12 = FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues
                                (&local_a8,param_1);
            local_b8.DataPtr =
                 (FInstancedStruct *)(this->ChunkFragmentsTemplate).AllocatorInstance.Data;
            iVar3 = (this->ChunkFragmentsTemplate).ArrayNum;
            if ((iVar3 < 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              pFVar11 = (FMassArchetypeChunk *)(*pcVar6)();
              return pFVar11;
            }
            local_b8._12_4_ = uStack_cc;
            local_b8.ArrayNum = iVar3;
            pFVar11 = FMassArchetypeChunk::FMassArchetypeChunk
                                ((FMassArchetypeChunk *)(pFVar5 + (longlong)iVar10 * 0x90),
                                 (ulonglong)uVar14,&local_b8,pFVar12);
          }
          else {
            uVar14 = 0;
            if ((int)uVar15 < (this->Chunks).ArrayNum) {
              uVar14 = ~uVar15 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              pFVar11 = (FMassArchetypeChunk *)(*pcVar6)();
              return pFVar11;
            }
            pFVar4 = (FInstancedStruct *)(this->ChunkFragmentsTemplate).AllocatorInstance.Data;
            pFVar11 = (FMassArchetypeChunk *)
                      ((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar15 * 0x90);
            iVar10 = (this->ChunkFragmentsTemplate).ArrayNum;
            if ((iVar10 < 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              pFVar11 = (FMassArchetypeChunk *)(*pcVar6)();
              return pFVar11;
            }
            local_c8._12_4_ = uStack_dc;
            local_c8.ArrayNum = iVar10;
            local_c8.DataPtr = pFVar4;
            FMassArchetypeChunk::Recycle(pFVar11,&local_c8,param_1);
            *param_2 = local_f8;
          }
          if ((pFVar11 == (FMassArchetypeChunk *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("DestinationChunk",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeData.cpp"
                                 ,0x109,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            pFVar11 = (FMassArchetypeChunk *)(*pcVar6)();
            return pFVar11;
          }
        }
        return pFVar11;
      }
    }
    uVar17 = uVar17 + 1;
    *param_2 = *param_2 + this->NumEntitiesPerChunk;
    uVar13 = (ulonglong)uVar14;
    pFVar11 = pFVar11 + 1;
  } while( true );
}

// GetRequirementsChunkFragmentMapping @ 1472259d0

void __thiscall
FMassArchetypeData::GetRequirementsChunkFragmentMapping
          (FMassArchetypeData *this,
          TArrayView<FMassFragmentRequirementDescription_const_,int> *param_1,
          TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *param_2)

{
  int *piVar1;
  UScriptStruct *pUVar2;
  longlong lVar3;
  ForElementType<int> FVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ForElementType<int> FVar9;
  uint uVar10;
  FMassFragmentRequirementDescription *pFVar11;
  longlong lVar12;
  FMassFragmentRequirementDescription *pFVar13;
  uint local_28 [4];
  
  uVar10 = param_1->ArrayNum;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < (int)uVar10) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,uVar10,&param_2->AllocatorInstance,0,piVar1);
  }
  pFVar11 = param_1->DataPtr;
  pFVar13 = pFVar11 + (int)uVar10;
  local_28[0] = 0xffffffff;
  do {
    if (pFVar11 == pFVar13) {
      return;
    }
    if (pFVar11->AccessMode != None) {
      uVar10 = local_28[0] + 1;
      local_28[0] = 0xffffffff;
      if ((int)uVar10 < (this->ChunkFragmentsTemplate).ArrayNum) {
        lVar12 = (longlong)(int)uVar10 << 4;
        do {
          uVar7 = 0;
          if ((int)uVar10 < (this->ChunkFragmentsTemplate).ArrayNum) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pUVar2 = pFVar11->StructType;
          if (pUVar2 != (UScriptStruct *)0x0) {
            iVar8 = (int)pUVar2->_padding_;
            lVar3 = *(longlong *)((this->ChunkFragmentsTemplate).AllocatorInstance.Data + lVar12);
            if ((*(int *)(lVar3 + 0x38) < iVar8) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar8 * 8) !=
                &pUVar2->_padding_)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            uVar7 = uVar10;
            if (bVar6) break;
          }
          uVar10 = uVar10 + 1;
          lVar12 = lVar12 + 0x10;
          uVar7 = local_28[0];
        } while ((int)uVar10 < (this->ChunkFragmentsTemplate).ArrayNum);
        local_28[0] = uVar7;
        if (local_28[0] == 0xffffffff) goto LAB_147225b1f;
      }
      else {
LAB_147225b1f:
        if (((pFVar11->Presence != Optional) && (pFVar11->Presence != Any)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("FragmentIndex != INDEX_NONE || Requirement.IsOptional()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeData.cpp"
                               ,0x2e8,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FVar4 = (param_2->AllocatorInstance).SecondaryData;
      FVar9 = (ForElementType<int>)param_2;
      if (FVar4 != (ForElementType<int>)0x0) {
        FVar9 = FVar4;
      }
      if ((ulonglong)FVar9 <= local_28) {
        FVar9 = (ForElementType<int>)param_2;
        if (FVar4 != (ForElementType<int>)0x0) {
          FVar9 = FVar4;
        }
        if ((local_28 < (uint *)((longlong)FVar9 + (longlong)*piVar1 * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar8 = param_2->ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                          (0x404,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar8 + 1;
      FVar4 = (param_2->AllocatorInstance).SecondaryData;
      FVar9 = (ForElementType<int>)param_2;
      if (FVar4 != (ForElementType<int>)0x0) {
        FVar9 = FVar4;
      }
      *(uint *)((longlong)FVar9 + (longlong)iVar8 * 4) = local_28[0];
    }
    pFVar11 = pFVar11 + 1;
  } while( true );
}

// GetRequirementsConstSharedFragmentMapping @ 147225c60

void __thiscall
FMassArchetypeData::GetRequirementsConstSharedFragmentMapping
          (FMassArchetypeData *this,
          TArrayView<FMassFragmentRequirementDescription_const_,int> *param_1,
          TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *param_2)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  ForElementType<int> FVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  longlong *plVar9;
  ForElementType<int> FVar10;
  UScriptStruct *pUVar11;
  FMassFragmentRequirementDescription *pFVar12;
  FMassFragmentRequirementDescription *pFVar13;
  int local_18 [4];
  
  iVar8 = (this->Chunks).ArrayNum;
  if (iVar8 != 0) {
    if ((iVar8 < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar3 = (this->Chunks).AllocatorInstance.Data;
    uVar2 = param_1->ArrayNum;
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    piVar1 = &param_2->ArrayMax;
    param_2->ArrayNum = 0;
    if (param_2->ArrayMax < (int)uVar2) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                (4,4,uVar2,&param_2->AllocatorInstance,0,piVar1);
    }
    pFVar13 = param_1->DataPtr;
    pFVar12 = pFVar13 + (int)uVar2;
    for (; pFVar13 != pFVar12; pFVar13 = pFVar13 + 1) {
      if (pFVar13->AccessMode != None) {
        plVar4 = *(longlong **)(pFVar3 + 0x70);
        for (plVar9 = plVar4; plVar9 != plVar4 + (longlong)*(int *)(pFVar3 + 0x78) * 2;
            plVar9 = plVar9 + 2) {
          pUVar11 = (UScriptStruct *)0x0;
          if ((longlong *)*plVar9 != (longlong *)0x0) {
            pUVar11 = *(UScriptStruct **)*plVar9;
          }
          if (pUVar11 == pFVar13->StructType) {
            local_18[0] = (int)((longlong)plVar9 - (longlong)plVar4 >> 4);
            if (local_18[0] != -1) goto LAB_147225d9b;
            goto LAB_147225d69;
          }
        }
        local_18[0] = -1;
LAB_147225d69:
        if (((pFVar13->Presence != Optional) && (pFVar13->Presence != Any)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("FragmentIndex != INDEX_NONE || Requirement.IsOptional()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeData.cpp"
                               ,0x2fe,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
LAB_147225d9b:
        FVar5 = (param_2->AllocatorInstance).SecondaryData;
        FVar10 = (ForElementType<int>)param_2;
        if (FVar5 != (ForElementType<int>)0x0) {
          FVar10 = FVar5;
        }
        if ((ulonglong)FVar10 <= local_18) {
          FVar10 = (ForElementType<int>)param_2;
          if (FVar5 != (ForElementType<int>)0x0) {
            FVar10 = FVar5;
          }
          if ((local_18 < (int *)((longlong)FVar10 + (longlong)*piVar1 * 4)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        iVar8 = param_2->ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                            (0x404,&param_2->AllocatorInstance,piVar1);
        }
        param_2->ArrayNum = iVar8 + 1;
        FVar5 = (param_2->AllocatorInstance).SecondaryData;
        FVar10 = (ForElementType<int>)param_2;
        if (FVar5 != (ForElementType<int>)0x0) {
          FVar10 = FVar5;
        }
        *(int *)((longlong)FVar10 + (longlong)iVar8 * 4) = local_18[0];
      }
    }
  }
  return;
}

// GetRequirementsFragmentMapping @ 147226200

void __thiscall
FMassArchetypeData::GetRequirementsFragmentMapping
          (FMassArchetypeData *this,
          TArrayView<FMassFragmentRequirementDescription_const_,int> *param_1,
          TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *param_2)

{
  int *piVar1;
  uint uVar2;
  ForElementType<int> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TTuple<UScriptStruct_const_*,int> *pTVar7;
  ForElementType<int> FVar8;
  undefined4 *puVar9;
  FMassFragmentRequirementDescription *pFVar10;
  FMassFragmentRequirementDescription *pFVar11;
  undefined4 local_28 [4];
  
  uVar2 = param_1->ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < (int)uVar2) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,uVar2,&param_2->AllocatorInstance,0,piVar1);
  }
  pFVar11 = param_1->DataPtr;
  pFVar10 = pFVar11 + (int)uVar2;
  do {
    if (pFVar11 == pFVar10) {
      return;
    }
    if (pFVar11->AccessMode != None) {
      pTVar7 = TSet<TTuple<UScriptStruct_const_*,int>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,int,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<UScriptStruct_const_*,int>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,int,0>,FDefaultSetAllocator>
                       *)&this->FragmentIndexMap,pFVar11->StructType);
      puVar9 = (undefined4 *)&pTVar7->field_0x8;
      if (pTVar7 == (TTuple<UScriptStruct_const_*,int> *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      if (puVar9 == (undefined4 *)0x0) {
        if (((pFVar11->Presence != Optional) && (pFVar11->Presence != Any)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("FragmentIndex != nullptr || Requirement.IsOptional()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeData.cpp"
                               ,0x2cf,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_28[0] = 0xffffffff;
      }
      else {
        local_28[0] = *puVar9;
      }
      FVar3 = (param_2->AllocatorInstance).SecondaryData;
      FVar8 = (ForElementType<int>)param_2;
      if (FVar3 != (ForElementType<int>)0x0) {
        FVar8 = FVar3;
      }
      if ((ulonglong)FVar8 <= local_28) {
        FVar8 = (ForElementType<int>)param_2;
        if (FVar3 != (ForElementType<int>)0x0) {
          FVar8 = FVar3;
        }
        if ((local_28 < (undefined4 *)((longlong)FVar8 + (longlong)*piVar1 * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = param_2->ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                          (0x404,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar6 + 1;
      FVar3 = (param_2->AllocatorInstance).SecondaryData;
      FVar8 = (ForElementType<int>)param_2;
      if (FVar3 != (ForElementType<int>)0x0) {
        FVar8 = FVar3;
      }
      *(undefined4 *)((longlong)FVar8 + (longlong)iVar6 * 4) = local_28[0];
    }
    pFVar11 = pFVar11 + 1;
  } while( true );
}

// GetRequirementsSharedFragmentMapping @ 147226550

void __thiscall
FMassArchetypeData::GetRequirementsSharedFragmentMapping
          (FMassArchetypeData *this,
          TArrayView<FMassFragmentRequirementDescription_const_,int> *param_1,
          TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *param_2)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  ForElementType<int> FVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  longlong *plVar9;
  ForElementType<int> FVar10;
  UScriptStruct *pUVar11;
  FMassFragmentRequirementDescription *pFVar12;
  FMassFragmentRequirementDescription *pFVar13;
  int local_18 [4];
  
  iVar8 = (this->Chunks).ArrayNum;
  if (iVar8 != 0) {
    if ((iVar8 < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar3 = (this->Chunks).AllocatorInstance.Data;
    uVar2 = param_1->ArrayNum;
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    piVar1 = &param_2->ArrayMax;
    param_2->ArrayNum = 0;
    if (param_2->ArrayMax < (int)uVar2) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                (4,4,uVar2,&param_2->AllocatorInstance,0,piVar1);
    }
    pFVar13 = param_1->DataPtr;
    pFVar12 = pFVar13 + (int)uVar2;
    for (; pFVar13 != pFVar12; pFVar13 = pFVar13 + 1) {
      if (pFVar13->AccessMode != None) {
        plVar4 = *(longlong **)(pFVar3 + 0x80);
        for (plVar9 = plVar4; plVar9 != plVar4 + (longlong)*(int *)(pFVar3 + 0x88) * 2;
            plVar9 = plVar9 + 2) {
          pUVar11 = (UScriptStruct *)0x0;
          if ((longlong *)*plVar9 != (longlong *)0x0) {
            pUVar11 = *(UScriptStruct **)*plVar9;
          }
          if (pUVar11 == pFVar13->StructType) {
            local_18[0] = (int)((longlong)plVar9 - (longlong)plVar4 >> 4);
            if (local_18[0] != -1) goto LAB_147226697;
            goto LAB_147226665;
          }
        }
        local_18[0] = -1;
LAB_147226665:
        if (((pFVar13->Presence != Optional) && (pFVar13->Presence != Any)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("FragmentIndex != INDEX_NONE || Requirement.IsOptional()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeData.cpp"
                               ,0x314,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
LAB_147226697:
        FVar5 = (param_2->AllocatorInstance).SecondaryData;
        FVar10 = (ForElementType<int>)param_2;
        if (FVar5 != (ForElementType<int>)0x0) {
          FVar10 = FVar5;
        }
        if ((ulonglong)FVar10 <= local_18) {
          FVar10 = (ForElementType<int>)param_2;
          if (FVar5 != (ForElementType<int>)0x0) {
            FVar10 = FVar5;
          }
          if ((local_18 < (int *)((longlong)FVar10 + (longlong)*piVar1 * 4)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        iVar8 = param_2->ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                            (0x404,&param_2->AllocatorInstance,piVar1);
        }
        param_2->ArrayNum = iVar8 + 1;
        FVar5 = (param_2->AllocatorInstance).SecondaryData;
        FVar10 = (ForElementType<int>)param_2;
        if (FVar5 != (ForElementType<int>)0x0) {
          FVar10 = FVar5;
        }
        *(int *)((longlong)FVar10 + (longlong)iVar8 * 4) = local_18[0];
      }
    }
  }
  return;
}

// HasFragmentDataForEntity @ 14722ac20

bool __thiscall
FMassArchetypeData::HasFragmentDataForEntity
          (FMassArchetypeData *this,UScriptStruct *param_1,int param_2)

{
  bool bVar1;
  
  if (param_1 != (UScriptStruct *)0x0) {
    bVar1 = TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
            ::Contains((TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                        *)this,param_1);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// HasFragmentType @ 14722ac50

bool __thiscall FMassArchetypeData::HasFragmentType(FMassArchetypeData *this,UScriptStruct *param_1)

{
  bool bVar1;
  
  if (param_1 != (UScriptStruct *)0x0) {
    bVar1 = TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
            ::Contains((TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                        *)this,param_1);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// Initialize @ 14722b990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassArchetypeData::Initialize
          (FMassArchetypeData *this,FMassEntityManager *param_1,
          FMassArchetypeCompositionDescriptor *param_2,uint param_3)

{
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *this_00;
  TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *this_01;
  TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *this_02;
  int *piVar1;
  TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *this_03;
  ForElementType<UScriptStruct_const_*> FVar2;
  FColor_u_0_s_0 FVar3;
  UScriptStruct *pUVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  ForElementType<UScriptStruct_const_*> FVar10;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 local_c7;
  undefined1 local_c6;
  FIdentityFunctor local_c5 [5];
  TArray<UScriptStruct_const_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> local_c0;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if ((this->Chunks).ArrayNum != 0) {
    local_c8 = 0;
    bVar7 = `FMassArchetypeData::Initialize'::__l3::<lambda_1>::operator()(&local_c8);
    if (!bVar7) {
      return;
    }
  }
  if (this->CreatedArchetypeDataVersion != 0) {
    local_c7 = 0;
    bVar7 = `FMassArchetypeData::Initialize'::__l6::<lambda_2>::operator()(&local_c7);
    if (!bVar7) {
      return;
    }
  }
  this->CreatedArchetypeDataVersion = param_3;
  if (this != (FMassArchetypeData *)param_2) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)this,
               (TBitArray<FDefaultBitArrayAllocator> *)param_2);
  }
  ConfigureFragments(this,param_1);
  this_00 = &(this->CompositionDescriptor).Tags;
  if (this_00 != &param_2->Tags) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)this_00,
               (TBitArray<FDefaultBitArrayAllocator> *)&param_2->Tags);
  }
  this_01 = &(this->CompositionDescriptor).ChunkFragments;
  if (this_01 != &param_2->ChunkFragments) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)this_01,
               (TBitArray<FDefaultBitArrayAllocator> *)&param_2->ChunkFragments);
  }
  local_c0.AllocatorInstance.SecondaryData = (ForElementType<UScriptStruct_const_*>)0x0;
  local_c0.ArrayNum = 0;
  local_c0.ArrayMax = 0x10;
  TTypeBitSetBase<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassChunkFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
  ::ExportTypes<UScriptStruct,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
            ((TTypeBitSetBase<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassChunkFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
              *)this_01,&local_c0);
  FVar10 = (ForElementType<UScriptStruct_const_*>)&local_c0;
  if (local_c0.AllocatorInstance.SecondaryData != (ForElementType<UScriptStruct_const_*>)0x0) {
    FVar10 = local_c0.AllocatorInstance.SecondaryData;
  }
  AlgoImpl::
  IntroSortInternal<UScriptStruct_const_*,int,FIdentityFunctor,TDereferenceWrapper<UScriptStruct_const_*,FScriptStructSortOperator>_>
            ((UScriptStruct **)FVar10,local_c0.ArrayNum,local_c5[0],
             (FScriptStructSortOperator *)local_c5);
  iVar6 = local_c0.ArrayNum;
  uVar9 = (ulonglong)local_c0.ArrayNum;
  FVar10 = (ForElementType<UScriptStruct_const_*>)&local_c0;
  if (local_c0.AllocatorInstance.SecondaryData != (ForElementType<UScriptStruct_const_*>)0x0) {
    FVar10 = local_c0.AllocatorInstance.SecondaryData;
  }
  FVar2 = (ForElementType<UScriptStruct_const_*>)((longlong)FVar10 + uVar9 * 8);
  while( true ) {
    if ((uint)uVar9 != iVar6) {
      local_c6 = 0;
      `TCheckedPointerIterator<UScriptStruct_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_c6);
    }
    if (FVar10 == FVar2) break;
    pUVar4 = *(UScriptStruct **)FVar10;
    if ((pUVar4 == (UScriptStruct *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ChunkFragmentType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeData.cpp"
                           ,0x55,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = (this->ChunkFragmentsTemplate).ArrayNum;
    piVar1 = &(this->ChunkFragmentsTemplate).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->ChunkFragmentsTemplate).AllocatorInstance,piVar1);
    }
    (this->ChunkFragmentsTemplate).ArrayNum = iVar8 + 1;
    FInstancedStruct::FInstancedStruct
              ((FInstancedStruct *)
               ((this->ChunkFragmentsTemplate).AllocatorInstance.Data + (longlong)iVar8 * 0x10),
               pUVar4);
    uVar9 = (ulonglong)(uint)local_c0.ArrayNum;
    FVar10 = (ForElementType<UScriptStruct_const_*>)((longlong)FVar10 + 8);
  }
  this_02 = &(this->CompositionDescriptor).SharedFragments;
  if (this_02 != &param_2->SharedFragments) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)this_02,
               (TBitArray<FDefaultBitArrayAllocator> *)&param_2->SharedFragments);
  }
  this_03 = &(this->CompositionDescriptor).ConstSharedFragments;
  if (this_03 != &param_2->ConstSharedFragments) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)this_03,
               (TBitArray<FDefaultBitArrayAllocator> *)&param_2->ConstSharedFragments);
  }
  FVar3 = (this->DebugColor).field0_0x0._s_0;
  this->EntityListOffsetWithinChunk = 0;
  SetDebugColor(this,(FColor)FVar3);
  if (local_c0.AllocatorInstance.SecondaryData != (ForElementType<UScriptStruct_const_*>)0x0) {
    FMemory::Free((void *)local_c0.AllocatorInstance.SecondaryData);
  }
  return;
}

// InitializeWithSimilar @ 14722fdb0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassArchetypeData::InitializeWithSimilar
          (FMassArchetypeData *this,FMassEntityManager *param_1,FMassArchetypeData *param_2,
          FMassArchetypeCompositionDescriptor *param_3,FArchetypeGroups *param_4,uint param_5)

{
  undefined1 *puVar1;
  undefined1 *this_00;
  int *piVar2;
  TMap<UScriptStruct_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,int,0>_>
  *this_01;
  int iVar3;
  FColor_u_0_s_0 FVar4;
  code *pcVar5;
  bool bVar6;
  ForElementType<FMassArchetypeFragmentConfig> _Dst;
  ForElementType<FMassArchetypeFragmentConfig> _Src;
  
  if ((this->TotalBytesPerEntity != 0) && ((this->FragmentConfigs).ArrayNum != 0)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInitialized() == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeData.cpp"
                       ,0x67,
                       L"Trying to InitializeWithSimilar but this archetype has already been initialized"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this->CreatedArchetypeDataVersion = param_5;
  FMassArchetypeCompositionDescriptor::operator=(&this->CompositionDescriptor,param_3);
  bVar6 = FStructTypeBitSet::FConstBitSetContainer::operator==
                    ((FConstBitSetContainer *)this,(FConstBitSetContainer *)param_2);
  if (bVar6) {
    if (this != param_2) {
      _Src = (param_2->FragmentConfigs).AllocatorInstance.SecondaryData;
      piVar2 = &(this->FragmentConfigs).ArrayMax;
      iVar3 = (param_2->FragmentConfigs).ArrayNum;
      if (_Src == (ForElementType<FMassArchetypeFragmentConfig>)0x0) {
        _Src = (ForElementType<FMassArchetypeFragmentConfig>)&param_2->FragmentConfigs;
      }
      (this->FragmentConfigs).ArrayNum = iVar3;
      if ((iVar3 == 0) && (*piVar2 == 0)) {
        *piVar2 = 0x10;
      }
      else {
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FMassArchetypeFragmentConfig>_>
                  (0x10,8,iVar3,*piVar2,&(this->FragmentConfigs).AllocatorInstance,iVar3,piVar2);
        _Dst = (this->FragmentConfigs).AllocatorInstance.SecondaryData;
        if (iVar3 != 0) {
          if (_Dst == (ForElementType<FMassArchetypeFragmentConfig>)0x0) {
            _Dst = (ForElementType<FMassArchetypeFragmentConfig>)&this->FragmentConfigs;
          }
          memcpy((void *)_Dst,(void *)_Src,(longlong)iVar3 << 4);
        }
      }
    }
    this_01 = &this->FragmentIndexMap;
    if (this_01 != &param_2->FragmentIndexMap) {
      UE::Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)&(this->FragmentIndexMap).field_0x38,
                 (int *)&(this->FragmentIndexMap).field_0x48,
                 (ForElementType<FSetElementId> *)&(param_2->FragmentIndexMap).field_0x38,
                 *(int *)&(param_2->FragmentIndexMap).field_0x48);
      iVar3 = *(int *)&(param_2->FragmentIndexMap).field_0x8;
      TSparseArray<TSparseSetElement<TTuple<UScriptStruct_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Empty((TSparseArray<TSparseSetElement<TTuple<UScriptStruct_const_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this_01,iVar3);
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar3,(ForAnyElementType *)this_01,
                 (int *)&(this->FragmentIndexMap).field_0x8,
                 (int *)&(this->FragmentIndexMap).field_0xc);
      puVar1 = &(param_2->FragmentIndexMap).field_0x10;
      this_00 = &(this->FragmentIndexMap).field_0x10;
      *(undefined4 *)&(this->FragmentIndexMap).field_0x30 =
           *(undefined4 *)&(param_2->FragmentIndexMap).field_0x30;
      *(undefined4 *)&(this->FragmentIndexMap).field_0x34 =
           *(undefined4 *)&(param_2->FragmentIndexMap).field_0x34;
      if (this_00 != puVar1) {
        TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                  ((TBitArray<FDefaultBitArrayAllocator> *)this_00,
                   (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
      }
      if (iVar3 != 0) {
        memcpy(*(void **)this_01,*(void **)&param_2->FragmentIndexMap,(longlong)iVar3 * 0x18);
      }
    }
    this->TotalBytesPerEntity = param_2->TotalBytesPerEntity;
    this->NumEntitiesPerChunk = param_2->NumEntitiesPerChunk;
  }
  else {
    ConfigureFragments(this,param_1);
  }
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>::operator=
            (&this->ChunkFragmentsTemplate,&param_2->ChunkFragmentsTemplate);
  TSparseArray<UE::Mass::FArchetypeGroupID,FDefaultSparseArrayAllocator>::operator=
            (&(this->Groups).IDContainer,&param_4->IDContainer);
  FVar4 = (this->DebugColor).field0_0x0._s_0;
  this->EntityListOffsetWithinChunk = 0;
  SetDebugColor(this,(FColor)FVar4);
  return;
}

// IsEquivalent @ 147232870

bool __thiscall
FMassArchetypeData::IsEquivalent
          (FMassArchetypeData *this,FMassArchetypeCompositionDescriptor *param_1,
          FArchetypeGroups *param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  
  bVar4 = FMassArchetypeCompositionDescriptor::IsEquivalent(&this->CompositionDescriptor,param_1);
  if ((bVar4) &&
     (iVar6 = *(int *)&(this->Groups).IDContainer.field_0x8,
     iVar6 == *(int *)&(param_2->IDContainer).field_0x8)) {
    iVar8 = 0;
    if (0 < iVar6) {
      lVar10 = 0;
      do {
        if (((iVar8 < 0) || (*(int *)&(this->Groups).IDContainer.field_0x28 <= iVar8)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        puVar2 = *(undefined1 **)&(this->Groups).IDContainer.field_0x20;
        puVar7 = &(this->Groups).IDContainer.field_0x10;
        if (puVar2 != (undefined1 *)0x0) {
          puVar7 = puVar2;
        }
        uVar11 = 1 << ((byte)iVar8 & 0x1f);
        iVar6 = iVar8;
        if (iVar8 < 0) {
          iVar6 = iVar8 + 0x1f;
        }
        lVar1 = (longlong)(iVar6 >> 5) * 4;
        uVar9 = uVar11 & *(uint *)(puVar7 + lVar1);
        if (((iVar8 < 0) || (*(int *)&(param_2->IDContainer).field_0x28 <= iVar8)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        puVar2 = *(undefined1 **)&(param_2->IDContainer).field_0x20;
        puVar7 = &(param_2->IDContainer).field_0x10;
        if (puVar2 != (undefined1 *)0x0) {
          puVar7 = puVar2;
        }
        if (((uVar9 != 0) != ((*(uint *)(puVar7 + lVar1) & uVar11) != 0)) ||
           ((uVar9 != 0 &&
            (*(int *)(lVar10 + *(longlong *)&(this->Groups).IDContainer) !=
             *(int *)(lVar10 + *(longlong *)&param_2->IDContainer))))) goto LAB_1472329b8;
        iVar8 = iVar8 + 1;
        lVar10 = lVar10 + 8;
      } while (iVar8 < *(int *)&(this->Groups).IDContainer.field_0x8);
    }
    bVar4 = true;
  }
  else {
LAB_1472329b8:
    bVar4 = false;
  }
  return bVar4;
}

// MoveEntityToAnotherArchetype @ 147235440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMassArchetypeData::MoveEntityToAnotherArchetype
          (FMassArchetypeData *this,FMassEntityHandle param_1,FMassArchetypeData *param_2,
          FMassArchetypeSharedFragmentValues *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  undefined1 auStackY_c8 [32];
  LARGE_INTEGER local_88;
  int iStack_80;
  undefined4 uStack_7c;
  FTransientChunkLocation local_78;
  LARGE_INTEGER local_68;
  undefined8 uStack_60;
  LARGE_INTEGER *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  if (param_2 == this) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("&NewArchetype != this",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeData.cpp"
                       ,0x1db,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
          FindAndRemoveChecked(&this->EntityMap,param_1.Index);
  uVar5 = iVar4 / this->NumEntitiesPerChunk;
  iVar7 = iVar4 % this->NumEntitiesPerChunk;
  uVar9 = 0;
  if ((int)uVar5 < (this->Chunks).ArrayNum) {
    uVar9 = ~uVar5 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar8 = (this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x90;
  if (param_3 == (FMassArchetypeSharedFragmentValues *)0x0) {
    param_3 = (FMassArchetypeSharedFragmentValues *)(pFVar8 + 0x28);
  }
  iVar6 = AddEntityInternal(param_2,param_1,param_3);
  uVar5 = iVar6 / param_2->NumEntitiesPerChunk;
  iVar6 = iVar6 % param_2->NumEntitiesPerChunk;
  uVar9 = 0;
  if ((int)uVar5 < (param_2->Chunks).ArrayNum) {
    uVar9 = ~uVar5 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (param_2->Chunks).AllocatorInstance.Data;
  if (-1 < MassChannel->Enabled) {
    FMassTrace::OutputRegisterArchetype((ulong64)param_2,&param_2->CompositionDescriptor);
  }
  if (-1 < MassChannel->Enabled) {
    QueryPerformanceCounter(&local_88);
    if (-1 < MassChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<FMassTraceMassEntityMovedFields>
                ((TLogScope<0> *)&local_58);
      *local_58 = local_88;
      *(DWORD *)(local_58 + 1) = param_1.Index;
      *(int *)((longlong)(local_58 + 1) + 4) = param_1.SerialNumber;
      local_58[2] = (LARGE_INTEGER)param_2;
      *(undefined8 *)(CONCAT44(uStack_4c,iStack_50) + 0x28) =
           *(undefined8 *)(CONCAT44(uStack_4c,iStack_50) + 0x20);
    }
  }
  local_78.RawChunkMemory = *(uchar **)pFVar8;
  local_88 = *(LARGE_INTEGER *)(pFVar1 + (longlong)(int)uVar5 * 0x90);
  local_78._12_4_ = uStack_4c;
  local_78.IndexWithinChunk = iVar7;
  uStack_60 = CONCAT44(uStack_7c,iVar6);
  iStack_80 = iVar6;
  local_68 = local_88;
  local_58 = (LARGE_INTEGER *)local_78.RawChunkMemory;
  iStack_50 = iVar7;
  MoveFragmentsToAnotherArchetypeInternal
            (this,param_2,(FTransientChunkLocation *)&local_68.s,&local_78,1);
  RemoveEntityInternal(this,iVar4);
  return;
}

// MoveFragmentsToAnotherArchetypeInternal @ 1472359d0

void __thiscall
FMassArchetypeData::MoveFragmentsToAnotherArchetypeInternal
          (FMassArchetypeData *this,FMassArchetypeData *param_1,FTransientChunkLocation *param_2,
          FTransientChunkLocation *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  UScriptStruct *pUVar4;
  uchar *puVar5;
  ForElementType<FMassArchetypeFragmentConfig> FVar6;
  longlong lVar7;
  code *pcVar8;
  longlong lVar9;
  FMassArchetypeData *pFVar10;
  bool bVar11;
  uint uVar12;
  TTuple<UScriptStruct_const_*,int> *pTVar13;
  int iVar14;
  int iVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  ForElementType<FMassArchetypeFragmentConfig> FVar18;
  ForElementType<FMassArchetypeFragmentConfig> FVar19;
  TArray<FMassArchetypeFragmentConfig,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *pTVar20;
  uint *puVar21;
  int iVar22;
  ForElementType<FMassArchetypeFragmentConfig> FVar23;
  undefined1 local_res8 [8];
  FMassArchetypeData *local_res10;
  FTransientChunkLocation *local_res18;
  undefined1 local_58 [4];
  uint local_54;
  TArray<FMassArchetypeFragmentConfig,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *local_50;
  TArray<FMassArchetypeFragmentConfig,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *local_48;
  
  FVar18 = (param_1->FragmentConfigs).AllocatorInstance.SecondaryData;
  local_50 = &param_1->FragmentConfigs;
  local_54 = (param_1->FragmentConfigs).ArrayNum;
  uVar17 = (ulonglong)(int)local_54;
  if (FVar18 == (ForElementType<FMassArchetypeFragmentConfig>)0x0) {
    FVar18 = (ForElementType<FMassArchetypeFragmentConfig>)local_50;
  }
  local_48 = &this->FragmentConfigs;
  FVar23 = (ForElementType<FMassArchetypeFragmentConfig>)(uVar17 * 0x10 + (longlong)FVar18);
  local_res10 = param_1;
  local_res18 = param_2;
  while( true ) {
    if (local_50->ArrayNum != (int)uVar17) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMassArchetypeFragmentConfig,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    pFVar10 = local_res10;
    if (FVar18 == FVar23) break;
    pUVar4 = *(UScriptStruct **)FVar18;
    pTVar13 = TSet<TTuple<UScriptStruct_const_*,int>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,int,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<UScriptStruct_const_*,int>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,int,0>,FDefaultSetAllocator>
                      *)&this->FragmentIndexMap,pUVar4);
    iVar14 = (int)*(short *)((longlong)&pUVar4->_padding_ + 4);
    lVar9 = pUVar4->_padding_;
    iVar1 = *(int *)((longlong)FVar18 + 8);
    puVar21 = (uint *)&pTVar13->field_0x8;
    if (pTVar13 == (TTuple<UScriptStruct_const_*,int> *)0x0) {
      puVar21 = (uint *)0x0;
    }
    iVar2 = param_2->IndexWithinChunk;
    puVar5 = param_2->RawChunkMemory;
    if (puVar21 == (uint *)0x0) {
      (**(code **)(pUVar4->_padding_ + 0x2f8))
                (pUVar4,puVar5 + (longlong)(((int)lVar9 + -1 + iVar14 & -iVar14) * iVar2) +
                                 (longlong)iVar1,param_4);
      FVar18 = (ForElementType<FMassArchetypeFragmentConfig>)((longlong)FVar18 + 0x10);
      uVar17 = (ulonglong)local_54;
    }
    else {
      uVar3 = *puVar21;
      uVar12 = 0;
      if ((int)uVar3 < (this->FragmentConfigs).ArrayNum) {
        uVar12 = ~uVar3 >> 0x1f;
      }
      if (uVar12 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      FVar6 = (this->FragmentConfigs).AllocatorInstance.SecondaryData;
      FVar19 = (ForElementType<FMassArchetypeFragmentConfig>)&this->FragmentConfigs;
      if (FVar6 != (ForElementType<FMassArchetypeFragmentConfig>)0x0) {
        FVar19 = FVar6;
      }
      iVar15 = (int)*(short *)(*(longlong *)FVar18 + 0x5c);
      lVar7 = *(longlong *)((longlong)FVar19 + (longlong)(int)uVar3 * 0x10);
      iVar22 = (int)*(short *)(lVar7 + 0x5c);
      memcpy(puVar5 + (longlong)(((int)lVar9 + -1 + iVar14 & -iVar14) * iVar2) + (longlong)iVar1,
             param_3->RawChunkMemory +
             (longlong)
             ((*(int *)(lVar7 + 0x58) + -1 + iVar22 & -iVar22) * param_3->IndexWithinChunk) +
             (longlong)*(int *)((uchar *)((longlong)FVar19 + 8) + (longlong)(int)uVar3 * 0x10),
             (longlong)((*(int *)(*(longlong *)FVar18 + 0x58) + -1 + iVar15 & -iVar15) * param_4));
      FVar18 = (ForElementType<FMassArchetypeFragmentConfig>)((longlong)FVar18 + 0x10);
      uVar17 = (ulonglong)local_54;
      param_2 = local_res18;
    }
  }
  FVar18 = (this->FragmentConfigs).AllocatorInstance.SecondaryData;
  iVar1 = (this->FragmentConfigs).ArrayNum;
  if (FVar18 == (ForElementType<FMassArchetypeFragmentConfig>)0x0) {
    FVar18 = (ForElementType<FMassArchetypeFragmentConfig>)&this->FragmentConfigs;
  }
  FVar23 = (ForElementType<FMassArchetypeFragmentConfig>)((longlong)iVar1 * 0x10 + (longlong)FVar18)
  ;
  pTVar20 = &this->FragmentConfigs;
  while( true ) {
    if (pTVar20->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FMassArchetypeFragmentConfig,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_58);
    }
    if (FVar18 == FVar23) break;
    pUVar4 = *(UScriptStruct **)FVar18;
    pTVar13 = TSet<TTuple<UScriptStruct_const_*,int>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,int,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<UScriptStruct_const_*,int>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,int,0>,FDefaultSetAllocator>
                      *)&pFVar10->FragmentIndexMap,pUVar4);
    puVar16 = &pTVar13->field_0x8;
    if (pTVar13 == (TTuple<UScriptStruct_const_*,int> *)0x0) {
      puVar16 = (undefined1 *)0x0;
    }
    if (puVar16 == (undefined1 *)0x0) {
      iVar14 = (int)*(short *)((longlong)&pUVar4->_padding_ + 4);
      (**(code **)(pUVar4->_padding_ + 0x300))
                (pUVar4,param_3->RawChunkMemory +
                        (longlong)
                        (((int)pUVar4->_padding_ + -1 + iVar14 & -iVar14) *
                        param_3->IndexWithinChunk) + (longlong)*(int *)((longlong)FVar18 + 8),
                 param_4);
    }
    FVar18 = (ForElementType<FMassArchetypeFragmentConfig>)((longlong)FVar18 + 0x10);
    pTVar20 = local_48;
  }
  return;
}

// PrepareNextEntitiesSpanInternal @ 14723d310

FArchetypeEntityRange * __thiscall
FMassArchetypeData::PrepareNextEntitiesSpanInternal
          (FMassArchetypeData *this,FArchetypeEntityRange *__return_storage_ptr__,
          TArrayView<FMassEntityHandle_const_,int> *param_1,
          FMassArchetypeSharedFragmentValues *param_2,int param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  FArchetypeEntityRange *pFVar9;
  FMassArchetypeSharedFragmentValues *pFVar10;
  int iVar11;
  FMassArchetypeChunk *this_00;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  int local_res20 [2];
  TPairInitializer<int_const_&,int_&&> local_118;
  FInstancedStruct *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  FInstancedStruct *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  FMassEntityHandle *local_e8;
  int *local_e0;
  TArrayView<FInstancedStruct_const_,int> local_d8;
  TArrayView<FInstancedStruct_const_,int> local_c8;
  FMassArchetypeSharedFragmentValues local_b8;
  
  if ((param_2->bSorted == false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedFragmentValues.IsSorted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeData.cpp"
                         ,0x51b,L"Expecting shared fragment values to be previously sorted"), bVar4)
     ) {
    pcVar3 = (code *)swi(3);
    pFVar9 = (FArchetypeEntityRange *)(*pcVar3)();
    return pFVar9;
  }
  bVar4 = TBitArray<FDefaultBitArrayAllocator>::CompareSetBits<FDefaultBitArrayAllocator>
                    ((TBitArray<FDefaultBitArrayAllocator> *)&param_2->SharedFragmentBitSet,
                     (TBitArray<FDefaultBitArrayAllocator> *)
                     &(this->CompositionDescriptor).SharedFragments,false);
  if (((!bVar4) ||
      (bVar4 = TBitArray<FDefaultBitArrayAllocator>::CompareSetBits<FDefaultBitArrayAllocator>
                         ((TBitArray<FDefaultBitArrayAllocator> *)
                          &param_2->ConstSharedFragmentBitSet,
                          (TBitArray<FDefaultBitArrayAllocator> *)
                          &(this->CompositionDescriptor).ConstSharedFragments,false), !bVar4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedFragmentValues.HasExactFragmentTypesMatch(CompositionDescriptor.GetSharedFragments(), CompositionDescriptor.GetConstSharedFragments())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeData.cpp"
                         ,0x51d,
                         L"Expecting values for every specified shared fragment in the archetype and only those"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar9 = (FArchetypeEntityRange *)(*pcVar3)();
    return pFVar9;
  }
  uVar12 = (ulonglong)param_3;
  uVar5 = (this->Chunks).ArrayNum;
  if (param_3 < (int)uVar5) {
    lVar13 = uVar12 * 0x90;
    do {
      uVar7 = (uint)uVar12;
      uVar5 = 0;
      if ((int)uVar7 < (this->Chunks).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FArchetypeEntityRange *)(*pcVar3)();
        return pFVar9;
      }
      iVar11 = this->NumEntitiesPerChunk;
      this_00 = (FMassArchetypeChunk *)((this->Chunks).AllocatorInstance.Data + lVar13);
      if (this_00->NumInstances < iVar11) {
        uVar5 = (this_00->SharedFragmentValues).HashCache;
        if (uVar5 == 0xffffffff) {
          uVar5 = FMassArchetypeSharedFragmentValues::CalculateHash(&this_00->SharedFragmentValues);
          (this_00->SharedFragmentValues).HashCache = uVar5;
          iVar11 = this->NumEntitiesPerChunk;
        }
        uVar6 = param_2->HashCache;
        if (uVar6 == 0xffffffff) {
          uVar6 = FMassArchetypeSharedFragmentValues::CalculateHash(param_2);
          param_2->HashCache = uVar6;
          iVar11 = this->NumEntitiesPerChunk;
        }
        if (uVar5 == uVar6) {
          param_3 = this_00->NumInstances;
          iVar11 = iVar11 * uVar7 + param_3;
          if (param_3 == 0) {
            local_108 = (FInstancedStruct *)(this->ChunkFragmentsTemplate).AllocatorInstance.Data;
            iVar14 = (this->ChunkFragmentsTemplate).ArrayNum;
            if ((iVar14 < 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              pFVar9 = (FArchetypeEntityRange *)(*pcVar3)();
              return pFVar9;
            }
            local_d8._12_4_ = uStack_fc;
            local_d8.ArrayNum = iVar14;
            local_d8.DataPtr = local_108;
            iStack_100 = iVar14;
            FMassArchetypeChunk::Recycle(this_00,&local_d8,param_2);
          }
          goto LAB_14723d60e;
        }
      }
      uVar5 = (this->Chunks).ArrayNum;
      uVar12 = (ulonglong)(uVar7 + 1);
      lVar13 = lVar13 + 0x90;
    } while ((int)(uVar7 + 1) < (int)uVar5);
  }
  else {
    iVar11 = this->NumEntitiesPerChunk;
  }
  local_118.Value = (int *)(ulonglong)this->ChunkMemorySize;
  piVar1 = &(this->Chunks).ArrayMax;
  iVar11 = iVar11 * uVar5;
  param_3 = 0;
  uVar7 = uVar5;
  if (uVar5 == *piVar1) {
    uVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x890,&(this->Chunks).AllocatorInstance,piVar1);
    (this->Chunks).ArrayNum = uVar7;
  }
  (this->Chunks).ArrayNum = uVar7 + 1;
  pFVar2 = (this->Chunks).AllocatorInstance.Data;
  pFVar10 = FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues
                      (&local_b8,param_2);
  local_f8 = (FInstancedStruct *)(this->ChunkFragmentsTemplate).AllocatorInstance.Data;
  iStack_f0 = (this->ChunkFragmentsTemplate).ArrayNum;
  if ((iStack_f0 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar9 = (FArchetypeEntityRange *)(*pcVar3)();
    return pFVar9;
  }
  local_c8._12_4_ = uStack_ec;
  local_c8.ArrayNum = iStack_f0;
  local_c8.DataPtr = local_f8;
  this_00 = FMassArchetypeChunk::FMassArchetypeChunk
                      ((FMassArchetypeChunk *)(pFVar2 + (longlong)(int)uVar7 * 0x90),
                       (ulong64)local_118.Value,&local_c8,pFVar10);
  uVar7 = uVar5;
LAB_14723d60e:
  if ((this_00 == (FMassArchetypeChunk *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DestinationChunk",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeData.cpp"
                         ,0x542,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar9 = (FArchetypeEntityRange *)(*pcVar3)();
    return pFVar9;
  }
  iVar8 = this->NumEntitiesPerChunk - param_3;
  iVar14 = param_1->ArrayNum;
  if (iVar8 < param_1->ArrayNum) {
    iVar14 = iVar8;
  }
  if ((iVar14 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumToAdd",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeData.cpp"
                         ,0x546,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar9 = (FArchetypeEntityRange *)(*pcVar3)();
    return pFVar9;
  }
  this_00->NumInstances = this_00->NumInstances + iVar14;
  uVar5 = 0;
  this_00->SerialModificationNumber = this_00->SerialModificationNumber + 1;
  if (0 < iVar14) {
    lVar13 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar5 < param_1->ArrayNum) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      local_res20[0] = iVar11;
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FArchetypeEntityRange *)(*pcVar3)();
        return pFVar9;
      }
      local_e8 = param_1->DataPtr + lVar13;
      local_e0 = local_res20;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_const_&,int_&&>_>
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)&this->EntityMap,&local_118,(bool *)&local_e8);
      uVar5 = uVar5 + 1;
      lVar13 = lVar13 + 1;
      iVar11 = iVar11 + 1;
    } while ((int)uVar5 < iVar14);
  }
  memcpy(this_00->RawMemory + (longlong)this->EntityListOffsetWithinChunk + (longlong)param_3 * 8,
         param_1->DataPtr,(longlong)iVar14 << 3);
  __return_storage_ptr__->ChunkIndex = uVar7;
  __return_storage_ptr__->SubchunkStart = param_3;
  __return_storage_ptr__->Length = iVar14;
  return __return_storage_ptr__;
}

// REMOVEME_GetArrayViewForFragmentInChunk @ 14723e230

void __thiscall
FMassArchetypeData::REMOVEME_GetArrayViewForFragmentInChunk
          (FMassArchetypeData *this,int param_1,UScriptStruct *param_2,void **param_3,int *param_4)

{
  code *pcVar1;
  bool bVar2;
  TTuple<UScriptStruct_const_*,int> *pTVar3;
  ForElementType<FMassArchetypeFragmentConfig> FVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = 0;
  if (param_1 < (this->Chunks).ArrayNum) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar5 = (this->Chunks).AllocatorInstance.Data + (longlong)param_1 * 0x90;
  pTVar3 = TSet<TTuple<UScriptStruct_const_*,int>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UScriptStruct_const_*,int>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,int,0>,FDefaultSetAllocator>
                   *)&this->FragmentIndexMap,param_2);
  if (pTVar3 == (TTuple<UScriptStruct_const_*,int> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar7 = *(uint *)&pTVar3->field_0x8;
  uVar6 = 0;
  if ((int)uVar7 < (this->FragmentConfigs).ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FVar4 = (this->FragmentConfigs).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<FMassArchetypeFragmentConfig>)0x0) {
    FVar4 = (ForElementType<FMassArchetypeFragmentConfig>)&this->FragmentConfigs;
  }
  *param_3 = (void *)((longlong)
                      *(int *)((uchar *)((longlong)FVar4 + 8) + (longlong)(int)uVar7 * 0x10) +
                     *(longlong *)pFVar5);
  *param_4 = *(int *)(pFVar5 + 0x10);
  return;
}

// RemoveEntity @ 1472466e0

void __thiscall FMassArchetypeData::RemoveEntity(FMassArchetypeData *this,FMassEntityHandle param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ForElementType<FMassArchetypeFragmentConfig> FVar10;
  ForElementType<FMassArchetypeFragmentConfig> FVar11;
  undefined1 local_res8 [8];
  
  iVar7 = TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
          FindAndRemoveChecked(&this->EntityMap,param_1.Index);
  iVar1 = this->NumEntitiesPerChunk;
  uVar8 = iVar7 / iVar1;
  uVar9 = 0;
  if ((int)uVar8 < (this->Chunks).ArrayNum) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar2 = (this->FragmentConfigs).ArrayNum;
  FVar10 = (this->FragmentConfigs).AllocatorInstance.SecondaryData;
  pFVar3 = (this->Chunks).AllocatorInstance.Data;
  if (FVar10 == (ForElementType<FMassArchetypeFragmentConfig>)0x0) {
    FVar10 = (ForElementType<FMassArchetypeFragmentConfig>)&this->FragmentConfigs;
  }
  FVar11 = (ForElementType<FMassArchetypeFragmentConfig>)((longlong)iVar2 * 0x10 + (longlong)FVar10)
  ;
  while( true ) {
    if ((this->FragmentConfigs).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FMassArchetypeFragmentConfig,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar10 == FVar11) break;
    plVar4 = *(longlong **)FVar10;
    (**(code **)(*plVar4 + 0x300))
              (plVar4,(longlong)
                      (((int)plVar4[0xb] + -1 + (int)*(short *)((longlong)plVar4 + 0x5c) &
                       -(int)*(short *)((longlong)plVar4 + 0x5c)) * (iVar7 % iVar1)) +
                      (longlong)*(int *)((longlong)FVar10 + 8) +
                      *(longlong *)(pFVar3 + (longlong)(int)uVar8 * 0x90),1);
    FVar10 = (ForElementType<FMassArchetypeFragmentConfig>)((longlong)FVar10 + 0x10);
  }
  RemoveEntityInternal(this,iVar7);
  return;
}

// RemoveEntityInternal @ 147246a90

void __thiscall FMassArchetypeData::RemoveEntityInternal(FMassArchetypeData *this,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ForElementType<FMassArchetypeFragmentConfig> FVar12;
  ForElementType<FMassArchetypeFragmentConfig> FVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  
  this->EntityOrderVersion = this->EntityOrderVersion + 1;
  uVar7 = param_1 / this->NumEntitiesPerChunk;
  iVar11 = param_1 % this->NumEntitiesPerChunk;
  uVar10 = 0;
  if ((int)uVar7 < (this->Chunks).ArrayNum) {
    uVar10 = ~uVar7 >> 0x1f;
  }
  local_res10 = param_1;
  if ((uVar10 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar14 = (this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x90;
  local_res18 = *(int *)(pFVar14 + 0x10);
  iVar1 = local_res18 + -1;
  if (iVar1 != iVar11) {
    FVar13 = (this->FragmentConfigs).AllocatorInstance.SecondaryData;
    iVar3 = (this->FragmentConfigs).ArrayNum;
    if (FVar13 == (ForElementType<FMassArchetypeFragmentConfig>)0x0) {
      FVar13 = (ForElementType<FMassArchetypeFragmentConfig>)&this->FragmentConfigs;
    }
    FVar12 = (ForElementType<FMassArchetypeFragmentConfig>)
             ((longlong)iVar3 * 0x10 + (longlong)FVar13);
    while( true ) {
      if ((this->FragmentConfigs).ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FMassArchetypeFragmentConfig,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (FVar13 == FVar12) break;
      iVar9 = (int)*(short *)(*(longlong *)FVar13 + 0x5c);
      uVar7 = iVar9 + -1 + *(int *)(*(longlong *)FVar13 + 0x58);
      uVar15 = ~(iVar9 - 1U);
      uVar10 = uVar7 & uVar15;
      memcpy((void *)((longlong)(int)(uVar10 * iVar11) + *(longlong *)pFVar14 +
                     (longlong)*(int *)((longlong)FVar13 + 8)),
             (void *)((longlong)(int)(uVar10 * iVar1) + *(longlong *)pFVar14 +
                     (longlong)*(int *)((longlong)FVar13 + 8)),(longlong)(int)(uVar7 & uVar15));
      FVar13 = (ForElementType<FMassArchetypeFragmentConfig>)((longlong)FVar13 + 0x10);
    }
    uVar4 = *(undefined8 *)
             ((longlong)this->EntityListOffsetWithinChunk + (longlong)local_res18 * 8 + -8 +
             *(longlong *)pFVar14);
    *(undefined8 *)
     ((longlong)this->EntityListOffsetWithinChunk + (longlong)iVar11 * 8 + *(longlong *)pFVar14) =
         uVar4;
    piVar8 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
             FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                          *)&this->EntityMap,(int)uVar4);
    *piVar8 = local_res10;
  }
  pFVar2 = pFVar14 + 0x10;
  *(int *)pFVar2 = *(int *)pFVar2 + -1;
  if ((*(int *)pFVar2 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumInstances >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                         ,0x5d,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(int *)(pFVar14 + 0x14) = *(int *)(pFVar14 + 0x14) + 1;
  if (*(int *)(pFVar14 + 0x10) == 0) {
    FMemory::Free(*(void **)pFVar14);
    *(longlong *)pFVar14 = 0;
  }
  iVar11 = (this->Chunks).ArrayNum;
  while( true ) {
    if (iVar11 < 1) {
      return;
    }
    iVar11 = (this->Chunks).ArrayNum;
    uVar7 = iVar11 - 1;
    uVar10 = 0;
    if ((int)uVar7 < iVar11) {
      uVar10 = ~uVar7 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (*(int *)((this->Chunks).AllocatorInstance.Data +
                (longlong)(this->Chunks).ArrayNum * 0x90 + -0x80) != 0) {
      return;
    }
    iVar11 = (this->Chunks).ArrayNum;
    uVar7 = iVar11 - 1;
    uVar10 = 0;
    if ((int)uVar7 < iVar11) {
      uVar10 = ~uVar7 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    pFVar14 = (this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x90;
    if (*(void **)pFVar14 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar14);
      *(undefined8 *)pFVar14 = 0;
    }
    FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues
              ((FMassArchetypeSharedFragmentValues *)(pFVar14 + 0x28));
    DestructItems<FInstancedStruct,int>
              (*(FInstancedStruct **)(pFVar14 + 0x18),*(int *)(pFVar14 + 0x20));
    if (*(void **)(pFVar14 + 0x18) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar14 + 0x18));
    }
    iVar11 = (this->Chunks).ArrayNum + ~uVar7;
    if (iVar11 != 0) {
      memmove(pFVar14,pFVar14 + 0x90,(longlong)iVar11 * 0x90);
    }
    piVar8 = &(this->Chunks).ArrayNum;
    *piVar8 = *piVar8 + -1;
    iVar11 = (this->Chunks).ArrayNum;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// SetDebugColor @ 14724b870

void __thiscall FMassArchetypeData::SetDebugColor(FMassArchetypeData *this,FColor param_1)

{
  uint uVar1;
  FColor FVar2;
  undefined4 extraout_var;
  FLinearColor local_18;
  
  if (param_1.field0_0x0 == 0) {
    uVar1 = FMassArchetypeCompositionDescriptor::CalculateHash
                      ((TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                        *)this,&(this->CompositionDescriptor).Tags,
                       &(this->CompositionDescriptor).ChunkFragments,
                       &(this->CompositionDescriptor).SharedFragments,
                       &(this->CompositionDescriptor).ConstSharedFragments);
    FLinearColor::MakeFromHSV8
              (&local_18,((byte)(uVar1 >> 8) >> 1) + ((byte)uVar1 >> 1),
               ((byte)(uVar1 >> 0x10) >> 1) + 0x80,(byte)(uVar1 >> 0x19) + 0x80);
    FVar2 = FLinearColor::ToFColorSRGB(&local_18);
    (this->DebugColor).field0_0x0 = *(FColor_u_0 *)CONCAT44(extraout_var,FVar2.field0_0x0);
    return;
  }
  (this->DebugColor).field0_0x0._s_0 = (FColor_u_0_s_0)param_1.field0_0x0;
  return;
}

// SetFragmentData @ 14724bc40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMassArchetypeData::SetFragmentData
          (FMassArchetypeData *this,
          TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> *param_1,
          FInstancedStruct *param_2)

{
  uint uVar1;
  UScriptStruct *this_00;
  uchar *puVar2;
  ForElementType<FMassArchetypeFragmentConfig> FVar3;
  longlong lVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  TTuple<UScriptStruct_const_*,int> *pTVar9;
  FArchetypeEntityRange *pFVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  uint *puVar15;
  void *pvVar16;
  int iVar17;
  ForElementType<FMassArchetypeFragmentConfig> FVar18;
  longlong *plVar19;
  FName local_68;
  FString local_60;
  TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> local_50;
  int local_40;
  
  if (((param_2->StructMemory == (uchar *)0x0) ||
      ((param_2->ScriptStruct).field0_0x0.DebugPtr == (UScriptStruct *)0x0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("FragmentSource.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeData.cpp"
                         ,0x1be,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this_00 = (param_2->ScriptStruct).field0_0x0.DebugPtr;
  if ((this_00 == (UScriptStruct *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("FragmentType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeData.cpp"
                         ,0x1c0,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar9 = TSet<TTuple<UScriptStruct_const_*,int>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UScriptStruct_const_*,int>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,int,0>,FDefaultSetAllocator>
                   *)&this->FragmentIndexMap,this_00);
  puVar15 = (uint *)0x0;
  puVar13 = (uint *)&pTVar9->field_0x8;
  if (pTVar9 == (TTuple<UScriptStruct_const_*,int> *)0x0) {
    puVar13 = puVar15;
  }
  if (puVar13 == (uint *)0x0) {
    if (2 < (byte)LogMass._0_1_) {
      local_68 = (FName)this_00->_padding_;
      ::FName::ToString(&local_68,&local_60);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
        return;
      }
    }
  }
  else {
    iVar11 = (int)*(short *)((longlong)&this_00->_padding_ + 4);
    lVar6 = this_00->_padding_;
    puVar2 = param_2->StructMemory;
    if ((puVar2 == (uchar *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("FragmentSourceMemory",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeData.cpp"
                           ,0x1c6,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_50.DataPtr = param_1->DataPtr;
    local_50.ArrayNum = param_1->ArrayNum;
    local_50._12_4_ = *(undefined4 *)&param_1->field_0xc;
    while ((((iVar14 = (int)puVar15, -1 < iVar14 && (iVar14 < local_50.ArrayNum)) &&
            (local_40 = iVar14,
            pFVar10 = TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int>::
                      operator[](&local_50,iVar14), pFVar10->ChunkIndex != -1)) &&
           (-1 < pFVar10->SubchunkStart))) {
      uVar1 = *puVar13;
      uVar8 = 0;
      if ((int)uVar1 < (this->FragmentConfigs).ArrayNum) {
        uVar8 = ~uVar1 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar3 = (this->FragmentConfigs).AllocatorInstance.SecondaryData;
      FVar18 = (ForElementType<FMassArchetypeFragmentConfig>)&this->FragmentConfigs;
      if (FVar3 != (ForElementType<FMassArchetypeFragmentConfig>)0x0) {
        FVar18 = FVar3;
      }
      plVar19 = (longlong *)((longlong)(int)uVar1 * 0x10 + (longlong)FVar18);
      if ((((iVar14 < 0) || (local_50.ArrayNum <= iVar14)) ||
          ((pFVar10 = TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int>::
                      operator[](&local_50,iVar14), pFVar10->ChunkIndex == -1 ||
           (pFVar10->SubchunkStart < 0)))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("bool(*this)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassArchetypeTypes.h"
                             ,0x115,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar10 = TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int>::
                operator[](&local_50,iVar14);
      iVar17 = pFVar10->SubchunkStart;
      if (((((iVar14 < 0) || (local_50.ArrayNum <= iVar14)) ||
           (pFVar10 = TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int>::
                      operator[](&local_50,iVar14), pFVar10->ChunkIndex == -1)) ||
          (pFVar10->SubchunkStart < 0)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("bool(*this)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassArchetypeTypes.h"
                             ,0x115,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar10 = TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int>::
                operator[](&local_50,iVar14);
      uVar1 = pFVar10->ChunkIndex;
      uVar8 = 0;
      if ((int)uVar1 < (this->Chunks).ArrayNum) {
        uVar8 = ~uVar1 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar4 = *plVar19;
      iVar12 = (int)*(short *)(lVar4 + 0x5c);
      pvVar16 = (void *)((longlong)((*(int *)(lVar4 + 0x58) + -1 + iVar12 & -iVar12) * iVar17) +
                         *(longlong *)
                          ((this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x90) +
                        (longlong)(int)plVar19[1]);
      if ((((iVar14 < 0) || (local_50.ArrayNum <= iVar14)) ||
          ((pFVar10 = TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int>::
                      operator[](&local_50,iVar14), pFVar10->ChunkIndex == -1 ||
           (pFVar10->SubchunkStart < 0)))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("bool(*this)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassArchetypeTypes.h"
                             ,0x115,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar10 = TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int>::
                operator[](&local_50,iVar14);
      iVar17 = pFVar10->Length;
      if (iVar17 != 0) {
        do {
          UScriptStruct::CopyScriptStruct(this_00,pvVar16,puVar2,1);
          pvVar16 = (void *)((longlong)pvVar16 + (longlong)((int)lVar6 + -1 + iVar11 & -iVar11));
          iVar17 = iVar17 + -1;
        } while (iVar17 != 0);
      }
      puVar15 = (uint *)(ulonglong)(iVar14 + 1);
    }
  }
  return;
}

// SetFragmentsData @ 14724c9c0

void __thiscall
FMassArchetypeData::SetFragmentsData
          (FMassArchetypeData *this,FMassEntityHandle param_1,
          TArrayView<FInstancedStruct_const_,int> *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  UScriptStruct *this_00;
  ForElementType<FMassArchetypeFragmentConfig> FVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int *piVar9;
  TTuple<UScriptStruct_const_*,int> *pTVar10;
  ForElementType<FMassArchetypeFragmentConfig> FVar11;
  uint uVar12;
  int iVar13;
  FInstancedStruct *pFVar14;
  FInstancedStruct *pFVar15;
  
  piVar9 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
           FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                        *)&this->EntityMap,param_1.Index);
  iVar1 = *piVar9;
  uVar8 = iVar1 / this->NumEntitiesPerChunk;
  uVar12 = 0;
  if ((int)uVar8 < (this->Chunks).ArrayNum) {
    uVar12 = ~uVar8 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar15 = param_2->DataPtr;
  pFVar14 = pFVar15 + param_2->ArrayNum;
  lVar3 = *(longlong *)((this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x90);
  iVar2 = this->NumEntitiesPerChunk;
  if (pFVar15 != pFVar14) {
    do {
      this_00 = (pFVar15->ScriptStruct).field0_0x0.DebugPtr;
      if ((this_00 == (UScriptStruct *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("FragmentType",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassArchetypeData.cpp"
                             ,0x1b5,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar10 = TSet<TTuple<UScriptStruct_const_*,int>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,int,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<UScriptStruct_const_*,int>,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,int,0>,FDefaultSetAllocator>
                        *)&this->FragmentIndexMap,this_00);
      if ((pTVar10 == (TTuple<UScriptStruct_const_*,int> *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x288,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar12 = *(uint *)&pTVar10->field_0x8;
      uVar8 = 0;
      if ((int)uVar12 < (this->FragmentConfigs).ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar4 = (this->FragmentConfigs).AllocatorInstance.SecondaryData;
      FVar11 = (ForElementType<FMassArchetypeFragmentConfig>)&this->FragmentConfigs;
      if (FVar4 != (ForElementType<FMassArchetypeFragmentConfig>)0x0) {
        FVar11 = FVar4;
      }
      lVar5 = *(longlong *)((longlong)FVar11 + (longlong)(int)uVar12 * 0x10);
      iVar13 = (int)*(short *)(lVar5 + 0x5c);
      UScriptStruct::CopyScriptStruct
                (this_00,(void *)((longlong)
                                  *(int *)((uchar *)((longlong)FVar11 + 8) +
                                          (longlong)(int)uVar12 * 0x10) +
                                 (*(int *)(lVar5 + 0x58) + -1 + iVar13 & -iVar13) * (iVar1 % iVar2)
                                 + lVar3),pFVar15->StructMemory,1);
      pFVar15 = pFVar15 + 1;
    } while (pFVar15 != pFVar14);
  }
  return;
}

// SetSharedFragmentsData @ 14724d560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMassArchetypeData::SetSharedFragmentsData
          (FMassArchetypeData *this,FMassEntityHandle param_1,
          TArrayView<FSharedStruct_const_,int> *param_2)

{
  int iVar1;
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar2;
  FSharedReferencer<1> FVar3;
  FStructSharedMemory *pFVar4;
  uchar *puVar5;
  uchar *puVar6;
  code *pcVar7;
  int iVar8;
  bool bVar9;
  uint uVar10;
  int *piVar11;
  UScriptStruct *pUVar12;
  FMassArchetypeChunk *pFVar13;
  int iVar14;
  uint uVar15;
  ForElementType<FMassArchetypeFragmentConfig> FVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType FVar18;
  ForElementType<FMassArchetypeFragmentConfig> FVar19;
  uint uVar20;
  FSharedStruct *pFVar21;
  FMassArchetypeChunk *pFVar22;
  FSharedStruct *pFVar23;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong local_100;
  undefined1 local_f8;
  FIdentityFunctor local_f7;
  FIdentityFunctor local_f6;
  undefined1 local_f5;
  undefined1 local_f4 [4];
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  TObjectPtr<UScriptStruct_const_>_u_0 local_e0;
  FMassArchetypeData *local_d8;
  longlong *local_d0;
  longlong local_c8;
  TReferenceControllerBase<1> *pTStack_c0;
  FSharedStruct *local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [56];
  void *local_70;
  ForAnyElementType local_60;
  int local_58;
  ForAnyElementType local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_d8 = this;
  piVar11 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
            FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                         *)&this->EntityMap,param_1.Index);
  local_e4 = *piVar11;
  uVar10 = local_e4 / this->NumEntitiesPerChunk;
  local_e8 = local_e4 % this->NumEntitiesPerChunk;
  iVar1 = (this->Chunks).ArrayNum;
  uVar15 = 0;
  if ((int)uVar10 < iVar1) {
    uVar15 = ~uVar10 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (local_108 = (longlong)(int)uVar10, local_100 = (longlong)iVar1,
     bVar9 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar9
     )) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar22 = (FMassArchetypeChunk *)
            ((this->Chunks).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x90);
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues
            ((FMassArchetypeSharedFragmentValues *)local_a8,&pFVar22->SharedFragmentValues);
  pFVar23 = param_2->DataPtr;
  uStack_b0 = *(undefined8 *)&param_2->ArrayNum;
  local_a8[4] = local_48 + local_58 < 2;
  pFVar21 = pFVar23 + (int)*(undefined8 *)&param_2->ArrayNum;
  local_a8._0_4_ = 0xffffffff;
  local_b8 = pFVar23;
  do {
    if (pFVar23 == pFVar21) {
      if (local_a8[4] == '\0') {
        AlgoImpl::
        IntroSortInternal<FConstSharedStruct,int,FIdentityFunctor,TDereferenceWrapper<FConstSharedStruct,FStructTypeSortOperator>_>
                  ((FConstSharedStruct *)local_60.Data,local_58,local_f7,
                   (FStructTypeSortOperator *)&local_f7);
        AlgoImpl::
        IntroSortInternal<FSharedStruct,int,FIdentityFunctor,TDereferenceWrapper<FSharedStruct,FStructTypeSortOperator>_>
                  ((FSharedStruct *)local_50.Data,local_48,local_f6,
                   (FStructTypeSortOperator *)&local_f6);
        local_a8[4] = true;
      }
      local_f0 = 0;
      local_ec = 0;
      pFVar13 = GetOrAddChunk(this,(FMassArchetypeSharedFragmentValues *)local_a8,&local_f0,
                              &local_ec);
      if ((pFVar13 != pFVar22) ||
         (bVar9 = `FMassArchetypeData::SetSharedFragmentsData'::__l3::<lambda_1>::operator()
                            (&local_f5), bVar9)) {
        pFVar13->NumInstances = pFVar13->NumInstances + 1;
        pFVar13->SerialModificationNumber = pFVar13->SerialModificationNumber + 1;
        piVar11 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
                  FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                               *)&this->EntityMap,param_1.Index);
        iVar8 = local_ec;
        *piVar11 = local_f0;
        *(FMassEntityHandle *)
         (pFVar13->RawMemory + (longlong)this->EntityListOffsetWithinChunk + (longlong)local_ec * 8)
             = param_1;
        FVar16 = (this->FragmentConfigs).AllocatorInstance.SecondaryData;
        puVar5 = pFVar13->RawMemory;
        iVar1 = (this->FragmentConfigs).ArrayNum;
        puVar6 = pFVar22->RawMemory;
        if (FVar16 == (ForElementType<FMassArchetypeFragmentConfig>)0x0) {
          FVar16 = (ForElementType<FMassArchetypeFragmentConfig>)&this->FragmentConfigs;
        }
        FVar19 = (ForElementType<FMassArchetypeFragmentConfig>)
                 ((longlong)iVar1 * 0x10 + (longlong)FVar16);
        while( true ) {
          if ((this->FragmentConfigs).ArrayNum != iVar1) {
            `TCheckedPointerIterator<FMassArchetypeFragmentConfig,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_f4);
          }
          if (FVar16 == FVar19) break;
          iVar14 = (int)*(short *)(*(longlong *)FVar16 + 0x5c);
          uVar10 = iVar14 + -1 + *(int *)(*(longlong *)FVar16 + 0x58);
          uVar20 = ~(iVar14 - 1U);
          uVar15 = uVar10 & uVar20;
          memcpy(puVar6 + (longlong)*(int *)((longlong)FVar16 + 8) +
                          (longlong)(int)(uVar15 * local_e8),
                 puVar5 + (longlong)*(int *)((longlong)FVar16 + 8) + (longlong)(int)(uVar15 * iVar8)
                 ,(longlong)(int)(uVar10 & uVar20));
          FVar16 = (ForElementType<FMassArchetypeFragmentConfig>)((longlong)FVar16 + 0x10);
        }
        RemoveEntityInternal(local_d8,local_e4);
      }
      DestructItems<FSharedStruct,int>((FSharedStruct *)local_50.Data,local_48);
      if (local_50.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data);
      }
      DestructItems<FConstSharedStruct,int>((FConstSharedStruct *)local_60.Data,local_58);
      if (local_60.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data);
      }
      if (local_70 != (void *)0x0) {
        FMemory::Free(local_70);
      }
      if ((void *)local_a8._24_8_ != (void *)0x0) {
        FMemory::Free((void *)local_a8._24_8_);
      }
      return;
    }
    pTVar2 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(pFVar23->StructMemoryPtr).Object;
    if (pTVar2 == (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0) {
      local_e0.DebugPtr = (UScriptStruct *)0x0;
LAB_14724d684:
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewFragScriptStruct",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityTypes.cpp"
                         ,0xac,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else {
      local_e0 = (TObjectPtr<UScriptStruct_const_>_u_0)pTVar2->DebugPtr;
      if (local_e0 == (TObjectPtr<UScriptStruct_const_>_u_0)0x0) goto LAB_14724d684;
    }
    iVar1 = local_48;
    pFVar17 = local_50.Data + (longlong)local_48 * 0x10;
    FVar18.Data = local_50.Data;
    while( true ) {
      if (local_48 != iVar1) {
        local_f8 = 0;
        `TCheckedPointerIterator<FSharedStruct,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_f8);
      }
      if (FVar18.Data == pFVar17) {
        local_d0 = (longlong *)&local_e0;
        `FMassArchetypeSharedFragmentValues::ReplaceSharedFragments'::__l6::<lambda_1>::operator()
                  (&local_d0);
        goto LAB_14724d72d;
      }
      pUVar12 = (UScriptStruct *)0x0;
      if (*(longlong **)FVar18.Data != (longlong *)0x0) {
        pUVar12 = (UScriptStruct *)**(longlong **)FVar18.Data;
      }
      if (pUVar12 == local_e0.DebugPtr) break;
      FVar18.Data = FVar18.Data + 0x10;
    }
    FVar3.ReferenceController = (pFVar23->StructMemoryPtr).SharedReferenceCount.ReferenceController;
    pFVar4 = (pFVar23->StructMemoryPtr).Object;
    if (FVar3.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar3.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar3.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_c8 = *(longlong *)FVar18.Data;
    pTStack_c0 = *(TReferenceControllerBase<1> **)(FVar18.Data + 8);
    *(FStructSharedMemory **)FVar18.Data = pFVar4;
    *(TReferenceControllerBase<1> **)(FVar18.Data + 8) = FVar3.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_c0);
LAB_14724d72d:
    pFVar23 = pFVar23 + 1;
    this = local_d8;
  } while( true );
}

// operator() @ 150503950

bool __thiscall `FMassArchetypeData::Initialize'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8036962118190235586>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8036962118190235586>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150503d40

bool __thiscall
`FMassArchetypeData::SetSharedFragmentsData'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8036962118190235234>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8036962118190235234>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150505390

bool __thiscall
`FMassArchetypeData::BatchMoveEntitiesToAnotherArchetype'::__l58::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8036962118190234438>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8036962118190234438>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150505990

bool __thiscall `FMassArchetypeData::Initialize'::__l6::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8036962118190235582>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8036962118190235582>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

