// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 8

// operator() @ 149bf4440

void __thiscall
`FPCGSkinnedMeshSpawnerElement::PrepareDataInternal'::__l42::<lambda_1>::operator()
          (void *this,UPCGManagedResource *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  UPCGManagedResource *local_18 [2];
  
  if (param_1 != (UPCGManagedResource *)0x0) {
    pUVar6 = Z_Construct_UClass_UPCGManagedISKMComponent_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if ((((iVar5 <= *(int *)(param_1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
          &pUVar6->_padding_)) && ((param_1->Crc).bValid != false)) &&
       ((*(char *)(**(longlong **)((longlong)this + 8) + 0x11c) != '\0' &&
        ((param_1->Crc).Value == *(uint *)(**(longlong **)((longlong)this + 8) + 0x118))))) {
      pFVar2 = *(ForAnyElementType **)this;
      local_18[0] = param_1;
      if ((pFVar2->Data <= (FScriptContainerElement *)local_18) &&
         (((FScriptContainerElement *)local_18 <
           pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8 &&
          (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar4)))) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = *(int *)&pFVar2[1].Data;
      piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,pFVar2,piVar1);
      }
      *(int *)&pFVar2[1].Data = iVar5 + 1;
      *(UPCGManagedResource **)(pFVar2->Data + (longlong)iVar5 * 8) = local_18[0];
      return;
    }
  }
  return;
}

// AbortInternal @ 149bfebe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FPCGSkinnedMeshSpawnerElement::AbortInternal
          (FPCGSkinnedMeshSpawnerElement *this,FPCGContext *param_1)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  UObject *pUVar5;
  FWeakObjectPtr *pFVar6;
  bool bVar7;
  undefined1 auStackY_b8 [32];
  undefined1 local_88 [8];
  FWeakObjectPtr local_80;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId515,"FPCGSkinnedMeshSpawnerElement::AbortInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSkinnedMeshSpawner.cpp"
               ,0x203);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId515);
  }
  if (param_1 != (FPCGContext *)0x0) {
    pFVar6 = *(FWeakObjectPtr **)&param_1[1].DynamicDependencies.HashSize;
    iVar2 = *(int *)&param_1[1].CurrentPhase;
    pFVar1 = pFVar6 + iVar2;
    while( true ) {
      if (*(int *)&param_1[1].CurrentPhase != iVar2) {
        `TCheckedPointerIterator<TWeakObjectPtr<UPCGManagedISKMComponent,FWeakObjectPtr>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_88);
      }
      if (pFVar6 == pFVar1) break;
      local_80 = *pFVar6;
      bVar4 = FWeakObjectPtr::IsValid(&local_80);
      if (bVar4) {
        local_78._0_8_ = (FScriptContainerElement *)0x0;
        local_78._8_8_ = 0;
        local_58 = (void *)0x0;
        local_50 = 0;
        local_4c = 0x80;
        local_48 = 0xffffffff;
        local_44 = 0;
        local_38 = (void *)0x0;
        local_30 = 0;
        pUVar5 = FWeakObjectPtr::Get(&local_80);
        (**(code **)(*(longlong *)pUVar5 + 0x2b8))(pUVar5,0,local_78);
        local_30 = 0;
        if (local_38 != (void *)0x0) {
          FMemory::Free(local_38);
        }
        TSparseArray<TSparseSetElement<TSoftObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TSoftObjectPtr<AActor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_78,0,local_78._8_4_);
        iVar3 = SUB84(local_78._8_8_,4);
        local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
        if (iVar3 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
        }
        local_48 = 0xffffffff;
        local_44 = 0;
        local_50 = 0;
        if (0x80 < local_4c) {
          local_4c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
        }
        if (local_58 != (void *)0x0) {
          FMemory::Free(local_58);
        }
        if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_78._0_8_);
        }
      }
      pFVar6 = pFVar6 + 1;
    }
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CanExecuteOnlyOnMainThread @ 149c01990

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGSkinnedMeshSpawnerElement::CanExecuteOnlyOnMainThread
          (FPCGSkinnedMeshSpawnerElement *this,FPCGContext *param_1)

{
  if (((param_1 != (FPCGContext *)0x0) && (param_1->CurrentPhase != Execute)) &&
     (param_1->CurrentPhase != PrepareData)) {
    return false;
  }
  return true;
}

// CreateContext @ 149c04480

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FPCGContext * __thiscall
FPCGSkinnedMeshSpawnerElement::CreateContext(FPCGSkinnedMeshSpawnerElement *this)

