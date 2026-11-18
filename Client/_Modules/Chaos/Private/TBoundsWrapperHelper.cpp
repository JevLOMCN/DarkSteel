// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// ComputeBounds @ 143d47610

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::TBoundsWrapperHelper<Chaos::FAccelerationStructureHandle,double,1>::ComputeBounds
          (TBoundsWrapperHelper<Chaos::FAccelerationStructureHandle,double,1> *this,
          TArray<Chaos::TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double>,TSizedDefaultAllocator<32>_>
          *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  uint uVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  
  uVar10 = _UNK_1508ffb58;
  uVar9 = ___xmm_ffefffffffffffffffefffffffffffff;
  uVar8 = __real_ffefffffffffffff;
  *(undefined8 *)&(this->Bounds).MMin = 0x7fefffffffffffff;
  *(undefined8 *)&(this->Bounds).MMin.field_0x8 = 0x7fefffffffffffff;
  *(undefined8 *)&(this->Bounds).MMin.field_0x10 = 0x7fefffffffffffff;
  *(undefined8 *)&(this->Bounds).MMax = uVar9;
  *(undefined8 *)&(this->Bounds).MMax.field_0x8 = uVar10;
  *(undefined8 *)&(this->Bounds).MMax.field_0x10 = uVar8;
  pFVar11 = (param_1->AllocatorInstance).Data;
  iVar7 = param_1->ArrayNum;
  pFVar12 = pFVar11 + 0x40;
  pFVar13 = pFVar11 + (longlong)iVar7 * 0x68;
  while( true ) {
    if (param_1->ArrayNum != iVar7) {
      `TCheckedPointerIterator<Chaos::TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar11 == pFVar13) break;
    pFVar11 = pFVar11 + 0x68;
    dVar4 = *(double *)&(this->Bounds).MMin.field_0x8;
    if (*(double *)pFVar12 <= dVar4) {
      dVar4 = *(double *)pFVar12;
    }
    dVar5 = *(double *)&(this->Bounds).MMin;
    dVar6 = *(double *)(pFVar12 + -8);
    if (dVar5 <= *(double *)(pFVar12 + -8)) {
      dVar6 = dVar5;
    }
    dVar5 = *(double *)&(this->Bounds).MMin.field_0x10;
    dVar14 = *(double *)(pFVar12 + 8);
    if (dVar5 <= *(double *)(pFVar12 + 8)) {
      dVar14 = dVar5;
    }
    *(double *)&(this->Bounds).MMin = dVar6;
    *(double *)&(this->Bounds).MMin.field_0x8 = dVar4;
    *(double *)&(this->Bounds).MMin.field_0x10 = dVar14;
    pFVar1 = pFVar12 + 0x10;
    pFVar2 = pFVar12 + 0x18;
    pFVar3 = pFVar12 + 0x20;
    pFVar12 = pFVar12 + 0x68;
    dVar4 = *(double *)&(this->Bounds).MMax;
    dVar5 = *(double *)pFVar1;
    if (*(double *)pFVar1 <= dVar4) {
      dVar5 = dVar4;
    }
    dVar4 = *(double *)&(this->Bounds).MMax.field_0x8;
    dVar6 = *(double *)pFVar2;
    if (*(double *)pFVar2 <= dVar4) {
      dVar6 = dVar4;
    }
    dVar4 = *(double *)&(this->Bounds).MMax.field_0x10;
    dVar14 = *(double *)pFVar3;
    if (*(double *)pFVar3 <= dVar4) {
      dVar14 = dVar4;
    }
    *(double *)&(this->Bounds).MMax = dVar5;
    *(double *)&(this->Bounds).MMax.field_0x8 = dVar6;
    *(double *)&(this->Bounds).MMax.field_0x10 = dVar14;
  }
  if ((param_1->ArrayNum != 0) && (param_2)) {
    dVar4 = *(double *)&(this->Bounds).MMin;
    dVar5 = *(double *)&(this->Bounds).MMin.field_0x8;
    dVar6 = *(double *)&(this->Bounds).MMin.field_0x10;
    dVar15 = (double)FAABBTreeCVars::DynamicTreeLeafEnlargePercent;
    dVar14 = (*(double *)&(this->Bounds).MMax - dVar4) * dVar15 * __real_3fe0000000000000;
    dVar16 = (*(double *)&(this->Bounds).MMax.field_0x10 - dVar6) * dVar15 * __real_3fe0000000000000
    ;
    dVar15 = (*(double *)&(this->Bounds).MMax.field_0x8 - dVar5) * dVar15 * __real_3fe0000000000000;
    uVar17 = SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar18 = (uint)((ulonglong)dVar14 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    dVar14 = (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    dVar15 = (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    *(double *)&(this->Bounds).MMin = dVar4 - (double)CONCAT44(uVar18,uVar17);
    *(double *)&(this->Bounds).MMin.field_0x10 = dVar6 - dVar14;
    *(double *)&(this->Bounds).MMin.field_0x8 = dVar5 - dVar15;
    dVar4 = *(double *)&(this->Bounds).MMax.field_0x8;
    dVar5 = *(double *)&(this->Bounds).MMax.field_0x10;
    *(double *)&(this->Bounds).MMax =
         (double)CONCAT44(uVar18,uVar17) + *(double *)&(this->Bounds).MMax;
    *(double *)&(this->Bounds).MMax.field_0x8 = dVar15 + dVar4;
    *(double *)&(this->Bounds).MMax.field_0x10 = dVar14 + dVar5;
  }
  return;
}

// ComputeBounds @ 143e15190

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::TBoundsWrapperHelper<int,double,1>::ComputeBounds
          (TBoundsWrapperHelper<int,double,1> *this,
          TArray<Chaos::TPayloadBoundsElement<int,double>,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  uint uVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  
  uVar10 = _UNK_1508ffb58;
  uVar9 = ___xmm_ffefffffffffffffffefffffffffffff;
  uVar8 = __real_ffefffffffffffff;
  *(undefined8 *)&(this->Bounds).MMin = 0x7fefffffffffffff;
  *(undefined8 *)&(this->Bounds).MMin.field_0x8 = 0x7fefffffffffffff;
  *(undefined8 *)&(this->Bounds).MMin.field_0x10 = 0x7fefffffffffffff;
  *(undefined8 *)&(this->Bounds).MMax = uVar9;
  *(undefined8 *)&(this->Bounds).MMax.field_0x8 = uVar10;
  *(undefined8 *)&(this->Bounds).MMax.field_0x10 = uVar8;
  pFVar11 = (param_1->AllocatorInstance).Data;
  iVar7 = param_1->ArrayNum;
  pFVar12 = pFVar11 + 0x10;
  pFVar13 = pFVar11 + (longlong)iVar7 * 0x38;
  while( true ) {
    if (param_1->ArrayNum != iVar7) {
      `TCheckedPointerIterator<Chaos::TPayloadBoundsElement<int,double>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar11 == pFVar13) break;
    pFVar11 = pFVar11 + 0x38;
    dVar4 = *(double *)&(this->Bounds).MMin.field_0x8;
    if (*(double *)pFVar12 <= dVar4) {
      dVar4 = *(double *)pFVar12;
    }
    dVar5 = *(double *)&(this->Bounds).MMin;
    dVar6 = *(double *)(pFVar12 + -8);
    if (dVar5 <= *(double *)(pFVar12 + -8)) {
      dVar6 = dVar5;
    }
    dVar5 = *(double *)&(this->Bounds).MMin.field_0x10;
    dVar14 = *(double *)(pFVar12 + 8);
    if (dVar5 <= *(double *)(pFVar12 + 8)) {
      dVar14 = dVar5;
    }
    *(double *)&(this->Bounds).MMin = dVar6;
    *(double *)&(this->Bounds).MMin.field_0x8 = dVar4;
    *(double *)&(this->Bounds).MMin.field_0x10 = dVar14;
    pFVar1 = pFVar12 + 0x10;
    pFVar2 = pFVar12 + 0x18;
    pFVar3 = pFVar12 + 0x20;
    pFVar12 = pFVar12 + 0x38;
    dVar4 = *(double *)&(this->Bounds).MMax;
    dVar5 = *(double *)pFVar1;
    if (*(double *)pFVar1 <= dVar4) {
      dVar5 = dVar4;
    }
    dVar4 = *(double *)&(this->Bounds).MMax.field_0x8;
    dVar6 = *(double *)pFVar2;
    if (*(double *)pFVar2 <= dVar4) {
      dVar6 = dVar4;
    }
    dVar4 = *(double *)&(this->Bounds).MMax.field_0x10;
    dVar14 = *(double *)pFVar3;
    if (*(double *)pFVar3 <= dVar4) {
      dVar14 = dVar4;
    }
    *(double *)&(this->Bounds).MMax = dVar5;
    *(double *)&(this->Bounds).MMax.field_0x8 = dVar6;
    *(double *)&(this->Bounds).MMax.field_0x10 = dVar14;
  }
  if ((param_1->ArrayNum != 0) && (param_2)) {
    dVar4 = *(double *)&(this->Bounds).MMin;
    dVar5 = *(double *)&(this->Bounds).MMin.field_0x8;
    dVar6 = *(double *)&(this->Bounds).MMin.field_0x10;
    dVar15 = (double)FAABBTreeCVars::DynamicTreeLeafEnlargePercent;
    dVar14 = (*(double *)&(this->Bounds).MMax - dVar4) * dVar15 * __real_3fe0000000000000;
    dVar16 = (*(double *)&(this->Bounds).MMax.field_0x10 - dVar6) * dVar15 * __real_3fe0000000000000
    ;
    dVar15 = (*(double *)&(this->Bounds).MMax.field_0x8 - dVar5) * dVar15 * __real_3fe0000000000000;
    uVar17 = SUB84(dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar18 = (uint)((ulonglong)dVar14 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    dVar14 = (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    dVar15 = (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    *(double *)&(this->Bounds).MMin = dVar4 - (double)CONCAT44(uVar18,uVar17);
    *(double *)&(this->Bounds).MMin.field_0x10 = dVar6 - dVar14;
    *(double *)&(this->Bounds).MMin.field_0x8 = dVar5 - dVar15;
    dVar4 = *(double *)&(this->Bounds).MMax.field_0x8;
    dVar5 = *(double *)&(this->Bounds).MMax.field_0x10;
    *(double *)&(this->Bounds).MMax =
         (double)CONCAT44(uVar18,uVar17) + *(double *)&(this->Bounds).MMax;
    *(double *)&(this->Bounds).MMax.field_0x8 = dVar15 + dVar4;
    *(double *)&(this->Bounds).MMax.field_0x10 = dVar14 + dVar5;
  }
  return;
}

