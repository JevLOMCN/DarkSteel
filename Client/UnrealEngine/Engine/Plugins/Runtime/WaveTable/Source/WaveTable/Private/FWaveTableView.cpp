// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WaveTable
// Functions: 4

// FWaveTableView @ 14b2bd700

FWaveTableView * __thiscall
WaveTable::FWaveTableView::FWaveTableView
          (FWaveTableView *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1,float param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FWaveTableView *pFVar4;
  
  (this->SampleView).DataPtr = (float *)(param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FWaveTableView *)(*pcVar2)();
      return pFVar4;
    }
  }
  (this->SampleView).ArrayNum = iVar1;
  this->FinalValue = param_2;
  return this;
}

// FWaveTableView @ 14b2bd770

FWaveTableView * __thiscall
WaveTable::FWaveTableView::FWaveTableView
          (FWaveTableView *this,TArrayView<float_const_,int> *param_1,float param_2)

{
  float *pfVar1;
  int iVar2;
  undefined4 uVar3;
  
  pfVar1 = param_1->DataPtr;
  iVar2 = param_1->ArrayNum;
  uVar3 = *(undefined4 *)&param_1->field_0xc;
  this->FinalValue = param_2;
  (this->SampleView).DataPtr = pfVar1;
  (this->SampleView).ArrayNum = iVar2;
  *(undefined4 *)&(this->SampleView).field_0xc = uVar3;
  return this;
}

// IsEmpty @ 14b2c0120

bool __thiscall WaveTable::FWaveTableView::IsEmpty(FWaveTableView *this)

{
  return (this->SampleView).ArrayNum == 0;
}

// Num @ 14b2c0430

int __thiscall WaveTable::FWaveTableView::Num(FWaveTableView *this)

{
  return (this->SampleView).ArrayNum;
}

