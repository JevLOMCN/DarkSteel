// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 19

// ToArray<TSizedDefaultAllocator<32>_> @ 141b11540

void __thiscall
TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::ToArray<TSizedDefaultAllocator<32>_>
          (TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_> *this,
          TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *pTVar11;
  undefined1 local_res8 [8];
  
  piVar1 = &param_1->ArrayMax;
  piVar2 = &param_1->ArrayNum;
  pFVar6 = (param_1->AllocatorInstance).Data;
  if (param_1->ArrayMax < 0) {
    DestructItems<TTestToken<int>,int>((TTestToken<int> *)pFVar6,*piVar2);
    *piVar2 = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&param_1->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TTestToken<int>,int>((TTestToken<int> *)pFVar6,*piVar2);
    *piVar2 = 0;
  }
  uVar3 = this->Count;
  if (-1 < (int)uVar3) {
    if (*piVar1 < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar3,&param_1->AllocatorInstance,*piVar2,piVar1);
    }
    iVar4 = (this->Pages).ArrayNum;
    pTVar10 = (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
              (this->Pages).AllocatorInstance.Data;
    pTVar11 = pTVar10 + iVar4;
    while( true ) {
      if ((this->Pages).ArrayNum != iVar4) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((pTVar10 == pTVar11) || (pTVar10->ArrayNum == 0)) break;
      if (param_1 == pTVar10) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L"");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar5 = pTVar10->ArrayNum;
      if (iVar5 != 0) {
        iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar5,&param_1->AllocatorInstance,piVar2,piVar1);
        ConstructItems<TTestToken<int>,TTestToken<int>,int>
                  ((param_1->AllocatorInstance).Data + (longlong)iVar9 * 4,
                   (TTestToken<int> *)(pTVar10->AllocatorInstance).Data,iVar5);
      }
      pTVar10 = pTVar10 + 1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

// ToArray<TSizedDefaultAllocator<32>_> @ 141b116b0

void __thiscall
TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::ToArray<TSizedDefaultAllocator<32>_>
          (TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_> *this,
          TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *pTVar11;
  undefined1 local_res8 [8];
  uint local_res10;
  
  piVar1 = &param_1->ArrayMax;
  piVar2 = &param_1->ArrayNum;
  pFVar5 = (param_1->AllocatorInstance).Data;
  if (param_1->ArrayMax < 0) {
    DestructItems<TTestToken<int>,int>((TTestToken<int> *)pFVar5,*piVar2);
    *piVar2 = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&param_1->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TTestToken<int>,int>((TTestToken<int> *)pFVar5,*piVar2);
    *piVar2 = 0;
  }
  uVar3 = this->Count;
  if (-1 < (int)uVar3) {
    if (*piVar1 < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar3,&param_1->AllocatorInstance,*piVar2,piVar1);
    }
    local_res10 = (this->Pages).ArrayNum;
    uVar9 = (ulonglong)(int)local_res10;
    pTVar10 = (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
              (this->Pages).AllocatorInstance.Data;
    pTVar11 = pTVar10 + uVar9;
    while( true ) {
      if ((this->Pages).ArrayNum != (int)uVar9) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((pTVar10 == pTVar11) || (pTVar10->ArrayNum == 0)) break;
      if (param_1 == pTVar10) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x986,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar4 = pTVar10->ArrayNum;
      if (iVar4 != 0) {
        iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar4,&param_1->AllocatorInstance,piVar2,piVar1);
        memmove((param_1->AllocatorInstance).Data + (longlong)iVar8 * 4,
                (pTVar10->AllocatorInstance).Data,(longlong)iVar4 << 2);
        pTVar10->ArrayNum = 0;
      }
      uVar9 = (ulonglong)local_res10;
      pTVar10 = pTVar10 + 1;
    }
    this->Count = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

// operator== @ 141b2bb10

bool __thiscall
TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::operator==
          (TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_> *this,
          TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  
  iVar10 = this->Count;
  if (iVar10 == param_1->Count) {
    uVar8 = iVar10 >> 0x1f & 3;
    uVar7 = iVar10 + uVar8;
    iVar10 = (int)uVar7 >> 2;
    if ((uVar7 & 3) != uVar8) {
      iVar10 = iVar10 + 1;
    }
    uVar7 = 0;
    if (0 < iVar10) {
      lVar9 = 0;
      lVar11 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar7 < (this->Pages).ArrayNum) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        pFVar2 = (this->Pages).AllocatorInstance.Data;
        uVar8 = 0;
        if ((int)uVar7 < (param_1->Pages).ArrayNum) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        pFVar3 = (param_1->Pages).AllocatorInstance.Data;
        iVar1 = *(int *)(pFVar2 + lVar11 + 8);
        if (iVar1 != *(int *)(pFVar3 + lVar11 + 8)) goto LAB_141b2bc37;
        bVar5 = CompareItems<TTestToken<int>,int>
                          (*(TTestToken<int> **)(pFVar2 + lVar11),
                           *(TTestToken<int> **)(pFVar3 + lVar11),iVar1);
        if (!bVar5) goto LAB_141b2bc37;
        uVar7 = uVar7 + 1;
        lVar9 = lVar9 + 1;
        lVar11 = lVar11 + 0x10;
      } while (lVar9 < iVar10);
    }
    bVar5 = true;
  }
  else {
LAB_141b2bc37:
    bVar5 = false;
  }
  return bVar5;
}

