// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 18

// OverlapFast<Chaos::TSpatialVisitor<Chaos::FAccelerationStructureHandle,double>_> @ 143cebeb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
Chaos::
TSpatialAccelerationCollectionHelper<0,1,Chaos::TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>,Chaos::FAccelerationStructureHandle,double,3>
::OverlapFast<Chaos::TSpatialVisitor<Chaos::FAccelerationStructureHandle,double>_>
          (TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
           *param_1,TAABB<double,3> *param_2,
          TSpatialVisitor<Chaos::FAccelerationStructureHandle,double> *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  undefined1 auStackY_118 [32];
  undefined1 local_c8 [8];
  TVector<double,3> local_c0;
  TVector<double,3> local_a8;
  undefined1 local_88 [16];
  longlong lStack_78;
  longlong local_70;
  bool local_58 [8];
  TVector<double,3> local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  pFVar4 = (param_1->First).Objects.AllocatorInstance.Data;
  iVar2 = (param_1->First).Objects.ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->First).Objects.ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_c8);
    }
    if (pFVar4 == pFVar1) break;
    if (*(TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
          **)pFVar4 !=
        (TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
         *)0x0) {
      local_88._0_8_ = &local_50;
      local_70 = 0;
      local_58[0] = false;
      local_58[1] = false;
      local_58[2] = false;
      local_c0._16_8_ = 0;
      local_a8._16_8_ = 0;
      local_88._8_8_ = 0;
      lStack_78 = 0;
      local_c0._0_8_ = 0;
      local_c0._8_8_ = 0;
      local_a8._0_8_ = 0;
      local_a8._8_8_ = 0;
      bVar3 = TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
              ::
              QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<Chaos::FAccelerationStructureHandle,double>_>
                        (*(TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                           **)pFVar4,&local_a8,(FQueryFastDataVoid *)local_88,&local_c0,param_2,
                         param_3,(TVector<double,3> *)local_88._0_8_,
                         (TVector<double,3> *)(local_88 + 8),local_58);
      if (!bVar3) {
        return false;
      }
    }
    pFVar4 = pFVar4 + 8;
  }
  return true;
}

// OverlapFast<Chaos::TSpatialVisitor<Chaos::FAccelerationStructureHandle,double>_> @ 143cebff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
Chaos::
TSpatialAccelerationCollectionHelper<0,1,Chaos::TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>,Chaos::FAccelerationStructureHandle,double,3>
::OverlapFast<Chaos::TSpatialVisitor<Chaos::FAccelerationStructureHandle,double>_>
          (TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
           *param_1,TAABB<double,3> *param_2,
          TSpatialVisitor<Chaos::FAccelerationStructureHandle,double> *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  undefined1 auStackY_118 [32];
  undefined1 local_c8 [8];
  TVector<double,3> local_c0;
  TVector<double,3> local_a8;
  undefined1 local_88 [16];
  longlong lStack_78;
  longlong local_70;
  bool local_58 [8];
  TVector<double,3> local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  pFVar4 = (param_1->First).Objects.AllocatorInstance.Data;
  iVar2 = (param_1->First).Objects.ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->First).Objects.ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_c8);
    }
    if (pFVar4 == pFVar1) break;
    if (*(TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
          **)pFVar4 !=
        (TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
         *)0x0) {
      local_88._0_8_ = &local_50;
      local_70 = 0;
      local_58[0] = false;
      local_58[1] = false;
      local_58[2] = false;
      local_c0._16_8_ = 0;
      local_a8._16_8_ = 0;
      local_88._8_8_ = 0;
      lStack_78 = 0;
      local_c0._0_8_ = 0;
      local_c0._8_8_ = 0;
      local_a8._0_8_ = 0;
      local_a8._8_8_ = 0;
      bVar3 = TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
              ::
              QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<Chaos::FAccelerationStructureHandle,double>_>
                        (*(TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                           **)pFVar4,&local_a8,(FQueryFastDataVoid *)local_88,&local_c0,param_2,
                         param_3,(TVector<double,3> *)local_88._0_8_,
                         (TVector<double,3> *)(local_88 + 8),local_58);
      if (!bVar3) {
        return false;
      }
    }
    pFVar4 = pFVar4 + 8;
  }
  return true;
}

