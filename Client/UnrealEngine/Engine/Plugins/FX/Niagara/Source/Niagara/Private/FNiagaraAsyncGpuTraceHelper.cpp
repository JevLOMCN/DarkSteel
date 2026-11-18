// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 23

// FNiagaraAsyncGpuTraceHelper @ 149021ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNiagaraAsyncGpuTraceHelper * __thiscall
FNiagaraAsyncGpuTraceHelper::FNiagaraAsyncGpuTraceHelper
          (FNiagaraAsyncGpuTraceHelper *this,EShaderPlatform param_1,Type param_2,
          FNiagaraGpuComputeDispatchInterface *param_3)

{
  FString *pFVar1;
  int *piVar2;
  TArray<TUniquePtr<FNiagaraAsyncGpuTraceProvider,TDefaultDelete<FNiagaraAsyncGpuTraceProvider>_>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  UClass *this_00;
  TArray<TUniquePtr<FNiagaraAsyncGpuTraceProvider,TDefaultDelete<FNiagaraAsyncGpuTraceProvider>_>,TSizedDefaultAllocator<32>_>
  *pTVar9;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar10;
  FNiagaraAsyncGpuTraceHelper *pFVar11;
  undefined ***pppuVar12;
  ulonglong uVar13;
  undefined1 auStackY_128 [32];
  FString local_e8;
  FString local_d8;
  FString local_c8;
  TArray<TUniquePtr<FNiagaraAsyncGpuTraceProvider,TDefaultDelete<FNiagaraAsyncGpuTraceProvider>_>,TSizedDefaultAllocator<32>_>
  local_b8;
  code *local_a8 [2];
  undefined **local_98;
  FNiagaraAsyncGpuTraceHelper *pFStack_90;
  undefined8 local_88;
  undefined ***local_80;
  undefined1 local_78 [16];
  undefined **local_68;
  FNiagaraAsyncGpuTraceHelper *pFStack_60;
  undefined8 local_58;
  undefined ***local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  this->ShaderPlatform = param_1;
  this->FeatureLevel = param_2;
  ::FString::FString(&local_e8,L"NiagaraRayRequests");
  FVar7.Data = local_e8.Data.AllocatorInstance.Data;
  pFVar1 = &(this->TraceRequests).DebugName;
  (this->TraceRequests).MinBucketSize = GNiagaraAsyncTraceScratchBucketSize;
  piVar2 = &(this->TraceRequests).DebugName.Data.ArrayMax;
  (this->TraceRequests).Buffers.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TraceRequests).Buffers.Array.ArrayNum = 0;
  (this->TraceRequests).Buffers.Array.ArrayMax = 0;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TraceRequests).DebugName.Data.ArrayNum = local_e8.Data.ArrayNum;
  if (local_e8.Data.ArrayNum == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_e8.Data.ArrayNum,0,(ForAnyElementType *)pFVar1,local_e8.Data.ArrayNum,
               piVar2);
    memcpy((pFVar1->Data).AllocatorInstance.Data,FVar7.Data,(longlong)local_e8.Data.ArrayNum * 2);
  }
  (this->TraceRequests).BufferUsageFlags = UnorderedAccess|Static;
  (this->TraceRequests).CurrentAccess = UAVCompute;
  (this->TraceRequests).NumAllocatedBytes = 0;
  (this->TraceRequests).NumUsedBytes = 0;
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_d8,L"NiagaraRayTraceIntersections");
  FVar7.Data = local_d8.Data.AllocatorInstance.Data;
  pFVar1 = &(this->TraceResults).DebugName;
  (this->TraceResults).MinBucketSize = GNiagaraAsyncTraceScratchBucketSize;
  piVar2 = &(this->TraceResults).DebugName.Data.ArrayMax;
  (this->TraceResults).Buffers.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TraceResults).Buffers.Array.ArrayNum = 0;
  (this->TraceResults).Buffers.Array.ArrayMax = 0;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TraceResults).DebugName.Data.ArrayNum = local_d8.Data.ArrayNum;
  if (local_d8.Data.ArrayNum == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_d8.Data.ArrayNum,0,(ForAnyElementType *)pFVar1,local_d8.Data.ArrayNum,
               piVar2);
    memcpy((pFVar1->Data).AllocatorInstance.Data,FVar7.Data,(longlong)local_d8.Data.ArrayNum * 2);
  }
  (this->TraceResults).BufferUsageFlags = UnorderedAccess|Static;
  (this->TraceResults).CurrentAccess = UAVCompute;
  (this->TraceResults).NumAllocatedBytes = 0;
  (this->TraceResults).NumUsedBytes = 0;
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_c8,L"NiagaraRayTraceCounts");
  FVar7.Data = local_c8.Data.AllocatorInstance.Data;
  pFVar1 = &(this->TraceCounts).DebugName;
  (this->TraceCounts).BucketSize = GNiagaraAsyncTraceCountsScratchBucketSize;
  piVar2 = &(this->TraceCounts).DebugName.Data.ArrayMax;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TraceCounts).DebugName.Data.ArrayNum = local_c8.Data.ArrayNum;
  if (local_c8.Data.ArrayNum == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_c8.Data.ArrayNum,0,(ForAnyElementType *)pFVar1,local_c8.Data.ArrayNum,
               piVar2);
    memcpy((pFVar1->Data).AllocatorInstance.Data,FVar7.Data,(longlong)local_c8.Data.ArrayNum * 2);
  }
  uVar4 = (this->TraceCounts).BucketSize;
  (this->TraceCounts).ScratchBufferFloat.MinBucketSize = uVar4;
  (this->TraceCounts).ScratchBufferUInt.MinBucketSize = uVar4;
  (this->TraceCounts).ScratchBufferFloat.Buffers.Array.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TraceCounts).ScratchBufferFloat.Buffers.Array.ArrayNum = 0;
  (this->TraceCounts).ScratchBufferFloat.Buffers.Array.ArrayMax = 0;
  (this->TraceCounts).ScratchBufferFloat.PixelFormat = PF_R32_FLOAT;
  (this->TraceCounts).ScratchBufferFloat.BytesPerElement = 4;
  (this->TraceCounts).ScratchBufferFloat.BufferUsageFlags = DrawIndirect|Static;
  (this->TraceCounts).ScratchBufferFloat.CurrentAccess = UAVCompute;
  (this->TraceCounts).ScratchBufferFloat.NumAllocatedBytes = 0;
  (this->TraceCounts).ScratchBufferFloat.NumUsedBytes = 0;
  (this->TraceCounts).ScratchBufferUInt.Buffers.Array.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TraceCounts).ScratchBufferUInt.Buffers.Array.ArrayNum = 0;
  (this->TraceCounts).ScratchBufferUInt.Buffers.Array.ArrayMax = 0;
  (this->TraceCounts).ScratchBufferUInt.PixelFormat = PF_R32_UINT;
  (this->TraceCounts).ScratchBufferUInt.BytesPerElement = 4;
  (this->TraceCounts).ScratchBufferUInt.BufferUsageFlags = DrawIndirect|Static;
  (this->TraceCounts).ScratchBufferUInt.CurrentAccess = UAVCompute;
  (this->TraceCounts).ScratchBufferUInt.NumAllocatedBytes = 0;
  (this->TraceCounts).ScratchBufferUInt.NumUsedBytes = 0;
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  *(undefined8 *)&this->Dispatches = 0;
  pTVar3 = &this->TraceProviders;
  *(undefined8 *)&(this->Dispatches).field_0x8 = 0;
  *(undefined8 *)&(this->Dispatches).field_0x20 = 0;
  *(undefined4 *)&(this->Dispatches).field_0x28 = 0;
  *(undefined4 *)&(this->Dispatches).field_0x2c = 0x80;
  *(undefined4 *)&(this->Dispatches).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Dispatches).field_0x34 = 0;
  *(undefined8 *)&(this->Dispatches).field_0x40 = 0;
  *(undefined4 *)&(this->Dispatches).field_0x48 = 0;
  *(undefined8 *)&this->PreviousFrameDispatches = 0;
  *(undefined8 *)&(this->PreviousFrameDispatches).field_0x8 = 0;
  *(undefined8 *)&(this->PreviousFrameDispatches).field_0x20 = 0;
  *(undefined4 *)&(this->PreviousFrameDispatches).field_0x28 = 0;
  *(undefined4 *)&(this->PreviousFrameDispatches).field_0x2c = 0x80;
  *(undefined4 *)&(this->PreviousFrameDispatches).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PreviousFrameDispatches).field_0x34 = 0;
  *(undefined8 *)&(this->PreviousFrameDispatches).field_0x40 = 0;
  *(undefined4 *)&(this->PreviousFrameDispatches).field_0x48 = 0;
  (this->DummyDispatch).TraceRequests.Buffer = (FRWBufferStructured *)0x0;
  (this->DummyDispatch).TraceRequests.Offset = 0;
  (this->DummyDispatch).TraceResults.Buffer = (FRWBufferStructured *)0x0;
  (this->DummyDispatch).TraceResults.Offset = 0;
  (this->DummyDispatch).LastFrameTraceResults.Buffer = (FRWBufferStructured *)0x0;
  (this->DummyDispatch).LastFrameTraceResults.Offset = 0;
  (this->DummyDispatch).TraceCounts.Buffer = (FRWBuffer *)0x0;
  (this->DummyDispatch).TraceCounts.Offset = 0;
  (this->DummyDispatch).MaxTraces = 0;
  (this->DummyDispatch).MaxRetraces = 0;
  (this->DummyDispatch).ProviderType = Default;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->TraceProviders).ArrayNum = 0;
  (this->TraceProviders).ArrayMax = 0;
  *(undefined8 *)&this->CollisionGroupMap = 0;
  *(undefined8 *)&(this->CollisionGroupMap).field_0x8 = 0;
  *(undefined8 *)&(this->CollisionGroupMap).field_0x20 = 0;
  this->ResolvedDefaultProviderType = None;
  *(undefined4 *)&(this->CollisionGroupMap).field_0x28 = 0;
  *(undefined4 *)&(this->CollisionGroupMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CollisionGroupMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CollisionGroupMap).field_0x34 = 0;
  *(undefined8 *)&(this->CollisionGroupMap).field_0x40 = 0;
  *(undefined4 *)&(this->CollisionGroupMap).field_0x48 = 0;
  (this->CollisionGroupHashMapBuffer).PrimIdHashTable.Buffer.Reference = (FRHIBuffer *)0x0;
  (this->CollisionGroupHashMapBuffer).PrimIdHashTable.UAV.Reference = (FRHIUnorderedAccessView *)0x0
  ;
  (this->CollisionGroupHashMapBuffer).PrimIdHashTable.SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->CollisionGroupHashMapBuffer).PrimIdHashTable.NumBytes = 0;
  (this->CollisionGroupHashMapBuffer).HashToCollisionGroups.Buffer.Reference = (FRHIBuffer *)0x0;
  (this->CollisionGroupHashMapBuffer).HashToCollisionGroups.UAV.Reference =
       (FRHIUnorderedAccessView *)0x0;
  (this->CollisionGroupHashMapBuffer).HashToCollisionGroups.SRV.Reference =
       (FRHIShaderResourceView *)0x0;
  (this->CollisionGroupHashMapBuffer).HashToCollisionGroups.NumBytes = 0;
  (this->CollisionGroupHashMapBuffer).HashToCollisionGroups.ClassName.ComparisonIndex = 0;
  *(undefined8 *)&(this->CollisionGroupHashMapBuffer).HashToCollisionGroups.ClassName.Number = 0;
  (this->CollisionGroupHashMapBuffer).HashToCollisionGroups.OwnerName.Number = 0;
  (this->CollisionGroupHashMapBuffer).HashTableSize = 0;
  (this->FreeGPURayTracedCollisionGroups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeGPURayTracedCollisionGroups).ArrayNum = 0;
  (this->FreeGPURayTracedCollisionGroups).ArrayMax = 0;
  this->NumGPURayTracedCollisionGroups = 0;
  this->bCollisionGroupMapDirty = true;
  this_00 = Z_Construct_UClass_UNiagaraSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pTVar9 = FNiagaraAsyncGpuTraceProvider::CreateSupportedProviders
                     (&local_b8,this->ShaderPlatform,param_3,
                      (TArray<TEnumAsByte<ENDICollisionQuery_AsyncGpuTraceProvider::Type>,TSizedDefaultAllocator<32>_>
                       *)&(this_00->ClassDefaultObject).field0_0x0.DebugPtr[6].field_0x8);
  if (pTVar3 != pTVar9) {
    DestructItems<TUniquePtr<FNiagaraAsyncGpuTraceProvider,TDefaultDelete<FNiagaraAsyncGpuTraceProvider>_>,int>
              ((TUniquePtr<FNiagaraAsyncGpuTraceProvider,TDefaultDelete<FNiagaraAsyncGpuTraceProvider>_>
                *)(pTVar3->AllocatorInstance).Data,(this->TraceProviders).ArrayNum);
    pFVar5 = (pTVar3->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar3->AllocatorInstance).Data = (pTVar9->AllocatorInstance).Data;
    (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->TraceProviders).ArrayNum = pTVar9->ArrayNum;
    (this->TraceProviders).ArrayMax = pTVar9->ArrayMax;
    pTVar9->ArrayNum = 0;
    pTVar9->ArrayMax = 0;
  }
  DestructItems<TUniquePtr<FNiagaraAsyncGpuTraceProvider,TDefaultDelete<FNiagaraAsyncGpuTraceProvider>_>,int>
            ((TUniquePtr<FNiagaraAsyncGpuTraceProvider,TDefaultDelete<FNiagaraAsyncGpuTraceProvider>_>
              *)local_b8.AllocatorInstance.Data,local_b8.ArrayNum);
  if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  local_80 = (undefined ***)0x0;
  local_98 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FNiagaraAsyncGpuTraceHelper::FNiagaraAsyncGpuTraceHelper'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_a8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FNiagaraAsyncGpuTraceHelper::FNiagaraAsyncGpuTraceHelper'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_90 = this;
  this_01 = FRenderCommandList::GetInstanceTLS();
  if (this_01 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FNiagaraAsyncGpuTraceHelper::FNiagaraAsyncGpuTraceHelper_::__l2::TSTR_NiagaraAsyncGpuTraceHelperSetupGPUSceneDelegates40>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
  }
  else {
    this_02 = FRenderCommandList::GetRenderThread(this_01);
    local_78._0_8_ = local_a8[0];
    local_50 = local_80;
    local_68 = local_98;
    pFStack_60 = pFStack_90;
    local_58 = local_88;
    local_a8[0] = (code *)0x0;
    local_48 = 2;
    pFVar10 = (FRenderCommandTag *)
              TRenderCommandTag<`FNiagaraAsyncGpuTraceHelper::FNiagaraAsyncGpuTraceHelper'::__l2::TSTR_NiagaraAsyncGpuTraceHelperSetupGPUSceneDelegates40>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_78,pFVar10);
    uVar13 = (ulonglong)local_48;
    if (2 < uVar13) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        pFVar11 = (FNiagaraAsyncGpuTraceHelper *)(*pcVar6)();
        return pFVar11;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar13] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_78._0_8_ != (code *)0x0) {
        pppuVar12 = (undefined ***)(local_78 + 0x10);
        if (local_50 != (undefined ***)0x0) {
          pppuVar12 = local_50;
        }
        (*(code *)(*pppuVar12)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar13])(local_78);
    }
  }
  if (local_a8[0] != (code *)0x0) {
    pppuVar12 = &local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar12 = local_80;
    }
    (*(code *)(*pppuVar12)[2])();
  }
  return this;
}

// ~FNiagaraAsyncGpuTraceHelper @ 149025540

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNiagaraAsyncGpuTraceHelper::~FNiagaraAsyncGpuTraceHelper(FNiagaraAsyncGpuTraceHelper *this)

{
  int *piVar1;
  FName FVar2;
  undefined8 *puVar3;
  FRHIResource *pFVar4;
  FRWBufferStructured *pFVar5;
  void *pvVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory> FVar8;
  FThreadStats *pFVar9;
  FThreadStatsPool *pFVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  uchar auVar13 [8];
  uchar auVar14 [8];
  uchar auVar15 [8];
  FScriptContainerElement *pFVar16;
  FName local_res8;
  int *local_res10;
  FStatMessage local_68;
  undefined8 local_58;
  uchar local_50 [8];
  int *piStack_48;
  undefined8 local_40;
  
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FPrimitiveSceneInfo::OnGPUSceneInstancesAllocated,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FPrimitiveSceneInfo::OnGPUSceneInstancesFreed,this);
  pFVar11 = (this->TraceProviders).AllocatorInstance.Data;
  iVar12 = (this->TraceProviders).ArrayNum;
  pFVar16 = pFVar11 + (longlong)iVar12 * 8;
  while( true ) {
    if ((this->TraceProviders).ArrayNum != iVar12) {
      `TCheckedPointerIterator<TUniquePtr<FNiagaraAsyncGpuTraceProvider,TDefaultDelete<FNiagaraAsyncGpuTraceProvider>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (pFVar11 == pFVar16) break;
    (**(code **)(**(longlong **)pFVar11 + 0x28))();
    pFVar11 = pFVar11 + 8;
  }
  TSet<TTuple<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo>,TDefaultMapHashableKeyFuncs<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo>,TDefaultMapHashableKeyFuncs<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo,0>,FDefaultSetAllocator>
           *)&this->Dispatches);
  auVar13[4] = '\0';
  auVar13[5] = '\0';
  auVar13[6] = '\0';
  auVar13[7] = '\0';
  auVar13._0_4_ = (this->TraceRequests).NumAllocatedBytes;
  if (auVar13 != (uchar  [8])0x0) {
    FVar8 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
    if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
      pFVar7 = ::FName::FName(&local_res8,"STAT_NiagaraGPUDataInterfaceMemory");
      FVar8 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                         *pFVar7,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                         "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar8;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar9 == (FThreadStats *)0x0) {
        pFVar10 = FThreadStatsPool::Get();
        pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
      }
      local_68.NameAndInfo =
           (FStatNameAndInfo)((ulonglong)FVar2 & 0xffffbfffffffffff | 0xb00000000000);
      local_res8 = FVar2;
      local_68.StatData.Pad = auVar13;
      FThreadStats::AddStatMessage(pFVar9,&local_68);
      FStatsTrace::Add(&local_res8,-(longlong)auVar13);
      if (pFVar9->ScopeCount == 0) {
        FThreadStats::Flush(pFVar9,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar9,false,false);
      }
    }
  }
  auVar15[4] = '\0';
  auVar15[5] = '\0';
  auVar15[6] = '\0';
  auVar15[7] = '\0';
  auVar15._0_4_ = (this->TraceResults).NumAllocatedBytes;
  if (auVar15 != (uchar  [8])0x0) {
    FVar8 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
    if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
      pFVar7 = ::FName::FName(&local_res8,"STAT_NiagaraGPUDataInterfaceMemory");
      FVar8 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                         *pFVar7,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                         "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar8;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar9 == (FThreadStats *)0x0) {
        pFVar10 = FThreadStatsPool::Get();
        pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
      }
      local_68.NameAndInfo =
           (FStatNameAndInfo)((ulonglong)FVar2 & 0xffffbfffffffffff | 0xb00000000000);
      local_res8 = FVar2;
      local_68.StatData.Pad = auVar15;
      FThreadStats::AddStatMessage(pFVar9,&local_68);
      FStatsTrace::Add(&local_res8,-(longlong)auVar15);
      if (pFVar9->ScopeCount == 0) {
        FThreadStats::Flush(pFVar9,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar9,false,false);
      }
    }
  }
  auVar14._0_4_ =
       (this->TraceCounts).ScratchBufferUInt.NumAllocatedBytes +
       (this->TraceCounts).ScratchBufferFloat.NumAllocatedBytes;
  auVar14[4] = '\0';
  auVar14[5] = '\0';
  auVar14[6] = '\0';
  auVar14[7] = '\0';
  if (auVar14._0_4_ != 0) {
    FVar8 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
    if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
      pFVar7 = ::FName::FName(&local_res8,"STAT_NiagaraGPUDataInterfaceMemory");
      FVar8 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                         *pFVar7,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                         "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar8;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar9 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar9 == (FThreadStats *)0x0) {
        pFVar10 = FThreadStatsPool::Get();
        pFVar9 = FThreadStatsPool::GetFromPool(pFVar10);
      }
      local_68.NameAndInfo =
           (FStatNameAndInfo)((ulonglong)FVar2 & 0xffffbfffffffffff | 0xb00000000000);
      local_res8 = FVar2;
      local_68.StatData.Pad = auVar14;
      FThreadStats::AddStatMessage(pFVar9,&local_68);
      FStatsTrace::Add(&local_res8,-(longlong)auVar14);
      if (pFVar9->ScopeCount == 0) {
        FThreadStats::Flush(pFVar9,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar9,false,false);
      }
    }
  }
  FNiagaraGpuScratchPadStructured<FNiagaraAsyncGpuTrace>::Reset(&this->TraceRequests);
  piVar1 = &(this->TraceRequests).Buffers.Array.ArrayNum;
  (this->TraceRequests).CurrentAccess = UAVCompute;
  auVar15 = (uchar  [8])(this->TraceRequests).Buffers.Array.AllocatorInstance.Data;
  iVar12 = *piVar1;
  local_58 = CONCAT44(local_58._4_4_,iVar12);
  auVar13 = (uchar  [8])((longlong)auVar15 + (longlong)iVar12 * 8);
  local_40 = local_58;
  local_68.StatData.Pad = auVar15;
  local_68.NameAndInfo = (FStatNameAndInfo)piVar1;
  local_50 = auVar15;
  piStack_48 = piVar1;
  while( true ) {
    if (*piVar1 != iVar12) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_res8)
      ;
    }
    if (auVar15 == auVar13) break;
    puVar3 = *(undefined8 **)auVar15;
    *(undefined4 *)(puVar3 + 3) = 0;
    pFVar4 = (FRHIResource *)*puVar3;
    if (pFVar4 != (FRHIResource *)0x0) {
      *puVar3 = 0;
      FRHIResource::Release(pFVar4);
    }
    pFVar4 = (FRHIResource *)puVar3[1];
    if (pFVar4 != (FRHIResource *)0x0) {
      puVar3[1] = 0;
      FRHIResource::Release(pFVar4);
    }
    pFVar4 = (FRHIResource *)puVar3[2];
    if (pFVar4 != (FRHIResource *)0x0) {
      puVar3[2] = 0;
      FRHIResource::Release(pFVar4);
    }
    auVar15 = (uchar  [8])((longlong)auVar15 + 8);
    *(undefined4 *)(puVar3 + 4) = 0;
  }
  pFVar16 = (this->TraceRequests).Buffers.Array.AllocatorInstance.Data;
  for (iVar12 = (this->TraceRequests).Buffers.Array.ArrayNum; iVar12 != 0; iVar12 = iVar12 + -1) {
    pFVar5 = *(FRWBufferStructured **)pFVar16;
    if (pFVar5 != (FRWBufferStructured *)0x0) {
      FRWBufferStructured::~FRWBufferStructured(pFVar5);
      ::operator_delete(pFVar5,0x28);
    }
    pFVar16 = pFVar16 + 8;
  }
  iVar12 = (this->TraceRequests).Buffers.Array.ArrayMax;
  local_res10 = &(this->TraceRequests).Buffers.Array.ArrayMax;
  (this->TraceRequests).Buffers.Array.ArrayNum = 0;
  if (iVar12 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&(this->TraceRequests).Buffers,0,local_res10);
  }
  (this->TraceRequests).NumAllocatedBytes = 0;
  FNiagaraGpuScratchPadStructured<FNiagaraAsyncGpuTraceResult>::Reset(&this->TraceResults);
  piVar1 = &(this->TraceResults).Buffers.Array.ArrayNum;
  (this->TraceResults).CurrentAccess = UAVCompute;
  auVar15 = (uchar  [8])(this->TraceResults).Buffers.Array.AllocatorInstance.Data;
  iVar12 = *piVar1;
  local_40 = CONCAT44(local_40._4_4_,iVar12);
  auVar13 = (uchar  [8])((longlong)auVar15 + (longlong)iVar12 * 8);
  local_58 = local_40;
  local_68.StatData.Pad = auVar15;
  local_68.NameAndInfo = (FStatNameAndInfo)piVar1;
  local_50 = auVar15;
  piStack_48 = piVar1;
  while( true ) {
    if (*piVar1 != iVar12) {
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_res8)
      ;
    }
    if (auVar15 == auVar13) break;
    puVar3 = *(undefined8 **)auVar15;
    *(undefined4 *)(puVar3 + 3) = 0;
    pFVar4 = (FRHIResource *)*puVar3;
    if (pFVar4 != (FRHIResource *)0x0) {
      *puVar3 = 0;
      FRHIResource::Release(pFVar4);
    }
    pFVar4 = (FRHIResource *)puVar3[1];
    if (pFVar4 != (FRHIResource *)0x0) {
      puVar3[1] = 0;
      FRHIResource::Release(pFVar4);
    }
    pFVar4 = (FRHIResource *)puVar3[2];
    if (pFVar4 != (FRHIResource *)0x0) {
      puVar3[2] = 0;
      FRHIResource::Release(pFVar4);
    }
    auVar15 = (uchar  [8])((longlong)auVar15 + 8);
    *(undefined4 *)(puVar3 + 4) = 0;
  }
  pFVar16 = (this->TraceResults).Buffers.Array.AllocatorInstance.Data;
  for (iVar12 = (this->TraceResults).Buffers.Array.ArrayNum; iVar12 != 0; iVar12 = iVar12 + -1) {
    pFVar5 = *(FRWBufferStructured **)pFVar16;
    if (pFVar5 != (FRWBufferStructured *)0x0) {
      FRWBufferStructured::~FRWBufferStructured(pFVar5);
      ::operator_delete(pFVar5,0x28);
    }
    pFVar16 = pFVar16 + 8;
  }
  iVar12 = (this->TraceResults).Buffers.Array.ArrayMax;
  piVar1 = &(this->TraceResults).Buffers.Array.ArrayMax;
  (this->TraceResults).Buffers.Array.ArrayNum = 0;
  if (iVar12 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&(this->TraceResults).Buffers,0,piVar1);
  }
  (this->TraceResults).NumAllocatedBytes = 0;
  FNiagaraGpuScratchPad::FScratchBuffer::Release(&(this->TraceCounts).ScratchBufferFloat);
  FNiagaraGpuScratchPad::FScratchBuffer::Release(&(this->TraceCounts).ScratchBufferUInt);
  pFVar16 = (this->FreeGPURayTracedCollisionGroups).AllocatorInstance.Data;
  if (pFVar16 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar16);
  }
  FRWBuffer::~FRWBuffer(&(this->CollisionGroupHashMapBuffer).HashToCollisionGroups);
  FRWBufferStructured::~FRWBufferStructured(&(this->CollisionGroupHashMapBuffer).PrimIdHashTable);
  *(undefined4 *)&(this->CollisionGroupMap).field_0x48 = 0;
  pvVar6 = *(void **)&(this->CollisionGroupMap).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<FPrimitiveComponentId,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FPrimitiveComponentId,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FPrimitiveComponentId,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CollisionGroupMap);
  DestructItems<TUniquePtr<FNiagaraAsyncGpuTraceProvider,TDefaultDelete<FNiagaraAsyncGpuTraceProvider>_>,int>
            ((TUniquePtr<FNiagaraAsyncGpuTraceProvider,TDefaultDelete<FNiagaraAsyncGpuTraceProvider>_>
              *)(this->TraceProviders).AllocatorInstance.Data,(this->TraceProviders).ArrayNum);
  pFVar16 = (this->TraceProviders).AllocatorInstance.Data;
  if (pFVar16 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar16);
  }
  *(undefined4 *)&(this->PreviousFrameDispatches).field_0x48 = 0;
  pvVar6 = *(void **)&(this->PreviousFrameDispatches).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PreviousFrameDispatches);
  *(undefined4 *)&(this->Dispatches).field_0x48 = 0;
  pvVar6 = *(void **)&(this->Dispatches).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Dispatches);
  TIndirectArray<FNiagaraGpuScratchPad::FScratchBuffer::FBuffer,TSizedDefaultAllocator<32>_>::
  ~TIndirectArray<FNiagaraGpuScratchPad::FScratchBuffer::FBuffer,TSizedDefaultAllocator<32>_>
            (&(this->TraceCounts).ScratchBufferUInt.Buffers);
  TIndirectArray<FNiagaraGpuScratchPad::FScratchBuffer::FBuffer,TSizedDefaultAllocator<32>_>::
  ~TIndirectArray<FNiagaraGpuScratchPad::FScratchBuffer::FBuffer,TSizedDefaultAllocator<32>_>
            (&(this->TraceCounts).ScratchBufferFloat.Buffers);
  pFVar16 = (this->TraceCounts).DebugName.Data.AllocatorInstance.Data;
  if (pFVar16 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar16);
  }
  pFVar16 = (this->TraceResults).DebugName.Data.AllocatorInstance.Data;
  if (pFVar16 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar16);
  }
  pFVar16 = (this->TraceResults).Buffers.Array.AllocatorInstance.Data;
  for (iVar12 = (this->TraceResults).Buffers.Array.ArrayNum; iVar12 != 0; iVar12 = iVar12 + -1) {
    pFVar5 = *(FRWBufferStructured **)pFVar16;
    if (pFVar5 != (FRWBufferStructured *)0x0) {
      FRWBufferStructured::~FRWBufferStructured(pFVar5);
      ::operator_delete(pFVar5,0x28);
    }
    pFVar16 = pFVar16 + 8;
  }
  (this->TraceResults).Buffers.Array.ArrayNum = 0;
  if ((this->TraceResults).Buffers.Array.ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&(this->TraceResults).Buffers,0,piVar1);
  }
  pFVar16 = (this->TraceResults).Buffers.Array.AllocatorInstance.Data;
  if (pFVar16 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar16);
  }
  pFVar16 = (this->TraceRequests).DebugName.Data.AllocatorInstance.Data;
  if (pFVar16 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar16);
  }
  pFVar16 = (this->TraceRequests).Buffers.Array.AllocatorInstance.Data;
  for (iVar12 = (this->TraceRequests).Buffers.Array.ArrayNum; iVar12 != 0; iVar12 = iVar12 + -1) {
    pFVar5 = *(FRWBufferStructured **)pFVar16;
    if (pFVar5 != (FRWBufferStructured *)0x0) {
      FRWBufferStructured::~FRWBufferStructured(pFVar5);
      ::operator_delete(pFVar5,0x28);
    }
    pFVar16 = pFVar16 + 8;
  }
  (this->TraceRequests).Buffers.Array.ArrayNum = 0;
  if ((this->TraceRequests).Buffers.Array.ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&(this->TraceRequests).Buffers,0,local_res10);
  }
  pFVar16 = (this->TraceRequests).Buffers.Array.AllocatorInstance.Data;
  if (pFVar16 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar16);
  }
  return;
}

