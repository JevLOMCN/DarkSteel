// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 7

// FD3D12Heap @ 145a43fe0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12Heap * __thiscall
FD3D12Heap::FD3D12Heap(FD3D12Heap *this,FD3D12Device *param_1,FRHIGPUMask param_2,uint param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FD3D12Heap *pFVar4;
  
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FThreadSafeRefCountedObject__6B_;
  this->_padding_ = (longlong)param_1;
  uVar1 = *(uint *)param_1;
  *(uint *)&this->_padding_ = uVar1;
  *(uint *)((longlong)&this->_padding_ + 4) = param_2.GPUMask;
  if ((param_2.GPUMask & uVar1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NodeMask.Intersects(VisibiltyMask)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x9e,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FD3D12Heap *)(*pcVar2)();
      return pFVar4;
    }
  }
  this->GPUVirtualAddress = 0;
  this->_padding_ = (longlong)&___7FD3D12Heap__6B_;
  (this->Heap).Reference = (ID3D12Heap *)0x0;
  (this->HeapName).ComparisonIndex = 0;
  (this->HeapName).Number = 0;
  this->ResidencyHandle = (FD3D12ResidencyHandle *)0x0;
  this->bTrack = true;
  this->TraceParentHeapId = param_3;
  this->bIsTransient = false;
  this->bRequiresResidencyTracking = true;
  return this;
}

// ~FD3D12Heap @ 145a47f40

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12Heap::~FD3D12Heap(FD3D12Heap *this)