// OverlapFast<Chaos::TSpatialVisitor<Chaos::FAccelerationStructureHandle,double>_> @ 143cec130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __cdecl
Chaos::
TSpatialAccelerationCollectionHelper<0,3,Chaos::TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>,Chaos::FAccelerationStructureHandle,double,3>
::OverlapFast<Chaos::TSpatialVisitor<Chaos::FAccelerationStructureHandle,double>_>
          (TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
           *param_1,TAABB<double,3> *param_2,
          TSpatialVisitor<Chaos::FAccelerationStructureHandle,double> *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  undefined1 auStackY_188 [32];
  undefined1 local_138 [8];
  TAABB<double,3> local_130;
  TVector<double,3> local_100;
  undefined1 local_e8 [16];
  longlong lStack_d8;
  longlong local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  longlong local_c0;
  bool local_b8 [8];
  TVector<double,3> local_b0;
  undefined1 local_98 [16];
  longlong lStack_88;
  longlong local_80;
  bool local_68 [8];
  TVector<double,3> local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pFVar4 = (param_1->First).Objects.AllocatorInstance.Data;
  iVar2 = (param_1->First).Objects.ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->First).Objects.ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_138);
    }
    if (pFVar4 == pFVar1) break;
    if (*(TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
          **)pFVar4 !=
        (TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
         *)0x0) {
      local_e8._0_8_ = &local_b0;
      local_d0 = 0;
      local_b8[0] = false;
      local_b8[1] = false;
      local_b8[2] = false;
      local_100._16_8_ = 0;
      local_130.MMin._16_8_ = 0;
      local_e8._8_8_ = 0;
      lStack_d8 = 0;
      local_100._0_8_ = 0;
      local_100._8_8_ = 0;
      local_130.MMin._0_8_ = 0;
      local_130.MMin._8_8_ = 0;
      bVar3 = TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
              ::
              QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<Chaos::FAccelerationStructureHandle,double>_>
                        (*(TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                           **)pFVar4,&local_130.MMin,(FQueryFastDataVoid *)local_e8,&local_100,
                         param_2,param_3,(TVector<double,3> *)local_e8._0_8_,
                         (TVector<double,3> *)(local_e8 + 8),local_b8);
      if (!bVar3) {
        return false;
      }
    }
    pFVar4 = pFVar4 + 8;
  }
  local_130.MMin._0_8_ = *(undefined8 *)&param_2->MMin;
  local_130.MMin._8_8_ = *(undefined8 *)&(param_2->MMin).field_0x8;
  pFVar4 = (param_1->Remaining).First.Objects.AllocatorInstance.Data;
  local_130.MMin._16_8_ = *(undefined8 *)&(param_2->MMin).field_0x10;
  iVar2 = (param_1->Remaining).First.Objects.ArrayNum;
  local_130.MMax._0_8_ = *(undefined8 *)&param_2->MMax;
  local_130.MMax._8_8_ = *(undefined8 *)&(param_2->MMax).field_0x8;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  local_130.MMax._16_8_ = *(undefined8 *)&(param_2->MMax).field_0x10;
  while( true ) {
    if ((param_1->Remaining).First.Objects.ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_138);
    }
    if (pFVar4 == pFVar1) break;
    if ((*(TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3> **)pFVar4 !=
         (TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3> *)0x0) &&
       (bVar3 = TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>::
                OverlapImp<Chaos::TSpatialVisitor<Chaos::FAccelerationStructureHandle,double>,1>
                          (*(TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3> **)pFVar4
                           ,&local_130,param_3), !bVar3)) {
      return false;
    }
    pFVar4 = pFVar4 + 8;
  }
  pFVar4 = (param_1->Remaining).Remaining.First.Objects.AllocatorInstance.Data;
  iVar2 = (param_1->Remaining).Remaining.First.Objects.ArrayNum;
  local_e8._0_8_ = local_130.MMin._0_8_;
  local_e8._8_8_ = local_130.MMin._8_8_;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  lStack_d8 = local_130.MMin._16_8_;
  local_d0 = local_130.MMax._0_8_;
  uStack_c8 = local_130.MMax._8_4_;
  uStack_c4 = local_130.MMax._12_4_;
  local_c0 = local_130.MMax._16_8_;
  while( true ) {
    if ((param_1->Remaining).Remaining.First.Objects.ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_138);
    }
    if (pFVar4 == pFVar1) break;
    if (*(TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
          **)pFVar4 !=
        (TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
         *)0x0) {
      local_98._0_8_ = &local_60;
      local_80 = 0;
      local_68[0] = false;
      local_68[1] = false;
      local_68[2] = false;
      local_130.MMin._16_8_ = 0;
      local_100._16_8_ = 0;
      local_98._8_8_ = 0;
      lStack_88 = 0;
      local_130.MMin._0_8_ = 0;
      local_130.MMin._8_8_ = 0;
      local_100._0_8_ = 0;
      local_100._8_8_ = 0;
      bVar3 = TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
              ::
              QueryImp<2,Chaos::FQueryFastDataVoid,Chaos::TSpatialVisitor<Chaos::FAccelerationStructureHandle,double>_>
                        (*(TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                           **)pFVar4,&local_100,(FQueryFastDataVoid *)local_98,&local_130.MMin,
                         (TAABB<double,3> *)local_e8,param_3,(TVector<double,3> *)local_98._0_8_,
                         (TVector<double,3> *)(local_98 + 8),local_68);
      if (!bVar3) {
        return false;
      }
    }
    pFVar4 = pFVar4 + 8;
  }
  return true;
}