// operator() @ 1490279f0

void __thiscall
`FNiagaraAsyncGpuTraceHelper::SetPrimitiveRayTracingCollisionGroup_GT'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint *puVar6;
  
  if (*(longlong *)((longlong)this + 8) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Proxy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraAsyncGpuTraceHelper.cpp"
                       ,0x149,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar2 = *(longlong *)this;
  uVar1 = *(uint *)((longlong)this + 0x10);
  lVar3 = *(longlong *)(*(longlong *)((longlong)this + 8) + 0x228);
  puVar6 = TMapBase<FPrimitiveComponentId,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,unsigned_int,0>_>
           ::FindOrAddImpl<FPrimitiveComponentId_const_&>
                     ((TMapBase<FPrimitiveComponentId,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,unsigned_int,0>_>
                       *)(lVar2 + 0x1f8),*(uint *)(lVar3 + 0x10),
                      (FPrimitiveComponentId *)(lVar3 + 0x10));
  *puVar6 = uVar1;
  *(undefined1 *)(lVar2 + 0x2b4) = 1;
  return;
}

// AcquireGPURayTracedCollisionGroup_GT @ 14902a140

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

int __thiscall
FNiagaraAsyncGpuTraceHelper::AcquireGPURayTracedCollisionGroup_GT(FNiagaraAsyncGpuTraceHelper *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraAsyncGpuTraceHelper.cpp"
                       ,0x150,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  if (0 < (this->FreeGPURayTracedCollisionGroups).ArrayNum) {
    iVar3 = (this->FreeGPURayTracedCollisionGroups).ArrayNum;
    iVar4 = iVar3 + -1;
    iVar3 = *(int *)((this->FreeGPURayTracedCollisionGroups).AllocatorInstance.Data +
                    (longlong)iVar3 * 4 + -4);
    (this->FreeGPURayTracedCollisionGroups).ArrayNum = iVar4;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&(this->FreeGPURayTracedCollisionGroups).AllocatorInstance,iVar4,
               &(this->FreeGPURayTracedCollisionGroups).ArrayMax);
    return iVar3;
  }
  iVar3 = this->NumGPURayTracedCollisionGroups;
  this->NumGPURayTracedCollisionGroups = iVar3 + 1;
  return iVar3;
}

// AddToDispatch @ 14902bed0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FNiagaraAsyncGpuTraceHelper::AddToDispatch
          (FNiagaraAsyncGpuTraceHelper *this,FNiagaraDataInterfaceProxy *param_1,uint param_2,
          int param_3,Type param_4)

{
  FNiagaraAsyncGpuTraceDispatchInfo *pFVar1;
  uint uVar2;
  FNiagaraDataInterfaceProxy *local_res10 [3];
  
  uVar2 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  local_res10[0] = param_1;
  pFVar1 = TMapBase<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo,0>_>
           ::FindOrAddImpl<FNiagaraDataInterfaceProxy_*_const_&>
                     ((TMapBase<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo,0>_>
                       *)&this->Dispatches,uVar2 >> 0x10 ^ uVar2,local_res10);
  pFVar1->MaxTraces = pFVar1->MaxTraces + param_2;
  pFVar1->MaxRetraces = param_3;
  pFVar1->ProviderType = param_4;
  return;
}

// BeginFrame @ 14902deb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNiagaraAsyncGpuTraceHelper::BeginFrame
          (FNiagaraAsyncGpuTraceHelper *this,FRHICommandList *param_1,
          FNiagaraGpuComputeDispatchInterface *param_2)

{
  undefined1 *_Src;
  undefined1 *_Dst;
  TMap<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo,0>_>
  *this_00;
  TMap<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo,0>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  void *pvVar4;
  char cVar5;
  Type TVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  this_00 = &this->Dispatches;
  pTVar1 = &this->PreviousFrameDispatches;
  if (pTVar1 != this_00) {
    if (*(void **)&pTVar1->field_0x0 != (void *)0x0) {
      FMemory::Free(*(void **)&pTVar1->field_0x0);
    }
    _Src = &(this->Dispatches).field_0x10;
    *(undefined8 *)&pTVar1->field_0x0 = *(undefined8 *)&this_00->field_0x0;
    _Dst = &(this->PreviousFrameDispatches).field_0x10;
    *(undefined8 *)&this_00->field_0x0 = 0;
    *(undefined4 *)&(this->PreviousFrameDispatches).field_0x8 =
         *(undefined4 *)&(this->Dispatches).field_0x8;
    *(undefined4 *)&(this->PreviousFrameDispatches).field_0xc =
         *(undefined4 *)&(this->Dispatches).field_0xc;
    *(undefined8 *)&(this->Dispatches).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(this->Dispatches).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar4 = *(void **)&(this->PreviousFrameDispatches).field_0x20;
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      *(undefined8 *)&(this->PreviousFrameDispatches).field_0x20 =
           *(undefined8 *)&(this->Dispatches).field_0x20;
      *(undefined8 *)&(this->Dispatches).field_0x20 = 0;
      *(undefined4 *)&(this->PreviousFrameDispatches).field_0x28 =
           *(undefined4 *)&(this->Dispatches).field_0x28;
      *(undefined4 *)&(this->PreviousFrameDispatches).field_0x2c =
           *(undefined4 *)&(this->Dispatches).field_0x2c;
      *(undefined8 *)&(this->Dispatches).field_0x28 = 0;
    }
    *(undefined4 *)&(this->PreviousFrameDispatches).field_0x30 =
         *(undefined4 *)&(this->Dispatches).field_0x30;
    *(undefined4 *)&(this->PreviousFrameDispatches).field_0x34 =
         *(undefined4 *)&(this->Dispatches).field_0x34;
    *(undefined4 *)&(this->Dispatches).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->Dispatches).field_0x34 = 0;
    if (*(longlong *)&(this->Dispatches).field_0x40 == 0) {
      *(undefined4 *)&(this->PreviousFrameDispatches).field_0x38 =
           *(undefined4 *)&(this->Dispatches).field_0x38;
    }
    pvVar4 = *(void **)&(this->PreviousFrameDispatches).field_0x40;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    *(undefined8 *)&(this->PreviousFrameDispatches).field_0x40 =
         *(undefined8 *)&(this->Dispatches).field_0x40;
    *(undefined8 *)&(this->Dispatches).field_0x40 = 0;
    *(undefined4 *)&(this->PreviousFrameDispatches).field_0x48 =
         *(undefined4 *)&(this->Dispatches).field_0x48;
    *(undefined4 *)&(this->Dispatches).field_0x48 = 0;
  }
  if (*(int *)&(this->Dispatches).field_0x8 != *(int *)&(this->Dispatches).field_0x34) {
    TSet<TTuple<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo>,TDefaultMapHashableKeyFuncs<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo>,TDefaultMapHashableKeyFuncs<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo,0>,FDefaultSetAllocator>
                      *)this_00);
    *(undefined4 *)&(this->Dispatches).field_0x8 = 0;
    if (*(int *)&(this->Dispatches).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,0,(ForAnyElementType *)this_00,0,(int *)&(this->Dispatches).field_0xc);
    }
    *(undefined4 *)&(this->Dispatches).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->Dispatches).field_0x34 = 0;
    *(undefined4 *)&(this->Dispatches).field_0x28 = 0;
  }
  FNiagaraGpuScratchPadStructured<FNiagaraAsyncGpuTrace>::Transition
            (&this->TraceRequests,param_1,None,UAVCompute,None);
  FNiagaraGpuScratchPadStructured<FNiagaraAsyncGpuTraceResult>::Transition
            (&this->TraceResults,param_1,None,SRVCompute,None);
  FNiagaraGpuScratchPad::FScratchBuffer::Transition
            (&(this->TraceCounts).ScratchBufferFloat,param_1,None,UAVCompute,None);
  FNiagaraGpuScratchPad::FScratchBuffer::Transition
            (&(this->TraceCounts).ScratchBufferUInt,param_1,None,UAVCompute,None);
  FNiagaraGpuScratchPadStructured<FNiagaraAsyncGpuTrace>::Reset(&this->TraceRequests);
  FNiagaraGpuScratchPadStructured<FNiagaraAsyncGpuTraceResult>::Reset(&this->TraceResults);
  FNiagaraGpuScratchPad::Reset(&this->TraceCounts,param_1,true);
  (this->DummyDispatch).TraceRequests.Buffer = (FRWBufferStructured *)0x0;
  *(undefined8 *)&(this->DummyDispatch).TraceRequests.Offset = 0;
  (this->DummyDispatch).MaxTraces = 0;
  (this->DummyDispatch).MaxRetraces = 0;
  (this->DummyDispatch).ProviderType = Default;
  (this->DummyDispatch).TraceResults.Buffer = (FRWBufferStructured *)0x0;
  *(undefined8 *)&(this->DummyDispatch).TraceResults.Offset = 0;
  (this->DummyDispatch).TraceCounts.Buffer = (FRWBuffer *)0x0;
  *(undefined8 *)&(this->DummyDispatch).TraceCounts.Offset = 0;
  this->ResolvedDefaultProviderType = None;
  pFVar7 = (this->TraceProviders).AllocatorInstance.Data;
  iVar3 = (this->TraceProviders).ArrayNum;
  pFVar2 = pFVar7 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->TraceProviders).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TUniquePtr<FNiagaraAsyncGpuTraceProvider,TDefaultDelete<FNiagaraAsyncGpuTraceProvider>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar2) break;
    cVar5 = (**(code **)(**(longlong **)pFVar7 + 8))();
    if (cVar5 != '\0') {
      TVar6 = (**(code **)(**(longlong **)pFVar7 + 0x10))();
      this->ResolvedDefaultProviderType = TVar6;
      return;
    }
    pFVar7 = pFVar7 + 8;
  }
  return;
}

// BuildDispatch @ 14902f210

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FNiagaraAsyncGpuTraceHelper::BuildDispatch
          (FNiagaraAsyncGpuTraceHelper *this,FRHICommandList *param_1,
          FNiagaraDataInterfaceProxy *param_2)

{
  FName FVar1;
  code *pcVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 uVar5;
  FRHICommandListBase *this_00;
  FRWBuffer *pFVar6;
  bool bVar7;
  TTuple<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo> *pTVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory> FVar10;
  FThreadStats *pFVar11;
  FThreadStatsPool *pFVar12;
  FAllocation *pFVar13;
  FAllocation *pFVar14;
  TTuple<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo> *pTVar15;
  undefined1 *puVar16;
  uchar auVar17 [8];
  uchar auVar18 [8];
  uchar auVar19 [8];
  uchar auVar20 [8];
  uchar auVar21 [8];
  uchar auVar22 [8];
  FName local_res8;
  FRHICommandListBase *local_res10;
  FNiagaraDataInterfaceProxy *local_res18;
  FName local_res20;
  FStatMessage local_1b8;
  TIntVector4<unsigned_int>_u_0 local_1a8;
  FAllocation local_198;
  FName local_188;
  FName local_180;
  FName local_178;
  FName local_170;
  FStatMessage local_168;
  FStatMessage local_158;
  FStatMessage local_148;
  FStatMessage local_138;
  FStatMessage local_128;
  undefined4 local_118;
  undefined2 local_114;
  FRHIUnorderedAccessView *local_110;
  undefined1 local_108;
  ERHIAccess local_104;
  undefined4 local_100;
  undefined1 local_fc;
  undefined1 local_f0;
  undefined4 local_e8;
  undefined2 local_e4;
  FRHIUnorderedAccessView *local_e0;
  undefined1 local_d8;
  undefined4 local_d4;
  ERHIAccess local_d0;
  undefined1 local_cc;
  undefined1 local_c0;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FName local_a0;
  FName local_98;
  FName local_90;
  TArrayView<FRHITransitionInfo_const_,int> local_88;
  TArrayView<FRHITransitionInfo_const_,int> local_78;
  FAllocation local_68;
  FAllocation local_58;
  
  local_res10 = (FRHICommandListBase *)param_1;
  local_res18 = param_2;
  pTVar8 = TSet<TTuple<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo>,TDefaultMapHashableKeyFuncs<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo>,TDefaultMapHashableKeyFuncs<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo,0>,FDefaultSetAllocator>
                   *)&this->Dispatches,param_2);
  if ((pTVar8 == (TTuple<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pair != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                         ,0x288,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (*(longlong *)&pTVar8->field_0x8 == 0) {
    auVar17[4] = '\0';
    auVar17[5] = '\0';
    auVar17[6] = '\0';
    auVar17[7] = '\0';
    auVar17._0_4_ = (this->TraceRequests).NumAllocatedBytes;
    if (auVar17 != (uchar  [8])0x0) {
      FVar10 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
      if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
          (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
        pFVar9 = ::FName::FName(&local_b8,"STAT_NiagaraGPUDataInterfaceMemory");
        FVar10 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory
                            ,*pFVar9,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                            "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,
                            MCR_Physical);
      }
      FVar1 = *(FName *)FVar10;
      local_res8 = FVar1;
      if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar11 == (FThreadStats *)0x0) {
          pFVar12 = FThreadStatsPool::Get();
          pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
        }
        local_168.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
        local_res8 = FVar1;
        local_168.StatData.Pad = auVar17;
        local_168.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar11,&local_168);
        FStatsTrace::Add(&local_res8,-(longlong)auVar17);
        if (pFVar11->ScopeCount == 0) {
          FThreadStats::Flush(pFVar11,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar11,false,false);
        }
      }
    }
    auVar18[4] = '\0';
    auVar18[5] = '\0';
    auVar18[6] = '\0';
    auVar18[7] = '\0';
    auVar18._0_4_ = (this->TraceResults).NumAllocatedBytes;
    if (auVar18 != (uchar  [8])0x0) {
      FVar10 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
      if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
          (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
        pFVar9 = ::FName::FName(&local_b0,"STAT_NiagaraGPUDataInterfaceMemory");
        FVar10 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory
                            ,*pFVar9,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                            "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,
                            MCR_Physical);
      }
      FVar1 = *(FName *)FVar10;
      local_res8 = FVar1;
      if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar11 == (FThreadStats *)0x0) {
          pFVar12 = FThreadStatsPool::Get();
          pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
        }
        local_158.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
        local_res20 = FVar1;
        local_158.StatData.Pad = auVar18;
        local_158.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar11,&local_158);
        FStatsTrace::Add(&local_res20,-(longlong)auVar18);
        if (pFVar11->ScopeCount == 0) {
          FThreadStats::Flush(pFVar11,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar11,false,false);
        }
      }
    }
    auVar19._0_4_ =
         (this->TraceCounts).ScratchBufferUInt.NumAllocatedBytes +
         (this->TraceCounts).ScratchBufferFloat.NumAllocatedBytes;
    auVar19[4] = '\0';
    auVar19[5] = '\0';
    auVar19[6] = '\0';
    auVar19[7] = '\0';
    if (auVar19._0_4_ != 0) {
      FVar10 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
      if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
          (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
        pFVar9 = ::FName::FName(&local_a8,"STAT_NiagaraGPUDataInterfaceMemory");
        FVar10 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory
                            ,*pFVar9,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                            "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,
                            MCR_Physical);
      }
      FVar1 = *(FName *)FVar10;
      local_res8 = FVar1;
      if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar11 == (FThreadStats *)0x0) {
          pFVar12 = FThreadStatsPool::Get();
          pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
        }
        local_1b8.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
        local_1b8.StatData.Pad = auVar19;
        local_1b8.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
        local_188 = FVar1;
        FThreadStats::AddStatMessage(pFVar11,&local_1b8);
        FStatsTrace::Add(&local_188,-(longlong)auVar19);
        if (pFVar11->ScopeCount == 0) {
          FThreadStats::Flush(pFVar11,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar11,false,false);
        }
      }
    }
    this_00 = local_res10;
    pFVar13 = FNiagaraGpuScratchPadStructured<FNiagaraAsyncGpuTrace>::Alloc
                        (&this->TraceRequests,&local_68,local_res10,*(uint *)&pTVar8->field_0x48);
    uVar4 = pFVar13->Offset;
    uVar5 = *(undefined4 *)&pFVar13->field_0xc;
    *(FRWBufferStructured **)&pTVar8->field_0x8 = pFVar13->Buffer;
    *(uint *)&pTVar8->field_0x10 = uVar4;
    *(undefined4 *)&pTVar8->field_0x14 = uVar5;
    pFVar14 = FNiagaraGpuScratchPadStructured<FNiagaraAsyncGpuTraceResult>::Alloc
                        (&this->TraceResults,&local_58,this_00,*(uint *)&pTVar8->field_0x48);
    local_198.Buffer = (FRWBuffer *)0x0;
    local_198.Offset = 0;
    uVar4 = pFVar14->Offset;
    uVar5 = *(undefined4 *)&pFVar14->field_0xc;
    *(FRWBufferStructured **)&pTVar8->field_0x18 = pFVar14->Buffer;
    *(uint *)&pTVar8->field_0x20 = uVar4;
    *(undefined4 *)&pTVar8->field_0x24 = uVar5;
    bVar7 = FNiagaraGpuScratchPad::FScratchBuffer::Allocate
                      (&(this->TraceCounts).ScratchBufferUInt,3,&(this->TraceCounts).DebugName,
                       (FRHICommandList *)this_00,&local_198);
    pFVar6 = local_198.Buffer;
    if (bVar7) {
      local_1b8.NameAndInfo.Index.Value = 1;
      local_110 = ((local_198.Buffer)->UAV).Reference;
      local_104 = (this->TraceCounts).ScratchBufferUInt.CurrentAccess;
      local_88._12_4_ = local_1b8.NameAndInfo.Number;
      local_88.ArrayNum = 1;
      local_118 = 0xffffffff;
      local_114 = 0xffff;
      local_108 = 3;
      local_100 = 0x400;
      local_fc = 0;
      local_f0 = 0;
      local_1b8.StatData.Pad = (uchar  [8])&local_118;
      local_88.DataPtr = (FRHITransitionInfo *)&local_118;
      FRHIComputeCommandList::Transition((FRHIComputeCommandList *)this_00,&local_88,None);
      local_1a8._0_8_ = 0;
      local_1a8._8_8_ = 0;
      FRHIComputeCommandList::ClearUAVUint
                ((FRHIComputeCommandList *)this_00,(pFVar6->UAV).Reference,
                 (TIntVector4<unsigned_int> *)&local_1a8._s_0);
      local_e0 = (pFVar6->UAV).Reference;
      local_d0 = (this->TraceCounts).ScratchBufferUInt.CurrentAccess;
      local_1b8.StatData.Pad = (uchar  [8])&local_e8;
      local_1b8.NameAndInfo.Index.Value = 1;
      local_78._12_4_ = local_1b8.NameAndInfo.Number;
      local_78.ArrayNum = 1;
      local_e8 = 0xffffffff;
      local_e4 = 0xffff;
      local_d8 = 3;
      local_d4 = 0x400;
      local_cc = 0;
      local_c0 = 0;
      local_78.DataPtr = (FRHITransitionInfo *)local_1b8.StatData.Pad;
      FRHIComputeCommandList::Transition((FRHIComputeCommandList *)this_00,&local_78,None);
    }
    *(undefined4 *)&pTVar8->field_0x38 = local_198.Buffer._0_4_;
    *(undefined4 *)&pTVar8->field_0x3c = local_198.Buffer._4_4_;
    *(uint *)&pTVar8->field_0x40 = local_198.Offset;
    *(undefined4 *)&pTVar8->field_0x44 = local_198._12_4_;
    auVar20[4] = '\0';
    auVar20[5] = '\0';
    auVar20[6] = '\0';
    auVar20[7] = '\0';
    auVar20._0_4_ = (this->TraceRequests).NumAllocatedBytes;
    if (auVar20 != (uchar  [8])0x0) {
      FVar10 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
      if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
          (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
        pFVar9 = ::FName::FName(&local_a0,"STAT_NiagaraGPUDataInterfaceMemory");
        FVar10 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory
                            ,*pFVar9,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                            "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,
                            MCR_Physical);
      }
      FVar1 = *(FName *)FVar10;
      local_res8 = FVar1;
      if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar11 == (FThreadStats *)0x0) {
          pFVar12 = FThreadStatsPool::Get();
          pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
        }
        local_148.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
        local_180 = FVar1;
        local_148.StatData.Pad = auVar20;
        local_148.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar11,&local_148);
        FStatsTrace::Add(&local_180,(long64)auVar20);
        if (pFVar11->ScopeCount == 0) {
          FThreadStats::Flush(pFVar11,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar11,false,false);
        }
      }
    }
    auVar21[4] = '\0';
    auVar21[5] = '\0';
    auVar21[6] = '\0';
    auVar21[7] = '\0';
    auVar21._0_4_ = (this->TraceResults).NumAllocatedBytes;
    if (auVar21 != (uchar  [8])0x0) {
      FVar10 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
      if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
          (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
        pFVar9 = ::FName::FName(&local_98,"STAT_NiagaraGPUDataInterfaceMemory");
        FVar10 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory
                            ,*pFVar9,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                            "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,
                            MCR_Physical);
      }
      FVar1 = *(FName *)FVar10;
      local_res8 = FVar1;
      if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar11 == (FThreadStats *)0x0) {
          pFVar12 = FThreadStatsPool::Get();
          pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
        }
        local_138.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
        local_178 = FVar1;
        local_138.StatData.Pad = auVar21;
        local_138.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar11,&local_138);
        FStatsTrace::Add(&local_178,(long64)auVar21);
        if (pFVar11->ScopeCount == 0) {
          FThreadStats::Flush(pFVar11,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar11,false,false);
        }
      }
    }
    auVar22._0_4_ =
         (this->TraceCounts).ScratchBufferUInt.NumAllocatedBytes +
         (this->TraceCounts).ScratchBufferFloat.NumAllocatedBytes;
    auVar22[4] = '\0';
    auVar22[5] = '\0';
    auVar22[6] = '\0';
    auVar22[7] = '\0';
    if (auVar22._0_4_ != 0) {
      FVar10 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
      if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
          (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
        pFVar9 = ::FName::FName(&local_90,"STAT_NiagaraGPUDataInterfaceMemory");
        FVar10 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory
                            ,*pFVar9,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                            "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,
                            MCR_Physical);
      }
      FVar1 = *(FName *)FVar10;
      local_res8 = FVar1;
      if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar11 == (FThreadStats *)0x0) {
          pFVar12 = FThreadStatsPool::Get();
          pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
        }
        local_128.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
        local_170 = FVar1;
        local_128.StatData.Pad = auVar22;
        local_128.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar11,&local_128);
        FStatsTrace::Add(&local_170,(long64)auVar22);
        if (pFVar11->ScopeCount == 0) {
          FThreadStats::Flush(pFVar11,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar11,false,false);
        }
      }
    }
    pTVar15 = TSet<TTuple<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo>,TDefaultMapHashableKeyFuncs<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo>,TDefaultMapHashableKeyFuncs<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo,0>,FDefaultSetAllocator>
                      *)&this->PreviousFrameDispatches,local_res18);
    puVar16 = &pTVar15->field_0x8;
    if (pTVar15 == (TTuple<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo> *)0x0) {
      puVar16 = (undefined1 *)0x0;
    }
    if ((puVar16 != (undefined1 *)0x0) && (*(longlong *)(puVar16 + 0x10) != 0)) {
      uVar3 = *(undefined8 *)(puVar16 + 0x18);
      *(undefined8 *)&pTVar8->field_0x28 = *(undefined8 *)(puVar16 + 0x10);
      *(undefined8 *)&pTVar8->field_0x30 = uVar3;
      return;
    }
    *(undefined8 *)&pTVar8->field_0x28 = *(undefined8 *)&pTVar8->field_0x18;
    *(undefined8 *)&pTVar8->field_0x30 = *(undefined8 *)&pTVar8->field_0x20;
  }
  return;
}

// BuildDummyDispatch @ 14902fc60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FNiagaraAsyncGpuTraceHelper::BuildDummyDispatch
          (FNiagaraAsyncGpuTraceHelper *this,FRHICommandList *param_1)

{
  FName FVar1;
  FRWBufferStructured *pFVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory> FVar7;
  FThreadStats *pFVar8;
  FThreadStatsPool *pFVar9;
  FAllocation *pFVar10;
  FAllocation *pFVar11;
  uint uVar12;
  FRWBuffer *pFVar13;
  FName local_res8;
  TIntVector4<unsigned_int>_u_0 local_78;
  FAllocation local_68;
  FRHITransitionInfo local_58;
  
  if ((this->DummyDispatch).MaxTraces == 0) {
    pFVar13 = (FRWBuffer *)(ulonglong)(this->TraceRequests).NumAllocatedBytes;
    if (pFVar13 != (FRWBuffer *)0x0) {
      FVar7 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
      if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
          (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
        pFVar6 = ::FName::FName(&local_res8,"STAT_NiagaraGPUDataInterfaceMemory");
        FVar7 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                           *pFVar6,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                           "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical
                          );
      }
      FVar1 = *(FName *)FVar7;
      local_res8 = FVar1;
      if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar8 == (FThreadStats *)0x0) {
          pFVar9 = FThreadStatsPool::Get();
          pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
        }
        local_68._12_4_ = FVar1.Number & 0xffffbfff | 0xb000;
        local_res8 = FVar1;
        local_68.Buffer = pFVar13;
        local_68.Offset = FVar1.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar8,(FStatMessage *)&local_68);
        FStatsTrace::Add(&local_res8,-(longlong)pFVar13);
        if (pFVar8->ScopeCount == 0) {
          FThreadStats::Flush(pFVar8,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar8,false,false);
        }
      }
    }
    pFVar13 = (FRWBuffer *)(ulonglong)(this->TraceResults).NumAllocatedBytes;
    if (pFVar13 != (FRWBuffer *)0x0) {
      FVar7 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
      if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
          (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
        pFVar6 = ::FName::FName(&local_res8,"STAT_NiagaraGPUDataInterfaceMemory");
        FVar7 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                           *pFVar6,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                           "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical
                          );
      }
      FVar1 = *(FName *)FVar7;
      local_res8 = FVar1;
      if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar8 == (FThreadStats *)0x0) {
          pFVar9 = FThreadStatsPool::Get();
          pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
        }
        local_68._12_4_ = FVar1.Number & 0xffffbfff | 0xb000;
        local_res8 = FVar1;
        local_68.Buffer = pFVar13;
        local_68.Offset = FVar1.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar8,(FStatMessage *)&local_68);
        FStatsTrace::Add(&local_res8,-(longlong)pFVar13);
        if (pFVar8->ScopeCount == 0) {
          FThreadStats::Flush(pFVar8,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar8,false,false);
        }
      }
    }
    uVar12 = (this->TraceCounts).ScratchBufferUInt.NumAllocatedBytes +
             (this->TraceCounts).ScratchBufferFloat.NumAllocatedBytes;
    if (uVar12 != 0) {
      FVar7 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
      if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
          (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
        pFVar6 = ::FName::FName(&local_res8,"STAT_NiagaraGPUDataInterfaceMemory");
        FVar7 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                           *pFVar6,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                           "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical
                          );
      }
      FVar1 = *(FName *)FVar7;
      local_res8 = FVar1;
      if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar8 == (FThreadStats *)0x0) {
          pFVar9 = FThreadStatsPool::Get();
          pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
        }
        local_68._12_4_ = FVar1.Number & 0xffffbfff | 0xb000;
        local_res8 = FVar1;
        local_68.Buffer = (FRWBuffer *)(ulonglong)uVar12;
        local_68.Offset = FVar1.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar8,(FStatMessage *)&local_68);
        FStatsTrace::Add(&local_res8,-(longlong)(ulonglong)uVar12);
        if (pFVar8->ScopeCount == 0) {
          FThreadStats::Flush(pFVar8,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar8,false,false);
        }
      }
    }
    pFVar10 = FNiagaraGpuScratchPadStructured<FNiagaraAsyncGpuTrace>::Alloc
                        (&this->TraceRequests,(FAllocation *)&local_68,
                         (FRHICommandListBase *)param_1,1);
    uVar12 = pFVar10->Offset;
    uVar4 = *(undefined4 *)&pFVar10->field_0xc;
    (this->DummyDispatch).TraceRequests.Buffer = pFVar10->Buffer;
    (this->DummyDispatch).TraceRequests.Offset = uVar12;
    *(undefined4 *)&(this->DummyDispatch).TraceRequests.field_0xc = uVar4;
    pFVar11 = FNiagaraGpuScratchPadStructured<FNiagaraAsyncGpuTraceResult>::Alloc
                        (&this->TraceResults,(FAllocation *)&local_68,(FRHICommandListBase *)param_1
                         ,1);
    pFVar2 = pFVar11->Buffer;
    uVar3 = *(undefined8 *)&pFVar11->Offset;
    local_68.Buffer = (FRWBuffer *)0x0;
    local_68.Offset = 0;
    (this->DummyDispatch).TraceResults.Buffer = pFVar2;
    *(undefined8 *)&(this->DummyDispatch).TraceResults.Offset = uVar3;
    (this->DummyDispatch).LastFrameTraceResults.Buffer = pFVar2;
    *(undefined8 *)&(this->DummyDispatch).LastFrameTraceResults.Offset = uVar3;
    bVar5 = FNiagaraGpuScratchPad::FScratchBuffer::Allocate
                      (&(this->TraceCounts).ScratchBufferUInt,3,&(this->TraceCounts).DebugName,
                       param_1,&local_68);
    pFVar13 = local_68.Buffer;
    if (bVar5) {
      local_78._s_0.Z = 1;
      local_58.field1_0x8 = (FRHITransitionInfo_u_8)((local_68.Buffer)->UAV).Reference;
      local_58.AccessBefore = (this->TraceCounts).ScratchBufferUInt.CurrentAccess;
      local_78._0_8_ = &local_58;
      local_58._padding_._0_4_ = 0xffffffff;
      local_58._padding_._4_2_ = 0xffff;
      local_58.Type = UAV;
      local_58.AccessAfter = UAVCompute;
      local_58.Flags = None;
      local_58.CommitInfo.bIsSet = false;
      FRHIComputeCommandList::Transition
                ((FRHIComputeCommandList *)param_1,
                 (TArrayView<FRHITransitionInfo_const_,int> *)&local_78._s_0,None);
      local_78._0_8_ = 0;
      local_78._8_8_ = 0;
      FRHIComputeCommandList::ClearUAVUint
                ((FRHIComputeCommandList *)param_1,(pFVar13->UAV).Reference,
                 (TIntVector4<unsigned_int> *)&local_78._s_0);
      local_58.field1_0x8 = (FRHITransitionInfo_u_8)(pFVar13->UAV).Reference;
      local_58.AccessAfter = (this->TraceCounts).ScratchBufferUInt.CurrentAccess;
      local_78._s_0.Z = 1;
      local_78._0_8_ = &local_58;
      local_58._padding_._0_4_ = 0xffffffff;
      local_58._padding_._4_2_ = 0xffff;
      local_58.Type = UAV;
      local_58.AccessBefore = UAVCompute;
      local_58.Flags = None;
      local_58.CommitInfo.bIsSet = false;
      FRHIComputeCommandList::Transition
                ((FRHIComputeCommandList *)param_1,
                 (TArrayView<FRHITransitionInfo_const_,int> *)&local_78._s_0,None);
    }
    pFVar13 = (FRWBuffer *)(ulonglong)(this->TraceRequests).NumAllocatedBytes;
    *(undefined4 *)&(this->DummyDispatch).TraceCounts.Buffer = local_68.Buffer._0_4_;
    *(undefined4 *)((longlong)&(this->DummyDispatch).TraceCounts.Buffer + 4) = local_68.Buffer._4_4_
    ;
    (this->DummyDispatch).TraceCounts.Offset = local_68.Offset;
    *(undefined4 *)&(this->DummyDispatch).TraceCounts.field_0xc = local_68._12_4_;
    if (pFVar13 != (FRWBuffer *)0x0) {
      FVar7 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
      if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
          (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
        pFVar6 = ::FName::FName(&local_res8,"STAT_NiagaraGPUDataInterfaceMemory");
        FVar7 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                           *pFVar6,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                           "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical
                          );
      }
      FVar1 = *(FName *)FVar7;
      local_res8 = FVar1;
      if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar8 == (FThreadStats *)0x0) {
          pFVar9 = FThreadStatsPool::Get();
          pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
        }
        local_68._12_4_ = FVar1.Number & 0xffffafff | 0xa000;
        local_res8 = FVar1;
        local_68.Buffer = pFVar13;
        local_68.Offset = FVar1.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar8,(FStatMessage *)&local_68);
        FStatsTrace::Add(&local_res8,(long64)pFVar13);
        if (pFVar8->ScopeCount == 0) {
          FThreadStats::Flush(pFVar8,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar8,false,false);
        }
      }
    }
    pFVar13 = (FRWBuffer *)(ulonglong)(this->TraceResults).NumAllocatedBytes;
    if (pFVar13 != (FRWBuffer *)0x0) {
      FVar7 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
      if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
          (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
        pFVar6 = ::FName::FName(&local_res8,"STAT_NiagaraGPUDataInterfaceMemory");
        FVar7 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                           *pFVar6,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                           "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical
                          );
      }
      FVar1 = *(FName *)FVar7;
      local_res8 = FVar1;
      if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar8 == (FThreadStats *)0x0) {
          pFVar9 = FThreadStatsPool::Get();
          pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
        }
        local_68._12_4_ = FVar1.Number & 0xffffafff | 0xa000;
        local_res8 = FVar1;
        local_68.Buffer = pFVar13;
        local_68.Offset = FVar1.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar8,(FStatMessage *)&local_68);
        FStatsTrace::Add(&local_res8,(long64)pFVar13);
        if (pFVar8->ScopeCount == 0) {
          FThreadStats::Flush(pFVar8,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar8,false,false);
        }
      }
    }
    uVar12 = (this->TraceCounts).ScratchBufferUInt.NumAllocatedBytes +
             (this->TraceCounts).ScratchBufferFloat.NumAllocatedBytes;
    if (uVar12 != 0) {
      FVar7 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
      if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
          (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
        pFVar6 = ::FName::FName(&local_res8,"STAT_NiagaraGPUDataInterfaceMemory");
        FVar7 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                           *pFVar6,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                           "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical
                          );
      }
      FVar1 = *(FName *)FVar7;
      if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        local_res8 = FVar1;
        pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar8 == (FThreadStats *)0x0) {
          pFVar9 = FThreadStatsPool::Get();
          pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
        }
        local_68._12_4_ = FVar1.Number & 0xffffafff | 0xa000;
        local_res8 = FVar1;
        local_68.Buffer = (FRWBuffer *)(ulonglong)uVar12;
        local_68.Offset = FVar1.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar8,(FStatMessage *)&local_68);
        FStatsTrace::Add(&local_res8,(long64)(ulonglong)uVar12);
        if (pFVar8->ScopeCount == 0) {
          FThreadStats::Flush(pFVar8,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar8,false,false);
        }
      }
    }
    (this->DummyDispatch).MaxTraces = 0;
    (this->DummyDispatch).MaxRetraces = 0;
  }
  return;
}

// EndFrame @ 14903f8b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNiagaraAsyncGpuTraceHelper::EndFrame
          (FNiagaraAsyncGpuTraceHelper *this,FRHICommandList *param_1,
          FNiagaraGpuComputeDispatchInterface *param_2,
          TUniformBufferRef<FSceneUniformParameters> param_3)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  code *pcVar6;
  TMap<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo,0>_>
  *pTVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  Type TVar12;
  longlong lVar13;
  FRHIResource *this_00;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  int iVar18;
  uint *puVar19;
  uint uVar20;
  FCollisionGroupHashMap *pFVar21;
  undefined1 local_res8 [8];
  undefined4 uStack_cc;
  FRHIResource *local_c0;
  FNiagaraGpuScratchPadStructured<FNiagaraAsyncGpuTrace> *local_b8;
  FNiagaraGpuScratchPadStructured<FNiagaraAsyncGpuTraceResult> *local_b0;
  FScratchBuffer *local_a8;
  FScratchBuffer *local_a0;
  TMap<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo,0>_>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  FDispatchRequest local_68;
  
  if (*(int *)&(this->Dispatches).field_0x8 == *(int *)&(this->Dispatches).field_0x34) {
    this_00 = *(FRHIResource **)param_3;
  }
  else {
    local_b8 = &this->TraceRequests;
    FNiagaraGpuScratchPadStructured<FNiagaraAsyncGpuTrace>::Transition
              (local_b8,param_1,UAVCompute,SRVCompute,None);
    local_b0 = &this->TraceResults;
    FNiagaraGpuScratchPadStructured<FNiagaraAsyncGpuTraceResult>::Transition
              (local_b0,param_1,SRVCompute,UAVCompute,None);
    local_a8 = &(this->TraceCounts).ScratchBufferFloat;
    FNiagaraGpuScratchPad::FScratchBuffer::Transition
              (local_a8,param_1,UAVCompute,SRVCompute|IndirectArgs,None);
    local_a0 = &(this->TraceCounts).ScratchBufferUInt;
    FNiagaraGpuScratchPad::FScratchBuffer::Transition
              (local_a0,param_1,UAVCompute,SRVCompute|IndirectArgs,None);
    puVar1 = &(this->Dispatches).field_0x10;
    iVar4 = *(int *)&(this->Dispatches).field_0x28;
    local_98 = &this->Dispatches;
    iVar16 = 0;
    uVar10 = 1;
    iVar18 = 0;
    iVar11 = 0;
    if (iVar4 != 0) {
      puVar19 = *(uint **)&(this->Dispatches).field_0x20;
      if (puVar19 == (uint *)0x0) {
        puVar19 = (uint *)puVar1;
      }
      uVar15 = *puVar19;
      iVar18 = 0;
      while (uVar15 == 0) {
        lVar13 = (longlong)iVar16;
        iVar18 = iVar18 + 0x20;
        iVar16 = iVar16 + 1;
        iVar11 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14903fa2e;
        uVar15 = puVar19[lVar13 + 1];
      }
      uVar10 = -uVar15 & uVar15;
      uVar3 = (ulonglong)uVar10 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar11 = iVar18 + -1 + (int)lVar13;
      if (iVar4 < iVar11) {
        iVar11 = iVar4;
      }
    }
LAB_14903fa2e:
    uVar15 = *(uint *)&(this->Dispatches).field_0x28;
    uVar20 = uVar15 & 0xffffffe0;
    TStack_90._padding_ = CONCAT44(uVar10,iVar16);
    TStack_90.CurrentBitIndex = iVar11;
    TStack_90.UnvisitedBitMask = 0xffffffff;
    iVar16 = (int)uVar15 >> 5;
    TStack_90._28_4_ = iVar11;
    TStack_90.BaseBitIndex = iVar18;
    uStack_70 = CONCAT44(uStack_cc,
                         *(int *)&(this->Dispatches).field_0x8 -
                         *(int *)&(this->Dispatches).field_0x34);
    TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar15 < 0) || (iVar4 < (int)uVar15)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar10 = *(uint *)&(this->Dispatches).field_0x28;
    if (uVar15 != uVar10) {
      puVar17 = *(undefined1 **)&(this->Dispatches).field_0x20;
      if (puVar17 == (undefined1 *)0x0) {
        puVar17 = puVar1;
      }
      uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar16 * 4);
      while (uVar15 == 0) {
        lVar13 = (longlong)iVar16;
        uVar20 = uVar20 + 0x20;
        iVar16 = iVar16 + 1;
        uVar15 = uVar10;
        if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
        goto LAB_14903fb40;
        uVar15 = *(uint *)(puVar17 + lVar13 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uVar15 = (int)lVar13 + -1 + uVar20;
      if ((int)uVar10 < (int)uVar15) {
        uVar15 = uVar10;
      }
    }
LAB_14903fb40:
    while( true ) {
      pTVar7 = local_98;
      if (*(int *)&local_98->field_0x8 - *(int *)&local_98->field_0x34 != (int)uStack_70) {
        `TSparseArray<TSparseSetElement<TTuple<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_90.CurrentBitIndex == uVar15) &&
          (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(this->Dispatches).field_0x10
          )) && (pTVar7 == &this->Dispatches)) break;
      lVar13 = (longlong)TStack_90.CurrentBitIndex * 0x60 + *(longlong *)pTVar7;
      if (*(uint *)(lVar13 + 0x48) != 0) {
        local_68.TracesBuffer = *(FRWBufferStructured **)(lVar13 + 8);
        pFVar21 = &this->CollisionGroupHashMapBuffer;
        pFVar14 = (this->TraceProviders).AllocatorInstance.Data;
        local_68.ResultsBuffer = *(FRWBufferStructured **)(lVar13 + 0x18);
        local_68.TraceCountsBuffer = *(FRWBuffer **)(lVar13 + 0x38);
        local_68.TracesOffset = *(uint *)(lVar13 + 0x10);
        local_68.ResultsOffset = *(uint *)(lVar13 + 0x20);
        local_68.TraceCountsOffset = *(uint *)(lVar13 + 0x40);
        local_68.MaxRetraceCount = *(uint *)(lVar13 + 0x4c);
        iVar4 = *(int *)(lVar13 + 0x50);
        if (*(int *)&(this->CollisionGroupMap).field_0x8 -
            *(int *)&(this->CollisionGroupMap).field_0x34 < 1) {
          pFVar21 = (FCollisionGroupHashMap *)0x0;
        }
        pFVar2 = pFVar14 + (longlong)(this->TraceProviders).ArrayNum * 8;
        local_68.MaxTraceCount = *(uint *)(lVar13 + 0x48);
        for (; pFVar14 != pFVar2; pFVar14 = pFVar14 + 8) {
          iVar16 = (**(code **)(**(longlong **)pFVar14 + 0x10))();
          if ((iVar16 == iVar4) ||
             ((iVar4 == 0 &&
              (TVar12 = (**(code **)(**(longlong **)pFVar14 + 0x10))(),
              TVar12 == this->ResolvedDefaultProviderType)))) {
            cVar9 = (**(code **)(**(longlong **)pFVar14 + 8))();
            if ((cVar9 != '\0') && (plVar5 = *(longlong **)pFVar14, plVar5 != (longlong *)0x0)) {
              pcVar6 = *(code **)(*plVar5 + 0x20);
              local_c0 = *(FRHIResource **)param_3;
              if (local_c0 != (FRHIResource *)0x0) {
                FRHIResource::AddRef(local_c0);
              }
              (*pcVar6)(plVar5,param_1,&local_68,&local_c0,pFVar21);
              goto LAB_14903fc41;
            }
            break;
          }
        }
        FNiagaraAsyncGpuTraceProvider::ClearResults(param_1,this->ShaderPlatform,&local_68);
      }
