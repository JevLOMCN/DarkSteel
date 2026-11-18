// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 24

// UMassCompositeProcessor @ 1471dc950

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

UMassCompositeProcessor * __thiscall
UMassCompositeProcessor::UMassCompositeProcessor
          (UMassCompositeProcessor *this,FVTableHelper *param_1)

{
  UMassProcessor::UMassProcessor((UMassProcessor *)this,param_1);
  this->_padding_ = (longlong)&___7UMassCompositeProcessor__6B_;
  (this->ChildPipeline).Processors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildPipeline).Processors.ArrayNum = 0;
  (this->ChildPipeline).Processors.ArrayMax = 0;
  (this->ChildPipeline).ExecutionFlags = None;
  (this->GroupName).ComparisonIndex = 0;
  (this->GroupName).Number = 0;
  this->bDebugLogNewProcessingGraph = false;
  (this->FlatProcessingGraph).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FlatProcessingGraph).ArrayNum = 0;
  (this->FlatProcessingGraph).ArrayMax = 0;
  (this->CompletionStatus).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompletionStatus).ArrayNum = 0;
  (this->CompletionStatus).ArrayMax = 0;
  return this;
}

// UMassCompositeProcessor @ 1471dc9c0

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

UMassCompositeProcessor * __thiscall
UMassCompositeProcessor::UMassCompositeProcessor(UMassCompositeProcessor *this)

{
  byte *pbVar1;
  
  UMassProcessor::UMassProcessor((UMassProcessor *)this);
  this->_padding_ = (longlong)&___7UMassCompositeProcessor__6B_;
  (this->ChildPipeline).Processors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildPipeline).Processors.ArrayNum = 0;
  (this->ChildPipeline).Processors.ArrayMax = 0;
  (this->ChildPipeline).ExecutionFlags = None;
  ::FName::FName(&this->GroupName,L"None");
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xfe;
  this->bDebugLogNewProcessingGraph = false;
  (this->FlatProcessingGraph).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FlatProcessingGraph).ArrayNum = 0;
  (this->FlatProcessingGraph).ArrayMax = 0;
  (this->CompletionStatus).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompletionStatus).ArrayNum = 0;
  (this->CompletionStatus).ArrayMax = 0;
  return this;
}

// ~UMassCompositeProcessor @ 1471e0c80

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall UMassCompositeProcessor::~UMassCompositeProcessor(UMassCompositeProcessor *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMassCompositeProcessor__6B_;
  DestructItems<UMassCompositeProcessor::FProcessorCompletion,int>
            ((FProcessorCompletion *)(this->CompletionStatus).AllocatorInstance.Data,
             (this->CompletionStatus).ArrayNum);
  pFVar1 = (this->CompletionStatus).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UMassCompositeProcessor::FDependencyNode,int>
            ((FDependencyNode *)(this->FlatProcessingGraph).AllocatorInstance.Data,
             (this->FlatProcessingGraph).ArrayNum);
  pFVar1 = (this->FlatProcessingGraph).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ChildPipeline).Processors.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UMassProcessor::~UMassProcessor((UMassProcessor *)this);
  return;
}

// AddGroupedProcessor @ 1471ee390

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
UMassCompositeProcessor::AddGroupedProcessor
          (UMassCompositeProcessor *this,FName param_1,UMassProcessor *param_2)

{
  code *pcVar1;
  bool bVar2;
  UMassCompositeProcessor *this_00;
  FName *pFVar3;
  ForAnyElementType FVar4;
  FName local_res10;
  FString local_18;
  
  if ((param_1 == (FName)0x0) || (param_1 == this->GroupName)) {
    FMassRuntimePipeline::AppendProcessor(&this->ChildPipeline,param_2);
    return;
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  this_00 = FindOrAddGroupProcessor(this,param_1,&local_18);
  if (this_00 == (UMassCompositeProcessor *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GroupProcessor",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessor.cpp"
                       ,0x2ac,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FVar4.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    FVar4.Data = local_18.Data.AllocatorInstance.Data;
  }
  pFVar3 = ::FName::FName(&local_res10,(wchar_t *)FVar4.Data);
  AddGroupedProcessor(this_00,*pFVar3,param_2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
    return;
  }
  return;
}

// BuildFlatProcessingGraph @ 1471fdd70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001471fe295) */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMassCompositeProcessor::BuildFlatProcessingGraph
          (UMassCompositeProcessor *this,TArrayView<FMassProcessorOrderInfo_const_,int> *param_1)

{
  uint *puVar1;
  FName *pFVar2;
  FName *pFVar3;
  uint uVar4;
  FDependencyNode *pFVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  code *pcVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  int iVar12;
  ulonglong uVar13;
  TTuple<FName,int> *pTVar14;
  FName *pFVar15;
  ForAnyElementType FVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  FMassProcessorOrderInfo *pFVar21;
  longlong lVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ForElementType<unsigned_int> FVar27;
  FScriptContainerElement *pFVar28;
  int *piVar29;
  FName *pFVar30;
  int *piVar31;
  bool bVar32;
  undefined1 auStackY_218 [32];
  undefined1 local_1c7;
  undefined1 local_1c6;
  undefined1 local_1c5;
  uint local_1c4;
  UMassCompositeProcessor *local_1c0;
  int *local_1b8;
  FScriptContainerElement *local_1b0;
  FName local_1a8;
  FName local_1a0;
  FScriptContainerElement *local_198;
  undefined8 local_190;
  uint local_188;
  uint local_180;
  uint uStack_17c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_178;
  undefined4 local_170;
  uint uStack_16c;
  uint uStack_168;
  undefined4 uStack_164;
  FString local_160;
  uint *local_150;
  FMassProcessorOrderInfo *local_148;
  undefined4 local_140;
  int local_13c;
  TPairInitializer<FName_const_&,int_&&> local_138;
  FMassProcessorOrderInfo *local_128;
  FString local_120;
  longlong *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_108;
  FMassProcessorOrderInfo *local_e8;
  uint *local_e0;
  FLogScopedCategoryAndVerbosityOverride local_d8;
  FName local_c8;
  FString local_c0;
  void *local_b0 [3];
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_218;
  bVar32 = -1 < CpuChannel->Enabled;
  local_1c0 = this;
  if (bVar32) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId536,"Mass_BuildFlatProcessingGraph",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessor.cpp"
               ,0x218);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId536);
  }
  pFVar19 = (FScriptContainerElement *)&this->FlatProcessingGraph;
  piVar29 = &(this->FlatProcessingGraph).ArrayMax;
  pFVar5 = (FDependencyNode *)
           (((TArray<UMassCompositeProcessor::FDependencyNode,TSizedDefaultAllocator<32>_> *)pFVar19
            )->AllocatorInstance).Data;
  iVar12 = (this->FlatProcessingGraph).ArrayNum;
  local_1b8 = piVar29;
  local_1b0 = pFVar19;
  if ((this->FlatProcessingGraph).ArrayMax < 0) {
    DestructItems<UMassCompositeProcessor::FDependencyNode,int>(pFVar5,iVar12);
    (this->FlatProcessingGraph).ArrayNum = 0;
    if (*piVar29 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)pFVar19,0,piVar29);
    }
  }
  else {
    DestructItems<UMassCompositeProcessor::FDependencyNode,int>(pFVar5,iVar12);
    (this->FlatProcessingGraph).ArrayNum = 0;
  }
  uVar17 = 0;
  uVar4 = param_1->ArrayNum;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  if (uVar4 == 0) goto LAB_1471fe11f;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar4);
  }
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_98,uVar4);
  uVar20 = 1;
  if (3 < uVar4) {
    uVar25 = (ulonglong)((uVar4 >> 1) + 7) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_140 = (undefined4)lVar8;
    uVar20 = 1 << ((byte)lVar8 & 0x1f);
  }
  if ((local_50 != 0) && ((int)uVar20 <= (int)local_50)) goto LAB_1471fe11f;
  local_50 = uVar20;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar20 != 0) {
    uVar23 = uVar20;
    if (uVar20 < 2) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar23 = 0;
        goto LAB_1471fdf3b;
      }
    }
    else {
LAB_1471fdf3b:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar23,4);
    }
    if (0 < (int)uVar20) {
      uVar26 = (ulonglong)uVar20;
      uVar25 = uVar17;
      do {
        FVar16.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar16.Data = local_58.Data;
        }
        uVar13 = uVar25 & (longlong)(int)uVar20 - 1U;
        uVar25 = uVar25 + 1;
        *(undefined4 *)(FVar16.Data + uVar13 * 4) = 0xffffffff;
        uVar26 = uVar26 - 1;
      } while (uVar26 != 0);
    }
  }
  if (local_50 != 0) {
    pTStack_178 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    local_180 = 0;
    uStack_17c = 1;
    uStack_16c = 0;
    uStack_168 = 0;
    if (local_70 != 0) {
      FVar27 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar27 = local_78;
      }
      uVar20 = *(uint *)FVar27;
      uVar25 = uVar17;
      while (uVar20 == 0) {
        uStack_168 = (int)uVar25 + 0x20;
        uVar25 = (ulonglong)uStack_168;
        iVar12 = (int)uVar17;
        local_180 = iVar12 + 1;
        uVar17 = (ulonglong)local_180;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_180)
        goto LAB_1471fe05d;
        uVar20 = ((uint *)((longlong)FVar27 + 4))[iVar12];
      }
      uStack_17c = -uVar20 & uVar20;
      uVar17 = (ulonglong)uStack_17c * 2 + 1;
      lVar8 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_13c = (int)lVar8;
      uStack_16c = local_13c + -1 + uStack_168;
      uVar17 = (ulonglong)uStack_16c;
      if ((int)local_70 < (int)uStack_16c) {
LAB_1471fe05d:
        uVar17 = (ulonglong)local_70;
        uStack_16c = local_70;
      }
    }
    local_170 = 0xffffffff;
    local_110 = (longlong *)local_98;
    local_108._padding_ = CONCAT44(uStack_17c,local_180);
    local_108.CurrentBitIndex = uStack_16c;
    local_108.UnvisitedBitMask = 0xffffffff;
    local_108._28_4_ = uStack_164;
    local_108.BaseBitIndex = uStack_168;
    piVar29 = local_1b8;
    local_108.Array = pTStack_178;
    if ((int)uVar17 < (int)local_70) {
      do {
        iVar12 = (int)uVar17;
        uVar6 = *(undefined8 *)(*local_110 + (longlong)iVar12 * 0x14);
        lVar8 = *local_110 + (longlong)iVar12 * 0x14;
        uVar20 = ::GetTypeHash((FNameEntryId)(uint)uVar6);
        uVar20 = local_50 - 1 & uVar20 + (int)((ulonglong)uVar6 >> 0x20);
        *(uint *)(lVar8 + 0x10) = uVar20;
        FVar16.Data = local_60;
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FVar16.Data = local_58.Data;
        }
        uVar17 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar20;
        *(undefined4 *)(lVar8 + 0xc) = *(undefined4 *)(FVar16.Data + uVar17 * 4);
        *(int *)(FVar16.Data + uVar17 * 4) = iVar12;
        local_108.UnvisitedBitMask = local_108.UnvisitedBitMask & ~local_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_108);
        uVar17 = (ulonglong)(uint)local_108.CurrentBitIndex;
        piVar29 = local_1b8;
      } while (local_108.CurrentBitIndex < (local_108.Array)->NumBits);
    }
  }