// RaycastFast<Chaos::TSpatialVisitor<Chaos::FAccelerationStructureHandle,double>_> @ 143cfa240

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
Chaos::
TSpatialAccelerationCollectionHelper<0,3,Chaos::TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>,Chaos::FAccelerationStructureHandle,double,3>
::RaycastFast<Chaos::TSpatialVisitor<Chaos::FAccelerationStructureHandle,double>_>
          (TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
           *param_1,TVector<double,3> *param_2,FQueryFastData *param_3,
          TSpatialVisitor<Chaos::FAccelerationStructureHandle,double> *param_4,
          TVector<double,3> *param_5,TVector<double,3> *param_6,bool *param_7)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  TVector<double,3> *local_res10;
  TVector<double,3> local_d8;
  TVector<double,3> local_b8;
  TAABB<double,3> local_98 [2];
  
  uVar8 = _UNK_150a9e6d8;
  uVar7 = ___xmm_ffefffffffffffff7fefffffffffffff;
  uVar6 = _UNK_150a9e648;
  uVar5 = ___xmm_7fefffffffffffff7fefffffffffffff;
  uVar4 = _UNK_1508ffb58;
  uVar3 = ___xmm_ffefffffffffffffffefffffffffffff;
  pFVar10 = (param_1->First).Objects.AllocatorInstance.Data;
  iVar2 = (param_1->First).Objects.ArrayNum;
  pFVar1 = pFVar10 + (longlong)iVar2 * 8;
  local_res10 = param_2;
  while( true ) {
    if ((param_1->First).Objects.ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar1) break;
    if (*(TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
          **)pFVar10 !=
        (TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
         *)0x0) {
      local_d8._0_8_ = *(undefined8 *)param_6;
      local_d8._8_8_ = *(undefined8 *)&param_6->field_0x8;
      local_d8._16_8_ = *(undefined8 *)&param_6->field_0x10;
      local_b8._16_8_ = 0;
      local_98[0].MMin._0_8_ = uVar5;
      local_98[0].MMin._8_8_ = uVar6;
      local_98[0].MMin._16_8_ = uVar7;
      local_98[0].MMax._0_8_ = uVar8;
      local_98[0].MMax._8_8_ = uVar3;
      local_98[0].MMax._16_8_ = uVar4;
      local_b8._0_8_ = 0;
      local_b8._8_8_ = 0;
      bVar9 = TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
              ::
              QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<Chaos::FAccelerationStructureHandle,double>_>
                        (*(TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                           **)pFVar10,local_res10,param_3,&local_b8,local_98,param_4,param_5,
                         &local_d8,param_7);
      if (!bVar9) {
        return false;
      }
    }
    pFVar10 = pFVar10 + 8;
  }
  pFVar10 = (param_1->Remaining).First.Objects.AllocatorInstance.Data;
  iVar2 = (param_1->Remaining).First.Objects.ArrayNum;
  pFVar1 = pFVar10 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->Remaining).First.Objects.ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar1) break;
    if (*(TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3> **)pFVar10 !=
        (TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3> *)0x0) {
      local_b8._0_8_ = *(undefined8 *)param_6;
      local_b8._8_8_ = *(undefined8 *)&param_6->field_0x8;
      local_b8._16_8_ = *(undefined8 *)&param_6->field_0x10;
      bVar9 = TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>::
              RaycastImp<Chaos::TSpatialVisitor<Chaos::FAccelerationStructureHandle,double>,1>
                        (*(TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3> **)pFVar10,
                         local_res10,param_3,param_4,param_5,&local_b8,param_7);
      if (!bVar9) {
        return false;
      }
    }
    pFVar10 = pFVar10 + 8;
  }
  pFVar10 = (param_1->Remaining).Remaining.First.Objects.AllocatorInstance.Data;
  iVar2 = (param_1->Remaining).Remaining.First.Objects.ArrayNum;
  pFVar1 = pFVar10 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->Remaining).Remaining.First.Objects.ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar1) break;
    if (*(TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
          **)pFVar10 !=
        (TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
         *)0x0) {
      local_b8._0_8_ = *(undefined8 *)param_6;
      local_b8._8_8_ = *(undefined8 *)&param_6->field_0x8;
      local_b8._16_8_ = *(undefined8 *)&param_6->field_0x10;
      local_d8._16_8_ = 0;
      local_98[0].MMin._0_8_ = uVar5;
      local_98[0].MMin._8_8_ = uVar6;
      local_98[0].MMin._16_8_ = uVar7;
      local_98[0].MMax._0_8_ = uVar8;
      local_98[0].MMax._8_8_ = uVar3;
      local_98[0].MMax._16_8_ = uVar4;
      local_d8._0_8_ = 0;
      local_d8._8_8_ = 0;
      bVar9 = TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
              ::
              QueryImp<0,Chaos::FQueryFastData,Chaos::TSpatialVisitor<Chaos::FAccelerationStructureHandle,double>_>
                        (*(TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                           **)pFVar10,local_res10,param_3,&local_d8,local_98,param_4,param_5,
                         &local_b8,param_7);
      if (!bVar9) {
        return false;
      }
    }
    pFVar10 = pFVar10 + 8;
  }
  return true;
}

