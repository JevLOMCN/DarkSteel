// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CompositeCore
// Functions: 6

// FRenderWork @ 14ea764b0

FRenderWork * __thiscall
UE::CompositeCore::FRenderWork::FRenderWork(FRenderWork *this,FRenderWork *param_1)

{
  TSet<EViewModeIndex,DefaultKeyFuncs<EViewModeIndex,0>,FDefaultSetAllocator> *pTVar1;
  TSet<EViewModeIndex,DefaultKeyFuncs<EViewModeIndex,0>,FDefaultSetAllocator> *pTVar2;
  undefined1 *_Src;
  undefined1 *_Dst;
  bool bVar3;
  void *pvVar4;
  ForElementType<FSetElementId> FVar5;
  
  (this->ExternalInputs).AllocatorInstance.Data = (FExternalTexture *)0x0;
  (this->ExternalInputs).AllocatorInstance.Data = (param_1->ExternalInputs).AllocatorInstance.Data;
  (param_1->ExternalInputs).AllocatorInstance.Data = (FExternalTexture *)0x0;
  (this->ExternalInputs).ArrayNum = (param_1->ExternalInputs).ArrayNum;
  (this->ExternalInputs).ArrayMax = (param_1->ExternalInputs).ArrayMax;
  (param_1->ExternalInputs).ArrayNum = 0;
  (param_1->ExternalInputs).ArrayMax = 0;
  (this->PreprocessingPasses).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreprocessingPasses).Pairs.AllocatorInstance.Data =
       (param_1->PreprocessingPasses).Pairs.AllocatorInstance.Data;
  (param_1->PreprocessingPasses).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreprocessingPasses).Pairs.ArrayNum = (param_1->PreprocessingPasses).Pairs.ArrayNum;
  (this->PreprocessingPasses).Pairs.ArrayMax = (param_1->PreprocessingPasses).Pairs.ArrayMax;
  (param_1->PreprocessingPasses).Pairs.ArrayNum = 0;
  (param_1->PreprocessingPasses).Pairs.ArrayMax = 0;
  (this->FramePasses).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FramePasses).Pairs.AllocatorInstance.Data =
       (param_1->FramePasses).Pairs.AllocatorInstance.Data;
  (param_1->FramePasses).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FramePasses).Pairs.ArrayNum = (param_1->FramePasses).Pairs.ArrayNum;
  (this->FramePasses).Pairs.ArrayMax = (param_1->FramePasses).Pairs.ArrayMax;
  (param_1->FramePasses).Pairs.ArrayNum = 0;
  (param_1->FramePasses).Pairs.ArrayMax = 0;
  (this->FrameAllocator).Ptr = (param_1->FrameAllocator).Ptr;
  (param_1->FrameAllocator).Ptr =
       (TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> *)0x0;
  (this->MainRenderMode).bIsSet = false;
  bVar3 = (param_1->MainRenderMode).bIsSet;
  (this->MainRenderMode).bIsSet = bVar3;
  if (bVar3 != false) {
    (this->MainRenderMode).TypedValue = (param_1->MainRenderMode).TypedValue;
  }
  pTVar1 = &this->AllowedViewModes;
  *(undefined8 *)&pTVar1->Elements = 0;
  pTVar2 = &param_1->AllowedViewModes;
  *(undefined8 *)&(this->AllowedViewModes).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AllowedViewModes).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->AllowedViewModes).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AllowedViewModes).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AllowedViewModes).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AllowedViewModes).Elements.field_0x34 = 0;
  (this->AllowedViewModes).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AllowedViewModes).HashSize = 0;
  if (pTVar1 != pTVar2) {
    *(undefined8 *)&pTVar1->Elements = *(undefined8 *)&pTVar2->Elements;
    *(undefined8 *)&pTVar2->Elements = 0;
    _Src = &(param_1->AllowedViewModes).Elements.field_0x10;
    *(undefined4 *)&(this->AllowedViewModes).Elements.field_0x8 =
         *(undefined4 *)&(param_1->AllowedViewModes).Elements.field_0x8;
    _Dst = &(this->AllowedViewModes).Elements.field_0x10;
    *(undefined4 *)&(this->AllowedViewModes).Elements.field_0xc =
         *(undefined4 *)&(param_1->AllowedViewModes).Elements.field_0xc;
    *(undefined8 *)&(param_1->AllowedViewModes).Elements.field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->AllowedViewModes).Elements.field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar4 = *(void **)&(this->AllowedViewModes).Elements.field_0x20;
      if (pvVar4 != (void *)0x0) {
        FMemory::Free(pvVar4);
      }
      *(undefined8 *)&(this->AllowedViewModes).Elements.field_0x20 =
           *(undefined8 *)&(param_1->AllowedViewModes).Elements.field_0x20;
      *(undefined8 *)&(param_1->AllowedViewModes).Elements.field_0x20 = 0;
      *(undefined4 *)&(this->AllowedViewModes).Elements.field_0x28 =
           *(undefined4 *)&(param_1->AllowedViewModes).Elements.field_0x28;
      *(undefined4 *)&(this->AllowedViewModes).Elements.field_0x2c =
           *(undefined4 *)&(param_1->AllowedViewModes).Elements.field_0x2c;
      *(undefined8 *)&(param_1->AllowedViewModes).Elements.field_0x28 = 0;
    }
    *(undefined4 *)&(this->AllowedViewModes).Elements.field_0x30 =
         *(undefined4 *)&(param_1->AllowedViewModes).Elements.field_0x30;
    *(undefined4 *)&(this->AllowedViewModes).Elements.field_0x34 =
         *(undefined4 *)&(param_1->AllowedViewModes).Elements.field_0x34;
    *(undefined4 *)&(param_1->AllowedViewModes).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->AllowedViewModes).Elements.field_0x34 = 0;
  }
  if ((param_1->AllowedViewModes).Hash.SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(this->AllowedViewModes).Hash.InlineData =
         *(undefined4 *)(param_1->AllowedViewModes).Hash.InlineData;
  }
  FVar5 = (this->AllowedViewModes).Hash.SecondaryData;
  if (FVar5 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  (this->AllowedViewModes).Hash.SecondaryData = (param_1->AllowedViewModes).Hash.SecondaryData;
  (param_1->AllowedViewModes).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AllowedViewModes).HashSize = (param_1->AllowedViewModes).HashSize;
  (param_1->AllowedViewModes).HashSize = 0;
  (this->SceneCapturesUpdateQueue).AllocatorInstance.Data =
       (TWeakObjectPtr<USceneCaptureComponent2D,FWeakObjectPtr> *)0x0;
  (this->SceneCapturesUpdateQueue).AllocatorInstance.Data =
       (param_1->SceneCapturesUpdateQueue).AllocatorInstance.Data;
  (param_1->SceneCapturesUpdateQueue).AllocatorInstance.Data =
       (TWeakObjectPtr<USceneCaptureComponent2D,FWeakObjectPtr> *)0x0;
  (this->SceneCapturesUpdateQueue).ArrayNum = (param_1->SceneCapturesUpdateQueue).ArrayNum;
  (this->SceneCapturesUpdateQueue).ArrayMax = (param_1->SceneCapturesUpdateQueue).ArrayMax;
  (param_1->SceneCapturesUpdateQueue).ArrayNum = 0;
  (param_1->SceneCapturesUpdateQueue).ArrayMax = 0;
  return this;
}