// operator== @ 141b2bc60

bool __thiscall
TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_>::operator==
          (TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_> *this,
          TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  
  iVar10 = this->Count;
  if (iVar10 == param_1->Count) {
    uVar8 = iVar10 >> 0x1f & 0x1f;
    uVar7 = iVar10 + uVar8;
    iVar10 = (int)uVar7 >> 5;
    if ((uVar7 & 0x1f) != uVar8) {
      iVar10 = iVar10 + 1;
    }
    uVar7 = 0;
    if (0 < iVar10) {
      lVar9 = 0;
      lVar11 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar7 < (this->Pages).ArrayNum) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        pFVar2 = (this->Pages).AllocatorInstance.Data;
        uVar8 = 0;
        if ((int)uVar7 < (param_1->Pages).ArrayNum) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        pFVar3 = (param_1->Pages).AllocatorInstance.Data;
        iVar1 = *(int *)(pFVar2 + lVar11 + 8);
        if (iVar1 != *(int *)(pFVar3 + lVar11 + 8)) goto LAB_141b2bd87;
        bVar5 = CompareItems<TTestToken<int>,int>
                          (*(TTestToken<int> **)(pFVar2 + lVar11),
                           *(TTestToken<int> **)(pFVar3 + lVar11),iVar1);
        if (!bVar5) goto LAB_141b2bd87;
        uVar7 = uVar7 + 1;
        lVar9 = lVar9 + 1;
        lVar11 = lVar11 + 0x10;
      } while (lVar9 < iVar10);
    }
    bVar5 = true;
  }
  else {
LAB_141b2bd87:
    bVar5 = false;
  }
  return bVar5;
}

// operator[] @ 141b2be20

TTestToken<int> * __thiscall
TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_>::operator[]
          (TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  TTestToken<int> *pTVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  
  uVar3 = 0;
  if (param_1 < this->Count) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < Count)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\PagedArray.h"
                       ,0x33c,L"Parameter index %d exceeds container size %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TTestToken<int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  uVar6 = param_1 >> 0x1f & 0x1f;
  uVar4 = param_1 + uVar6;
  uVar6 = (uVar4 & 0x1f) - uVar6;
  uVar4 = (int)uVar4 >> 5;
  uVar3 = 0;
  if ((int)uVar4 < (this->Pages).ArrayNum) {
    uVar3 = ~uVar4 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TTestToken<int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  pFVar7 = (this->Pages).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x10;
  uVar3 = 0;
  if ((int)uVar6 < *(int *)(pFVar7 + 8)) {
    uVar3 = ~uVar6 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TTestToken<int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  return (TTestToken<int> *)(*(longlong *)pFVar7 + (longlong)(int)uVar6 * 4);
}

// AddPage @ 141b38270

TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> * __thiscall
TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::AddPage
          (TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_> *this)

{
  int *piVar1;
  int iVar2;
  TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *pTVar3;
  
  iVar2 = (this->Pages).ArrayNum;
  piVar1 = &(this->Pages).ArrayMax;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)this,piVar1);
  }
  (this->Pages).ArrayNum = iVar2 + 1;
  pTVar3 = (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
           ((this->Pages).AllocatorInstance.Data + (longlong)iVar2 * 0x10);
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pTVar3->ArrayMax = 0;
  pTVar3->ArrayNum = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,4,(ForAnyElementType *)pTVar3,0,&pTVar3->ArrayMax);
  return pTVar3;
}