LAB_14903fc41:
      TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
    }
    FNiagaraGpuScratchPadStructured<FNiagaraAsyncGpuTrace>::Transition
              (local_b8,param_1,SRVCompute,UAVCompute,None);
    FNiagaraGpuScratchPadStructured<FNiagaraAsyncGpuTraceResult>::Transition
              (local_b0,param_1,UAVCompute,SRVCompute,None);
    FNiagaraGpuScratchPad::FScratchBuffer::Transition
              (local_a8,param_1,SRVCompute|IndirectArgs,UAVCompute,None);
    FNiagaraGpuScratchPad::FScratchBuffer::Transition
              (local_a0,param_1,SRVCompute|IndirectArgs,UAVCompute,None);
    this_00 = *(FRHIResource **)param_3;
  }
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  return;
}

// GetCollisionGroupHashMap @ 149044790

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FCollisionGroupHashMap * __thiscall
FNiagaraAsyncGpuTraceHelper::GetCollisionGroupHashMap(FNiagaraAsyncGpuTraceHelper *this)

{
  FCollisionGroupHashMap *pFVar1;
  
  pFVar1 = &this->CollisionGroupHashMapBuffer;
  if (*(int *)&(this->CollisionGroupMap).field_0x8 - *(int *)&(this->CollisionGroupMap).field_0x34 <
      1) {
    pFVar1 = (FCollisionGroupHashMap *)0x0;
  }
  return pFVar1;
}

