// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 24

// FD3D12DescriptorCache @ 1459a9450

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12DescriptorCache * __thiscall
FD3D12DescriptorCache::FD3D12DescriptorCache
          (FD3D12DescriptorCache *this,FD3D12CommandContext *param_1,FRHIGPUMask param_2)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  this->_padding_ = *(longlong *)&param_1->field_0x8;
  *(uint *)&this->_padding_ = param_2.GPUMask;
  *(uint *)((longlong)&this->_padding_ + 4) = param_2.GPUMask;
  iVar4 = 0;
  if (param_2.GPUMask != 0) {
    for (; (param_2.GPUMask >> iVar4 & 1) == 0; iVar4 = iVar4 + 1) {
    }
  }
  iVar5 = 0x20;
  if (param_2.GPUMask != 0) {
    iVar5 = iVar4;
  }
  *(int *)&this->_padding_ = iVar5;
  this->Context = param_1;
  lVar3 = *(longlong *)&param_1->field_0x8;
  this->LastSetViewHeap = (ID3D12DescriptorHeap *)0x0;
  this->DefaultViews = (FD3D12DefaultViews *)(lVar3 + 0x9c0);
  this->LastSetSamplerHeap = (ID3D12DescriptorHeap *)0x0;
  this->CurrentViewHeap = (FD3D12OnlineHeap *)0x0;
  this->CurrentSamplerHeap = (FD3D12OnlineHeap *)0x0;
  this->LocalViewHeap = (FD3D12LocalOnlineHeap *)0x0;
  FD3D12LocalOnlineHeap::FD3D12LocalOnlineHeap(&this->LocalSamplerHeap,this,param_1);
  piVar1 = &(this->SamplerMap).Table.ArrayNum;
  (this->SubAllocatedViewHeap)._padding_ = *(longlong *)&param_1->field_0x8;
  *piVar1 = 0;
  (this->SubAllocatedViewHeap)._padding_ = (longlong)&___7FD3D12SubAllocatedOnlineHeap__6B_;
  piVar2 = &(this->SamplerMap).Table.ArrayMax;
  (this->SubAllocatedViewHeap)._padding_ = 0;
  (this->SubAllocatedViewHeap)._padding_ = 0;
  *(undefined1 *)&(this->SubAllocatedViewHeap)._padding_ = 0;
  (this->SubAllocatedViewHeap).CurrentBlock = (FD3D12OnlineDescriptorBlock *)0x0;
  (this->SubAllocatedViewHeap).DescriptorCache = this;
  (this->SubAllocatedViewHeap).Context = param_1;
  (this->SamplerMap).Table.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x50,8,0x10f,(ForAnyElementType *)&this->SamplerMap,piVar1,piVar2);
  FD3D12ConservativeMap<FD3D12SamplerArrayDesc,D3D12_GPU_DESCRIPTOR_HANDLE>::Reset
            (&this->SamplerMap);
  (this->UniqueTables).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UniqueTables).ArrayNum = 0;
  (this->UniqueTables).ArrayMax = 0;
  (this->LocalSamplerSet).Object =
       (TSet<FD3D12UniqueSamplerTable,FD3D12UniqueSamplerTableKeyFuncs,FDefaultSetAllocator> *)0x0;
  (this->LocalSamplerSet).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bCouldUseBindless = false;
  this->bFullyBindless = false;
  this->bLastSetHeapsBindless = false;
  this->bLastSetHeapBeforeExplicitIsBindless = false;
  this->bUsingExplicitCacheHeaps = false;
  this->bExplicitViewHeapIsBindless = false;
  this->bLocalSamplerHeapOpen = false;
  this->bUsingViewHeap = true;
  this->NumLocalViewDescriptors = 0;
  (this->BindlessResourcesHeap).Reference = (FD3D12DescriptorHeap *)0x0;
  (this->BindlessSamplersHeap).Reference = (FD3D12DescriptorHeap *)0x0;
  return this;
}

// ~FD3D12DescriptorCache @ 1459ac7b0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12DescriptorCache::~FD3D12DescriptorCache(FD3D12DescriptorCache *this)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FD3D12LocalOnlineHeap *pFVar4;
  FD3D12DescriptorHeap *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  pFVar4 = this->LocalViewHeap;
  if (pFVar4 != (FD3D12LocalOnlineHeap *)0x0) {
    (**(code **)pFVar4->_padding_)(pFVar4,1);
  }
  pFVar5 = (this->BindlessSamplersHeap).Reference;
  if (pFVar5 != (FD3D12DescriptorHeap *)0x0) {
    plVar1 = &pFVar5->_padding_;
    LOCK();
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar8 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar5->_padding_)(pFVar5,1);
    }
  }
  pFVar5 = (this->BindlessResourcesHeap).Reference;
  if (pFVar5 != (FD3D12DescriptorHeap *)0x0) {
    plVar1 = &pFVar5->_padding_;
    LOCK();
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar8 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar5->_padding_)(pFVar5,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LocalSamplerSet).SharedReferenceCount.ReferenceController);
  pFVar6 = (this->UniqueTables).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->SamplerMap).Table.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  (this->SubAllocatedViewHeap)._padding_ = (longlong)&___7FD3D12OnlineHeap__6B_;
  puVar7 = (undefined8 *)(this->SubAllocatedViewHeap)._padding_;
  if (puVar7 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar7 + 1);
    LOCK();
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (piVar2 != (int *)0x0)) {
      (**(code **)*puVar7)(puVar7,1);
    }
  }
  FD3D12LocalOnlineHeap::~FD3D12LocalOnlineHeap(&this->LocalSamplerHeap);
  return;
}

// BuildSRVTable @ 1459b33e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

D3D12_GPU_DESCRIPTOR_HANDLE __thiscall
FD3D12DescriptorCache::BuildSRVTable
          (FD3D12DescriptorCache *this,EShaderFrequency param_1,FD3D12RootSignature *param_2,
          FD3D12ShaderResourceViewCache *param_3,ulong64 *param_4,uint param_5,uint *param_6)

