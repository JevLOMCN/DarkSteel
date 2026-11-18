// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 6

// FD3D12TextureAllocatorPool @ 1459a9f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12TextureAllocatorPool * __thiscall
FD3D12TextureAllocatorPool::FD3D12TextureAllocatorPool
          (FD3D12TextureAllocatorPool *this,FD3D12Device *param_1,FRHIGPUMask param_2)

{
  uint *puVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  FD3D12TextureAllocatorPool *pFVar6;
  FD3D12PoolAllocator *pFVar7;
  FD3D12PoolAllocator *pFVar8;
  FD3D12PoolAllocator *this_00;
  ulong64 uVar9;
  undefined1 auStackY_128 [32];
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FD3D12ResourceInitConfig local_88;
  FD3D12ResourceInitConfig local_78;
  FD3D12ResourceInitConfig local_68;
  FD3D12ResourceInitConfig local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  this->_padding_ = (longlong)param_1;
  uVar5 = *(uint *)param_1;
  *(uint *)&this->_padding_ = uVar5;
  *(uint *)((longlong)&this->_padding_ + 4) = param_2.GPUMask;
  if (((param_2.GPUMask & uVar5) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeMask.Intersects(VisibiltyMask)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x9e,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FD3D12TextureAllocatorPool *)(*pcVar2)();
    return pFVar6;
  }
  uVar5 = MemoryTrace_HeapSpec(1,L"Texture Allocator Pool",None);
  this_00 = (FD3D12PoolAllocator *)0x0;
  this->TraceHeapId = uVar5;
  local_88.ResourceFlags = D3D12_RESOURCE_FLAG_NONE;
  local_88.InitialD3D12Access = Common;
  local_88.HeapType = D3D12_HEAP_TYPE_DEFAULT;
  local_88.HeapFlags = D3D12_HEAP_FLAG_ALLOW_ONLY_NON_RT_DS_TEXTURES;
  ::FString::FString(&local_c8,L"D3D12 ReadOnly4K Texture Pool Allocator");
  pFVar7 = ::operator_new(0x100);
  puVar1 = (uint *)((longlong)&this->_padding_ + 4);
  pFVar8 = this_00;
  if (pFVar7 != (FD3D12PoolAllocator *)0x0) {
    pFVar8 = FD3D12PoolAllocator::FD3D12PoolAllocator
                       (pFVar7,param_1,(FRHIGPUMask)*puVar1,&local_88,&local_c8,kPlacedResource,
                        0x400000,0x1000,0x400000,SortBySize,false,this->TraceHeapId);
  }
  FRHIPoolAllocator::Initialize((FRHIPoolAllocator *)pFVar8);
  this->PoolAllocators[0] = pFVar8;
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  local_78.ResourceFlags = D3D12_RESOURCE_FLAG_NONE;
  local_78.InitialD3D12Access = Common;
  local_78.HeapType = D3D12_HEAP_TYPE_DEFAULT;
  local_78.HeapFlags = D3D12_HEAP_FLAG_ALLOW_ONLY_NON_RT_DS_TEXTURES;
  ::FString::FString(&local_b8,L"D3D12 ReadOnly Texture Pool Allocator");
  iVar3 = GD3D12PoolAllocatorReadOnlyTextureVRAMMaxAllocationSize;
  uVar9 = (ulong64)GD3D12PoolAllocatorReadOnlyTextureVRAMPoolSize;
  pFVar7 = ::operator_new(0x100);
  pFVar8 = this_00;
  if (pFVar7 != (FD3D12PoolAllocator *)0x0) {
    pFVar8 = FD3D12PoolAllocator::FD3D12PoolAllocator
                       (pFVar7,param_1,(FRHIGPUMask)*puVar1,&local_78,&local_b8,kPlacedResource,
                        uVar9,0x10000,iVar3,SortBySize,true,this->TraceHeapId);
  }
  FRHIPoolAllocator::Initialize((FRHIPoolAllocator *)pFVar8);
  this->PoolAllocators[1] = pFVar8;
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  local_68.ResourceFlags = D3D12_RESOURCE_FLAG_NONE;
  local_68.InitialD3D12Access = Common;
  local_68.HeapType = D3D12_HEAP_TYPE_DEFAULT;
  local_68.HeapFlags = D3D12_HEAP_FLAG_ALLOW_ONLY_RT_DS_TEXTURES;
  ::FString::FString(&local_a8,L"D3D12 RT Texture Pool Allocator");
  iVar3 = GD3D12PoolAllocatorRTUAVTextureVRAMMaxAllocationSize;
  uVar9 = (ulong64)GD3D12PoolAllocatorRTUAVTextureVRAMPoolSize;
  pFVar7 = ::operator_new(0x100);
  pFVar8 = this_00;
  if (pFVar7 != (FD3D12PoolAllocator *)0x0) {
    pFVar8 = FD3D12PoolAllocator::FD3D12PoolAllocator
                       (pFVar7,param_1,(FRHIGPUMask)*puVar1,&local_68,&local_a8,kPlacedResource,
                        uVar9,0x10000,iVar3,SortBySize,false,this->TraceHeapId);
  }
  FRHIPoolAllocator::Initialize((FRHIPoolAllocator *)pFVar8);
  this->PoolAllocators[2] = pFVar8;
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  local_58.ResourceFlags = D3D12_RESOURCE_FLAG_NONE;
  local_58.InitialD3D12Access = Common;
  local_58.HeapType = D3D12_HEAP_TYPE_DEFAULT;
  local_58.HeapFlags = D3D12_HEAP_FLAG_ALLOW_ONLY_NON_RT_DS_TEXTURES;
  ::FString::FString(&local_98,L"D3D12 UAV Texture Pool Allocator");
  iVar3 = GD3D12PoolAllocatorRTUAVTextureVRAMMaxAllocationSize;
  uVar9 = (ulong64)GD3D12PoolAllocatorRTUAVTextureVRAMPoolSize;
  pFVar8 = ::operator_new(0x100);
  if (pFVar8 != (FD3D12PoolAllocator *)0x0) {
    this_00 = FD3D12PoolAllocator::FD3D12PoolAllocator
                        (pFVar8,param_1,(FRHIGPUMask)*puVar1,&local_58,&local_98,kPlacedResource,
                         uVar9,0x10000,iVar3,SortBySize,false,this->TraceHeapId);
  }
  FRHIPoolAllocator::Initialize((FRHIPoolAllocator *)this_00);
  this->PoolAllocators[3] = this_00;
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return this;
}