// GetDispatch @ 149045c40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FNiagaraAsyncGpuTraceDispatchInfo * __thiscall
FNiagaraAsyncGpuTraceHelper::GetDispatch
          (FNiagaraAsyncGpuTraceHelper *this,FNiagaraDataInterfaceProxy *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo> *pTVar3;
  FNiagaraAsyncGpuTraceDispatchInfo *pFVar4;
  
  pTVar3 = TSet<TTuple<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo>,TDefaultMapHashableKeyFuncs<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo>,TDefaultMapHashableKeyFuncs<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo,0>,FDefaultSetAllocator>
                   *)&this->Dispatches,param_1);
  if (pTVar3 == (TTuple<FNiagaraDataInterfaceProxy_*,FNiagaraAsyncGpuTraceDispatchInfo> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x27b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FNiagaraAsyncGpuTraceDispatchInfo *)(*pcVar1)();
      return pFVar4;
    }
  }
  if (*(longlong *)&pTVar3->field_0x8 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Dispatch.TraceRequests.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraAsyncGpuTraceHelper.cpp"
                       ,0x112,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FNiagaraAsyncGpuTraceDispatchInfo *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FNiagaraAsyncGpuTraceDispatchInfo *)&pTVar3->field_0x8;
}

// GetDummyDispatch @ 149045df0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FNiagaraAsyncGpuTraceDispatchInfo * __thiscall
FNiagaraAsyncGpuTraceHelper::GetDummyDispatch(FNiagaraAsyncGpuTraceHelper *this)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraAsyncGpuTraceDispatchInfo *pFVar3;
  
  if ((this->DummyDispatch).TraceRequests.Buffer == (FRWBufferStructured *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DummyDispatch.TraceRequests.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraAsyncGpuTraceHelper.cpp"
                       ,0x11a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNiagaraAsyncGpuTraceDispatchInfo *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->DummyDispatch;
}

// GetTraceProvider @ 149049c70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNiagaraAsyncGpuTraceProvider * __thiscall
FNiagaraAsyncGpuTraceHelper::GetTraceProvider(FNiagaraAsyncGpuTraceHelper *this,Type param_1)

{
  FScriptContainerElement *pFVar1;
  char cVar2;
  Type TVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar4 = (this->TraceProviders).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)(this->TraceProviders).ArrayNum * 8;
  while( true ) {
    if (pFVar4 == pFVar1) {
      return (FNiagaraAsyncGpuTraceProvider *)0x0;
    }
    TVar3 = (**(code **)(**(longlong **)pFVar4 + 0x10))();
    if ((TVar3 == param_1) ||
       ((param_1 == Default &&
        (TVar3 = (**(code **)(**(longlong **)pFVar4 + 0x10))(),
        TVar3 == this->ResolvedDefaultProviderType)))) break;
    pFVar4 = pFVar4 + 8;
  }
  cVar2 = (**(code **)(**(longlong **)pFVar4 + 8))();
  if (cVar2 == '\0') {
    return (FNiagaraAsyncGpuTraceProvider *)0x0;
  }
  return *(FNiagaraAsyncGpuTraceProvider **)pFVar4;
}

