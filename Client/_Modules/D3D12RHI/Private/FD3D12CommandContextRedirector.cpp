// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 65

// FD3D12CommandContextRedirector @ 1459a87f0

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

FD3D12CommandContextRedirector * __thiscall
FD3D12CommandContextRedirector::FD3D12CommandContextRedirector
          (FD3D12CommandContextRedirector *this,FD3D12Adapter *param_1,ED3D12QueueType param_2,
          bool param_3)

{
  FD3D12CommandContextBase::FD3D12CommandContextBase
            ((FD3D12CommandContextBase *)this,param_1,
             (FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1));
  this->QueueType = param_2;
  this->_padding_ = (longlong)&___7FD3D12CommandContextRedirector__6B_;
  this->bIsDefaultContext = param_3;
  if (&this->PhysicalContexts <= this + 1) {
    memset(&this->PhysicalContexts,0,0x40);
  }
  return this;
}

// operator() @ 1459ad8a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001459ad8ef) */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

TStaticArray<TRefCountPtr<FD3D12SyncPoint>,8,4294967295> * __thiscall
`FD3D12CommandContextRedirector::RHITransferResources'::__l2::<lambda_1>::operator()
          (void *this,
          TStaticArray<TRefCountPtr<FD3D12SyncPoint>,8,4294967295> *__return_storage_ptr__,
          FRHIGPUMask param_1,TOptional<FRHIGPUMask> param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  TRefCountPtr<FD3D12SyncPoint> *pTVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  atomic<void_*> aVar10;
  FD3D12SyncPoint *pFVar11;
  atomic<void_*> aVar12;
  FRHIGPUMask FVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined1 auStackY_88 [32];
  undefined4 local_54;
  uint local_50;
  FMemScope local_48;
  TOptional<FRHIGPUMask> local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_88;
  uVar9 = 0;
  if (param_1.GPUMask != 0) {
    for (; (param_1.GPUMask >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
    }
  }
  __return_storage_ptr__->Elements[0].Reference = (FD3D12SyncPoint *)0x0;
  uVar14 = 0x20;
  if (param_1.GPUMask != 0) {
    uVar14 = (ulonglong)uVar9;
  }
  __return_storage_ptr__->Elements[1].Reference = (FD3D12SyncPoint *)0x0;
  __return_storage_ptr__->Elements[2].Reference = (FD3D12SyncPoint *)0x0;
  local_54 = 0;
  __return_storage_ptr__->Elements[3].Reference = (FD3D12SyncPoint *)0x0;
  __return_storage_ptr__->Elements[4].Reference = (FD3D12SyncPoint *)0x0;
  __return_storage_ptr__->Elements[5].Reference = (FD3D12SyncPoint *)0x0;
  __return_storage_ptr__->Elements[6].Reference = (FD3D12SyncPoint *)0x0;
  __return_storage_ptr__->Elements[7].Reference = (FD3D12SyncPoint *)0x0;
  local_50 = param_1.GPUMask;
  local_40 = param_2;
  if (param_1.GPUMask != 0) {
    lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    while( true ) {
      aVar12 = (atomic<void_*>)0x0;
      if ((*(int *)(lVar5 + 0x9d4c) <
           `public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        ::FName::FName(&`public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
                        ::__l2::LLMScope_Name103,L"RHIMisc/CreateSyncPoint");
        _Init_thread_footer(&`public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      FLLMScope::FLLMScope
                ((FLLMScope *)&local_54,
                 `public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
                 ::__l2::LLMScope_Name103,false,None,Default,true);
      FMemScope::FMemScope
                (&local_48,
                 &`public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
                  ::__l2::LLMScope_Name103,true);
      uVar9 = FLockFreePointerListLIFORoot<64,1>::Pop
                        ((FLockFreePointerListLIFORoot<64,1> *)&FD3D12SyncPoint::MemoryPool);
      aVar10 = aVar12;
      if (uVar9 != 0) {
        aVar10 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar9 >> 0xe][uVar9 & 0x3fff].Payload;
        FLockFreeLinkPolicy::FreeLockFreeLink(uVar9);
      }
      if ((aVar10 != (atomic<void_*>)0x0) ||
         (aVar10 = (atomic<void_*>)FMemory::Malloc(0x38,8), aVar10 != (atomic<void_*>)0x0)) {
        aVar12 = aVar10;
        *(undefined4 *)((longlong)aVar12 + 8) = 0;
        *(undefined8 *)((longlong)aVar12 + 0x28) = 0;
        *(undefined ***)aVar12 = &___7FD3D12SyncPoint__6B_;
        *(undefined1 *)((longlong)aVar12 + 0x20) = 0;
        *(wchar_t **)((longlong)aVar12 + 0x30) = L"TransferResources";
        LOCK();
        *(int *)((longlong)aVar12 + 8) = *(int *)((longlong)aVar12 + 8) + 1;
        UNLOCK();
      }
      FMemScope::~FMemScope(&local_48);
      FLLMScope::~FLLMScope((FLLMScope *)&local_54);
      pTVar3 = __return_storage_ptr__->Elements + uVar14;
      if (pTVar3 == (TRefCountPtr<FD3D12SyncPoint> *)&local_38) {
        if (aVar12 != (atomic<void_*>)0x0) {
          puVar2 = (undefined8 *)((longlong)aVar12 + 8);
          LOCK();
          iVar4 = *(int *)puVar2;
          *(int *)puVar2 = *(int *)puVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            if (puVar2 == (undefined8 *)0x0) {
              aVar12 = (atomic<void_*>)0x0;
            }
            if (aVar12 != (atomic<void_*>)0x0) {
              (*(code *)**(undefined8 **)aVar12)(aVar12,1);
            }
          }
        }
      }
      else {
        pFVar11 = pTVar3->Reference;
        pTVar3->Reference = (FD3D12SyncPoint *)aVar12;
        if (pFVar11 != (FD3D12SyncPoint *)0x0) {
          plVar1 = &pFVar11->_padding_;
          LOCK();
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            if (plVar1 == (longlong *)0x0) {
              pFVar11 = (FD3D12SyncPoint *)0x0;
            }
            if (pFVar11 != (FD3D12SyncPoint *)0x0) {
              (**(code **)pFVar11->_padding_)(pFVar11,1);
            }
          }
        }
      }
      FD3D12ContextCommon::SignalSyncPoint
                (*(FD3D12ContextCommon **)(*(longlong *)this + 0x148 + uVar14 * 8),pTVar3->Reference
                );
      local_50 = local_50 & ~(1 << ((byte)uVar14 & 0x1f));
      uVar9 = 0;
      if (local_50 != 0) {
        for (; (local_50 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
        }
      }
      if (local_50 == 0) break;
      uVar14 = (ulonglong)uVar9;
    }
    local_50 = 0;
  }
  if (*(char *)((longlong)local_40 + 4) != '\0') {
    uVar9 = *(uint *)local_40;
    uVar6 = 0;
    bVar15 = uVar9 != 0;
    if (bVar15) {
      for (; (uVar9 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
      }
    }
    while (bVar15) {
      uVar7 = 0;
      if (param_1.GPUMask != 0) {
        for (; (param_1.GPUMask >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
        }
      }
      if (param_1.GPUMask != 0) {
        FVar13.GPUMask = param_1.GPUMask;
        do {
          FD3D12ContextCommon::WaitSyncPoint
                    (*(FD3D12ContextCommon **)((ulonglong)uVar6 * 8 + 0x148 + *(longlong *)this),
                     __return_storage_ptr__->Elements[uVar7].Reference);
          FVar13.GPUMask = FVar13.GPUMask & ~(1 << ((byte)uVar7 & 0x1f));
          uVar7 = 0;
          if (FVar13.GPUMask != 0) {
            for (; (FVar13.GPUMask >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
            }
          }
        } while (FVar13.GPUMask != 0);
      }
      uVar9 = uVar9 & ~(1 << ((byte)uVar6 & 0x1f));
      uVar6 = 0;
      bVar15 = uVar9 != 0;
      if (bVar15) {
        for (; (uVar9 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
        }
      }
    }
  }
  return __return_storage_ptr__;
}

// AsRedirector @ 1459b2410

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12CommandContextRedirector * __thiscall
FD3D12CommandContextRedirector::AsRedirector(FD3D12CommandContextRedirector *this)

{
  return this;
}

// GetSingleDeviceContext @ 1459c30b0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12CommandContext * __thiscall
FD3D12CommandContextRedirector::GetSingleDeviceContext
          (FD3D12CommandContextRedirector *this,uint param_1)

{
  return (this->PhysicalContexts).Elements[param_1];
}

// RHIBeginBreadcrumbGPU @ 1459c9950

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHIBeginBreadcrumbGPU
          (FD3D12CommandContextRedirector *this,FRHIBreadcrumbNode *param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = *(uint *)((longlong)&this->_padding_ + 4);
  uVar1 = 0;
  bVar3 = uVar2 != 0;
  if (bVar3) {
    for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  while (bVar3) {
    FD3D12CommandContext::RHIBeginBreadcrumbGPU
              ((FD3D12CommandContext *)&(this->PhysicalContexts).Elements[uVar1]->field_0x1c0,
               param_1);
    uVar2 = uVar2 & ~(1 << ((byte)uVar1 & 0x1f));
    uVar1 = 0;
    bVar3 = uVar2 != 0;
    if (bVar3) {
      for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  return;
}

// RHIBeginRenderPass @ 1459c9b80

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHIBeginRenderPass
          (FD3D12CommandContextRedirector *this,FRHIRenderPassInfo *param_1,wchar_t *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = (uint)this->_padding_;
  uVar1 = 0;
  bVar4 = uVar3 != 0;
  if (bVar4) {
    for (; (uVar3 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  while (bVar4) {
    puVar2 = &(this->PhysicalContexts).Elements[uVar1]->field_0x1c0;
    (**(code **)(*(longlong *)puVar2 + 0x248))(puVar2,param_1,param_2);
    uVar3 = uVar3 & ~(1 << ((byte)uVar1 & 0x1f));
    uVar1 = 0;
    bVar4 = uVar3 != 0;
    if (bVar4) {
      for (; (uVar3 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  return;
}

// RHIBeginRenderQuery @ 1459c9c10

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHIBeginRenderQuery
          (FD3D12CommandContextRedirector *this,FRHIRenderQuery *param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = (uint)this->_padding_;
  uVar1 = 0;
  bVar3 = uVar2 != 0;
  if (bVar3) {
    for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  while (bVar3) {
    FD3D12CommandContext::RHIBeginRenderQuery
              ((FD3D12CommandContext *)&(this->PhysicalContexts).Elements[uVar1]->field_0x1c0,
               param_1);
    uVar2 = uVar2 & ~(1 << ((byte)uVar1 & 0x1f));
    uVar1 = 0;
    bVar3 = uVar2 != 0;
    if (bVar3) {
      for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  return;
}

// RHIBeginTransitions @ 1459c9cc0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHIBeginTransitions
          (FD3D12CommandContextRedirector *this,TArrayView<FRHITransition_const_*,int> *param_1)

{
  FD3D12CommandContext *pFVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  uVar4 = (uint)this->_padding_;
  uVar3 = 0;
  bVar5 = uVar4 != 0;
  if (bVar5) {
    for (; (uVar4 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
    }
  }
  while (bVar5) {
    pFVar1 = (this->PhysicalContexts).Elements[uVar3];
    local_18 = *(undefined4 *)&param_1->DataPtr;
    uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
    iStack_10 = param_1->ArrayNum;
    uStack_c = *(undefined4 *)&param_1->field_0xc;
    plVar2 = *(longlong **)&pFVar1->field_0x1b8;
    (**(code **)(*plVar2 + 8))(plVar2,pFVar1,&local_18);
    uVar4 = uVar4 & ~(1 << ((byte)uVar3 & 0x1f));
    uVar3 = 0;
    bVar5 = uVar4 != 0;
    if (bVar5) {
      for (; (uVar4 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
      }
    }
  }
  return;
}

// RHIBindAccelerationStructureMemory @ 1459c9d50

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHIBindAccelerationStructureMemory
          (FD3D12CommandContextRedirector *this,FRHIRayTracingScene *param_1,FRHIBuffer *param_2,
          uint param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = (uint)this->_padding_;
  uVar1 = 0;
  bVar3 = uVar2 != 0;
  if (bVar3) {
    for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  while (bVar3) {
    FD3D12CommandContext::RHIBindAccelerationStructureMemory
              ((FD3D12CommandContext *)&(this->PhysicalContexts).Elements[uVar1]->field_0x1c0,
               param_1,param_2,param_3);
    uVar2 = uVar2 & ~(1 << ((byte)uVar1 & 0x1f));
    uVar1 = 0;
    bVar3 = uVar2 != 0;
    if (bVar3) {
      for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  return;
}

// RHIBuildAccelerationStructures @ 1459ca180

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHIBuildAccelerationStructures
          (FD3D12CommandContextRedirector *this,
          TArrayView<FRayTracingGeometryBuildParams_const_,int> *param_1,FRHIBufferRange *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  TArrayView<FRayTracingGeometryBuildParams_const_,int> local_28;
  
  local_28.DataPtr = param_1->DataPtr;
  local_28.ArrayNum = param_1->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
  FD3D12CommandContext::UnregisterAccelerationStructuresInternalMGPU
            (&local_28,(FRHIGPUMask)(uint)this->_padding_);
  uVar2 = (uint)this->_padding_;
  uVar1 = 0;
  bVar3 = uVar2 != 0;
  if (bVar3) {
    for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  while (bVar3) {
    local_28.DataPtr = param_1->DataPtr;
    local_28.ArrayNum = param_1->ArrayNum;
    local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
    FD3D12CommandContext::RHIBuildAccelerationStructures
              ((FD3D12CommandContext *)&(this->PhysicalContexts).Elements[uVar1]->field_0x1c0,
               &local_28,param_2);
    uVar2 = uVar2 & ~(1 << ((byte)uVar1 & 0x1f));
    uVar1 = 0;
    bVar3 = uVar2 != 0;
    if (bVar3) {
      for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  return;
}

// RHIBuildAccelerationStructures @ 1459ca230

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHIBuildAccelerationStructures
          (FD3D12CommandContextRedirector *this,
          TArrayView<FRayTracingSceneBuildParams_const_,int> *param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  TArrayView<FRayTracingSceneBuildParams_const_,int> local_18;
  
  uVar2 = (uint)this->_padding_;
  uVar1 = 0;
  bVar3 = uVar2 != 0;
  if (bVar3) {
    for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  while (bVar3) {
    local_18.DataPtr = param_1->DataPtr;
    local_18.ArrayNum = param_1->ArrayNum;
    local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
    FD3D12CommandContext::RHIBuildAccelerationStructures
              ((FD3D12CommandContext *)&(this->PhysicalContexts).Elements[uVar1]->field_0x1c0,
               &local_18);
    uVar2 = uVar2 & ~(1 << ((byte)uVar1 & 0x1f));
    uVar1 = 0;
    bVar3 = uVar2 != 0;
    if (bVar3) {
      for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  return;
}

// RHIClearShaderBindingTable @ 1459caa00

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHIClearShaderBindingTable
          (FD3D12CommandContextRedirector *this,FRHIShaderBindingTable *param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = (uint)this->_padding_;
  uVar1 = 0;
  bVar3 = uVar2 != 0;
  if (bVar3) {
    for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  while (bVar3) {
    FD3D12CommandContext::RHIClearShaderBindingTable
              ((FD3D12CommandContext *)&(this->PhysicalContexts).Elements[uVar1]->field_0x1c0,
               param_1);
    uVar2 = uVar2 & ~(1 << ((byte)uVar1 & 0x1f));
    uVar1 = 0;
    bVar3 = uVar2 != 0;
    if (bVar3) {
      for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  return;
}

// RHIClearUAVFloat @ 1459caa80

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHIClearUAVFloat
          (FD3D12CommandContextRedirector *this,FRHIUnorderedAccessView *param_1,
          TVector4<float> *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = (uint)this->_padding_;
  uVar1 = 0;
  bVar3 = uVar2 != 0;
  if (bVar3) {
    for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  while (bVar3) {
    FD3D12CommandContext::RHIClearUAVFloat
              ((FD3D12CommandContext *)&(this->PhysicalContexts).Elements[uVar1]->field_0x1c0,
               param_1,param_2);
    uVar2 = uVar2 & ~(1 << ((byte)uVar1 & 0x1f));
    uVar1 = 0;
    bVar3 = uVar2 != 0;
    if (bVar3) {
      for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  return;
}

// RHIClearUAVUint @ 1459cab00

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHIClearUAVUint
          (FD3D12CommandContextRedirector *this,FRHIUnorderedAccessView *param_1,
          TIntVector4<unsigned_int> *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = (uint)this->_padding_;
  uVar1 = 0;
  bVar3 = uVar2 != 0;
  if (bVar3) {
    for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  while (bVar3) {
    FD3D12CommandContext::RHIClearUAVUint
              ((FD3D12CommandContext *)&(this->PhysicalContexts).Elements[uVar1]->field_0x1c0,
               param_1,param_2);
    uVar2 = uVar2 & ~(1 << ((byte)uVar1 & 0x1f));
    uVar1 = 0;
    bVar3 = uVar2 != 0;
    if (bVar3) {
      for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  return;
}

// RHICommitShaderBindingTable @ 1459cab80

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHICommitShaderBindingTable
          (FD3D12CommandContextRedirector *this,FRHIShaderBindingTable *param_1,FRHIBuffer *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = (uint)this->_padding_;
  uVar1 = 0;
  bVar3 = uVar2 != 0;
  if (bVar3) {
    for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  while (bVar3) {
    FD3D12CommandContext::RHICommitShaderBindingTable
              ((FD3D12CommandContext *)&(this->PhysicalContexts).Elements[uVar1]->field_0x1c0,
               param_1,param_2);
    uVar2 = uVar2 & ~(1 << ((byte)uVar1 & 0x1f));
    uVar1 = 0;
    bVar3 = uVar2 != 0;
    if (bVar3) {
      for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  return;
}

// RHICopyBufferRegion @ 1459caf40

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHICopyBufferRegion
          (FD3D12CommandContextRedirector *this,FRHIBuffer *param_1,ulong64 param_2,
          FRHIBuffer *param_3,ulong64 param_4,ulong64 param_5)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = (uint)this->_padding_;
  uVar1 = 0;
  bVar3 = uVar2 != 0;
  if (bVar3) {
    for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  while (bVar3) {
    FD3D12CommandContext::RHICopyBufferRegion
              ((FD3D12CommandContext *)&(this->PhysicalContexts).Elements[uVar1]->field_0x1c0,
               param_1,param_2,param_3,param_4,param_5);
    uVar2 = uVar2 & ~(1 << ((byte)uVar1 & 0x1f));
    uVar1 = 0;
    bVar3 = uVar2 != 0;
    if (bVar3) {
      for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  return;
}

// RHICopyTexture @ 1459cb000

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHICopyTexture
          (FD3D12CommandContextRedirector *this,FRHITexture *param_1,FRHITexture *param_2,
          FRHICopyTextureInfo *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = (uint)this->_padding_;
  uVar1 = 0;
  bVar3 = uVar2 != 0;
  if (bVar3) {
    for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  while (bVar3) {
    FD3D12CommandContext::RHICopyTexture
              ((FD3D12CommandContext *)&(this->PhysicalContexts).Elements[uVar1]->field_0x1c0,
               param_1,param_2,param_3);
    uVar2 = uVar2 & ~(1 << ((byte)uVar1 & 0x1f));
    uVar1 = 0;
    bVar3 = uVar2 != 0;
    if (bVar3) {
      for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  return;
}

// RHICopyToStagingBuffer @ 1459cb8a0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHICopyToStagingBuffer
          (FD3D12CommandContextRedirector *this,FRHIBuffer *param_1,FRHIStagingBuffer *param_2,
          uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = (uint)this->_padding_;
  uVar1 = 0;
  bVar3 = uVar2 != 0;
  if (bVar3) {
    for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  while (bVar3) {
    FD3D12CommandContext::RHICopyToStagingBuffer
              ((FD3D12CommandContext *)&(this->PhysicalContexts).Elements[uVar1]->field_0x1c0,
               param_1,param_2,param_3,param_4);
    uVar2 = uVar2 & ~(1 << ((byte)uVar1 & 0x1f));
    uVar1 = 0;
    bVar3 = uVar2 != 0;
    if (bVar3) {
      for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  return;
}

// RHICrossGPUTransfer @ 1459cc320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHICrossGPUTransfer
          (FD3D12CommandContextRedirector *this,
          TArrayView<FTransferResourceParams_const_,int> *param_1,
          TArrayView<FCrossGPUTransferFence_*_const,int> *param_2,
          TArrayView<FCrossGPUTransferFence_*_const,int> *param_3)

{
  int *piVar1;
  FCrossGPUTransferFence **ppFVar2;
  FTransferResourceParams *pFVar3;
  EPixelFormat EVar4;
  uint uVar5;
  FCrossGPUTransferFence *pFVar6;
  FD3D12CommandContext *this_00;
  FRHIBuffer *pFVar7;
  longlong lVar8;
  code *pcVar9;
  TArrayView<FTransferResourceParams_const_,int> *pTVar10;
  bool bVar11;
  longlong lVar12;
  FRHITexture *pFVar13;
  longlong *plVar14;
  FRHITexture *pFVar15;
  undefined8 uVar16;
  FD3D12SyncPoint *pFVar17;
  FTransferResourceParams *pFVar18;
  FCrossGPUTransferFence **ppFVar19;
  ulonglong uVar20;
  FRHITexture *pFVar21;
  undefined8 uVar22;
  int iVar23;
  FRHITexture *pFVar24;
  FRHITexture *pFVar25;
  undefined1 auStackY_188 [32];
  FTransferResourceParams *local_138;
  TArrayView<FTransferResourceParams_const_,int> *local_130;
  FName local_128;
  FD3D12SyncPoint *local_120;
  TArrayView<FCrossGPUTransferFence_*_const,int> *local_118;
  D3D12_TEXTURE_COPY_LOCATION local_110;
  D3D12_TEXTURE_COPY_LOCATION local_e0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  D3D12_BOX local_70;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_188;
  iVar23 = param_1->ArrayNum;
  local_138 = (FTransferResourceParams *)CONCAT44(local_138._4_4_,iVar23);
  if (iVar23 != 0) {
    ppFVar19 = param_2->DataPtr;
    ppFVar2 = ppFVar19 + param_2->ArrayNum;
    local_130 = param_1;
    local_118 = param_3;
    if (ppFVar19 != ppFVar2) {
      do {
        pFVar6 = *ppFVar19;
        pFVar17 = pFVar6->SyncPoint;
        FD3D12ContextCommon::WaitSyncPoint
                  ((FD3D12ContextCommon *)(this->PhysicalContexts).Elements[pFVar6->WaitGPUIndex],
                   pFVar17);
        plVar14 = &pFVar17->_padding_;
        LOCK();
        lVar12 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          if (plVar14 == (longlong *)0x0) {
            pFVar17 = (FD3D12SyncPoint *)0x0;
          }
          if (pFVar17 != (FD3D12SyncPoint *)0x0) {
            (**(code **)pFVar17->_padding_)(pFVar17,1);
          }
        }
        ::operator_delete(pFVar6,0x10);
        ppFVar19 = ppFVar19 + 1;
      } while (ppFVar19 != ppFVar2);
      iVar23 = (int)local_138;
    }
    pFVar18 = local_130->DataPtr;
    pFVar3 = pFVar18 + iVar23;
    if (pFVar18 != pFVar3) {
      pFVar24 = (FRHITexture *)0x0;
      do {
        uVar20 = (ulonglong)pFVar18->SrcGPUIndex;
        pFVar15 = (pFVar18->Texture).Reference;
        this_00 = (this->PhysicalContexts).Elements[uVar20];
        if (pFVar15 == (FRHITexture *)0x0) {
          pFVar7 = (pFVar18->Buffer).Reference;
          pFVar15 = pFVar24;
          lVar12 = _DAT_00000140;
          if (pFVar7 != (FRHIBuffer *)0x0) {
            pFVar15 = (FRHITexture *)(&pFVar7[1]._padding_)[pFVar18->DestGPUIndex];
            lVar12 = *(longlong *)((&pFVar7[1]._padding_)[uVar20] + 0x140);
          }
          lVar8 = pFVar15[1]._padding_;
          if (*(longlong *)&this_00->field_0x188 == 0) {
            (**(code **)(*(longlong *)this_00 + 8))(this_00);
          }
          plVar14 = *(longlong **)(*(longlong *)&this_00->field_0x188 + 0x28);
          piVar1 = (int *)(*(longlong *)&this_00->field_0x188 + 0x168);
          *piVar1 = *piVar1 + 1;
          uVar22 = *(undefined8 *)(lVar12 + 0x20);
          uVar16 = *(undefined8 *)(lVar8 + 0x20);
LAB_1459cc653:
          (**(code **)(*plVar14 + 0x88))(plVar14,uVar16,uVar22);
        }
        else {
          lVar12 = (**(code **)(pFVar15->_padding_ + 0x48))();
          pFVar15 = (pFVar18->Texture).Reference;
          pFVar21 = pFVar24;
          if (lVar12 != 0) {
            pFVar21 = *(FRHITexture **)(lVar12 + 0x200 + uVar20 * 8);
          }
          uVar5 = pFVar18->DestGPUIndex;
          pFVar25 = pFVar24;
          if ((pFVar15 != (FRHITexture *)0x0) &&
             (lVar12 = (**(code **)(pFVar15->_padding_ + 0x48))(), lVar12 != 0)) {
            pFVar25 = *(FRHITexture **)(lVar12 + 0x200 + (ulonglong)uVar5 * 8);
          }
          if ((pFVar18->Max).field0_0x0._s_0.Z == 0) {
            if (*(longlong *)&this_00->field_0x188 == 0) {
              (**(code **)(*(longlong *)this_00 + 8))(this_00);
            }
            plVar14 = *(longlong **)(*(longlong *)&this_00->field_0x188 + 0x28);
            piVar1 = (int *)(*(longlong *)&this_00->field_0x188 + 0x168);
            *piVar1 = *piVar1 + 1;
            uVar22 = *(undefined8 *)(pFVar21[1]._padding_ + 0x20);
            uVar16 = *(undefined8 *)(pFVar25[1]._padding_ + 0x20);
            goto LAB_1459cc653;
          }
          pFVar15 = (pFVar18->Texture).Reference;
          pFVar13 = pFVar24;
          if ((pFVar15->TextureDesc).Dimension == Texture2D) {
            pFVar13 = pFVar15;
          }
          if ((pFVar13 == (FRHITexture *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Param.Texture->GetTexture2D() != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.cpp"
                                  ,0x462,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if ((((((pFVar18->Min).field0_0x0._s_0.X < 0) || ((pFVar18->Min).field0_0x0._s_0.Y < 0))
               || ((pFVar18->Min).field0_0x0._s_0.Z < 0)) ||
              (((pFVar18->Max).field0_0x0._s_0.X < 0 || ((pFVar18->Max).field0_0x0._s_0.Y < 0)))) ||
             ((pFVar18->Max).field0_0x0._s_0.Z < 0)) {
            local_138 = pFVar18;
            `FD3D12CommandContextRedirector::RHICrossGPUTransfer'::__l20::<lambda_1>::operator()
                      (&local_138);
          }
          local_70.left = (pFVar18->Min).field0_0x0._s_0.X;
          local_70.top = (pFVar18->Min).field0_0x0._s_0.Y;
          local_70.front = (pFVar18->Min).field0_0x0._s_0.Z;
          local_70.right = (pFVar18->Max).field0_0x0._s_0.X;
          local_70.bottom = (pFVar18->Max).field0_0x0._s_0.Y;
          local_70.back = (pFVar18->Max).field0_0x0._s_0.Z;
          local_b0 = 0;
          uStack_a8 = 0;
          local_a0 = 0;
          uStack_98 = 0;
          local_110.pResource = *(ID3D12Resource **)(pFVar21[1]._padding_ + 0x20);
          local_110.field2_0x10._8_8_ = 0;
          local_110.Type = D3D12_TEXTURE_COPY_TYPE_SUBRESOURCE_INDEX;
          local_110.field2_0x10._16_8_ = 0;
          local_110.field2_0x10._24_8_ = 0;
          local_110.field2_0x10.PlacedFootprint.Offset = 0;
          local_e0.pResource = *(ID3D12Resource **)(pFVar25[1]._padding_ + 0x20);
          local_128 = (FName)pFVar25->_padding_;
          local_e0.field2_0x10._8_8_ = 0;
          local_e0.Type = D3D12_TEXTURE_COPY_TYPE_SUBRESOURCE_INDEX;
          local_90 = 0;
          uStack_88 = 0;
          local_e0.field2_0x10.PlacedFootprint.Offset = 0;
          local_80 = 0;
          uStack_78 = 0;
          local_e0.field2_0x10._16_8_ = 0;
          local_e0.field2_0x10._24_8_ = 0;
          lVar12 = (**(code **)(pFVar21->_padding_ + 0x20))(pFVar21);
          EVar4 = *(EPixelFormat *)(lVar12 + 0x33);
          lVar12 = (**(code **)(pFVar25->_padding_ + 0x20))(pFVar25);
          FD3D12CommandContext::CopyTextureRegionChecked
                    (this_00,&local_e0,local_70.left,local_70.top,local_70.front,
                     *(EPixelFormat *)(lVar12 + 0x33),&local_110,&local_70,EVar4,&local_128);
        }
        pFVar18 = pFVar18 + 1;
      } while (pFVar18 != pFVar3);
    }
    pTVar10 = local_130;
    FD3D12SyncPoint::Create((ED3D12SyncPointType)&local_120,(wchar_t *)0x0);
    if ((pTVar10->ArrayNum < 1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    FD3D12ContextCommon::SignalSyncPoint
              ((FD3D12ContextCommon *)
               (this->PhysicalContexts).Elements[pTVar10->DataPtr->SrcGPUIndex],local_120);
    ppFVar19 = local_118->DataPtr;
    ppFVar2 = ppFVar19 + local_118->ArrayNum;
    for (; ppFVar19 != ppFVar2; ppFVar19 = ppFVar19 + 1) {
      pFVar6 = *ppFVar19;
      LOCK();
      *(int *)&local_120->_padding_ = (int)local_120->_padding_ + 1;
      UNLOCK();
      pFVar6->SyncPoint = local_120;
    }
    if (local_120 != (FD3D12SyncPoint *)0x0) {
      plVar14 = &local_120->_padding_;
      LOCK();
      lVar12 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        if (plVar14 == (longlong *)0x0) {
          local_120 = (FD3D12SyncPoint *)0x0;
        }
        if (local_120 != (FD3D12SyncPoint *)0x0) {
          (**(code **)local_120->_padding_)(local_120,1);
        }
      }
    }
  }
  return;
}

// RHICrossGPUTransferSignal @ 1459cc780

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHICrossGPUTransferSignal
          (FD3D12CommandContextRedirector *this,
          TArrayView<FTransferResourceParams_const_,int> *param_1,
          TArrayView<FCrossGPUTransferFence_*_const,int> *param_2)

{
  FCrossGPUTransferFence **ppFVar1;
  int iVar2;
  longlong lVar3;
  FCrossGPUTransferFence *pFVar4;
  uint uVar5;
  atomic<void_*> aVar6;
  FCrossGPUTransferFence **ppFVar7;
  int *piVar8;
  atomic<void_*> aVar9;
  FLLMScope local_res18 [2];
  FMemScope local_res20;
  
  ppFVar7 = param_2->DataPtr;
  ppFVar1 = ppFVar7 + param_2->ArrayNum;
  if (ppFVar7 != ppFVar1) {
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    aVar9 = (atomic<void_*>)0x0;
    do {
      pFVar4 = *ppFVar7;
      if ((*(int *)(lVar3 + 0x9d4c) <
           `public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        ::FName::FName(&`public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
                        ::__l2::LLMScope_Name103,L"RHIMisc/CreateSyncPoint");
        _Init_thread_footer(&`public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      FLLMScope::FLLMScope
                (local_res18,
                 `public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
                 ::__l2::LLMScope_Name103,false,None,Default,true);
      FMemScope::FMemScope
                (&local_res20,
                 &`public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
                  ::__l2::LLMScope_Name103,true);
      uVar5 = FLockFreePointerListLIFORoot<64,1>::Pop
                        ((FLockFreePointerListLIFORoot<64,1> *)&FD3D12SyncPoint::MemoryPool);
      aVar6 = aVar9;
      if (uVar5 != 0) {
        aVar6 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar5 >> 0xe][uVar5 & 0x3fff].Payload;
        FLockFreeLinkPolicy::FreeLockFreeLink(uVar5);
      }
      if ((aVar6 == (atomic<void_*>)0x0) &&
         (aVar6 = (atomic<void_*>)FMemory::Malloc(0x38,8), aVar6 == (atomic<void_*>)0x0)) {
        piVar8 = (int *)&DAT_00000008;
        aVar6 = aVar9;
      }
      else {
        *(undefined ***)aVar6 = &___7FD3D12SyncPoint__6B_;
        *(wchar_t **)((longlong)aVar6 + 0x30) = L"RHICrossGPUTransferSignal";
        piVar8 = (int *)((longlong)aVar6 + 8);
        *(undefined4 *)((longlong)aVar6 + 8) = 0;
        *(undefined1 *)((longlong)aVar6 + 0x20) = 0;
        *(undefined8 *)((longlong)aVar6 + 0x28) = 0;
        LOCK();
        *piVar8 = *piVar8 + 1;
        UNLOCK();
      }
      FMemScope::~FMemScope(&local_res20);
      FLLMScope::~FLLMScope(local_res18);
      LOCK();
      *piVar8 = *piVar8 + 1;
      UNLOCK();
      FD3D12ContextCommon::SignalSyncPoint
                ((FD3D12ContextCommon *)(this->PhysicalContexts).Elements[pFVar4->SignalGPUIndex],
                 (FD3D12SyncPoint *)aVar6);
      pFVar4->SyncPoint = (void *)aVar6;
      if (aVar6 != (atomic<void_*>)0x0) {
        LOCK();
        iVar2 = *piVar8;
        *piVar8 = *piVar8 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          if (piVar8 == (int *)0x0) {
            aVar6 = aVar9;
          }
          if (aVar6 != (atomic<void_*>)0x0) {
            (*(code *)**(undefined8 **)aVar6)(aVar6,1);
          }
        }
      }
      ppFVar7 = ppFVar7 + 1;
    } while (ppFVar7 != ppFVar1);
  }
  return;
}

// RHICrossGPUTransferWait @ 1459cc990

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHICrossGPUTransferWait
          (FD3D12CommandContextRedirector *this,
          TArrayView<FCrossGPUTransferFence_*_const,int> *param_1)

{
  longlong *plVar1;
  FCrossGPUTransferFence **ppFVar2;
  FCrossGPUTransferFence *pFVar3;
  FD3D12SyncPoint *pFVar4;
  longlong lVar5;
  FCrossGPUTransferFence **ppFVar6;
  
  ppFVar6 = param_1->DataPtr;
  ppFVar2 = ppFVar6 + param_1->ArrayNum;
  for (; ppFVar6 != ppFVar2; ppFVar6 = ppFVar6 + 1) {
    pFVar3 = *ppFVar6;
    pFVar4 = pFVar3->SyncPoint;
    if (pFVar4 != (FD3D12SyncPoint *)0x0) {
      FD3D12ContextCommon::WaitSyncPoint
                ((FD3D12ContextCommon *)(this->PhysicalContexts).Elements[pFVar3->WaitGPUIndex],
                 pFVar4);
      plVar1 = &pFVar4->_padding_;
      LOCK();
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar4->_padding_)(pFVar4,1);
      }
    }
    ::operator_delete(pFVar3,0x10);
  }
  return;
}

// RHIDispatchComputeShader @ 1459ccb00

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHIDispatchComputeShader
          (FD3D12CommandContextRedirector *this,uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = (uint)this->_padding_;
  uVar1 = 0;
  bVar3 = uVar2 != 0;
  if (bVar3) {
    for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  while (bVar3) {
    FD3D12CommandContext::RHIDispatchComputeShader
              ((FD3D12CommandContext *)&(this->PhysicalContexts).Elements[uVar1]->field_0x1c0,
               param_1,param_2,param_3);
    uVar2 = uVar2 & ~(1 << ((byte)uVar1 & 0x1f));
    uVar1 = 0;
    bVar3 = uVar2 != 0;
    if (bVar3) {
      for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  return;
}

// RHIDispatchIndirectComputeShader @ 1459cd440

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHIDispatchIndirectComputeShader
          (FD3D12CommandContextRedirector *this,FRHIBuffer *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = (uint)this->_padding_;
  uVar1 = 0;
  bVar3 = uVar2 != 0;
  if (bVar3) {
    for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  while (bVar3) {
    FD3D12CommandContext::RHIDispatchIndirectComputeShader
              ((FD3D12CommandContext *)&(this->PhysicalContexts).Elements[uVar1]->field_0x1c0,
               param_1,param_2);
    uVar2 = uVar2 & ~(1 << ((byte)uVar1 & 0x1f));
    uVar1 = 0;
    bVar3 = uVar2 != 0;
    if (bVar3) {
      for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  return;
}

// RHIDispatchIndirectMeshShader @ 1459cd730

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHIDispatchIndirectMeshShader
          (FD3D12CommandContextRedirector *this,FRHIBuffer *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = (uint)this->_padding_;
  uVar1 = 0;
  bVar3 = uVar2 != 0;
  if (bVar3) {
    for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  while (bVar3) {
    FD3D12CommandContext::RHIDispatchIndirectMeshShader
              ((FD3D12CommandContext *)&(this->PhysicalContexts).Elements[uVar1]->field_0x1c0,
               param_1,param_2);
    uVar2 = uVar2 & ~(1 << ((byte)uVar1 & 0x1f));
    uVar1 = 0;
    bVar3 = uVar2 != 0;
    if (bVar3) {
      for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  return;
}

// RHIDispatchMeshShader @ 1459cd960

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHIDispatchMeshShader
          (FD3D12CommandContextRedirector *this,uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = (uint)this->_padding_;
  uVar1 = 0;
  bVar3 = uVar2 != 0;
  if (bVar3) {
    for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  while (bVar3) {
    FD3D12CommandContext::RHIDispatchMeshShader
              ((FD3D12CommandContext *)&(this->PhysicalContexts).Elements[uVar1]->field_0x1c0,
               param_1,param_2,param_3);
    uVar2 = uVar2 & ~(1 << ((byte)uVar1 & 0x1f));
    uVar1 = 0;
    bVar3 = uVar2 != 0;
    if (bVar3) {
      for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  return;
}

// RHIDrawIndexedIndirect @ 1459cdc60

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHIDrawIndexedIndirect
          (FD3D12CommandContextRedirector *this,FRHIBuffer *param_1,FRHIBuffer *param_2,int param_3,
          uint param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = (uint)this->_padding_;
  uVar1 = 0;
  bVar3 = uVar2 != 0;
  if (bVar3) {
    for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  while (bVar3) {
    FD3D12CommandContext::RHIDrawIndexedIndirect
              ((FD3D12CommandContext *)&(this->PhysicalContexts).Elements[uVar1]->field_0x1c0,
               param_1,param_2,param_3,param_4);
    uVar2 = uVar2 & ~(1 << ((byte)uVar1 & 0x1f));
    uVar1 = 0;
    bVar3 = uVar2 != 0;
    if (bVar3) {
      for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  return;
}

// RHIDrawIndexedPrimitive @ 1459ce0c0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHIDrawIndexedPrimitive
          (FD3D12CommandContextRedirector *this,FRHIBuffer *param_1,int param_2,uint param_3,
          uint param_4,uint param_5,uint param_6,uint param_7)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = (uint)this->_padding_;
  uVar1 = 0;
  bVar3 = uVar2 != 0;
  if (bVar3) {
    for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  while (bVar3) {
    FD3D12CommandContext::RHIDrawIndexedPrimitive
              ((FD3D12CommandContext *)&(this->PhysicalContexts).Elements[uVar1]->field_0x1c0,
               param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    uVar2 = uVar2 & ~(1 << ((byte)uVar1 & 0x1f));
    uVar1 = 0;
    bVar3 = uVar2 != 0;
    if (bVar3) {
      for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  return;
}

// RHIDrawIndexedPrimitiveIndirect @ 1459ce1e0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHIDrawIndexedPrimitiveIndirect
          (FD3D12CommandContextRedirector *this,FRHIBuffer *param_1,FRHIBuffer *param_2,uint param_3
          )

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = (uint)this->_padding_;
  uVar1 = 0;
  bVar3 = uVar2 != 0;
  if (bVar3) {
    for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  while (bVar3) {
    FD3D12CommandContext::RHIMultiDrawIndexedPrimitiveIndirect
              ((FD3D12CommandContext *)&(this->PhysicalContexts).Elements[uVar1]->field_0x1c0,
               param_1,param_2,param_3,(FRHIBuffer *)0x0,0,1);
    uVar2 = uVar2 & ~(1 << ((byte)uVar1 & 0x1f));
    uVar1 = 0;
    bVar3 = uVar2 != 0;
    if (bVar3) {
      for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  return;
}

// RHIDrawPrimitive @ 1459ce510

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHIDrawPrimitive
          (FD3D12CommandContextRedirector *this,uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = (uint)this->_padding_;
  uVar1 = 0;
  bVar3 = uVar2 != 0;
  if (bVar3) {
    for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  while (bVar3) {
    FD3D12CommandContext::RHIDrawPrimitive
              ((FD3D12CommandContext *)&(this->PhysicalContexts).Elements[uVar1]->field_0x1c0,
               param_1,param_2,param_3);
    uVar2 = uVar2 & ~(1 << ((byte)uVar1 & 0x1f));
    uVar1 = 0;
    bVar3 = uVar2 != 0;
    if (bVar3) {
      for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  return;
}

// RHIDrawPrimitiveIndirect @ 1459ce820

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHIDrawPrimitiveIndirect
          (FD3D12CommandContextRedirector *this,FRHIBuffer *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = (uint)this->_padding_;
  uVar1 = 0;
  bVar3 = uVar2 != 0;
  if (bVar3) {
    for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  while (bVar3) {
    FD3D12CommandContext::RHIDrawPrimitiveIndirect
              ((FD3D12CommandContext *)&(this->PhysicalContexts).Elements[uVar1]->field_0x1c0,
               param_1,param_2);
    uVar2 = uVar2 & ~(1 << ((byte)uVar1 & 0x1f));
    uVar1 = 0;
    bVar3 = uVar2 != 0;
    if (bVar3) {
      for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  return;
}

// RHIEndBreadcrumbGPU @ 1459ceb80

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHIEndBreadcrumbGPU
          (FD3D12CommandContextRedirector *this,FRHIBreadcrumbNode *param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = *(uint *)((longlong)&this->_padding_ + 4);
  uVar1 = 0;
  bVar3 = uVar2 != 0;
  if (bVar3) {
    for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  while (bVar3) {
    FD3D12CommandContext::RHIEndBreadcrumbGPU
              ((FD3D12CommandContext *)&(this->PhysicalContexts).Elements[uVar1]->field_0x1c0,
               param_1);
    uVar2 = uVar2 & ~(1 << ((byte)uVar1 & 0x1f));
    uVar1 = 0;
    bVar3 = uVar2 != 0;
    if (bVar3) {
      for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  return;
}

// RHIEndRenderPass @ 1459cec50

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHIEndRenderPass(FD3D12CommandContextRedirector *this)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = (uint)this->_padding_;
  uVar1 = 0;
  bVar3 = uVar2 != 0;
  if (bVar3) {
    for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  while (bVar3) {
    (**(code **)(*(longlong *)&(this->PhysicalContexts).Elements[uVar1]->field_0x1c0 + 0x250))();
    uVar2 = uVar2 & ~(1 << ((byte)uVar1 & 0x1f));
    uVar1 = 0;
    bVar3 = uVar2 != 0;
    if (bVar3) {
      for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  return;
}

// RHIEndRenderQuery @ 1459cecd0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHIEndRenderQuery
          (FD3D12CommandContextRedirector *this,FRHIRenderQuery *param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = (uint)this->_padding_;
  uVar1 = 0;
  bVar3 = uVar2 != 0;
  if (bVar3) {
    for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  while (bVar3) {
    FD3D12CommandContext::RHIEndRenderQuery
              ((FD3D12CommandContext *)&(this->PhysicalContexts).Elements[uVar1]->field_0x1c0,
               param_1);
    uVar2 = uVar2 & ~(1 << ((byte)uVar1 & 0x1f));
    uVar1 = 0;
    bVar3 = uVar2 != 0;
    if (bVar3) {
      for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  return;
}

// RHIEndTransitions @ 1459ced80

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHIEndTransitions
          (FD3D12CommandContextRedirector *this,TArrayView<FRHITransition_const_*,int> *param_1)

{
  FD3D12CommandContext *pFVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  uVar4 = (uint)this->_padding_;
  uVar3 = 0;
  bVar5 = uVar4 != 0;
  if (bVar5) {
    for (; (uVar4 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
    }
  }
  while (bVar5) {
    pFVar1 = (this->PhysicalContexts).Elements[uVar3];
    local_18 = *(undefined4 *)&param_1->DataPtr;
    uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
    iStack_10 = param_1->ArrayNum;
    uStack_c = *(undefined4 *)&param_1->field_0xc;
    plVar2 = *(longlong **)&pFVar1->field_0x1b8;
    (**(code **)(*plVar2 + 0x10))(plVar2,pFVar1,&local_18);
    uVar4 = uVar4 & ~(1 << ((byte)uVar3 & 0x1f));
    uVar3 = 0;
    bVar5 = uVar4 != 0;
    if (bVar5) {
      for (; (uVar4 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
      }
    }
  }
  return;
}

// RHIExecuteMultiIndirectClusterOperation @ 1459cee10

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHIExecuteMultiIndirectClusterOperation
          (FD3D12CommandContextRedirector *this,FRayTracingClusterOperationParams *param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = (uint)this->_padding_;
  uVar1 = 0;
  bVar3 = uVar2 != 0;
  if (bVar3) {
    for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  while (bVar3) {
    FD3D12CommandContext::RHIExecuteMultiIndirectClusterOperation
              ((FD3D12CommandContext *)&(this->PhysicalContexts).Elements[uVar1]->field_0x1c0,
               param_1);
    uVar2 = uVar2 & ~(1 << ((byte)uVar1 & 0x1f));
    uVar1 = 0;
    bVar3 = uVar2 != 0;
    if (bVar3) {
      for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  return;
}

// RHIGetGPUMask @ 1459cf230

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FRHIGPUMask __thiscall
FD3D12CommandContextRedirector::RHIGetGPUMask(FD3D12CommandContextRedirector *this)

{
  undefined4 *in_RDX;
  
  *in_RDX = (int)this->_padding_;
  return (FRHIGPUMask)(uint)in_RDX;
}

// RHIMultiDrawIndexedPrimitiveIndirect @ 1459cf830

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHIMultiDrawIndexedPrimitiveIndirect
          (FD3D12CommandContextRedirector *this,FRHIBuffer *param_1,FRHIBuffer *param_2,uint param_3
          ,FRHIBuffer *param_4,uint param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = (uint)this->_padding_;
  uVar1 = 0;
  bVar3 = uVar2 != 0;
  if (bVar3) {
    for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  while (bVar3) {
    FD3D12CommandContext::RHIMultiDrawIndexedPrimitiveIndirect
              ((FD3D12CommandContext *)&(this->PhysicalContexts).Elements[uVar1]->field_0x1c0,
               param_1,param_2,param_3,param_4,param_5,param_6);
    uVar2 = uVar2 & ~(1 << ((byte)uVar1 & 0x1f));
    uVar1 = 0;
    bVar3 = uVar2 != 0;
    if (bVar3) {
      for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  return;
}

// RHIRayTraceDispatch @ 1459cf900

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHIRayTraceDispatch
          (FD3D12CommandContextRedirector *this,FRHIRayTracingPipelineState *param_1,
          FRHIRayTracingShader *param_2,FRHIShaderBindingTable *param_3,
          FRayTracingShaderBindings *param_4,uint param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = (uint)this->_padding_;
  uVar1 = 0;
  bVar3 = uVar2 != 0;
  if (bVar3) {
    for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  while (bVar3) {
    FD3D12CommandContext::RHIRayTraceDispatch
              ((FD3D12CommandContext *)&(this->PhysicalContexts).Elements[uVar1]->field_0x1c0,
               param_1,param_2,param_3,param_4,param_5,param_6);
    uVar2 = uVar2 & ~(1 << ((byte)uVar1 & 0x1f));
    uVar1 = 0;
    bVar3 = uVar2 != 0;
    if (bVar3) {
      for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  return;
}

// RHIRayTraceDispatchIndirect @ 1459cf9d0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHIRayTraceDispatchIndirect
          (FD3D12CommandContextRedirector *this,FRHIRayTracingPipelineState *param_1,
          FRHIRayTracingShader *param_2,FRHIShaderBindingTable *param_3,
          FRayTracingShaderBindings *param_4,FRHIBuffer *param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = (uint)this->_padding_;
  uVar1 = 0;
  bVar3 = uVar2 != 0;
  if (bVar3) {
    for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  while (bVar3) {
    FD3D12CommandContext::RHIRayTraceDispatchIndirect
              ((FD3D12CommandContext *)&(this->PhysicalContexts).Elements[uVar1]->field_0x1c0,
               param_1,param_2,param_3,param_4,param_5,param_6);
    uVar2 = uVar2 & ~(1 << ((byte)uVar1 & 0x1f));
    uVar1 = 0;
    bVar3 = uVar2 != 0;
    if (bVar3) {
      for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  return;
}

// RHISetBindingsOnShaderBindingTable @ 1459cfb10

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHISetBindingsOnShaderBindingTable
          (FD3D12CommandContextRedirector *this,FRHIShaderBindingTable *param_1,
          FRHIRayTracingPipelineState *param_2,uint param_3,FRayTracingLocalShaderBindings *param_4,
          ERayTracingBindingType param_5)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = (uint)this->_padding_;
  uVar1 = 0;
  bVar3 = uVar2 != 0;
  if (bVar3) {
    for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  while (bVar3) {
    FD3D12CommandContext::RHISetBindingsOnShaderBindingTable
              ((FD3D12CommandContext *)&(this->PhysicalContexts).Elements[uVar1]->field_0x1c0,
               param_1,param_2,param_3,param_4,param_5);
    uVar2 = uVar2 & ~(1 << ((byte)uVar1 & 0x1f));
    uVar1 = 0;
    bVar3 = uVar2 != 0;
    if (bVar3) {
      for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  return;
}

// RHISetBlendFactor @ 1459cfbf0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHISetBlendFactor
          (FD3D12CommandContextRedirector *this,FLinearColor *param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = (uint)this->_padding_;
  uVar1 = 0;
  bVar3 = uVar2 != 0;
  if (bVar3) {
    for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  while (bVar3) {
    FD3D12StateCache::SetBlendFactor
              (&(this->PhysicalContexts).Elements[uVar1]->StateCache,(float *)param_1);
    uVar2 = uVar2 & ~(1 << ((byte)uVar1 & 0x1f));
    uVar1 = 0;
    bVar3 = uVar2 != 0;
    if (bVar3) {
      for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  return;
}

// RHISetComputePipelineState @ 1459cfd40

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHISetComputePipelineState
          (FD3D12CommandContextRedirector *this,FRHIComputePipelineState *param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = (uint)this->_padding_;
  uVar1 = 0;
  bVar3 = uVar2 != 0;
  if (bVar3) {
    for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  while (bVar3) {
    FD3D12CommandContext::RHISetComputePipelineState
              ((FD3D12CommandContext *)&(this->PhysicalContexts).Elements[uVar1]->field_0x1c0,
               param_1);
    uVar2 = uVar2 & ~(1 << ((byte)uVar1 & 0x1f));
    uVar1 = 0;
    bVar3 = uVar2 != 0;
    if (bVar3) {
      for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  return;
}

// RHISetDepthBounds @ 1459cfe00

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHISetDepthBounds
          (FD3D12CommandContextRedirector *this,float param_1,float param_2)

{
  FD3D12CommandContext *pFVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = (uint)this->_padding_;
  uVar2 = 0;
  bVar4 = uVar3 != 0;
  if (bVar4) {
    for (; (uVar3 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
    }
  }
  while (bVar4) {
    pFVar1 = (this->PhysicalContexts).Elements[uVar2];
    if ((param_1 != (pFVar1->StateCache).PipelineState.Graphics.MinDepth) ||
       (param_2 != (pFVar1->StateCache).PipelineState.Graphics.MaxDepth)) {
      (pFVar1->StateCache).PipelineState.Graphics.MinDepth = param_1;
      (pFVar1->StateCache).PipelineState.Graphics.MaxDepth = param_2;
      (pFVar1->StateCache).bNeedSetDepthBounds = GRHIGlobals.SupportsDepthBoundsTest;
    }
    uVar3 = uVar3 & ~(1 << ((byte)uVar2 & 0x1f));
    uVar2 = 0;
    bVar4 = uVar3 != 0;
    if (bVar4) {
      for (; (uVar3 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
  }
  return;
}

// RHISetGPUMask @ 1459cfed0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHISetGPUMask
          (FD3D12CommandContextRedirector *this,FRHIGPUMask param_1)

{
  code *pcVar1;
  bool bVar2;
  
  *(uint *)&this->_padding_ = param_1.GPUMask;
  if ((*(uint *)((longlong)&this->_padding_ + 4) & param_1.GPUMask) != param_1.GPUMask) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PhysicalGPUMask.ContainsAll(GPUMask)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                       ,0x47f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// RHISetGraphicsPipelineState @ 1459d01d0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHISetGraphicsPipelineState
          (FD3D12CommandContextRedirector *this,FRHIGraphicsPipelineState *param_1,uint param_2,
          bool param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = (uint)this->_padding_;
  uVar1 = 0;
  bVar3 = uVar2 != 0;
  if (bVar3) {
    for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  while (bVar3) {
    FD3D12CommandContext::RHISetGraphicsPipelineState
              ((FD3D12CommandContext *)&(this->PhysicalContexts).Elements[uVar1]->field_0x1c0,
               param_1,param_2,param_3);
    uVar2 = uVar2 & ~(1 << ((byte)uVar1 & 0x1f));
    uVar1 = 0;
    bVar3 = uVar2 != 0;
    if (bVar3) {
      for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  return;
}

// RHISetMultipleViewports @ 1459d0270

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHISetMultipleViewports
          (FD3D12CommandContextRedirector *this,uint param_1,FViewportBounds *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = (uint)this->_padding_;
  uVar1 = 0;
  bVar3 = uVar2 != 0;
  if (bVar3) {
    for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  while (bVar3) {
    FD3D12CommandContext::RHISetMultipleViewports
              ((FD3D12CommandContext *)&(this->PhysicalContexts).Elements[uVar1]->field_0x1c0,
               param_1,param_2);
    uVar2 = uVar2 & ~(1 << ((byte)uVar1 & 0x1f));
    uVar1 = 0;
    bVar3 = uVar2 != 0;
    if (bVar3) {
      for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  return;
}

// RHISetScissorRect @ 1459d0390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHISetScissorRect
          (FD3D12CommandContextRedirector *this,bool param_1,uint param_2,uint param_3,uint param_4,
          uint param_5)

{
  FD3D12CommandContext *pFVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined1 auStack_78 [40];
  tagRECT local_50;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_78;
  uVar3 = (uint)this->_padding_;
  uVar2 = 0;
  bVar4 = uVar3 != 0;
  if (bVar4) {
    for (; (uVar3 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
    }
  }
  while (bVar4) {
    pFVar1 = (this->PhysicalContexts).Elements[uVar2];
    if (param_1) {
      local_50.right = param_4;
      local_50.bottom = param_5;
      local_50.left = param_2;
      local_50.top = param_3;
    }
    else {
      local_50.left = (long)(pFVar1->StateCache).PipelineState.Graphics.CurrentViewport[0].TopLeftX;
      local_50.top = (long)(pFVar1->StateCache).PipelineState.Graphics.CurrentViewport[0].TopLeftY;
      local_50.right =
           (int)(pFVar1->StateCache).PipelineState.Graphics.CurrentViewport[0].Width + local_50.left
      ;
      local_50.bottom =
           (int)(pFVar1->StateCache).PipelineState.Graphics.CurrentViewport[0].Height + local_50.top
      ;
    }
    if (local_50.left < 0) {
      local_50.left = 0;
    }
    if (local_50.top < 0) {
      local_50.top = 0;
    }
    FD3D12StateCache::SetScissorRect(&pFVar1->StateCache,&local_50);
    uVar3 = uVar3 & ~(1 << ((byte)uVar2 & 0x1f));
    uVar2 = 0;
    bVar4 = uVar3 != 0;
    if (bVar4) {
      for (; (uVar3 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
  }
  return;
}

// RHISetShaderParameters @ 1459d0660

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
FD3D12CommandContextRedirector::RHISetShaderParameters
          (FD3D12CommandContextRedirector *this,FRHIComputeShader *param_1,
          TArrayView<unsigned_char_const_,int> *param_2,
          TArrayView<FRHIShaderParameter_const_,int> *param_3,
          TArrayView<FRHIShaderParameterResource_const_,int> *param_4,
          TArrayView<FRHIShaderParameterResource_const_,int> *param_5)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  TArrayView<FRHIShaderParameterResource_const_,int> local_68;
  TArrayView<FRHIShaderParameterResource_const_,int> local_58;
  TArrayView<FRHIShaderParameter_const_,int> local_48;
  TArrayView<unsigned_char_const_,int> local_38;
  
  uVar2 = (uint)this->_padding_;
  uVar1 = 0;
  bVar3 = uVar2 != 0;
  if (bVar3) {
    for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  while (bVar3) {
    local_68.DataPtr = param_5->DataPtr;
    local_68.ArrayNum = param_5->ArrayNum;
    local_68._12_4_ = *(undefined4 *)&param_5->field_0xc;
    local_58.DataPtr = param_4->DataPtr;
    local_58.ArrayNum = param_4->ArrayNum;
    local_58._12_4_ = *(undefined4 *)&param_4->field_0xc;
    local_48.DataPtr = param_3->DataPtr;
    local_48.ArrayNum = param_3->ArrayNum;
    local_48._12_4_ = *(undefined4 *)&param_3->field_0xc;
    local_38.DataPtr = param_2->DataPtr;
    local_38.ArrayNum = param_2->ArrayNum;
    local_38._12_4_ = *(undefined4 *)&param_2->field_0xc;
    SetShaderParametersOnContext
              ((this->PhysicalContexts).Elements[uVar1],(FRHIShader *)param_1,SF_Compute,&local_38,
               &local_48,&local_58,&local_68);
    uVar2 = uVar2 & ~(1 << ((byte)uVar1 & 0x1f));
    uVar1 = 0;
    bVar3 = uVar2 != 0;
    if (bVar3) {
      for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  return;
}

// RHISetShaderParameters @ 1459d0760

/* WARNING: Removing unreachable block (ram,0x0001459d0795) */
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
FD3D12CommandContextRedirector::RHISetShaderParameters
          (FD3D12CommandContextRedirector *this,FRHIGraphicsShader *param_1,
          TArrayView<unsigned_char_const_,int> *param_2,
          TArrayView<FRHIShaderParameter_const_,int> *param_3,
          TArrayView<FRHIShaderParameterResource_const_,int> *param_4,
          TArrayView<FRHIShaderParameterResource_const_,int> *param_5)

{
  EShaderFrequency EVar1;
  FD3D12CommandContext *pFVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  TArrayView<FRHIShaderParameterResource_const_,int> local_78;
  TArrayView<FRHIShaderParameterResource_const_,int> local_68;
  TArrayView<FRHIShaderParameter_const_,int> local_58;
  TArrayView<unsigned_char_const_,int> local_48;
  
  uVar5 = (uint)this->_padding_;
  uVar3 = 0;
  bVar6 = uVar5 != 0;
  if (bVar6) {
    for (; (uVar5 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
    }
  }
  do {
    if (!bVar6) {
      return;
    }
    EVar1 = param_1->field_0x104;
    pFVar2 = (this->PhysicalContexts).Elements[uVar3];
    if ((((EVar1 == SF_Vertex) || (EVar1 == SF_Mesh)) || (EVar1 == SF_Amplification)) ||
       ((EVar1 == SF_Pixel || (EVar1 == SF_Geometry)))) {
      ValidateBoundShader(&pFVar2->StateCache,(FRHIShader *)param_1);
      local_78.DataPtr = param_5->DataPtr;
      local_78.ArrayNum = param_5->ArrayNum;
      local_78._12_4_ = *(undefined4 *)&param_5->field_0xc;
      local_68.DataPtr = param_4->DataPtr;
      local_68.ArrayNum = param_4->ArrayNum;
      local_68._12_4_ = *(undefined4 *)&param_4->field_0xc;
      local_58.DataPtr = param_3->DataPtr;
      local_58.ArrayNum = param_3->ArrayNum;
      local_58._12_4_ = *(undefined4 *)&param_3->field_0xc;
      local_48.DataPtr = param_2->DataPtr;
      local_48.ArrayNum = param_2->ArrayNum;
      local_48._12_4_ = *(undefined4 *)&param_2->field_0xc;
      SetShaderParametersOnContext
                (pFVar2,(FRHIShader *)param_1,EVar1,&local_48,&local_58,&local_68,&local_78);
    }
    else {
      GetShaderFrequencyString(EVar1,false);
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Commands.cpp"
                         ,0x2d4,L"Unsupported FRHIGraphicsShader Type \'%s\'!");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar5 = uVar5 & ~(1 << ((byte)uVar3 & 0x1f));
    uVar3 = 0;
    bVar6 = uVar5 != 0;
    if (bVar6) {
      for (; (uVar5 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
      }
    }
  } while( true );
}

// RHISetShaderRootConstants @ 1459d0930

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHISetShaderRootConstants
          (FD3D12CommandContextRedirector *this,TIntVector4<unsigned_int> *param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = (uint)this->_padding_;
  uVar1 = 0;
  bVar4 = uVar3 != 0;
  if (bVar4) {
    for (; (uVar3 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  while (bVar4) {
    puVar2 = &(this->PhysicalContexts).Elements[uVar1]->field_0x1c0;
    (**(code **)(*(longlong *)puVar2 + 0x68))(puVar2,param_1);
    uVar3 = uVar3 & ~(1 << ((byte)uVar1 & 0x1f));
    uVar1 = 0;
    bVar4 = uVar3 != 0;
    if (bVar4) {
      for (; (uVar3 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  return;
}

// RHISetShaderUnbinds @ 1459d0b40

/* WARNING: Removing unreachable block (ram,0x0001459d0b6d) */
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
FD3D12CommandContextRedirector::RHISetShaderUnbinds
          (FD3D12CommandContextRedirector *this,FRHIComputeShader *param_1,
          TArrayView<FRHIShaderParameterUnbind_const_,int> *param_2)

{
  FRHIShaderParameterUnbind *pFVar1;
  FD3D12CommandContext *pFVar2;
  uint uVar3;
  code *pcVar4;
  FRHIShaderParameterUnbind *pFVar5;
  uint uVar6;
  bool bVar7;
  
  uVar6 = (uint)this->_padding_;
  uVar3 = 0;
  bVar7 = uVar6 != 0;
  if (bVar7) {
    for (; (uVar6 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
    }
  }
  do {
    if (!bVar7) {
      return;
    }
    pFVar5 = param_2->DataPtr;
    pFVar2 = (this->PhysicalContexts).Elements[uVar3];
    pFVar1 = pFVar5 + (int)*(undefined8 *)&param_2->ArrayNum;
    for (; pFVar5 != pFVar1; pFVar5 = pFVar5 + 1) {
      if (pFVar5->Type == ResourceView) {
        FD3D12StateCache::SetShaderResourceView
                  (&pFVar2->StateCache,SF_Compute,(FD3D12ShaderResourceView *)0x0,
                   (uint)pFVar5->Index);
      }
      else if (pFVar5->Type == UnorderedAccessView) {
        FD3D12StateCache::SetUAV
                  (&pFVar2->StateCache,SF_Compute,(uint)pFVar5->Index,
                   (FD3D12UnorderedAccessView *)0x0,0xffffffff);
      }
      else {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Commands.cpp"
                           ,0x2ff,L"Unhandled resource type?");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    uVar6 = uVar6 & ~(1 << ((byte)uVar3 & 0x1f));
    uVar3 = 0;
    bVar7 = uVar6 != 0;
    if (bVar7) {
      for (; (uVar6 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
      }
    }
  } while( true );
}

// RHISetShaderUnbinds @ 1459d0c80

/* WARNING: Removing unreachable block (ram,0x0001459d0caf) */
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
FD3D12CommandContextRedirector::RHISetShaderUnbinds
          (FD3D12CommandContextRedirector *this,FRHIGraphicsShader *param_1,
          TArrayView<FRHIShaderParameterUnbind_const_,int> *param_2)

{
  EShaderFrequency EVar1;
  FD3D12CommandContext *pFVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  TArrayView<FRHIShaderParameterUnbind_const_,int> local_38;
  
  uVar5 = (uint)this->_padding_;
  uVar3 = 0;
  bVar6 = uVar5 != 0;
  if (bVar6) {
    for (; (uVar5 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
    }
  }
  do {
    if (!bVar6) {
      return;
    }
    EVar1 = param_1->field_0x104;
    pFVar2 = (this->PhysicalContexts).Elements[uVar3];
    if ((((EVar1 == SF_Vertex) || (EVar1 == SF_Mesh)) || (EVar1 == SF_Amplification)) ||
       ((EVar1 == SF_Pixel || (EVar1 == SF_Geometry)))) {
      ValidateBoundShader(&pFVar2->StateCache,(FRHIShader *)param_1);
      local_38.DataPtr = param_2->DataPtr;
      local_38.ArrayNum = param_2->ArrayNum;
      local_38._12_4_ = *(undefined4 *)&param_2->field_0xc;
      SetShaderUnbindsOnContext(pFVar2,(FRHIShader *)param_1,EVar1,&local_38);
    }
    else {
      GetShaderFrequencyString(EVar1,false);
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Commands.cpp"
                         ,0x310,L"Unsupported FRHIGraphicsShader Type \'%s\'!");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar5 = uVar5 & ~(1 << ((byte)uVar3 & 0x1f));
    uVar3 = 0;
    bVar6 = uVar5 != 0;
    if (bVar6) {
      for (; (uVar5 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
      }
    }
  } while( true );
}

// RHISetShadingRate @ 1459d0e00

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHISetShadingRate
          (FD3D12CommandContextRedirector *this,EVRSShadingRate param_1,EVRSRateCombiner param_2)

{
  FD3D12CommandContext *pFVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = (uint)this->_padding_;
  uVar2 = 0;
  bVar4 = uVar3 != 0;
  if (bVar4) {
    for (; (uVar3 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
    }
  }
  while (bVar4) {
    if ((GRHIGlobals.VariableRateShading.SupportsPipeline != false) &&
       (((pFVar1 = (this->PhysicalContexts).Elements[uVar2],
         (pFVar1->StateCache).PipelineState.Graphics.DrawShadingRate != param_1 ||
         ((pFVar1->StateCache).PipelineState.Graphics.Combiners.Elements[0] != param_2)) ||
        (*(EVRSRateCombiner *)
          ((longlong)(pFVar1->StateCache).PipelineState.Graphics.Combiners.Elements + 1) !=
         VRSRB_Max)))) {
      (pFVar1->StateCache).PipelineState.Graphics.DrawShadingRate = param_1;
      (pFVar1->StateCache).PipelineState.Graphics.Combiners.Elements[0] = param_2;
      *(EVRSRateCombiner *)
       ((longlong)(pFVar1->StateCache).PipelineState.Graphics.Combiners.Elements + 1) = VRSRB_Max;
      (pFVar1->StateCache).bNeedSetShadingRate = GRHIGlobals.VariableRateShading.SupportsPipeline;
    }
    uVar3 = uVar3 & ~(1 << ((byte)uVar2 & 0x1f));
    uVar2 = 0;
    bVar4 = uVar3 != 0;
    if (bVar4) {
      for (; (uVar3 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
  }
  return;
}

// RHISetStaticUniformBuffer @ 1459d0f20

/* WARNING: Removing unreachable block (ram,0x0001459d0f49) */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHISetStaticUniformBuffer
          (FD3D12CommandContextRedirector *this,uchar param_1,FRHIUniformBuffer *param_2)

{
  FD3D12CommandContext *pFVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  uVar5 = (uint)this->_padding_;
  uVar2 = 0;
  if (uVar5 != 0) {
    for (; (uVar5 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
    }
  }
  if (uVar5 != 0) {
    do {
      pFVar1 = (this->PhysicalContexts).Elements[uVar2];
      if (((pFVar1->StaticUniformBuffers).ArrayNum <= (int)(uint)param_1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(FRHIUniformBuffer **)
       ((pFVar1->StaticUniformBuffers).AllocatorInstance.Data + (ulonglong)param_1 * 8) = param_2;
      uVar5 = uVar5 & ~(1 << ((byte)uVar2 & 0x1f));
      uVar2 = 0;
      if (uVar5 != 0) {
        for (; (uVar5 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
        }
      }
    } while (uVar5 != 0);
  }
  return;
}

// RHISetStaticUniformBuffers @ 1459d1340

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHISetStaticUniformBuffers
          (FD3D12CommandContextRedirector *this,FUniformBufferStaticBindings *param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = (uint)this->_padding_;
  uVar1 = 0;
  bVar3 = uVar2 != 0;
  if (bVar3) {
    for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  while (bVar3) {
    FD3D12CommandContext::RHISetStaticUniformBuffers
              ((FD3D12CommandContext *)&(this->PhysicalContexts).Elements[uVar1]->field_0x1c0,
               param_1);
    uVar2 = uVar2 & ~(1 << ((byte)uVar1 & 0x1f));
    uVar1 = 0;
    bVar3 = uVar2 != 0;
    if (bVar3) {
      for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  return;
}

// RHISetStencilRef @ 1459d13e0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHISetStencilRef(FD3D12CommandContextRedirector *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = (uint)this->_padding_;
  uVar1 = 0;
  bVar3 = uVar2 != 0;
  if (bVar3) {
    for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  while (bVar3) {
    FD3D12StateCache::SetStencilRef(&(this->PhysicalContexts).Elements[uVar1]->StateCache,param_1);
    uVar2 = uVar2 & ~(1 << ((byte)uVar1 & 0x1f));
    uVar1 = 0;
    bVar3 = uVar2 != 0;
    if (bVar3) {
      for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  return;
}

// RHISetStereoViewport @ 1459d1700

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHISetStereoViewport
          (FD3D12CommandContextRedirector *this,float param_1,float param_2,float param_3,
          float param_4,float param_5,float param_6,float param_7,float param_8,float param_9,
          float param_10)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = (uint)this->_padding_;
  uVar1 = 0;
  bVar4 = uVar3 != 0;
  if (bVar4) {
    for (; (uVar3 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  while (bVar4) {
    puVar2 = &(this->PhysicalContexts).Elements[uVar1]->field_0x1c0;
    (**(code **)(*(longlong *)puVar2 + 0x1a8))
              (puVar2,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               param_10);
    uVar3 = uVar3 & ~(1 << ((byte)uVar1 & 0x1f));
    uVar1 = 0;
    bVar4 = uVar3 != 0;
    if (bVar4) {
      for (; (uVar3 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  return;
}

// RHISetStreamSource @ 1459d1920

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHISetStreamSource
          (FD3D12CommandContextRedirector *this,uint param_1,FRHIBuffer *param_2,uint param_3)

{
  undefined1 *puVar1;
  FD3D12CommandContext *pFVar2;
  uint uVar3;
  ulonglong uVar4;
  FD3D12ResourceLocation *pFVar5;
  FD3D12StateCache *this_00;
  FD3D12ResourceLocation *pFVar6;
  ulonglong uVar7;
  uint uVar8;
  bool bVar9;
  
  uVar8 = (uint)this->_padding_;
  uVar3 = 0;
  if (uVar8 != 0) {
    for (; (uVar8 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
    }
  }
  uVar7 = 0x20;
  if (uVar8 != 0) {
    uVar7 = (ulonglong)uVar3;
  }
  if (uVar8 != 0) {
    while( true ) {
      pFVar2 = (this->PhysicalContexts).Elements[uVar7];
      puVar1 = &pFVar2->field_0x2f8;
      uVar3 = 0;
      bVar9 = *(int *)puVar1 != 0;
      if (bVar9) {
        for (; (*(uint *)puVar1 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
        }
      }
      pFVar5 = (FD3D12ResourceLocation *)0x0;
      if (param_2 != (FRHIBuffer *)0x0) {
        uVar4 = 0x20;
        if (bVar9) {
          uVar4 = (ulonglong)uVar3;
        }
        pFVar5 = (FD3D12ResourceLocation *)(&param_2[1]._padding_)[uVar4];
      }
      this_00 = &pFVar2->StateCache;
      pFVar6 = (FD3D12ResourceLocation *)
               &pFVar5[2].AllocatorData.PoolAllocatorPrivateData.PoolData.AliasAllocation;
      if (pFVar5 == (FD3D12ResourceLocation *)0x0) {
        pFVar6 = (FD3D12ResourceLocation *)0x0;
      }
      FD3D12StateCache::InternalSetStreamSource
                (this_00,pFVar6,param_1,
                 (uint)(this_00->PipelineState).Graphics.StreamStrides.Elements[param_1],param_3);
      uVar8 = uVar8 & ~(1 << ((byte)uVar7 & 0x1f));
      uVar3 = 0;
      if (uVar8 != 0) {
        for (; (uVar8 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
        }
      }
      if (uVar8 == 0) break;
      uVar7 = (ulonglong)uVar3;
    }
  }
  return;
}

// RHISetViewport @ 1459d1c00

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHISetViewport
          (FD3D12CommandContextRedirector *this,float param_1,float param_2,float param_3,
          float param_4,float param_5,float param_6)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = (uint)this->_padding_;
  uVar1 = 0;
  bVar3 = uVar2 != 0;
  if (bVar3) {
    for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  while (bVar3) {
    FD3D12CommandContext::RHISetViewport
              ((FD3D12CommandContext *)&(this->PhysicalContexts).Elements[uVar1]->field_0x1c0,
               param_1,param_2,param_3,param_4,param_5,param_6);
    uVar2 = uVar2 & ~(1 << ((byte)uVar1 & 0x1f));
    uVar1 = 0;
    bVar3 = uVar2 != 0;
    if (bVar3) {
      for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  return;
}

// RHITransferResourceSignal @ 1459d1d10

/* WARNING: Removing unreachable block (ram,0x0001459d1dc4) */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHITransferResourceSignal
          (FD3D12CommandContextRedirector *this,
          TArrayView<FTransferResourceFenceData_*_const,int> *param_1,FRHIGPUMask param_2)

{
  int iVar1;
  FTransferResourceFenceData *pFVar2;
  uint uVar3;
  code *pcVar4;
  void *pvVar5;
  bool bVar6;
  uint uVar7;
  atomic<void_*> aVar8;
  longlong lVar9;
  atomic<void_*> aVar10;
  int *piVar11;
  ulonglong uVar12;
  uint uVar13;
  FLLMScope local_res10 [2];
  FMemScope local_40;
  
  uVar12 = (ulonglong)param_2.GPUMask - ((ulonglong)(param_2.GPUMask >> 1) & 0x5555555555555555);
  uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
  if ((param_1->ArrayNum !=
       (uint)(byte)(((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("FenceDatas.Num() == SrcGPUMask.GetNumActive()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.cpp"
                         ,0x409,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pvVar5 = ThreadLocalStoragePointer;
  uVar13 = 0;
  uVar3 = 0;
  bVar6 = param_2.GPUMask != 0;
  if (bVar6) {
    for (; (param_2.GPUMask >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
    }
  }
  while( true ) {
    if (!bVar6) {
      return;
    }
    aVar10 = (atomic<void_*>)0x0;
    if ((*(int *)(*(longlong *)((longlong)pvVar5 + (ulonglong)_tls_index * 8) + 0x9d4c) <
         `public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
                      ::__l2::LLMScope_Name103,L"RHIMisc/CreateSyncPoint");
      _Init_thread_footer(&`public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    FLLMScope::FLLMScope
              (local_res10,
               `public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
               ::__l2::LLMScope_Name103,false,None,Default,true);
    FMemScope::FMemScope
              (&local_40,
               &`public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
                ::__l2::LLMScope_Name103,true);
    uVar7 = FLockFreePointerListLIFORoot<64,1>::Pop
                      ((FLockFreePointerListLIFORoot<64,1> *)&FD3D12SyncPoint::MemoryPool);
    aVar8 = aVar10;
    if (uVar7 != 0) {
      aVar8 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar7 >> 0xe][uVar7 & 0x3fff].Payload;
      FLockFreeLinkPolicy::FreeLockFreeLink(uVar7);
    }
    if ((aVar8 == (atomic<void_*>)0x0) &&
       (aVar8 = (atomic<void_*>)FMemory::Malloc(0x38,8), aVar8 == (atomic<void_*>)0x0)) {
      piVar11 = (int *)&DAT_00000008;
    }
    else {
      aVar10 = aVar8;
      *(undefined4 *)((longlong)aVar10 + 8) = 0;
      *(undefined8 *)((longlong)aVar10 + 0x28) = 0;
      piVar11 = (int *)((longlong)aVar10 + 8);
      *(wchar_t **)((longlong)aVar10 + 0x30) = L"TransferReourceSignal";
      *(undefined ***)aVar10 = &___7FD3D12SyncPoint__6B_;
      *(undefined1 *)((longlong)aVar10 + 0x20) = 0;
      LOCK();
      *piVar11 = *piVar11 + 1;
      UNLOCK();
    }
    FMemScope::~FMemScope(&local_40);
    FLLMScope::~FLLMScope(local_res10);
    LOCK();
    *piVar11 = *piVar11 + 1;
    UNLOCK();
    FD3D12ContextCommon::SignalSyncPoint
              ((FD3D12ContextCommon *)(this->PhysicalContexts).Elements[uVar3],
               (FD3D12SyncPoint *)aVar10);
    uVar7 = 0;
    if ((int)uVar13 < param_1->ArrayNum) {
      uVar7 = ~uVar13 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar6)) break;
    lVar9 = (longlong)(int)uVar13;
    uVar7 = 1 << ((byte)uVar3 & 0x1f);
    uVar13 = uVar13 + 1;
    pFVar2 = param_1->DataPtr[lVar9];
    (pFVar2->Mask).GPUMask = uVar7;
    *(atomic<void_*> *)((pFVar2->SyncPoints).Elements + uVar3) = aVar10;
    if (aVar10 != (atomic<void_*>)0x0) {
      LOCK();
      iVar1 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar1 == 1) {
        if (piVar11 == (int *)0x0) {
          aVar10 = (atomic<void_*>)0x0;
        }
        if (aVar10 != (atomic<void_*>)0x0) {
          (*(code *)**(undefined8 **)aVar10)(aVar10,1);
        }
      }
    }
    param_2.GPUMask = param_2.GPUMask & ~uVar7;
    uVar3 = 0;
    bVar6 = param_2.GPUMask != 0;
    if (bVar6) {
      for (; (param_2.GPUMask >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
      }
    }
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// RHITransferResourceWait @ 1459d2030

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHITransferResourceWait
          (FD3D12CommandContextRedirector *this,
          TArrayView<FTransferResourceFenceData_*_const,int> *param_1)

{
  int *piVar1;
  FTransferResourceFenceData **ppFVar2;
  int iVar3;
  FTransferResourceFenceData *pFVar4;
  FD3D12SyncPoint *pFVar5;
  undefined8 *puVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  FTransferResourceFenceData *pFVar11;
  FTransferResourceFenceData **ppFVar12;
  
  iVar3 = param_1->ArrayNum;
  uVar10 = 0;
  if (0 < iVar3) {
    do {
      if (uVar10 == 0) {
        if (iVar3 < 1) {
LAB_1459d20a4:
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
      }
      else {
        uVar9 = 0;
        if ((int)uVar10 < iVar3) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if (uVar9 == 0) goto LAB_1459d20a4;
      }
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < iVar3);
  }
  ppFVar12 = param_1->DataPtr;
  ppFVar2 = ppFVar12 + iVar3;
  for (; ppFVar12 != ppFVar2; ppFVar12 = ppFVar12 + 1) {
    pFVar4 = *ppFVar12;
    uVar10 = (pFVar4->Mask).GPUMask;
    uVar9 = 0;
    bVar8 = uVar10 != 0;
    if (bVar8) {
      for (; (uVar10 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
      }
    }
    while (pFVar11 = pFVar4, bVar8) {
      for (; pFVar11 != (FTransferResourceFenceData *)&pFVar4->Mask;
          pFVar11 = (FTransferResourceFenceData *)((pFVar11->SyncPoints).Elements + 1)) {
        pFVar5 = (pFVar11->SyncPoints).Elements[0];
        if (pFVar5 != (FD3D12SyncPoint *)0x0) {
          FD3D12ContextCommon::WaitSyncPoint
                    ((FD3D12ContextCommon *)(this->PhysicalContexts).Elements[uVar9],pFVar5);
        }
      }
      uVar10 = uVar10 & ~(1 << ((byte)uVar9 & 0x1f));
      uVar9 = 0;
      bVar8 = uVar10 != 0;
      if (bVar8) {
        for (; (uVar10 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
        }
      }
    }
    for (; pFVar11 != (FTransferResourceFenceData *)&pFVar4->Mask;
        pFVar11 = (FTransferResourceFenceData *)((pFVar11->SyncPoints).Elements + 1)) {
      puVar6 = (pFVar11->SyncPoints).Elements[0];
      if (puVar6 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar6 + 1);
        LOCK();
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar3 == 1) && (piVar1 != (int *)0x0)) {
          (**(code **)*puVar6)(puVar6,1);
        }
      }
    }
    ::operator_delete(pFVar4,0x48);
  }
  return;
}

// RHITransferResources @ 1459d21e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001459d2442) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::RHITransferResources
          (FD3D12CommandContextRedirector *this,
          TArrayView<FTransferResourceParams_const_,int> *param_1)

{
  int *piVar1;
  FTransferResourceParams *pFVar2;
  int iVar3;
  EPixelFormat EVar4;
  FRHIBuffer *pFVar5;
  FTransferResourceFenceData *pFVar6;
  FD3D12CommandContext *pFVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  code *pcVar10;
  FRHIGPUMask FVar11;
  longlong lVar12;
  bool bVar13;
  bool bVar14;
  FRHIGPUMask FVar15;
  FTransferResourceParams *pFVar16;
  FRHITexture *pFVar17;
  FRHITexture *pFVar18;
  uint uVar19;
  FTransferResourceParams *pFVar20;
  uint uVar21;
  FRHITexture *pFVar22;
  TRefCountPtr<FD3D12SyncPoint> *pTVar23;
  ulonglong *puVar24;
  FD3D12SyncPoint *pFVar25;
  FRHITexture *pFVar26;
  ulonglong uVar27;
  longlong lVar28;
  FD3D12CommandContext *this_00;
  undefined1 auStackY_318 [32];
  byte local_2c8;
  bool local_2c7;
  longlong *local_2b0;
  FD3D12CommandContextRedirector *local_2a0;
  FTransferResourceParams *local_298;
  uint local_290;
  undefined1 local_28c;
  uint local_288;
  undefined1 local_284;
  uint local_280;
  undefined1 local_27c;
  TArrayView<FTransferResourceParams_const_,int> *local_278;
  uint local_270;
  undefined1 local_26c;
  uint local_268;
  undefined4 local_264;
  uint local_260;
  FTransferResourceParams *local_258;
  FName local_250;
  undefined1 local_248 [4];
  undefined1 local_244;
  D3D12_TEXTURE_COPY_LOCATION local_240;
  D3D12_TEXTURE_COPY_LOCATION local_210;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  D3D12_BOX local_1a0;
  TStaticArray<TRefCountPtr<FD3D12SyncPoint>,8,4294967295> local_188;
  TStaticArray<TRefCountPtr<FD3D12SyncPoint>,8,4294967295> local_148;
  TStaticArray<TRefCountPtr<FD3D12SyncPoint>,8,4294967295> local_108;
  TStaticArray<TRefCountPtr<FD3D12SyncPoint>,8,4294967295> local_c8;
  TStaticArray<TRefCountPtr<FD3D12SyncPoint>,8,4294967295> local_88;
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_318;
  if (param_1->ArrayNum != 0) {
    local_2c8 = !GD3D12UnsafeCrossGPUTransfers;
    pFVar20 = param_1->DataPtr;
    uVar21 = 1;
    bVar14 = true;
    pFVar2 = pFVar20 + param_1->ArrayNum;
    local_2c7 = false;
    local_2a0 = this;
    local_278 = param_1;
    FVar11.GPUMask = 1;
    for (; pFVar20 != pFVar2; pFVar20 = pFVar20 + 1) {
      if (((this->PhysicalContexts).Elements[pFVar20->SrcGPUIndex] == (FD3D12CommandContext *)0x0)
         || ((this->PhysicalContexts).Elements[pFVar20->DestGPUIndex] == (FD3D12CommandContext *)0x0
            )) {
        bVar13 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<5669119782885000030>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.cpp"
                            ,0x35e,"SrcContext && DstContext");
        FVar15.GPUMask = FVar11.GPUMask;
LAB_1459d23af:
        if (bVar13 != false) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      else {
        local_2c8 = local_2c8 | pFVar20->bLockStepGPUs;
        FVar15.GPUMask = 1 << ((byte)pFVar20->SrcGPUIndex & 0x1f);
        uVar19 = 1 << ((byte)pFVar20->DestGPUIndex & 0x1f);
        if (bVar14) {
          local_2c7 = pFVar20->DelayedFence != (FTransferResourceFenceData *)0x0;
          bVar14 = false;
          uVar21 = uVar19;
        }
        else {
          FVar15.GPUMask = FVar11.GPUMask | FVar15.GPUMask;
          uVar21 = uVar21 | uVar19;
          if ((local_2c7 != (pFVar20->DelayedFence != (FTransferResourceFenceData *)0x0)) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("bDelayFence == (Param.DelayedFence != nullptr)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.cpp"
                                  ,0x372,L""), bVar13)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        pFVar5 = (pFVar20->Buffer).Reference;
        if ((pFVar20->Texture).Reference == (FRHITexture *)0x0) {
          if (pFVar5 == (FRHIBuffer *)0x0) {
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Param.Buffer != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.cpp"
                                ,0x381,L"");
            goto LAB_1459d23af;
          }
        }
        else {
          if ((pFVar5 != (FRHIBuffer *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Param.Buffer == nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.cpp"
                                  ,0x37a,L""), bVar13)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar22 = (pFVar20->Texture).Reference;
          if (pFVar22 != (FRHITexture *)0x0) {
            (**(code **)(pFVar22->_padding_ + 0x48))();
          }
          pFVar22 = (pFVar20->Texture).Reference;
          if (pFVar22 != (FRHITexture *)0x0) {
            (**(code **)(pFVar22->_padding_ + 0x48))();
          }
        }
      }
      FVar11.GPUMask = FVar15.GPUMask;
    }
    pFVar20 = local_278->DataPtr;
    pFVar2 = pFVar20 + local_278->ArrayNum;
    local_298 = pFVar20;
    if (pFVar20 != pFVar2) {
      do {
        pFVar6 = pFVar20->PreTransferFence;
        if (pFVar6 != (FTransferResourceFenceData *)0x0) {
          uVar19 = (pFVar6->Mask).GPUMask;
          local_268 = 0;
          if (uVar19 != 0) {
            for (; (uVar19 >> local_268 & 1) == 0; local_268 = local_268 + 1) {
            }
          }
          uVar27 = 0x20;
          if (uVar19 != 0) {
            uVar27 = (ulonglong)local_268;
          }
          local_264 = 0;
          if (uVar19 != 0) {
            while( true ) {
              pFVar25 = (pFVar6->SyncPoints).Elements[uVar27];
              FD3D12ContextCommon::WaitSyncPoint
                        ((FD3D12ContextCommon *)(this->PhysicalContexts).Elements[uVar27],pFVar25);
              plVar8 = &pFVar25->_padding_;
              LOCK();
              lVar28 = *plVar8;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              if ((int)lVar28 == 1) {
                if (plVar8 == (longlong *)0x0) {
                  pFVar25 = (FD3D12SyncPoint *)0x0;
                }
                if (pFVar25 != (FD3D12SyncPoint *)0x0) {
                  (**(code **)pFVar25->_padding_)(pFVar25,1);
                }
              }
              uVar19 = uVar19 & ~(1 << ((byte)uVar27 & 0x1f));
              local_260 = 0;
              if (uVar19 != 0) {
                for (; (uVar19 >> local_260 & 1) == 0; local_260 = local_260 + 1) {
                }
              }
              if (uVar19 == 0) break;
              uVar27 = (ulonglong)local_260;
            }
          }
          ::operator_delete(pFVar6,0x48);
        }
        pFVar20 = pFVar20 + 1;
      } while (pFVar20 != pFVar2);
    }
    pFVar20 = local_298;
    if (local_2c8 == 0) {
      pFVar16 = local_298;
      if (local_298 != pFVar2) {
LAB_1459d25f6:
        if (pFVar16->bPullData == false) goto code_r0x0001459d25fc;
        local_284 = 1;
        local_288 = uVar21;
        `FD3D12CommandContextRedirector::RHITransferResources'::__l2::<lambda_1>::operator()
                  (&local_2a0,&local_108,FVar11,(TOptional<FRHIGPUMask>)&local_288);
        lVar28 = 8;
        pTVar23 = local_c8.Elements;
        do {
          pFVar25 = pTVar23[-1].Reference;
          pTVar23 = pTVar23 + -1;
          lVar28 = lVar28 + -1;
          if (pFVar25 != (FD3D12SyncPoint *)0x0) {
            plVar8 = &pFVar25->_padding_;
            LOCK();
            lVar12 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if (((int)lVar12 == 1) && (plVar8 != (longlong *)0x0)) {
              (**(code **)pFVar25->_padding_)(pFVar25,1);
            }
          }
        } while (lVar28 != 0);
        goto LAB_1459d256f;
      }
    }
    else {
      local_28c = 1;
      local_290 = uVar21 | FVar11.GPUMask;
      `FD3D12CommandContextRedirector::RHITransferResources'::__l2::<lambda_1>::operator()
                (&local_2a0,&local_148,(FRHIGPUMask)local_290,(TOptional<FRHIGPUMask>)&local_290);
      lVar28 = 8;
      pTVar23 = local_108.Elements;
      do {
        pFVar25 = pTVar23[-1].Reference;
        pTVar23 = pTVar23 + -1;
        lVar28 = lVar28 + -1;
        if (pFVar25 != (FD3D12SyncPoint *)0x0) {
          plVar8 = &pFVar25->_padding_;
          LOCK();
          lVar12 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if (((int)lVar12 == 1) && (plVar8 != (longlong *)0x0)) {
            (**(code **)pFVar25->_padding_)(pFVar25,1);
          }
        }
      } while (lVar28 != 0);
      if (pFVar20 != pFVar2) {
LAB_1459d256f:
        pFVar22 = (FRHITexture *)0x0;
        do {
          uVar27 = (ulonglong)pFVar20->SrcGPUIndex;
          this_00 = (this->PhysicalContexts).Elements[uVar27];
          if ((this_00 == (FD3D12CommandContext *)0x0) ||
             (pFVar7 = (this->PhysicalContexts).Elements[pFVar20->DestGPUIndex],
             pFVar7 == (FD3D12CommandContext *)0x0)) {
            bVar14 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<5669119782885000116>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.cpp"
                                ,0x3b4,"SrcContext && DstContext");
            if (bVar14) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
          }
          else {
            pFVar18 = (pFVar20->Texture).Reference;
            if (pFVar20->bPullData != false) {
              this_00 = pFVar7;
            }
            if (pFVar18 == (FRHITexture *)0x0) {
              pFVar5 = (pFVar20->Buffer).Reference;
              pFVar18 = pFVar22;
              lVar28 = _DAT_00000140;
              if (pFVar5 != (FRHIBuffer *)0x0) {
                pFVar18 = (FRHITexture *)(&pFVar5[1]._padding_)[pFVar20->DestGPUIndex];
                lVar28 = *(longlong *)((&pFVar5[1]._padding_)[uVar27] + 0x140);
              }
              local_298 = (FTransferResourceParams *)pFVar18[1]._padding_;
              if (*(longlong *)&this_00->field_0x188 == 0) {
                (**(code **)(*(longlong *)this_00 + 8))(this_00);
              }
              plVar8 = *(longlong **)(*(longlong *)&this_00->field_0x188 + 0x28);
              piVar1 = (int *)(*(longlong *)&this_00->field_0x188 + 0x168);
              *piVar1 = *piVar1 + 1;
              (**(code **)(*plVar8 + 0x88))
                        (plVar8,*(undefined8 *)((longlong)&(local_298->Max).field0_0x0 + 4),
                         *(undefined8 *)(lVar28 + 0x20));
            }
            else {
              lVar28 = (**(code **)(pFVar18->_padding_ + 0x48))();
              uVar19 = pFVar20->DestGPUIndex;
              pFVar18 = (pFVar20->Texture).Reference;
              if (lVar28 == 0) {
                local_2b0 = (longlong *)0x0;
              }
              else {
                local_2b0 = *(longlong **)(lVar28 + 0x200 + uVar27 * 8);
              }
              pFVar26 = pFVar22;
              if ((pFVar18 != (FRHITexture *)0x0) &&
                 (lVar28 = (**(code **)(pFVar18->_padding_ + 0x48))(), lVar28 != 0)) {
                pFVar26 = *(FRHITexture **)(lVar28 + 0x200 + (ulonglong)uVar19 * 8);
              }
              if ((pFVar20->Max).field0_0x0._s_0.Z == 0) {
                if (*(longlong *)&this_00->field_0x188 == 0) {
                  (**(code **)(*(longlong *)this_00 + 8))(this_00);
                }
                plVar8 = *(longlong **)(*(longlong *)&this_00->field_0x188 + 0x28);
                piVar1 = (int *)(*(longlong *)&this_00->field_0x188 + 0x168);
                *piVar1 = *piVar1 + 1;
                (**(code **)(*plVar8 + 0x88))
                          (plVar8,*(undefined8 *)(pFVar26[1]._padding_ + 0x20),
                           *(undefined8 *)(local_2b0[0x32] + 0x20));
              }
              else {
                pFVar18 = (pFVar20->Texture).Reference;
                pFVar17 = pFVar22;
                if ((pFVar18->TextureDesc).Dimension == Texture2D) {
                  pFVar17 = pFVar18;
                }
                if ((pFVar17 == (FRHITexture *)0x0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Param.Texture->GetTexture2D() != nullptr",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.cpp"
                                        ,0x3c8,L""), bVar14)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                if ((((((pFVar20->Min).field0_0x0._s_0.X < 0) ||
                      ((pFVar20->Min).field0_0x0._s_0.Y < 0)) ||
                     ((pFVar20->Min).field0_0x0._s_0.Z < 0)) ||
                    (((pFVar20->Max).field0_0x0._s_0.X < 0 || ((pFVar20->Max).field0_0x0._s_0.Y < 0)
                     ))) || ((pFVar20->Max).field0_0x0._s_0.Z < 0)) {
                  local_258 = pFVar20;
                  `FD3D12CommandContextRedirector::RHITransferResources'::__l81::<lambda_2>::
                  operator()(&local_258);
                }
                local_1a0.left = (pFVar20->Min).field0_0x0._s_0.X;
                local_1a0.top = (pFVar20->Min).field0_0x0._s_0.Y;
                local_1a0.front = (pFVar20->Min).field0_0x0._s_0.Z;
                local_1a0.right = (pFVar20->Max).field0_0x0._s_0.X;
                local_1a0.bottom = (pFVar20->Max).field0_0x0._s_0.Y;
                local_1a0.back = (pFVar20->Max).field0_0x0._s_0.Z;
                local_1e0 = 0;
                uStack_1d8 = 0;
                local_1d0 = 0;
                uStack_1c8 = 0;
                local_240.pResource = *(ID3D12Resource **)(local_2b0[0x32] + 0x20);
                local_240.field2_0x10._8_8_ = 0;
                local_240.Type = D3D12_TEXTURE_COPY_TYPE_SUBRESOURCE_INDEX;
                local_240.field2_0x10._16_8_ = 0;
                local_240.field2_0x10._24_8_ = 0;
                local_240.field2_0x10.PlacedFootprint.Offset = 0;
                local_210.pResource = *(ID3D12Resource **)(pFVar26[1]._padding_ + 0x20);
                local_250 = (FName)pFVar26->_padding_;
                local_210.field2_0x10._8_8_ = 0;
                local_210.Type = D3D12_TEXTURE_COPY_TYPE_SUBRESOURCE_INDEX;
                local_1c0 = 0;
                uStack_1b8 = 0;
                local_210.field2_0x10.PlacedFootprint.Offset = 0;
                local_1b0 = 0;
                uStack_1a8 = 0;
                local_210.field2_0x10._16_8_ = 0;
                local_210.field2_0x10._24_8_ = 0;
                lVar28 = (**(code **)(*local_2b0 + 0x20))(local_2b0);
                EVar4 = *(EPixelFormat *)(lVar28 + 0x33);
                lVar28 = (**(code **)(pFVar26->_padding_ + 0x20))(pFVar26);
                FD3D12CommandContext::CopyTextureRegionChecked
                          (this_00,&local_210,local_1a0.left,local_1a0.top,local_1a0.front,
                           *(EPixelFormat *)(lVar28 + 0x33),&local_240,&local_1a0,EVar4,&local_250);
              }
            }
          }
          pFVar20 = pFVar20 + 1;
        } while (pFVar20 != pFVar2);
      }
    }
    lVar28 = 8;
    if (local_2c8 == 0) {
      if (local_2c7 == false) {
        local_26c = 1;
        local_270 = uVar21;
        `FD3D12CommandContextRedirector::RHITransferResources'::__l2::<lambda_1>::operator()
                  (&local_2a0,&local_88,FVar11,(TOptional<FRHIGPUMask>)&local_270);
        puVar24 = local_48;
        do {
          puVar9 = (undefined8 *)puVar24[-1];
          puVar24 = puVar24 + -1;
          lVar28 = lVar28 + -1;
          if (puVar9 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar9 + 1);
            LOCK();
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar3 == 1) && (piVar1 != (int *)0x0)) {
              (**(code **)*puVar9)(puVar9,1);
            }
          }
        } while (lVar28 != 0);
      }
      else {
        local_244 = 0;
        `FD3D12CommandContextRedirector::RHITransferResources'::__l2::<lambda_1>::operator()
                  (&local_2a0,&local_188,(FRHIGPUMask)(uVar21 | FVar11.GPUMask),
                   (TOptional<FRHIGPUMask>)local_248);
        pFVar20 = local_278->DataPtr;
        pFVar2 = pFVar20 + local_278->ArrayNum;
        for (; pFVar20 != pFVar2; pFVar20 = pFVar20 + 1) {
          if ((pFVar20->DelayedFence == (FTransferResourceFenceData *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Param.DelayedFence",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.cpp"
                                  ,0x3ec,L""), bVar14)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          (pFVar20->DelayedFence->Mask).GPUMask = uVar21 | FVar11.GPUMask;
          if (local_188.Elements[0].Reference == (FD3D12SyncPoint *)0x0) {
            (pFVar20->DelayedFence->SyncPoints).Elements[0] = (void *)0x0;
          }
          else {
            LOCK();
            *(int *)&(local_188.Elements[0].Reference)->_padding_ =
                 (int)(local_188.Elements[0].Reference)->_padding_ + 1;
            UNLOCK();
            (pFVar20->DelayedFence->SyncPoints).Elements[0] = local_188.Elements[0].Reference;
          }
          if (local_188.Elements[1].Reference == (FD3D12SyncPoint *)0x0) {
            (pFVar20->DelayedFence->SyncPoints).Elements[1] = (void *)0x0;
          }
          else {
            LOCK();
            *(int *)&(local_188.Elements[1].Reference)->_padding_ =
                 (int)(local_188.Elements[1].Reference)->_padding_ + 1;
            UNLOCK();
            (pFVar20->DelayedFence->SyncPoints).Elements[1] = local_188.Elements[1].Reference;
          }
          if (local_188.Elements[2].Reference == (FD3D12SyncPoint *)0x0) {
            (pFVar20->DelayedFence->SyncPoints).Elements[2] = (void *)0x0;
          }
          else {
            LOCK();
            *(int *)&(local_188.Elements[2].Reference)->_padding_ =
                 (int)(local_188.Elements[2].Reference)->_padding_ + 1;
            UNLOCK();
            (pFVar20->DelayedFence->SyncPoints).Elements[2] = local_188.Elements[2].Reference;
          }
          if (local_188.Elements[3].Reference == (FD3D12SyncPoint *)0x0) {
            (pFVar20->DelayedFence->SyncPoints).Elements[3] = (void *)0x0;
          }
          else {
            LOCK();
            *(int *)&(local_188.Elements[3].Reference)->_padding_ =
                 (int)(local_188.Elements[3].Reference)->_padding_ + 1;
            UNLOCK();
            (pFVar20->DelayedFence->SyncPoints).Elements[3] = local_188.Elements[3].Reference;
          }
          if (local_188.Elements[4].Reference == (FD3D12SyncPoint *)0x0) {
            (pFVar20->DelayedFence->SyncPoints).Elements[4] = (void *)0x0;
          }
          else {
            LOCK();
            *(int *)&(local_188.Elements[4].Reference)->_padding_ =
                 (int)(local_188.Elements[4].Reference)->_padding_ + 1;
            UNLOCK();
            (pFVar20->DelayedFence->SyncPoints).Elements[4] = local_188.Elements[4].Reference;
          }
          if (local_188.Elements[5].Reference == (FD3D12SyncPoint *)0x0) {
            (pFVar20->DelayedFence->SyncPoints).Elements[5] = (void *)0x0;
          }
          else {
            LOCK();
            *(int *)&(local_188.Elements[5].Reference)->_padding_ =
                 (int)(local_188.Elements[5].Reference)->_padding_ + 1;
            UNLOCK();
            (pFVar20->DelayedFence->SyncPoints).Elements[5] = local_188.Elements[5].Reference;
          }
          if (local_188.Elements[6].Reference == (FD3D12SyncPoint *)0x0) {
            (pFVar20->DelayedFence->SyncPoints).Elements[6] = (void *)0x0;
          }
          else {
            LOCK();
            *(int *)&(local_188.Elements[6].Reference)->_padding_ =
                 (int)(local_188.Elements[6].Reference)->_padding_ + 1;
            UNLOCK();
            (pFVar20->DelayedFence->SyncPoints).Elements[6] = local_188.Elements[6].Reference;
          }
          if (local_188.Elements[7].Reference == (FD3D12SyncPoint *)0x0) {
            (pFVar20->DelayedFence->SyncPoints).Elements[7] = (void *)0x0;
          }
          else {
            LOCK();
            *(int *)&(local_188.Elements[7].Reference)->_padding_ =
                 (int)(local_188.Elements[7].Reference)->_padding_ + 1;
            UNLOCK();
            (pFVar20->DelayedFence->SyncPoints).Elements[7] = local_188.Elements[7].Reference;
          }
        }
        lVar28 = 8;
        pTVar23 = local_148.Elements;
        do {
          pFVar25 = pTVar23[-1].Reference;
          pTVar23 = pTVar23 + -1;
          lVar28 = lVar28 + -1;
          if (pFVar25 != (FD3D12SyncPoint *)0x0) {
            plVar8 = &pFVar25->_padding_;
            LOCK();
            lVar12 = *plVar8;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if (((int)lVar12 == 1) && (plVar8 != (longlong *)0x0)) {
              (**(code **)pFVar25->_padding_)(pFVar25,1);
            }
          }
        } while (lVar28 != 0);
      }
    }
    else {
      local_280 = uVar21 | FVar11.GPUMask;
      local_27c = 1;
      `FD3D12CommandContextRedirector::RHITransferResources'::__l2::<lambda_1>::operator()
                (&local_2a0,&local_c8,(FRHIGPUMask)local_280,(TOptional<FRHIGPUMask>)&local_280);
      pTVar23 = local_88.Elements;
      do {
        pFVar25 = pTVar23[-1].Reference;
        pTVar23 = pTVar23 + -1;
        lVar28 = lVar28 + -1;
        if (pFVar25 != (FD3D12SyncPoint *)0x0) {
          plVar8 = &pFVar25->_padding_;
          LOCK();
          lVar12 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if (((int)lVar12 == 1) && (plVar8 != (longlong *)0x0)) {
            (**(code **)pFVar25->_padding_)(pFVar25,1);
          }
        }
      } while (lVar28 != 0);
    }
  }
  return;
code_r0x0001459d25fc:
  pFVar16 = pFVar16 + 1;
  if (pFVar16 == pFVar2) goto LAB_1459d256f;
  goto LAB_1459d25f6;
}

// SetExecutingCommandList @ 1459d7d10

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FD3D12CommandContextRedirector::SetExecutingCommandList
          (FD3D12CommandContextRedirector *this,FRHICommandListBase *param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  bool bVar4;
  
  this->_padding_ = (longlong)param_1;
  uVar3 = *(uint *)((longlong)&this->_padding_ + 4);
  uVar1 = 0;
  bVar4 = uVar3 != 0;
  if (bVar4) {
    for (; (uVar3 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  while (bVar4) {
    puVar2 = &(this->PhysicalContexts).Elements[uVar1]->field_0x1c0;
    (**(code **)(*(longlong *)puVar2 + 0x168))(puVar2,param_1);
    uVar3 = uVar3 & ~(1 << ((byte)uVar1 & 0x1f));
    uVar1 = 0;
    bVar4 = uVar3 != 0;
    if (bVar4) {
      for (; (uVar3 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
  }
  return;
}

// operator() @ 1504d5760

bool __thiscall
`FD3D12CommandContextRedirector::RHICrossGPUTransfer'::__l20::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5669119782885000295>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5669119782885000295>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504d5810

bool __thiscall
`FD3D12CommandContextRedirector::RHITransferResources'::__l81::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5669119782885000141>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5669119782885000141>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