// SweepFast<Chaos::TSpatialVisitor<Chaos::FAccelerationStructureHandle,double>_> @ 143cfd430

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
Chaos::
TSpatialAccelerationCollectionHelper<0,3,Chaos::TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>,Chaos::FAccelerationStructureHandle,double,3>
::SweepFast<Chaos::TSpatialVisitor<Chaos::FAccelerationStructureHandle,double>_>
          (TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
           *param_1,TVector<double,3> *param_2,FQueryFastData *param_3,TVector<double,3> *param_4,
          TSpatialVisitor<Chaos::FAccelerationStructureHandle,double> *param_5,
          TVector<double,3> *param_6,TVector<double,3> *param_7,bool *param_8)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  TVector<double,3> *local_res10;
  TVector<double,3> local_d8;
  TVector<double,3> local_b8;
  TAABB<double,3> local_98 [2];
  
  uVar8 = _UNK_150a9e6d8;
  uVar7 = ___xmm_ffefffffffffffff7fefffffffffffff;
  uVar6 = _UNK_150a9e648;
  uVar5 = ___xmm_7fefffffffffffff7fefffffffffffff;
  uVar4 = _UNK_1508ffb58;
  uVar3 = ___xmm_ffefffffffffffffffefffffffffffff;
  pFVar10 = (param_1->First).Objects.AllocatorInstance.Data;
  iVar2 = (param_1->First).Objects.ArrayNum;
  pFVar1 = pFVar10 + (longlong)iVar2 * 8;
  local_res10 = param_2;
  while( true ) {
    if ((param_1->First).Objects.ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar1) break;
    if (*(TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
          **)pFVar10 !=
        (TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
         *)0x0) {
      local_d8._0_8_ = *(undefined8 *)param_7;
      local_d8._8_8_ = *(undefined8 *)&param_7->field_0x8;
      local_d8._16_8_ = *(undefined8 *)&param_7->field_0x10;
      local_b8._0_8_ = *(undefined8 *)param_4;
      local_b8._8_8_ = *(undefined8 *)&param_4->field_0x8;
      local_b8._16_8_ = *(undefined8 *)&param_4->field_0x10;
      local_98[0].MMin._0_8_ = uVar5;
      local_98[0].MMin._8_8_ = uVar6;
      local_98[0].MMin._16_8_ = uVar7;
      local_98[0].MMax._0_8_ = uVar8;
      local_98[0].MMax._8_8_ = uVar3;
      local_98[0].MMax._16_8_ = uVar4;
      bVar9 = TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
              ::
              QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<Chaos::FAccelerationStructureHandle,double>_>
                        (*(TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                           **)pFVar10,local_res10,param_3,&local_b8,local_98,param_5,param_6,
                         &local_d8,param_8);
      if (!bVar9) {
        return false;
      }
    }
    pFVar10 = pFVar10 + 8;
  }
  pFVar10 = (param_1->Remaining).First.Objects.AllocatorInstance.Data;
  iVar2 = (param_1->Remaining).First.Objects.ArrayNum;
  pFVar1 = pFVar10 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->Remaining).First.Objects.ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar1) break;
    if (*(TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3> **)pFVar10 !=
        (TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3> *)0x0) {
      local_b8._0_8_ = *(undefined8 *)param_7;
      local_b8._8_8_ = *(undefined8 *)&param_7->field_0x8;
      local_b8._16_8_ = *(undefined8 *)&param_7->field_0x10;
      local_d8._0_8_ = *(undefined8 *)param_4;
      local_d8._8_8_ = *(undefined8 *)&param_4->field_0x8;
      local_d8._16_8_ = *(undefined8 *)&param_4->field_0x10;
      bVar9 = TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>::
              SweepImp<Chaos::TSpatialVisitor<Chaos::FAccelerationStructureHandle,double>,1>
                        (*(TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3> **)pFVar10,
                         local_res10,param_3,&local_d8,param_5,param_6,&local_b8,param_8);
      if (!bVar9) {
        return false;
      }
    }
    pFVar10 = pFVar10 + 8;
  }
  pFVar10 = (param_1->Remaining).Remaining.First.Objects.AllocatorInstance.Data;
  iVar2 = (param_1->Remaining).Remaining.First.Objects.ArrayNum;
  pFVar1 = pFVar10 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->Remaining).Remaining.First.Objects.ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar1) break;
    if (*(TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
          **)pFVar10 !=
        (TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
         *)0x0) {
      local_b8._0_8_ = *(undefined8 *)param_7;
      local_b8._8_8_ = *(undefined8 *)&param_7->field_0x8;
      local_b8._16_8_ = *(undefined8 *)&param_7->field_0x10;
      local_d8._0_8_ = *(undefined8 *)param_4;
      local_d8._8_8_ = *(undefined8 *)&param_4->field_0x8;
      local_d8._16_8_ = *(undefined8 *)&param_4->field_0x10;
      local_98[0].MMin._0_8_ = uVar5;
      local_98[0].MMin._8_8_ = uVar6;
      local_98[0].MMin._16_8_ = uVar7;
      local_98[0].MMax._0_8_ = uVar8;
      local_98[0].MMax._8_8_ = uVar3;
      local_98[0].MMax._16_8_ = uVar4;
      bVar9 = TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
              ::
              QueryImp<1,Chaos::FQueryFastData,Chaos::TSpatialVisitor<Chaos::FAccelerationStructureHandle,double>_>
                        (*(TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                           **)pFVar10,local_res10,param_3,&local_d8,local_98,param_5,param_6,
                         &local_b8,param_8);
      if (!bVar9) {
        return false;
      }
    }
    pFVar10 = pFVar10 + 8;
  }
  return true;
}

// CacheOverlappingLeaves @ 143d45a60

