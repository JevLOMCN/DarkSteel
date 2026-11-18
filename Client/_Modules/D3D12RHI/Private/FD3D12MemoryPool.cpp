// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 4

// FD3D12MemoryPool @ 1459ee8c0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12MemoryPool * __thiscall
FD3D12MemoryPool::FD3D12MemoryPool
          (FD3D12MemoryPool *this,FD3D12Device *param_1,FRHIGPUMask param_2,
          FD3D12ResourceInitConfig *param_3,FString *param_4,EResourceAllocationStrategy param_5,
          short param_6,ulong64 param_7,uint param_8,ERHIPoolResourceTypes param_9,
          EFreeListOrder param_10,uint param_11)

{
  code *pcVar1;
  D3D12_HEAP_FLAGS DVar2;
  D3D12_RESOURCE_FLAGS DVar3;
  ED3D12Access EVar4;
  bool bVar5;
  uint uVar6;
  FD3D12MemoryPool *pFVar7;
  wchar_t *pwVar8;
  
  FRHIMemoryPool::FRHIMemoryPool((FRHIMemoryPool *)this,param_6,param_7,param_8,param_9,param_10);
  this->_padding_ = (longlong)param_1;
  uVar6 = *(uint *)param_1;
  *(uint *)&this->_padding_ = uVar6;
  *(uint *)((longlong)&this->_padding_ + 4) = param_2.GPUMask;
  if ((param_2.GPUMask & uVar6) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("NodeMask.Intersects(VisibiltyMask)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x9e,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pFVar7 = (FD3D12MemoryPool *)(*pcVar1)();
      return pFVar7;
    }
  }
  this->_padding_ = (longlong)&___7FD3D12MemoryPool__6B_;
  DVar2 = param_3->HeapFlags;
  DVar3 = param_3->ResourceFlags;
  EVar4 = param_3->InitialD3D12Access;
  (this->InitConfig).HeapType = param_3->HeapType;
  (this->InitConfig).HeapFlags = DVar2;
  (this->InitConfig).ResourceFlags = DVar3;
  (this->InitConfig).InitialD3D12Access = EVar4;
  ::FString::FString(&this->Name,param_4);
  pwVar8 = L"D3D12MemoryPool (ManualSubAllocation)";
  this->AllocationStrategy = param_5;
  (this->BackingResource).Reference = (FD3D12Resource *)0x0;
  (this->BackingHeap).Reference = (FD3D12Heap *)0x0;
  this->LastUsedFrameFence = 0;
  if (param_5 == kPlacedResource) {
    pwVar8 = L"D3D12MemoryPool (PlacedResource)";
  }
  uVar6 = MemoryTrace_HeapSpec(param_11,pwVar8,None);
  this->TraceHeapId = uVar6;
  return this;
}

// ~FD3D12MemoryPool @ 1459f84a0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12MemoryPool::~FD3D12MemoryPool(FD3D12MemoryPool *this)

{
  longlong *plVar1;
  FD3D12Heap *pFVar2;
  FD3D12Resource *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  
  this->_padding_ = (longlong)&___7FD3D12MemoryPool__6B_;
  pFVar2 = (this->BackingHeap).Reference;
  if (pFVar2 != (FD3D12Heap *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  pFVar3 = (this->BackingResource).Reference;
  if (pFVar3 != (FD3D12Resource *)0x0) {
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  pFVar4 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FRHIMemoryPool::~FRHIMemoryPool((FRHIMemoryPool *)this);
  return;
}

// Destroy @ 145a110e0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12MemoryPool::Destroy(FD3D12MemoryPool *this)

{
  longlong *plVar1;
  FD3D12Resource *pFVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  FLLMPauseScope local_18;
  
  FLLMPauseScope::FLLMPauseScope(&local_18,Untagged,false,0,Default,System);
  FRHIMemoryPool::Destroy((FRHIMemoryPool *)this);
  pFVar2 = (this->BackingResource).Reference;
  if (pFVar2 != (FD3D12Resource *)0x0) {
    MemoryTrace_UnmarkAllocAsHeap(pFVar2->GPUVirtualAddress,this->TraceHeapId,0);
    MemoryTrace_Free(((this->BackingResource).Reference)->GPUVirtualAddress,1,0);
    if (((int)((this->BackingResource).Reference)->_padding_ != 1) &&
       (GNumExplicitGPUsForRendering < 2)) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6088136487340080979>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12PoolAllocator.cpp"
                         ,0xad,
                         "BackingResource->GetRefCount() == 1 || GNumExplicitGPUsForRendering > 1");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (this->BackingResource).Reference;
    if (pFVar2 != (FD3D12Resource *)0x0) {
      (this->BackingResource).Reference = (FD3D12Resource *)0x0;
      plVar1 = &pFVar2->_padding_;
      LOCK();
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar2->_padding_)(pFVar2,1);
      }
    }
  }
  FLLMPauseScope::~FLLMPauseScope(&local_18);
  return;
}

