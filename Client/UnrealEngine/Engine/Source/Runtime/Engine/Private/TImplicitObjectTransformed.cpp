// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 28

// TImplicitObjectTransformed<double,3,0> @ 14824d8c0

TImplicitObjectTransformed<double,3,0> * __thiscall
Chaos::TImplicitObjectTransformed<double,3,0>::TImplicitObjectTransformed<double,3,0>
          (TImplicitObjectTransformed<double,3,0> *this,
          TRefCountPtr<Chaos::FImplicitObject> *param_1,TRigidTransform<double,3> *param_2)

{
  FImplicitObject *pFVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  TAABB<double,3> *pTVar6;
  undefined1 local_68 [48];
  TAABB<double,3> local_38;
  
  FImplicitObject::FImplicitObject((FImplicitObject *)this,2,'\x04');
  this->_padding_ = (longlong)&___7__TImplicitObjectTransformed_N_02_0A__Chaos__6B_;
  (this->MObject).Reference = (FImplicitObject *)0x0;
  (this->MObject).Reference = param_1->Reference;
  param_1->Reference = (FImplicitObject *)0x0;
  uVar5 = *(undefined8 *)&param_2->field_0x8;
  *(undefined8 *)&this->MTransform = *(undefined8 *)param_2;
  *(undefined8 *)&(this->MTransform).field_0x8 = uVar5;
  uVar5 = *(undefined8 *)&param_2->field_0x18;
  *(undefined8 *)&(this->MTransform).field_0x10 = *(undefined8 *)&param_2->field_0x10;
  *(undefined8 *)&(this->MTransform).field_0x18 = uVar5;
  uVar5 = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&(this->MTransform).field_0x20 = *(undefined8 *)&param_2->field_0x20;
  *(undefined8 *)&(this->MTransform).field_0x28 = uVar5;
  uVar5 = *(undefined8 *)&param_2->field_0x38;
  *(undefined8 *)&(this->MTransform).field_0x30 = *(undefined8 *)&param_2->field_0x30;
  *(undefined8 *)&(this->MTransform).field_0x38 = uVar5;
  uVar2 = *(undefined4 *)&param_2->field_0x44;
  uVar3 = *(undefined4 *)&param_2->field_0x48;
  uVar4 = *(undefined4 *)&param_2->field_0x4c;
  *(undefined4 *)&(this->MTransform).field_0x40 = *(undefined4 *)&param_2->field_0x40;
  *(undefined4 *)&(this->MTransform).field_0x44 = uVar2;
  *(undefined4 *)&(this->MTransform).field_0x48 = uVar3;
  *(undefined4 *)&(this->MTransform).field_0x4c = uVar4;
  uVar2 = *(undefined4 *)&param_2->field_0x54;
  uVar3 = *(undefined4 *)&param_2->field_0x58;
  uVar4 = *(undefined4 *)&param_2->field_0x5c;
  *(undefined4 *)&(this->MTransform).field_0x50 = *(undefined4 *)&param_2->field_0x50;
  *(undefined4 *)&(this->MTransform).field_0x54 = uVar2;
  *(undefined4 *)&(this->MTransform).field_0x58 = uVar3;
  *(undefined4 *)&(this->MTransform).field_0x5c = uVar4;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin = 0x7fefffffffffffff;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x8 = 0x7fefffffffffffff;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x10 = 0x7fefffffffffffff;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax = 0xffefffffffffffff;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x8 = 0xffefffffffffffff;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x10 = 0xffefffffffffffff;
  pFVar1 = (this->MObject).Reference;
  pTVar6 = (TAABB<double,3> *)(**(code **)(pFVar1->_padding_ + 0x90))(pFVar1,local_68);
  pTVar6 = TAABB<double,3>::TransformedAABB(pTVar6,&local_38,param_2);
  uVar5 = *(undefined8 *)&(pTVar6->MMin).field_0x8;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin = *(undefined8 *)&pTVar6->MMin;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x8 = uVar5;
  *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x10 =
       *(undefined8 *)&(pTVar6->MMin).field_0x10;
  uVar5 = *(undefined8 *)&(pTVar6->MMax).field_0x8;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax = *(undefined8 *)&pTVar6->MMax;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x8 = uVar5;
  *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x10 =
       *(undefined8 *)&(pTVar6->MMax).field_0x10;
  pFVar1 = (this->MObject).Reference;
  *(bool *)((longlong)&this->_padding_ + 4) = pFVar1->bIsConvex;
  *(bool *)((longlong)&this->_padding_ + 5) = pFVar1->bDoCollide;
  return this;
}

// AccumulateAllImplicitObjects @ 148260330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::TImplicitObjectTransformed<double,3,0>::AccumulateAllImplicitObjects
          (TImplicitObjectTransformed<double,3,0> *this,
          TArray<Chaos::Pair<Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_>,TSizedDefaultAllocator<32>_>
          *param_1,TRigidTransform<double,3> *param_2)

{
  FImplicitObject *pFVar1;
  undefined1 auStack_f8 [32];
  TTransform<double> local_d8;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_d8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_d8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_d8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_d8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_d8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_d8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_d8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_d8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_d8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_d8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_d8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_d8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&local_d8,(TTransform<double> *)&this->MTransform,(TTransform<double> *)param_2);
  pFVar1 = (this->MObject).Reference;
  local_78 = local_d8.Rotation.XY.m128d_f64[0];
  dStack_70 = local_d8.Rotation.XY.m128d_f64[1];
  local_68 = local_d8.Rotation.ZW.m128d_f64[0];
  dStack_60 = local_d8.Rotation.ZW.m128d_f64[1];
  local_58 = local_d8.Translation.XY.m128d_f64[0];
  dStack_50 = local_d8.Translation.XY.m128d_f64[1];
  local_48 = local_d8.Translation.ZW.m128d_f64[0];
  dStack_40 = local_d8.Translation.ZW.m128d_f64[1];
  local_38 = local_d8.Scale3D.XY.m128d_f64[0]._0_4_;
  uStack_34 = local_d8.Scale3D.XY.m128d_f64[0]._4_4_;
  uStack_30 = local_d8.Scale3D.XY.m128d_f64[1]._0_4_;
  uStack_2c = local_d8.Scale3D.XY.m128d_f64[1]._4_4_;
  local_28 = local_d8.Scale3D.ZW.m128d_f64[0]._0_4_;
  uStack_24 = local_d8.Scale3D.ZW.m128d_f64[0]._4_4_;
  uStack_20 = local_d8.Scale3D.ZW.m128d_f64[1]._0_4_;
  uStack_1c = local_d8.Scale3D.ZW.m128d_f64[1]._4_4_;
  (**(code **)(pFVar1->_padding_ + 0xe0))(pFVar1,param_1,&local_78);
  return;
}

// BoundingBox @ 148268320

TAABB<double,3> * __thiscall
Chaos::TImplicitObjectTransformed<double,3,0>::BoundingBox
          (TImplicitObjectTransformed<double,3,0> *this,TAABB<double,3> *__return_storage_ptr__)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x8;
  uVar1 = *(undefined8 *)&(this->MLocalBoundingBox).MMin.field_0x10;
  *(undefined8 *)&__return_storage_ptr__->MMin = *(undefined8 *)&(this->MLocalBoundingBox).MMin;
  *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x8 = uVar2;
  uVar2 = *(undefined8 *)&(this->MLocalBoundingBox).MMax;
  uVar3 = *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x8;
  *(undefined8 *)&(__return_storage_ptr__->MMin).field_0x10 = uVar1;
  uVar1 = *(undefined8 *)&(this->MLocalBoundingBox).MMax.field_0x10;
  *(undefined8 *)&__return_storage_ptr__->MMax = uVar2;
  *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x8 = uVar3;
  *(undefined8 *)&(__return_storage_ptr__->MMax).field_0x10 = uVar1;
  return __return_storage_ptr__;
}

// CalculateTransformedBounds @ 14826b080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TAABB<double,3> * __thiscall
Chaos::TImplicitObjectTransformed<double,3,0>::CalculateTransformedBounds
          (TImplicitObjectTransformed<double,3,0> *this,TAABB<double,3> *__return_storage_ptr__,
          TRigidTransform<double,3> *param_1)

{
  FImplicitObject *pFVar1;
  code *pcVar2;
  TRigidTransform<double,3> *pTVar3;
  undefined1 auStack_a8 [32];
  TRigidTransform<double,3> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pFVar1 = (this->MObject).Reference;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x98);
  pTVar3 = TRigidTransform<double,3>::MultiplyNoScale(&local_88,&this->MTransform,param_1);
  (*pcVar2)(pFVar1,__return_storage_ptr__,pTVar3);
  return __return_storage_ptr__;
}

// CopyGeometry @ 148271350

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::TImplicitObjectTransformed<double,3,0>::CopyGeometry
          (TImplicitObjectTransformed<double,3,0> *this)

{
  FImplicitObject *in_RDX;
  
  in_RDX->_padding_ = (longlong)this;
  if (this != (TImplicitObjectTransformed<double,3,0> *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  return (TRefCountPtr<Chaos::FImplicitObject>)in_RDX;
}

// CopyGeometryWithScale @ 148271370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::TImplicitObjectTransformed<double,3,0>::CopyGeometryWithScale
          (TImplicitObjectTransformed<double,3,0> *this,TVector<double,3> *param_1)

{
  longlong *plVar1;
  FImplicitObject *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  bool bVar7;
  TImplicitObjectTransformed<double,3,1> *pTVar8;
  TRefCountPtr<Chaos::FImplicitObject> TVar9;
  double *in_R8;
  undefined1 auStack_a8 [32];
  TRefCountPtr<Chaos::FImplicitObject> local_88 [2];
  undefined1 local_78 [48];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pFVar2 = (this->MObject).Reference;
  if (pFVar2 == (FImplicitObject *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectTransformed.h"
                       ,0x75,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      TVar9.Reference = (FImplicitObject *)(*pcVar3)();
      return (TRefCountPtr<Chaos::FImplicitObject>)TVar9.Reference;
    }
    *(undefined8 *)param_1 = 0;
  }
  else {
    local_78._0_8_ = *(undefined8 *)&this->MTransform;
    local_78._8_8_ = *(undefined8 *)&(this->MTransform).field_0x8;
    local_78._16_8_ = *(undefined8 *)&(this->MTransform).field_0x10;
    local_78._24_8_ = *(undefined8 *)&(this->MTransform).field_0x18;
    local_38 = *(undefined8 *)&(this->MTransform).field_0x40;
    uStack_30 = *(undefined8 *)&(this->MTransform).field_0x48;
    local_28 = *(undefined4 *)&(this->MTransform).field_0x50;
    uStack_24 = *(undefined4 *)&(this->MTransform).field_0x54;
    uStack_20 = *(undefined4 *)&(this->MTransform).field_0x58;
    uStack_1c = *(undefined4 *)&(this->MTransform).field_0x5c;
    dVar4 = *(double *)&(this->MTransform).field_0x28 * in_R8[1];
    dVar5 = *(double *)&(this->MTransform).field_0x38 * 0.0;
    local_78._40_4_ = SUB84(dVar4,0);
    local_78._32_8_ = *(double *)&(this->MTransform).field_0x20 * *in_R8;
    local_78._44_4_ = (int)((ulonglong)dVar4 >> 0x20);
    local_48._8_4_ = SUB84(dVar5,0);
    local_48._0_8_ = *(double *)&(this->MTransform).field_0x30 * in_R8[2];
    local_48._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    (**(code **)(pFVar2->_padding_ + 0x40))(pFVar2,local_88);
    pTVar8 = ::operator_new(0xc0);
    if (pTVar8 == (TImplicitObjectTransformed<double,3,1> *)0x0) {
      *(undefined8 *)param_1 = 0;
    }
    else {
      pTVar8 = TImplicitObjectTransformed<double,3,1>::TImplicitObjectTransformed<double,3,1>
                         (pTVar8,local_88,(TRigidTransform<double,3> *)local_78);
      *(TImplicitObjectTransformed<double,3,1> **)param_1 = pTVar8;
      if (pTVar8 != (TImplicitObjectTransformed<double,3,1> *)0x0) {
        LOCK();
        *(int *)&pTVar8->_padding_ = (int)pTVar8->_padding_ + 1;
        UNLOCK();
      }
    }
    if (local_88[0].Reference != (FImplicitObject *)0x0) {
      LOCK();
      plVar1 = &(local_88[0].Reference)->_padding_;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar6 == 1) && (*(int *)((longlong)&(local_88[0].Reference)->_padding_ + 4) == 0)) {
        (**(code **)(local_88[0].Reference)->_padding_)(local_88[0].Reference,1);
      }
    }
  }
  return (TRefCountPtr<Chaos::FImplicitObject>)(FImplicitObject *)param_1;
}

// CountLeafObjectsInHierarchyImpl @ 148271740

int __thiscall
Chaos::TImplicitObjectTransformed<double,3,0>::CountLeafObjectsInHierarchyImpl
          (TImplicitObjectTransformed<double,3,0> *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000148271747. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(((this->MObject).Reference)->_padding_ + 0x130))();
  return iVar1;
}

// CountObjectsInHierarchyImpl @ 148271760

int __thiscall
Chaos::TImplicitObjectTransformed<double,3,0>::CountObjectsInHierarchyImpl
          (TImplicitObjectTransformed<double,3,0> *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(((this->MObject).Reference)->_padding_ + 0x128))();
  return iVar1 + 1;
}

// DeepCopyGeometry @ 1482790d0

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::TImplicitObjectTransformed<double,3,0>::DeepCopyGeometry
          (TImplicitObjectTransformed<double,3,0> *this)

{
  longlong *plVar1;
  FImplicitObject *pFVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  TImplicitObjectTransformed<double,3,1> *pTVar6;
  TRefCountPtr<Chaos::FImplicitObject> TVar7;
  FImplicitObject *in_RDX;
  TRefCountPtr<Chaos::FImplicitObject> local_res18 [2];
  
  pFVar2 = (this->MObject).Reference;
  if (pFVar2 == (FImplicitObject *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectTransformed.h"
                       ,0x84,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      TVar7.Reference = (FImplicitObject *)(*pcVar3)();
      return (TRefCountPtr<Chaos::FImplicitObject>)TVar7.Reference;
    }
    in_RDX->_padding_ = 0;
  }
  else {
    (**(code **)(pFVar2->_padding_ + 0x48))(pFVar2,local_res18);
    pTVar6 = ::operator_new(0xc0);
    if (pTVar6 == (TImplicitObjectTransformed<double,3,1> *)0x0) {
      in_RDX->_padding_ = 0;
    }
    else {
      pTVar6 = TImplicitObjectTransformed<double,3,1>::TImplicitObjectTransformed<double,3,1>
                         (pTVar6,local_res18,&this->MTransform);
      in_RDX->_padding_ = (longlong)pTVar6;
      if (pTVar6 != (TImplicitObjectTransformed<double,3,1> *)0x0) {
        LOCK();
        *(int *)&pTVar6->_padding_ = (int)pTVar6->_padding_ + 1;
        UNLOCK();
      }
    }
    if (local_res18[0].Reference != (FImplicitObject *)0x0) {
      LOCK();
      plVar1 = &(local_res18[0].Reference)->_padding_;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar4 == 1) && (*(int *)((longlong)&(local_res18[0].Reference)->_padding_ + 4) == 0)
         ) {
        (**(code **)(local_res18[0].Reference)->_padding_)(local_res18[0].Reference,1);
        return (TRefCountPtr<Chaos::FImplicitObject>)in_RDX;
      }
    }
  }
  return (TRefCountPtr<Chaos::FImplicitObject>)in_RDX;
}

// DeepCopyGeometryWithScale @ 1482791a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TRefCountPtr<Chaos::FImplicitObject> __thiscall
Chaos::TImplicitObjectTransformed<double,3,0>::DeepCopyGeometryWithScale
          (TImplicitObjectTransformed<double,3,0> *this,TVector<double,3> *param_1)

