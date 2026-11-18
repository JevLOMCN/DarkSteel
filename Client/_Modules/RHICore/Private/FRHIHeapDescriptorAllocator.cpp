// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHICore
// Functions: 5

// FRHIHeapDescriptorAllocator @ 1446cefb0

FRHIHeapDescriptorAllocator * __thiscall
FRHIHeapDescriptorAllocator::FRHIHeapDescriptorAllocator
          (FRHIHeapDescriptorAllocator *this,ERHIDescriptorTypeMask param_1,uint param_2,
          TArrayView<TStatId_const_,int> *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->_padding_,4000);
  iVar4 = param_3->ArrayNum;
  plVar1 = &this->_padding_;
  *plVar1 = 0;
  piVar2 = (int *)((longlong)&this->_padding_ + 4);
  *piVar2 = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(uint *)&this->_padding_ = param_2;
  iVar5 = (int)this->_padding_;
  if (iVar5 == *(int *)((longlong)&this->_padding_ + 4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)this,(int *)((longlong)&this->_padding_ + 4));
  }
  *(int *)&this->_padding_ = iVar5 + 1;
  lVar3 = this->_padding_;
  *(undefined4 *)(lVar3 + (longlong)iVar5 * 8) = 0;
  *(uint *)(lVar3 + (longlong)iVar5 * 8 + 4) = param_2 - 1;
  iVar5 = *piVar2;
  *(int *)&this->_padding_ = iVar4;
  if ((iVar4 == 0) && (iVar5 == 0)) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar4,iVar5,(ForAnyElementType *)plVar1,iVar4,piVar2);
    if (iVar4 != 0) {
      memcpy((void *)*plVar1,param_3->DataPtr,(longlong)iVar4 << 3);
    }
  }
  this->TypeMask = param_1;
  return this;
}

// Allocate @ 1446d1730

TOptional<FRHIDescriptorAllocation> * __thiscall
FRHIHeapDescriptorAllocator::Allocate
          (FRHIHeapDescriptorAllocator *this,
          TOptional<FRHIDescriptorAllocation> *__return_storage_ptr__,uint param_1)

