// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 9

// FD3D12DefaultBufferAllocator @ 1459a9340

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12DefaultBufferAllocator * __thiscall
FD3D12DefaultBufferAllocator::FD3D12DefaultBufferAllocator
          (FD3D12DefaultBufferAllocator *this,FD3D12Device *param_1,FRHIGPUMask param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FD3D12DefaultBufferAllocator *pFVar4;
  
  this->_padding_ = (longlong)param_1;
  uVar3 = *(uint *)param_1;
  *(uint *)&this->_padding_ = uVar3;
  *(uint *)((longlong)&this->_padding_ + 4) = param_2.GPUMask;
  if ((param_2.GPUMask & uVar3) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NodeMask.Intersects(VisibiltyMask)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x9e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FD3D12DefaultBufferAllocator *)(*pcVar1)();
      return pFVar4;
    }
  }
  (this->DefaultBufferPools).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultBufferPools).ArrayNum = 0;
  (this->DefaultBufferPools).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CS,4000);
  uVar3 = MemoryTrace_HeapSpec(1,L"Default Buffer Allocator",None);
  this->TraceHeapId = uVar3;
  (this->DefaultBufferPools).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultBufferPools).ArrayNum = 0;
  (this->DefaultBufferPools).ArrayMax = 0;
  return this;
}