void __cdecl
Chaos::
TSpatialAccelerationCollectionHelper<0,1,Chaos::TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>,Chaos::FAccelerationStructureHandle,double,3>
::CacheOverlappingLeaves
          (TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
           *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
  *this;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (param_1->First).Objects.AllocatorInstance.Data;
  iVar2 = (param_1->First).Objects.ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->First).Objects.ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    this = *(TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
             **)pFVar3;
    if ((this != (TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                  *)0x0) && (this->bBuildOverlapCache != false)) {
      TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
      ::ComputeOverlappingCacheFromRoot(this,false);
    }
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// CacheOverlappingLeaves @ 143d45ad0

void __cdecl
Chaos::
TSpatialAccelerationCollectionHelper<0,1,Chaos::TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>,Chaos::FAccelerationStructureHandle,double,3>
::CacheOverlappingLeaves
          (TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
           *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
  *this;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (param_1->First).Objects.AllocatorInstance.Data;
  iVar2 = (param_1->First).Objects.ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->First).Objects.ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    this = *(TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
             **)pFVar3;
    if ((this != (TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                  *)0x0) && (this->bBuildOverlapCache != false)) {
      TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
      ::ComputeOverlappingCacheFromRoot(this,false);
    }
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// CacheOverlappingLeaves @ 143d45b40

void __cdecl
Chaos::
TSpatialAccelerationCollectionHelper<0,3,Chaos::TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>,Chaos::FAccelerationStructureHandle,double,3>
::CacheOverlappingLeaves
          (TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
           *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
  *this;
  TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
  *this_00;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (param_1->First).Objects.AllocatorInstance.Data;
  iVar2 = (param_1->First).Objects.ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->First).Objects.ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    this = *(TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
             **)pFVar3;
    if ((this != (TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                  *)0x0) && (this->bBuildOverlapCache != false)) {
      TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
      ::ComputeOverlappingCacheFromRoot(this,false);
    }
    pFVar3 = pFVar3 + 8;
  }
  pFVar3 = (param_1->Remaining).First.Objects.AllocatorInstance.Data;
  iVar2 = (param_1->Remaining).First.Objects.ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->Remaining).First.Objects.ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    pFVar3 = pFVar3 + 8;
  }
  pFVar3 = (param_1->Remaining).Remaining.First.Objects.AllocatorInstance.Data;
  iVar2 = (param_1->Remaining).Remaining.First.Objects.ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->Remaining).Remaining.First.Objects.ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    this_00 = *(TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                **)pFVar3;
    if ((this_00 !=
         (TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
          *)0x0) && (this_00->bBuildOverlapCache != false)) {
      TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
      ::ComputeOverlappingCacheFromRoot(this_00,false);
    }
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// GlobalObjects @ 143d57970

void __cdecl
Chaos::
TSpatialAccelerationCollectionHelper<1,3,Chaos::TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>,Chaos::FAccelerationStructureHandle,double,3>
::GlobalObjects(TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                *param_1,
               TArray<Chaos::TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double>,TSizedDefaultAllocator<32>_>
               *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  
  pFVar8 = (param_1->Remaining).First.Objects.AllocatorInstance.Data;
  iVar2 = (param_1->Remaining).First.Objects.ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->Remaining).First.Objects.ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    lVar4 = *(longlong *)pFVar8;
    if (lVar4 != 0) {
      if (param_2 ==
          (TArray<Chaos::TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double>,TSizedDefaultAllocator<32>_>
           *)(lVar4 + 0x10)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar3 = *(int *)(lVar4 + 0x18);
      if (iVar3 != 0) {
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x68,8,iVar3,&param_2->AllocatorInstance,&param_2->ArrayNum,
                           &param_2->ArrayMax);
        ConstructItems<Chaos::TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double>,Chaos::TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double>,int>
                  ((param_2->AllocatorInstance).Data + (longlong)iVar7 * 0x68,
                   (TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double> *)
                   (((TArray<Chaos::TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double>,TSizedDefaultAllocator<32>_>
                      *)(lVar4 + 0x10))->AllocatorInstance).Data,iVar3);
      }
    }
    pFVar8 = pFVar8 + 8;
  }
  pFVar8 = (param_1->Remaining).Remaining.First.Objects.AllocatorInstance.Data;
  iVar2 = (param_1->Remaining).Remaining.First.Objects.ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->Remaining).Remaining.First.Objects.ArrayNum != iVar2) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar8 == pFVar1) break;
    lVar4 = *(longlong *)pFVar8;
    if (lVar4 != 0) {
      if (param_2 ==
          (TArray<Chaos::TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double>,TSizedDefaultAllocator<32>_>
           *)(lVar4 + 0x108)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar3 = *(int *)(lVar4 + 0x110);
      if (iVar3 != 0) {
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x68,8,iVar3,&param_2->AllocatorInstance,&param_2->ArrayNum,
                           &param_2->ArrayMax);
        ConstructItems<Chaos::TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double>,Chaos::TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double>,int>
                  ((param_2->AllocatorInstance).Data + (longlong)iVar7 * 0x68,
                   (TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double> *)
                   (((TArray<Chaos::TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double>,TSizedDefaultAllocator<32>_>
                      *)(lVar4 + 0x108))->AllocatorInstance).Data,iVar3);
      }
    }
    pFVar8 = pFVar8 + 8;
  }
  return;
}

