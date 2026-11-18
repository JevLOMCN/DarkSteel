// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 2

// GetBBox @ 14c97e810

TBox<double> * __thiscall
UE::Geometry::FTransformHierarchyQuery::FBoneFan::GetBBox
          (FBoneFan *this,TBox<double> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 local_res8 [8];
  
  dVar8 = (this->RootPos).field0_0x0._s_0.X;
  dVar7 = (this->RootPos).field0_0x0._s_0.Y;
  pFVar4 = (this->TipsPos).AllocatorInstance.Data;
  dVar9 = (this->RootPos).field0_0x0._s_0.Z;
  iVar3 = (this->TipsPos).ArrayNum;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar8;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar7;
  __return_storage_ptr__->IsValid = '\x01';
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar8;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar7;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar9;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar9;
  pFVar1 = pFVar4 + (longlong)iVar3 * 0x18;
  while( true ) {
    if ((this->TipsPos).ArrayNum != iVar3) {
      `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    if (__return_storage_ptr__->IsValid == '\0') {
      dVar8 = *(double *)pFVar4;
      dVar7 = *(double *)(pFVar4 + 8);
      __return_storage_ptr__->IsValid = '\x01';
      dVar9 = *(double *)(pFVar4 + 0x10);
      pFVar4 = pFVar4 + 0x18;
      (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar8;
      (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar7;
      (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar8;
      (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar7;
      (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar9;
      (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar9;
    }
    else {
      dVar9 = *(double *)pFVar4;
      uVar5 = SUB84(dVar9,0);
      uVar6 = (undefined4)((ulonglong)dVar9 >> 0x20);
      dVar8 = *(double *)&(__return_storage_ptr__->Min).field0_0x0;
      if (dVar8 <= dVar9) {
        uVar5 = SUB84(dVar8,0);
        uVar6 = (undefined4)((ulonglong)dVar8 >> 0x20);
      }
      dVar9 = *(double *)(pFVar4 + 8);
      dVar8 = *(double *)(pFVar4 + 0x10);
      dVar7 = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
      if (dVar7 <= *(double *)pFVar4) {
        dVar7 = *(double *)pFVar4;
      }
      (__return_storage_ptr__->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar6,uVar5);
      pFVar4 = pFVar4 + 0x18;
      uVar5 = SUB84(dVar9,0);
      uVar6 = (undefined4)((ulonglong)dVar9 >> 0x20);
      dVar2 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8);
      if (dVar2 <= dVar9) {
        uVar5 = SUB84(dVar2,0);
        uVar6 = (undefined4)((ulonglong)dVar2 >> 0x20);
      }
      dVar2 = (__return_storage_ptr__->Max).field0_0x0._s_0.Y;
      if (dVar9 <= dVar2) {
        dVar9 = dVar2;
      }
      (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar7;
      (__return_storage_ptr__->Min).field0_0x0._s_0.Y = (double)CONCAT44(uVar6,uVar5);
      uVar5 = SUB84(dVar8,0);
      uVar6 = (undefined4)((ulonglong)dVar8 >> 0x20);
      dVar7 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10);
      if (dVar7 <= dVar8) {
        uVar5 = SUB84(dVar7,0);
        uVar6 = (undefined4)((ulonglong)dVar7 >> 0x20);
      }
      dVar7 = (__return_storage_ptr__->Max).field0_0x0._s_0.Z;
      if (dVar8 <= dVar7) {
        dVar8 = dVar7;
      }
      (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar9;
      (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (double)CONCAT44(uVar6,uVar5);
      (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar8;
    }
  }
  return __return_storage_ptr__;
}

// IntersectsBox @ 14c9818f0

bool __thiscall
UE::Geometry::FTransformHierarchyQuery::FBoneFan::IntersectsBox
          (FBoneFan *this,TBox<double> *param_1)

{
  double *pdVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  int iVar4;
  double dVar5;
  bool bVar6;
  TBox<double> *pTVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_b8 [8];
  TVector<double>_u_0 local_b0;
  TVector<double>_u_0 local_98;
  TBox<double> local_80;
  
  if ((this->TipsPos).ArrayNum == 0) {
    dVar3 = (this->RootPos).field0_0x0._s_0.X;
    if ((((param_1->Min).field0_0x0._s_0.X <= dVar3) &&
        (dVar3 < (param_1->Max).field0_0x0._s_0.X || dVar3 == (param_1->Max).field0_0x0._s_0.X)) &&
       ((dVar3 = (this->RootPos).field0_0x0._s_0.Y, (param_1->Min).field0_0x0._s_0.Y <= dVar3 &&
        (((pdVar1 = &(param_1->Max).field0_0x0._s_0.Y, dVar3 < *pdVar1 || dVar3 == *pdVar1 &&
          (dVar3 = (this->RootPos).field0_0x0._s_0.Z, (param_1->Min).field0_0x0._s_0.Z <= dVar3)) &&
         (pdVar1 = &(param_1->Max).field0_0x0._s_0.Z, dVar3 < *pdVar1 || dVar3 == *pdVar1)))))) {
      return true;
    }
    return false;
  }
  pTVar7 = GetBBox(this,&local_80);
  dVar5 = __real_47eff933c0000000;
  dVar3 = __real_3ff0000000000000;
  if (((((param_1->Max).field0_0x0._s_0.X < (pTVar7->Min).field0_0x0._s_0.X) ||
       ((pTVar7->Max).field0_0x0._s_0.X < (param_1->Min).field0_0x0._s_0.X)) ||
      ((param_1->Max).field0_0x0._s_0.Y < (pTVar7->Min).field0_0x0._s_0.Y)) ||
     ((((pTVar7->Max).field0_0x0._s_0.Y < (param_1->Min).field0_0x0._s_0.Y ||
       ((param_1->Max).field0_0x0._s_0.Z < (pTVar7->Min).field0_0x0._s_0.Z)) ||
      ((pTVar7->Max).field0_0x0._s_0.Z < (param_1->Min).field0_0x0._s_0.Z)))) {
LAB_14c981ae8:
    bVar6 = false;
  }
  else {
    iVar4 = (this->TipsPos).ArrayNum;
    pFVar8 = (this->TipsPos).AllocatorInstance.Data;
    pFVar2 = pFVar8 + (longlong)iVar4 * 0x18;
    while( true ) {
      if ((this->TipsPos).ArrayNum != iVar4) {
        `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_b8);
      }
      if (pFVar8 == pFVar2) goto LAB_14c981ae8;
      local_98._s_0.X = *(double *)&pFVar8->field_0x0 - (this->RootPos).field0_0x0._s_0.X;
      local_98._s_0.Y = *(double *)(pFVar8 + 8) - (this->RootPos).field0_0x0._s_0.Y;
      local_98._s_0.Z = *(double *)(pFVar8 + 0x10) - (this->RootPos).field0_0x0._s_0.Z;
      if (local_98._s_0.X == 0.0) {
        local_b0._s_0.X = dVar5;
      }
      else {
        local_b0._s_0.X = dVar3 / local_98._s_0.X;
      }
      if (local_98._s_0.Y == 0.0) {
        local_b0._s_0.Y = dVar5;
      }
      else {
        local_b0._s_0.Y = dVar3 / local_98._s_0.Y;
      }
      if (local_98._s_0.Z == 0.0) {
        local_b0._s_0.Z = dVar5;
      }
      else {
        local_b0._s_0.Z = dVar3 / local_98._s_0.Z;
      }
      bVar6 = FMath::LineBoxIntersection<double>
                        (param_1,&this->RootPos,(TVector<double> *)pFVar8,
                         (TVector<double> *)&local_98._s_0,(TVector<double> *)&local_b0._s_0);
      if (bVar6) break;
      pFVar8 = pFVar8 + 0x18;
    }
    bVar6 = true;
  }
  return bVar6;
}

