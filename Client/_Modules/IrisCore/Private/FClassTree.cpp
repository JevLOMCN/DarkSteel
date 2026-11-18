// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 3

// AddClass @ 1442b4d50

bool __thiscall FClassTree::AddClass(FClassTree *this,UClass *param_1)

{
  int iVar1;
  UClass *pUVar2;
  code *pcVar3;
  FClassTree *pFVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  FClassTree *pFVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  pFVar8 = this->Parent;
  while (pFVar4 = pFVar8, pFVar4 != (FClassTree *)0x0) {
    this = pFVar4;
    pFVar8 = pFVar4->Parent;
  }
  if ((param_1 == (UClass *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChildClass",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ClassTree.h"
                         ,0x32,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  pUVar2 = this->Class;
  if (param_1 == pUVar2) {
    return true;
  }
  if (pUVar2 != (UClass *)0x0) {
    iVar1 = (int)pUVar2->_padding_;
    if (((int)param_1->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) != &pUVar2->_padding_
       )) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      uVar9 = 0;
      uVar11 = uVar9;
      if (0 < (this->Children).ArrayNum) {
        do {
          uVar10 = (uint)uVar9;
          uVar7 = 0;
          if ((int)uVar10 < (this->Children).ArrayNum) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          bVar5 = AddChildClass(*(FClassTree **)((this->Children).AllocatorInstance.Data + uVar11),
                                param_1);
          if (bVar5) {
            return true;
          }
          uVar9 = (ulonglong)(uVar10 + 1);
          uVar11 = uVar11 + 8;
        } while ((int)(uVar10 + 1) < (this->Children).ArrayNum);
      }
      pFVar8 = ::operator_new(0x40);
      if (pFVar8 == (FClassTree *)0x0) {
        pFVar8 = (FClassTree *)0x0;
      }
      else {
        pFVar8->Class = param_1;
        pFVar8->Parent = (FClassTree *)0x0;
        (pFVar8->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar8->Children).ArrayNum = 0;
        (pFVar8->Children).ArrayMax = 0;
        (pFVar8->Instances)._padding_ = (longlong)&___7__TDoubleLinkedList_PEAVUObject____6B_;
        (pFVar8->Instances).HeadNode = (TDoubleLinkedListNode *)0x0;
        (pFVar8->Instances).TailNode = (TDoubleLinkedListNode *)0x0;
        (pFVar8->Instances).ListSize = 0;
        if ((param_1 == (UClass *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Class",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\ClassTree.h"
                               ,0x232,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
      }
      AddChildNode(this,pFVar8);
      return true;
    }
  }
  pFVar8 = this->Parent;
  if (((pFVar8 != (FClassTree *)0x0) && (param_1 != pFVar8->Class)) && (param_1 != (UClass *)0x0)) {
    iVar1 = (int)param_1->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &param_1->_padding_
       )) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      ReplaceChild(pFVar8,param_1,this);
      return true;
    }
  }
  return false;
}

// FindNode @ 1442c11c0

FClassTree * __thiscall FClassTree::FindNode(FClassTree *this,UClass *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UClass *pUVar3;
  bool bVar4;
  FClassTree *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pUVar3 = this->Class;
  if (param_1 == pUVar3) {
    return this;
  }
  if (pUVar3 != (UClass *)0x0) {
    iVar2 = (int)pUVar3->_padding_;
    if (((int)param_1->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar2 * 8) != &pUVar3->_padding_
       )) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pFVar6 = (this->Children).AllocatorInstance.Data;
      iVar2 = (this->Children).ArrayNum;
      pFVar1 = pFVar6 + (longlong)iVar2 * 8;
      while( true ) {
        if ((this->Children).ArrayNum != iVar2) {
          `TCheckedPointerIterator<FClassTree_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar6 == pFVar1) break;
        pFVar5 = FindNode(*(FClassTree **)pFVar6,param_1);
        if (pFVar5 != (FClassTree *)0x0) {
          return pFVar5;
        }
        pFVar6 = pFVar6 + 8;
      }
    }
  }
  return (FClassTree *)0x0;
}

// GetChildClasses @ 1442c2220

void __thiscall
FClassTree::GetChildClasses
          (FClassTree *this,TArray<FClassTree_const_*,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  longlong lVar8;
  
  if (`public:_void___cdecl_FClassTree::GetChildClasses(TArray<FClassTree_const*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64,bool)const___ptr64'
      ::__l2::RecurseDepth == 0) {
    param_1->ArrayNum = 0;
    if (param_1->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
    }
  }
  uVar7 = 0;
  if (0 < (this->Children).ArrayNum) {
    lVar8 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->Children).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
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
      pFVar1 = (param_1->AllocatorInstance).Data;
      pFVar6 = (this->Children).AllocatorInstance.Data + lVar8;
      if (((pFVar1 <= pFVar6) && (pFVar6 < pFVar1 + (longlong)param_1->ArrayMax * 8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = param_1->ArrayNum;
      if (iVar5 == param_1->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar5 + 1;
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 8) =
           *(undefined8 *)pFVar6;
    } while ((int)uVar7 < (this->Children).ArrayNum);
  }
  if (param_2) {
    `public:_void___cdecl_FClassTree::GetChildClasses(TArray<FClassTree_const*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64,bool)const___ptr64'
    ::__l2::RecurseDepth =
         `public:_void___cdecl_FClassTree::GetChildClasses(TArray<FClassTree_const*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64,bool)const___ptr64'
         ::__l2::RecurseDepth + 1;
    uVar7 = 0;
    if (0 < (this->Children).ArrayNum) {
      lVar8 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar7 < (this->Children).ArrayNum) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        GetChildClasses(*(FClassTree **)((this->Children).AllocatorInstance.Data + lVar8),param_1,
                        true);
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 8;
      } while ((int)uVar7 < (this->Children).ArrayNum);
    }
    `public:_void___cdecl_FClassTree::GetChildClasses(TArray<FClassTree_const*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64,bool)const___ptr64'
    ::__l2::RecurseDepth =
         `public:_void___cdecl_FClassTree::GetChildClasses(TArray<FClassTree_const*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64,bool)const___ptr64'
         ::__l2::RecurseDepth + -1;
  }
  return;
}