// GlobalObjects @ 143d57b20

void __cdecl
Chaos::
TSpatialAccelerationCollectionHelper<0,1,Chaos::TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>,Chaos::FAccelerationStructureHandle,double,3>
::GlobalObjects(TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                *param_1,
               TArray<Chaos::TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double>,TSizedDefaultAllocator<32>_>
               *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  pFVar8 = (param_1->First).Objects.AllocatorInstance.Data;
  iVar2 = (param_1->First).Objects.ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->First).Objects.ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    lVar4 = *(longlong *)pFVar8;
    if (lVar4 != 0) {
      if (param_2 ==
          (TArray<Chaos::TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double>,TSizedDefaultAllocator<32>_>
           *)(lVar4 + 0x110)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar3 = *(int *)(lVar4 + 0x118);
      if (iVar3 != 0) {
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x68,8,iVar3,&param_2->AllocatorInstance,&param_2->ArrayNum,
                           &param_2->ArrayMax);
        ConstructItems<Chaos::TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double>,Chaos::TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double>,int>
                  ((param_2->AllocatorInstance).Data + (longlong)iVar7 * 0x68,
                   (TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double> *)
                   (((TArray<Chaos::TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double>,TSizedDefaultAllocator<32>_>
                      *)(lVar4 + 0x110))->AllocatorInstance).Data,iVar3);
      }
    }
    pFVar8 = pFVar8 + 8;
  }
  return;
}

// GlobalObjects @ 143d57c10

void __cdecl
Chaos::
TSpatialAccelerationCollectionHelper<0,1,Chaos::TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>,Chaos::FAccelerationStructureHandle,double,3>
::GlobalObjects(TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                *param_1,
               TArray<Chaos::TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double>,TSizedDefaultAllocator<32>_>
               *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  pFVar8 = (param_1->First).Objects.AllocatorInstance.Data;
  iVar2 = (param_1->First).Objects.ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->First).Objects.ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    lVar4 = *(longlong *)pFVar8;
    if (lVar4 != 0) {
      if (param_2 ==
          (TArray<Chaos::TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double>,TSizedDefaultAllocator<32>_>
           *)(lVar4 + 0x108)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar3 = *(int *)(lVar4 + 0x110);
      if (iVar3 != 0) {
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x68,8,iVar3,&param_2->AllocatorInstance,&param_2->ArrayNum,
                           &param_2->ArrayMax);
        ConstructItems<Chaos::TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double>,Chaos::TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double>,int>
                  ((param_2->AllocatorInstance).Data + (longlong)iVar7 * 0x68,
                   (TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double> *)
                   (((TArray<Chaos::TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double>,TSizedDefaultAllocator<32>_>
                      *)(lVar4 + 0x108))->AllocatorInstance).Data,iVar3);
      }
    }
    pFVar8 = pFVar8 + 8;
  }
  return;
}

// GlobalObjects @ 143d57d00

void __cdecl
Chaos::
TSpatialAccelerationCollectionHelper<0,1,Chaos::TSpatialTypeTuple<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>,Chaos::FAccelerationStructureHandle,double,3>
::GlobalObjects(TSpatialTypeTuple<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
                *param_1,
               TArray<Chaos::TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double>,TSizedDefaultAllocator<32>_>
               *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  pFVar8 = (param_1->First).Objects.AllocatorInstance.Data;
  iVar2 = (param_1->First).Objects.ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->First).Objects.ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    lVar4 = *(longlong *)pFVar8;
    if (lVar4 != 0) {
      if (param_2 ==
          (TArray<Chaos::TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double>,TSizedDefaultAllocator<32>_>
           *)(lVar4 + 0x10)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar3 = *(int *)(lVar4 + 0x18);
      if (iVar3 != 0) {
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x68,8,iVar3,&param_2->AllocatorInstance,&param_2->ArrayNum,
                           &param_2->ArrayMax);
        ConstructItems<Chaos::TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double>,Chaos::TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double>,int>
                  ((param_2->AllocatorInstance).Data + (longlong)iVar7 * 0x68,
                   (TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double> *)
                   (((TArray<Chaos::TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double>,TSizedDefaultAllocator<32>_>
                      *)(lVar4 + 0x10))->AllocatorInstance).Data,iVar3);
      }
    }
    pFVar8 = pFVar8 + 8;
  }
  return;
}

// GlobalObjects @ 143d57df0

void __cdecl
Chaos::
TSpatialAccelerationCollectionHelper<0,3,Chaos::TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>,Chaos::FAccelerationStructureHandle,double,3>
::GlobalObjects(TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
                *param_1,
               TArray<Chaos::TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double>,TSizedDefaultAllocator<32>_>
               *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  pFVar8 = (param_1->First).Objects.AllocatorInstance.Data;
  iVar2 = (param_1->First).Objects.ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->First).Objects.ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    lVar4 = *(longlong *)pFVar8;
    if (lVar4 != 0) {
      if (param_2 ==
          (TArray<Chaos::TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double>,TSizedDefaultAllocator<32>_>
           *)(lVar4 + 0x110)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar3 = *(int *)(lVar4 + 0x118);
      if (iVar3 != 0) {
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x68,8,iVar3,&param_2->AllocatorInstance,&param_2->ArrayNum,
                           &param_2->ArrayMax);
        ConstructItems<Chaos::TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double>,Chaos::TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double>,int>
                  ((param_2->AllocatorInstance).Data + (longlong)iVar7 * 0x68,
                   (TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double> *)
                   (((TArray<Chaos::TPayloadBoundsElement<Chaos::FAccelerationStructureHandle,double>,TSizedDefaultAllocator<32>_>
                      *)(lVar4 + 0x110))->AllocatorInstance).Data,iVar3);
      }
    }
    pFVar8 = pFVar8 + 8;
  }
  TSpatialAccelerationCollectionHelper<1,3,Chaos::TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>,Chaos::FAccelerationStructureHandle,double,3>
  ::GlobalObjects(param_1,param_2);
  return;
}