// InitProviders @ 149058550

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNiagaraAsyncGpuTraceHelper::InitProviders
          (FNiagaraAsyncGpuTraceHelper *this,FNiagaraGpuComputeDispatchInterface *param_1)

{
  TArray<TUniquePtr<FNiagaraAsyncGpuTraceProvider,TDefaultDelete<FNiagaraAsyncGpuTraceProvider>_>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  UClass *this_00;
  TArray<TUniquePtr<FNiagaraAsyncGpuTraceProvider,TDefaultDelete<FNiagaraAsyncGpuTraceProvider>_>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  TArray<TUniquePtr<FNiagaraAsyncGpuTraceProvider,TDefaultDelete<FNiagaraAsyncGpuTraceProvider>_>,TSizedDefaultAllocator<32>_>
  local_18;
  
  this_00 = Z_Construct_UClass_UNiagaraSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pTVar3 = FNiagaraAsyncGpuTraceProvider::CreateSupportedProviders
                     (&local_18,this->ShaderPlatform,param_1,
                      (TArray<TEnumAsByte<ENDICollisionQuery_AsyncGpuTraceProvider::Type>,TSizedDefaultAllocator<32>_>
                       *)&(this_00->ClassDefaultObject).field0_0x0.DebugPtr[6].field_0x8);
  pTVar1 = &this->TraceProviders;
  if (pTVar1 != pTVar3) {
    DestructItems<TUniquePtr<FNiagaraAsyncGpuTraceProvider,TDefaultDelete<FNiagaraAsyncGpuTraceProvider>_>,int>
              ((TUniquePtr<FNiagaraAsyncGpuTraceProvider,TDefaultDelete<FNiagaraAsyncGpuTraceProvider>_>
                *)(pTVar1->AllocatorInstance).Data,(this->TraceProviders).ArrayNum);
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->TraceProviders).ArrayNum = pTVar3->ArrayNum;
    (this->TraceProviders).ArrayMax = pTVar3->ArrayMax;
    pTVar3->ArrayNum = 0;
    pTVar3->ArrayMax = 0;
  }
  DestructItems<TUniquePtr<FNiagaraAsyncGpuTraceProvider,TDefaultDelete<FNiagaraAsyncGpuTraceProvider>_>,int>
            ((TUniquePtr<FNiagaraAsyncGpuTraceProvider,TDefaultDelete<FNiagaraAsyncGpuTraceProvider>_>
              *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// OnPrimitiveGPUSceneInstancesDirtied @ 14905c360

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FNiagaraAsyncGpuTraceHelper::OnPrimitiveGPUSceneInstancesDirtied(FNiagaraAsyncGpuTraceHelper *this)

{
  this->bCollisionGroupMapDirty = true;
  return;
}

// PostRenderOpaque @ 14905ed30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNiagaraAsyncGpuTraceHelper::PostRenderOpaque
          (FNiagaraAsyncGpuTraceHelper *this,FRHICommandList *param_1,
          FNiagaraGpuComputeDispatchInterface *param_2,TStridedView<FSceneView_const_,int> *param_3,
          TUniformBufferRef<FSceneUniformParameters> param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  FRHIResource *this_00;
  TUniformBufferRef<FSceneUniformParameters> TVar5;
  char cVar6;
  FScriptContainerElement *pFVar7;
  FCollisionGroupHashMap *pFVar8;
  FRHIResource *local_res8;
  FRHICommandList *local_res10;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  
  local_res10 = param_1;
  if (this->bCollisionGroupMapDirty != false) {
    FNiagaraAsyncGpuTraceProvider::BuildCollisionGroupHashMap
              (param_1,this->FeatureLevel,(FSceneInterface *)param_2->_padding_,
               &this->CollisionGroupMap,&this->CollisionGroupHashMapBuffer);
    this->bCollisionGroupMapDirty = false;
  }
  TVar5 = param_4;
  pFVar7 = (this->TraceProviders).AllocatorInstance.Data;
  iVar2 = (this->TraceProviders).ArrayNum;
  pFVar8 = &this->CollisionGroupHashMapBuffer;
  if (*(int *)&(this->CollisionGroupMap).field_0x8 - *(int *)&(this->CollisionGroupMap).field_0x34 <
      1) {
    pFVar8 = (FCollisionGroupHashMap *)0x0;
  }
  pFVar1 = pFVar7 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->TraceProviders).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FNiagaraAsyncGpuTraceProvider,TDefaultDelete<FNiagaraAsyncGpuTraceProvider>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&param_4);
    }
    if (pFVar7 == pFVar1) break;
    cVar6 = (**(code **)(**(longlong **)pFVar7 + 8))();
    if (cVar6 != '\0') {
      local_res8 = *(FRHIResource **)TVar5;
      plVar3 = *(longlong **)pFVar7;
      pcVar4 = *(code **)(*plVar3 + 0x18);
      if (local_res8 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(local_res8);
      }
      local_48 = *(undefined4 *)&param_3->FirstElementPtr;
      uStack_44 = *(undefined4 *)((longlong)&param_3->FirstElementPtr + 4);
      iStack_40 = param_3->BytesBetweenElements;
      iStack_3c = param_3->NumElements;
      (*pcVar4)(plVar3,local_res10,&local_48,&local_res8,pFVar8);
    }
    pFVar7 = pFVar7 + 8;
  }
  this_00 = *(FRHIResource **)TVar5;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
    return;
  }
  return;
}

