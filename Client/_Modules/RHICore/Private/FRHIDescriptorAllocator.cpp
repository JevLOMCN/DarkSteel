// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHICore
// Functions: 13

// FRHIDescriptorAllocator @ 1446cee40

FRHIDescriptorAllocator * __thiscall
FRHIDescriptorAllocator::FRHIDescriptorAllocator
          (FRHIDescriptorAllocator *this,uint param_1,TArrayView<TStatId_const_,int> *param_2)

{
  TArray<TStatId,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  int iVar5;
  
  (this->Ranges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Ranges).ArrayNum = 0;
  (this->Ranges).ArrayMax = 0;
  this->Capacity = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  iVar4 = param_2->ArrayNum;
  pTVar1 = &this->Stats;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->Stats).ArrayMax;
  *piVar2 = 0;
  (this->Stats).ArrayNum = 0;
  this->Capacity = param_1;
  iVar5 = (this->Ranges).ArrayNum;
  if (iVar5 == (this->Ranges).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)this,&(this->Ranges).ArrayMax);
  }
  (this->Ranges).ArrayNum = iVar5 + 1;
  pFVar3 = (this->Ranges).AllocatorInstance.Data;
  *(undefined4 *)(pFVar3 + (longlong)iVar5 * 8) = 0;
  *(uint *)(pFVar3 + (longlong)iVar5 * 8 + 4) = param_1 - 1;
  (this->Stats).ArrayNum = iVar4;
  if ((iVar4 == 0) && (*piVar2 == 0)) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar4,*piVar2,&pTVar1->AllocatorInstance,iVar4,piVar2);
    if (iVar4 != 0) {
      memcpy((pTVar1->AllocatorInstance).Data,param_2->DataPtr,(longlong)iVar4 << 3);
    }
  }
  return this;
}

// FRHIDescriptorAllocator @ 1446cef60

FRHIDescriptorAllocator * __thiscall
FRHIDescriptorAllocator::FRHIDescriptorAllocator(FRHIDescriptorAllocator *this)

{
  (this->Ranges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Ranges).ArrayNum = 0;
  (this->Ranges).ArrayMax = 0;
  this->Capacity = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  (this->Stats).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Stats).ArrayNum = 0;
  (this->Stats).ArrayMax = 0;
  return this;
}

// ~FRHIDescriptorAllocator @ 1446cf6c0