{
  FD3D12DescriptorHeap *pFVar1;
  ulong64 uVar2;
  FD3D12CommandContext *pFVar3;
  FD3D12Resource *this_00;
  FD3D12CommandList *this_01;
  code *pcVar4;
  D3D12_CPU_DESCRIPTOR_HANDLE DVar5;
  bool bVar6;
  D3D12_GPU_DESCRIPTOR_HANDLE DVar7;
  TArrayView<FD3D12ResidencyHandle_*_const,int> *pTVar8;
  ID3D12Device *pIVar9;
  ulong64 *puVar10;
  undefined7 in_register_00000011;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  D3D12_CPU_DESCRIPTOR_HANDLE *pDVar15;
  ulonglong *puVar16;
  undefined4 in_stack_00000034;
  int *in_stack_00000040;
  undefined1 auStackY_2e8 [32];
  FD3D12Resource *local_2b0;
  ulong64 *local_2a8;
  undefined8 uStack_2a0;
  FD3D12Resource *local_298;
  ulong64 *local_290;
  D3D12_CPU_DESCRIPTOR_HANDLE local_288;
  longlong *local_280;
  longlong local_278;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_268;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_258;
  D3D12_CPU_DESCRIPTOR_HANDLE local_248 [64];
  ulonglong local_48;
  
  plVar11 = (longlong *)CONCAT71(in_register_00000011,param_1);
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  uVar13 = (ulonglong)param_2 & 0xff;
  local_290 = param_4;
  local_280 = plVar11;
  if ((param_4[uVar13] == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentDirtySlotMask != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                         ,0x1ba,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    DVar7.ptr = (*pcVar4)();
    return (D3D12_GPU_DESCRIPTOR_HANDLE)DVar7.ptr;
  }
  puVar16 = (ulonglong *)CONCAT44(in_stack_00000034,param_5);
  if ((*puVar16 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SlotsNeededMask != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                         ,0x1bb,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    DVar7.ptr = (*pcVar4)();
    return (D3D12_GPU_DESCRIPTOR_HANDLE)DVar7.ptr;
  }
  uVar14 = (ulonglong)param_6 & 0xffffffff;
  if (((uint)param_6 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SlotsNeeded != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                         ,0x1bc,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    DVar7.ptr = (*pcVar4)();
    return (D3D12_GPU_DESCRIPTOR_HANDLE)DVar7.ptr;
  }
  local_278 = (longlong)*in_stack_00000040;
  puVar10 = param_4 + uVar13 * 0x40 + 6;
  *in_stack_00000040 = *in_stack_00000040 + (uint)param_6;
  pFVar1 = (this->CurrentViewHeap->Heap).Reference;
  local_288.ptr = (ulonglong)pFVar1->DescriptorSize * local_278 + (longlong)pFVar1->CpuBase;
  local_2a8 = puVar10;
  if ((uint)param_6 != 0) {
    lVar12 = 0;
    do {
      uVar2 = puVar10[lVar12];
      if (uVar2 == 0) {
        pDVar15 = local_248 + lVar12;
        pDVar15->ptr = (this->DefaultViews->NullSRV)._padding_;
      }
      else {
        if ((*(longlong *)(uVar2 + 0x18) == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsInitialized()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                               ,0x103,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          DVar7.ptr = (*pcVar4)();
          return (D3D12_GPU_DESCRIPTOR_HANDLE)DVar7.ptr;
        }
        local_2a8 = *(ulong64 **)(uVar2 + 0x38);
        uStack_2a0 = *(undefined8 *)(uVar2 + 0x40);
        pFVar3 = this->Context;
        pDVar15 = local_248 + lVar12;
        pDVar15->ptr = (ulong64)local_2a8;
        this_00 = (FD3D12Resource *)param_4[uVar13 * 0x40 + lVar12 + 0x186];
        if ((this_00 == (FD3D12Resource *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Resource",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                               ,0x1a5,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          DVar7.ptr = (*pcVar4)();
          return (D3D12_GPU_DESCRIPTOR_HANDLE)DVar7.ptr;
        }
        if (*(longlong *)&pFVar3->field_0x188 == 0) {
          (**(code **)(*(longlong *)pFVar3 + 8))(pFVar3);
        }
        this_01 = *(FD3D12CommandList **)&pFVar3->field_0x188;
        local_298 = this_00;
        if ((this_00->ReservedResourceData).Ptr == (FD3D12ReservedResourceData *)0x0) {
          pTVar8 = FD3D12Resource::GetResidencyHandles(this_00,&local_258);
          local_268.DataPtr = pTVar8->DataPtr;
          local_268.ArrayNum = pTVar8->ArrayNum;
          local_268._12_4_ = *(undefined4 *)&pTVar8->field_0xc;
          FD3D12CommandList::AddToResidencySet(this_01,&local_268);
        }
        else {
          TSet<FD3D12Resource_const_*,DefaultKeyFuncs<FD3D12Resource_const_*,0>,FDefaultSetAllocator>
          ::Emplace<FD3D12Resource_const_*_const_&>
                    (&(this_01->State).DeferredResidencyUpdateSet,&local_2b0,(bool *)&local_298);
        }
        param_4 = local_290;
        if (*(FD3D12RayTracingScene **)(uVar2 + 0x90) != (FD3D12RayTracingScene *)0x0) {
          FD3D12RayTracingScene::UpdateResidency
                    (*(FD3D12RayTracingScene **)(uVar2 + 0x90),this->Context);
          param_4 = local_290;
        }
      }
      if ((pDVar15->ptr == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("SrcDescriptors[SlotIndex].ptr != 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                             ,0x1db,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        DVar7.ptr = (*pcVar4)();
        return (D3D12_GPU_DESCRIPTOR_HANDLE)DVar7.ptr;
      }
      lVar12 = lVar12 + 1;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
    puVar16 = (ulonglong *)CONCAT44(in_stack_00000034,param_5);
    plVar11 = local_280;
  }
  lVar12 = local_278;
  DVar5.ptr = local_288.ptr;
  if ((uint)param_6 < 0x40) {
    uVar14 = ~((1L << ((byte)param_6 & 0x3f)) - 1U);
  }
  else {
    uVar14 = 0;
  }
  param_4[uVar13] = param_4[uVar13] & uVar14;
  if ((this->_padding_ == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    DVar7.ptr = (*pcVar4)();
    return (D3D12_GPU_DESCRIPTOR_HANDLE)DVar7.ptr;
  }
  pIVar9 = FD3D12Device::GetDevice((FD3D12Device *)this->_padding_);
  FD3D12Device::CopyDescriptors
            (pIVar9,DVar5,local_248,(uint)param_6,D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV);
  if (((param_4[uVar13] & *puVar16) != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(CurrentDirtySlotMask & SlotsNeededMask) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                         ,0x1e1,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    DVar7.ptr = (*pcVar4)();
    return (D3D12_GPU_DESCRIPTOR_HANDLE)DVar7.ptr;
  }
  pFVar1 = (this->CurrentViewHeap->Heap).Reference;
  *plVar11 = (ulonglong)pFVar1->DescriptorSize * lVar12 + (longlong)pFVar1->GpuBase;
  return (D3D12_GPU_DESCRIPTOR_HANDLE)(ulong64)plVar11;
}

// BuildSamplerTable @ 1459b37b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

D3D12_GPU_DESCRIPTOR_HANDLE __thiscall
FD3D12DescriptorCache::BuildSamplerTable
          (FD3D12DescriptorCache *this,EShaderFrequency param_1,FD3D12RootSignature *param_2,
          FD3D12SamplerStateCache *param_3,uint *param_4,uint param_5,uint *param_6)

{
  int *piVar1;
  TArray<FD3D12UniqueSamplerTable,TSizedDefaultAllocator<32>_> *pTVar2;
  uint *puVar3;
  ID3D12DescriptorHeap *pIVar4;
  FD3D12DescriptorHeap *pFVar5;
  CD3DX12_CPU_DESCRIPTOR_HANDLE CVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  D3D12_GPU_DESCRIPTOR_HANDLE DVar13;
  ulong64 uVar14;
  FD3D12SamplerState *pFVar15;
  ID3D12Device *pIVar16;
  undefined8 *puVar17;
  undefined2 uVar18;
  D3D12_CPU_DESCRIPTOR_HANDLE *pDVar19;
  uint uVar20;
  uint uVar21;
  undefined7 in_register_00000011;
  longlong *plVar22;
  uint *puVar23;
  ulonglong uVar24;
  FScriptContainerElement *pFVar25;
  ulonglong uVar26;
  undefined2 *puVar27;
  FScriptContainerElement *pFVar28;
  longlong lVar29;
  ulonglong uVar30;
  uint uVar31;
  undefined4 in_stack_00000034;
  int *in_stack_00000040;
  undefined1 auStackY_348 [32];
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined4 local_2a8;
  undefined8 local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined4 local_258;
  undefined1 auStack_250 [256];
  undefined8 local_150;
  D3D12_CPU_DESCRIPTOR_HANDLE local_148 [32];
  ulonglong local_48;
  
  plVar22 = (longlong *)CONCAT71(in_register_00000011,param_1);
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_348;
  uVar24 = (ulonglong)param_6 & 0xffffffff;
  uVar26 = (ulonglong)param_2 & 0xff;
  if (((FD3D12LocalOnlineHeap *)this->CurrentSamplerHeap != &this->LocalSamplerHeap) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!UsingGlobalSamplerHeap()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                          ,0x14f,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    DVar13.ptr = (*pcVar7)();
    return (D3D12_GPU_DESCRIPTOR_HANDLE)DVar13.ptr;
  }
  puVar3 = param_4 + uVar26;
  if ((param_4[uVar26] == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("CurrentDirtySlotMask != 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                          ,0x152,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    DVar13.ptr = (*pcVar7)();
    return (D3D12_GPU_DESCRIPTOR_HANDLE)DVar13.ptr;
  }
  if ((*(int *)CONCAT44(in_stack_00000034,param_5) == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("SlotsNeededMask != 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                          ,0x153,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    DVar13.ptr = (*pcVar7)();
    return (D3D12_GPU_DESCRIPTOR_HANDLE)DVar13.ptr;
  }
  if (((uint)param_6 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("SlotsNeeded != 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                          ,0x154,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    DVar13.ptr = (*pcVar7)();
    return (D3D12_GPU_DESCRIPTOR_HANDLE)DVar13.ptr;
  }
  *plVar22 = 0;
  local_2a8 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_2d8 = 0;
  uStack_2d0 = 0;
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_2b8 = 0;
  uStack_2b0 = 0;
  if (0x20 < (uint)param_6) goto LAB_1459b3ada;
  local_2e8 = (ulonglong)param_6 & 0xffffffff;
  uVar31 = *puVar3;
  if ((uint)param_6 == 0) {
LAB_1459b3974:
    puVar27 = (undefined2 *)((longlong)&local_2e8 + uVar24 * 2 + 4);
    for (uVar30 = (ulonglong)(0x20 - (uint)param_6); uVar30 != 0; uVar30 = uVar30 - 1) {
      *puVar27 = 0;
      puVar27 = puVar27 + 1;
    }
  }
  else {
    puVar27 = (undefined2 *)((longlong)&local_2e8 + 4);
    puVar23 = param_4 + uVar26 * 0x40 + 6;
    uVar30 = uVar24;
    do {
      uVar18 = 0;
      if (*(longlong *)puVar23 != 0) {
        uVar18 = *(undefined2 *)(*(longlong *)puVar23 + 0x80);
      }
      *puVar27 = uVar18;
      puVar23 = puVar23 + 2;
      puVar27 = puVar27 + 1;
      uVar30 = uVar30 - 1;
    } while (uVar30 != 0);
    uVar11 = 0;
    if ((uint)param_6 < 0x20) {
      uVar11 = -1 << ((byte)param_6 & 0x1f);
    }
    uVar31 = uVar31 & uVar11;
    if ((uint)param_6 < 0x20) goto LAB_1459b3974;
  }
  uVar14 = FD3D12PipelineStateCacheBase::HashData
                     ((void *)((longlong)&local_2e8 + 4),(uint)param_6 * 2);
  uVar11 = (this->SamplerMap).Table.ArrayNum;
  uVar20 = (uint)((uVar14 & 0xffffffff) % (ulonglong)uVar11);
  uVar21 = 0;
  if ((int)uVar20 < (int)uVar11) {
    uVar21 = ~uVar20 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar7 = (code *)swi(3);
    DVar13.ptr = (*pcVar7)();
    return (D3D12_GPU_DESCRIPTOR_HANDLE)DVar13.ptr;
  }
  pFVar28 = (this->SamplerMap).Table.AllocatorInstance.Data + (longlong)(int)uVar20 * 0x50;
  if (*pFVar28 != (FScriptContainerElement)0x0) {
    if ((0x20 < *(uint *)(pFVar28 + 4)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Count <= (sizeof(UEArrayCountHelper(SamplerID)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.h"
                            ,0x6c,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      DVar13.ptr = (*pcVar7)();
      return (D3D12_GPU_DESCRIPTOR_HANDLE)DVar13.ptr;
    }
    if ((0x20 < (uint)local_2e8) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("rhs.Count <= (sizeof(UEArrayCountHelper(rhs.SamplerID)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.h"
                            ,0x6d,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      DVar13.ptr = (*pcVar7)();
      return (D3D12_GPU_DESCRIPTOR_HANDLE)DVar13.ptr;
    }
    if (((*(uint *)(pFVar28 + 4) == (uint)local_2e8) &&
        (iVar12 = memcmp(pFVar28 + 8,(void *)((longlong)&local_2e8 + 4),
                         (ulonglong)*(uint *)(pFVar28 + 4) * 2), iVar12 == 0)) &&
       (pFVar28 + 0x48 != (FScriptContainerElement *)0x0)) {
      pIVar4 = *(ID3D12DescriptorHeap **)((this->LocalSamplerHeap)._padding_ + 0x18);
      if (((pIVar4 != this->LastSetViewHeap) && (pIVar4 != this->LastSetSamplerHeap)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsHeapSet(LocalSamplerHeap.GetHeap())",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                              ,0x171,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        DVar13.ptr = (*pcVar7)();
        return (D3D12_GPU_DESCRIPTOR_HANDLE)DVar13.ptr;
      }
      *plVar22 = *(longlong *)(pFVar28 + 0x48);
      *puVar3 = uVar31;
      return (D3D12_GPU_DESCRIPTOR_HANDLE)(ulong64)plVar22;
    }
  }
LAB_1459b3ada:
  iVar12 = *in_stack_00000040;
  *in_stack_00000040 = iVar12 + (uint)param_6;
  pFVar5 = (this->CurrentSamplerHeap->Heap).Reference;
  CVar6 = pFVar5->CpuBase;
  lVar29 = (ulonglong)pFVar5->DescriptorSize * (longlong)iVar12;
  *plVar22 = (longlong)pFVar5->GpuBase + lVar29;
  if ((uint)param_6 != 0) {
    pDVar19 = local_148;
    do {
      pFVar15 = *(FD3D12SamplerState **)
                 (((longlong)(param_4 + uVar26 * 0x40 + 6) - (longlong)local_148) +
                 (longlong)pDVar19);
      if (pFVar15 == (FD3D12SamplerState *)0x0) {
        pFVar15 = (this->DefaultViews->DefaultSampler).Reference;
      }
      pDVar19->ptr = (pFVar15->OfflineDescriptor)._padding_;
      pDVar19 = pDVar19 + 1;
      uVar24 = uVar24 - 1;
    } while (uVar24 != 0);
  }
  uVar31 = 0;
  if ((uint)param_6 < 0x20) {
    uVar31 = -1 << ((byte)param_6 & 0x1f);
  }
  *puVar3 = *puVar3 & uVar31;
  if ((this->_padding_ == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Parent != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x59,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    DVar13.ptr = (*pcVar7)();
    return (D3D12_GPU_DESCRIPTOR_HANDLE)DVar13.ptr;
  }
  pIVar16 = FD3D12Device::GetDevice((FD3D12Device *)this->_padding_);
  FD3D12Device::CopyDescriptors
            (pIVar16,(D3D12_CPU_DESCRIPTOR_HANDLE)((longlong)CVar6 + lVar29),local_148,(uint)param_6
             ,D3D12_DESCRIPTOR_HEAP_TYPE_SAMPLER);
  if ((uint)param_6 < 0x21) {
    pTVar2 = &this->UniqueTables;
    memset(auStack_250,0,0x100);
    local_288 = local_2d8;
    uStack_280 = uStack_2d0;
    local_150 = 0;
    local_298._0_4_ = (uint)local_2e8;
    local_298._4_4_ = local_2e8._4_4_;
    uStack_290 = (undefined4)uStack_2e0;
    uStack_28c = uStack_2e0._4_4_;
    local_278 = local_2c8;
    uStack_270 = uStack_2c0;
    local_268 = local_2b8;
    uStack_260 = uStack_2b0;
    local_258 = local_2a8;
    memcpy(auStack_250,local_148,(local_2e8 & 0xffffffff) << 3);
    pFVar28 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar28 <= (FScriptContainerElement *)&local_298) &&
        ((FScriptContainerElement *)&local_298 <
         pFVar28 + (longlong)(this->UniqueTables).ArrayMax * 0x150)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar7 = (code *)swi(3);
      DVar13.ptr = (*pcVar7)();
      return (D3D12_GPU_DESCRIPTOR_HANDLE)DVar13.ptr;
    }
    iVar12 = (this->UniqueTables).ArrayNum;
    piVar1 = &(this->UniqueTables).ArrayMax;
    if (iVar12 == *piVar1) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x150,8,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->UniqueTables).ArrayNum = iVar12 + 1;
    lVar29 = 2;
    puVar9 = &local_298;
    pFVar28 = (pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 0x150;
    do {
      pFVar25 = pFVar28;
      puVar17 = puVar9;
      uVar8 = puVar17[1];
      *(undefined8 *)pFVar25 = *puVar17;
      *(undefined8 *)(pFVar25 + 8) = uVar8;
      uVar8 = puVar17[3];
      *(undefined8 *)(pFVar25 + 0x10) = puVar17[2];
      *(undefined8 *)(pFVar25 + 0x18) = uVar8;
      uVar8 = puVar17[5];
      *(undefined8 *)(pFVar25 + 0x20) = puVar17[4];
      *(undefined8 *)(pFVar25 + 0x28) = uVar8;
      uVar8 = puVar17[7];
      *(undefined8 *)(pFVar25 + 0x30) = puVar17[6];
      *(undefined8 *)(pFVar25 + 0x38) = uVar8;
      uVar8 = puVar17[9];
      *(undefined8 *)(pFVar25 + 0x40) = puVar17[8];
      *(undefined8 *)(pFVar25 + 0x48) = uVar8;
      uVar8 = puVar17[0xb];
      *(undefined8 *)(pFVar25 + 0x50) = puVar17[10];
      *(undefined8 *)(pFVar25 + 0x58) = uVar8;
      uVar8 = puVar17[0xd];
      *(undefined8 *)(pFVar25 + 0x60) = puVar17[0xc];
      *(undefined8 *)(pFVar25 + 0x68) = uVar8;
      uVar8 = puVar17[0xf];
      *(undefined8 *)(pFVar25 + 0x70) = puVar17[0xe];
      *(undefined8 *)(pFVar25 + 0x78) = uVar8;
      lVar29 = lVar29 + -1;
      puVar9 = puVar17 + 0x10;
      pFVar28 = pFVar25 + 0x80;
    } while (lVar29 != 0);
    uVar8 = puVar17[0x11];
    *(undefined8 *)(pFVar25 + 0x80) = puVar17[0x10];
    *(undefined8 *)(pFVar25 + 0x88) = uVar8;
    uVar8 = puVar17[0x13];
    *(undefined8 *)(pFVar25 + 0x90) = puVar17[0x12];
    *(undefined8 *)(pFVar25 + 0x98) = uVar8;
    uVar8 = puVar17[0x15];
    *(undefined8 *)(pFVar25 + 0xa0) = puVar17[0x14];
    *(undefined8 *)(pFVar25 + 0xa8) = uVar8;
    uVar8 = puVar17[0x17];
    *(undefined8 *)(pFVar25 + 0xb0) = puVar17[0x16];
    *(undefined8 *)(pFVar25 + 0xb8) = uVar8;
    uVar8 = puVar17[0x19];
    *(undefined8 *)(pFVar25 + 0xc0) = puVar17[0x18];
    *(undefined8 *)(pFVar25 + 200) = uVar8;
    uVar14 = FD3D12PipelineStateCacheBase::HashData
                       ((void *)((longlong)&local_2e8 + 4),(uint)local_2e8 * 2);
    uVar31 = (this->SamplerMap).Table.ArrayNum;
    uVar21 = (uint)((uVar14 & 0xffffffff) % (ulonglong)uVar31);
    uVar11 = 0;
    if ((int)uVar21 < (int)uVar31) {
      uVar11 = ~uVar21 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      DVar13.ptr = (*pcVar7)();
      return (D3D12_GPU_DESCRIPTOR_HANDLE)DVar13.ptr;
    }
    pFVar28 = (this->SamplerMap).Table.AllocatorInstance.Data + (longlong)(int)uVar21 * 0x50;
    *pFVar28 = (FScriptContainerElement)0x1;
    *(ulonglong *)(pFVar28 + 4) = local_2e8;
    *(undefined8 *)(pFVar28 + 0xc) = uStack_2e0;
    *(undefined8 *)(pFVar28 + 0x14) = local_2d8;
    *(undefined8 *)(pFVar28 + 0x1c) = uStack_2d0;
    *(undefined8 *)(pFVar28 + 0x24) = local_2c8;
    *(undefined8 *)(pFVar28 + 0x2c) = uStack_2c0;
    *(undefined8 *)(pFVar28 + 0x34) = local_2b8;
    *(undefined8 *)(pFVar28 + 0x3c) = uStack_2b0;
    *(undefined4 *)(pFVar28 + 0x44) = local_2a8;
    *(longlong *)(pFVar28 + 0x48) = *plVar22;
  }
  return (D3D12_GPU_DESCRIPTOR_HANDLE)(ulong64)plVar22;
}

// BuildUAVTable @ 1459b3e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

D3D12_GPU_DESCRIPTOR_HANDLE __thiscall
FD3D12DescriptorCache::BuildUAVTable
          (FD3D12DescriptorCache *this,EShaderFrequency param_1,FD3D12RootSignature *param_2,
          FD3D12UnorderedAccessViewCache *param_3,ushort *param_4,uint param_5,uint *param_6)

{
  int iVar1;
  uint uVar2;
  FD3D12DescriptorHeap *pFVar3;
  longlong lVar4;
  FD3D12CommandContext *pFVar5;
  FD3D12Resource *this_00;
  FD3D12CommandList *this_01;
  code *pcVar6;
  D3D12_CPU_DESCRIPTOR_HANDLE DVar7;
  bool bVar8;
  ushort uVar9;
  D3D12_GPU_DESCRIPTOR_HANDLE DVar10;
  TArrayView<FD3D12ResidencyHandle_*_const,int> *pTVar11;
  ID3D12Device *pIVar12;
  undefined7 in_register_00000011;
  longlong *plVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined4 in_stack_00000034;
  int *in_stack_00000040;
  undefined1 auStackY_158 [32];
  undefined1 local_124 [12];
  ushort *local_118;
  longlong *local_110;
  D3D12_CPU_DESCRIPTOR_HANDLE local_108;
  ulong64 local_100;
  undefined8 uStack_f8;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_e8;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_d8;
  D3D12_CPU_DESCRIPTOR_HANDLE local_c8 [16];
  ulonglong local_48;
  
  plVar13 = (longlong *)CONCAT71(in_register_00000011,param_1);
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  uVar16 = (ulonglong)param_2 & 0xff;
  local_110 = plVar13;
  if ((param_4[uVar16] == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentDirtySlotMask != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                         ,0xe5,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    DVar10.ptr = (*pcVar6)();
    return (D3D12_GPU_DESCRIPTOR_HANDLE)DVar10.ptr;
  }
  if ((*(short *)CONCAT44(in_stack_00000034,param_5) == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SlotsNeededMask != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                         ,0xe6,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    DVar10.ptr = (*pcVar6)();
    return (D3D12_GPU_DESCRIPTOR_HANDLE)DVar10.ptr;
  }
  if (((uint)param_6 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SlotsNeeded != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                         ,0xe7,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    DVar10.ptr = (*pcVar6)();
    return (D3D12_GPU_DESCRIPTOR_HANDLE)DVar10.ptr;
  }
  iVar1 = *in_stack_00000040;
  uVar14 = 0;
  *in_stack_00000040 = iVar1 + (uint)param_6;
  pFVar3 = (this->CurrentViewHeap->Heap).Reference;
  local_118 = param_4 + uVar16 * 0x40 + 8;
  lVar15 = (ulonglong)pFVar3->DescriptorSize * (longlong)iVar1;
  local_108.ptr = (longlong)pFVar3->CpuBase + lVar15;
  *plVar13 = (longlong)pFVar3->GpuBase + lVar15;
  uVar2 = *(uint *)(param_4 + uVar16 * 2 + 0x308);
  if ((uint)param_6 != 0) {
    lVar15 = 0;
    do {
      if ((uVar14 < uVar2) || (lVar4 = *(longlong *)(local_118 + lVar15 * 4), lVar4 == 0)) {
        local_c8[lVar15].ptr = (this->DefaultViews->NullUAV)._padding_;
      }
      else {
        if ((*(longlong *)(lVar4 + 0x18) == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsInitialized()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                               ,0x103,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          DVar10.ptr = (*pcVar6)();
          return (D3D12_GPU_DESCRIPTOR_HANDLE)DVar10.ptr;
        }
        local_100 = *(ulong64 *)(lVar4 + 0x38);
        uStack_f8 = *(undefined8 *)(lVar4 + 0x40);
        local_c8[lVar15].ptr = local_100;
        pFVar5 = this->Context;
        this_00 = *(FD3D12Resource **)(param_4 + (uVar16 * 0x10 + lVar15) * 4 + 0x188);
        if ((this_00 == (FD3D12Resource *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Resource",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                               ,0x1a5,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          DVar10.ptr = (*pcVar6)();
          return (D3D12_GPU_DESCRIPTOR_HANDLE)DVar10.ptr;
        }
        if (*(longlong *)&pFVar5->field_0x188 == 0) {
          (**(code **)(*(longlong *)pFVar5 + 8))(pFVar5);
        }
        this_01 = *(FD3D12CommandList **)&pFVar5->field_0x188;
        local_124._4_8_ = this_00;
        if ((this_00->ReservedResourceData).Ptr == (FD3D12ReservedResourceData *)0x0) {
          pTVar11 = FD3D12Resource::GetResidencyHandles(this_00,&local_d8);
          local_e8.DataPtr = pTVar11->DataPtr;
          local_e8.ArrayNum = pTVar11->ArrayNum;
          local_e8._12_4_ = *(undefined4 *)&pTVar11->field_0xc;
          FD3D12CommandList::AddToResidencySet(this_01,&local_e8);
        }
        else {
          TSet<FD3D12Resource_const_*,DefaultKeyFuncs<FD3D12Resource_const_*,0>,FDefaultSetAllocator>
          ::Emplace<FD3D12Resource_const_*_const_&>
                    (&(this_01->State).DeferredResidencyUpdateSet,(FD3D12Resource **)local_124,
                     (bool *)(local_124 + 4));
        }
      }
      uVar14 = uVar14 + 1;
      lVar15 = lVar15 + 1;
      plVar13 = local_110;
    } while (uVar14 < (uint)param_6);
  }
  DVar7.ptr = local_108.ptr;
  uVar9 = 0;
  if ((uint)param_6 < 0x10) {
    uVar9 = -1 << ((byte)param_6 & 0x1f);
  }
  param_4[uVar16] = param_4[uVar16] & uVar9;
  if (((*(ushort *)CONCAT44(in_stack_00000034,param_5) & param_4[uVar16]) != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(CurrentDirtySlotMask & SlotsNeededMask) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                         ,0x105,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    DVar10.ptr = (*pcVar6)();
    return (D3D12_GPU_DESCRIPTOR_HANDLE)DVar10.ptr;
  }
  if ((this->_padding_ == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    DVar10.ptr = (*pcVar6)();
    return (D3D12_GPU_DESCRIPTOR_HANDLE)DVar10.ptr;
  }
  pIVar12 = FD3D12Device::GetDevice((FD3D12Device *)this->_padding_);
  FD3D12Device::CopyDescriptors
            (pIVar12,DVar7,local_c8,(uint)param_6,D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV);
  return (D3D12_GPU_DESCRIPTOR_HANDLE)(ulong64)plVar13;
}

// CloseCommandList @ 1459b7360

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12DescriptorCache::CloseCommandList(FD3D12DescriptorCache *this)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TNode *pTVar4;
  FD3D12UniqueSamplerTable *pFVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  FD3D12SyncPoint *pFVar9;
  TNode *pTVar10;
  FD3D12SyncPoint *pFVar11;
  FD3D12SyncPoint *pFVar12;
  undefined4 uStack_1c;
  TArrayView<FD3D12UniqueSamplerTable,int> local_18;
  
  if (this->CurrentViewHeap != (FD3D12OnlineHeap *)0x0) {
    (**(code **)(this->CurrentViewHeap->_padding_ + 0x20))();
  }
  if (this->bFullyBindless == false) {
    if (this->bLocalSamplerHeapOpen != false) {
      if ((int)(this->LocalSamplerHeap)._padding_ != 0) {
        pFVar9 = FD3D12ContextCommon::GetContextSyncPoint
                           ((FD3D12ContextCommon *)(this->LocalSamplerHeap).Context);
        pFVar12 = (FD3D12SyncPoint *)0x0;
        if (pFVar9 != (FD3D12SyncPoint *)0x0) {
          LOCK();
          *(int *)&pFVar9->_padding_ = (int)pFVar9->_padding_ + 1;
          UNLOCK();
          pFVar12 = pFVar9;
        }
        lVar7 = (this->LocalSamplerHeap)._padding_;
        pTVar10 = ::operator_new(0x18);
        if (pTVar10 != (TNode *)0x0) {
          pTVar10->NextNode = (TNode *)0x0;
          (pTVar10->Item).SyncPoint.Reference = pFVar12;
          if (pFVar12 != (FD3D12SyncPoint *)0x0) {
            LOCK();
            *(int *)&pFVar12->_padding_ = (int)pFVar12->_padding_ + 1;
            UNLOCK();
          }
          (pTVar10->Item).LastSlotInUse = (int)lVar7 - 1;
          pTVar4 = (this->LocalSamplerHeap).SyncPoints.Head;
          (this->LocalSamplerHeap).SyncPoints.Head = pTVar10;
          pTVar4->NextNode = pTVar10;
        }
        pFVar11 = FD3D12ContextCommon::GetContextSyncPoint
                            ((FD3D12ContextCommon *)(this->LocalSamplerHeap).Context);
        pFVar9 = (this->LocalSamplerHeap).Entry.SyncPoint.Reference;
        if (pFVar9 != pFVar11) {
          (this->LocalSamplerHeap).Entry.SyncPoint.Reference = pFVar11;
          if (pFVar11 != (FD3D12SyncPoint *)0x0) {
            LOCK();
            *(int *)&pFVar11->_padding_ = (int)pFVar11->_padding_ + 1;
            UNLOCK();
          }
          if (pFVar9 != (FD3D12SyncPoint *)0x0) {
            plVar1 = &pFVar9->_padding_;
            LOCK();
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if (((int)lVar7 == 1) && (plVar1 != (longlong *)0x0)) {
              (**(code **)pFVar9->_padding_)(pFVar9,1);
            }
          }
        }
        FD3D12LocalOnlineHeap::RecycleSlots(&this->LocalSamplerHeap);
        if (pFVar12 != (FD3D12SyncPoint *)0x0) {
          plVar1 = &pFVar12->_padding_;
          LOCK();
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if (((int)lVar7 == 1) && (plVar1 != (longlong *)0x0)) {
            (**(code **)pFVar12->_padding_)(pFVar12,1);
          }
        }
      }
      this->bLocalSamplerHeapOpen = false;
    }
    if ((this->_padding_ == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Parent != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                           ,0x59,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar5 = (FD3D12UniqueSamplerTable *)(this->UniqueTables).AllocatorInstance.Data;
    iVar3 = (this->UniqueTables).ArrayNum;
    lVar7 = this->_padding_;
    if ((iVar3 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_18._12_4_ = uStack_1c;
    local_18.ArrayNum = iVar3;
    local_18.DataPtr = pFVar5;
    FD3D12GlobalOnlineSamplerHeap::ConsolidateUniqueSamplerTables
              ((FD3D12GlobalOnlineSamplerHeap *)(lVar7 + 0x920),&local_18);
    piVar2 = &(this->UniqueTables).ArrayMax;
    (this->UniqueTables).ArrayNum = 0;
    if (*piVar2 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x150,8,0,&(this->UniqueTables).AllocatorInstance,0,piVar2);
    }
  }
  return;
}

// HeapLoopedAround @ 1459c3900

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12DescriptorCache::HeapLoopedAround(FD3D12DescriptorCache *this,ERHIDescriptorHeapType param_1)

{
  if (param_1 == Sampler) {
    FD3D12ConservativeMap<FD3D12SamplerArrayDesc,D3D12_GPU_DESCRIPTOR_HANDLE>::Reset
              (&this->SamplerMap);
    return;
  }
  return;
}

// HeapRolledOver @ 1459c3960

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

bool __thiscall
FD3D12DescriptorCache::HeapRolledOver(FD3D12DescriptorCache *this,ERHIDescriptorHeapType param_1)

{
  bool bVar1;
  
  bVar1 = SetDescriptorHeaps(this,None);
  return bVar1;
}

// Init @ 1459c4060

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12DescriptorCache::Init(FD3D12DescriptorCache *this,uint param_1,uint param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FD3D12OnlineHeap *pFVar5;
  
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x59,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = *(int *)(this->_padding_ + 0x750);
  this->bCouldUseBindless = 1 < iVar1;
  this->bFullyBindless = iVar1 == 3;
  this->bUsingViewHeap = iVar1 != 3;
  if (iVar1 == 3) {
    param_2 = 0;
  }
  FD3D12LocalOnlineHeap::Init(&this->LocalSamplerHeap,param_2,Sampler);
  bVar3 = this->bUsingViewHeap != false;
  this->CurrentSamplerHeap = (FD3D12OnlineHeap *)0x0;
  uVar4 = 0;
  if (bVar3) {
    uVar4 = param_1;
  }
  this->NumLocalViewDescriptors = uVar4;
  pFVar5 = (FD3D12OnlineHeap *)&this->SubAllocatedViewHeap;
  if (!bVar3) {
    pFVar5 = (FD3D12OnlineHeap *)0x0;
  }
  this->CurrentViewHeap = pFVar5;
  return;
}

// OpenCommandList @ 1459c8bb0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12DescriptorCache::OpenCommandList(FD3D12DescriptorCache *this)

{
  longlong lVar1;
  FD3D12CommandContext *pFVar2;
  FD3D12BindlessResourceManager *this_00;
  TSet<FD3D12UniqueSamplerTable,FD3D12UniqueSamplerTableKeyFuncs,FDefaultSetAllocator> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FSharedReferencer<1> FVar6;
  TSet<FD3D12UniqueSamplerTable,FD3D12UniqueSamplerTableKeyFuncs,FDefaultSetAllocator> *local_18;
  FSharedReferencer<1> local_10;
  
  this->LastSetViewHeap = (ID3D12DescriptorHeap *)0x0;
  this->LastSetSamplerHeap = (ID3D12DescriptorHeap *)0x0;
  if (this->_padding_ == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x59,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar1 = this->_padding_;
  pFVar2 = this->Context;
  this_00 = *(FD3D12BindlessResourceManager **)(lVar1 + 0x740);
  if (this_00 != (FD3D12BindlessResourceManager *)0x0) {
    FD3D12BindlessResourceManager::AssignHeapToState(this_00,&pFVar2->BindlessState);
    if (1 < (int)this_00->Configuration) {
      FD3D12StateCache::SetNewBindlessResourcesHeap
                (&pFVar2->StateCache,(pFVar2->BindlessState).CurrentGpuHeap.Reference);
    }
  }
  lVar1 = *(longlong *)(lVar1 + 0x748);
  if ((lVar1 != 0) && (1 < *(int *)(lVar1 + 0x10))) {
    FD3D12StateCache::SetNewBindlessSamplerHeap
              (&pFVar2->StateCache,*(FD3D12DescriptorHeap **)(lVar1 + 8));
  }
  if (this->bFullyBindless == false) {
    FD3D12LocalOnlineHeap::RecycleSlots(&this->LocalSamplerHeap);
    if (this->bFullyBindless == false) {
      if (this->bLocalSamplerHeapOpen != false) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bLocalSamplerHeapOpen",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                           ,0x332,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (this->_padding_ == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Parent != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                           ,0x59,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      lVar1 = this->_padding_;
      AcquireSRWLockShared((PSRWLOCK)(lVar1 + 0x958));
      FVar6.ReferenceController = *(TReferenceControllerBase<1> **)(lVar1 + 0x950);
      pTVar3 = *(TSet<FD3D12UniqueSamplerTable,FD3D12UniqueSamplerTableKeyFuncs,FDefaultSetAllocator>
                 **)(lVar1 + 0x948);
      if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar6.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_18 = pTVar3;
      local_10.ReferenceController = FVar6.ReferenceController;
      ReleaseSRWLockShared((PSRWLOCK)(lVar1 + 0x958));
      if (&this->LocalSamplerSet !=
          (TSharedPtr<TSet<FD3D12UniqueSamplerTable,FD3D12UniqueSamplerTableKeyFuncs,FDefaultSetAllocator>,1>
           *)&local_18) {
        (this->LocalSamplerSet).Object = pTVar3;
        local_18 = (TSet<FD3D12UniqueSamplerTable,FD3D12UniqueSamplerTableKeyFuncs,FDefaultSetAllocator>
                    *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->LocalSamplerSet).SharedReferenceCount,&local_10);
        FVar6.ReferenceController = local_10.ReferenceController;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar6.ReferenceController);
      this->CurrentSamplerHeap = (FD3D12OnlineHeap *)(lVar1 + 0x920);
    }
  }
  if (this->CurrentViewHeap != (FD3D12OnlineHeap *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001459c8d85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->CurrentViewHeap->_padding_ + 0x18))();
    return;
  }
  return;
}

// PrepareBindlessViews @ 1459c92d0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FD3D12DescriptorCache::PrepareBindlessViews
          (FD3D12DescriptorCache *this,EShaderFrequency param_1,
          TArrayView<FD3D12ShaderResourceView_*_const,int> *param_2,
          TArrayView<FD3D12UnorderedAccessView_*_const,int> *param_3)

{
  FD3D12ShaderResourceView **ppFVar1;
  FD3D12UnorderedAccessView **ppFVar2;
  FD3D12ShaderResourceView *pFVar3;
  FD3D12UnorderedAccessView *pFVar4;
  FD3D12CommandContext *pFVar5;
  FD3D12Resource *pFVar6;
  FD3D12CommandList *pFVar7;
  code *pcVar8;
  bool bVar9;
  TArrayView<FD3D12ResidencyHandle_*_const,int> *pTVar10;
  FD3D12UnorderedAccessView **ppFVar11;
  FD3D12ShaderResourceView **ppFVar12;
  FD3D12Resource *local_res18;
  FD3D12Resource *local_res20;
  FD3D12Resource *local_88;
  FD3D12Resource *local_80;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_78;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_68;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_58;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_48;
  
  ppFVar12 = param_2->DataPtr;
  ppFVar1 = ppFVar12 + param_2->ArrayNum;
  for (; ppFVar12 != ppFVar1; ppFVar12 = ppFVar12 + 1) {
    pFVar3 = *ppFVar12;
    if (pFVar3 == (FD3D12ShaderResourceView *)0x0) {
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1125101562616610300>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                         ,0x204,"SRV");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    else {
      pFVar5 = this->Context;
      if ((pFVar3->_padding_ == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                             ,0xfe,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar6 = (FD3D12Resource *)pFVar3->_padding_;
      if ((pFVar6 == (FD3D12Resource *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Resource",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                             ,0x1a5,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (*(longlong *)&pFVar5->field_0x188 == 0) {
        (**(code **)(*(longlong *)pFVar5 + 8))(pFVar5);
      }
      pFVar7 = *(FD3D12CommandList **)&pFVar5->field_0x188;
      local_88 = pFVar6;
      if ((pFVar6->ReservedResourceData).Ptr == (FD3D12ReservedResourceData *)0x0) {
        pTVar10 = FD3D12Resource::GetResidencyHandles(pFVar6,&local_58);
        local_78.DataPtr = pTVar10->DataPtr;
        local_78.ArrayNum = pTVar10->ArrayNum;
        local_78._12_4_ = *(undefined4 *)&pTVar10->field_0xc;
        FD3D12CommandList::AddToResidencySet(pFVar7,&local_78);
      }
      else {
        TSet<FD3D12Resource_const_*,DefaultKeyFuncs<FD3D12Resource_const_*,0>,FDefaultSetAllocator>
        ::Emplace<FD3D12Resource_const_*_const_&>
                  (&(pFVar7->State).DeferredResidencyUpdateSet,&local_res18,(bool *)&local_88);
      }
      if (pFVar3->RayTracingScene != (FD3D12RayTracingScene *)0x0) {
        FD3D12RayTracingScene::UpdateResidency(pFVar3->RayTracingScene,this->Context);
      }
    }
  }
  ppFVar11 = param_3->DataPtr;
  ppFVar2 = ppFVar11 + param_3->ArrayNum;
  do {
    if (ppFVar11 == ppFVar2) {
      return;
    }
    pFVar4 = *ppFVar11;
    if (pFVar4 == (FD3D12UnorderedAccessView *)0x0) {
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1125101562616610284>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                         ,0x214,"UAV");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    else {
      pFVar5 = this->Context;
      if ((pFVar4->_padding_ == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                             ,0xfe,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar6 = (FD3D12Resource *)pFVar4->_padding_;
      if ((pFVar6 == (FD3D12Resource *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Resource",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                             ,0x1a5,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (*(longlong *)&pFVar5->field_0x188 == 0) {
        (**(code **)(*(longlong *)pFVar5 + 8))(pFVar5);
      }
      pFVar7 = *(FD3D12CommandList **)&pFVar5->field_0x188;
      local_80 = pFVar6;
      if ((pFVar6->ReservedResourceData).Ptr == (FD3D12ReservedResourceData *)0x0) {
        pTVar10 = FD3D12Resource::GetResidencyHandles(pFVar6,&local_48);
        local_68.DataPtr = pTVar10->DataPtr;
        local_68.ArrayNum = pTVar10->ArrayNum;
        local_68._12_4_ = *(undefined4 *)&pTVar10->field_0xc;
        FD3D12CommandList::AddToResidencySet(pFVar7,&local_68);
      }
      else {
        TSet<FD3D12Resource_const_*,DefaultKeyFuncs<FD3D12Resource_const_*,0>,FDefaultSetAllocator>
        ::Emplace<FD3D12Resource_const_*_const_&>
                  (&(pFVar7->State).DeferredResidencyUpdateSet,&local_res20,(bool *)&local_80);
      }
    }
    ppFVar11 = ppFVar11 + 1;
  } while( true );
}

// SetConstantBufferViews @ 1459d7740

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FD3D12DescriptorCache::SetConstantBufferViews
          (FD3D12DescriptorCache *this,EShaderFrequency param_1,FD3D12RootSignature *param_2,
          FD3D12ConstantBufferCache *param_3,ushort param_4,uint param_5,uint *param_6)

{
  return;
}

// SetDescriptorHeaps @ 1459d77e0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

bool __thiscall
FD3D12DescriptorCache::SetDescriptorHeaps
          (FD3D12DescriptorCache *this,ED3D12SetDescriptorHeapsFlags param_1)

{
  int *piVar1;
  ID3D12DescriptorHeap *pIVar2;
  FName FVar3;
  ID3D12DescriptorHeap *pIVar4;
  FD3D12CommandContext *pFVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  FD3D12DescriptorHeap *pFVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_ViewHeapChanged> FVar13;
  FThreadStats *pFVar14;
  FThreadStatsPool *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_SamplerHeapChanged> FVar16;
  bool bVar17;
  uchar auVar18 [8];
  uchar auVar19 [8];
  FName local_res20;
  FName local_88;
  FName local_80;
  FName local_78;
  FStatMessage local_70;
  FStatMessage local_60;
  ID3D12DescriptorHeap *local_50;
  ID3D12DescriptorHeap *local_48;
  
  (**(code **)(*(longlong *)&this->Context->field_0x1c0 + 8))();
  bVar17 = (bool)((byte)param_1 & 1);
  if ((this->bCouldUseBindless == false) || ((param_1 & Bindless) == None)) {
    bVar10 = false;
    pFVar11 = (this->CurrentViewHeap->Heap).Reference;
  }
  else {
    bVar10 = true;
    if (((this->BindlessResourcesHeap).Reference == (FD3D12DescriptorHeap *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindlessResourcesHeap",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                           ,0x54,L"Bindless resource heap was not set in OpenCommandList!"), bVar8))
    {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    if (((this->BindlessSamplersHeap).Reference == (FD3D12DescriptorHeap *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("BindlessSamplersHeap",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                           ,0x55,L"Bindless sampler heap was not set in OpenCommandList!"), bVar8))
    {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    pFVar11 = (this->BindlessResourcesHeap).Reference;
  }
  pIVar2 = (pFVar11->Heap).Reference;
  if (this->LastSetViewHeap != pIVar2) {
    bVar17 = true;
    if (bVar10 == false) {
      FD3D12StateCache::DirtyViewDescriptorTables(&this->Context->StateCache);
    }
    auVar18[1] = '\0';
    auVar18[2] = '\0';
    auVar18[3] = '\0';
    auVar18[4] = '\0';
    auVar18[5] = '\0';
    auVar18[6] = '\0';
    auVar18[7] = '\0';
    auVar18[0] = this->LastSetViewHeap != (ID3D12DescriptorHeap *)0x0;
    if ((this->LastSetViewHeap != (ID3D12DescriptorHeap *)0x0) &&
       (FThreadStats::bPrimaryEnable != false)) {
      FVar13 = StatPtr_STAT_ViewHeapChanged;
      if (StatPtr_STAT_ViewHeapChanged == (FThreadSafeStaticStat<FStat_STAT_ViewHeapChanged>)0x0) {
        pFVar12 = ::FName::FName(&local_80,"STAT_ViewHeapChanged");
        FVar13 = (FThreadSafeStaticStat<FStat_STAT_ViewHeapChanged>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ViewHeapChanged,*pFVar12,
                            L"View: Heap changed","STATGROUP_D3D12DescriptorHeap","STATCAT_Advanced"
                            ,L"D3D12RHI: Descriptor Heap (GPU Visible)",true,true,ST_int64,false,
                            false,MCR_Invalid);
      }
      FVar3 = *(FName *)FVar13;
      if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar14 == (FThreadStats *)0x0) {
          pFVar15 = FThreadStatsPool::Get();
          pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
        }
        local_70.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
        local_res20 = FVar3;
        local_70.StatData.Pad = auVar18;
        local_70.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar14,&local_70);
        FStatsTrace::Add(&local_res20,(long64)auVar18);
        if (pFVar14->ScopeCount == 0) {
          FThreadStats::Flush(pFVar14,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar14,false,false);
        }
      }
    }
  }
  if (bVar10 == false) {
    pFVar11 = (this->CurrentSamplerHeap->Heap).Reference;
  }
  else {
    pFVar11 = (this->BindlessSamplersHeap).Reference;
  }
  pIVar4 = (pFVar11->Heap).Reference;
  if (this->LastSetSamplerHeap == pIVar4) {
    if (bVar17 == false) goto LAB_1459d7c62;
  }
  else {
    bVar17 = true;
    if (bVar10 == false) {
      FD3D12StateCache::DirtySamplerDescriptorTables(&this->Context->StateCache);
      FD3D12ConservativeMap<FD3D12SamplerArrayDesc,D3D12_GPU_DESCRIPTOR_HANDLE>::Reset
                (&this->SamplerMap);
    }
    auVar19[1] = '\0';
    auVar19[2] = '\0';
    auVar19[3] = '\0';
    auVar19[4] = '\0';
    auVar19[5] = '\0';
    auVar19[6] = '\0';
    auVar19[7] = '\0';
    auVar19[0] = this->LastSetSamplerHeap != (ID3D12DescriptorHeap *)0x0;
    if ((this->LastSetSamplerHeap != (ID3D12DescriptorHeap *)0x0) &&
       (FThreadStats::bPrimaryEnable != false)) {
      FVar16 = StatPtr_STAT_SamplerHeapChanged;
      if (StatPtr_STAT_SamplerHeapChanged ==
          (FThreadSafeStaticStat<FStat_STAT_SamplerHeapChanged>)0x0) {
        pFVar12 = ::FName::FName(&local_78,"STAT_SamplerHeapChanged");
        FVar16 = (FThreadSafeStaticStat<FStat_STAT_SamplerHeapChanged>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SamplerHeapChanged,*pFVar12,
                            L"Sampler: Heap changed","STATGROUP_D3D12DescriptorHeap",
                            "STATCAT_Advanced",L"D3D12RHI: Descriptor Heap (GPU Visible)",true,true,
                            ST_int64,false,false,MCR_Invalid);
      }
      FVar3 = *(FName *)FVar16;
      if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar14 == (FThreadStats *)0x0) {
          pFVar15 = FThreadStatsPool::Get();
          pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
        }
        local_60.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
        local_88 = FVar3;
        local_60.StatData.Pad = auVar19;
        local_60.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar14,&local_60);
        FStatsTrace::Add(&local_88,(long64)auVar19);
        if (pFVar14->ScopeCount == 0) {
          FThreadStats::Flush(pFVar14,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar14,false,false);
        }
      }
    }
  }
  pFVar5 = this->Context;
  local_50 = pIVar2;
  local_48 = pIVar4;
  if (*(longlong *)&pFVar5->field_0x188 == 0) {
    (**(code **)(*(longlong *)pFVar5 + 8))(pFVar5);
  }
  plVar6 = *(longlong **)(*(longlong *)&pFVar5->field_0x188 + 0x28);
  piVar1 = (int *)(*(longlong *)&pFVar5->field_0x188 + 0x168);
  *piVar1 = *piVar1 + 1;
  (**(code **)(*plVar6 + 0xe0))(plVar6,2,&local_50);
  this->LastSetViewHeap = pIVar2;
  this->LastSetSamplerHeap = pIVar4;
  this->bLastSetHeapsBindless = bVar10;
LAB_1459d7c62:
  if ((this->LastSetViewHeap != pIVar2) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("LastSetViewHeap == PendingViewHeap",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                          ,0x98,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  return bVar17;
}

// SetExplicitDescriptorCache @ 1459d7dc0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12DescriptorCache::SetExplicitDescriptorCache
          (FD3D12DescriptorCache *this,FD3D12ExplicitDescriptorCache *param_1)

{
  int *piVar1;
  longlong lVar2;
  FD3D12CommandContext *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  ID3D12DescriptorHeap *pIVar8;
  ID3D12DescriptorHeap *pIVar9;
  FD3D12DescriptorHeapPair local_28;
  ID3D12DescriptorHeap *local_18;
  ID3D12DescriptorHeap *local_10;
  
  if ((this->_padding_ == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FD3D12BindlessDescriptorManager::GetExplicitHeapsForContext
            ((FD3D12BindlessDescriptorManager *)(this->_padding_ + 0x730),&local_28,this->Context,
             param_1->BindlessConfiguration);
  pIVar8 = (ID3D12DescriptorHeap *)0x0;
  pIVar9 = pIVar8;
  if (local_28.ResourceHeap != (FD3D12DescriptorHeap *)0x0) {
    pIVar9 = ((local_28.ResourceHeap)->Heap).Reference;
  }
  if (local_28.SamplerHeap != (FD3D12DescriptorHeap *)0x0) {
    pIVar8 = ((local_28.SamplerHeap)->Heap).Reference;
  }
  bVar6 = pIVar9 != (ID3D12DescriptorHeap *)0x0;
  if (pIVar9 == (ID3D12DescriptorHeap *)0x0) {
    if (((param_1->ViewHeap)._padding_ == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Parent != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                           ,0x59,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar2 = (param_1->ViewHeap)._padding_;
    if ((this->_padding_ == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Parent != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                           ,0x59,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((lVar2 != this->_padding_) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ExplicitDescriptorCache.ViewHeap.GetParentDevice() == GetParentDevice()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                           ,0x34e,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pIVar9 = (param_1->ViewHeap).D3D12Heap;
  }
  if (pIVar8 == (ID3D12DescriptorHeap *)0x0) {
    if (((param_1->SamplerHeap)._padding_ == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Parent != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                           ,0x59,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar2 = (param_1->SamplerHeap)._padding_;
    if ((this->_padding_ == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Parent != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                           ,0x59,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((lVar2 != this->_padding_) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ExplicitDescriptorCache.SamplerHeap.GetParentDevice() == GetParentDevice()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                           ,0x354,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pIVar8 = (param_1->SamplerHeap).D3D12Heap;
  }
  if ((pIVar9 != this->LastSetViewHeap) || (pIVar8 != this->LastSetSamplerHeap)) {
    this->LastSetViewHeap = pIVar9;
    pFVar3 = this->Context;
    this->LastSetSamplerHeap = pIVar8;
    local_18 = pIVar9;
    local_10 = pIVar8;
    if (*(longlong *)&pFVar3->field_0x188 == 0) {
      (**(code **)(*(longlong *)pFVar3 + 8))(pFVar3);
    }
    plVar4 = *(longlong **)(*(longlong *)&pFVar3->field_0x188 + 0x28);
    piVar1 = (int *)(*(longlong *)&pFVar3->field_0x188 + 0x168);
    *piVar1 = *piVar1 + 1;
    (**(code **)(*plVar4 + 0xe0))(plVar4,2,&local_18);
    this->bLastSetHeapBeforeExplicitIsBindless = this->bLastSetHeapsBindless;
    this->bUsingExplicitCacheHeaps = true;
    this->bExplicitViewHeapIsBindless = bVar6;
    this->bLastSetHeapsBindless = bVar6;
  }
  return;
}

// SetRenderTargets @ 1459d8830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12DescriptorCache::SetRenderTargets
          (FD3D12DescriptorCache *this,FD3D12RenderTargetView **param_1,uint param_2,
          FD3D12DepthStencilView *param_3)

{
  int *piVar1;
  longlong lVar2;
  FD3D12CommandContext *pFVar3;
  FD3D12Resource *pFVar4;
  FD3D12CommandList *pFVar5;
  code *pcVar6;
  bool bVar7;
  TArrayView<FD3D12ResidencyHandle_*_const,int> *pTVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  undefined1 local_108 [8];
  FD3D12Resource *local_100;
  undefined8 local_f8;
  FD3D12Resource *local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_d8;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_c8;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_b8;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_a8;
  longlong local_98 [8];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_138;
  if (param_2 != 0) {
    plVar9 = local_98;
    uVar10 = (ulonglong)param_2;
    do {
      lVar2 = *(longlong *)((longlong)plVar9 + ((longlong)param_1 - (longlong)local_98));
      if (lVar2 == 0) {
        *plVar9 = (this->DefaultViews->NullRTV)._padding_;
      }
      else {
        if ((*(longlong *)(lVar2 + 0x18) == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsInitialized()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                               ,0x103,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_e8 = *(longlong *)(lVar2 + 0x38);
        uStack_e0 = *(undefined8 *)(lVar2 + 0x40);
        lVar2 = *(longlong *)((longlong)plVar9 + ((longlong)param_1 - (longlong)local_98));
        pFVar3 = this->Context;
        *plVar9 = local_e8;
        if ((*(longlong *)(lVar2 + 0x18) == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsInitialized()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                               ,0xfe,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = *(FD3D12Resource **)(lVar2 + 0x20);
        if ((pFVar4 == (FD3D12Resource *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Resource",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                               ,0x1a5,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(longlong *)&pFVar3->field_0x188 == 0) {
          (**(code **)(*(longlong *)pFVar3 + 8))(pFVar3);
        }
        pFVar5 = *(FD3D12CommandList **)&pFVar3->field_0x188;
        local_100 = pFVar4;
        if ((pFVar4->ReservedResourceData).Ptr == (FD3D12ReservedResourceData *)0x0) {
          pTVar8 = FD3D12Resource::GetResidencyHandles(pFVar4,&local_b8);
          local_d8.DataPtr = pTVar8->DataPtr;
          local_d8.ArrayNum = pTVar8->ArrayNum;
          local_d8._12_4_ = *(undefined4 *)&pTVar8->field_0xc;
          FD3D12CommandList::AddToResidencySet(pFVar5,&local_d8);
        }
        else {
          TSet<FD3D12Resource_const_*,DefaultKeyFuncs<FD3D12Resource_const_*,0>,FDefaultSetAllocator>
          ::Emplace<FD3D12Resource_const_*_const_&>
                    (&(pFVar5->State).DeferredResidencyUpdateSet,(FD3D12Resource **)local_108,
                     (bool *)&local_100);
        }
      }
      plVar9 = plVar9 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  if (param_3 == (FD3D12DepthStencilView *)0x0) {
    pFVar3 = this->Context;
    if (*(longlong *)&pFVar3->field_0x188 == 0) {
      (**(code **)(*(longlong *)pFVar3 + 8))(pFVar3);
    }
    local_118 = (undefined8 *)0x0;
    plVar9 = *(longlong **)(*(longlong *)&pFVar3->field_0x188 + 0x28);
    piVar1 = (int *)(*(longlong *)&pFVar3->field_0x188 + 0x168);
    *piVar1 = *piVar1 + 1;
    (**(code **)(*plVar9 + 0x170))(plVar9,param_2,local_98,0);
  }
  else {
    if ((*(longlong *)&param_3->field_0x18 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                           ,0x103,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_f8 = *(undefined8 *)&param_3->field_0x38;
    uStack_e0 = *(undefined8 *)&param_3->field_0x40;
    pFVar3 = this->Context;
    local_e8 = local_f8;
    if (*(longlong *)&pFVar3->field_0x188 == 0) {
      (**(code **)(*(longlong *)pFVar3 + 8))(pFVar3);
    }
    local_118 = &local_f8;
    plVar9 = *(longlong **)(*(longlong *)&pFVar3->field_0x188 + 0x28);
    piVar1 = (int *)(*(longlong *)&pFVar3->field_0x188 + 0x168);
    *piVar1 = *piVar1 + 1;
    (**(code **)(*plVar9 + 0x170))(plVar9,param_2,local_98,0);
    pFVar3 = this->Context;
    if ((*(longlong *)&param_3->field_0x18 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                           ,0xfe,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar4 = *(FD3D12Resource **)&param_3->field_0x20;
    if ((pFVar4 == (FD3D12Resource *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                           ,0x1a5,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (*(longlong *)&pFVar3->field_0x188 == 0) {
      (**(code **)(*(longlong *)pFVar3 + 8))(pFVar3);
    }
    pFVar5 = *(FD3D12CommandList **)&pFVar3->field_0x188;
    local_f0 = pFVar4;
    if ((pFVar4->ReservedResourceData).Ptr == (FD3D12ReservedResourceData *)0x0) {
      pTVar8 = FD3D12Resource::GetResidencyHandles(pFVar4,&local_a8);
      local_c8.DataPtr = pTVar8->DataPtr;
      local_c8.ArrayNum = pTVar8->ArrayNum;
      local_c8._12_4_ = *(undefined4 *)&pTVar8->field_0xc;
      FD3D12CommandList::AddToResidencySet(pFVar5,&local_c8);
    }
    else {
      TSet<FD3D12Resource_const_*,DefaultKeyFuncs<FD3D12Resource_const_*,0>,FDefaultSetAllocator>::
      Emplace<FD3D12Resource_const_*_const_&>
                (&(pFVar5->State).DeferredResidencyUpdateSet,(FD3D12Resource **)(local_108 + 4),
                 (bool *)&local_f0);
    }
  }
  return;
}

// SetRootConstantBuffers @ 1459d9440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FD3D12DescriptorCache::SetRootConstantBuffers
          (FD3D12DescriptorCache *this,EShaderFrequency param_1,FD3D12RootSignature *param_2,
          FD3D12ConstantBufferCache *param_3,ushort param_4,FD3D12StateCache *param_5)

{
  int *piVar1;
  ulong64 uVar2;
  FD3D12ComputePipelineState *pFVar3;
  FD3D12CommandContext *pFVar4;
  longlong *plVar5;
  FD3D12Resource *this_00;
  FD3D12CommandList *this_01;
  FD3D12GraphicsPipelineState *pFVar6;
  code *pcVar7;
  FD3D12StateCache *pFVar8;
  bool bVar9;
  byte bVar10;
  longlong lVar11;
  TArrayView<FD3D12ResidencyHandle_*_const,int> *pTVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar17;
  undefined1 auStackY_1e8 [32];
  uint local_1b8;
  FString local_1b0;
  uint local_1a0;
  FString local_198;
  FString local_188;
  FSHA1 *local_178;
  FString *local_170;
  FString local_168;
  FD3D12StateCache *local_158;
  FD3D12DescriptorCache *local_150;
  FD3D12ConstantBufferCache *local_148;
  int local_140;
  undefined1 local_13c [20];
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_128;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_118;
  uchar local_108 [32];
  FSHA1 local_e8;
  ulonglong local_58;
  int iVar16;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  uVar17 = (ulonglong)param_1;
  uVar14 = 0;
  local_158 = param_5;
  local_150 = this;
  local_148 = param_3;
  if ((*(short *)((longlong)(param_3->CurrentGPUVirtualAddress + -1) + 0x70 + uVar17 * 2) == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentDirtySlotMask != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                         ,0x29e,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (param_4 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("SlotsNeededMask != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                       ,0x29f,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("RDCBVSlotsNeededMask",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                       ,0x2a3,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  switch(uVar17) {
  case 0:
    bVar10 = param_2->BindSlotMap[6];
    break;
  case 1:
    bVar10 = param_2->BindSlotMap[0xf];
    break;
  case 2:
    bVar10 = param_2->BindSlotMap[0x13];
    break;
  case 3:
    bVar10 = param_2->BindSlotMap[2];
    break;
  case 4:
    bVar10 = param_2->BindSlotMap[0xb];
    break;
  case 5:
  case 0xc:
    bVar10 = param_2->BindSlotMap[0x17];
    break;
  default:
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.h"
                       ,0xab,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_1b8 = 0xffffffff;
    goto LAB_1459d95b9;
  }
  local_1b8 = (uint)bVar10;
  if (local_1b8 == 0xff) {
    local_1b8 = (uint)bVar10;
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1125101562616610136>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                       ,0x2a8,"BaseIndex != 255");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
LAB_1459d95b9:
  local_140 = 0x1f;
  if (param_4 != 0) {
    for (; param_4 >> local_140 == 0; local_140 = local_140 + -1) {
    }
  }
  iVar16 = 0;
  if (param_4 != 0) {
    iVar16 = local_140;
  }
  uVar15 = iVar16 + 1;
  local_1a0 = uVar15;
  if ((0x10 < uVar15) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("RDCBVsNeeded <= 16",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                         ,0x2aa,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (uVar15 != 0) {
    do {
      pFVar8 = local_158;
      uVar13 = (uint)uVar14;
      if ((param_4 >> (uVar13 & 0x1f) & 1) != 0) {
        uVar2 = param_3->CurrentGPUVirtualAddress[uVar17][uVar14];
        if (uVar2 == 0) {
          if (param_1 == SF_Compute) {
            pFVar3 = (local_158->PipelineState).Compute.CurrentPipelineStateObject.Reference;
            if (pFVar3 == (FD3D12ComputePipelineState *)0x0) goto LAB_1459d9a84;
            lVar11 = pFVar3->_padding_;
          }
          else {
            pFVar6 = (local_158->PipelineState).Graphics.CurrentPipelineStateObject.Reference;
            if (pFVar6 == (FD3D12GraphicsPipelineState *)0x0) goto LAB_1459d9a84;
            lVar11 = (**(code **)(pFVar6->_padding_ + 0x10))(pFVar6,param_1);
          }
          if (lVar11 == 0) {
LAB_1459d9a84:
            GetShaderFrequencyString(param_1,true);
            UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
            return;
          }
          if ((-1 < (int)uVar13) && ((int)uVar13 < *(int *)(lVar11 + 0x58))) {
            if (((int)uVar13 < 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (*(int *)(*(longlong *)(lVar11 + 0x50) + (longlong)(int)uVar13 * 4) != 0) {
              local_1b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_1b0.Data.ArrayNum = 0;
              local_1b0.Data.ArrayMax = 0;
              if (param_1 == SF_Compute) {
                local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_188.Data.ArrayNum = 0;
                local_188.Data.ArrayMax = 0;
                BytesToHex((uchar *)(lVar11 + 0xf0),0x14,&local_188);
                ::FString::AppendfImpl(&local_1b0,L"Compute: %s");
                if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_188.Data.AllocatorInstance.Data);
                }
              }
              else {
                pFVar6 = (pFVar8->PipelineState).Graphics.CurrentPipelineStateObject.Reference;
                local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_198.Data.ArrayNum = 0;
                local_198.Data.ArrayMax = 0;
                if (pFVar6 != (FD3D12GraphicsPipelineState *)0x0) {
                  FSHA1::FSHA1(&local_e8);
                  local_170 = &local_198;
                  local_178 = &local_e8;
                  `GetPipelineShaderHashList'::__l2::<lambda_1>::operator()
                            (&local_178,
                             (FRHIShader *)
                             (pFVar6->PipelineStateInitializer).BoundShaderState.VertexShaderRHI);
                  `GetPipelineShaderHashList'::__l2::<lambda_1>::operator()
                            (&local_178,
                             (FRHIShader *)
                             (pFVar6->PipelineStateInitializer).BoundShaderState.MeshShaderRHI);
                  `GetPipelineShaderHashList'::__l2::<lambda_1>::operator()
                            (&local_178,
                             (FRHIShader *)
                             (pFVar6->PipelineStateInitializer).BoundShaderState.
                             AmplificationShaderRHI);
                  `GetPipelineShaderHashList'::__l2::<lambda_1>::operator()
                            (&local_178,
                             (FRHIShader *)
                             (pFVar6->PipelineStateInitializer).BoundShaderState.PixelShaderRHI);
                  `GetPipelineShaderHashList'::__l2::<lambda_1>::operator()
                            (&local_178,
                             (FRHIShader *)
                             (pFVar6->PipelineStateInitializer).BoundShaderState.GeometryShaderRHI);
                  FSHA1::Final(&local_e8);
                  local_108[0] = '\0';
                  local_108[1] = '\0';
                  local_108[2] = '\0';
                  local_108[3] = '\0';
                  local_108[4] = '\0';
                  local_108[5] = '\0';
                  local_108[6] = '\0';
                  local_108[7] = '\0';
                  local_108[8] = '\0';
                  local_108[9] = '\0';
                  local_108[10] = '\0';
                  local_108[0xb] = '\0';
                  local_108[0xc] = '\0';
                  local_108[0xd] = '\0';
                  local_108[0xe] = '\0';
                  local_108[0xf] = '\0';
                  local_108[0x10] = '\0';
                  local_108[0x11] = '\0';
                  local_108[0x12] = '\0';
                  local_108[0x13] = '\0';
                  FSHA1::GetHash(&local_e8,local_108);
                  local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_168.Data.ArrayNum = 0;
                  local_168.Data.ArrayMax = 0;
                  BytesToHex(local_108,0x14,&local_168);
                  ::FString::AppendfImpl(&local_198,L"Pipeline: %s");
                  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_168.Data.AllocatorInstance.Data);
                  }
                  FSHA1::~FSHA1(&local_e8);
                }
                if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
                }
                local_1b0.Data.AllocatorInstance.Data = local_198.Data.AllocatorInstance.Data;
                local_1b0.Data.ArrayNum = local_198.Data.ArrayNum;
                local_1b0.Data.ArrayMax = local_198.Data.ArrayMax;
              }
              GetShaderFrequencyString(param_1,true);
              UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
              if (local_1b0.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
                return;
              }
              FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
              return;
            }
          }
        }
        uVar15 = local_1b8 + uVar13;
        if (uVar15 < 0x40) {
          pFVar4 = local_150->Context;
          if (param_1 == SF_Compute) {
            if (*(longlong *)&pFVar4->field_0x188 == 0) {
              (**(code **)(*(longlong *)pFVar4 + 8))(pFVar4);
            }
            plVar5 = *(longlong **)(*(longlong *)&pFVar4->field_0x188 + 0x28);
            piVar1 = (int *)(*(longlong *)&pFVar4->field_0x188 + 0x168);
            *piVar1 = *piVar1 + 1;
            (**(code **)(*plVar5 + 0x128))(plVar5,uVar15,uVar2);
          }
          else {
            if (*(longlong *)&pFVar4->field_0x188 == 0) {
              (**(code **)(*(longlong *)pFVar4 + 8))(pFVar4);
            }
            plVar5 = *(longlong **)(*(longlong *)&pFVar4->field_0x188 + 0x28);
            piVar1 = (int *)(*(longlong *)&pFVar4->field_0x188 + 0x168);
            *piVar1 = *piVar1 + 1;
            (**(code **)(*plVar5 + 0x130))(plVar5,uVar15,uVar2);
          }
        }
        else if (1 < (byte)LogD3D12RHI._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
        }
        param_3 = local_148;
        if (uVar2 != 0) {
          this_00 = local_148->Resources[uVar17][uVar14];
          pFVar4 = local_150->Context;
          if ((this_00 == (FD3D12Resource *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Resource",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                                 ,0x1a5,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (*(longlong *)&pFVar4->field_0x188 == 0) {
            (**(code **)(*(longlong *)pFVar4 + 8))(pFVar4);
          }
          this_01 = *(FD3D12CommandList **)&pFVar4->field_0x188;
          local_13c._4_8_ = this_00;
          if ((this_00->ReservedResourceData).Ptr == (FD3D12ReservedResourceData *)0x0) {
            pTVar12 = FD3D12Resource::GetResidencyHandles(this_00,&local_118);
            local_128.DataPtr = pTVar12->DataPtr;
            local_128.ArrayNum = pTVar12->ArrayNum;
            local_128._12_4_ = *(undefined4 *)&pTVar12->field_0xc;
            FD3D12CommandList::AddToResidencySet(this_01,&local_128);
          }
          else {
            TSet<FD3D12Resource_const_*,DefaultKeyFuncs<FD3D12Resource_const_*,0>,FDefaultSetAllocator>
            ::Emplace<FD3D12Resource_const_*_const_&>
                      (&(this_01->State).DeferredResidencyUpdateSet,(FD3D12Resource **)local_13c,
                       (bool *)(local_13c + 4));
          }
        }
        *(ushort *)((longlong)(param_3->CurrentGPUVirtualAddress + -1) + 0x70 + uVar17 * 2) =
             *(ushort *)((longlong)(param_3->CurrentGPUVirtualAddress + -1) + 0x70 + uVar17 * 2) &
             ~(ushort)(1 << (uVar13 & 0x1f));
        uVar15 = local_1a0;
      }
      uVar14 = (ulonglong)(uVar13 + 1);
    } while (uVar13 + 1 < uVar15);
  }
  if (((*(ushort *)((longlong)(param_3->CurrentGPUVirtualAddress + -1) + 0x70 + uVar17 * 2) &
       param_4) != 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(CurrentDirtySlotMask & RDCBVSlotsNeededMask) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                         ,0x2fb,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  return;
}

// SetSRVTable @ 1459d9bd0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FD3D12DescriptorCache::SetSRVTable
          (FD3D12DescriptorCache *this,EShaderFrequency param_1,FD3D12RootSignature *param_2,
          FD3D12ShaderResourceViewCache *param_3,uint param_4,D3D12_GPU_DESCRIPTOR_HANDLE *param_5)

{
  int *piVar1;
  ulonglong *puVar2;
  FD3D12CommandContext *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  ulonglong uVar7;
  
  switch((ulonglong)param_1) {
  case 0:
    uVar7 = (ulonglong)param_2->BindSlotMap[4];
    break;
  case 1:
    uVar7 = (ulonglong)param_2->BindSlotMap[0xd];
    break;
  case 2:
    uVar7 = (ulonglong)param_2->BindSlotMap[0x11];
    break;
  case 3:
    uVar7 = (ulonglong)param_2->BindSlotMap[0];
    break;
  case 4:
    uVar7 = (ulonglong)param_2->BindSlotMap[9];
    break;
  case 5:
    uVar7 = (ulonglong)param_2->BindSlotMap[0x15];
    break;
  default:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.h"
                       ,0x89,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar7 = 0xffffffff;
  }
  pFVar3 = this->Context;
  if (param_1 == SF_Compute) {
    if (*(longlong *)&pFVar3->field_0x188 == 0) {
      (**(code **)(*(longlong *)pFVar3 + 8))(pFVar3);
    }
    plVar4 = *(longlong **)(*(longlong *)&pFVar3->field_0x188 + 0x28);
    piVar1 = (int *)(*(longlong *)&pFVar3->field_0x188 + 0x168);
    *piVar1 = *piVar1 + 1;
    (**(code **)(*plVar4 + 0xf8))(plVar4,uVar7,param_5->ptr);
  }
  else {
    if (*(longlong *)&pFVar3->field_0x188 == 0) {
      (**(code **)(*(longlong *)pFVar3 + 8))(pFVar3);
    }
    plVar4 = *(longlong **)(*(longlong *)&pFVar3->field_0x188 + 0x28);
    piVar1 = (int *)(*(longlong *)&pFVar3->field_0x188 + 0x168);
    *piVar1 = *piVar1 + 1;
    (**(code **)(*plVar4 + 0x100))(plVar4,uVar7,param_5->ptr);
  }
  puVar2 = (ulonglong *)((longlong)(param_3->Views + -1) + 0x1d0 + (ulonglong)param_1 * 8);
  *puVar2 = *puVar2 | ~((1L << ((byte)param_4 & 0x3f)) - 1U);
  return;
}

// SetSamplerTable @ 1459d9de0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FD3D12DescriptorCache::SetSamplerTable
          (FD3D12DescriptorCache *this,EShaderFrequency param_1,FD3D12RootSignature *param_2,
          FD3D12SamplerStateCache *param_3,uint param_4,D3D12_GPU_DESCRIPTOR_HANDLE *param_5)

{
  int *piVar1;
  uint *puVar2;
  FD3D12CommandContext *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  ulonglong uVar7;
  
  switch((ulonglong)param_1) {
  case 0:
    uVar7 = (ulonglong)param_2->BindSlotMap[7];
    break;
  case 1:
    uVar7 = (ulonglong)param_2->BindSlotMap[0x10];
    break;
  case 2:
    uVar7 = (ulonglong)param_2->BindSlotMap[0x14];
    break;
  case 3:
    uVar7 = (ulonglong)param_2->BindSlotMap[3];
    break;
  case 4:
    uVar7 = (ulonglong)param_2->BindSlotMap[0xc];
    break;
  case 5:
    uVar7 = (ulonglong)param_2->BindSlotMap[0x18];
    break;
  default:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.h"
                       ,0x79,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar7 = 0xffffffff;
  }
  pFVar3 = this->Context;
  if (param_1 == SF_Compute) {
    if (*(longlong *)&pFVar3->field_0x188 == 0) {
      (**(code **)(*(longlong *)pFVar3 + 8))(pFVar3);
    }
    plVar4 = *(longlong **)(*(longlong *)&pFVar3->field_0x188 + 0x28);
    piVar1 = (int *)(*(longlong *)&pFVar3->field_0x188 + 0x168);
    *piVar1 = *piVar1 + 1;
    (**(code **)(*plVar4 + 0xf8))(plVar4,uVar7,param_5->ptr);
  }
  else {
    if (*(longlong *)&pFVar3->field_0x188 == 0) {
      (**(code **)(*(longlong *)pFVar3 + 8))(pFVar3);
    }
    plVar4 = *(longlong **)(*(longlong *)&pFVar3->field_0x188 + 0x28);
    piVar1 = (int *)(*(longlong *)&pFVar3->field_0x188 + 0x168);
    *piVar1 = *piVar1 + 1;
    (**(code **)(*plVar4 + 0x100))(plVar4,uVar7,param_5->ptr);
  }
  puVar2 = (uint *)((longlong)(param_3->States + -1) + 0xe8 + (ulonglong)param_1 * 4);
  *puVar2 = *puVar2 | -1 << ((byte)param_4 & 0x1f);
  return;
}

// SetUAVTable @ 1459db100

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FD3D12DescriptorCache::SetUAVTable
          (FD3D12DescriptorCache *this,EShaderFrequency param_1,FD3D12RootSignature *param_2,
          FD3D12UnorderedAccessViewCache *param_3,uint param_4,D3D12_GPU_DESCRIPTOR_HANDLE *param_5)

{
  int *piVar1;
  ushort *puVar2;
  byte bVar3;
  FD3D12CommandContext *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  
  lVar8 = 0x29;
  if ((SF_Compute < param_1) || ((0x29U >> (param_1 & 0x1f) & 1) == 0)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderStage == SF_Compute || ShaderStage == SF_Pixel || ShaderStage == SF_Vertex"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                       ,0x10f,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderStage == SF_Pixel || ShaderStage == SF_Vertex || ShaderStage == SF_Compute"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.h"
                       ,0xb8,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (param_1 == SF_Vertex) {
    lVar8 = 0x18;
  }
  bVar3 = param_2->BindSlotMap[lVar8 + -0x10];
  if (0xfe < bVar3) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("FD3D12RootSignature::IsValidBindSlot(RootParameterIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                       ,0x112,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if ((param_1 == SF_Pixel) || (param_1 == SF_Vertex)) {
    pFVar4 = this->Context;
    if (*(longlong *)&pFVar4->field_0x188 == 0) {
      (**(code **)(*(longlong *)pFVar4 + 8))(pFVar4);
    }
    plVar5 = *(longlong **)(*(longlong *)&pFVar4->field_0x188 + 0x28);
    piVar1 = (int *)(*(longlong *)&pFVar4->field_0x188 + 0x168);
    *piVar1 = *piVar1 + 1;
    (**(code **)(*plVar5 + 0x100))(plVar5,bVar3,param_5->ptr);
  }
  else {
    pFVar4 = this->Context;
    if (*(longlong *)&pFVar4->field_0x188 == 0) {
      (**(code **)(*(longlong *)pFVar4 + 8))(pFVar4);
    }
    plVar5 = *(longlong **)(*(longlong *)&pFVar4->field_0x188 + 0x28);
    piVar1 = (int *)(*(longlong *)&pFVar4->field_0x188 + 0x168);
    *piVar1 = *piVar1 + 1;
    (**(code **)(*plVar5 + 0xf8))(plVar5,bVar3,param_5->ptr);
  }
  puVar2 = (ushort *)((longlong)(param_3->Views + -1) + 0x70 + (ulonglong)param_1 * 2);
  *puVar2 = *puVar2 | -1 << ((byte)param_4 & 0x1f);
  return;
}

// SetVertexBuffers @ 1459db280

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12DescriptorCache::SetVertexBuffers
          (FD3D12DescriptorCache *this,FD3D12VertexBufferCache *param_1)

{
  int *piVar1;
  FD3D12CommandContext *pFVar2;
  longlong *plVar3;
  FD3D12Resource *this_00;
  FD3D12CommandList *this_01;
  code *pcVar4;
  bool bVar5;
  TArrayView<FD3D12ResidencyHandle_*_const,int> *pTVar6;
  ulonglong uVar7;
  uint uVar8;
  FD3D12Resource **ppFVar9;
  FD3D12Resource *local_res10;
  FD3D12Resource *local_res18;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_38;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_28;
  
  uVar8 = param_1->MaxBoundVertexBufferIndex + 1;
  if (uVar8 != 0) {
    pFVar2 = this->Context;
    if (*(longlong *)&pFVar2->field_0x188 == 0) {
      (**(code **)(*(longlong *)pFVar2 + 8))(pFVar2);
    }
    plVar3 = *(longlong **)(*(longlong *)&pFVar2->field_0x188 + 0x28);
    piVar1 = (int *)(*(longlong *)&pFVar2->field_0x188 + 0x168);
    *piVar1 = *piVar1 + 1;
    (**(code **)(*plVar3 + 0x160))(plVar3,0,uVar8,param_1);
    if (uVar8 != 0) {
      ppFVar9 = param_1->Resources;
      uVar7 = (ulonglong)uVar8;
      do {
        if ((FD3D12ResourceLocation *)ppFVar9[-0x20] != (FD3D12ResourceLocation *)0x0) {
          this_00 = *ppFVar9;
          pFVar2 = this->Context;
          if ((this_00 == (FD3D12Resource *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Resource",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                                 ,0x1a5,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (*(longlong *)&pFVar2->field_0x188 == 0) {
            (**(code **)(*(longlong *)pFVar2 + 8))(pFVar2);
          }
          this_01 = *(FD3D12CommandList **)&pFVar2->field_0x188;
          local_res18 = this_00;
          if ((this_00->ReservedResourceData).Ptr == (FD3D12ReservedResourceData *)0x0) {
            pTVar6 = FD3D12Resource::GetResidencyHandles(this_00,&local_28);
            local_38.DataPtr = pTVar6->DataPtr;
            local_38.ArrayNum = pTVar6->ArrayNum;
            local_38._12_4_ = *(undefined4 *)&pTVar6->field_0xc;
            FD3D12CommandList::AddToResidencySet(this_01,&local_38);
          }
          else {
            TSet<FD3D12Resource_const_*,DefaultKeyFuncs<FD3D12Resource_const_*,0>,FDefaultSetAllocator>
            ::Emplace<FD3D12Resource_const_*_const_&>
                      (&(this_01->State).DeferredResidencyUpdateSet,&local_res10,
                       (bool *)&local_res18);
          }
        }
        ppFVar9 = ppFVar9 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  return;
}

// SwitchToContextLocalSamplerHeap @ 1459dba20

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

bool __thiscall FD3D12DescriptorCache::SwitchToContextLocalSamplerHeap(FD3D12DescriptorCache *this)

{
  ID3D12DescriptorHeap *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  
  if (this->bFullyBindless != false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsFullyBindless()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                       ,0x322,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  FD3D12LocalOnlineHeap::RecycleSlots(&this->LocalSamplerHeap);
  this->bLocalSamplerHeapOpen = true;
  this->CurrentSamplerHeap = (FD3D12OnlineHeap *)&this->LocalSamplerHeap;
  bVar3 = SetDescriptorHeaps(this,None);
  pIVar1 = *(ID3D12DescriptorHeap **)((this->LocalSamplerHeap)._padding_ + 0x18);
  if ((pIVar1 != this->LastSetViewHeap) && (pIVar1 != this->LastSetSamplerHeap)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsHeapSet(LocalSamplerHeap.GetHeap())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                       ,0x32a,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return bVar3;
}

// SwitchToContextLocalViewHeap @ 1459dbad0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

bool __thiscall FD3D12DescriptorCache::SwitchToContextLocalViewHeap(FD3D12DescriptorCache *this)

{
  ID3D12DescriptorHeap *pIVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  FD3D12LocalOnlineHeap *pFVar6;
  
  if (this->bFullyBindless != false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsFullyBindless()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                       ,0x302,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (this->LocalViewHeap == (FD3D12LocalOnlineHeap *)0x0) {
    if (4 < (byte)LogD3D12RHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
    pFVar6 = ::operator_new(0x70);
    if (pFVar6 == (FD3D12LocalOnlineHeap *)0x0) {
      this->LocalViewHeap = (FD3D12LocalOnlineHeap *)0x0;
    }
    else {
      pFVar6 = FD3D12LocalOnlineHeap::FD3D12LocalOnlineHeap(pFVar6,this,this->Context);
      this->LocalViewHeap = pFVar6;
      if (pFVar6 != (FD3D12LocalOnlineHeap *)0x0) {
        if (this->NumLocalViewDescriptors == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumLocalViewDescriptors",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                             ,0x30c,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
        FD3D12LocalOnlineHeap::Init(this->LocalViewHeap,this->NumLocalViewDescriptors,Standard);
        goto LAB_1459dbb9f;
      }
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                       ,0x311,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    return false;
  }
LAB_1459dbb9f:
  (**(code **)(this->CurrentViewHeap->_padding_ + 0x20))();
  this->CurrentViewHeap = (FD3D12OnlineHeap *)this->LocalViewHeap;
  (**(code **)(this->LocalViewHeap->_padding_ + 0x18))();
  bVar3 = SetDescriptorHeaps(this,None);
  pIVar1 = *(ID3D12DescriptorHeap **)(this->LocalViewHeap->_padding_ + 0x18);
  if ((pIVar1 != this->LastSetViewHeap) && (pIVar1 != this->LastSetSamplerHeap)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsHeapSet(LocalViewHeap->GetHeap())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                       ,0x31b,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return bVar3;
}

// SwitchToGlobalSamplerHeap @ 1459dbc60

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12DescriptorCache::SwitchToGlobalSamplerHeap(FD3D12DescriptorCache *this)

{
  longlong lVar1;
  TSet<FD3D12UniqueSamplerTable,FD3D12UniqueSamplerTableKeyFuncs,FDefaultSetAllocator> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FSharedReferencer<1> FVar5;
  TSet<FD3D12UniqueSamplerTable,FD3D12UniqueSamplerTableKeyFuncs,FDefaultSetAllocator> *local_18;
  FSharedReferencer<1> local_10;
  
  if (this->bFullyBindless != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsFullyBindless()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                       ,0x331,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (this->bLocalSamplerHeapOpen != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bLocalSamplerHeapOpen",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12DescriptorCache.cpp"
                       ,0x332,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (this->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x59,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar1 = this->_padding_;
  AcquireSRWLockShared((PSRWLOCK)(lVar1 + 0x958));
  FVar5.ReferenceController = *(TReferenceControllerBase<1> **)(lVar1 + 0x950);
  pTVar2 = *(TSet<FD3D12UniqueSamplerTable,FD3D12UniqueSamplerTableKeyFuncs,FDefaultSetAllocator> **
            )(lVar1 + 0x948);
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18 = pTVar2;
  local_10.ReferenceController = FVar5.ReferenceController;
  ReleaseSRWLockShared((PSRWLOCK)(lVar1 + 0x958));
  if (&this->LocalSamplerSet !=
      (TSharedPtr<TSet<FD3D12UniqueSamplerTable,FD3D12UniqueSamplerTableKeyFuncs,FDefaultSetAllocator>,1>
       *)&local_18) {
    (this->LocalSamplerSet).Object = pTVar2;
    local_18 = (TSet<FD3D12UniqueSamplerTable,FD3D12UniqueSamplerTableKeyFuncs,FDefaultSetAllocator>
                *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->LocalSamplerSet).SharedReferenceCount,&local_10);
    FVar5.ReferenceController = local_10.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  this->CurrentSamplerHeap = (FD3D12OnlineHeap *)(lVar1 + 0x920);
  return;
}

// UnsetExplicitDescriptorCache @ 1459dd9d0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12DescriptorCache::UnsetExplicitDescriptorCache(FD3D12DescriptorCache *this)

{
  if (this->bUsingExplicitCacheHeaps != false) {
    SetDescriptorHeaps(this,-(uint)(this->bLastSetHeapBeforeExplicitIsBindless != false) & Bindless)
    ;
    this->bUsingExplicitCacheHeaps = false;
    this->bExplicitViewHeapIsBindless = false;
  }
  return;
}

