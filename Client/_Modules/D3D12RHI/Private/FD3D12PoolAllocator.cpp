// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 18

// FD3D12PoolAllocator @ 1459eef90

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12PoolAllocator * __thiscall
FD3D12PoolAllocator::FD3D12PoolAllocator
          (FD3D12PoolAllocator *this,FD3D12Device *param_1,FRHIGPUMask param_2,
          FD3D12ResourceInitConfig *param_3,FString *param_4,EResourceAllocationStrategy param_5,
          ulong64 param_6,uint param_7,uint param_8,EFreeListOrder param_9,bool param_10,
          uint param_11)

{
  code *pcVar1;
  D3D12_HEAP_FLAGS DVar2;
  D3D12_RESOURCE_FLAGS DVar3;
  ED3D12Access EVar4;
  bool bVar5;
  uint uVar6;
  FD3D12PoolAllocator *pFVar7;
  wchar_t *pwVar8;
  
  FRHIPoolAllocator::FRHIPoolAllocator
            ((FRHIPoolAllocator *)this,param_6,param_7,param_8,param_9,param_10);
  this->_padding_ = (longlong)param_1;
  uVar6 = *(uint *)param_1;
  pwVar8 = L"";
  *(uint *)&this->_padding_ = uVar6;
  *(uint *)((longlong)&this->_padding_ + 4) = param_2.GPUMask;
  if ((param_2.GPUMask & uVar6) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NodeMask.Intersects(VisibiltyMask)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x9e,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pFVar7 = (FD3D12PoolAllocator *)(*pcVar1)();
      return pFVar7;
    }
  }
  this->_padding_ = (longlong)&_vftable__for__FRHIPoolAllocator__;
  this->_padding_ = (longlong)&_vftable__for__ID3D12ResourceAllocator__;
  DVar2 = param_3->HeapFlags;
  DVar3 = param_3->ResourceFlags;
  EVar4 = param_3->InitialD3D12Access;
  (this->InitConfig).HeapType = param_3->HeapType;
  (this->InitConfig).HeapFlags = DVar2;
  (this->InitConfig).ResourceFlags = DVar3;
  (this->InitConfig).InitialD3D12Access = EVar4;
  ::FString::FString(&this->Name,param_4);
  this->AllocationStrategy = param_5;
  (this->FrameFencedOperations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrameFencedOperations).ArrayNum = 0;
  (this->FrameFencedOperations).ArrayMax = 0;
  this->PendingDeleteRequestSize = 0;
  (this->PendingCopyOps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingCopyOps).ArrayNum = 0;
  (this->PendingCopyOps).ArrayMax = 0;
  (this->AllocationDataPool).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllocationDataPool).ArrayNum = 0;
  (this->AllocationDataPool).ArrayMax = 0;
  if ((this->Name).Data.ArrayNum != 0) {
    pwVar8 = (wchar_t *)(this->Name).Data.AllocatorInstance.Data;
  }
  uVar6 = MemoryTrace_HeapSpec(param_11,pwVar8,None);
  this->TraceHeapId = uVar6;
  return this;
}

// ~FD3D12PoolAllocator @ 1459f8ae0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12PoolAllocator::~FD3D12PoolAllocator(FD3D12PoolAllocator *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__FRHIPoolAllocator__;
  this->_padding_ = (longlong)&_vftable__for__ID3D12ResourceAllocator__;
  FRHIPoolAllocator::Destroy((FRHIPoolAllocator *)this);
  pFVar1 = (this->AllocationDataPool).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PendingCopyOps).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FrameFencedOperations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FRHIPoolAllocator::~FRHIPoolAllocator((FRHIPoolAllocator *)this);
  return;
}