// FRenderWork @ 14ea766b0

FRenderWork * __thiscall UE::CompositeCore::FRenderWork::FRenderWork(FRenderWork *this)

{
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  *paVar1;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  *paVar2;
  
  paVar2 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
            *)0x0;
  (this->ExternalInputs).AllocatorInstance.Data = (FExternalTexture *)0x0;
  (this->ExternalInputs).ArrayNum = 0;
  (this->ExternalInputs).ArrayMax = 0;
  (this->PreprocessingPasses).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreprocessingPasses).Pairs.ArrayNum = 0;
  (this->PreprocessingPasses).Pairs.ArrayMax = 0;
  (this->FramePasses).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FramePasses).Pairs.ArrayNum = 0;
  (this->FramePasses).Pairs.ArrayMax = 0;
  paVar1 = ::operator_new(8);
  if (paVar1 != (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                 *)0x0) {
    *paVar1 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
               )0x0;
    paVar2 = paVar1;
  }
  (this->FrameAllocator).Ptr =
       (TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> *)paVar2;
  (this->MainRenderMode).bIsSet = false;
  *(undefined8 *)&(this->AllowedViewModes).Elements = 0;
  *(undefined8 *)&(this->AllowedViewModes).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AllowedViewModes).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->AllowedViewModes).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AllowedViewModes).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AllowedViewModes).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AllowedViewModes).Elements.field_0x34 = 0;
  (this->AllowedViewModes).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AllowedViewModes).HashSize = 0;
  (this->SceneCapturesUpdateQueue).AllocatorInstance.Data =
       (TWeakObjectPtr<USceneCaptureComponent2D,FWeakObjectPtr> *)0x0;
  (this->SceneCapturesUpdateQueue).ArrayNum = 0;
  (this->SceneCapturesUpdateQueue).ArrayMax = 0;
  return this;
}

