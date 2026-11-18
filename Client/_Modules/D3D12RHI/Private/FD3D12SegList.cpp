// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 2

// CreateBackingHeap @ 1459b9020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12SegHeap * __thiscall
FD3D12SegList::CreateBackingHeap
          (FD3D12SegList *this,FD3D12Device *param_1,FRHIGPUMask param_2,D3D12_HEAP_TYPE param_3,
          D3D12_HEAP_FLAGS param_4)

{
  int *piVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ID3D12Heap *pIVar5;
  bool bVar6;
  int iVar7;
  FD3D12SegHeap *pFVar8;
  ID3D12Device *pIVar9;
  undefined1 auStackY_e8 [32];
  FD3D12SegHeap *local_98;
  ID3D12Heap *local_90;
  FString local_88;
  ulonglong local_78;
  D3D12_HEAP_TYPE local_70;
  undefined8 local_6c;
  undefined4 local_64;
  uint local_60;
  undefined8 local_5c;
  undefined4 local_54;
  D3D12_HEAP_FLAGS local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_78 = (ulonglong)this->HeapSize;
  local_90 = (ID3D12Heap *)0x0;
  local_5c = 0;
  local_64 = 1;
  local_60 = param_2.GPUMask;
  if (GVirtualMGPU != 0) {
    local_60 = 1;
  }
  local_54 = 0;
  local_4c = 0;
  if (GVirtualMGPU == 0) {
    local_64 = *(undefined4 *)param_1;
  }
  local_50 = param_4;
  local_6c = 0;
  local_70 = param_3;
  if (*(longlong *)&param_1->field_0x10 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentAdapter != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x41,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FD3D12SegHeap *)(*pcVar4)();
      return pFVar8;
    }
  }
  if (*(char *)(*(longlong *)&param_1->field_0x10 + 0xc6) != '\0') {
    local_50 = local_50 | D3D12_HEAP_FLAG_CREATE_NOT_ZEROED;
  }
  pIVar9 = FD3D12Device::GetDevice(param_1);
  iVar7 = (**(code **)((longlong)*pIVar9 + 0xe0))
                    (pIVar9,&local_78,&_GUID_6b3b2502_6e51_45b3_90ee_9884265e8df3,&local_90);
  if (iVar7 < 0) {
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    D3D12RHI::VerifyD3D12Result
              (iVar7,"Parent->GetDevice()->CreateHeap(&Desc, IID_PPV_ARGS(&D3DHeap))",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.cpp"
               ,0x9b3,(ID3D12Device *)0x0,&local_88);
  }
  local_98 = ::operator_new(0xa8);
  pIVar5 = local_90;
  if (local_98 == (FD3D12SegHeap *)0x0) {
    local_98 = (FD3D12SegHeap *)0x0;
  }
  else {
    iVar7 = (this->FreeHeaps).ArrayNum;
    uVar2 = this->HeapSize;
    FD3D12Heap::FD3D12Heap((FD3D12Heap *)local_98,param_1,param_2,1);
    local_98->ArrayIdx = iVar7;
    local_98->_padding_ = (longlong)&___7FD3D12SegHeap__6B_;
    local_98->OwnerList = this;
    (local_98->FreeBlockOffsets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (local_98->FreeBlockOffsets).ArrayNum = 0;
    (local_98->FreeBlockOffsets).ArrayMax = 0;
    local_98->FirstFreeOffset = 0;
    FD3D12Heap::SetHeap((FD3D12Heap *)local_98,pIVar5,L"SegListHeap",true,false);
    FD3D12Heap::BeginTrackingResidency((FD3D12Heap *)local_98,(ulonglong)uVar2);
    LOCK();
    *(int *)&local_98->_padding_ = (int)local_98->_padding_ + 1;
    UNLOCK();
  }
  pFVar8 = local_98;
  pFVar3 = (this->FreeHeaps).AllocatorInstance.Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_98) &&
     ((FScriptContainerElement *)&local_98 < pFVar3 + (longlong)(this->FreeHeaps).ArrayMax * 8)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FD3D12SegHeap *)(*pcVar4)();
      return pFVar8;
    }
  }
  iVar7 = (this->FreeHeaps).ArrayNum;
  piVar1 = &(this->FreeHeaps).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,piVar1);
  }
  (this->FreeHeaps).ArrayNum = iVar7 + 1;
  pFVar3 = (this->FreeHeaps).AllocatorInstance.Data;
  *(undefined8 *)(pFVar3 + (longlong)iVar7 * 8) = 0;
  *(FD3D12SegHeap **)(pFVar3 + (longlong)iVar7 * 8) = local_98;
  return pFVar8;
}

