// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 6

// ~FDynamicMeshElementContextContainer @ 145520810

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDynamicMeshElementContextContainer::~FDynamicMeshElementContextContainer
          (FDynamicMeshElementContextContainer *this)

{
  FQueuedCommandList *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  if ((this->CommandLists).ArrayNum != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CommandLists.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
                       ,0x1086,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = (this->CommandLists).AllocatorInstance.Data;
  if (pFVar1 != (FQueuedCommandList *)0x0) {
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(pFVar1);
  }
  pFVar2 = (this->Contexts).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// Init @ 145546b10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDynamicMeshElementContextContainer::Init
          (FDynamicMeshElementContextContainer *this,FSceneRenderer *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar8;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar9;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined4 uStack_2c;
  
  pFVar4 = (param_1->AllViews).AllocatorInstance.Data;
  uVar11 = param_2 + 1;
  iVar7 = (param_1->AllViews).ArrayNum;
  if ((iVar7 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  (this->Views).DataPtr = (FViewInfo **)pFVar4;
  *(ulonglong *)&(this->Views).ArrayNum = CONCAT44(uStack_2c,iVar7);
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &(this->Contexts).ArrayMax;
  if (*piVar1 < (int)uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar11,&(this->Contexts).AllocatorInstance,(this->Contexts).ArrayNum,piVar1);
  }
  uVar3 = (this->Contexts).ArrayNum;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  piVar2 = &(this->CommandLists).ArrayMax;
  if ((this->CommandLists).ArrayMax < (int)uVar3) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHICommandListImmediate::FQueuedCommandList>_>
              (8,8,uVar3,&(this->CommandLists).AllocatorInstance,(this->CommandLists).ArrayNum,
               piVar2);
  }
  if (0 < (int)uVar11) {
    uVar12 = (ulonglong)uVar11;
    do {
      aVar8 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
               )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(2000,8);
      *(undefined ***)aVar8 =
           &
           ___7__TObject_VFDynamicMeshElementContext_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
      ;
      *(undefined8 *)((longlong)aVar8 + 8) = 0;
      aVar9 = (param_1->Allocator).Next;
      do {
        *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
          *)((longlong)aVar8 + 8) = aVar9;
        LOCK();
        aVar10 = (param_1->Allocator).Next;
        bVar6 = aVar9 == aVar10;
        if (bVar6) {
          (param_1->Allocator).Next = aVar8;
          aVar10 = aVar9;
        }
        UNLOCK();
        aVar9 = aVar10;
      } while (!bVar6);
      FDynamicMeshElementContext::FDynamicMeshElementContext
                ((FDynamicMeshElementContext *)((longlong)aVar8 + 0x10),param_1);
      iVar7 = (this->Contexts).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->Contexts).AllocatorInstance,piVar1);
      }
      (this->Contexts).ArrayNum = iVar7 + 1;
      *(FDynamicMeshElementContext **)
       ((this->Contexts).AllocatorInstance.Data + (longlong)iVar7 * 8) =
           (FDynamicMeshElementContext *)((longlong)aVar8 + 0x10);
      iVar7 = (this->CommandLists).ArrayNum;
      if (iVar7 == *piVar2) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHICommandListImmediate::FQueuedCommandList>_>
                          (0x808,&(this->CommandLists).AllocatorInstance,piVar2);
        (this->CommandLists).ArrayNum = iVar7;
      }
      (this->CommandLists).ArrayNum = iVar7 + 1;
      (this->CommandLists).AllocatorInstance.Data[iVar7].CmdList =
           *(FRHICommandListBase **)((longlong)aVar8 + 0x760);
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  return;
}

// LaunchAsyncTask @ 145547810

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FTaskHandle __thiscall
FDynamicMeshElementContextContainer::LaunchAsyncTask
          (FDynamicMeshElementContextContainer *this,FDynamicPrimitiveIndexQueue *param_1,
          int param_2,ETaskPriority param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FTaskHandle FVar5;
  FTaskBase *this_00;
  undefined4 in_register_00000084;
  uint uVar6;
  undefined7 in_register_00000089;
  ETaskPriority in_stack_00000028;
  
  uVar6 = (uint)CONCAT71(in_register_00000089,param_3);
  uVar4 = 0;
  if ((int)uVar6 < (this->Contexts).ArrayNum) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar5.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(*pcVar2)();
      return (FTaskHandle)FVar5.Pimpl.Reference;
    }
  }
  lVar1 = *(longlong *)((this->Contexts).AllocatorInstance.Data + (longlong)(int)uVar6 * 8);
  this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&UE::Tasks::Private::SmallTaskAllocator);
  if (this_00 == (FTaskBase *)0x0) {
    this_00 = (FTaskBase *)0x0;
  }
  else {
    UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
    this_00->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<`FDynamicMeshElementContext::LaunchAsyncTask'::`2'::<lambda_1>,void,void>
          ::_vftable_;
    UE::Tasks::Private::FTaskBase::Init
              (this_00,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp(4122)"
               ,in_stack_00000028,None,None);
    this_00[1]._padding_ = lVar1;
    this_00[1]._padding_ = CONCAT44(in_register_00000084,param_2);
    this_00->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTask<`FDynamicMeshElementContext::LaunchAsyncTask'::`2'::<lambda_1>_>::
          _vftable_;
  }
  LOCK();
  *(longlong *)(lVar1 + 0x7a0) = *(longlong *)(lVar1 + 0x7a0) + 1;
  UNLOCK();
  LOCK();
  this_00->NumLocks = (atomic<unsigned_int>)((int)this_00->NumLocks + 1);
  UNLOCK();
  this_00->Pipe = (FPipe *)(lVar1 + 0x798);
  UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
  (param_1->List).Primitives.AllocatorInstance.Data = (FDynamicPrimitiveIndex *)this_00;
  return (FTaskHandle)(TRefCountPtr<UE::Tasks::Private::FTaskBase>)param_1;
}