// Reset @ 143d68890

void __cdecl
Chaos::
TSpatialAccelerationCollectionHelper<1,3,Chaos::TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>,Chaos::FAccelerationStructureHandle,double,3>
::Reset(TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
        *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (param_1->Remaining).First.Objects.AllocatorInstance.Data;
  iVar2 = (param_1->Remaining).First.Objects.ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->Remaining).First.Objects.ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    lVar3 = *(longlong *)pFVar4;
    if (lVar3 != 0) {
      *(undefined4 *)(lVar3 + 0x18) = 0;
      if (*(int *)(lVar3 + 0x1c) < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x68,8,0,(ForAnyElementType *)(lVar3 + 0x10),0,(int *)(lVar3 + 0x1c));
      }
      *(undefined8 *)(lVar3 + 0x20) = 0;
      *(undefined8 *)(lVar3 + 0x28) = 0;
      *(undefined8 *)(lVar3 + 0x30) = 0;
      *(undefined8 *)(lVar3 + 0x38) = 0;
      *(undefined8 *)(lVar3 + 0x40) = 0;
      *(undefined8 *)(lVar3 + 0x48) = 0;
      *(undefined8 *)(lVar3 + 0x50) = 0;
      *(undefined4 *)(lVar3 + 0x58) = 0;
      *(undefined8 *)(lVar3 + 0x60) = 0;
      *(undefined8 *)(lVar3 + 0x68) = 0;
      *(undefined8 *)(lVar3 + 0x70) = 0;
      *(undefined8 *)(lVar3 + 0x78) = 0;
      *(undefined4 *)(lVar3 + 0x80) = 0;
      if (*(int *)(lVar3 + 0x94) < 0) {
        DestructItems<TArray<Chaos::TBVCellElement<Chaos::FAccelerationStructureHandle,double,3>,TSizedDefaultAllocator<32>_>,int>
                  (*(TArray<Chaos::TBVCellElement<Chaos::FAccelerationStructureHandle,double,3>,TSizedDefaultAllocator<32>_>
                     **)(lVar3 + 0x88),*(int *)(lVar3 + 0x90));
        *(undefined4 *)(lVar3 + 0x90) = 0;
        if (*(int *)(lVar3 + 0x94) != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,(ForAnyElementType *)(lVar3 + 0x88),0,(int *)(lVar3 + 0x94));
        }
      }
      else {
        DestructItems<TArray<Chaos::TBVCellElement<Chaos::FAccelerationStructureHandle,double,3>,TSizedDefaultAllocator<32>_>,int>
                  (*(TArray<Chaos::TBVCellElement<Chaos::FAccelerationStructureHandle,double,3>,TSizedDefaultAllocator<32>_>
                     **)(lVar3 + 0x88),*(int *)(lVar3 + 0x90));
        *(undefined4 *)(lVar3 + 0x90) = 0;
      }
      *(undefined4 *)(lVar3 + 0xa0) = 0;
      if (*(int *)(lVar3 + 0xa4) < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x80,8,0,(ForAnyElementType *)(lVar3 + 0x98),0,(int *)(lVar3 + 0xa4));
      }
      *(undefined4 *)(lVar3 + 0xb0) = 0;
      if (*(int *)(lVar3 + 0xb4) < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x24,4,0,(ForAnyElementType *)(lVar3 + 0xa8),0,(int *)(lVar3 + 0xb4));
      }
      *(undefined1 *)(lVar3 + 0xc0) = 1;
    }
    pFVar4 = pFVar4 + 8;
  }
  pFVar4 = (param_1->Remaining).Remaining.First.Objects.AllocatorInstance.Data;
  iVar2 = (param_1->Remaining).Remaining.First.Objects.ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->Remaining).Remaining.First.Objects.ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    if (*(TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
          **)pFVar4 !=
        (TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
         *)0x0) {
      TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
      ::Reset(*(TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                **)pFVar4);
    }
    pFVar4 = pFVar4 + 8;
  }
  return;
}

// Reset @ 143d68a80

void __cdecl
Chaos::
TSpatialAccelerationCollectionHelper<0,1,Chaos::TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>,Chaos::FAccelerationStructureHandle,double,3>
::Reset(TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
        *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (param_1->First).Objects.AllocatorInstance.Data;
  iVar2 = (param_1->First).Objects.ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->First).Objects.ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
          **)pFVar3 !=
        (TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
         *)0x0) {
      TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
      ::Reset(*(TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                **)pFVar3);
    }
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// Reset @ 143d68af0

