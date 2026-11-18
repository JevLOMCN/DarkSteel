// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 2

// FD3D12DiagnosticBuffer @ 145a8ec80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

FD3D12DiagnosticBuffer * __thiscall
FD3D12DiagnosticBuffer::FD3D12DiagnosticBuffer(FD3D12DiagnosticBuffer *this,FD3D12Queue *param_1)

{
  TRefCountPtr<FD3D12Resource> *pTVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FD3D12Device *pFVar5;
  longlong *plVar6;
  FD3D12Adapter *this_00;
  FD3D12Resource *pFVar7;
  code *pcVar8;
  bool bVar9;
  TConsoleVariableData<int> *pTVar10;
  bool bVar11;
  int iVar12;
  TEventRef<unsigned_int> TVar13;
  longlong lVar14;
  FD3D12DiagnosticBuffer *pFVar15;
  FWriteBuffer *pFVar16;
  LPVOID _Dst;
  FD3D12Heap *pFVar17;
  FD3D12Heap *pFVar18;
  ulonglong dwSize;
  ForAnyElementType FVar19;
  undefined1 auStackY_198 [32];
  int local_134;
  FString local_130;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  ID3D12Heap *local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  longlong lStack_f0;
  ulonglong local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  FName local_b0;
  FName local_a8;
  FName local_a0;
  undefined4 *local_98;
  longlong local_90;
  FD3D12ResourceDesc local_88;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pTVar1 = &this->Resource;
  this->_padding_ = 0;
  (this->Heap).Reference = (FD3D12Heap *)0x0;
  pTVar1->Reference = (FD3D12Resource *)0x0;
  this->GpuAddress = 0;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_120 = 0;
    TVar13 = (TEventRef<unsigned_int>)&local_120;
  }
  else {
    FLazyName::Resolve(&D3D12DiagnosticBufferName);
    TVar13 = FStringTrace::GetNameRef(&local_b0);
  }
  uVar2 = *(undefined8 *)TVar13;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_118 = 0;
    TVar13 = (TEventRef<unsigned_int>)&local_118;
  }
  else {
    FLazyName::Resolve(&CreateDiagnosticBufferName);
    TVar13 = FStringTrace::GetNameRef(&local_a8);
  }
  uVar3 = *(undefined8 *)TVar13;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_108 = 0;
    TVar13 = (TEventRef<unsigned_int>)&local_108;
  }
  else {
    local_110 = 0;
    TVar13 = FStringTrace::GetNameRef(&local_a0);
  }
  uVar4 = *(undefined8 *)TVar13;
  bVar9 = false;
  if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)&local_98);
    bVar9 = true;
    *local_98 = (int)uVar2;
    local_98[1] = (int)uVar3;
    local_98[2] = (int)uVar4;
    *(undefined8 *)(local_90 + 0x28) = *(undefined8 *)(local_90 + 0x20);
  }
  ::FString::PrintfImpl(&local_130,L"DiagnosticBuffer (Queue: 0x%p)");
  pTVar10 = CVarD3D12ExtraDiagnosticBufferMemory.Ref;
  bVar11 = IsInParallelGameThread();
  if ((bVar11) || (bVar11 = IsInGameThread(), bVar11)) {
    lVar14 = 0;
  }
  else {
    lVar14 = 4;
  }
  iVar12 = *(int *)((longlong)pTVar10->ShadowedValue + lVar14);
  pFVar5 = param_1->Device;
  local_f8 = 1;
  lStack_f0 = 0;
  if (iVar12 < 0) {
    iVar12 = 0;
  }
  uStack_e0 = 1;
  uStack_dc = 0x10001;
  uStack_d8 = 0;
  uStack_d4 = 1;
  uStack_d0 = 0;
  dwSize = (ulonglong)(iVar12 + 0x608);
  uStack_cc = 1;
  local_c8 = 0x10;
  local_e8 = dwSize;
  if ((*(longlong *)&pFVar5->field_0x10 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParentAdapter != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x41,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    pFVar15 = (FD3D12DiagnosticBuffer *)(*pcVar8)();
    return pFVar15;
  }
  plVar6 = *(longlong **)(*(longlong *)&pFVar5->field_0x10 + 0x20);
  if (plVar6 == (longlong *)0x0) {
    if (2 < (byte)LogD3D12RHI._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
    if (!bVar9) {
      return this;
    }
    lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar14 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar16 = *(FWriteBuffer **)(lVar14 + 0x20);
    if ((int)pFVar16 - *(int *)&pFVar16->Cursor < 1) {
      pFVar16 = UE::Trace::Private::Writer_NextBuffer();
      *pFVar16->Cursor = '\n';
      pFVar16->Cursor = pFVar16->Cursor + 1;
      pFVar16->Committed = pFVar16->Cursor;
      return this;
    }
  }
  else {
    local_134 = 0;
    iVar12 = (**(code **)(*plVar6 + 0x68))(plVar6,0x16,&local_134,4);
    if ((iVar12 < 0) || (local_134 == 0)) {
      if (2 < (byte)LogD3D12RHI._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      }
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
      if (!bVar9) {
        return this;
      }
      lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar14 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      pFVar16 = *(FWriteBuffer **)(lVar14 + 0x20);
      if ((int)pFVar16 - *(int *)&pFVar16->Cursor < 1) {
        pFVar16 = UE::Trace::Private::Writer_NextBuffer();
      }
      *pFVar16->Cursor = '\n';
      pFVar16->Cursor = pFVar16->Cursor + 1;
      pFVar16->Committed = pFVar16->Cursor;
      return this;
    }
    _Dst = VirtualAlloc((LPVOID)0x0,dwSize,0x3000,4);
    this->_padding_ = (longlong)_Dst;
    if (_Dst == (LPVOID)0x0) {
      if (2 < (byte)LogD3D12RHI._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
      }
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
      if (!bVar9) {
        return this;
      }
      lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar14 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      pFVar16 = *(FWriteBuffer **)(lVar14 + 0x20);
      if ((int)pFVar16 - *(int *)&pFVar16->Cursor < 1) {
        pFVar16 = UE::Trace::Private::Writer_NextBuffer();
        *pFVar16->Cursor = '\n';
        pFVar16->Cursor = pFVar16->Cursor + 1;
        pFVar16->Committed = pFVar16->Cursor;
        return this;
      }
    }
    else {
      memset(_Dst,0,dwSize);
      pFVar18 = (FD3D12Heap *)0x0;
      local_100 = (ID3D12Heap *)0x0;
      iVar12 = (**(code **)(*plVar6 + 0x180))
                         (plVar6,this->_padding_,&_GUID_6b3b2502_6e51_45b3_90ee_9884265e8df3,
                          &local_100);
      if (iVar12 < 0) {
        VirtualFree((LPVOID)this->_padding_,0,0x8000);
        this->_padding_ = 0;
        if (2 < (byte)LogD3D12RHI._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
        }
        if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.Data.AllocatorInstance.Data);
        }
        if (!bVar9) {
          return this;
        }
        lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if (*(char *)(lVar14 + 0x9d48) == '\0') {
          __dyn_tls_on_demand_init();
        }
        pFVar16 = *(FWriteBuffer **)(lVar14 + 0x20);
        if ((int)pFVar16 - *(int *)&pFVar16->Cursor < 1) {
          pFVar16 = UE::Trace::Private::Writer_NextBuffer();
          *pFVar16->Cursor = '\n';
          pFVar16->Cursor = pFVar16->Cursor + 1;
          pFVar16->Committed = pFVar16->Cursor;
          return this;
        }
      }
      else {
        pFVar17 = ::operator_new(0x88);
        if (pFVar17 != (FD3D12Heap *)0x0) {
          pFVar18 = FD3D12Heap::FD3D12Heap
                              (pFVar17,param_1->Device,(FRHIGPUMask)*(uint *)param_1->Device,1);
        }
        pFVar17 = (this->Heap).Reference;
        if (pFVar17 != pFVar18) {
          (this->Heap).Reference = pFVar18;
          if (pFVar18 != (FD3D12Heap *)0x0) {
            LOCK();
            *(int *)&pFVar18->_padding_ = (int)pFVar18->_padding_ + 1;
            UNLOCK();
          }
          if (pFVar17 != (FD3D12Heap *)0x0) {
            plVar6 = &pFVar17->_padding_;
            LOCK();
            lVar14 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if (((int)lVar14 == 1) && (plVar6 != (longlong *)0x0)) {
              (**(code **)pFVar17->_padding_)(pFVar17,1);
            }
          }
        }
        FD3D12Heap::SetHeap((this->Heap).Reference,local_100,L"DiagnosticBuffer",true,false);
        pFVar5 = param_1->Device;
        if ((*(longlong *)&pFVar5->field_0x10 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("ParentAdapter != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                                ,0x41,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          pFVar15 = (FD3D12DiagnosticBuffer *)(*pcVar8)();
          return pFVar15;
        }
        this_00 = *(FD3D12Adapter **)&pFVar5->field_0x10;
        pFVar7 = pTVar1->Reference;
        FVar19.Data = (FScriptContainerElement *)L"";
        if (local_130.Data.ArrayNum != 0) {
          FVar19.Data = local_130.Data.AllocatorInstance.Data;
        }
        if (pFVar7 != (FD3D12Resource *)0x0) {
          plVar6 = &pFVar7->_padding_;
          pTVar1->Reference = (FD3D12Resource *)0x0;
          LOCK();
          lVar14 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if (((int)lVar14 == 1) && (plVar6 != (longlong *)0x0)) {
            (**(code **)pFVar7->_padding_)(pFVar7,1);
          }
        }
        local_88._padding_ = CONCAT44(uStack_f4,local_f8);
        local_88._padding_ = CONCAT44(uStack_dc,uStack_e0);
        local_88._padding_ = lStack_f0;
        local_88._padding_ = CONCAT44(uStack_d4,uStack_d8);
        local_88._padding_ = CONCAT44(uStack_cc,uStack_d0);
        local_88._padding_ = local_e8;
        local_88._padding_ = CONCAT44(uStack_c4,local_c8);
        local_88._62_2_ = 0;
        local_88.PixelFormat = PF_Unknown;
        local_88.UAVPixelFormat = PF_Unknown;
        local_88._58_4_ = 0;
        iVar12 = FD3D12Adapter::CreatePlacedResource
                           (this_00,&local_88,(this->Heap).Reference,0,CopyDest,Default,CopyDest,
                            (D3D12_CLEAR_VALUE *)0x0,&pTVar1->Reference,(wchar_t *)FVar19.Data,false
                           );
        if (iVar12 < 0) {
          pFVar18 = (this->Heap).Reference;
          if (pFVar18 != (FD3D12Heap *)0x0) {
            (this->Heap).Reference = (FD3D12Heap *)0x0;
            plVar6 = &pFVar18->_padding_;
            LOCK();
            lVar14 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if (((int)lVar14 == 1) && (plVar6 != (longlong *)0x0)) {
              (**(code **)pFVar18->_padding_)(pFVar18,1);
            }
          }
          VirtualFree((LPVOID)this->_padding_,0,0x8000);
          this->_padding_ = 0;
          if (2 < (byte)LogD3D12RHI._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
          }
          if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_130.Data.AllocatorInstance.Data);
          }
          if (!bVar9) {
            return this;
          }
          lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          if (*(char *)(lVar14 + 0x9d48) == '\0') {
            __dyn_tls_on_demand_init();
          }
          pFVar16 = *(FWriteBuffer **)(lVar14 + 0x20);
          if ((int)pFVar16 - *(int *)&pFVar16->Cursor < 1) {
            pFVar16 = UE::Trace::Private::Writer_NextBuffer();
            *pFVar16->Cursor = '\n';
            pFVar16->Cursor = pFVar16->Cursor + 1;
            pFVar16->Committed = pFVar16->Cursor;
            return this;
          }
        }
        else {
          if (4 < (byte)LogD3D12RHI._0_1_) {
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
          }
          this->GpuAddress = pTVar1->Reference->GPUVirtualAddress;
          *(undefined4 *)(this->_padding_ + 0x600) = 0;
          *(undefined4 *)(this->_padding_ + 0x604) = 0;
          if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_130.Data.AllocatorInstance.Data);
          }
          if (!bVar9) {
            return this;
          }
          lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          if (*(char *)(lVar14 + 0x9d48) == '\0') {
            __dyn_tls_on_demand_init();
          }
          pFVar16 = *(FWriteBuffer **)(lVar14 + 0x20);
          if ((int)pFVar16 - *(int *)&pFVar16->Cursor < 1) {
            pFVar16 = UE::Trace::Private::Writer_NextBuffer();
          }
        }
      }
    }
  }
  *pFVar16->Cursor = '\n';
  pFVar16->Cursor = pFVar16->Cursor + 1;
  pFVar16->Committed = pFVar16->Cursor;
  return this;
}

// ~FD3D12DiagnosticBuffer @ 145a94990

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12DiagnosticBuffer::~FD3D12DiagnosticBuffer(FD3D12DiagnosticBuffer *this)

{
  longlong *plVar1;
  FD3D12Resource *pFVar2;
  FD3D12Heap *pFVar3;
  longlong lVar4;
  
  pFVar2 = (this->Resource).Reference;
  if (pFVar2 != (FD3D12Resource *)0x0) {
    (this->Resource).Reference = (FD3D12Resource *)0x0;
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  pFVar3 = (this->Heap).Reference;
  if (pFVar3 != (FD3D12Heap *)0x0) {
    (this->Heap).Reference = (FD3D12Heap *)0x0;
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  if ((LPVOID)this->_padding_ != (LPVOID)0x0) {
    VirtualFree((LPVOID)this->_padding_,0,0x8000);
    this->_padding_ = 0;
  }
  this->GpuAddress = 0;
  pFVar2 = (this->Resource).Reference;
  if (pFVar2 != (FD3D12Resource *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  pFVar3 = (this->Heap).Reference;
  if (pFVar3 != (FD3D12Heap *)0x0) {
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  return;
}