LAB_1471fe11f:
  pFVar21 = param_1->DataPtr;
  local_128 = pFVar21 + (int)uVar4;
  local_148 = pFVar21;
  if (pFVar21 != local_128) {
    piVar31 = &(pFVar21->Dependencies).ArrayNum;
    do {
      local_1c4 = (local_1c0->FlatProcessingGraph).ArrayNum;
      local_e0 = &local_1c4;
      local_148 = pFVar21;
      local_e8 = pFVar21;
      TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<FName_const_&,int_&&>_>
                ((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                  *)local_98,&local_138,(bool *)&local_e8);
      local_1a8 = pFVar21->Name;
      pFVar15 = (FName *)(((TArray<UMassCompositeProcessor::FDependencyNode,TSizedDefaultAllocator<32>_>
                            *)pFVar19)->AllocatorInstance).Data;
      local_1a0 = *(FName *)(piVar31 + -6);
      local_198 = (FScriptContainerElement *)0x0;
      local_190 = 0;
      local_188 = 0xffffffff;
      if (((pFVar15 <= &local_1a8) && (&local_1a8 < pFVar15 + (longlong)*piVar29 * 5)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar12 = ((TArray<UMassCompositeProcessor::FDependencyNode,TSizedDefaultAllocator<32>_> *)
               pFVar19)->ArrayNum;
      if (iVar12 == *piVar29) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x828,(ForAnyElementType *)pFVar19,piVar29);
      }
      ((TArray<UMassCompositeProcessor::FDependencyNode,TSizedDefaultAllocator<32>_> *)pFVar19)->
      ArrayNum = iVar12 + 1;
      pFVar2 = (FName *)((((TArray<UMassCompositeProcessor::FDependencyNode,TSizedDefaultAllocator<32>_>
                            *)pFVar19)->AllocatorInstance).Data + (longlong)iVar12 * 0x28);
      *pFVar2 = local_1a8;
      pFVar15 = pFVar2 + 2;
      local_150 = &pFVar2[3].Number;
      *(FScriptContainerElement **)&pFVar15->ComparisonIndex = (FScriptContainerElement *)0x0;
      pFVar2[1] = local_1a0;
      *(FScriptContainerElement **)&pFVar15->ComparisonIndex = local_198;
      pFVar2[3].ComparisonIndex.Value = (uint)local_190;
      *local_150 = local_190._4_4_;
      pFVar2[4].ComparisonIndex.Value = local_188;
      local_190 = 0;
      local_198 = (FScriptContainerElement *)0x0;
      uVar4 = *piVar31;
      local_138.Value = (int *)pFVar2;
      if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
      }
      if ((int)pFVar2[3].Number < (int)uVar4) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar4,(ForAnyElementType *)pFVar15,pFVar2[3].ComparisonIndex.Value,
                   (int *)local_150);
      }
      puVar1 = local_150;
      pFVar30 = (FName *)(((TArray<FName,TSizedDefaultAllocator<32>_> *)(piVar31 + -2))->
                         AllocatorInstance).Data;
      uVar4 = *piVar31;
      pFVar3 = pFVar30 + (int)uVar4;
      while( true ) {
        if (*piVar31 != uVar4) {
          local_1c7 = 0;
          `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_1c7);
        }
        if (pFVar30 == pFVar3) break;
        pTVar14 = TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>
                          *)local_98,*pFVar30);
        if ((pTVar14 == (TTuple<FName,int> *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Pair != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                ,0x288,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        puVar18 = &pTVar14->field_0x8;
        if (((*(FScriptContainerElement **)&pFVar15->ComparisonIndex <= puVar18) &&
            (puVar18 < *(FScriptContainerElement **)&pFVar15->ComparisonIndex +
                       (longlong)(int)pFVar2[3].Number * 4)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar20 = pFVar2[3].ComparisonIndex.Value;
        if (uVar20 == pFVar2[3].Number) {
          uVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)pFVar15,(int *)puVar1);
        }
        pFVar2[3].ComparisonIndex.Value = uVar20 + 1;
        pFVar30 = pFVar30 + 1;
        *(undefined4 *)
         (*(FScriptContainerElement **)&pFVar15->ComparisonIndex + (longlong)(int)uVar20 * 4) =
             *(undefined4 *)puVar18;
      }
      puVar1 = (uint *)(piVar31 + 2);
      pFVar21 = local_148 + 1;
      piVar31 = piVar31 + 0xc;
      (((FName *)((longlong)local_138.Value + 0x20))->ComparisonIndex).Value = *puVar1;
      pFVar19 = local_1b0;
      piVar29 = local_1b8;
      local_148 = pFVar21;
    } while (pFVar21 != local_128);
  }
  pFVar15 = ::FName::FName(&local_c8,L"LogMass");
  FLogScopedCategoryAndVerbosityOverride::FLogScopedCategoryAndVerbosityOverride
            (&local_d8,*pFVar15,Log);
  if (4 < (byte)LogMass._0_1_) {
    ::FName::ToString(&local_1c0->GroupName,&local_c0);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
  }
  local_1c4 = (local_1c0->FlatProcessingGraph).ArrayNum;
  uVar17 = (ulonglong)(int)local_1c4;
  pFVar28 = (local_1c0->FlatProcessingGraph).AllocatorInstance.Data;
  local_1b0 = pFVar28 + uVar17 * 0x28;
  pFVar19 = pFVar28 + 0x18;
  while( true ) {
    pFVar10 = local_1b0;
    if ((local_1c0->FlatProcessingGraph).ArrayNum != (int)uVar17) {
      `TCheckedPointerIterator<UMassCompositeProcessor::FDependencyNode,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_1c6);
    }
    if (pFVar28 == pFVar10) break;
    lVar22 = *(longlong *)(pFVar19 + -8);
    iVar12 = *(int *)pFVar19;
    local_160.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_160.Data.ArrayNum = 0;
    local_160.Data.ArrayMax = 0;
    lVar8 = lVar22 + (longlong)iVar12 * 4;
    while( true ) {
      if (*(int *)pFVar19 != iVar12) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_1c5);
      }
      if (lVar22 == lVar8) break;
      ::FString::PrintfImpl(&local_120,L"%d, ");
      iVar24 = local_120.Data.ArrayNum + -1;
      if (local_120.Data.ArrayNum == 0) {
        iVar24 = 0;
      }
      ::FString::AppendChars(&local_160,(wchar_t *)local_120.Data.AllocatorInstance.Data,iVar24);
      if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.Data.AllocatorInstance.Data);
      }
      lVar22 = lVar22 + 4;
    }
    plVar7 = *(longlong **)(pFVar19 + -0x10);
    if ((plVar7 != (longlong *)0x0) && (4 < (byte)LogMass._0_1_)) {
      (**(code **)(*plVar7 + 0x2c0))(plVar7,local_b0);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
      if (local_b0[0] != (void *)0x0) {
        FMemory::Free(local_b0[0]);
      }
    }
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
    uVar17 = (ulonglong)local_1c4;
    pFVar28 = pFVar28 + 0x28;
    pFVar19 = pFVar19 + 0x28;
  }
  local_1c0->bDebugLogNewProcessingGraph = UE::Mass::Debug::bLogNewProcessingGraph;
  FLogScopedCategoryAndVerbosityOverride::~FLogScopedCategoryAndVerbosityOverride(&local_d8);
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  if (bVar32) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ConfigureQueries @ 147205ea0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UMassCompositeProcessor::ConfigureQueries
          (UMassCompositeProcessor *this,TSharedRef<FMassEntityManager,1> *param_1)