{
  longlong *plVar1;
  FImplicitObject *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  bool bVar7;
  TImplicitObjectTransformed<double,3,1> *pTVar8;
  TRefCountPtr<Chaos::FImplicitObject> TVar9;
  double *in_R8;
  undefined1 auStack_a8 [32];
  TRefCountPtr<Chaos::FImplicitObject> local_88 [2];
  undefined1 local_78 [48];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pFVar2 = (this->MObject).Reference;
  if (pFVar2 == (FImplicitObject *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectTransformed.h"
                       ,0x98,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      TVar9.Reference = (FImplicitObject *)(*pcVar3)();
      return (TRefCountPtr<Chaos::FImplicitObject>)TVar9.Reference;
    }
    *(undefined8 *)param_1 = 0;
  }
  else {
    local_78._0_8_ = *(undefined8 *)&this->MTransform;
    local_78._8_8_ = *(undefined8 *)&(this->MTransform).field_0x8;
    local_78._16_8_ = *(undefined8 *)&(this->MTransform).field_0x10;
    local_78._24_8_ = *(undefined8 *)&(this->MTransform).field_0x18;
    local_38 = *(undefined8 *)&(this->MTransform).field_0x40;
    uStack_30 = *(undefined8 *)&(this->MTransform).field_0x48;
    local_28 = *(undefined4 *)&(this->MTransform).field_0x50;
    uStack_24 = *(undefined4 *)&(this->MTransform).field_0x54;
    uStack_20 = *(undefined4 *)&(this->MTransform).field_0x58;
    uStack_1c = *(undefined4 *)&(this->MTransform).field_0x5c;
    dVar4 = *(double *)&(this->MTransform).field_0x28 * in_R8[1];
    dVar5 = *(double *)&(this->MTransform).field_0x38 * 0.0;
    local_78._40_4_ = SUB84(dVar4,0);
    local_78._32_8_ = *(double *)&(this->MTransform).field_0x20 * *in_R8;
    local_78._44_4_ = (int)((ulonglong)dVar4 >> 0x20);
    local_48._8_4_ = SUB84(dVar5,0);
    local_48._0_8_ = *(double *)&(this->MTransform).field_0x30 * in_R8[2];
    local_48._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    (**(code **)(pFVar2->_padding_ + 0x50))(pFVar2,local_88);
    pTVar8 = ::operator_new(0xc0);
    if (pTVar8 == (TImplicitObjectTransformed<double,3,1> *)0x0) {
      *(undefined8 *)param_1 = 0;
    }
    else {
      pTVar8 = TImplicitObjectTransformed<double,3,1>::TImplicitObjectTransformed<double,3,1>
                         (pTVar8,local_88,(TRigidTransform<double,3> *)local_78);
      *(TImplicitObjectTransformed<double,3,1> **)param_1 = pTVar8;
      if (pTVar8 != (TImplicitObjectTransformed<double,3,1> *)0x0) {
        LOCK();
        *(int *)&pTVar8->_padding_ = (int)pTVar8->_padding_ + 1;
        UNLOCK();
      }
    }
    if (local_88[0].Reference != (FImplicitObject *)0x0) {
      LOCK();
      plVar1 = &(local_88[0].Reference)->_padding_;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar6 == 1) && (*(int *)((longlong)&(local_88[0].Reference)->_padding_ + 4) == 0)) {
        (**(code **)(local_88[0].Reference)->_padding_)(local_88[0].Reference,1);
      }
    }
  }
  return (TRefCountPtr<Chaos::FImplicitObject>)(FImplicitObject *)param_1;
}

// FindAllIntersectingObjects @ 14827f9a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::TImplicitObjectTransformed<double,3,0>::FindAllIntersectingObjects
          (TImplicitObjectTransformed<double,3,0> *this,
          TArray<Chaos::Pair<Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_>,TSizedDefaultAllocator<32>_>
          *param_1,TAABB<double,3> *param_2)

{
  FImplicitObject *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  undefined1 auVar24 [16];
  undefined1 auStack_228 [32];
  longlong local_208;
  longlong local_200;
  TTransform<double> local_1f8;
  TAABB<double,3> local_198;
  TTransform<double> local_168;
  undefined1 local_108 [96];
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_228;
  auVar24._0_8_ =
       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                        *(uint *)&(this->MTransform).field_0x44,
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                        *(uint *)&(this->MTransform).field_0x40);
  auVar24._8_4_ = _UNK_15061cc88 & *(uint *)&(this->MTransform).field_0x48;
  auVar24._12_4_ = _UNK_15061cc8c & *(uint *)&(this->MTransform).field_0x4c;
  lVar23 = -(ulonglong)
            ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
            (double)CONCAT44(_UNK_15061cc8c & *(uint *)&(this->MTransform).field_0x5c,
                             _UNK_15061cc88 & *(uint *)&(this->MTransform).field_0x58));
  auVar5._8_4_ = (int)lVar23;
  auVar5._0_8_ = -(ulonglong)
                  ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                  (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                   *(uint *)&(this->MTransform).field_0x54,
                                   (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                   *(uint *)&(this->MTransform).field_0x50));
  auVar5._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
  uVar21 = movmskpd((int)this,auVar5);
  lVar23 = -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar24._8_8_);
  auVar4._8_4_ = (int)lVar23;
  auVar4._0_8_ = -(ulonglong)
                  ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar24._0_8_);
  auVar4._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
  iVar19 = movmskpd((int)local_a8,auVar4);
  if ((uVar21 & 0x3fffffff) == 0 && iVar19 == 0) {
    local_108._0_4_ = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
    local_108._4_4_ = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
    local_108._8_4_ = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
    local_108._12_4_ = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
    local_108._16_4_ = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
    local_108._20_4_ = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
    local_108._24_4_ = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
    local_108._28_4_ = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
    local_108._32_4_ = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._0_4_;
    local_108._36_4_ = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0]._4_4_;
    local_108._40_4_ = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._0_4_;
    local_108._44_4_ = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1]._4_4_;
    local_108._48_4_ = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._0_4_;
    local_108._52_4_ = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0]._4_4_;
    local_108._56_4_ = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._0_4_;
    local_108._60_4_ = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1]._4_4_;
    local_108._80_4_ = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._0_4_;
    local_108._84_4_ = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0]._4_4_;
    local_108._88_4_ = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._0_4_;
    local_108._92_4_ = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1]._4_4_;
    local_1f8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_1f8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_1f8.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_1f8.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_1f8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_1f8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  }
  else {
    UE::Math::TTransform<double>::InverseFast((TTransform<double> *)&this->MTransform,&local_1f8);
    local_108._0_4_ = local_1f8.Rotation.XY.m128d_f64[0]._0_4_;
    local_108._4_4_ = local_1f8.Rotation.XY.m128d_f64[0]._4_4_;
    local_108._8_4_ = local_1f8.Rotation.XY.m128d_f64[1]._0_4_;
    local_108._12_4_ = local_1f8.Rotation.XY.m128d_f64[1]._4_4_;
    local_108._16_4_ = local_1f8.Rotation.ZW.m128d_f64[0]._0_4_;
    local_108._20_4_ = local_1f8.Rotation.ZW.m128d_f64[0]._4_4_;
    local_108._24_4_ = local_1f8.Rotation.ZW.m128d_f64[1]._0_4_;
    local_108._28_4_ = local_1f8.Rotation.ZW.m128d_f64[1]._4_4_;
    local_108._32_4_ = local_1f8.Translation.XY.m128d_f64[0]._0_4_;
    local_108._36_4_ = local_1f8.Translation.XY.m128d_f64[0]._4_4_;
    local_108._40_4_ = local_1f8.Translation.XY.m128d_f64[1]._0_4_;
    local_108._44_4_ = local_1f8.Translation.XY.m128d_f64[1]._4_4_;
    local_108._48_4_ = local_1f8.Translation.ZW.m128d_f64[0]._0_4_;
    local_108._52_4_ = local_1f8.Translation.ZW.m128d_f64[0]._4_4_;
    local_108._56_4_ = local_1f8.Translation.ZW.m128d_f64[1]._0_4_;
    local_108._60_4_ = local_1f8.Translation.ZW.m128d_f64[1]._4_4_;
    local_108._80_4_ = local_1f8.Scale3D.ZW.m128d_f64[0]._0_4_;
    local_108._84_4_ = local_1f8.Scale3D.ZW.m128d_f64[0]._4_4_;
    local_108._88_4_ = local_1f8.Scale3D.ZW.m128d_f64[1]._0_4_;
    local_108._92_4_ = local_1f8.Scale3D.ZW.m128d_f64[1]._4_4_;
  }
  local_108._64_16_ = (undefined1  [16])local_1f8.Scale3D.XY.m128d_f64;
  TAABB<double,3>::TransformedAABB(param_2,&local_198,(TRigidTransform<double,3> *)local_108);
  pFVar1 = (this->MObject).Reference;
  uVar21 = param_1->ArrayNum;
  lVar23 = (longlong)(int)uVar21;
  (**(code **)(pFVar1->_padding_ + 0xf0))(pFVar1,param_1,&local_198);
  if ((int)uVar21 < param_1->ArrayNum) {
    if ((int)uVar21 < 0) {
      local_208 = lVar23;
      local_200 = (longlong)param_1->ArrayNum;
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar18) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_168.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_168.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_168.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_168.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_168.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_168.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_168.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_168.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_168.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_168.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_168.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_168.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    lVar22 = lVar23 * 0x70;
    local_168.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_168.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_168.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    local_168.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_168.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_168.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    UE::Math::TTransform<double>::Multiply
              (&local_168,(TTransform<double> *)((param_1->AllocatorInstance).Data + lVar22 + 0x10),
               (TTransform<double> *)&this->MTransform);
    local_200 = (longlong)param_1->ArrayNum;
    dVar6 = local_168.Rotation.XY.m128d_f64[0];
    dVar7 = local_168.Rotation.XY.m128d_f64[1];
    dVar8 = local_168.Rotation.ZW.m128d_f64[0];
    dVar9 = local_168.Rotation.ZW.m128d_f64[1];
    dVar10 = local_168.Translation.XY.m128d_f64[0];
    dVar11 = local_168.Translation.XY.m128d_f64[1];
    uVar20 = 0;
    if ((int)uVar21 < param_1->ArrayNum) {
      uVar20 = ~uVar21 >> 0x1f;
    }
    dVar12 = local_168.Translation.ZW.m128d_f64[0];
    dVar13 = local_168.Translation.ZW.m128d_f64[1];
    dVar14 = local_168.Scale3D.XY.m128d_f64[0];
    dVar15 = local_168.Scale3D.XY.m128d_f64[1];
    dVar16 = local_168.Scale3D.ZW.m128d_f64[0];
    dVar17 = local_168.Scale3D.ZW.m128d_f64[1];
    if (uVar20 == 0) {
      local_208 = lVar23;
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar18) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (param_1->AllocatorInstance).Data;
    *(double *)(pFVar2 + lVar22 + 0x10) = dVar6;
    *(double *)(pFVar2 + lVar22 + 0x10 + 8) = dVar7;
    *(double *)(pFVar2 + lVar22 + 0x20) = dVar8;
    *(double *)(pFVar2 + lVar22 + 0x20 + 8) = dVar9;
    *(double *)(pFVar2 + lVar22 + 0x30) = dVar10;
    *(double *)(pFVar2 + lVar22 + 0x30 + 8) = dVar11;
    *(double *)(pFVar2 + lVar22 + 0x40) = dVar12;
    *(double *)(pFVar2 + lVar22 + 0x40 + 8) = dVar13;
    *(double *)(pFVar2 + lVar22 + 0x50) = dVar14;
    *(double *)(pFVar2 + lVar22 + 0x50 + 8) = dVar15;
    *(double *)(pFVar2 + lVar22 + 0x60) = dVar16;
    *(double *)(pFVar2 + lVar22 + 0x60 + 8) = dVar17;
  }
  return;
}