// AllocateTexture @ 1459b2270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

undefined4 __thiscall
FD3D12TextureAllocatorPool::AllocateTexture
          (FD3D12TextureAllocatorPool *this,FD3D12ResourceDesc *param_1,D3D12_CLEAR_VALUE *param_2,
          EPixelFormat param_3,FD3D12ResourceLocation *param_4,ED3D12Access param_5,
          ED3D12Access param_6,wchar_t *param_7)

{
  uint uVar1;
  longlong lVar2;
  FD3D12PoolAllocator *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_c8 [32];
  ulong64 local_a8;
  undefined4 local_a0;
  ED3D12Access local_98;
  undefined4 local_90;
  ED3D12Access local_88;
  D3D12_CLEAR_VALUE *local_80;
  wchar_t *local_78;
  FD3D12ResourceLocation *local_70;
  D3D12_RESOURCE_ALLOCATION_INFO local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_c8;
  bVar5 = FD3D12Texture::CanBe4KAligned(param_1,param_3);
  if (bVar5) {
    lVar10 = 0x1000;
  }
  else {
    lVar10 = 0x10000;
    if (1 < *(uint *)((longlong)&param_1->_padding_ + 4)) {
      lVar10 = 0x400000;
    }
  }
  lVar2 = this->_padding_;
  param_1->_padding_ = lVar10;
  if (lVar2 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x59,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return uVar7;
    }
  }
  FD3D12Device::GetResourceAllocationInfoUncached((FD3D12Device *)this->_padding_,&local_68,param_1)
  ;
  uVar1 = (uint)param_1->_padding_;
  uVar8 = uVar1 & 3;
  if ((uVar8 == 0) && ((uVar1 & 4) == 0)) {
    uVar7 = 0;
    uVar9 = (ulonglong)bVar5 ^ 1;
  }
  else {
    uVar7 = 2;
    uVar9 = 3 - (ulonglong)(uVar8 != 0);
  }
  pFVar3 = this->PoolAllocators[uVar9];
  pcVar4 = *(code **)pFVar3->_padding_;
  if (this->_padding_ == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x59,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return uVar7;
    }
  }
  local_70 = param_4;
  local_78 = param_7;
  local_88 = param_6;
  local_98 = param_5;
  local_a0 = (undefined4)local_68.Alignment;
  local_a8 = local_68.SizeInBytes;
  local_90 = uVar7;
  local_80 = param_2;
  (*pcVar4)(&pFVar3->_padding_,*(undefined4 *)(this->_padding_ + 8),1,param_1);
  return 0;
}