void __thiscall FRHIDescriptorAllocator::~FRHIDescriptorAllocator(FRHIDescriptorAllocator *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Stats).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  pFVar1 = (this->Ranges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Allocate @ 1446d1620

TOptional<FRHIDescriptorAllocation> * __thiscall
FRHIDescriptorAllocator::Allocate
          (FRHIDescriptorAllocator *this,TOptional<FRHIDescriptorAllocation> *__return_storage_ptr__
          ,uint param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    AllocateInternal(this,__return_storage_ptr__,param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Allocate @ 1446d1690

FRHIDescriptorHandle __thiscall
FRHIDescriptorAllocator::Allocate(FRHIDescriptorAllocator *this,ERHIDescriptorType param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined7 in_register_00000011;
  FRHIDescriptorHandle FVar1;
  undefined1 in_R8B;
  TOptional<FRHIDescriptorAllocation> local_18;
  
  FVar1._1_7_ = in_register_00000011;
  FVar1.Index._0_1_ = param_1;
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    AllocateInternal(this,&local_18,1);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (local_18.bIsSet == false) {
      *(undefined8 *)FVar1 = 0;
      *(undefined4 *)FVar1 = 0xffffffff;
      *(undefined1 *)((longlong)FVar1 + 4) = 9;
    }
    else {
      *(uint *)FVar1 = local_18.TypedValue.StartIndex;
      *(undefined1 *)((longlong)FVar1 + 4) = in_R8B;
    }
    return FVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// AllocateInternal @ 1446d2a50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TOptional<FRHIDescriptorAllocation> * __thiscall
FRHIDescriptorAllocator::AllocateInternal
          (FRHIDescriptorAllocator *this,TOptional<FRHIDescriptorAllocation> *__return_storage_ptr__
          ,uint param_1)

{
  uint uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FName FVar4;
  code *pcVar5;
  FRHIDescriptorAllocation FVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  TOptional<FRHIDescriptorAllocation> *pTVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong lVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  uchar auVar14 [8];
  undefined1 local_res8 [8];
  TOptional<FRHIDescriptorAllocation> *local_res10;
  FName local_50;
  FStatMessage local_48;
  
  uVar1 = (this->Ranges).ArrayNum;
  auVar14[4] = '\0';
  auVar14[5] = '\0';
  auVar14[6] = '\0';
  auVar14[7] = '\0';
  auVar14._0_4_ = param_1;
  if (uVar1 != 0) {
    uVar12 = 0;
    local_res10 = __return_storage_ptr__;
    do {
      uVar8 = 0;
      if ((int)uVar12 < (this->Ranges).ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar10 = (TOptional<FRHIDescriptorAllocation> *)(*pcVar5)();
        return pTVar10;
      }
      pFVar3 = (this->Ranges).AllocatorInstance.Data;
      lVar11 = (longlong)(int)uVar12;
      uVar8 = *(uint *)(pFVar3 + lVar11 * 8);
      uVar9 = (*(int *)(pFVar3 + lVar11 * 8 + 4) - uVar8) + 1;
      if (param_1 <= uVar9) {
        if ((param_1 == uVar9) && (uVar12 + 1 < uVar1)) {
          TArray<FRHIDescriptorAllocatorRange,TSizedDefaultAllocator<32>_>::RemoveAt
                    (&this->Ranges,uVar12,Default);
        }
        else {
          *(uint *)(pFVar3 + lVar11 * 8) = uVar8 + param_1;
        }
        pFVar13 = (this->Stats).AllocatorInstance.Data;
        iVar2 = (this->Stats).ArrayNum;
        pFVar3 = pFVar13 + (longlong)iVar2 * 8;
        goto LAB_1446d2b40;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar1);
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
LAB_1446d2b40:
  if ((this->Stats).ArrayNum != iVar2) {
    `TCheckedPointerIterator<TStatId,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
  }
  if (pFVar13 == pFVar3) {
    FVar6.Count = param_1;
    FVar6.StartIndex = uVar8;
    local_res10->TypedValue = FVar6;
    local_res10->bIsSet = true;
    return local_res10;
  }
  if (param_1 == 0) {
LAB_1446d2c3b:
    pFVar13 = pFVar13 + 8;
    goto LAB_1446d2b40;
  }
  FVar4 = **(FName **)pFVar13;
  if (((FVar4 == (FName)0x0) || (FThreadStats::bPrimaryDisableForever != false)) ||
     (FThreadStats::TlsSlot == 0xffffffff)) goto LAB_1446d2c3b;
  this_00 = TlsGetValue(FThreadStats::TlsSlot);
  if (this_00 == (FThreadStats *)0x0) {
    this_01 = FThreadStatsPool::Get();
    this_00 = FThreadStatsPool::GetFromPool(this_01);
  }
  local_48.NameAndInfo.Number = FVar4.Number & 0xffffafff | 0xa000;
  local_50 = FVar4;
  local_48.StatData.Pad = auVar14;
  local_48.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
  FThreadStats::AddStatMessage(this_00,&local_48);
  FStatsTrace::Add(&local_50,(long64)auVar14);
  if (this_00->ScopeCount != 0) {
    if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
    goto LAB_1446d2c3b;
  }
  FThreadStats::Flush(this_00,false,false);
  pFVar13 = pFVar13 + 8;
  goto LAB_1446d2b40;
}

// Free @ 1446dc810

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FRHIDescriptorAllocator::Free(FRHIDescriptorAllocator *this,FRHIDescriptorAllocation param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar11;
  
  uVar7 = param_1.StartIndex;
  if ((uVar7 == 0xffffffff) || (uVar12 = param_1.Count, uVar12 == 0)) {
    return;
  }
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  piVar1 = &(this->Ranges).ArrayNum;
  uVar8 = uVar12 + uVar7;
  uVar13 = 0;
  uVar14 = (this->Ranges).ArrayNum - 1;
LAB_1446dc882:
  uVar10 = uVar14 + uVar13 >> 1;
  uVar11 = (ulonglong)uVar10;
  if ((*piVar1 <= (int)uVar10) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (uVar7 < *(uint *)((this->Ranges).AllocatorInstance.Data + uVar11 * 8)) {
    if ((*piVar1 <= (int)uVar10) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (uVar8 < *(uint *)((this->Ranges).AllocatorInstance.Data + uVar11 * 8)) {
      if (uVar10 != uVar13) {
        uVar14 = uVar10 - 1;
        goto LAB_1446dc882;
      }
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,4,1,(ForAnyElementType *)this,piVar1,&(this->Ranges).ArrayMax);
      pFVar9 = (this->Ranges).AllocatorInstance.Data + uVar11 * 8;
      memmove(pFVar9 + 8,pFVar9,(longlong)(int)(iVar6 - uVar10) << 3);
      pFVar9 = (this->Ranges).AllocatorInstance.Data;
      *(uint *)(pFVar9 + uVar11 * 8) = uVar7;
      *(uint *)(pFVar9 + uVar11 * 8 + 4) = uVar8 - 1;
    }
    else {
      if ((*piVar1 <= (int)uVar10) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((uVar8 != *(uint *)((this->Ranges).AllocatorInstance.Data + uVar11 * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("End == Ranges[Index].First",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIDescriptorAllocator.cpp"
                             ,0x83,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar13 < uVar10) {
        uVar13 = uVar10 - 1;
        uVar8 = 0;
        if ((int)uVar13 < *piVar1) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (uVar7 - 1 == *(int *)((this->Ranges).AllocatorInstance.Data + (uVar11 - 1) * 8 + 4)) {
          if (((this->Ranges).ArrayNum <= (int)uVar10) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar3 = *(undefined4 *)((this->Ranges).AllocatorInstance.Data + uVar11 * 8 + 4);
          uVar7 = 0;
          if ((int)uVar13 < (this->Ranges).ArrayNum) {
            uVar7 = ~uVar13 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(undefined4 *)((this->Ranges).AllocatorInstance.Data + (uVar11 - 1) * 8 + 4) = uVar3;
          TArray<FRHIDescriptorAllocatorRange,TSizedDefaultAllocator<32>_>::RemoveAt
                    (&this->Ranges,uVar10,Default);
          goto LAB_1446dcdda;
        }
      }
      if (((this->Ranges).ArrayNum <= (int)uVar10) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(uint *)((this->Ranges).AllocatorInstance.Data + uVar11 * 8) = uVar7;
    }
  }
  else {
    if ((*piVar1 <= (int)uVar10) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (uVar7 <= *(uint *)((this->Ranges).AllocatorInstance.Data + uVar11 * 8 + 4)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIDescriptorAllocator.cpp"
                         ,0xd0,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_1446dc882;
    }
    if ((*piVar1 <= (int)uVar10) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (uVar7 - 1 != *(int *)((this->Ranges).AllocatorInstance.Data + uVar11 * 8 + 4)) {
      if (uVar10 == uVar14) {
        iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,4,1,(ForAnyElementType *)this,piVar1,&(this->Ranges).ArrayMax);
        lVar2 = uVar11 * 8 + 8;
        pFVar9 = (this->Ranges).AllocatorInstance.Data + lVar2;
        memmove(pFVar9 + 8,pFVar9,(longlong)(int)((iVar6 - uVar10) + -1) << 3);
        pFVar9 = (this->Ranges).AllocatorInstance.Data;
        *(uint *)(pFVar9 + lVar2) = uVar7;
        *(uint *)(pFVar9 + uVar11 * 8 + 0xc) = uVar8 - 1;
        goto LAB_1446dcdda;
      }
      uVar13 = uVar10 + 1;
      goto LAB_1446dc882;
    }
    if (uVar10 < uVar14) {
      uVar13 = uVar10 + 1;
      uVar7 = 0;
      if ((int)uVar13 < (this->Ranges).ArrayNum) {
        uVar7 = ~uVar13 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar8 == *(uint *)((this->Ranges).AllocatorInstance.Data + (longlong)(int)uVar13 * 8)) {
        uVar7 = 0;
        if ((int)uVar13 < (this->Ranges).ArrayNum) {
          uVar7 = ~uVar13 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar3 = *(undefined4 *)
                 ((this->Ranges).AllocatorInstance.Data + (longlong)(int)uVar13 * 8 + 4);
        if (((this->Ranges).ArrayNum <= (int)uVar10) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined4 *)((this->Ranges).AllocatorInstance.Data + uVar11 * 8 + 4) = uVar3;
        TArray<FRHIDescriptorAllocatorRange,TSizedDefaultAllocator<32>_>::RemoveAt
                  (&this->Ranges,uVar13,Default);
        goto LAB_1446dcdda;
      }
    }
    if (((this->Ranges).ArrayNum <= (int)uVar10) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar9 = (this->Ranges).AllocatorInstance.Data + uVar11 * 8 + 4;
    *(uint *)pFVar9 = *(int *)pFVar9 + uVar12;
  }
LAB_1446dcdda:
  RecordFree(this,uVar12);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// Free @ 1446dce20

void __thiscall
FRHIDescriptorAllocator::Free(FRHIDescriptorAllocator *this,FRHIDescriptorHandle param_1)

{
  FRHIDescriptorAllocation FVar1;
  
  if ((param_1.Index != 0xffffffff) && (param_1.Type != Invalid)) {
    FVar1.Count = 1;
    FVar1.StartIndex = param_1.Index;
    Free(this,FVar1);
    return;
  }
  return;
}

// GetAllocatedRange @ 1446dd910

bool __thiscall
FRHIDescriptorAllocator::GetAllocatedRange
          (FRHIDescriptorAllocator *this,FRHIDescriptorAllocatorRange *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  lpCriticalSection = &this->CriticalSection;
  uVar7 = this->Capacity - 1;
  param_1->First = 0;
  param_1->Last = uVar7;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (0 < (this->Ranges).ArrayNum) {
    uVar1 = *(undefined8 *)(this->Ranges).AllocatorInstance.Data;
    if ((int)uVar1 == 0) {
      uVar5 = (uint)((ulonglong)uVar1 >> 0x20);
      if (uVar5 == uVar7) {
        bVar3 = false;
        goto LAB_1446dd9fb;
      }
      uVar5 = uVar5 + 1;
      uVar8 = uVar7;
      if (uVar5 < uVar7) {
        uVar8 = uVar5;
      }
      param_1->First = uVar8;
    }
    iVar6 = (this->Ranges).ArrayNum;
    uVar8 = iVar6 - 1;
    uVar5 = 0;
    if ((int)uVar8 < iVar6) {
      uVar5 = ~uVar8 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    uVar1 = *(undefined8 *)((this->Ranges).AllocatorInstance.Data + (longlong)(int)uVar8 * 8);
    if ((uint)((ulonglong)uVar1 >> 0x20) == uVar7) {
      iVar6 = (int)uVar1;
      uVar7 = iVar6 - 1;
      if (iVar6 == 0) {
        uVar7 = 0;
      }
      param_1->Last = uVar7;
    }
  }
  bVar3 = true;
LAB_1446dd9fb:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar3;
}

// Init @ 1446def50

void __thiscall
FRHIDescriptorAllocator::Init
          (FRHIDescriptorAllocator *this,uint param_1,TArrayView<TStatId_const_,int> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  this->Capacity = param_1;
  iVar3 = (this->Ranges).ArrayNum;
  piVar1 = &(this->Ranges).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)this,piVar1);
  }
  (this->Ranges).ArrayNum = iVar3 + 1;
  pFVar2 = (this->Ranges).AllocatorInstance.Data + (longlong)iVar3 * 8;
  *(undefined4 *)pFVar2 = 0;
  *(uint *)(pFVar2 + 4) = param_1 - 1;
  iVar3 = param_2->ArrayNum;
  piVar1 = &(this->Stats).ArrayMax;
  (this->Stats).ArrayNum = iVar3;
  if ((iVar3 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar3,*piVar1,&(this->Stats).AllocatorInstance,iVar3,piVar1);
  if (iVar3 != 0) {
    memcpy((this->Stats).AllocatorInstance.Data,param_2->DataPtr,(longlong)iVar3 << 3);
  }
  return;
}

// RecordFree @ 1446e1540

void __thiscall FRHIDescriptorAllocator::RecordFree(FRHIDescriptorAllocator *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FName FVar3;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FScriptContainerElement *pFVar4;
  uchar auVar5 [8];
  FName local_res8;
  FStatMessage local_48;
  
  pFVar4 = (this->Stats).AllocatorInstance.Data;
  iVar2 = (this->Stats).ArrayNum;
  auVar5[4] = '\0';
  auVar5[5] = '\0';
  auVar5[6] = '\0';
  auVar5[7] = '\0';
  auVar5._0_4_ = param_1;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  do {
    while( true ) {
      if ((this->Stats).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TStatId,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res8);
      }
      if (pFVar4 == pFVar1) {
        return;
      }
      if (param_1 != 0) break;
LAB_1446e1681:
      pFVar4 = pFVar4 + 8;
    }
    FVar3 = **(FName **)pFVar4;
    if (((FVar3 == (FName)0x0) || (FThreadStats::bPrimaryDisableForever != false)) ||
       (FThreadStats::TlsSlot == 0xffffffff)) goto LAB_1446e1681;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_48.NameAndInfo.Number = FVar3.Number & 0xffffbfff | 0xb000;
    local_res8 = FVar3;
    local_48.StatData.Pad = auVar5;
    local_48.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_48);
    FStatsTrace::Add(&local_res8,-(longlong)auVar5);
    if (this_00->ScopeCount != 0) {
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
      goto LAB_1446e1681;
    }
    FThreadStats::Flush(this_00,false,false);
    pFVar4 = pFVar4 + 8;
  } while( true );
}

// ResizeGrowAndAllocate @ 1446e39c0

TOptional<FRHIDescriptorAllocation> * __thiscall
FRHIDescriptorAllocator::ResizeGrowAndAllocate
          (FRHIDescriptorAllocator *this,TOptional<FRHIDescriptorAllocation> *__return_storage_ptr__
          ,uint param_1,uint param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TOptional<FRHIDescriptorAllocation> *pTVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  
  if ((param_1 <= this->Capacity) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Capacity < NewCapacity",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIDescriptorAllocator.cpp"
                         ,0x26,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TOptional<FRHIDescriptorAllocation> *)(*pcVar3)();
    return pTVar7;
  }
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar6 = (this->Ranges).ArrayNum;
  if (0 < iVar6) {
    uVar9 = iVar6 - 1;
    uVar5 = 0;
    if ((int)uVar9 < iVar6) {
      uVar5 = ~uVar9 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TOptional<FRHIDescriptorAllocation> *)(*pcVar3)();
      return pTVar7;
    }
    pFVar8 = (this->Ranges).AllocatorInstance.Data + (longlong)(int)uVar9 * 8;
    if (*(int *)(pFVar8 + 4) == this->Capacity - 1) goto LAB_1446e3af5;
  }
  piVar1 = &(this->Ranges).ArrayNum;
  iVar6 = *piVar1;
  piVar2 = &(this->Ranges).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)this,piVar2);
    *piVar1 = iVar6;
  }
  *piVar1 = iVar6 + 1;
  pFVar8 = (this->Ranges).AllocatorInstance.Data + (longlong)iVar6 * 8;
  *(uint *)pFVar8 = this->Capacity;
LAB_1446e3af5:
  *(uint *)(pFVar8 + 4) = param_1 - 1;
  this->Capacity = param_1;
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  AllocateInternal(this,__return_storage_ptr__,param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((__return_storage_ptr__->bIsSet == false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Allocation",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIDescriptorAllocator.cpp"
                         ,0x40,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TOptional<FRHIDescriptorAllocation> *)(*pcVar3)();
    return pTVar7;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return __return_storage_ptr__;
}

// Shutdown @ 1446e4f40

void __thiscall FRHIDescriptorAllocator::Shutdown(FRHIDescriptorAllocator *this)

{
  int *piVar1;
  
  piVar1 = &(this->Ranges).ArrayMax;
  (this->Ranges).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)this,0,piVar1);
    this->Capacity = 0;
    return;
  }
  this->Capacity = 0;
  return;
}

