// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// ~FClassTree @ 1420ebfd0

void __thiscall FClassTree::~FClassTree(FClassTree *this)

{
  FClassTree *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  this->Class = (UClass *)0x0;
  if (0 < (this->Children).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->Children).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = *(FClassTree **)((this->Children).AllocatorInstance.Data + lVar6);
      if (this_00 != (FClassTree *)0x0) {
        ~FClassTree(this_00);
        ::operator_delete(this_00,0x40);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->Children).ArrayNum);
  }
  (this->Children).ArrayNum = 0;
  if ((this->Children).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Children).AllocatorInstance,0,&(this->Children).ArrayMax);
  }
  TDoubleLinkedList<UObject_*>::~TDoubleLinkedList<UObject_*>(&this->Instances);
  pFVar1 = (this->Children).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar1);
  return;
}

// AddChildClass @ 1420f0fc0

bool __thiscall FClassTree::AddChildClass(FClassTree *this,UClass *param_1)

{
  int iVar1;
  UClass *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  FClassTree *pFVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  if ((param_1 == (UClass *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChildClass",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ClassTree.h"
                         ,0x32,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pUVar2 = this->Class;
  if (param_1 == pUVar2) {
LAB_1420f113a:
    bVar4 = true;
  }
  else {
    if (pUVar2 != (UClass *)0x0) {
      iVar1 = (int)pUVar2->_padding_;
      if (((int)param_1->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar2->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        uVar9 = 0;
        uVar10 = uVar9;
        if (0 < (this->Children).ArrayNum) {
          do {
            uVar8 = (uint)uVar9;
            uVar6 = 0;
            if ((int)uVar8 < (this->Children).ArrayNum) {
              uVar6 = ~uVar8 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            bVar4 = AddChildClass(*(FClassTree **)((this->Children).AllocatorInstance.Data + uVar10)
                                  ,param_1);
            if (bVar4) goto LAB_1420f113a;
            uVar9 = (ulonglong)(uVar8 + 1);
            uVar10 = uVar10 + 8;
          } while ((int)(uVar8 + 1) < (this->Children).ArrayNum);
        }
        pFVar7 = ::operator_new(0x40);
        if (pFVar7 == (FClassTree *)0x0) {
          pFVar7 = (FClassTree *)0x0;
        }
        else {
          pFVar7->Class = param_1;
          pFVar7->Parent = (FClassTree *)0x0;
          (pFVar7->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar7->Children).ArrayNum = 0;
          (pFVar7->Children).ArrayMax = 0;
          (pFVar7->Instances)._padding_ = (longlong)&___7__TDoubleLinkedList_PEAVUObject____6B_;
          (pFVar7->Instances).HeadNode = (TDoubleLinkedListNode *)0x0;
          (pFVar7->Instances).TailNode = (TDoubleLinkedListNode *)0x0;
          (pFVar7->Instances).ListSize = 0;
          if ((param_1 == (UClass *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Class",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ClassTree.h"
                                 ,0x232,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        AddChildNode(this,pFVar7);
        goto LAB_1420f113a;
      }
    }
    pFVar7 = this->Parent;
    if (((pFVar7 != (FClassTree *)0x0) && (param_1 != pFVar7->Class)) && (param_1 != (UClass *)0x0))
    {
      iVar1 = (int)param_1->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &param_1->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        ReplaceChild(pFVar7,param_1,this);
        goto LAB_1420f113a;
      }
    }
    bVar4 = false;
  }
  return bVar4;
}

// AddChildNode @ 1420f11b0

int __thiscall FClassTree::AddChildNode(FClassTree *this,FClassTree *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  ForAnyElementType FVar9;
  uint uVar10;
  ForAnyElementType FVar11;
  longlong lVar12;
  FName local_res8;
  FName local_res10;
  FString local_58;
  FString local_48;
  
  if ((param_1 == (FClassTree *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewChild",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ClassTree.h"
                         ,99,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  param_1->Parent = this;
  pFVar2 = (this->Children).AllocatorInstance.Data;
  for (pFVar8 = pFVar2; pFVar8 != pFVar2 + (longlong)(this->Children).ArrayNum * 8;
      pFVar8 = pFVar8 + 8) {
    if (*(FClassTree **)pFVar8 == param_1) {
      iVar6 = (int)((longlong)pFVar8 - (longlong)pFVar2 >> 3);
      if (iVar6 != -1) {
        return iVar6;
      }
      break;
    }
  }
  uVar10 = 0;
  if (0 < (this->Children).ArrayNum) {
    lVar12 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar10 < (this->Children).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
      plVar3 = *(longlong **)((this->Children).AllocatorInstance.Data + lVar12);
      local_res8 = (FName)param_1->Class->_padding_;
      ::FName::ToString(&local_res8,&local_48);
      FVar11.Data = (FScriptContainerElement *)L"";
      if (local_48.Data.ArrayNum != 0) {
        FVar11.Data = local_48.Data.AllocatorInstance.Data;
      }
      local_res10 = *(FName *)(*plVar3 + 0x18);
      ::FName::ToString(&local_res10,&local_58);
      FVar9.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar9.Data = local_58.Data.AllocatorInstance.Data;
      }
      iVar6 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar9.Data,(wchar_t *)FVar11.Data);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (-1 < iVar6) break;
      uVar10 = uVar10 + 1;
      lVar12 = lVar12 + 8;
    } while ((int)uVar10 < (this->Children).ArrayNum);
  }
  iVar6 = (this->Children).ArrayNum;
  piVar1 = &(this->Children).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Children).AllocatorInstance,piVar1);
  }
  (this->Children).ArrayNum = iVar6 + 1;
  pFVar2 = (this->Children).AllocatorInstance.Data + (longlong)(int)uVar10 * 8;
  memmove(pFVar2 + 8,pFVar2,(longlong)(int)(iVar6 - uVar10) << 3);
  uVar7 = 0;
  if ((int)uVar10 < (this->Children).ArrayNum) {
    uVar7 = ~uVar10 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  *(FClassTree **)((this->Children).AllocatorInstance.Data + (longlong)(int)uVar10 * 8) = param_1;
  return uVar10;
}

// DumpClassTree @ 1420f65a0

void __thiscall FClassTree::DumpClassTree(FClassTree *this,int param_1,FOutputDevice *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  FName local_res8;
  FString local_28;
  
  local_res8 = (FName)this->Class->_padding_;
  ::FName::ToString(&local_res8,&local_28);
  if ((0xff < (uint)param_1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumSpaces >= 0 && NumSpaces <= TCStringSpcHelper<T>::MAX_SPACES",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                         ,0x272,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FOutputDevice::LogfImpl(param_2,L"%s%s");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  uVar4 = 0;
  if (0 < (this->Children).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->Children).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
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
      DumpClassTree(*(FClassTree **)((this->Children).AllocatorInstance.Data + lVar5),param_1 + 2,
                    param_2);
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while ((int)uVar4 < (this->Children).ArrayNum);
  }
  return;
}

// Num @ 1421049a0

int __thiscall FClassTree::Num(FClassTree *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  iVar4 = 1;
  if (0 < (this->Children).ArrayNum) {
    lVar7 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < (this->Children).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      iVar5 = Num(*(FClassTree **)((this->Children).AllocatorInstance.Data + lVar7));
      iVar4 = iVar4 + iVar5;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < (this->Children).ArrayNum);
  }
  return iVar4;
}

// ReplaceChild @ 142109f40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FClassTree::ReplaceChild(FClassTree *this,UClass *param_1,FClassTree *param_2)

{
  TArray<FClassTree_*,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  FClassTree *pFVar7;
  ForAnyElementType FVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  FName local_78;
  FName local_70;
  FString local_68;
  FString local_58;
  
  pFVar7 = ::operator_new(0x40);
  uVar20 = 0;
  if (pFVar7 == (FClassTree *)0x0) {
    pFVar7 = (FClassTree *)0x0;
  }
  else {
    pFVar7->Class = param_1;
    pFVar7->Parent = (FClassTree *)0x0;
    (pFVar7->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->Children).ArrayNum = 0;
    (pFVar7->Children).ArrayMax = 0;
    (pFVar7->Instances)._padding_ = (longlong)&___7__TDoubleLinkedList_PEAVUObject____6B_;
    (pFVar7->Instances).HeadNode = (TDoubleLinkedListNode *)0x0;
    (pFVar7->Instances).TailNode = (TDoubleLinkedListNode *)0x0;
    (pFVar7->Instances).ListSize = 0;
    if ((param_1 == (UClass *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Class",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ClassTree.h"
                           ,0x232,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar2 = (this->Children).AllocatorInstance.Data;
  this_00 = &this->Children;
  pFVar10 = pFVar2;
  do {
    if (pFVar10 == pFVar2 + (longlong)(this->Children).ArrayNum * 8) {
      iVar9 = -1;
LAB_14210a00c:
      TArray<FClassTree_*,TSizedDefaultAllocator<32>_>::RemoveAt(this_00,iVar9,Default);
      uVar17 = (this->Children).ArrayNum - 1;
      uVar19 = 0;
      if (-1 < (int)uVar17) {
        lVar14 = (longlong)(int)uVar17;
        lVar18 = lVar14 * 8;
        do {
          uVar11 = ~uVar17 >> 0x1f;
          uVar13 = 0;
          if ((int)uVar17 < (this->Children).ArrayNum) {
            uVar13 = uVar11;
          }
          if ((uVar13 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          plVar3 = *(longlong **)((this_00->AllocatorInstance).Data + lVar18);
          if (param_1 != (UClass *)0x0) {
            iVar9 = (int)param_1->_padding_;
            if ((*(int *)(*plVar3 + 0x38) < iVar9) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(*plVar3 + 0x30) + (longlong)iVar9 * 8) !=
                &param_1->_padding_)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (bVar6) {
              uVar13 = uVar19;
              if ((int)uVar17 < (this->Children).ArrayNum) {
                uVar13 = uVar11;
              }
              if ((uVar13 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              pFVar2 = (this_00->AllocatorInstance).Data + lVar14 * 8;
              iVar9 = (this->Children).ArrayNum + ~uVar17;
              if (iVar9 != 0) {
                memmove(pFVar2,pFVar2 + 8,(longlong)iVar9 << 3);
              }
              piVar1 = &(this->Children).ArrayNum;
              *piVar1 = *piVar1 + -1;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,&this_00->AllocatorInstance,(this->Children).ArrayNum,
                         &(this->Children).ArrayMax);
              plVar3[1] = (longlong)pFVar7;
              pFVar2 = (pFVar7->Children).AllocatorInstance.Data;
              for (pFVar10 = pFVar2; pFVar10 != pFVar2 + (longlong)(pFVar7->Children).ArrayNum * 8;
                  pFVar10 = pFVar10 + 8) {
                if (*(longlong **)pFVar10 == plVar3) {
                  if ((int)((longlong)pFVar10 - (longlong)pFVar2 >> 3) != -1) goto LAB_14210a34e;
                  break;
                }
              }
              uVar12 = uVar20;
              uVar15 = uVar20;
              uVar13 = uVar19;
              if (0 < (pFVar7->Children).ArrayNum) {
                do {
                  uVar13 = (uint)uVar15;
                  uVar11 = uVar19;
                  if ((int)uVar13 < (pFVar7->Children).ArrayNum) {
                    uVar11 = ~uVar13 >> 0x1f;
                  }
                  if ((uVar11 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  plVar4 = *(longlong **)((pFVar7->Children).AllocatorInstance.Data + uVar12 * 8);
                  local_78 = *(FName *)(*plVar3 + 0x18);
                  ::FName::ToString(&local_78,&local_58);
                  FVar16.Data = (FScriptContainerElement *)L"";
                  if (local_58.Data.ArrayNum != 0) {
                    FVar16.Data = local_58.Data.AllocatorInstance.Data;
                  }
                  local_70 = *(FName *)(*plVar4 + 0x18);
                  ::FName::ToString(&local_70,&local_68);
                  FVar8.Data = (FScriptContainerElement *)L"";
                  if (local_68.Data.ArrayNum != 0) {
                    FVar8.Data = local_68.Data.AllocatorInstance.Data;
                  }
                  iVar9 = FGenericPlatformStricmp::Stricmp
                                    ((wchar_t *)FVar8.Data,(wchar_t *)FVar16.Data);
                  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_68.Data.AllocatorInstance.Data);
                  }
                  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_58.Data.AllocatorInstance.Data);
                  }
                  if (-1 < iVar9) break;
                  uVar13 = uVar13 + 1;
                  uVar12 = uVar12 + 1;
                  uVar15 = (ulonglong)uVar13;
                } while ((int)uVar13 < (pFVar7->Children).ArrayNum);
              }
              iVar9 = (pFVar7->Children).ArrayNum;
              piVar1 = &(pFVar7->Children).ArrayMax;
              if (iVar9 == *piVar1) {
                iVar9 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,&(pFVar7->Children).AllocatorInstance,piVar1);
              }
              (pFVar7->Children).ArrayNum = iVar9 + 1;
              pFVar2 = (pFVar7->Children).AllocatorInstance.Data + (longlong)(int)uVar13 * 8;
              memmove(pFVar2 + 8,pFVar2,(longlong)(int)(iVar9 - uVar13) << 3);
              uVar11 = uVar19;
              if ((int)uVar13 < (pFVar7->Children).ArrayNum) {
                uVar11 = ~uVar13 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              *(longlong **)((pFVar7->Children).AllocatorInstance.Data + uVar12 * 8) = plVar3;
            }
          }
LAB_14210a34e:
          uVar17 = uVar17 - 1;
          lVar18 = lVar18 + -8;
          lVar14 = lVar14 + -1;
        } while (-1 < (int)uVar17);
      }
      uVar17 = AddChildNode(this,pFVar7);
      if ((int)uVar17 < (this->Children).ArrayNum) {
        uVar19 = ~uVar17 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      AddChildNode(*(FClassTree **)
                    ((this->Children).AllocatorInstance.Data + (longlong)(int)uVar17 * 8),param_2);
      return;
    }
    if (*(FClassTree **)pFVar10 == param_2) {
      iVar9 = (int)((longlong)pFVar10 - (longlong)pFVar2 >> 3);
      goto LAB_14210a00c;
    }
    pFVar10 = pFVar10 + 8;
  } while( true );
}

