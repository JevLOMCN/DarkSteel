// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 1

// ScalePose @ 14df534a0

bool __thiscall
FRetargetPoseScaleWithPivot::ScalePose
          (FRetargetPoseScaleWithPivot *this,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  double dVar1;
  double dVar2;
  int iVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  double dVar10;
  undefined1 local_res8 [8];
  
  dVar10 = this->Factor - __real_3ff0000000000000;
  if ((double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3e45798ee2308c3a) {
    return false;
  }
  iVar3 = param_1->ArrayNum;
  pFVar8 = (param_1->AllocatorInstance).Data;
  pFVar9 = pFVar8 + 0x20;
  pFVar7 = pFVar8 + (longlong)iVar3 * 0x60;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      `TCheckedPointerIterator<UE::Math::TTransform<double>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar7) break;
    dVar10 = this->Factor;
    dVar6 = *(double *)&pFVar9[0x10].field_0x0;
    pFVar8 = pFVar8 + 0x60;
    dVar1 = (this->Pivot).field0_0x0._s_0.Z;
    dVar2 = (this->Pivot).field0_0x0._s_0.Z;
    dVar5 = (*(double *)(pFVar9 + 8) - (this->Pivot).field0_0x0._s_0.Y) * dVar10 +
            (this->Pivot).field0_0x0._s_0.Y;
    auVar4._8_4_ = SUB84(dVar5,0);
    auVar4._0_8_ = (*(double *)&pFVar9->field_0x0 - (this->Pivot).field0_0x0._s_0.X) * dVar10 +
                   (this->Pivot).field0_0x0._s_0.X;
    auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    *(undefined1 (*) [16])pFVar9 = auVar4;
    *(double *)&pFVar9[0x10].field_0x0 = (dVar6 - dVar1) * dVar10 + dVar2;
    *(undefined8 *)(pFVar9 + 0x18) = 0;
    pFVar9 = pFVar9 + 0x60;
  }
  return true;
}