// Init @ 145a1d5b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145a1daf0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */

void __thiscall FD3D12MemoryPool::Init(FD3D12MemoryPool *this)

{
  TRefCountPtr<FD3D12Resource> *pTVar1;
  FRHIGPUMask FVar2;
  D3D12_HEAP_TYPE DVar3;
  D3D12_RESOURCE_FLAGS DVar4;
  ED3D12Access EVar5;
  longlong lVar6;
  FD3D12Adapter *this_00;
  ID3D12Device *pIVar7;
  FD3D12Resource *pFVar8;
  FD3D12Device *pFVar9;
  longlong *plVar10;
  code *pcVar11;
  bool bVar12;
  D3D12_HEAP_FLAGS DVar13;
  int iVar14;
  FD3D12Heap *pFVar15;
  FD3D12Heap *pFVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined1 auStackY_148 [32];
  FLLMScope local_f8;
  undefined4 local_f4;
  ID3D12Heap *local_f0;
  uint local_e8;
  undefined4 local_e4;
  uint local_e0;
  ID3D12Pageable *local_d8;
  FString local_d0;
  FString local_c0;
  FLLMPauseScope local_b0;
  FLLMPauseScope local_a0;
  FLLMPauseScope local_90;
  D3D12_HEAP_PROPERTIES local_80;
  ulong64 local_68;
  D3D12_HEAP_TYPE local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  if (this->_padding_ != 0) {
    if ((this->_padding_ == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Parent != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                            ,0x59,L""), bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    lVar6 = this->_padding_;
    if ((*(longlong *)(lVar6 + 0x10) == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ParentAdapter != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                            ,0x41,L""), bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    this_00 = *(FD3D12Adapter **)(lVar6 + 0x10);
    if (this->AllocationStrategy == kPlacedResource) {
      iVar14 = (int)this->_padding_;
      if (((iVar14 != 0x1000) && (iVar14 != 0x10000)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("PoolAlignment == ( 4096 ) || PoolAlignment == ( 65536 )",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12PoolAllocator.cpp"
                              ,0x3a,L""), bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      local_60 = (this->InitConfig).HeapType;
      local_54 = 1;
      if (GVirtualMGPU == 0) {
        local_54 = (undefined4)this->_padding_;
        local_50 = *(undefined4 *)((longlong)&this->_padding_ + 4);
      }
      else {
        local_50 = 1;
      }
      local_68 = this->_padding_;
      pFVar16 = (FD3D12Heap *)0x0;
      DVar13 = (this->InitConfig).HeapFlags;
      if (this_00->bTrackAllAllocation != false) {
        DVar13 = D3D12_HEAP_FLAG_ALLOW_ALL_BUFFERS_AND_TEXTURES;
      }
      local_4c = 0;
      local_5c = 0;
      local_48 = 0;
      if (this_00->bHeapNotZeroedSupported != false) {
        DVar13 = DVar13 | D3D12_HEAP_FLAG_CREATE_NOT_ZEROED;
      }
      local_40 = (ulonglong)DVar13;
      local_f0 = (ID3D12Heap *)0x0;
      FLLMScope::FLLMScope(&local_f8,GraphicsPlatform,false,None,Platform,true);
      FLLMPauseScope::FLLMPauseScope(&local_b0,Untagged,false,0,Default,System);
      pIVar7 = (this_00->RootDevice).Reference;
      iVar14 = (**(code **)((longlong)*pIVar7 + 0xe0))
                         (pIVar7,&local_68,&_GUID_6b3b2502_6e51_45b3_90ee_9884265e8df3,&local_f0);
      if (iVar14 < 0) {
        local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d0.Data.ArrayNum = 0;
        local_d0.Data.ArrayMax = 0;
        D3D12RHI::VerifyD3D12Result
                  (iVar14,"Adapter->GetD3DDevice()->CreateHeap(&Desc, IID_PPV_ARGS(&Heap))",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12PoolAllocator.cpp"
                   ,0x5c,(ID3D12Device *)0x0,&local_d0);
      }
      FLLMPauseScope::~FLLMPauseScope(&local_b0);
      FLLMScope::~FLLMScope(&local_f8);
      pFVar15 = ::operator_new(0x88);
      if (pFVar15 != (FD3D12Heap *)0x0) {
        FVar2.GPUMask = *(uint *)((longlong)&this->_padding_ + 4);
        uVar18 = this->TraceHeapId;
        if ((this->_padding_ == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Parent != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                                ,0x59,L""), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar16 = FD3D12Heap::FD3D12Heap(pFVar15,(FD3D12Device *)this->_padding_,FVar2,uVar18);
      }
      pFVar15 = (this->BackingHeap).Reference;
      if (pFVar15 != pFVar16) {
        (this->BackingHeap).Reference = pFVar16;
        if (pFVar16 != (FD3D12Heap *)0x0) {
          LOCK();
          *(int *)&pFVar16->_padding_ = (int)pFVar16->_padding_ + 1;
          UNLOCK();
        }
        if (pFVar15 != (FD3D12Heap *)0x0) {
          plVar10 = &pFVar15->_padding_;
          LOCK();
          lVar6 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if (((int)lVar6 == 1) && (plVar10 != (longlong *)0x0)) {
            (**(code **)pFVar15->_padding_)(pFVar15,1);
          }
        }
      }
      FD3D12Heap::SetHeap((this->BackingHeap).Reference,local_f0,L"PoolAllocator Heap",true,false);
      DVar3 = (this->InitConfig).HeapType;
      if ((DVar3 == D3D12_HEAP_TYPE_CUSTOM) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("HeapType == D3D12_HEAP_TYPE_CUSTOM ? pCustomHeapProperties != nullptr : true"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.h"
                              ,0x176,L""), DVar3 = _DAT_00000004, bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if (DVar3 == D3D12_HEAP_TYPE_DEFAULT) {
        FD3D12Heap::BeginTrackingResidency((this->BackingHeap).Reference,local_68);
      }
    }
    else {
      FLLMPauseScope::FLLMPauseScope(&local_a0,Untagged,false,0,Default,System);
      local_80.VisibleNodeMask = 1;
      if (GVirtualMGPU == 0) {
        local_80.VisibleNodeMask = *(uint *)((longlong)&this->_padding_ + 4);
        local_80.CreationNodeMask = (uint)this->_padding_;
      }
      else {
        local_80.CreationNodeMask = 1;
      }
      DVar4 = (this->InitConfig).ResourceFlags;
      pTVar1 = &this->BackingResource;
      pFVar8 = pTVar1->Reference;
      local_80.Type = (this->InitConfig).HeapType;
      local_80.CPUPageProperty = D3D12_CPU_PAGE_PROPERTY_UNKNOWN;
      local_80.MemoryPoolPreference = D3D12_MEMORY_POOL_UNKNOWN;
      if (pFVar8 != (FD3D12Resource *)0x0) {
        pTVar1->Reference = (FD3D12Resource *)0x0;
        plVar10 = &pFVar8->_padding_;
        LOCK();
        lVar6 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if (((int)lVar6 == 1) && (plVar10 != (longlong *)0x0)) {
          (**(code **)pFVar8->_padding_)(pFVar8,1);
        }
      }
      EVar5 = (this->InitConfig).InitialD3D12Access;
      iVar14 = FD3D12Adapter::CreateBuffer
                         (this_00,&local_80,(FRHIGPUMask)(uint)this->_padding_,EVar5,SingleState,
                          EVar5,this->_padding_,&pTVar1->Reference,
                          L"Resource PoolAllocator Underlying Buffer",DVar4);
      if (iVar14 < 0) {
        local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c0.Data.ArrayNum = 0;
        local_c0.Data.ArrayMax = 0;
        D3D12RHI::VerifyD3D12Result
                  (iVar14,
                   "Adapter->CreateBuffer( HeapProps, GetGPUMask(), InitConfig.InitialD3D12Access, ED3D12ResourceStateMode::SingleState, InitConfig.InitialD3D12Access, PoolSize, BackingResource.GetInitReference(), TEXT(\"Resource PoolAllocator Underlying Buffer\"), InitConfig.ResourceFlags)"
                   ,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12PoolAllocator.cpp"
                   ,0x7a,(ID3D12Device *)0x0,&local_c0);
      }
      MemoryTrace_MarkAllocAsHeap(pTVar1->Reference->GPUVirtualAddress,this->TraceHeapId,None,0);
      FLLMPauseScope::~FLLMPauseScope(&local_a0);
      DVar3 = (this->InitConfig).HeapType;
      if ((DVar3 == D3D12_HEAP_TYPE_CUSTOM) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("HeapType == D3D12_HEAP_TYPE_CUSTOM ? pCustomHeapProperties != nullptr : true"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.h"
                              ,0x176,L""), DVar3 = _DAT_00000004, bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if (DVar3 != D3D12_HEAP_TYPE_DEFAULT) {
        FD3D12Resource::Map(pTVar1->Reference,(D3D12_RANGE *)0x0);
      }
    }
    DVar3 = (this->InitConfig).HeapType;
    if ((DVar3 == D3D12_HEAP_TYPE_CUSTOM) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("HeapType == D3D12_HEAP_TYPE_CUSTOM ? pCustomHeapProperties != nullptr : true"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.h"
                            ,0x176,L""), DVar3 = _DAT_00000004, bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if ((DVar3 == D3D12_HEAP_TYPE_DEFAULT) &&
       (((this->InitConfig).InitialD3D12Access & (BVHWrite|BVHRead)) != Unknown)) {
      uVar18 = (uint)this->_padding_;
      local_e8 = 0;
      if (uVar18 != 0) {
        for (; (uVar18 >> local_e8 & 1) == 0; local_e8 = local_e8 + 1) {
        }
      }
      uVar17 = 0x20;
      if (uVar18 != 0) {
        uVar17 = (ulonglong)local_e8;
      }
      local_e4 = 0;
      if (uVar18 != 0) {
        while( true ) {
          if (this->AllocationStrategy == kPlacedResource) {
            local_d8 = (ID3D12Pageable *)(((this->BackingHeap).Reference)->Heap).Reference;
          }
          else {
            local_d8 = FD3D12Resource::GetPageable((this->BackingResource).Reference);
          }
          local_f4 = 0xa0010000;
          if ((GNumExplicitGPUsForRendering <= (uint)uVar17) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("GPUIndex < GNumExplicitGPUsForRendering",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                                  ,0x103,L""), bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar9 = (this_00->Devices).Elements[uVar17];
          if ((*(longlong *)&pFVar9->field_0x10 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ParentAdapter != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                                  ,0x41,L""), bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          plVar10 = *(longlong **)(*(longlong *)&pFVar9->field_0x10 + 0x30);
          (**(code **)(*plVar10 + 0x170))(plVar10,1,&local_d8,&local_f4);
          uVar18 = uVar18 & ~(1 << ((byte)uVar17 & 0x1f));
          local_e0 = 0;
          if (uVar18 != 0) {
            for (; (uVar18 >> local_e0 & 1) == 0; local_e0 = local_e0 + 1) {
            }
          }
          if (uVar18 == 0) break;
          uVar17 = (ulonglong)local_e0;
        }
      }
    }
    FLLMPauseScope::FLLMPauseScope
              (&local_90,LLMTagDeclaration_D3D12AllocatorUnused.UniqueName,false,this->_padding_,
               Platform,System);
    FRHIMemoryPool::Init((FRHIMemoryPool *)this);
    FLLMPauseScope::~FLLMPauseScope(&local_90);
  }
  return;
}

