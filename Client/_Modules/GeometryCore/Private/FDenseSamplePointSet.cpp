// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 1

// GetVertex @ 1436076c0

TVector<double> * __thiscall
UELocal::FDenseSamplePointSet::GetVertex
          (FDenseSamplePointSet *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  TVector<double> *pTVar8;
  
  uVar7 = 0;
  if (param_1 < (this->DensePoints).ArrayNum) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TVector<double> *)(*pcVar4)();
      return pTVar8;
    }
  }
  pFVar3 = (this->DensePoints).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)param_1 * 0x18;
  dVar5 = *(double *)(pFVar1 + 8);
  dVar2 = *(double *)(pFVar3 + (longlong)param_1 * 0x18 + 0x10);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)pFVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