// FindClosestFaceAndVertices @ 148280d00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
Chaos::TImplicitObjectTransformed<double,3,0>::FindClosestFaceAndVertices
          (TImplicitObjectTransformed<double,3,0> *this,TVector<double,3> *param_1,
          TArray<Chaos::TVector<double,3>,TSizedDefaultAllocator<32>_> *param_2,double param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FImplicitObject *pFVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined1 auVar10 [12];
  int iVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar30;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  double dVar36;
  undefined4 uVar37;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined8 unaff_XMM6_Qb;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined4 uVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 local_108 [8];
  double local_100;
  double dStack_f8;
  double local_f0;
  
  dVar33 = *(double *)&this->MTransform *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar36 = *(double *)&(this->MTransform).field_0x8 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar5 = *(double *)&(this->MTransform).field_0x10 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar6 = *(double *)&(this->MTransform).field_0x18 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar26._8_4_ = SUB84(dVar36,0);
  auVar26._0_8_ = dVar33;
  uVar37 = (undefined4)((ulonglong)dVar36 >> 0x20);
  auVar26._12_4_ = uVar37;
  dVar16 = *(double *)&param_1->field_0x10 - *(double *)&(this->MTransform).field_0x30;
  auVar10._4_8_ = unaff_XMM6_Qb;
  auVar10._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
  auVar38._0_8_ = auVar10._0_8_ << 0x20;
  auVar38._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar38._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  dVar30 = auVar26._8_8_;
  dVar9 = *(double *)param_1 - *(double *)&(this->MTransform).field_0x20;
  dVar45 = *(double *)&param_1->field_0x8 - *(double *)&(this->MTransform).field_0x28;
  uVar48 = (undefined4)((ulonglong)dVar45 >> 0x20);
  auVar19._8_4_ = SUB84(dVar5,0);
  auVar19._0_8_ = dVar30;
  auVar19._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  auVar52._8_4_ = SUB84(dVar45,0);
  auVar52._0_8_ = dVar9;
  auVar52._12_4_ = uVar48;
  auVar31._8_4_ = SUB84(dVar36,0);
  auVar31._0_8_ = dVar33;
  auVar31._12_4_ = uVar37;
  auVar24._8_4_ = SUB84(dVar6,0);
  auVar24._0_8_ = dVar5;
  auVar24._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  auVar32 = blendpd(auVar31,auVar24,2);
  auVar23._8_4_ = SUB84(dVar45,0);
  auVar23._0_8_ = dVar9;
  auVar23._12_4_ = uVar48;
  auVar53._0_8_ = auVar52._8_8_ * dVar33 - dVar30 * dVar9;
  auVar53._8_8_ = dVar16 * dVar36 - auVar19._8_8_ * dVar45;
  auVar51._8_8_ = 0;
  auVar51._0_8_ = dVar16;
  auVar24 = blendpd(auVar23,auVar51,2);
  auVar25._0_8_ = auVar24._0_8_ * dVar5 - dVar16 * auVar32._0_8_;
  auVar25._8_8_ = auVar24._8_8_ * dVar6 - auVar32._8_8_ * 0.0;
  dVar22 = auVar53._8_8_ + auVar53._8_8_;
  dVar8 = auVar25._0_8_ + auVar25._0_8_;
  uVar37 = SUB84(dVar8,0);
  uVar48 = (undefined4)((ulonglong)dVar8 >> 0x20);
  auVar24 = blendpd(auVar53,auVar25,2);
  auVar49._8_4_ = uVar37;
  auVar49._0_8_ = dVar22;
  auVar49._12_4_ = uVar48;
  auVar27._8_4_ = uVar37;
  auVar27._0_8_ = dVar22;
  auVar27._12_4_ = uVar48;
  auVar46._8_4_ = uVar37;
  auVar46._0_8_ = dVar22;
  auVar46._12_4_ = uVar48;
  auVar54._0_8_ = auVar24._0_8_ + auVar24._0_8_;
  auVar54._8_8_ = auVar24._8_8_ + auVar24._8_8_;
  auVar24 = blendpd(auVar46,auVar54,2);
  auVar50._0_8_ = auVar49._8_8_ * dVar33 - dVar22 * dVar30;
  auVar50._8_8_ = auVar54._0_8_ * dVar36 - auVar27._8_8_ * dVar5;
  auVar17._8_4_ = SUB84(auVar54._8_8_,0);
  auVar17._0_8_ = auVar54._0_8_;
  auVar17._12_4_ = (int)((ulonglong)auVar54._8_8_ >> 0x20);
  auVar43._0_8_ =
       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                        *(uint *)&(this->MTransform).field_0x44,
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                        *(uint *)&(this->MTransform).field_0x40);
  auVar43._8_4_ = _UNK_15061cc88 & *(uint *)&(this->MTransform).field_0x48;
  auVar43._12_4_ = _UNK_15061cc8c & *(uint *)&(this->MTransform).field_0x4c;
  auVar47._0_8_ = auVar24._0_8_ * dVar5 - auVar54._0_8_ * auVar32._0_8_;
  auVar47._8_8_ = auVar24._8_8_ * dVar6 - auVar17._8_8_ * auVar32._8_8_;
  auVar24 = *(undefined1 (*) [16])&(this->MTransform).field_0x50;
  auVar39._8_8_ = auVar38._8_8_;
  auVar39._0_8_ = auVar24._0_8_;
  lVar13 = -(ulonglong)
            ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar24._4_4_,
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar24._0_4_) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  auVar24 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                  *(undefined1 (*) [16])&(this->MTransform).field_0x40);
  lVar14 = -(ulonglong)(auVar43._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
  lVar15 = -(ulonglong)(auVar43._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
  auVar32._8_4_ = SUB84(auVar50._8_8_,0);
  auVar32._0_8_ = auVar50._0_8_;
  auVar32._12_4_ = (int)((ulonglong)auVar50._8_8_ >> 0x20);
  auVar44._0_8_ =
       (double)CONCAT44(~(uint)((ulonglong)lVar14 >> 0x20) & auVar24._4_4_,
                        ~(uint)lVar14 & auVar24._0_4_);
  auVar44._8_4_ = ~(uint)lVar15 & auVar24._8_4_;
  auVar44._12_4_ = ~(uint)((ulonglong)lVar15 >> 0x20) & auVar24._12_4_;
  pFVar3 = (this->MObject).Reference;
  auVar24 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar39);
  auVar51 = blendpd(auVar50,auVar47,2);
  local_f0 = (double)CONCAT44(~(uint)((ulonglong)lVar13 >> 0x20) & auVar24._4_4_,
                              ~(uint)lVar13 & auVar24._0_4_) *
             (auVar54._0_8_ * dVar6 + dVar16 + auVar51._0_8_);
  local_100 = auVar44._0_8_ * (dVar22 * dVar6 + dVar9 + auVar32._8_8_);
  dStack_f8 = auVar44._8_8_ * (dVar8 * dVar6 + dVar45 + auVar47._0_8_);
  iVar11 = (**(code **)(pFVar3->_padding_ + 200))(pFVar3,&local_100);
  if (iVar11 != -1) {
    pFVar12 = (param_2->AllocatorInstance).Data;
    iVar2 = param_2->ArrayNum;
    pFVar1 = pFVar12 + (longlong)iVar2 * 0x18;
    while( true ) {
      if (param_2->ArrayNum != iVar2) {
        `TCheckedPointerIterator<Chaos::TVector<double,3>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_108);
      }
      if (pFVar12 == pFVar1) break;
      auVar24 = *(undefined1 (*) [16])&(this->MTransform).field_0x10;
      dVar22 = auVar24._0_8_;
      dVar8 = *(double *)&pFVar12[0x10].field_0x0 * *(double *)&(this->MTransform).field_0x50;
      dVar5 = *(double *)&(this->MTransform).field_0x58 * 0.0;
      auVar51 = *(undefined1 (*) [16])&this->MTransform;
      dVar9 = *(double *)&(this->MTransform).field_0x18;
      dVar45 = *(double *)&(this->MTransform).field_0x40 * *(double *)&pFVar12->field_0x0;
      dVar16 = *(double *)&(this->MTransform).field_0x48 * *(double *)(pFVar12 + 8);
      auVar19 = *(undefined1 (*) [16])&this->MTransform;
      auVar27 = blendpd(auVar19,auVar24,2);
      auVar40._8_4_ = SUB84(dVar16,0);
      auVar40._0_8_ = dVar45;
      uVar37 = (undefined4)((ulonglong)dVar16 >> 0x20);
      auVar40._12_4_ = uVar37;
      auVar41._0_8_ = auVar40._8_8_ * auVar19._0_8_ - auVar19._8_8_ * dVar45;
      auVar41._8_8_ = dVar8 * auVar19._8_8_ - dVar22 * dVar16;
      auVar18._8_4_ = SUB84(dVar16,0);
      auVar18._0_8_ = dVar45;
      auVar18._12_4_ = uVar37;
      auVar7._8_4_ = SUB84(dVar5,0);
      auVar7._0_8_ = dVar8;
      auVar7._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      auVar19 = blendpd(auVar18,auVar7,2);
      auVar20._0_8_ = auVar19._0_8_ * dVar22 - auVar27._0_8_ * dVar8;
      auVar20._8_8_ = auVar19._8_8_ * auVar24._8_8_ - auVar27._8_8_ * dVar5;
      auVar19 = blendpd(auVar41,auVar20,2);
      dVar6 = auVar41._8_8_ + auVar41._8_8_;
      dVar5 = auVar20._0_8_ + auVar20._0_8_;
      uVar37 = (undefined4)((ulonglong)dVar5 >> 0x20);
      auVar42._0_8_ = auVar19._0_8_ + auVar19._0_8_;
      auVar42._8_8_ = auVar19._8_8_ + auVar19._8_8_;
      auVar34._8_4_ = SUB84(dVar5,0);
      auVar34._0_8_ = dVar6;
      auVar34._12_4_ = uVar37;
      auVar28._8_4_ = SUB84(dVar5,0);
      auVar28._0_8_ = dVar6;
      auVar28._12_4_ = uVar37;
      auVar19 = blendpd(auVar28,auVar42,2);
      auVar35._0_8_ = auVar34._8_8_ * auVar51._0_8_ - auVar51._8_8_ * dVar6;
      auVar35._8_8_ = auVar42._0_8_ * auVar51._8_8_ - dVar22 * dVar5;
      auVar21._8_4_ = SUB84(auVar35._8_8_,0);
      auVar21._0_8_ = auVar35._0_8_;
      auVar21._12_4_ = (int)((ulonglong)auVar35._8_8_ >> 0x20);
      auVar51 = blendpd(auVar51,auVar24,2);
      auVar29._0_8_ = auVar19._0_8_ * dVar22 - auVar51._0_8_ * auVar42._0_8_;
      auVar29._8_8_ = auVar19._8_8_ * auVar24._8_8_ - auVar51._8_8_ * auVar42._8_8_;
      auVar24 = blendpd(auVar35,auVar29,2);
      dVar22 = dVar5 * dVar9 + dVar16 + auVar29._0_8_ + *(double *)&(this->MTransform).field_0x28;
      dVar5 = *(double *)&(this->MTransform).field_0x30;
      auVar4._8_4_ = SUB84(dVar22,0);
      auVar4._0_8_ = dVar6 * dVar9 + dVar45 + auVar21._8_8_ +
                     *(double *)&(this->MTransform).field_0x20;
      auVar4._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
      *(undefined1 (*) [16])pFVar12 = auVar4;
      *(double *)&pFVar12[0x10].field_0x0 = auVar42._0_8_ * dVar9 + dVar8 + auVar24._0_8_ + dVar5;
      pFVar12 = pFVar12 + 0x18;
    }
  }
  return iVar11;
}

// FindClosestIntersectionImp @ 1482810c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

Pair<Chaos::TVector<double,3>,bool> * __thiscall
Chaos::TImplicitObjectTransformed<double,3,0>::FindClosestIntersectionImp
          (TImplicitObjectTransformed<double,3,0> *this,
          Pair<Chaos::TVector<double,3>,bool> *__return_storage_ptr__,TVector<double,3> *param_1,
          TVector<double,3> *param_2,double param_3)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [12];
  longlong lVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  double dVar37;
  undefined4 uVar38;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined4 uVar48;
  double dVar49;
  undefined1 auVar50 [16];
  double dVar56;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  double dVar69;
  double dVar70;
  double dVar71;
  undefined1 auVar72 [16];
  uint local_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_a8;
  double dStack_a0;
  
  dVar30 = *(double *)&this->MTransform *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar37 = *(double *)&(this->MTransform).field_0x8 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  auVar39._0_8_ =
       *(double *)&(this->MTransform).field_0x10 *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  auVar39._8_8_ =
       *(double *)&(this->MTransform).field_0x18 *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar20._8_4_ = SUB84(dVar37,0);
  auVar20._0_8_ = dVar30;
  uVar38 = (undefined4)((ulonglong)dVar37 >> 0x20);
  auVar20._12_4_ = uVar38;
  dVar4 = *(double *)&param_1->field_0x10 - *(double *)&(this->MTransform).field_0x30;
  auVar23._8_4_ = SUB84(dVar37,0);
  auVar23._0_8_ = dVar30;
  auVar23._12_4_ = uVar38;
  auVar61._8_4_ = SUB84(auVar39._8_8_,0);
  auVar61._0_8_ = auVar39._0_8_;
  auVar61._12_4_ = (int)((ulonglong)auVar39._8_8_ >> 0x20);
  auVar24 = blendpd(auVar23,auVar39,2);
  dVar5 = auVar20._8_8_;
  dVar70 = *(double *)param_1 - *(double *)&(this->MTransform).field_0x20;
  dVar71 = *(double *)&param_1->field_0x8 - *(double *)&(this->MTransform).field_0x28;
  auVar6._8_4_ = SUB84(auVar39._0_8_,0);
  auVar6._0_8_ = dVar5;
  auVar6._12_4_ = (int)((ulonglong)auVar39._0_8_ >> 0x20);
  auVar66._8_4_ = SUB84(dVar71,0);
  auVar66._0_8_ = dVar70;
  uVar38 = (undefined4)((ulonglong)dVar71 >> 0x20);
  auVar66._12_4_ = uVar38;
  auVar15._8_4_ = SUB84(dVar71,0);
  auVar15._0_8_ = dVar70;
  auVar15._12_4_ = uVar38;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = dVar4;
  auVar16 = blendpd(auVar15,auVar16,2);
  auVar67._0_8_ = auVar66._8_8_ * dVar30 - dVar5 * dVar70;
  auVar67._8_8_ = dVar4 * dVar37 - auVar6._8_8_ * dVar71;
  auVar50._8_4_ = SUB84(auVar67._8_8_,0);
  auVar50._0_8_ = auVar67._0_8_;
  auVar50._12_4_ = (int)((ulonglong)auVar67._8_8_ >> 0x20);
  auVar17._0_8_ = auVar16._0_8_ * auVar39._0_8_ - auVar24._0_8_ * dVar4;
  auVar17._8_8_ = auVar16._8_8_ * auVar39._8_8_ - auVar24._8_8_ * 0.0;
  dVar49 = auVar50._8_8_ + auVar50._8_8_;
  dVar56 = auVar17._0_8_ + auVar17._0_8_;
  auVar16 = blendpd(auVar67,auVar17,2);
  uVar38 = SUB84(dVar56,0);
  auVar57._8_4_ = uVar38;
  auVar57._0_8_ = dVar49;
  uVar48 = (undefined4)((ulonglong)dVar56 >> 0x20);
  auVar57._12_4_ = uVar48;
  auVar68._0_8_ = auVar16._0_8_ + auVar16._0_8_;
  auVar68._8_8_ = auVar16._8_8_ + auVar16._8_8_;
  auVar59._8_4_ = uVar38;
  auVar59._0_8_ = dVar49;
  auVar59._12_4_ = uVar48;
  auVar44._8_4_ = uVar38;
  auVar44._0_8_ = dVar49;
  auVar44._12_4_ = uVar48;
  auVar1._4_8_ = dVar37;
  auVar1._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
  auVar31._0_8_ = auVar1._0_8_ << 0x20;
  auVar31._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar31._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar58._0_8_ = auVar57._8_8_ * dVar30 - dVar49 * dVar5;
  auVar58._8_8_ = auVar68._0_8_ * dVar37 - auVar59._8_8_ * auVar39._0_8_;
  auVar16 = blendpd(auVar44,auVar68,2);
  local_a8 = (double)GlobalVectorConstants::SmallNumber.m128_f32[0];
  dStack_a0 = (double)GlobalVectorConstants::SmallNumber.m128_f32[1];
  auVar72._8_4_ = SUB84(auVar68._8_8_,0);
  auVar72._0_8_ = auVar68._0_8_;
  auVar72._12_4_ = (int)((ulonglong)auVar68._8_8_ >> 0x20);
  auVar45._0_8_ = auVar16._0_8_ * auVar39._0_8_ - auVar68._0_8_ * auVar24._0_8_;
  auVar45._8_8_ = auVar16._8_8_ * auVar39._8_8_ - auVar72._8_8_ * auVar24._8_8_;
  auVar16 = *(undefined1 (*) [16])&(this->MTransform).field_0x50;
  auVar32._8_8_ = auVar31._8_8_;
  auVar32._0_8_ = auVar16._0_8_;
  auVar24._0_8_ =
       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                        *(uint *)&(this->MTransform).field_0x44,
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                        *(uint *)&(this->MTransform).field_0x40);
  auVar24._8_4_ = _UNK_15061cc88 & *(uint *)&(this->MTransform).field_0x48;
  auVar24._12_4_ = _UNK_15061cc8c & *(uint *)&(this->MTransform).field_0x4c;
  lVar3 = -(ulonglong)(auVar24._8_8_ <= dStack_a0);
  local_f8 = (uint)-(ulonglong)(auVar24._0_8_ <= local_a8);
  uStack_f4 = (uint)(-(ulonglong)(auVar24._0_8_ <= local_a8) >> 0x20);
  uStack_f0 = (uint)lVar3;
  uStack_ec = (uint)((ulonglong)lVar3 >> 0x20);
  auVar6 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                 *(undefined1 (*) [16])&(this->MTransform).field_0x40);
  lVar3 = -(ulonglong)
           ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar16._4_4_,
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar16._0_4_) <=
           (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  auVar21._0_8_ = (double)CONCAT44(~uStack_f4 & auVar6._4_4_,~local_f8 & auVar6._0_4_);
  auVar21._8_4_ = ~uStack_f0 & auVar6._8_4_;
  auVar21._12_4_ = ~uStack_ec & auVar6._12_4_;
  auVar72 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                  *(undefined1 (*) [16])&(this->MTransform).field_0x40);
  auVar40._0_8_ =
       *(double *)&(this->MTransform).field_0x10 *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  auVar40._8_8_ =
       *(double *)&(this->MTransform).field_0x18 *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar7._8_4_ = SUB84(auVar58._8_8_,0);
  auVar7._0_8_ = auVar58._0_8_;
  auVar7._12_4_ = (int)((ulonglong)auVar58._8_8_ >> 0x20);
  auVar59 = blendpd(auVar58,auVar45,2);
  local_e8 = auVar21._0_8_ * (dVar49 * auVar61._8_8_ + dVar70 + auVar7._8_8_);
  dStack_e0 = auVar21._8_8_ * (dVar56 * auVar39._8_8_ + dVar71 + auVar45._0_8_);
  auVar16 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar32);
  dVar37 = *(double *)&this->MTransform *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar49 = *(double *)&(this->MTransform).field_0x8 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar5 = *(double *)&param_2->field_0x10 - *(double *)&(this->MTransform).field_0x30;
  auVar25._8_4_ = SUB84(dVar49,0);
  auVar25._0_8_ = dVar37;
  uVar38 = (undefined4)((ulonglong)dVar49 >> 0x20);
  auVar25._12_4_ = uVar38;
  auVar46._8_8_ = 0;
  auVar46._0_8_ = dVar5;
  auVar6 = blendpd(auVar25,auVar40,2);
  dVar71 = *(double *)param_2 - *(double *)&(this->MTransform).field_0x20;
  dVar69 = *(double *)&param_2->field_0x8 - *(double *)&(this->MTransform).field_0x28;
  local_d8 = (dVar4 + auVar68._0_8_ * auVar61._8_8_ + auVar59._0_8_) *
             (double)CONCAT44(~(uint)((ulonglong)lVar3 >> 0x20) & auVar16._4_4_,
                              ~(uint)lVar3 & auVar16._0_4_);
  auVar22._8_4_ = SUB84(dVar49,0);
  auVar22._0_8_ = dVar37;
  auVar22._12_4_ = uVar38;
  auVar60._8_4_ = SUB84(auVar40._8_8_,0);
  auVar60._0_8_ = auVar40._0_8_;
  auVar60._12_4_ = (int)((ulonglong)auVar40._8_8_ >> 0x20);
  dVar30 = auVar22._8_8_;
  auVar62._8_4_ = SUB84(dVar69,0);
  auVar62._0_8_ = dVar71;
  uVar38 = (undefined4)((ulonglong)dVar69 >> 0x20);
  auVar62._12_4_ = uVar38;
  auVar8._8_4_ = SUB84(auVar40._0_8_,0);
  auVar8._0_8_ = dVar30;
  auVar8._12_4_ = (int)((ulonglong)auVar40._0_8_ >> 0x20);
  auVar18._8_4_ = SUB84(dVar69,0);
  auVar18._0_8_ = dVar71;
  auVar18._12_4_ = uVar38;
  auVar63._0_8_ = auVar62._8_8_ * dVar37 - dVar30 * dVar71;
  auVar63._8_8_ = dVar5 * dVar49 - auVar8._8_8_ * dVar69;
  auVar16 = blendpd(auVar18,auVar46,2);
  dVar4 = auVar6._8_8_;
  auVar47._8_4_ = SUB84(auVar63._8_8_,0);
  auVar47._0_8_ = auVar63._0_8_;
  auVar47._12_4_ = (int)((ulonglong)auVar63._8_8_ >> 0x20);
  auVar19._0_8_ = auVar16._0_8_ * auVar40._0_8_ - auVar6._0_8_ * dVar5;
  auVar19._8_8_ = auVar16._8_8_ * auVar40._8_8_ - dVar4 * 0.0;
  dVar56 = auVar47._8_8_ + auVar47._8_8_;
  dVar70 = auVar19._0_8_ + auVar19._0_8_;
  auVar16 = blendpd(auVar63,auVar19,2);
  uVar38 = SUB84(dVar70,0);
  auVar51._8_4_ = uVar38;
  auVar51._0_8_ = dVar56;
  uVar48 = (undefined4)((ulonglong)dVar70 >> 0x20);
  auVar51._12_4_ = uVar48;
  auVar9._8_4_ = uVar38;
  auVar9._0_8_ = dVar56;
  auVar9._12_4_ = uVar48;
  auVar64._0_8_ = auVar16._0_8_ + auVar16._0_8_;
  auVar64._8_8_ = auVar16._8_8_ + auVar16._8_8_;
  auVar33._8_4_ = uVar38;
  auVar33._0_8_ = dVar56;
  auVar33._12_4_ = uVar48;
  auVar52._0_8_ = auVar51._8_8_ * dVar37 - dVar56 * dVar30;
  auVar52._8_8_ = auVar64._0_8_ * dVar49 - auVar9._8_8_ * auVar40._0_8_;
  auVar16 = blendpd(auVar33,auVar64,2);
  auVar10._8_4_ = SUB84(auVar64._8_8_,0);
  auVar10._0_8_ = auVar64._0_8_;
  auVar10._12_4_ = (int)((ulonglong)auVar64._8_8_ >> 0x20);
  auVar2._4_8_ = dVar4;
  auVar2._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
  auVar26._0_8_ = auVar2._0_8_ << 0x20;
  auVar26._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar26._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar41._0_8_ =
       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                        *(uint *)&(this->MTransform).field_0x44,
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                        *(uint *)&(this->MTransform).field_0x40);
  auVar41._8_4_ = _UNK_15061cc88 & *(uint *)&(this->MTransform).field_0x48;
  auVar41._12_4_ = _UNK_15061cc8c & *(uint *)&(this->MTransform).field_0x4c;
  lVar3 = -(ulonglong)(auVar41._8_8_ <= dStack_a0);
  auVar34._0_8_ = auVar16._0_8_ * auVar40._0_8_ - auVar64._0_8_ * auVar6._0_8_;
  auVar34._8_8_ = auVar16._8_8_ * auVar40._8_8_ - auVar10._8_8_ * dVar4;
  auVar16 = *(undefined1 (*) [16])&(this->MTransform).field_0x50;
  auVar42._0_8_ =
       (double)CONCAT44(~(uint)(-(ulonglong)(auVar41._0_8_ <= local_a8) >> 0x20) & auVar72._4_4_,
                        ~(uint)-(ulonglong)(auVar41._0_8_ <= local_a8) & auVar72._0_4_);
  auVar42._8_4_ = ~(uint)lVar3 & auVar72._8_4_;
  auVar42._12_4_ = ~(uint)((ulonglong)lVar3 >> 0x20) & auVar72._12_4_;
  auVar27._8_8_ = auVar26._8_8_;
  auVar27._0_8_ = auVar16._0_8_;
  auVar11._8_4_ = SUB84(auVar52._8_8_,0);
  auVar11._0_8_ = auVar52._0_8_;
  auVar11._12_4_ = (int)((ulonglong)auVar52._8_8_ >> 0x20);
  lVar3 = -(ulonglong)
           ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar16._4_4_,
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar16._0_4_) <=
           (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  auVar6 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar27);
  auVar16 = blendpd(auVar52,auVar34,2);
  dStack_c0 = auVar42._8_8_ * (dVar70 * auVar40._8_8_ + dVar69 + auVar34._0_8_);
  local_c8 = auVar42._0_8_ * (dVar56 * auVar60._8_8_ + dVar71 + auVar11._8_8_);
  local_b8 = (double)CONCAT44(~(uint)((ulonglong)lVar3 >> 0x20) & auVar6._4_4_,
                              ~(uint)lVar3 & auVar6._0_4_) *
             (auVar64._0_8_ * auVar60._8_8_ + dVar5 + auVar16._0_8_);
  FImplicitObject::FindClosestIntersection
            ((this->MObject).Reference,__return_storage_ptr__,(TVector<double,3> *)&local_e8,
             (TVector<double,3> *)&local_c8,param_3);
  if (__return_storage_ptr__->Second != false) {
    auVar16 = *(undefined1 (*) [16])&(this->MTransform).field_0x10;
    dVar4 = auVar16._0_8_;
    auVar6 = *(undefined1 (*) [16])&this->MTransform;
    dVar56 = *(double *)&__return_storage_ptr__->First * *(double *)&(this->MTransform).field_0x40;
    dVar70 = *(double *)&(__return_storage_ptr__->First).field_0x8 *
             *(double *)&(this->MTransform).field_0x48;
    auVar65._0_8_ =
         *(double *)&(__return_storage_ptr__->First).field_0x10 *
         *(double *)&(this->MTransform).field_0x50;
    auVar65._8_8_ = *(double *)&(this->MTransform).field_0x58 * 0.0;
    dVar30 = *(double *)&(this->MTransform).field_0x18;
    auVar53._8_4_ = SUB84(dVar70,0);
    auVar53._0_8_ = dVar56;
    uVar38 = (undefined4)((ulonglong)dVar70 >> 0x20);
    auVar53._12_4_ = uVar38;
    auVar59 = blendpd(auVar6,auVar16,2);
    auVar54._0_8_ = auVar53._8_8_ * auVar6._0_8_ - auVar6._8_8_ * dVar56;
    auVar54._8_8_ = auVar65._0_8_ * auVar6._8_8_ - dVar4 * dVar70;
    auVar43._8_4_ = SUB84(auVar54._8_8_,0);
    auVar43._0_8_ = auVar54._0_8_;
    auVar43._12_4_ = (int)((ulonglong)auVar54._8_8_ >> 0x20);
    auVar12._8_4_ = SUB84(dVar70,0);
    auVar12._0_8_ = dVar56;
    auVar12._12_4_ = uVar38;
    auVar6 = blendpd(auVar12,auVar65,2);
    auVar13._0_8_ = auVar6._0_8_ * dVar4 - auVar59._0_8_ * auVar65._0_8_;
    auVar13._8_8_ = auVar6._8_8_ * auVar16._8_8_ - auVar59._8_8_ * auVar65._8_8_;
    auVar6 = *(undefined1 (*) [16])&this->MTransform;
    auVar59 = blendpd(auVar54,auVar13,2);
    dVar37 = auVar43._8_8_ + auVar43._8_8_;
    dVar49 = auVar13._0_8_ + auVar13._0_8_;
    auVar55._0_8_ = auVar59._0_8_ + auVar59._0_8_;
    auVar55._8_8_ = auVar59._8_8_ + auVar59._8_8_;
    auVar35._8_4_ = SUB84(dVar49,0);
    auVar35._0_8_ = dVar37;
    uVar38 = (undefined4)((ulonglong)dVar49 >> 0x20);
    auVar35._12_4_ = uVar38;
    auVar28._8_4_ = SUB84(dVar49,0);
    auVar28._0_8_ = dVar37;
    auVar28._12_4_ = uVar38;
    auVar59 = blendpd(auVar28,auVar55,2);
    auVar36._0_8_ = auVar35._8_8_ * auVar6._0_8_ - auVar6._8_8_ * dVar37;
    auVar36._8_8_ = auVar55._0_8_ * auVar6._8_8_ - dVar4 * dVar49;
    auVar14._8_4_ = SUB84(auVar36._8_8_,0);
    auVar14._0_8_ = auVar36._0_8_;
    auVar14._12_4_ = (int)((ulonglong)auVar36._8_8_ >> 0x20);
    auVar6 = blendpd(auVar6,auVar16,2);
    auVar29._0_8_ = auVar59._0_8_ * dVar4 - auVar6._0_8_ * auVar55._0_8_;
    auVar29._8_8_ = auVar59._8_8_ * auVar16._8_8_ - auVar6._8_8_ * auVar55._8_8_;
    auVar16 = blendpd(auVar36,auVar29,2);
    dVar5 = *(double *)&(this->MTransform).field_0x28;
    dVar4 = *(double *)&(this->MTransform).field_0x30;
    *(double *)&__return_storage_ptr__->First =
         dVar37 * dVar30 + dVar56 + auVar14._8_8_ + *(double *)&(this->MTransform).field_0x20;
    *(double *)&(__return_storage_ptr__->First).field_0x8 =
         dVar49 * dVar30 + dVar70 + auVar29._0_8_ + dVar5;
    *(double *)&(__return_storage_ptr__->First).field_0x10 =
         auVar55._0_8_ * dVar30 + auVar65._0_8_ + auVar16._0_8_ + dVar4;
  }
  return __return_storage_ptr__;
}

// FindGeometryOpposingNormal @ 148281590

TVector<double,3> * __thiscall
Chaos::TImplicitObjectTransformed<double,3,0>::FindGeometryOpposingNormal
          (TImplicitObjectTransformed<double,3,0> *this,TVector<double,3> *__return_storage_ptr__,
          TVector<double,3> *param_1,int param_2,TVector<double,3> *param_3)

{
  double dVar1;
  FImplicitObject *pFVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar37;
  undefined1 auVar34 [16];
  double dVar38;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined4 uVar44;
  undefined4 uVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar50;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar56;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 local_c8 [16];
  double local_b8;
  undefined1 local_a8 [16];
  double local_98;
  undefined1 local_88 [16];
  double local_78;
  
  dVar4 = *(double *)&this->MTransform *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar50 = *(double *)&(this->MTransform).field_0x8 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  uVar44 = (undefined4)((ulonglong)dVar50 >> 0x20);
  auVar33._8_4_ = SUB84(dVar50,0);
  auVar33._0_8_ = dVar4;
  auVar33._12_4_ = uVar44;
  dVar38 = *(double *)&(this->MTransform).field_0x10 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar56 = *(double *)&(this->MTransform).field_0x18 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  uVar45 = (undefined4)((ulonglong)dVar56 >> 0x20);
  auVar39._8_4_ = SUB84(dVar50,0);
  auVar39._0_8_ = dVar4;
  auVar39._12_4_ = uVar44;
  auVar46._8_4_ = SUB84(dVar56,0);
  auVar46._0_8_ = dVar38;
  auVar46._12_4_ = uVar45;
  dVar37 = auVar33._8_8_;
  auVar20._8_4_ = SUB84(dVar56,0);
  auVar20._0_8_ = dVar38;
  auVar20._12_4_ = uVar45;
  auVar40 = blendpd(auVar39,auVar20,2);
  auVar9._8_4_ = SUB84(dVar38,0);
  auVar9._0_8_ = dVar37;
  auVar9._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
  auVar25 = *(undefined1 (*) [16])param_1;
  dVar7 = auVar25._8_8_;
  dVar1 = *(double *)&param_1->field_0x10;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = dVar1;
  auVar20 = blendpd(auVar25,auVar8,2);
  auVar51._0_8_ = dVar7 * dVar4 - dVar37 * auVar25._0_8_;
  auVar51._8_8_ = dVar1 * dVar50 - auVar9._8_8_ * dVar7;
  auVar21._0_8_ = auVar20._0_8_ * dVar38 - auVar40._0_8_ * dVar1;
  auVar21._8_8_ = auVar20._8_8_ * dVar56 - auVar40._8_8_ * 0.0;
  auVar20 = blendpd(auVar51,auVar21,2);
  auVar52._0_8_ = auVar20._0_8_ + auVar20._0_8_;
  auVar52._8_8_ = auVar20._8_8_ + auVar20._8_8_;
  dVar3 = auVar51._8_8_ + auVar51._8_8_;
  dVar19 = auVar21._0_8_ + auVar21._0_8_;
  uVar44 = SUB84(dVar19,0);
  uVar45 = (undefined4)((ulonglong)dVar19 >> 0x20);
  auVar29._8_4_ = uVar44;
  auVar29._0_8_ = dVar3;
  auVar29._12_4_ = uVar45;
  auVar10._8_4_ = uVar44;
  auVar10._0_8_ = dVar3;
  auVar10._12_4_ = uVar45;
  auVar22._8_4_ = uVar44;
  auVar22._0_8_ = dVar3;
  auVar22._12_4_ = uVar45;
  auVar23 = blendpd(auVar22,auVar52,2);
  dVar5 = *(double *)&(this->MTransform).field_0x10 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar6 = *(double *)&(this->MTransform).field_0x18 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  uVar45 = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar20 = *(undefined1 (*) [16])param_3;
  auVar30._0_8_ = auVar29._8_8_ * dVar4 - dVar3 * dVar37;
  auVar30._8_8_ = auVar52._0_8_ * dVar50 - auVar10._8_8_ * dVar38;
  auVar11._8_4_ = SUB84(auVar52._8_8_,0);
  auVar11._0_8_ = auVar52._0_8_;
  auVar11._12_4_ = (int)((ulonglong)auVar52._8_8_ >> 0x20);
  dVar4 = *(double *)&param_3->field_0x10;
  auVar47._8_4_ = SUB84(dVar6,0);
  auVar47._0_8_ = dVar5;
  auVar47._12_4_ = uVar45;
  auVar24._0_8_ = auVar23._0_8_ * dVar38 - auVar52._0_8_ * auVar40._0_8_;
  auVar24._8_8_ = auVar23._8_8_ * dVar56 - auVar11._8_8_ * auVar40._8_8_;
  auVar12._8_4_ = SUB84(auVar30._8_8_,0);
  auVar12._0_8_ = auVar30._0_8_;
  auVar12._12_4_ = (int)((ulonglong)auVar30._8_8_ >> 0x20);
  dVar19 = dVar19 * dVar56 + dVar7 + auVar24._0_8_;
  auVar23 = blendpd(auVar30,auVar24,2);
  local_98 = auVar52._0_8_ * auVar46._8_8_ + dVar1 + auVar23._0_8_;
  local_a8._8_4_ = SUB84(dVar19,0);
  local_a8._0_8_ = dVar3 * auVar46._8_8_ + auVar25._0_8_ + auVar12._8_8_;
  local_a8._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
  dVar1 = *(double *)&this->MTransform *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar3 = *(double *)&(this->MTransform).field_0x8 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  uVar44 = (undefined4)((ulonglong)dVar3 >> 0x20);
  dVar56 = auVar20._8_8_;
  auVar34._8_4_ = SUB84(dVar3,0);
  auVar34._0_8_ = dVar1;
  auVar34._12_4_ = uVar44;
  dVar38 = auVar34._8_8_;
  auVar41._8_4_ = SUB84(dVar3,0);
  auVar41._0_8_ = dVar1;
  auVar41._12_4_ = uVar44;
  auVar13._8_4_ = SUB84(dVar5,0);
  auVar13._0_8_ = dVar38;
  auVar13._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  auVar23._8_4_ = SUB84(dVar6,0);
  auVar23._0_8_ = dVar5;
  auVar23._12_4_ = uVar45;
  auVar23 = blendpd(auVar41,auVar23,2);
  auVar53._0_8_ = dVar56 * dVar1 - dVar38 * auVar20._0_8_;
  auVar53._8_8_ = dVar4 * dVar3 - auVar13._8_8_ * dVar56;
  auVar40._8_8_ = 0;
  auVar40._0_8_ = dVar4;
  auVar25 = blendpd(auVar20,auVar40,2);
  pFVar2 = (this->MObject).Reference;
  auVar26._0_8_ = auVar25._0_8_ * dVar5 - auVar23._0_8_ * dVar4;
  auVar26._8_8_ = auVar25._8_8_ * dVar6 - auVar23._8_8_ * 0.0;
  auVar25 = blendpd(auVar53,auVar26,2);
  dVar19 = auVar53._8_8_ + auVar53._8_8_;
  dVar50 = auVar26._0_8_ + auVar26._0_8_;
  uVar44 = SUB84(dVar50,0);
  uVar45 = (undefined4)((ulonglong)dVar50 >> 0x20);
  auVar54._0_8_ = auVar25._0_8_ + auVar25._0_8_;
  auVar54._8_8_ = auVar25._8_8_ + auVar25._8_8_;
  auVar31._8_4_ = uVar44;
  auVar31._0_8_ = dVar19;
  auVar31._12_4_ = uVar45;
  auVar14._8_4_ = uVar44;
  auVar14._0_8_ = dVar19;
  auVar14._12_4_ = uVar45;
  auVar27._8_4_ = uVar44;
  auVar27._0_8_ = dVar19;
  auVar27._12_4_ = uVar45;
  auVar25 = blendpd(auVar27,auVar54,2);
  auVar32._0_8_ = auVar31._8_8_ * dVar1 - dVar19 * dVar38;
  auVar32._8_8_ = auVar54._0_8_ * dVar3 - auVar14._8_8_ * dVar5;
  auVar15._8_4_ = SUB84(auVar54._8_8_,0);
  auVar15._0_8_ = auVar54._0_8_;
  auVar15._12_4_ = (int)((ulonglong)auVar54._8_8_ >> 0x20);
  auVar28._0_8_ = auVar25._0_8_ * dVar5 - auVar54._0_8_ * auVar23._0_8_;
  auVar28._8_8_ = auVar25._8_8_ * dVar6 - auVar15._8_8_ * auVar23._8_8_;
  auVar16._8_4_ = SUB84(auVar32._8_8_,0);
  auVar16._0_8_ = auVar32._0_8_;
  auVar16._12_4_ = (int)((ulonglong)auVar32._8_8_ >> 0x20);
  auVar25 = blendpd(auVar32,auVar28,2);
  dVar1 = dVar50 * dVar6 + dVar56 + auVar28._0_8_;
  local_b8 = auVar54._0_8_ * auVar47._8_8_ + dVar4 + auVar25._0_8_;
  local_c8._8_4_ = SUB84(dVar1,0);
  local_c8._0_8_ = dVar19 * auVar47._8_8_ + auVar20._0_8_ + auVar16._8_8_;
  local_c8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  (**(code **)(pFVar2->_padding_ + 0xd0))(pFVar2,local_88,local_a8,dVar38,local_c8);
  auVar25 = *(undefined1 (*) [16])&(this->MTransform).field_0x10;
  dVar19 = auVar25._0_8_;
  auVar55._8_8_ = 0;
  auVar55._0_8_ = local_78;
  auVar20 = *(undefined1 (*) [16])&this->MTransform;
  dVar3 = *(double *)&(this->MTransform).field_0x18;
  dVar50 = local_88._8_8_;
  auVar23 = blendpd(auVar20,auVar25,2);
  auVar48._0_8_ = dVar50 * auVar20._0_8_ - auVar20._8_8_ * local_88._0_8_;
  auVar48._8_8_ = local_78 * auVar20._8_8_ - dVar19 * dVar50;
  auVar20 = blendpd(local_88,auVar55,2);
  auVar17._0_8_ = auVar20._0_8_ * dVar19 - auVar23._0_8_ * local_78;
  auVar17._8_8_ = auVar20._8_8_ * auVar25._8_8_ - auVar23._8_8_ * 0.0;
  auVar20 = *(undefined1 (*) [16])&this->MTransform;
  auVar23 = blendpd(auVar48,auVar17,2);
  dVar1 = auVar48._8_8_ + auVar48._8_8_;
  dVar4 = auVar17._0_8_ + auVar17._0_8_;
  uVar44 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar49._0_8_ = auVar23._0_8_ + auVar23._0_8_;
  auVar49._8_8_ = auVar23._8_8_ + auVar23._8_8_;
  auVar42._8_4_ = SUB84(dVar4,0);
  auVar42._0_8_ = dVar1;
  auVar42._12_4_ = uVar44;
  auVar35._8_4_ = SUB84(dVar4,0);
  auVar35._0_8_ = dVar1;
  auVar35._12_4_ = uVar44;
  auVar23 = blendpd(auVar35,auVar49,2);
  auVar43._0_8_ = auVar42._8_8_ * auVar20._0_8_ - auVar20._8_8_ * dVar1;
  auVar43._8_8_ = auVar49._0_8_ * auVar20._8_8_ - dVar19 * dVar4;
  auVar20 = blendpd(auVar20,auVar25,2);
  auVar36._0_8_ = auVar23._0_8_ * dVar19 - auVar20._0_8_ * auVar49._0_8_;
  auVar36._8_8_ = auVar23._8_8_ * auVar25._8_8_ - auVar20._8_8_ * auVar49._8_8_;
  auVar18._8_4_ = SUB84(auVar43._8_8_,0);
  auVar18._0_8_ = auVar43._0_8_;
  auVar18._12_4_ = (int)((ulonglong)auVar43._8_8_ >> 0x20);
  auVar20 = blendpd(auVar43,auVar36,2);
  dVar4 = dVar4 * dVar3 + dVar50 + auVar36._0_8_;
  auVar25._8_4_ = SUB84(dVar4,0);
  auVar25._0_8_ = dVar1 * dVar3 + local_88._0_8_ + auVar18._8_8_;
  auVar25._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  *(undefined1 (*) [16])__return_storage_ptr__ = auVar25;
  *(double *)&__return_storage_ptr__->field_0x10 = auVar49._0_8_ * dVar3 + local_78 + auVar20._0_8_;
  return __return_storage_ptr__;
}

// FindMostOpposingFace @ 148281900

int __thiscall
Chaos::TImplicitObjectTransformed<double,3,0>::FindMostOpposingFace
          (TImplicitObjectTransformed<double,3,0> *this,TVector<double,3> *param_1,
          TVector<double,3> *param_2,int param_3,double param_4)

{
  FImplicitObject *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int iVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined4 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar36;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 local_98 [16];
  double local_88;
  undefined1 local_80 [16];
  double local_70;
  
  dVar12 = *(double *)&param_1->field_0x10 - *(double *)&(this->MTransform).field_0x30;
  dVar4 = *(double *)&this->MTransform *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar5 = *(double *)&(this->MTransform).field_0x8 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar6 = *(double *)&(this->MTransform).field_0x10 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar36 = *(double *)&(this->MTransform).field_0x18 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar26._8_4_ = SUB84(dVar5,0);
  auVar26._0_8_ = dVar4;
  auVar26._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  auVar14._8_4_ = SUB84(dVar36,0);
  auVar14._0_8_ = dVar6;
  auVar14._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
  auVar27 = blendpd(auVar26,auVar14,2);
  dVar9 = *(double *)param_1 - *(double *)&(this->MTransform).field_0x20;
  dVar10 = *(double *)&param_1->field_0x8 - *(double *)&(this->MTransform).field_0x28;
  uVar30 = (undefined4)((ulonglong)dVar10 >> 0x20);
  auVar31._8_4_ = SUB84(dVar10,0);
  auVar31._0_8_ = dVar9;
  auVar31._12_4_ = uVar30;
  auVar13._8_4_ = SUB84(dVar10,0);
  auVar13._0_8_ = dVar9;
  auVar13._12_4_ = uVar30;
  auVar32._0_8_ = auVar31._8_8_ * dVar4 - dVar5 * dVar9;
  auVar32._8_8_ = dVar12 * dVar5 - dVar6 * dVar10;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = dVar12;
  auVar14 = blendpd(auVar13,auVar29,2);
  auVar15._0_8_ = auVar14._0_8_ * dVar6 - auVar27._0_8_ * dVar12;
  auVar15._8_8_ = auVar14._8_8_ * dVar36 - auVar27._8_8_ * 0.0;
  auVar14 = blendpd(auVar32,auVar15,2);
  auVar33._0_8_ = auVar14._0_8_ + auVar14._0_8_;
  auVar33._8_8_ = auVar14._8_8_ + auVar14._8_8_;
  dVar2 = auVar32._8_8_ + auVar32._8_8_;
  dVar3 = auVar15._0_8_ + auVar15._0_8_;
  uVar30 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar22._8_4_ = SUB84(dVar3,0);
  auVar22._0_8_ = dVar2;
  auVar22._12_4_ = uVar30;
  auVar16._8_4_ = SUB84(dVar3,0);
  auVar16._0_8_ = dVar2;
  auVar16._12_4_ = uVar30;
  auVar17 = blendpd(auVar16,auVar33,2);
  dVar7 = *(double *)&(this->MTransform).field_0x10 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar8 = *(double *)&(this->MTransform).field_0x18 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar14 = *(undefined1 (*) [16])param_2;
  auVar23._0_8_ = auVar22._8_8_ * dVar4 - dVar2 * dVar5;
  auVar23._8_8_ = auVar33._0_8_ * dVar5 - dVar3 * dVar6;
  dVar4 = *(double *)&param_2->field_0x10;
  auVar18._0_8_ = auVar17._0_8_ * dVar6 - auVar33._0_8_ * auVar27._0_8_;
  auVar18._8_8_ = auVar17._8_8_ * dVar36 - auVar33._8_8_ * auVar27._8_8_;
  dVar3 = dVar3 * dVar36 + dVar10 + auVar18._0_8_;
  auVar17 = blendpd(auVar23,auVar18,2);
  local_70 = auVar33._0_8_ * dVar36 + dVar12 + auVar17._0_8_;
  local_80._8_4_ = SUB84(dVar3,0);
  local_80._0_8_ = dVar2 * dVar36 + dVar9 + auVar23._8_8_;
  local_80._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  dVar2 = *(double *)&this->MTransform *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar3 = *(double *)&(this->MTransform).field_0x8 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar36 = auVar14._8_8_;
  auVar28._8_4_ = SUB84(dVar3,0);
  auVar28._0_8_ = dVar2;
  auVar28._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  auVar17._8_4_ = SUB84(dVar8,0);
  auVar17._0_8_ = dVar7;
  auVar17._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar29 = blendpd(auVar28,auVar17,2);
  auVar34._0_8_ = dVar36 * dVar2 - dVar3 * auVar14._0_8_;
  auVar34._8_8_ = dVar4 * dVar3 - dVar7 * dVar36;
  pFVar1 = (this->MObject).Reference;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = dVar4;
  auVar17 = blendpd(auVar14,auVar27,2);
  auVar19._0_8_ = auVar17._0_8_ * dVar7 - auVar29._0_8_ * dVar4;
  auVar19._8_8_ = auVar17._8_8_ * dVar8 - auVar29._8_8_ * 0.0;
  auVar17 = blendpd(auVar34,auVar19,2);
  dVar5 = auVar34._8_8_ + auVar34._8_8_;
  dVar6 = auVar19._0_8_ + auVar19._0_8_;
  uVar30 = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar35._0_8_ = auVar17._0_8_ + auVar17._0_8_;
  auVar35._8_8_ = auVar17._8_8_ + auVar17._8_8_;
  auVar24._8_4_ = SUB84(dVar6,0);
  auVar24._0_8_ = dVar5;
  auVar24._12_4_ = uVar30;
  auVar20._8_4_ = SUB84(dVar6,0);
  auVar20._0_8_ = dVar5;
  auVar20._12_4_ = uVar30;
  auVar17 = blendpd(auVar20,auVar35,2);
  auVar25._0_8_ = auVar24._8_8_ * dVar2 - dVar5 * dVar3;
  auVar25._8_8_ = auVar35._0_8_ * dVar3 - dVar6 * dVar7;
  auVar21._0_8_ = auVar17._0_8_ * dVar7 - auVar35._0_8_ * auVar29._0_8_;
  auVar21._8_8_ = auVar17._8_8_ * dVar8 - auVar35._8_8_ * auVar29._8_8_;
  dVar2 = dVar6 * dVar8 + dVar36 + auVar21._0_8_;
  auVar17 = blendpd(auVar25,auVar21,2);
  local_88 = auVar35._0_8_ * dVar8 + dVar4 + auVar17._0_8_;
  local_98._8_4_ = SUB84(dVar2,0);
  local_98._0_8_ = dVar5 * dVar8 + auVar14._0_8_ + auVar25._8_8_;
  local_98._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  iVar11 = (**(code **)(pFVar1->_padding_ + 0xb8))(pFVar1,local_80,local_98,dVar3,param_4);
  return iVar11;
}

// GetMargin @ 14828a4d0

double __thiscall
Chaos::TImplicitObjectTransformed<double,3,0>::GetMargin
          (TImplicitObjectTransformed<double,3,0> *this)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(((this->MObject).Reference)->_padding_ + 0x18))();
  if (0.0 < fVar1) {
    return 0.0;
  }
  return (double)*(float *)&this->_padding_;
}

// GetMaterialIndex @ 14828b1f0

ushort __thiscall
Chaos::TImplicitObjectTransformed<double,3,0>::GetMaterialIndex
          (TImplicitObjectTransformed<double,3,0> *this,uint param_1)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014828b1f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(((this->MObject).Reference)->_padding_ + 0x120))();
  return uVar1;
}

// GetNestedType @ 14828b280

uchar __thiscall
Chaos::TImplicitObjectTransformed<double,3,0>::GetNestedType
          (TImplicitObjectTransformed<double,3,0> *this)

{
  uchar uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014828b287. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(((this->MObject).Reference)->_padding_ + 8))();
  return uVar1;
}

// GetRadius @ 14828c3c0

double __thiscall
Chaos::TImplicitObjectTransformed<double,3,0>::GetRadius
          (TImplicitObjectTransformed<double,3,0> *this)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(((this->MObject).Reference)->_padding_ + 0x18))();
  if (0.0 < fVar1) {
    return (double)*(float *)&this->_padding_;
  }
  return 0.0;
}

// GetTypeHash @ 14828ea10

uint __thiscall
Chaos::TImplicitObjectTransformed<double,3,0>::GetTypeHash
          (TImplicitObjectTransformed<double,3,0> *this)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = Chaos::GetTypeHash(&this->MTransform);
  iVar2 = (**(code **)(((this->MObject).Reference)->_padding_ + 0x110))();
  uVar5 = iVar2 - uVar1 ^ uVar1 >> 0xd;
  uVar3 = (-0x61c88647 - uVar5) - uVar1 ^ uVar5 << 8;
  uVar4 = (uVar1 - uVar3) - uVar5 ^ uVar3 >> 0xd;
  uVar5 = (uVar5 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar1 = (uVar3 - uVar5) - uVar4 ^ uVar5 << 0x10;
  uVar3 = (uVar4 - uVar1) - uVar5 ^ uVar1 >> 5;
  uVar4 = (uVar5 - uVar3) - uVar1 ^ uVar3 >> 3;
  uVar1 = (uVar1 - uVar4) - uVar3 ^ uVar4 << 10;
  return (uVar3 - uVar1) - uVar4 ^ uVar1 >> 0xf;
}

// IsOverlappingBoundsImpl @ 148294f10

bool __thiscall
Chaos::TImplicitObjectTransformed<double,3,0>::IsOverlappingBoundsImpl
          (TImplicitObjectTransformed<double,3,0> *this,TAABB<double,3> *param_1)

{
  FImplicitObject *pFVar1;
  undefined1 uVar2;
  TAABB<double,3> local_38;
  
  TAABB<double,3>::InverseTransformedAABB(param_1,&local_38,&this->MTransform);
  pFVar1 = (this->MObject).Reference;
  uVar2 = (**(code **)(pFVar1->_padding_ + 0x150))(pFVar1,&local_38);
  return (bool)uVar2;
}

// Overlap @ 148299510

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::TImplicitObjectTransformed<double,3,0>::Overlap
          (TImplicitObjectTransformed<double,3,0> *this,TVector<double,3> *param_1,double param_2)

{
  FImplicitObject *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double local_c8;
  double dStack_c0;
  double local_b8;
  
  dVar25 = *(double *)&this->MTransform *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar26 = *(double *)&(this->MTransform).field_0x8 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar2 = *(double *)&(this->MTransform).field_0x10 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar3 = *(double *)&(this->MTransform).field_0x18 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar21._8_4_ = SUB84(dVar26,0);
  auVar21._0_8_ = dVar25;
  auVar21._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
  dVar13 = *(double *)&param_1->field_0x10 - *(double *)&(this->MTransform).field_0x30;
  auVar19._8_4_ = SUB84(dVar3,0);
  auVar19._0_8_ = dVar2;
  auVar19._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  auVar22 = blendpd(auVar21,auVar19,2);
  dVar6 = *(double *)param_1 - *(double *)&(this->MTransform).field_0x20;
  dVar7 = *(double *)&param_1->field_0x8 - *(double *)&(this->MTransform).field_0x28;
  uVar29 = (undefined4)((ulonglong)dVar7 >> 0x20);
  auVar33._8_4_ = SUB84(dVar7,0);
  auVar33._0_8_ = dVar6;
  auVar33._12_4_ = uVar29;
  auVar18._8_4_ = SUB84(dVar7,0);
  auVar18._0_8_ = dVar6;
  auVar18._12_4_ = uVar29;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = dVar13;
  auVar19 = blendpd(auVar18,auVar8,2);
  auVar14._8_4_ = SUB84(dVar2,0);
  auVar14._0_8_ = dVar26;
  auVar14._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  auVar34._0_8_ = auVar33._8_8_ * dVar25 - dVar26 * dVar6;
  auVar34._8_8_ = dVar13 * dVar26 - auVar14._8_8_ * dVar7;
  auVar20._0_8_ = auVar19._0_8_ * dVar2 - auVar22._0_8_ * dVar13;
  auVar20._8_8_ = auVar19._8_8_ * dVar3 - auVar22._8_8_ * 0.0;
  dVar4 = auVar34._8_8_ + auVar34._8_8_;
  dVar5 = auVar20._0_8_ + auVar20._0_8_;
  uVar29 = SUB84(dVar5,0);
  uVar30 = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar19 = blendpd(auVar34,auVar20,2);
  auVar31._8_4_ = uVar29;
  auVar31._0_8_ = dVar4;
  auVar31._12_4_ = uVar30;
  auVar15._8_4_ = uVar29;
  auVar15._0_8_ = dVar4;
  auVar15._12_4_ = uVar30;
  auVar27._8_4_ = uVar29;
  auVar27._0_8_ = dVar4;
  auVar27._12_4_ = uVar30;
  auVar35._0_8_ = auVar19._0_8_ + auVar19._0_8_;
  auVar35._8_8_ = auVar19._8_8_ + auVar19._8_8_;
  auVar19 = blendpd(auVar27,auVar35,2);
  auVar32._0_8_ = auVar31._8_8_ * dVar25 - dVar4 * dVar26;
  auVar32._8_8_ = auVar35._0_8_ * dVar26 - auVar15._8_8_ * dVar2;
  auVar16._8_4_ = SUB84(auVar35._8_8_,0);
  auVar16._0_8_ = auVar35._0_8_;
  auVar16._12_4_ = (int)((ulonglong)auVar35._8_8_ >> 0x20);
  auVar28._0_8_ = auVar19._0_8_ * dVar2 - auVar35._0_8_ * auVar22._0_8_;
  auVar28._8_8_ = auVar19._8_8_ * dVar3 - auVar16._8_8_ * auVar22._8_8_;
  auVar19 = *(undefined1 (*) [16])&(this->MTransform).field_0x50;
  auVar23._0_8_ =
       (double)CONCAT44(*(uint *)&(this->MTransform).field_0x44 &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        *(uint *)&(this->MTransform).field_0x40 &
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar23._8_4_ = *(uint *)&(this->MTransform).field_0x48 & _UNK_15061cc88;
  auVar23._12_4_ = *(uint *)&(this->MTransform).field_0x4c & _UNK_15061cc8c;
  lVar10 = -(ulonglong)
            ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar19._4_4_,
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar19._0_4_) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  auVar22 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                  *(undefined1 (*) [16])&(this->MTransform).field_0x40);
  lVar11 = -(ulonglong)(auVar23._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
  lVar12 = -(ulonglong)(auVar23._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
  auVar17._8_4_ = SUB84(auVar32._8_8_,0);
  auVar17._0_8_ = auVar32._0_8_;
  auVar17._12_4_ = (int)((ulonglong)auVar32._8_8_ >> 0x20);
  auVar24._0_8_ =
       (double)CONCAT44(~(uint)((ulonglong)lVar11 >> 0x20) & auVar22._4_4_,
                        ~(uint)lVar11 & auVar22._0_4_);
  auVar24._8_4_ = ~(uint)lVar12 & auVar22._8_4_;
  auVar24._12_4_ = ~(uint)((ulonglong)lVar12 >> 0x20) & auVar22._12_4_;
  local_c8 = auVar24._0_8_ * (dVar4 * dVar3 + dVar6 + auVar17._8_8_);
  dStack_c0 = auVar24._8_8_ * (dVar5 * dVar3 + dVar7 + auVar28._0_8_);
  pFVar1 = (this->MObject).Reference;
  auVar22._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar22._0_8_ = auVar19._0_8_;
  auVar22._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar19 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar22);
  auVar22 = blendpd(auVar32,auVar28,2);
  local_b8 = (double)CONCAT44(~(uint)((ulonglong)lVar10 >> 0x20) & auVar19._4_4_,
                              ~(uint)lVar10 & auVar19._0_4_) *
             (auVar35._0_8_ * dVar3 + dVar13 + auVar22._0_8_);
  uVar9 = (**(code **)(pFVar1->_padding_ + 0xd8))(pFVar1,&local_c8,param_2);
  return (bool)uVar9;
}

// PhiWithNormal @ 14829b360

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __thiscall
Chaos::TImplicitObjectTransformed<double,3,0>::PhiWithNormal
          (TImplicitObjectTransformed<double,3,0> *this,TVector<double,3> *param_1,
          TVector<double,3> *param_2)

{
  FImplicitObject *pFVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  double dVar33;
  undefined4 uVar34;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar42;
  undefined4 uVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double local_b8;
  double dStack_b0;
  double local_a8;
  
  dVar30 = *(double *)&this->MTransform *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar33 = *(double *)&(this->MTransform).field_0x8 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar2 = *(double *)&(this->MTransform).field_0x10 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar3 = *(double *)&(this->MTransform).field_0x18 *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar24._8_4_ = SUB84(dVar33,0);
  auVar24._0_8_ = dVar30;
  uVar34 = (undefined4)((ulonglong)dVar33 >> 0x20);
  auVar24._12_4_ = uVar34;
  dVar11 = *(double *)&param_1->field_0x10 - *(double *)&(this->MTransform).field_0x30;
  auVar26._8_4_ = SUB84(dVar33,0);
  auVar26._0_8_ = dVar30;
  auVar26._12_4_ = uVar34;
  dVar42 = auVar24._8_8_;
  dVar12 = *(double *)param_1 - *(double *)&(this->MTransform).field_0x20;
  dVar20 = *(double *)&param_1->field_0x8 - *(double *)&(this->MTransform).field_0x28;
  uVar34 = (undefined4)((ulonglong)dVar20 >> 0x20);
  auVar22._8_4_ = SUB84(dVar3,0);
  auVar22._0_8_ = dVar2;
  auVar22._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  auVar27 = blendpd(auVar26,auVar22,2);
  auVar13._8_4_ = SUB84(dVar2,0);
  auVar13._0_8_ = dVar42;
  auVar13._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  auVar46._8_4_ = SUB84(dVar20,0);
  auVar46._0_8_ = dVar12;
  auVar46._12_4_ = uVar34;
  auVar21._8_4_ = SUB84(dVar20,0);
  auVar21._0_8_ = dVar12;
  auVar21._12_4_ = uVar34;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = dVar11;
  auVar22 = blendpd(auVar21,auVar7,2);
  auVar47._0_8_ = auVar46._8_8_ * dVar30 - dVar42 * dVar12;
  auVar47._8_8_ = dVar11 * dVar33 - auVar13._8_8_ * dVar20;
  auVar23._0_8_ = auVar22._0_8_ * dVar2 - dVar11 * auVar27._0_8_;
  auVar23._8_8_ = auVar22._8_8_ * dVar3 - auVar27._8_8_ * 0.0;
  dVar5 = auVar47._8_8_ + auVar47._8_8_;
  dVar6 = auVar23._0_8_ + auVar23._0_8_;
  uVar34 = SUB84(dVar6,0);
  uVar43 = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar22 = blendpd(auVar47,auVar23,2);
  auVar44._8_4_ = uVar34;
  auVar44._0_8_ = dVar5;
  auVar44._12_4_ = uVar43;
  auVar14._8_4_ = uVar34;
  auVar14._0_8_ = dVar5;
  auVar14._12_4_ = uVar43;
  auVar40._8_4_ = uVar34;
  auVar40._0_8_ = dVar5;
  auVar40._12_4_ = uVar43;
  auVar48._0_8_ = auVar22._0_8_ + auVar22._0_8_;
  auVar48._8_8_ = auVar22._8_8_ + auVar22._8_8_;
  auVar22 = blendpd(auVar40,auVar48,2);
  auVar45._0_8_ = auVar44._8_8_ * dVar30 - dVar5 * dVar42;
  auVar45._8_8_ = auVar48._0_8_ * dVar33 - auVar14._8_8_ * dVar2;
  auVar15._8_4_ = SUB84(auVar48._8_8_,0);
  auVar15._0_8_ = auVar48._0_8_;
  auVar15._12_4_ = (int)((ulonglong)auVar48._8_8_ >> 0x20);
  auVar35._0_8_ =
       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                        *(uint *)&(this->MTransform).field_0x44,
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                        *(uint *)&(this->MTransform).field_0x40);
  auVar35._8_4_ = _UNK_15061cc88 & *(uint *)&(this->MTransform).field_0x48;
  auVar35._12_4_ = _UNK_15061cc8c & *(uint *)&(this->MTransform).field_0x4c;
  auVar41._0_8_ = auVar22._0_8_ * dVar2 - auVar48._0_8_ * auVar27._0_8_;
  auVar41._8_8_ = auVar22._8_8_ * dVar3 - auVar15._8_8_ * auVar27._8_8_;
  auVar22 = *(undefined1 (*) [16])&(this->MTransform).field_0x50;
  lVar8 = -(ulonglong)
           ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar22._4_4_,
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar22._0_4_) <=
           (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  auVar27 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                  *(undefined1 (*) [16])&(this->MTransform).field_0x40);
  lVar9 = -(ulonglong)(auVar35._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
  lVar10 = -(ulonglong)(auVar35._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
  auVar16._8_4_ = SUB84(auVar45._8_8_,0);
  auVar16._0_8_ = auVar45._0_8_;
  auVar16._12_4_ = (int)((ulonglong)auVar45._8_8_ >> 0x20);
  auVar36._0_8_ =
       (double)CONCAT44(~(uint)((ulonglong)lVar9 >> 0x20) & auVar27._4_4_,
                        ~(uint)lVar9 & auVar27._0_4_);
  auVar36._8_4_ = ~(uint)lVar10 & auVar27._8_4_;
  auVar36._12_4_ = ~(uint)((ulonglong)lVar10 >> 0x20) & auVar27._12_4_;
  local_b8 = auVar36._0_8_ * (dVar5 * dVar3 + dVar12 + auVar16._8_8_);
  dStack_b0 = auVar36._8_8_ * (dVar6 * dVar3 + dVar20 + auVar41._0_8_);
  pFVar1 = (this->MObject).Reference;
  auVar25._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar25._0_8_ = auVar22._0_8_;
  auVar25._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar22 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar25);
  auVar27 = blendpd(auVar45,auVar41,2);
  local_a8 = (double)CONCAT44(~(uint)((ulonglong)lVar8 >> 0x20) & auVar22._4_4_,
                              ~(uint)lVar8 & auVar22._0_4_) *
             (auVar48._0_8_ * dVar3 + dVar11 + auVar27._0_8_);
  dVar12 = (double)(**(code **)(pFVar1->_padding_ + 0x80))(pFVar1,&local_b8);
  auVar22 = *(undefined1 (*) [16])&this->MTransform;
  dVar5 = *(double *)&param_2->field_0x10 * *(double *)&(this->MTransform).field_0x50;
  dVar2 = *(double *)&(this->MTransform).field_0x58 * 0.0;
  dVar6 = *(double *)&(this->MTransform).field_0x18;
  dVar11 = *(double *)&(this->MTransform).field_0x40 * *(double *)param_2;
  dVar42 = *(double *)&(this->MTransform).field_0x48 * *(double *)&param_2->field_0x8;
  auVar27 = *(undefined1 (*) [16])&(this->MTransform).field_0x10;
  dVar20 = auVar27._0_8_;
  auVar25 = blendpd(auVar22,auVar27,2);
  auVar37._8_4_ = SUB84(dVar42,0);
  auVar37._0_8_ = dVar11;
  uVar34 = (undefined4)((ulonglong)dVar42 >> 0x20);
  auVar37._12_4_ = uVar34;
  auVar38._0_8_ = auVar37._8_8_ * auVar22._0_8_ - auVar22._8_8_ * dVar11;
  auVar38._8_8_ = dVar5 * auVar22._8_8_ - dVar20 * dVar42;
  auVar17._8_4_ = SUB84(dVar42,0);
  auVar17._0_8_ = dVar11;
  auVar17._12_4_ = uVar34;
  auVar4._8_4_ = SUB84(dVar2,0);
  auVar4._0_8_ = dVar5;
  auVar4._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  auVar22 = blendpd(auVar17,auVar4,2);
  auVar18._0_8_ = auVar22._0_8_ * dVar20 - auVar25._0_8_ * dVar5;
  auVar18._8_8_ = auVar22._8_8_ * auVar27._8_8_ - auVar25._8_8_ * dVar2;
  auVar22 = *(undefined1 (*) [16])&this->MTransform;
  auVar25 = blendpd(auVar38,auVar18,2);
  auVar39._0_8_ = auVar25._0_8_ + auVar25._0_8_;
  auVar39._8_8_ = auVar25._8_8_ + auVar25._8_8_;
  dVar2 = auVar38._8_8_ + auVar38._8_8_;
  dVar3 = auVar18._0_8_ + auVar18._0_8_;
  uVar34 = (undefined4)((ulonglong)dVar3 >> 0x20);
  auVar31._8_4_ = SUB84(dVar3,0);
  auVar31._0_8_ = dVar2;
  auVar31._12_4_ = uVar34;
  auVar28._8_4_ = SUB84(dVar3,0);
  auVar28._0_8_ = dVar2;
  auVar28._12_4_ = uVar34;
  auVar25 = blendpd(auVar28,auVar39,2);
  auVar32._0_8_ = auVar31._8_8_ * auVar22._0_8_ - auVar22._8_8_ * dVar2;
  auVar32._8_8_ = auVar39._0_8_ * auVar22._8_8_ - dVar20 * dVar3;
  auVar19._8_4_ = SUB84(auVar32._8_8_,0);
  auVar19._0_8_ = auVar32._0_8_;
  auVar19._12_4_ = (int)((ulonglong)auVar32._8_8_ >> 0x20);
  auVar22 = blendpd(auVar22,auVar27,2);
  auVar29._0_8_ = auVar25._0_8_ * dVar20 - auVar22._0_8_ * auVar39._0_8_;
  auVar29._8_8_ = auVar25._8_8_ * auVar27._8_8_ - auVar22._8_8_ * auVar39._8_8_;
  dVar3 = dVar3 * dVar6 + dVar42 + auVar29._0_8_;
  auVar22 = blendpd(auVar32,auVar29,2);
  auVar27._8_4_ = SUB84(dVar3,0);
  auVar27._0_8_ = dVar2 * dVar6 + dVar11 + auVar19._8_8_;
  auVar27._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *(undefined1 (*) [16])param_2 = auVar27;
  *(double *)&param_2->field_0x10 = auVar39._0_8_ * dVar6 + dVar5 + auVar22._0_8_;
  return dVar12;
}

// Raycast @ 14829eb10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
Chaos::TImplicitObjectTransformed<double,3,0>::Raycast
          (TImplicitObjectTransformed<double,3,0> *this,TVector<double,3> *param_1,
          TVector<double,3> *param_2,double param_3,double param_4,double *param_5,
          TVector<double,3> *param_6,TVector<double,3> *param_7,int *param_8)

{
  FImplicitObject *pFVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  char cVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  double dVar43;
  undefined4 uVar44;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined4 uVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  double dVar76;
  double dVar79;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar80 [16];
  double local_148;
  double dStack_140;
  double local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_d8;
  double dStack_d0;
  double local_c8;
  
  dVar34 = *(double *)&this->MTransform *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar43 = *(double *)&(this->MTransform).field_0x8 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  auVar46._0_8_ =
       *(double *)&(this->MTransform).field_0x10 *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  auVar46._8_8_ =
       *(double *)&(this->MTransform).field_0x18 *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar23._8_4_ = SUB84(dVar43,0);
  auVar23._0_8_ = dVar34;
  uVar44 = (undefined4)((ulonglong)dVar43 >> 0x20);
  auVar23._12_4_ = uVar44;
  dVar8 = *(double *)&param_1->field_0x10 - *(double *)&(this->MTransform).field_0x30;
  dVar76 = *(double *)param_1 - *(double *)&(this->MTransform).field_0x20;
  dVar79 = *(double *)&param_1->field_0x8 - *(double *)&(this->MTransform).field_0x28;
  auVar25._8_4_ = SUB84(dVar43,0);
  auVar25._0_8_ = dVar34;
  auVar25._12_4_ = uVar44;
  dVar45 = auVar23._8_8_;
  auVar26 = blendpd(auVar25,auVar46,2);
  auVar56._8_4_ = SUB84(auVar46._0_8_,0);
  auVar56._0_8_ = dVar45;
  auVar56._12_4_ = (int)((ulonglong)auVar46._0_8_ >> 0x20);
  auVar69._8_4_ = SUB84(dVar79,0);
  auVar69._0_8_ = dVar76;
  uVar44 = (undefined4)((ulonglong)dVar79 >> 0x20);
  auVar69._12_4_ = uVar44;
  auVar80._8_4_ = SUB84(dVar79,0);
  auVar80._0_8_ = dVar76;
  auVar80._12_4_ = uVar44;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = dVar8;
  auVar19 = blendpd(auVar80,auVar19,2);
  auVar70._0_8_ = auVar69._8_8_ * dVar34 - dVar45 * dVar76;
  auVar70._8_8_ = dVar8 * dVar43 - auVar56._8_8_ * dVar79;
  auVar20._0_8_ = auVar19._0_8_ * auVar46._0_8_ - auVar26._0_8_ * dVar8;
  auVar20._8_8_ = auVar19._8_8_ * auVar46._8_8_ - auVar26._8_8_ * 0.0;
  auVar19 = *(undefined1 (*) [16])&(this->MTransform).field_0x50;
  dVar17 = auVar70._8_8_ + auVar70._8_8_;
  dVar18 = auVar20._0_8_ + auVar20._0_8_;
  uVar44 = (undefined4)((ulonglong)dVar18 >> 0x20);
  auVar71 = blendpd(auVar70,auVar20,2);
  auVar55._8_4_ = SUB84(dVar18,0);
  auVar55._0_8_ = dVar17;
  auVar55._12_4_ = uVar44;
  auVar72._0_8_ = auVar71._0_8_ + auVar71._0_8_;
  auVar72._8_8_ = auVar71._8_8_ + auVar71._8_8_;
  auVar56 = blendpd(auVar55,auVar72,2);
  auVar2._4_8_ = auVar46._8_8_;
  auVar2._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
  auVar47._0_8_ = auVar2._0_8_ << 0x20;
  auVar47._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar47._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar66._8_4_ = SUB84(dVar18,0);
  auVar66._0_8_ = dVar17;
  auVar66._12_4_ = uVar44;
  auVar48._8_8_ = auVar47._8_8_;
  auVar48._0_8_ = auVar19._0_8_;
  local_128 = 0;
  uStack_120 = 0;
  auVar71 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                  *(undefined1 (*) [16])&(this->MTransform).field_0x40);
  auVar57._0_8_ = auVar56._0_8_ * auVar46._0_8_ - auVar26._0_8_ * auVar72._0_8_;
  auVar57._8_8_ = auVar56._8_8_ * auVar46._8_8_ - auVar26._8_8_ * auVar72._8_8_;
  auVar35._0_8_ =
       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                        *(uint *)&(this->MTransform).field_0x44,
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                        *(uint *)&(this->MTransform).field_0x40);
  auVar35._8_4_ = _UNK_15061cc88 & *(uint *)&(this->MTransform).field_0x48;
  auVar35._12_4_ = _UNK_15061cc8c & *(uint *)&(this->MTransform).field_0x4c;
  lVar6 = -(ulonglong)(auVar35._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
  lVar7 = -(ulonglong)(auVar35._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
  auVar36._0_8_ =
       (double)CONCAT44(~(uint)((ulonglong)lVar6 >> 0x20) & auVar71._4_4_,
                        ~(uint)lVar6 & auVar71._0_4_);
  auVar36._8_4_ = ~(uint)lVar7 & auVar71._8_4_;
  auVar36._12_4_ = ~(uint)((ulonglong)lVar7 >> 0x20) & auVar71._12_4_;
  auVar67._0_8_ = auVar66._8_8_ * dVar34 - dVar45 * dVar17;
  auVar67._8_8_ = auVar72._0_8_ * dVar43 - auVar46._0_8_ * dVar18;
  lVar6 = -(ulonglong)
           ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar19._4_4_,
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar19._0_4_) <=
           (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  auVar21._8_4_ = SUB84(auVar46._8_8_,0);
  auVar21._0_8_ = auVar46._8_8_;
  auVar21._12_4_ = (int)((ulonglong)auVar46._8_8_ >> 0x20);
  auVar80 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,
                  *(undefined1 (*) [16])&(this->MTransform).field_0x40);
  auVar26._8_4_ = SUB84(auVar67._8_8_,0);
  auVar26._0_8_ = auVar67._0_8_;
  auVar26._12_4_ = (int)((ulonglong)auVar67._8_8_ >> 0x20);
  auVar68 = blendpd(auVar67,auVar57,2);
  auVar71 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar48);
  auVar49._0_8_ =
       *(double *)&(this->MTransform).field_0x10 *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  auVar49._8_8_ =
       *(double *)&(this->MTransform).field_0x18 *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  local_118 = auVar36._0_8_ * (auVar46._8_8_ * dVar17 + dVar76 + auVar26._8_8_);
  dStack_110 = auVar36._8_8_ * (auVar21._8_8_ * dVar18 + dVar79 + auVar57._0_8_);
  auVar73._8_4_ = SUB84(auVar49._8_8_,0);
  auVar73._0_8_ = auVar49._0_8_;
  auVar73._12_4_ = (int)((ulonglong)auVar49._8_8_ >> 0x20);
  dVar34 = *(double *)&this->MTransform *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar43 = *(double *)&(this->MTransform).field_0x8 *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  auVar27._8_4_ = SUB84(dVar43,0);
  auVar27._0_8_ = dVar34;
  uVar44 = (undefined4)((ulonglong)dVar43 >> 0x20);
  auVar27._12_4_ = uVar44;
  auVar56 = blendpd(auVar27,auVar49,2);
  auVar19 = *(undefined1 (*) [16])param_2;
  local_108 = (double)CONCAT44(~(uint)((ulonglong)lVar6 >> 0x20) & auVar71._4_4_,
                               ~(uint)lVar6 & auVar71._0_4_) *
              (auVar46._8_8_ * auVar72._0_8_ + dVar8 + auVar68._0_8_);
  dVar17 = *(double *)&param_2->field_0x10;
  auVar24._8_4_ = SUB84(dVar43,0);
  auVar24._0_8_ = dVar34;
  auVar24._12_4_ = uVar44;
  dVar76 = auVar19._8_8_;
  auVar71._8_8_ = 0;
  auVar71._0_8_ = dVar17;
  auVar71 = blendpd(auVar19,auVar71,2);
  auVar77._0_8_ = dVar76 * dVar34 - auVar19._0_8_ * auVar24._8_8_;
  auVar77._8_8_ = dVar17 * dVar43 - dVar76 * auVar49._0_8_;
  dVar45 = auVar56._8_8_;
  auVar22._0_8_ = auVar71._0_8_ * auVar49._0_8_ - dVar17 * auVar56._0_8_;
  auVar22._8_8_ = auVar71._8_8_ * auVar49._8_8_ - dVar45 * 0.0;
  dVar18 = auVar77._8_8_ + auVar77._8_8_;
  dVar8 = auVar22._0_8_ + auVar22._0_8_;
  uVar44 = SUB84(dVar8,0);
  uVar54 = (undefined4)((ulonglong)dVar8 >> 0x20);
  auVar71 = blendpd(auVar77,auVar22,2);
  auVar58._8_4_ = uVar44;
  auVar58._0_8_ = dVar18;
  auVar58._12_4_ = uVar54;
  auVar68._8_4_ = uVar44;
  auVar68._0_8_ = dVar18;
  auVar68._12_4_ = uVar54;
  auVar78._0_8_ = auVar71._0_8_ + auVar71._0_8_;
  auVar78._8_8_ = auVar71._8_8_ + auVar71._8_8_;
  auVar37._8_4_ = uVar44;
  auVar37._0_8_ = dVar18;
  auVar37._12_4_ = uVar54;
  auVar59._0_8_ = auVar58._8_8_ * dVar34 - dVar18 * auVar24._8_8_;
  auVar59._8_8_ = auVar78._0_8_ * dVar43 - auVar68._8_8_ * auVar49._0_8_;
  auVar71 = blendpd(auVar37,auVar78,2);
  auVar9._8_4_ = SUB84(auVar78._8_8_,0);
  auVar9._0_8_ = auVar78._0_8_;
  auVar9._12_4_ = (int)((ulonglong)auVar78._8_8_ >> 0x20);
  auVar3._4_8_ = dVar45;
  auVar3._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
  auVar28._0_8_ = auVar3._0_8_ << 0x20;
  auVar28._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar28._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar38._0_8_ = auVar71._0_8_ * auVar49._0_8_ - auVar78._0_8_ * auVar56._0_8_;
  auVar38._8_8_ = auVar71._8_8_ * auVar49._8_8_ - auVar9._8_8_ * dVar45;
  auVar71 = *(undefined1 (*) [16])&(this->MTransform).field_0x50;
  auVar29._8_8_ = auVar28._8_8_;
  auVar29._0_8_ = auVar71._0_8_;
  auVar10._8_4_ = SUB84(auVar59._8_8_,0);
  auVar10._0_8_ = auVar59._0_8_;
  auVar10._12_4_ = (int)((ulonglong)auVar59._8_8_ >> 0x20);
  auVar50._0_8_ =
       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                        *(uint *)&(this->MTransform).field_0x44,
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                        *(uint *)&(this->MTransform).field_0x40);
  auVar50._8_4_ = _UNK_15061cc88 & *(uint *)&(this->MTransform).field_0x48;
  auVar50._12_4_ = _UNK_15061cc8c & *(uint *)&(this->MTransform).field_0x4c;
  lVar6 = -(ulonglong)(auVar50._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
  lVar7 = -(ulonglong)(auVar50._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
  auVar51._0_8_ =
       (double)CONCAT44(~(uint)((ulonglong)lVar6 >> 0x20) & auVar80._4_4_,
                        ~(uint)lVar6 & auVar80._0_4_);
  auVar51._8_4_ = ~(uint)lVar7 & auVar80._8_4_;
  auVar51._12_4_ = ~(uint)((ulonglong)lVar7 >> 0x20) & auVar80._12_4_;
  lVar6 = -(ulonglong)
           ((double)CONCAT44(auVar71._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             auVar71._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
           (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  local_148 = auVar51._0_8_ * (dVar18 * auVar73._8_8_ + auVar19._0_8_ + auVar10._8_8_);
  dStack_140 = auVar51._8_8_ * (dVar8 * auVar49._8_8_ + dVar76 + auVar38._0_8_);
  auVar71 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar29);
  pFVar1 = (this->MObject).Reference;
  auVar19 = blendpd(auVar59,auVar38,2);
  local_138 = (double)CONCAT44(~(uint)((ulonglong)lVar6 >> 0x20) & auVar71._4_4_,
                               ~(uint)lVar6 & auVar71._0_4_) *
              (auVar78._0_8_ * auVar73._8_8_ + dVar17 + auVar19._0_8_);
  cVar4 = (**(code **)(pFVar1->_padding_ + 0xb0))
                    (pFVar1,&local_118,&local_148,param_3,param_4,param_5,&local_f8,&local_d8,
                     param_8);
  if (cVar4 == '\0') {
    bVar5 = false;
  }
  else {
    if (*param_5 != 0.0) {
      auVar19 = *(undefined1 (*) [16])&(this->MTransform).field_0x10;
      dVar17 = auVar19._0_8_;
      auVar74._0_8_ = local_e8 * *(double *)&(this->MTransform).field_0x50;
      auVar74._8_8_ = *(double *)&(this->MTransform).field_0x58 * 0.0;
      dVar8 = *(double *)&(this->MTransform).field_0x18;
      local_f8 = *(double *)&(this->MTransform).field_0x40 * local_f8;
      dStack_f0 = *(double *)&(this->MTransform).field_0x48 * dStack_f0;
      auVar71 = *(undefined1 (*) [16])&this->MTransform;
      auVar56 = blendpd(auVar71,auVar19,2);
      auVar60._8_4_ = SUB84(dStack_f0,0);
      auVar60._0_8_ = local_f8;
      uVar44 = (undefined4)((ulonglong)dStack_f0 >> 0x20);
      auVar60._12_4_ = uVar44;
      auVar61._0_8_ = auVar60._8_8_ * auVar71._0_8_ - auVar71._8_8_ * local_f8;
      auVar61._8_8_ = auVar74._0_8_ * auVar71._8_8_ - dVar17 * dStack_f0;
      auVar11._8_4_ = SUB84(dStack_f0,0);
      auVar11._0_8_ = local_f8;
      auVar11._12_4_ = uVar44;
      auVar71 = blendpd(auVar11,auVar74,2);
      auVar52._8_4_ = SUB84(auVar61._8_8_,0);
      auVar52._0_8_ = auVar61._0_8_;
      auVar52._12_4_ = (int)((ulonglong)auVar61._8_8_ >> 0x20);
      auVar12._0_8_ = auVar71._0_8_ * dVar17 - auVar56._0_8_ * auVar74._0_8_;
      auVar12._8_8_ = auVar71._8_8_ * auVar19._8_8_ - auVar56._8_8_ * auVar74._8_8_;
      auVar71 = *(undefined1 (*) [16])&this->MTransform;
      auVar56 = blendpd(auVar61,auVar12,2);
      auVar62._0_8_ = auVar56._0_8_ + auVar56._0_8_;
      auVar62._8_8_ = auVar56._8_8_ + auVar56._8_8_;
      dVar45 = auVar52._8_8_ + auVar52._8_8_;
      dVar34 = auVar12._0_8_ + auVar12._0_8_;
      auVar39._8_4_ = SUB84(dVar34,0);
      auVar39._0_8_ = dVar45;
      uVar44 = (undefined4)((ulonglong)dVar34 >> 0x20);
      auVar39._12_4_ = uVar44;
      auVar30._8_4_ = SUB84(dVar34,0);
      auVar30._0_8_ = dVar45;
      auVar30._12_4_ = uVar44;
      auVar56 = blendpd(auVar30,auVar62,2);
      auVar40._0_8_ = auVar39._8_8_ * auVar71._0_8_ - auVar71._8_8_ * dVar45;
      auVar40._8_8_ = auVar62._0_8_ * auVar71._8_8_ - dVar17 * dVar34;
      auVar71 = blendpd(auVar71,auVar19,2);
      auVar13._8_4_ = SUB84(auVar40._8_8_,0);
      auVar13._0_8_ = auVar40._0_8_;
      auVar13._12_4_ = (int)((ulonglong)auVar40._8_8_ >> 0x20);
      auVar31._0_8_ = auVar56._0_8_ * dVar17 - auVar71._0_8_ * auVar62._0_8_;
      auVar31._8_8_ = auVar56._8_8_ * auVar19._8_8_ - auVar71._8_8_ * auVar62._8_8_;
      dVar18 = *(double *)&(this->MTransform).field_0x28;
      auVar19 = blendpd(auVar40,auVar31,2);
      dVar17 = *(double *)&(this->MTransform).field_0x30;
      *(double *)param_6 =
           dVar45 * dVar8 + local_f8 + auVar13._8_8_ + *(double *)&(this->MTransform).field_0x20;
      *(double *)&param_6->field_0x8 = dVar34 * dVar8 + dStack_f0 + auVar31._0_8_ + dVar18;
      *(double *)&param_6->field_0x10 =
           auVar62._0_8_ * dVar8 + auVar74._0_8_ + auVar19._0_8_ + dVar17;
      auVar75._0_8_ = local_c8 * *(double *)&(this->MTransform).field_0x50;
      auVar75._8_8_ = *(double *)&(this->MTransform).field_0x58 * 0.0;
      auVar19 = *(undefined1 (*) [16])&(this->MTransform).field_0x10;
      dVar18 = auVar19._0_8_;
      dVar17 = *(double *)&(this->MTransform).field_0x18;
      local_d8 = *(double *)&(this->MTransform).field_0x40 * local_d8;
      dStack_d0 = *(double *)&(this->MTransform).field_0x48 * dStack_d0;
      auVar71 = *(undefined1 (*) [16])&this->MTransform;
      auVar63._8_4_ = SUB84(dStack_d0,0);
      auVar63._0_8_ = local_d8;
      uVar44 = (undefined4)((ulonglong)dStack_d0 >> 0x20);
      auVar63._12_4_ = uVar44;
      auVar56 = blendpd(auVar71,auVar19,2);
      auVar64._0_8_ = auVar63._8_8_ * auVar71._0_8_ - auVar71._8_8_ * local_d8;
      auVar64._8_8_ = auVar75._0_8_ * auVar71._8_8_ - dVar18 * dStack_d0;
      auVar14._8_4_ = SUB84(dStack_d0,0);
      auVar14._0_8_ = local_d8;
      auVar14._12_4_ = uVar44;
      auVar53._8_4_ = SUB84(auVar64._8_8_,0);
      auVar53._0_8_ = auVar64._0_8_;
      auVar53._12_4_ = (int)((ulonglong)auVar64._8_8_ >> 0x20);
      auVar71 = blendpd(auVar14,auVar75,2);
      auVar15._0_8_ = auVar71._0_8_ * dVar18 - auVar56._0_8_ * auVar75._0_8_;
      auVar15._8_8_ = auVar71._8_8_ * auVar19._8_8_ - auVar56._8_8_ * auVar75._8_8_;
      auVar71 = blendpd(auVar64,auVar15,2);
      dVar8 = auVar53._8_8_ + auVar53._8_8_;
      dVar45 = auVar15._0_8_ + auVar15._0_8_;
      auVar65._0_8_ = auVar71._0_8_ + auVar71._0_8_;
      auVar65._8_8_ = auVar71._8_8_ + auVar71._8_8_;
      auVar71 = *(undefined1 (*) [16])&this->MTransform;
      auVar41._8_4_ = SUB84(dVar45,0);
      auVar41._0_8_ = dVar8;
      uVar44 = (undefined4)((ulonglong)dVar45 >> 0x20);
      auVar41._12_4_ = uVar44;
      auVar32._8_4_ = SUB84(dVar45,0);
      auVar32._0_8_ = dVar8;
      auVar32._12_4_ = uVar44;
      auVar56 = blendpd(auVar32,auVar65,2);
      auVar42._0_8_ = auVar41._8_8_ * auVar71._0_8_ - auVar71._8_8_ * dVar8;
      auVar42._8_8_ = auVar65._0_8_ * auVar71._8_8_ - dVar18 * dVar45;
      auVar71 = blendpd(auVar71,auVar19,2);
      auVar16._8_4_ = SUB84(auVar42._8_8_,0);
      auVar16._0_8_ = auVar42._0_8_;
      auVar16._12_4_ = (int)((ulonglong)auVar42._8_8_ >> 0x20);
      auVar33._0_8_ = auVar56._0_8_ * dVar18 - auVar71._0_8_ * auVar65._0_8_;
      auVar33._8_8_ = auVar56._8_8_ * auVar19._8_8_ - auVar71._8_8_ * auVar65._8_8_;
      auVar19 = blendpd(auVar42,auVar33,2);
      *(double *)param_7 = dVar8 * dVar17 + local_d8 + auVar16._8_8_;
      *(double *)&param_7->field_0x8 = dVar45 * dVar17 + dStack_d0 + auVar33._0_8_;
      *(double *)&param_7->field_0x10 = auVar65._0_8_ * dVar17 + auVar75._0_8_ + auVar19._0_8_;
    }
    bVar5 = true;
  }
  return bVar5;
}

// Serialize @ 1482a8ad0

void __thiscall
Chaos::TImplicitObjectTransformed<double,3,0>::Serialize
          (TImplicitObjectTransformed<double,3,0> *this,FChaosArchive *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 local_res8 [8];
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("bSerializable",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ImplicitObjectTransformed.h"
                     ,0x13c,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (**(code **)(this->_padding_ + 0x118))(this,local_res8);
  FImplicitObject::SerializeImp((FImplicitObject *)this,(FArchive *)param_1);
  FChaosArchive::SerializePtr<Chaos::FImplicitObject>(param_1,&this->MObject);
  UE::Math::operator<<((FArchive *)param_1,(TTransform<double> *)&this->MTransform);
  TBox<double,3>::SerializeAsAABB((FArchive *)param_1,&this->MLocalBoundingBox);
  return;
}

// VisitLeafObjectsImpl @ 1482bf510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::TImplicitObjectTransformed<double,3,0>::VisitLeafObjectsImpl
          (TImplicitObjectTransformed<double,3,0> *this,TRigidTransform<double,3> *param_1,
          int param_2,int *param_3,int *param_4,
          TFunctionRef<void___cdecl(Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int)>
          *param_5)

{
  FImplicitObject *pFVar1;
  code *pcVar2;
  undefined1 auStack_138 [32];
  int *local_118;
  TFunctionRef<void___cdecl(Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int)>
  *local_110;
  TTransform<double> local_108;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  *param_3 = *param_3 + 1;
  pFVar1 = (this->MObject).Reference;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x140);
  local_108.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_108.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_108.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_108.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_108.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_108.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_108.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_108.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_108.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_108.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_108.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_108.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_108.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_108.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_108.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_108.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_108.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_108.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&local_108,(TTransform<double> *)&this->MTransform,(TTransform<double> *)param_1);
  local_a8 = local_108.Rotation.XY.m128d_f64[0];
  dStack_a0 = local_108.Rotation.XY.m128d_f64[1];
  local_98 = local_108.Rotation.ZW.m128d_f64[0];
  dStack_90 = local_108.Rotation.ZW.m128d_f64[1];
  local_88 = local_108.Translation.XY.m128d_f64[0];
  dStack_80 = local_108.Translation.XY.m128d_f64[1];
  local_78 = local_108.Translation.ZW.m128d_f64[0];
  dStack_70 = local_108.Translation.ZW.m128d_f64[1];
  local_110 = param_5;
  local_68 = local_108.Scale3D.XY.m128d_f64[0]._0_4_;
  uStack_64 = local_108.Scale3D.XY.m128d_f64[0]._4_4_;
  uStack_60 = local_108.Scale3D.XY.m128d_f64[1]._0_4_;
  uStack_5c = local_108.Scale3D.XY.m128d_f64[1]._4_4_;
  local_58 = local_108.Scale3D.ZW.m128d_f64[0]._0_4_;
  uStack_54 = local_108.Scale3D.ZW.m128d_f64[0]._4_4_;
  uStack_50 = local_108.Scale3D.ZW.m128d_f64[1]._0_4_;
  uStack_4c = local_108.Scale3D.ZW.m128d_f64[1]._4_4_;
  local_118 = param_4;
  (*pcVar2)(pFVar1,&local_a8,param_2,param_3);
  return;
}

// VisitObjectsImpl @ 1482bf650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::TImplicitObjectTransformed<double,3,0>::VisitObjectsImpl
          (TImplicitObjectTransformed<double,3,0> *this,TRigidTransform<double,3> *param_1,
          int param_2,int *param_3,int *param_4,
          TFunctionRef<bool___cdecl(Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int)>
          *param_5)

{
  FImplicitObject *pFVar1;
  code *pcVar2;
  char cVar3;
  undefined1 uVar4;
  undefined1 auStack_178 [32];
  int *local_158;
  TFunctionRef<bool___cdecl(Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int)>
  *local_150;
  undefined4 local_148 [2];
  int local_140 [2];
  int local_138 [2];
  TImplicitObjectTransformed<double,3,0> *local_130;
  int *local_128;
  TTransform<double> local_118;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_128 = param_4;
  local_150 = (TFunctionRef<bool___cdecl(Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int)>
               *)local_148;
  local_140[0] = *param_3;
  local_158 = local_140;
  local_148[0] = 0xffffffff;
  local_138[0] = param_2;
  local_130 = this;
  cVar3 = (**(code **)param_5)(*(undefined8 *)&param_5->field_0x8,&local_130,param_1,local_138);
  *param_3 = *param_3 + 1;
  uVar4 = 0;
  if (cVar3 != '\0') {
    pFVar1 = (this->MObject).Reference;
    local_118.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_118.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_118.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    pcVar2 = *(code **)(pFVar1->_padding_ + 0x148);
    local_118.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_118.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_118.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_118.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_118.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_118.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_118.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_118.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_118.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_118.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_118.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_118.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_118.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_118.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_118.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply
              (&local_118,(TTransform<double> *)&this->MTransform,(TTransform<double> *)param_1);
    local_b8 = local_118.Rotation.XY.m128d_f64[0];
    dStack_b0 = local_118.Rotation.XY.m128d_f64[1];
    local_a8 = local_118.Rotation.ZW.m128d_f64[0];
    dStack_a0 = local_118.Rotation.ZW.m128d_f64[1];
    local_98 = local_118.Translation.XY.m128d_f64[0];
    dStack_90 = local_118.Translation.XY.m128d_f64[1];
    local_88 = local_118.Translation.ZW.m128d_f64[0];
    dStack_80 = local_118.Translation.ZW.m128d_f64[1];
    local_150 = param_5;
    local_78 = local_118.Scale3D.XY.m128d_f64[0]._0_4_;
    uStack_74 = local_118.Scale3D.XY.m128d_f64[0]._4_4_;
    uStack_70 = local_118.Scale3D.XY.m128d_f64[1]._0_4_;
    uStack_6c = local_118.Scale3D.XY.m128d_f64[1]._4_4_;
    local_68 = local_118.Scale3D.ZW.m128d_f64[0]._0_4_;
    uStack_64 = local_118.Scale3D.ZW.m128d_f64[0]._4_4_;
    uStack_60 = local_118.Scale3D.ZW.m128d_f64[1]._0_4_;
    uStack_5c = local_118.Scale3D.ZW.m128d_f64[1]._4_4_;
    local_158 = local_128;
    uVar4 = (*pcVar2)(pFVar1,&local_b8,param_2,param_3);
  }
  return (bool)uVar4;
}

// VisitOverlappingLeafObjectsImpl @ 1482bf8a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Chaos::TImplicitObjectTransformed<double,3,0>::VisitOverlappingLeafObjectsImpl
          (TImplicitObjectTransformed<double,3,0> *this,TAABB<double,3> *param_1,
          TRigidTransform<double,3> *param_2,int param_3,int *param_4,int *param_5,
          TFunctionRef<void___cdecl(Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int)>
          *param_6)

{
  FImplicitObject *pFVar1;
  code *pcVar2;
  undefined1 auStack_188 [32];
  int *local_168;
  int *local_160;
  TFunctionRef<void___cdecl(Chaos::FImplicitObject_const_*,Chaos::TRigidTransform<double,3>_const_&,int,int,int)>
  *local_158;
  TAABB<double,3> local_148;
  TTransform<double> local_118;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_188;
  *param_4 = *param_4 + 1;
  TAABB<double,3>::InverseTransformedAABB(param_1,&local_148,&this->MTransform);
  pFVar1 = (this->MObject).Reference;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x138);
  local_118.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_118.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_118.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_118.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_118.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_118.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_118.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_118.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_118.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_118.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_118.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_118.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_118.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_118.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_118.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_118.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_118.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_118.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&local_118,(TTransform<double> *)&this->MTransform,(TTransform<double> *)param_2);
  local_b8 = local_118.Rotation.XY.m128d_f64[0];
  dStack_b0 = local_118.Rotation.XY.m128d_f64[1];
  local_a8 = local_118.Rotation.ZW.m128d_f64[0];
  dStack_a0 = local_118.Rotation.ZW.m128d_f64[1];
  local_98 = local_118.Translation.XY.m128d_f64[0];
  dStack_90 = local_118.Translation.XY.m128d_f64[1];
  local_88 = local_118.Translation.ZW.m128d_f64[0];
  dStack_80 = local_118.Translation.ZW.m128d_f64[1];
  local_158 = param_6;
  local_160 = param_5;
  local_78 = local_118.Scale3D.XY.m128d_f64[0]._0_4_;
  uStack_74 = local_118.Scale3D.XY.m128d_f64[0]._4_4_;
  uStack_70 = local_118.Scale3D.XY.m128d_f64[1]._0_4_;
  uStack_6c = local_118.Scale3D.XY.m128d_f64[1]._4_4_;
  local_68 = local_118.Scale3D.ZW.m128d_f64[0]._0_4_;
  uStack_64 = local_118.Scale3D.ZW.m128d_f64[0]._4_4_;
  uStack_60 = local_118.Scale3D.ZW.m128d_f64[1]._0_4_;
  uStack_5c = local_118.Scale3D.ZW.m128d_f64[1]._4_4_;
  local_168 = param_4;
  (*pcVar2)(pFVar1,&local_148,&local_b8,param_3);
  return;
}

