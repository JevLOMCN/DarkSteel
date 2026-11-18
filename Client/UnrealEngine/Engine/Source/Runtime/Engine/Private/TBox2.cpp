// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// TBox2<double> @ 148a7e710

TBox2<double> * __thiscall
UE::Math::TBox2<double>::TBox2<double>
          (TBox2<double> *this,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  double dVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  undefined1 local_res8 [8];
  
  (this->Min).field0_0x0._s_0.X = 0.0;
  (this->Min).field0_0x0._s_0.Y = 0.0;
  (this->Max).field0_0x0._s_0.X = 0.0;
  (this->Max).field0_0x0._s_0.Y = 0.0;
  this->bIsValid = false;
  iVar2 = param_1->ArrayNum;
  pFVar4 = (param_1->AllocatorInstance).Data;
  pFVar3 = pFVar4 + (longlong)iVar2 * 0x10;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Math::TVector2<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar3) break;
    if (this->bIsValid == false) {
      dVar7 = *(double *)pFVar4;
      dVar8 = *(double *)(pFVar4 + 8);
      this->bIsValid = true;
      pFVar4 = pFVar4 + 0x10;
      (this->Max).field0_0x0._s_0.X = dVar7;
      (this->Max).field0_0x0._s_0.Y = dVar8;
      (this->Min).field0_0x0._s_0.X = dVar7;
      (this->Min).field0_0x0._s_0.Y = dVar8;
    }
    else {
      dVar7 = *(double *)pFVar4;
      uVar5 = SUB84(dVar7,0);
      uVar6 = (undefined4)((ulonglong)dVar7 >> 0x20);
      dVar8 = *(double *)&(this->Min).field0_0x0;
      if (dVar8 <= dVar7) {
        uVar5 = SUB84(dVar8,0);
        uVar6 = (undefined4)((ulonglong)dVar8 >> 0x20);
      }
      dVar7 = (this->Min).field0_0x0._s_0.Y;
      (this->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar6,uVar5);
      if (*(double *)(pFVar4 + 8) <= dVar7) {
        dVar7 = *(double *)(pFVar4 + 8);
      }
      (this->Min).field0_0x0._s_0.Y = dVar7;
      dVar7 = *(double *)pFVar4;
      uVar5 = SUB84(dVar7,0);
      uVar6 = (undefined4)((ulonglong)dVar7 >> 0x20);
      dVar8 = (this->Max).field0_0x0._s_0.Y;
      dVar1 = *(double *)&(this->Max).field0_0x0;
      if (dVar7 <= dVar1) {
        uVar5 = SUB84(dVar1,0);
        uVar6 = (undefined4)((ulonglong)dVar1 >> 0x20);
      }
      (this->Max).field0_0x0._s_0.X = (double)CONCAT44(uVar6,uVar5);
      if (dVar8 <= *(double *)(pFVar4 + 8)) {
        dVar8 = *(double *)(pFVar4 + 8);
      }
      pFVar4 = pFVar4 + 0x10;
      (this->Max).field0_0x0._s_0.Y = dVar8;
    }
  }
  return this;
}

// operator+= @ 148a894e0

TBox2<double> * __thiscall
UE::Math::TBox2<double>::operator+=(TBox2<double> *this,TBox2<double> *param_1)

{
  double dVar1;
  double dVar2;
  undefined7 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (this->bIsValid == false) {
    if (param_1->bIsValid != false) {
      dVar1 = (param_1->Min).field0_0x0._s_0.Y;
      (this->Min).field0_0x0._s_0.X = (param_1->Min).field0_0x0._s_0.X;
      (this->Min).field0_0x0._s_0.Y = dVar1;
      dVar1 = (param_1->Max).field0_0x0._s_0.Y;
      (this->Max).field0_0x0._s_0.X = (param_1->Max).field0_0x0._s_0.X;
      (this->Max).field0_0x0._s_0.Y = dVar1;
      uVar3 = *(undefined7 *)&param_1->field_0x21;
      this->bIsValid = param_1->bIsValid;
      *(undefined7 *)&this->field_0x21 = uVar3;
    }
  }
  else if (param_1->bIsValid != false) {
    dVar1 = *(double *)&(param_1->Min).field0_0x0;
    uVar4 = SUB84(dVar1,0);
    uVar5 = (undefined4)((ulonglong)dVar1 >> 0x20);
    dVar2 = *(double *)&(this->Min).field0_0x0;
    if (dVar2 <= dVar1) {
      uVar4 = SUB84(dVar2,0);
      uVar5 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    (this->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar5,uVar4);
    dVar1 = *(double *)((longlong)&(param_1->Min).field0_0x0 + 8);
    uVar4 = SUB84(dVar1,0);
    uVar5 = (undefined4)((ulonglong)dVar1 >> 0x20);
    dVar2 = *(double *)((longlong)&(this->Min).field0_0x0 + 8);
    if (dVar2 <= dVar1) {
      uVar4 = SUB84(dVar2,0);
      uVar5 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    (this->Min).field0_0x0._s_0.Y = (double)CONCAT44(uVar5,uVar4);
    dVar1 = *(double *)&(param_1->Max).field0_0x0;
    uVar4 = SUB84(dVar1,0);
    uVar5 = (undefined4)((ulonglong)dVar1 >> 0x20);
    dVar2 = *(double *)&(this->Max).field0_0x0;
    if (dVar1 <= dVar2) {
      uVar4 = SUB84(dVar2,0);
      uVar5 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    (this->Max).field0_0x0._s_0.X = (double)CONCAT44(uVar5,uVar4);
    dVar1 = *(double *)((longlong)&(param_1->Max).field0_0x0 + 8);
    uVar4 = SUB84(dVar1,0);
    uVar5 = (undefined4)((ulonglong)dVar1 >> 0x20);
    dVar2 = *(double *)((longlong)&(this->Max).field0_0x0 + 8);
    if (dVar1 <= dVar2) {
      uVar4 = SUB84(dVar2,0);
      uVar5 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    (this->Max).field0_0x0._s_0.Y = (double)CONCAT44(uVar5,uVar4);
    return this;
  }
  return this;
}

