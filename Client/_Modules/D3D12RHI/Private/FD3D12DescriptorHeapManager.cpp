// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 10

// FD3D12DescriptorHeapManager @ 1459ed8f0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12DescriptorHeapManager * __thiscall
FD3D12DescriptorHeapManager::FD3D12DescriptorHeapManager
          (FD3D12DescriptorHeapManager *this,FD3D12Device *param_1)

{
  this->_padding_ = (longlong)param_1;
  (this->GlobalHeaps).ArrayNum = 0;
  (this->PooledHeaps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PooledHeaps).ArrayNum = 0;
  (this->PooledHeaps).ArrayMax = 0;
  (this->GlobalHeaps).ArrayMax = 2;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->PooledHeapsCS,4000);
  return this;
}

// ~FD3D12DescriptorHeapManager @ 1459f7350

void __thiscall
FD3D12DescriptorHeapManager::~FD3D12DescriptorHeapManager(FD3D12DescriptorHeapManager *this)

{
  FScriptContainerElement *pFVar1;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->PooledHeapsCS);
  DestructItems<FD3D12DescriptorHeapManager::FPooledHeap,int>
            ((FPooledHeap *)(this->PooledHeaps).AllocatorInstance.Data,(this->PooledHeaps).ArrayNum)
  ;
  pFVar1 = (this->PooledHeaps).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FD3D12DescriptorManager,int>
            ((FD3D12DescriptorManager *)&this->GlobalHeaps,(this->GlobalHeaps).ArrayNum);
  return;
}

// AcquirePooledHeap @ 1459fd180

TRefCountPtr<ID3D12DescriptorHeap> __thiscall
FD3D12DescriptorHeapManager::AcquirePooledHeap
          (FD3D12DescriptorHeapManager *this,ERHIDescriptorHeapType param_1,uint param_2,
          ED3D12DescriptorHeapFlags param_3)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  ID3D12DescriptorHeap IVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TRefCountPtr<ID3D12DescriptorHeap> TVar6;
  int iVar7;
  undefined7 in_register_00000011;
  ID3D12DescriptorHeap *pIVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined7 in_register_00000089;
  uint uVar12;
  longlong lVar13;
  TArray<FD3D12DescriptorHeapManager::FPooledHeap,TSizedDefaultAllocator<32>_> *pTVar14;
  FScriptContainerElement in_stack_00000028;
  
  pIVar8 = (ID3D12DescriptorHeap *)CONCAT71(in_register_00000011,param_1);
  lpCriticalSection = &this->PooledHeapsCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar14 = &this->PooledHeaps;
  pFVar11 = (pTVar14->AllocatorInstance).Data;
  iVar7 = (this->PooledHeaps).ArrayNum;
  pFVar10 = pFVar11;
  do {
    if (pFVar10 == pFVar11 + (longlong)iVar7 * 0x10) {
LAB_1459fd1fb:
      *pIVar8 = (ID3D12DescriptorHeap)0x0;
LAB_1459fd201:
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return (TRefCountPtr<ID3D12DescriptorHeap>)pIVar8;
    }
    if (((pFVar10[0xc] == SUB41(param_2,0)) &&
        (*(int *)(pFVar10 + 8) == (int)CONCAT71(in_register_00000089,param_3))) &&
       (pFVar10[0xd] == in_stack_00000028)) {
      uVar9 = (uint)((longlong)pFVar10 - (longlong)pFVar11 >> 4);
      if (uVar9 != 0xffffffff) {
        uVar12 = ~uVar9 >> 0x1f;
        uVar5 = 0;
        if ((int)uVar9 < iVar7) {
          uVar5 = uVar12;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          TVar6.Reference = (ID3D12DescriptorHeap *)(*pcVar3)();
          return (TRefCountPtr<ID3D12DescriptorHeap>)TVar6.Reference;
        }
        pFVar11 = (pTVar14->AllocatorInstance).Data;
        lVar13 = (longlong)(int)uVar9 * 0x10;
        IVar2 = *(ID3D12DescriptorHeap *)(pFVar11 + lVar13);
        *(undefined8 *)(pFVar11 + lVar13) = 0;
        uVar5 = 0;
        if ((int)uVar9 < (this->PooledHeaps).ArrayNum) {
          uVar5 = uVar12;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          TVar6.Reference = (ID3D12DescriptorHeap *)(*pcVar3)();
          return (TRefCountPtr<ID3D12DescriptorHeap>)TVar6.Reference;
        }
        pFVar11 = (pTVar14->AllocatorInstance).Data + lVar13;
        if (*(longlong **)pFVar11 != (longlong *)0x0) {
          (**(code **)(**(longlong **)pFVar11 + 0x10))();
        }
        iVar7 = (this->PooledHeaps).ArrayNum + ~uVar9;
        if (iVar7 != 0) {
          memmove(pFVar11,pFVar11 + 0x10,(longlong)iVar7 << 4);
        }
        piVar1 = &(this->PooledHeaps).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&pTVar14->AllocatorInstance,(this->PooledHeaps).ArrayNum,
                   &(this->PooledHeaps).ArrayMax);
        *pIVar8 = IVar2;
        goto LAB_1459fd201;
      }
      goto LAB_1459fd1fb;
    }
    pFVar10 = pFVar10 + 0x10;
  } while( true );
}