{
  longlong lVar1;
  FD3D12ResidencyHandle *pFVar2;
  ID3D12Heap *pIVar3;
  code *pcVar4;
  bool bVar5;
  
  this->_padding_ = (longlong)&___7FD3D12Heap__6B_;
  if (this->GPUVirtualAddress != 0) {
    MemoryTrace_UnmarkAllocAsHeap(this->GPUVirtualAddress,this->TraceHeapId,0);
    MemoryTrace_Free(this->GPUVirtualAddress,1,0);
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
  if (*(longlong *)(lVar1 + 0x10) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentAdapter != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x41,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((this->GPUVirtualAddress != 0) && (this->bTrack != false)) {
    FD3D12Adapter::ReleaseTrackedHeap(*(FD3D12Adapter **)(lVar1 + 0x10),this);
  }
  pFVar2 = this->ResidencyHandle;
  if (((GEnableResidencyManagement != false) && (pFVar2 != (FD3D12ResidencyHandle *)0x0)) &&
     ((ID3D12Pageable *)pFVar2->_padding_ != (ID3D12Pageable *)0x0)) {
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
    if (GEnableResidencyManagement != false) {
      D3DX12Residency::Internal::ResidencyManagerInternal::EndTrackingObject
                ((ResidencyManagerInternal *)(this->_padding_ + 0x48),(ManagedObject *)pFVar2);
    }
  }
  ::operator_delete(this->ResidencyHandle,0x440);
  pIVar3 = (this->Heap).Reference;
  if (pIVar3 != (ID3D12Heap *)0x0) {
    (this->Heap).Reference = (ID3D12Heap *)0x0;
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  pIVar3 = (this->Heap).Reference;
  if (pIVar3 != (ID3D12Heap *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  this->_padding_ = (longlong)&___7FThreadSafeRefCountedObject__6B_;
  if ((int)this->_padding_ != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Super::GetRefCount() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0x124,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// BeginTrackingResidency @ 145a53c10

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */

void __thiscall FD3D12Heap::BeginTrackingResidency(FD3D12Heap *this,ulong64 param_1)

{
  ID3D12Heap *pIVar1;
  code *pcVar2;
  bool bVar3;
  FD3D12ResidencyHandle *pFVar4;
  FD3D12ResidencyHandle *pFVar5;
  
  if ((this->bRequiresResidencyTracking == false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bRequiresResidencyTracking",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                         ,0x2f8,L"Residency tracking is not expected for this resource"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((this->ResidencyHandle != (FD3D12ResidencyHandle *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ResidencyHandle",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                         ,0x2f9,L"Residency tracking is already initialzied for this resource"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
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
  pIVar1 = (this->Heap).Reference;
  this->ResidencyHandle = pFVar5;
  if (GEnableResidencyManagement != false) {
    pFVar5->_padding_ = (longlong)pIVar1;
    pFVar5->_padding_ = param_1;
    pFVar4 = (FD3D12ResidencyHandle *)&this->_padding_;
    if (this == (FD3D12Heap *)0x0) {
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
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (GEnableResidencyManagement != false) {
    D3DX12Residency::Internal::ResidencyManagerInternal::BeginTrackingObject
              ((ResidencyManagerInternal *)(this->_padding_ + 0x48),(ManagedObject *)pFVar5);
  }
  return;
}

// DeferDelete @ 145a63170

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */

void __thiscall FD3D12Heap::DeferDelete(FD3D12Heap *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FD3D12DynamicRHI *pFVar3;
  int iVar4;
  
  LOCK();
  *(int *)&this->_padding_ = (int)this->_padding_ + 1;
  pFVar3 = FD3D12DynamicRHI::SingleD3DRHI;
  UNLOCK();
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
    *(undefined4 *)(pFVar2 + (longlong)iVar4 * 0x30) = 2;
    *(FD3D12Heap **)(pFVar2 + (longlong)iVar4 * 0x30 + 8) = this;
    if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// DisallowTrackingResidency @ 145a638d0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */

void __thiscall FD3D12Heap::DisallowTrackingResidency(FD3D12Heap *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->ResidencyHandle == (FD3D12ResidencyHandle *)0x0) {
    this->bRequiresResidencyTracking = false;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("ResidencyHandle == nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                     ,0x2f0,
                     L"Can\'t disallow residency tracking after it has started. Call this function instead of BeginTrackingResidency()."
                    );
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->bRequiresResidencyTracking = false;
  return;
}

// GetResidencyHandles @ 145a6a110

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */

TArrayView<FD3D12ResidencyHandle_*_const,int> * __thiscall
FD3D12Heap::GetResidencyHandles
          (FD3D12Heap *this,TArrayView<FD3D12ResidencyHandle_*_const,int> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<FD3D12ResidencyHandle_*_const,int> *pTVar3;
  
  if (this->bRequiresResidencyTracking == false) {
    __return_storage_ptr__->DataPtr = (FD3D12ResidencyHandle **)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    return __return_storage_ptr__;
  }
  if (this->ResidencyHandle == (FD3D12ResidencyHandle *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ResidencyHandle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.h"
                       ,0x5d,
                       L"Resource requires residency tracking, but BeginTrackingResidency() was not called."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TArrayView<FD3D12ResidencyHandle_*_const,int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  __return_storage_ptr__->DataPtr = &this->ResidencyHandle;
  __return_storage_ptr__->ArrayNum = 1;
  return __return_storage_ptr__;
}

// SetHeap @ 145a7d4d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145a7d7f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12Heap::SetHeap(FD3D12Heap *this,ID3D12Heap *param_1,wchar_t *param_2,bool param_3,bool param_4)

{
  D3D12_CPU_PAGE_PROPERTY DVar1;
  ID3D12Heap *pIVar2;
  longlong lVar3;
  FD3D12Adapter *this_00;
  ID3D12Device *pIVar4;
  code *pcVar5;
  ulong64 uVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  ulong64 *puVar10;
  ulong64 uVar11;
  FString *pFVar12;
  ForAnyElementType FVar13;
  undefined1 auStackY_1a8 [32];
  undefined4 uStack_15c;
  uint uStack_12c;
  FName local_128;
  FString local_120;
  FString local_110;
  FString local_100;
  ulong64 local_f0;
  uint local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ulong64 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  longlong local_b0;
  undefined1 local_a8 [56];
  undefined1 local_70 [48];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  pIVar2 = (this->Heap).Reference;
  if (pIVar2 != (ID3D12Heap *)0x0) {
    (this->Heap).Reference = (ID3D12Heap *)0x0;
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  (this->Heap).Reference = param_1;
  this->bTrack = param_3;
  ::FName::FName(&local_128,param_2);
  pIVar2 = (this->Heap).Reference;
  this->HeapName = local_128;
  puVar10 = (ulong64 *)(**(code **)((longlong)*pIVar2 + 0x40))(pIVar2,local_70);
  uVar11 = puVar10[1];
  (this->HeapDesc).SizeInBytes = *puVar10;
  (this->HeapDesc).Properties.Type = (int)uVar11;
  (this->HeapDesc).Properties.CPUPageProperty = (int)(uVar11 >> 0x20);
  uVar11 = puVar10[2];
  uVar6 = puVar10[3];
  (this->HeapDesc).Properties.MemoryPoolPreference = (int)uVar11;
  (this->HeapDesc).Properties.CreationNodeMask = (int)(uVar11 >> 0x20);
  *(ulong64 *)&(this->HeapDesc).Properties.VisibleNodeMask = uVar6;
  uVar11 = puVar10[5];
  (this->HeapDesc).Alignment = puVar10[4];
  *(ulong64 *)&(this->HeapDesc).Flags = uVar11;
  SetD3D12ObjectName((ID3D12Object *)param_1,param_2);
  DVar1 = (this->HeapDesc).Properties.Type;
  if (DVar1 == 4) {
    if ((this == (FD3D12Heap *)0xffffffffffffffc0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("HeapType == D3D12_HEAP_TYPE_CUSTOM ? pCustomHeapProperties != nullptr : true"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.h"
                           ,0x176,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    DVar1 = (this->HeapDesc).Properties.CPUPageProperty;
  }
  this->bRequiresResidencyTracking = DVar1 == D3D12_CPU_PAGE_PROPERTY_NOT_AVAILABLE;
  if ((this->_padding_ == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar3 = this->_padding_;
  if ((*(longlong *)(lVar3 + 0x10) == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this_00 = *(FD3D12Adapter **)(lVar3 + 0x10);
  if ((((param_4) || (this_00->bTrackAllAllocation != false)) &&
      (((this->HeapDesc).Flags & D3D12_HEAP_FLAG_DENY_BUFFERS) ==
       D3D12_HEAP_FLAG_ALLOW_ALL_BUFFERS_AND_TEXTURES)) &&
     ((this->HeapDesc).Properties.Type == D3D12_HEAP_TYPE_DEFAULT)) {
    local_d0 = (this->HeapDesc).SizeInBytes;
    pIVar4 = (this_00->RootDevice).Reference;
    local_e0 = CONCAT44(uStack_15c,1);
    uStack_c8 = 0x1000100000001;
    uStack_d8 = 0;
    local_b0 = (ulonglong)uStack_12c << 0x20;
    local_c0 = 0;
    uStack_bc = 1;
    uStack_b8 = 0;
    uStack_b4 = 1;
    iVar8 = (**(code **)((longlong)*pIVar4 + 0xe8))(pIVar4,(this->Heap).Reference,0,&local_e0);
    if (iVar8 < 0) {
      local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_120.Data.ArrayNum = 0;
      local_120.Data.ArrayMax = 0;
      D3D12RHI::VerifyD3D12Result
                (iVar8,
                 "Adapter->GetD3DDevice()->CreatePlacedResource(Heap, 0, &BufDesc, D3D12_RESOURCE_STATE_COMMON, nullptr, IID_PPV_ARGS(TempResource.GetInitReference()))"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Resources.cpp"
                 ,0x2d7,(ID3D12Device *)0x0,&local_120);
    }
    uVar11 = (**(code **)(_DAT_00000000 + 0x58))();
    this->GPUVirtualAddress = uVar11;
    pFVar12 = ::FString::FString(&local_100,param_2);
    ::FString::ConcatFC(&local_110,pFVar12,L" D3D12Heap");
    FVar13.Data = (FScriptContainerElement *)L"";
    if (local_110.Data.ArrayNum != 0) {
      FVar13.Data = local_110.Data.AllocatorInstance.Data;
    }
    uVar9 = MemoryTrace_HeapSpec(this->TraceParentHeapId,(wchar_t *)FVar13.Data,None);
    this->TraceHeapId = uVar9;
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    if (-1 < MemAllocChannel->Enabled) {
      (**(code **)(_DAT_00000000 + 0x50))(0,local_a8);
      pIVar4 = (this_00->RootDevice).Reference;
      (**(code **)((longlong)*pIVar4 + 200))(pIVar4,&local_f0,0,1);
      MemoryTrace_Alloc(this->GPUVirtualAddress,local_f0,local_e8,1,0);
      MemoryTrace_MarkAllocAsHeap(this->GPUVirtualAddress,this->TraceHeapId,None,0);
    }
    if (this->bTrack != false) {
      FD3D12Adapter::TrackHeapAllocation(this_00,this);
    }
  }
  return;
}