{
  FPCGContext *this_00;
  
  this_00 = ::operator_new(0x410);
  if (this_00 != (FPCGContext *)0x0) {
    memset(this_00,0,0x410);
    FPCGContext::FPCGContext(this_00);
    *(undefined1 *)&this_00[1].InputData.TaggedData.AllocatorInstance.Data = 0;
    this_00[1].InputData.TaggedData.ArrayNum = 0;
    this_00[1].InputData.TaggedData.ArrayMax = 0;
    this_00->_padding_ = (longlong)&FPCGSkinnedMeshSpawnerContext::_vftable__for__FPCGContext__;
    this_00[1].InputData.bCancelExecutionOnEmpty = false;
    this_00[1].InputData.bCancelExecution = false;
    *(undefined6 *)&this_00[1].InputData.field_0x12 = 0;
    this_00[1].InputData.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[1].InputData.DataCrcs.ArrayNum = 0;
    this_00[1].InputData.DataCrcs.ArrayMax = 0;
    this_00[1].InputData.InactiveOutputPinBitmask = 0;
    this_00[1].OutputData.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[1].OutputData.TaggedData.ArrayNum = 0;
    this_00[1].OutputData.TaggedData.ArrayMax = 0;
    this_00[1].OutputData.bCancelExecutionOnEmpty = false;
    this_00[1].OutputData.bCancelExecution = false;
    *(undefined2 *)&this_00[1].OutputData.field_0x12 = 0;
    this_00[1].OutputData.field_0x14 = 0;
    this_00[1].OutputData.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this_00[1].OutputData.DataCrcs.ArrayNum = 0;
    this_00[1].OutputData.DataCrcs.ArrayMax = 0;
    this_00[1].OutputData.InactiveOutputPinBitmask = 0;
    this_00[1].ExecutionSource.ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
    this_00[1].ExecutionSource.InterfaceInstance = (IPCGGraphExecutionSource *)0x0;
    this_00[1].SourceComponent.WeakPtr = (FWeakObjectPtr)0x0;
    *(undefined8 *)&this_00[1].bInputDataModified = 0;
    this_00[1].AsyncState.EndTime = 0.0;
    *(undefined2 *)&this_00[1].AsyncState.NumAvailableTasks = 0;
    *(undefined1 *)((longlong)&this_00[1].AsyncState.NumAvailableTasks + 2) = 0;
    *(undefined8 *)&this_00[1].AsyncState.AsyncCurrentWriteIndex = 0;
    this_00[1].AsyncState.TasksChunksStartEnd.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    this_00[1].AsyncState.TasksChunksStartEnd.ArrayNum = 0;
    this_00[1].AsyncState.TasksChunksStartEnd.ArrayMax = 0;
    this_00[1].AsyncState.bStarted = false;
    *(undefined3 *)&this_00[1].AsyncState.field_0x29 = 0;
    this_00[1].AsyncState.InitialNumIterations = 0;
    this_00[1].AsyncState.CurrentChunkToCollapse = 0;
    this_00[1].AsyncState._padding_ = 0;
    *(undefined4 *)&this_00[1].AsyncState.ChunkToNumElementsWrittenMap = 0;
    *(undefined8 *)&this_00[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x8 = 0;
    *(undefined8 *)&this_00[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x10 = 0;
    *(undefined8 *)&this_00[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x28 = 0;
    this_00[1]._padding_ =
         (longlong)&FPCGSkinnedMeshSpawnerContext::_vftable__for__IPCGAsyncLoadingContext__;
    *(undefined4 *)&this_00[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x30 = 0;
    *(undefined4 *)&this_00[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x34 = 0x80;
    *(undefined4 *)&this_00[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x3c = 0;
    *(undefined4 *)&this_00[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x38 = 0xffffffff;
    *(undefined8 *)&this_00[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x48 = 0;
    this_00[1].AsyncState.bIsRunningOnMainThread = false;
    this_00[1].AsyncState.bIsRunningAsyncCall = false;
    this_00[1].AsyncState.bIsCallingBlueprint = false;
    this_00[1].AsyncState.bIsRunningOutOfTick = false;
    this_00[1].DependenciesCrc.Value = 0;
    this_00[1].DependenciesCrc.bValid = false;
    *(undefined3 *)&this_00[1].DependenciesCrc.field_0x5 = 0;
    this_00[1].Node = (UPCGNode *)0x0;
    this_00[1].bIsPaused = false;
    *(undefined3 *)&this_00[1].field_0x139 = 0;
    this_00[1]._padding_ = 0;
    *(undefined4 *)&this_00[1].DynamicDependencies.Elements = 0;
    *(undefined4 *)&this_00[1].DynamicDependencies.Elements.field_0x4 = 0x80;
    *(undefined4 *)&this_00[1].DynamicDependencies.Elements.field_0xc = 0;
    *(undefined4 *)&this_00[1].DynamicDependencies.Elements.field_0x8 = 0xffffffff;
    *(undefined8 *)&this_00[1].DynamicDependencies.Elements.field_0x18 = 0;
    *(undefined4 *)&this_00[1].DynamicDependencies.Elements.field_0x20 = 0;
    *(undefined8 *)&this_00[1].DynamicDependencies.Elements.field_0x28 = 0;
    *(undefined8 *)&this_00[1].DynamicDependencies.Elements.field_0x30 = 0;
    this_00[1].DynamicDependencies.Hash.InlineData[0] = '\0';
    this_00[1].DynamicDependencies.Hash.InlineData[1] = '\0';
    this_00[1].DynamicDependencies.Hash.InlineData[2] = '\0';
    this_00[1].DynamicDependencies.Hash.InlineData[3] = '\0';
    this_00[1].DynamicDependencies.Hash._padding_ = 0;
    this_00[1].DynamicDependencies.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    *(undefined8 *)&this_00[1].DynamicDependencies.HashSize = 0;
    *(undefined8 *)&this_00[1].CurrentPhase = 0;
    this_00[1].CachedInputToOutputInternalResults.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    this_00[1].CachedInputToOutputInternalResults.ArrayNum = 0;
    this_00[1].CachedInputToOutputInternalResults.ArrayMax = 0;
    this_00[1].Stack = (FPCGStack *)0x0;
    this_00[1].SettingsWithOverride.field0_0x0.DebugPtr = (UPCGSettings *)0x0;
    return this_00;
  }
  return (FPCGContext *)0x0;
}

// ExecuteInternal @ 149c1d3a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGSkinnedMeshSpawnerElement::ExecuteInternal
          (FPCGSkinnedMeshSpawnerElement *this,FPCGContext *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  char cVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  UPCGSkinnedMeshSpawnerSettings *pUVar13;
  UObject *pUVar14;
  UClass *pUVar15;
  double *pdVar16;
  TArray<FPCGPoint,TSizedDefaultAllocator<32>_> *pTVar17;
  AActor *pAVar18;
  UClass *pUVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint uVar22;
  FPCGSkinnedMeshPackedCustomData *pFVar23;
  undefined1 *puVar24;
  ulong64 *this_00;
  uint *puVar25;
  FPCGAsyncState *this_01;
  int iVar26;
  FPCGSkinnedMeshInstanceList *pFVar27;
  longlong lVar28;
  ForAnyElementType FVar29;
  TBitArray<FDefaultBitArrayAllocator> *pTVar30;
  longlong *plVar31;
  TBitArray<FDefaultBitArrayAllocator> *pTVar32;
  longlong lVar33;
  ulong64 uVar34;
  bool bVar35;
  undefined1 local_res20 [8];
  undefined1 local_2b8;
  undefined1 local_2b7 [3];
  uint local_2b4;
  UPCGSkinnedMeshSpawnerSettings *local_2b0;
  TArray<UFunction_const_*,TSizedDefaultAllocator<32>_> local_2a8;
  longlong *local_298;
  longlong local_290;
  TArray<UFunction_*,TSizedDefaultAllocator<32>_> local_288;
  int local_278;
  int local_274;
  TBitArray<FDefaultBitArrayAllocator> *local_270;
  ulong64 local_268;
  FPCGAsyncState *local_260;
  UObject *local_258;
  UObject *local_250;
  longlong *local_248;
  int iStack_240;
  uint uStack_23c;
  TBitArray<FDefaultBitArrayAllocator> *local_238;
  undefined4 uStack_230;
  int iStack_22c;
  int local_228;
  undefined4 uStack_224;
  int iStack_220;
  undefined4 uStack_21c;
  longlong *local_218;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_210;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  longlong local_1b8;
  FSoftObjectPath local_1b0;
  wchar_t *local_188;
  int iStack_180;
  undefined4 uStack_17c;
  longlong local_178;
  FSoftObjectPath local_170;
  TStringView<wchar_t> local_148;
  longlong local_138;
  FSoftObjectPath local_130;
  undefined8 local_110;
  FSoftObjectPath local_108;
  longlong local_e8;
  FSoftObjectPath local_e0;
  undefined4 local_a4;
  
  bVar35 = -1 < CpuChannel->Enabled;
  if (bVar35) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId308,"FPCGSkinnedMeshSpawnerElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSkinnedMeshSpawner.cpp"
               ,0x134);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId308);
  }
  pUVar13 = FPCGContext::GetInputSettings<UPCGSkinnedMeshSpawnerSettings>(param_1);
  local_2b0 = pUVar13;
  if (((pUVar13 == (UPCGSkinnedMeshSpawnerSettings *)0x0) ||
      (cVar9 = (**(code **)(pUVar13->_padding_ + 0x4a8))(pUVar13), cVar9 != '\0')) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings && !Settings->ShouldExecuteOnGPU()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSkinnedMeshSpawner.cpp"
                          ,0x137,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    uVar11 = (*pcVar8)();
    return (bool)uVar11;
  }
  if (*(int *)&param_1[1].OutputData.TaggedData.AllocatorInstance.Data != 0) {
    this_01 = &param_1->AsyncState;
    local_260 = this_01;
    do {
      iVar4 = *(int *)&param_1[1].OutputData.TaggedData.AllocatorInstance.Data;
      uVar22 = iVar4 - 1;
      uVar12 = 0;
      if ((int)uVar22 < iVar4) {
        uVar12 = ~uVar22 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        uVar11 = (*pcVar8)();
        return (bool)uVar11;
      }
      uVar34 = param_1[1].InputData.InactiveOutputPinBitmask;
      lVar33 = (longlong)*(int *)&param_1[1].OutputData.TaggedData.AllocatorInstance.Data * 0x30;
      local_290 = lVar33;
      local_268 = uVar34;
      if (((param_1[1].OutputData.bCancelExecution == false) &&
          (*(int *)(lVar33 + -0x18 + uVar34) != *(int *)(lVar33 + -8 + uVar34))) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Context->bSkippedDueToReuse || InstanceList.MeshInstances.Num() == InstanceList.PackedCustomData.Num()"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSkinnedMeshSpawner.cpp"
                              ,0x13c,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        uVar11 = (*pcVar8)();
        return (bool)uVar11;
      }
      lVar28 = *(longlong *)(lVar33 + -0x30 + uVar34);
      if ((lVar28 == 0) || ((*(uint *)(lVar28 + 8) >> 0x1e & 1) != 0)) {
LAB_149c1dc29:
        this_00 = &param_1[1].InputData.InactiveOutputPinBitmask;
        uVar22 = *(int *)&param_1[1].OutputData.TaggedData.AllocatorInstance.Data - 1;
        uVar12 = 0;
        if ((int)uVar22 < *(int *)&param_1[1].OutputData.TaggedData.AllocatorInstance.Data) {
          uVar12 = ~uVar22 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          uVar11 = (*pcVar8)();
          return (bool)uVar11;
        }
        TArray<FPCGSkinnedMeshSpawnerContext::FPackedInstanceListData,TSizedDefaultAllocator<32>_>::
        RemoveAtSwapImpl((TArray<FPCGSkinnedMeshSpawnerContext::FPackedInstanceListData,TSizedDefaultAllocator<32>_>
                          *)this_00,uVar22);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,(ForAnyElementType *)this_00,
                   *(int *)&param_1[1].OutputData.TaggedData.AllocatorInstance.Data,
                   (int *)((longlong)&param_1[1].OutputData.TaggedData.AllocatorInstance.Data + 4));
        param_1[1].OutputData.TaggedData.ArrayMax = 0;
      }
      else {
        uVar12 = param_1[1].OutputData.TaggedData.ArrayMax;
        if ((int)uVar12 < *(int *)(lVar33 + -0x18 + uVar34)) {
          do {
            uVar22 = 0;
            if ((int)uVar12 < *(int *)(lVar33 + -0x18 + uVar34)) {
              uVar22 = ~uVar12 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              uVar11 = (*pcVar8)();
              return (bool)uVar11;
            }
            iVar4 = param_1[1].OutputData.TaggedData.ArrayMax;
            pFVar27 = (FPCGSkinnedMeshInstanceList *)
                      ((longlong)(int)uVar12 * 0x108 + *(longlong *)(lVar33 + -0x20 + uVar34));
            if ((iVar4 < 0) || (*(int *)(lVar33 + -8 + uVar34) <= iVar4)) {
              pFVar23 = (FPCGSkinnedMeshPackedCustomData *)0x0;
            }
            else {
              pFVar23 = (FPCGSkinnedMeshPackedCustomData *)
                        (*(longlong *)(lVar33 + -0x10 + uVar34) + (longlong)iVar4 * 0x18);
            }
            SpawnSkinnedMeshInstances
                      (this,(FPCGSkinnedMeshSpawnerContext *)param_1,pFVar27,
                       *(AActor **)(lVar33 + -0x30 + uVar34),pFVar23);
            plVar1 = &(pFVar27->Descriptor)._padding_;
            pUVar14 = TPersistentObjectPtr<FSoftObjectPath>::Get
                                ((TPersistentObjectPtr<FSoftObjectPath> *)plVar1);
            if (pUVar14 != (UObject *)0x0) {
              pUVar15 = Z_Construct_UClass_USkinnedAsset_NoRegister();
              iVar4 = (int)pUVar15->_padding_;
              if (((iVar4 <= *(int *)(*(longlong *)&pUVar14->field_0x10 + 0x38)) &&
                  ((longlong *)
                   *(undefined1 **)
                    (*(longlong *)(*(longlong *)&pUVar14->field_0x10 + 0x30) + (longlong)iVar4 * 8)
                   == &pUVar15->_padding_)) && (pUVar13->bApplyMeshBoundsToPoints != false)) {
                local_178 = *plVar1;
                FSoftObjectPath::FSoftObjectPath
                          (&local_170,(FSoftObjectPath *)&(pFVar27->Descriptor)._padding_);
                local_1b8 = local_178;
                FSoftObjectPath::FSoftObjectPath(&local_1b0,&local_170);
                local_138 = local_1b8;
                FSoftObjectPath::FSoftObjectPath(&local_130,&local_1b0);
                uVar12 = ::GetTypeHash(&local_130);
                if (local_130.SubPathString.Data.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_130.SubPathString.Data.AllocatorInstance.Data);
                }
                if (*(int *)&param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x10 !=
                    *(int *)&param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x3c) {
                  puVar6 = *(undefined1 **)
                            &param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x48;
                  puVar24 = &param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x40;
                  if (puVar6 != (undefined1 *)0x0) {
                    puVar24 = puVar6;
                  }
                  iVar4 = *(int *)(puVar24 +
                                  (ulonglong)
                                  (*(int *)&param_1[1].AsyncState.bIsRunningOnMainThread - 1U &
                                  uVar12) * 4);
                  while (iVar4 != -1) {
                    local_e8 = local_1b8;
                    FSoftObjectPath::FSoftObjectPath(&local_e0,&local_1b0);
                    lVar33 = *(longlong *)
                              &param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x8;
                    lVar28 = (longlong)iVar4 * 0x80;
                    local_110 = *(undefined8 *)(lVar28 + lVar33);
                    FSoftObjectPath::FSoftObjectPath
                              (&local_108,(FSoftObjectPath *)(lVar33 + 8 + lVar28));
                    bVar10 = FSoftObjectPath::operator==(&local_108,&local_e0);
                    if (local_108.SubPathString.Data.AllocatorInstance.Data !=
                        (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_108.SubPathString.Data.AllocatorInstance.Data);
                    }
                    if (local_e0.SubPathString.Data.AllocatorInstance.Data !=
                        (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_e0.SubPathString.Data.AllocatorInstance.Data);
                    }
                    if (bVar10) {
                      if (iVar4 != -1) {
                        lVar33 = (longlong)iVar4 * 0x80 +
                                 *(longlong *)
                                  &param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x8;
                        if (local_1b0.SubPathString.Data.AllocatorInstance.Data !=
                            (FScriptContainerElement *)0x0) {
                          FMemory::Free(local_1b0.SubPathString.Data.AllocatorInstance.Data);
                        }
                        if (lVar33 == 0) goto LAB_149c1d7cb;
                        plVar31 = (longlong *)(lVar33 + 0x28);
                        local_298 = plVar31;
                        if (local_170.SubPathString.Data.AllocatorInstance.Data !=
                            (FScriptContainerElement *)0x0) {
                          FMemory::Free(local_170.SubPathString.Data.AllocatorInstance.Data);
                        }
                        goto LAB_149c1d7e4;
                      }
                      break;
                    }
                    iVar4 = *(int *)(lVar28 + 0x78 +
                                    *(longlong *)
                                     &param_1[1].AsyncState.ChunkToNumElementsWrittenMap.field_0x8);
                  }
                }
                if (local_1b0.SubPathString.Data.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1b0.SubPathString.Data.AllocatorInstance.Data);
                }
LAB_149c1d7cb:
                if (local_170.SubPathString.Data.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_170.SubPathString.Data.AllocatorInstance.Data);
                }
                plVar31 = (longlong *)0x0;
                local_298 = (longlong *)0x0;
LAB_149c1d7e4:
                pUVar13 = local_2b0;
                lVar33 = local_290;
                if (plVar31 != (longlong *)0x0) {
                  pUVar14 = TPersistentObjectPtr<FSoftObjectPath>::Get
                                      ((TPersistentObjectPtr<FSoftObjectPath> *)plVar1);
                  if (pUVar14 == (UObject *)0x0) {
LAB_149c1d820:
                    pUVar14 = (UObject *)0x0;
                  }
                  else {
                    pUVar15 = Z_Construct_UClass_USkinnedAsset_NoRegister();
                    iVar4 = (int)pUVar15->_padding_;
                    if ((*(int *)(*(longlong *)&pUVar14->field_0x10 + 0x38) < iVar4) ||
                       ((longlong *)
                        *(undefined1 **)
                         (*(longlong *)(*(longlong *)&pUVar14->field_0x10 + 0x30) +
                         (longlong)iVar4 * 8) != &pUVar15->_padding_)) goto LAB_149c1d820;
                  }
                  pdVar16 = (double *)(**(code **)(*(longlong *)pUVar14 + 0x3e0))(pUVar14);
                  iVar4 = (int)plVar31[5];
                  pTVar32 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar31 + 2);
                  iStack_240 = 0;
                  local_228 = 0;
                  uStack_23c = 1;
                  local_1d0 = pdVar16[3] + *pdVar16;
                  dStack_1c8 = pdVar16[4] + pdVar16[1];
                  local_1e8 = *pdVar16 - pdVar16[3];
                  local_1c0 = pdVar16[5] + pdVar16[2];
                  local_1d8 = pdVar16[2] - pdVar16[5];
                  dStack_1e0 = pdVar16[1] - pdVar16[4];
                  iStack_22c = 0;
                  if (iVar4 != 0) {
                    pTVar30 = pTVar32;
                    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar31[4] !=
                        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                      pTVar30 = (TBitArray<FDefaultBitArrayAllocator> *)plVar31[4];
                    }
                    uVar12 = *(uint *)(pTVar30->AllocatorInstance).InlineData;
                    while (uVar12 == 0) {
                      iStack_240 = iStack_240 + 1;
                      local_228 = local_228 + 0x20;
                      iStack_22c = iVar4;
                      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_240)
                      goto LAB_149c1d910;
                      uVar12 = *(uint *)((pTVar30->AllocatorInstance).InlineData +
                                        (longlong)iStack_240 * 4);
                    }
                    uStack_23c = ~(uVar12 - 1) & uVar12;
                    uVar21 = (ulonglong)uStack_23c * 2 + 1;
                    lVar33 = 0x3f;
                    if (uVar21 != 0) {
                      for (; uVar21 >> lVar33 == 0; lVar33 = lVar33 + -1) {
                      }
                    }
                    local_278 = (int)lVar33;
                    iStack_22c = local_278 + -1 + local_228;
                    if (iVar4 < iStack_22c) {
                      iStack_22c = iVar4;
                    }
                  }
LAB_149c1d910:
                  uVar12 = *(uint *)(plVar31 + 5);
                  uStack_224 = local_a4;
                  uVar22 = uVar12 & 0xffffffe0;
                  iStack_220 = (int)plVar31[1] - *(int *)((longlong)plVar31 + 0x34);
                  TStack_210._padding_ = CONCAT44(uStack_23c,iStack_240);
                  uStack_230 = 0xffffffff;
                  TStack_210.CurrentBitIndex = iStack_22c;
                  TStack_210.UnvisitedBitMask = 0xffffffff;
                  iVar26 = (int)uVar12 >> 5;
                  TStack_210._28_4_ = local_a4;
                  TStack_210.BaseBitIndex = local_228;
                  uStack_1f0 = CONCAT44(uStack_21c,iStack_220);
                  local_2b4 = uVar12;
                  local_270 = pTVar32;
                  local_248 = plVar31;
                  local_238 = pTVar32;
                  local_218 = plVar31;
                  TStack_210.Array = pTVar32;
                  if ((((int)uVar12 < 0) || (iVar4 < (int)uVar12)) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                          ,0x7af,L""), bVar10)) {
                    pcVar8 = (code *)swi(3);
                    uVar11 = (*pcVar8)();
                    return (bool)uVar11;
                  }
                  uVar5 = *(uint *)(plVar31 + 5);
                  if (uVar12 != uVar5) {
                    pTVar30 = pTVar32;
                    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar31[4] !=
                        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                      pTVar30 = (TBitArray<FDefaultBitArrayAllocator> *)plVar31[4];
                    }
                    uVar12 = -1 << ((byte)uVar12 & 0x1f) &
                             *(uint *)((pTVar30->AllocatorInstance).InlineData +
                                      (longlong)iVar26 * 4);
                    while (uVar12 == 0) {
                      iVar26 = iVar26 + 1;
                      uVar22 = uVar22 + 0x20;
                      uVar12 = uVar5;
                      local_2b4 = uVar5;
                      if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar26)
                      goto LAB_149c1da20;
                      uVar12 = *(uint *)((pTVar30->AllocatorInstance).InlineData +
                                        (longlong)iVar26 * 4);
                    }
                    uVar21 = (ulonglong)(~(uVar12 - 1) & uVar12) * 2 + 1;
                    lVar33 = 0x3f;
                    if (uVar21 != 0) {
                      for (; uVar21 >> lVar33 == 0; lVar33 = lVar33 + -1) {
                      }
                    }
                    local_274 = (int)lVar33;
                    uVar12 = (uVar22 - 1) + local_274;
                    local_2b4 = uVar12;
                    if ((int)uVar5 < (int)uVar12) {
                      uVar12 = uVar5;
                      local_2b4 = uVar5;
                    }
                  }
LAB_149c1da20:
                  while( true ) {
                    plVar1 = local_218;
                    if ((int)local_218[1] - *(int *)((longlong)local_218 + 0x34) != (int)uStack_1f0)
                    {
                      local_res20[0] = 0;
                      `TSparseArray<TSparseSetElement<TTuple<UPCGPointData_*,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
                    }
                    if (((TStack_210.CurrentBitIndex == uVar12) && (TStack_210.Array == pTVar32)) &&
                       (pUVar13 = local_2b0, lVar33 = local_290, uVar34 = local_268,
                       plVar1 == plVar31)) break;
                    lVar33 = *plVar1;
                    lVar28 = (longlong)TStack_210.CurrentBitIndex * 0x20;
                    if ((*(longlong *)(lVar28 + lVar33) == 0) &&
                       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                           ("It.Key",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSkinnedMeshSpawner.cpp"
                                            ,0x151,L""), bVar10)) {
                      pcVar8 = (code *)swi(3);
                      uVar11 = (*pcVar8)();
                      return (bool)uVar11;
                    }
                    pTVar17 = UPCGPointData::GetMutablePoints(*(UPCGPointData **)(lVar28 + lVar33));
                    puVar25 = *(uint **)(lVar28 + 8 + lVar33);
                    iVar4 = *(int *)(lVar28 + 0x10 + lVar33);
                    puVar3 = puVar25 + iVar4;
                    while( true ) {
                      if (*(int *)(lVar28 + 0x10 + lVar33) != iVar4) {
                        local_2b8 = 0;
                        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::
                        operator()(&local_2b8);
                      }
                      if (puVar25 == puVar3) break;
                      uVar12 = *puVar25;
                      uVar22 = 0;
                      if ((int)uVar12 < pTVar17->ArrayNum) {
                        uVar22 = ~uVar12 >> 0x1f;
                      }
                      if ((uVar22 == 0) &&
                         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar10)) {
                        pcVar8 = (code *)swi(3);
                        uVar11 = (*pcVar8)();
                        return (bool)uVar11;
                      }
                      pFVar7 = (pTVar17->AllocatorInstance).Data;
                      lVar20 = (longlong)(int)uVar12 * 0xd0;
                      puVar25 = puVar25 + 1;
                      *(double *)(pFVar7 + lVar20 + 0x68) = local_1e8;
                      *(double *)(pFVar7 + lVar20 + 0x68 + 8) = dStack_1e0;
                      *(double *)(pFVar7 + lVar20 + 0x78) = local_1d8;
                      *(double *)(pFVar7 + lVar20 + 0x80) = local_1d0;
                      *(double *)(pFVar7 + lVar20 + 0x80 + 8) = dStack_1c8;
                      *(double *)(pFVar7 + lVar20 + 0x90) = local_1c0;
                    }
                    TStack_210.UnvisitedBitMask =
                         TStack_210.UnvisitedBitMask & ~TStack_210._padding_._4_4_;
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_210);
                    plVar31 = local_298;
                    pTVar32 = local_270;
                    uVar12 = local_2b4;
                  }
                }
              }
            }
            this_01 = local_260;
            piVar2 = &param_1[1].OutputData.TaggedData.ArrayMax;
            *piVar2 = *piVar2 + 1;
            bVar10 = FPCGAsyncState::ShouldStop(local_260);
          } while ((!bVar10) &&
                  (uVar12 = param_1[1].OutputData.TaggedData.ArrayMax,
                  (int)uVar12 < *(int *)(lVar33 + -0x18 + uVar34)));
        }
        if (param_1[1].OutputData.TaggedData.ArrayMax == *(int *)(lVar33 + -0x18 + uVar34))
        goto LAB_149c1dc29;
      }
      bVar10 = FPCGAsyncState::ShouldStop(this_01);
    } while ((!bVar10) && (*(int *)&param_1[1].OutputData.TaggedData.AllocatorInstance.Data != 0));
  }
  pUVar13 = local_2b0;
  iVar4 = *(int *)&param_1[1].OutputData.TaggedData.AllocatorInstance.Data;
  if (iVar4 != 0) goto LAB_149c1deaf;
  pUVar14 = TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)&local_2b0->TargetActor);
  if (pUVar14 == (UObject *)0x0) {
LAB_149c1dd6c:
    pAVar18 = FPCGContext::GetTargetActor(param_1,(UPCGSpatialData *)0x0);
  }
  else {
    pUVar15 = Z_Construct_UClass_AActor_NoRegister();
    iVar26 = (int)pUVar15->_padding_;
    if ((*(int *)(*(longlong *)&pUVar14->field_0x10 + 0x38) < iVar26) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar14->field_0x10 + 0x30) + (longlong)iVar26 * 8) !=
        &pUVar15->_padding_)) goto LAB_149c1dd6c;
    pAVar18 = (AActor *)
              TPersistentObjectPtr<FSoftObjectPath>::Get
                        ((TPersistentObjectPtr<FSoftObjectPath> *)&pUVar13->TargetActor);
    if (pAVar18 == (AActor *)0x0) {
LAB_149c1dd68:
      pAVar18 = (AActor *)0x0;
    }
    else {
      pUVar15 = Z_Construct_UClass_AActor_NoRegister();
      iVar26 = (int)pUVar15->_padding_;
      if ((*(int *)(pAVar18->_padding_ + 0x38) < iVar26) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pAVar18->_padding_ + 0x30) + (longlong)iVar26 * 8) !=
          &pUVar15->_padding_)) goto LAB_149c1dd68;
    }
  }
  if (pAVar18 != (AActor *)0x0) {
    iStack_180 = 0x15;
    local_188 = L"PrototypeWithNoParams";
    pUVar15 = Z_Construct_UClass_UPCGFunctionPrototypes_NoRegister();
    pUVar19 = Z_Construct_UClass_UFunction_NoRegister();
    local_148._12_4_ = uStack_17c;
    local_148.Size = iStack_180;
    local_148.DataPtr = local_188;
    local_258 = StaticFindObject(pUVar19,(UObject *)pUVar15,&local_148,None);
    local_2a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2a8.ArrayNum = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,1,0,&local_2a8.AllocatorInstance,1,&local_2a8.ArrayMax);
    *(UObject **)local_2a8.AllocatorInstance.Data = local_258;
    local_250 = (UObject *)pAVar18->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_250 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_250);
    }
    PCGHelpers::FindUserFunctions
              (&local_288,(TSubclassOf<UObject>)&local_250,&pUVar13->PostProcessFunctionNames,
               &local_2a8,param_1);
    if (local_2a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.AllocatorInstance.Data);
    }
    iVar26 = local_288.ArrayNum;
    uVar21 = (ulonglong)local_288.ArrayNum;
    pFVar7 = local_288.AllocatorInstance.Data + uVar21 * 8;
    FVar29.Data = local_288.AllocatorInstance.Data;
    while( true ) {
      if ((uint)uVar21 != iVar26) {
        `TCheckedPointerIterator<UFunction_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_2b7);
      }
      if (FVar29.Data == pFVar7) break;
      (**(code **)(pAVar18->_padding_ + 0x260))(pAVar18,*(undefined8 *)FVar29.Data,0);
      uVar21 = (ulonglong)(uint)local_288.ArrayNum;
      FVar29.Data = FVar29.Data + 8;
    }
    if (local_288.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.AllocatorInstance.Data);
    }
  }