// LaunchRenderThreadTask @ 145547dc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
FDynamicMeshElementContextContainer::LaunchRenderThreadTask
          (FDynamicMeshElementContextContainer *this,FDynamicPrimitiveIndexList *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  TAtomic<ENamedThreads::Type> TVar7;
  bool bVar8;
  uint uVar9;
  TRefCountPtr<FBaseGraphTask> TVar10;
  FTaskBase *this_00;
  longlong *plVar11;
  uint uVar12;
  FTaskBase *this_01;
  undefined8 *in_R8;
  EExtendedTaskPriority local_res8 [8];
  ETaskPriority local_res10 [8];
  code *local_68;
  longlong local_58;
  undefined8 uStack_50;
  FPipe *local_48;
  longlong *local_40;
  
  iVar1 = (this->Contexts).ArrayNum;
  this_01 = (FTaskBase *)0x0;
  uVar12 = iVar1 - 1;
  uVar9 = 0;
  if ((int)uVar12 < iVar1) {
    uVar9 = ~uVar12 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    TVar10.Reference = (FBaseGraphTask *)(*pcVar6)();
    return (TRefCountPtr<FBaseGraphTask>)TVar10.Reference;
  }
  TVar7 = ENamedThreads::FRenderThreadStatics::RenderThread_Local;
  uVar4 = *in_R8;
  local_68 = (code *)0x0;
  uVar5 = *(undefined8 *)
           ((this->Contexts).AllocatorInstance.Data + (longlong)(this->Contexts).ArrayNum * 8 + -8);
  *in_R8 = 0;
  uVar2 = *(undefined4 *)(in_R8 + 1);
  uVar3 = *(undefined4 *)((longlong)in_R8 + 0xc);
  in_R8[1] = 0;
  local_40 = FMemory::Malloc(0x20,8);
  local_40[1] = uVar5;
  local_40[2] = uVar4;
  *local_40 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FDynamicMeshElementContext::LaunchRenderThreadTask'::`2'::<lambda_1>,1,1>
               ::_vftable_;
  *(undefined4 *)(local_40 + 3) = uVar2;
  *(undefined4 *)((longlong)local_40 + 0x1c) = uVar3;
  if (local_40 != (longlong *)&DAT_fffffffffffffff8) {
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<`FDynamicMeshElementContext::LaunchRenderThreadTask'::__l2::<lambda_1>,void>
               ::Call;
  }
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
  if (this_00 != (FTaskBase *)0x0) {
    FBaseGraphTask::FBaseGraphTask
              ((FBaseGraphTask *)this_00,
               (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                *)0x0);
    this_00->_padding_ = (longlong)&___7__TGraphTask_V__TFunctionGraphTaskImpl___A6AXXZ_0A_____6B_;
    this_01 = this_00;
  }
  this_01[1]._padding_ = (longlong)&TStatId::TStatId_NAME_None;
  this_01[1]._padding_ = (longlong)local_68;
  *(longlong **)&this_01[1].StateChangeEvent = local_40;
  local_40 = (longlong *)0x0;
  this_01[1]._padding_ = local_58;
  this_01[1].RefCount = (atomic<unsigned_int>)(undefined4)uStack_50;
  this_01[1].NumLocks = (atomic<unsigned_int>)uStack_50._4_4_;
  this_01[1].Pipe = local_48;
  if (this_01[1]._padding_ != 0) {
    local_68 = (code *)0x0;
  }
  this_01[1].ExecutingThreadId = (atomic<unsigned_int>)TVar7;
  UE::Tasks::Private::TranslatePriority((Type)TVar7,local_res10,local_res8);
  UE::Tasks::Private::FTaskBase::Init(this_01,L"GraphTask",local_res10[0],local_res8[0],None);
  (param_1->Primitives).AllocatorInstance.Data = (FDynamicPrimitiveIndex *)this_01;
  if (this_01 != (FTaskBase *)0x0) {
    LOCK();
    this_01->RefCount = (atomic<unsigned_int>)((int)this_01->RefCount + 1);
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch
            ((FTaskBase *)(param_1->Primitives).AllocatorInstance.Data,0x130);
  if (local_68 != (code *)0x0) {
    plVar11 = &local_58;
    if (local_40 != (longlong *)0x0) {
      plVar11 = local_40;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

// MergeContexts @ 1455497a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDynamicMeshElementContextContainer::MergeContexts
          (FDynamicMeshElementContextContainer *this,
          TArray<FDynamicPrimitive,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_1)

{
  TArray<FDynamicPrimitive,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *pTVar1;
  ForElementType<FDynamicPrimitiveResource_*> *pFVar2;
  undefined8 *puVar3;
  TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar4;
  int *piVar5;
  longlong lVar6;
  FDynamicPrimitive *pFVar7;
  FDynamicPrimitiveResource **_Src;
  FViewInfo *pFVar8;
  code *pcVar9;
  TIntVector2<int> TVar10;
  FDynamicMeshElementContextContainer *pFVar11;
  FDynamicPrimitiveResource *pFVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  ForElementType<_public:_void___cdecl_FDynamicMeshElementContextContainer::MergeContexts(TArray<FDynamicPrimitive,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&)_::_16_::FViewAllocationInfo>
  FVar18;
  FDynamicPrimitiveResource FVar19;
  ulonglong uVar20;
  ulong64 uVar21;
  ulong64 uVar22;
  FDynamicPrimitiveResource *pFVar23;
  FDynamicPrimitiveResource FVar24;
  uint uVar25;
  undefined8 *puVar26;
  uint uVar27;
  FAllocationInfo *pFVar28;
  ulong64 uVar29;
  uint uVar30;
  int iVar31;
  longlong lVar32;
  FScriptContainerElement *pFVar33;
  bool bVar34;
  undefined1 auStackY_228 [32];
  undefined1 local_1e7;
  undefined1 local_1e6;
  undefined1 local_1e5;
  uint local_1e4;
  FDynamicMeshElementContextContainer *local_1e0;
  FDynamicPrimitiveResource local_1d8;
  FScriptContainerElement *local_1d0;
  TArray<FDynamicPrimitive,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *local_1c8;
  FDynamicPrimitiveResource *local_1c0;
  FDynamicPrimitiveResource local_1b8;
  FDynamicPrimitiveResource local_1b0;
  int local_1a8;
  int iStack_1a4;
  FDynamicPrimitiveResource *local_1a0;
  uint local_198;
  uint uStack_194;
  int iStack_190;
  int iStack_18c;
  FDynamicPrimitiveResource *local_188;
  ForElementType<_public:_void___cdecl_FDynamicMeshElementContextContainer::MergeContexts(TArray<FDynamicPrimitive,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&)_::_16_::FViewAllocationInfo>
  local_178;
  int local_58 [4];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1e0 = this;
  local_1c8 = param_1;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"MergeGatherDynamicMeshElementContexts");
  bVar34 = -1 < CpuChannel->Enabled;
  if (bVar34) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4261,"MergeGatherDynamicMeshElementContexts",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
               ,0x10a5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4261);
  }
  if (((this->Views).ArrayNum == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("!Views.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
                          ,0x10a7,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar21 = 0;
  if ((this->Contexts).ArrayNum == 1) {
    lVar6 = *(longlong *)(this->Contexts).AllocatorInstance.Data;
    pTVar1 = (TArray<FDynamicPrimitive,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
              *)(lVar6 + 0x5d8);
    if (param_1 != pTVar1) {
      pFVar7 = (param_1->AllocatorInstance).Data;
      if (pFVar7 != (FDynamicPrimitive *)0x0) {
        TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar7);
      }
      (param_1->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
      (pTVar1->AllocatorInstance).Data = (FDynamicPrimitive *)0x0;
      param_1->ArrayNum = *(int *)(lVar6 + 0x5e0);
      param_1->ArrayMax = *(int *)(lVar6 + 0x5e4);
      *(undefined8 *)(lVar6 + 0x5e0) = 0;
    }
    iVar16 = (this->Views).ArrayNum;
    if (0 < iVar16) {
      local_1b0 = (FDynamicPrimitiveResource)(lVar6 + 0x48);
      local_1c8 = (TArray<FDynamicPrimitive,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                   *)0x0;
      uVar22 = uVar21;
      do {
        FVar24 = local_1b0;
        pTVar1 = local_1c8;
        uVar30 = (uint)uVar22;
        uVar17 = 0;
        if ((int)uVar30 < iVar16) {
          uVar17 = ~uVar30 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar6 = *(longlong *)((longlong)pTVar1 + (longlong)(this->Views).DataPtr);
        uVar17 = 0;
        if ((int)uVar30 < *(int *)((longlong)FVar24 + 0x588)) {
          uVar17 = ~uVar30 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar32 = *(longlong *)(lVar6 + 0x2070);
        if (*(FDynamicPrimitiveResource *)((longlong)FVar24 + 0x580) !=
            (FDynamicPrimitiveResource)0x0) {
          FVar24 = *(FDynamicPrimitiveResource *)((longlong)FVar24 + 0x580);
        }
        puVar26 = (undefined8 *)((longlong)FVar24 + uVar21);
        *(undefined8 *)(lVar32 + 8) = puVar26[3];
        FBatchedElements::operator=
                  ((FBatchedElements *)(lVar32 + 0x10),(FBatchedElements *)(puVar26 + 4));
        FBatchedElements::operator=
                  ((FBatchedElements *)(lVar32 + 0xa8),(FBatchedElements *)(puVar26 + 0x17));
        pFVar2 = (ForElementType<FDynamicPrimitiveResource_*> *)(lVar32 + 0x148);
        *(undefined4 *)(lVar32 + 0x140) = *(undefined4 *)(puVar26 + 0x2a);
        if (pFVar2 != (ForElementType<FDynamicPrimitiveResource_*> *)(puVar26 + 0x2b)) {
          iVar16 = *(int *)(puVar26 + 0x2c);
          piVar5 = (int *)(lVar32 + 0x154);
          local_1c0 = (FDynamicPrimitiveResource *)
                      ((ForElementType<FDynamicPrimitiveResource_*> *)(puVar26 + 0x2b))->Data;
          *(int *)(lVar32 + 0x150) = iVar16;
          if ((iVar16 == 0) && (*piVar5 == 0)) {
            *piVar5 = 0;
          }
          else {
            UE::Core::Private::
            ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FDynamicPrimitiveResource_*>_>
                      (8,8,iVar16,*piVar5,pFVar2,iVar16,piVar5);
            if (iVar16 != 0) {
              memcpy(pFVar2->Data,local_1c0,(longlong)iVar16 << 3);
            }
          }
        }
        puVar3 = (undefined8 *)(lVar6 + 0x2000);
        if (puVar3 != puVar26) {
          if ((void *)*puVar3 != (void *)0x0) {
            TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free((void *)*puVar3);
          }
          *puVar3 = *puVar26;
          *puVar26 = 0;
          *(undefined4 *)(lVar6 + 0x2008) = *(undefined4 *)(puVar26 + 1);
          *(undefined4 *)(lVar6 + 0x200c) = *(undefined4 *)((longlong)puVar26 + 0xc);
          puVar26[1] = 0;
        }
        lVar6 = *(longlong *)(lVar6 + 0x2080);
        *(undefined8 *)(lVar6 + 8) = puVar26[0x2e];
        FBatchedElements::operator=
                  ((FBatchedElements *)(lVar6 + 0x10),(FBatchedElements *)(puVar26 + 0x2f));
        FBatchedElements::operator=
                  ((FBatchedElements *)(lVar6 + 0xa8),(FBatchedElements *)(puVar26 + 0x42));
        pFVar2 = (ForElementType<FDynamicPrimitiveResource_*> *)(lVar6 + 0x148);
        *(undefined4 *)(lVar6 + 0x140) = *(undefined4 *)(puVar26 + 0x55);
        if (pFVar2 != (ForElementType<FDynamicPrimitiveResource_*> *)(puVar26 + 0x56)) {
          iVar16 = *(int *)(puVar26 + 0x57);
          piVar5 = (int *)(lVar6 + 0x154);
          _Src = ((ForElementType<FDynamicPrimitiveResource_*> *)(puVar26 + 0x56))->Data;
          *(int *)(lVar6 + 0x150) = iVar16;
          if ((iVar16 == 0) && (*piVar5 == 0)) {
            *piVar5 = 0;
          }
          else {
            UE::Core::Private::
            ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FDynamicPrimitiveResource_*>_>
                      (8,8,iVar16,*piVar5,pFVar2,iVar16,piVar5);
            if (iVar16 != 0) {
              memcpy(pFVar2->Data,_Src,(longlong)iVar16 << 3);
            }
          }
        }
        uVar22 = (ulong64)(uVar30 + 1);
        local_1c8 = (TArray<FDynamicPrimitive,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                     *)((longlong)local_1c8 + 8);
        uVar21 = uVar21 + 0x2c0;
        iVar16 = (local_1e0->Views).ArrayNum;
        this = local_1e0;
      } while ((int)(uVar30 + 1) < iVar16);
    }
  }
  else {
    iVar16 = (this->Views).ArrayNum;
    local_178.SecondaryData =
         (ForElementType<_public:_void___cdecl_FDynamicMeshElementContextContainer::MergeContexts(TArray<FDynamicPrimitive,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&)_::_16_::FViewAllocationInfo>
          )0x0;
    local_58[0] = 0;
    local_58[1] = 2;
    iVar14 = UE::Core::Private::
             ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<_FDynamicMeshElementContextContainer::MergeContexts_::__l16::FViewAllocationInfo>_>
                       (0x8c,4,iVar16,&local_178,local_58,local_58 + 1);
    FVar18 = (ForElementType<_public:_void___cdecl_FDynamicMeshElementContextContainer::MergeContexts(TArray<FDynamicPrimitive,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&)_::_16_::FViewAllocationInfo>
              )&local_178;
    if (local_178.SecondaryData !=
        (ForElementType<_public:_void___cdecl_FDynamicMeshElementContextContainer::MergeContexts(TArray<FDynamicPrimitive,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&)_::_16_::FViewAllocationInfo>
         )0x0) {
      FVar18 = local_178.SecondaryData;
    }
    DefaultConstructItems<_FDynamicMeshElementContextContainer::MergeContexts_::__l16::FViewAllocationInfo,int>
              ((void *)((longlong)iVar14 * 0x8c + (longlong)FVar18),iVar16);
    local_1b8._0_4_ = (this->Contexts).ArrayNum;
    uVar20 = (ulonglong)(int)local_1b8._0_4_;
    pFVar33 = (this->Contexts).AllocatorInstance.Data;
    uVar17 = 0;
    local_1e4 = 0;
    pFVar23 = (FDynamicPrimitiveResource *)(pFVar33 + uVar20 * 8);
    uVar22 = uVar21;
    local_1c0 = pFVar23;
    while( true ) {
      local_1d0 = pFVar33;
      if ((this->Contexts).ArrayNum != (int)uVar20) {
        local_1e7 = 0;
        `TCheckedPointerIterator<FDynamicMeshElementContext_*,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_1e7);
        uVar22 = (ulong64)local_1e4;
      }
      iVar16 = (int)uVar22;
      uVar30 = 0;
      if ((FDynamicPrimitiveResource *)pFVar33 == pFVar23) break;
      lVar6 = *(longlong *)pFVar33;
      local_1e4 = iVar16 + *(int *)(lVar6 + 0x5e0);
      if ((local_58[0] != *(int *)(lVar6 + 0x5d0)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("AllocationInfosPerView.Num() == Context->ViewMeshArraysPerView.Num()"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
                              ,0x10d8,L""), bVar13)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (0 < local_58[0]) {
        local_1d8 = (FDynamicPrimitiveResource)0x0;
        uVar22 = uVar21;
        uVar29 = uVar21;
        do {
          uVar25 = (uint)uVar29;
          uVar15 = uVar17;
          if ((int)uVar25 < *(int *)(lVar6 + 0x5d0)) {
            uVar15 = ~uVar25 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar32 = lVar6 + 0x48;
          if (*(longlong *)(lVar6 + 0x5c8) != 0) {
            lVar32 = *(longlong *)(lVar6 + 0x5c8);
          }
          uVar15 = uVar30;
          if ((int)uVar25 < local_58[0]) {
            uVar15 = ~uVar25 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          FVar18 = (ForElementType<_public:_void___cdecl_FDynamicMeshElementContextContainer::MergeContexts(TArray<FDynamicPrimitive,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&)_::_16_::FViewAllocationInfo>
                    )&local_178;
          if (local_178.SecondaryData !=
              (ForElementType<_public:_void___cdecl_FDynamicMeshElementContextContainer::MergeContexts(TArray<FDynamicPrimitive,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&)_::_16_::FViewAllocationInfo>
               )0x0) {
            FVar18 = local_178.SecondaryData;
          }
          pFVar28 = (FAllocationInfo *)((longlong)FVar18 + (longlong)local_1d8);
          FSimpleElementCollector::AddAllocationInfo
                    ((FSimpleElementCollector *)(uVar22 + 0x10 + lVar32),pFVar28);
          pFVar28[1].BatchedElements.NumLineVertices =
               pFVar28[1].BatchedElements.NumLineVertices + *(int *)(lVar32 + 8 + uVar22);
          FSimpleElementCollector::AddAllocationInfo
                    ((FSimpleElementCollector *)(uVar22 + 0x168 + lVar32),
                     (FAllocationInfo *)&pFVar28[1].BatchedElements.NumPoints);
          local_1d8 = (FDynamicPrimitiveResource)((longlong)local_1d8 + 0x8c);
          uVar29 = (ulong64)(uVar25 + 1);
          uVar22 = uVar22 + 0x2c0;
          pFVar33 = local_1d0;
          pFVar23 = local_1c0;
        } while ((int)(uVar25 + 1) < local_58[0]);
      }
      uVar22 = (ulong64)local_1e4;
      pFVar33 = pFVar33 + 8;
      uVar20 = (ulonglong)local_1b8 & 0xffffffff;
      this = local_1e0;
    }
    if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar22);
    }
    if (local_1c8->ArrayMax < iVar16) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FDynamicPrimitive>_>
                (0x10,4,iVar16,&local_1c8->AllocatorInstance,local_1c8->ArrayNum,
                 &local_1c8->ArrayMax);
    }
    uVar20 = uVar21;
    uVar22 = uVar21;
    uVar29 = uVar21;
    if (0 < (this->Views).ArrayNum) {
      do {
        uVar25 = (uint)uVar20;
        uVar15 = uVar30;
        if ((int)uVar25 < local_58[0]) {
          uVar15 = ~uVar25 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar18 = (ForElementType<_public:_void___cdecl_FDynamicMeshElementContextContainer::MergeContexts(TArray<FDynamicPrimitive,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&)_::_16_::FViewAllocationInfo>
                  )&local_178;
        if (local_178.SecondaryData !=
            (ForElementType<_public:_void___cdecl_FDynamicMeshElementContextContainer::MergeContexts(TArray<FDynamicPrimitive,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&)_::_16_::FViewAllocationInfo>
             )0x0) {
          FVar18 = local_178.SecondaryData;
        }
        pFVar28 = (FAllocationInfo *)((longlong)FVar18 + uVar29);
        uVar15 = uVar30;
        if ((int)uVar25 < (local_1e0->Views).ArrayNum) {
          uVar15 = ~uVar25 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar8 = (local_1e0->Views).DataPtr[uVar22];
        FSimpleElementCollector::Reserve(pFVar8->SimpleElementCollector,pFVar28);
        uVar15 = pFVar28[1].BatchedElements.NumLineVertices;
        if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
        }
        if ((pFVar8->DynamicMeshElements).ArrayMax < (int)uVar15) {
          UE::Core::Private::
          ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMeshBatchAndRelevance>_>
                    (0x18,8,uVar15,&(pFVar8->DynamicMeshElements).AllocatorInstance,
                     (pFVar8->DynamicMeshElements).ArrayNum,&(pFVar8->DynamicMeshElements).ArrayMax)
          ;
        }
        FSimpleElementCollector::Reserve
                  (pFVar8->DebugSimpleElementCollector,
                   (FAllocationInfo *)&pFVar28[1].BatchedElements.NumPoints);
        pFVar28[1].BatchedElements.NumLineVertices = 0;
        uVar20 = (ulonglong)(uVar25 + 1);
        uVar22 = uVar22 + 1;
        this = local_1e0;
        uVar29 = uVar29 + 0x8c;
      } while ((int)(uVar25 + 1) < (local_1e0->Views).ArrayNum);
    }
    local_1e4 = (this->Contexts).ArrayNum;
    uVar20 = (ulonglong)(int)local_1e4;
    pFVar23 = (FDynamicPrimitiveResource *)(this->Contexts).AllocatorInstance.Data;
    local_188 = pFVar23 + uVar20;
    while( true ) {
      pFVar12 = local_188;
      local_1c0 = pFVar23;
      if ((this->Contexts).ArrayNum != (int)uVar20) {
        local_1e6 = 0;
        `TCheckedPointerIterator<FDynamicMeshElementContext_*,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_1e6);
      }
      if (pFVar23 == pFVar12) break;
      local_1b0 = *pFVar23;
      local_1a0 = (FDynamicPrimitiveResource *)((longlong)local_1b0 + 0x5d8);
      uVar20 = (ulonglong)*(int *)((longlong)local_1b0 + 0x5e0);
      FVar24 = *local_1a0;
      local_1d8 = (FDynamicPrimitiveResource)(uVar20 * 0x10 + (longlong)FVar24);
      local_1b8._0_4_ = *(int *)((longlong)local_1b0 + 0x5e0);
      while( true ) {
        pFVar23 = local_1a0;
        FVar19 = local_1d8;
        if (*(int *)(local_1a0 + 1) != (int)uVar20) {
          local_1e5 = 0;
          `TCheckedPointerIterator<FDynamicPrimitive,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_1e5);
        }
        if (FVar24 == FVar19) break;
        uVar15 = *(uint *)FVar24;
        uVar25 = *(uint *)((longlong)FVar24 + 4);
        iStack_190 = *(int *)((longlong)FVar24 + 8);
        iStack_18c = *(int *)((longlong)FVar24 + 0xc);
        uVar27 = uVar30;
        if ((int)uVar25 < local_58[0]) {
          uVar27 = ~uVar25 >> 0x1f;
        }
        local_198 = uVar15;
        uStack_194 = uVar25;
        if ((uVar27 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar18 = (ForElementType<_public:_void___cdecl_FDynamicMeshElementContextContainer::MergeContexts(TArray<FDynamicPrimitive,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&)_::_16_::FViewAllocationInfo>
                  )&local_178;
        if (local_178.SecondaryData !=
            (ForElementType<_public:_void___cdecl_FDynamicMeshElementContextContainer::MergeContexts(TArray<FDynamicPrimitive,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&)_::_16_::FViewAllocationInfo>
             )0x0) {
          FVar18 = local_178.SecondaryData;
        }
        local_1d0 = (FScriptContainerElement *)(longlong)(int)uVar25;
        iVar31 = iStack_190 + *(int *)((longlong)local_1d0 * 0x8c + 0x44 + (longlong)FVar18);
        iVar14 = iStack_18c + *(int *)((longlong)local_1d0 * 0x8c + 0x44 + (longlong)FVar18);
        iVar16 = local_1c8->ArrayNum;
        iStack_190 = iVar31;
        iStack_18c = iVar14;
        if (iVar16 == local_1c8->ArrayMax) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FDynamicPrimitive>_>
                             (0x410,&local_1c8->AllocatorInstance,&local_1c8->ArrayMax);
        }
        pFVar11 = local_1e0;
        local_1c8->ArrayNum = iVar16 + 1;
        pFVar7 = (local_1c8->AllocatorInstance).Data + iVar16;
        pFVar7->PrimitiveIndex = local_198;
        pFVar7->ViewIndex = uStack_194;
        pFVar7->StartElementIndex = iStack_190;
        pFVar7->EndElementIndex = iStack_18c;
        uVar27 = uVar17;
        if ((int)uVar25 < (local_1e0->Views).ArrayNum) {
          uVar27 = ~uVar25 >> 0x1f;
        }
        local_1a8 = iVar31;
        iStack_1a4 = iVar14;
        if ((uVar27 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar8 = (pFVar11->Views).DataPtr[(longlong)local_1d0];
        uVar25 = uVar17;
        if ((int)uVar15 < (pFVar8->DynamicMeshElementRanges).ArrayNum) {
          uVar25 = ~uVar15 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar24 = (FDynamicPrimitiveResource)((longlong)FVar24 + 0x10);
        TVar10.field0_0x0._s_0.Y = iStack_1a4;
        TVar10.field0_0x0._s_0.X = local_1a8;
        (pFVar8->DynamicMeshElementRanges).AllocatorInstance.Data[(int)uVar15].field0_0x0 =
             TVar10.field0_0x0;
        uVar20 = (ulonglong)local_1b8 & 0xffffffff;
      }
      iVar16 = (local_1e0->Views).ArrayNum;
      if (0 < iVar16) {
        local_1b8 = (FDynamicPrimitiveResource)((longlong)local_1b0 + 0x48);
        local_1d8 = (FDynamicPrimitiveResource)0x0;
        local_1d0 = (FScriptContainerElement *)0x0;
        uVar22 = uVar21;
        uVar29 = uVar21;
        do {
          FVar24 = local_1b8;
          pFVar33 = local_1d0;
          pFVar11 = local_1e0;
          uVar25 = (uint)uVar22;
          uVar27 = ~uVar25 >> 0x1f;
          uVar15 = uVar30;
          if ((int)uVar25 < iVar16) {
            uVar15 = uVar27;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar8 = (pFVar11->Views).DataPtr[uVar29];
          uVar15 = uVar30;
          if ((int)uVar25 < *(int *)((longlong)FVar24 + 0x588)) {
            uVar15 = uVar27;
          }
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if (*(FDynamicPrimitiveResource *)((longlong)FVar24 + 0x580) !=
              (FDynamicPrimitiveResource)0x0) {
            FVar24 = *(FDynamicPrimitiveResource *)((longlong)FVar24 + 0x580);
          }
          pFVar33 = pFVar33 + (longlong)FVar24;
          uVar15 = uVar30;
          if ((int)uVar25 < local_58[0]) {
            uVar15 = uVar27;
          }
          iVar16 = *(int *)&pFVar33[8].field_0x0;
          if ((uVar15 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          FVar18 = (ForElementType<_public:_void___cdecl_FDynamicMeshElementContextContainer::MergeContexts(TArray<FDynamicPrimitive,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&)_::_16_::FViewAllocationInfo>
                    )&local_178;
          if (local_178.SecondaryData !=
              (ForElementType<_public:_void___cdecl_FDynamicMeshElementContextContainer::MergeContexts(TArray<FDynamicPrimitive,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&)_::_16_::FViewAllocationInfo>
               )0x0) {
            FVar18 = local_178.SecondaryData;
          }
          *(int *)((uchar *)((longlong)FVar18 + 0x44) + (longlong)local_1d8) =
               *(int *)((uchar *)((longlong)FVar18 + 0x44) + (longlong)local_1d8) + iVar16;
          FSimpleElementCollector::Append
                    (pFVar8->SimpleElementCollector,(FSimpleElementCollector *)(pFVar33 + 0x10));
          pTVar4 = &pFVar8->DynamicMeshElements;
          if ((pTVar4 == (TArray<FMeshBatchAndRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                          *)pFVar33) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)this != (void*)&Source",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x96e,L""), bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar16 = *(int *)&pFVar33[8].field_0x0;
          if (iVar16 != 0) {
            iVar14 = UE::Core::Private::
                     ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FMeshBatchAndRelevance>_>
                               (0x18,8,iVar16,&pTVar4->AllocatorInstance,
                                &(pFVar8->DynamicMeshElements).ArrayNum,
                                &(pFVar8->DynamicMeshElements).ArrayMax);
            memcpy((pTVar4->AllocatorInstance).Data + iVar14,*(void **)&pFVar33->field_0x0,
                   (longlong)iVar16 * 0x18);
          }
          FSimpleElementCollector::Append
                    (pFVar8->DebugSimpleElementCollector,
                     (FSimpleElementCollector *)(pFVar33 + 0x168));
          uVar22 = (ulong64)(uVar25 + 1);
          local_1d0 = local_1d0 + 0x2c0;
          local_1d8 = (FDynamicPrimitiveResource)((longlong)local_1d8 + 0x8c);
          uVar29 = uVar29 + 1;
          iVar16 = (local_1e0->Views).ArrayNum;
          pFVar23 = local_1a0;
        } while ((int)(uVar25 + 1) < iVar16);
      }
      this = local_1e0;
      *(undefined4 *)(pFVar23 + 1) = 0;
      if (*(int *)&pFVar23[1].field_0x4 != 0) {
        UE::Core::Private::
        ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FDynamicPrimitive>_>
                  (0x10,4,0,(ForElementType<FDynamicPrimitive> *)pFVar23,0,
                   (int *)&pFVar23[1].field_0x4);
      }
      FVar24 = local_1b0;
      FVar19 = (FDynamicPrimitiveResource)((longlong)local_1b0 + 0x48);
      if (*(FDynamicPrimitiveResource *)((longlong)local_1b0 + 0x5c8) !=
          (FDynamicPrimitiveResource)0x0) {
        FVar19 = *(FDynamicPrimitiveResource *)((longlong)local_1b0 + 0x5c8);
      }
      DestructItems<FDynamicMeshElementContext::FViewMeshArrays,int>
                ((FViewMeshArrays *)FVar19,*(int *)((longlong)local_1b0 + 0x5d0));
      *(undefined4 *)((longlong)FVar24 + 0x5d0) = 0;
      if (*(int *)((longlong)FVar24 + 0x5d4) != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FDynamicMeshElementContext::FViewMeshArrays>_>
                  (0x2c0,8,0,
                   (ForElementType<FDynamicMeshElementContext::FViewMeshArrays> *)
                   ((longlong)FVar24 + 0x48),0,(int *)((longlong)FVar24 + 0x5d4));
      }
      uVar20 = (ulonglong)local_1e4;
      pFVar23 = local_1c0 + 1;
    }
    if (local_178.SecondaryData !=
        (ForElementType<_public:_void___cdecl_FDynamicMeshElementContextContainer::MergeContexts(TArray<FDynamicPrimitive,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&)_::_16_::FViewAllocationInfo>
         )0x0) {
      FMemory::Free((void *)local_178.SecondaryData);
    }
  }
  if (bVar34) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// Submit @ 145553020

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDynamicMeshElementContextContainer::Submit
          (FDynamicMeshElementContextContainer *this,FRHICommandListImmediate *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  FQueuedCommandList *pFVar5;
  code *pcVar6;
  bool bVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined4 uStack_3c;
  TArrayView<FRHICommandListImmediate::FQueuedCommandList,int> local_38;
  
  pFVar8 = (this->Contexts).AllocatorInstance.Data;
  iVar3 = (this->Contexts).ArrayNum;
  pFVar2 = pFVar8 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->Contexts).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FDynamicMeshElementContext_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar2) break;
    lVar4 = *(longlong *)pFVar8;
    FMeshElementCollector::Finish((FMeshElementCollector *)(lVar4 + 0x5e8));
    FGlobalDynamicVertexBuffer::Commit((FGlobalDynamicVertexBuffer *)(lVar4 + 0x758));
    FGlobalDynamicIndexBuffer::Commit((FGlobalDynamicIndexBuffer *)(lVar4 + 0x770));
    FRHICommandListBase::FinishRecording(*(FRHICommandListBase **)(lVar4 + 0x750));
    UE::Tasks::FPipe::WaitUntilEmpty((FPipe *)(lVar4 + 0x798),(FTimespan)0x7fffffffffffffff);
    pFVar8 = pFVar8 + 8;
  }
  pFVar5 = (this->CommandLists).AllocatorInstance.Data;
  iVar3 = (this->CommandLists).ArrayNum;
  if (iVar3 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  local_38._12_4_ = uStack_3c;
  local_38.ArrayNum = iVar3;
  local_38.DataPtr = pFVar5;
  FRHICommandListImmediate::QueueAsyncCommandListSubmit(param_1,&local_38,Disabled,0);
  piVar1 = &(this->CommandLists).ArrayMax;
  (this->CommandLists).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHICommandListImmediate::FQueuedCommandList>_>
              (8,8,0,&(this->CommandLists).AllocatorInstance,0,piVar1);
  }
  return;
}