// FreeBlock @ 1459c0bd0

void __thiscall FD3D12SegList::FreeBlock(FD3D12SegList *this,FD3D12SegHeap *param_1,uint param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint local_res18 [2];
  FD3D12SegHeap *local_28 [2];
  
  lpCriticalSection = &this->CS;
  local_res18[0] = param_2;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (local_res18[0] % this->BlockSize != 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!(Offset % BlockSize)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.h"
                       ,0x2c2,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (this->HeapSize - this->BlockSize < local_res18[0]) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Offset <= HeapSize - BlockSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.h"
                       ,0x2c3,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (this != param_1->OwnerList) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("this == Heap->OwnerList",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.h"
                       ,0x2c4,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  bVar6 = FD3D12SegHeap::IsFull(param_1,this->HeapSize);
  pTVar2 = &param_1->FreeBlockOffsets;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar4 <= (FScriptContainerElement *)local_res18) &&
     ((FScriptContainerElement *)local_res18 <
      pFVar4 + (longlong)(param_1->FreeBlockOffsets).ArrayMax * 4)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar8 = (param_1->FreeBlockOffsets).ArrayNum;
  piVar1 = &(param_1->FreeBlockOffsets).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  (param_1->FreeBlockOffsets).ArrayNum = iVar8 + 1;
  *(uint *)(pFVar4 + (longlong)iVar8 * 4) = local_res18[0];
  if (bVar6) {
    if (-1 < param_1->ArrayIdx) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Heap->IsArrayIdxValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.h"
                         ,0x2cc,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    *(int *)&param_1->_padding_ = (int)param_1->_padding_ + 1;
    UNLOCK();
    pFVar4 = (this->FreeHeaps).AllocatorInstance.Data;
    local_28[0] = param_1;
    if ((pFVar4 <= (FScriptContainerElement *)local_28) &&
       ((FScriptContainerElement *)local_28 < pFVar4 + (longlong)(this->FreeHeaps).ArrayMax * 8)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar8 = (this->FreeHeaps).ArrayNum;
    piVar1 = &(this->FreeHeaps).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)this,piVar1);
    }
    (this->FreeHeaps).ArrayNum = iVar8 + 1;
    pFVar4 = (this->FreeHeaps).AllocatorInstance.Data;
    *(undefined8 *)(pFVar4 + (longlong)iVar8 * 8) = 0;
    param_1->ArrayIdx = iVar8;
    *(FD3D12SegHeap **)(pFVar4 + (longlong)iVar8 * 8) = local_28[0];
  }
  else if ((iVar8 + 1) * this->BlockSize == param_1->FirstFreeOffset) {
    if ((int)param_1->_padding_ != 1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Heap->GetRefCount() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.h"
                         ,0x2d2,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (param_1->ArrayIdx < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Heap->IsArrayIdxValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.h"
                         ,0x2d3,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if ((this->FreeHeaps).ArrayNum <= param_1->ArrayIdx) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("FreeHeaps.Num() > Heap->ArrayIdx",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Allocation.h"
                         ,0x2d4,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar3 = param_1->ArrayIdx;
    iVar8 = (this->FreeHeaps).ArrayNum;
    uVar9 = 0;
    if ((int)uVar3 < iVar8) {
      uVar9 = ~uVar3 >> 0x1f;
    }
    if (uVar9 == 0) {
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
    TArray<TRefCountPtr<FD3D12SegHeap>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
              (&this->FreeHeaps,uVar3);
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(ForAnyElementType *)this,(this->FreeHeaps).ArrayNum,&(this->FreeHeaps).ArrayMax)
    ;
    if (uVar3 != iVar8 - 1U) {
      uVar9 = 0;
      if ((int)uVar3 < (this->FreeHeaps).ArrayNum) {
        uVar9 = ~uVar3 >> 0x1f;
      }
      if (uVar9 == 0) {
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
      *(uint *)(*(longlong *)((this->FreeHeaps).AllocatorInstance.Data + (longlong)(int)uVar3 * 8) +
               0xa0) = uVar3;
    }
    this->TotalBytesAllocated = this->TotalBytesAllocated - (ulonglong)this->HeapSize;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

