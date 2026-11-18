// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FTaskData @ 147c2d470

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FTaskData * __thiscall
FGPUSkinCache::FTaskData::FTaskData
          (FTaskData *this,FRDGBuilder *param_1,EShaderPlatform param_2,ERHIPipeline param_3)

{
  int iVar1;
  bool bVar2;
  ERHIPipeline EVar3;
  FDynamicMeshBoundsBlackboardStruct *pFVar4;
  FRHICommandListBase *this_00;
  FRHICommandListBase *pFVar5;
  FQueuedCommandList local_res8;
  TArrayView<FRHICommandListImmediate::FQueuedCommandList,int> local_18;
  
  pFVar5 = (FRHICommandListBase *)0x0;
  this->OriginalPipeline = Graphics;
  (this->TangentDispatches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TangentDispatches).ArrayNum = 0;
  (this->TangentDispatches).ArrayMax = 0;
  (this->SortedDispatches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SortedDispatches).ArrayNum = 0;
  (this->SortedDispatches).ArrayMax = 0;
  (this->RHICmdListScopedFence).bIsSet = false;
  this->RHICmdList = (FRHICommandList *)0x0;
  this->DynamicMeshBoundsBlackboardStruct = (FDynamicMeshBoundsBlackboardStruct *)0x0;
  (this->Transitions).FinalRead.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Transitions).FinalRead.ArrayNum = 0;
  (this->Transitions).FinalRead.ArrayMax = 0;
  (this->Transitions).Skinning.Write.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Transitions).Skinning.Write.ArrayNum = 0;
  (this->Transitions).Skinning.Write.ArrayMax = 0;
  (this->Transitions).Skinning.Overlap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Transitions).Skinning.Overlap.ArrayNum = 0;
  (this->Transitions).Skinning.Overlap.ArrayMax = 0;
  (this->Transitions).RecomputeTangents.Write.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Transitions).RecomputeTangents.Write.ArrayNum = 0;
  (this->Transitions).RecomputeTangents.Write.ArrayMax = 0;
  (this->Transitions).RecomputeTangents.Read.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->Transitions).RecomputeTangents.Read.ArrayNum = 0;
  (this->Transitions).RecomputeTangents.Read.ArrayMax = 0;
  (this->SetupTask).Pimpl.Reference = (FTaskBase *)0x0;
  this->Pipeline = param_3;
  this->AsyncComputeTransition = (FRHITransition *)0x0;
  if (((param_1->ParallelSetup).bEnabled == false) || (GNumDispatchesToCapture != 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  this->bAsyncCommandList = bVar2;
  iVar1 = GSkinCacheDynamicMeshBounds;
  this->bWaitPassAdded = false;
  this->bSignalPassAdded = false;
  if (((iVar1 == 1) || ((iVar1 == 2 && (bVar2 = DoesPlatformSupportNanite(param_2,true), bVar2))))
     && (bVar2 = FSkeletalMeshUpdater::IsEnabled(), bVar2)) {
    pFVar4 = FRDGBlackboard::Create<FDynamicMeshBoundsBlackboardStruct>(&param_1->Blackboard);
    this->DynamicMeshBoundsBlackboardStruct = pFVar4;
  }
  if (this->bAsyncCommandList == false) {
    this->RHICmdList = (FRHICommandList *)param_1->_padding_;
  }
  else {
    this_00 = ::operator_new(0x1bb0);
    if (this_00 != (FRHICommandListBase *)0x0) {
      FRHICommandListBase::FRHICommandListBase
                (this_00,(FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1),false
                );
      pFVar5 = this_00;
    }
    this->RHICmdList = (FRHICommandList *)pFVar5;
    pFVar5 = (FRHICommandListBase *)param_1->_padding_;
    EVar3 = FRHICommandListBase::SwitchPipeline(pFVar5,this->Pipeline);
    local_res8.CmdList = (FRHICommandListBase *)this->RHICmdList;
    local_18.DataPtr = &local_res8;
    local_18.ArrayNum = 1;
    FRHICommandListImmediate::QueueAsyncCommandListSubmit
              ((FRHICommandListImmediate *)param_1->_padding_,&local_18,Disabled,0);
    FRHICommandListBase::SwitchPipeline(pFVar5,EVar3);
  }
  return this;
}

// ~FTaskData @ 147c31470

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FGPUSkinCache::FTaskData::~FTaskData(FTaskData *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FTaskBase *pFVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar3 = (this->SetupTask).Pimpl.Reference;
  if (pFVar3 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &pFVar3->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  pFVar4 = (this->Transitions).RecomputeTangents.Read.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->Transitions).RecomputeTangents.Write.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->Transitions).Skinning.Overlap.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->Transitions).Skinning.Write.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->Transitions).FinalRead.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  if ((this->RHICmdListScopedFence).bIsSet != false) {
    FRHICommandListScopedFence::~FRHICommandListScopedFence
              (&(this->RHICmdListScopedFence).TypedValue);
  }
  pFVar4 = (this->SortedDispatches).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->TangentDispatches).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
    return;
  }
  return;
}

// ProcessForeground @ 14865c030

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FSkeletalMeshUpdater::FTaskData::ProcessForeground(FTaskData *this)

