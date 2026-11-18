// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 21

// FRayTracingDynamicGeometryUpdateManager @ 1452fe6c0

FRayTracingDynamicGeometryUpdateManager * __thiscall
FRayTracingDynamicGeometryUpdateManager::FRayTracingDynamicGeometryUpdateManager
          (FRayTracingDynamicGeometryUpdateManager *this)

{
  this->_padding_ = (longlong)&___7FRayTracingDynamicGeometryUpdateManager__6B_;
  (this->DynamicGeometryBuilds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicGeometryBuilds).ArrayNum = 0;
  (this->DynamicGeometryBuilds).ArrayMax = 0;
  (this->DynamicGeometryUpdates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DynamicGeometryUpdates).ArrayNum = 0;
  (this->DynamicGeometryUpdates).ArrayMax = 0;
  *(undefined8 *)&this->DispatchCommandsPerView = 0;
  *(undefined8 *)&(this->DispatchCommandsPerView).field_0x8 = 0;
  *(undefined8 *)&(this->DispatchCommandsPerView).field_0x20 = 0;
  *(undefined4 *)&(this->DispatchCommandsPerView).field_0x28 = 0;
  *(undefined4 *)&(this->DispatchCommandsPerView).field_0x2c = 0x80;
  *(undefined4 *)&(this->DispatchCommandsPerView).field_0x34 = 0;
  *(undefined4 *)&(this->DispatchCommandsPerView).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DispatchCommandsPerView).field_0x40 = 0;
  *(undefined4 *)&(this->DispatchCommandsPerView).field_0x48 = 0;
  *(undefined8 *)&this->InstancedViewUniformBuffers = 0;
  *(undefined8 *)&(this->InstancedViewUniformBuffers).field_0x8 = 0;
  *(undefined8 *)&(this->InstancedViewUniformBuffers).field_0x20 = 0;
  *(undefined4 *)&(this->InstancedViewUniformBuffers).field_0x28 = 0;
  *(undefined4 *)&(this->InstancedViewUniformBuffers).field_0x2c = 0x80;
  *(undefined4 *)&(this->InstancedViewUniformBuffers).field_0x34 = 0;
  *(undefined4 *)&(this->InstancedViewUniformBuffers).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->InstancedViewUniformBuffers).field_0x40 = 0;
  *(undefined4 *)&(this->InstancedViewUniformBuffers).field_0x48 = 0;
  (this->BuildParams).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BuildParams).ArrayNum = 0;
  (this->BuildParams).ArrayMax = 0;
  (this->Segments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Segments).ArrayNum = 0;
  (this->Segments).ArrayMax = 0;
  (this->VertexPositionBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexPositionBuffers).ArrayNum = 0;
  (this->VertexPositionBuffers).ArrayMax = 0;
  (this->ReferencedUniformBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferencedUniformBuffers).ArrayNum = 0;
  (this->ReferencedUniformBuffers).ArrayMax = 0;
  this->SharedBufferGenerationID = 0;
  this->ScratchBufferSize = 0;
  return this;
}

// ~FRayTracingDynamicGeometryUpdateManager @ 1452ffb90

/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
FRayTracingDynamicGeometryUpdateManager::~FRayTracingDynamicGeometryUpdateManager
          (FRayTracingDynamicGeometryUpdateManager *this)

{
  int *piVar1;
  TArray<FRayTracingDynamicGeometryUpdateManager::FVertexPositionBuffer_*,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FRWBuffer *this_00;
  void *pvVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pTVar2 = &this->VertexPositionBuffers;
  this->_padding_ = (longlong)&___7FRayTracingDynamicGeometryUpdateManager__6B_;
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  iVar4 = (this->VertexPositionBuffers).ArrayNum;
  pFVar3 = pFVar6 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->VertexPositionBuffers).ArrayNum != iVar4) {
      `TCheckedPointerIterator<FRayTracingDynamicGeometryUpdateManager::FVertexPositionBuffer_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar3) break;
    this_00 = *(FRWBuffer **)pFVar6;
    if (this_00 != (FRWBuffer *)0x0) {
      FRWBuffer::~FRWBuffer(this_00);
      ::operator_delete(this_00,0x38);
    }
    pFVar6 = pFVar6 + 8;
  }
  piVar1 = &(this->VertexPositionBuffers).ArrayMax;
  (this->VertexPositionBuffers).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  DestructItems<TRefCountPtr<FRHIUniformBuffer>,int>
            ((TRefCountPtr<FRHIUniformBuffer> *)
             (this->ReferencedUniformBuffers).AllocatorInstance.Data,
             (this->ReferencedUniformBuffers).ArrayNum);
  pFVar3 = (this->ReferencedUniformBuffers).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FRayTracingGeometrySegment,int>
            ((FRayTracingGeometrySegment *)(this->Segments).AllocatorInstance.Data,
             (this->Segments).ArrayNum);
  pFVar3 = (this->Segments).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FRayTracingGeometryBuildParams,int>
            ((FRayTracingGeometryBuildParams *)(this->BuildParams).AllocatorInstance.Data,
             (this->BuildParams).ArrayNum);
  pFVar3 = (this->BuildParams).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined4 *)&(this->InstancedViewUniformBuffers).field_0x48 = 0;
  pvVar5 = *(void **)&(this->InstancedViewUniformBuffers).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FRHIUniformBuffer_*,FRHIUniformBuffer_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRHIUniformBuffer_*,FRHIUniformBuffer_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRHIUniformBuffer_*,FRHIUniformBuffer_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InstancedViewUniformBuffers);
  *(undefined4 *)&(this->DispatchCommandsPerView).field_0x48 = 0;
  pvVar5 = *(void **)&(this->DispatchCommandsPerView).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FRHIUniformBuffer_*,TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRHIUniformBuffer_*,TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRHIUniformBuffer_*,TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DispatchCommandsPerView);
  DestructItems<FRayTracingDynamicGeometryUpdateManager::FRayTracingDynamicGeometryBuildParams,int>
            ((FRayTracingDynamicGeometryBuildParams *)
             (this->DynamicGeometryUpdates).AllocatorInstance.Data,
             (this->DynamicGeometryUpdates).ArrayNum);
  pFVar3 = (this->DynamicGeometryUpdates).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FRayTracingDynamicGeometryUpdateManager::FRayTracingDynamicGeometryBuildParams,int>
            ((FRayTracingDynamicGeometryBuildParams *)
             (this->DynamicGeometryBuilds).AllocatorInstance.Data,
             (this->DynamicGeometryBuilds).ArrayNum);
  pFVar3 = (this->DynamicGeometryBuilds).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// operator() @ 145302560

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FRayTracingDynamicGeometryUpdateManager::ScheduleUpdates'::__l2::<lambda_1>::operator()
          (void *this,FRayTracingDynamicGeometryBuildParams *param_1)

{
  EGeometryStateFlags *pEVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar6;
  ForAnyElementType *pFVar7;
  FScriptContainerElement *local_48;
  undefined4 uStack_3c;
  FRHIRayTracingGeometry *local_30;
  undefined4 local_28;
  FScriptContainerElement *local_20;
  undefined8 uStack_18;
  
  local_30 = (param_1->Geometry->RayTracingGeometryRHI).Reference;
  **(uint **)((longlong)this + 0x10) =
       (int)local_30->_padding_ +
       (**(uint **)((longlong)this + 0x10) - 1) + GRHIGlobals.RayTracing.ScratchBufferAlignment &
       -GRHIGlobals.RayTracing.ScratchBufferAlignment;
  param_1->Geometry->NumUpdatesSinceLastBuild = 0;
  pEVar1 = &param_1->Geometry->GeometryState;
  *pEVar1 = *pEVar1 & ~RequiresUpdate;
  FRHIResource::AddRef((FRHIResource *)local_30);
  local_28 = 0;
  if (param_1->SegmentOffset < 0) {
    local_48 = (param_1->Geometry->Initializer).Segments.AllocatorInstance.Data;
    iVar5 = (param_1->Geometry->Initializer).Segments.ArrayNum;
    if ((iVar5 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    local_48 = (FScriptContainerElement *)
               (*(longlong *)((longlong)this + 8) + (longlong)param_1->SegmentOffset * 0x28);
    iVar5 = (param_1->Geometry->Initializer).Segments.ArrayNum;
    if ((iVar5 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)this;
  uStack_18 = CONCAT44(uStack_3c,iVar5);
  pFVar7 = (ForAnyElementType *)(lVar2 + 200);
  local_20 = local_48;
  if (((pFVar7->Data <= (FScriptContainerElement *)&local_30) &&
      ((FScriptContainerElement *)&local_30 < pFVar7->Data + (longlong)*(int *)(lVar2 + 0xd4) * 0x20
      )) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = *(int *)(lVar2 + 0xd0);
  if (iVar5 == *(int *)(lVar2 + 0xd4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,pFVar7,(int *)(lVar2 + 0xd4));
  }
  *(int *)(lVar2 + 0xd0) = iVar5 + 1;
  pFVar6 = pFVar7->Data + (longlong)iVar5 * 0x20;
  *(undefined8 *)pFVar6 = 0;
  *(FRHIRayTracingGeometry **)pFVar6 = local_30;
  local_30 = (FRHIRayTracingGeometry *)0x0;
  *(undefined4 *)(pFVar6 + 8) = local_28;
  *(FScriptContainerElement **)(pFVar6 + 0x10) = local_20;
  *(undefined8 *)(pFVar6 + 0x18) = uStack_18;
  if ((param_1->DispatchCommands).ArrayNum != 0) {
    this_00 = TMapBase<FRHIUniformBuffer_*,TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIUniformBuffer_*,TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_>,0>_>
              ::FindChecked((TMapBase<FRHIUniformBuffer_*,TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIUniformBuffer_*,TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_>,0>_>
                             *)(*(longlong *)this + 0x28),param_1->ViewUniformBuffer);
    TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_>::
    Append<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_>
              (this_00,&param_1->DispatchCommands);
  }
  if (local_30 != (FRHIRayTracingGeometry *)0x0) {
    FRHIResource::Release((FRHIResource *)local_30);
  }
  return;
}

// operator() @ 145304440

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
`FRayTracingDynamicGeometryUpdateManager::DispatchUpdates'::__l11::<lambda_2>::operator()
          (void *this,FMeshComputeDispatchCommand *param_1,FMeshComputeDispatchCommand *param_2)

{
  FRHIComputeShader *pFVar1;
  FRHIComputeShader *pFVar2;
  bool bVar3;
  
  pFVar1 = TShaderRefBase<FRayTracingDynamicGeometryConverterCS,FShaderMapPointerTable>::
           GetComputeShader(&param_1->MaterialShader);
  pFVar2 = TShaderRefBase<FRayTracingDynamicGeometryConverterCS,FShaderMapPointerTable>::
           GetComputeShader(&param_2->MaterialShader);
  if (pFVar1 == pFVar2) {
    bVar3 = param_1->TargetBuffer < param_2->TargetBuffer;
  }
  else {
    pFVar1 = TShaderRefBase<FRayTracingDynamicGeometryConverterCS,FShaderMapPointerTable>::
             GetComputeShader(&param_1->MaterialShader);
    pFVar2 = TShaderRefBase<FRayTracingDynamicGeometryConverterCS,FShaderMapPointerTable>::
             GetComputeShader(&param_2->MaterialShader);
    bVar3 = pFVar1 < pFVar2;
  }
  return bVar3;
}

// operator() @ 1453044d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FRayTracingDynamicGeometryUpdateManager::AddDynamicGeometryUpdatePass'::__l14::<lambda_2>::
operator()(void *this,FRHICommandList *param_1)

{
  TArrayView<FMeshComputeDispatchCommand_const_,int> local_18;
  
  local_18.DataPtr = *(FMeshComputeDispatchCommand **)((longlong)this + 0x10);
  local_18.ArrayNum = *(int *)((longlong)this + 0x18);
  FRayTracingDynamicGeometryUpdateManager::DispatchUpdates
            (param_1,&local_18,*(ERHIPipeline *)((longlong)this + 8),
             *(ERHIPipeline *)((longlong)this + 9));
  return;
}

// operator() @ 1453045d0

/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
`FRayTracingDynamicGeometryUpdateManager::AddDynamicGeometryUpdatePass'::__l20::<lambda_3>::
operator()(void *this,FRHICommandList *param_1)

{
  int iVar1;
  FRDGResource *this_00;
  FRayTracingGeometryBuildParams *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  atomic<unsigned_int> aVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  undefined4 uStack_6c;
  TArrayView<FRayTracingGeometryBuildParams_const_,int> local_68;
  FRHIBufferRange local_58;
  FRHIBreadcrumbScope local_40;
  undefined1 local_30;
  char *local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  wchar_t *pwStack_10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    uStack_20 = 0x357;
    local_28 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingDynamicGeometryUpdateManager.cpp"
    ;
    local_18 = 0;
    pwStack_10 = L"Build";
    ::Desc._padding_._0_4_ = 0x50f7aaf0;
    ::Desc._padding_._4_4_ = 1;
    ::Desc._padding_._0_4_ = 0x357;
    ::Desc._padding_._4_4_ = uStack_1c;
    ::Desc._padding_._0_4_ = 0;
    ::Desc._padding_._4_4_ = 0;
    ::Desc._padding_._0_4_ = 0x50655b38;
    ::Desc._padding_._4_4_ = 1;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
    ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    ::Desc.TraceGpuSpecId = 0;
    ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(```FRayTracingDynamicGeometryUpdateManager::AddDynamicGeometryUpdatePass'::__l20::
           <lambda_3>::operator()'::__l7::<lambda_1>::operator()<>'::__l2::
           _dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar7 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
  pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
  pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar8->Data = (FRHIBreadcrumbData *)&::Desc;
  pFVar8->Allocator = pFVar7;
  pFVar8->TraceCpuSpecId = 0;
  pFVar8->TraceCpuMetadataId = 0;
  LOCK();
  UNLOCK();
  uVar5 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar8->ID = uVar5;
  pFVar8->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar8[1]._padding_ = (longlong)&::Desc;
  if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
     (bVar4 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar4)) {
    EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      aVar6 = (atomic<unsigned_int>)
              FCpuProfilerTrace::OutputEventType
                        ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                         (char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                         (uint)::Desc._padding_);
      LOCK();
      ::Desc.TraceCpuSpecId = aVar6;
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  }
  pFVar8->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_40,(FRHIComputeCommandList *)param_1,pFVar8);
  local_58.Size = 0;
  local_30 = 1;
  this_00 = (FRDGResource *)**(undefined8 **)((longlong)this + 8);
  if (this_00 == (FRDGResource *)0x0) {
    local_58.Buffer = (FRHIBuffer *)0x0;
  }
  else {
    FRDGResource::ValidateRHIAccess(this_00);
    local_58.Buffer = (FRHIBuffer *)this_00->ResourceRHI;
  }
  local_58.Offset = 0;
  pFVar2 = *(FRayTracingGeometryBuildParams **)(*(longlong *)this + 200);
  iVar1 = *(int *)(*(longlong *)this + 0xd0);
  if ((iVar1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_68._12_4_ = uStack_6c;
  local_68.ArrayNum = iVar1;
  local_68.DataPtr = pFVar2;
  FRHIComputeCommandList::BuildAccelerationStructures
            ((FRHIComputeCommandList *)param_1,&local_68,&local_58);
  FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_40);
  return;
}

// AddDispatchCommands @ 145308850

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
FRayTracingDynamicGeometryUpdateManager::AddDispatchCommands
          (FRayTracingDynamicGeometryUpdateManager *this,FRHICommandListBase *param_1,
          FScene *param_2,FSceneView *param_3,FPrimitiveSceneProxy *param_4,
          FRayTracingDynamicGeometryUpdateParams *param_5,uint param_6,FRWBuffer *param_7,
          uint param_8,uint param_9,uint param_10,FRayTracingDynamicGeometryBuildParams *param_11)

