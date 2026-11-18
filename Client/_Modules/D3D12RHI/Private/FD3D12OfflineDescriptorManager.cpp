// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 6

// FD3D12OfflineDescriptorManager @ 1459ee9e0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12OfflineDescriptorManager * __thiscall
FD3D12OfflineDescriptorManager::FD3D12OfflineDescriptorManager
          (FD3D12OfflineDescriptorManager *this,FD3D12Device *param_1,ERHIDescriptorHeapType param_2
          )

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  D3D12_DESCRIPTOR_HEAP_TYPE DVar5;
  uint uVar6;
  FD3D12OfflineDescriptorManager *pFVar7;
  
  this->_padding_ = (longlong)param_1;
  (this->Heaps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Heaps).ArrayNum = 0;
  (this->Heaps).ArrayMax = 0;
  (this->FreeHeaps).HeadNode = (TDoubleLinkedListNode *)0x0;
  (this->FreeHeaps).TailNode = (TDoubleLinkedListNode *)0x0;
  (this->FreeHeaps).ListSize = 0;
  (this->FreeHeaps)._padding_ = (longlong)&___7__TDoubleLinkedList_I__6B_;
  this->NumDescriptorsPerHeap = 0;
  this->DescriptorSize = 0;
  this->HeapType = param_2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FD3D12OfflineDescriptorManager *)(*pcVar3)();
    return pFVar7;
  }
  lVar1 = this->_padding_;
  if ((*(longlong *)(lVar1 + 0x10) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FD3D12OfflineDescriptorManager *)(*pcVar3)();
    return pFVar7;
  }
  plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + 8);
  pcVar3 = *(code **)(*plVar2 + 0x78);
  DVar5 = ::Translate(param_2);
  uVar6 = (*pcVar3)(plVar2,DVar5);
  this->DescriptorSize = uVar6;
  if (param_2 != Standard) {
    if (param_2 == Sampler) {
      this->NumDescriptorsPerHeap = 0x80;
      return this;
    }
    if ((param_2 == RenderTarget) || (param_2 == DepthStencil)) {
      this->NumDescriptorsPerHeap = 0x100;
      return this;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Descriptors.cpp"
                       ,0x14a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FD3D12OfflineDescriptorManager *)(*pcVar3)();
      return pFVar7;
    }
  }
  this->NumDescriptorsPerHeap = 0x800;
  return this;
}

// ~FD3D12OfflineDescriptorManager @ 1459f8540

void __thiscall
FD3D12OfflineDescriptorManager::~FD3D12OfflineDescriptorManager
          (FD3D12OfflineDescriptorManager *this)