// ReleaseGPURayTracedCollisionGroup_GT @ 1490628d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FNiagaraAsyncGpuTraceHelper::ReleaseGPURayTracedCollisionGroup_GT
          (FNiagaraAsyncGpuTraceHelper *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  int local_res10 [6];
  
  local_res10[0] = param_1;
  bVar4 = IsInGameThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraAsyncGpuTraceHelper.cpp"
                       ,0x15b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar6 = &this->FreeGPURayTracedCollisionGroups;
  pFVar2 = (pTVar6->AllocatorInstance).Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2 + (longlong)(this->FreeGPURayTracedCollisionGroups).ArrayMax * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->FreeGPURayTracedCollisionGroups).ArrayNum;
  piVar1 = &(this->FreeGPURayTracedCollisionGroups).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar6->AllocatorInstance,piVar1);
  }
  (this->FreeGPURayTracedCollisionGroups).ArrayNum = iVar5 + 1;
  *(int *)((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_res10[0];
  return;
}

// RequiresGlobalDistanceField @ 149063c80

bool __cdecl FNiagaraAsyncGpuTraceHelper::RequiresGlobalDistanceField(Type param_1)

{
  bool bVar1;
  UClass *this;
  
  this = Z_Construct_UClass_UNiagaraSettings_NoRegister();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  bVar1 = FNiagaraAsyncGpuTraceProvider::RequiresGlobalDistanceField
                    (param_1,(TArray<TEnumAsByte<ENDICollisionQuery_AsyncGpuTraceProvider::Type>,TSizedDefaultAllocator<32>_>
                              *)&(this->ClassDefaultObject).field0_0x0.DebugPtr[6].field_0x8);
  return bVar1;
}

// RequiresRayTracingScene @ 149063cd0

bool __cdecl FNiagaraAsyncGpuTraceHelper::RequiresRayTracingScene(Type param_1)

{
  bool bVar1;
  UClass *this;
  
  this = Z_Construct_UClass_UNiagaraSettings_NoRegister();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  bVar1 = FNiagaraAsyncGpuTraceProvider::RequiresRayTracingScene
                    (param_1,(TArray<TEnumAsByte<ENDICollisionQuery_AsyncGpuTraceProvider::Type>,TSizedDefaultAllocator<32>_>
                              *)&(this->ClassDefaultObject).field0_0x0.DebugPtr[6].field_0x8);
  return bVar1;
}

// Reset @ 149063f50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall FNiagaraAsyncGpuTraceHelper::Reset(FNiagaraAsyncGpuTraceHelper *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->TraceProviders).AllocatorInstance.Data;
  iVar2 = (this->TraceProviders).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->TraceProviders).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TUniquePtr<FNiagaraAsyncGpuTraceProvider,TDefaultDelete<FNiagaraAsyncGpuTraceProvider>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 0x28))();
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// ResolveSupportedType @ 149064e50

