// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 1

// TAxisAlignedBox2<double> @ 1435664a0

TAxisAlignedBox2<double> * __thiscall
UE::Geometry::TAxisAlignedBox2<double>::TAxisAlignedBox2<double>
          (TAxisAlignedBox2<double> *this,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  (this->Min).field0_0x0._s_0.X = 1.7976931348623157e+308;
  (this->Min).field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (this->Max).field0_0x0._s_0.X = -1.7976931348623157e+308;
  (this->Max).field0_0x0._s_0.Y = -1.7976931348623157e+308;
  iVar3 = param_1->ArrayNum;
  pFVar5 = (param_1->AllocatorInstance).Data;
  pFVar4 = pFVar5 + (longlong)iVar3 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar4) break;
    if (*(double *)pFVar5 < (this->Min).field0_0x0._s_0.X) {
      (this->Min).field0_0x0._s_0.X = *(double *)pFVar5;
    }
    dVar2 = *(double *)pFVar5;
    if ((this->Max).field0_0x0._s_0.X <= dVar2 && dVar2 != (this->Max).field0_0x0._s_0.X) {
      (this->Max).field0_0x0._s_0.X = dVar2;
    }
    if (*(double *)(pFVar5 + 8) < (this->Min).field0_0x0._s_0.Y) {
      (this->Min).field0_0x0._s_0.Y = *(double *)(pFVar5 + 8);
    }
    dVar2 = *(double *)(pFVar5 + 8);
    pdVar1 = &(this->Max).field0_0x0._s_0.Y;
    if (*pdVar1 <= dVar2 && dVar2 != *pdVar1) {
      (this->Max).field0_0x0._s_0.Y = dVar2;
    }
    pFVar5 = pFVar5 + 0x10;
  }
  return this;
}