// ~FRenderWork @ 14ea774b0

void __thiscall UE::CompositeCore::FRenderWork::~FRenderWork(FRenderWork *this)

{
  TWeakObjectPtr<USceneCaptureComponent2D,FWeakObjectPtr> *pTVar1;
  ForElementType<FSetElementId> FVar2;
  FScriptContainerElement *pFVar3;
  FExternalTexture *pFVar4;
  
  pTVar1 = (this->SceneCapturesUpdateQueue).AllocatorInstance.Data;
  if (pTVar1 != (TWeakObjectPtr<USceneCaptureComponent2D,FWeakObjectPtr> *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pTVar1);
  }
  (this->AllowedViewModes).HashSize = 0;
  FVar2 = (this->AllowedViewModes).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<enum_EViewModeIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<enum_EViewModeIndex>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->AllowedViewModes);
  TDefaultDelete<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>_>::
  operator()((TDefaultDelete<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>_>
              *)&this->FrameAllocator,(this->FrameAllocator).Ptr);
  DestructItems<TTuple<enum_ISceneViewExtension::EPostProcessingPass,TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_>_>,int>
            ((TTuple<ISceneViewExtension::EPostProcessingPass,TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_>_>
              *)(this->FramePasses).Pairs.AllocatorInstance.Data,(this->FramePasses).Pairs.ArrayNum)
  ;
  pFVar3 = (this->FramePasses).Pairs.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<TTuple<unsigned_int,TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_>_>,int>
            ((TTuple<unsigned_int,TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_>_>
              *)(this->PreprocessingPasses).Pairs.AllocatorInstance.Data,
             (this->PreprocessingPasses).Pairs.ArrayNum);
  pFVar3 = (this->PreprocessingPasses).Pairs.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar4 = (this->ExternalInputs).AllocatorInstance.Data;
  if (pFVar4 != (FExternalTexture *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar4);
  }
  return;
}

