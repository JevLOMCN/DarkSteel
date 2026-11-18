// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 11

// GetResidencyHandles @ 1459c2a50

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

TArrayView<FD3D12ResidencyHandle_*_const,int> * __thiscall
FD3D12Resource::GetResidencyHandles
          (FD3D12Resource *this,
          TArrayView<FD3D12ResidencyHandle_*_const,int> *__return_storage_ptr__)

{
  int iVar1;
  FD3D12Heap *pFVar2;
  FD3D12ReservedResourceData *pFVar3;
  code *pcVar4;
  bool bVar5;
  TArrayView<FD3D12ResidencyHandle_*_const,int> *pTVar6;
  
  if (!this->bRequiresResidencyTracking) {
    __return_storage_ptr__->DataPtr = (FD3D12ResidencyHandle **)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    return __return_storage_ptr__;
  }
  pFVar2 = (this->Heap).Reference;
  if (pFVar2 != (FD3D12Heap *)0x0) {
    if (pFVar2->bRequiresResidencyTracking == false) {
      __return_storage_ptr__->DataPtr = (FD3D12ResidencyHandle **)0x0;
      __return_storage_ptr__->ArrayNum = 0;
      return __return_storage_ptr__;
    }
    if (pFVar2->ResidencyHandle == (FD3D12ResidencyHandle *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ResidencyHandle",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                         ,0x5d,
                         L"Resource requires residency tracking, but BeginTrackingResidency() was not called."
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TArrayView<FD3D12ResidencyHandle_*_const,int> *)(*pcVar4)();
        return pTVar6;
      }
    }
    __return_storage_ptr__->DataPtr = &pFVar2->ResidencyHandle;
    __return_storage_ptr__->ArrayNum = 1;
    return __return_storage_ptr__;
  }
  pFVar3 = (this->ReservedResourceData).Ptr;
  if (pFVar3 == (FD3D12ReservedResourceData *)0x0) {
    if (this->ResidencyHandle == (FD3D12ResidencyHandle *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ResidencyHandle",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                         ,0x1a2,
                         L"Resource requires residency tracking, but StartTrackingForResidency() was not called."
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TArrayView<FD3D12ResidencyHandle_*_const,int> *)(*pcVar4)();
        return pTVar6;
      }
    }
    __return_storage_ptr__->DataPtr = &this->ResidencyHandle;
    __return_storage_ptr__->ArrayNum = 1;
    return __return_storage_ptr__;
  }
  iVar1 = (pFVar3->ResidencyHandles).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FD3D12ResidencyHandle **)(pFVar3->ResidencyHandles).AllocatorInstance.Data;
  if (iVar1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TArrayView<FD3D12ResidencyHandle_*_const,int> *)(*pcVar4)();
      return pTVar6;
    }
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetResourceBaseAddress @ 1459c2cf0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void * __thiscall FD3D12Resource::GetResourceBaseAddress(FD3D12Resource *this)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  if (this->ResourceBaseAddress != (void *)0x0) {
    return this->ResourceBaseAddress;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("ResourceBaseAddress",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                     ,0x13a,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return this->ResourceBaseAddress;
}

// Map @ 1459c8060

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void * __thiscall FD3D12Resource::Map(FD3D12Resource *this,D3D12_RANGE *param_1)

{
  ID3D12Resource *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  FString local_18;
  
  if (this->NumMapCalls == 0) {
    if ((this->Resource).Reference == (ID3D12Resource *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                         ,0x11a,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pvVar5 = (void *)(*pcVar2)();
        return pvVar5;
      }
    }
    if (this->ResourceBaseAddress != (void *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ResourceBaseAddress == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                         ,0x11b,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pvVar5 = (void *)(*pcVar2)();
        return pvVar5;
      }
    }
    pIVar1 = (this->Resource).Reference;
    iVar4 = (**(code **)((longlong)*pIVar1 + 0x40))(pIVar1,0,param_1,&this->ResourceBaseAddress);
    if (iVar4 < 0) {
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      D3D12RHI::VerifyD3D12Result
                (iVar4,"Resource->Map(0, ReadRange, &ResourceBaseAddress)",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                 ,0x11c,(ID3D12Device *)0x0,&local_18);
    }
    this->NumMapCalls = this->NumMapCalls + 1;
    return this->ResourceBaseAddress;
  }
  if (this->ResourceBaseAddress != (void *)0x0) {
    this->NumMapCalls = this->NumMapCalls + 1;
    return this->ResourceBaseAddress;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("ResourceBaseAddress",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                     ,0x120,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pvVar5 = (void *)(*pcVar2)();
    return pvVar5;
  }
  this->NumMapCalls = this->NumMapCalls + 1;
  return this->ResourceBaseAddress;
}

// FD3D12Resource @ 145a44780

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12Resource * __thiscall
FD3D12Resource::FD3D12Resource
          (FD3D12Resource *this,FD3D12Device *param_1,FRHIGPUMask param_2,ID3D12Resource *param_3,
          ED3D12Access param_4,FD3D12ResourceDesc *param_5,FD3D12Heap *param_6,
          D3D12_HEAP_TYPE param_7)

{
  FD3D12Resource(this,param_1,param_2,param_3,param_4,Default,Unknown,param_5,param_6,param_7);
  this->_padding_ = (longlong)&___7FD3D12Resource__6B_;
  return this;
}

// FD3D12Resource @ 145a447f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12Resource * __thiscall
FD3D12Resource::FD3D12Resource
          (FD3D12Resource *this,FD3D12Device *param_1,FRHIGPUMask param_2,ID3D12Resource *param_3,
          ED3D12Access param_4,ED3D12ResourceStateMode param_5,ED3D12Access param_6,
          FD3D12ResourceDesc *param_7,FD3D12Heap *param_8,D3D12_HEAP_TYPE param_9)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  TUniquePtr<FD3D12Resource::FD3D12ReservedResourceData,TDefaultDelete<FD3D12Resource::FD3D12ReservedResourceData>_>
  *pTVar3;
  undefined1 uVar4;
  uint uVar5;
  ID3D12Resource *pIVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  EPixelFormat EVar9;
  EPixelFormat EVar10;
  undefined6 uVar11;
  longlong lVar12;
  bool bVar13;
  uchar uVar14;
  DXGI_FORMAT DVar15;
  FD3D12Resource *pFVar16;
  ulong64 uVar17;
  GFSDK_Aftermath_ResourceHandle__ *pGVar18;
  FD3D12ReservedResourceData *pFVar19;
  byte bVar20;
  FD3D12ReservedResourceData *pFVar21;
  undefined1 auStackY_98 [32];
  undefined8 local_68;
  ulong64 local_60;
  ForAnyElementType FStack_58;
  undefined8 local_50;
  ForAnyElementType FStack_48;
  ulong64 local_40;
  ForAnyElementType FStack_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_98;
  pFVar21 = (FD3D12ReservedResourceData *)0x0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FThreadSafeRefCountedObject__6B_;
  this->_padding_ = (longlong)param_1;
  uVar5 = *(uint *)param_1;
  *(uint *)&this->_padding_ = uVar5;
  *(uint *)((longlong)&this->_padding_ + 4) = param_2.GPUMask;
  if (((param_2.GPUMask & uVar5) == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("NodeMask.Intersects(VisibiltyMask)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x9e,L""), bVar13)) {
    pcVar8 = (code *)swi(3);
    pFVar16 = (FD3D12Resource *)(*pcVar8)();
    return pFVar16;
  }
  this->_padding_ = (longlong)&___7FD3D12Resource__6B_;
  (this->Resource).Reference = param_3;
  if (param_3 != (ID3D12Resource *)0x0) {
    (**(code **)((longlong)*param_3 + 8))(param_3);
  }
  (this->Heap).Reference = param_8;
  if (param_8 != (FD3D12Heap *)0x0) {
    LOCK();
    *(int *)&param_8->_padding_ = (int)param_8->_padding_ + 1;
    UNLOCK();
  }
  this->ResidencyHandle = (FD3D12ResidencyHandle *)0x0;
  this->GPUVirtualAddress = 0;
  this->ResourceBaseAddress = (void *)0x0;
  this->AftermathHandle = (GFSDK_Aftermath_ResourceHandle__ *)0x0;
  lVar12 = param_7->_padding_;
  (this->Desc)._padding_ = param_7->_padding_;
  (this->Desc)._padding_ = lVar12;
  lVar12 = param_7->_padding_;
  (this->Desc)._padding_ = param_7->_padding_;
  (this->Desc)._padding_ = lVar12;
  lVar12 = param_7->_padding_;
  (this->Desc)._padding_ = param_7->_padding_;
  (this->Desc)._padding_ = lVar12;
  lVar12 = param_7->_padding_;
  EVar9 = param_7->PixelFormat;
  EVar10 = param_7->UAVPixelFormat;
  uVar11 = *(undefined6 *)&param_7->field_0x3a;
  this->InitialD3D12Access = Unknown;
  this->DefaultD3D12Access = Unknown;
  this->HeapType = param_9;
  (this->Desc)._padding_ = lVar12;
  (this->Desc).PixelFormat = EVar9;
  (this->Desc).UAVPixelFormat = EVar10;
  *(undefined6 *)&(this->Desc).field_0x3a = uVar11;
  lVar12 = (this->Desc)._padding_;
  (this->DebugName).ComparisonIndex = 0;
  (this->DebugName).Number = 0;
  this->NumMapCalls = 0;
  this->SubresourceCount = 0;
  DVar15 = UE::DXGIUtilities::FindDepthStencilParentDXGIFormat((DXGI_FORMAT)lVar12);
  if ((DVar15 == DXGI_FORMAT_R32G8X24_TYPELESS) ||
     (uVar14 = '\x01', DVar15 == DXGI_FORMAT_R24G8_TYPELESS)) {
    uVar14 = '\x02';
  }
  this->PlaneCount = uVar14;
  puVar2 = &this->field_0xab;
  this->bRequiresResourceStateTracking = true;
  this->bDeferDelete = true;
  this->bDepthStencil = false;
  this->bRequiresResidencyTracking = true;
  (this->ReservedResourceData).Ptr = (FD3D12ReservedResourceData *)0x0;
  local_60 = 0;
  FStack_58.Data = (FScriptContainerElement *)0x0;
  local_50._0_4_ = 0;
  local_50._4_4_ = 0;
  FStack_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  FStack_38.Data = (FScriptContainerElement *)0x0;
  pFVar19 = pFVar21;
  if (param_8 != (FD3D12Heap *)0x0) {
    local_60 = (param_8->HeapDesc).SizeInBytes;
    FStack_58.Data = *(FScriptContainerElement **)&(param_8->HeapDesc).Properties;
    local_50._0_4_ = (param_8->HeapDesc).Properties.MemoryPoolPreference;
    local_50._4_4_ = (param_8->HeapDesc).Properties.CreationNodeMask;
    FStack_48.Data = *(FScriptContainerElement **)&(param_8->HeapDesc).Properties.VisibleNodeMask;
    local_40 = (param_8->HeapDesc).Alignment;
    FStack_38.Data = *(FScriptContainerElement **)&(param_8->HeapDesc).Flags;
    pFVar19 = (FD3D12ReservedResourceData *)&FStack_58;
  }
  if (param_9 == D3D12_HEAP_TYPE_CUSTOM) {
    if ((pFVar19 == (FD3D12ReservedResourceData *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("HeapType == D3D12_HEAP_TYPE_CUSTOM ? pCustomHeapProperties != nullptr : true"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.h"
                            ,0x176,L""), bVar13)) {
      pcVar8 = (code *)swi(3);
      pFVar16 = (FD3D12Resource *)(*pcVar8)();
      return pFVar16;
    }
    param_9 = *(D3D12_HEAP_TYPE *)((longlong)&(pFVar19->BackingHeaps).AllocatorInstance.Data + 4);
  }
  if ((param_9 != D3D12_HEAP_TYPE_DEFAULT) ||
     ((bool)(this->Desc).bBackBuffer || (bool)(this->Desc).bExternal)) {
    bVar20 = 0;
  }
  else {
    bVar20 = 2;
  }
  pIVar6 = (this->Resource).Reference;
  this->bRequiresResidencyTracking = bVar20 >> 1;
  if ((pIVar6 != (ID3D12Resource *)0x0) && ((int)(this->Desc)._padding_ == 1)) {
    uVar17 = (**(code **)((longlong)*pIVar6 + 0x58))();
    this->GPUVirtualAddress = uVar17;
  }
  InitializeResourceState(this,(D3D12_HEAP_PROPERTIES *)pFVar19,param_4,param_5,param_6);
  pGVar18 = UE::RHICore::Nvidia::Aftermath::D3D12::RegisterResource(param_3);
  this->AftermathHandle = pGVar18;
  if ((this->Desc).bReservedResource) {
    if (((this->Heap).Reference != (FD3D12Heap *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Heap == nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                            ,0xad,L"Reserved resources are not expected to have a heap"), bVar13)) {
      pcVar8 = (code *)swi(3);
      pFVar16 = (FD3D12Resource *)(*pcVar8)();
      return pFVar16;
    }
    pFVar19 = ::operator_new(0x38);
    if (pFVar19 != (FD3D12ReservedResourceData *)0x0) {
      (pFVar19->BackingHeaps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar19->BackingHeaps).ArrayNum = 0;
      (pFVar19->BackingHeaps).ArrayMax = 0;
      (pFVar19->ResidencyHandles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar19->ResidencyHandles).ArrayNum = 0;
      (pFVar19->ResidencyHandles).ArrayMax = 0;
      (pFVar19->NumResidencyHandlesPerHeap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar19->NumResidencyHandlesPerHeap).ArrayNum = 0;
      (pFVar19->NumResidencyHandlesPerHeap).ArrayMax = 0;
      pFVar19->NumCommittedTiles = 0;
      pFVar19->NumSlackTiles = 0;
      pFVar21 = pFVar19;
    }
    pTVar3 = &this->ReservedResourceData;
    if (pTVar3 == (TUniquePtr<FD3D12Resource::FD3D12ReservedResourceData,TDefaultDelete<FD3D12Resource::FD3D12ReservedResourceData>_>
                   *)&local_68) {
      if (pFVar21 == (FD3D12ReservedResourceData *)0x0) {
        return this;
      }
      pFVar7 = (pFVar21->NumResidencyHandlesPerHeap).AllocatorInstance.Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      pFVar7 = (pFVar21->ResidencyHandles).AllocatorInstance.Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      DestructItems<TRefCountPtr<FD3D12Heap>,int>
                ((TRefCountPtr<FD3D12Heap> *)(pFVar21->BackingHeaps).AllocatorInstance.Data,
                 (pFVar21->BackingHeaps).ArrayNum);
      pFVar7 = (pFVar21->BackingHeaps).AllocatorInstance.Data;
      pFVar19 = pFVar21;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
    }
    else {
      pFVar19 = pTVar3->Ptr;
      pTVar3->Ptr = pFVar21;
      if (pFVar19 == (FD3D12ReservedResourceData *)0x0) {
        return this;
      }
      pFVar7 = (pFVar19->NumResidencyHandlesPerHeap).AllocatorInstance.Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      pFVar7 = (pFVar19->ResidencyHandles).AllocatorInstance.Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      DestructItems<TRefCountPtr<FD3D12Heap>,int>
                ((TRefCountPtr<FD3D12Heap> *)(pFVar19->BackingHeaps).AllocatorInstance.Data,
                 (pFVar19->BackingHeaps).ArrayNum);
      pFVar7 = (pFVar19->BackingHeaps).AllocatorInstance.Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
    }
    ::operator_delete(pFVar19,0x38);
  }
  return this;
}

// ~FD3D12Resource @ 145a48420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FD3D12Resource::~FD3D12Resource(FD3D12Resource *this)

{
  longlong *plVar1;
  int iVar2;
  FD3D12ResidencyHandle *pFVar3;
  ID3D12Resource *pIVar4;
  FD3D12ReservedResourceData *pFVar5;
  longlong lVar6;
  uchar auVar7 [8];
  FName FVar8;
  FD3D12Heap *pFVar9;
  code *pcVar10;
  bool bVar11;
  uint uVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_D3D12ReservedResourcePhysical> FVar14;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FScriptContainerElement *pFVar15;
  FNameEntryId FVar16;
  FScriptContainerElement *pFVar17;
  undefined1 auStackY_f8 [32];
  undefined1 local_98 [8];
  FScriptContainerElement *local_90;
  uint local_88;
  uint uStack_84;
  FName local_80;
  FStatMessage local_78;
  FName local_68 [3];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pFVar3 = this->ResidencyHandle;
  this->_padding_ = (longlong)&___7FD3D12Resource__6B_;
  if (((GEnableResidencyManagement != false) && (pFVar3 != (FD3D12ResidencyHandle *)0x0)) &&
     ((ID3D12Pageable *)pFVar3->_padding_ != (ID3D12Pageable *)0x0)) {
    if ((this->_padding_ == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Parent != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                            ,0x59,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if (GEnableResidencyManagement != false) {
      D3DX12Residency::Internal::ResidencyManagerInternal::EndTrackingObject
                ((ResidencyManagerInternal *)(this->_padding_ + 0x48),(ManagedObject *)pFVar3);
    }
  }
  ::operator_delete(this->ResidencyHandle,0x440);
  UE::RHICore::Nvidia::Aftermath::D3D12::UnregisterResource(this->AftermathHandle);
  if ((this->Desc).bBackBuffer) {
    EnterCriticalSection((LPCRITICAL_SECTION)&FD3D12Viewport::DXGIBackBufferLock);
    pIVar4 = (this->Resource).Reference;
    if (pIVar4 != (ID3D12Resource *)0x0) {
      (this->Resource).Reference = (ID3D12Resource *)0x0;
      (**(code **)((longlong)*pIVar4 + 0x10))();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&FD3D12Viewport::DXGIBackBufferLock);
  }
  pFVar5 = (this->ReservedResourceData).Ptr;
  if ((pFVar5 != (FD3D12ReservedResourceData *)0x0) &&
     (uVar12 = pFVar5->NumCommittedTiles, uVar12 != 0)) {
    UE::RHICore::UpdateReservedResourceStatsOnCommit
              ((ulonglong)(uVar12 << 0x10),(int)(this->Desc)._padding_ == 1,false);
    pFVar5 = (this->ReservedResourceData).Ptr;
    pFVar17 = (pFVar5->BackingHeaps).AllocatorInstance.Data;
    iVar2 = (pFVar5->BackingHeaps).ArrayNum;
    pFVar15 = pFVar17 + (longlong)iVar2 * 8;
    local_90 = pFVar15;
    while( true ) {
      if ((pFVar5->BackingHeaps).ArrayNum != iVar2) {
        local_98[0] = 0;
        `TCheckedPointerIterator<TRefCountPtr<FD3D12Heap>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_98);
      }
      if (pFVar17 == pFVar15) break;
      lVar6 = *(longlong *)pFVar17;
      local_50 = *(undefined4 *)(lVar6 + 0x48);
      uStack_4c = *(undefined4 *)(lVar6 + 0x4c);
      uStack_48 = *(undefined4 *)(lVar6 + 0x50);
      uStack_44 = *(undefined4 *)(lVar6 + 0x54);
      auVar7 = *(uchar (*) [8])(lVar6 + 0x38);
      local_40 = *(undefined8 *)(lVar6 + 0x58);
      uStack_38 = *(undefined8 *)(lVar6 + 0x60);
      if (auVar7 != (uchar  [8])0x0) {
        FVar14 = StatPtr_STAT_D3D12ReservedResourcePhysical;
        if (StatPtr_STAT_D3D12ReservedResourcePhysical ==
            (FThreadSafeStaticStat<FStat_STAT_D3D12ReservedResourcePhysical>)0x0) {
          pFVar13 = ::FName::FName(local_68,"STAT_D3D12ReservedResourcePhysical");
          FVar14 = (FThreadSafeStaticStat<FStat_STAT_D3D12ReservedResourcePhysical>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_D3D12ReservedResourcePhysical,*pFVar13,
                              L"Reserved Resource Physical Memory","STATGROUP_D3D12MemoryDetails",
                              "STATCAT_Advanced",L"D3D12RHI: Memory Details",true,false,ST_int64,
                              false,false,MCR_Physical);
        }
        FVar8 = *(FName *)FVar14;
        FVar16 = FVar8.ComparisonIndex.Value;
        uVar12 = FVar8.Number;
        pFVar15 = local_90;
        local_88 = FVar16.Value;
        uStack_84 = uVar12;
        if (((FVar8 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          this_00 = TlsGetValue(FThreadStats::TlsSlot);
          if (this_00 == (FThreadStats *)0x0) {
            this_01 = FThreadStatsPool::Get();
            this_00 = FThreadStatsPool::GetFromPool(this_01);
          }
          local_78.NameAndInfo.Number = uVar12 & 0xffffbfff | 0xb000;
          local_80 = FVar8;
          local_78.StatData.Pad = auVar7;
          local_78.NameAndInfo.Index.Value = FVar16.Value;
          FThreadStats::AddStatMessage(this_00,&local_78);
          FStatsTrace::Add(&local_80,-(longlong)auVar7);
          if (this_00->ScopeCount == 0) {
            FThreadStats::Flush(this_00,false,false);
            pFVar15 = local_90;
          }
          else {
            pFVar15 = local_90;
            if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(this_00,false,false);
              pFVar15 = local_90;
            }
          }
        }
      }
      pFVar17 = pFVar17 + 8;
    }
  }
  pFVar5 = (this->ReservedResourceData).Ptr;
  if (pFVar5 != (FD3D12ReservedResourceData *)0x0) {
    pFVar15 = (pFVar5->NumResidencyHandlesPerHeap).AllocatorInstance.Data;
    if (pFVar15 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar15);
    }
    pFVar15 = (pFVar5->ResidencyHandles).AllocatorInstance.Data;
    if (pFVar15 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar15);
    }
    DestructItems<TRefCountPtr<FD3D12Heap>,int>
              ((TRefCountPtr<FD3D12Heap> *)(pFVar5->BackingHeaps).AllocatorInstance.Data,
               (pFVar5->BackingHeaps).ArrayNum);
    pFVar15 = (pFVar5->BackingHeaps).AllocatorInstance.Data;
    if (pFVar15 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar15);
    }
    ::operator_delete(pFVar5,0x38);
  }
  pFVar9 = (this->Heap).Reference;
  if (pFVar9 != (FD3D12Heap *)0x0) {
    plVar1 = &pFVar9->_padding_;
    LOCK();
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar6 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar9->_padding_)(pFVar9,1);
    }
  }
  pIVar4 = (this->Resource).Reference;
  if (pIVar4 != (ID3D12Resource *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FThreadSafeRefCountedObject__6B_;
  if (((int)this->_padding_ != 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Super::GetRefCount() == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                          ,0x124,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  return;
}

// CommitReservedResource @ 145a55070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145a561be) */
/* WARNING: Removing unreachable block (ram,0x000145a561eb) */
/* WARNING: Removing unreachable block (ram,0x000145a561ec) */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */

void __thiscall
FD3D12Resource::CommitReservedResource
          (FD3D12Resource *this,ID3D12CommandQueue *param_1,ulong64 param_2)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  LPCRITICAL_SECTION lpCriticalSection_00;
  CriticalSection *lpCriticalSection_01;
  uint *puVar2;
  FName FVar3;
  undefined8 *puVar4;
  FD3D12ReservedResourceData *pFVar5;
  ManagedObject *pMVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  code *pcVar9;
  TConsoleVariableData<int> *pTVar10;
  FD3D12DynamicRHI *pFVar11;
  FD3D12Adapter *this_00;
  byte bVar12;
  bool bVar13;
  byte bVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  ID3D12Device *pIVar19;
  ForElementType<D3D12_SUBRESOURCE_TILING> FVar20;
  FName *pFVar21;
  FThreadSafeStaticStat<FStat_STAT_D3D12ReservedResourcePhysical> FVar22;
  TStatId TVar23;
  FD3D12Heap *pFVar24;
  ResidencySet *pRVar25;
  ushort uVar26;
  FScriptContainerElement *pFVar27;
  longlong lVar28;
  uint uVar29;
  AsyncWorkload *pAVar30;
  uint uVar31;
  longlong lVar32;
  ulonglong uVar33;
  FD3D12ReservedResourceData *pFVar34;
  undefined8 *puVar35;
  ForAnyElementType FVar36;
  FScriptContainerElement *pFVar37;
  uint uVar38;
  uint uVar39;
  void *_Src;
  ResidencyManagerInternal *this_01;
  int iVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  ID3D12CommandQueue *pIVar43;
  uint uVar44;
  ResidencySet *this_02;
  bool bVar45;
  undefined1 auStackY_3b8 [32];
  undefined1 local_356;
  undefined1 local_355;
  bool local_354;
  FMemScopePtr local_353 [3];
  uint local_350 [2];
  ForAnyElementType local_348;
  int local_340;
  int iStack_33c;
  FD3D12Heap *local_338;
  int local_330;
  int local_32c;
  uint local_328;
  uint local_324;
  int local_320;
  ForAnyElementType local_318;
  undefined8 local_310;
  uint local_308;
  uint local_304;
  uint local_300;
  ID3D12Pageable *local_2f8;
  ulonglong local_2f0;
  uint local_2e8;
  uint uStack_2e4;
  FName local_2e0;
  FScriptContainerElement *local_2d8;
  longlong local_2d0;
  FD3D12Resource *local_2c8;
  ID3D12CommandQueue *local_2c0;
  Fence *local_2b8;
  uint local_2b0;
  FD3D12Adapter *local_2a8;
  uint local_2a0;
  uint local_29c;
  ulonglong local_298;
  undefined8 uStack_290;
  uint local_288;
  undefined4 uStack_284;
  undefined8 uStack_280;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_278;
  ID3D12Device *local_268;
  Fence *local_260;
  FString local_258;
  FString local_248;
  FName local_238 [2];
  FString local_228 [2];
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  uint uStack_1e4;
  uint uStack_1e0;
  uint uStack_1dc;
  int iStack_1d8;
  uint uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  uint uStack_1ac;
  uint uStack_1a8;
  uint uStack_1a4;
  int iStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 local_18c;
  ID3D12Heap *local_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_170;
  FLLMScopeFromPtr local_168;
  undefined8 local_160;
  undefined4 local_158;
  ulonglong local_150;
  undefined8 local_148;
  undefined4 local_140;
  uint local_13c;
  int local_138;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_124;
  ForElementType<D3D12_SUBRESOURCE_TILING> local_118;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  local_308 = 0;
  bVar45 = -1 < CpuChannel->Enabled;
  local_2c8 = this;
  local_2c0 = param_1;
  if (bVar45) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId225,"CommitReservedResource",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
               ,0xe1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId225);
  }
  if ((!(this->Desc).bReservedResource) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Desc.bReservedResource",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                          ,0xe6,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (((this->ReservedResourceData).Ptr == (FD3D12ReservedResourceData *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("ReservedResourceData.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                          ,0xe7,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FLLMScopeFromPtr::FLLMScopeFromPtr(&local_168,(this->ReservedResourceData).Ptr,Default);
  FMemScopePtr::FMemScopePtr(local_353,(ulong64)(this->ReservedResourceData).Ptr,0);
  if ((GRHIGlobals.ReservedResources.Supported == false) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("GRHIGlobals.ReservedResources.Supported",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                          ,0xec,L"Current RHI does not support reserved resources"), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((((int)(this->Desc)._padding_ == 4) &&
      (GRHIGlobals.ReservedResources.SupportsVolumeTextures == false)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("GRHIGlobals.ReservedResources.SupportsVolumeTextures",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                          ,0xf1,L"Current RHI does not support reserved volume textures"), bVar13))
  {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar40 = (int)(this->Desc)._padding_;
  local_354 = iVar40 == 1;
  local_178 = 0;
  local_170 = 0;
  local_160 = 0;
  uVar26 = 1;
  local_158 = 0;
  local_350[0] = 0;
  if (iVar40 != 4) {
    uVar26 = *(ushort *)((longlong)&(this->Desc)._padding_ + 4);
  }
  local_304 = (uint)*(ushort *)((longlong)&(this->Desc)._padding_ + 6);
  local_118.SecondaryData = (ForElementType<D3D12_SUBRESOURCE_TILING>)0x0;
  local_50 = 0;
  local_4c = 0x10;
  local_330 = iVar40;
  if ((local_304 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumSubresourceTilings >= 1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                          ,0x102,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar38 = local_304;
  lVar32 = (longlong)(int)local_304;
  if (local_50 < (int)local_304) {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<D3D12_SUBRESOURCE_TILING>_>
              (0xc,4,local_304 - local_50,&local_118,&local_50,&local_4c);
  }
  else {
    if ((int)local_304 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_304);
    }
    if ((int)local_304 < local_50) {
      uVar31 = local_50 - local_304;
      if (((int)(uVar31 | local_304) < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar13)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar40 = local_330;
      if (uVar31 != 0) {
        FVar20 = (ForElementType<D3D12_SUBRESOURCE_TILING>)&local_118;
        if (local_118.SecondaryData != (ForElementType<D3D12_SUBRESOURCE_TILING>)0x0) {
          FVar20 = local_118.SecondaryData;
        }
        puVar2 = (uint *)((longlong)FVar20 + lVar32 * 0xc);
        iVar40 = (local_50 - uVar38) - uVar31;
        if (iVar40 != 0) {
          memmove(puVar2,puVar2 + (longlong)(int)uVar31 * 3,(longlong)iVar40 * 0xc);
        }
        local_50 = local_50 - uVar31;
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<D3D12_SUBRESOURCE_TILING>_>
                  (0xc,4,&local_118,local_50,&local_4c);
        iVar40 = local_330;
      }
    }
  }
  if ((this->_padding_ == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Parent != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x59,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pIVar19 = FD3D12Device::GetDevice((FD3D12Device *)this->_padding_);
  local_268 = pIVar19;
  if ((this->_padding_ == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Parent != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x59,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  lVar32 = this->_padding_;
  if ((*(longlong *)(lVar32 + 0x10) == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParentAdapter != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x41,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_2a8 = *(FD3D12Adapter **)(lVar32 + 0x10);
  (**(code **)((longlong)*pIVar19 + 0x150))(pIVar19,(this->Resource).Reference,local_350,&local_178)
  ;
  bVar12 = local_178._1_1_;
  bVar14 = (byte)local_178;
  if (iVar40 == 1) {
    bVar14 = 1;
  }
  local_178 = CONCAT71(local_178._1_7_,bVar14);
  if ((local_50 != (uint)bVar12 + (uint)bVar14) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("MipTilingInfo.Num() == PackedMipDesc.NumStandardMips + PackedMipDesc.NumPackedMips"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                          ,0x110,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar10 = CVarD3D12ReservedResourceHeapSizeMB.Ref;
  iVar40 = local_178._4_4_;
  uVar33 = (ulonglong)local_350[0] * 0x10000;
  uVar38 = local_350[0] - (uint)uVar26 * local_178._4_4_;
  local_2f0 = uVar33;
  if (param_2 < uVar33) {
    local_2f0 = param_2;
  }
  local_2f0 = local_2f0 + 0xffff;
  bVar13 = IsInParallelGameThread();
  if ((bVar13) || (bVar13 = IsInGameThread(), bVar13)) {
    lVar32 = 0;
  }
  else {
    lVar32 = 4;
  }
  uVar41 = (ulonglong)*(int *)((longlong)pTVar10->ShadowedValue + lVar32);
  pFVar34 = (this->ReservedResourceData).Ptr;
  uVar42 = uVar41 * 0x100000;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar42;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = (uVar33 - 1) + uVar42;
  iVar17 = SUB164(auVar8 / auVar7,0);
  if (iVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(SUB168(auVar8 / auVar7,0) & 0xffffffff);
  }
  if ((pFVar34->BackingHeaps).ArrayMax < iVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar17,(ForAnyElementType *)pFVar34,(pFVar34->BackingHeaps).ArrayNum,
               &(pFVar34->BackingHeaps).ArrayMax);
  }
  uVar31 = (uint)(this->Desc)._padding_;
  local_2d0 = (uVar41 & 0xfffffffffff) << 4;
  local_2b0 = uVar31 & 3;
  if ((local_2b0 != 0) || (bVar13 = false, (uVar31 & 4) != 0)) {
    bVar13 = true;
  }
  if ((this->_padding_ == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Parent != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x59,L""), bVar15)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar31 = local_350[0];
  local_2a0 = *(uint *)(this->_padding_ + 8);
  if (GVirtualMGPU == 0) {
    local_324 = (uint)this->_padding_;
    local_320 = *(int *)((longlong)&this->_padding_ + 4);
  }
  else {
    local_324 = 1;
    local_320 = 1;
  }
  if (local_330 == 1) {
    if ((local_50 < 1) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    FVar20 = (ForElementType<D3D12_SUBRESOURCE_TILING>)&local_118;
    if (local_118.SecondaryData != (ForElementType<D3D12_SUBRESOURCE_TILING>)0x0) {
      FVar20 = local_118.SecondaryData;
    }
    uVar38 = uVar31;
    if ((local_350[0] != *(uint *)FVar20) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("D3DResourceNumTiles == MipTilingInfo[0].WidthInTiles",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                            ,0x136,
                            L"Reserved buffers are expected to have trivial tiling configuration: single 1D subresource that contains all tiles."
                           ), bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  else {
    uVar31 = uVar38 / uVar26;
    uVar38 = (uVar31 + iVar40) * (uint)uVar26;
  }
  if ((local_350[0] != uVar38) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("D3DResourceNumTiles == NumTotalTiles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                          ,0x142,L"D3D resource size in tiles: %d, computed size in tiles: %d"),
     bVar15)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar38 = local_350[0];
  local_328 = uVar31 + iVar40;
  uVar41 = (ulonglong)local_328;
  pFVar34 = (this->ReservedResourceData).Ptr;
  bVar15 = false;
  uVar33 = local_2f0 >> 0x10;
  local_348.Data = (FScriptContainerElement *)0x0;
  local_340 = 0;
  iStack_33c = 0;
  local_318.Data = (FScriptContainerElement *)0x0;
  local_310 = 0;
  local_29c = pFVar34->NumCommittedTiles;
  local_300 = local_350[0];
  uVar31 = (uint)(local_2f0 >> 0x10);
  local_2f0 = uVar33;
  if (uVar31 < local_29c) {
    if (((pFVar34->BackingHeaps).ArrayNum == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("!ReservedResourceData->BackingHeaps.IsEmpty()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                            ,0x18d,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar34 = (this->ReservedResourceData).Ptr;
    if (uVar31 < pFVar34->NumCommittedTiles) {
      do {
        iVar40 = (pFVar34->BackingHeaps).ArrayNum;
        uVar29 = iVar40 - 1;
        uVar31 = 0;
        if ((int)uVar29 < iVar40) {
          uVar31 = ~uVar29 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        local_2d8 = (pFVar34->BackingHeaps).AllocatorInstance.Data +
                    (longlong)(pFVar34->BackingHeaps).ArrayNum * 8 + -8;
        lVar32 = *(longlong *)local_2d8;
        local_208 = *(undefined4 *)(lVar32 + 0x48);
        uStack_204 = *(undefined4 *)(lVar32 + 0x4c);
        uStack_200 = *(undefined4 *)(lVar32 + 0x50);
        uStack_1fc = *(undefined4 *)(lVar32 + 0x54);
        local_1f8 = *(undefined8 *)(lVar32 + 0x58);
        uStack_1f0 = *(undefined8 *)(lVar32 + 0x60);
        local_2e0 = (FName)(*(ulonglong *)(lVar32 + 0x38) >> 0x10);
        uVar31 = (uint)(*(ulonglong *)(lVar32 + 0x38) >> 0x10);
        if ((uVar31 < ((this->ReservedResourceData).Ptr)->NumSlackTiles) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("ReservedResourceData->NumSlackTiles <= NumTotalTilesInHeap",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                                ,0x195,L""), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar34 = (this->ReservedResourceData).Ptr;
        uVar31 = uVar31 - pFVar34->NumSlackTiles;
        if ((pFVar34->NumCommittedTiles < uVar31) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("NumUsedTilesInHeap <= ReservedResourceData->NumCommittedTiles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                                ,0x198,L""), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar29 = ((this->ReservedResourceData).Ptr)->NumCommittedTiles;
        local_324 = uVar29 - uVar31;
        uVar31 = (uint)uVar33;
        if ((uint)uVar33 < local_324) {
          uVar31 = local_324;
        }
        uVar29 = uVar29 - uVar31;
        uStack_280 = 0;
        uStack_284 = 0;
        local_288 = uVar29;
        if ((uVar38 <= uVar31) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("OffsetInTiles < D3DResourceNumTiles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                                ,0x149,L""), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar40 = local_50;
        uVar39 = 0;
        local_320 = (int)(uVar31 / uVar41);
        uVar44 = (uint)((ulonglong)uVar31 % uVar41);
        uVar38 = uVar39;
        if ((byte)local_178 != '\0') {
          do {
            uVar18 = 0;
            if ((int)uVar38 < local_50) {
              uVar18 = ~uVar38 >> 0x1f;
            }
            if ((uVar18 == 0) &&
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
            lVar32 = (longlong)(int)uVar38;
            FVar20 = (ForElementType<D3D12_SUBRESOURCE_TILING>)&local_118;
            if (local_118.SecondaryData != (ForElementType<D3D12_SUBRESOURCE_TILING>)0x0) {
              FVar20 = local_118.SecondaryData;
            }
            uVar39 = uVar39 + (uint)*(ushort *)((uchar *)((longlong)FVar20 + 6) + lVar32 * 0xc) *
                              (uint)*(ushort *)((uchar *)((longlong)FVar20 + 4) + lVar32 * 0xc) *
                              *(uint *)((longlong)FVar20 + lVar32 * 0xc);
            if (uVar44 < uVar39) break;
            uVar38 = uVar38 + 1;
          } while (uVar38 < (byte)local_178);
        }
        iVar40 = iVar40 * local_320 + uVar38;
        uVar39 = 0;
        if ((int)uVar38 < local_50) {
          uVar39 = ~uVar38 >> 0x1f;
        }
        if ((uVar39 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar20 = (ForElementType<D3D12_SUBRESOURCE_TILING>)&local_118;
        if (local_118.SecondaryData != (ForElementType<D3D12_SUBRESOURCE_TILING>)0x0) {
          FVar20 = local_118.SecondaryData;
        }
        puVar2 = (uint *)((longlong)FVar20 + (longlong)(int)uVar38 * 0xc);
        if (uVar38 < (byte)local_178) {
          if ((puVar2[2] == 0xffffffff) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("CurrentMipTiling.StartTileIndexInOverallResource != ~0u",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                                  ,0x16b,L""), bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar44 = uVar44 - puVar2[2];
          uStack_1e4 = uVar44 % *puVar2;
          uStack_1dc = uVar44 / ((uint)(ushort)puVar2[1] * *puVar2);
          uStack_1e0 = (uint)(((ulonglong)uVar44 / (ulonglong)*puVar2) %
                             (ulonglong)(ushort)puVar2[1]);
        }
        else {
          if (((uint)local_2d0 < uVar29) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("NumTiles <= MaxTilesPerHeap",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                                  ,0x17c,
                                  L"Reserved texture packed mip level requires tiles: %d, maximum supported tiles: %d. Increase d3d12.ReservedResourceHeapSizeMB or avoid packed mips by using a larger texture dimensions."
                                 ), bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uStack_1dc = 0;
          uStack_1e4 = 0;
          uStack_1e0 = uStack_1dc;
        }
        local_1c4 = 0;
        local_1c0 = 0;
        local_1b8 = 0;
        local_1e8 = 1;
        uStack_1d4 = local_288;
        uStack_1d0 = uStack_284;
        uStack_1cc = (undefined4)uStack_280;
        uStack_1c8 = (undefined4)((ulonglong)uStack_280 >> 0x20);
        iStack_1d8 = iVar40;
        if (((local_348.Data <= (FScriptContainerElement *)&local_1e8) &&
            ((FScriptContainerElement *)&local_1e8 < local_348.Data + (longlong)iStack_33c * 0x38))
           && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (local_340 == iStack_33c) {
          local_340 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x838,&local_348,&iStack_33c);
        }
        this = local_2c8;
        pFVar37 = local_2d8;
        lVar32 = (longlong)local_340;
        local_340 = local_340 + 1;
        pFVar27 = local_348.Data + lVar32 * 0x38;
        *(ulonglong *)pFVar27 = CONCAT44(uStack_1e4,local_1e8);
        *(ulonglong *)(pFVar27 + 8) = CONCAT44(uStack_1dc,uStack_1e0);
        *(ulonglong *)(pFVar27 + 0x10) = CONCAT44(uStack_1d4,iStack_1d8);
        *(ulonglong *)(pFVar27 + 0x18) = CONCAT44(uStack_1cc,uStack_1d0);
        *(ulonglong *)(pFVar27 + 0x20) = CONCAT44(local_1c4,uStack_1c8);
        *(undefined8 *)(pFVar27 + 0x28) = local_1c0;
        *(ulonglong *)(pFVar27 + 0x30) = CONCAT44(uStack_1b4,local_1b8);
        if (local_324 == uVar31) {
          lVar32 = *(longlong *)local_2d8;
          local_208 = *(undefined4 *)(lVar32 + 0x48);
          uStack_204 = *(undefined4 *)(lVar32 + 0x4c);
          uStack_200 = *(undefined4 *)(lVar32 + 0x50);
          uStack_1fc = *(undefined4 *)(lVar32 + 0x54);
          lVar28 = *(longlong *)(lVar32 + 0x38);
          local_1f8 = *(undefined8 *)(lVar32 + 0x58);
          uStack_1f0 = *(undefined8 *)(lVar32 + 0x60);
          if (lVar28 != 0) {
            FVar22 = StatPtr_STAT_D3D12ReservedResourcePhysical;
            if (StatPtr_STAT_D3D12ReservedResourcePhysical ==
                (FThreadSafeStaticStat<FStat_STAT_D3D12ReservedResourcePhysical>)0x0) {
              pFVar21 = ::FName::FName(local_238,"STAT_D3D12ReservedResourcePhysical");
              FVar22 = (FThreadSafeStaticStat<FStat_STAT_D3D12ReservedResourcePhysical>)
                       FThreadSafeStaticStatBase::DoSetup
                                 ((FThreadSafeStaticStatBase *)
                                  &StatPtr_STAT_D3D12ReservedResourcePhysical,*pFVar21,
                                  L"Reserved Resource Physical Memory",
                                  "STATGROUP_D3D12MemoryDetails","STATCAT_Advanced",
                                  L"D3D12RHI: Memory Details",true,false,ST_int64,false,false,
                                  MCR_Physical);
            }
            FVar3 = *(FName *)FVar22;
            local_2e8 = (uint)FVar3.ComparisonIndex.Value;
            uStack_2e4 = FVar3.Number;
            FThreadStats::AddMessage<__int64>(FVar3,Subtract,lVar28,false);
          }
          lVar32 = *(longlong *)pFVar37;
          LOCK();
          piVar1 = (int *)(lVar32 + 8);
          *piVar1 = *piVar1 + 1;
          pFVar11 = FD3D12DynamicRHI::SingleD3DRHI;
          UNLOCK();
          lpCriticalSection = &FD3D12DynamicRHI::SingleD3DRHI->ObjectsToDeleteCS;
          if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::ReportNotNullPtr();
          }
          EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          iVar40 = (pFVar11->ObjectsToDelete).ArrayNum;
          piVar1 = &(pFVar11->ObjectsToDelete).ArrayMax;
          if (iVar40 == *piVar1) {
            iVar40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x830,&(pFVar11->ObjectsToDelete).AllocatorInstance,piVar1);
          }
          (pFVar11->ObjectsToDelete).ArrayNum = iVar40 + 1;
          pFVar37 = (pFVar11->ObjectsToDelete).AllocatorInstance.Data;
          *(undefined4 *)(pFVar37 + (longlong)iVar40 * 0x30) = 2;
          *(longlong *)(pFVar37 + (longlong)iVar40 * 0x30 + 8) = lVar32;
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          this = local_2c8;
          pFVar34 = (local_2c8->ReservedResourceData).Ptr;
          if (((pFVar34->BackingHeaps).ArrayNum < 1) &&
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
          lVar32 = (longlong)(pFVar34->BackingHeaps).ArrayNum;
          pFVar37 = (pFVar34->BackingHeaps).AllocatorInstance.Data;
          puVar35 = *(undefined8 **)(pFVar37 + lVar32 * 8 + -8);
          *(undefined8 *)(pFVar37 + lVar32 * 8 + -8) = 0;
          iVar40 = (pFVar34->BackingHeaps).ArrayNum;
          pFVar37 = (pFVar34->BackingHeaps).AllocatorInstance.Data;
          puVar4 = *(undefined8 **)(pFVar37 + (longlong)iVar40 * 8 + -8);
          pFVar37 = pFVar37 + (longlong)iVar40 * 8;
          if (puVar4 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar4 + 1);
            LOCK();
            iVar17 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar17 == 1) && (piVar1 != (int *)0x0)) {
              (**(code **)*puVar4)(puVar4,1);
            }
          }
          iVar40 = (pFVar34->BackingHeaps).ArrayNum - iVar40;
          if (iVar40 != 0) {
            memmove(pFVar37 + -8,pFVar37,(longlong)iVar40 << 3);
          }
          piVar1 = &(pFVar34->BackingHeaps).ArrayNum;
          *piVar1 = *piVar1 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,(ForAnyElementType *)pFVar34,(pFVar34->BackingHeaps).ArrayNum,
                     &(pFVar34->BackingHeaps).ArrayMax);
          if (puVar35 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar35 + 1);
            LOCK();
            iVar40 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar40 == 1) {
              if (piVar1 == (int *)0x0) {
                puVar35 = (undefined8 *)0x0;
              }
              if (puVar35 != (undefined8 *)0x0) {
                (**(code **)*puVar35)(puVar35,1);
              }
            }
          }
          pFVar34 = (this->ReservedResourceData).Ptr;
          iVar40 = (pFVar34->NumResidencyHandlesPerHeap).ArrayNum;
          uVar31 = iVar40 - 1;
          uVar38 = 0;
          if ((int)uVar31 < iVar40) {
            uVar38 = ~uVar31 >> 0x1f;
          }
          if ((uVar38 == 0) &&
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
          pFVar5 = (this->ReservedResourceData).Ptr;
          iVar40 = *(int *)((pFVar34->NumResidencyHandlesPerHeap).AllocatorInstance.Data +
                           (longlong)(pFVar34->NumResidencyHandlesPerHeap).ArrayNum * 4 + -4);
          if (((pFVar5->NumResidencyHandlesPerHeap).ArrayNum < 1) &&
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
          iVar17 = (pFVar5->NumResidencyHandlesPerHeap).ArrayNum;
          uVar38 = iVar17 - 1;
          pFVar37 = (pFVar5->NumResidencyHandlesPerHeap).AllocatorInstance.Data +
                    (longlong)(int)uVar38 * 4;
          iVar17 = ~uVar38 + iVar17;
          if (iVar17 != 0) {
            memmove(pFVar37,pFVar37 + 4,(longlong)iVar17 << 2);
          }
          piVar1 = &(pFVar5->NumResidencyHandlesPerHeap).ArrayNum;
          *piVar1 = *piVar1 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&(pFVar5->NumResidencyHandlesPerHeap).AllocatorInstance,
                     (pFVar5->NumResidencyHandlesPerHeap).ArrayNum,
                     &(pFVar5->NumResidencyHandlesPerHeap).ArrayMax);
          for (; iVar40 != 0; iVar40 = iVar40 + -1) {
            pFVar34 = (this->ReservedResourceData).Ptr;
            if (((pFVar34->ResidencyHandles).ArrayNum < 1) &&
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
            iVar17 = (pFVar34->ResidencyHandles).ArrayNum;
            uVar38 = iVar17 - 1;
            pFVar37 = (pFVar34->ResidencyHandles).AllocatorInstance.Data + (longlong)(int)uVar38 * 8
            ;
            iVar17 = ~uVar38 + iVar17;
            if (iVar17 != 0) {
              memmove(pFVar37,pFVar37 + 8,(longlong)iVar17 << 3);
            }
            piVar1 = &(pFVar34->ResidencyHandles).ArrayNum;
            *piVar1 = *piVar1 + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,&(pFVar34->ResidencyHandles).AllocatorInstance,
                       (pFVar34->ResidencyHandles).ArrayNum,&(pFVar34->ResidencyHandles).ArrayMax);
          }
          ((this->ReservedResourceData).Ptr)->NumSlackTiles = 0;
        }
        else {
          puVar2 = &((local_2c8->ReservedResourceData).Ptr)->NumSlackTiles;
          *puVar2 = *puVar2 + local_288;
          if ((local_2e0.ComparisonIndex.Value.Value <
               ((local_2c8->ReservedResourceData).Ptr)->NumSlackTiles) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ReservedResourceData->NumSlackTiles <= NumTotalTilesInHeap",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                                  ,0x1bf,L""), bVar13)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        if ((((this->ReservedResourceData).Ptr)->NumCommittedTiles < local_288) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("ReservedResourceData->NumCommittedTiles >= RegionSize.NumTiles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                                ,0x1c2,L""), bVar13)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        puVar2 = &((this->ReservedResourceData).Ptr)->NumCommittedTiles;
        *puVar2 = *puVar2 - local_288;
        pFVar34 = (this->ReservedResourceData).Ptr;
        if (pFVar34->NumCommittedTiles <= (uint)local_2f0) break;
        uVar41 = (ulonglong)local_328;
        uVar33 = local_2f0;
        uVar38 = local_300;
      } while( true );
    }
  }
  else {
    local_2e8 = (uint)(FLowLevelMemTracker::EnabledState != Disabled);
    if (local_29c < uVar31) {
      do {
        uVar31 = local_2e8;
        _Src = (void *)0x0;
        uVar38 = (int)local_2f0 - pFVar34->NumCommittedTiles;
        local_2f8 = (ID3D12Pageable *)0x0;
        local_298 = 0;
        uStack_290 = 0;
        uVar29 = 0;
        if (pFVar34->NumSlackTiles == 0) {
          local_2d8 = (FScriptContainerElement *)((ulonglong)local_2d8 & 0xffffffff00000000);
          if ((uint)local_2d0 < uVar38) {
            uVar38 = (uint)local_2d0;
          }
          local_298 = (ulonglong)uVar38;
          bVar16 = ::FName::IsWithinBounds((FNameEntryId)(this->DebugName).ComparisonIndex.Value);
          if (bVar16) {
            bVar15 = true;
            ::FName::ToString(&this->DebugName,local_228);
          }
          ::FString::PrintfImpl(&local_248,L"%s.Heap[%d]");
          if ((bVar15) &&
             (bVar15 = false,
             local_228[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
            FMemory::Free(local_228[0].Data.AllocatorInstance.Data);
          }
          local_134 = 0;
          FVar36.Data = (FScriptContainerElement *)L"";
          if (local_248.Data.ArrayNum != 0) {
            FVar36.Data = local_248.Data.AllocatorInstance.Data;
          }
          local_124 = 0;
          local_128 = 0x44;
          if (local_2b0 != 0) {
            local_128 = 0x84;
          }
          local_130 = 0x10000;
          local_148 = 1;
          if (local_330 == 1) {
            local_128 = 0xc0;
          }
          local_13c = local_324;
          local_138 = local_320;
          uVar38 = (uint)local_298 << 0x10;
          local_140 = 0;
          local_150 = (ulonglong)uVar38;
          iVar40 = (**(code **)((longlong)*local_268 + 0xe0))
                             (local_268,&local_150,&_GUID_6b3b2502_6e51_45b3_90ee_9884265e8df3);
          if (iVar40 < 0) {
            local_258.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_258.Data.ArrayNum = 0;
            local_258.Data.ArrayMax = 0;
            D3D12RHI::VerifyD3D12Result
                      (iVar40,"D3DDevice->CreateHeap(&NewHeapDesc, IID_PPV_ARGS(&D3DHeap))",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                       ,0x206,(ID3D12Device *)0x0,&local_258);
          }
          uVar33 = local_150;
          if (local_150 != 0) {
            TVar23 = FThreadSafeStaticStatInner<FStat_STAT_D3D12ReservedResourcePhysical,1>::
                     GetStatId((FThreadSafeStaticStatInner<FStat_STAT_D3D12ReservedResourcePhysical,1>
                                *)&StatPtr_STAT_D3D12ReservedResourcePhysical);
            local_2e0 = *(FName *)(TVar23.StatIdPtr)->Name;
            FThreadStats::AddMessage<__int64>(local_2e0,Add,uVar33,false);
          }
          if (bVar13) {
            FD3D12Adapter::SetResidencyPriority
                      (local_2a8,local_2f8,D3D12_RESIDENCY_PRIORITY_HIGH,local_2a0);
          }
          pFVar24 = ::operator_new(0x88);
          if (pFVar24 != (FD3D12Heap *)0x0) {
            uVar29 = *(uint *)((longlong)&this->_padding_ + 4);
            if ((this->_padding_ == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Parent != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                                    ,0x59,L""), bVar16)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            puVar2 = (uint *)this->_padding_;
            *(undefined4 *)&pFVar24->_padding_ = 0;
            pFVar24->_padding_ = (longlong)&___7FThreadSafeRefCountedObject__6B_;
            pFVar24->_padding_ = (longlong)puVar2;
            uVar39 = *puVar2;
            *(uint *)&pFVar24->_padding_ = uVar39;
            *(uint *)((longlong)&pFVar24->_padding_ + 4) = uVar29;
            if (((uVar39 & uVar29) == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("NodeMask.Intersects(VisibiltyMask)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                                    ,0x9e,L""), bVar16)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar24->bTrack = true;
            pFVar24->_padding_ = (longlong)&___7FD3D12Heap__6B_;
            (pFVar24->Heap).Reference = (ID3D12Heap *)0x0;
            (pFVar24->HeapName).ComparisonIndex = 0;
            (pFVar24->HeapName).Number = 0;
            pFVar24->GPUVirtualAddress = 0;
            pFVar24->ResidencyHandle = (FD3D12ResidencyHandle *)0x0;
            pFVar24->TraceParentHeapId = 1;
            pFVar24->bIsTransient = false;
            pFVar24->bRequiresResidencyTracking = true;
            LOCK();
            *(int *)&pFVar24->_padding_ = (int)pFVar24->_padding_ + 1;
            UNLOCK();
          }
          local_338 = pFVar24;
          FD3D12Heap::SetHeap(pFVar24,(ID3D12Heap *)local_2f8,(wchar_t *)FVar36.Data,true,
                              SUB41(uVar31,0));
          FD3D12Heap::BeginTrackingResidency(local_338,(ulonglong)uVar38);
          FD3D12Heap::GetResidencyHandles(local_338,&local_278);
          TArray<FD3D12ResidencyHandle_*,TSizedDefaultAllocator<32>_>::
          Append<TArrayView<FD3D12ResidencyHandle_*_const,int>_&>
                    (&((this->ReservedResourceData).Ptr)->ResidencyHandles,&local_278);
          pFVar34 = (this->ReservedResourceData).Ptr;
          local_32c = local_278.ArrayNum;
          pFVar37 = (pFVar34->NumResidencyHandlesPerHeap).AllocatorInstance.Data;
          if (((pFVar37 <= (FScriptContainerElement *)&local_32c) &&
              ((FScriptContainerElement *)&local_32c <
               pFVar37 + (longlong)(pFVar34->NumResidencyHandlesPerHeap).ArrayMax * 4)) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar16)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar40 = (pFVar34->NumResidencyHandlesPerHeap).ArrayNum;
          piVar1 = &(pFVar34->NumResidencyHandlesPerHeap).ArrayMax;
          if (iVar40 == *piVar1) {
            iVar40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&(pFVar34->NumResidencyHandlesPerHeap).AllocatorInstance,
                                piVar1);
          }
          (pFVar34->NumResidencyHandlesPerHeap).ArrayNum = iVar40 + 1;
          *(int *)((pFVar34->NumResidencyHandlesPerHeap).AllocatorInstance.Data +
                  (longlong)iVar40 * 4) = local_32c;
          pFVar34 = (this->ReservedResourceData).Ptr;
          pFVar37 = (pFVar34->BackingHeaps).AllocatorInstance.Data;
          if (((pFVar37 <= (FScriptContainerElement *)&local_338) &&
              ((FScriptContainerElement *)&local_338 <
               pFVar37 + (longlong)(pFVar34->BackingHeaps).ArrayMax * 8)) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar16)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar40 = (pFVar34->BackingHeaps).ArrayNum;
          piVar1 = &(pFVar34->BackingHeaps).ArrayMax;
          if (iVar40 == *piVar1) {
            iVar40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,(ForAnyElementType *)pFVar34,piVar1);
          }
          iVar17 = local_278.ArrayNum;
          (pFVar34->BackingHeaps).ArrayNum = iVar40 + 1;
          pFVar37 = (pFVar34->BackingHeaps).AllocatorInstance.Data;
          lVar32 = (longlong)local_278.ArrayNum;
          *(undefined8 *)(pFVar37 + (longlong)iVar40 * 8) = 0;
          *(FD3D12Heap **)(pFVar37 + (longlong)iVar40 * 8) = local_338;
          local_338 = (FD3D12Heap *)0x0;
          if (local_278.ArrayNum < 0) {
            bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x9a9,L"Invalid range size: %lld");
            if (bVar16) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
LAB_145a5668c:
            iVar40 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (8,8,iVar17,&local_318,(int *)&local_310,
                                (int *)((longlong)&local_310 + 4));
            memcpy(local_318.Data + (longlong)iVar40 * 8,local_278.DataPtr,lVar32 << 3);
          }
          else if (local_278.ArrayNum != 0) goto LAB_145a5668c;
          if (local_338 != (FD3D12Heap *)0x0) {
            piVar1 = (int *)((longlong)local_338 + 8);
            LOCK();
            iVar40 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar40 == 1) {
              pFVar24 = local_338;
              if (piVar1 == (int *)0x0) {
                pFVar24 = (FD3D12Heap *)(undefined8 *)0x0;
              }
              if (pFVar24 != (FD3D12Heap *)0x0) {
                (*(code *)**(undefined8 **)pFVar24)();
              }
            }
          }
          if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_248.Data.AllocatorInstance.Data);
          }
          uVar41 = (ulonglong)local_328;
        }
        else {
          iVar40 = (pFVar34->BackingHeaps).ArrayNum;
          uVar39 = iVar40 - 1;
          uVar31 = uVar29;
          if ((int)uVar39 < iVar40) {
            uVar31 = ~uVar39 >> 0x1f;
          }
          if ((uVar31 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar37 = (pFVar34->BackingHeaps).AllocatorInstance.Data;
          lVar28 = (longlong)(pFVar34->BackingHeaps).ArrayNum;
          lVar32 = *(longlong *)(pFVar37 + lVar28 * 8 + -8);
          pFVar34 = (this->ReservedResourceData).Ptr;
          uVar31 = pFVar34->NumSlackTiles;
          local_208 = *(undefined4 *)(lVar32 + 0x48);
          uStack_204 = *(undefined4 *)(lVar32 + 0x4c);
          uStack_200 = *(undefined4 *)(lVar32 + 0x50);
          uStack_1fc = *(undefined4 *)(lVar32 + 0x54);
          if (uVar31 < uVar38) {
            uVar38 = uVar31;
          }
          local_1f8 = *(undefined8 *)(lVar32 + 0x58);
          uStack_1f0 = *(undefined8 *)(lVar32 + 0x60);
          local_2d8 = (FScriptContainerElement *)
                      (ulonglong)((int)((ulonglong)*(undefined8 *)(lVar32 + 0x38) >> 0x10) - uVar31)
          ;
          local_298 = CONCAT44(local_298._4_4_,uVar38);
          local_2f8 = *(ID3D12Pageable **)(lVar32 + 0x20);
          if ((pFVar34->NumSlackTiles < uVar38) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("RegionSize.NumTiles <= ReservedResourceData->NumSlackTiles",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                                  ,0x1e2,L""), bVar16)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          puVar2 = &((this->ReservedResourceData).Ptr)->NumSlackTiles;
          *puVar2 = *puVar2 - (uint)local_298;
          lVar32 = *(longlong *)(pFVar37 + lVar28 * 8 + -8);
          if (*(char *)(lVar32 + 0x81) != '\0') {
            _Src = (void *)(lVar32 + 0x70);
            if ((*(longlong *)(lVar32 + 0x70) == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ResidencyHandle",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                                    ,0x5d,
                                    L"Resource requires residency tracking, but BeginTrackingResidency() was not called."
                                   ), bVar16)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            uVar29 = 1;
          }
          if (uVar29 != 0) {
            iVar40 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (8,8,uVar29,&local_318,(int *)&local_310,
                                (int *)((longlong)&local_310 + 4));
            memcpy(local_318.Data + (longlong)iVar40 * 8,_Src,(longlong)(int)uVar29 << 3);
          }
        }
        uVar31 = (uint)local_298;
        local_308 = (uint)local_298;
        uVar38 = ((this->ReservedResourceData).Ptr)->NumCommittedTiles;
        if ((local_300 <= uVar38) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("OffsetInTiles < D3DResourceNumTiles",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                                ,0x149,L""), bVar16)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar40 = local_50;
        uVar29 = 0;
        uVar39 = (uint)((ulonglong)uVar38 % uVar41);
        iVar17 = local_50;
        if ((byte)local_178 != '\0') {
          uVar44 = uVar29;
          do {
            uVar31 = 0;
            if ((int)uVar29 < iVar17) {
              uVar31 = ~uVar29 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               iVar17 = local_50, bVar16)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FVar20 = (ForElementType<D3D12_SUBRESOURCE_TILING>)&local_118;
            if (local_118.SecondaryData != (ForElementType<D3D12_SUBRESOURCE_TILING>)0x0) {
              FVar20 = local_118.SecondaryData;
            }
            lVar32 = (longlong)(int)uVar29;
            uVar44 = uVar44 + (uint)*(ushort *)((uchar *)((longlong)FVar20 + 6) + lVar32 * 0xc) *
                              (uint)*(ushort *)((uchar *)((longlong)FVar20 + 4) + lVar32 * 0xc) *
                              *(uint *)((longlong)FVar20 + lVar32 * 0xc);
            uVar31 = local_308;
            if (uVar39 < uVar44) break;
            uVar29 = uVar29 + 1;
          } while (uVar29 < (byte)local_178);
        }
        iVar40 = iVar40 * (int)(uVar38 / uVar41) + uVar29;
        uVar38 = 0;
        if ((int)uVar29 < iVar17) {
          uVar38 = ~uVar29 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar20 = (ForElementType<D3D12_SUBRESOURCE_TILING>)&local_118;
        if (local_118.SecondaryData != (ForElementType<D3D12_SUBRESOURCE_TILING>)0x0) {
          FVar20 = local_118.SecondaryData;
        }
        puVar2 = (uint *)((longlong)FVar20 + (longlong)(int)uVar29 * 0xc);
        if (uVar29 < (byte)local_178) {
          if ((puVar2[2] == 0xffffffff) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("CurrentMipTiling.StartTileIndexInOverallResource != ~0u",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                                  ,0x16b,L""), bVar16)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar39 = uVar39 - puVar2[2];
          uStack_1ac = uVar39 % *puVar2;
          uStack_1a4 = uVar39 / ((uint)(ushort)puVar2[1] * *puVar2);
          uStack_1a8 = (uint)(((ulonglong)uVar39 / (ulonglong)*puVar2) %
                             (ulonglong)(ushort)puVar2[1]);
        }
        else {
          if (((uint)local_2d0 < uVar31) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("NumTiles <= MaxTilesPerHeap",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                                  ,0x17c,
                                  L"Reserved texture packed mip level requires tiles: %d, maximum supported tiles: %d. Increase d3d12.ReservedResourceHeapSizeMB or avoid packed mips by using a larger texture dimensions."
                                 ), bVar16)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uStack_1ac = 0;
          uStack_1a4 = 0;
          uStack_1a8 = uStack_1a4;
        }
        local_188 = (ID3D12Heap *)local_2f8;
        local_180 = SUB84(local_2d8,0);
        local_18c = 0;
        local_1b0 = 0;
        uStack_19c = (undefined4)local_298;
        uStack_198 = (undefined4)(local_298 >> 0x20);
        uStack_194 = (undefined4)uStack_290;
        uStack_190 = (undefined4)((ulonglong)uStack_290 >> 0x20);
        iStack_1a0 = iVar40;
        if (((local_348.Data <= (FScriptContainerElement *)&local_1b0) &&
            ((FScriptContainerElement *)&local_1b0 < local_348.Data + (longlong)iStack_33c * 0x38))
           && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar16)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (local_340 == iStack_33c) {
          local_340 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x838,&local_348,&iStack_33c);
        }
        iVar40 = local_340 + 1;
        uVar41 = (ulonglong)local_328;
        lVar32 = (longlong)local_340 * 0x38;
        *(ulonglong *)(local_348.Data + lVar32) = CONCAT44(uStack_1ac,local_1b0);
        *(ulonglong *)(local_348.Data + lVar32 + 8) = CONCAT44(uStack_1a4,uStack_1a8);
        *(ulonglong *)(local_348.Data + lVar32 + 0x10) = CONCAT44(uStack_19c,iStack_1a0);
        *(ulonglong *)(local_348.Data + lVar32 + 0x10 + 8) = CONCAT44(uStack_194,uStack_198);
        *(ulonglong *)(local_348.Data + lVar32 + 0x20) = CONCAT44(local_18c,uStack_190);
        *(ID3D12Heap **)(local_348.Data + lVar32 + 0x20 + 8) = local_188;
        *(ulonglong *)(local_348.Data + lVar32 + 0x30) = CONCAT44(uStack_17c,local_180);
        puVar2 = &((local_2c8->ReservedResourceData).Ptr)->NumCommittedTiles;
        *puVar2 = *puVar2 + (uint)local_298;
        pFVar34 = (local_2c8->ReservedResourceData).Ptr;
        this = local_2c8;
        local_340 = iVar40;
      } while (pFVar34->NumCommittedTiles < (uint)local_2f0);
    }
  }
  this_02 = (ResidencySet *)0x0;
  if ((this->_padding_ == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Parent != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x59,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  lVar32 = this->_padding_;
  this_01 = (ResidencyManagerInternal *)(lVar32 + 0x48);
  pIVar43 = local_2c0;
  local_2a8 = (FD3D12Adapter *)this_01;
  if ((GEnableResidencyManagement != false) && ((int)local_310 != 0)) {
    pRVar25 = ::operator_new(0x28);
    if (pRVar25 != (ResidencySet *)0x0) {
      pRVar25->CommandListIndex = 0xffffffff;
      pRVar25->ppSet = (ManagedObject **)0x0;
      pRVar25->MaxResidencySetSize = 0;
      pRVar25->CurrentSetSize = 0;
      pRVar25->IsOpen = false;
      pRVar25->OutOfMemory = false;
      pRVar25->pSyncManager = (SyncManager *)(lVar32 + 0x1e8);
      this_02 = pRVar25;
    }
    iVar40 = D3DX12Residency::ResidencySet::Open(this_02);
    if ((iVar40 < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(((HRESULT)(HR)) >= 0)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                            ,0x232,L"Failed to open residency set. Error code: 0x%08x."), bVar13)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar40 = (int)local_310;
    pFVar37 = local_318.Data + (longlong)(int)local_310 * 8;
    FVar36.Data = local_318.Data;
    while( true ) {
      if ((int)local_310 != iVar40) {
        local_356 = 0;
        `TCheckedPointerIterator<FD3D12ResidencyHandle_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_356);
      }
      if (FVar36.Data == pFVar37) break;
      pMVar6 = *(ManagedObject **)FVar36.Data;
      if (((GEnableResidencyManagement != false) && (pMVar6 != (ManagedObject *)0x0)) &&
         (pMVar6->pUnderlying != (ID3D12Pageable *)0x0)) {
        D3DX12Residency::ResidencySet::Insert(this_02,pMVar6);
      }
      FVar36.Data = FVar36.Data + 8;
    }
    iVar40 = D3DX12Residency::ResidencySet::Close(this_02);
    if ((iVar40 < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(((HRESULT)(HR)) >= 0)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                            ,0x23d,L"Failed to close residency set. Error code: 0x%08x."), bVar13))
    {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pIVar43 = local_2c0;
    local_260 = (Fence *)0x0;
    iVar40 = D3DX12Residency::Internal::ResidencyManagerInternal::GetFence
                       (this_01,local_2c0,&local_260);
    if (-1 < iVar40) {
      lpCriticalSection_00 = (LPCRITICAL_SECTION)(lVar32 + 0x188);
      if (lpCriticalSection_00 != (LPCRITICAL_SECTION)0x0) {
        EnterCriticalSection(lpCriticalSection_00);
      }
      iVar40 = D3DX12Residency::Internal::ResidencyManagerInternal::EnqueueAsyncWork
                         (this_01,this_02,*(ulong64 *)(lVar32 + 0xd0),*(ulong64 *)(lVar32 + 0xf8));
      if (*(longlong *)(lVar32 + 0x118) != 0) {
        if (*(longlong *)(lVar32 + 0xa0) == *(longlong *)(lVar32 + 0xa8)) {
          pAVar30 = (AsyncWorkload *)0x0;
        }
        else {
          pAVar30 = (AsyncWorkload *)
                    (*(longlong *)(lVar32 + 0x58) +
                    (*(ulonglong *)(lVar32 + 0xa0) % *(ulonglong *)(lVar32 + 0x50)) * 0x18);
          *(longlong *)(lVar32 + 0xa0) = *(longlong *)(lVar32 + 0xa0) + 1;
        }
        D3DX12Residency::Internal::ResidencyManagerInternal::ProcessPagingWork(this_01,pAVar30);
      }
      if ((-1 < iVar40) &&
         (iVar40 = (**(code **)((longlong)*pIVar43 + 0x78))
                             (pIVar43,*(undefined8 *)(lVar32 + 200),*(undefined8 *)(lVar32 + 0xd0)),
         *(longlong *)(lVar32 + 0x118) == 0)) {
        *(longlong *)(lVar32 + 0xd0) = *(longlong *)(lVar32 + 0xd0) + 1;
      }
      if (lpCriticalSection_00 != (LPCRITICAL_SECTION)0x0) {
        LeaveCriticalSection(lpCriticalSection_00);
      }
      if (-1 < iVar40) goto LAB_145a56cf0;
    }
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(((HRESULT)(HR)) >= 0)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                        ,0x242,L"Failed to process residency set. Error code: 0x%08x.");
    if (bVar13) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
LAB_145a56cf0:
  iVar40 = local_340;
  pFVar27 = local_348.Data + (longlong)local_340 * 0x38;
  pFVar37 = local_348.Data + 0x14;
  while( true ) {
    if (local_340 != iVar40) {
      local_355 = 0;
      `TCheckedPointerIterator<FD3D12UpdateTileMappingsParams,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_355);
    }
    this_00 = local_2a8;
    if (pFVar37 + -0x14 == pFVar27) break;
    (**(code **)((longlong)*pIVar43 + 0x40))(pIVar43,(this->Resource).Reference,1,pFVar37 + -0x10);
    pFVar37 = pFVar37 + 0x38;
  }
  if ((GEnableResidencyManagement != false) && ((int)local_310 != 0)) {
    local_2b8 = (Fence *)0x0;
    iVar40 = D3DX12Residency::Internal::ResidencyManagerInternal::GetFence
                       ((ResidencyManagerInternal *)local_2a8,pIVar43,&local_2b8);
    if (-1 < iVar40) {
      lpCriticalSection_01 = (CriticalSection *)((longlong)this_00 + 0x140);
      if (lpCriticalSection_01 == (CriticalSection *)0x0) {
        D3DX12Residency::Internal::ResidencyManagerInternal::SignalFence
                  ((ResidencyManagerInternal *)this_00,pIVar43,local_2b8);
      }
      else {
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_01);
        D3DX12Residency::Internal::ResidencyManagerInternal::SignalFence
                  ((ResidencyManagerInternal *)this_00,pIVar43,local_2b8);
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_01);
      }
    }
  }
  if ((((this->ReservedResourceData).Ptr)->NumCommittedTiles != (uint)local_2f0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("ReservedResourceData->NumCommittedTiles == NumRequiredCommitTiles",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                          ,0x25c,
                          L"Reserved resource was not fully processed while committing physical memory. Expected to process tiles: %d, actually processed: %d"
                         ), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar38 = ((this->ReservedResourceData).Ptr)->NumCommittedTiles;
  if (uVar38 != local_29c) {
    iVar40 = -(uVar38 - local_29c);
    if (iVar40 < 0) {
      iVar40 = uVar38 - local_29c;
    }
    UE::RHICore::UpdateReservedResourceStatsOnCommit
              ((longlong)iVar40 << 0x10,local_354,local_29c <= uVar38);
  }
  if (local_318.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_318.Data);
  }
  if (local_348.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.Data);
  }
  if (local_118.SecondaryData != (ForElementType<D3D12_SUBRESOURCE_TILING>)0x0) {
    FMemory::Free((void *)local_118.SecondaryData);
  }
  FMemScopePtr::~FMemScopePtr(local_353);
  FLLMScopeFromPtr::~FLLMScopeFromPtr(&local_168);
  if (bVar45) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// DeferDelete @ 145a63220

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall FD3D12Resource::DeferDelete(FD3D12Resource *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FD3D12DynamicRHI *pFVar3;
  int iVar4;
  
  pFVar3 = FD3D12DynamicRHI::SingleD3DRHI;
  lpCriticalSection = &FD3D12DynamicRHI::SingleD3DRHI->ObjectsToDeleteCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar4 = (pFVar3->ObjectsToDelete).ArrayNum;
    piVar1 = &(pFVar3->ObjectsToDelete).ArrayMax;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&(pFVar3->ObjectsToDelete).AllocatorInstance,piVar1);
    }
    (pFVar3->ObjectsToDelete).ArrayNum = iVar4 + 1;
    pFVar2 = (pFVar3->ObjectsToDelete).AllocatorInstance.Data;
    *(undefined4 *)(pFVar2 + (longlong)iVar4 * 0x30) = 0;
    *(FD3D12Resource **)(pFVar2 + (longlong)iVar4 * 0x30 + 8) = this;
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetPageable @ 145a69850

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

ID3D12Pageable * __thiscall FD3D12Resource::GetPageable(FD3D12Resource *this)

{
  FD3D12Heap *pFVar1;
  
  pFVar1 = (this->Heap).Reference;
  if (pFVar1 != (FD3D12Heap *)0x0) {
    return (ID3D12Pageable *)(pFVar1->Heap).Reference;
  }
  return (ID3D12Pageable *)(this->Resource).Reference;
}

// InitializeResourceState @ 145a6c0a0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
FD3D12Resource::InitializeResourceState
          (FD3D12Resource *this,D3D12_HEAP_PROPERTIES *param_1,ED3D12Access param_2,
          ED3D12ResourceStateMode param_3,ED3D12Access param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  ED3D12Access EVar3;
  bool bVar4;
  ED3D12Access EVar5;
  short sVar6;
  byte bVar7;
  
  EVar3 = param_4;
  if ((((((param_4 & ReadOnlyExclusiveMask) != Unknown) && ((param_4 & WritableMask) != Unknown)) ||
       (((param_4 & WriteOnlyExclusiveMask) != Unknown && ((param_4 & ReadableMask) != Unknown))))
      || (((param_4 >> 0x14 & 1) != 0 &&
          ((param_4 == Unknown || ((param_4 & param_4 - CPURead) != Unknown)))))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidAccess(InDefaultD3D12Access)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                         ,0x1fd,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((((((param_2 & ReadOnlyExclusiveMask) != Unknown) && ((param_2 & WritableMask) != Unknown)) ||
       (((param_2 & WriteOnlyExclusiveMask) != Unknown && ((param_2 & ReadableMask) != Unknown))))
      || (((param_2 >> 0x14 & 1) != 0 &&
          ((param_2 == Unknown || ((param_2 & param_2 - CPURead) != Unknown)))))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidAccess(InInitialD3D12Access)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                         ,0x1fe,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((int)(this->Desc)._padding_ == 4) {
    sVar6 = 1;
  }
  else {
    sVar6 = *(short *)((longlong)&(this->Desc)._padding_ + 4);
  }
  this->SubresourceCount =
       (ushort)this->PlaneCount * sVar6 * *(short *)((longlong)&(this->Desc)._padding_ + 6);
  if (param_3 == SingleState) {
    if ((param_2 == Unknown) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InInitialD3D12Access != ED3D12Access::Unknown",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                           ,0x205,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((EVar3 == Unknown) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InDefaultD3D12Access != ED3D12Access::Unknown",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                           ,0x206,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this->InitialD3D12Access = param_2;
    this->bRequiresResourceStateTracking = false;
    this->DefaultD3D12Access = EVar3;
  }
  else {
    FD3D12ResourceTypeHelper::FD3D12ResourceTypeHelper
              ((FD3D12ResourceTypeHelper *)&param_4,&this->Desc,this->HeapType);
    puVar1 = &this->field_0xab;
    bVar7 = ((char)(param_4 >> 1) << 2 ^ *puVar1) & 4U ^ *puVar1;
    *puVar1 = bVar7;
    if (((param_4 & SRVCompute) == Unknown) && (param_3 != MultiState)) {
      *puVar1 = bVar7 & 0xfe;
      EVar5 = EVar3;
      if (EVar3 == Unknown) {
        if ((param_4 & SRVGraphicsNonPixel) == Unknown) {
          if (((param_4 & SRVGraphicsPixel) == Unknown) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type.bSRVOnly",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                                 ,0x240,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          EVar5 = SRVGraphics;
        }
        else {
          EVar5 = DetermineInitialBufferD3D12Access(this->HeapType,param_1);
        }
      }
      this->DefaultD3D12Access = EVar5;
      if ((param_2 == Unknown) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InInitialD3D12Access != ED3D12Access::Unknown",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                             ,0x244,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this->InitialD3D12Access = param_2;
    }
  }
  if (this->bRequiresResourceStateTracking) {
    if ((((param_2 & (BVHWrite|BVHRead)) != Unknown) && ((EVar3 & (BVHWrite|BVHRead)) != Unknown))
       && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("!EnumHasAnyFlags(InInitialD3D12Access, ED3D12Access::BVHRead | ED3D12Access::BVHWrite) || !EnumHasAnyFlags(InDefaultD3D12Access, ED3D12Access::BVHRead | ED3D12Access::BVHWrite)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                              ,0x219,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((param_2 == Unknown) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InInitialD3D12Access != ED3D12Access::Unknown",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                           ,0x21c,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this->InitialD3D12Access = param_2;
  }
  return;
}

// StartTrackingForResidency @ 145a7ef10

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

void __thiscall FD3D12Resource::StartTrackingForResidency(FD3D12Resource *this)

{
  code *pcVar1;
  D3D12_HEAP_TYPE DVar2;
  bool bVar3;
  FD3D12ResidencyHandle *pFVar4;
  FD3D12ResidencyHandle *pFVar5;
  undefined1 auStack_48 [32];
  D3D12_RESOURCE_ALLOCATION_INFO local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (this->bRequiresResidencyTracking) {
    DVar2 = this->HeapType;
    if ((this->HeapType == D3D12_HEAP_TYPE_CUSTOM) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("HeapType == D3D12_HEAP_TYPE_CUSTOM ? pCustomHeapProperties != nullptr : true"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.h"
                           ,0x176,L""), DVar2 = _DAT_00000004, bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((DVar2 != D3D12_HEAP_TYPE_DEFAULT) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsGPUOnly(HeapType)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                           ,0x27a,L"Residency tracking is not expected for CPU-accessible resources"
                          ), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (((this->Desc).bBackBuffer) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Desc.bBackBuffer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                           ,0x27b,L"Residency tracking is not expected for back buffers"), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (((this->Desc).bExternal) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Desc.bExternal",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                           ,0x27c,
                           L"Residency tracking is not expected for externally-owned resources"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (((this->Heap).Reference == (FD3D12Heap *)0x0) &&
       ((this->ReservedResourceData).Ptr == (FD3D12ReservedResourceData *)0x0)) {
      if ((this->ResidencyHandle != (FD3D12ResidencyHandle *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!ResidencyHandle",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                             ,0x280,L"Residency tracking is already initialzied for this resource"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar4 = ::operator_new(0x440);
      pFVar5 = (FD3D12ResidencyHandle *)0x0;
      if (pFVar4 != (FD3D12ResidencyHandle *)0x0) {
        *(undefined4 *)&pFVar4->_padding_ = 0;
        pFVar4->_padding_ = 0;
        pFVar4->_padding_ = 0;
        pFVar4->_padding_ = 0;
        pFVar4->_padding_ = 0;
        memset(&pFVar4->_padding_,0,0x400);
        pFVar4->GPUObject = (FD3D12GPUObject *)0x0;
        pFVar5 = pFVar4;
      }
      this->ResidencyHandle = pFVar5;
      if ((this->_padding_ == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Parent != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                             ,0x59,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FD3D12Device::GetResourceAllocationInfoUncached
                ((FD3D12Device *)this->_padding_,&local_28,&this->Desc);
      pFVar5 = this->ResidencyHandle;
      if (GEnableResidencyManagement != false) {
        pFVar5->_padding_ = (longlong)(this->Resource).Reference;
        pFVar5->_padding_ = local_28.SizeInBytes;
        pFVar4 = (FD3D12ResidencyHandle *)&this->_padding_;
        if (this == (FD3D12Resource *)0x0) {
          pFVar4 = (FD3D12ResidencyHandle *)0x0;
        }
        pFVar5->_padding_ = 0;
        pFVar5->GPUObject = (FD3D12GPUObject *)pFVar4;
      }
      pFVar5 = this->ResidencyHandle;
      if ((this->_padding_ == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Parent != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                             ,0x59,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (GEnableResidencyManagement != false) {
        D3DX12Residency::Internal::ResidencyManagerInternal::BeginTrackingObject
                  ((ResidencyManagerInternal *)(this->_padding_ + 0x48),(ManagedObject *)pFVar5);
      }
    }
  }
  return;
}

