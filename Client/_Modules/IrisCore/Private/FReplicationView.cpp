// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 1

// operator= @ 1442b10c0

FReplicationView * __thiscall
UE::Net::FReplicationView::operator=(FReplicationView *this,FReplicationView *param_1)

{
  int iVar1;
  ForElementType<UE::Net::FReplicationView::FView> FVar2;
  int *piVar3;
  ForElementType<UE::Net::FReplicationView::FView> FVar4;
  
  if (this != param_1) {
    FVar2 = (param_1->Views).AllocatorInstance.SecondaryData;
    piVar3 = &(this->Views).ArrayMax;
    iVar1 = (param_1->Views).ArrayNum;
    if (FVar2 != (ForElementType<UE::Net::FReplicationView::FView>)0x0) {
      param_1 = (FReplicationView *)FVar2;
    }
    (this->Views).ArrayNum = iVar1;
    if ((iVar1 == 0) && (*piVar3 == 0)) {
      *piVar3 = 4;
      return this;
    }
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FReplicationView::FView>_>
              (0x48,8,iVar1,*piVar3,(ForElementType<UE::Net::FReplicationView::FView> *)this,iVar1,
               piVar3);
    FVar2 = (this->Views).AllocatorInstance.SecondaryData;
    FVar4 = (ForElementType<UE::Net::FReplicationView::FView>)this;
    if (FVar2 != (ForElementType<UE::Net::FReplicationView::FView>)0x0) {
      FVar4 = FVar2;
    }
    ConstructItems<UE::Net::FReplicationView::FView,UE::Net::FReplicationView::FView,int>
              ((void *)FVar4,(FView *)param_1,iVar1);
  }
  return this;
}

