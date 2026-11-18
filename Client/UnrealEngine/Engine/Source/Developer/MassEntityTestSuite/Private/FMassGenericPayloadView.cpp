// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 3

// FMassGenericPayloadView @ 1470f4b70

FMassGenericPayloadView * __thiscall
FMassGenericPayloadView::FMassGenericPayloadView
          (FMassGenericPayloadView *this,
          TArray<FStructArrayView,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FMassGenericPayloadView *pFVar4;
  
  (this->Content).DataPtr = (FStructArrayView *)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (-1 < iVar1) {
    (this->Content).ArrayNum = iVar1;
    return this;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FMassGenericPayloadView *)(*pcVar2)();
    return pFVar4;
  }
  (this->Content).ArrayNum = iVar1;
  return this;
}

// FMassGenericPayloadView @ 1470f4be0

FMassGenericPayloadView * __thiscall
FMassGenericPayloadView::FMassGenericPayloadView
          (FMassGenericPayloadView *this,TArrayView<FStructArrayView,int> *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1->ArrayNum;
  uVar2 = *(undefined4 *)&param_1->field_0xc;
  (this->Content).DataPtr = param_1->DataPtr;
  (this->Content).ArrayNum = iVar1;
  *(undefined4 *)&(this->Content).field_0xc = uVar2;
  return this;
}

// Swap @ 1471abbf0

void __thiscall FMassGenericPayloadView::Swap(FMassGenericPayloadView *this,int param_1,int param_2)

{
  FStructArrayView *pFVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  FStructArrayView *this_00;
  
  this_00 = (this->Content).DataPtr;
  pFVar1 = this_00 + (this->Content).ArrayNum;
  for (; this_00 != pFVar1; this_00 = this_00 + 1) {
    uVar2 = this_00->ElementSize;
    pvVar3 = FStructArrayView::GetDataAt(this_00,param_2);
    pvVar4 = FStructArrayView::GetDataAt(this_00,param_1);
    FGenericPlatformMemory::Memswap(pvVar4,pvVar3,(ulonglong)uVar2);
  }
  return;
}

