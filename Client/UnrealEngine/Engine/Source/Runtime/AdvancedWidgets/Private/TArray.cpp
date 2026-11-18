// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 4

// AddUniqueImpl<UE::Math::TVector2<double>_const_&> @ 14d82ac40

int __thiscall
TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<UE::Math::TVector2<double>_const_&>
          (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *this,
          TVector2<double> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 0x10) {
    pFVar6 = pFVar1;
    do {
      if (((param_1->field0_0x0)._s_0.X == *(double *)&pFVar6->field_0x0) &&
         ((param_1->field0_0x0)._s_0.Y == *(double *)(pFVar6 + 8))) {
        iVar5 = (int)((longlong)pFVar6 - (longlong)pFVar1 >> 4);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pFVar6 = pFVar6 + 0x10;
    } while (pFVar6 != pFVar1 + (longlong)this->ArrayNum * 0x10);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 0x10)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  this->ArrayNum = iVar5 + 1;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  pFVar1 = (this->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(double *)pFVar1 = (param_1->field0_0x0)._s_0.X;
  *(double *)(pFVar1 + 8) = dVar3;
  return iVar5;
}

// CopyToEmpty<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,int> @ 14d82bd00

void __thiscall
TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>::
CopyToEmpty<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,int>
          (TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>
           *this,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *param_1,int param_2,
          int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  ConstructItems<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,int>
            ((this->AllocatorInstance).Data,param_1,param_2);
  return;
}

// operator= @ 14d83ba00

TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_> *
__thiscall
TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>
           *this,TArray<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSizedDefaultAllocator<32>_>
                 *param_1)

{
  int *piVar1;
  int iVar2;
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *pTVar3;
  
  if (this != param_1) {
    DestructItems<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,int>
              ((TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *)
               (this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pTVar3 = (TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *)
             (param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,int>
              ((this->AllocatorInstance).Data,pTVar3,iVar2);
  }
  return this;
}

// RemoveAtSwapImpl @ 14d884d30

void __thiscall
TArray<UE::PropertyViewer::Private::FTreeNode::FNodeReference,TSizedDefaultAllocator<32>_>::
RemoveAtSwapImpl(TArray<UE::PropertyViewer::Private::FTreeNode::FNodeReference,TSizedDefaultAllocator<32>_>
                 *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  int iVar4;
  
  pFVar2 = (this->AllocatorInstance).Data;
  plVar3 = *(longlong **)(pFVar2 + (longlong)param_1 * 0x18 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  iVar4 = ~param_1 + this->ArrayNum;
  if (1 < iVar4) {
    iVar4 = 1;
  }
  if (iVar4 != 0) {
    memmove(pFVar2 + (longlong)param_1 * 0x18,pFVar2 + (longlong)(this->ArrayNum - iVar4) * 0x18,
            (longlong)iVar4 * 0x18);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

