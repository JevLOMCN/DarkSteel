// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 9

// TUniquePtr<FString,TDefaultDelete<FString>_><FString> @ 1414e3880

TUniquePtr<FString,TDefaultDelete<FString>_> * __thiscall
TUniquePtr<FString,TDefaultDelete<FString>_>::TUniquePtr<FString,TDefaultDelete<FString>_><FString>
          (TUniquePtr<FString,TDefaultDelete<FString>_> *this,FString *param_1)

{
  this->Ptr = param_1;
  return this;
}

// TUniquePtr<FString,TDefaultDelete<FString>_> @ 141582cd0

TUniquePtr<FString,TDefaultDelete<FString>_> * __thiscall
TUniquePtr<FString,TDefaultDelete<FString>_>::TUniquePtr<FString,TDefaultDelete<FString>_>
          (TUniquePtr<FString,TDefaultDelete<FString>_> *this,
          TUniquePtr<FString,TDefaultDelete<FString>_> *param_1)

{
  this->Ptr = param_1->Ptr;
  param_1->Ptr = (FString *)0x0;
  return this;
}

// Reset @ 1416beab0

void __thiscall
TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_>::Reset
          (TUniquePtr<IFileHandle,TDefaultDelete<IFileHandle>_> *this,IFileHandle *param_1)

{
  IFileHandle *pIVar1;
  
  pIVar1 = this->Ptr;
  if ((pIVar1 != param_1) && (this->Ptr = param_1, pIVar1 != (IFileHandle *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001416beacb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pIVar1)(pIVar1,1);
    return;
  }
  return;
}

// Reset @ 1419672f0

void __thiscall
TUniquePtr<TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode_[0]>_>
::Reset(TUniquePtr<TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode_[0]>_>
        *this,void *param_1)

{
  FTreeNode *pFVar1;
  undefined6 in_register_00000012;
  longlong lVar2;
  FTreeNode *this_00;
  
  pFVar1 = this->Ptr;
  this->Ptr = (FTreeNode *)CONCAT62(in_register_00000012,param_1);
  if (pFVar1 != (FTreeNode *)0x0) {
    lVar2 = *(longlong *)&pFVar1[-1].NumChildNodesAndFlags;
    this_00 = pFVar1 + lVar2;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      this_00 = this_00 + -1;
      TDirectoryTree<TArray<FName,TSizedDefaultAllocator<32>_>_>::FTreeNode::~FTreeNode(this_00);
    }
    operator_delete__(&pFVar1[-1].NumChildNodesAndFlags,
                      *(longlong *)&pFVar1[-1].NumChildNodesAndFlags * 0x28 + 8);
  }
  return;
}

// Reset @ 141967370

void __thiscall
TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_>::Reset
          (TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_> *this,void *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined6 in_register_00000012;
  longlong lVar3;
  FString *pFVar4;
  
  pFVar4 = this->Ptr;
  this->Ptr = (FString *)CONCAT62(in_register_00000012,param_1);
  if (pFVar4 != (FString *)0x0) {
    lVar3 = *(longlong *)&pFVar4[-1].Data.ArrayNum;
    piVar1 = &pFVar4[-1].Data.ArrayNum;
    pFVar4 = pFVar4 + lVar3;
    while (lVar3 != 0) {
      pFVar2 = pFVar4[-1].Data.AllocatorInstance.Data;
      pFVar4 = pFVar4 + -1;
      lVar3 = lVar3 + -1;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
    }
    operator_delete__(piVar1,*(longlong *)piVar1 * 0x10 + 8);
  }
  return;
}

// Reset<FString> @ 141afde50

void __thiscall
TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_>::Reset<FString>
          (TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_> *this,FString *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  FString *pFVar4;
  
  pFVar4 = this->Ptr;
  this->Ptr = param_1;
  if (pFVar4 != (FString *)0x0) {
    lVar3 = *(longlong *)&pFVar4[-1].Data.ArrayNum;
    piVar1 = &pFVar4[-1].Data.ArrayNum;
    pFVar4 = pFVar4 + lVar3;
    while (lVar3 != 0) {
      pFVar2 = pFVar4[-1].Data.AllocatorInstance.Data;
      pFVar4 = pFVar4 + -1;
      lVar3 = lVar3 + -1;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
    }
    operator_delete__(piVar1,*(longlong *)piVar1 * 0x10 + 8);
  }
  return;
}

// operator= @ 141b2b820

TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_> * __thiscall
TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_>::operator=
          (TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_> *this,
          TUniquePtr<FString_[0],TDefaultDelete<FString_[0]>_> *param_1)

{
  int *piVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  FString *pFVar5;
  
  if (this != param_1) {
    pFVar2 = this->Ptr;
    this->Ptr = param_1->Ptr;
    param_1->Ptr = (FString *)0x0;
    if (pFVar2 != (FString *)0x0) {
      lVar4 = *(longlong *)&pFVar2[-1].Data.ArrayNum;
      pFVar5 = pFVar2 + lVar4;
      piVar1 = &pFVar2[-1].Data.ArrayNum;
      while (lVar4 != 0) {
        pFVar3 = pFVar5[-1].Data.AllocatorInstance.Data;
        pFVar5 = pFVar5 + -1;
        lVar4 = lVar4 + -1;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
      }
      operator_delete__(piVar1,*(longlong *)piVar1 * 0x10 + 8);
    }
  }
  return this;
}

// Reset @ 141b4c9d0

void __thiscall
TUniquePtr<TDirectoryTree<int>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<int>::FTreeNode_[0]>_>::
Reset(TUniquePtr<TDirectoryTree<int>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<int>::FTreeNode_[0]>_>
      *this,void *param_1)

{
  uint *puVar1;
  undefined6 in_register_00000012;
  FTreeNode *pFVar2;
  longlong lVar3;
  
  pFVar2 = this->Ptr;
  this->Ptr = (FTreeNode *)CONCAT62(in_register_00000012,param_1);
  if (pFVar2 != (FTreeNode *)0x0) {
    puVar1 = &pFVar2[-1].NumChildNodesAndFlags;
    lVar3 = *(longlong *)puVar1;
    pFVar2 = pFVar2 + lVar3;
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      pFVar2 = pFVar2 + -1;
      TDirectoryTree<int>::FTreeNode::~FTreeNode(pFVar2);
    }
    operator_delete__(puVar1,*(longlong *)puVar1 * 0x20 + 8);
  }
  return;
}

// Reset @ 141b4ca50

void __thiscall
TUniquePtr<TDirectoryTree<`FDirectoryTreeAPITests::TestBody'::__l2::FMoveConstructOnly>::FTreeNode_[0],TDefaultDelete<TDirectoryTree<`FDirectoryTreeAPITests::TestBody'::__l2::FMoveConstructOnly>::FTreeNode_[0]>_>
::Reset(void *this,void *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined6 in_register_00000012;
  void *this_00;
  longlong lVar3;
  
  lVar2 = *(longlong *)this;
  *(ulonglong *)this = CONCAT62(in_register_00000012,param_1);
  if (lVar2 != 0) {
    plVar1 = (longlong *)(lVar2 + -8);
    lVar3 = *plVar1;
    this_00 = (void *)(lVar3 * 0x20 + lVar2);
    for (; lVar3 != 0; lVar3 = lVar3 + -1) {
      this_00 = (void *)((longlong)this_00 + -0x20);
      TDirectoryTree<`FDirectoryTreeAPITests::TestBody'::__l2::FMoveConstructOnly>::FTreeNode::
      ~FTreeNode(this_00);
    }
    operator_delete__(plVar1,*plVar1 * 0x20 + 8);
  }
  return;
}