// AddHeapToPool @ 1459fee60

void __thiscall
FD3D12DescriptorHeapManager::AddHeapToPool
          (FD3D12DescriptorHeapManager *this,TRefCountPtr<ID3D12DescriptorHeap> *param_1,
          ERHIDescriptorHeapType param_2,uint param_3,ED3D12DescriptorHeapFlags param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  lpCriticalSection = &this->PooledHeapsCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar2 = (this->PooledHeaps).ArrayNum;
    piVar1 = &(this->PooledHeaps).ArrayMax;
    if (iVar2 == *piVar1) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->PooledHeaps).AllocatorInstance,piVar1);
    }
    (this->PooledHeaps).ArrayNum = iVar2 + 1;
    pFVar3 = (this->PooledHeaps).AllocatorInstance.Data + (longlong)iVar2 * 0x10;
    *(undefined8 *)pFVar3 = 0;
    *(ID3D12DescriptorHeap **)pFVar3 = param_1->Reference;
    param_1->Reference = (ID3D12DescriptorHeap *)0x0;
    pFVar3[0xd] = (FScriptContainerElement)param_4;
    *(uint *)(pFVar3 + 8) = param_3;
    pFVar3[0xc] = (FScriptContainerElement)param_2;
                    /* WARNING: Could not recover jumptable at 0x0001459fef16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// AllocateHeap @ 145a01d50

FD3D12DescriptorHeap * __thiscall
FD3D12DescriptorHeapManager::AllocateHeap
          (FD3D12DescriptorHeapManager *this,wchar_t *param_1,ERHIDescriptorHeapType param_2,
          uint param_3,ED3D12DescriptorHeapFlags param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  ID3D12DescriptorHeap *pIVar4;
  code *pcVar5;
  ForElementType<FD3D12DescriptorManager> *pFVar6;
  bool bVar7;
  FD3D12DescriptorHeap *pFVar8;
  ushort uVar9;
  TArray<FD3D12DescriptorManager,TFixedAllocator<2>_> *pTVar10;
  undefined1 local_res8 [8];
  wchar_t *local_res10;
  TOptional<FRHIDescriptorAllocation> local_48;
  
  pTVar10 = &this->GlobalHeaps;
  piVar1 = &(this->GlobalHeaps).ArrayNum;
  iVar2 = *piVar1;
  pFVar6 = &pTVar10->AllocatorInstance;
  local_res10 = param_1;
  while( true ) {
    if (*piVar1 != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FD3D12DescriptorManager,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pTVar10 ==
        (TArray<FD3D12DescriptorManager,TFixedAllocator<2>_> *)(pFVar6->InlineData + iVar2)) {
      pFVar8 = AllocateIndependentHeap(this,local_res10,param_2,param_3,param_4);
      return pFVar8;
    }
    if (param_2 == Standard) {
      uVar9 = 0x7f;
    }
    else {
      uVar9 = 0;
      if (param_2 == Sampler) {
        uVar9 = 0x80;
      }
    }
    if ((((*(ushort *)((pTVar10->AllocatorInstance).InlineData[0].Pad + 0x58) & uVar9) == uVar9) &&
        (*(ED3D12DescriptorHeapFlags *)
          (*(longlong *)((pTVar10->AllocatorInstance).InlineData[0].Pad + 0x60) + 0x3d) == param_4))
       && (FRHIHeapDescriptorAllocator::Allocate
                     ((FRHIHeapDescriptorAllocator *)
                      ((pTVar10->AllocatorInstance).InlineData[0].Pad + 8),&local_48,param_3),
          local_48.bIsSet != false)) break;
    pTVar10 = (TArray<FD3D12DescriptorManager,TFixedAllocator<2>_> *)
              ((pTVar10->AllocatorInstance).InlineData + 1);
  }
  pFVar8 = ::operator_new(0x40);
  if (pFVar8 == (FD3D12DescriptorHeap *)0x0) {
    pFVar8 = (FD3D12DescriptorHeap *)0x0;
  }
  else {
    if ((local_48.bIsSet == false) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FD3D12DescriptorHeap *)(*pcVar5)();
      return pFVar8;
    }
    if ((local_48.bIsSet == false) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FD3D12DescriptorHeap *)(*pcVar5)();
      return pFVar8;
    }
    lVar3 = *(longlong *)((pTVar10->AllocatorInstance).InlineData[0].Pad + 0x60);
    if ((*(longlong *)(lVar3 + 0x10) == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Parent != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                           ,0x59,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FD3D12DescriptorHeap *)(*pcVar5)();
      return pFVar8;
    }
    pFVar8->_padding_ = *(longlong *)(lVar3 + 0x10);
    pFVar8->_padding_ = (longlong)&___7FD3D12DescriptorHeap__6B_;
    *(undefined4 *)&pFVar8->_padding_ = 0;
    (pFVar8->Heap).Reference = (ID3D12DescriptorHeap *)0x0;
    pIVar4 = *(ID3D12DescriptorHeap **)(lVar3 + 0x18);
    (pFVar8->Heap).Reference = pIVar4;
    if (pIVar4 != (ID3D12DescriptorHeap *)0x0) {
      (**(code **)((longlong)*pIVar4 + 8))();
    }
    pFVar8->CpuBase =
         (CD3DX12_CPU_DESCRIPTOR_HANDLE)
         ((ulonglong)*(uint *)(lVar3 + 0x38) * (longlong)(int)local_48.TypedValue.StartIndex +
         *(longlong *)(lVar3 + 0x20));
    pFVar8->GpuBase =
         (CD3DX12_GPU_DESCRIPTOR_HANDLE)
         ((ulonglong)*(uint *)(lVar3 + 0x38) * (longlong)(int)local_48.TypedValue.StartIndex +
         *(longlong *)(lVar3 + 0x28));
    pFVar8->Offset = local_48.TypedValue.StartIndex;
    pFVar8->NumDescriptors = local_48.TypedValue.Count;
    pFVar8->DescriptorSize = *(uint *)(lVar3 + 0x38);
    pFVar8->Type = *(ERHIDescriptorHeapType *)(lVar3 + 0x3c);
    pFVar8->Flags = *(ED3D12DescriptorHeapFlags *)(lVar3 + 0x3d);
    pFVar8->bIsGlobal = *(bool *)(lVar3 + 0x3e);
    pFVar8->bIsSuballocation = true;
  }
  return pFVar8;
}

// AllocateIndependentHeap @ 145a03220

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12DescriptorHeap * __thiscall
FD3D12DescriptorHeapManager::AllocateIndependentHeap
          (FD3D12DescriptorHeapManager *this,wchar_t *param_1,ERHIDescriptorHeapType param_2,
          uint param_3,ED3D12DescriptorHeapFlags param_4)

{
  code *pcVar1;
  bool bVar2;
  FD3D12DescriptorHeap *pFVar3;
  TRefCountPtr<ID3D12DescriptorHeap> TVar4;
  undefined7 in_register_00000081;
  TRefCountPtr<ID3D12DescriptorHeap> local_28 [2];
  
  if (((param_4 & Poolable) == None) ||
     (AcquirePooledHeap(this,(ERHIDescriptorHeapType)local_28,
                        (uint)CONCAT71(in_register_00000081,param_2),
                        (ED3D12DescriptorHeapFlags)param_3), TVar4.Reference = local_28[0].Reference
     , local_28[0].Reference == (ID3D12DescriptorHeap *)0x0)) {
    if ((this->_padding_ == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Parent != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                           ,0x59,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FD3D12DescriptorHeap *)(*pcVar1)();
      return pFVar3;
    }
    pFVar3 = CreateDescriptorHeap
                       ((FD3D12Device *)this->_padding_,param_1,param_2,param_3,param_4,false);
  }
  else {
    pFVar3 = ::operator_new(0x40);
    if (pFVar3 == (FD3D12DescriptorHeap *)0x0) {
      pFVar3 = (FD3D12DescriptorHeap *)0x0;
    }
    else {
      if ((this->_padding_ == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Parent != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                             ,0x59,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FD3D12DescriptorHeap *)(*pcVar1)();
        return pFVar3;
      }
      pFVar3 = FD3D12DescriptorHeap::FD3D12DescriptorHeap
                         (pFVar3,(FD3D12Device *)this->_padding_,local_28,param_3,param_2,param_4,
                          false);
      TVar4.Reference = local_28[0].Reference;
    }
    if (TVar4.Reference != (ID3D12DescriptorHeap *)0x0) {
      (**(code **)((longlong)*TVar4.Reference + 0x10))(TVar4.Reference);
    }
  }
  return pFVar3;
}

// DeferredFreeHeap @ 145a10b90

void __thiscall
FD3D12DescriptorHeapManager::DeferredFreeHeap
          (FD3D12DescriptorHeapManager *this,FD3D12DescriptorHeap *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<FD3D12DescriptorManager> *pFVar3;
  FD3D12DynamicRHI *pFVar4;
  int iVar5;
  TArray<FD3D12DescriptorManager,TFixedAllocator<2>_> *pTVar6;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 local_res10 [8];
  
  if (param_1->bIsGlobal == false) {
    LOCK();
    *(int *)&param_1->_padding_ = (int)param_1->_padding_ + 1;
    pFVar4 = FD3D12DynamicRHI::SingleD3DRHI;
    UNLOCK();
    lpCriticalSection = (LPCRITICAL_SECTION)&FD3D12DynamicRHI::SingleD3DRHI->ObjectsToDeleteCS;
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) goto LAB_145a10ce2;
    EnterCriticalSection(lpCriticalSection);
    iVar5 = (pFVar4->ObjectsToDelete).ArrayNum;
    piVar1 = &(pFVar4->ObjectsToDelete).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&(pFVar4->ObjectsToDelete).AllocatorInstance,piVar1);
    }
    (pFVar4->ObjectsToDelete).ArrayNum = iVar5 + 1;
    pFVar2 = (pFVar4->ObjectsToDelete).AllocatorInstance.Data;
    *(undefined4 *)(pFVar2 + (longlong)iVar5 * 0x30) = 3;
    *(FD3D12DescriptorHeap **)(pFVar2 + (longlong)iVar5 * 0x30 + 8) = param_1;
  }
  else {
    pTVar6 = &this->GlobalHeaps;
    piVar1 = &(this->GlobalHeaps).ArrayNum;
    iVar5 = *piVar1;
    pFVar3 = &pTVar6->AllocatorInstance;
    while( true ) {
      if (*piVar1 != iVar5) {
        `TCheckedPointerIterator<FD3D12DescriptorManager,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pTVar6 == (TArray<FD3D12DescriptorManager,TFixedAllocator<2>_> *)
                    (pFVar3->InlineData + iVar5)) {
        return;
      }
      if ((param_1->Heap).Reference ==
          *(ID3D12DescriptorHeap **)
           (*(longlong *)((pTVar6->AllocatorInstance).InlineData[0].Pad + 0x60) + 0x18)) break;
      pTVar6 = (TArray<FD3D12DescriptorManager,TFixedAllocator<2>_> *)
               ((pTVar6->AllocatorInstance).InlineData + 1);
    }
    LOCK();
    *(int *)&param_1->_padding_ = (int)param_1->_padding_ + 1;
    pFVar4 = FD3D12DynamicRHI::SingleD3DRHI;
    UNLOCK();
    lpCriticalSection = (LPCRITICAL_SECTION)&FD3D12DynamicRHI::SingleD3DRHI->ObjectsToDeleteCS;
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
LAB_145a10ce2:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    iVar5 = (pFVar4->ObjectsToDelete).ArrayNum;
    piVar1 = &(pFVar4->ObjectsToDelete).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&(pFVar4->ObjectsToDelete).AllocatorInstance,piVar1);
    }
    (pFVar4->ObjectsToDelete).ArrayNum = iVar5 + 1;
    pFVar2 = (pFVar4->ObjectsToDelete).AllocatorInstance.Data;
    *(undefined4 *)(pFVar2 + (longlong)iVar5 * 0x30) = 3;
    *(FD3D12DescriptorHeap **)(pFVar2 + (longlong)iVar5 * 0x30 + 8) = param_1;
  }
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// Destroy @ 145a110d0

void __thiscall FD3D12DescriptorHeapManager::Destroy(FD3D12DescriptorHeapManager *this)

{
  return;
}

// ImmediateFreeHeap @ 145a1cd70

void __thiscall
FD3D12DescriptorHeapManager::ImmediateFreeHeap
          (FD3D12DescriptorHeapManager *this,FD3D12DescriptorHeap *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  FRHIDescriptorAllocation FVar4;
  ForElementType<FD3D12DescriptorManager> *pFVar5;
  longlong lVar6;
  TArray<FD3D12DescriptorManager,TFixedAllocator<2>_> *pTVar7;
  uint local_res10;
  uint uStackX_14;
  
  if (param_1->bIsGlobal == false) {
    plVar1 = &param_1->_padding_;
    LOCK();
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      if (plVar1 == (longlong *)0x0) {
        param_1 = (FD3D12DescriptorHeap *)0x0;
      }
      if (param_1 != (FD3D12DescriptorHeap *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145a1ce6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)param_1->_padding_)(param_1,1);
        return;
      }
    }
  }
  else {
    pTVar7 = &this->GlobalHeaps;
    piVar2 = &(this->GlobalHeaps).ArrayNum;
    iVar3 = *piVar2;
    pFVar5 = &pTVar7->AllocatorInstance;
    while( true ) {
      if (*piVar2 != iVar3) {
        `TCheckedPointerIterator<FD3D12DescriptorManager,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res10);
      }
      if (pTVar7 == (TArray<FD3D12DescriptorManager,TFixedAllocator<2>_> *)
                    (pFVar5->InlineData + iVar3)) {
        return;
      }
      if ((param_1->Heap).Reference ==
          *(ID3D12DescriptorHeap **)
           (*(longlong *)((pTVar7->AllocatorInstance).InlineData[0].Pad + 0x60) + 0x18)) break;
      pTVar7 = (TArray<FD3D12DescriptorManager,TFixedAllocator<2>_> *)
               ((pTVar7->AllocatorInstance).InlineData + 1);
    }
    local_res10 = param_1->Offset;
    uStackX_14 = param_1->NumDescriptors;
    FVar4.StartIndex = param_1->Offset;
    FVar4.Count = param_1->NumDescriptors;
    FRHIHeapDescriptorAllocator::Free
              ((FRHIHeapDescriptorAllocator *)((pTVar7->AllocatorInstance).InlineData[0].Pad + 8),
               FVar4);
    plVar1 = &param_1->_padding_;
    LOCK();
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      if (plVar1 == (longlong *)0x0) {
        param_1 = (FD3D12DescriptorHeap *)0x0;
      }
      if (param_1 != (FD3D12DescriptorHeap *)0x0) {
        (**(code **)param_1->_padding_)(param_1,1);
      }
    }
  }
  return;
}

// Init @ 145a1ce80

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12DescriptorHeapManager::Init(FD3D12DescriptorHeapManager *this,uint param_1,uint param_2)

{
  TArray<FD3D12DescriptorManager,TFixedAllocator<2>_> *pTVar1;
  int *piVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FD3D12DescriptorHeap *pFVar7;
  FName *pFVar8;
  ERHIDescriptorTypeMask EVar9;
  TTypeCompatibleBytes<FD3D12DescriptorManager> *pTVar10;
  TStatId local_res20;
  TStatId local_88;
  FName local_80;
  FName local_78 [2];
  TStatId *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  TStatId *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  TArrayView<TStatId_const_,int> local_48;
  TArrayView<TStatId_const_,int> local_38;
  
  if (param_1 != 0) {
    if ((this->_padding_ == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Parent != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                           ,0x59,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar7 = CreateDescriptorHeap
                       ((FD3D12Device *)this->_padding_,L"GlobalResourceHeap",Standard,param_1,
                        GpuVisible,true);
    local_res20.StatIdPtr = (TStatIdData *)StatPtr_STAT_ResourceDescriptorsAllocated;
    if (StatPtr_STAT_ResourceDescriptorsAllocated ==
        (FThreadSafeStaticStat<FStat_STAT_ResourceDescriptorsAllocated>)0x0) {
      pFVar8 = ::FName::FName(&local_80,"STAT_ResourceDescriptorsAllocated");
      local_res20.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ResourceDescriptorsAllocated,
                      *pFVar8,L"Resource Descriptors Allocated","STATGROUP_RHI","STATCAT_Advanced",
                      L"RHI",true,false,ST_int64,false,false,MCR_Invalid);
    }
    pTVar1 = &this->GlobalHeaps;
    if ((this->_padding_ == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Parent != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                           ,0x59,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = (this->GlobalHeaps).ArrayNum;
    piVar2 = &(this->GlobalHeaps).ArrayMax;
    lVar3 = this->_padding_;
    if (iVar6 == *piVar2) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<2>::ForElementType<FD3D12DescriptorManager>_>
                        (0x868,&pTVar1->AllocatorInstance,piVar2);
    }
    uStack_60 = 1;
    local_68 = &local_res20;
    (this->GlobalHeaps).ArrayNum = iVar6 + 1;
    *(longlong *)(pTVar1->AllocatorInstance).InlineData[iVar6].Pad = lVar3;
    if (pFVar7->Type == Standard) {
      EVar9 = CBV|TextureUAV|TextureSRV|TypedBufferUAV|TypedBufferSRV|BufferUAV|BufferSRV;
    }
    else {
      EVar9 = None;
      if (pFVar7->Type == Sampler) {
        EVar9 = Sampler;
      }
    }
    local_48._12_4_ = uStack_5c;
    local_48.ArrayNum = 1;
    local_48.DataPtr = local_68;
    FRHIHeapDescriptorAllocator::FRHIHeapDescriptorAllocator
              ((FRHIHeapDescriptorAllocator *)
               ((this->GlobalHeaps).AllocatorInstance.InlineData[iVar6].Pad + 8),EVar9,
               pFVar7->NumDescriptors,&local_48);
    *(FD3D12DescriptorHeap **)((pTVar1->AllocatorInstance).InlineData[iVar6].Pad + 0x60) = pFVar7;
    LOCK();
    *(int *)&pFVar7->_padding_ = (int)pFVar7->_padding_ + 1;
    UNLOCK();
  }
  if (param_2 != 0) {
    if ((this->_padding_ == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Parent != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                           ,0x59,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar7 = CreateDescriptorHeap
                       ((FD3D12Device *)this->_padding_,L"GlobalSamplerHeap",Sampler,param_2,
                        GpuVisible,true);
    local_88.StatIdPtr = (TStatIdData *)StatPtr_STAT_SamplerDescriptorsAllocated;
    if (StatPtr_STAT_SamplerDescriptorsAllocated ==
        (FThreadSafeStaticStat<FStat_STAT_SamplerDescriptorsAllocated>)0x0) {
      pFVar8 = ::FName::FName(local_78,"STAT_SamplerDescriptorsAllocated");
      local_88.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SamplerDescriptorsAllocated,*pFVar8
                      ,L"Sampler Descriptors Allocated","STATGROUP_RHI","STATCAT_Advanced",L"RHI",
                      true,false,ST_int64,false,false,MCR_Invalid);
    }
    if ((this->_padding_ == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Parent != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                           ,0x59,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = (this->GlobalHeaps).ArrayNum;
    piVar2 = &(this->GlobalHeaps).ArrayMax;
    lVar3 = this->_padding_;
    if (iVar6 == *piVar2) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<2>::ForElementType<FD3D12DescriptorManager>_>
                        (0x868,&(this->GlobalHeaps).AllocatorInstance,piVar2);
      (this->GlobalHeaps).ArrayNum = iVar6;
    }
    uStack_50 = 1;
    (this->GlobalHeaps).ArrayNum = iVar6 + 1;
    local_58 = &local_88;
    pTVar10 = (this->GlobalHeaps).AllocatorInstance.InlineData + iVar6;
    *(longlong *)pTVar10->Pad = lVar3;
    EVar9 = CBV|TextureUAV|TextureSRV|TypedBufferUAV|TypedBufferSRV|BufferUAV|BufferSRV;
    if ((pFVar7->Type != Standard) && (EVar9 = None, pFVar7->Type == Sampler)) {
      EVar9 = Sampler;
    }
    local_38._12_4_ = uStack_4c;
    local_38.ArrayNum = 1;
    local_38.DataPtr = local_58;
    FRHIHeapDescriptorAllocator::FRHIHeapDescriptorAllocator
              ((FRHIHeapDescriptorAllocator *)(pTVar10->Pad + 8),EVar9,pFVar7->NumDescriptors,
               &local_38);
    *(FD3D12DescriptorHeap **)(pTVar10->Pad + 0x60) = pFVar7;
    LOCK();
    *(int *)&pFVar7->_padding_ = (int)pFVar7->_padding_ + 1;
    UNLOCK();
  }
  return;
}