// AllocDefaultResource @ 1459afc20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12DefaultBufferAllocator::AllocDefaultResource
          (FD3D12DefaultBufferAllocator *this,D3D12_HEAP_TYPE param_1,D3D12_RESOURCE_DESC *param_2,
          EBufferUsageFlags param_3,ED3D12ResourceStateMode param_4,ED3D12Access param_5,
          FD3D12ResourceLocation *param_6,uint param_7,wchar_t *param_8)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  FD3D12Adapter *this_00;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  FD3D12Resource *pFVar6;
  bool bVar7;
  int iVar8;
  FD3D12PoolAllocator *this_01;
  ulonglong uVar9;
  FD3D12Resource *pFVar10;
  D3D12_RESOURCE_FLAGS DVar11;
  undefined1 auStackY_1e8 [32];
  undefined1 local_184 [4];
  ED3D12ResourceStateMode local_180;
  FD3D12Resource *local_178;
  FD3D12Resource *local_170;
  FD3D12ResourceLocation *local_168;
  wchar_t *local_160;
  FString local_158;
  FString local_148;
  D3D12_HEAP_PROPERTIES local_138;
  FD3D12ResourceDesc local_118;
  FD3D12ResourceDesc local_d8;
  FD3D12ResourceDesc local_98;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_168 = param_6;
  local_160 = param_8;
  local_180 = param_4;
  if ((this->_padding_ == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar1 = this->_padding_;
  if ((*(longlong *)(lVar1 + 0x10) == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = *(FD3D12Adapter **)(lVar1 + 0x10);
  if ((GD3D12AllowPoolAllocateIndirectArgBuffers != 0) || (-1 < (char)param_3)) {
    if ((param_3 >> 0x16 & 1) != 0) {
      FD3D12ResourceLocation::Clear(param_6);
      local_170 = (FD3D12Resource *)0x0;
      if (((short)param_7 != 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Alignment % GRHIGlobals.ReservedResources.TileSizeInBytes == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                             ,0x656,
                             L"Reserved buffer alignment is expected to be a multiple of the reserved resource tile size"
                            ), bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_118._padding_ = param_2->Width;
      local_118._padding_._0_4_ = param_2->Height;
      local_118._padding_._4_2_ = param_2->DepthOrArraySize;
      local_118._padding_._6_2_ = param_2->MipLevels;
      local_118._padding_ = *(longlong *)param_2;
      local_118._padding_ = *(longlong *)&param_2->Flags;
      local_118._padding_._0_4_ = param_2->Format;
      local_118._padding_._4_4_ = (param_2->SampleDesc).Count;
      local_118._padding_ = *(longlong *)&(param_2->SampleDesc).Quality;
      local_118.PixelFormat = PF_Unknown;
      local_118.UAVPixelFormat = PF_Unknown;
      local_118._58_6_ = 2;
      local_118._padding_ = (ulonglong)param_7;
      iVar8 = FD3D12Adapter::CreateReservedResource
                        (this_00,&local_118,(FRHIGPUMask)(uint)this->_padding_,param_5,param_4,
                         param_5,(D3D12_CLEAR_VALUE *)0x0,&local_170,local_160,false);
      if (iVar8 < 0) {
        local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_148.Data.ArrayNum = 0;
        local_148.Data.ArrayMax = 0;
        D3D12RHI::VerifyD3D12Result
                  (iVar8,
                   "Adapter->CreateReservedResource( Desc, GetGPUMask(), InCreateD3D12Access, InResourceStateMode, InCreateD3D12Access, nullptr, &NewResource, Name, false)"
                   ,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                   ,0x663,(ID3D12Device *)0x0,&local_148);
      }
      FD3D12ResourceLocation::AsStandAlone
                (local_168,local_170,param_2->Width,false,(D3D12_HEAP_PROPERTIES *)0x0);
      return;
    }
    lpCriticalSection = &this->CS;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_148.Data.AllocatorInstance.Data = *(FScriptContainerElement **)param_2;
    local_148.Data._8_8_ = param_2->Alignment;
    iVar8 = (this->DefaultBufferPools).ArrayNum;
    uVar9 = (ulonglong)iVar8;
    pFVar10 = (FD3D12Resource *)(this->DefaultBufferPools).AllocatorInstance.Data;
    local_178 = (FD3D12Resource *)CONCAT44(local_178._4_4_,iVar8);
    local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2->Width;
    local_158.Data.ArrayNum = param_2->Height;
    local_158.Data.ArrayMax._0_2_ = param_2->DepthOrArraySize;
    local_158.Data.ArrayMax._2_2_ = param_2->MipLevels;
    uVar3 = param_2->Format;
    uVar4 = (param_2->SampleDesc).Count;
    uVar5 = *(undefined8 *)&(param_2->SampleDesc).Quality;
    local_138.MemoryPoolPreference = (D3D12_MEMORY_POOL)uVar5;
    local_138.CreationNodeMask = (uint)((ulonglong)uVar5 >> 0x20);
    local_170 = (FD3D12Resource *)(&pFVar10->_padding_ + uVar9);
    local_118._padding_._0_4_ = (D3D12_RESOURCE_FLAGS)*(ulonglong *)&param_2->Flags;
    DVar11 = (D3D12_RESOURCE_FLAGS)local_118._padding_ & ~D3D12_RESOURCE_FLAG_DENY_SHADER_RESOURCE;
    local_118._padding_ = *(ulonglong *)&param_2->Flags & 0xfffffffffffffff7;
    local_138.Type = uVar3;
    local_138.CPUPageProperty = uVar4;
    while( true ) {
      pFVar6 = local_170;
      if ((this->DefaultBufferPools).ArrayNum != (int)uVar9) {
        `TCheckedPointerIterator<FD3D12PoolAllocator_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_184);
      }
      if (pFVar10 == pFVar6) goto LAB_1459affde;
      this_01 = (FD3D12PoolAllocator *)pFVar10->_padding_;
      bVar7 = FD3D12PoolAllocator::SupportsAllocation
                        (this_01,param_1,DVar11,param_3,local_180,param_7);
      if (bVar7) break;
      uVar9 = (ulonglong)local_178 & 0xffffffff;
      pFVar10 = (FD3D12Resource *)&pFVar10->_padding_;
    }
    if (this_01 == (FD3D12PoolAllocator *)0x0) {
LAB_1459affde:
      this_01 = CreateBufferPool(this,param_1,DVar11,param_3,local_180,param_7);
    }
    local_98._padding_ = (longlong)local_148.Data.AllocatorInstance.Data;
    local_98._padding_._0_4_ = local_148.Data.ArrayNum;
    local_98._padding_._4_4_ = local_148.Data.ArrayMax;
    local_98._padding_ = CONCAT44(local_138.CPUPageProperty,local_138.Type);
    local_98._padding_ = CONCAT44(local_138.CreationNodeMask,local_138.MemoryPoolPreference);
    local_98._62_2_ = 0;
    local_98.PixelFormat = PF_Unknown;
    local_98.UAVPixelFormat = PF_Unknown;
    local_98._padding_ = local_118._padding_;
    local_98._padding_ = (longlong)local_158.Data.AllocatorInstance.Data;
    local_98._padding_._0_4_ = local_158.Data.ArrayNum;
    local_98._padding_._4_4_ = local_158.Data.ArrayMax;
    local_98._58_4_ = 0;
    FD3D12PoolAllocator::AllocDefaultResource
              (this_01,param_1,&local_98,param_3,local_180,param_5,param_7,local_160,local_168);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
  FD3D12ResourceLocation::Clear(param_6);
  local_178 = (FD3D12Resource *)0x0;
  local_138.CreationNodeMask = 1;
  local_138.VisibleNodeMask = 1;
  if ((param_3 >> 0xb & 1) == 0) {
    if (GVirtualMGPU != 0) goto LAB_1459afd2a;
    local_138.VisibleNodeMask = *(uint *)((longlong)&this->_padding_ + 4);
  }
  if (GVirtualMGPU == 0) {
    local_138.CreationNodeMask = (uint)this->_padding_;
  }
LAB_1459afd2a:
  local_118._padding_ = *(longlong *)param_2;
  local_d8._padding_ = param_2->Width;
  local_d8._padding_._0_4_ = param_2->Height;
  local_d8._padding_._4_2_ = param_2->DepthOrArraySize;
  local_d8._padding_._6_2_ = param_2->MipLevels;
  local_d8._padding_._0_4_ = param_2->Format;
  local_d8._padding_._4_4_ = (param_2->SampleDesc).Count;
  local_d8._padding_ = *(longlong *)&(param_2->SampleDesc).Quality;
  local_d8._padding_ = *(longlong *)&param_2->Flags;
  local_d8._58_4_ = 0;
  local_118._padding_ = 0;
  local_138.CPUPageProperty = D3D12_CPU_PAGE_PROPERTY_UNKNOWN;
  local_138.MemoryPoolPreference = D3D12_MEMORY_POOL_UNKNOWN;
  local_d8._62_2_ = 0;
  local_d8._padding_ = 0;
  local_d8.PixelFormat = PF_Unknown;
  local_d8.UAVPixelFormat = PF_Unknown;
  local_138.Type = param_1;
  local_d8._padding_ = local_118._padding_;
  iVar8 = FD3D12Adapter::CreateCommittedResource
                    (this_00,&local_d8,(FRHIGPUMask)(uint)this->_padding_,&local_138,param_5,param_4
                     ,param_5,(D3D12_CLEAR_VALUE *)0x0,&local_178,local_160,false);
  if (iVar8 < 0) {
    local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_158.Data.ArrayNum = 0;
    local_158.Data.ArrayMax = 0;
    D3D12RHI::VerifyD3D12Result
              (iVar8,
               "Adapter->CreateCommittedResource( Desc, GetGPUMask(), HeapProps, InCreateD3D12Access, InResourceStateMode, InCreateD3D12Access, nullptr, &NewResource, Name, false)"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
               ,0x649,(ID3D12Device *)0x0,&local_158);
  }
  FD3D12ResourceLocation::AsStandAlone
            (local_168,local_178,param_2->Width,false,(D3D12_HEAP_PROPERTIES *)0x0);
  return;
}

// BeginFrame @ 1459b2580

/* WARNING: Removing unreachable block (ram,0x0001459b27c8) */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12DefaultBufferAllocator::BeginFrame
          (FD3D12DefaultBufferAllocator *this,FD3D12ContextArray *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  FRHIComputeCommandList *this_00;
  int iVar5;
  bool bVar6;
  uint uVar7;
  atomic<unsigned_int> aVar8;
  FD3D12CommandContext *pFVar9;
  FRHIBreadcrumbAllocator *pFVar10;
  FRHIBreadcrumbNode *pFVar11;
  FScriptContainerElement *pFVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  uint local_res20 [2];
  FRHIContextArray local_88;
  FRHIBreadcrumbScope local_78;
  undefined1 local_68;
  char *local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  wchar_t *pwStack_48;
  
  lpCriticalSection = &this->CS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((0 < GD3D12VRAMBufferPoolDefrag) && (0 < GD3D12VRAMBufferPoolDefragMaxCopySizePerFrame)) {
    bVar13 = -1 < CpuChannel->Enabled;
    if (bVar13) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1704,"DefragBufferPool",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                 ,0x6a8);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1704);
    }
    iVar5 = GD3D12VRAMBufferPoolDefragMaxCopySizePerFrame;
    pFVar12 = (this->DefaultBufferPools).AllocatorInstance.Data;
    iVar2 = (this->DefaultBufferPools).ArrayNum;
    local_res20[0] = 0;
    pFVar1 = pFVar12 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->DefaultBufferPools).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FD3D12PoolAllocator_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar12 == pFVar1) break;
      if (*(FRHIPoolAllocator **)pFVar12 != (FRHIPoolAllocator *)0x0) {
        local_88._0_8_ = *(undefined8 *)param_1;
        if ((local_88._0_8_ != 0) && (*(longlong *)(local_88._0_8_ + 0x10) != 0)) {
          local_88._0_8_ = *(longlong *)(local_88._0_8_ + 0x10);
        }
        local_88._8_8_ = *(undefined8 *)&param_1->field_0x8;
        if ((local_88._8_8_ != 0) && (*(longlong *)(local_88._8_8_ + 0x10) != 0)) {
          local_88._8_8_ = *(longlong *)(local_88._8_8_ + 0x10);
        }
        FRHIPoolAllocator::Defrag(*(FRHIPoolAllocator **)pFVar12,&local_88,iVar5,local_res20);
        if ((uint)iVar5 <= local_res20[0]) break;
      }
      pFVar12 = pFVar12 + 8;
    }
    if (bVar13) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  plVar3 = *(longlong **)param_1;
  pcVar4 = *(code **)(*plVar3 + 0x290);
  if ((this->_padding_ == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Parent != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x59,L""), bVar13)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar9 = (FD3D12CommandContext *)(*pcVar4)(plVar3,*(undefined4 *)(this->_padding_ + 8));
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1727,"FlushPendingBufferCopyOps",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
               ,0x6bf);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1727);
  }
  local_68 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_60 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp";
    pwStack_48 = L"BufferPoolCopyOps";
    uStack_58 = 0x6c0;
    local_50 = 0;
    ::Desc._padding_._0_4_ = 0x5106f9c0;
    ::Desc._padding_._4_4_ = 1;
    ::Desc._padding_._0_4_ = 0x6c0;
    ::Desc._padding_._4_4_ = uStack_54;
    ::Desc._padding_._0_4_ = 0;
    ::Desc._padding_._4_4_ = 0;
    ::Desc._padding_._0_4_ = 0x51070b18;
    ::Desc._padding_._4_4_ = 1;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
    ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    ::Desc.TraceGpuSpecId = 0;
    ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(``FD3D12DefaultBufferAllocator::BeginFrame'::__l21::<lambda_1>::operator()<>'::__l2::
           _dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*(longlong *)&pFVar9->field_0x1d8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExecutingCmdList",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                         ,0x221,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00 = *(FRHIComputeCommandList **)&pFVar9->field_0x1d8;
  pFVar10 = FRHIComputeCommandList::GetBreadcrumbAllocator(this_00);
  pFVar11 = FMemStackBase::Alloc(&pFVar10->Inner,0x50,8);
  pFVar11->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar11->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar11->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar11->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar11->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar11->Data = (FRHIBreadcrumbData *)&::Desc;
  pFVar11->Allocator = pFVar10;
  pFVar11->TraceCpuSpecId = 0;
  pFVar11->TraceCpuMetadataId = 0;
  LOCK();
  UNLOCK();
  uVar7 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar11->ID = uVar7;
  pFVar11->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar11->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar11->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar11[1]._padding_ = (longlong)&::Desc;
  if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
     (bVar6 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar6)) {
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
  pFVar11->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_78,this_00,pFVar11);
  pFVar12 = (this->DefaultBufferPools).AllocatorInstance.Data;
  iVar2 = (this->DefaultBufferPools).ArrayNum;
  local_68 = 1;
  pFVar1 = pFVar12 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->DefaultBufferPools).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FD3D12PoolAllocator_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar12 == pFVar1) break;
    if (*(FD3D12PoolAllocator **)pFVar12 != (FD3D12PoolAllocator *)0x0) {
      FD3D12PoolAllocator::FlushPendingCopyOps(*(FD3D12PoolAllocator **)pFVar12,pFVar9);
    }
    pFVar12 = pFVar12 + 8;
  }
  FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_78);
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
                    /* WARNING: Could not recover jumptable at 0x0001459b294d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// CleanupFreeBlocks @ 1459b5ee0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12DefaultBufferAllocator::CleanupFreeBlocks(FD3D12DefaultBufferAllocator *this,ulong64 param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->CS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar3 = (this->DefaultBufferPools).AllocatorInstance.Data;
    iVar2 = (this->DefaultBufferPools).ArrayNum;
    pFVar1 = pFVar3 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->DefaultBufferPools).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FD3D12PoolAllocator_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar3 == pFVar1) break;
      if (*(FD3D12PoolAllocator **)pFVar3 != (FD3D12PoolAllocator *)0x0) {
        FD3D12PoolAllocator::CleanUpAllocations(*(FD3D12PoolAllocator **)pFVar3,param_1,false);
      }
      pFVar3 = pFVar3 + 8;
    }
                    /* WARNING: Could not recover jumptable at 0x0001459b5f67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// CreateBufferPool @ 1459b9a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12PoolAllocator * __thiscall
FD3D12DefaultBufferAllocator::CreateBufferPool
          (FD3D12DefaultBufferAllocator *this,D3D12_HEAP_TYPE param_1,D3D12_RESOURCE_FLAGS param_2,
          EBufferUsageFlags param_3,ED3D12ResourceStateMode param_4,uint param_5)

{
  int *piVar1;
  FD3D12Device *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ulonglong uVar5;
  bool bVar6;
  EResourceAllocationStrategy EVar7;
  int iVar8;
  FD3D12PoolAllocator *pFVar9;
  FD3D12ResourceInitConfig *pFVar10;
  ulong64 uVar11;
  FRHIGPUMask FVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStackY_f8 [32];
  FD3D12PoolAllocator *local_90;
  FString local_88;
  FD3D12ResourceInitConfig local_78;
  FD3D12ResourceInitConfig local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  if ((this->_padding_ == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FD3D12PoolAllocator *)(*pcVar4)();
    return pFVar9;
  }
  pFVar2 = (FD3D12Device *)this->_padding_;
  pFVar10 = FD3D12PoolAllocator::GetResourceAllocatorInitConfig(&local_78,param_1,param_2,param_3);
  FVar12.GPUMask = 1;
  local_68.HeapType = pFVar10->HeapType;
  local_68.HeapFlags = pFVar10->HeapFlags;
  local_68.ResourceFlags = pFVar10->ResourceFlags;
  local_68.InitialD3D12Access = pFVar10->InitialD3D12Access;
  if ((param_3 >> 0xb & 1) == 0) {
    FVar12.GPUMask = *(uint *)((longlong)&this->_padding_ + 4);
  }
  ::FString::FString(&local_88,L"D3D12 Pool Allocator");
  EVar7 = FD3D12PoolAllocator::GetResourceAllocationStrategy(param_2,param_4,param_5);
  uVar11 = 0x2000000;
  if (param_1 == D3D12_HEAP_TYPE_READBACK) {
    uVar11 = 0x400000;
  }
  uVar14 = 0x1000000;
  if (param_1 == D3D12_HEAP_TYPE_READBACK) {
    uVar14 = 0x10000;
  }
  bVar6 = local_68.HeapType == D3D12_HEAP_TYPE_DEFAULT;
  uVar5 = local_68._8_8_ & 0x3000000000000;
  if ((local_68._8_8_ & 0x3000000000000) != 0) {
    uVar11 = 0x2000000;
    uVar14 = 0x1000000;
  }
  uVar13 = 0x100;
  pFVar9 = ::operator_new(0x100);
  local_90 = (FD3D12PoolAllocator *)0x0;
  if (pFVar9 != (FD3D12PoolAllocator *)0x0) {
    if (EVar7 == kPlacedResource) {
      uVar13 = 0x10000;
    }
    local_90 = FD3D12PoolAllocator::FD3D12PoolAllocator
                         (pFVar9,pFVar2,FVar12,&local_68,&local_88,EVar7,uVar11,uVar13,uVar14,
                          SortBySize,uVar5 == 0 && bVar6,this->TraceHeapId);
  }
  pFVar3 = (this->DefaultBufferPools).AllocatorInstance.Data;
  if (((pFVar3 <= (FScriptContainerElement *)&local_90) &&
      ((FScriptContainerElement *)&local_90 <
       pFVar3 + (longlong)(this->DefaultBufferPools).ArrayMax * 8)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FD3D12PoolAllocator *)(*pcVar4)();
    return pFVar9;
  }
  iVar8 = (this->DefaultBufferPools).ArrayNum;
  piVar1 = &(this->DefaultBufferPools).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->DefaultBufferPools).AllocatorInstance,piVar1);
  }
  pFVar9 = local_90;
  (this->DefaultBufferPools).ArrayNum = iVar8 + 1;
  *(FD3D12PoolAllocator **)((this->DefaultBufferPools).AllocatorInstance.Data + (longlong)iVar8 * 8)
       = local_90;
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return pFVar9;
}

// FreeDefaultBufferPools @ 1459c1000

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12DefaultBufferAllocator::FreeDefaultBufferPools(FD3D12DefaultBufferAllocator *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->CS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar3 = (this->DefaultBufferPools).AllocatorInstance.Data;
    iVar2 = (this->DefaultBufferPools).ArrayNum;
    pFVar1 = pFVar3 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->DefaultBufferPools).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FD3D12PoolAllocator_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar3 == pFVar1) break;
      if (*(FD3D12PoolAllocator **)pFVar3 != (FD3D12PoolAllocator *)0x0) {
        FD3D12PoolAllocator::CleanUpAllocations(*(FD3D12PoolAllocator **)pFVar3,0,false);
        if (*(undefined8 **)pFVar3 != (undefined8 *)0x0) {
          (**(code **)**(undefined8 **)pFVar3)();
        }
        *(longlong *)pFVar3 = 0;
      }
      pFVar3 = pFVar3 + 8;
    }
                    /* WARNING: Could not recover jumptable at 0x0001459c10a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetDefaultInitialD3D12Access @ 1459c1f60

/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

ED3D12Access __cdecl
FD3D12DefaultBufferAllocator::GetDefaultInitialD3D12Access
          (D3D12_HEAP_TYPE param_1,EBufferUsageFlags param_2,ED3D12ResourceStateMode param_3)

{
  code *pcVar1;
  bool bVar2;
  ED3D12Access EVar3;
  
  if (param_1 == D3D12_HEAP_TYPE_READBACK) {
    return CopyDest;
  }
  if (param_1 != D3D12_HEAP_TYPE_UPLOAD) {
    if (param_2 == UnorderedAccess) {
      if (param_3 == SingleState) {
        if (param_1 != D3D12_HEAP_TYPE_DEFAULT) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InHeapType == D3D12_HEAP_TYPE_DEFAULT",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                             ,0x617,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            EVar3 = (*pcVar1)();
            return EVar3;
          }
        }
        return UAVMask;
      }
    }
    else if ((param_2 >> 0xd & 1) != 0) {
      if (param_1 != D3D12_HEAP_TYPE_DEFAULT) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InHeapType == D3D12_HEAP_TYPE_DEFAULT",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
                           ,0x61d,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          EVar3 = (*pcVar1)();
          return EVar3;
        }
      }
      return BVHWrite|BVHRead;
    }
  }
  return GenericRead;
}

// IsPlacedResource @ 1459c7510

bool __cdecl
FD3D12DefaultBufferAllocator::IsPlacedResource
          (D3D12_RESOURCE_FLAGS param_1,ED3D12ResourceStateMode param_2,uint param_3)

{
  EResourceAllocationStrategy EVar1;
  
  EVar1 = FD3D12PoolAllocator::GetResourceAllocationStrategy(param_1,param_2,param_3);
  return EVar1 == kPlacedResource;
}

// UpdateMemoryStats @ 1459de430

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FD3D12DefaultBufferAllocator::UpdateMemoryStats(FD3D12DefaultBufferAllocator *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  int iVar2;
  FName FVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_D3D12BufferPoolMemoryAllocated> FVar5;
  FThreadStats *pFVar6;
  FThreadStatsPool *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_D3D12BufferPoolMemoryUsed> FVar8;
  FThreadSafeStaticStat<FStat_STAT_D3D12BufferPoolMemoryFree> FVar9;
  FThreadSafeStaticStat<FStat_STAT_D3D12BufferPoolAlignmentWaste> FVar10;
  FThreadSafeStaticStat<FStat_STAT_D3D12BufferPoolPageCount> FVar11;
  FThreadSafeStaticStat<FStat_STAT_D3D12BufferPoolFullPages> FVar12;
  FThreadSafeStaticStat<FStat_STAT_D3D12BufferPoolFragmentation> FVar13;
  FThreadSafeStaticStat<FStat_STAT_D3D12BufferPoolFragmentationPercentage> FVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  uchar auVar18 [8];
  uchar auVar19 [8];
  uchar auVar20 [8];
  uchar auVar21 [8];
  uchar auVar22 [8];
  uchar auVar23 [8];
  float fVar24;
  FName local_res8;
  uint local_res10 [2];
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  FStatMessage local_68 [2];
  
  lpCriticalSection = &this->CS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar16 = (this->DefaultBufferPools).AllocatorInstance.Data;
  iVar2 = (this->DefaultBufferPools).ArrayNum;
  local_74 = 0;
  local_res10[0] = 0;
  local_res18[0] = 0;
  pFVar1 = pFVar16 + (longlong)iVar2 * 8;
  local_78 = 0;
  local_res20[0] = 0;
  local_70 = 0;
  local_6c = 0;
  while( true ) {
    if ((this->DefaultBufferPools).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FD3D12PoolAllocator_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar16 == pFVar1) break;
    if (*(FRHIPoolAllocator **)pFVar16 != (FRHIPoolAllocator *)0x0) {
      FRHIPoolAllocator::UpdateMemoryStats
                (*(FRHIPoolAllocator **)pFVar16,&local_74,local_res10,local_res18,&local_78,
                 local_res20,&local_70,&local_6c);
    }
    pFVar16 = pFVar16 + 8;
  }
  uVar17 = local_res18[0] - local_78;
  uVar15 = local_res20[0] + uVar17 + local_res10[0];
  if (uVar15 == 0) {
    fVar24 = 0.0;
  }
  else {
    fVar24 = (float)uVar17 / (float)uVar15;
  }
  FVar5 = StatPtr_STAT_D3D12BufferPoolMemoryAllocated;
  if (StatPtr_STAT_D3D12BufferPoolMemoryAllocated ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12BufferPoolMemoryAllocated>)0x0) {
    pFVar4 = ::FName::FName(&local_res8,"STAT_D3D12BufferPoolMemoryAllocated");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_D3D12BufferPoolMemoryAllocated>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12BufferPoolMemoryAllocated,
                       *pFVar4,L"BufferPool Memory Allocated","STATGROUP_D3D12MemoryDetails",
                       "STATCAT_Advanced",L"D3D12RHI: Memory Details",true,false,ST_int64,false,
                       false,MCR_Physical);
  }
  FVar3 = *(FName *)FVar5;
  auVar18[4] = '\0';
  auVar18[5] = '\0';
  auVar18[6] = '\0';
  auVar18[7] = '\0';
  auVar18[0] = (undefined1)local_74;
  auVar18[1] = local_74._1_1_;
  auVar18[2] = local_74._2_1_;
  auVar18[3] = local_74._3_1_;
  local_res8 = FVar3;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar6 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar6 == (FThreadStats *)0x0) {
      pFVar7 = FThreadStatsPool::Get();
      pFVar6 = FThreadStatsPool::GetFromPool(pFVar7);
    }
    local_68[0].NameAndInfo.Number = FVar3.Number & 0xffff8fff | 0x8000;
    local_res8 = FVar3;
    local_68[0].StatData.Pad = auVar18;
    local_68[0].NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar6,local_68);
    FStatsTrace::Set(&local_res8,(long64)auVar18);
    if (pFVar6->ScopeCount == 0) {
      FThreadStats::Flush(pFVar6,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar6,false,false);
    }
  }
  FVar8 = StatPtr_STAT_D3D12BufferPoolMemoryUsed;
  if (StatPtr_STAT_D3D12BufferPoolMemoryUsed ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12BufferPoolMemoryUsed>)0x0) {
    pFVar4 = ::FName::FName(&local_res8,"STAT_D3D12BufferPoolMemoryUsed");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_D3D12BufferPoolMemoryUsed>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12BufferPoolMemoryUsed,*pFVar4,
                       L"BufferPool Memory Used","STATGROUP_D3D12MemoryDetails","STATCAT_Advanced",
                       L"D3D12RHI: Memory Details",true,false,ST_int64,false,false,MCR_Physical);
  }
  FVar3 = *(FName *)FVar8;
  auVar19[4] = '\0';
  auVar19[5] = '\0';
  auVar19[6] = '\0';
  auVar19[7] = '\0';
  auVar19[0] = (undefined1)local_res10[0];
  auVar19[1] = local_res10[0]._1_1_;
  auVar19[2] = local_res10[0]._2_1_;
  auVar19[3] = local_res10[0]._3_1_;
  local_res8 = FVar3;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar6 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar6 == (FThreadStats *)0x0) {
      pFVar7 = FThreadStatsPool::Get();
      pFVar6 = FThreadStatsPool::GetFromPool(pFVar7);
    }
    local_68[0].NameAndInfo.Number = FVar3.Number & 0xffff8fff | 0x8000;
    local_res8 = FVar3;
    local_68[0].StatData.Pad = auVar19;
    local_68[0].NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar6,local_68);
    FStatsTrace::Set(&local_res8,(long64)auVar19);
    if (pFVar6->ScopeCount == 0) {
      FThreadStats::Flush(pFVar6,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar6,false,false);
    }
  }
  FVar9 = StatPtr_STAT_D3D12BufferPoolMemoryFree;
  if (StatPtr_STAT_D3D12BufferPoolMemoryFree ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12BufferPoolMemoryFree>)0x0) {
    pFVar4 = ::FName::FName(&local_res8,"STAT_D3D12BufferPoolMemoryFree");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_D3D12BufferPoolMemoryFree>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12BufferPoolMemoryFree,*pFVar4,
                       L"BufferPool Memory Free","STATGROUP_D3D12BufferDetails","STATCAT_Advanced",
                       L"D3D12RHI: Buffer Details",true,false,ST_int64,false,false,MCR_Physical);
  }
  FVar3 = *(FName *)FVar9;
  auVar20[4] = '\0';
  auVar20[5] = '\0';
  auVar20[6] = '\0';
  auVar20[7] = '\0';
  auVar20[0] = (undefined1)local_res18[0];
  auVar20[1] = local_res18[0]._1_1_;
  auVar20[2] = local_res18[0]._2_1_;
  auVar20[3] = local_res18[0]._3_1_;
  local_res8 = FVar3;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar6 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar6 == (FThreadStats *)0x0) {
      pFVar7 = FThreadStatsPool::Get();
      pFVar6 = FThreadStatsPool::GetFromPool(pFVar7);
    }
    local_68[0].NameAndInfo.Number = FVar3.Number & 0xffff8fff | 0x8000;
    local_res8 = FVar3;
    local_68[0].StatData.Pad = auVar20;
    local_68[0].NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar6,local_68);
    FStatsTrace::Set(&local_res8,(long64)auVar20);
    if (pFVar6->ScopeCount == 0) {
      FThreadStats::Flush(pFVar6,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar6,false,false);
    }
  }
  FVar10 = StatPtr_STAT_D3D12BufferPoolAlignmentWaste;
  if (StatPtr_STAT_D3D12BufferPoolAlignmentWaste ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12BufferPoolAlignmentWaste>)0x0) {
    pFVar4 = ::FName::FName(&local_res8,"STAT_D3D12BufferPoolAlignmentWaste");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_D3D12BufferPoolAlignmentWaste>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12BufferPoolAlignmentWaste,
                        *pFVar4,L"BufferPool Memory Alignment Waste","STATGROUP_D3D12BufferDetails",
                        "STATCAT_Advanced",L"D3D12RHI: Buffer Details",true,false,ST_int64,false,
                        false,MCR_Physical);
  }
  FVar3 = *(FName *)FVar10;
  auVar21[4] = '\0';
  auVar21[5] = '\0';
  auVar21[6] = '\0';
  auVar21[7] = '\0';
  auVar21[0] = (undefined1)local_res20[0];
  auVar21[1] = local_res20[0]._1_1_;
  auVar21[2] = local_res20[0]._2_1_;
  auVar21[3] = local_res20[0]._3_1_;
  local_res8 = FVar3;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar6 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar6 == (FThreadStats *)0x0) {
      pFVar7 = FThreadStatsPool::Get();
      pFVar6 = FThreadStatsPool::GetFromPool(pFVar7);
    }
    local_68[0].NameAndInfo.Number = FVar3.Number & 0xffff8fff | 0x8000;
    local_res8 = FVar3;
    local_68[0].StatData.Pad = auVar21;
    local_68[0].NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar6,local_68);
    FStatsTrace::Set(&local_res8,(long64)auVar21);
    if (pFVar6->ScopeCount == 0) {
      FThreadStats::Flush(pFVar6,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar6,false,false);
    }
  }
  FVar11 = StatPtr_STAT_D3D12BufferPoolPageCount;
  if (StatPtr_STAT_D3D12BufferPoolPageCount ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12BufferPoolPageCount>)0x0) {
    pFVar4 = ::FName::FName(&local_res8,"STAT_D3D12BufferPoolPageCount");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_D3D12BufferPoolPageCount>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12BufferPoolPageCount,*pFVar4,
                        L"BufferPool Page Count","STATGROUP_D3D12BufferDetails","STATCAT_Advanced",
                        L"D3D12RHI: Buffer Details",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar3 = *(FName *)FVar11;
  auVar22[4] = '\0';
  auVar22[5] = '\0';
  auVar22[6] = '\0';
  auVar22[7] = '\0';
  auVar22[0] = (undefined1)local_70;
  auVar22[1] = local_70._1_1_;
  auVar22[2] = local_70._2_1_;
  auVar22[3] = local_70._3_1_;
  local_res8 = FVar3;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar6 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar6 == (FThreadStats *)0x0) {
      pFVar7 = FThreadStatsPool::Get();
      pFVar6 = FThreadStatsPool::GetFromPool(pFVar7);
    }
    local_68[0].NameAndInfo.Number = FVar3.Number & 0xffff8fff | 0x8000;
    local_res8 = FVar3;
    local_68[0].StatData.Pad = auVar22;
    local_68[0].NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar6,local_68);
    FStatsTrace::Set(&local_res8,(long64)auVar22);
    if (pFVar6->ScopeCount == 0) {
      FThreadStats::Flush(pFVar6,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar6,false,false);
    }
  }
  FVar12 = StatPtr_STAT_D3D12BufferPoolFullPages;
  if (StatPtr_STAT_D3D12BufferPoolFullPages ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12BufferPoolFullPages>)0x0) {
    pFVar4 = ::FName::FName(&local_res8,"STAT_D3D12BufferPoolFullPages");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_D3D12BufferPoolFullPages>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12BufferPoolFullPages,*pFVar4,
                        L"BufferPool Full Pages","STATGROUP_D3D12BufferDetails","STATCAT_Advanced",
                        L"D3D12RHI: Buffer Details",true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar3 = *(FName *)FVar12;
  auVar23[4] = '\0';
  auVar23[5] = '\0';
  auVar23[6] = '\0';
  auVar23[7] = '\0';
  auVar23[0] = (undefined1)local_6c;
  auVar23[1] = local_6c._1_1_;
  auVar23[2] = local_6c._2_1_;
  auVar23[3] = local_6c._3_1_;
  local_res8 = FVar3;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar6 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar6 == (FThreadStats *)0x0) {
      pFVar7 = FThreadStatsPool::Get();
      pFVar6 = FThreadStatsPool::GetFromPool(pFVar7);
    }
    local_68[0].NameAndInfo.Number = FVar3.Number & 0xffff8fff | 0x8000;
    local_res8 = FVar3;
    local_68[0].StatData.Pad = auVar23;
    local_68[0].NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar6,local_68);
    FStatsTrace::Set(&local_res8,(long64)auVar23);
    if (pFVar6->ScopeCount == 0) {
      FThreadStats::Flush(pFVar6,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar6,false,false);
    }
  }
  FVar13 = StatPtr_STAT_D3D12BufferPoolFragmentation;
  if (StatPtr_STAT_D3D12BufferPoolFragmentation ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12BufferPoolFragmentation>)0x0) {
    pFVar4 = ::FName::FName(&local_res8,"STAT_D3D12BufferPoolFragmentation");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_D3D12BufferPoolFragmentation>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12BufferPoolFragmentation,
                        *pFVar4,L"Bufferool Fragmentation","STATGROUP_D3D12BufferDetails",
                        "STATCAT_Advanced",L"D3D12RHI: Buffer Details",true,false,ST_int64,false,
                        false,MCR_Physical);
  }
  FVar3 = *(FName *)FVar13;
  local_res8 = FVar3;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar6 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar6 == (FThreadStats *)0x0) {
      pFVar7 = FThreadStatsPool::Get();
      pFVar6 = FThreadStatsPool::GetFromPool(pFVar7);
    }
    local_68[0].NameAndInfo.Number = FVar3.Number & 0xffff8fff | 0x8000;
    local_68[0].StatData.Pad[4] = '\0';
    local_68[0].StatData.Pad[5] = '\0';
    local_68[0].StatData.Pad[6] = '\0';
    local_68[0].StatData.Pad[7] = '\0';
    local_68[0].StatData.Pad._0_4_ = uVar17;
    local_res8 = FVar3;
    local_68[0].NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar6,local_68);
    FStatsTrace::Set(&local_res8,(ulonglong)uVar17);
    if (pFVar6->ScopeCount == 0) {
      FThreadStats::Flush(pFVar6,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar6,false,false);
    }
  }
  FVar14 = StatPtr_STAT_D3D12BufferPoolFragmentationPercentage;
  if (StatPtr_STAT_D3D12BufferPoolFragmentationPercentage ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12BufferPoolFragmentationPercentage>)0x0) {
    pFVar4 = ::FName::FName(&local_res8,"STAT_D3D12BufferPoolFragmentationPercentage");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_D3D12BufferPoolFragmentationPercentage>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_D3D12BufferPoolFragmentationPercentage,*pFVar4,
                        L"Bufferool Fragmentation Percentage","STATGROUP_D3D12BufferDetails",
                        "STATCAT_Advanced",L"D3D12RHI: Buffer Details",true,false,NumBits,false,
                        false,MCR_Invalid);
  }
  FVar3 = *(FName *)FVar14;
  local_res8 = FVar3;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar6 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar6 == (FThreadStats *)0x0) {
      pFVar7 = FThreadStatsPool::Get();
      pFVar6 = FThreadStatsPool::GetFromPool(pFVar7);
    }
    local_68[0].NameAndInfo.Number = FVar3.Number & 0xffff8fff | 0x8000;
    local_res8 = FVar3;
    local_68[0].StatData.Pad = (uchar  [8])(double)fVar24;
    local_68[0].NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar6,local_68);
    FStatsTrace::Set(&local_res8,(double)fVar24);
    if (pFVar6->ScopeCount == 0) {
      FThreadStats::Flush(pFVar6,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar6,false,false);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