{
  TUniquePtr<FSkeletalMeshUpdatePacket,TDefaultDelete<FSkeletalMeshUpdatePacket>_> *pTVar1;
  atomic<bool> aVar2;
  int iVar3;
  FTaskEvent FVar4;
  TUniquePtr<FSkeletalMeshUpdatePacket,TDefaultDelete<FSkeletalMeshUpdatePacket>_> *pTVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  
  FVar4 = (this->Tasks).Filter;
  if ((FVar4 != (FTaskEvent)0x0) && (*(char *)((longlong)FVar4 + 0xd0) == '\0')) {
    FVar4 = (this->Tasks).Filter;
    LOCK();
    aVar2 = *(atomic<bool> *)((longlong)FVar4 + 0x45);
    *(atomic<bool> *)((longlong)FVar4 + 0x45) = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar2 == (atomic<bool>)0x0) {
      LOCK();
      *(atomic<unsigned_int> *)((longlong)FVar4 + 0x30) =
           (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)FVar4 + 0x30) + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)FVar4,0xd8);
    }
  }
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_FSkeletalMeshUpdater::FTaskData::ProcessForeground(void)___ptr64'
                ::__l3::__CpuProfilerEventSpecId448,"Inline",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshUpdater.cpp"
               ,0x1c0);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FSkeletalMeshUpdater::FTaskData::ProcessForeground(void)___ptr64'
               ::__l3::__CpuProfilerEventSpecId448);
  }
  pTVar5 = (this->Packets).AllocatorInstance.Data;
  iVar3 = (this->Packets).ArrayNum;
  pTVar1 = pTVar5 + iVar3;
  while( true ) {
    if ((this->Packets).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TUniquePtr<FSkeletalMeshUpdatePacket,TDefaultDelete<FSkeletalMeshUpdatePacket>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pTVar5 == pTVar1) break;
    (**(code **)(pTVar5->Ptr->_padding_ + 0x20))(pTVar5->Ptr,this->RHICmdList,&(this->Tasks).Inline)
    ;
    pTVar5 = pTVar5 + 1;
  }
  FVar4 = (this->Tasks).Inline;
  if ((FVar4 != (FTaskEvent)0x0) && (*(char *)((longlong)FVar4 + 0xd0) == '\0')) {
    FVar4 = (this->Tasks).Inline;
    LOCK();
    aVar2 = *(atomic<bool> *)((longlong)FVar4 + 0x45);
    *(atomic<bool> *)((longlong)FVar4 + 0x45) = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar2 == (atomic<bool>)0x0) {
      LOCK();
      *(atomic<unsigned_int> *)((longlong)FVar4 + 0x30) =
           (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)FVar4 + 0x30) + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)FVar4,0xd8);
    }
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_FSkeletalMeshUpdater::FTaskData::ProcessForeground(void)___ptr64'
                ::__l8::__CpuProfilerEventSpecId457,"MeshDeformer",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshUpdater.cpp"
               ,0x1c9);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FSkeletalMeshUpdater::FTaskData::ProcessForeground(void)___ptr64'
               ::__l8::__CpuProfilerEventSpecId457);
  }
  pTVar5 = (this->Packets).AllocatorInstance.Data;
  iVar3 = (this->Packets).ArrayNum;
  pTVar1 = pTVar5 + iVar3;
  while( true ) {
    if ((this->Packets).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TUniquePtr<FSkeletalMeshUpdatePacket,TDefaultDelete<FSkeletalMeshUpdatePacket>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pTVar5 == pTVar1) break;
    (**(code **)(pTVar5->Ptr->_padding_ + 0x10))
              (pTVar5->Ptr,this->RHICmdList,&(this->Tasks).MeshDeformer);
    pTVar5 = pTVar5 + 1;
  }
  FVar4 = (this->Tasks).MeshDeformer;
  if ((FVar4 != (FTaskEvent)0x0) && (*(char *)((longlong)FVar4 + 0xd0) == '\0')) {
    FVar4 = (this->Tasks).MeshDeformer;
    LOCK();
    aVar2 = *(atomic<bool> *)((longlong)FVar4 + 0x45);
    *(atomic<bool> *)((longlong)FVar4 + 0x45) = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar2 == (atomic<bool>)0x0) {
      LOCK();
      *(atomic<unsigned_int> *)((longlong)FVar4 + 0x30) =
           (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)FVar4 + 0x30) + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)FVar4,0xd8);
    }
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_FSkeletalMeshUpdater::FTaskData::ProcessForeground(void)___ptr64'
                ::__l13::__CpuProfilerEventSpecId466,"GPUSkinCache",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshUpdater.cpp"
               ,0x1d2);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FSkeletalMeshUpdater::FTaskData::ProcessForeground(void)___ptr64'
               ::__l13::__CpuProfilerEventSpecId466);
  }
  pTVar5 = (this->Packets).AllocatorInstance.Data;
  iVar3 = (this->Packets).ArrayNum;
  pTVar1 = pTVar5 + iVar3;
  while( true ) {
    if ((this->Packets).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TUniquePtr<FSkeletalMeshUpdatePacket,TDefaultDelete<FSkeletalMeshUpdatePacket>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pTVar5 == pTVar1) break;
    (**(code **)(pTVar5->Ptr->_padding_ + 0x18))
              (pTVar5->Ptr,this->RHICmdList,&(this->Tasks).SkinCache);
    pTVar5 = pTVar5 + 1;
  }
  FVar4 = (this->Tasks).SkinCache;
  if ((FVar4 != (FTaskEvent)0x0) && (*(char *)((longlong)FVar4 + 0xd0) == '\0')) {
    FVar4 = (this->Tasks).SkinCache;
    LOCK();
    aVar2 = *(atomic<bool> *)((longlong)FVar4 + 0x45);
    *(atomic<bool> *)((longlong)FVar4 + 0x45) = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar2 == (atomic<bool>)0x0) {
      LOCK();
      *(atomic<unsigned_int> *)((longlong)FVar4 + 0x30) =
           (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)FVar4 + 0x30) + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)FVar4,0xd8);
    }
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