{
  longlong *lpCriticalSection;
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection != (longlong *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FRHIDescriptorAllocator::AllocateInternal
              ((FRHIDescriptorAllocator *)this,__return_storage_ptr__,param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// Allocate @ 1446d17a0

FRHIDescriptorHandle __thiscall
FRHIHeapDescriptorAllocator::Allocate(FRHIHeapDescriptorAllocator *this,ERHIDescriptorType param_1)

{
  longlong *lpCriticalSection;
  undefined7 in_register_00000011;
  FRHIDescriptorHandle FVar1;
  undefined1 in_R8B;
  TOptional<FRHIDescriptorAllocation> local_18;
  
  FVar1._1_7_ = in_register_00000011;
  FVar1.Index._0_1_ = param_1;
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FRHIDescriptorAllocator::AllocateInternal((FRHIDescriptorAllocator *)this,&local_18,1);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (local_18.bIsSet == false) {
    in_R8B = 9;
    *(undefined8 *)FVar1 = 0;
    local_18.TypedValue.StartIndex = 0xffffffff;
  }
  *(uint *)FVar1 = local_18.TypedValue.StartIndex;
  *(undefined1 *)((longlong)FVar1 + 4) = in_R8B;
  return FVar1;
}

// Free @ 1446dce50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FRHIHeapDescriptorAllocator::Free
          (FRHIHeapDescriptorAllocator *this,FRHIDescriptorAllocation param_1)

{
  longlong *lpCriticalSection;
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  void *pvVar11;
  uint uVar12;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar13;
  
  uVar9 = param_1.StartIndex;
  if ((uVar9 == 0xffffffff) || (uVar14 = param_1.Count, uVar14 == 0)) {
    return;
  }
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  plVar1 = &this->_padding_;
  uVar10 = uVar14 + uVar9;
  uVar15 = 0;
  uVar16 = (int)this->_padding_ - 1;
LAB_1446dc882:
  uVar12 = uVar16 + uVar15 >> 1;
  uVar13 = (ulonglong)uVar12;
  if (((int)*plVar1 <= (int)uVar12) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (uVar9 < *(uint *)(this->_padding_ + uVar13 * 8)) {
    if (((int)*plVar1 <= (int)uVar12) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (uVar10 < *(uint *)(this->_padding_ + uVar13 * 8)) {
      if (uVar12 != uVar15) {
        uVar16 = uVar12 - 1;
        goto LAB_1446dc882;
      }
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,4,1,(ForAnyElementType *)this,(int *)plVar1,
                         (int *)((longlong)&this->_padding_ + 4));
      pvVar11 = (void *)(this->_padding_ + uVar13 * 8);
      memmove((void *)((longlong)pvVar11 + 8),pvVar11,(longlong)(int)(iVar8 - uVar12) << 3);
      lVar4 = this->_padding_;
      *(uint *)(lVar4 + uVar13 * 8) = uVar9;
      *(uint *)(lVar4 + uVar13 * 8 + 4) = uVar10 - 1;
    }
    else {
      if (((int)*plVar1 <= (int)uVar12) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((uVar10 != *(uint *)(this->_padding_ + uVar13 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("End == Ranges[Index].First",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIDescriptorAllocator.cpp"
                             ,0x83,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (uVar15 < uVar12) {
        uVar15 = uVar12 - 1;
        uVar10 = 0;
        if ((int)uVar15 < (int)*plVar1) {
          uVar10 = ~uVar15 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (uVar9 - 1 == *(int *)(this->_padding_ + 4 + (uVar13 - 1) * 8)) {
          if (((int)this->_padding_ <= (int)uVar12) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar3 = *(undefined4 *)(this->_padding_ + 4 + uVar13 * 8);
          uVar9 = 0;
          if ((int)uVar15 < (int)this->_padding_) {
            uVar9 = ~uVar15 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          *(undefined4 *)(this->_padding_ + 4 + (uVar13 - 1) * 8) = uVar3;
          TArray<FRHIDescriptorAllocatorRange,TSizedDefaultAllocator<32>_>::RemoveAt
                    ((TArray<FRHIDescriptorAllocatorRange,TSizedDefaultAllocator<32>_> *)this,uVar12
                     ,Default);
          goto LAB_1446dcdda;
        }
      }
      if (((int)this->_padding_ <= (int)uVar12) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(uint *)(this->_padding_ + uVar13 * 8) = uVar9;
    }
  }
  else {
    if (((int)*plVar1 <= (int)uVar12) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (uVar9 <= *(uint *)(this->_padding_ + 4 + uVar13 * 8)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIDescriptorAllocator.cpp"
                         ,0xd0,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      goto LAB_1446dc882;
    }
    if (((int)*plVar1 <= (int)uVar12) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (uVar9 - 1 != *(int *)(this->_padding_ + 4 + uVar13 * 8)) {
      if (uVar12 == uVar16) {
        iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,4,1,(ForAnyElementType *)this,(int *)plVar1,
                           (int *)((longlong)&this->_padding_ + 4));
        lVar4 = uVar13 * 8 + 8;
        pvVar11 = (void *)(this->_padding_ + lVar4);
        memmove((void *)((longlong)pvVar11 + 8),pvVar11,(longlong)(int)((iVar8 - uVar12) + -1) << 3)
        ;
        lVar5 = this->_padding_;
        *(uint *)(lVar5 + lVar4) = uVar9;
        *(uint *)(lVar5 + 4 + lVar4) = uVar10 - 1;
        goto LAB_1446dcdda;
      }
      uVar15 = uVar12 + 1;
      goto LAB_1446dc882;
    }
    if (uVar12 < uVar16) {
      uVar15 = uVar12 + 1;
      uVar9 = 0;
      if ((int)uVar15 < (int)this->_padding_) {
        uVar9 = ~uVar15 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (uVar10 == *(uint *)(this->_padding_ + (longlong)(int)uVar15 * 8)) {
        uVar9 = 0;
        if ((int)uVar15 < (int)this->_padding_) {
          uVar9 = ~uVar15 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar3 = *(undefined4 *)(this->_padding_ + 4 + (longlong)(int)uVar15 * 8);
        if (((int)this->_padding_ <= (int)uVar12) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined4 *)(this->_padding_ + 4 + uVar13 * 8) = uVar3;
        TArray<FRHIDescriptorAllocatorRange,TSizedDefaultAllocator<32>_>::RemoveAt
                  ((TArray<FRHIDescriptorAllocatorRange,TSizedDefaultAllocator<32>_> *)this,uVar15,
                   Default);
        goto LAB_1446dcdda;
      }
    }
    if (((int)this->_padding_ <= (int)uVar12) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    piVar2 = (int *)(this->_padding_ + 4 + uVar13 * 8);
    *piVar2 = *piVar2 + uVar14;
  }
LAB_1446dcdda:
  FRHIDescriptorAllocator::RecordFree((FRHIDescriptorAllocator *)this,uVar14);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// Free @ 1446dce60

void __thiscall
FRHIHeapDescriptorAllocator::Free(FRHIHeapDescriptorAllocator *this,FRHIDescriptorHandle param_1)

{
  code *pcVar1;
  FRHIDescriptorAllocation FVar2;
  bool bVar3;
  
  if ((param_1.Index != 0xffffffff) && (param_1.Type != Invalid)) {
    if (((this->TypeMask >> (param_1._4_2_ & 0xf) & 1) == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("HandlesAllocation(InHandle.GetType())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHIDescriptorAllocator.cpp"
                           ,0x11d,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (param_1.Type != Invalid) {
      FVar2.Count = 1;
      FVar2.StartIndex = param_1.Index;
      FRHIDescriptorAllocator::Free((FRHIDescriptorAllocator *)this,FVar2);
    }
  }
  return;
}

