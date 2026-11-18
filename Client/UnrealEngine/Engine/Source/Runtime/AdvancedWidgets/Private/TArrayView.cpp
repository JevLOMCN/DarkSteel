// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 3

// TArrayView<FFieldVariant_const_,int><TArray<FFieldVariant,TSizedDefaultAllocator<32>_>,TArray<FFieldVariant,TSizedDefaultAllocator<32>_>_> @ 14d82a170

TArrayView<FFieldVariant_const_,int> * __thiscall
TArrayView<FFieldVariant_const_,int>::
TArrayView<FFieldVariant_const_,int><TArray<FFieldVariant,TSizedDefaultAllocator<32>_>,TArray<FFieldVariant,TSizedDefaultAllocator<32>_>_>
          (TArrayView<FFieldVariant_const_,int> *this,
          TArray<FFieldVariant,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FFieldVariant_const_,int> *pTVar4;
  
  this->DataPtr = (FFieldVariant *)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (-1 < iVar1) {
    this->ArrayNum = iVar1;
    return this;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FFieldVariant_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = iVar1;
  return this;
}

// operator[] @ 14d83ccb0

TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> * __thiscall
TArrayView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_const_,int>::operator[]
          (TArrayView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_const_,int> *this,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *pTVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + param_1;
}

// Last @ 14d8728a0

TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> * __thiscall
TArrayView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_const_,int>::Last
          (TArrayView<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>_const_,int> *this,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *pTVar4;
  uint uVar5;
  
  uVar5 = ~param_1 + this->ArrayNum;
  uVar3 = 0;
  if ((int)uVar5 < this->ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this->DataPtr + ((this->ArrayNum - param_1) + -1);
}