{
  int *piVar1;
  int iVar2;
  FGenericStaticFeatureLevel FVar3;
  FShaderResourceParameter FVar4;
  FVertexFactory *pFVar5;
  FRHIBuffer *pFVar6;
  FShaderMapResource *this_00;
  FMeshComputeDispatchCommand *pFVar7;
  code *pcVar8;
  FPrimitiveSceneProxy *pFVar9;
  FScene *pFVar10;
  FRayTracingDynamicGeometryConverterCS *pFVar11;
  FShaderMapBase *pFVar12;
  undefined8 uVar13;
  bool bVar14;
  bool bVar15;
  byte bVar16;
  int iVar17;
  EPSOPrecacheResult EVar18;
  ulonglong uVar19;
  longlong lVar20;
  FMaterial *this_01;
  FMaterialShaderMap *pFVar21;
  FShaderType *pFVar22;
  FVertexFactoryType *pFVar23;
  FMaterialRenderProxy *pFVar24;
  longlong lVar25;
  TRefCountPtr<FRHIShaderResourceView> TVar26;
  TArrayView<FShaderResourceParameterInfo_const_,int> *pTVar27;
  atomic<FRHIShader_*> aVar28;
  FShaderMapPointerTable *pFVar29;
  int iVar30;
  ForElementType<FMeshDrawShaderBindingsLayout> FVar31;
  ForElementType<FMeshBatchElement> FVar32;
  ForElementType<FMeshBatchElement> FVar33;
  short *psVar34;
  void *pvVar35;
  int iVar36;
  FData *pFVar37;
  uint *puVar38;
  ulonglong uVar39;
  uint uVar40;
  ForElementType<FMeshBatchElement> FVar41;
  uint uVar42;
  ulonglong uVar43;
  undefined1 auStackY_568 [32];
  undefined1 local_4f8;
  undefined1 local_4f7 [3];
  uint local_4f4;
  FMeshDrawSingleShaderBindings local_4f0;
  undefined4 local_4d8;
  ushort local_4d4;
  undefined4 local_4c8;
  ushort local_4c4;
  undefined4 local_4b8;
  ushort local_4b4;
  undefined4 local_4a8;
  ushort local_4a4;
  uint local_498;
  int local_494;
  uint local_490;
  uint local_48c;
  FPrimitiveSceneProxy *local_488;
  FScene *local_480;
  uint local_478;
  uint local_474;
  uint local_470;
  uint local_46c [3];
  uint local_460;
  undefined4 local_458;
  ushort local_454;
  undefined4 local_448;
  ushort local_444;
  undefined4 local_438;
  ushort local_434;
  undefined4 local_428;
  ushort local_424;
  undefined4 local_418;
  ushort local_414;
  undefined4 local_408;
  ushort local_404;
  undefined4 local_3f8;
  ushort local_3f4;
  undefined4 local_3e8;
  ushort local_3e4;
  FMaterialRenderProxy *local_3d8;
  int local_3d0;
  FRayTracingDynamicGeometryConverterCS *local_3c8;
  FShaderMapBase *local_3c0;
  FSceneView *local_3b8;
  ForElementType<FMeshBatchElement> local_3b0;
  ForElementType<FMeshBatchElement> local_3a8;
  longlong local_3a0;
  ulonglong local_398;
  FMaterial *local_390;
  FRWBuffer *local_388;
  FRayTracingDynamicGeometryUpdateParams *local_380;
  undefined4 *local_378;
  undefined4 *local_370;
  undefined4 *local_368;
  undefined4 *local_360;
  FRHICommandListBase *local_358;
  undefined1 local_350 [24];
  longlong lStack_338;
  TArrayView<FShaderLooseParameterBufferInfo_const_,int> local_330;
  ulonglong local_320;
  longlong lStack_318;
  ForElementType<FMeshBatchElement> local_310;
  FPrimitiveSceneProxy **local_308;
  FPrimitiveSceneProxy **local_300;
  uint *local_2f8;
  uint *local_2f0;
  FMeshProcessorShaders local_2e8;
  FMaterialShaders local_288;
  TArrayView<FShaderResourceParameterInfo_const_,int> local_218;
  FMeshComputeDispatchCommand local_208;
  FMaterialShaderTypes local_158;
  TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_> local_b8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_568;
  local_350._8_8_ = param_11;
  local_488 = param_4;
  local_388 = param_7;
  local_380 = param_5;
  local_480 = param_2;
  local_3b8 = param_3;
  local_358 = param_1;
  local_46c[2] = FPSOCollectorCreateManager::GetIndex
                           (Deferred,RayTracingDynamicGeometryPSOCollectorName);
  FVar41 = (ForElementType<FMeshBatchElement>)(param_5->MeshBatches).AllocatorInstance.Data;
  local_460 = (param_5->MeshBatches).ArrayNum;
  uVar19 = (ulonglong)(int)local_460;
  local_3b0 = (ForElementType<FMeshBatchElement>)(uVar19 * 0xe0 + (longlong)FVar41);
  FVar33 = local_3b0;
LAB_1453088f9:
  while( true ) {
    local_3a8 = FVar41;
    if ((param_5->MeshBatches).ArrayNum != (int)uVar19) {
      local_4f8 = 0;
      `TCheckedPointerIterator<FMeshBatch_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_4f8);
    }
    if (FVar41 == FVar33) {
      return;
    }
    lVar20 = (**(code **)((*(FVertexFactory **)((longlong)FVar41 + 0xa8))->_padding_ + 0x30))();
    if ((*(uint *)(lVar20 + 0x38) & 0x400) != 0) break;
    local_308 = &local_488;
    local_310 = FVar41;
    bVar14 = `FRayTracingDynamicGeometryUpdateManager::AddDispatchCommands'::__l7::<lambda_1>::
             operator()(&local_310);
    if (bVar14) break;
LAB_145309ffe:
    uVar19 = (ulonglong)local_460;
    FVar41 = (ForElementType<FMeshBatchElement>)((longlong)FVar41 + 0xe0);
  }
  pFVar24 = *(FMaterialRenderProxy **)((longlong)FVar41 + 0xb0);
  local_3d8 = pFVar24;
  if (pFVar24 == (FMaterialRenderProxy *)0x0) goto LAB_145309ffe;
LAB_145308980:
  local_3d8 = pFVar24;
  this_01 = (FMaterial *)
            (**(code **)(pFVar24->_padding_ + 0x30))(pFVar24,*(undefined4 *)&param_2->field_0x8);
  local_390 = this_01;
  if ((this_01 == (FMaterial *)0x0) ||
     (pFVar21 = FMaterial::GetRenderingThreadShaderMap(this_01),
     pFVar21 == (FMaterialShaderMap *)0x0)) goto LAB_145308b29;
  (**(code **)(this_01->_padding_ + 0x4e0))(this_01);
  bVar14 = param_5->bAlphaMasked;
  local_208.ShaderBindings.ShaderLayouts.AllocatorInstance.SecondaryData =
       (ForElementType<FMeshDrawShaderBindingsLayout>)0x0;
  local_208.ShaderBindings.ShaderLayouts.ArrayNum = 0;
  local_208.ShaderBindings.ShaderLayouts.ArrayMax = 2;
  local_208.ShaderBindings.Data.InlineStorage[0] = (uchar *)0x0;
  local_208.ShaderBindings.Data.InlineStorage[1] = (uchar *)0x0;
  local_208.ShaderBindings.ShaderFrequencyBits = 0;
  local_208.ShaderBindings.Size = 0;
  local_208.ShaderBindings.Data.InlineStorage[2] = (uchar *)0x0;
  local_208.ShaderBindings.Data.InlineStorage[3] = (uchar *)0x0;
  local_208.MaterialShader.ShaderContent = (FRayTracingDynamicGeometryConverterCS *)0x0;
  local_208.ShaderBindings.Data.InlineStorage[4] = (uchar *)0x0;
  local_208.ShaderBindings.Data.InlineStorage[5] = (uchar *)0x0;
  local_208.MaterialShader.ShaderMap = (FShaderMapBase *)0x0;
  local_208.ShaderBindings.Data.InlineStorage[6] = (uchar *)0x0;
  local_208.ShaderBindings.Data.InlineStorage[7] = (uchar *)0x0;
  local_158.PipelineType = (FShaderPipelineType *)0x0;
  local_208.ShaderBindings.Data.InlineStorage[8] = (uchar *)0x0;
  local_208.ShaderBindings.Data.InlineStorage[9] = (uchar *)0x0;
  local_158.ShaderType[0] = (FShaderType *)0x0;
  local_158.ShaderType[1] = (FShaderType *)0x0;
  local_158.ShaderType[2] = (FShaderType *)0x0;
  local_158.ShaderType[3] = (FShaderType *)0x0;
  local_158.ShaderType[4] = (FShaderType *)0x0;
  local_158.ShaderType[5] = (FShaderType *)0x0;
  local_158.ShaderType[6] = (FShaderType *)0x0;
  local_158.ShaderType[7] = (FShaderType *)0x0;
  local_158.ShaderType[8] = (FShaderType *)0x0;
  local_158.ShaderType[9] = (FShaderType *)0x0;
  local_158.ShaderType[10] = (FShaderType *)0x0;
  local_158.ShaderType[0xb] = (FShaderType *)0x0;
  local_158.PermutationId[0] = 0;
  local_158.PermutationId[1] = 0;
  local_158.PermutationId[2] = 0;
  local_158.PermutationId[3] = 0;
  local_158.PermutationId[4] = 0;
  local_158.PermutationId[5] = 0;
  local_158.PermutationId[6] = 0;
  local_158.PermutationId[7] = 0;
  local_158.PermutationId[8] = 0;
  local_158.PermutationId[9] = 0;
  local_158.PermutationId[10] = 0;
  local_158.PermutationId[0xb] = 0;
  pFVar22 = (FShaderType *)FRayTracingDynamicGeometryConverterCS::GetStaticType();
  bVar16 = (byte)pFVar22->Frequency;
  if ((local_158.ShaderType[bVar16] != (FShaderType *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("ShaderType[Frequency] == nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                          ,0xd0,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar5 = *(FVertexFactory **)((longlong)FVar41 + 0xa8);
  local_158.ShaderType[bVar16] = pFVar22;
  local_158.PermutationId[bVar16] = (uint)(bVar14 != false);
  local_288.ShaderMap = (FShaderMapBase *)0x0;
  local_288.Pipeline = (FShaderPipeline *)0x0;
  local_288.Shaders[0] = (FShader *)0x0;
  local_288.Shaders[1] = (FShader *)0x0;
  local_288.Shaders[2] = (FShader *)0x0;
  local_288.Shaders[3] = (FShader *)0x0;
  local_288.Shaders[4] = (FShader *)0x0;
  local_288.Shaders[5] = (FShader *)0x0;
  local_288.Shaders[6] = (FShader *)0x0;
  local_288.Shaders[7] = (FShader *)0x0;
  local_288.Shaders[8] = (FShader *)0x0;
  local_288.Shaders[9] = (FShader *)0x0;
  local_288.Shaders[10] = (FShader *)0x0;
  local_288.Shaders[0xb] = (FShader *)0x0;
  pFVar23 = (FVertexFactoryType *)(**(code **)(pFVar5->_padding_ + 0x30))();
  bVar14 = FMaterial::TryGetShaders(this_01,&local_158,pFVar23,&local_288);
  if (!bVar14) {
    FMeshDrawShaderBindings::~FMeshDrawShaderBindings(&local_208.ShaderBindings);
    param_2 = local_480;
    goto LAB_145308b29;
  }
  uVar40 = 0;
  local_3c0 = (FShaderMapBase *)0x0;
  local_3c8 = (FRayTracingDynamicGeometryConverterCS *)0x0;
  if ((FRayTracingDynamicGeometryConverterCS *)local_288.Shaders[5] !=
      (FRayTracingDynamicGeometryConverterCS *)0x0) {
    local_3c0 = local_288.ShaderMap;
    local_3c8 = (FRayTracingDynamicGeometryConverterCS *)local_288.Shaders[5];
  }
  local_2e8.VertexShader.ShaderContent = (FShader *)0x0;
  local_2e8.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_2e8.PixelShader.ShaderContent = (FShader *)0x0;
  local_2e8.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_2e8.GeometryShader.ShaderContent = (FShader *)0x0;
  local_2e8.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_2e8.WorkGraphShader.ShaderContent = (FShader *)0x0;
  local_2e8.WorkGraphShader.ShaderMap = (FShaderMapBase *)0x0;
  local_2e8.RayTracingShader.ShaderContent = (FShader *)0x0;
  local_2e8.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  local_2e8.ComputeShader.ShaderContent = (FShader *)local_3c8;
  local_2e8.ComputeShader.ShaderMap = local_3c0;
  local_208.MaterialShader.ShaderContent = local_3c8;
  local_208.MaterialShader.ShaderMap = local_3c0;
  FMeshDrawShaderBindings::Initialize(&local_208.ShaderBindings,&local_2e8);
  local_350._16_8_ = 0;
  lStack_338 = 0;
  FMeshMaterialShaderElementData::InitializeMeshMaterialData
            ((FMeshMaterialShaderElementData *)(local_350 + 0x10),local_3b8,local_488,
             (FMeshBatch *)FVar41,-1,false);
  local_494 = 0;
  uVar19 = (ulonglong)(local_208.ShaderBindings.ShaderFrequencyBits & 0x3f) -
           ((ulonglong)((local_208.ShaderBindings.ShaderFrequencyBits & 0x3f) >> 1) &
           0x5555555555555555);
  uVar19 = (uVar19 >> 2 & 0x3333333333333333) + (uVar19 & 0x3333333333333333);
  uVar43 = ((uVar19 >> 4) + uVar19 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar19 = uVar43 >> 0x38;
  uVar42 = (byte)(uVar43 >> 0x38) - 1;
  local_398 = uVar19;
  if (0 < (int)uVar42) {
    local_3a0 = 0;
    do {
      lVar20 = local_3a0;
      iVar36 = 0;
      uVar42 = 0;
      if ((int)uVar40 < local_208.ShaderBindings.ShaderLayouts.ArrayNum) {
        uVar42 = ~uVar40 >> 0x1f;
      }
      if ((uVar42 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FVar31 = (ForElementType<FMeshDrawShaderBindingsLayout>)&local_208;
      if (local_208.ShaderBindings.ShaderLayouts.AllocatorInstance.SecondaryData !=
          (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
        FVar31 = local_208.ShaderBindings.ShaderLayouts.AllocatorInstance.SecondaryData;
      }
      lVar20 = *(longlong *)(lVar20 + (longlong)FVar31);
      iVar30 = *(int *)(lVar20 + 0x28);
      iVar17 = iVar30 + 7;
      if (iVar17 < 0) {
        iVar17 = iVar30 + 0xe;
      }
      uVar43 = *(ulonglong *)(lVar20 + 0x30);
      iVar2 = *(int *)(lVar20 + 0x38);
      local_3d0 = (iVar17 >> 3) + (*(int *)(lVar20 + 0x18) + *(int *)(lVar20 + 8) + iVar30) * 8;
      lVar25 = (longlong)uVar43 >> 0x18;
      uVar39 = uVar43;
      if ((uVar43 & 1) != 0) {
        uVar43 = lVar20 + 0x30 + lVar25;
        uVar39 = lVar20 + 0x30 + lVar25;
      }
      while( true ) {
        if (*(int *)(lVar20 + 0x38) != iVar2) {
          local_4f7[0] = 0;
          `TCheckedPointerIterator<FShaderLooseParameterBufferInfo_const_,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_4f7);
        }
        this_01 = local_390;
        uVar19 = local_398;
        if (uVar43 == uVar39 + (longlong)iVar2 * 0x18) break;
        iVar36 = iVar36 + (uint)*(ushort *)(uVar43 + 2);
        uVar43 = uVar43 + 0x18;
      }
      uVar40 = uVar40 + 1;
      local_3a0 = local_3a0 + 8;
      local_494 = local_494 + (local_3d0 + 7 + iVar36 & 0xfffffff8U);
      uVar42 = (int)local_398 - 1;
    } while ((int)uVar40 < (int)uVar42);
    if ((local_494 != 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("CheckedDataOffset == DataOffset",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.h"
                            ,0x3dc,
                            L"GetSingleShaderBindings was not called in the order of ShaderFrequencies"
                           ), bVar14)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if ((int)uVar42 < 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.h"
                        ,0x3e5,L"Invalid shader binding frequency requested");
    if (bVar14) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                        ,0x1a,L"");
    if (bVar14) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_4f0._padding_ = 0x58;
    local_4f0.Data = (uchar *)0x0;
  }
  else {
    uVar40 = 0;
    if ((int)uVar42 < local_208.ShaderBindings.ShaderLayouts.ArrayNum) {
      uVar40 = ~uVar42 >> 0x1f;
    }
    if ((uVar40 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    FVar31 = (ForElementType<FMeshDrawShaderBindingsLayout>)&local_208;
    if (local_208.ShaderBindings.ShaderLayouts.AllocatorInstance.SecondaryData !=
        (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
      FVar31 = local_208.ShaderBindings.ShaderLayouts.AllocatorInstance.SecondaryData;
    }
    FMeshDrawShaderBindingsLayout::GetDataSizeBytes
              ((FMeshDrawShaderBindingsLayout *)((longlong)FVar31 + (uVar19 & 0xffffffff) * 8 + -8))
    ;
    pFVar37 = &local_208.ShaderBindings.Data;
    if (0x50 < local_208.ShaderBindings.Size) {
      pFVar37 = (FData *)local_208.ShaderBindings.Data.InlineStorage[0];
    }
    uVar40 = 0;
    if ((int)uVar42 < local_208.ShaderBindings.ShaderLayouts.ArrayNum) {
      uVar40 = ~uVar42 >> 0x1f;
    }
    if ((uVar40 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    FVar31 = (ForElementType<FMeshDrawShaderBindingsLayout>)&local_208;
    if (local_208.ShaderBindings.ShaderLayouts.AllocatorInstance.SecondaryData !=
        (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
      FVar31 = local_208.ShaderBindings.ShaderLayouts.AllocatorInstance.SecondaryData;
    }
    local_4f0._padding_ = *(longlong *)((uint *)((longlong)FVar31 + -8) + (uVar19 & 0xffffffff) * 2)
    ;
    local_4f0.Data = (uchar *)pFVar37;
  }
  pFVar11 = local_3c8;
  pFVar10 = local_480;
  FMeshMaterialShader::GetShaderBindings
            ((FMeshMaterialShader *)local_3c8,local_480,*(Type *)&local_480->field_0x8,local_488,
             local_3d8,this_01,(FMeshMaterialShaderElementData *)(local_350 + 0x10),&local_4f0);
  FVar41 = local_3a8;
  local_b8.AllocatorInstance.SecondaryData = (ForElementType<FVertexInputStream>)0x0;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 7;
  if ((*(int *)((longlong)local_3a8 + 0xa0) < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar12 = local_3c0;
  pFVar9 = local_488;
  FVar3.FeatureLevel = *(Type *)&pFVar10->field_0x8;
  FVar33 = FVar41;
  if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar41 + 0x98) !=
      (ForElementType<FMeshBatchElement>)0x0) {
    FVar33 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar41 + 0x98);
  }
  pFVar5 = *(FVertexFactory **)((longlong)FVar41 + 0xa8);
  if ((local_3c0->PointerTable == (FShaderMapPointerTable *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("PointerTable",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                          ,0x9b4,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FMeshMaterialShader::GetElementShaderBindings
            ((FMeshMaterialShader *)pFVar11,pFVar12->PointerTable,local_480,local_3b8,pFVar5,Default
             ,FVar3,pFVar9,(FMeshBatch *)FVar41,(FMeshBatchElement *)FVar33,
             (FMeshMaterialShaderElementData *)(local_350 + 0x10),&local_4f0,&local_b8);
  iVar36 = 0;
  local_208.TargetBuffer = local_388;
  local_474 = param_9 >> 2;
  if ((*(int *)((longlong)FVar41 + 0xa0) < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar33 = FVar41;
  if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar41 + 0x98) !=
      (ForElementType<FMeshBatchElement>)0x0) {
    FVar33 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar41 + 0x98);
  }
  local_498 = *(uint *)((longlong)FVar33 + 0x68);
  local_4f4 = param_8;
  if ((*(int *)((longlong)FVar41 + 0xa0) < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar33 = FVar41;
  if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar41 + 0x98) !=
      (ForElementType<FMeshBatchElement>)0x0) {
    FVar33 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar41 + 0x98);
  }
  if ((*(int *)((longlong)FVar41 + 0xa0) < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar32 = FVar41;
  if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar41 + 0x98) !=
      (ForElementType<FMeshBatchElement>)0x0) {
    FVar32 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar41 + 0x98);
  }
  if (*(uint *)((longlong)FVar32 + 0x68) < *(uint *)((longlong)FVar33 + 0x6c)) {
    if ((*(int *)((longlong)FVar41 + 0xa0) < 1) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    FVar33 = FVar41;
    if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar41 + 0x98) !=
        (ForElementType<FMeshBatchElement>)0x0) {
      FVar33 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar41 + 0x98);
    }
    if ((*(int *)((longlong)FVar41 + 0xa0) < 1) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    FVar32 = FVar41;
    if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar41 + 0x98) !=
        (ForElementType<FMeshBatchElement>)0x0) {
      FVar32 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar41 + 0x98);
    }
    local_4f4 = (*(int *)((longlong)FVar32 + 0x6c) - *(int *)((longlong)FVar33 + 0x68)) + 1;
  }
  local_490 = param_10 / 0xc - local_498;
  if (local_490 < local_4f4) {
    local_300 = &local_488;
    local_2f8 = &local_490;
    local_2f0 = &local_4f4;
    bVar14 = `FRayTracingDynamicGeometryUpdateManager::AddDispatchCommands'::__l21::<lambda_2>::
             operator()(&local_300);
    if (!bVar14) {
      local_4f4 = local_490;
    }
  }
  param_5 = local_380;
  local_208.NumCPUVertices = local_4f4;
  local_478 = (uint)(local_380->bUsingIndirectDraw != false);
  local_4d8._0_2_ = (pFVar11->UsingIndirectDraw).BufferIndex;
  local_4d8._2_2_ = (pFVar11->UsingIndirectDraw).BaseIndex;
  local_4d4 = (pFVar11->UsingIndirectDraw).NumBytes;
  if (local_4d4 != 0) {
    iVar30 = *(int *)(local_4f0._padding_ + 0x28);
    iVar17 = iVar30 + 7;
    if (iVar17 < 0) {
      iVar17 = iVar30 + 0xe;
    }
    psVar34 = *(short **)(local_4f0._padding_ + 0x30);
    pvVar35 = (void *)((longlong)(uchar **)local_4f0.Data +
                      (ulonglong)
                      (uint)((iVar17 >> 3) +
                            (*(int *)(local_4f0._padding_ + 0x18) +
                             *(int *)(local_4f0._padding_ + 8) + iVar30) * 8));
    if (((ulonglong)psVar34 & 1) != 0) {
      psVar34 = (short *)(((longlong)psVar34 >> 0x18) + (longlong)(local_4f0._padding_ + 0x30));
    }
    iVar30 = *(int *)(local_4f0._padding_ + 0x38);
    if (iVar30 < 0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar14) {
code_r0x00014530943d:
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    else if (0 < iVar30) {
      do {
        if ((iVar36 < 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (*psVar34 == (short)local_4d8) {
          puVar38 = *(uint **)(psVar34 + 4);
          if (((ulonglong)puVar38 & 1) != 0) {
            puVar38 = (uint *)(((longlong)puVar38 >> 0x18) + 8 + (longlong)psVar34);
          }
          iVar36 = *(int *)(psVar34 + 8);
          if ((iVar36 < 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar14)) goto code_r0x00014530943d;
          iVar30 = 0;
          if (0 < iVar36) goto LAB_145309452;
          break;
        }
        iVar36 = iVar36 + 1;
        pvVar35 = (void *)((longlong)pvVar35 + (ulonglong)(ushort)psVar34[1]);
        psVar34 = psVar34 + 0xc;
      } while (iVar36 < iVar30);
    }
  }
  goto LAB_14530950b;
  while( true ) {
    iVar30 = iVar30 + 1;
    pvVar35 = (void *)((longlong)pvVar35 + (ulonglong)(*puVar38 >> 0x10));
    puVar38 = puVar38 + 1;
    if (iVar36 <= iVar30) break;
LAB_145309452:
    if ((iVar30 < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar14)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (local_4d8._2_2_ == (short)*puVar38) {
      if (local_4d4 != 4) {
        local_378 = &local_4d8;
        `FMeshDrawSingleShaderBindings::Add<int>'::__l16::<lambda_1>::operator()(&local_378);
      }
      uVar40 = (uint)local_4d4;
      if (4 < local_4d4) {
        uVar40 = 4;
      }
      memcpy(pvVar35,&local_478,(ulonglong)uVar40);
      iVar36 = local_4d4 - uVar40;
      if (0 < iVar36) {
        iVar36 = 0;
      }
      memset((void *)((longlong)pvVar35 + (ulonglong)uVar40),0,(longlong)iVar36);
      break;
    }
  }
LAB_14530950b:
  iVar36 = 0;
  local_4c8._0_2_ = (pFVar11->NumVertices).BufferIndex;
  local_4c8._2_2_ = (pFVar11->NumVertices).BaseIndex;
  local_4c4 = (pFVar11->NumVertices).NumBytes;
  if (local_4c4 != 0) {
    iVar30 = *(int *)(local_4f0._padding_ + 0x28);
    iVar17 = iVar30 + 7;
    if (iVar17 < 0) {
      iVar17 = iVar30 + 0xe;
    }
    psVar34 = *(short **)(local_4f0._padding_ + 0x30);
    pvVar35 = (void *)((longlong)(uchar **)local_4f0.Data +
                      (ulonglong)
                      (uint)((iVar17 >> 3) +
                            (*(int *)(local_4f0._padding_ + 0x18) +
                             *(int *)(local_4f0._padding_ + 8) + iVar30) * 8));
    if (((ulonglong)psVar34 & 1) != 0) {
      psVar34 = (short *)(((longlong)psVar34 >> 0x18) + (longlong)(local_4f0._padding_ + 0x30));
    }
    iVar30 = *(int *)(local_4f0._padding_ + 0x38);
    if (iVar30 < 0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar14) {
code_r0x000145309643:
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    else if (0 < iVar30) {
      do {
        if ((iVar36 < 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (*psVar34 == (short)local_4c8) {
          puVar38 = *(uint **)(psVar34 + 4);
          if (((ulonglong)puVar38 & 1) != 0) {
            puVar38 = (uint *)(((longlong)puVar38 >> 0x18) + 8 + (longlong)psVar34);
          }
          iVar36 = *(int *)(psVar34 + 8);
          if ((iVar36 < 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar14)) goto code_r0x000145309643;
          iVar30 = 0;
          if (0 < iVar36) goto LAB_145309658;
          break;
        }
        iVar36 = iVar36 + 1;
        pvVar35 = (void *)((longlong)pvVar35 + (ulonglong)(ushort)psVar34[1]);
        psVar34 = psVar34 + 0xc;
      } while (iVar36 < iVar30);
    }
  }
LAB_145309712:
  iVar36 = 0;
  local_4b8._0_2_ = (pFVar11->MinVertexIndex).BufferIndex;
  local_4b8._2_2_ = (pFVar11->MinVertexIndex).BaseIndex;
  local_4b4 = (pFVar11->MinVertexIndex).NumBytes;
  if (local_4b4 != 0) {
    iVar30 = *(int *)(local_4f0._padding_ + 0x28);
    iVar17 = iVar30 + 7;
    if (iVar17 < 0) {
      iVar17 = iVar30 + 0xe;
    }
    psVar34 = *(short **)(local_4f0._padding_ + 0x30);
    pvVar35 = (void *)((longlong)(uchar **)local_4f0.Data +
                      (ulonglong)
                      (uint)((iVar17 >> 3) +
                            (*(int *)(local_4f0._padding_ + 0x18) +
                             *(int *)(local_4f0._padding_ + 8) + iVar30) * 8));
    if (((ulonglong)psVar34 & 1) != 0) {
      psVar34 = (short *)(((longlong)psVar34 >> 0x18) + (longlong)(local_4f0._padding_ + 0x30));
    }
    iVar30 = *(int *)(local_4f0._padding_ + 0x38);
    if (iVar30 < 0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar14) {
code_r0x00014530984d:
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    else if (0 < iVar30) {
      do {
        if ((iVar36 < 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (*psVar34 == (short)local_4b8) {
          puVar38 = *(uint **)(psVar34 + 4);
          if (((ulonglong)puVar38 & 1) != 0) {
            puVar38 = (uint *)(((longlong)puVar38 >> 0x18) + 8 + (longlong)psVar34);
          }
          iVar36 = *(int *)(psVar34 + 8);
          if ((iVar36 < 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar14)) goto code_r0x00014530984d;
          iVar30 = 0;
          if (0 < iVar36) goto LAB_145309860;
          break;
        }
        iVar36 = iVar36 + 1;
        pvVar35 = (void *)((longlong)pvVar35 + (ulonglong)(ushort)psVar34[1]);
        psVar34 = psVar34 + 0xc;
      } while (iVar36 < iVar30);
    }
  }
LAB_145309916:
  local_4a8._0_2_ = (pFVar11->PrimitiveId).BufferIndex;
  local_4a8._2_2_ = (pFVar11->PrimitiveId).BaseIndex;
  local_4a4 = (pFVar11->PrimitiveId).NumBytes;
  if (local_4a4 != 0) {
    iVar36 = *(int *)(local_4f0._padding_ + 0x28);
    iVar30 = iVar36 + 7;
    if (iVar30 < 0) {
      iVar30 = iVar36 + 0xe;
    }
    pvVar35 = (void *)((longlong)(uchar **)local_4f0.Data +
                      (ulonglong)
                      (uint)((iVar30 >> 3) +
                            (*(int *)(local_4f0._padding_ + 0x18) +
                             *(int *)(local_4f0._padding_ + 8) + iVar36) * 8));
    TArrayView<FShaderLooseParameterBufferInfo_const_,int>::
    TArrayView<FShaderLooseParameterBufferInfo_const_,int><TArray<FShaderLooseParameterBufferInfo,TMemoryImageAllocator<0>_>_const_&,TArray<FShaderLooseParameterBufferInfo,TMemoryImageAllocator<0>_>_>
              (&local_330,
               (TArray<FShaderLooseParameterBufferInfo,TMemoryImageAllocator<0>_> *)
               (local_4f0._padding_ + 0x30));
    iVar36 = local_330.ArrayNum;
    uVar40 = 0;
    if (0 < local_330.ArrayNum) {
      lVar20 = 0;
      do {
        uVar42 = 0;
        if ((int)uVar40 < iVar36) {
          uVar42 = ~uVar40 >> 0x1f;
        }
        if ((uVar42 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        psVar34 = (short *)((longlong)&(local_330.DataPtr)->BaseIndex + lVar20);
        if (*psVar34 == (short)local_4a8) {
          puVar38 = *(uint **)(psVar34 + 4);
          if (((ulonglong)puVar38 & 1) != 0) {
            puVar38 = (uint *)(((longlong)puVar38 >> 0x18) + 8 + (longlong)psVar34);
          }
          iVar36 = *(int *)(psVar34 + 8);
          if ((iVar36 < 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar30 = 0;
          if (0 < iVar36) goto LAB_145309a51;
          break;
        }
        uVar40 = uVar40 + 1;
        pvVar35 = (void *)((longlong)pvVar35 + (ulonglong)(ushort)psVar34[1]);
        lVar20 = lVar20 + 0x18;
      } while ((int)uVar40 < iVar36);
    }
  }
LAB_145309b0e:
  local_458._0_2_ = (pFVar11->OutputVertexBaseIndex).BufferIndex;
  local_458._2_2_ = (pFVar11->OutputVertexBaseIndex).BaseIndex;
  local_454 = (pFVar11->OutputVertexBaseIndex).NumBytes;
  FMeshDrawSingleShaderBindings::Add<unsigned_int>(&local_4f0,SUB86(&local_458,0),&local_474);
  local_470 = (uint)(param_5->bApplyWorldPositionOffset != false);
  local_448._0_2_ = (pFVar11->bApplyWorldPositionOffset).BufferIndex;
  local_448._2_2_ = (pFVar11->bApplyWorldPositionOffset).BaseIndex;
  local_444 = (pFVar11->bApplyWorldPositionOffset).NumBytes;
  FMeshDrawSingleShaderBindings::Add<int>(&local_4f0,SUB86(&local_448,0),(int *)&local_470);
  local_438._0_2_ = (pFVar11->InstanceId).BufferIndex;
  local_438._2_2_ = (pFVar11->InstanceId).BaseIndex;
  local_434 = (pFVar11->InstanceId).NumBytes;
  FMeshDrawSingleShaderBindings::Add<unsigned_int>
            (&local_4f0,SUB86(&local_438,0),&param_5->InstanceId);
  local_428._0_2_ = (pFVar11->WorldToInstance).BufferIndex;
  local_428._2_2_ = (pFVar11->WorldToInstance).BaseIndex;
  local_424 = (pFVar11->WorldToInstance).NumBytes;
  FMeshDrawSingleShaderBindings::Add<UE::Math::TMatrix<float>_>
            (&local_4f0,SUB86(&local_428,0),&param_5->WorldToInstance);
  if (param_5->bAlphaMasked == false) {
    local_3f8._0_2_ = (pFVar11->MaxNumThreads).BufferIndex;
    local_3f8._2_2_ = (pFVar11->MaxNumThreads).BaseIndex;
    local_3f4 = (pFVar11->MaxNumThreads).NumBytes;
    FMeshDrawSingleShaderBindings::Add<unsigned_int>(&local_4f0,SUB86(&local_3f8,0),&local_4f4);
    local_3e8._0_2_ = (pFVar11->IndexBufferOffset).BufferIndex;
    local_3e8._2_2_ = (pFVar11->IndexBufferOffset).BaseIndex;
    local_3e4 = (pFVar11->IndexBufferOffset).NumBytes;
    local_46c[1] = 0;
    FMeshDrawSingleShaderBindings::Add<int>(&local_4f0,SUB86(&local_3e8,0),(int *)(local_46c + 1));
    local_208.NumThreads = param_8;
  }
  else {
    local_48c = param_5->NumTriangles;
    pFVar6 = (param_5->IndexBuffer).Reference;
    uVar40 = (pFVar6->Desc).Stride;
    if ((*(int *)((longlong)FVar41 + 0xa0) < 1) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    FVar33 = FVar41;
    if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar41 + 0x98) !=
        (ForElementType<FMeshBatchElement>)0x0) {
      FVar33 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar41 + 0x98);
    }
    lStack_318 = 0;
    local_46c[0] = (param_5->Geometry->Initializer).IndexBufferOffset / uVar40 +
                   *(int *)((longlong)FVar33 + 0x58);
    bVar16 = 0x20;
    if (uVar40 == 4) {
      bVar16 = 0x1c;
    }
    local_320._0_2_ = (ushort)bVar16 << 8;
    local_320 = (ulonglong)CONCAT12(1,(short)local_320);
    TVar26 = FRHICommandListBase::CreateShaderResourceView
                       (local_358,(FRHIBuffer *)local_350,(FInitializer *)pFVar6);
    FVar4 = pFVar11->IndexBuffer;
    lVar20 = *(longlong *)TVar26.Reference;
    if (FVar4.NumResources != '\0') {
      if ((lVar20 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("Value",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                              ,0x9a,L"Attempted to set null SRV on slot %u"), bVar14)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pTVar27 = MakeArrayView<TArray<FShaderResourceParameterInfo,TMemoryImageAllocator<0>_>_const_&,TArray<FShaderResourceParameterInfo,TMemoryImageAllocator<0>_>_>
                          (&local_218,
                           (TArray<FShaderResourceParameterInfo,TMemoryImageAllocator<0>_> *)
                           (local_4f0._padding_ + 0x20));
      iVar36 = FMeshDrawSingleShaderBindings::FindSortedArrayBaseIndex<FShaderResourceParameterInfo>
                         (&local_4f0,pTVar27,(uint)FVar4 & 0xffff);
      if (-1 < iVar36) {
        uVar42 = iVar36 >> 0x1f & 7;
        uVar40 = iVar36 + uVar42;
        uVar19 = (ulonglong)(uint)((int)uVar40 >> 3);
        iVar30 = *(int *)(local_4f0._padding_ + 0x28) + *(int *)(local_4f0._padding_ + 0x18) +
                 *(int *)(local_4f0._padding_ + 8);
        *(byte *)((longlong)(uchar **)local_4f0.Data + uVar19 + (uint)(iVar30 * 8)) =
             *(byte *)((longlong)(uchar **)local_4f0.Data + uVar19 + (uint)(iVar30 * 8)) |
             (byte)(1 << ((uVar40 & 7) - uVar42 & 0x1f));
        *(longlong *)
         ((longlong)(uchar **)local_4f0.Data +
         (longlong)iVar36 * 8 +
         (ulonglong)
         (uint)((*(int *)(local_4f0._padding_ + 0x18) + *(int *)(local_4f0._padding_ + 8)) * 8)) =
             lVar20;
      }
    }
    if ((FRHIResource *)local_350._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_350._0_8_);
    }
    local_418._0_2_ = (pFVar11->MaxNumThreads).BufferIndex;
    local_418._2_2_ = (pFVar11->MaxNumThreads).BaseIndex;
    local_414 = (pFVar11->MaxNumThreads).NumBytes;
    FMeshDrawSingleShaderBindings::Add<unsigned_int>(&local_4f0,SUB86(&local_418,0),&local_48c);
    local_408._0_2_ = (pFVar11->IndexBufferOffset).BufferIndex;
    local_408._2_2_ = (pFVar11->IndexBufferOffset).BaseIndex;
    local_404 = (pFVar11->IndexBufferOffset).NumBytes;
    FMeshDrawSingleShaderBindings::Add<unsigned_int>(&local_4f0,SUB86(&local_408,0),local_46c);
    local_208.NumThreads = local_48c;
  }
  FMeshDrawShaderBindings::Finalize(&local_208.ShaderBindings,&local_2e8);
  if (local_208.MaterialShader.ShaderContent != (FRayTracingDynamicGeometryConverterCS *)0x0) {
    this_00 = ((local_208.MaterialShader.ShaderMap)->Resource).Reference;
    if ((this_00 == (FShaderMapResource *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Resource",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                            ,0x426,L""), bVar14)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar36 = *(int *)((longlong)&(local_208.MaterialShader.ShaderContent)->_padding_ + 4);
    aVar28 = (this_00->RHIShaders).Ptr[iVar36];
    if ((aVar28 == (atomic<FRHIShader_*>)0x0) &&
       (aVar28 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(this_00,iVar36,true),
       pFVar11 = local_208.MaterialShader.ShaderContent, aVar28 == (atomic<FRHIShader_*>)0x0)) {
      if (4 < (byte)LogShaders._0_1_) {
        pFVar29 = FShaderMapBase::GetPointerTable(local_208.MaterialShader.ShaderMap);
        FShader::GetType((FShader *)pFVar11,pFVar29);
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)
                   &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FRayTracingDynamicGeometryConverterCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                    ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
    }
    else {
      EVar18 = PipelineStateCache::CheckPipelineStateInCache((FRHIComputeShader *)aVar28);
      PSOCollectorStats::CheckComputePipelineStateInCache
                ((FRHIComputeShader *)aVar28,EVar18,local_3d8,local_46c[2]);
    }
  }
  uVar13 = local_350._8_8_;
  local_208.Geometry = param_5->Geometry;
  local_208.MinVertexIndex = local_498;
  local_208.bApplyWorldPositionOffset = param_5->bApplyWorldPositionOffset;
  pFVar7 = (FMeshComputeDispatchCommand *)
           (((TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_> *)local_350._8_8_)->
           AllocatorInstance).Data;
  if (((pFVar7 <= &local_208) &&
      (&local_208 <
       pFVar7 + ((TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_> *)local_350._8_8_)
                ->ArrayMax)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar14)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar36 = ((TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_> *)uVar13)->ArrayNum;
  piVar1 = &((TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_> *)uVar13)->ArrayMax;
  if (iVar36 == *piVar1) {
    iVar36 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x8a8,(ForAnyElementType *)uVar13,piVar1);
  }
  ((TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_> *)uVar13)->ArrayNum = iVar36 + 1
  ;
  FMeshComputeDispatchCommand::FMeshComputeDispatchCommand
            ((FMeshComputeDispatchCommand *)
             ((((TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_> *)uVar13)->
              AllocatorInstance).Data + (longlong)iVar36 * 0xa8),&local_208);
  if (local_b8.AllocatorInstance.SecondaryData != (ForElementType<FVertexInputStream>)0x0) {
    FMemory::Free((void *)local_b8.AllocatorInstance.SecondaryData);
  }
  FMeshDrawShaderBindings::~FMeshDrawShaderBindings(&local_208.ShaderBindings);
  param_2 = local_480;
  FVar33 = local_3b0;
  goto LAB_145309ffe;
  while( true ) {
    iVar30 = iVar30 + 1;
    pvVar35 = (void *)((longlong)pvVar35 + (ulonglong)(*puVar38 >> 0x10));
    puVar38 = puVar38 + 1;
    if (iVar36 <= iVar30) break;
LAB_145309658:
    if ((iVar30 < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar14)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (local_4c8._2_2_ == (short)*puVar38) {
      if (local_4c4 != 4) {
        local_370 = &local_4c8;
        `FMeshDrawSingleShaderBindings::Add<unsigned_int>'::__l16::<lambda_1>::operator()
                  (&local_370);
      }
      uVar40 = (uint)local_4c4;
      if (4 < local_4c4) {
        uVar40 = 4;
      }
      memcpy(pvVar35,&local_4f4,(ulonglong)uVar40);
      iVar36 = local_4c4 - uVar40;
      if (0 < iVar36) {
        iVar36 = 0;
      }
      memset((void *)((longlong)pvVar35 + (ulonglong)uVar40),0,(longlong)iVar36);
      break;
    }
  }
  goto LAB_145309712;
  while( true ) {
    iVar30 = iVar30 + 1;
    pvVar35 = (void *)((longlong)pvVar35 + (ulonglong)(*puVar38 >> 0x10));
    puVar38 = puVar38 + 1;
    if (iVar36 <= iVar30) break;
LAB_145309860:
    if ((iVar30 < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar14)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (local_4b8._2_2_ == (short)*puVar38) {
      if (local_4b4 != 4) {
        local_368 = &local_4b8;
        `FMeshDrawSingleShaderBindings::Add<unsigned_int>'::__l16::<lambda_1>::operator()
                  (&local_368);
      }
      uVar40 = (uint)local_4b4;
      if (4 < local_4b4) {
        uVar40 = 4;
      }
      memcpy(pvVar35,&local_498,(ulonglong)uVar40);
      iVar36 = local_4b4 - uVar40;
      if (0 < iVar36) {
        iVar36 = 0;
      }
      memset((void *)((longlong)pvVar35 + (ulonglong)uVar40),0,(longlong)iVar36);
      break;
    }
  }
  goto LAB_145309916;
  while( true ) {
    iVar30 = iVar30 + 1;
    pvVar35 = (void *)((longlong)pvVar35 + (ulonglong)(*puVar38 >> 0x10));
    puVar38 = puVar38 + 1;
    if (iVar36 <= iVar30) break;
LAB_145309a51:
    if ((iVar30 < 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar14)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (local_4a8._2_2_ == (short)*puVar38) {
      if (local_4a4 != 4) {
        local_360 = &local_4a8;
        `FMeshDrawSingleShaderBindings::Add<unsigned_int>'::__l16::<lambda_1>::operator()
                  (&local_360);
      }
      uVar40 = (uint)local_4a4;
      if (4 < local_4a4) {
        uVar40 = 4;
      }
      memcpy(pvVar35,&param_6,(ulonglong)uVar40);
      iVar36 = local_4a4 - uVar40;
      if (0 < iVar36) {
        iVar36 = 0;
      }
      memset((void *)((longlong)pvVar35 + (ulonglong)uVar40),0,(longlong)iVar36);
      break;
    }
  }
  goto LAB_145309b0e;
LAB_145308b29:
  pFVar24 = (FMaterialRenderProxy *)
            (**(code **)(pFVar24->_padding_ + 0x38))(pFVar24,*(undefined4 *)&param_2->field_0x8);
  if (pFVar24 == (FMaterialRenderProxy *)0x0) goto code_r0x000145308b48;
  goto LAB_145308980;
code_r0x000145308b48:
  FVar41 = (ForElementType<FMeshBatchElement>)((longlong)FVar41 + 0xe0);
  uVar19 = (ulonglong)local_460;
  FVar33 = local_3b0;
  local_3d8 = pFVar24;
  goto LAB_1453088f9;
}

// AddDynamicGeometryToUpdate @ 14530a040

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FRayTracingDynamicGeometryUpdateManager::AddDynamicGeometryToUpdate
          (FRayTracingDynamicGeometryUpdateManager *this,FRHICommandListBase *param_1,
          FScene *param_2,FSceneView *param_3,FPrimitiveSceneProxy *param_4,
          FRayTracingDynamicGeometryUpdateParams *param_5,uint param_6)

{
  int *piVar1;
  TArray<FRayTracingGeometrySegment,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FRayTracingGeometrySegment,TSizedDefaultAllocator<32>_> *pTVar3;
  longlong lVar4;
  EGeometryStateFlags EVar5;
  FRayTracingGeometry *this_00;
  TUniformBufferRef<FViewUniformShaderParameters> this_01;
  FRHIBuffer *pFVar6;
  FRHIBuffer *this_02;
  FRayTracingDynamicGeometryBuildParams *pFVar7;
  code *pcVar8;
  ForAnyElementType FVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  long64 lVar16;
  uint uVar17;
  undefined1 *puVar18;
  TUniformBufferRef<FViewUniformShaderParameters> *pTVar19;
  FScriptContainerElement *pFVar20;
  TArray<TRefCountPtr<FRHIUniformBuffer>,TSizedDefaultAllocator<32>_> *pTVar21;
  uint uVar22;
  FRWBuffer *pFVar23;
  undefined1 local_108;
  undefined1 local_107 [3];
  uint local_104;
  uint local_100;
  FRWBuffer *local_f8;
  FRayTracingDynamicGeometryBuildParams local_f0;
  FRHIResource *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  uint local_b4;
  undefined4 local_b0;
  uint local_ac;
  undefined2 local_a8;
  FScriptContainerElement local_a6;
  undefined1 local_a0 [8];
  TUniformBufferRef<FViewUniformShaderParameters> local_98;
  TUniformBufferRef<FInstancedViewUniformShaderParameters> local_90;
  TUniformBufferRef<FViewUniformShaderParameters> *local_88;
  TUniformBufferRef<FInstancedViewUniformShaderParameters> *local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  
  local_100 = param_5->NumVertices;
  this_00 = param_5->Geometry;
  uVar22 = param_5->VertexBufferSize;
  if (param_5->bAlphaMasked != false) {
    if (((param_5->IndexBuffer).Reference == (FRHIBuffer *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("UpdateParams.IndexBuffer",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingDynamicGeometryUpdateManager.cpp"
                            ,0x135,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((param_5->bUsingIndirectDraw != false) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!UpdateParams.bUsingIndirectDraw",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingDynamicGeometryUpdateManager.cpp"
                            ,0x136,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_100 = param_5->NumTriangles * 3;
    uVar22 = param_5->NumTriangles * 0x24;
  }
  iVar13 = (this->ReferencedUniformBuffers).ArrayNum;
  pTVar21 = &this->ReferencedUniformBuffers;
  pFVar23 = param_5->Buffer;
  local_104 = 0;
  bVar10 = false;
  local_f8 = pFVar23;
  if (iVar13 != 0) {
    uVar17 = 0;
    if ((int)(iVar13 - 1U) < iVar13) {
      uVar17 = ~(iVar13 - 1U) >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (*(TUniformBufferRef<FViewUniformShaderParameters> *)
         ((pTVar21->AllocatorInstance).Data +
         (longlong)(this->ReferencedUniformBuffers).ArrayNum * 8 + -8) == param_3->ViewUniformBuffer
       ) goto LAB_14530a24b;
  }
  pTVar19 = &param_3->ViewUniformBuffer;
  pFVar15 = (pTVar21->AllocatorInstance).Data;
  if (((pFVar15 <= pTVar19) &&
      (pTVar19 < pFVar15 + (longlong)(this->ReferencedUniformBuffers).ArrayMax * 8)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar13 = (this->ReferencedUniformBuffers).ArrayNum;
  piVar1 = &(this->ReferencedUniformBuffers).ArrayMax;
  if (iVar13 == *piVar1) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar21->AllocatorInstance,piVar1);
    (this->ReferencedUniformBuffers).ArrayNum = iVar13;
  }
  (this->ReferencedUniformBuffers).ArrayNum = iVar13 + 1;
  pFVar15 = (pTVar21->AllocatorInstance).Data;
  *(undefined8 *)(pFVar15 + (longlong)iVar13 * 8) = 0;
  this_01 = *pTVar19;
  *(TUniformBufferRef<FViewUniformShaderParameters> *)(pFVar15 + (longlong)iVar13 * 8) = this_01;
  pFVar23 = local_f8;
  if (this_01 != (TUniformBufferRef<FViewUniformShaderParameters>)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_01);
    pFVar23 = local_f8;
  }
LAB_14530a24b:
  local_f0.ViewUniformBuffer = *(FRHIUniformBuffer **)&param_3->ViewUniformBuffer;
  local_f0.DispatchCommands.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f0.DispatchCommands.ArrayNum = 0;
  local_f0.DispatchCommands.ArrayMax = 0;
  uVar17 = (param_5->MeshBatches).ArrayNum;
  local_f0.Geometry = (FRayTracingGeometry *)0x0;
  local_f0.SegmentOffset = -1;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  if (0 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa8,8,uVar17,(ForAnyElementType *)&local_f0,0,&local_f0.DispatchCommands.ArrayMax);
  }
  local_98 = param_3->ViewUniformBuffer;
  local_90 = param_3->InstancedViewUniformBuffer;
  uVar17 = ((uint)((ulonglong)local_98 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_98 >> 4)) *
           -0x7a143595;
  uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
  uVar17 = uVar17 >> 0x10 ^ uVar17;
  if (*(int *)&(this->InstancedViewUniformBuffers).field_0x8 !=
      *(int *)&(this->InstancedViewUniformBuffers).field_0x34) {
    puVar18 = *(undefined1 **)&(this->InstancedViewUniformBuffers).field_0x40;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = &(this->InstancedViewUniformBuffers).field_0x38;
    }
    iVar13 = *(int *)(puVar18 +
                     (ulonglong)
                     (*(int *)&(this->InstancedViewUniformBuffers).field_0x48 - 1U & uVar17) * 4);
    if (iVar13 != -1) {
      do {
        lVar4 = *(longlong *)&this->InstancedViewUniformBuffers + (longlong)iVar13 * 0x18;
        if (*(TUniformBufferRef<FViewUniformShaderParameters> *)
             (*(longlong *)&this->InstancedViewUniformBuffers + (longlong)iVar13 * 0x18) == local_98
           ) {
          if (lVar4 != 0) goto LAB_14530a36c;
          break;
        }
        iVar13 = *(int *)(lVar4 + 0x10);
      } while (iVar13 != -1);
    }
  }
  local_88 = &local_98;
  local_80 = &local_90;
  TSet<TTuple<FRHIUniformBuffer_*,FRHIUniformBuffer_*>,TDefaultMapHashableKeyFuncs<FRHIUniformBuffer_*,FRHIUniformBuffer_*,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TPairInitializer<FRHIUniformBuffer_*_&&,FRHIUniformBuffer_*_&&>_>
            ((TSet<TTuple<FRHIUniformBuffer_*,FRHIUniformBuffer_*>,TDefaultMapHashableKeyFuncs<FRHIUniformBuffer_*,FRHIUniformBuffer_*,0>,FDefaultSetAllocator>
              *)&this->InstancedViewUniformBuffers,(uint)local_a0,
             (TPairInitializer<FRHIUniformBuffer_*_&&,FRHIUniformBuffer_*_&&> *)(ulonglong)uVar17,
             (bool *)&local_88);
LAB_14530a36c:
  uVar17 = local_100;
  if ((param_5->MeshBatches).ArrayNum != 0) {
    bVar10 = pFVar23 == (FRWBuffer *)0x0;
    if (bVar10) {
      local_f8 = AllocateSharedBuffer(this,param_1,uVar22,&local_104);
    }
    pFVar23 = local_f8;
    if (((local_104 & 0xf) != 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsAligned(VertexBufferOffset, 16)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingDynamicGeometryUpdateManager.cpp"
                            ,0x154,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar17 = local_100;
    AddDispatchCommands(this,param_1,param_2,param_3,param_4,param_5,param_6,pFVar23,local_100,
                        local_104,uVar22,&local_f0);
  }
  pFVar23 = local_f8;
  bVar11 = true;
  if (((!bVar10) && (local_f8 != (FRWBuffer *)0x0)) && (local_f8->NumBytes != uVar22)) {
    FRWBuffer::Initialize
              (local_f8,param_1,
               L"FRayTracingDynamicGeometryUpdateManager::RayTracingDynamicVertexBuffer",4,
               uVar22 >> 2,PF_R32_FLOAT,UAVCompute,ShaderResource|UnorderedAccess,
               (FResourceArrayUploadInterface *)0x0);
    bVar11 = false;
  }
  bVar12 = FRayTracingGeometry::IsValid(this_00);
  if ((!bVar12) || (bVar12 = FRayTracingGeometry::IsEvicted(this_00), bVar12)) {
    bVar11 = false;
  }
  bVar12 = false;
  if ((this_00->Initializer).bAllowUpdate != false) {
    bVar12 = bVar11;
  }
  if (((int)this_00->_padding_ == -1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Geometry.IsInitialized()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingDynamicGeometryUpdateManager.cpp"
                          ,0x16c,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (((this_00->Initializer).TotalPrimitiveCount != param_5->NumTriangles) &&
     (param_5->NumTriangles != 0)) {
    if (1 < (this_00->Initializer).Segments.ArrayNum) {
      FDebugName::ToString(&(this_00->Initializer).DebugName,&local_78);
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Geometry.Initializer.Segments.Num() <= 1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingDynamicGeometryUpdateManager.cpp"
                          ,0x170,
                          L"Dynamic ray tracing geometry \'%s\' has an unexpected number of segments."
                         );
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (bVar11) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    pTVar2 = &(this_00->Initializer).Segments;
    (this_00->Initializer).TotalPrimitiveCount = param_5->NumTriangles;
    DestructItems<FRayTracingGeometrySegment,int>
              ((FRayTracingGeometrySegment *)(pTVar2->AllocatorInstance).Data,
               (this_00->Initializer).Segments.ArrayNum);
    iVar13 = (this_00->Initializer).Segments.ArrayMax;
    piVar1 = &(this_00->Initializer).Segments.ArrayMax;
    (this_00->Initializer).Segments.ArrayNum = 0;
    iVar14 = 0;
    if (iVar13 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,&pTVar2->AllocatorInstance,0,piVar1);
      iVar14 = *piVar1;
    }
    pFVar15 = (pTVar2->AllocatorInstance).Data;
    local_c8 = (FRHIResource *)0x0;
    local_c0 = 3;
    local_ac = param_5->NumTriangles;
    local_b8 = 0xc;
    local_b0 = 0;
    local_a8 = 0x100;
    local_a6 = (FScriptContainerElement)0x1;
    local_b4 = uVar17;
    if (((pFVar15 <= (FScriptContainerElement *)&local_c8) &&
        ((FScriptContainerElement *)&local_c8 < pFVar15 + (longlong)iVar14 * 0x28)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar13 = (this_00->Initializer).Segments.ArrayNum;
    if (iVar13 == *piVar1) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x828,&pTVar2->AllocatorInstance,&(this_00->Initializer).Segments.ArrayMax
                         );
    }
    (this_00->Initializer).Segments.ArrayNum = iVar13 + 1;
    pFVar15 = (pTVar2->AllocatorInstance).Data;
    *(undefined8 *)(pFVar15 + (longlong)iVar13 * 0x28) = 0;
    pFVar15 = pFVar15 + (longlong)iVar13 * 0x28;
    *(FRHIResource **)pFVar15 = local_c8;
    if (local_c8 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(local_c8);
    }
    bVar12 = false;
    *(undefined4 *)(pFVar15 + 8) = (undefined4)local_c0;
    *(undefined4 *)(pFVar15 + 0xc) = local_c0._4_4_;
    *(undefined4 *)(pFVar15 + 0x10) = local_b8;
    *(uint *)(pFVar15 + 0x14) = local_b4;
    *(undefined4 *)(pFVar15 + 0x18) = local_b0;
    *(uint *)(pFVar15 + 0x1c) = local_ac;
    pFVar15[0x20] = local_a8._0_1_;
    pFVar15[0x21] = local_a8._1_1_;
    pFVar15[0x22] = local_a6;
    if (local_c8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_c8);
    }
  }
  if ((param_5->bAlphaMasked != false) &&
     (pFVar6 = (this_00->Initializer).IndexBuffer.Reference, pFVar6 != (FRHIBuffer *)0x0)) {
    (this_00->Initializer).IndexBuffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar6);
  }
  iVar13 = (this_00->Initializer).Segments.ArrayNum;
  pFVar20 = (this_00->Initializer).Segments.AllocatorInstance.Data;
  pFVar15 = pFVar20 + (longlong)iVar13 * 0x28;
  if (pFVar23 == (FRWBuffer *)0x0) {
    while( true ) {
      if ((this_00->Initializer).Segments.ArrayNum != iVar13) {
        local_107[0] = 0;
        `TCheckedPointerIterator<FRayTracingGeometrySegment,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_107);
      }
      if (pFVar20 == pFVar15) break;
      if (*(longlong *)pFVar20 == 0) {
        FDebugName::ToString(&(this_00->Initializer).DebugName,&local_68);
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Segment.VertexBuffer != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingDynamicGeometryUpdateManager.cpp"
                            ,0x18c,
                            L"Dynamic ray tracing geometry \'%s\' has a segment without a valid VertexBuffer."
                           );
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      pFVar20 = pFVar20 + 0x28;
    }
  }
  else {
    while( true ) {
      if ((this_00->Initializer).Segments.ArrayNum != iVar13) {
        local_108 = 0;
        `TCheckedPointerIterator<FRayTracingGeometrySegment,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_108);
      }
      if (pFVar20 == pFVar15) break;
      pFVar6 = (pFVar23->Buffer).Reference;
      this_02 = *(FRHIBuffer **)pFVar20;
      if (this_02 != pFVar6) {
        *(FRHIBuffer **)pFVar20 = pFVar6;
        if (pFVar6 != (FRHIBuffer *)0x0) {
          FRHIResource::AddRef((FRHIResource *)pFVar6);
        }
        if (this_02 != (FRHIBuffer *)0x0) {
          FRHIResource::Release((FRHIResource *)this_02);
        }
      }
      *(uint *)(pFVar20 + 0xc) = local_104;
      pFVar20 = pFVar20 + 0x28;
    }
  }
  if (!bVar12) {
    if (((int)(this_00->RawData)._padding_ != 0) ||
       ((this_00->Initializer).OfflineData != (FResourceArrayUploadInterface *)0x0)) {
      FDebugName::ToString(&(this_00->Initializer).DebugName,&local_58);
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Geometry.RawData.IsEmpty() && Geometry.Initializer.OfflineData == nullptr"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingDynamicGeometryUpdateManager.cpp"
                          ,0x193,
                          L"Dynamic ray tracing geometry \'%s\' is not expected to have offline acceleration structure data."
                         );
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (bVar11) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    FRayTracingGeometry::CreateRayTracingGeometry(this_00,param_1,Skip);
  }
  EVar5 = this_00->GeometryState;
  local_f0.Geometry = param_5->Geometry;
  if (bVar10) {
    piVar1 = &(this->Segments).ArrayNum;
    local_f0.SegmentOffset = *piVar1;
    pTVar2 = &this->Segments;
    pTVar3 = &(this_00->Initializer).Segments;
    if ((pTVar2 == pTVar3) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x96e,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar13 = (this_00->Initializer).Segments.ArrayNum;
    if (iVar13 != 0) {
      iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x28,8,iVar13,&pTVar2->AllocatorInstance,piVar1,&(this->Segments).ArrayMax
                         );
      ConstructItems<FRayTracingGeometrySegment,FRayTracingGeometrySegment,int>
                ((pTVar2->AllocatorInstance).Data + (longlong)iVar14 * 0x28,
                 (FRayTracingGeometrySegment *)(pTVar3->AllocatorInstance).Data,iVar13);
    }
  }
  this_00->GeometryState = this_00->GeometryState & ~RequiresBuild;
  if ((EVar5 & RequiresBuild) == Invalid) {
    pFVar7 = (FRayTracingDynamicGeometryBuildParams *)
             (this->DynamicGeometryUpdates).AllocatorInstance.Data;
    if (((pFVar7 <= &local_f0) && (&local_f0 < pFVar7 + (this->DynamicGeometryUpdates).ArrayMax)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar13 = (this->DynamicGeometryUpdates).ArrayNum;
    piVar1 = &(this->DynamicGeometryUpdates).ArrayMax;
    if (iVar13 == *piVar1) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x828,&(this->DynamicGeometryUpdates).AllocatorInstance,piVar1);
    }
    (this->DynamicGeometryUpdates).ArrayNum = iVar13 + 1;
    pFVar15 = (this->DynamicGeometryUpdates).AllocatorInstance.Data;
  }
  else {
    pFVar7 = (FRayTracingDynamicGeometryBuildParams *)
             (this->DynamicGeometryBuilds).AllocatorInstance.Data;
    if (((pFVar7 <= &local_f0) && (&local_f0 < pFVar7 + (this->DynamicGeometryBuilds).ArrayMax)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar13 = (this->DynamicGeometryBuilds).ArrayNum;
    piVar1 = &(this->DynamicGeometryBuilds).ArrayMax;
    if (iVar13 == *piVar1) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x828,&(this->DynamicGeometryBuilds).AllocatorInstance,piVar1);
    }
    (this->DynamicGeometryBuilds).ArrayNum = iVar13 + 1;
    pFVar15 = (this->DynamicGeometryBuilds).AllocatorInstance.Data;
  }
  FVar9.Data = local_f0.DispatchCommands.AllocatorInstance.Data;
  pFVar15 = pFVar15 + (longlong)iVar13 * 0x28;
  *(FScriptContainerElement **)&pFVar15->field_0x0 = (FScriptContainerElement *)0x0;
  iVar13 = local_f0.DispatchCommands.ArrayNum;
  *(int *)&pFVar15[8].field_0x0 = local_f0.DispatchCommands.ArrayNum;
  if (local_f0.DispatchCommands.ArrayNum == 0) {
    *(int *)(pFVar15 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa8,8,local_f0.DispatchCommands.ArrayNum,0,(ForAnyElementType *)pFVar15,
               local_f0.DispatchCommands.ArrayNum,(int *)(pFVar15 + 0xc));
    ConstructItems<FMeshComputeDispatchCommand,FMeshComputeDispatchCommand,int>
              (*(FScriptContainerElement **)&pFVar15->field_0x0,
               (FMeshComputeDispatchCommand *)FVar9.Data,iVar13);
  }
  *(FRHIUniformBuffer **)&pFVar15[0x10].field_0x0 = local_f0.ViewUniformBuffer;
  *(FRayTracingGeometry **)&pFVar15[0x18].field_0x0 = local_f0.Geometry;
  *(int *)&pFVar15[0x20].field_0x0 = local_f0.SegmentOffset;
  if (bVar10) {
    lVar16 = this->SharedBufferGenerationID;
  }
  else {
    lVar16 = -1;
  }
  this_00->DynamicGeometrySharedBufferGenerationID = lVar16;
  DestructItems<FMeshComputeDispatchCommand,int>
            ((FMeshComputeDispatchCommand *)local_f0.DispatchCommands.AllocatorInstance.Data,
             local_f0.DispatchCommands.ArrayNum);
  if ((FMeshComputeDispatchCommand *)local_f0.DispatchCommands.AllocatorInstance.Data !=
      (FMeshComputeDispatchCommand *)0x0) {
    FMemory::Free(local_f0.DispatchCommands.AllocatorInstance.Data);
  }
  return;
}

// AddDynamicGeometryUpdatePass @ 14530ab50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FRayTracingDynamicGeometryUpdateManager::AddDynamicGeometryUpdatePass
          (FRayTracingDynamicGeometryUpdateManager *this,FRDGBuilder *param_1,ERDGPassFlags param_2,
          TRDGUniformBuffer<FSceneUniformParameters> **param_3,bool param_4,ERHIPipeline param_5,
          FRDGBuffer **param_6)

{
  int *piVar1;
  ulonglong uVar2;
  char cVar3;
  uint uVar4;
  FRHIResource *this_00;
  FRHIUniformBuffer *this_01;
  TRDGUniformBuffer<FSceneUniformParameters> *pTVar5;
  undefined8 uVar6;
  code *pcVar7;
  FRHIGPUMask FVar8;
  FRayTracingDynamicGeometryUpdateManager *pFVar9;
  TMap<FRHIUniformBuffer_*,TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIUniformBuffer_*,TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar10;
  undefined4 uVar11;
  bool bVar12;
  EUniformBufferBindingFlags EVar13;
  ERDGPassFlags EVar14;
  FRDGScope *this_02;
  FRDGBuffer *pFVar15;
  FShaderParametersMetadata *pFVar16;
  FRHIUniformBuffer **ppFVar17;
  FRDGEventName *pFVar18;
  wchar_t *pwVar19;
  FRDGPass *pFVar20;
  FRayTracingDynamicGeometryUpdatePassParams *pFVar21;
  longlong lVar22;
  longlong *plVar23;
  TUniqueFunction<void___cdecl(void)> *pTVar24;
  int iVar25;
  ERDGPassFlags EVar26;
  uint uVar27;
  uint *puVar28;
  undefined8 *puVar29;
  uint uVar30;
  FRayTracingDynamicGeometryUpdateManager *pFVar31;
  uint uVar32;
  undefined1 auStackY_298 [32];
  undefined1 local_268;
  char local_267;
  uint local_264;
  ERDGPassFlags local_260;
  FRayTracingDynamicGeometryUpdatePassParams *local_258;
  uint local_250;
  FRDGBuffer *local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  FRHIGPUMask local_238;
  FRDGBuffer **local_230;
  FRayTracingDynamicGeometryUpdateManager *local_228;
  FRHIComputeCommandList *local_220;
  TMap<FRHIUniformBuffer_*,TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIUniformBuffer_*,TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_>,0>_>
  *local_218;
  int iStack_210;
  uint uStack_20c;
  undefined1 *local_208;
  undefined4 uStack_200;
  int iStack_1fc;
  int local_1f8;
  int iStack_1f4;
  int iStack_1f0;
  undefined4 uStack_1ec;
  int local_1e8;
  int local_1e4;
  TRDGUniformBuffer<FSceneUniformParameters> **local_1e0;
  TRDGEventScopeGuard<FRDGScope_RHI> local_1d8;
  char local_1c8;
  FRayTracingDynamicGeometryUpdateManager *local_1c0;
  char cStack_1b8;
  ERHIPipeline EStack_1b7;
  undefined6 uStack_1b6;
  undefined8 local_1b0;
  int iStack_1a8;
  undefined4 uStack_1a4;
  TMap<FRHIUniformBuffer_*,TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIUniformBuffer_*,TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_>,0>_>
  *local_1a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_198;
  undefined8 uStack_178;
  FRDGBufferDesc local_170;
  FRHIResource *local_158;
  EUniformBufferBindingFlags EStack_150;
  undefined7 uStack_14f;
  FRHIUniformBuffer *local_148;
  EUniformBufferBindingFlags EStack_140;
  undefined7 uStack_13f;
  TRDGUniformBuffer<FSceneUniformParameters> *local_138;
  EUniformBufferBindingFlags EStack_130;
  undefined7 uStack_12f;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<26>_const_*,std::tuple<>_> local_128;
  undefined8 local_118;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined8 local_108;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  FRDGParameterStruct local_f8;
  FRDGParameterStruct local_e0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  FRDGEventName local_a8;
  FRDGEventName local_90;
  code *local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_298;
  local_220 = (FRHIComputeCommandList *)param_1->_padding_;
  uVar32 = 0;
  local_238.GPUMask = *(uint *)&local_220->field_0x29c;
  local_230 = param_6;
  local_264 = 0;
  local_260 = param_2;
  local_228 = this;
  local_1e0 = param_3;
  FRHIComputeCommandList::SetGPUMask
            (local_220,(FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1));
  cVar3 = *(char *)((longlong)&param_1->_padding_ + 6);
  local_1c8 = '\0';
  if ((cVar3 != '\0') && ((cVar3 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Desc._padding_._0_4_ = 0x31e;
      local_b8 = 0x54bd3a20;
      uStack_b4 = 1;
      ::Desc._padding_._0_4_ = 0x54bd3a20;
      ::Desc._padding_._4_4_ = uStack_bc;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_ = (longlong)u_RayTracingDynam;
      ::Desc._padding_ = (longlong)u_RayTracingDynam;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FRayTracingDynamicGeometryUpdateManager::AddDynamicGeometryUpdatePass'::__l7::Desc::
             operator()<>'::__l3::<lambda_1>::operator()<>'::__l2::
             _dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_128._Myfirst._Val = &::Desc;
    local_1d8.State = (FRDGScopeState *)param_1;
    this_02 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)this_02;
    local_1d8.Scope = this_02;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<26>_const_*,std::tuple<>_>_>
              (&(this_02->Impl).Impl,(FRDGScopeState *)param_1,&local_128);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(this_02,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(this_02,(FRHIComputeCommandList *)param_1->_padding_);
    }
    local_1c8 = '\x01';
    param_6 = local_230;
  }
  ScheduleUpdates(this,param_4);
  if (this->ScratchBufferSize != 0) {
    local_170.BytesPerElement = GRHIGlobals.RayTracing.ScratchBufferAlignment;
    local_170.Metadata = (FShaderParametersMetadata *)0x0;
    local_170.Usage = 0x90008;
    local_170.NumElements =
         ((this->ScratchBufferSize - 1) + GRHIGlobals.RayTracing.ScratchBufferAlignment) /
         GRHIGlobals.RayTracing.ScratchBufferAlignment;
    pFVar15 = FRDGBuilder::CreateBuffer
                        (param_1,&local_170,L"DynamicGeometry.BLASSharedScratchBuffer",None);
    *param_6 = pFVar15;
  }
  iVar25 = *(int *)&(this->DispatchCommandsPerView).field_0x28;
  local_258 = (FRayTracingDynamicGeometryUpdatePassParams *)
              &(this->DispatchCommandsPerView).field_0x10;
  local_218 = &this->DispatchCommandsPerView;
  uStack_20c = 1;
  iStack_210 = 0;
  local_267 = (param_2 == AsyncCompute) + '\x01';
  local_1f8 = 0;
  iStack_1fc = 0;
  if (iVar25 != 0) {
    puVar28 = *(uint **)&(this->DispatchCommandsPerView).field_0x20;
    if (puVar28 == (uint *)0x0) {
      puVar28 = (uint *)&(this->DispatchCommandsPerView).field_0x10;
    }
    uVar27 = *puVar28;
    while (uVar27 == 0) {
      lVar22 = (longlong)iStack_210;
      local_1f8 = local_1f8 + 0x20;
      iStack_210 = iStack_210 + 1;
      iStack_1fc = iVar25;
      if ((int)(iVar25 + -1 + (iVar25 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_210) goto LAB_14530ad81;
      uVar27 = puVar28[lVar22 + 1];
    }
    uStack_20c = -uVar27 & uVar27;
    uVar2 = (ulonglong)uStack_20c * 2 + 1;
    lVar22 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    local_1e8 = (int)lVar22;
    iStack_1fc = local_1e8 + -1 + local_1f8;
    if (iVar25 < iStack_1fc) {
      iStack_1fc = iVar25;
    }
  }
LAB_14530ad81:
  local_208 = &(this->DispatchCommandsPerView).field_0x10;
  iStack_1f0 = *(int *)&(this->DispatchCommandsPerView).field_0x8 -
               *(int *)&(this->DispatchCommandsPerView).field_0x34;
  uVar27 = *(uint *)&(this->DispatchCommandsPerView).field_0x28;
  uStack_200 = 0xffffffff;
  TStack_198._padding_ = CONCAT44(uStack_20c,iStack_210);
  uVar30 = uVar27 & 0xffffffe0;
  TStack_198.CurrentBitIndex = iStack_1fc;
  TStack_198.UnvisitedBitMask = 0xffffffff;
  iVar25 = (int)uVar27 >> 5;
  TStack_198._28_4_ = iStack_1fc;
  TStack_198.BaseBitIndex = local_1f8;
  uStack_178 = CONCAT44(uStack_1ec,iStack_1f0);
  local_250 = uVar27;
  iStack_1f4 = iStack_1fc;
  local_1a0 = local_218;
  TStack_198.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_208;
  if (((int)uVar27 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar9 = local_228;
  uVar4 = *(uint *)&(local_258->View).View.field_0x8;
  if (uVar27 != uVar4) {
    pFVar21 = *(FRayTracingDynamicGeometryUpdatePassParams **)&(local_258->View).View;
    if (pFVar21 == (FRayTracingDynamicGeometryUpdatePassParams *)0x0) {
      pFVar21 = local_258;
    }
    uVar27 = -1 << ((byte)uVar27 & 0x1f) &
             *(uint *)(&(pFVar21->DynamicGeometryScratchBuffer).field_0x0 + (longlong)iVar25 * 4);
    while (uVar27 == 0) {
      lVar22 = (longlong)iVar25;
      uVar30 = uVar30 + 0x20;
      iVar25 = iVar25 + 1;
      uVar27 = uVar4;
      local_250 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar25) goto LAB_14530ae93;
      uVar27 = *(uint *)(&(pFVar21->DynamicGeometryScratchBuffer).field_0x4 + lVar22 * 4);
    }
    uVar2 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
    lVar22 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    local_1e4 = (int)lVar22;
    uVar27 = local_1e4 + -1 + uVar30;
    local_250 = uVar27;
    if ((int)uVar4 < (int)uVar27) {
      uVar27 = uVar4;
      local_250 = uVar4;
    }
  }
LAB_14530ae93:
  uVar11 = local_128._Myfirst._Val._4_4_;
  pFVar21 = local_258;
  do {
    pTVar10 = local_1a0;
    if (*(int *)&local_1a0->field_0x8 - *(int *)&local_1a0->field_0x34 != (int)uStack_178) {
      local_268 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FRHIUniformBuffer_*,TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_268);
      pFVar21 = (FRayTracingDynamicGeometryUpdatePassParams *)
                &(pFVar9->DispatchCommandsPerView).field_0x10;
    }
    FVar8.GPUMask = local_238.GPUMask;
    if (((TStack_198.CurrentBitIndex == uVar27) &&
        ((FRayTracingDynamicGeometryUpdatePassParams *)TStack_198.Array == pFVar21)) &&
       (pTVar10 == &pFVar9->DispatchCommandsPerView)) {
      pFVar31 = local_228;
      if (0 < (pFVar9->BuildParams).ArrayNum) {
        pFVar21 = FRDGBuilder::AllocParameters<FRayTracingDynamicGeometryUpdatePassParams>(param_1);
        uStack_110 = 1;
        local_118 = 0;
        *(undefined8 *)&(pFVar21->View).View = 0;
        *(ulonglong *)&(pFVar21->View).View.field_0x8 = CONCAT71(uStack_10f,1);
        local_108 = 0;
        uStack_100 = 1;
        *(undefined8 *)&(pFVar21->View).InstancedView.field_0x0 = 0;
        *(ulonglong *)&(pFVar21->View).InstancedView.field_0x8 = CONCAT71(uStack_ff,1);
        pFVar16 = FSceneUniformParameters::FTypeInfo::GetStructMetadata();
        EVar14 = local_260;
        EVar13 = Static;
        if (pFVar16->BindingFlags != StaticAndShader) {
          EVar13 = pFVar16->BindingFlags;
        }
        local_264 = uVar32 | 8;
        uStack_240 = CONCAT31(uStack_240._1_3_,EVar13);
        EVar26 = local_260 | NeverCull;
        *(undefined8 *)&pFVar21->Scene = 0;
        *(ulonglong *)&(pFVar21->Scene).field_0x8 = CONCAT44(uStack_23c,uStack_240);
        uStack_240 = 0x400;
        local_248 = *local_230;
        *(FRDGBuffer **)&pFVar21->DynamicGeometryScratchBuffer = local_248;
        *(ulonglong *)&(pFVar21->DynamicGeometryScratchBuffer).field_0x8 =
             CONCAT44(uStack_23c,0x400);
        pFVar18 = FRDGEventName::FRDGEventName(&local_90,1,L"RayTracingDynamicUpdateBuild");
        pFVar16 = FRayTracingDynamicGeometryUpdatePassParams::FTypeInfo::GetStructMetadata();
        FRDGUserValidation::ValidateAddPass
                  (&param_1->UserValidation,pFVar21,pFVar16,pFVar18,EVar14 | NeverCull);
        FRDGBuilder::FlushAccessModeQueue(param_1);
        pwVar19 = FRDGEventName::GetTCHAR(pFVar18);
        EVar14 = FRDGBuilder::OverridePassFlags(param_1,pwVar19,EVar26);
        pFVar20 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x198,8);
        local_e0.Contents = (uchar *)pFVar21;
        if (((pFVar16->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsLayoutInitialized()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                                ,0x17c,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_e0.Layout.Reference = (pFVar16->Layout).Reference;
        if (local_e0.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
          FRHIResource::AddRef((FRHIResource *)local_e0.Layout.Reference);
        }
        local_e0.Metadata = pFVar16;
        FRDGPass::FRDGPass(pFVar20,pFVar18,&local_e0,EVar14,Await);
        pFVar31 = local_228;
        pFVar20->_padding_ =
             (longlong)
             &TRDGLambdaPass<FRayTracingDynamicGeometryUpdatePassParams,`FRayTracingDynamicGeometryUpdateManager::AddDynamicGeometryUpdatePass'::`20'::<lambda_3>_>
              ::_vftable_;
        pFVar20[1]._padding_ = (longlong)local_228;
        pFVar20[1].FullPathIfDebug.Data.AllocatorInstance.Data = (FScriptContainerElement *)pFVar21;
        *(FRayTracingDynamicGeometryUpdatePassParams **)&pFVar20[1].FullPathIfDebug.Data.ArrayNum =
             pFVar21;
        FRDGBuilder::ClobberPassOutputs(param_1,pFVar20);
        iVar25 = (param_1->Passes).Array.ArrayNum;
        piVar1 = &(param_1->Passes).Array.ArrayMax;
        if (iVar25 == *piVar1) {
          iVar25 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                             (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
        }
        (param_1->Passes).Array.ArrayNum = iVar25 + 1;
        (param_1->Passes).Array.AllocatorInstance.Data[iVar25] = pFVar20;
        (pFVar20->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
        FRDGBuilder::SetupParameterPass(param_1,pFVar20);
        if (local_90.FormattedEventName.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.FormattedEventName.Data.AllocatorInstance.Data);
        }
        if (((local_264 & 4) != 0) && (local_220 != (FRHIComputeCommandList *)0x0)) {
          FMemory::Free(local_220);
        }
      }
      local_50 = (longlong *)0x0;
      local_68 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FRayTracingDynamicGeometryUpdateManager::AddDynamicGeometryUpdatePass'::`2'::<lambda_4>,1,0>
                  ::_vftable_;
      piVar1 = &(param_1->PostExecuteCallbacks).ArrayMax;
      iVar25 = (param_1->PostExecuteCallbacks).ArrayNum;
      uStack_60 = pFVar31;
      local_78 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FRayTracingDynamicGeometryUpdateManager::AddDynamicGeometryUpdatePass'::__l2::<lambda_4>,void>
                 ::Call;
      if (iVar25 == *piVar1) {
        iVar25 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<TUniqueFunction<void___cdecl(void)>_>_>
                           (0x1030,&(param_1->PostExecuteCallbacks).AllocatorInstance,piVar1);
      }
      (param_1->PostExecuteCallbacks).ArrayNum = iVar25 + 1;
      pTVar24 = (param_1->PostExecuteCallbacks).AllocatorInstance.Data + iVar25;
      *(code **)pTVar24 = local_78;
      *(longlong **)&pTVar24->field_0x28 = local_50;
      *(undefined4 *)&pTVar24->field_0x10 = (undefined4)local_68;
      *(undefined4 *)&pTVar24->field_0x14 = local_68._4_4_;
      *(undefined4 *)&pTVar24->field_0x18 = (undefined4)uStack_60;
      *(undefined4 *)&pTVar24->field_0x1c = uStack_60._4_4_;
      *(undefined8 *)&pTVar24->field_0x20 = local_58;
      if ((*(longlong *)pTVar24 == 0) && (local_78 != (code *)0x0)) {
        plVar23 = &local_68;
        if (local_50 != (longlong *)0x0) {
          plVar23 = local_50;
        }
        (**(code **)(*plVar23 + 0x10))();
      }
      if (local_1c8 != '\0') {
        TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_1d8);
      }
      FRHIComputeCommandList::SetGPUMask(local_220,FVar8);
      return;
    }
    puVar29 = (undefined8 *)((longlong)TStack_198.CurrentBitIndex * 0x20 + *(longlong *)pTVar10);
    if (*(int *)(puVar29 + 2) != 0) {
      local_258 = FRDGBuilder::AllocParameters<FRayTracingDynamicGeometryUpdatePassParams>(param_1);
      this_00 = (FRHIResource *)*puVar29;
      if (this_00 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(this_00);
        pFVar16 = FViewUniformShaderParameters::GetStructMetadata();
        if (((pFVar16->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsLayoutInitialized()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                                ,0x17c,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((FName)(pFVar16->Layout).Reference != this_00[2].OwnerName) {
          pFVar16 = FViewUniformShaderParameters::GetStructMetadata();
          if (((pFVar16->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsLayoutInitialized()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                                  ,0x177,L""), bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                              ,0x96,
                              L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                             );
          if (bVar12) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
      }
      pFVar16 = FViewUniformShaderParameters::GetStructMetadata();
      EStack_150 = Static;
      if (pFVar16->BindingFlags != StaticAndShader) {
        EStack_150 = pFVar16->BindingFlags;
      }
      *(FRHIResource **)&(local_258->View).View = this_00;
      *(ulonglong *)&(local_258->View).View.field_0x8 = CONCAT71(uStack_14f,EStack_150);
      local_158 = this_00;
      if (this_00 != (FRHIResource *)0x0) {
        FRHIResource::Release(this_00);
      }
      ppFVar17 = TMapBase<FRHIUniformBuffer_*,FRHIUniformBuffer_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIUniformBuffer_*,FRHIUniformBuffer_*,0>_>
                 ::FindChecked((TMapBase<FRHIUniformBuffer_*,FRHIUniformBuffer_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIUniformBuffer_*,FRHIUniformBuffer_*,0>_>
                                *)&pFVar9->InstancedViewUniformBuffers,(FRHIUniformBuffer *)*puVar29
                              );
      this_01 = *ppFVar17;
      if (this_01 != (FRHIUniformBuffer *)0x0) {
        FRHIResource::AddRef((FRHIResource *)this_01);
        pFVar16 = FInstancedViewUniformShaderParameters::GetStructMetadata();
        if (((pFVar16->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsLayoutInitialized()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                                ,0x17c,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((pFVar16->Layout).Reference != (this_01->Layout).Reference) {
          pFVar16 = FInstancedViewUniformShaderParameters::GetStructMetadata();
          if (((pFVar16->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsLayoutInitialized()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                                  ,0x177,L""), bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                              ,0x96,
                              L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                             );
          if (bVar12) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
      }
      pFVar16 = FInstancedViewUniformShaderParameters::GetStructMetadata();
      EStack_140 = Static;
      if (pFVar16->BindingFlags != StaticAndShader) {
        EStack_140 = pFVar16->BindingFlags;
      }
      *(FRHIUniformBuffer **)&(local_258->View).InstancedView = this_01;
      *(ulonglong *)&(local_258->View).InstancedView.field_0x8 = CONCAT71(uStack_13f,EStack_140);
      local_148 = this_01;
      if (this_01 != (FRHIUniformBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)this_01);
      }
      pTVar5 = *local_1e0;
      pFVar16 = FSceneUniformParameters::FTypeInfo::GetStructMetadata();
      uStack_240 = 0x400;
      EStack_130 = Static;
      if (pFVar16->BindingFlags != StaticAndShader) {
        EStack_130 = pFVar16->BindingFlags;
      }
      *(TRDGUniformBuffer<FSceneUniformParameters> **)&local_258->Scene = pTVar5;
      *(ulonglong *)&(local_258->Scene).field_0x8 = CONCAT71(uStack_12f,EStack_130);
      local_248 = *local_230;
      *(FRDGBuffer **)&local_258->DynamicGeometryScratchBuffer = local_248;
      *(ulonglong *)&(local_258->DynamicGeometryScratchBuffer).field_0x8 =
           CONCAT44(uStack_23c,0x400);
      iVar25 = *(int *)(puVar29 + 2);
      uVar6 = puVar29[1];
      local_138 = pTVar5;
      if ((iVar25 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      EVar14 = local_260;
      cStack_1b8 = local_267;
      EStack_1b7 = param_5;
      local_264 = local_264 | 2;
      EVar26 = local_260 | NeverCull;
      local_1c0 = pFVar9;
      uStack_1a4 = uVar11;
      local_1b0 = uVar6;
      iStack_1a8 = iVar25;
      pFVar18 = FRDGEventName::FRDGEventName(&local_a8,1,L"RayTracingDynamicUpdate");
      pFVar16 = FRayTracingDynamicGeometryUpdatePassParams::FTypeInfo::GetStructMetadata();
      FRDGUserValidation::ValidateAddPass
                (&param_1->UserValidation,local_258,pFVar16,pFVar18,EVar14 | NeverCull);
      FRDGBuilder::FlushAccessModeQueue(param_1);
      pwVar19 = FRDGEventName::GetTCHAR(pFVar18);
      EVar14 = FRDGBuilder::OverridePassFlags(param_1,pwVar19,EVar26);
      pFVar20 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1a8,8);
      local_f8.Contents = (uchar *)local_258;
      if (((pFVar16->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsLayoutInitialized()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                              ,0x17c,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_f8.Layout.Reference = (pFVar16->Layout).Reference;
      if (local_f8.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
        FRHIResource::AddRef((FRHIResource *)local_f8.Layout.Reference);
      }
      local_f8.Metadata = pFVar16;
      FRDGPass::FRDGPass(pFVar20,pFVar18,&local_f8,EVar14,Await);
      pFVar20->_padding_ =
           (longlong)
           &TRDGLambdaPass<FRayTracingDynamicGeometryUpdatePassParams,`FRayTracingDynamicGeometryUpdateManager::AddDynamicGeometryUpdatePass'::`14'::<lambda_2>_>
            ::_vftable_;
      pFVar20[1]._padding_ = (longlong)local_1c0;
      pFVar20[1].FullPathIfDebug.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)CONCAT62(uStack_1b6,CONCAT11(EStack_1b7,cStack_1b8));
      pFVar20[1].Name.FormattedEventName.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)local_258;
      pFVar20[1].FullPathIfDebug.Data.ArrayNum = (undefined4)local_1b0;
      pFVar20[1].FullPathIfDebug.Data.ArrayMax = local_1b0._4_4_;
      pFVar20[1].Name.EventFormat = (wchar_t *)CONCAT44(uStack_1a4,iStack_1a8);
      FRDGBuilder::ClobberPassOutputs(param_1,pFVar20);
      iVar25 = (param_1->Passes).Array.ArrayNum;
      piVar1 = &(param_1->Passes).Array.ArrayMax;
      if (iVar25 == *piVar1) {
        iVar25 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                           (0x808,(ForElementType<FRDGPass_*> *)&param_1->Passes,piVar1);
      }
      (param_1->Passes).Array.ArrayNum = iVar25 + 1;
      (param_1->Passes).Array.AllocatorInstance.Data[iVar25] = pFVar20;
      (pFVar20->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
      FRDGBuilder::SetupParameterPass(param_1,pFVar20);
      uVar27 = local_264;
      uVar32 = local_264 & 0xfffffffd;
      local_264 = uVar32;
      if (local_a8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_a8.FormattedEventName.Data.AllocatorInstance.Data);
      }
      if (((uVar27 & 1) != 0) &&
         (uVar32 = uVar27 & 0xfffffffc, local_264 = uVar32,
         local_220 != (FRHIComputeCommandList *)0x0)) {
        FMemory::Free(local_220);
      }
    }
    TStack_198.UnvisitedBitMask = TStack_198.UnvisitedBitMask & ~TStack_198._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_198);
    pFVar21 = (FRayTracingDynamicGeometryUpdatePassParams *)
              &(pFVar9->DispatchCommandsPerView).field_0x10;
    uVar27 = local_250;
  } while( true );
}

// AddDynamicGeometryUpdatePass @ 14530b7b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
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
FRayTracingDynamicGeometryUpdateManager::AddDynamicGeometryUpdatePass
          (FRayTracingDynamicGeometryUpdateManager *this,FViewInfo *param_1,FRDGBuilder *param_2,
          ERDGPassFlags param_3,ERHIPipeline param_4,FRDGBuffer **param_5)

{
  bool bVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FSceneUniformBuffer *this_00;
  TRDGUniformBuffer<FSceneUniformParameters> *local_res10;
  
  lVar2 = param_1->_padding_;
  bVar1 = param_1->bRayTracingFeedbackEnabled;
  if (*(longlong *)(lVar2 + 0x178) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SceneRenderer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\SceneView.h"
                       ,0xa7b,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this_00 = (FSceneUniformBuffer *)(**(code **)(**(longlong **)(lVar2 + 0x178) + 0x10))();
  local_res10 = FSceneUniformBuffer::GetBuffer(this_00,param_2);
  AddDynamicGeometryUpdatePass(this,param_2,param_3,&local_res10,bVar1,param_4,param_5);
  return;
}

// AllocateSharedBuffer @ 14530e770

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRWBuffer * __thiscall
FRayTracingDynamicGeometryUpdateManager::AllocateSharedBuffer
          (FRayTracingDynamicGeometryUpdateManager *this,FRHICommandListBase *param_1,uint param_2,
          uint *param_3)

{
  int *piVar1;
  TArray<FRayTracingDynamicGeometryUpdateManager::FVertexPositionBuffer_*,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  FRWBuffer *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res18 [8];
  FRWBuffer *local_38 [2];
  
  pTVar2 = &this->VertexPositionBuffers;
  local_38[0] = (FRWBuffer *)0x0;
  pFVar9 = (pTVar2->AllocatorInstance).Data;
  iVar7 = (this->VertexPositionBuffers).ArrayNum;
  pFVar3 = pFVar9 + (longlong)iVar7 * 8;
  while( true ) {
    if ((this->VertexPositionBuffers).ArrayNum != iVar7) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FRayTracingDynamicGeometryUpdateManager::FVertexPositionBuffer_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    pFVar8 = local_38[0];
    if ((pFVar9 == pFVar3) ||
       (pFVar8 = *(FRWBuffer **)pFVar9,
       *(int *)&pFVar8[1].Buffer.Reference + param_2 <= pFVar8->NumBytes)) break;
    pFVar9 = pFVar9 + 8;
  }
  local_38[0] = pFVar8;
  if (local_38[0] == (FRWBuffer *)0x0) {
    pFVar8 = ::operator_new(0x38);
    local_38[0] = (FRWBuffer *)0x0;
    if (pFVar8 != (FRWBuffer *)0x0) {
      (pFVar8->Buffer).Reference = (FRHIBuffer *)0x0;
      (pFVar8->UAV).Reference = (FRHIUnorderedAccessView *)0x0;
      (pFVar8->SRV).Reference = (FRHIShaderResourceView *)0x0;
      pFVar8->NumBytes = 0;
      (pFVar8->ClassName).ComparisonIndex = 0;
      *(undefined8 *)&(pFVar8->ClassName).Number = 0;
      (pFVar8->OwnerName).Number = 0;
      pFVar8[1].Buffer.Reference = (FRHIBuffer *)0x0;
      local_38[0] = pFVar8;
    }
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)local_38) &&
        ((FScriptContainerElement *)local_38 <
         pFVar3 + (longlong)(this->VertexPositionBuffers).ArrayMax * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FRWBuffer *)(*pcVar4)();
      return pFVar8;
    }
    iVar7 = (this->VertexPositionBuffers).ArrayNum;
    piVar1 = &(this->VertexPositionBuffers).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->VertexPositionBuffers).ArrayNum = iVar7 + 1;
    *(FRWBuffer **)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_38[0];
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      VertexBufferCacheSize = GRTDynGeomSharedVertexBufferSizeInMB << 0x14;
      _Init_thread_footer(&::_TSS1);
    }
    uVar5 = param_2;
    if (param_2 < VertexBufferCacheSize) {
      uVar5 = VertexBufferCacheSize;
    }
    FRWBuffer::Initialize
              (local_38[0],param_1,
               L"FRayTracingDynamicGeometryUpdateManager::RayTracingDynamicVertexBuffer",4,
               uVar5 >> 2,PF_R32_FLOAT,UAVCompute,ShaderResource|UnorderedAccess,
               (FResourceArrayUploadInterface *)0x0);
    *(undefined4 *)&local_38[0][1].Buffer.Reference = 0;
  }
  *(int *)((longlong)&local_38[0][1].Buffer.Reference + 4) = (int)this->SharedBufferGenerationID;
  *param_3 = *(uint *)&local_38[0][1].Buffer.Reference;
  *(uint *)&local_38[0][1].Buffer.Reference = *(int *)&local_38[0][1].Buffer.Reference + param_2;
  *(uint *)&local_38[0][1].Buffer.Reference =
       *(int *)&local_38[0][1].Buffer.Reference + 0xfU & 0xfffffff0;
  return local_38[0];
}

// BeginUpdate @ 14530f530

long64 __thiscall
FRayTracingDynamicGeometryUpdateManager::BeginUpdate(FRayTracingDynamicGeometryUpdateManager *this)

{
  int *piVar1;
  TArray<FRayTracingDynamicGeometryUpdateManager::FVertexPositionBuffer_*,TSizedDefaultAllocator<32>_>
  *pTVar2;
  int iVar3;
  FRWBuffer *this_00;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  long64 lVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  
  if ((*(int *)&(this->DispatchCommandsPerView).field_0x8 !=
       *(int *)&(this->DispatchCommandsPerView).field_0x34) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DispatchCommandsPerView.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingDynamicGeometryUpdateManager.cpp"
                         ,0x108,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    lVar8 = (*pcVar5)();
    return lVar8;
  }
  if ((*(int *)&(this->InstancedViewUniformBuffers).field_0x8 !=
       *(int *)&(this->InstancedViewUniformBuffers).field_0x34) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstancedViewUniformBuffers.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingDynamicGeometryUpdateManager.cpp"
                         ,0x109,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    lVar8 = (*pcVar5)();
    return lVar8;
  }
  if (((this->BuildParams).ArrayNum != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("BuildParams.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingDynamicGeometryUpdateManager.cpp"
                         ,0x10a,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    lVar8 = (*pcVar5)();
    return lVar8;
  }
  if (((this->Segments).ArrayNum != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Segments.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingDynamicGeometryUpdateManager.cpp"
                         ,0x10b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    lVar8 = (*pcVar5)();
    return lVar8;
  }
  if (((this->ReferencedUniformBuffers).ArrayNum != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ReferencedUniformBuffers.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingDynamicGeometryUpdateManager.cpp"
                         ,0x10c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    lVar8 = (*pcVar5)();
    return lVar8;
  }
  if (((this->DynamicGeometryBuilds).ArrayNum != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DynamicGeometryBuilds.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingDynamicGeometryUpdateManager.cpp"
                         ,0x10d,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    lVar8 = (*pcVar5)();
    return lVar8;
  }
  if (((this->DynamicGeometryUpdates).ArrayNum != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DynamicGeometryUpdates.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingDynamicGeometryUpdateManager.cpp"
                         ,0x10e,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    lVar8 = (*pcVar5)();
    return lVar8;
  }
  uVar10 = 0;
  if (0 < (this->VertexPositionBuffers).ArrayNum) {
    pTVar2 = &this->VertexPositionBuffers;
    lVar11 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar10 < (this->VertexPositionBuffers).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        lVar8 = (*pcVar5)();
        return lVar8;
      }
      this_00 = *(FRWBuffer **)((pTVar2->AllocatorInstance).Data + lVar11);
      iVar3 = *(int *)((longlong)&this_00[1].Buffer.Reference + 4);
      *(undefined4 *)&this_00[1].Buffer.Reference = 0;
      if ((longlong)(ulonglong)(uint)(iVar3 + GRTDynGeomSharedVertexBufferGarbageCollectLatency) <=
          this->SharedBufferGenerationID) {
        uVar7 = 0;
        if ((int)uVar10 < (this->VertexPositionBuffers).ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          lVar8 = (*pcVar5)();
          return lVar8;
        }
        iVar3 = (this->VertexPositionBuffers).ArrayNum;
        pFVar4 = (pTVar2->AllocatorInstance).Data;
        iVar9 = ~uVar10 + iVar3;
        if (1 < iVar9) {
          iVar9 = 1;
        }
        if (iVar9 != 0) {
          memmove(pFVar4 + (longlong)(int)uVar10 * 8,pFVar4 + (longlong)(iVar3 - iVar9) * 8,
                  (longlong)iVar9 << 3);
        }
        piVar1 = &(this->VertexPositionBuffers).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar2->AllocatorInstance,(this->VertexPositionBuffers).ArrayNum,
                   &(this->VertexPositionBuffers).ArrayMax);
        FRWBuffer::~FRWBuffer(this_00);
        ::operator_delete(this_00,0x38);
        uVar10 = uVar10 - 1;
        lVar11 = lVar11 + -8;
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 8;
    } while ((int)uVar10 < (this->VertexPositionBuffers).ArrayNum);
  }
  this->SharedBufferGenerationID = this->SharedBufferGenerationID + 1;
  return this->SharedBufferGenerationID;
}

// Clear @ 145312fc0

/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
FRayTracingDynamicGeometryUpdateManager::Clear(FRayTracingDynamicGeometryUpdateManager *this)

{
  int *piVar1;
  uint uVar2;
  
  TSet<TTuple<FRHIUniformBuffer_*,TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRHIUniformBuffer_*,TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Empty((TSet<TTuple<FRHIUniformBuffer_*,TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRHIUniformBuffer_*,TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)&this->DispatchCommandsPerView,0);
  TSet<TTuple<FRHIUniformBuffer_*,FRHIUniformBuffer_*>,TDefaultMapHashableKeyFuncs<FRHIUniformBuffer_*,FRHIUniformBuffer_*,0>,FDefaultSetAllocator>
  ::Empty((TSet<TTuple<FRHIUniformBuffer_*,FRHIUniformBuffer_*>,TDefaultMapHashableKeyFuncs<FRHIUniformBuffer_*,FRHIUniformBuffer_*,0>,FDefaultSetAllocator>
           *)&this->InstancedViewUniformBuffers,0);
  piVar1 = &(this->BuildParams).ArrayMax;
  uVar2 = *piVar1;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  DestructItems<FRayTracingGeometryBuildParams,int>
            ((FRayTracingGeometryBuildParams *)(this->BuildParams).AllocatorInstance.Data,
             (this->BuildParams).ArrayNum);
  (this->BuildParams).ArrayNum = 0;
  if ((this->BuildParams).ArrayMax != uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar2,&(this->BuildParams).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->Segments).ArrayMax;
  uVar2 = *piVar1;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  DestructItems<FRayTracingGeometrySegment,int>
            ((FRayTracingGeometrySegment *)(this->Segments).AllocatorInstance.Data,
             (this->Segments).ArrayNum);
  (this->Segments).ArrayNum = 0;
  if ((this->Segments).ArrayMax != uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,uVar2,&(this->Segments).AllocatorInstance,0,piVar1);
  }
  uVar2 = (this->DynamicGeometryBuilds).ArrayMax;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  DestructItems<FRayTracingDynamicGeometryUpdateManager::FRayTracingDynamicGeometryBuildParams,int>
            ((FRayTracingDynamicGeometryBuildParams *)
             (this->DynamicGeometryBuilds).AllocatorInstance.Data,
             (this->DynamicGeometryBuilds).ArrayNum);
  (this->DynamicGeometryBuilds).ArrayNum = 0;
  if ((this->DynamicGeometryBuilds).ArrayMax != uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,uVar2,&(this->DynamicGeometryBuilds).AllocatorInstance,0,
               &(this->DynamicGeometryBuilds).ArrayMax);
  }
  uVar2 = (this->DynamicGeometryUpdates).ArrayMax;
  if (-1 < (int)uVar2) {
    DestructItems<FRayTracingDynamicGeometryUpdateManager::FRayTracingDynamicGeometryBuildParams,int>
              ((FRayTracingDynamicGeometryBuildParams *)
               (this->DynamicGeometryUpdates).AllocatorInstance.Data,
               (this->DynamicGeometryUpdates).ArrayNum);
    (this->DynamicGeometryUpdates).ArrayNum = 0;
    if ((this->DynamicGeometryUpdates).ArrayMax != uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,uVar2,&(this->DynamicGeometryUpdates).AllocatorInstance,0,
                 &(this->DynamicGeometryUpdates).ArrayMax);
    }
    this->ScratchBufferSize = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// ComputeScratchBufferSize @ 145313c40

uint __thiscall
FRayTracingDynamicGeometryUpdateManager::ComputeScratchBufferSize
          (FRayTracingDynamicGeometryUpdateManager *this)

{
  return this->ScratchBufferSize;
}

// DispatchUpdates @ 145318a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __cdecl
FRayTracingDynamicGeometryUpdateManager::DispatchUpdates
          (FRHICommandList *param_1,TArrayView<FMeshComputeDispatchCommand_const_,int> *param_2,
          ERHIPipeline param_3,ERHIPipeline param_4)

{
  ushort uVar1;
  FShaderMapResource *this;
  FShaderMapBase *pFVar2;
  FRayTracingDynamicGeometryConverterCS *pFVar3;
  FRayTracingGeometry *pFVar4;
  longlong *plVar5;
  FRHIBatchedShaderParameters *pFVar6;
  FRHIUnorderedAccessView *pFVar7;
  FRHIBatchedShaderParameters *pFVar8;
  code *pcVar9;
  int iVar10;
  ForElementType<FRHIUnorderedAccessView_*> FVar11;
  FRWBuffer *pFVar12;
  bool bVar13;
  uint uVar14;
  atomic<unsigned_int> aVar15;
  int iVar16;
  FRHIBreadcrumbAllocator *pFVar17;
  FRHIBreadcrumbNode *pFVar18;
  uint *puVar19;
  FTlsAutoCleanup *pFVar20;
  longlong lVar21;
  IRHIComputeContext *pIVar22;
  atomic<FRHIShader_*> aVar23;
  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<45,FDebugName,unsigned_int,unsigned_int,int>_>
  *pTVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  ushort *puVar27;
  void *pvVar28;
  FRHIBatchedShaderParametersAllocator *pFVar29;
  FMemStackBase *pFVar30;
  FMeshComputeDispatchCommand *pFVar31;
  TArrayView<FRHIShaderParameterResource,int> *pTVar32;
  FRHIUnorderedAccessView **ppFVar33;
  FMeshComputeDispatchCommand *pFVar34;
  atomic<FRHIShader_*> aVar35;
  undefined1 auStackY_468 [32];
  bool local_418;
  undefined1 local_417;
  ERHIPipeline local_416;
  ERHIPipeline local_415;
  FIdentityFunctor local_414 [4];
  ForElementType<FRHIUnorderedAccessView_*> local_410;
  undefined8 local_408;
  ForElementType<FRHITransitionInfo> local_400;
  int local_3f8;
  int iStack_3f4;
  ForElementType<FRHITransitionInfo> local_3f0;
  int local_3e8;
  int iStack_3e4;
  undefined1 local_3e0 [2];
  ushort local_3de;
  ushort local_3dc [2];
  FRHITransitionInfo_u_8 local_3d8;
  TIntVector3<int>_u_0 local_3d0;
  uint local_3c0 [2];
  FRWBuffer *local_3b8;
  atomic<FRHIShader_*> local_3b0;
  FMemMark local_3a8;
  FRHITransitionInfo local_380;
  FRHITransitionInfo local_350;
  FRHIUnorderedAccessView *local_320;
  FRHIUnorderedAccessView *local_318;
  FRHIBreadcrumbScope local_310;
  char local_300;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 local_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 local_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  undefined4 local_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 local_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 local_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined8 local_280;
  undefined4 uStack_278;
  uint uStack_274;
  undefined8 local_270;
  undefined4 uStack_268;
  uint uStack_264;
  undefined8 local_260;
  undefined4 uStack_258;
  uint uStack_254;
  undefined8 local_248;
  int iStack_240;
  undefined4 uStack_23c;
  void *local_238;
  int iStack_230;
  undefined4 uStack_22c;
  FRHITransitionInfo *local_228;
  int iStack_220;
  undefined4 uStack_21c;
  code *local_218;
  undefined1 *local_210;
  FRHITransitionInfo *local_208;
  int iStack_200;
  undefined4 uStack_1fc;
  char *local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  wchar_t *pwStack_1e0;
  undefined8 local_1d8;
  int iStack_1d0;
  undefined4 uStack_1cc;
  void *local_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  uint uStack_1ac;
  FRHIBreadcrumbScope local_1a8;
  char local_198;
  FShaderBindingState local_188;
  undefined4 local_108;
  undefined4 uStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  TArrayView<FRHITransitionInfo_const_,int> local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  TArrayView<FRHITransitionInfo_const_,int> local_d8;
  uint uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  TSet<FRWBuffer_const_*,DefaultKeyFuncs<FRWBuffer_const_*,0>,FDefaultSetAllocator> local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_468;
  iVar16 = param_2->ArrayNum;
  if (0 < iVar16) {
    local_416 = param_4;
    local_415 = param_3;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      local_1f8 = 
      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingDynamicGeometryUpdateManager.cpp"
      ;
      pwStack_1e0 = L"RayTracingDynamicGeometryUpdate";
      uStack_1f0 = 0x373;
      local_1e8 = 0;
      ::Desc._padding_._0_4_ = 0x50f7aaf0;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_._0_4_ = 0x373;
      ::Desc._padding_._4_4_ = uStack_1ec;
      ::Desc._padding_._0_4_ = 0;
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_._0_4_ = 0x50f7b600;
      ::Desc._padding_._4_4_ = 1;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(``FRayTracingDynamicGeometryUpdateManager::DispatchUpdates'::__l10::<lambda_1>::
             operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar17 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
    pFVar18 = FMemStackBase::Alloc(&pFVar17->Inner,0x50,8);
    pFVar18->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar18->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar18->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar18->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar18->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar18->Data = (FRHIBreadcrumbData *)&::Desc;
    pFVar18->Allocator = pFVar17;
    pFVar18->TraceCpuSpecId = 0;
    pFVar18->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar14 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar18->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar18->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar18->ID = uVar14;
    pFVar18->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar18[1]._padding_ = (longlong)&::Desc;
    if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
       (bVar13 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar13)) {
      EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
      if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
        aVar15 = (atomic<unsigned_int>)
                 FCpuProfilerTrace::OutputEventType
                           ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_)
                            ,(char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                            (uint)::Desc._padding_);
        LOCK();
        ::Desc.TraceCpuSpecId = aVar15;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    }
    pFVar18->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
    FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_1a8,(FRHIComputeCommandList *)param_1,pFVar18);
    local_198 = '\x01';
    bVar13 = -1 < CpuChannel->Enabled;
    if (bVar13) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId886,"SortDispatchCommands",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingDynamicGeometryUpdateManager.cpp"
                 ,0x376);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId886);
    }
    pFVar34 = param_2->DataPtr;
    AlgoImpl::
    IntroSortInternal<FMeshComputeDispatchCommand_const_,int,FIdentityFunctor,TDereferenceWrapper<FMeshComputeDispatchCommand_const_,_FRayTracingDynamicGeometryUpdateManager::DispatchUpdates_::__l11::<lambda_2>_>_>
              (pFVar34,iVar16,local_414[0],(<lambda_2> *)local_414);
    if (bVar13) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    puVar19 = TThreadSingleton<FMemStack>::GetTlsSlot();
    local_210 = local_3e0;
    local_218 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    pFVar20 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_218,puVar19);
    local_400.Data = (FRHITransitionInfo *)0x0;
    local_3f8 = 0;
    iStack_3f4 = 0;
    local_3f0.Data = (FRHITransitionInfo *)0x0;
    local_3a8.Mem = (FMemStackBase *)(pFVar20 + 2);
    local_3e8 = 0;
    iStack_3e4 = 0;
    local_3a8.Top = (local_3a8.Mem)->Top;
    local_3a8.SavedChunk = *(FTaggedMemory **)(pFVar20 + 4);
    local_3a8.bPopped = false;
    local_3a8.NextTopmostMark = *(FMemMark **)(pFVar20 + 5);
    pFVar20[5] = (FTlsAutoCleanup)&local_3a8;
    local_410.Data = (FRHIUnorderedAccessView **)0x0;
    local_408 = 0;
    *(int *)(pFVar20 + 6) = *(int *)(pFVar20 + 6) + 1;
    UE::Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<FRHITransitionInfo>_>
              (0x30,8,iVar16,&local_400,0,&iStack_3f4);
    UE::Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<FRHITransitionInfo>_>
              (0x30,8,iVar16,&local_3f0,0,&iStack_3e4);
    UE::Core::Private::
    ReallocTo<0,TMemStackAllocator<0>::ForElementType<FRHIUnorderedAccessView_*>_>
              (8,8,iVar16,&local_410,0,(int *)((longlong)&local_408 + 4));
    local_3b8 = (FRWBuffer *)0x0;
    pFVar31 = pFVar34 + iVar16;
    local_a8.Elements._0_8_ = 0;
    local_a8.Elements._8_8_ = 0;
    local_a8.Elements._32_8_ = 0;
    local_a8.Elements._40_4_ = 0;
    local_a8.Elements._44_4_ = 0x80;
    local_a8.Elements._48_4_ = 0xffffffff;
    local_a8.Elements._52_4_ = 0;
    local_a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_a8.HashSize = 0;
    iVar16 = (int)local_408;
    pFVar12 = local_3b8;
    iVar10 = local_3f8;
    for (; local_3b8 = pFVar12, local_3f8 = iVar10, pFVar34 != pFVar31; pFVar34 = pFVar34 + 1) {
      local_3b8 = pFVar34->TargetBuffer;
      if (local_3b8 != (FRWBuffer *)0x0) {
        local_3d8 = (FRHITransitionInfo_u_8)(local_3b8->UAV).Reference;
        if (pFVar12 == local_3b8) {
          local_3b8 = pFVar12;
          if (iVar16 != 0) {
            uVar14 = 0;
            if ((int)(iVar16 - 1U) < iVar16) {
              uVar14 = ~(iVar16 - 1U) >> 0x1f;
            }
            if ((uVar14 == 0) &&
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
            pFVar12 = local_3b8;
            if ((FRHIUnorderedAccessView *)
                ((FRHITransitionInfo_u_8 *)(local_410.Data + (longlong)iVar16 + -1))->Resource ==
                (FRHIUnorderedAccessView *)local_3d8.Resource) goto LAB_14531914b;
          }
          if (((local_410.Data <= &local_3d8) &&
              (&local_3d8 < (FRHITransitionInfo_u_8 *)(local_410.Data + local_408._4_4_))) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if (iVar16 == local_408._4_4_) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<FRHIUnorderedAccessView_*>_>
                               (0x808,&local_410,(int *)((longlong)&local_408 + 4));
          }
          lVar21 = (longlong)iVar16;
          iVar16 = iVar16 + 1;
          local_408 = CONCAT44(local_408._4_4_,iVar16);
          ((FRHITransitionInfo_u_8 *)(local_410.Data + lVar21))->Resource =
               (FRHIResource *)local_3d8;
          pFVar12 = local_3b8;
        }
        else {
          local_418 = false;
          uVar14 = ((uint)((ulonglong)local_3b8 >> 0x14) & 0xffff ^
                   (uint)((ulonglong)local_3b8 >> 4)) * -0x7a143595;
          uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
          TSet<FRWBuffer_const_*,DefaultKeyFuncs<FRWBuffer_const_*,0>,FDefaultSetAllocator>::
          FindOrAddByHash<FRWBuffer_const_*_const_&>
                    (&local_a8,uVar14 >> 0x10 ^ uVar14,&local_3b8,&local_418);
          pFVar12 = local_3b8;
          if (local_418 == false) {
            local_380.field1_0x8.Resource = local_3d8.Resource;
            local_380._padding_._0_4_ = 0xffffffff;
            local_380._padding_._4_2_ = 0xffff;
            local_380.Type = UAV;
            local_380.AccessBefore = None;
            local_380.AccessAfter = UAVCompute;
            local_380.Flags = None;
            local_380.CommitInfo.bIsSet = false;
            if (((local_400.Data <= &local_380) && (&local_380 < local_400.Data + iStack_3f4)) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar13)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            if (local_3f8 == iStack_3f4) {
              local_3f8 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<FRHITransitionInfo>_>
                                    (0x830,&local_400,&iStack_3f4);
            }
            lVar21 = (longlong)local_3f8;
            local_3f8 = local_3f8 + 1;
            FRHITransitionInfo::FRHITransitionInfo(local_400.Data + lVar21,&local_380);
            local_350.field1_0x8 = local_3d8;
            local_350._padding_._0_4_ = 0xffffffff;
            local_350._padding_._4_2_ = 0xffff;
            local_350.Type = UAV;
            local_350.AccessBefore = UAVCompute;
            local_350.AccessAfter = SRVMask;
            local_350.Flags = None;
            local_350.CommitInfo.bIsSet = false;
            if (((local_3f0.Data <= &local_350) && (&local_350 < local_3f0.Data + iStack_3e4)) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar13)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            if (local_3e8 == iStack_3e4) {
              local_3e8 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<FRHITransitionInfo>_>
                                    (0x830,&local_3f0,&iStack_3e4);
            }
            lVar21 = (longlong)local_3e8;
            local_3e8 = local_3e8 + 1;
            FRHITransitionInfo::FRHITransitionInfo(local_3f0.Data + lVar21,&local_350);
            pFVar12 = local_3b8;
          }
        }
      }
LAB_14531914b:
      local_3b8 = pFVar12;
      pFVar12 = local_3b8;
      iVar10 = local_3f8;
    }
    local_3b0 = (atomic<FRHIShader_*>)0x0;
    local_208 = local_400.Data;
    if ((iVar10 < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    local_f8._12_4_ = uStack_1fc;
    local_f8.ArrayNum = iVar10;
    local_f8.DataPtr = local_208;
    iStack_200 = iVar10;
    FRHIComputeCommandList::Transition
              ((FRHIComputeCommandList *)param_1,&local_f8,AllowDecayPipelines);
    FVar11.Data = local_410.Data;
    local_1d8 = (FRHITransitionInfo_u_8 *)local_410.Data;
    if ((iVar16 < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iStack_1d0 = iVar16;
    if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
      pvVar28 = FMemStackBase::Alloc((FMemStackBase *)param_1,(ulonglong)(uint)(iVar16 * 8),8);
      memcpy(pvVar28,FVar11.Data,(ulonglong)(uint)(iVar16 * 8));
      puVar26 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
      *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
      **(undefined8 **)&param_1->field_0x30 = puVar26;
      *(undefined8 **)&param_1->field_0x30 = puVar26 + 1;
      if ((iVar16 < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar13)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      puVar26[1] = 0;
      *puVar26 = &___7FRHICommandBeginSpecificUAVOverlap__6B_;
      puVar26[2] = pvVar28;
      puVar26[3] = CONCAT44(uStack_1bc,iVar16);
      local_1c8 = pvVar28;
      iStack_1c0 = iVar16;
    }
    else {
      pIVar22 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_1);
      local_e8 = (undefined4)local_1d8;
      uStack_e4 = local_1d8._4_4_;
      iStack_e0 = iStack_1d0;
      uStack_dc = uStack_1cc;
      (**(code **)(pIVar22->_padding_ + 0x80))(pIVar22,&local_e8);
    }
    pvVar28 = ThreadLocalStoragePointer;
    pFVar34 = param_2->DataPtr;
    local_188.UniformBuffers[0] = (FRHIUniformBuffer *)0x0;
    local_188.UniformBuffers[1] = (FRHIUniformBuffer *)0x0;
    local_188.UniformBuffers[2] = (FRHIUniformBuffer *)0x0;
    local_188.UniformBuffers[3] = (FRHIUniformBuffer *)0x0;
    local_188.MaxUniformBufferUsed = -1;
    pFVar31 = pFVar34 + param_2->ArrayNum;
    local_188.UniformBuffers[4] = (FRHIUniformBuffer *)0x0;
    local_188.UniformBuffers[5] = (FRHIUniformBuffer *)0x0;
    local_188.UniformBuffers[6] = (FRHIUniformBuffer *)0x0;
    local_188.UniformBuffers[7] = (FRHIUniformBuffer *)0x0;
    local_188.UniformBuffers[8] = (FRHIUniformBuffer *)0x0;
    local_188.UniformBuffers[9] = (FRHIUniformBuffer *)0x0;
    local_188.UniformBuffers[10] = (FRHIUniformBuffer *)0x0;
    local_188.UniformBuffers[0xb] = (FRHIUniformBuffer *)0x0;
    local_188.UniformBuffers[0xc] = (FRHIUniformBuffer *)0x0;
    local_188.UniformBuffers[0xd] = (FRHIUniformBuffer *)0x0;
    aVar35 = local_3b0;
    if (pFVar34 != pFVar31) {
      do {
        aVar23 = (atomic<FRHIShader_*>)0x0;
        if ((pFVar34->MaterialShader).ShaderContent != (FRayTracingDynamicGeometryConverterCS *)0x0)
        {
          this = (((pFVar34->MaterialShader).ShaderMap)->Resource).Reference;
          if ((this == (FShaderMapResource *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Resource",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                  ,0x426,L""), bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar16 = *(int *)((longlong)&((pFVar34->MaterialShader).ShaderContent)->_padding_ + 4);
          aVar23 = (this->RHIShaders).Ptr[iVar16];
          if ((aVar23 == (atomic<FRHIShader_*>)0x0) &&
             (aVar23 = (atomic<FRHIShader_*>)
                       FShaderMapResource::CreateShaderOrCrash(this,iVar16,true),
             aVar23 == (atomic<FRHIShader_*>)0x0)) {
            if (4 < (byte)LogShaders._0_1_) {
              pFVar2 = (pFVar34->MaterialShader).ShaderMap;
              pFVar3 = (pFVar34->MaterialShader).ShaderContent;
              if ((pFVar2->PointerTable == (FShaderMapPointerTable *)0x0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("PointerTable",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                      ,0x9b4,L""), bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              FShader::GetType((FShader *)pFVar3,pFVar2->PointerTable);
              UE::Logging::Private::BasicLog<5>
                        ((FStaticBasicLogRecord *)
                         &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FRayTracingDynamicGeometryConverterCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                          ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
            }
            aVar23 = (atomic<FRHIShader_*>)0x0;
            aVar35 = local_3b0;
          }
        }
        if (aVar35 != aVar23) {
          SetComputePipelineState((FRHIComputeCommandList *)param_1,(FRHIComputeShader *)aVar23);
          local_2f8 = 0xffffffff;
          uStack_2f4 = 0;
          uStack_2f0 = 0;
          uStack_2ec = 0;
          uStack_2e8 = 0;
          uStack_2e4 = 0;
          local_188.MaxUniformBufferUsed = -1;
          local_188._4_4_ = 0;
          local_188.UniformBuffers[0] = (FRHIUniformBuffer *)0x0;
          uStack_2e0 = 0;
          uStack_2dc = 0;
          uStack_2d8 = 0;
          local_2d4 = 0;
          local_188.UniformBuffers[1] = (FRHIUniformBuffer *)0x0;
          local_188.UniformBuffers[2] = (FRHIUniformBuffer *)0x0;
          uStack_2d0 = 0;
          uStack_2cc = 0;
          uStack_2c8 = 0;
          local_2c4 = 0;
          local_188.UniformBuffers[3] = (FRHIUniformBuffer *)0x0;
          local_188.UniformBuffers[4] = (FRHIUniformBuffer *)0x0;
          uStack_2c0 = 0;
          uStack_2bc = 0;
          uStack_2b8 = 0;
          local_2b4 = 0;
          uStack_2b0 = 0;
          uStack_2ac = 0;
          uStack_2a8 = 0;
          local_2a4 = 0;
          uStack_2a0 = 0;
          uStack_29c = 0;
          uStack_298 = 0;
          local_294 = 0;
          local_188.UniformBuffers[7] = (FRHIUniformBuffer *)0x0;
          local_188.UniformBuffers[8] = (FRHIUniformBuffer *)0x0;
          local_188.UniformBuffers[5] = (FRHIUniformBuffer *)0x0;
          local_188.UniformBuffers[6] = (FRHIUniformBuffer *)0x0;
          uStack_290 = 0;
          uStack_28c = 0;
          uStack_288 = 0;
          uStack_284 = 0;
          local_188.UniformBuffers[0xb] = (FRHIUniformBuffer *)0x0;
          local_188.UniformBuffers[0xc] = (FRHIUniformBuffer *)0x0;
          local_188.UniformBuffers[9] = (FRHIUniformBuffer *)0x0;
          local_188.UniformBuffers[10] = (FRHIUniformBuffer *)0x0;
          local_188.UniformBuffers[0xd] = (FRHIUniformBuffer *)0x0;
          aVar35 = aVar23;
          local_3b0 = aVar23;
        }
        local_300 = '\0';
        if (GShowMaterialDrawEvents != 0) {
          pFVar4 = pFVar34->Geometry;
          local_3c0[0] = (uint)(pFVar34->bApplyWorldPositionOffset != false);
          if ((*(int *)(*(longlong *)((longlong)pvVar28 + (ulonglong)_tls_index * 8) + 0x9d4c) <
               ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            ::Desc._padding_._0_4_ = 0x3cf;
            ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
            local_b8 = 0;
            uStack_b4 = 0;
            ::Desc._12_8_ = ZEXT48(uStack_bc);
            ::Desc._padding_._4_4_ = 0;
            ::Desc._padding_ = (longlong)u_RayTracingDynam;
            ::Desc._padding_ = (longlong)u__s___NumVertice;
            InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
            ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
            ::Desc.TraceGpuSpecId = 0;
            ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
            atexit(``FRayTracingDynamicGeometryUpdateManager::DispatchUpdates'::__l40::<lambda_3>::
                   operator()<FDebugName_&,unsigned_int_const_&,unsigned_int_const_&,int>'::__l2::
                   _dynamic_atexit_destructor_for__Desc__);
            _Init_thread_footer(&::_TSS0);
          }
          pFVar17 = FRHIComputeCommandList::GetBreadcrumbAllocator
                              ((FRHIComputeCommandList *)param_1);
          pTVar24 = FMemStackBase::Alloc(&pFVar17->Inner,0x68,8);
          pTVar24 = UE::RHI::Breadcrumbs::Private::
                    TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<45,FDebugName,unsigned_int,unsigned_int,int>_>
                    ::
                    TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<45,FDebugName,unsigned_int,unsigned_int,int>_><FDebugName_&,unsigned_int_const_&,unsigned_int_const_&,int_&>
                              (pTVar24,pFVar17,&::Desc,&(pFVar4->Initializer).DebugName,
                               &pFVar34->NumCPUVertices,&pFVar34->MinVertexIndex,(int *)local_3c0);
          FRHIBreadcrumbScope::FRHIBreadcrumbScope
                    (&local_310,(FRHIComputeCommandList *)param_1,(FRHIBreadcrumbNode *)pTVar24);
          local_300 = '\x01';
        }
        puVar26 = (undefined8 *)0x0;
        puVar25 = *(undefined8 **)&param_1->field_0xc0;
        if (*(undefined8 **)&param_1->field_0xc0 == (undefined8 *)0x0) {
          puVar25 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x48,0x10);
          if (puVar25 != (undefined8 *)0x0) {
            puVar26 = FMemStackBase::Alloc((FMemStackBase *)param_1,0xb8,0x10);
            if (puVar26 == (undefined8 *)0x0) {
              puVar26 = (undefined8 *)0x0;
            }
            else {
              *puVar26 = *(undefined8 *)&param_1->field_0xc8;
              puVar26[1] = param_1;
              FMemStackBase::FMemStackBase((FMemStackBase *)(puVar26 + 2),Small);
              FMemStackBase::FMemStackBase((FMemStackBase *)(puVar26 + 7),Small);
              FMemStackBase::FMemStackBase((FMemStackBase *)(puVar26 + 0xc),Small);
              FMemStackBase::FMemStackBase((FMemStackBase *)(puVar26 + 0x11),Small);
              puVar26[0x16] = 0;
              *(undefined8 **)&param_1->field_0xc8 = puVar26;
            }
            *puVar25 = puVar26;
            puVar25[1] = 0;
            *(undefined4 *)(puVar25 + 2) = 0;
            puVar25[3] = 0;
            *(undefined4 *)(puVar25 + 4) = 0;
            puVar25[5] = 0;
            *(undefined4 *)(puVar25 + 6) = 0;
            puVar25[7] = 0;
            *(undefined4 *)(puVar25 + 8) = 0;
            puVar26 = puVar25;
          }
          *(undefined8 **)&param_1->field_0xc0 = puVar26;
          puVar25 = puVar26;
        }
        if (0 < *(int *)(puVar25 + 8) + *(int *)(puVar25 + 6) + *(int *)(puVar25 + 4)) {
          local_417 = 0;
          bVar13 = `FRHICommandListBase::GetScratchShaderParameters'::__l6::<lambda_1>::operator()
                             (&local_417);
          if (!bVar13) {
            plVar5 = *(longlong **)&param_1->field_0xc0;
            local_1b8 = 0;
            uStack_1b0 = 0;
            local_280 = 0;
            uStack_278 = 0;
            local_270 = 0;
            *(undefined8 *)(*plVar5 + 0xb0) = 0;
            plVar5[1] = 0;
            plVar5[2] = (ulonglong)uStack_1ac << 0x20;
            uStack_268 = 0;
            local_260 = 0;
            uStack_258 = 0;
            plVar5[3] = 0;
            plVar5[4] = (ulonglong)uStack_274 << 0x20;
            plVar5[5] = 0;
            plVar5[6] = (ulonglong)uStack_264 << 0x20;
            plVar5[7] = 0;
            plVar5[8] = (ulonglong)uStack_254 << 0x20;
          }
        }
        pFVar3 = (pFVar34->MaterialShader).ShaderContent;
        pFVar6 = *(FRHIBatchedShaderParameters **)&param_1->field_0xc0;
        pFVar7 = (pFVar34->TargetBuffer->UAV).Reference;
        if ((pFVar3->RWVertexPositions).NumResources != '\0') {
          pFVar29 = pFVar6->Allocator;
          uVar1 = (pFVar3->RWVertexPositions).BaseIndex;
          pFVar8 = pFVar29->AttachedParameters;
          if ((pFVar3->RWVertexPositions).Type == BindlessUAV) {
            local_3de = uVar1;
            local_320 = pFVar7;
            if (pFVar8 != pFVar6) {
              if ((pFVar8 != (FRHIBatchedShaderParameters *)0x0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("!AttachedParameters",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                                      ,0x82,
                                      L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                                     ), bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pFVar29->AttachedParameters = pFVar6;
            }
            pFVar29 = pFVar6->Allocator;
            pTVar32 = &pFVar6->BindlessParameters;
            puVar27 = &local_3de;
            ppFVar33 = &local_320;
            pFVar30 = &pFVar29->BindlessParameters;
          }
          else {
            local_3dc[0] = uVar1;
            local_318 = pFVar7;
            if (pFVar8 != pFVar6) {
              if ((pFVar8 != (FRHIBatchedShaderParameters *)0x0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("!AttachedParameters",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                                      ,0x82,
                                      L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                                     ), bVar13)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pFVar29->AttachedParameters = pFVar6;
            }
            pFVar29 = pFVar6->Allocator;
            pTVar32 = &pFVar6->ResourceParameters;
            puVar27 = local_3dc;
            ppFVar33 = &local_318;
            pFVar30 = &pFVar29->ResourceParameters;
          }
          FRHIBatchedShaderParametersAllocator::
          Emplace<FRHIShaderParameterResource,FRHIUnorderedAccessView_*_&,unsigned_short_&>
                    (pFVar29,pFVar30,pTVar32,ppFVar33,puVar27);
        }
        FMeshDrawShaderBindings::SetParameters(&pFVar34->ShaderBindings,pFVar6,&local_188);
        FRHIComputeCommandList::SetBatchedShaderParameters
                  ((FRHIComputeCommandList *)param_1,(FRHIComputeShader *)aVar35,pFVar6);
        iVar16 = pFVar34->NumThreads + 0x3f;
        FComputeShaderUtils::GetGroupCountWrapped
                  ((TIntVector3<int> *)&local_3d0._s_0,(int)((iVar16 >> 0x1f & 0x3fU) + iVar16) >> 6
                  );
        if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
          puVar26 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
          *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
          **(undefined8 **)&param_1->field_0x30 = puVar26;
          *(undefined8 **)&param_1->field_0x30 = puVar26 + 1;
          puVar26[1] = 0;
          *(int *)(puVar26 + 2) = local_3d0._s_0.X;
          *puVar26 = &___7FRHICommandDispatchComputeShader__6B_;
          *(int *)((longlong)puVar26 + 0x14) = local_3d0._s_0.Y;
          *(int *)(puVar26 + 3) = local_3d0._s_0.Z;
        }
        else {
          pIVar22 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_1);
          (**(code **)(pIVar22->_padding_ + 0x18))
                    (pIVar22,local_3d0._s_0.X,local_3d0._s_0.Y,local_3d0._s_0.Z);
        }
        if (local_300 != '\0') {
          FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_310);
        }
        pFVar34 = pFVar34 + 1;
      } while (pFVar34 != pFVar31);
      iVar16 = (int)local_408;
    }
    FVar11.Data = local_410.Data;
    local_248 = (FRHITransitionInfo_u_8 *)local_410.Data;
    if ((iVar16 < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iStack_240 = iVar16;
    if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
      pvVar28 = FMemStackBase::Alloc((FMemStackBase *)param_1,(ulonglong)(uint)(iVar16 * 8),8);
      memcpy(pvVar28,FVar11.Data,(ulonglong)(uint)(iVar16 * 8));
      puVar26 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
      *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
      **(undefined8 **)&param_1->field_0x30 = puVar26;
      *(undefined8 **)&param_1->field_0x30 = puVar26 + 1;
      if ((iVar16 < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar13)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      puVar26[1] = 0;
      *puVar26 = &___7FRHICommandEndSpecificUAVOverlap__6B_;
      puVar26[2] = pvVar28;
      puVar26[3] = CONCAT44(uStack_22c,iVar16);
      local_238 = pvVar28;
      iStack_230 = iVar16;
    }
    else {
      pIVar22 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_1);
      local_108 = (undefined4)local_248;
      uStack_104 = local_248._4_4_;
      iStack_100 = iStack_240;
      uStack_fc = uStack_23c;
      (**(code **)(pIVar22->_padding_ + 0x90))(pIVar22,&local_108);
    }
    iVar16 = local_3e8;
    local_228 = local_3f0.Data;
    if ((local_3e8 < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iStack_220 = iVar16;
    local_d8._12_4_ = uStack_21c;
    local_d8.ArrayNum = iVar16;
    local_d8.DataPtr = local_228;
    FRHIComputeCommandList::Transition
              ((FRHIComputeCommandList *)param_1,&local_d8,local_415,local_416,None);
    local_a8.HashSize = 0;
    if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_a8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FRWBuffer_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FRWBuffer_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_a8.Elements);
    if (local_3a8.bPopped == false) {
      if (((local_3a8.Mem)->TopMark != &local_3a8) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Mem.TopMark == this",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                              ,0x215,L""), bVar13)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_3a8.bPopped = true;
      (local_3a8.Mem)->NumMarks = (local_3a8.Mem)->NumMarks + -1;
      if (local_3a8.SavedChunk != (local_3a8.Mem)->TopChunk) {
        FMemStackBase::FreeChunks(local_3a8.Mem,local_3a8.SavedChunk);
      }
      (local_3a8.Mem)->Top = local_3a8.Top;
      (local_3a8.Mem)->TopMark = local_3a8.NextTopmostMark;
      local_3a8.Top = (uchar *)0x0;
    }
    if (local_198 != '\0') {
      FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_1a8);
    }
  }
  return;
}

// DispatchUpdates @ 145319c60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
FRayTracingDynamicGeometryUpdateManager::DispatchUpdates
          (FRayTracingDynamicGeometryUpdateManager *this,FRHICommandList *param_1,
          FRHIBuffer *param_2,ERHIPipeline param_3,ERHIPipeline param_4)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  atomic<unsigned_int> aVar8;
  FRHIBreadcrumbAllocator *pFVar9;
  FRHIBreadcrumbNode *pFVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  uint *puVar16;
  int iVar17;
  undefined1 local_res8 [8];
  undefined4 uStack_10c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  undefined8 uStack_d8;
  FMeshComputeDispatchCommand *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  FRayTracingGeometryBuildParams *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  char *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  wchar_t *pwStack_90;
  FRHIBufferRange local_88;
  FRHIBreadcrumbScope local_70;
  undefined1 local_60;
  TArrayView<FMeshComputeDispatchCommand_const_,int> local_58;
  TArrayView<FRayTracingGeometryBuildParams_const_,int> local_48;
  
  iVar3 = *(int *)&(this->DispatchCommandsPerView).field_0x28;
  puVar1 = &(this->DispatchCommandsPerView).field_0x10;
  iVar17 = 0;
  iVar14 = 0;
  uVar6 = 1;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->DispatchCommandsPerView).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar13 = *puVar16;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar17;
      iVar14 = iVar14 + 0x20;
      iVar17 = iVar17 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_145319d0f;
      uVar13 = puVar16[lVar11 + 1];
    }
    uVar6 = ~(uVar13 - 1) & uVar13;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar7 = iVar14 + -1 + (int)lVar11;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_145319d0f:
  uVar13 = *(uint *)&(this->DispatchCommandsPerView).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_f8._padding_ = CONCAT44(uVar6,iVar17);
  TStack_f8.CurrentBitIndex = iVar7;
  TStack_f8.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar13 >> 5;
  TStack_f8._28_4_ = iVar7;
  TStack_f8.BaseBitIndex = iVar14;
  uStack_d8 = CONCAT44(uStack_10c,
                       *(int *)&(this->DispatchCommandsPerView).field_0x8 -
                       *(int *)&(this->DispatchCommandsPerView).field_0x34);
  TStack_f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(this->DispatchCommandsPerView).field_0x28;
  if (uVar13 != uVar6) {
    puVar15 = *(undefined1 **)&(this->DispatchCommandsPerView).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar17 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar17;
      uVar12 = uVar12 + 0x20;
      iVar17 = iVar17 + 1;
      uVar13 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_145319e30;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(~(uVar13 - 1) & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar6 < (int)uVar13) {
      uVar13 = uVar6;
    }
  }
LAB_145319e30:
  while( true ) {
    if (*(int *)&(this->DispatchCommandsPerView).field_0x8 -
        *(int *)&(this->DispatchCommandsPerView).field_0x34 != (int)uStack_d8) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FRHIUniformBuffer_*,TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_f8.CurrentBitIndex == uVar13) &&
       (TStack_f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar11 = (longlong)TStack_f8.CurrentBitIndex * 0x20 +
             *(longlong *)&this->DispatchCommandsPerView;
    local_c8 = *(FMeshComputeDispatchCommand **)(lVar11 + 8);
    iVar3 = *(int *)(lVar11 + 0x10);
    if ((iVar3 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_58._12_4_ = uStack_bc;
    local_58.ArrayNum = iVar3;
    local_58.DataPtr = local_c8;
    iStack_c0 = iVar3;
    DispatchUpdates(param_1,&local_58,param_3,param_4);
    TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
  }
  if (0 < (this->BuildParams).ArrayNum) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      uStack_a0 = 0x3fc;
      local_a8 = 
      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingDynamicGeometryUpdateManager.cpp"
      ;
      local_98 = 0;
      pwStack_90 = L"Build";
      ::Desc._padding_._0_4_ = 0x50f7aaf0;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_._0_4_ = 0x3fc;
      ::Desc._padding_._4_4_ = uStack_9c;
      ::Desc._padding_._0_4_ = 0;
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_._0_4_ = 0x50655b38;
      ::Desc._padding_._4_4_ = 1;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(``FRayTracingDynamicGeometryUpdateManager::DispatchUpdates'::__l14::<lambda_1>::
             operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar9 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
    pFVar10 = FMemStackBase::Alloc(&pFVar9->Inner,0x50,8);
    pFVar10->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar10->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar10->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar10->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar10->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar10->Data = (FRHIBreadcrumbData *)&::Desc;
    pFVar10->Allocator = pFVar9;
    pFVar10->TraceCpuSpecId = 0;
    pFVar10->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar6 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar10->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar10->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar10->ID = uVar6;
    pFVar10->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar10[1]._padding_ = (longlong)&::Desc;
    if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
       (bVar5 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar5)) {
      EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
      if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
        aVar8 = (atomic<unsigned_int>)
                FCpuProfilerTrace::OutputEventType
                          ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                           (char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                           (uint)::Desc._padding_);
        LOCK();
        ::Desc.TraceCpuSpecId = aVar8;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    }
    pFVar10->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
    FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_70,(FRHIComputeCommandList *)param_1,pFVar10);
    iStack_b0 = (this->BuildParams).ArrayNum;
    local_b8 = (FRayTracingGeometryBuildParams *)(this->BuildParams).AllocatorInstance.Data;
    local_60 = 1;
    local_88.Size = 0;
    local_88.Offset = 0;
    local_88.Buffer = param_2;
    if ((iStack_b0 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_48._12_4_ = uStack_ac;
    local_48.ArrayNum = iStack_b0;
    local_48.DataPtr = local_b8;
    FRHIComputeCommandList::BuildAccelerationStructures
              ((FRHIComputeCommandList *)param_1,&local_48,&local_88);
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_70);
  }
  EndUpdate(this);
  return;
}

// EndUpdate @ 14531b0c0

void __thiscall
FRayTracingDynamicGeometryUpdateManager::EndUpdate(FRayTracingDynamicGeometryUpdateManager *this)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = &(this->ReferencedUniformBuffers).ArrayMax;
  uVar2 = *piVar1;
  if (-1 < (int)uVar2) {
    DestructItems<TRefCountPtr<FRHIUniformBuffer>,int>
              ((TRefCountPtr<FRHIUniformBuffer> *)
               (this->ReferencedUniformBuffers).AllocatorInstance.Data,
               (this->ReferencedUniformBuffers).ArrayNum);
    (this->ReferencedUniformBuffers).ArrayNum = 0;
    if ((this->ReferencedUniformBuffers).ArrayMax != uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar2,&(this->ReferencedUniformBuffers).AllocatorInstance,0,piVar1);
    }
    Clear(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// ScheduleUpdates @ 14533b2a0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRayTracingDynamicGeometryUpdateManager::ScheduleUpdates
          (FRayTracingDynamicGeometryUpdateManager *this,bool param_1)

{
  uint *puVar1;
  int *piVar2;
  EGeometryStateFlags *pEVar3;
  TArray<FRayTracingGeometryBuildParams,TSizedDefaultAllocator<32>_> *pTVar4;
  undefined1 *puVar5;
  FRayTracingGeometry *pFVar6;
  FRHIRayTracingGeometry *this_00;
  FName FVar7;
  code *pcVar8;
  TConsoleVariableData<int> *pTVar9;
  TConsoleVariableData<int> *pTVar10;
  int iVar11;
  bool bVar12;
  char cVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  ulonglong *puVar17;
  TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_> *pTVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<FStat_STAT_RayTracingDynamicSkippedPrimitives> FVar20;
  FThreadStats *pFVar21;
  FThreadStatsPool *pFVar22;
  FRayTracingDynamicGeometryBuildParams *pFVar23;
  FThreadSafeStaticStat<FStat_STAT_RayTracingDynamicUpdatePrimitives> FVar24;
  FThreadSafeStaticStat<FStat_STAT_RayTracingDynamicBuildPrimitives> FVar25;
  uint uVar26;
  undefined1 *puVar27;
  ulonglong uVar28;
  FScriptContainerElement *pFVar29;
  uint uVar30;
  FScriptContainerElement *pFVar31;
  uchar auVar32 [8];
  uchar auVar33 [8];
  FRayTracingDynamicGeometryBuildParams *pFVar34;
  FNameEntryId FVar35;
  bool bVar36;
  uint local_res8;
  uint uStackX_c;
  char local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_168;
  uint local_160;
  int local_15c;
  uint local_158;
  undefined1 local_154 [4];
  uint local_150;
  uint local_14c;
  uint local_148;
  uint local_144;
  FRHIRayTracingGeometry *local_140;
  undefined4 local_138;
  FScriptContainerElement *local_130;
  int iStack_128;
  undefined4 uStack_124;
  uint local_120;
  uint uStack_11c;
  FRHIUniformBuffer *local_118;
  FName local_110;
  FScriptContainerElement *local_108;
  FRayTracingDynamicGeometryBuildParams *local_100;
  FName local_f8;
  FName local_f0;
  FStatMessage local_e8;
  FStatMessage local_d8;
  FStatMessage local_c8;
  FRayTracingDynamicGeometryUpdateManager *local_b8;
  FScriptContainerElement *local_b0;
  uint *local_a8;
  FScriptContainerElement *local_a0;
  int iStack_98;
  undefined4 uStack_94;
  FScriptContainerElement *local_90;
  int iStack_88;
  undefined4 uStack_84;
  FName local_80;
  FName local_78;
  FName local_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  
  bVar36 = -1 < CpuChannel->Enabled;
  local_res10 = param_1;
  if (bVar36) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId640,"FRayTracingDynamicGeometryUpdateManager::Update",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingDynamicGeometryUpdateManager.cpp"
               ,0x280);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId640);
  }
  uVar30 = (this->DynamicGeometryUpdates).ArrayNum + (this->DynamicGeometryBuilds).ArrayNum;
  if (uVar30 != 0) {
    if ((*(int *)&(this->DispatchCommandsPerView).field_0x8 !=
         *(int *)&(this->DispatchCommandsPerView).field_0x34) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("DispatchCommandsPerView.IsEmpty()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingDynamicGeometryUpdateManager.cpp"
                            ,0x289,
                            L"DispatchCommandsPerView is not empty. Previous frame updates were not dispatched."
                           ), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (((this->BuildParams).ArrayNum != 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("BuildParams.IsEmpty()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingDynamicGeometryUpdateManager.cpp"
                            ,0x28a,
                            L"BuildParams is not empty. Previous frame updates were not dispatched."
                           ), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar31 = (this->ReferencedUniformBuffers).AllocatorInstance.Data;
    iVar15 = (this->ReferencedUniformBuffers).ArrayNum;
    pFVar29 = pFVar31 + (longlong)iVar15 * 8;
    while( true ) {
      if ((this->ReferencedUniformBuffers).ArrayNum != iVar15) {
        local_res8 = local_res8 & 0xffffff00;
        `TCheckedPointerIterator<TRefCountPtr<FRHIUniformBuffer>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_res8);
      }
      if (pFVar31 == pFVar29) break;
      local_118 = *(FRHIUniformBuffer **)pFVar31;
      uVar26 = ((uint)((ulonglong)local_118 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_118 >> 4)) *
               -0x7a143595;
      uVar26 = (uVar26 >> 0xd ^ uVar26) * -0x3d4d51cb;
      uVar26 = uVar26 >> 0x10 ^ uVar26;
      if (*(int *)&(this->DispatchCommandsPerView).field_0x8 !=
          *(int *)&(this->DispatchCommandsPerView).field_0x34) {
        puVar5 = *(undefined1 **)&(this->DispatchCommandsPerView).field_0x40;
        puVar27 = &(this->DispatchCommandsPerView).field_0x38;
        if (puVar5 != (undefined1 *)0x0) {
          puVar27 = puVar5;
        }
        iVar16 = *(int *)(puVar27 +
                         (ulonglong)
                         (*(int *)&(this->DispatchCommandsPerView).field_0x48 - 1U & uVar26) * 4);
        if (iVar16 != -1) {
          do {
            puVar17 = (ulonglong *)
                      ((longlong)iVar16 * 0x20 + *(longlong *)&this->DispatchCommandsPerView);
            if ((FRHIUniformBuffer *)*puVar17 == local_118) {
              if (puVar17 != (ulonglong *)0x0) {
                pTVar18 = (TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_> *)
                          (puVar17 + 1);
                goto LAB_14533b459;
              }
              break;
            }
            iVar16 = (int)puVar17[3];
          } while (iVar16 != -1);
        }
      }
      pTVar18 = TMapBase<FRHIUniformBuffer_*,TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIUniformBuffer_*,TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_>,0>_>
                ::EmplaceByHash<FRHIUniformBuffer_*_const_&>
                          ((TMapBase<FRHIUniformBuffer_*,TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIUniformBuffer_*,TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_>,0>_>
                            *)&this->DispatchCommandsPerView,uVar26,&local_118);
LAB_14533b459:
      if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar30);
      }
      if (pTVar18->ArrayMax < (int)uVar30) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xa8,8,uVar30,&pTVar18->AllocatorInstance,pTVar18->ArrayNum,&pTVar18->ArrayMax);
      }
      pFVar31 = pFVar31 + 8;
    }
    if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar30);
    }
    piVar2 = &(this->BuildParams).ArrayMax;
    if (*piVar2 < (int)uVar30) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,uVar30,&(this->BuildParams).AllocatorInstance,(this->BuildParams).ArrayNum,
                 piVar2);
    }
    local_108 = (this->Segments).AllocatorInstance.Data;
    local_15c = 0;
    iVar15 = (this->DynamicGeometryBuilds).ArrayNum;
    pFVar23 = (FRayTracingDynamicGeometryBuildParams *)
              (this->DynamicGeometryBuilds).AllocatorInstance.Data;
    local_14c = GRHIGlobals.RayTracing.ScratchBufferAlignment;
    local_a8 = &local_158;
    local_158 = 0;
    pFVar34 = pFVar23 + iVar15;
    local_b8 = this;
    local_b0 = local_108;
    while( true ) {
      if ((this->DynamicGeometryBuilds).ArrayNum != iVar15) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FRayTracingDynamicGeometryUpdateManager::FRayTracingDynamicGeometryBuildParams,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      pTVar9 = CVarRTDynGeomMaxUpdatePrimitivesPerFrame.Ref;
      if (pFVar23 == pFVar34) break;
      `FRayTracingDynamicGeometryUpdateManager::ScheduleUpdates'::__l2::<lambda_1>::operator()
                (&local_b8,pFVar23);
      local_15c = local_15c + (pFVar23->Geometry->Initializer).TotalPrimitiveCount;
      pFVar23 = pFVar23 + 1;
    }
    bVar12 = IsInParallelRenderingThread();
    if ((!bVar12) &&
       (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pTVar10 = CVarRTDynGeomForceBuildMaxUpdatePrimitivesPerFrame.Ref;
    uVar30 = pTVar9->ShadowedValue[1];
    local_148 = uVar30;
    bVar12 = IsInParallelRenderingThread();
    if ((!bVar12) &&
       (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pTVar9 = CVarRTDynGeomForceBuildMinUpdatesSinceLastBuild.Ref;
    uVar26 = pTVar10->ShadowedValue[1];
    bVar12 = IsInParallelRenderingThread();
    if ((!bVar12) &&
       (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_150 = pTVar9->ShadowedValue[1];
    local_160 = 0;
    local_168 = 0;
    if ((uVar30 != 0xffffffff) || (uVar26 != 0)) {
      AlgoImpl::
      IntroSortInternal<FRayTracingDynamicGeometryUpdateManager::FRayTracingDynamicGeometryBuildParams,int,FIdentityFunctor,TDereferenceWrapper<FRayTracingDynamicGeometryUpdateManager::FRayTracingDynamicGeometryBuildParams,_FRayTracingDynamicGeometryUpdateManager::ScheduleUpdates_::__l34::<lambda_2>_>_>
                ((FRayTracingDynamicGeometryBuildParams *)
                 (this->DynamicGeometryUpdates).AllocatorInstance.Data,
                 (this->DynamicGeometryUpdates).ArrayNum,local_res8._0_1_,(<lambda_2> *)local_154);
    }
    local_144 = (this->DynamicGeometryUpdates).ArrayNum;
    uVar28 = (ulonglong)(int)local_144;
    pFVar34 = (FRayTracingDynamicGeometryBuildParams *)
              (this->DynamicGeometryUpdates).AllocatorInstance.Data;
    local_100 = pFVar34 + uVar28;
    uVar30 = 0;
    while( true ) {
      while( true ) {
        while( true ) {
          pFVar23 = local_100;
          if ((this->DynamicGeometryUpdates).ArrayNum != (int)uVar28) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<FRayTracingDynamicGeometryUpdateManager::FRayTracingDynamicGeometryBuildParams,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_res20);
          }
          if (pFVar34 == pFVar23) goto LAB_14533baff;
          pFVar6 = pFVar34->Geometry;
          this_00 = (pFVar6->RayTracingGeometryRHI).Reference;
          uVar14 = (pFVar6->Initializer).TotalPrimitiveCount;
          auVar33[4] = '\0';
          auVar33[5] = '\0';
          auVar33[6] = '\0';
          auVar33[7] = '\0';
          auVar33[0] = (char)uVar14;
          auVar33[1] = (char)(uVar14 >> 8);
          auVar33[2] = (char)(uVar14 >> 0x10);
          auVar33[3] = (char)(uVar14 >> 0x18);
          if ((local_res10 == '\0') ||
             (cVar13 = (**(code **)((longlong)*GRayTracingGeometryManager + 0x70))
                                 (GRayTracingGeometryManager,pFVar6->RayTracingGeometryHandle),
             cVar13 != '\0')) break;
          if ((uVar14 != 0) && (FThreadStats::bPrimaryEnable != false)) {
            FVar20 = StatPtr_STAT_RayTracingDynamicSkippedPrimitives;
            if (StatPtr_STAT_RayTracingDynamicSkippedPrimitives ==
                (FThreadSafeStaticStat<FStat_STAT_RayTracingDynamicSkippedPrimitives>)0x0) {
              pFVar19 = ::FName::FName(&local_80,"STAT_RayTracingDynamicSkippedPrimitives");
              FVar20 = (FThreadSafeStaticStat<FStat_STAT_RayTracingDynamicSkippedPrimitives>)
                       FThreadSafeStaticStatBase::DoSetup
                                 ((FThreadSafeStaticStatBase *)
                                  &StatPtr_STAT_RayTracingDynamicSkippedPrimitives,*pFVar19,
                                  L"Ray tracing dynamic skipped primitives",
                                  "STATGROUP_SceneRendering","STATCAT_Advanced",L"Scene Rendering",
                                  true,true,ST_int64,false,false,MCR_Invalid);
            }
            FVar7 = *(FName *)FVar20;
            FVar35 = FVar7.ComparisonIndex.Value;
            uVar14 = FVar7.Number;
            local_120 = FVar35.Value;
            uStack_11c = uVar14;
            if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
               (FThreadStats::TlsSlot != 0xffffffff)) {
              pFVar21 = TlsGetValue(FThreadStats::TlsSlot);
              if (pFVar21 == (FThreadStats *)0x0) {
                pFVar22 = FThreadStatsPool::Get();
                pFVar21 = FThreadStatsPool::GetFromPool(pFVar22);
              }
              local_e8.NameAndInfo.Number = uVar14 & 0xffffafff | 0xa000;
              local_110 = FVar7;
              local_e8.StatData.Pad = auVar33;
              local_e8.NameAndInfo.Index.Value = FVar35.Value;
              FThreadStats::AddStatMessage(pFVar21,&local_e8);
              FStatsTrace::Add(&local_110,(long64)auVar33);
              if (pFVar21->ScopeCount == 0) {
                FThreadStats::Flush(pFVar21,false,false);
                uVar30 = local_168;
              }
              else {
                uVar30 = local_168;
                if (FThreadStats::bIsRawStatsActive != false) {
                  FThreadStats::FlushRawStats(pFVar21,false,false);
                }
              }
            }
          }
          uVar28 = (ulonglong)local_144;
          pFVar34 = pFVar34 + 1;
        }
        if (((uVar26 == 0) || (pFVar34->Geometry->NumUpdatesSinceLastBuild <= local_150)) ||
           (uVar26 < uVar30)) break;
        `FRayTracingDynamicGeometryUpdateManager::ScheduleUpdates'::__l2::<lambda_1>::operator()
                  (&local_b8,pFVar34);
        local_15c = local_15c + uVar14;
        local_168 = uVar30 + uVar14;
        uVar28 = (ulonglong)local_144;
        pFVar34 = pFVar34 + 1;
        uVar30 = local_168;
      }
      local_160 = local_160 + uVar14;
      pFVar34->Geometry->LastUpdatedFrame = GFrameCounterRenderThread;
      puVar1 = &pFVar34->Geometry->NumUpdatesSinceLastBuild;
      *puVar1 = *puVar1 + 1;
      pEVar3 = &pFVar34->Geometry->GeometryState;
      *pEVar3 = *pEVar3 & ~RequiresUpdate;
      local_58 = this_00->_padding_;
      local_68 = this_00->_padding_;
      lStack_60 = this_00->_padding_;
      local_138 = 0;
      local_130 = (FScriptContainerElement *)0x0;
      iStack_128 = 0;
      local_158 = (local_14c - 1) + local_158 + (int)local_58 & -local_14c;
      local_140 = this_00;
      FRHIResource::AddRef((FRHIResource *)this_00);
      local_138 = 1;
      iVar15 = (pFVar34->Geometry->Initializer).Segments.ArrayNum;
      if (pFVar34->SegmentOffset < 0) {
        local_90 = (pFVar34->Geometry->Initializer).Segments.AllocatorInstance.Data;
        uStack_124 = uStack_84;
        pFVar29 = local_a0;
        iVar16 = iStack_98;
        iVar11 = iVar15;
        pFVar31 = local_90;
        if ((iVar15 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), uStack_124 = uStack_84, pFVar29 = local_a0,
           iVar16 = iStack_98, pFVar31 = local_90, bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      else {
        pFVar29 = local_108 + (longlong)pFVar34->SegmentOffset * 0x28;
        uStack_124 = uStack_94;
        iVar16 = iVar15;
        iVar11 = iStack_88;
        pFVar31 = pFVar29;
        if ((iVar15 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), uStack_124 = uStack_94, iVar11 = iStack_88, bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      local_130 = pFVar31;
      iStack_88 = iVar11;
      iStack_98 = iVar16;
      local_a0 = pFVar29;
      pTVar4 = &this->BuildParams;
      pFVar29 = (pTVar4->AllocatorInstance).Data;
      iStack_128 = iVar15;
      if (((pFVar29 <= (FScriptContainerElement *)&local_140) &&
          ((FScriptContainerElement *)&local_140 <
           pFVar29 + (longlong)(this->BuildParams).ArrayMax * 0x20)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar15 = (this->BuildParams).ArrayNum;
      if (iVar15 == (this->BuildParams).ArrayMax) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,&pTVar4->AllocatorInstance,&(this->BuildParams).ArrayMax);
      }
      (this->BuildParams).ArrayNum = iVar15 + 1;
      pFVar29 = (pTVar4->AllocatorInstance).Data + (longlong)iVar15 * 0x20;
      *(undefined8 *)pFVar29 = 0;
      *(FRHIRayTracingGeometry **)pFVar29 = local_140;
      local_140 = (FRHIRayTracingGeometry *)0x0;
      *(undefined4 *)(pFVar29 + 8) = local_138;
      *(FScriptContainerElement **)(pFVar29 + 0x10) = local_130;
      *(ulonglong *)(pFVar29 + 0x18) = CONCAT44(uStack_124,iStack_128);
      if ((pFVar34->DispatchCommands).ArrayNum != 0) {
        pFVar23 = (FRayTracingDynamicGeometryBuildParams *)
                  TMapBase<FRHIUniformBuffer_*,TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIUniformBuffer_*,TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_>,0>_>
                  ::FindChecked((TMapBase<FRHIUniformBuffer_*,TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIUniformBuffer_*,TArray<FMeshComputeDispatchCommand,TSizedDefaultAllocator<32>_>,0>_>
                                 *)&this->DispatchCommandsPerView,pFVar34->ViewUniformBuffer);
        if ((pFVar23 == pFVar34) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(void*)this != (void*)&Source",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x96e,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar15 = (pFVar34->DispatchCommands).ArrayNum;
        if (iVar15 != 0) {
          iVar16 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0xa8,8,iVar15,(ForAnyElementType *)pFVar23,
                              &(pFVar23->DispatchCommands).ArrayNum,
                              &(pFVar23->DispatchCommands).ArrayMax);
          ConstructItems<FMeshComputeDispatchCommand,FMeshComputeDispatchCommand,int>
                    ((pFVar23->DispatchCommands).AllocatorInstance.Data + (longlong)iVar16 * 0xa8,
                     (FMeshComputeDispatchCommand *)
                     (pFVar34->DispatchCommands).AllocatorInstance.Data,iVar15);
        }
      }
      if (local_148 < local_160) break;
      if (local_140 != (FRHIRayTracingGeometry *)0x0) {
        FRHIResource::Release((FRHIResource *)local_140);
      }
      pFVar34 = pFVar34 + 1;
      uVar28 = (ulonglong)local_144;
      uVar30 = local_168;
    }
    if (local_140 != (FRHIRayTracingGeometry *)0x0) {
      FRHIResource::Release((FRHIResource *)local_140);
    }
LAB_14533baff:
    auVar32[4] = '\0';
    auVar32[5] = '\0';
    auVar32[6] = '\0';
    auVar32[7] = '\0';
    auVar32[0] = (undefined1)local_160;
    auVar32[1] = local_160._1_1_;
    auVar32[2] = local_160._2_1_;
    auVar32[3] = local_160._3_1_;
    if ((auVar32 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
      FVar24 = StatPtr_STAT_RayTracingDynamicUpdatePrimitives;
      if (StatPtr_STAT_RayTracingDynamicUpdatePrimitives ==
          (FThreadSafeStaticStat<FStat_STAT_RayTracingDynamicUpdatePrimitives>)0x0) {
        pFVar19 = ::FName::FName(&local_78,"STAT_RayTracingDynamicUpdatePrimitives");
        FVar24 = (FThreadSafeStaticStat<FStat_STAT_RayTracingDynamicUpdatePrimitives>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_RayTracingDynamicUpdatePrimitives,*pFVar19,
                            L"Ray tracing dynamic update primitives","STATGROUP_SceneRendering",
                            "STATCAT_Advanced",L"Scene Rendering",true,true,ST_int64,false,false,
                            MCR_Invalid);
      }
      FVar7 = *(FName *)FVar24;
      FVar35 = FVar7.ComparisonIndex.Value;
      uVar30 = FVar7.Number;
      local_res8 = FVar35.Value;
      uStackX_c = uVar30;
      if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar21 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar21 == (FThreadStats *)0x0) {
          pFVar22 = FThreadStatsPool::Get();
          pFVar21 = FThreadStatsPool::GetFromPool(pFVar22);
        }
        local_d8.NameAndInfo.Number = uVar30 & 0xffffafff | 0xa000;
        local_f8 = FVar7;
        local_d8.StatData.Pad = auVar32;
        local_d8.NameAndInfo.Index.Value = FVar35.Value;
        FThreadStats::AddStatMessage(pFVar21,&local_d8);
        FStatsTrace::Add(&local_f8,(long64)auVar32);
        if (pFVar21->ScopeCount == 0) {
          FThreadStats::Flush(pFVar21,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar21,false,false);
        }
      }
    }
    auVar33 = (uchar  [8])(longlong)local_15c;
    if ((auVar33 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
      FVar25 = StatPtr_STAT_RayTracingDynamicBuildPrimitives;
      if (StatPtr_STAT_RayTracingDynamicBuildPrimitives ==
          (FThreadSafeStaticStat<FStat_STAT_RayTracingDynamicBuildPrimitives>)0x0) {
        pFVar19 = ::FName::FName(&local_70,"STAT_RayTracingDynamicBuildPrimitives");
        FVar25 = (FThreadSafeStaticStat<FStat_STAT_RayTracingDynamicBuildPrimitives>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_RayTracingDynamicBuildPrimitives,*pFVar19,
                            L"Ray tracing dynamic build primitives","STATGROUP_SceneRendering",
                            "STATCAT_Advanced",L"Scene Rendering",true,true,ST_int64,false,false,
                            MCR_Invalid);
      }
      FVar7 = *(FName *)FVar25;
      FVar35 = FVar7.ComparisonIndex.Value;
      uVar30 = FVar7.Number;
      local_res8 = FVar35.Value;
      uStackX_c = uVar30;
      if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar21 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar21 == (FThreadStats *)0x0) {
          pFVar22 = FThreadStatsPool::Get();
          pFVar21 = FThreadStatsPool::GetFromPool(pFVar22);
        }
        local_c8.NameAndInfo.Number = uVar30 & 0xffffafff | 0xa000;
        local_f0 = FVar7;
        local_c8.StatData.Pad = auVar33;
        local_c8.NameAndInfo.Index.Value = FVar35.Value;
        FThreadStats::AddStatMessage(pFVar21,&local_c8);
        FStatsTrace::Add(&local_f0,(long64)auVar33);
        if (pFVar21->ScopeCount == 0) {
          FThreadStats::Flush(pFVar21,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar21,false,false);
        }
      }
    }
    this->ScratchBufferSize = local_158;
  }
  if (bVar36) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Update @ 145340b50

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

void __thiscall
FRayTracingDynamicGeometryUpdateManager::Update
          (FRayTracingDynamicGeometryUpdateManager *this,FViewInfo *param_1)

{
  ScheduleUpdates(this,param_1->bRayTracingFeedbackEnabled);
  return;
}

// operator() @ 1504cd1c0

bool __thiscall
`FRayTracingDynamicGeometryUpdateManager::AddDispatchCommands'::__l7::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10;
  FString local_18;
  
  bVar4 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2831550790110281231>);
  if (bVar2) {
    local_res10 = *(FName *)(**(longlong **)((longlong)this + 8) + 0x230);
    ::FName::ToString(&local_res10,&local_18);
    (**(code **)(**(longlong **)(*(longlong *)this + 0xa8) + 0x30))();
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2831550790110281231>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504cd258;
    }
  }
  bVar2 = false;
LAB_1504cd258:
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

// operator() @ 1504cd330

bool __thiscall
`FRayTracingDynamicGeometryUpdateManager::AddDispatchCommands'::__l21::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10;
  FString local_18;
  
  bVar4 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2831550790110281171>);
  if (bVar2) {
    local_res10 = *(FName *)(**(longlong **)this + 0x230);
    ::FName::ToString(&local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2831550790110281171>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504cd3d6;
    }
  }
  bVar2 = false;
LAB_1504cd3d6:
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