// BeginFrame @ 1459b29f0

/* WARNING: Removing unreachable block (ram,0x0001459b2bf5) */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12TextureAllocatorPool::BeginFrame(FD3D12TextureAllocatorPool *this,FD3D12ContextArray *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  FRHIComputeCommandList *this_00;
  int iVar4;
  bool bVar5;
  uint uVar6;
  atomic<unsigned_int> aVar7;
  FD3D12CommandContext *pFVar8;
  FRHIBreadcrumbAllocator *pFVar9;
  FRHIBreadcrumbNode *pFVar10;
  longlong lVar11;
  longlong lVar12;
  FD3D12PoolAllocator **ppFVar13;
  bool bVar14;
  uint local_res8 [2];
  FRHIContextArray local_78;
  FRHIBreadcrumbScope local_68;
  undefined1 local_58;
  char *local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  wchar_t *pwStack_38;
  
  lVar12 = 4;
  if ((0 < GD3D12VRAMTexturePoolDefrag) && (0 < GD3D12VRAMTexturePoolDefragMaxCopySizePerFrame)) {
    bVar14 = -1 < CpuChannel->Enabled;
    if (bVar14) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1927,"DefragTexturePool",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                 ,0x787);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1927);
    }
    iVar4 = GD3D12VRAMTexturePoolDefragMaxCopySizePerFrame;
    ppFVar13 = this->PoolAllocators;
    local_res8[0] = 0;
    lVar11 = 4;
    do {
      lVar1 = *(longlong *)param_1;
      local_78._0_8_ = 0;
      if ((lVar1 != 0) && (local_78._0_8_ = lVar1, *(longlong *)(lVar1 + 0x10) != 0)) {
        local_78._0_8_ = *(longlong *)(lVar1 + 0x10);
      }
      lVar1 = *(longlong *)&param_1->field_0x8;
      local_78._8_8_ = 0;
      if ((lVar1 != 0) && (local_78._8_8_ = lVar1, *(longlong *)(lVar1 + 0x10) != 0)) {
        local_78._8_8_ = *(longlong *)(lVar1 + 0x10);
      }
      FRHIPoolAllocator::Defrag((FRHIPoolAllocator *)*ppFVar13,&local_78,iVar4,local_res8);
      ppFVar13 = ppFVar13 + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    if (bVar14) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  plVar2 = *(longlong **)param_1;
  pcVar3 = *(code **)(*plVar2 + 0x290);
  if ((this->_padding_ == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Parent != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x59,L""), bVar14)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar8 = (FD3D12CommandContext *)(*pcVar3)(plVar2,*(undefined4 *)(this->_padding_ + 8));
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1941,"FlushPendingTextureCopyOps",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
               ,0x795);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1941);
  }
  local_58 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_50 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp";
    pwStack_38 = L"TexturePoolCopyOps";
    uStack_48 = 0x796;
    local_40 = 0;
    ::Desc._padding_._0_4_ = 0x5106f9c0;
    ::Desc._padding_._4_4_ = 1;
    ::Desc._padding_._0_4_ = 0x796;
    ::Desc._padding_._4_4_ = uStack_44;
    ::Desc._padding_._0_4_ = 0;
    ::Desc._padding_._4_4_ = 0;
    ::Desc._padding_._0_4_ = 0x51070cd8;
    ::Desc._padding_._4_4_ = 1;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
    ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    ::Desc.TraceGpuSpecId = 0;
    ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(``FD3D12TextureAllocatorPool::BeginFrame'::__l13::<lambda_1>::operator()<>'::__l2::
           _dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*(longlong *)&pFVar8->field_0x1d8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExecutingCmdList",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                         ,0x221,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = *(FRHIComputeCommandList **)&pFVar8->field_0x1d8;
  pFVar9 = FRHIComputeCommandList::GetBreadcrumbAllocator(this_00);
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
      aVar7 = (atomic<unsigned_int>)
              FCpuProfilerTrace::OutputEventType
                        ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                         (char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                         (uint)::Desc._padding_);
      LOCK();
      ::Desc.TraceCpuSpecId = aVar7;
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  }
  pFVar10->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_68,this_00,pFVar10);
  local_58 = 1;
  ppFVar13 = this->PoolAllocators;
  do {
    FD3D12PoolAllocator::FlushPendingCopyOps(*ppFVar13,pFVar8);
    ppFVar13 = ppFVar13 + 1;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_68);
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CleanUpAllocations @ 1459b5df0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12TextureAllocatorPool::CleanUpAllocations(FD3D12TextureAllocatorPool *this)