Type __cdecl FNiagaraAsyncGpuTraceHelper::ResolveSupportedType(Type param_1)

{
  Type TVar1;
  UClass *this;
  
  this = Z_Construct_UClass_UNiagaraSettings_NoRegister();
  if ((this->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this);
  }
  TVar1 = FNiagaraAsyncGpuTraceProvider::ResolveSupportedType
                    (param_1,(TArray<TEnumAsByte<ENDICollisionQuery_AsyncGpuTraceProvider::Type>,TSizedDefaultAllocator<32>_>
                              *)&(this->ClassDefaultObject).field0_0x0.DebugPtr[6].field_0x8);
  return TVar1;
}

// SetPrimitiveCollisionGroup @ 1490679a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FNiagaraAsyncGpuTraceHelper::SetPrimitiveCollisionGroup
          (FNiagaraAsyncGpuTraceHelper *this,FPrimitiveSceneInfo *param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = TMapBase<FPrimitiveComponentId,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,unsigned_int,0>_>
           ::FindOrAddImpl<FPrimitiveComponentId_const_&>
                     ((TMapBase<FPrimitiveComponentId,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,unsigned_int,0>_>
                       *)&this->CollisionGroupMap,(param_1->PrimitiveComponentId).PrimIDValue,
                      &param_1->PrimitiveComponentId);
  *puVar1 = param_2;
  this->bCollisionGroupMapDirty = true;
  return;
}