LAB_149c1deaf:
  if (bVar35) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return iVar4 == 0;
}

// IsCacheable @ 149c2d4a0

bool __thiscall
FPCGSkinnedMeshSpawnerElement::IsCacheable
          (FPCGSkinnedMeshSpawnerElement *this,UPCGSettings *param_1)

{
  return false;
}

// PrepareDataInternal @ 149c30700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGSkinnedMeshSpawnerElement::PrepareDataInternal
          (FPCGSkinnedMeshSpawnerElement *this,FPCGContext *param_1)

{
  undefined1 *puVar1;
  FPCGCrc *pFVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  int iVar5;
  IPCGGraphExecutionSource *pIVar6;
  longlong *plVar7;
  FObjectPtr_u_0 *pFVar8;
  UPCGSkinnedMeshSelector *pUVar9;
  FScriptContainerElement *pFVar10;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar11;
  FPCGSoftSkinnedMeshComponentDescriptor *pFVar12;
  ulong64 uVar13;
  code *pcVar14;
  FPCGContext *pFVar15;
  FPCGContext *pFVar16;
  FPCGDataCollection *pFVar17;
  undefined1 uVar18;
  int iVar19;
  UPCGSkinnedMeshSpawnerSettings *pUVar20;
  FText *pFVar21;
  UPCGComponent *this_00;
  UClass *pUVar22;
  UPCGSpatialData *pUVar23;
  UObject *pUVar24;
  AActor *pAVar25;
  FPCGTaggedData *this_01;
  UPCGPointData *this_02;
  longlong lVar26;
  TRefCountPtr<ITextData> TVar27;
  uint uVar28;
  char cVar29;
  longlong *plVar30;
  int *piVar31;
  ForElementType<FSetElementId> *pFVar32;
  FSoftObjectPath *pFVar33;
  uint uVar34;
  uint uVar35;
  FObjectPtr_u_0 *pFVar36;
  TArray<FPCGSkinnedMeshPackedCustomData,TSizedDefaultAllocator<32>_> *this_03;
  bool bVar37;
  undefined1 auStackY_258 [32];
  FPCGContext *local_208;
  char local_200;
  char local_1ff;
  uint local_1fc;
  undefined1 local_1f8 [8];
  UPCGSkinnedMeshSpawnerSettings *local_1f0;
  undefined1 local_1e8;
  undefined1 local_1e7 [7];
  FPCGContext *local_1e0;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_1d8;
  longlong *local_1c8;
  undefined8 local_1c0;
  FObjectPtr_u_0 local_1b8;
  bool *local_1b0;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_1a8;
  FPCGDataCollection *local_198;
  code *local_190;
  longlong ***local_188;
  FPCGDataCollection *local_180;
  UPCGSkinnedMeshSpawnerSettings *local_178;
  IPCGGraphExecutionSource *local_170;
  longlong **local_168;
  FPCGContext **local_160;
  UPCGSkinnedMeshSpawnerSettings *local_158;
  FString local_150;
  FString local_140;
  FText local_130;
  FText local_120;
  FString local_110;
  FString local_100;
  FText local_f0;
  FString local_e0;
  FString local_d0;
  FText local_c0;
  FString local_b0;
  FString local_a0;
  FText local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined4 local_4f;
  undefined2 local_4b;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_258;
  uVar34 = 0;
  local_1fc = 0;
  bVar37 = CpuChannel->Enabled < 0;
  if (bVar37) {
    local_1ff = '\0';
  }
  else {
    local_1ff = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId99,"FPCGSkinnedMeshSpawnerElement::PrepareDataInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSkinnedMeshSpawner.cpp"
               ,99);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId99);
  }
  cVar29 = !bVar37;
  local_208 = param_1;
  pUVar20 = FPCGContext::GetInputSettings<UPCGSkinnedMeshSpawnerSettings>(param_1);
  local_1f0 = pUVar20;
  if ((pUVar20 == (UPCGSkinnedMeshSpawnerSettings *)0x0) &&
     (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSkinnedMeshSpawner.cpp"
                          ,0x67,L""), bVar37)) {
    pcVar14 = (code *)swi(3);
    uVar18 = (*pcVar14)();
    return (bool)uVar18;
  }
  pFVar15 = local_208;
  if ((pUVar20->MeshSelectorParameters).field0_0x0.DebugPtr == (UPCGSkinnedMeshSelector *)0x0) {
    if (1 < (byte)LogPCG._0_1_) {
      pFVar21 = FText::AsLocalizable_Advanced_LocText
                          (&local_130,L"PCGSkinnedMeshSpawnerElement",L"InvalidMeshSelectorInstance"
                           ,L"Invalid MeshSelector instance, try reselecting the MeshSelector type")
      ;
      FText::ToString(pFVar21);
      if (local_208 != (FPCGContext *)0x0) {
        uVar34 = 1;
        FPCGContext::GetTaskName(local_208,&local_140);
        if (local_208 != (FPCGContext *)0x0) {
          uVar34 = 3;
          FPCGContext::GetExecutionSourceName(local_208,&local_150);
        }
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if (((uVar34 & 2) != 0) &&
         (uVar34 = uVar34 & 0xfffffffd,
         local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
      if (((uVar34 & 1) != 0) &&
         (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
      if (local_130.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_130.TextData.Reference + 0x10))();
      }
    }
  }
  else if (((((local_208->ExecutionSource).InterfaceInstance != (IPCGGraphExecutionSource *)0x0) &&
            (bVar37 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_208->ExecutionSource), bVar37
            )) && (pIVar6 = (pFVar15->ExecutionSource).InterfaceInstance,
                  pIVar6 != (IPCGGraphExecutionSource *)0x0)) &&
          (this_00 = (UPCGComponent *)(**(code **)((longlong)*pIVar6 + 8))(),
          this_00 != (UPCGComponent *)0x0)) {
    pUVar22 = Z_Construct_UClass_UPCGComponent_NoRegister();
    iVar19 = (int)pUVar22->_padding_;
    if ((iVar19 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar19 * 8) ==
        &pUVar22->_padding_)) {
      if (local_208->Node == (UPCGNode *)0x0) {
LAB_149c3098d:
        local_200 = '\0';
      }
      else {
        bVar37 = UPCGNode::IsOutputPinConnected
                           (local_208->Node,&PCGPinConstants::DefaultOutputLabel);
        local_200 = '\x01';
        if (!bVar37) goto LAB_149c3098d;
      }
      pFVar15 = local_208;
      local_1b0 = &local_208[1].OutputData.bCancelExecution;
      if (local_208[1].OutputData.bCancelExecutionOnEmpty == false) {
        pUVar20 = local_1f0;
        if ((local_208->DependenciesCrc).bValid == false) {
          pFVar2 = &local_208->DependenciesCrc;
          pcVar14 = *(code **)((longlong)*this + 0x40);
          if (((local_208->ExecutionSource).InterfaceInstance == (IPCGGraphExecutionSource *)0x0) ||
             (bVar37 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_208->ExecutionSource),
             !bVar37)) {
            local_170 = (IPCGGraphExecutionSource *)0x0;
          }
          else {
            local_170 = (pFVar15->ExecutionSource).InterfaceInstance;
          }
          pUVar20 = local_1f0;
          local_180 = &local_208->InputData;
          local_178 = local_1f0;
          if ((local_180 == (FPCGDataCollection *)0x0) &&
             (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InputData",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGElement.h"
                                  ,0x7c,L""), bVar37)) {
            pcVar14 = (code *)swi(3);
            uVar18 = (*pcVar14)();
            return (bool)uVar18;
          }
          (*pcVar14)(this,&local_180,pFVar2);
        }
        if ((local_208->DependenciesCrc).bValid != false) {
          local_168 = &local_1c8;
          local_1c8 = (longlong *)0x0;
          local_160 = &local_208;
          local_1c0 = 0;
          local_188 = &local_168;
          local_190 = UE::Core::Private::Function::
                      TFunctionRefCaller<`FPCGSkinnedMeshSpawnerElement::PrepareDataInternal'::__l42::<lambda_1>,void,UPCGManagedResource_*>
                      ::Call;
          local_158 = pUVar20;
          UPCGComponent::ForEachManagedResource
                    (this_00,(TFunctionRef<void___cdecl(UPCGManagedResource_*)> *)&local_190);
          iVar19 = (int)local_1c0;
          plVar4 = local_1c8 + (int)local_1c0;
          plVar30 = local_1c8;
          while( true ) {
            if ((int)local_1c0 != iVar19) {
              local_1f8[0] = 0;
              `TCheckedPointerIterator<UPCGManagedISKMComponent_*,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_1f8);
            }
            pFVar15 = local_208;
            if (plVar30 == plVar4) break;
            plVar7 = (longlong *)*plVar30;
            if (((char)plVar7[6] == '\0') && (pUVar20->bWarnOnIdenticalSpawn != false)) {
              pFVar21 = FText::AsLocalizable_Advanced_LocText
                                  (&local_120,L"PCGSkinnedMeshSpawnerElement",L"IdenticalABMCSpawn",
                                   L"Identical Instanced Skinned Mesh Component spawn occurred. It may be beneficial to re-check graph logic for identical spawn conditions (same mesh descriptor at same location, etc) or repeated nodes."
                                  );
              PCGLog::LogWarningOnGraph(pFVar21,pFVar15);
              pUVar20 = local_1f0;
              if (local_120.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_120.TextData.Reference + 0x10))();
                pUVar20 = local_1f0;
              }
            }
            (**(code **)(*plVar7 + 0x2e0))(plVar7);
            plVar30 = plVar30 + 1;
          }
          if ((int)local_1c0 != 0) {
            *local_1b0 = true;
          }
          if (local_1c8 != (longlong *)0x0) {
            FMemory::Free(local_1c8);
          }
        }
        local_208[1].OutputData.bCancelExecutionOnEmpty = true;
        uVar34 = local_1fc;
      }
      if ((local_200 != '\0') || (*local_1b0 == false)) {
        FPCGDataCollection::GetInputsByPin
                  (&local_208->InputData,&local_1d8,&PCGPinConstants::DefaultInputLabel);
        local_198 = &local_208->OutputData;
        if (local_208[1].OutputData.TaggedData.ArrayNum < local_1d8.ArrayNum) {
          do {
            if (local_208[1].OutputData.field_0x12 != '\0') {
LAB_149c310f4:
              if (local_208[1].OutputData.field_0x13 == '\0') {
                if ((local_208[1].OutputData.DataCrcs.AllocatorInstance.Data ==
                     (FScriptContainerElement *)0x0) &&
                   (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Context->CurrentPointData",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSkinnedMeshSpawner.cpp"
                                        ,0xe9,L""), bVar37)) {
                  pcVar14 = (code *)swi(3);
                  uVar18 = (*pcVar14)();
                  return (bool)uVar18;
                }
                pUVar9 = (local_1f0->MeshSelectorParameters).field0_0x0.DebugPtr;
                iVar19 = *(int *)&local_208[1].OutputData.TaggedData.AllocatorInstance.Data;
                uVar35 = iVar19 - 1;
                pcVar14 = *(code **)(pUVar9->_padding_ + 0x2b0);
                uVar34 = 0;
                if ((int)uVar35 < iVar19) {
                  uVar34 = ~uVar35 >> 0x1f;
                }
                if ((uVar34 == 0) &&
                   (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar37)) {
                  pcVar14 = (code *)swi(3);
                  uVar18 = (*pcVar14)();
                  return (bool)uVar18;
                }
                uVar18 = (*pcVar14)(pUVar9,local_208,local_1f0,
                                    local_208[1].OutputData.DataCrcs.AllocatorInstance.Data);
                local_208[1].OutputData.field_0x13 = uVar18;
              }
              pFVar15 = local_208;
              if (local_208[1].OutputData.field_0x13 != '\0') {
                uVar34 = 0;
                if (*local_1b0 == false) {
                  iVar19 = *(int *)&local_208[1].OutputData.TaggedData.AllocatorInstance.Data;
                  uVar28 = iVar19 - 1;
                  uVar35 = 0;
                  if ((int)uVar28 < iVar19) {
                    uVar35 = ~uVar28 >> 0x1f;
                  }
                  if ((uVar35 == 0) &&
                     (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar37)) {
                    pcVar14 = (code *)swi(3);
                    uVar18 = (*pcVar14)();
                    return (bool)uVar18;
                  }
                  pFVar16 = local_208;
                  iVar19 = *(int *)&local_208[1].OutputData.TaggedData.AllocatorInstance.Data;
                  this_03 = (TArray<FPCGSkinnedMeshPackedCustomData,TSizedDefaultAllocator<32>_> *)
                            ((pFVar15[1].InputData.InactiveOutputPinBitmask - 0x10) +
                            (longlong)
                            *(int *)&pFVar15[1].OutputData.TaggedData.AllocatorInstance.Data * 0x30)
                  ;
                  uVar28 = iVar19 - 1;
                  uVar35 = 0;
                  if ((int)uVar28 < iVar19) {
                    uVar35 = ~uVar28 >> 0x1f;
                  }
                  if ((uVar35 == 0) &&
                     (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar37)) {
                    pcVar14 = (code *)swi(3);
                    uVar18 = (*pcVar14)();
                    return (bool)uVar18;
                  }
                  uVar13 = pFVar16[1].InputData.InactiveOutputPinBitmask;
                  uVar35 = this_03->ArrayNum;
                  lVar26 = (longlong)
                           *(int *)&pFVar16[1].OutputData.TaggedData.AllocatorInstance.Data * 0x30;
                  uVar28 = *(uint *)(lVar26 + -0x18 + uVar13);
                  if (uVar35 != uVar28) {
                    if ((int)uVar35 < (int)uVar28) {
                      iVar19 = UE::Core::Private::
                               ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x18,8,uVar28 - uVar35,(ForAnyElementType *)this_03,
                                          &this_03->ArrayNum,&this_03->ArrayMax);
                      DefaultConstructItems<FPCGSkinnedMeshPackedCustomData,int>
                                ((this_03->AllocatorInstance).Data + (longlong)iVar19 * 0x18,
                                 uVar28 - uVar35);
                    }
                    else {
                      if ((int)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
                        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar28);
                      }
                      if ((int)uVar28 < (int)uVar35) {
                        iVar19 = uVar35 - uVar28;
                        if (iVar19 < 0) {
                          bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                              ,
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x458,
                                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                             );
                          if (bVar37) {
                            pcVar14 = (code *)swi(3);
                            uVar18 = (*pcVar14)();
                            return (bool)uVar18;
                          }
                        }
                        else if (iVar19 == 0) goto LAB_149c314f4;
                        TArray<FPCGSkinnedMeshPackedCustomData,TSizedDefaultAllocator<32>_>::
                        RemoveAtImpl(this_03,uVar28,iVar19);
                        UE::Core::Private::
                        ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x18,8,(ForAnyElementType *)this_03,this_03->ArrayNum,
                                   &this_03->ArrayMax);
                      }
                    }
                  }
LAB_149c314f4:
                  if (((local_1f0->InstanceDataPackerParameters).field0_0x0.DebugPtr !=
                       (UPCGSkinnedMeshInstanceDataPackerBase *)0x0) &&
                     (0 < *(int *)(lVar26 + -0x18 + uVar13))) {
                    do {
                      local_1e0 = (FPCGContext *)
                                  (local_1f0->InstanceDataPackerParameters).field0_0x0.DebugPtr;
                      uVar35 = 0;
                      if ((int)uVar34 < this_03->ArrayNum) {
                        uVar35 = ~uVar34 >> 0x1f;
                      }
                      if ((uVar35 == 0) &&
                         (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar37)) {
                        pcVar14 = (code *)swi(3);
                        uVar18 = (*pcVar14)();
                        return (bool)uVar18;
                      }
                      pFVar10 = (this_03->AllocatorInstance).Data;
                      uVar35 = 0;
                      if ((int)uVar34 < *(int *)(lVar26 + -0x18 + uVar13)) {
                        uVar35 = ~uVar34 >> 0x1f;
                      }
                      if ((uVar35 == 0) &&
                         (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar37)) {
                        pcVar14 = (code *)swi(3);
                        uVar18 = (*pcVar14)();
                        return (bool)uVar18;
                      }
                      UPCGSkinnedMeshInstanceDataPackerBase::PackInstances
                                ((UPCGSkinnedMeshInstanceDataPackerBase *)local_1e0,local_208,
                                 (UPCGSpatialData *)
                                 local_208[1].OutputData.DataCrcs.AllocatorInstance.Data,
                                 (FPCGSkinnedMeshInstanceList *)
                                 ((longlong)(int)uVar34 * 0x108 +
                                 *(longlong *)(lVar26 + -0x20 + uVar13)),
                                 (FPCGSkinnedMeshPackedCustomData *)
                                 (pFVar10 + (longlong)(int)uVar34 * 0x18));
                      uVar34 = uVar34 + 1;
                      cVar29 = local_1ff;
                    } while ((int)uVar34 < *(int *)(lVar26 + -0x18 + uVar13));
                  }
                }
                pFVar15 = local_208;
                piVar31 = &local_208[1].OutputData.TaggedData.ArrayNum;
                *piVar31 = *piVar31 + 1;
                *(undefined2 *)&local_208[1].OutputData.field_0x12 = 0;
                local_208[1].OutputData.field_0x14 = 0;
                local_208[1].OutputData.DataCrcs.AllocatorInstance.Data =
                     (FScriptContainerElement *)0x0;
                local_208[1].OutputData.DataCrcs.ArrayNum = 0;
                local_208[1].OutputData.DataCrcs.ArrayMax = 0;
                FPCGMeshMaterialOverrideHelper::Reset
                          ((FPCGMeshMaterialOverrideHelper *)
                           &local_208[1].OutputData.InactiveOutputPinBitmask);
                *(undefined4 *)&pFVar15[1].AsyncState.ChunkToNumElementsWrittenMap = 0;
                TSet<TTuple<TSoftObjectPtr<USkinnedAsset>,int>,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<USkinnedAsset>,int,0>,FDefaultSetAllocator>
                ::Reset((TSet<TTuple<TSoftObjectPtr<USkinnedAsset>,int>,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<USkinnedAsset>,int,0>,FDefaultSetAllocator>
                         *)&pFVar15[1].DependenciesCrc);
                puVar3 = &pFVar15[1].DynamicDependencies.Elements.field_0x28;
                puVar1 = &pFVar15[1].DynamicDependencies.Elements.field_0x34;
                pTVar11 = *(TArray<int,TSizedDefaultAllocator<32>_> **)puVar3;
                iVar19 = *(int *)&pFVar15[1].DynamicDependencies.Elements.field_0x30;
                if (*(int *)&pFVar15[1].DynamicDependencies.Elements.field_0x34 < 0) {
                  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar11,iVar19);
                  iVar19 = *(int *)puVar1;
                  *(undefined4 *)&pFVar15[1].DynamicDependencies.Elements.field_0x30 = 0;
                  if (iVar19 != 0) {
                    UE::Core::Private::
                    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x10,8,0,(ForAnyElementType *)puVar3,0,(int *)puVar1);
                  }
                }
                else {
                  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar11,iVar19);
                  *(undefined4 *)&pFVar15[1].DynamicDependencies.Elements.field_0x30 = 0;
                }
                pFVar32 = &pFVar15[1].DynamicDependencies.Hash;
                pFVar12 = *(FPCGSoftSkinnedMeshComponentDescriptor **)pFVar32;
                puVar1 = &pFVar15[1].DynamicDependencies.Hash.SecondaryData.field_0x4;
                iVar19 = *(int *)&pFVar15[1].DynamicDependencies.Hash.SecondaryData;
                if (*(int *)&pFVar15[1].DynamicDependencies.Hash.SecondaryData.field_0x4 < 0) {
                  DestructItems<FPCGSoftSkinnedMeshComponentDescriptor,int>(pFVar12,iVar19);
                  iVar19 = *(int *)puVar1;
                  *(undefined4 *)&pFVar15[1].DynamicDependencies.Hash.SecondaryData = 0;
                  if (iVar19 != 0) {
                    UE::Core::Private::
                    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0xd8,8,0,(ForAnyElementType *)pFVar32,0,(int *)puVar1);
                  }
                }
                else {
                  DestructItems<FPCGSoftSkinnedMeshComponentDescriptor,int>(pFVar12,iVar19);
                  *(undefined4 *)&pFVar15[1].DynamicDependencies.Hash.SecondaryData = 0;
                }
                bVar37 = FPCGAsyncState::ShouldStop(&local_208->AsyncState);
                if ((!bVar37) || (local_1d8.ArrayNum <= local_208[1].OutputData.TaggedData.ArrayNum)
                   ) goto LAB_149c31726;
              }
              bVar37 = false;
              goto LAB_149c3186a;
            }
            uVar35 = local_208[1].OutputData.TaggedData.ArrayNum;
            uVar28 = 0;
            if ((int)uVar35 < local_1d8.ArrayNum) {
              uVar28 = ~uVar35 >> 0x1f;
            }
            if ((uVar28 == 0) &&
               (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar37)) {
              pcVar14 = (code *)swi(3);
              uVar18 = (*pcVar14)();
              return (bool)uVar18;
            }
            pFVar36 = (FObjectPtr_u_0 *)
                      (local_1d8.AllocatorInstance.Data + (longlong)(int)uVar35 * 0x78);
            local_1b8 = (FObjectPtr_u_0)pFVar36->Handle;
            if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149c30c2e:
              if (local_1b8.Handle != (UObject *)0x0) {
                pUVar22 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
                bVar37 = FObjectPtr::IsA((FObjectPtr *)&local_1b8,pUVar22);
                if ((bVar37) && (local_1b8.Handle != (UObject *)0x0)) {
                  local_50 = 0;
                  local_4f = 0;
                  local_4b = 0;
                  local_49 = 0;
                  local_80 = 0;
                  uStack_78 = 0;
                  local_70 = 0;
                  uStack_68 = 0;
                  local_60 = 0;
                  uStack_58 = 0;
                  pUVar23 = (UPCGSpatialData *)
                            (**(code **)(*(longlong *)local_1b8.Handle + 0x3b0))();
                  pUVar20 = local_1f0;
                  if (pUVar23 == (UPCGSpatialData *)0x0) {
                    if (1 < (byte)LogPCG._0_1_) {
                      pFVar21 = FText::AsLocalizable_Advanced_LocText
                                          (&local_f0,L"PCGSkinnedMeshSpawnerElement",
                                           L"NoPointDataInInput",
                                           L"Unable to get point data from input");
                      FText::ToString(pFVar21);
                      uVar35 = uVar34;
                      if (local_208 != (FPCGContext *)0x0) {
                        local_1fc = uVar34 | 0x10;
                        FPCGContext::GetTaskName(local_208,&local_100);
                        uVar35 = uVar34 | 0x10;
                        if (local_208 != (FPCGContext *)0x0) {
                          uVar35 = uVar34 | 0x30;
                          local_1fc = uVar35;
                          FPCGContext::GetExecutionSourceName(local_208,&local_110);
                        }
                      }
                      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                      if (((uVar35 & 0x20) != 0) &&
                         (uVar35 = uVar35 & 0xffffffdf, local_1fc = uVar35,
                         local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                        FMemory::Free(local_110.Data.AllocatorInstance.Data);
                      }
                      TVar27.Reference = local_f0.TextData.Reference;
                      if (((uVar35 & 0x10) != 0) &&
                         (local_1fc = uVar35 & 0xffffffef,
                         local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                        FMemory::Free(local_100.Data.AllocatorInstance.Data);
                        TVar27.Reference = local_f0.TextData.Reference;
                      }
LAB_149c30f52:
                      if (TVar27.Reference != (ITextData *)0x0) {
                        (**(code **)((longlong)*TVar27.Reference + 0x10))();
                      }
                    }
                  }
                  else {
                    pUVar24 = TPersistentObjectPtr<FSoftObjectPath>::Get
                                        ((TPersistentObjectPtr<FSoftObjectPath> *)
                                         &local_1f0->TargetActor);
                    if (pUVar24 == (UObject *)0x0) {
LAB_149c30e30:
                      pAVar25 = FPCGContext::GetTargetActor(local_208,(UPCGSpatialData *)0x0);
                    }
                    else {
                      pUVar22 = Z_Construct_UClass_AActor_NoRegister();
                      iVar19 = (int)pUVar22->_padding_;
                      if ((*(int *)(*(longlong *)&pUVar24->field_0x10 + 0x38) < iVar19) ||
                         ((longlong *)
                          *(undefined1 **)
                           (*(longlong *)(*(longlong *)&pUVar24->field_0x10 + 0x30) +
                           (longlong)iVar19 * 8) != &pUVar22->_padding_)) goto LAB_149c30e30;
                      pAVar25 = (AActor *)
                                TPersistentObjectPtr<FSoftObjectPath>::Get
                                          ((TPersistentObjectPtr<FSoftObjectPath> *)
                                           &pUVar20->TargetActor);
                      if (pAVar25 == (AActor *)0x0) {
LAB_149c30e2c:
                        pAVar25 = (AActor *)0x0;
                      }
                      else {
                        pUVar22 = Z_Construct_UClass_AActor_NoRegister();
                        iVar19 = (int)pUVar22->_padding_;
                        if ((*(int *)(pAVar25->_padding_ + 0x38) < iVar19) ||
                           ((longlong *)
                            *(undefined1 **)
                             (*(longlong *)(pAVar25->_padding_ + 0x30) + (longlong)iVar19 * 8) !=
                            &pUVar22->_padding_)) goto LAB_149c30e2c;
                      }
                    }
                    pFVar17 = local_198;
                    if (pAVar25 != (AActor *)0x0) {
                      if (local_200 != '\0') {
                        pFVar8 = (FObjectPtr_u_0 *)(local_198->TaggedData).AllocatorInstance.Data;
                        if (((pFVar8 <= pFVar36) &&
                            (pFVar36 < pFVar8 + (longlong)(local_198->TaggedData).ArrayMax * 0xf))
                           && (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                                  (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar37)) {
                          pcVar14 = (code *)swi(3);
                          uVar18 = (*pcVar14)();
                          return (bool)uVar18;
                        }
                        iVar19 = (pFVar17->TaggedData).ArrayNum;
                        piVar31 = &(pFVar17->TaggedData).ArrayMax;
                        if (iVar19 == *piVar31) {
                          iVar19 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x878,(ForAnyElementType *)pFVar17,piVar31);
                        }
                        (pFVar17->TaggedData).ArrayNum = iVar19 + 1;
                        this_01 = FPCGTaggedData::FPCGTaggedData
                                            ((FPCGTaggedData *)
                                             ((pFVar17->TaggedData).AllocatorInstance.Data +
                                             (longlong)iVar19 * 0x78),(FPCGTaggedData *)pFVar36);
                        this_02 = FPCGContext::NewObject_AnyThread<UPCGPointData>(local_208);
                        UPCGSpatialData::InitializeFromData
                                  ((UPCGSpatialData *)this_02,pUVar23,(UPCGMetadata *)0x0,true,true)
                        ;
                        FPCGDataPtrWrapper::operator=(&this_01->Data,(UPCGData *)this_02);
                        lVar26._0_4_ = local_208[1].OutputData.DataCrcs.ArrayNum;
                        lVar26._4_4_ = local_208[1].OutputData.DataCrcs.ArrayMax;
                        if ((lVar26 != 0) &&
                           (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                                               ("!Context->CurrentOutputPointData",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSkinnedMeshSpawner.cpp"
                                                ,0xd9,L""), bVar37)) {
                          pcVar14 = (code *)swi(3);
                          uVar18 = (*pcVar14)();
                          return (bool)uVar18;
                        }
                        *(UPCGPointData **)&local_208[1].OutputData.DataCrcs.ArrayNum = this_02;
                      }
                      pFVar15 = local_208;
                      iVar19 = *(int *)&local_208[1].OutputData.TaggedData.AllocatorInstance.Data;
                      piVar31 = (int *)((longlong)
                                        &local_208[1].OutputData.TaggedData.AllocatorInstance.Data +
                                       4);
                      if (iVar19 == *piVar31) {
                        iVar19 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x830,(ForAnyElementType *)
                                                  &local_208[1].InputData.InactiveOutputPinBitmask,
                                            piVar31);
                      }
                      lVar26 = (longlong)iVar19;
                      *(int *)&pFVar15[1].OutputData.TaggedData.AllocatorInstance.Data = iVar19 + 1;
                      uVar13 = pFVar15[1].InputData.InactiveOutputPinBitmask;
                      *(undefined8 *)(uVar13 + 0x10 + lVar26 * 0x30) = 0;
                      *(undefined8 *)(uVar13 + 0x18 + lVar26 * 0x30) = 0;
                      *(undefined8 *)(uVar13 + 0x20 + lVar26 * 0x30) = 0;
                      *(undefined8 *)(uVar13 + 0x28 + lVar26 * 0x30) = 0;
                      *(AActor **)(uVar13 + lVar26 * 0x30) = pAVar25;
                      *(UPCGSpatialData **)(uVar13 + 8 + lVar26 * 0x30) = pUVar23;
                      local_208[1].OutputData.DataCrcs.AllocatorInstance.Data =
                           (FScriptContainerElement *)pUVar23;
                      local_208[1].OutputData.field_0x12 = 1;
                      goto LAB_149c310f4;
                    }
                    if (1 < (byte)LogPCG._0_1_) {
                      pFVar21 = FText::AsLocalizable_Advanced_LocText
                                          (&local_c0,L"PCGSkinnedMeshSpawnerElement",
                                           L"InvalidTargetActor",
                                           L"Invalid target actor. Ensure TargetActor member is initialized when creating SpatialData."
                                          );
                      FText::ToString(pFVar21);
                      uVar35 = uVar34;
                      if (local_208 != (FPCGContext *)0x0) {
                        local_1fc = uVar34 | 0x40;
                        FPCGContext::GetTaskName(local_208,&local_d0);
                        uVar35 = uVar34 | 0x40;
                        if (local_208 != (FPCGContext *)0x0) {
                          uVar35 = uVar34 | 0xc0;
                          local_1fc = uVar35;
                          FPCGContext::GetExecutionSourceName(local_208,&local_e0);
                        }
                      }
                      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                      if (((char)uVar35 < '\0') &&
                         (uVar35 = uVar35 & 0xffffff7f, local_1fc = uVar35,
                         local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
                      }
                      TVar27.Reference = local_c0.TextData.Reference;
                      if (((uVar35 & 0x40) != 0) &&
                         (local_1fc = uVar35 & 0xffffffbf,
                         local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
                        TVar27.Reference = local_c0.TextData.Reference;
                      }
                      goto LAB_149c30f52;
                    }
                  }
                  piVar31 = &local_208[1].OutputData.TaggedData.ArrayNum;
                  *piVar31 = *piVar31 + 1;
                  goto LAB_149c31726;
                }
              }
            }
            else if (local_1b8.Handle != (UObject *)0x0) {
              UE::GC::MarkAsReachable(local_1b8.Handle);
              goto LAB_149c30c2e;
            }
            if (1 < (byte)LogPCG._0_1_) {
              pFVar21 = FText::AsLocalizable_Advanced_LocText
                                  (&local_90,L"PCGSkinnedMeshSpawnerElement",L"InvalidInputData",
                                   L"Invalid input data");
              FText::ToString(pFVar21);
              uVar35 = uVar34;
              if (local_208 != (FPCGContext *)0x0) {
                local_1fc = uVar34 | 4;
                FPCGContext::GetTaskName(local_208,&local_a0);
                uVar35 = uVar34 | 4;
                if (local_208 != (FPCGContext *)0x0) {
                  uVar35 = uVar34 | 0xc;
                  local_1fc = uVar35;
                  FPCGContext::GetExecutionSourceName(local_208,&local_b0);
                }
              }
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
              if (((uVar35 & 8) != 0) &&
                 (uVar35 = uVar35 & 0xfffffff7, local_1fc = uVar35,
                 local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_b0.Data.AllocatorInstance.Data);
              }
              if (((uVar35 & 4) != 0) &&
                 (local_1fc = uVar35 & 0xfffffffb,
                 local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_a0.Data.AllocatorInstance.Data);
              }
              if (local_90.TextData.Reference != (ITextData *)0x0) {
                (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
              }
            }
            piVar31 = &local_208[1].OutputData.TaggedData.ArrayNum;
            *piVar31 = *piVar31 + 1;
LAB_149c31726:
            uVar34 = local_1fc;
          } while (local_208[1].OutputData.TaggedData.ArrayNum < local_1d8.ArrayNum);
        }
        pFVar15 = local_208;
        local_1e0 = local_208 + 1;
        if ((((local_208[1].OutputData.TaggedData.ArrayNum == local_1d8.ArrayNum) &&
             (*(char *)&local_208[1].InputData.TaggedData.AllocatorInstance.Data == '\0')) &&
            (*(int *)&local_208[1].OutputData.TaggedData.AllocatorInstance.Data != 0)) &&
           (local_1f0->bSynchronousLoad == false)) {
          local_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1a8.ArrayNum = 0;
          local_1a8.ArrayMax = 0;
          uVar13 = local_208[1].InputData.InactiveOutputPinBitmask;
          iVar19 = *(int *)&local_208[1].OutputData.TaggedData.AllocatorInstance.Data;
          piVar31 = (int *)(uVar13 + 0x18);
          while( true ) {
            if (*(int *)&pFVar15[1].OutputData.TaggedData.AllocatorInstance.Data != iVar19) {
              `TCheckedPointerIterator<FPCGSkinnedMeshSpawnerContext::FPackedInstanceListData,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(&local_1e8);
            }
            if (piVar31 + -6 == (int *)((longlong)iVar19 * 0x30 + uVar13)) break;
            lVar26 = *(longlong *)(piVar31 + -2);
            iVar5 = *piVar31;
            pFVar33 = (FSoftObjectPath *)(lVar26 + 0x80);
            while( true ) {
              if (*piVar31 != iVar5) {
                `TCheckedPointerIterator<FPCGSkinnedMeshInstanceList_const_,int,0>::operator!='::
                __l2::<lambda_1>::operator()(local_1e7);
              }
              if (pFVar33 + -4 == (FSoftObjectPath *)((longlong)iVar5 * 0x108 + lVar26)) break;
              if ((pFVar33->AssetPath).PackageName != (FName)0x0) {
                TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>::
                AddUniqueImpl<FSoftObjectPath_const_&>(&local_1a8,pFVar33);
              }
              pFVar33 = (FSoftObjectPath *)&pFVar33[8].AssetPath.AssetName;
            }
            piVar31 = piVar31 + 0xc;
          }
          bVar37 = IPCGAsyncLoadingContext::RequestResourceLoad
                             ((IPCGAsyncLoadingContext *)local_1e0,local_208,&local_1a8,true);
          DestructItems<FSoftObjectPath,int>
                    ((FSoftObjectPath *)local_1a8.AllocatorInstance.Data,local_1a8.ArrayNum);
          cVar29 = local_1ff;
          if ((FSoftObjectPath *)local_1a8.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
            FMemory::Free(local_1a8.AllocatorInstance.Data);
          }
        }
        else {
          bVar37 = true;
        }