// operator() @ 14ea77980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRenderWork * __thiscall
`UE::CompositeCore::FRenderWork::GetDefault'::__l2::<lambda_1>::operator()
          (void *this,FRenderWork *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  *paVar5;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  *paVar6;
  TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_> *pTVar8;
  FRenderWork *pFVar9;
  undefined1 auStackY_e8 [32];
  FMergePassProxy *local_98;
  FMergePassProxy *local_90;
  EPostProcessingPass local_88 [2];
  TArray<TVariant<UE::CompositeCore::FPassInternalResourceDesc,UE::CompositeCore::FPassExternalResourceDesc,FCompositeCorePassProxy_const_*>,TSizedDefaultAllocator<32>_>
  local_80;
  undefined4 local_70;
  uint uStack_6c;
  undefined8 local_68;
  undefined1 local_60;
  TVariant<UE::CompositeCore::FPassInternalResourceDesc,UE::CompositeCore::FPassExternalResourceDesc,FCompositeCorePassProxy_const_*>
  local_58;
  undefined4 local_48;
  undefined1 local_40;
  longlong local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  paVar6 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
            *)0x0;
  (__return_storage_ptr__->ExternalInputs).AllocatorInstance.Data = (FExternalTexture *)0x0;
  (__return_storage_ptr__->ExternalInputs).ArrayNum = 0;
  (__return_storage_ptr__->ExternalInputs).ArrayMax = 0;
  (__return_storage_ptr__->PreprocessingPasses).Pairs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->PreprocessingPasses).Pairs.ArrayNum = 0;
  (__return_storage_ptr__->PreprocessingPasses).Pairs.ArrayMax = 0;
  (__return_storage_ptr__->FramePasses).Pairs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FramePasses).Pairs.ArrayNum = 0;
  (__return_storage_ptr__->FramePasses).Pairs.ArrayMax = 0;
  paVar5 = ::operator_new(8);
  if (paVar5 != (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                 *)0x0) {
    *paVar5 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
               )0x0;
    paVar6 = paVar5;
  }
  (__return_storage_ptr__->FrameAllocator).Ptr =
       (TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> *)paVar6;
  (__return_storage_ptr__->MainRenderMode).bIsSet = false;
  *(undefined8 *)&(__return_storage_ptr__->AllowedViewModes).Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->AllowedViewModes).Elements.field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->AllowedViewModes).Elements.field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->AllowedViewModes).Elements.field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->AllowedViewModes).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->AllowedViewModes).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->AllowedViewModes).Elements.field_0x34 = 0;
  (__return_storage_ptr__->AllowedViewModes).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0
  ;
  (__return_storage_ptr__->AllowedViewModes).HashSize = 0;
  (__return_storage_ptr__->SceneCapturesUpdateQueue).AllocatorInstance.Data =
       (TWeakObjectPtr<USceneCaptureComponent2D,FWeakObjectPtr> *)0x0;
  (__return_storage_ptr__->SceneCapturesUpdateQueue).ArrayNum = 0;
  (__return_storage_ptr__->SceneCapturesUpdateQueue).ArrayMax = 0;
  local_88[0] = SSRInput;
  pTVar7 = TSortedMap<enum_ISceneViewExtension::EPostProcessingPass,TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<enum_ISceneViewExtension::EPostProcessingPass_const_>_>
           ::Emplace<enum_ISceneViewExtension::EPostProcessingPass>
                     (&__return_storage_ptr__->FramePasses,local_88);
  local_88[1] = 6;
  pTVar8 = TSortedMap<enum_ISceneViewExtension::EPostProcessingPass,TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,TLess<enum_ISceneViewExtension::EPostProcessingPass_const_>_>
           ::Emplace<enum_ISceneViewExtension::EPostProcessingPass>
                     (&__return_storage_ptr__->FramePasses,local_88 + 1);
  local_70 = 0;
  uStack_6c = uStack_6c & 0xffffff00;
  local_58._padding_ = (ulonglong)uStack_6c << 0x20;
  local_58.TypeIndex = '\0';
  local_30 = 0;
  local_68 = 1;
  local_60 = 1;
  local_40 = 1;
  local_48 = 1;
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 2;
  local_38 = local_58._padding_;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,2,0,&local_80.AllocatorInstance,2,&local_80.ArrayMax);
  ConstructItems<TVariant<UE::CompositeCore::FPassInternalResourceDesc,UE::CompositeCore::FPassExternalResourceDesc,FCompositeCorePassProxy_const_*>,TVariant<UE::CompositeCore::FPassInternalResourceDesc,UE::CompositeCore::FPassExternalResourceDesc,FCompositeCorePassProxy_const_*>,int>
            (local_80.AllocatorInstance.Data,&local_58,2);
  local_98 = TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
             Create<UE::CompositeCore::FMergePassProxy,TArray<TVariant<UE::CompositeCore::FPassInternalResourceDesc,UE::CompositeCore::FPassExternalResourceDesc,FCompositeCorePassProxy_const_*>,TSizedDefaultAllocator<32>_>_const_&>
                       ((__return_storage_ptr__->FrameAllocator).Ptr,&local_80);
  pFVar1 = (pTVar7->AllocatorInstance).Data;
  if (((pFVar1 <= (FScriptContainerElement *)&local_98) &&
      ((FScriptContainerElement *)&local_98 < pFVar1 + (longlong)pTVar7->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar9 = (FRenderWork *)(*pcVar2)();
    return pFVar9;
  }
  iVar4 = pTVar7->ArrayNum;
  if (iVar4 == pTVar7->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar7->AllocatorInstance,&pTVar7->ArrayMax);
  }
  pFVar1 = (pTVar7->AllocatorInstance).Data;
  pTVar7->ArrayNum = iVar4 + 1;
  *(FMergePassProxy **)(pFVar1 + (longlong)iVar4 * 8) = local_98;
  local_90 = TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
             Create<UE::CompositeCore::FMergePassProxy,TArray<TVariant<UE::CompositeCore::FPassInternalResourceDesc,UE::CompositeCore::FPassExternalResourceDesc,FCompositeCorePassProxy_const_*>,TSizedDefaultAllocator<32>_>_const_&>
                       ((__return_storage_ptr__->FrameAllocator).Ptr,&local_80);
  pFVar1 = (pTVar8->AllocatorInstance).Data;
  if (((pFVar1 <= (FScriptContainerElement *)&local_90) &&
      ((FScriptContainerElement *)&local_90 < pFVar1 + (longlong)pTVar8->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar9 = (FRenderWork *)(*pcVar2)();
    return pFVar9;
  }
  iVar4 = pTVar8->ArrayNum;
  if (iVar4 == pTVar8->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  pFVar1 = (pTVar8->AllocatorInstance).Data;
  pTVar8->ArrayNum = iVar4 + 1;
  *(FMergePassProxy **)(pFVar1 + (longlong)iVar4 * 8) = local_90;
  if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetDefault @ 14ea7ea70

FRenderWork * __cdecl UE::CompositeCore::FRenderWork::GetDefault(void)

{
  undefined1 local_res8 [32];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      `UE::CompositeCore::FRenderWork::GetDefault'::__l2::<lambda_1>::operator()
                (local_res8,&DefaultRenderWork);
      atexit(`UE::CompositeCore::FRenderWork::GetDefault'::__l2::
             _dynamic_atexit_destructor_for__DefaultRenderWork__);
      _Init_thread_footer(&::_TSS0);
      return &DefaultRenderWork;
    }
  }
  return &DefaultRenderWork;
}

// IsEmpty @ 14ea80af0

bool __thiscall UE::CompositeCore::FRenderWork::IsEmpty(FRenderWork *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  byte bVar3;
  FScriptContainerElement *pFVar4;
  byte bVar5;
  undefined1 local_res8 [8];
  
  iVar2 = (this->PreprocessingPasses).Pairs.ArrayNum;
  pFVar4 = (this->PreprocessingPasses).Pairs.AllocatorInstance.Data;
  bVar5 = 1;
  pFVar1 = pFVar4 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((this->PreprocessingPasses).Pairs.ArrayNum != iVar2) {
      `TCheckedPointerIterator<TTuple<unsigned_int,TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    bVar3 = 0;
    if (*(int *)(pFVar4 + 0x10) == 0) {
      bVar3 = bVar5;
    }
    bVar5 = bVar3;
    pFVar4 = pFVar4 + 0x18;
  }
  iVar2 = (this->FramePasses).Pairs.ArrayNum;
  pFVar4 = (this->FramePasses).Pairs.AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)iVar2 * 0x18;
  while( true ) {
    if ((this->FramePasses).Pairs.ArrayNum != iVar2) {
      `TCheckedPointerIterator<TTuple<enum_ISceneViewExtension::EPostProcessingPass,TArray<FCompositeCorePassProxy_const_*,TSizedDefaultAllocator<32>_>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    bVar5 = bVar5 & *(int *)(pFVar4 + 0x10) == 0;
    pFVar4 = pFVar4 + 0x18;
  }
  return (bool)(((this->SceneCapturesUpdateQueue).ArrayNum == 0 &&
                (this->MainRenderMode).bIsSet == false) & bVar5);
}