{
  FScriptContainerElement *pFVar1;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  TDoubleLinkedList<unsigned_int>::~TDoubleLinkedList<unsigned_int>(&this->FreeHeaps);
  DestructItems<FD3D12OfflineHeapEntry,int>
            ((FD3D12OfflineHeapEntry *)(this->Heaps).AllocatorInstance.Data,(this->Heaps).ArrayNum);
  pFVar1 = (this->Heaps).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AllocateHeap @ 145a02880

void __thiscall FD3D12OfflineDescriptorManager::AllocateHeap(FD3D12OfflineDescriptorManager *this)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  CD3DX12_CPU_DESCRIPTOR_HANDLE CVar6;
  FScriptContainerElement *pFVar7;
  TDoubleLinkedListNode *pTVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  FD3D12DescriptorHeap *pFVar12;
  longlong lVar13;
  CD3DX12_CPU_DESCRIPTOR_HANDLE *pCVar14;
  TDoubleLinkedListNode *pTVar15;
  
  if (this->NumDescriptorsPerHeap == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("NumDescriptorsPerHeap != 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Descriptors.cpp"
                        ,0x162,L"Init() needs to be called before allocating heaps.");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  if (this->_padding_ == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Parent != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                        ,0x59,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pFVar12 = FD3D12DescriptorHeapManager::AllocateHeap
                      ((FD3D12DescriptorHeapManager *)(this->_padding_ + 0x610),
                       L"FD3D12OfflineDescriptorManager",this->HeapType,this->NumDescriptorsPerHeap,
                       None);
  if (pFVar12 != (FD3D12DescriptorHeap *)0x0) {
    LOCK();
    *(int *)&pFVar12->_padding_ = (int)pFVar12->_padding_ + 1;
    UNLOCK();
  }
  CVar6 = pFVar12->CpuBase;
  if (CVar6 == (CD3DX12_CPU_DESCRIPTOR_HANDLE)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("HeapBase.ptr != 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Descriptors.cpp"
                        ,0x16b,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  uVar3 = (this->Heaps).ArrayNum;
  piVar1 = &(this->Heaps).ArrayMax;
  uVar4 = this->DescriptorSize;
  uVar5 = this->NumDescriptorsPerHeap;
  uVar11 = uVar3;
  if (uVar3 == *piVar1) {
    uVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,&(this->Heaps).AllocatorInstance,piVar1);
    (this->Heaps).ArrayNum = uVar11;
  }
  (this->Heaps).ArrayNum = uVar11 + 1;
  lVar13 = (longlong)(int)uVar11;
  pFVar7 = (this->Heaps).AllocatorInstance.Data;
  *(FD3D12DescriptorHeap **)(pFVar7 + lVar13 * 0x28) = pFVar12;
  LOCK();
  *(int *)&pFVar12->_padding_ = (int)pFVar12->_padding_ + 1;
  UNLOCK();
  *(undefined ***)(pFVar7 + lVar13 * 0x28 + 8) =
       &___7__TDoubleLinkedList_UFD3D12OfflineHeapFreeRange____6B_;
  *(undefined8 *)(pFVar7 + lVar13 * 0x28 + 0x10) = 0;
  *(undefined8 *)(pFVar7 + lVar13 * 0x28 + 0x18) = 0;
  *(undefined4 *)(pFVar7 + lVar13 * 0x28 + 0x20) = 0;
  pCVar14 = ::operator_new(0x20);
  if (pCVar14 != (CD3DX12_CPU_DESCRIPTOR_HANDLE *)0x0) {
    *pCVar14 = CVar6;
    pCVar14[1] = (CD3DX12_CPU_DESCRIPTOR_HANDLE)((ulonglong)(uVar4 * uVar5) + (longlong)CVar6);
    pCVar14[2] = (CD3DX12_CPU_DESCRIPTOR_HANDLE)0x0;
    pCVar14[3] = (CD3DX12_CPU_DESCRIPTOR_HANDLE)0x0;
    if (*(longlong *)(pFVar7 + lVar13 * 0x28 + 0x18) == 0) {
      *(CD3DX12_CPU_DESCRIPTOR_HANDLE **)(pFVar7 + lVar13 * 0x28 + 0x10) = pCVar14;
    }
    else {
      *(CD3DX12_CPU_DESCRIPTOR_HANDLE **)(*(longlong *)(pFVar7 + lVar13 * 0x28 + 0x18) + 0x10) =
           pCVar14;
      pCVar14[3] = *(CD3DX12_CPU_DESCRIPTOR_HANDLE *)(pFVar7 + lVar13 * 0x28 + 0x18);
    }
    *(CD3DX12_CPU_DESCRIPTOR_HANDLE **)(pFVar7 + lVar13 * 0x28 + 0x18) = pCVar14;
    if (*(code **)(*(longlong *)(pFVar7 + lVar13 * 0x28 + 8) + 8) ==
        TDoubleLinkedList<FD3D12OfflineHeapFreeRange>::SetListSize) {
      *(int *)(pFVar7 + lVar13 * 0x28 + 0x20) = *(int *)(pFVar7 + lVar13 * 0x28 + 0x20) + 1;
    }
    else {
      (**(code **)(*(longlong *)(pFVar7 + lVar13 * 0x28 + 8) + 8))(pFVar7 + lVar13 * 0x28 + 8);
    }
  }
  pTVar15 = ::operator_new(0x18);
  if (pTVar15 != (TDoubleLinkedListNode *)0x0) {
    pTVar15->Value = uVar3;
    pTVar15->NextNode = (TDoubleLinkedListNode *)0x0;
    pTVar15->PrevNode = (TDoubleLinkedListNode *)0x0;
    pTVar8 = (this->FreeHeaps).TailNode;
    if (pTVar8 == (TDoubleLinkedListNode *)0x0) {
      (this->FreeHeaps).HeadNode = pTVar15;
    }
    else {
      pTVar8->NextNode = pTVar15;
      pTVar15->PrevNode = (this->FreeHeaps).TailNode;
    }
    (this->FreeHeaps).TailNode = pTVar15;
    (**(code **)((this->FreeHeaps)._padding_ + 8))(&this->FreeHeaps,(this->FreeHeaps).ListSize + 1);
  }
  plVar2 = &pFVar12->_padding_;
  LOCK();
  lVar13 = *plVar2;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if (((int)lVar13 == 1) && (plVar2 != (longlong *)0x0)) {
    (**(code **)pFVar12->_padding_)(pFVar12,1);
  }
  return;
}

// AllocateHeapSlot @ 145a03000

FD3D12OfflineDescriptor * __thiscall
FD3D12OfflineDescriptorManager::AllocateHeapSlot
          (FD3D12OfflineDescriptorManager *this,FD3D12OfflineDescriptor *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  uint uVar2;
  TDoubleLinkedListNode *pTVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  void *pvVar6;
  TDoubleLinkedListNode *pTVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  FD3D12OfflineDescriptor *pFVar11;
  longlong lVar12;
  longlong lVar13;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  __return_storage_ptr__->HeapIndex = 0;
  __return_storage_ptr__->Version = 0;
  __return_storage_ptr__->_padding_ = 0;
  if ((this->FreeHeaps).ListSize == 0) {
    AllocateHeap(this);
    if ((this->FreeHeaps).ListSize == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("FreeHeaps.Num() != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Descriptors.cpp"
                         ,0x17e,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        pFVar11 = (FD3D12OfflineDescriptor *)(*pcVar8)();
        return pFVar11;
      }
    }
  }
  pTVar3 = (this->FreeHeaps).HeadNode;
  iVar1 = (this->Heaps).ArrayNum;
  uVar2 = pTVar3->Value;
  lVar13 = (longlong)(int)uVar2;
  __return_storage_ptr__->HeapIndex = uVar2;
  uVar10 = 0;
  if ((int)uVar2 < iVar1) {
    uVar10 = ~uVar2 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pFVar11 = (FD3D12OfflineDescriptor *)(*pcVar8)();
      return pFVar11;
    }
  }
  pFVar4 = (this->Heaps).AllocatorInstance.Data;
  if (*(int *)(pFVar4 + lVar13 * 0x28 + 0x20) == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("0 != HeapEntry.FreeList.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Descriptors.cpp"
                       ,0x184,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pFVar11 = (FD3D12OfflineDescriptor *)(*pcVar8)();
      return pFVar11;
    }
  }
  plVar5 = *(longlong **)(pFVar4 + lVar13 * 0x28 + 0x10);
  uVar2 = this->DescriptorSize;
  lVar12 = *plVar5;
  __return_storage_ptr__->_padding_ = lVar12;
  lVar12 = lVar12 + (ulonglong)uVar2;
  *plVar5 = lVar12;
  if (lVar12 == plVar5[1]) {
    pvVar6 = *(void **)(pFVar4 + lVar13 * 0x28 + 0x10);
    if (pvVar6 != (void *)0x0) {
      if (*(int *)(pFVar4 + lVar13 * 0x28 + 0x20) == 1) {
        TDoubleLinkedList<FD3D12OfflineHeapFreeRange>::Empty
                  ((TDoubleLinkedList<FD3D12OfflineHeapFreeRange> *)(pFVar4 + lVar13 * 0x28 + 8));
      }
      else {
        lVar12 = *(longlong *)((longlong)pvVar6 + 0x10);
        *(longlong *)(pFVar4 + lVar13 * 0x28 + 0x10) = lVar12;
        *(undefined8 *)(lVar12 + 0x18) = 0;
        ::operator_delete(pvVar6,0x20);
        (**(code **)(*(longlong *)(pFVar4 + lVar13 * 0x28 + 8) + 8))
                  (pFVar4 + lVar13 * 0x28 + 8,*(int *)(pFVar4 + lVar13 * 0x28 + 0x20) + -1);
      }
    }
    if (*(int *)(pFVar4 + lVar13 * 0x28 + 0x20) == 0) {
      if ((this->FreeHeaps).ListSize == 1) {
        TDoubleLinkedList<unsigned_int>::Empty(&this->FreeHeaps);
      }
      else {
        pTVar7 = (this->FreeHeaps).HeadNode;
        if (pTVar3 == pTVar7) {
          pTVar7 = pTVar7->NextNode;
          (this->FreeHeaps).HeadNode = pTVar7;
          pTVar7->PrevNode = (TDoubleLinkedListNode *)0x0;
        }
        else {
          pTVar7 = (this->FreeHeaps).TailNode;
          if (pTVar3 == pTVar7) {
            pTVar7 = pTVar7->PrevNode;
            (this->FreeHeaps).TailNode = pTVar7;
            pTVar7->NextNode = (TDoubleLinkedListNode *)0x0;
          }
          else {
            pTVar3->NextNode->PrevNode = pTVar3->PrevNode;
            pTVar3->PrevNode->NextNode = pTVar3->NextNode;
          }
        }
        ::operator_delete(pTVar3,0x18);
        (**(code **)((this->FreeHeaps)._padding_ + 8))
                  (&this->FreeHeaps,(this->FreeHeaps).ListSize + -1);
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return __return_storage_ptr__;
}

// CleanupResources @ 145a06d90

void __thiscall
FD3D12OfflineDescriptorManager::CleanupResources(FD3D12OfflineDescriptorManager *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  iVar4 = (this->Heaps).ArrayNum;
  pFVar6 = (this->Heaps).AllocatorInstance.Data;
  pFVar2 = pFVar6 + (longlong)iVar4 * 0x28;
  while( true ) {
    if ((this->Heaps).ArrayNum != iVar4) {
      `TCheckedPointerIterator<FD3D12OfflineHeapEntry,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar2) break;
    puVar5 = *(undefined8 **)pFVar6;
    if (puVar5 != (undefined8 *)0x0) {
      *(longlong *)pFVar6 = 0;
      piVar1 = (int *)(puVar5 + 1);
      LOCK();
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar3 == 1) && (piVar1 != (int *)0x0)) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
    pFVar6 = pFVar6 + 0x28;
  }
  return;
}

// FreeHeapSlot @ 145a178a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FD3D12OfflineDescriptorManager::FreeHeapSlot
          (FD3D12OfflineDescriptorManager *this,FD3D12OfflineDescriptor *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  undefined4 *puVar11;
  longlong lVar12;
  ulonglong *puVar13;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_78;
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  uVar1 = param_1->HeapIndex;
  lVar12 = (longlong)(int)uVar1;
  iVar2 = (this->Heaps).ArrayNum;
  uVar10 = 0;
  if ((int)uVar1 < iVar2) {
    uVar10 = ~uVar1 >> 0x1f;
  }
  if (uVar10 == 0) {
    local_58 = lVar12;
    local_50 = (longlong)iVar2;
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar3 = (this->Heaps).AllocatorInstance.Data;
  puVar13 = *(ulonglong **)(pFVar3 + lVar12 * 0x28 + 0x10);
  local_48 = param_1->_padding_;
  bVar8 = false;
  uStack_40 = (ulonglong)this->DescriptorSize + local_48;
  if (puVar13 != (ulonglong *)0x0) {
    do {
      if (bVar8) goto LAB_145a17afa;
      if (puVar13[1] <= *puVar13) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Range.Start < Range.End",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Descriptors.cpp"
                           ,0x1a3,L"");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      uVar4 = param_1->_padding_;
      if (*puVar13 == this->DescriptorSize + uVar4) {
        *puVar13 = uVar4;
LAB_145a17a81:
        bVar8 = true;
      }
      else {
        uVar5 = puVar13[1];
        if (uVar5 == uVar4) {
          puVar13[1] = uVar5 + this->DescriptorSize;
          goto LAB_145a17a81;
        }
        if ((uVar4 <= uVar5) && (*puVar13 <= uVar4)) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Range.End < Descriptor.ptr || Range.Start > Descriptor.ptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Descriptors.cpp"
                             ,0x1b0,L"");
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        if ((ulonglong)param_1->_padding_ < *puVar13) {
          puVar11 = ::operator_new(0x20);
          if (puVar11 != (undefined4 *)0x0) {
            *(undefined8 *)(puVar11 + 4) = 0;
            *(undefined8 *)(puVar11 + 6) = 0;
            *puVar11 = (undefined4)local_48;
            puVar11[1] = local_48._4_4_;
            puVar11[2] = (undefined4)uStack_40;
            puVar11[3] = uStack_40._4_4_;
            puVar6 = *(ulonglong **)(pFVar3 + lVar12 * 0x28 + 0x10);
            if (puVar13 == puVar6) {
              if (puVar6 == (ulonglong *)0x0) {
                *(undefined4 **)(pFVar3 + lVar12 * 0x28 + 0x18) = puVar11;
              }
              else {
                *(ulonglong **)(puVar11 + 4) = puVar6;
                *(undefined4 **)(*(longlong *)(pFVar3 + lVar12 * 0x28 + 0x10) + 0x18) = puVar11;
              }
              *(undefined4 **)(pFVar3 + lVar12 * 0x28 + 0x10) = puVar11;
            }
            else {
              *(ulonglong *)(puVar11 + 6) = puVar13[3];
              *(ulonglong **)(puVar11 + 4) = puVar13;
              *(undefined4 **)(puVar13[3] + 0x10) = puVar11;
              puVar13[3] = (ulonglong)puVar11;
            }
            (**(code **)(*(longlong *)(pFVar3 + lVar12 * 0x28 + 8) + 8))
                      (pFVar3 + lVar12 * 0x28 + 8,*(int *)(pFVar3 + lVar12 * 0x28 + 0x20) + 1);
          }
          goto LAB_145a17a81;
        }
      }
      puVar13 = (ulonglong *)puVar13[2];
    } while (puVar13 != (ulonglong *)0x0);
    if (bVar8) goto LAB_145a17afa;
  }
  if (*(int *)(pFVar3 + lVar12 * 0x28 + 0x20) == 0) {
    TDoubleLinkedList<unsigned_int>::AddTail(&this->FreeHeaps,&param_1->HeapIndex);
  }
  puVar11 = ::operator_new(0x20);
  if (puVar11 != (undefined4 *)0x0) {
    *(undefined8 *)(puVar11 + 4) = 0;
    *(undefined8 *)(puVar11 + 6) = 0;
    *puVar11 = (undefined4)local_48;
    puVar11[1] = local_48._4_4_;
    puVar11[2] = (undefined4)uStack_40;
    puVar11[3] = uStack_40._4_4_;
    if (*(longlong *)(pFVar3 + lVar12 * 0x28 + 0x18) == 0) {
      *(undefined4 **)(pFVar3 + lVar12 * 0x28 + 0x10) = puVar11;
    }
    else {
      *(undefined4 **)(*(longlong *)(pFVar3 + lVar12 * 0x28 + 0x18) + 0x10) = puVar11;
      *(undefined8 *)(puVar11 + 6) = *(undefined8 *)(pFVar3 + lVar12 * 0x28 + 0x18);
    }
    *(undefined4 **)(pFVar3 + lVar12 * 0x28 + 0x18) = puVar11;
    (**(code **)(*(longlong *)(pFVar3 + lVar12 * 0x28 + 8) + 8))
              (pFVar3 + lVar12 * 0x28 + 8,*(int *)(pFVar3 + lVar12 * 0x28 + 0x20) + 1);
  }
LAB_145a17afa:
  param_1->_padding_ = 0;
  param_1->HeapIndex = 0;
  param_1->Version = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