{
  FD3D12PoolAllocator **ppFVar1;
  longlong lVar2;
  
  ppFVar1 = this->PoolAllocators;
  lVar2 = 4;
  do {
    FD3D12PoolAllocator::CleanUpAllocations(*ppFVar1,0x14,false);
    ppFVar1 = ppFVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

// Destroy @ 1459bd930

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12TextureAllocatorPool::Destroy(FD3D12TextureAllocatorPool *this)

{
  FD3D12PoolAllocator *pFVar1;
  
  FD3D12PoolAllocator::CleanUpAllocations(this->PoolAllocators[0],0,false);
  if (this->PoolAllocators[0] != (FD3D12PoolAllocator *)0x0) {
    (**(code **)this->PoolAllocators[0]->_padding_)();
  }
  this->PoolAllocators[0] = (FD3D12PoolAllocator *)0x0;
  FD3D12PoolAllocator::CleanUpAllocations(this->PoolAllocators[1],0,false);
  if (this->PoolAllocators[1] != (FD3D12PoolAllocator *)0x0) {
    (**(code **)this->PoolAllocators[1]->_padding_)();
  }
  this->PoolAllocators[1] = (FD3D12PoolAllocator *)0x0;
  FD3D12PoolAllocator::CleanUpAllocations(this->PoolAllocators[2],0,false);
  if (this->PoolAllocators[2] != (FD3D12PoolAllocator *)0x0) {
    (**(code **)this->PoolAllocators[2]->_padding_)();
  }
  this->PoolAllocators[2] = (FD3D12PoolAllocator *)0x0;
  FD3D12PoolAllocator::CleanUpAllocations(this->PoolAllocators[3],0,false);
  pFVar1 = this->PoolAllocators[3];
  if (pFVar1 != (FD3D12PoolAllocator *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  this->PoolAllocators[3] = (FD3D12PoolAllocator *)0x0;
  return;
}

// GetMemoryStats @ 1459c2550

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

bool __thiscall
FD3D12TextureAllocatorPool::GetMemoryStats
          (FD3D12TextureAllocatorPool *this,ulong64 *param_1,ulong64 *param_2)

{
  FD3D12PoolAllocator **ppFVar1;
  longlong lVar2;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_28 [4];
  
  ppFVar1 = this->PoolAllocators;
  local_res10[0] = 0;
  local_28[3] = 0;
  local_res18[0] = 0;
  lVar2 = 4;
  local_28[2] = 0;
  local_28[1] = 0;
  local_28[0] = 0;
  local_res20[0] = 0;
  do {
    FRHIPoolAllocator::UpdateMemoryStats
              ((FRHIPoolAllocator *)*ppFVar1,local_res10,local_28 + 3,local_res18,local_28 + 2,
               local_28 + 1,local_28,local_res20);
    ppFVar1 = ppFVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *param_1 = (ulonglong)local_res10[0];
  *param_2 = (ulonglong)local_res18[0];
  return true;
}