{
  return;
}

// DebugOutputDescription @ 14720fbd0

void __thiscall
UMassCompositeProcessor::DebugOutputDescription
          (UMassCompositeProcessor *this,FOutputDevice *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  FString local_28;
  FString local_18;
  
  if ((this->ChildPipeline).Processors.ArrayNum == 0) {
    ::FName::ToString(&this->GroupName,&local_28);
    FOutputDevice::LogfImpl(param_1,L"%*sGroup %s: []");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      return;
    }
  }
  else {
    ::FName::ToString(&this->GroupName,&local_18);
    FOutputDevice::LogfImpl(param_1,L"%*sGroup %s:");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    pFVar6 = (this->ChildPipeline).Processors.AllocatorInstance.Data;
    iVar2 = (this->ChildPipeline).Processors.ArrayNum;
    if ((iVar2 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar1 = pFVar6 + (longlong)iVar2 * 8;
    for (; pFVar6 != pFVar1; pFVar6 = pFVar6 + 8) {
      plVar3 = *(longlong **)pFVar6;
      if ((plVar3 == (longlong *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Proc",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessor.cpp"
                             ,0x289,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FOutputDevice::Log(param_1,L"\n");
      (**(code **)(*plVar3 + 0x2b8))(plVar3,param_1,param_2 + 3);
    }
  }
  return;
}

// DispatchProcessorTasks @ 147212b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
UMassCompositeProcessor::DispatchProcessorTasks
          (UMassCompositeProcessor *this,TSharedPtr<FMassEntityManager,1> *param_1,
          FMassExecutionContext *param_2,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  uint *puVar3;
  TRefCountPtr<FBaseGraphTask> *pTVar4;
  FScriptContainerElement *pFVar5;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar6;
  longlong *plVar7;
  code *pcVar8;
  UMassCompositeProcessor *pUVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  TRefCountPtr<FBaseGraphTask> TVar15;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar16;
  TRefCountPtr<FBaseGraphTask> *pTVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<FStat_Mass_GroupCompletedTask> FVar19;
  FBaseGraphTask *pFVar20;
  undefined ***pppuVar21;
  longlong lVar22;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar23;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar24;
  FBaseGraphTask *pFVar25;
  uint *puVar26;
  longlong lVar27;
  uint uVar28;
  uint uVar29;
  longlong lVar30;
  undefined1 auStackY_1e8 [32];
  undefined1 local_188;
  undefined1 local_187;
  undefined1 local_186;
  undefined1 local_185;
  undefined1 local_184;
  EExtendedTaskPriority local_183;
  ETaskPriority local_182 [2];
  uint local_180;
  UMassCompositeProcessor *local_178;
  ForAnyElementType local_170;
  int local_168 [2];
  longlong local_160;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *local_158;
  FMassExecutionContext *local_150;
  FString local_148;
  undefined8 *local_138;
  FBaseGraphTask *local_130;
  FString local_128;
  code *local_118;
  undefined **local_108;
  UMassCompositeProcessor *pUStack_100;
  undefined8 local_f8;
  undefined ***local_f0;
  FLogScopedCategoryAndVerbosityOverride local_e8;
  FName local_d8;
  FName local_d0;
  FString local_c8;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_b8;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_88;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  iVar14 = (this->FlatProcessingGraph).ArrayNum;
  local_88.AllocatorInstance.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 4;
  local_178 = this;
  local_158 = param_3;
  local_150 = param_2;
  local_130 = (FBaseGraphTask *)param_1;
  iVar11 = UE::Core::Private::
           ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                     (8,8,iVar14,&local_88.AllocatorInstance,&local_88.ArrayNum,&local_88.ArrayMax);
  FVar24 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_88;
  if (local_88.AllocatorInstance.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0
     ) {
    FVar24 = local_88.AllocatorInstance.SecondaryData;
  }
  DefaultConstructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar24 + (longlong)iVar11 * 8),iVar14);
  local_b8.ArrayNum = 0;
  local_b8.AllocatorInstance.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  local_b8.ArrayMax = 4;
  local_170.Data = (FScriptContainerElement *)0x0;
  local_168[0] = 0;
  local_168[1] = 0;
  local_180 = 0;
  if (0 < (this->FlatProcessingGraph).ArrayNum) {
    local_160 = 0;
    do {
      lVar27 = local_160;
      uVar29 = local_180;
      uVar28 = ~local_180 >> 0x1f;
      uVar12 = 0;
      if ((int)local_180 < (this->FlatProcessingGraph).ArrayNum) {
        uVar12 = uVar28;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        TVar15.Reference = (FBaseGraphTask *)(*pcVar8)();
        return (TRefCountPtr<FBaseGraphTask>)TVar15.Reference;
      }
      pFVar5 = (this->FlatProcessingGraph).AllocatorInstance.Data;
      lVar30 = lVar27;
      if (*(longlong *)(pFVar5 + lVar27 * 0x28 + 8) == 0) {
        local_188 = 0;
        bVar10 = `UMassCompositeProcessor::DispatchProcessorTasks'::__l5::<lambda_1>::operator()
                           (&local_188);
        if (bVar10) goto LAB_147212c6a;
      }
      else {
LAB_147212c6a:
        uVar29 = *(uint *)(pFVar5 + lVar27 * 0x28 + 0x18);
        if ((int)uVar29 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar29);
        }
        if (local_b8.ArrayMax < (int)uVar29) {
          FVar24 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_b8;
          if (local_b8.AllocatorInstance.SecondaryData !=
              (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar24 = local_b8.AllocatorInstance.SecondaryData;
          }
          DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                    ((TRefCountPtr<FBaseGraphTask> *)FVar24,local_b8.ArrayNum);
          local_b8.ArrayNum = 0;
          if (local_b8.ArrayMax != uVar29) {
            UE::Core::Private::
            ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                      (8,8,uVar29,&local_b8.AllocatorInstance,0,&local_b8.ArrayMax);
          }
        }
        else {
          FVar24 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_b8;
          if (local_b8.AllocatorInstance.SecondaryData !=
              (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar24 = local_b8.AllocatorInstance.SecondaryData;
          }
          DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                    ((TRefCountPtr<FBaseGraphTask> *)FVar24,local_b8.ArrayNum);
          local_b8.ArrayNum = 0;
        }
        puVar26 = *(uint **)(pFVar5 + lVar27 * 0x28 + 0x10);
        iVar14 = *(int *)(pFVar5 + lVar27 * 0x28 + 0x18);
        puVar3 = puVar26 + iVar14;
        while( true ) {
          if (*(int *)(pFVar5 + lVar27 * 0x28 + 0x18) != iVar14) {
            local_187 = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_187);
          }
          if (puVar26 == puVar3) break;
          uVar29 = *puVar26;
          uVar12 = 0;
          if ((int)uVar29 < local_88.ArrayNum) {
            uVar12 = ~uVar29 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            TVar15.Reference = (FBaseGraphTask *)(*pcVar8)();
            return (TRefCountPtr<FBaseGraphTask>)TVar15.Reference;
          }
          FVar24 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_88;
          if (local_88.AllocatorInstance.SecondaryData !=
              (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar24 = local_88.AllocatorInstance.SecondaryData;
          }
          FVar16 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_b8;
          if (local_b8.AllocatorInstance.SecondaryData !=
              (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar16 = local_b8.AllocatorInstance.SecondaryData;
          }
          FVar24 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)
                   ((longlong)FVar24 + (longlong)(int)uVar29 * 8);
          if ((ulonglong)FVar16 <= (ulonglong)FVar24) {
            FVar16 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_b8;
            if (local_b8.AllocatorInstance.SecondaryData !=
                (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
              FVar16 = local_b8.AllocatorInstance.SecondaryData;
            }
            if (((ulonglong)FVar24 < (ulonglong)((longlong)FVar16 + (longlong)local_b8.ArrayMax * 8)
                ) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar10)) {
              pcVar8 = (code *)swi(3);
              TVar15.Reference = (FBaseGraphTask *)(*pcVar8)();
              return (TRefCountPtr<FBaseGraphTask>)TVar15.Reference;
            }
          }
          if (local_b8.ArrayNum == local_b8.ArrayMax) {
            local_b8.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                           (0x808,&local_b8.AllocatorInstance,&local_b8.ArrayMax);
          }
          lVar22 = (longlong)local_b8.ArrayNum;
          FVar16 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_b8;
          if (local_b8.AllocatorInstance.SecondaryData !=
              (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar16 = local_b8.AllocatorInstance.SecondaryData;
          }
          local_b8.ArrayNum = local_b8.ArrayNum + 1;
          ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar16 + lVar22 * 8))->Reference =
               (FBaseGraphTask *)0x0;
          TVar15.Reference = *(FBaseGraphTask **)FVar24;
          ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar16 + lVar22 * 8))->Reference =
               TVar15.Reference;
          if (TVar15.Reference != (FBaseGraphTask *)0x0) {
            LOCK();
            *(int *)&(TVar15.Reference)->field_0x30 = *(int *)&(TVar15.Reference)->field_0x30 + 1;
            UNLOCK();
          }
          puVar26 = puVar26 + 1;
        }
        if (local_168[0] != 0) {
          puVar26 = *(uint **)(pFVar5 + lVar27 * 0x28 + 0x10);
          iVar14 = *(int *)(pFVar5 + lVar27 * 0x28 + 0x18);
          puVar3 = puVar26 + iVar14;
          while( true ) {
            if (*(int *)(pFVar5 + lVar27 * 0x28 + 0x18) != iVar14) {
              local_186 = 0;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_186);
            }
            lVar30 = local_160;
            if (puVar26 == puVar3) break;
            uVar29 = *puVar26;
            uVar12 = 0;
            if ((int)uVar29 < local_168[0]) {
              uVar12 = ~uVar29 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              TVar15.Reference = (FBaseGraphTask *)(*pcVar8)();
              return (TRefCountPtr<FBaseGraphTask>)TVar15.Reference;
            }
            pTVar23 = (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                       *)(local_170.Data + (longlong)(int)uVar29 * 0x30);
            if ((&local_b8 == pTVar23) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(void*)this != (void*)&Source",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x96e,L""), bVar10)) {
              pcVar8 = (code *)swi(3);
              TVar15.Reference = (FBaseGraphTask *)(*pcVar8)();
              return (TRefCountPtr<FBaseGraphTask>)TVar15.Reference;
            }
            iVar11 = pTVar23->ArrayNum;
            if (iVar11 != 0) {
              iVar13 = UE::Core::Private::
                       ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                                 (8,8,iVar11,&local_b8.AllocatorInstance,&local_b8.ArrayNum,
                                  &local_b8.ArrayMax);
              pTVar6 = *(TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                         **)&(pTVar23->AllocatorInstance).SecondaryData.field_0x0;
              if (pTVar6 != (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                             *)0x0) {
                pTVar23 = pTVar6;
              }
              FVar24 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_b8;
              if (local_b8.AllocatorInstance.SecondaryData !=
                  (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
                FVar24 = local_b8.AllocatorInstance.SecondaryData;
              }
              ConstructItems<TRefCountPtr<FBaseGraphTask>,TRefCountPtr<FBaseGraphTask>,int>
                        ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar24 + (longlong)iVar13 * 8),
                         (TRefCountPtr<FBaseGraphTask> *)pTVar23,iVar11);
            }
            puVar26 = puVar26 + 1;
          }
        }
        plVar7 = *(longlong **)(pFVar5 + lVar27 * 0x28 + 8);
        if (*(char *)((longlong)plVar7 + 99) == '\0') {
          if (local_168[0] == 0) {
            iVar14 = (local_178->FlatProcessingGraph).ArrayNum;
            iVar11 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x30,8,iVar14,&local_170,local_168,local_168 + 1);
            DefaultConstructItems<TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int>
                      (local_170.Data + (longlong)iVar11 * 0x30,iVar14);
          }
          uVar29 = local_180;
          uVar12 = 0;
          if ((int)local_180 < local_168[0]) {
            uVar12 = uVar28;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            TVar15.Reference = (FBaseGraphTask *)(*pcVar8)();
            return (TRefCountPtr<FBaseGraphTask>)TVar15.Reference;
          }
          FVar24 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)
                   (lVar30 * 0x30 + (longlong)local_170.Data);
          if ((FVar24 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_b8) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)this != (void*)&Source",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x986,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            TVar15.Reference = (FBaseGraphTask *)(*pcVar8)();
            return (TRefCountPtr<FBaseGraphTask>)TVar15.Reference;
          }
          lVar27 = (longlong)local_b8.ArrayNum;
          this = local_178;
          if (local_b8.ArrayNum != 0) {
            iVar14 = UE::Core::Private::
                     ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                               (8,8,local_b8.ArrayNum,
                                (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)FVar24,
                                (int *)((longlong)FVar24 + 0x28),(int *)((longlong)FVar24 + 0x2c));
            FVar16 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_b8;
            if (local_b8.AllocatorInstance.SecondaryData !=
                (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
              FVar16 = local_b8.AllocatorInstance.SecondaryData;
            }
            if (*(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar24 + 0x20) !=
                (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
              FVar24 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar24 + 0x20);
            }
            memmove((void *)((longlong)FVar24 + (longlong)iVar14 * 8),(void *)FVar16,lVar27 << 3);
            local_b8.ArrayNum = 0;
            this = local_178;
          }
        }
        else {
          pTVar17 = (TRefCountPtr<FBaseGraphTask> *)
                    (**(code **)(*plVar7 + 0x2b0))(plVar7,&local_138,local_150,local_158);
          uVar29 = local_180;
          uVar12 = 0;
          if ((int)local_180 < local_88.ArrayNum) {
            uVar12 = uVar28;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            TVar15.Reference = (FBaseGraphTask *)(*pcVar8)();
            return (TRefCountPtr<FBaseGraphTask>)TVar15.Reference;
          }
          FVar24 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_88;
          if (local_88.AllocatorInstance.SecondaryData !=
              (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar24 = local_88.AllocatorInstance.SecondaryData;
          }
          pTVar4 = (TRefCountPtr<FBaseGraphTask> *)((longlong)FVar24 + lVar30 * 8);
          if (pTVar4 != pTVar17) {
            pFVar25 = pTVar4->Reference;
            pTVar4->Reference = pTVar17->Reference;
            pTVar17->Reference = (FBaseGraphTask *)0x0;
            if (pFVar25 != (FBaseGraphTask *)0x0) {
              LOCK();
              puVar1 = &pFVar25->field_0x30;
              iVar14 = *(int *)puVar1;
              *(int *)puVar1 = *(int *)puVar1 + -1;
              UNLOCK();
              if (iVar14 == 1) {
                (*(code *)**(undefined8 **)pFVar25)(pFVar25,1);
              }
            }
          }
          this = local_178;
          if (local_138 != (undefined8 *)0x0) {
            LOCK();
            piVar2 = (int *)(local_138 + 6);
            iVar14 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if ((iVar14 == 1) && (local_138 != (undefined8 *)0x0)) {
              (**(code **)*local_138)(local_138,1);
              this = local_178;
            }
          }
        }
      }
      local_180 = uVar29 + 1;
      local_160 = lVar30 + 1;
    } while ((int)local_180 < (this->FlatProcessingGraph).ArrayNum);
  }
  if ((UE::Mass::Debug::bLogProcessingGraphEveryFrame != false) ||
     (this->bDebugLogNewProcessingGraph != false)) {
    pFVar18 = ::FName::FName(&local_d8,L"LogMass");
    FLogScopedCategoryAndVerbosityOverride::FLogScopedCategoryAndVerbosityOverride
              (&local_e8,*pFVar18,Log);
    local_180 = 0;
    if (0 < (this->FlatProcessingGraph).ArrayNum) {
      local_160 = 0;
      local_158 = (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                   *)0x0;
      do {
        pTVar23 = local_158;
        local_150 = (FMassExecutionContext *)CONCAT44(local_150._4_4_,~local_180 >> 0x1f);
        uVar29 = 0;
        if ((int)local_180 < (this->FlatProcessingGraph).ArrayNum) {
          uVar29 = ~local_180 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          TVar15.Reference = (FBaseGraphTask *)(*pcVar8)();
          return (TRefCountPtr<FBaseGraphTask>)TVar15.Reference;
        }
        pUVar9 = local_178;
        pFVar5 = (this->FlatProcessingGraph).AllocatorInstance.Data;
        local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_148.Data.ArrayNum = 0;
        local_148.Data.ArrayMax = 0;
        puVar26 = *(uint **)(pFVar5 + (longlong)pTVar23 + 0x10);
        iVar14 = *(int *)(pFVar5 + (longlong)pTVar23 + 0x18);
        puVar3 = puVar26 + iVar14;
        while( true ) {
          if (*(int *)(pFVar5 + (longlong)pTVar23 + 0x18) != iVar14) {
            local_185 = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_185);
          }
          uVar29 = local_180;
          if (puVar26 == puVar3) break;
          uVar29 = *puVar26;
          uVar12 = 0;
          if ((int)uVar29 < (pUVar9->FlatProcessingGraph).ArrayNum) {
            uVar12 = ~uVar29 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            TVar15.Reference = (FBaseGraphTask *)(*pcVar8)();
            return (TRefCountPtr<FBaseGraphTask>)TVar15.Reference;
          }
          ::FName::ToString((FName *)((pUVar9->FlatProcessingGraph).AllocatorInstance.Data +
                                     (longlong)(int)uVar29 * 0x28),&local_c8);
          ::FString::PrintfImpl(&local_128,L"%s, ");
          uVar29 = local_128.Data.ArrayNum - 1;
          if (local_128.Data.ArrayNum == 0) {
            uVar29 = 0;
          }
          ::FString::AppendChars(&local_148,(wchar_t *)local_128.Data.AllocatorInstance.Data,uVar29)
          ;
          if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
          }
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
          }
          puVar26 = puVar26 + 1;
        }
        iVar14 = (int)local_150;
        if ((*(longlong *)(pFVar5 + (longlong)pTVar23 + 8) == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("ProcessingNode.Processor",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessor.cpp"
                                ,0x1de,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          TVar15.Reference = (FBaseGraphTask *)(*pcVar8)();
          return (TRefCountPtr<FBaseGraphTask>)TVar15.Reference;
        }
        lVar27 = local_160;
        iVar11 = 0;
        if ((int)uVar29 < local_88.ArrayNum) {
          iVar11 = iVar14;
        }
        if ((iVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          TVar15.Reference = (FBaseGraphTask *)(*pcVar8)();
          return (TRefCountPtr<FBaseGraphTask>)TVar15.Reference;
        }
        FVar24 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_88;
        if (local_88.AllocatorInstance.SecondaryData !=
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar24 = local_88.AllocatorInstance.SecondaryData;
        }
        if ((((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar24 + lVar27 * 8))->Reference ==
             (FBaseGraphTask *)0x0) &&
           (*(char *)(*(longlong *)(pFVar5 + (longlong)pTVar23 + 8) + 99) != '\0')) {
          local_184 = 0;
          `UMassCompositeProcessor::DispatchProcessorTasks'::__l48::<lambda_2>::operator()
                    (&local_184);
        }
        if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.Data.AllocatorInstance.Data);
        }
        local_160 = lVar27 + 1;
        local_180 = uVar29 + 1;
        local_158 = (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                     *)((longlong)local_158 + 0x28);
        this = local_178;
      } while ((int)local_180 < (local_178->FlatProcessingGraph).ArrayNum);
    }
    this->bDebugLogNewProcessingGraph = false;
    FLogScopedCategoryAndVerbosityOverride::~FLogScopedCategoryAndVerbosityOverride(&local_e8);
  }
  FVar19 = StatPtr_Mass_GroupCompletedTask;
  if (StatPtr_Mass_GroupCompletedTask == (FThreadSafeStaticStat<FStat_Mass_GroupCompletedTask>)0x0)
  {
    pFVar18 = ::FName::FName(&local_d0,"Mass_GroupCompletedTask");
    FVar19 = (FThreadSafeStaticStat<FStat_Mass_GroupCompletedTask>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_Mass_GroupCompletedTask,*pFVar18,
                        L"MassProcessor Group Completed","STATGROUP_TaskGraphTasks",
                        "STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  pFVar25 = (FBaseGraphTask *)0x0;
  local_f0 = (undefined ***)0x0;
  local_108 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UMassCompositeProcessor::DispatchProcessorTasks'::`2'::<lambda_3>,1,0>
               ::_vftable_;
  local_118 = UE::Core::Private::Function::
              TFunctionRefCaller<`UMassCompositeProcessor::DispatchProcessorTasks'::__l2::<lambda_3>,void>
              ::Call;
  pUStack_100 = this;
  pFVar20 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
  if (pFVar20 != (FBaseGraphTask *)0x0) {
    FBaseGraphTask::FBaseGraphTask(pFVar20,&local_88);
    *(undefined ***)pFVar20 = &___7__TGraphTask_V__TFunctionGraphTaskImpl___A6AXXZ_0A_____6B_;
    pFVar25 = pFVar20;
  }
  *(FThreadSafeStaticStat<FStat_Mass_GroupCompletedTask> *)&pFVar25[1].field_0x8 = FVar19;
  *(code **)&pFVar25[1].field_0x18 = local_118;
  *(undefined ****)&pFVar25[1].field_0x40 = local_f0;
  *(undefined ***)&pFVar25[1].field_0x28 = local_108;
  *(UMassCompositeProcessor **)&pFVar25[1].field_0x30 = pUStack_100;
  *(undefined8 *)&pFVar25[1].field_0x38 = local_f8;
  if (*(longlong *)&pFVar25[1].field_0x18 != 0) {
    local_118 = (code *)0x0;
  }
  *(undefined4 *)&pFVar25[1].field_0x48 = 0x6ff;
  UE::Tasks::Private::TranslatePriority(AnyHiPriThreadHiPriTask,local_182,&local_183);
  FBaseGraphTask::Init(pFVar25,L"GraphTask",local_182[0],local_183,None);
  pFVar20 = local_130;
  *(FBaseGraphTask **)local_130 = pFVar25;
  if (pFVar25 != (FBaseGraphTask *)0x0) {
    LOCK();
    *(int *)&pFVar25->field_0x30 = *(int *)&pFVar25->field_0x30 + 1;
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(*(FTaskBase **)local_130,0x130);
  if (local_118 != (code *)0x0) {
    pppuVar21 = &local_108;
    if (local_f0 != (undefined ***)0x0) {
      pppuVar21 = local_f0;
    }
    (*(code *)(*pppuVar21)[2])();
  }
  DestructItems<TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,int>
            ((TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              *)local_170.Data,local_168[0]);
  if ((TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
       *)local_170.Data !=
      (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
       *)0x0) {
    FMemory::Free(local_170.Data);
  }
  FVar24 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_b8;
  if (local_b8.AllocatorInstance.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0
     ) {
    FVar24 = local_b8.AllocatorInstance.SecondaryData;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)FVar24,local_b8.ArrayNum);
  if (local_b8.AllocatorInstance.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0
     ) {
    FMemory::Free((void *)local_b8.AllocatorInstance.SecondaryData);
  }
  FVar24 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_88;
  if (local_88.AllocatorInstance.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0
     ) {
    FVar24 = local_88.AllocatorInstance.SecondaryData;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)FVar24,local_88.ArrayNum);
  if (local_88.AllocatorInstance.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0
     ) {
    FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
  }
  return (TRefCountPtr<FBaseGraphTask>)pFVar20;
}

// Execute @ 147216490

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
UMassCompositeProcessor::Execute
          (UMassCompositeProcessor *this,FMassEntityManager *param_1,FMassExecutionContext *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UMassProcessor *this_00;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  
  iVar2 = (this->ChildPipeline).Processors.ArrayNum;
  pFVar5 = (this->ChildPipeline).Processors.AllocatorInstance.Data;
  if ((iVar2 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  do {
    if (pFVar5 == pFVar1) {
      return;
    }
    this_00 = *(UMassProcessor **)pFVar5;
    if (this_00 == (UMassProcessor *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6262752578942009850>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessor.cpp"
                         ,0x1fa,"Proc");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else if (this_00->ActivationState != Inactive) {
      UMassProcessor::CallExecute(this_00,param_1,param_2);
    }
    pFVar5 = pFVar5 + 8;
  } while( true );
}

// FindOrAddGroupProcessor @ 14721aa40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

UMassCompositeProcessor * __thiscall
UMassCompositeProcessor::FindOrAddGroupProcessor
          (UMassCompositeProcessor *this,FName param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UObject *pUVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  FName *pFVar8;
  UClass *pUVar9;
  UMassCompositeProcessor *pUVar10;
  longlong *plVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  FName local_res10 [3];
  undefined1 auStack_128 [32];
  undefined1 local_108 [8];
  FString local_100;
  FString local_f0;
  FString local_e0;
  FName local_d0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_res10[0] = param_1;
  ::FName::ToString(local_res10,&local_e0);
  local_100.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100.Data.ArrayNum = 0;
  local_100.Data.ArrayMax = 0;
  ::FString::FString(&local_f0,L".");
  bVar7 = ::FString::Split(&local_e0,&local_f0,&local_100,param_2);
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  if (bVar7) {
    FVar12.Data = (FScriptContainerElement *)L"";
    if (local_100.Data.ArrayNum != 0) {
      FVar12.Data = local_100.Data.AllocatorInstance.Data;
    }
    pFVar8 = ::FName::FName(&local_d0,(wchar_t *)FVar12.Data);
    local_res10[0] = *pFVar8;
  }
  FVar6 = local_res10[0];
  pFVar13 = (this->ChildPipeline).Processors.AllocatorInstance.Data;
  iVar2 = (this->ChildPipeline).Processors.ArrayNum;
  pFVar1 = pFVar13 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ChildPipeline).Processors.ArrayNum != iVar2) {
      local_108[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMassProcessor>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_108);
    }
    if (pFVar13 == pFVar1) break;
    pUVar10 = *(UMassCompositeProcessor **)pFVar13;
    if (pUVar10 != (UMassCompositeProcessor *)0x0) {
      pUVar9 = StaticClass();
      iVar3 = (int)pUVar9->_padding_;
      if (((iVar3 <= *(int *)(pUVar10->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
           &pUVar9->_padding_)) && (pUVar10->GroupName == FVar6)) goto LAB_14721ac0c;
    }
    pFVar13 = pFVar13 + 8;
  }
  if ((this->_padding_ == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetOuter()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassProcessor.cpp"
                         ,0x2be,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pUVar10 = (UMassCompositeProcessor *)(*pcVar5)();
    return pUVar10;
  }
  pUVar4 = (UObject *)this->_padding_;
  FObjectInitializer::AssertIfInConstructor
            (pUVar4,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar9 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,pUVar9);
  local_c8._8_8_ = pUVar4;
  pUVar10 = (UMassCompositeProcessor *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar11 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar11 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  SetGroupName(pUVar10,local_res10[0]);
  FMassRuntimePipeline::AppendProcessor(&this->ChildPipeline,(UMassProcessor *)pUVar10);
LAB_14721ac0c:
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  return pUVar10;
}

// GetPrivateStaticClass @ 1472246d0

UClass * __cdecl UMassCompositeProcessor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMassCompositeProcessor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntity",L"MassCompositeProcessor",
               &Z_Registration_Info_UClass_UMassCompositeProcessor.InnerSingleton,
               StaticRegisterNativesUMassCompositeProcessor,0x128,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UMassCompositeProcessor>,
               InternalVTableHelperCtorCaller<UMassCompositeProcessor>,local_res8,
               UMassProcessor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMassCompositeProcessor.InnerSingleton;
}

// GetProcessorName @ 147225320

FString * __thiscall
UMassCompositeProcessor::GetProcessorName
          (UMassCompositeProcessor *this,FString *__return_storage_ptr__)

{
  ::FName::ToString(&this->GroupName,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InitializeInternal @ 14722fd40

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UMassCompositeProcessor::InitializeInternal
          (UMassCompositeProcessor *this,UObject *param_1,TSharedRef<FMassEntityManager,1> *param_2)

{
  FMassRuntimePipeline::Initialize(&this->ChildPipeline,param_1,param_2);
  return;
}

// SetChildProcessors @ 14724b640

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
UMassCompositeProcessor::SetChildProcessors
          (UMassCompositeProcessor *this,
          TArray<UMassProcessor_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  FMassRuntimePipeline *pFVar7;
  
  iVar2 = param_1->ArrayNum;
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (iVar2 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar7 = &this->ChildPipeline;
  iVar3 = (this->ChildPipeline).Processors.ArrayMax;
  piVar1 = &(this->ChildPipeline).Processors.ArrayMax;
  (this->ChildPipeline).Processors.ArrayNum = 0;
  if (iVar3 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)pFVar7,0,piVar1);
  }
  iVar3 = *piVar1;
  (this->ChildPipeline).Processors.ArrayNum = iVar2;
  if ((iVar2 == 0) && (iVar3 == 0)) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar2,iVar3,(ForAnyElementType *)pFVar7,iVar2,piVar1);
    ConstructItems<TObjectPtr<UMassProcessor>,UMassProcessor_*,int>
              ((pFVar7->Processors).AllocatorInstance.Data,(UMassProcessor **)pFVar4,iVar2);
  }
  return;
}

// SetChildProcessors @ 14724b720

void __thiscall
UMassCompositeProcessor::SetChildProcessors
          (UMassCompositeProcessor *this,
          TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FMassRuntimePipeline *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar2 = &this->ChildPipeline;
  iVar3 = (this->ChildPipeline).Processors.ArrayMax;
  piVar1 = &(this->ChildPipeline).Processors.ArrayMax;
  (this->ChildPipeline).Processors.ArrayNum = 0;
  if (iVar3 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)pFVar2,0,piVar1);
  }
  if (pFVar2 != (FMassRuntimePipeline *)param_1) {
    pFVar4 = (pFVar2->Processors).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar2->Processors).AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ChildPipeline).Processors.ArrayNum = param_1->ArrayNum;
    *piVar1 = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  return;
}

// SetChildProcessors @ 14724b7b0

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
UMassCompositeProcessor::SetChildProcessors
          (UMassCompositeProcessor *this,TArrayView<UMassProcessor_*,int> *param_1)

{
  int *piVar1;
  FMassRuntimePipeline *pFVar2;
  int iVar3;
  UMassProcessor **ppUVar4;
  undefined8 uVar5;
  int iVar6;
  
  ppUVar4 = param_1->DataPtr;
  uVar5 = *(undefined8 *)&param_1->ArrayNum;
  pFVar2 = &this->ChildPipeline;
  iVar3 = (this->ChildPipeline).Processors.ArrayMax;
  piVar1 = &(this->ChildPipeline).Processors.ArrayMax;
  (this->ChildPipeline).Processors.ArrayNum = 0;
  if (iVar3 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)pFVar2,0,piVar1);
  }
  iVar3 = *piVar1;
  iVar6 = (int)uVar5;
  (this->ChildPipeline).Processors.ArrayNum = iVar6;
  if ((iVar6 == 0) && (iVar3 == 0)) {
    *piVar1 = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar6,iVar3,(ForAnyElementType *)pFVar2,iVar6,piVar1);
  ConstructItems<TObjectPtr<UMassProcessor>,UMassProcessor_*,int>
            ((pFVar2->Processors).AllocatorInstance.Data,ppUVar4,iVar6);
  return;
}

// SetGroupName @ 14724cbc0

void __thiscall UMassCompositeProcessor::SetGroupName(UMassCompositeProcessor *this,FName param_1)

{
  FString *pFVar1;
  longlong *plVar2;
  FString local_18;
  
  this->GroupName = param_1;
  pFVar1 = ::FName::ToString(&this->GroupName,&local_18);
  plVar2 = &this->_padding_;
  if ((FString *)plVar2 != pFVar1) {
    if ((void *)*plVar2 != (void *)0x0) {
      FMemory::Free((void *)*plVar2);
    }
    *plVar2 = (longlong)(pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&this->_padding_ = (pFVar1->Data).ArrayNum;
    *(int *)((longlong)&this->_padding_ + 4) = (pFVar1->Data).ArrayMax;
    (pFVar1->Data).ArrayNum = 0;
    (pFVar1->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetProcessingPhase @ 14724cc40

void __thiscall
UMassCompositeProcessor::SetProcessingPhase
          (UMassCompositeProcessor *this,EMassProcessingPhase param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  
  *(EMassProcessingPhase *)&this->_padding_ = param_1;
  iVar2 = (this->ChildPipeline).Processors.ArrayNum;
  pFVar5 = (this->ChildPipeline).Processors.AllocatorInstance.Data;
  if ((iVar2 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = pFVar5 + (longlong)iVar2 * 8;
  for (; pFVar5 != pFVar1; pFVar5 = pFVar5 + 8) {
    (**(code **)(**(longlong **)pFVar5 + 0x2d8))(*(longlong **)pFVar5,param_1);
  }
  return;
}

// SetProcessors @ 14724d190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UMassCompositeProcessor::SetProcessors
          (UMassCompositeProcessor *this,TArrayView<UMassProcessor_*,int> *param_1,
          TSharedPtr<FMassEntityManager,1> *param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStackY_178 [32];
  TArray<FMassProcessorOrderInfo,TSizedDefaultAllocator<32>_> local_148;
  UMassProcessor **local_138;
  int iStack_130;
  undefined4 uStack_12c;
  TSharedPtr<FMassEntityManager,1> local_128;
  FMassProcessorOrderInfo *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  FMassProcessorOrderInfo *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  TArrayView<FMassProcessorOrderInfo,int> local_f8;
  FMassProcessorOrderInfo *local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [56];
  ForAnyElementType local_a0;
  undefined8 local_98;
  TBitArray<FDefaultBitArrayAllocator> local_90;
  undefined8 uStack_70;
  void *local_60;
  undefined4 local_58;
  void *local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_138 = param_1->DataPtr;
  iStack_130 = param_1->ArrayNum;
  local_d8._12_4_ = uStack_12c;
  local_d8._8_4_ = iStack_130;
  local_128.Object = param_2->Object;
  local_128.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  local_90._24_8_ = ___xmm_00000000ffffffff0000008000000000;
  uStack_70 = _UNK_150631d98;
  local_d8[0x10] = false;
  local_d8[0x11] = true;
  local_d8._24_8_ = (FScriptContainerElement *)0x0;
  local_d8._32_4_ = 0;
  local_d8._36_4_ = 0;
  local_d8._40_8_ = (FNode *)0x0;
  local_d8._48_4_ = 0;
  local_d8._52_4_ = 0;
  local_a0.Data = (FScriptContainerElement *)0x0;
  local_98 = 0;
  local_90.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_60 = (void *)0x0;
  local_58 = 0;
  local_40 = (void *)0x0;
  local_38 = 0;
  local_34 = 0x80;
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0;
  if (local_128.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_d8._0_8_ = local_138;
  FMassProcessorDependencySolver::ResolveDependencies
            ((FMassProcessorDependencySolver *)local_d8,&local_148,&local_128,(FResult *)0x0);
  iStack_110 = local_148.ArrayNum;
  local_118 = (FMassProcessorOrderInfo *)local_148.AllocatorInstance.Data;
  if (local_148.ArrayNum < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_f8._12_4_ = uStack_10c;
  local_f8.ArrayNum = iStack_110;
  local_f8.DataPtr = local_118;
  UpdateProcessorsCollection(this,&local_f8,None);
  if ((bool)local_d8[0x10] == false) {
    iVar3 = local_148.ArrayNum;
    pcVar1 = *(code **)(this->_padding_ + 0x318);
    local_108 = (FMassProcessorOrderInfo *)local_148.AllocatorInstance.Data;
    if (local_148.ArrayNum < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iStack_100 = iVar3;
    uStack_e0 = CONCAT44(uStack_fc,iVar3);
    local_e8 = local_108;
    (*pcVar1)(this,&local_e8);
  }
  DestructItems<FMassProcessorOrderInfo,int>
            ((FMassProcessorOrderInfo *)local_148.AllocatorInstance.Data,local_148.ArrayNum);
  if ((FMassProcessorOrderInfo *)local_148.AllocatorInstance.Data != (FMassProcessorOrderInfo *)0x0)
  {
    FMemory::Free(local_148.AllocatorInstance.Data);
  }
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  local_58 = 0;
  if (local_60 != (void *)0x0) {
    FMemory::Free(local_60);
  }
  uVar2 = local_98 >> 0x20;
  local_98 = local_98 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,&local_a0,0,(int *)((longlong)&local_98 + 4));
  }
  iVar3 = local_90.MaxBits;
  local_90._24_8_ = (ulonglong)(uint)local_90.MaxBits << 0x20;
  uStack_70 = 0xffffffff;
  if (0x80 < (uint)iVar3) {
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
  DestructItems<FMassProcessorDependencySolver::FNode,int>((FNode *)local_d8._40_8_,local_d8._48_4_)
  ;
  if ((FNode *)local_d8._40_8_ != (FNode *)0x0) {
    FMemory::Free((void *)local_d8._40_8_);
  }
  if ((FScriptContainerElement *)local_d8._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d8._24_8_);
  }
  return;
}

// StaticRegisterNativesUMassCompositeProcessor @ 1472506f0

void __cdecl UMassCompositeProcessor::StaticRegisterNativesUMassCompositeProcessor(void)

{
  return;
}

// UpdateProcessorsCollection @ 147253f00

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMassCompositeProcessor::UpdateProcessorsCollection
          (UMassCompositeProcessor *this,TArrayView<FMassProcessorOrderInfo,int> *param_1,
          EProcessorExecutionFlags param_2)

{
  FMassRuntimePipeline *this_00;
  int iVar1;
  FScriptContainerElement *pFVar2;
  UMassProcessor *pUVar3;
  UMassProcessor *pUVar4;
  code *pcVar5;
  bool bVar6;
  ENetMode EVar7;
  UWorld *this_01;
  UClass *this_02;
  ForAnyElementType FVar8;
  FMassProcessorOrderInfo *pFVar9;
  FMassProcessorOrderInfo *pFVar10;
  UMassCompositeProcessor *local_res8;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  
  this_00 = &this->ChildPipeline;
  iVar1 = (this->ChildPipeline).Processors.ArrayNum;
  pFVar2 = (this_00->Processors).AllocatorInstance.Data;
  if ((iVar1 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = iVar1;
  if (iVar1 == 0) {
    local_2c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,&local_38,iVar1,&local_2c);
    ConstructItems<TObjectPtr<UMassProcessor>,TObjectPtr<UMassProcessor>,int>
              (local_38.Data,(TObjectPtr<UMassProcessor> *)pFVar2,iVar1);
  }
  iVar1 = (this->ChildPipeline).Processors.ArrayMax;
  (this->ChildPipeline).Processors.ArrayNum = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this_00,0,&(this->ChildPipeline).Processors.ArrayMax);
  }
  this_01 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  if (param_2 == None) {
    if (this_01 == (UWorld *)0x0) {
      param_2 = All;
    }
    else {
      EVar7 = UWorld::InternalGetNetMode(this_01);
      if (EVar7 == NM_Standalone) {
        param_2 = Standalone;
      }
      else if (EVar7 == NM_DedicatedServer) {
        param_2 = Server;
      }
      else if (EVar7 == NM_ListenServer) {
        param_2 = Client|Server;
      }
      else if (EVar7 == NM_Client) {
        param_2 = Client;
      }
      else {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityUtils.cpp"
                           ,0x24,
                           L"Unsupported ENetMode type (%i) found while determining MASS processor execution flags."
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        param_2 = None;
      }
    }
  }
  this_02 = UMassEntitySettings::StaticClass();
  if ((this_02->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_02);
  }
  if (((char)this->_padding_ == '\x06') &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ProcessingPhase != EMassProcessingPhase::MAX",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntitySettings.h"
                         ,0x26,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar9 = param_1->DataPtr;
  pFVar10 = pFVar9 + param_1->ArrayNum;
  do {
    if (pFVar9 == pFVar10) {
      if (local_38.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data);
      }
      return;
    }
    if (((pFVar9->NodeType == Processor) ||
        (local_res8 = this,
        bVar6 = `UMassCompositeProcessor::UpdateProcessorsCollection'::__l7::<lambda_1>::operator()
                          (&local_res8), bVar6)) &&
       (pUVar3 = pFVar9->Processor, (pUVar3->ExecutionFlags & param_2) != None)) {
      if (pUVar3->bAllowMultipleInstances == '\0') {
        for (FVar8.Data = local_38.Data; FVar8.Data != local_38.Data + (longlong)local_30 * 8;
            FVar8.Data = FVar8.Data + 8) {
          pUVar4 = *(UMassProcessor **)FVar8.Data;
          if ((pUVar4 != (UMassProcessor *)0x0) && (pUVar4->_padding_ == pUVar3->_padding_)) {
            pFVar9->Processor = pUVar4;
            break;
          }
        }
      }
      FMassRuntimePipeline::AppendProcessor(this_00,pFVar9->Processor);
    }
    pFVar9 = pFVar9 + 1;
  } while( true );
}

// operator() @ 150503f40

bool __thiscall
`UMassCompositeProcessor::DispatchProcessorTasks'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6262752578942009769>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6262752578942009769>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505049a0

bool __thiscall
`UMassCompositeProcessor::UpdateProcessorsCollection'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6262752578942009946>);
  if (bVar2) {
    local_res10[0] = *(FName *)(*(longlong *)this + 0xf8);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6262752578942009946>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150504a18;
    }
  }
  bVar2 = false;
LAB_150504a18:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150505b10

bool __thiscall
`UMassCompositeProcessor::DispatchProcessorTasks'::__l48::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6262752578942009830>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6262752578942009830>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