// SetPrimitiveRayTracingCollisionGroup_GT @ 1490679e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FNiagaraAsyncGpuTraceHelper::SetPrimitiveRayTracingCollisionGroup_GT
          (FNiagaraAsyncGpuTraceHelper *this,UPrimitiveComponent *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  code **ppcVar4;
  ulonglong uVar5;
  undefined1 auStack_c8 [32];
  FNiagaraAsyncGpuTraceHelper *local_a8;
  FPrimitiveSceneProxy *pFStack_a0;
  uint local_98;
  undefined4 uStack_94;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  undefined1 local_58 [40];
  code **local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraAsyncGpuTraceHelper.cpp"
                       ,0x140,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_1 != (UPrimitiveComponent *)0x0) &&
     (pFStack_a0 = param_1->SceneProxy, pFStack_a0 != (FPrimitiveSceneProxy *)0x0)) {
    local_88[0] = (code *)0x0;
    local_a8 = this;
    local_98 = param_2;
    local_60 = FMemory::Malloc(0x20,8);
    *local_60 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`FNiagaraAsyncGpuTraceHelper::SetPrimitiveRayTracingCollisionGroup_GT'::`2'::<lambda_1>,1,1>
                         ::_vftable_;
    local_60[1] = (code *)local_a8;
    local_60[2] = (code *)pFStack_a0;
    local_60[3] = (code *)CONCAT44(uStack_94,local_98);
    if (local_60 + 1 != (code **)0x0) {
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FNiagaraAsyncGpuTraceHelper::SetPrimitiveRayTracingCollisionGroup_GT'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FNiagaraAsyncGpuTraceHelper::SetPrimitiveRayTracingCollisionGroup_GT_::__l2::TSTR_NiagaraSetPrimHWRTCollisionGroup326>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_60 = (code **)0x0;
      local_58._16_8_ = local_78[0];
      local_58._24_8_ = local_78[1];
      local_58._32_8_ = local_78[2];
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`FNiagaraAsyncGpuTraceHelper::SetPrimitiveRayTracingCollisionGroup_GT'::__l2::TSTR_NiagaraSetPrimHWRTCollisionGroup326>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar3);
      uVar5 = (ulonglong)local_28;
      if (2 < uVar5) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          ppcVar4 = (code **)(local_58 + 0x10);
          if (local_30 != (code **)0x0) {
            ppcVar4 = local_30;
          }
          (**(code **)(*ppcVar4 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      ppcVar4 = local_88 + 2;
      if (local_60 != (code **)0x0) {
        ppcVar4 = local_60;
      }
      (**(code **)(*ppcVar4 + 0x10))();
    }
  }
  return;
}