void __cdecl
Chaos::
TSpatialAccelerationCollectionHelper<0,1,Chaos::TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>,Chaos::FAccelerationStructureHandle,double,3>
::Reset(TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
        *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (param_1->First).Objects.AllocatorInstance.Data;
  iVar2 = (param_1->First).Objects.ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->First).Objects.ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
          **)pFVar3 !=
        (TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
         *)0x0) {
      TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
      ::Reset(*(TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                **)pFVar3);
    }
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// Reset @ 143d68b60

void __cdecl
Chaos::
TSpatialAccelerationCollectionHelper<0,1,Chaos::TSpatialTypeTuple<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>,Chaos::FAccelerationStructureHandle,double,3>
::Reset(TSpatialTypeTuple<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_>
        *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (param_1->First).Objects.AllocatorInstance.Data;
  iVar2 = (param_1->First).Objects.ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->First).Objects.ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    lVar3 = *(longlong *)pFVar4;
    if (lVar3 != 0) {
      *(undefined4 *)(lVar3 + 0x18) = 0;
      if (*(int *)(lVar3 + 0x1c) < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x68,8,0,(ForAnyElementType *)(lVar3 + 0x10),0,(int *)(lVar3 + 0x1c));
      }
      *(undefined8 *)(lVar3 + 0x20) = 0;
      *(undefined8 *)(lVar3 + 0x28) = 0;
      *(undefined8 *)(lVar3 + 0x30) = 0;
      *(undefined8 *)(lVar3 + 0x38) = 0;
      *(undefined8 *)(lVar3 + 0x40) = 0;
      *(undefined8 *)(lVar3 + 0x48) = 0;
      *(undefined8 *)(lVar3 + 0x50) = 0;
      *(undefined4 *)(lVar3 + 0x58) = 0;
      *(undefined8 *)(lVar3 + 0x60) = 0;
      *(undefined8 *)(lVar3 + 0x68) = 0;
      *(undefined8 *)(lVar3 + 0x70) = 0;
      *(undefined8 *)(lVar3 + 0x78) = 0;
      *(undefined4 *)(lVar3 + 0x80) = 0;
      if (*(int *)(lVar3 + 0x94) < 0) {
        DestructItems<TArray<Chaos::TBVCellElement<Chaos::FAccelerationStructureHandle,double,3>,TSizedDefaultAllocator<32>_>,int>
                  (*(TArray<Chaos::TBVCellElement<Chaos::FAccelerationStructureHandle,double,3>,TSizedDefaultAllocator<32>_>
                     **)(lVar3 + 0x88),*(int *)(lVar3 + 0x90));
        *(undefined4 *)(lVar3 + 0x90) = 0;
        if (*(int *)(lVar3 + 0x94) != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,(ForAnyElementType *)(lVar3 + 0x88),0,(int *)(lVar3 + 0x94));
        }
      }
      else {
        DestructItems<TArray<Chaos::TBVCellElement<Chaos::FAccelerationStructureHandle,double,3>,TSizedDefaultAllocator<32>_>,int>
                  (*(TArray<Chaos::TBVCellElement<Chaos::FAccelerationStructureHandle,double,3>,TSizedDefaultAllocator<32>_>
                     **)(lVar3 + 0x88),*(int *)(lVar3 + 0x90));
        *(undefined4 *)(lVar3 + 0x90) = 0;
      }
      *(undefined4 *)(lVar3 + 0xa0) = 0;
      if (*(int *)(lVar3 + 0xa4) < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x80,8,0,(ForAnyElementType *)(lVar3 + 0x98),0,(int *)(lVar3 + 0xa4));
      }
      *(undefined4 *)(lVar3 + 0xb0) = 0;
      if (*(int *)(lVar3 + 0xb4) < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x24,4,0,(ForAnyElementType *)(lVar3 + 0xa8),0,(int *)(lVar3 + 0xb4));
      }
      *(undefined1 *)(lVar3 + 0xc0) = 1;
    }
    pFVar4 = pFVar4 + 8;
  }
  return;
}

// Reset @ 143d68d20

void __cdecl
Chaos::
TSpatialAccelerationCollectionHelper<0,3,Chaos::TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>,Chaos::FAccelerationStructureHandle,double,3>
::Reset(TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>
        *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (param_1->First).Objects.AllocatorInstance.Data;
  iVar2 = (param_1->First).Objects.ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->First).Objects.ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_*_const,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
          **)pFVar3 !=
        (TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
         *)0x0) {
      TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
      ::Reset(*(TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>
                **)pFVar3);
    }
    pFVar3 = pFVar3 + 8;
  }
  TSpatialAccelerationCollectionHelper<1,3,Chaos::TSpatialTypeTuple<Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TAABBTreeLeafArray<Chaos::FAccelerationStructureHandle,1,double>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,Chaos::TAABBTree<Chaos::FAccelerationStructureHandle,Chaos::TBoundingVolume<Chaos::FAccelerationStructureHandle,double,3>,1,double,Chaos::TDefaultAABBTreeStorageTraits<Chaos::FAccelerationStructureHandle>_>_>,Chaos::FAccelerationStructureHandle,double,3>
  ::Reset(param_1);
  return;
}

