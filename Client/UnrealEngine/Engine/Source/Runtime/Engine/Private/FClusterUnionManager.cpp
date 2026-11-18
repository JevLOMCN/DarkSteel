// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// CreateTransformGeometryForClusterUnion<0> @ 148237ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TImplicitObjectTransformed<double,3,1> * __cdecl
Chaos::FClusterUnionManager::CreateTransformGeometryForClusterUnion<0>
          (TPBDRigidParticle<double,3> *param_1,TTransform<double> *param_2)

{
  longlong *plVar1;
  FImplicitObject *pFVar2;
  FImplicitObject *pFVar3;
  longlong lVar4;
  TImplicitObjectTransformed<double,3,1> *this;
  TImplicitObjectTransformed<double,3,1> *pTVar5;
  TImplicitObjectTransformed<double,3,1> *pTVar6;
  undefined1 auStack_a8 [32];
  TRefCountPtr<Chaos::FImplicitObject> local_88 [2];
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  double local_28;
  double dStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pTVar6 = (TImplicitObjectTransformed<double,3,1> *)0x0;
  local_88[0].Reference = local_88[0].Reference & 0xffffffff00000000;
  this = ::operator_new(0xc0);
  pTVar5 = pTVar6;
  if (this != (TImplicitObjectTransformed<double,3,1> *)0x0) {
    local_78 = (param_2->Rotation).XY.m128d_f64[0];
    dStack_70 = (param_2->Rotation).XY.m128d_f64[1];
    local_68 = (param_2->Rotation).ZW.m128d_f64[0];
    dStack_60 = (param_2->Rotation).ZW.m128d_f64[1];
    local_88[0].Reference = *(FImplicitObject **)&param_1->field_0x50;
    local_58 = (param_2->Translation).XY.m128d_f64[0];
    dStack_50 = (param_2->Translation).XY.m128d_f64[1];
    local_48 = (param_2->Translation).ZW.m128d_f64[0];
    dStack_40 = (param_2->Translation).ZW.m128d_f64[1];
    local_38 = (param_2->Scale3D).XY.m128d_f64[0];
    dStack_30 = (param_2->Scale3D).XY.m128d_f64[1];
    local_28 = (param_2->Scale3D).ZW.m128d_f64[0];
    dStack_20 = (param_2->Scale3D).ZW.m128d_f64[1];
    if (local_88[0].Reference != (FImplicitObject *)0x0) {
      LOCK();
      *(int *)&(local_88[0].Reference)->_padding_ = (int)(local_88[0].Reference)->_padding_ + 1;
      UNLOCK();
    }
    pTVar5 = TImplicitObjectTransformed<double,3,1>::TImplicitObjectTransformed<double,3,1>
                       (this,local_88,(TRigidTransform<double,3> *)&local_78);
    pTVar6 = (TImplicitObjectTransformed<double,3,1> *)&DAT_00000001;
  }
  if ((pTVar6 != (TImplicitObjectTransformed<double,3,1> *)0x0) &&
     (local_88[0].Reference != (FImplicitObject *)0x0)) {
    LOCK();
    plVar1 = &(local_88[0].Reference)->_padding_;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (*(int *)((longlong)&(local_88[0].Reference)->_padding_ + 4) == 0)) {
      (**(code **)(local_88[0].Reference)->_padding_)(local_88[0].Reference,1);
    }
  }
  pFVar2 = *(FImplicitObject **)&param_1->field_0x50;
  if (pFVar2 != (FImplicitObject *)0x0) {
    LOCK();
    *(int *)&pFVar2->_padding_ = (int)pFVar2->_padding_ + 1;
    UNLOCK();
  }
  pFVar3 = (pTVar5->MObject).Reference;
  if (pFVar3 != pFVar2) {
    (pTVar5->MObject).Reference = pFVar2;
    if (pFVar2 != (FImplicitObject *)0x0) {
      LOCK();
      *(int *)&pFVar2->_padding_ = (int)pFVar2->_padding_ + 1;
      UNLOCK();
    }
    if (pFVar3 != (FImplicitObject *)0x0) {
      LOCK();
      plVar1 = &pFVar3->_padding_;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar4 == 1) && (*(int *)((longlong)&pFVar3->_padding_ + 4) == 0)) {
        (**(code **)pFVar3->_padding_)(pFVar3,1);
      }
    }
  }
  if (pFVar2 != (FImplicitObject *)0x0) {
    LOCK();
    plVar1 = &pFVar2->_padding_;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (*(int *)((longlong)&pFVar2->_padding_ + 4) == 0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  return pTVar5;
}