LAB_149c3186a:
        DestructItems<FPCGTaggedData,int>
                  ((FPCGTaggedData *)local_1d8.AllocatorInstance.Data,local_1d8.ArrayNum);
        if ((FPCGTaggedData *)local_1d8.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
          FMemory::Free(local_1d8.AllocatorInstance.Data);
        }
        goto LAB_149c308d2;
      }
    }
  }
  bVar37 = true;
LAB_149c308d2:
  if (cVar29 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar37;
}

// SpawnSkinnedMeshInstances @ 149c34600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
FPCGSkinnedMeshSpawnerElement::SpawnSkinnedMeshInstances
          (FPCGSkinnedMeshSpawnerElement *this,FPCGSkinnedMeshSpawnerContext *param_1,
          FPCGSkinnedMeshInstanceList *param_2,AActor *param_3,
          FPCGSkinnedMeshPackedCustomData *param_4)

{
  longlong *this_00;
  FScriptContainerElement *pFVar1;
  int *piVar2;
  FWeakObjectPtr *this_01;
  USceneComponent *pUVar3;
  undefined8 uVar4;
  code *pcVar5;
  UInstancedSkinnedMeshComponent *this_02;
  AActor *pAVar6;
  FPCGSkinnedMeshInstanceList *pFVar7;
  FPCGSkinnedMeshSpawnerContext *this_03;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  UObject *pUVar13;
  UClass *pUVar14;
  UPCGSkinnedMeshSpawnerSettings *this_04;
  FPCGCrc FVar15;
  UPCGComponent *pUVar16;
  UPCGManagedISKMComponent *this_05;
  UInstancedSkinnedMeshComponent *pUVar17;
  FString *pFVar18;
  FText *pFVar19;
  FText *pFVar20;
  FText *pFVar21;
  FTextFormat *pFVar22;
  longlong lVar23;
  UPCGComponent *pUVar24;
  FScriptContainerElement *pFVar25;
  longlong lVar26;
  uint uVar27;
  UPCGComponent *pUVar28;
  FScriptContainerElement *pFVar29;
  UPCGComponent *pUVar30;
  bool bVar31;
  undefined1 auStackY_318 [32];
  undefined1 local_2e7 [3];
  int local_2e4;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_2e0;
  TArray<int,TSizedDefaultAllocator<32>_> local_2d0;
  UInstancedSkinnedMeshComponent *local_2c0;
  FPCGSkinnedMeshPackedCustomData *local_2b8;
  AActor *local_2b0;
  FPCGSkinnedMeshInstanceList *local_2a8;
  UPCGManagedISKMComponent *local_2a0;
  longlong local_298;
  FName local_290;
  TPersistentObjectPtr<FSoftObjectPath> *local_288;
  FName local_280;
  FPCGSkinnedMeshSpawnerContext *local_278;
  TArray<FPrimitiveInstanceId,TSizedDefaultAllocator<32>_> local_270;
  FScriptContainerElement *local_260;
  int iStack_258;
  undefined4 uStack_254;
  FText local_250;
  FString local_240;
  FString local_228;
  FString local_218;
  FText local_208;
  FText local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FText local_1a8;
  TArrayView<float_const_,int> local_198;
  FText local_188;
  FText local_178;
  FTextFormat local_168;
  FText local_158;
  FTextFormat local_148;
  FPCGSkinnedMeshComponentBuilderParams local_138;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_318;
  pUVar24 = (UPCGComponent *)0x0;
  local_2b8 = param_4;
  local_2e4 = 0;
  bVar31 = -1 < CpuChannel->Enabled;
  local_2b0 = param_3;
  local_2a8 = param_2;
  local_278 = param_1;
  if (bVar31) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId396,"FPCGSkinnedMeshSpawnerElement::Execute::PopulateAB",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSkinnedMeshSpawner.cpp"
               ,0x18c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId396);
  }
  if ((param_2->Instances).ArrayNum == 0) goto LAB_149c35034;
  this_00 = &(param_2->Descriptor)._padding_;
  local_288 = (TPersistentObjectPtr<FSoftObjectPath> *)this_00;
  pUVar13 = TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar13 == (UObject *)0x0) {
    if ((param_2->Descriptor)._padding_ != 0) {
      FSoftObjectPath::TryLoad
                ((FSoftObjectPath *)&(param_2->Descriptor)._padding_,(FUObjectSerializeContext *)0x0
                );
      pUVar13 = TPersistentObjectPtr<FSoftObjectPath>::Get
                          ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
      goto LAB_149c346ee;
    }
  }
  else {
LAB_149c346ee:
    if (pUVar13 != (UObject *)0x0) {
      pUVar14 = Z_Construct_UClass_USkinnedAsset_NoRegister();
      iVar9 = (int)pUVar14->_padding_;
      if ((iVar9 <= *(int *)(*(longlong *)&pUVar13->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar13->field_0x10 + 0x30) + (longlong)iVar9 * 8) ==
          &pUVar14->_padding_)) {
        if (param_1->bSkippedDueToReuse != false) goto LAB_149c35034;
        if (param_4 == (FPCGSkinnedMeshPackedCustomData *)0x0) {
          bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<3562587544245764532>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSkinnedMeshSpawner.cpp"
                             ,0x1b4,"InPackedCustomData");
          if (bVar8) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          goto LAB_149c35034;
        }
        FPCGSoftSkinnedMeshComponentDescriptor::FPCGSoftSkinnedMeshComponentDescriptor
                  (&local_138.Descriptor);
        local_138.NumCustomDataFloats = 0;
        local_138.SettingsCrc.Value = 0;
        local_138.SettingsCrc._4_4_ = local_138.SettingsCrc._4_4_ & 0xffffff00;
        local_138.bTransient = false;
        FPCGSoftSkinnedMeshComponentDescriptor::operator=
                  (&local_138.Descriptor,&param_2->Descriptor);
        pAVar6 = local_2b0;
        local_138.NumCustomDataFloats = param_4->NumCustomDataFloats;
        pUVar3 = (local_2b0->RootComponent).field0_0x0.DebugPtr;
        if (pUVar3 != (USceneComponent *)0x0) {
          local_138.Descriptor._padding_._4_1_ = (pUVar3->Mobility).Value;
        }
        this_04 = FPCGContext::GetInputSettings<UPCGSkinnedMeshSpawnerSettings>
                            ((FPCGContext *)param_1);
        if ((this_04 == (UPCGSkinnedMeshSpawnerSettings *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Settings",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSkinnedMeshSpawner.cpp"
                               ,0x1c6,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar15 = UPCGSettings::GetSettingsCrc((UPCGSettings *)this_04);
        uVar4 = *(undefined8 *)FVar15;
        local_138.SettingsCrc.Value = (uint)uVar4;
        local_138.SettingsCrc._4_4_ = SUB84((ulonglong)uVar4 >> 0x20,0);
        if (((char)((ulonglong)uVar4 >> 0x20) == '\0') &&
           (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<3562587544245764553>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSkinnedMeshSpawner.cpp"
                               ,0x1c9,"Params.SettingsCrc.IsValid()"), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((((param_1->_padding_ == 0) ||
             (bVar8 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&param_1->_padding_), !bVar8)) ||
            ((longlong *)param_1->_padding_ == (longlong *)0x0)) ||
           (pUVar16 = (UPCGComponent *)(**(code **)(*(longlong *)param_1->_padding_ + 8))(),
           pUVar16 == (UPCGComponent *)0x0)) {
LAB_149c34893:
          pUVar16 = pUVar24;
        }
        else {
          pUVar14 = Z_Construct_UClass_UPCGComponent_NoRegister();
          iVar9 = (int)pUVar14->_padding_;
          if ((*(int *)(pUVar16->_padding_ + 0x38) < iVar9) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar16->_padding_ + 0x30) + (longlong)iVar9 * 8) !=
              &pUVar14->_padding_)) goto LAB_149c34893;
        }
        this_05 = UPCGActorHelpers::GetOrCreateManagedABMC
                            (pAVar6,pUVar16,&local_138,(FPCGContext *)param_1);
        if ((this_05 == (UPCGManagedISKMComponent *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("MISKMC",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSkinnedMeshSpawner.cpp"
                               ,0x1ce,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        piVar2 = &(param_1->TouchedResources).ArrayMax;
        this_05->_padding_ = param_1->_padding_;
        iVar9 = (param_1->TouchedResources).ArrayNum;
        if (iVar9 == *piVar2) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&(param_1->TouchedResources).AllocatorInstance,piVar2);
        }
        (param_1->TouchedResources).ArrayNum = iVar9 + 1;
        this_01 = (FWeakObjectPtr *)
                  ((param_1->TouchedResources).AllocatorInstance.Data + (longlong)iVar9 * 8);
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_05);
        }
        this_01->ObjectIndex = 0;
        this_01->ObjectSerialNumber = 0;
        local_2a0 = this_05;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_05);
        }
        FWeakObjectPtr::operator=(this_01,(FObjectPtr)&local_2a0);
        pUVar17 = UPCGManagedISKMComponent::GetComponent(this_05);
        local_2c0 = pUVar17;
        if ((pUVar17 == (UInstancedSkinnedMeshComponent *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("ISKMC",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSkinnedMeshSpawner.cpp"
                               ,0x1d6,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar10 = UInstancedSkinnedMeshComponent::GetInstanceCount(pUVar17);
        uVar12 = (param_2->Instances).ArrayNum;
        lVar26 = (longlong)(int)uVar12;
        iVar9 = local_2b8->NumCustomDataFloats;
        local_2e4 = iVar9;
        if ((((pUVar17->NumCustomDataFloats != 0) || (iVar10 != 0)) &&
            (pUVar17->NumCustomDataFloats != iVar9)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ISKMC->GetNumCustomDataFloats() == 0 && PreExistingInstanceCount == 0) || ISKMC->GetNumCustomDataFloats() == NumCustomDataFloats"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGSkinnedMeshSpawner.cpp"
                               ,0x1dc,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        UInstancedSkinnedMeshComponent::SetNumCustomDataFloats(pUVar17,iVar9);
        local_2e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_2e0.ArrayNum = 0;
        local_2d0.ArrayNum = 0;
        local_2d0.ArrayMax = 0;
        local_2e0.ArrayMax = 0;
        local_2d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
        }
        pUVar16 = pUVar24;
        if (0 < (int)uVar12) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x60,0x10,uVar12,&local_2e0.AllocatorInstance,0,&local_2e0.ArrayMax);
          pUVar16 = (UPCGComponent *)(ulonglong)(uint)local_2e0.ArrayNum;
        }
        if (local_2d0.ArrayMax < (int)uVar12) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar12,&local_2d0.AllocatorInstance,local_2d0.ArrayNum,&local_2d0.ArrayMax)
          ;
          pUVar16 = (UPCGComponent *)(ulonglong)(uint)local_2e0.ArrayNum;
        }
        pFVar7 = local_2a8;
        iVar9 = (local_2a8->Instances).ArrayNum;
        pFVar25 = (local_2a8->Instances).AllocatorInstance.Data;
        pFVar29 = pFVar25 + (longlong)iVar9 * 0x70;
        while( true ) {
          uVar11 = (uint)pUVar16;
          if ((pFVar7->Instances).ArrayNum != iVar9) {
            local_2e7[0] = 0;
            `TCheckedPointerIterator<FPCGSkinnedMeshInstance_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_2e7);
            uVar11 = local_2e0.ArrayNum;
          }
          pUVar17 = local_2c0;
          if (pFVar25 == pFVar29) break;
          if (uVar11 == local_2e0.ArrayMax) {
            uVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1060,&local_2e0.AllocatorInstance,&local_2e0.ArrayMax);
          }
          local_2e0.ArrayNum = uVar11 + 1;
          uVar4 = *(undefined8 *)(pFVar25 + 8);
          lVar23 = (longlong)(int)uVar11 * 0x60;
          *(undefined8 *)(local_2e0.AllocatorInstance.Data + lVar23) = *(undefined8 *)pFVar25;
          *(undefined8 *)(local_2e0.AllocatorInstance.Data + lVar23 + 8) = uVar4;
          uVar4 = *(undefined8 *)(pFVar25 + 0x18);
          *(undefined8 *)(local_2e0.AllocatorInstance.Data + lVar23 + 0x10) =
               *(undefined8 *)(pFVar25 + 0x10);
          *(undefined8 *)(local_2e0.AllocatorInstance.Data + lVar23 + 0x10 + 8) = uVar4;
          uVar4 = *(undefined8 *)(pFVar25 + 0x28);
          *(undefined8 *)(local_2e0.AllocatorInstance.Data + lVar23 + 0x20) =
               *(undefined8 *)(pFVar25 + 0x20);
          *(undefined8 *)(local_2e0.AllocatorInstance.Data + lVar23 + 0x20 + 8) = uVar4;
          uVar4 = *(undefined8 *)(pFVar25 + 0x38);
          *(undefined8 *)(local_2e0.AllocatorInstance.Data + lVar23 + 0x30) =
               *(undefined8 *)(pFVar25 + 0x30);
          *(undefined8 *)(local_2e0.AllocatorInstance.Data + lVar23 + 0x30 + 8) = uVar4;
          uVar4 = *(undefined8 *)(pFVar25 + 0x48);
          *(undefined8 *)(local_2e0.AllocatorInstance.Data + lVar23 + 0x40) =
               *(undefined8 *)(pFVar25 + 0x40);
          *(undefined8 *)(local_2e0.AllocatorInstance.Data + lVar23 + 0x40 + 8) = uVar4;
          uVar4 = *(undefined8 *)(pFVar25 + 0x58);
          *(undefined8 *)(local_2e0.AllocatorInstance.Data + lVar23 + 0x50) =
               *(undefined8 *)(pFVar25 + 0x50);
          *(undefined8 *)(local_2e0.AllocatorInstance.Data + lVar23 + 0x50 + 8) = uVar4;
          if (local_2d0.ArrayNum == local_2d0.ArrayMax) {
            local_2d0.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_2d0.AllocatorInstance,&local_2d0.ArrayMax);
          }
          pFVar1 = pFVar25 + 0x60;
          pFVar25 = pFVar25 + 0x70;
          *(undefined4 *)(local_2d0.AllocatorInstance.Data + (longlong)local_2d0.ArrayNum * 4) =
               *(undefined4 *)pFVar1;
          pUVar16 = (UPCGComponent *)(ulonglong)(uint)local_2e0.ArrayNum;
          local_2d0.ArrayNum = local_2d0.ArrayNum + 1;
        }
        UInstancedSkinnedMeshComponent::AddInstances
                  (local_2c0,&local_270,&local_2e0,&local_2d0,true,true);
        this_02 = local_2c0;
        iVar9 = local_2e4;
        if ((0 < local_2e4) && (pUVar17 = this_02, local_298 = lVar26, 0 < (int)uVar12)) {
          uStack_254 = local_250._12_4_;
          iStack_258 = local_2e4;
          pUVar16 = pUVar24;
          pUVar28 = pUVar24;
          pUVar30 = pUVar24;
          do {
            uVar11 = (uint)pUVar16;
            uVar12 = 0;
            if ((int)uVar11 < (local_2b8->CustomData).ArrayNum) {
              uVar12 = ~uVar11 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_260 = (local_2b8->CustomData).AllocatorInstance.Data + (longlong)(int)uVar11 * 4;
            uVar27 = (uint)pUVar28;
            uVar12 = 0;
            if ((int)uVar27 < local_270.ArrayNum) {
              uVar12 = ~uVar27 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_198._12_4_ = uStack_254;
            local_198.ArrayNum = iStack_258;
            local_198.DataPtr = (float *)local_260;
            UInstancedSkinnedMeshComponent::SetCustomData
                      (this_02,(FPrimitiveInstanceId)
                               *(int *)(local_270.AllocatorInstance.Data + (longlong)pUVar30 * 4),
                       &local_198);
            pUVar28 = (UPCGComponent *)(ulonglong)(uVar27 + 1);
            pUVar16 = (UPCGComponent *)(ulonglong)(uVar11 + iVar9);
            pUVar30 = (UPCGComponent *)((longlong)&pUVar30->_padding_ + 1);
          } while ((longlong)pUVar30 < lVar26);
        }
        (**(code **)(*(longlong *)pUVar17 + 0x5b0))(pUVar17);
        UInstancedSkinnedMeshComponent::OptimizeInstanceData(pUVar17,false);
        if (5 < (byte)LogPCG._0_1_) {
          local_290 = (FName)local_2b0->_padding_;
          pFVar18 = ::FName::ToString(&local_290,&local_1d8);
          pFVar19 = FText::FromString(&local_188,pFVar18);
          pUVar16 = (UPCGComponent *)TPersistentObjectPtr<FSoftObjectPath>::Get(local_288);
          if (pUVar16 == (UPCGComponent *)0x0) {
LAB_149c34d26:
            pUVar16 = pUVar24;
          }
          else {
            pUVar14 = Z_Construct_UClass_USkinnedAsset_NoRegister();
            iVar9 = (int)pUVar14->_padding_;
            if ((*(int *)(pUVar16->_padding_ + 0x38) < iVar9) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar16->_padding_ + 0x30) + (longlong)iVar9 * 8) !=
                &pUVar14->_padding_)) goto LAB_149c34d26;
          }
          local_280 = (FName)pUVar16->_padding_;
          pFVar18 = ::FName::ToString(&local_280,&local_1e8);
          pFVar20 = FText::FromString(&local_178,pFVar18);
          iVar9 = (local_2a8->Instances).ArrayNum;
          pFVar21 = FText::AsLocalizable_Advanced_LocText
                              (&local_1f8,L"PCGSkinnedMeshSpawnerElement",L"GenerationInfo",
                               L"Added {0} instances of \'{1}\' on actor \'{2}\'");
          pFVar22 = FTextFormat::FTextFormat(&local_168,pFVar21,Default);
          pFVar19 = FText::Format<int,FText,FText>(&local_208,pFVar22,iVar9,pFVar20,pFVar19);
          FText::ToString(pFVar19);
          this_03 = local_278;
          FPCGContext::GetTaskName((FPCGContext *)local_278,&local_218);
          FPCGContext::GetExecutionSourceName((FPCGContext *)this_03,&local_228);
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
          if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_228.Data.AllocatorInstance.Data);
          }
          if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_218.Data.AllocatorInstance.Data);
          }
          if (local_208.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_208.TextData.Reference + 0x10))();
          }
          if (local_1f8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_1f8.TextData.Reference + 0x10))();
          }
          if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
          }
          if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
          }
        }
        if (local_270.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_270.AllocatorInstance.Data);
        }
        if (local_2d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2d0.AllocatorInstance.Data);
        }
        if (local_2e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2e0.AllocatorInstance.Data);
        }
        if (local_138.Descriptor.ComponentTags.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Descriptor.ComponentTags.AllocatorInstance.Data);
        }
        FSoftSkinnedMeshComponentDescriptor::~FSoftSkinnedMeshComponentDescriptor
                  ((FSoftSkinnedMeshComponentDescriptor *)&local_138);
        goto LAB_149c35034;
      }
    }
  }
  pUVar13 = TPersistentObjectPtr<FSoftObjectPath>::Get
                      ((TPersistentObjectPtr<FSoftObjectPath> *)this_00);
  if (pUVar13 != (UObject *)0x0) {
    pUVar14 = Z_Construct_UClass_USkinnedAsset_NoRegister();
    iVar9 = (int)pUVar14->_padding_;
    if (((iVar9 <= *(int *)(*(longlong *)&pUVar13->field_0x10 + 0x38)) &&
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&pUVar13->field_0x10 + 0x30) + (longlong)iVar9 * 8) ==
         &pUVar14->_padding_)) && (1 < (byte)LogPCG._0_1_)) {
      FSoftObjectPath::ToString((FSoftObjectPath *)&(param_2->Descriptor)._padding_,&local_240);
      pFVar19 = FText::FromString(&local_158,&local_240);
      pFVar20 = FText::AsLocalizable_Advanced_LocText
                          (&local_250,L"PCGSkinnedMeshSpawnerElement",L"MeshLoadFailed",
                           L"Unable to load mesh \'{0}\'");
      pFVar22 = FTextFormat::FTextFormat(&local_148,pFVar20,Default);
      pFVar19 = FText::Format<FText>(&local_1a8,pFVar22,pFVar19);
      FText::ToString(pFVar19);
      if (param_1 != (FPCGSkinnedMeshSpawnerContext *)0x0) {
        FPCGContext::GetTaskName((FPCGContext *)param_1,&local_1b8);
        pUVar24 = (UPCGComponent *)&DAT_00000003;
        FPCGContext::GetExecutionSourceName((FPCGContext *)param_1,&local_1c8);
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      if ((((ulonglong)pUVar24 & 2) != 0) &&
         (pUVar24 = (UPCGComponent *)(ulonglong)((uint)pUVar24 & 0xfffffffd),
         local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
      }
      if ((((ulonglong)pUVar24 & 1) != 0) &&
         (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
      if (local_1a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1a8.TextData.Reference + 0x10))();
      }
      if (local_250.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_250.TextData.Reference + 0x10))();
      }
      if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_240.Data.AllocatorInstance.Data);
      }
    }
  }
LAB_149c35034:
  if (bVar31) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