// CopyUnchecked @ 141b3c3c0

void __thiscall
TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::CopyUnchecked
          (TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_> *this,
          TTestToken<int> *param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  
  if (param_2 != 0) {
    uVar7 = this->Count >> 0x1f & 3;
    uVar5 = this->Count + uVar7;
    uVar8 = (int)uVar5 >> 2;
    iVar6 = (uVar5 & 3) - uVar7;
    piVar1 = &(this->Pages).ArrayNum;
    uVar5 = param_2;
    if (iVar6 != 0) {
      iVar6 = 4 - iVar6;
      iVar3 = param_2;
      if (iVar6 < param_2) {
        iVar3 = iVar6;
      }
      uVar5 = 0;
      if ((int)uVar8 < *piVar1) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar10 = (this->Pages).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10;
      uVar8 = uVar8 + 1;
      if (((param_1 == (TTestToken<int> *)0x0) && (iVar3 != 0)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr || Count == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9c1,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar3,(ForAnyElementType *)pFVar10,(int *)(pFVar10 + 8),
                         (int *)(pFVar10 + 0xc));
      ConstructItems<TTestToken<int>,TTestToken<int>,int>
                ((void *)(*(longlong *)&pFVar10->field_0x0 + (longlong)iVar6 * 4),param_1,iVar3);
      uVar5 = param_2 - iVar3;
      param_1 = param_1 + iVar3;
    }
    if (3 < (int)uVar5) {
      uVar9 = (ulonglong)(uVar5 >> 2);
      lVar11 = (longlong)(int)uVar8 << 4;
      uVar5 = uVar5 + (uVar5 >> 2) * -4;
      do {
        uVar7 = 0;
        if ((int)uVar8 < *piVar1) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar8 = uVar8 + 1;
        pFVar10 = (this->Pages).AllocatorInstance.Data + lVar11;
        lVar11 = lVar11 + 0x10;
        if ((param_1 == (TTestToken<int> *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9c1,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,4,(ForAnyElementType *)pFVar10,(int *)(pFVar10 + 8),
                           (int *)(pFVar10 + 0xc));
        ConstructItems<TTestToken<int>,TTestToken<int>,int>
                  ((void *)(*(longlong *)&pFVar10->field_0x0 + (longlong)iVar6 * 4),param_1,4);
        param_1 = param_1 + 4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    if (uVar5 != 0) {
      uVar7 = 0;
      if ((int)uVar8 < (this->Pages).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar10 = (this->Pages).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10;
      if ((param_1 == (TTestToken<int> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr || Count == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9c1,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,uVar5,(ForAnyElementType *)pFVar10,(int *)(pFVar10 + 8),
                         (int *)(pFVar10 + 0xc));
      ConstructItems<TTestToken<int>,TTestToken<int>,int>
                ((void *)(*(longlong *)&pFVar10->field_0x0 + (longlong)iVar6 * 4),param_1,uVar5);
    }
    this->Count = param_2 + this->Count;
  }
  return;
}

// CopyUnchecked @ 141b3c710

void __thiscall
TPagedArray<TTestToken<int>,32,TSizedDefaultAllocator<32>_>::CopyUnchecked
          (TPagedArray<TTestToken<int>,32,TSizedDefaultAllocator<32>_> *this,
          TTestToken<int> *param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  
  if (param_2 != 0) {
    uVar7 = this->Count >> 0x1f & 7;
    uVar5 = this->Count + uVar7;
    uVar8 = (int)uVar5 >> 3;
    iVar6 = (uVar5 & 7) - uVar7;
    piVar1 = &(this->Pages).ArrayNum;
    uVar5 = param_2;
    if (iVar6 != 0) {
      iVar6 = 8 - iVar6;
      iVar3 = param_2;
      if (iVar6 < param_2) {
        iVar3 = iVar6;
      }
      uVar5 = 0;
      if ((int)uVar8 < *piVar1) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar10 = (this->Pages).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10;
      uVar8 = uVar8 + 1;
      if (((param_1 == (TTestToken<int> *)0x0) && (iVar3 != 0)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr || Count == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9c1,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar3,(ForAnyElementType *)pFVar10,(int *)(pFVar10 + 8),
                         (int *)(pFVar10 + 0xc));
      ConstructItems<TTestToken<int>,TTestToken<int>,int>
                ((void *)(*(longlong *)&pFVar10->field_0x0 + (longlong)iVar6 * 4),param_1,iVar3);
      uVar5 = param_2 - iVar3;
      param_1 = param_1 + iVar3;
    }
    if (7 < (int)uVar5) {
      uVar9 = (ulonglong)(uVar5 >> 3);
      lVar11 = (longlong)(int)uVar8 << 4;
      uVar5 = uVar5 + (uVar5 >> 3) * -8;
      do {
        uVar7 = 0;
        if ((int)uVar8 < *piVar1) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar8 = uVar8 + 1;
        pFVar10 = (this->Pages).AllocatorInstance.Data + lVar11;
        lVar11 = lVar11 + 0x10;
        if ((param_1 == (TTestToken<int> *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ptr != nullptr || Count == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x9c1,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,8,(ForAnyElementType *)pFVar10,(int *)(pFVar10 + 8),
                           (int *)(pFVar10 + 0xc));
        ConstructItems<TTestToken<int>,TTestToken<int>,int>
                  ((void *)(*(longlong *)&pFVar10->field_0x0 + (longlong)iVar6 * 4),param_1,8);
        param_1 = param_1 + 8;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    if (uVar5 != 0) {
      uVar7 = 0;
      if ((int)uVar8 < (this->Pages).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar10 = (this->Pages).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x10;
      if ((param_1 == (TTestToken<int> *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr || Count == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9c1,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,uVar5,(ForAnyElementType *)pFVar10,(int *)(pFVar10 + 8),
                         (int *)(pFVar10 + 0xc));
      ConstructItems<TTestToken<int>,TTestToken<int>,int>
                ((void *)(*(longlong *)&pFVar10->field_0x0 + (longlong)iVar6 * 4),param_1,uVar5);
    }
    this->Count = param_2 + this->Count;
  }
  return;
}

// Empty @ 141b3f700

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::Empty
          (TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  
  Reset(this);
  uVar5 = (ulonglong)(this->Pages).ArrayNum;
  uVar4 = param_1 >> 0x1f & 3;
  uVar3 = param_1 + uVar4;
  iVar7 = (int)uVar3 >> 2;
  if ((uVar3 & 3) != uVar4) {
    iVar7 = iVar7 + 1;
  }
  TArray<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Pages,iVar7,Default);
  if ((longlong)uVar5 < (longlong)iVar7) {
    lVar8 = uVar5 << 4;
    lVar6 = (longlong)iVar7 - uVar5;
    do {
      uVar4 = (uint)uVar5;
      uVar3 = 0;
      if ((int)uVar4 < (this->Pages).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pFVar9 = (this->Pages).AllocatorInstance.Data + lVar8;
      if (*(int *)(pFVar9 + 0xc) < 4) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,4,(ForAnyElementType *)pFVar9,*(int *)&pFVar9[8].field_0x0,
                   (int *)(pFVar9 + 0xc));
      }
      uVar5 = (ulonglong)(uVar4 + 1);
      lVar8 = lVar8 + 0x10;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}

// Empty @ 141b3f810

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_>::Empty
          (TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  
  Reset(this);
  uVar5 = (ulonglong)(this->Pages).ArrayNum;
  uVar4 = param_1 >> 0x1f & 0x1f;
  uVar3 = param_1 + uVar4;
  iVar7 = (int)uVar3 >> 5;
  if ((uVar3 & 0x1f) != uVar4) {
    iVar7 = iVar7 + 1;
  }
  TArray<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Pages,iVar7,Default);
  if ((longlong)uVar5 < (longlong)iVar7) {
    lVar8 = uVar5 << 4;
    lVar6 = (longlong)iVar7 - uVar5;
    do {
      uVar4 = (uint)uVar5;
      uVar3 = 0;
      if ((int)uVar4 < (this->Pages).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pFVar9 = (this->Pages).AllocatorInstance.Data + lVar8;
      if (*(int *)(pFVar9 + 0xc) < 0x20) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0x20,(ForAnyElementType *)pFVar9,*(int *)&pFVar9[8].field_0x0,
                   (int *)(pFVar9 + 0xc));
      }
      uVar5 = (ulonglong)(uVar4 + 1);
      lVar8 = lVar8 + 0x10;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}

// Grow @ 141b44360

void __thiscall
TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::Grow
          (TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  FScriptContainerElement *pFVar7;
  
  uVar4 = param_1 >> 0x1f & 3;
  uVar2 = param_1 + uVar4;
  uVar5 = (int)uVar2 >> 2;
  if ((uVar2 & 3) != uVar4) {
    uVar5 = uVar5 + 1;
  }
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  piVar1 = &(this->Pages).ArrayMax;
  if ((this->Pages).ArrayMax < (int)uVar5) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar5,(ForAnyElementType *)this,(this->Pages).ArrayNum,piVar1);
  }
  iVar3 = (this->Pages).ArrayNum;
  if (iVar3 < (int)uVar5) {
    uVar6 = (ulonglong)(uVar5 - iVar3);
    do {
      iVar3 = (this->Pages).ArrayNum;
      if (iVar3 == *piVar1) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)this,piVar1);
        (this->Pages).ArrayNum = iVar3;
      }
      (this->Pages).ArrayNum = iVar3 + 1;
      pFVar7 = (this->Pages).AllocatorInstance.Data + (longlong)iVar3 * 0x10;
      *(undefined8 *)&pFVar7->field_0x0 = 0;
      *(undefined4 *)&pFVar7[8].field_0x0 = 0;
      *(int *)(pFVar7 + 0xc) = 0;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,4,(ForAnyElementType *)pFVar7,0,(int *)(pFVar7 + 0xc));
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}

// Grow @ 141b44460

void __thiscall
TPagedArray<TTestToken<int>,32,TSizedDefaultAllocator<32>_>::Grow
          (TPagedArray<TTestToken<int>,32,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  FScriptContainerElement *pFVar7;
  
  uVar4 = param_1 >> 0x1f & 7;
  uVar2 = param_1 + uVar4;
  uVar5 = (int)uVar2 >> 3;
  if ((uVar2 & 7) != uVar4) {
    uVar5 = uVar5 + 1;
  }
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  piVar1 = &(this->Pages).ArrayMax;
  if ((this->Pages).ArrayMax < (int)uVar5) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar5,(ForAnyElementType *)this,(this->Pages).ArrayNum,piVar1);
  }
  iVar3 = (this->Pages).ArrayNum;
  if (iVar3 < (int)uVar5) {
    uVar6 = (ulonglong)(uVar5 - iVar3);
    do {
      iVar3 = (this->Pages).ArrayNum;
      if (iVar3 == *piVar1) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,(ForAnyElementType *)this,piVar1);
        (this->Pages).ArrayNum = iVar3;
      }
      (this->Pages).ArrayNum = iVar3 + 1;
      pFVar7 = (this->Pages).AllocatorInstance.Data + (longlong)iVar3 * 0x10;
      *(undefined8 *)&pFVar7->field_0x0 = 0;
      *(undefined4 *)&pFVar7[8].field_0x0 = 0;
      *(int *)(pFVar7 + 0xc) = 0;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,8,(ForAnyElementType *)pFVar7,0,(int *)(pFVar7 + 0xc));
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}

// Pop @ 141b47d30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_>::Pop
          (TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_> *this,
          EAllowShrinking param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (this->Count < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < Count)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\PagedArray.h"
                       ,0x33c,L"Parameter index %d exceeds container size %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = this->Count + -1;
  uVar5 = iVar3 >> 0x1f & 0x1f;
  uVar4 = iVar3 + uVar5;
  iVar3 = (uVar4 & 0x1f) - uVar5;
  uVar4 = (int)uVar4 >> 5;
  uVar5 = 0;
  if ((int)uVar4 < (this->Pages).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>::RemoveAt
            ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
             ((this->Pages).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x10),iVar3,No);
  if ((param_1 == Default) && (iVar3 == 0)) {
    TArray<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->Pages,uVar4,Default);
  }
  this->Count = this->Count + -1;
  return;
}

// RemoveAtSwap @ 141b4b8d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_>::RemoveAtSwap
          (TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  
  uVar5 = 0;
  if (param_1 < this->Count) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < Count)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\PagedArray.h"
                       ,0x33c,L"Parameter index %d exceeds container size %d");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar8 = (this->Pages).ArrayNum;
  uVar10 = param_1 >> 0x1f & 0x1f;
  uVar5 = param_1 + uVar10;
  uVar10 = (uVar5 & 0x1f) - uVar10;
  uVar5 = (int)uVar5 >> 5;
  iVar6 = this->Count + -1;
  uVar11 = iVar6 >> 0x1f & 0x1f;
  uVar7 = iVar6 + uVar11;
  uVar11 = (uVar7 & 0x1f) - uVar11;
  uVar7 = (int)uVar7 >> 5;
  if (uVar5 == uVar7) {
    uVar7 = 0;
    if ((int)uVar5 < iVar8) {
      uVar7 = ~uVar5 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar12 = (this->Pages).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x10;
    uVar7 = 0;
    if ((int)uVar10 < *(int *)(pFVar12 + 8)) {
      uVar7 = ~uVar10 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    TTestToken<int>::DestructorCalls = TTestToken<int>::DestructorCalls + 1;
    iVar8 = *(int *)(pFVar12 + 8) + ~uVar10;
    if (1 < iVar8) {
      iVar8 = 1;
    }
    if (iVar8 != 0) {
      memmove((void *)(*(longlong *)pFVar12 + (longlong)(int)uVar10 * 4),
              (void *)(*(longlong *)pFVar12 + (longlong)(*(int *)(pFVar12 + 8) - iVar8) * 4),
              (longlong)iVar8 << 2);
    }
    *(int *)(pFVar12 + 8) = *(int *)(pFVar12 + 8) + -1;
    if (param_2 == Default) {
      uVar10 = 0;
      if ((int)uVar5 < (this->Pages).ArrayNum) {
        uVar10 = ~uVar5 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (*(int *)((this->Pages).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x10 + 8) == 0) {
        TArray<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
        SetNum(&this->Pages,uVar5,Default);
      }
    }
  }
  else {
    uVar9 = 0;
    if ((int)uVar7 < iVar8) {
      uVar9 = ~uVar7 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar12 = (this->Pages).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10;
    uVar9 = 0;
    if ((int)uVar11 < *(int *)(pFVar12 + 8)) {
      uVar9 = ~uVar11 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    puVar1 = (undefined4 *)(*(longlong *)pFVar12 + (longlong)(int)uVar11 * 4);
    uVar9 = 0;
    if ((int)uVar5 < (this->Pages).ArrayNum) {
      uVar9 = ~uVar5 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar12 = (this->Pages).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x10;
    uVar5 = 0;
    if ((int)uVar10 < *(int *)(pFVar12 + 8)) {
      uVar5 = ~uVar10 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    puVar2 = (undefined4 *)(*(longlong *)pFVar12 + (longlong)(int)uVar10 * 4);
    if (puVar1 == puVar2) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3577702131160842175>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\TokenTest.h"
                         ,0x41,"&Other != this");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *puVar2 = *puVar1;
    TTestToken<int>::MoveAssignmentCalls = TTestToken<int>::MoveAssignmentCalls + 1;
    uVar5 = 0;
    if ((int)uVar7 < (this->Pages).ArrayNum) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>::RemoveAt
              ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
               ((this->Pages).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10),uVar11,No);
  }
  this->Count = this->Count + -1;
  return;
}

// Reserve @ 141b4c660

void __thiscall
TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_>::Reserve
          (TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  
  if ((param_1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\PagedArray.h"
                         ,0x27c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = (this->Pages).ArrayNum;
  if (iVar5 << 5 < param_1) {
    uVar6 = param_1 >> 0x1f & 0x1f;
    uVar4 = param_1 + uVar6;
    uVar7 = (int)uVar4 >> 5;
    if ((uVar4 & 0x1f) != uVar6) {
      uVar7 = uVar7 + 1;
    }
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    piVar1 = &(this->Pages).ArrayMax;
    if ((this->Pages).ArrayMax < (int)uVar7) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar7,(ForAnyElementType *)this,iVar5,piVar1);
    }
    iVar5 = (this->Pages).ArrayNum;
    if (iVar5 < (int)uVar7) {
      uVar8 = (ulonglong)(uVar7 - iVar5);
      do {
        iVar5 = (this->Pages).ArrayNum;
        if (iVar5 == *piVar1) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,(ForAnyElementType *)this,piVar1);
        }
        (this->Pages).ArrayNum = iVar5 + 1;
        pFVar9 = (this->Pages).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
        *(undefined8 *)&pFVar9->field_0x0 = 0;
        *(undefined4 *)&pFVar9[8].field_0x0 = 0;
        *(int *)(pFVar9 + 0xc) = 0;
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0x20,(ForAnyElementType *)pFVar9,0,(int *)(pFVar9 + 0xc));
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  return;
}

// Reset @ 141b4c780

void __thiscall
TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::Reset
          (TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_> *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Pages).ArrayNum;
  pFVar3 = (this->Pages).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Pages).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    pFVar2 = pFVar3 + 0xc;
    if (*(int *)pFVar2 < 0) {
      DestructItems<TTestToken<int>,int>
                (*(TTestToken<int> **)&pFVar3->field_0x0,*(int *)&pFVar3[8].field_0x0);
      *(undefined4 *)&pFVar3[8].field_0x0 = 0;
      if (*(int *)pFVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)pFVar3,0,(int *)pFVar2);
      }
      pFVar3 = pFVar3 + 0x10;
    }
    else {
      DestructItems<TTestToken<int>,int>
                (*(TTestToken<int> **)&pFVar3->field_0x0,*(int *)&pFVar3[8].field_0x0);
      *(undefined4 *)&pFVar3[8].field_0x0 = 0;
      pFVar3 = pFVar3 + 0x10;
    }
  }
  this->Count = 0;
  return;
}

// Reset @ 141b4c840

void __thiscall
TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_>::Reset
          (TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_> *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Pages).ArrayNum;
  pFVar3 = (this->Pages).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->Pages).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    pFVar2 = pFVar3 + 0xc;
    if (*(int *)pFVar2 < 0) {
      DestructItems<TTestToken<int>,int>
                (*(TTestToken<int> **)&pFVar3->field_0x0,*(int *)&pFVar3[8].field_0x0);
      *(undefined4 *)&pFVar3[8].field_0x0 = 0;
      if (*(int *)pFVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)pFVar3,0,(int *)pFVar2);
      }
      pFVar3 = pFVar3 + 0x10;
    }
    else {
      DestructItems<TTestToken<int>,int>
                (*(TTestToken<int> **)&pFVar3->field_0x0,*(int *)&pFVar3[8].field_0x0);
      *(undefined4 *)&pFVar3[8].field_0x0 = 0;
      pFVar3 = pFVar3 + 0x10;
    }
  }
  this->Count = 0;
  return;
}

// SetNum @ 141b4d6d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_>::SetNum
          (TPagedArray<TTestToken<int>,16,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  int *piVar10;
  TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *this_00;
  int local_res8;
  
  uVar6 = param_1 >> 0x1f & 3;
  uVar3 = param_1 + uVar6;
  iVar4 = (uVar3 & 3) - uVar6;
  iVar5 = (int)uVar3 >> 2;
  if (iVar4 != 0) {
    iVar5 = iVar5 + 1;
  }
  if (param_1 <= this->Count) {
    if ((param_1 < this->Count) &&
       (TArray<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
        SetNum(&this->Pages,iVar5,param_2), iVar4 != 0)) {
      iVar5 = (this->Pages).ArrayNum;
      uVar6 = iVar5 - 1;
      uVar3 = 0;
      if ((int)uVar6 < iVar5) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>::SetNum
                ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                 ((this->Pages).AllocatorInstance.Data +
                 (longlong)((this->Pages).ArrayNum + -1) * 0x10),iVar4,No);
    }
    this->Count = param_1;
    return;
  }
  TArray<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Pages,iVar5,Default);
  uVar3 = 0;
  local_res8 = param_1;
  if (3 < param_1) {
    uVar8 = (ulonglong)((uint)param_1 >> 2);
    lVar7 = 0;
    local_res8 = param_1 + ((uint)param_1 >> 2) * -4;
    do {
      uVar6 = 0;
      if ((int)uVar3 < (this->Pages).ArrayNum) {
        uVar6 = ~uVar3 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar3 = uVar3 + 1;
      this_00 = (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                ((this->Pages).AllocatorInstance.Data + lVar7);
      lVar7 = lVar7 + 0x10;
      iVar5 = this_00->ArrayNum;
      if (iVar5 < 4) {
        iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,4 - iVar5,(ForAnyElementType *)this_00,&this_00->ArrayNum,
                           &this_00->ArrayMax);
        DefaultConstructItems<TTestToken<int>,int>
                  ((this_00->AllocatorInstance).Data + (longlong)iVar4 * 4,4 - iVar5);
      }
      else if (4 < iVar5) {
        iVar5 = iVar5 + -4;
        if (iVar5 < 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        else if (iVar5 == 0) goto LAB_141b4d892;
        TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>::RemoveAtImpl(this_00,4,iVar5);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(ForAnyElementType *)this_00,this_00->ArrayNum,&this_00->ArrayMax);
      }
LAB_141b4d892:
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  piVar10 = &(this->Pages).ArrayNum;
  if (local_res8 != 0) {
    uVar6 = 0;
    if ((int)uVar3 < *piVar10) {
      uVar6 = ~uVar3 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar9 = (this->Pages).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x10;
    if (*(int *)(pFVar9 + 0xc) < 4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,4,(ForAnyElementType *)pFVar9,*(int *)&pFVar9[8].field_0x0,
                 (int *)(pFVar9 + 0xc));
    }
    uVar6 = 0;
    if ((int)uVar3 < *piVar10) {
      uVar6 = ~uVar3 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
               ((this->Pages).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x10),local_res8,No);
  }
  this->Count = param_1;
  return;
}

// SetNum @ 141b4da50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_>::SetNum
          (TPagedArray<TTestToken<int>,128,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  int *piVar10;
  TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *this_00;
  int local_res8;
  
  uVar6 = param_1 >> 0x1f & 0x1f;
  uVar3 = param_1 + uVar6;
  iVar4 = (uVar3 & 0x1f) - uVar6;
  iVar5 = (int)uVar3 >> 5;
  if (iVar4 != 0) {
    iVar5 = iVar5 + 1;
  }
  if (param_1 <= this->Count) {
    if ((param_1 < this->Count) &&
       (TArray<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
        SetNum(&this->Pages,iVar5,param_2), iVar4 != 0)) {
      iVar5 = (this->Pages).ArrayNum;
      uVar6 = iVar5 - 1;
      uVar3 = 0;
      if ((int)uVar6 < iVar5) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>::SetNum
                ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                 ((this->Pages).AllocatorInstance.Data +
                 (longlong)((this->Pages).ArrayNum + -1) * 0x10),iVar4,No);
    }
    this->Count = param_1;
    return;
  }
  TArray<TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Pages,iVar5,Default);
  uVar3 = 0;
  local_res8 = param_1;
  if (0x1f < param_1) {
    uVar8 = (ulonglong)((uint)param_1 >> 5);
    lVar7 = 0;
    local_res8 = param_1 + ((uint)param_1 >> 5) * -0x20;
    do {
      uVar6 = 0;
      if ((int)uVar3 < (this->Pages).ArrayNum) {
        uVar6 = ~uVar3 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar3 = uVar3 + 1;
      this_00 = (TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
                ((this->Pages).AllocatorInstance.Data + lVar7);
      lVar7 = lVar7 + 0x10;
      iVar5 = this_00->ArrayNum;
      if (iVar5 < 0x20) {
        iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,0x20 - iVar5,(ForAnyElementType *)this_00,&this_00->ArrayNum,
                           &this_00->ArrayMax);
        DefaultConstructItems<TTestToken<int>,int>
                  ((this_00->AllocatorInstance).Data + (longlong)iVar4 * 4,0x20 - iVar5);
      }
      else if (0x20 < iVar5) {
        iVar5 = iVar5 + -0x20;
        if (iVar5 < 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        else if (iVar5 == 0) goto LAB_141b4dc12;
        TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>::RemoveAtImpl(this_00,0x20,iVar5);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(ForAnyElementType *)this_00,this_00->ArrayNum,&this_00->ArrayMax);
      }
LAB_141b4dc12:
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  piVar10 = &(this->Pages).ArrayNum;
  if (local_res8 != 0) {
    uVar6 = 0;
    if ((int)uVar3 < *piVar10) {
      uVar6 = ~uVar3 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar9 = (this->Pages).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x10;
    if (*(int *)(pFVar9 + 0xc) < 0x20) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0x20,(ForAnyElementType *)pFVar9,*(int *)&pFVar9[8].field_0x0,
                 (int *)(pFVar9 + 0xc));
    }
    uVar6 = 0;
    if ((int)uVar3 < *piVar10) {
      uVar6 = ~uVar3 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    TArray<TTestToken<int>,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<TTestToken<int>,TSizedDefaultAllocator<32>_> *)
               ((this->Pages).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x10),local_res8,No);
  }
  this->Count = param_1;
  return;
}