// AllocDefaultResource @ 145a00ad0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12PoolAllocator::AllocDefaultResource
          (FD3D12PoolAllocator *this,D3D12_HEAP_TYPE param_1,FD3D12ResourceDesc *param_2,
          EBufferUsageFlags param_3,ED3D12ResourceStateMode param_4,ED3D12Access param_5,
          uint param_6,wchar_t *param_7,FD3D12ResourceLocation *param_8)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1 == D3D12_HEAP_TYPE_READBACK) {
    if ((param_5 != CopyDest) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCreateD3D12Access == ED3D12Access::CopyDest",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12PoolAllocator.cpp"
                           ,0x12e,L""), bVar3)) {
code_r0x000145a00c1e:
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_1 == D3D12_HEAP_TYPE_UPLOAD) {
    if ((param_5 != GenericRead) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCreateD3D12Access == ED3D12Access::GenericRead",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12PoolAllocator.cpp"
                           ,0x132,L""), bVar3)) goto code_r0x000145a00c1e;
  }
  else if (param_3 == UnorderedAccess) {
    if ((param_4 == SingleState) &&
       ((param_5 != UAVMask &&
        (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCreateD3D12Access == ED3D12Access::UAVMask",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12PoolAllocator.cpp"
                            ,0x136,L""), bVar3)))) goto code_r0x000145a00c1e;
  }
  else if ((param_3 >> 0xd & 1) != 0) {
    if ((param_4 != SingleState) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InResourceStateMode == ED3D12ResourceStateMode::SingleState",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12PoolAllocator.cpp"
                           ,0x13c,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((param_5 & (BVHWrite|BVHRead)) == Unknown) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumHasAnyFlags(InCreateD3D12Access, ED3D12Access::BVHRead | ED3D12Access::BVHWrite)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12PoolAllocator.cpp"
                           ,0x13d,L""), bVar3)) goto code_r0x000145a00c1e;
  }
  lVar1 = param_2->_padding_;
  pcVar2 = *(code **)this->_padding_;
  if ((this->_padding_ == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (*pcVar2)(&this->_padding_,*(undefined4 *)(this->_padding_ + 8),param_1,param_2,lVar1,param_6,
            param_5,param_4,param_5,0,param_7,param_8);
  return;
}

// AllocateResource @ 145a03510

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
FD3D12PoolAllocator::AllocateResource
          (FD3D12PoolAllocator *this,uint param_1,D3D12_HEAP_TYPE param_2,
          FD3D12ResourceDesc *param_3,ulong64 param_4,uint param_5,ED3D12Access param_6,
          ED3D12ResourceStateMode param_7,ED3D12Access param_8,D3D12_CLEAR_VALUE *param_9,
          wchar_t *param_10,FD3D12ResourceLocation *param_11)

{
  PrivateAllocatorData *this_00;
  longlong *plVar1;
  short sVar2;
  FRHIGPUMask FVar3;
  longlong lVar4;
  FD3D12Adapter *this_01;
  ulonglong uVar5;
  ID3D12Device *pIVar6;
  code *pcVar7;
  bool bVar8;
  ED3D12Access EVar9;
  int iVar10;
  FD3D12Resource *pFVar11;
  FD3D12Heap *this_02;
  ID3D12Pageable *pIVar12;
  uint uVar13;
  uint uVar14;
  ERHIPoolResourceTypes EVar15;
  bool bVar16;
  undefined1 auStackY_1c8 [32];
  FD3D12Resource *local_130;
  ID3D12Heap *local_128;
  FD3D12Heap *local_120;
  FString local_118;
  FString local_108;
  FString local_f8;
  D3D12_HEAP_PROPERTIES local_e8;
  ulong64 local_d0;
  D3D12_HEAP_TYPE local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  uint uStack_bc;
  uint local_b8;
  undefined4 local_b4;
  FD3D12Heap *local_b0;
  ED3D12Access local_a8;
  undefined4 local_a4;
  longlong local_98;
  ulonglong uStack_90;
  longlong local_88;
  longlong lStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId350,"D3D12RHI::AllocatePoolResource",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12PoolAllocator.cpp"
               ,0x15e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId350);
  }
  FD3D12ResourceLocation::Clear(param_11);
  if (param_4 == 0) goto LAB_145a03d14;
  if ((this->_padding_ == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar4 = this->_padding_;
  if ((*(longlong *)(lVar4 + 0x10) == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this_01 = *(FD3D12Adapter **)(lVar4 + 0x10);
  if ((param_1 != *(uint *)(lVar4 + 8)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("GPUIndex == Device->GetGPUIndex()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12PoolAllocator.cpp"
                         ,0x16a,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar14 = (uint)param_3->_padding_;
  uVar13 = uVar14 & 0x20;
  uVar5._0_4_ = this[-1].InitConfig.HeapType;
  uVar5._4_4_ = this[-1].InitConfig.HeapFlags;
  if ((uVar5 < param_4) || (uVar13 != 0)) {
    bVar8 = false;
LAB_145a036dc:
    if (bVar8) {
      if ((uVar14 != (uint)this->_padding_) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InDesc.Flags == InitConfig.ResourceFlags",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12PoolAllocator.cpp"
                             ,0x189,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      goto LAB_145a0371e;
    }
LAB_145a039c8:
    EVar9 = Unknown;
    local_130 = (FD3D12Resource *)0x0;
    local_e8.VisibleNodeMask = 1;
    if (GVirtualMGPU == 0) {
      local_e8.VisibleNodeMask = *(uint *)((longlong)&this->_padding_ + 4);
    }
    FVar3.GPUMask = (uint)this->_padding_;
    local_e8.CreationNodeMask = FVar3.GPUMask;
    if (GVirtualMGPU != 0) {
      local_e8.CreationNodeMask = 1;
    }
    local_e8.CPUPageProperty = D3D12_CPU_PAGE_PROPERTY_UNKNOWN;
    local_e8.MemoryPoolPreference = D3D12_MEMORY_POOL_UNKNOWN;
    local_e8.Type = param_2;
    if (((this_01->bTrackAllAllocation == false) || ((int)param_3->_padding_ == 1)) || (uVar13 != 0)
       ) {
      if (param_7 == Default) {
        param_8 = EVar9;
      }
      iVar10 = FD3D12Adapter::CreateCommittedResource
                         (this_01,param_3,FVar3,&local_e8,param_6,param_7,param_8,param_9,&local_130
                          ,param_10,false);
      if (iVar10 < 0) {
        local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f8.Data.ArrayNum = 0;
        local_f8.Data.ArrayMax = 0;
        D3D12RHI::VerifyD3D12Result
                  (iVar10,
                   "Adapter->CreateCommittedResource( InDesc, GetGPUMask(), HeapProps, InInitialD3D12Access, InResourceStateMode, DefaultAccess, InClearValue, &NewResource, InName, false)"
                   ,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12PoolAllocator.cpp"
                   ,0x20c,(ID3D12Device *)0x0,&local_f8);
      }
    }
    else {
      local_b4 = 0;
      local_a4 = 0;
      local_128 = (ID3D12Heap *)0x0;
      local_d0 = param_4;
      if (param_4 < 0x10000) {
        local_d0 = 0x10000;
      }
      uStack_c4 = 0;
      uStack_c0 = 0;
      local_b0 = (FD3D12Heap *)0x0;
      if (1 < *(uint *)((longlong)&param_3->_padding_ + 4)) {
        local_b0 = (FD3D12Heap *)0x400000;
      }
      if (this_01->bHeapNotZeroedSupported != false) {
        EVar9 = RTV;
      }
      pIVar6 = (this_01->RootDevice).Reference;
      local_c8 = param_2;
      uStack_bc = local_e8.CreationNodeMask;
      local_b8 = local_e8.VisibleNodeMask;
      local_a8 = EVar9;
      iVar10 = (**(code **)((longlong)*pIVar6 + 0xe0))
                         (pIVar6,&local_d0,&_GUID_6b3b2502_6e51_45b3_90ee_9884265e8df3);
      if (iVar10 < 0) {
        local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_118.Data.ArrayNum = 0;
        local_118.Data.ArrayMax = 0;
        D3D12RHI::VerifyD3D12Result
                  (iVar10,"Adapter->GetD3DDevice()->CreateHeap(&HeapDesc, IID_PPV_ARGS(&Heap))",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12PoolAllocator.cpp"
                   ,0x1e2,(ID3D12Device *)0x0,&local_118);
      }
      local_120 = ::operator_new(0x88);
      if (local_120 == (FD3D12Heap *)0x0) {
        this_02 = (FD3D12Heap *)0x0;
      }
      else {
        lVar4 = this->_padding_;
        FVar3.GPUMask = *(uint *)((longlong)&this->_padding_ + 4);
        if ((this->_padding_ == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Parent != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                               ,0x59,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        this_02 = FD3D12Heap::FD3D12Heap
                            (local_120,(FD3D12Device *)this->_padding_,FVar3,(uint)lVar4);
        if (this_02 != (FD3D12Heap *)0x0) {
          LOCK();
          *(int *)&this_02->_padding_ = (int)this_02->_padding_ + 1;
          UNLOCK();
        }
      }
      FD3D12Heap::SetHeap(this_02,local_128,param_10,false,false);
      if ((param_2 == D3D12_HEAP_TYPE_DEFAULT) ||
         ((param_2 == D3D12_HEAP_TYPE_CUSTOM &&
          (local_e8.CPUPageProperty == D3D12_CPU_PAGE_PROPERTY_NOT_AVAILABLE)))) {
        FD3D12Heap::BeginTrackingResidency(this_02,local_d0);
      }
      iVar10 = FD3D12Adapter::CreatePlacedResource
                         (this_01,param_3,this_02,0,param_6,param_7,param_8,param_9,&local_130,
                          param_10,true);
      if (iVar10 < 0) {
        local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_108.Data.ArrayNum = 0;
        local_108.Data.ArrayMax = 0;
        D3D12RHI::VerifyD3D12Result
                  (iVar10,
                   "Adapter->CreatePlacedResource( InDesc, BackingHeap, 0, InInitialD3D12Access, InResourceStateMode, InDefaultD3D12Access, InClearValue, &NewResource, InName)"
                   ,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12PoolAllocator.cpp"
                   ,0x1f7,(ID3D12Device *)0x0,&local_108);
      }
      if (this_02 != (FD3D12Heap *)0x0) {
        plVar1 = &this_02->_padding_;
        LOCK();
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          if (plVar1 == (longlong *)0x0) {
            this_02 = (FD3D12Heap *)0x0;
          }
          if (this_02 != (FD3D12Heap *)0x0) {
            (**(code **)this_02->_padding_)(this_02,1);
          }
        }
      }
    }
    FD3D12ResourceLocation::AsStandAlone
              (param_11,local_130,param_4,false,(D3D12_HEAP_PROPERTIES *)0x0);
  }
  else {
    bVar8 = true;
    if ((int)this->_padding_ != 0) goto LAB_145a036dc;
    uVar14 = (uint)this[-1]._padding_;
    if ((uVar14 < param_5) || ((ulonglong)uVar14 < (ulonglong)param_3->_padding_))
    goto LAB_145a039c8;
    param_5 = (uint)this[-1]._padding_;
LAB_145a0371e:
    if ((int)param_3->_padding_ == 1) {
      EVar15 = Buffers;
    }
    else {
      EVar15 = NonRTDSTextures;
      if ((param_3->_padding_ & 3) != 0) {
        EVar15 = RTDSTextures;
      }
    }
    this_00 = &param_11->AllocatorData;
    bVar8 = FRHIPoolAllocator::TryAllocateInternal
                      ((FRHIPoolAllocator *)&this[-1]._padding_,(uint)param_4,param_5,EVar15,
                       (FRHIPoolAllocationData *)&this_00->BuddyAllocatorPrivateData);
    if ((!bVar8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("TryAllocateInternal(InSize, AllocationAlignment, AllocationResourceType, AllocationData)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12PoolAllocator.cpp"
                           ,0x19d,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    (param_11->field3_0x18).Allocator = (FD3D12BuddyAllocator *)&this[-1]._padding_;
    param_11->Size = param_4;
    param_11->Type = eSubAllocation;
    param_11->AllocatorType = AT_Pool;
    FRHIPoolAllocationData::SetOwner
              ((FRHIPoolAllocationData *)&this_00->BuddyAllocatorPrivateData,
               (FRHIPoolResource *)param_11);
    if ((int)this->_padding_ == 1) {
      if ((param_11->AllocatorType != AT_Pool) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("AT_Pool == AllocatorType",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                             ,699,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (((param_11->field3_0x18).Allocator != (FD3D12BuddyAllocator *)&this[-1]._padding_) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsOwner(InResourceLocation)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12PoolAllocator.cpp"
                             ,0x36d,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      sVar2 = *(short *)((longlong)&param_11->AllocatorData + 0xc);
      uVar14 = 0;
      if ((int)sVar2 < *(int *)&this[-1].PendingCopyOps.AllocatorInstance.Data) {
        uVar14 = (uint)~(int)sVar2 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar4 = *(longlong *)(this[-1].PendingDeleteRequestSize + (longlong)sVar2 * 8);
      if ((*(int *)(lVar4 + 0xc0) != 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllocationStrategy == EResourceAllocationStrategy::kManualSubAllocation"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12PoolAllocator.h"
                             ,99,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar11 = *(FD3D12Resource **)(lVar4 + 200);
      param_11->OffsetFromBaseOfResource =
           (ulonglong)(param_11->AllocatorData).BlockAllocatorPrivateData.BucketIndex;
      FD3D12ResourceLocation::SetResource(param_11,pFVar11);
      param_11->GPUVirtualAddress =
           (ulonglong)(param_11->AllocatorData).BlockAllocatorPrivateData.BucketIndex +
           pFVar11->GPUVirtualAddress;
      bVar8 = IsCPUAccessible((D3D12_HEAP_TYPE)this->_padding_,(D3D12_HEAP_PROPERTIES *)0x0);
      if (bVar8) {
        uVar14 = (param_11->AllocatorData).BlockAllocatorPrivateData.BucketIndex;
        if ((pFVar11->ResourceBaseAddress == (void *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("ResourceBaseAddress",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                               ,0x13a,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        param_11->MappedBaseAddress =
             (void *)((ulonglong)uVar14 + (longlong)pFVar11->ResourceBaseAddress);
      }
    }
    else {
      if ((param_11->UnderlyingResource != (FD3D12Resource *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ResourceLocation.GetResource() == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12PoolAllocator.cpp"
                             ,0x1b5,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_98 = param_3->_padding_;
      local_88 = param_3->_padding_;
      lStack_80 = param_3->_padding_;
      local_78 = (undefined4)param_3->_padding_;
      uStack_74 = *(undefined4 *)((longlong)&param_3->_padding_ + 4);
      uStack_70 = (undefined4)param_3->_padding_;
      uStack_6c = *(undefined4 *)((longlong)&param_3->_padding_ + 4);
      uStack_90 = (ulonglong)param_5;
      local_68 = (undefined4)param_3->_padding_;
      uStack_64 = *(undefined4 *)((longlong)&param_3->_padding_ + 4);
      uStack_60._0_1_ = param_3->PixelFormat;
      uStack_60._1_1_ = param_3->UAVPixelFormat;
      uStack_60._2_2_ = *(undefined2 *)&param_3->field_0x3a;
      uStack_5c = *(undefined4 *)&param_3->field_0x3c;
      pFVar11 = (FD3D12Resource *)
                (**(code **)(this[-1]._padding_ + 0x20))
                          (&this[-1]._padding_,this_00,&local_98,param_6);
      FD3D12ResourceLocation::SetResource(param_11,pFVar11);
      param_11->GPUVirtualAddress = pFVar11->GPUVirtualAddress;
    }
    (**(code **)(this[-1]._padding_ + 0x28))(&this[-1]._padding_,param_11,0);
  }
  if (((param_6 & (BVHWrite|BVHRead)) != Unknown) && (param_11->AllocatorType != AT_Pool)) {
    pIVar12 = FD3D12Resource::GetPageable(param_11->UnderlyingResource);
    FD3D12Adapter::SetResidencyPriority(this_01,pIVar12,D3D12_RESIDENCY_PRIORITY_HIGH,param_1);
  }
LAB_145a03d14:
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CleanUpAllocations @ 145a05ea0

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
FD3D12PoolAllocator::CleanUpAllocations(FD3D12PoolAllocator *this,ulong64 param_1,bool param_2)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  int *piVar3;
  TArray<FRHIPoolAllocationData_*,TSizedDefaultAllocator<32>_> *pTVar4;
  FD3D12ManualFence *this_00;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  ulong64 uVar13;
  uint uVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  FLLMPauseScope local_48;
  
  if (&this->_padding_ == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
  if ((this->_padding_ == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Parent != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x59,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  lVar15 = this->_padding_;
  if ((*(longlong *)(lVar15 + 0x10) == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParentAdapter != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x41,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  lVar15 = *(longlong *)(lVar15 + 0x10);
  if ((*(longlong *)(lVar15 + 0x548) == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("FrameFence",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                          ,0xff,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  this_00 = *(FD3D12ManualFence **)(lVar15 + 0x548);
  uVar14 = 0;
  if (0 < (this->FrameFencedOperations).ArrayNum) {
    lVar15 = 0;
    do {
      uVar11 = 0;
      if ((int)uVar14 < (this->FrameFencedOperations).ArrayNum) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar16 = (this->FrameFencedOperations).AllocatorInstance.Data + lVar15;
      if ((!param_2) && (this_00->CompletedFenceValue < *(ulonglong *)(pFVar16 + 0x10))) break;
      iVar12 = *(int *)pFVar16;
      if (iVar12 == 1) {
        pFVar2 = pFVar16 + 0x18;
        if ((this->PendingDeleteRequestSize < (ulonglong)**(uint **)(pFVar16 + 0x18)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("PendingDeleteRequestSize >= Operation.AllocationData->GetSize()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12PoolAllocator.cpp"
                                ,0x306,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        this->PendingDeleteRequestSize =
             this->PendingDeleteRequestSize - (ulonglong)**(uint **)pFVar2;
        FRHIPoolAllocator::DeallocateInternal
                  ((FRHIPoolAllocator *)this,*(FRHIPoolAllocationData **)pFVar2);
        FRHIPoolAllocationData::Reset(*(FRHIPoolAllocationData **)pFVar2);
        pTVar4 = &this->AllocationDataPool;
        pFVar6 = (pTVar4->AllocatorInstance).Data;
        if (((pFVar6 <= pFVar2) &&
            (pFVar2 < pFVar6 + (longlong)(this->AllocationDataPool).ArrayMax * 8)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar12 = (this->AllocationDataPool).ArrayNum;
        piVar3 = &(this->AllocationDataPool).ArrayMax;
        if (iVar12 == *piVar3) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar4->AllocatorInstance,piVar3);
        }
        (this->AllocationDataPool).ArrayNum = iVar12 + 1;
        *(undefined8 *)((pTVar4->AllocatorInstance).Data + (longlong)iVar12 * 8) =
             *(undefined8 *)pFVar2;
        if (this->AllocationStrategy == kPlacedResource) {
          if ((*(longlong *)(pFVar16 + 8) == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Operation.PlacedResource != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12PoolAllocator.cpp"
                                  ,0x311,L""), bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          puVar7 = *(undefined8 **)(pFVar16 + 8);
          piVar3 = (int *)(puVar7 + 1);
          LOCK();
          iVar12 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (((iVar12 == 1) && (piVar3 != (int *)0x0)) && (puVar7 != (undefined8 *)0x0)) {
            (**(code **)*puVar7)(puVar7,1);
          }
          *(undefined8 *)(pFVar16 + 8) = 0;
        }
        else if ((*(longlong *)(pFVar16 + 8) != 0) &&
                (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Operation.PlacedResource == nullptr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12PoolAllocator.cpp"
                                     ,0x317,L""), bVar10)) goto code_r0x000145a06219;
      }
      else if (iVar12 == 2) {
        lVar5 = *(longlong *)(pFVar16 + 0x18);
        if (((*(uint *)(lVar5 + 0xc) & 0x100000) == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Locked == 1",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Public\\RHIPoolAllocator.h"
                                ,0x50,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        puVar1 = (uint *)(lVar5 + 0xc);
        *puVar1 = *puVar1 & 0xffefffff;
      }
      else if ((iVar12 != 3) &&
              (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                  ("false",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12PoolAllocator.cpp"
                                   ,0x324,L""), bVar10)) {
code_r0x000145a06219:
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar14 = uVar14 + 1;
      lVar15 = lVar15 + 0x20;
    } while ((int)uVar14 < (this->FrameFencedOperations).ArrayNum);
    if (uVar14 != 0) {
      uVar11 = 0;
      if ((int)uVar14 <= (this->FrameFencedOperations).ArrayNum) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar16 = (this->FrameFencedOperations).AllocatorInstance.Data;
      iVar12 = (this->FrameFencedOperations).ArrayNum - uVar14;
      if (iVar12 != 0) {
        memmove(pFVar16,pFVar16 + (longlong)(int)uVar14 * 0x20,(longlong)iVar12 << 5);
      }
      piVar3 = &(this->FrameFencedOperations).ArrayNum;
      *piVar3 = *piVar3 - uVar14;
    }
  }
  uVar13 = FD3D12ManualFence::GetCompletedFenceValue(this_00,true);
  uVar14 = 0;
  if (0 < (int)this->_padding_) {
    lVar15 = 0;
    do {
      uVar11 = 0;
      if ((int)uVar14 < (int)this->_padding_) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      plVar8 = *(longlong **)(lVar15 + this->_padding_);
      if (((plVar8 != (longlong *)0x0) && (plVar8[2] == plVar8[5])) &&
         ((param_2 || (plVar8[0x1b] + param_1 <= uVar13)))) {
        FLLMPauseScope::FLLMPauseScope
                  (&local_48,LLMTagDeclaration_D3D12AllocatorUnused.UniqueName,false,-plVar8[2],
                   Platform,System);
        (**(code **)(*plVar8 + 0x10))(plVar8);
        (**(code **)*plVar8)(plVar8,1);
        uVar11 = 0;
        if ((int)uVar14 < (int)this->_padding_) {
          uVar11 = ~uVar14 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        *(undefined8 *)(lVar15 + this->_padding_) = 0;
        FLLMPauseScope::~FLLMPauseScope(&local_48);
      }
      uVar14 = uVar14 + 1;
      lVar15 = lVar15 + 8;
    } while ((int)uVar14 < (int)this->_padding_);
  }
  FRHIPoolAllocator::SortPools((FRHIPoolAllocator *)this);
                    /* WARNING: Could not recover jumptable at 0x000145a0644a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
  return;
}

// CreateNewPool @ 145a0b880

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

FRHIMemoryPool * __thiscall
FD3D12PoolAllocator::CreateNewPool
          (FD3D12PoolAllocator *this,short param_1,uint param_2,ERHIPoolResourceTypes param_3)

{
  ulonglong uVar1;
  uint uVar2;
  EResourceAllocationStrategy EVar3;
  uint *puVar4;
  longlong lVar5;
  code *pcVar6;
  longlong lVar7;
  D3D12_HEAP_FLAGS DVar8;
  D3D12_RESOURCE_FLAGS DVar9;
  ED3D12Access EVar10;
  bool bVar11;
  uint uVar12;
  FRHIMemoryPool *pFVar13;
  FD3D12MemoryPool *this_00;
  uint uVar14;
  wchar_t *pwVar15;
  bool bVar16;
  
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId648,"FD3D12PoolAllocator::CreateNewPool",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12PoolAllocator.cpp"
               ,0x288);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId648);
  }
  uVar12 = (uint)this->_padding_;
  if (uVar12 < param_2) {
    if (((ulonglong)this->_padding_ < (ulonglong)param_2) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InMinimumAllocationSize <= MaxAllocationSize",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12PoolAllocator.cpp"
                            ,0x28f,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      pFVar13 = (FRHIMemoryPool *)(*pcVar6)();
      return pFVar13;
    }
    uVar12 = (uint)this->_padding_;
    uVar14 = 1;
    if (param_2 != 0) {
      uVar14 = param_2;
    }
    uVar1 = (ulonglong)(uVar14 - 1) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar14 = 1 << ((byte)lVar5 & 0x1f);
    if (uVar14 < uVar12) {
      uVar12 = uVar14;
    }
  }
  this_00 = ::operator_new(0xe8);
  if (this_00 != (FD3D12MemoryPool *)0x0) {
    uVar14 = this->TraceHeapId;
    lVar5 = this->_padding_;
    uVar2 = *(uint *)((longlong)&this->_padding_ + 4);
    EVar3 = this->AllocationStrategy;
    lVar7 = this->_padding_;
    if ((this->_padding_ == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Parent != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                            ,0x59,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      pFVar13 = (FRHIMemoryPool *)(*pcVar6)();
      return pFVar13;
    }
    puVar4 = (uint *)this->_padding_;
    FRHIMemoryPool::FRHIMemoryPool
              ((FRHIMemoryPool *)this_00,param_1,(ulonglong)uVar12,(uint)lVar5,param_3,
               (EFreeListOrder)lVar7);
    this_00->_padding_ = (longlong)puVar4;
    uVar12 = *puVar4;
    *(uint *)&this_00->_padding_ = uVar12;
    *(uint *)((longlong)&this_00->_padding_ + 4) = uVar2;
    if (((uVar2 & uVar12) == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("NodeMask.Intersects(VisibiltyMask)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                            ,0x9e,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      pFVar13 = (FRHIMemoryPool *)(*pcVar6)();
      return pFVar13;
    }
    this_00->_padding_ = (longlong)&___7FD3D12MemoryPool__6B_;
    DVar8 = (this->InitConfig).HeapFlags;
    DVar9 = (this->InitConfig).ResourceFlags;
    EVar10 = (this->InitConfig).InitialD3D12Access;
    (this_00->InitConfig).HeapType = (this->InitConfig).HeapType;
    (this_00->InitConfig).HeapFlags = DVar8;
    (this_00->InitConfig).ResourceFlags = DVar9;
    (this_00->InitConfig).InitialD3D12Access = EVar10;
    ::FString::FString(&this_00->Name,&this->Name);
    pwVar15 = L"D3D12MemoryPool (ManualSubAllocation)";
    this_00->AllocationStrategy = EVar3;
    (this_00->BackingResource).Reference = (FD3D12Resource *)0x0;
    (this_00->BackingHeap).Reference = (FD3D12Heap *)0x0;
    this_00->LastUsedFrameFence = 0;
    if (EVar3 == kPlacedResource) {
      pwVar15 = L"D3D12MemoryPool (PlacedResource)";
    }
    uVar12 = MemoryTrace_HeapSpec(uVar14,pwVar15,None);
    this_00->TraceHeapId = uVar12;
  }
  pcVar6 = *(code **)(this_00->_padding_ + 8);
  if (pcVar6 == FD3D12MemoryPool::Init) {
    FD3D12MemoryPool::Init(this_00);
  }
  else {
    (*pcVar6)();
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (FRHIMemoryPool *)this_00;
}

// CreatePlacedResource @ 145a0c340

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

FD3D12Resource * __thiscall
FD3D12PoolAllocator::CreatePlacedResource
          (FD3D12PoolAllocator *this,FRHIPoolAllocationData *param_1,FD3D12ResourceDesc *param_2,
          ED3D12Access param_3,ED3D12ResourceStateMode param_4,ED3D12Access param_5,
          D3D12_CLEAR_VALUE *param_6,wchar_t *param_7)

{
  longlong lVar1;
  FD3D12Adapter *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FD3D12Resource *pFVar5;
  FD3D12Resource *local_res8;
  FString local_38;
  FD3D12HeapAndOffset local_28;
  
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x59,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FD3D12Resource *)(*pcVar2)();
      return pFVar5;
    }
  }
  lVar1 = this->_padding_;
  if (*(longlong *)(lVar1 + 0x10) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentAdapter != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x41,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FD3D12Resource *)(*pcVar2)();
      return pFVar5;
    }
  }
  this_00 = *(FD3D12Adapter **)(lVar1 + 0x10);
  GetBackingHeapAndAllocationOffsetInBytes(this,&local_28,param_1);
  local_res8 = (FD3D12Resource *)0x0;
  iVar4 = FD3D12Adapter::CreatePlacedResource
                    (this_00,param_2,local_28.Heap,local_28.Offset,param_3,param_4,param_5,param_6,
                     &local_res8,param_7,true);
  if (iVar4 < 0) {
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    D3D12RHI::VerifyD3D12Result
              (iVar4,
               "Adapter->CreatePlacedResource( InDesc, HeapAndOffset.Heap, HeapAndOffset.Offset, InInitialD3D12Access, InResourceStateMode, InDefaultD3D12Access, InClearValue, &NewResource, InName)"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12PoolAllocator.cpp"
               ,0x236,(ID3D12Device *)0x0,&local_38);
  }
  return local_res8;
}

// DeallocateResource @ 145a107a0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12PoolAllocator::DeallocateResource
          (FD3D12PoolAllocator *this,FD3D12ResourceLocation *param_1,bool param_2)

{
  longlong *lpCriticalSection;
  int *piVar1;
  short sVar2;
  longlong lVar3;
  ulonglong uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FRHIPoolAllocationData *this_00;
  FD3D12Resource *pFVar9;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  if (param_1->AllocatorType != AT_Pool) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("AT_Pool == AllocatorType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                       ,699,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((FD3D12PoolAllocator *)(param_1->field3_0x18).Allocator != this) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsOwner(ResourceLocation)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12PoolAllocator.cpp"
                       ,0x23d,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  (**(code **)(this->_padding_ + 0x28))(this,param_1,!param_2 + '\x01');
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((*(byte *)((longlong)&param_1->AllocatorData + 0xe) & 0xf) != 2) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("AllocationData.IsAllocated()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12PoolAllocator.cpp"
                       ,0x245,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (((param_1->AllocatorData).BlockAllocatorPrivateData.Offset & 0x100000) != 0) {
    iVar7 = (this->FrameFencedOperations).ArrayNum;
    pFVar12 = (this->FrameFencedOperations).AllocatorInstance.Data;
    pFVar10 = pFVar12 + (longlong)iVar7 * 0x20;
    while( true ) {
      if ((this->FrameFencedOperations).ArrayNum != iVar7) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FD3D12PoolAllocator::FrameFencedAllocationData,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res18);
      }
      if (pFVar12 == pFVar10) goto LAB_145a10914;
      if ((PrivateAllocatorData *)*(undefined1 **)(pFVar12 + 0x18) == &param_1->AllocatorData)
      break;
      pFVar12 = pFVar12 + 0x20;
    }
    if (*(int *)pFVar12 != 2) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Operation.Operation == FrameFencedAllocationData::EOperation::Unlock",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12PoolAllocator.cpp"
                         ,0x250,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    *(int *)pFVar12 = 3;
    *(undefined8 *)(pFVar12 + 0x18) = 0;
LAB_145a10914:
    iVar7 = (this->PendingCopyOps).ArrayNum;
    pFVar10 = (this->PendingCopyOps).AllocatorInstance.Data;
    pFVar12 = pFVar10 + (longlong)iVar7 * 0x28;
    while( true ) {
      if ((this->PendingCopyOps).ArrayNum != iVar7) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FD3D12VRAMCopyOperation,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar10 == pFVar12) goto LAB_145a10969;
      if ((*(FD3D12Resource **)pFVar10 == param_1->UnderlyingResource) ||
         (*(FD3D12Resource **)(pFVar10 + 0x10) == param_1->UnderlyingResource)) break;
      pFVar10 = pFVar10 + 0x28;
    }
    *(longlong *)pFVar10 = 0;
    *(longlong *)(pFVar10 + 0x10) = 0;
  }
LAB_145a10969:
  sVar2 = *(short *)((longlong)&param_1->AllocatorData + 0xc);
  if ((this->AllocationDataPool).ArrayNum < 1) {
    this_00 = ::operator_new(0x30);
    if (this_00 == (FRHIPoolAllocationData *)0x0) {
      this_00 = (FRHIPoolAllocationData *)0x0;
    }
    else {
      this_00->Size = 0;
      this_00->Alignment = 0;
      this_00->Offset = 0;
      this_00->PoolIndex = 0;
      *(undefined2 *)&this_00->field_0xe = 0;
      this_00->PreviousAllocation = (FRHIPoolAllocationData *)0x0;
      this_00->NextAllocation = (FRHIPoolAllocationData *)0x0;
      this_00->AliasAllocation = (FRHIPoolAllocationData *)0x0;
      this_00->Owner = (FRHIPoolResource *)0x0;
    }
  }
  else {
    iVar7 = (this->AllocationDataPool).ArrayNum;
    this_00 = *(FRHIPoolAllocationData **)
               ((this->AllocationDataPool).AllocatorInstance.Data + (longlong)iVar7 * 8 + -8);
    (this->AllocationDataPool).ArrayNum = iVar7 + -1;
  }
  FRHIPoolAllocationData::MoveFrom
            (this_00,(FRHIPoolAllocationData *)&(param_1->AllocatorData).BuddyAllocatorPrivateData,
             true);
  (param_1->field3_0x18).Allocator = (FD3D12BuddyAllocator *)0x0;
  param_1->AllocatorType = AT_Unknown;
  if (this->_padding_ == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x59,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar3 = this->_padding_;
  if (*(longlong *)(lVar3 + 0x10) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentAdapter != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x41,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar3 = *(longlong *)(lVar3 + 0x10);
  if (*(longlong *)(lVar3 + 0x548) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("FrameFence",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                       ,0xff,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (this->FrameFencedOperations).ArrayNum;
  piVar1 = &(this->FrameFencedOperations).ArrayMax;
  lVar3 = *(longlong *)(lVar3 + 0x548);
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,&(this->FrameFencedOperations).AllocatorInstance,piVar1);
  }
  pFVar12 = (this->FrameFencedOperations).AllocatorInstance.Data;
  (this->FrameFencedOperations).ArrayNum = iVar7 + 1;
  pFVar12 = pFVar12 + (longlong)iVar7 * 0x20;
  *(undefined8 *)pFVar12 = 1;
  *(undefined8 *)(pFVar12 + 8) = 0;
  *(undefined8 *)(pFVar12 + 0x10) = 0;
  *(undefined8 *)(pFVar12 + 0x18) = 0;
  *(longlong *)(pFVar12 + 0x10) = (longlong)(*(int *)(lVar3 + 0x58) + 1);
  *(FRHIPoolAllocationData **)(pFVar12 + 0x18) = this_00;
  this->PendingDeleteRequestSize = this->PendingDeleteRequestSize + (ulonglong)this_00->Size;
  uVar8 = 0;
  if ((int)sVar2 < (int)this->_padding_) {
    uVar8 = (uint)~(int)sVar2 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar3 = *(longlong *)(this->_padding_ + (longlong)sVar2 * 8);
  uVar4 = *(ulonglong *)(lVar3 + 0xd8);
  uVar11 = *(ulonglong *)(pFVar12 + 0x10);
  if (*(ulonglong *)(pFVar12 + 0x10) < uVar4) {
    uVar11 = uVar4;
  }
  *(ulonglong *)(lVar3 + 0xd8) = uVar11;
  pFVar9 = param_1->UnderlyingResource;
  if ((param_1->UnderlyingResource->Heap).Reference == (FD3D12Heap *)0x0) {
    pFVar9 = (FD3D12Resource *)0x0;
  }
  *(FD3D12Resource **)(pFVar12 + 8) = pFVar9;
                    /* WARNING: Could not recover jumptable at 0x000145a10b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// FlushPendingCopyOps @ 145a16d50

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12PoolAllocator::FlushPendingCopyOps(FD3D12PoolAllocator *this,FD3D12CommandContext *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  FD3D12Resource *pFVar6;
  longlong *plVar7;
  FD3D12Resource *pFVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  longlong lVar12;
  longlong lVar13;
  ED3D12Access EVar14;
  ED3D12Access EVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  undefined1 local_res20 [8];
  FName local_58;
  FName local_50;
  FScriptContainerElement *local_48;
  
  if (&this->_padding_ == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
  if ((this->_padding_ == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Parent != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x59,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  lVar12 = this->_padding_;
  if ((*(longlong *)(lVar12 + 0x10) == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParentAdapter != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x41,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x548) == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("FrameFence",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                          ,0xff,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar3 = (this->PendingCopyOps).ArrayNum;
  pFVar17 = (this->PendingCopyOps).AllocatorInstance.Data;
  pFVar16 = pFVar17 + (longlong)iVar3 * 0x28;
  local_48 = pFVar16;
  do {
    if ((this->PendingCopyOps).ArrayNum != iVar3) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FD3D12VRAMCopyOperation,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (pFVar17 == pFVar16) {
      FD3D12ContextCommon::ConditionalSplitCommandList((FD3D12ContextCommon *)param_1);
      uVar4 = (this->PendingCopyOps).ArrayNum;
      if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
      }
      piVar1 = &(this->PendingCopyOps).ArrayMax;
      (this->PendingCopyOps).ArrayNum = 0;
      if (*piVar1 != uVar4) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,uVar4,&(this->PendingCopyOps).AllocatorInstance,0,piVar1);
      }
                    /* WARNING: Could not recover jumptable at 0x000145a173ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
      return;
    }
    pFVar6 = *(FD3D12Resource **)pFVar17;
    if ((pFVar6 != (FD3D12Resource *)0x0) && (*(longlong *)(pFVar17 + 0x10) != 0)) {
      bVar11 = pFVar6->bRequiresResourceStateTracking;
      if ((bVar11 == false) && (((pFVar6->Desc)._padding_ & 0x100) != 0)) {
        if (((*(uint *)(*(longlong *)(pFVar17 + 0x10) + 0x80) & 0x100) == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("EnumHasAnyFlags(CopyOperation.DstResource->GetDesc().Flags, D3D12_RESOURCE_FLAG_RAYTRACING_ACCELERATION_STRUCTURE)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12PoolAllocator.cpp"
                                ,0x3ce,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar12 = (**(code **)(**(longlong **)(*(longlong *)pFVar17 + 0x20) + 0x58))();
        uVar4 = *(uint *)(pFVar17 + 0xc);
        lVar13 = (**(code **)(**(longlong **)(*(longlong *)(pFVar17 + 0x10) + 0x20) + 0x58))();
        uVar5 = *(uint *)(pFVar17 + 0x1c);
        if (*(longlong *)&param_1->field_0x188 == 0) {
          (**(code **)(*(longlong *)param_1 + 8))(param_1);
        }
        plVar7 = *(longlong **)(*(longlong *)&param_1->field_0x188 + 0x48);
        piVar1 = (int *)(*(longlong *)&param_1->field_0x188 + 0x168);
        *piVar1 = *piVar1 + 1;
        (**(code **)(*plVar7 + 0x250))(plVar7,(ulonglong)uVar5 + lVar13,(ulonglong)uVar4 + lVar12,0)
        ;
      }
      else {
        EVar14 = *(ED3D12Access *)(pFVar17 + 8);
        bVar10 = false;
        if (bVar11 == false) {
          if (EVar14 == Unknown) {
            EVar14 = pFVar6->DefaultD3D12Access;
          }
LAB_145a16f6e:
          if ((((EVar14 & ReadOnlyExclusiveMask) == Unknown) || ((EVar14 & WritableMask) == Unknown)
              ) && (((EVar14 & WriteOnlyExclusiveMask) == Unknown ||
                    ((EVar14 & ReadableMask) == Unknown)))) {
            if ((EVar14 >> 0x14 & 1) == 0) goto LAB_145a16fc5;
            if ((EVar14 == Unknown) || ((EVar14 & EVar14 - CPURead) != Unknown)) goto LAB_145a16f9f;
          }
          else {
LAB_145a16f9f:
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidAccess(BeforeD3D12Access)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHIPrivate.h"
                                ,0x2ed,L"");
            if (bVar11) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
LAB_145a16fc5:
            if ((EVar14 == Unknown) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("BeforeD3D12Access != ED3D12Access::Unknown",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHIPrivate.h"
                                    ,0x2ee,L""), bVar11)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          FD3D12ContextCommon::AddBarrier
                    ((FD3D12ContextCommon *)param_1,pFVar6,EVar14,CopySrc,0xffffffff);
          bVar10 = true;
        }
        else if (EVar14 != Unknown) goto LAB_145a16f6e;
        pFVar8 = *(FD3D12Resource **)(pFVar17 + 0x10);
        bVar11 = false;
        EVar15 = *(ED3D12Access *)(pFVar17 + 0x18);
        if (pFVar8->bRequiresResourceStateTracking) {
          if (EVar15 != Unknown) goto LAB_145a1703d;
        }
        else {
          if (EVar15 == Unknown) {
            EVar15 = pFVar8->DefaultD3D12Access;
          }
LAB_145a1703d:
          if ((((EVar15 & ReadOnlyExclusiveMask) == Unknown) || ((EVar15 & WritableMask) == Unknown)
              ) && (((EVar15 & WriteOnlyExclusiveMask) == Unknown ||
                    ((EVar15 & ReadableMask) == Unknown)))) {
            if ((EVar15 >> 0x14 & 1) == 0) goto LAB_145a17094;
            if ((EVar15 == Unknown) || ((EVar15 & EVar15 - CPURead) != Unknown)) goto LAB_145a1706e;
          }
          else {
LAB_145a1706e:
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidAccess(BeforeD3D12Access)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHIPrivate.h"
                                ,0x2ed,L"");
            if (bVar11) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
LAB_145a17094:
            if ((EVar15 == Unknown) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("BeforeD3D12Access != ED3D12Access::Unknown",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHIPrivate.h"
                                    ,0x2ee,L""), bVar11)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          FD3D12ContextCommon::AddBarrier
                    ((FD3D12ContextCommon *)param_1,pFVar8,EVar15,CopyDest,0xffffffff);
          bVar11 = true;
        }
        FD3D12ContextCommon::FlushResourceBarriers((FD3D12ContextCommon *)param_1);
        if (*(int *)(pFVar17 + 0x24) == 0) {
          local_58 = *(FName *)(*(longlong *)pFVar17 + 0x9c);
          local_50 = *(FName *)(*(longlong *)(pFVar17 + 0x10) + 0x9c);
          FD3D12CommandContext::CopyBufferRegionChecked
                    (param_1,*(ID3D12Resource **)(*(longlong *)(pFVar17 + 0x10) + 0x20),&local_50,
                     (ulonglong)*(uint *)(pFVar17 + 0x1c),
                     *(ID3D12Resource **)(*(longlong *)pFVar17 + 0x20),&local_58,
                     (ulonglong)*(uint *)(pFVar17 + 0xc),*(uint *)(pFVar17 + 0x20));
        }
        else if (*(int *)(pFVar17 + 0x24) == 1) {
          if (*(longlong *)&param_1->field_0x188 == 0) {
            (**(code **)(*(longlong *)param_1 + 8))(param_1);
          }
          plVar7 = *(longlong **)(*(longlong *)&param_1->field_0x188 + 0x28);
          piVar1 = (int *)(*(longlong *)&param_1->field_0x188 + 0x168);
          *piVar1 = *piVar1 + 1;
          (**(code **)(*plVar7 + 0x88))
                    (plVar7,*(undefined8 *)(*(longlong *)(pFVar17 + 0x10) + 0x20),
                     *(undefined8 *)(*(longlong *)pFVar17 + 0x20));
        }
        if (bVar11) {
          FD3D12ContextCommon::AddBarrier
                    ((FD3D12ContextCommon *)param_1,pFVar8,CopyDest,EVar15,0xffffffff);
        }
        if (bVar10) {
          FD3D12ContextCommon::AddBarrier
                    ((FD3D12ContextCommon *)param_1,pFVar6,CopySrc,EVar14,0xffffffff);
        }
        if ((*(byte *)(*(longlong *)pFVar17 + 0xab) & 1) != 0) {
          if (((*(byte *)(*(longlong *)(pFVar17 + 0x10) + 0xab) & 1) == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("CopyOperation.DstResource->RequiresResourceStateTracking()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12PoolAllocator.cpp"
                                  ,0x403,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar4 = *(uint *)(pFVar17 + 8);
          if ((((((uVar4 & 0x2801ff) != 0) && ((uVar4 & 0x2fc00) != 0)) ||
               (((uVar4 & 0x7000) != 0 && ((uVar4 & 0x90fff) != 0)))) ||
              (((uVar4 >> 0x14 & 1) != 0 && ((uVar4 == 0 || ((uVar4 & uVar4 - 1) != 0)))))) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValidAccess(CopyOperation.SrcResourcED3D12Access)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12PoolAllocator.cpp"
                                  ,0x404,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if (*(ED3D12Access *)(pFVar17 + 8) != *(ED3D12Access *)(pFVar17 + 0x18)) {
            FD3D12ContextCommon::AddBarrier
                      ((FD3D12ContextCommon *)param_1,*(FD3D12Resource **)(pFVar17 + 0x10),
                       *(ED3D12Access *)(pFVar17 + 0x18),*(ED3D12Access *)(pFVar17 + 8),0xffffffff);
          }
        }
      }
      pFVar6 = *(FD3D12Resource **)pFVar17;
      if ((pFVar6 == (FD3D12Resource *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Resource",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                              ,0x1a5,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      puVar2 = &param_1->field_0x188;
      if (*(longlong *)puVar2 == 0) {
        (**(code **)(*(longlong *)param_1 + 8))(param_1);
      }
      FD3D12CommandList::UpdateResidency(*(FD3D12CommandList **)puVar2,pFVar6);
      pFVar6 = *(FD3D12Resource **)(pFVar17 + 0x10);
      if ((pFVar6 == (FD3D12Resource *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Resource",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                              ,0x1a5,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (*(longlong *)puVar2 == 0) {
        (**(code **)(*(longlong *)param_1 + 8))(param_1);
      }
      FD3D12CommandList::UpdateResidency(*(FD3D12CommandList **)puVar2,pFVar6);
      pFVar16 = local_48;
    }
    pFVar17 = pFVar17 + 0x28;
  } while( true );
}

// GetBackingHeapAndAllocationOffsetInBytes @ 145a17d70

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

FD3D12HeapAndOffset * __thiscall
FD3D12PoolAllocator::GetBackingHeapAndAllocationOffsetInBytes
          (FD3D12PoolAllocator *this,FD3D12HeapAndOffset *__return_storage_ptr__,
          FD3D12ResourceLocation *param_1)

{
  code *pcVar1;
  bool bVar2;
  FD3D12HeapAndOffset *pFVar3;
  
  if (param_1->AllocatorType != AT_Pool) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("AT_Pool == AllocatorType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                       ,699,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FD3D12HeapAndOffset *)(*pcVar1)();
      return pFVar3;
    }
  }
  if ((FD3D12PoolAllocator *)(param_1->field3_0x18).Allocator != this) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsOwner(InResourceLocation)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12PoolAllocator.cpp"
                       ,0x375,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FD3D12HeapAndOffset *)(*pcVar1)();
      return pFVar3;
    }
  }
  GetBackingHeapAndAllocationOffsetInBytes
            (this,__return_storage_ptr__,
             (FRHIPoolAllocationData *)&(param_1->AllocatorData).BuddyAllocatorPrivateData);
  return __return_storage_ptr__;
}

// GetBackingHeapAndAllocationOffsetInBytes @ 145a17e10

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

FD3D12HeapAndOffset * __thiscall
FD3D12PoolAllocator::GetBackingHeapAndAllocationOffsetInBytes
          (FD3D12PoolAllocator *this,FD3D12HeapAndOffset *__return_storage_ptr__,
          FRHIPoolAllocationData *param_1)

{
  ushort uVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  FD3D12HeapAndOffset *pFVar7;
  
  uVar1 = param_1->PoolIndex;
  uVar6 = 0;
  if ((int)(short)uVar1 < (int)this->_padding_) {
    uVar6 = (uint)~(int)(short)uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FD3D12HeapAndOffset *)(*pcVar3)();
      return pFVar7;
    }
  }
  lVar2 = *(longlong *)(this->_padding_ + (longlong)(short)uVar1 * 8);
  if (*(int *)(lVar2 + 0xc0) != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("AllocationStrategy == EResourceAllocationStrategy::kPlacedResource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12PoolAllocator.h"
                       ,100,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FD3D12HeapAndOffset *)(*pcVar3)();
      return pFVar7;
    }
  }
  lVar4 = this->_padding_;
  __return_storage_ptr__->Heap = *(FD3D12Heap **)(lVar2 + 0xd0);
  __return_storage_ptr__->Offset = (ulonglong)(-(int)lVar4 & param_1->Offset);
  return __return_storage_ptr__;
}

// GetBackingResource @ 145a17ef0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

FD3D12Resource * __thiscall
FD3D12PoolAllocator::GetBackingResource(FD3D12PoolAllocator *this,FD3D12ResourceLocation *param_1)

{
  short sVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FD3D12Resource *pFVar6;
  
  if (param_1->AllocatorType != AT_Pool) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("AT_Pool == AllocatorType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                       ,699,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FD3D12Resource *)(*pcVar3)();
      return pFVar6;
    }
  }
  if ((FD3D12PoolAllocator *)(param_1->field3_0x18).Allocator != this) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsOwner(InResourceLocation)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12PoolAllocator.cpp"
                       ,0x36d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FD3D12Resource *)(*pcVar3)();
      return pFVar6;
    }
  }
  sVar1 = *(short *)((longlong)&param_1->AllocatorData + 0xc);
  uVar5 = 0;
  if ((int)sVar1 < (int)this->_padding_) {
    uVar5 = (uint)~(int)sVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FD3D12Resource *)(*pcVar3)();
      return pFVar6;
    }
  }
  lVar2 = *(longlong *)(this->_padding_ + (longlong)sVar1 * 8);
  if (*(int *)(lVar2 + 0xc0) != 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("AllocationStrategy == EResourceAllocationStrategy::kManualSubAllocation",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12PoolAllocator.h"
                       ,99,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FD3D12Resource *)(*pcVar3)();
      return pFVar6;
    }
  }
  return *(FD3D12Resource **)(lVar2 + 200);
}

// GetResourceAllocationStrategy @ 145a1aeb0

EResourceAllocationStrategy __cdecl
FD3D12PoolAllocator::GetResourceAllocationStrategy
          (D3D12_RESOURCE_FLAGS param_1,ED3D12ResourceStateMode param_2,uint param_3)

{
  EResourceAllocationStrategy EVar1;
  
  EVar1 = kPlacedResource;
  if (param_3 < 0x101) {
    if (param_2 == Default) {
      param_2 = ((param_1 & D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS) != D3D12_RESOURCE_FLAG_NONE)
                + SingleState;
    }
    EVar1 = (EResourceAllocationStrategy)(param_2 != MultiState);
  }
  return EVar1;
}

// GetResourceAllocatorInitConfig @ 145a1aee0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

FD3D12ResourceInitConfig * __cdecl
FD3D12PoolAllocator::GetResourceAllocatorInitConfig
          (FD3D12ResourceInitConfig *__return_storage_ptr__,D3D12_HEAP_TYPE param_1,
          D3D12_RESOURCE_FLAGS param_2,EBufferUsageFlags param_3)

{
  code *pcVar1;
  bool bVar2;
  FD3D12ResourceInitConfig *pFVar3;
  
  __return_storage_ptr__->HeapType = param_1;
  __return_storage_ptr__->ResourceFlags = param_2;
  if ((param_3 >> 0xd & 1) != 0) {
    if (param_3 != AccelerationStructure) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InBufferUsage == EBufferUsageFlags::AccelerationStructure",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12PoolAllocator.cpp"
                         ,0xc3,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FD3D12ResourceInitConfig *)(*pcVar1)();
        return pFVar3;
      }
    }
    __return_storage_ptr__->InitialD3D12Access = BVHWrite|BVHRead;
    __return_storage_ptr__->HeapFlags = D3D12_HEAP_FLAG_ALLOW_ONLY_BUFFERS;
    return __return_storage_ptr__;
  }
  if (param_1 == D3D12_HEAP_TYPE_READBACK) {
    __return_storage_ptr__->InitialD3D12Access = CopyDest;
    __return_storage_ptr__->HeapFlags = D3D12_HEAP_FLAG_ALLOW_ONLY_BUFFERS;
    return __return_storage_ptr__;
  }
  if ((param_3 & UnorderedAccess) != None) {
    if ((param_2 & D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS) == D3D12_RESOURCE_FLAG_NONE) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InResourceFlags & D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12PoolAllocator.cpp"
                         ,0xce,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FD3D12ResourceInitConfig *)(*pcVar1)();
        return pFVar3;
      }
    }
    __return_storage_ptr__->InitialD3D12Access = UAVMask;
    __return_storage_ptr__->HeapFlags = D3D12_HEAP_FLAG_ALLOW_ONLY_BUFFERS;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->InitialD3D12Access = GenericRead;
  __return_storage_ptr__->HeapFlags = D3D12_HEAP_FLAG_ALLOW_ONLY_BUFFERS;
  return __return_storage_ptr__;
}

// HandleDefragRequest @ 145a1bb60

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

bool __thiscall
FD3D12PoolAllocator::HandleDefragRequest
          (FD3D12PoolAllocator *this,FRHIContextArray *param_1,FRHIPoolAllocationData *param_2,
          FRHIPoolAllocationData *param_3)

{
  int *piVar1;
  TArray<FD3D12VRAMCopyOperation,TSizedDefaultAllocator<32>_> *pTVar2;
  FD3D12ResourceLocation *this_00;
  FD3D12Resource *pFVar3;
  ulong64 uVar4;
  FD3D12BaseShaderResource *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  int iVar11;
  PrivateAllocatorData *pPVar12;
  undefined8 uVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  ED3D12Access local_res8 [2];
  undefined1 local_78 [16];
  FD3D12Resource *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ED3D12Access EStack_50;
  undefined4 uStack_4c;
  uint local_48;
  uint uStack_44;
  
  this_00 = (FD3D12ResourceLocation *)param_2->Owner;
  uVar13 = 0;
  iVar11 = 0;
  pFVar3 = this_00->UnderlyingResource;
  uVar4 = this_00->OffsetFromBaseOfResource;
  if (pFVar3->bRequiresResourceStateTracking) {
    pFVar5 = this_00->Owner;
    iVar11 = 0;
    if (pFVar5 != (FD3D12BaseShaderResource *)0x0) {
      if ((int)(pFVar3->Desc)._padding_ == 1) {
        pPVar12 = (PrivateAllocatorData *)&pFVar5[-2].ResourceLocation.Type;
      }
      else {
        pPVar12 = &pFVar5[-2].ResourceLocation.AllocatorData;
      }
      iVar11 = (pPVar12->BuddyAllocatorPrivateData).Offset;
      if (iVar11 != 0) goto LAB_145a1bbf2;
    }
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("SrcD3D12Access != ED3D12Access::Unknown",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12PoolAllocator.cpp"
                       ,0x2b4,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
  }
LAB_145a1bbf2:
  (**(code **)(this->_padding_ + 0x18))(this,this_00,1);
  FRHIPoolAllocationData::MoveFrom(param_2,param_3,true);
  if ((param_2->Owner != (FRHIPoolResource *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Owner == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Public\\RHIPoolAllocator.h"
                         ,0x4b,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  param_2->Owner = (FRHIPoolResource *)this_00;
  (this_00->field3_0x18).PoolAllocator = this;
  this_00->AllocatorType = AT_Pool;
  local_res8[0] = Unknown;
  local_78._0_8_ = uVar13;
  if (*(longlong **)param_1 != (longlong *)0x0) {
    local_78._0_8_ = (**(code **)(**(longlong **)param_1 + 0x148))();
  }
  if (*(longlong **)&param_1->field_0x8 != (longlong *)0x0) {
    uVar13 = (**(code **)(**(longlong **)&param_1->field_0x8 + 0x148))();
  }
  local_78._8_8_ = uVar13;
  FD3D12ResourceLocation::OnAllocationMoved
            (this_00,(FD3D12ContextArray *)local_78,param_2,local_res8);
  if ((((((local_res8[0] & ReadOnlyExclusiveMask) != Unknown) &&
        ((local_res8[0] & WritableMask) != Unknown)) ||
       (((local_res8[0] & WriteOnlyExclusiveMask) != Unknown &&
        ((local_res8[0] & ReadableMask) != Unknown)))) ||
      (((local_res8[0] >> 0x14 & 1) != 0 &&
       ((local_res8[0] == Unknown || ((local_res8[0] & local_res8[0] - CPURead) != Unknown)))))) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidAccess(DstD3D12Access)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12PoolAllocator.cpp"
                         ,0x2ca,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  if (!this_00->UnderlyingResource->bRequiresResourceStateTracking) {
    local_res8[0] = Unknown;
  }
  if ((this->_padding_ == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  lVar14 = this->_padding_;
  if ((*(longlong *)(lVar14 + 0x10) == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  lVar14 = *(longlong *)(lVar14 + 0x10);
  if ((*(longlong *)(lVar14 + 0x548) == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("FrameFence",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                         ,0xff,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  iVar10 = (this->FrameFencedOperations).ArrayNum;
  piVar1 = &(this->FrameFencedOperations).ArrayMax;
  lVar14 = *(longlong *)(lVar14 + 0x548);
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,&(this->FrameFencedOperations).AllocatorInstance,piVar1);
  }
  (this->FrameFencedOperations).ArrayNum = iVar10 + 1;
  pFVar15 = (this->FrameFencedOperations).AllocatorInstance.Data + (longlong)iVar10 * 0x20;
  *(undefined8 *)(pFVar15 + 8) = 0;
  *(undefined8 *)(pFVar15 + 0x10) = 0;
  *(undefined8 *)(pFVar15 + 0x18) = 0;
  *(undefined8 *)pFVar15 = 2;
  iVar10 = *(int *)(lVar14 + 0x58);
  *(FRHIPoolAllocationData **)(pFVar15 + 0x18) = param_2;
  *(longlong *)(pFVar15 + 0x10) = (longlong)(iVar10 + 1);
  uStack_5c = (undefined4)uVar4;
  local_58 = this_00->UnderlyingResource;
  EStack_50 = local_res8[0];
  uStack_4c = (undefined4)this_00->OffsetFromBaseOfResource;
  local_48 = param_2->Size;
  uStack_44 = (uint)(this->AllocationStrategy != kManualSubAllocation);
  local_68 = pFVar3;
  iStack_60 = iVar11;
  if ((local_58 == (FD3D12Resource *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("CopyOp.DstResource != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12PoolAllocator.cpp"
                         ,0x2e9,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  pTVar2 = &this->PendingCopyOps;
  pFVar15 = (pTVar2->AllocatorInstance).Data;
  if (((pFVar15 <= (FScriptContainerElement *)&local_68) &&
      ((FScriptContainerElement *)&local_68 <
       pFVar15 + (longlong)(this->PendingCopyOps).ArrayMax * 0x28)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar7 = (code *)swi(3);
    uVar9 = (*pcVar7)();
    return (bool)uVar9;
  }
  iVar11 = (this->PendingCopyOps).ArrayNum;
  piVar1 = &(this->PendingCopyOps).ArrayMax;
  if (iVar11 == *piVar1) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->PendingCopyOps).ArrayNum = iVar11 + 1;
  lVar14 = (longlong)iVar11;
  pFVar6 = (pTVar2->AllocatorInstance).Data;
  *(FD3D12Resource **)(pFVar6 + lVar14 * 0x28) = local_68;
  *(ulonglong *)(pFVar6 + lVar14 * 0x28 + 8) = CONCAT44(uStack_5c,iStack_60);
  pFVar15 = pFVar6 + lVar14 * 0x28 + 0x10;
  *(undefined4 *)pFVar15 = (undefined4)local_58;
  *(undefined4 *)(pFVar15 + 4) = local_58._4_4_;
  *(ED3D12Access *)(pFVar15 + 8) = EStack_50;
  *(undefined4 *)(pFVar15 + 0xc) = uStack_4c;
  *(ulonglong *)(pFVar6 + lVar14 * 0x28 + 0x20) = CONCAT44(uStack_44,local_48);
  (**(code **)(this->_padding_ + 0x28))(this,this_00,0);
  return true;
}

// SupportsAllocation @ 145a332f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

bool __thiscall
FD3D12PoolAllocator::SupportsAllocation
          (FD3D12PoolAllocator *this,D3D12_HEAP_TYPE param_1,D3D12_RESOURCE_FLAGS param_2,
          EBufferUsageFlags param_3,ED3D12ResourceStateMode param_4,uint param_5)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  ED3D12Access EVar4;
  EResourceAllocationStrategy EVar5;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_38;
  if (((param_3 >> 0xb & 1) != 0) && (*(int *)((longlong)&this->_padding_ + 4) != 1)) {
    return false;
  }
  EVar4 = CopyDest;
  if ((param_3 & AccelerationStructure) == None) {
    if (param_1 != D3D12_HEAP_TYPE_READBACK) {
      if ((param_3 & UnorderedAccess) == None) {
        EVar4 = GenericRead;
      }
      else {
        if (((param_2 & D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS) == D3D12_RESOURCE_FLAG_NONE) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("InResourceFlags & D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12PoolAllocator.cpp"
                               ,0xce,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        EVar4 = UAVMask;
      }
    }
  }
  else {
    if ((param_3 != AccelerationStructure) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InBufferUsage == EBufferUsageFlags::AccelerationStructure",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12PoolAllocator.cpp"
                           ,0xc3,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    EVar4 = BVHWrite|BVHRead;
  }
  EVar5 = kPlacedResource;
  if (param_5 < 0x101) {
    if (param_4 == Default) {
      param_4 = ((param_2 & D3D12_RESOURCE_FLAG_ALLOW_UNORDERED_ACCESS) != D3D12_RESOURCE_FLAG_NONE)
                + SingleState;
    }
    EVar5 = (EResourceAllocationStrategy)(param_4 != MultiState);
    if (param_4 == MultiState) goto LAB_145a333d0;
  }
  else {
LAB_145a333d0:
    if (this->AllocationStrategy == kPlacedResource) {
      if ((this->InitConfig).HeapType != param_1) {
        return false;
      }
      bVar2 = (this->InitConfig).HeapFlags == D3D12_HEAP_FLAG_ALLOW_ONLY_BUFFERS;
      goto LAB_145a33417;
    }
  }
  if ((this->InitConfig).HeapType != param_1) {
    return false;
  }
  if ((this->InitConfig).HeapFlags != D3D12_HEAP_FLAG_ALLOW_ONLY_BUFFERS) {
    return false;
  }
  if ((this->InitConfig).ResourceFlags != param_2) {
    return false;
  }
  if ((this->InitConfig).InitialD3D12Access != EVar4) {
    return false;
  }
  bVar2 = this->AllocationStrategy == EVar5;
LAB_145a33417:
  if (!bVar2) {
    return false;
  }
  return true;
}

// TransferOwnership @ 145a33a60

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12PoolAllocator::TransferOwnership
          (FD3D12PoolAllocator *this,FD3D12ResourceLocation *param_1,FD3D12ResourceLocation *param_2
          )

{
  longlong *lpCriticalSection;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((param_1->AllocatorType != AT_Pool) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("AT_Pool == AllocatorType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                         ,699,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((FD3D12PoolAllocator *)(param_1->field3_0x18).Allocator != this) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsOwner(InSource)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12PoolAllocator.cpp"
                         ,0x34e,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((param_1->AllocatorData).BlockAllocatorPrivateData.Offset & 0x100000) != 0) {
    pFVar4 = (this->FrameFencedOperations).AllocatorInstance.Data;
    iVar1 = (this->FrameFencedOperations).ArrayNum;
    pFVar5 = pFVar4 + (longlong)iVar1 * 0x20;
    while( true ) {
      if ((this->FrameFencedOperations).ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FD3D12PoolAllocator::FrameFencedAllocationData,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar4 == pFVar5) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("bFound",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12PoolAllocator.cpp"
                           ,0x362,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        goto LAB_145a33bac;
      }
      if ((PrivateAllocatorData *)*(undefined1 **)(pFVar4 + 0x18) == &param_1->AllocatorData) break;
      pFVar4 = pFVar4 + 0x20;
    }
    if ((*(int *)pFVar4 != 2) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Operation.Operation == FrameFencedAllocationData::EOperation::Unlock",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12PoolAllocator.cpp"
                           ,0x35c,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(PrivateAllocatorData **)(pFVar4 + 0x18) = &param_2->AllocatorData;
  }
LAB_145a33bac:
  FRHIPoolAllocationData::MoveFrom
            ((FRHIPoolAllocationData *)&(param_2->AllocatorData).BuddyAllocatorPrivateData,
             (FRHIPoolAllocationData *)&(param_1->AllocatorData).BuddyAllocatorPrivateData,
             (bool)((byte)((param_1->AllocatorData).BlockAllocatorPrivateData.Offset >> 0x14) & 1));
  if ((*(longlong *)((longlong)&param_2->AllocatorData + 0x28) != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Owner == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Public\\RHIPoolAllocator.h"
                         ,0x4b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(FD3D12ResourceLocation **)((longlong)&param_2->AllocatorData + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x000145a33c0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// UpdateAllocationTracking @ 145a36d40

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
FD3D12PoolAllocator::UpdateAllocationTracking
          (FD3D12PoolAllocator *this,FD3D12ResourceLocation *param_1,EAllocationType param_2)

{
  uint uVar1;
  longlong lVar2;
  FD3D12Adapter *this_00;
  code *pcVar3;
  bool bVar4;
  FLLMPauseScope *this_01;
  ulonglong uVar5;
  FLLMPauseScope local_28;
  FLLMPauseScope local_18;
  
  if (param_1->AllocatorType != AT_Pool) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("AT_Pool == AllocatorType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                       ,699,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((FD3D12PoolAllocator *)(param_1->field3_0x18).Allocator != this) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsOwner(InAllocation)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12PoolAllocator.cpp"
                       ,0x387,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((*(byte *)((longlong)&param_1->AllocatorData + 0xe) & 0xf) != 2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("AllocationData.IsAllocated()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12PoolAllocator.cpp"
                       ,0x389,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar1 = (param_1->AllocatorData).BuddyAllocatorPrivateData.Offset;
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
  lVar2 = this->_padding_;
  if (*(longlong *)(lVar2 + 0x10) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentAdapter != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x41,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this_00 = *(FD3D12Adapter **)(lVar2 + 0x10);
  if ((((this->InitConfig).HeapType == D3D12_HEAP_TYPE_DEFAULT) &&
      (this->AllocationStrategy == kPlacedResource)) && (this_00->bTrackAllAllocation != false)) {
    if (param_2 != Allocate) {
      FD3D12Adapter::ReleaseTrackedAllocationData(this_00,param_1,param_2 == DefragFree);
      uVar5 = (ulonglong)(param_1->AllocatorData).BuddyAllocatorPrivateData.Offset;
LAB_145a36e9e:
      FLLMPauseScope::FLLMPauseScope
                (&local_18,LLMTagDeclaration_D3D12AllocatorUnused.UniqueName,false,uVar5,Platform,
                 System);
      this_01 = &local_18;
      goto LAB_145a36ec4;
    }
    FD3D12Adapter::TrackAllocationData(this_00,param_1,(ulonglong)uVar1,false);
    uVar5 = (ulonglong)(param_1->AllocatorData).BuddyAllocatorPrivateData.Offset;
  }
  else {
    uVar5 = (ulonglong)(param_1->AllocatorData).BuddyAllocatorPrivateData.Offset;
    if (param_2 != Allocate) goto LAB_145a36e9e;
  }
  FLLMPauseScope::FLLMPauseScope
            (&local_28,LLMTagDeclaration_D3D12AllocatorUnused.UniqueName,false,-uVar5,Platform,
             System);
  this_01 = &local_28;
LAB_145a36ec4:
  FLLMPauseScope::~FLLMPauseScope(this_01);
  return;
}

