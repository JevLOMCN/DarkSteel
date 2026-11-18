// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Constraints
// Functions: 11

// StaticClass @ 14648da00

UClass * __cdecl UTickableScaleConstraint::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTickableScaleConstraint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Constraints",L"TickableScaleConstraint",
               &Z_Registration_Info_UClass_UTickableScaleConstraint.InnerSingleton,
               StaticRegisterNativesUTickableScaleConstraint,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTickableScaleConstraint>,
               InternalVTableHelperCtorCaller<UTickableScaleConstraint>,local_res8,
               UTickableTransformConstraint::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTickableScaleConstraint.InnerSingleton;
}

// UTickableScaleConstraint @ 14649eb90

UTickableScaleConstraint * __thiscall
UTickableScaleConstraint::UTickableScaleConstraint
          (UTickableScaleConstraint *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UTickableTransformConstraint::UTickableTransformConstraint
            ((UTickableTransformConstraint *)this,param_1);
  this->_padding_ = (longlong)&___7UTickableScaleConstraint__6B_;
  (this->Cache).CachedInputHash = 0;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->OffsetScale).field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->OffsetScale).field0_0x0._s_0.Y = (double)uVar1;
  (this->OffsetScale).field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  (this->AxisFilter).bX = true;
  (this->AxisFilter).bY = true;
  (this->AxisFilter).bZ = true;
  return this;
}

// UTickableScaleConstraint @ 14649ebf0

UTickableScaleConstraint * __thiscall
UTickableScaleConstraint::UTickableScaleConstraint(UTickableScaleConstraint *this)

{
  undefined8 uVar1;
  
  UTickableTransformConstraint::UTickableTransformConstraint((UTickableTransformConstraint *)this);
  this->_padding_ = (longlong)&___7UTickableScaleConstraint__6B_;
  (this->Cache).CachedInputHash = 0;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->OffsetScale).field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->OffsetScale).field0_0x0._s_0.Y = (double)uVar1;
  (this->OffsetScale).field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  (this->AxisFilter).bX = true;
  (this->AxisFilter).bY = true;
  (this->AxisFilter).bZ = true;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 2;
  return this;
}

// ~UTickableScaleConstraint @ 14649fc50

void __thiscall UTickableScaleConstraint::~UTickableScaleConstraint(UTickableScaleConstraint *this)

{
  this->_padding_ = (longlong)&___7UTickableConstraint__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<ULevel,FWeakObjectPtr>,FConstraintTickFunction>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 1464a1440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall `UTickableScaleConstraint::GetFunction'::__l2::<lambda_1>::operator()(void *this)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong *plVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  TTransform<double> *pTVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined1 auStack_158 [32];
  undefined1 local_138 [12];
  undefined4 uStack_12c;
  double local_128;
  double local_110;
  TTransform<double> local_108;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_158;
  cVar10 = (**(code **)(**(longlong **)this + 0x2d0))();
  if (cVar10 != '\0') {
    fVar17 = (*(UTickableTransformConstraint **)this)->Weight;
    if (__real_3f800000 <= fVar17) {
      fVar17 = __real_3f800000;
    }
    if (fVar17 <= 0.0) {
      fVar17 = 0.0;
    }
    if (__real_38d1b717 <= fVar17) {
      UTickableTransformConstraint::PreEvaluate(*(UTickableTransformConstraint **)this);
      pTVar11 = UTickableTransformConstraint::GetParentGlobalTransform
                          (*(UTickableTransformConstraint **)this,&local_108);
      dVar14 = (pTVar11->Scale3D).ZW.m128d_f64[0];
      uVar12 = (undefined4)((ulonglong)dVar14 >> 0x20);
      auVar1 = *(undefined1 (*) [16])(pTVar11->Scale3D).XY.m128d_f64;
      dVar6 = auVar1._0_8_;
      uVar16 = auVar1._8_4_;
      uVar15 = auVar1._12_4_;
      local_128 = dVar14;
      UTickableTransformConstraint::GetChildGlobalTransform
                (*(UTickableTransformConstraint **)this,&local_a8);
      lVar2 = *(longlong *)this;
      dVar8 = (double)CONCAT44(local_a8.Scale3D.XY.m128d_f64[0]._4_4_,
                               local_a8.Scale3D.XY.m128d_f64[0]._0_4_);
      dVar9 = (double)CONCAT44(local_a8.Scale3D.XY.m128d_f64[1]._4_4_,
                               local_a8.Scale3D.XY.m128d_f64[1]._0_4_);
      local_110 = local_a8.Scale3D.ZW.m128d_f64[0];
      dVar13 = auVar1._8_8_;
      if (*(char *)(lVar2 + 0xa0) == '\0') {
        uVar7 = SUB84(dVar14,0);
      }
      else {
        dVar6 = dVar6 * *(double *)(lVar2 + 0xb8);
        dVar14 = local_128 * *(double *)(lVar2 + 200);
        uVar12 = (undefined4)((ulonglong)dVar14 >> 0x20);
        dVar13 = dVar13 * *(double *)(lVar2 + 0xc0);
        uVar15 = (undefined4)((ulonglong)dVar13 >> 0x20);
        uVar7 = SUB84(dVar14,0);
        uVar16 = SUB84(dVar13,0);
      }
      dVar5 = (double)CONCAT44(uVar12,uVar7);
      local_138._8_4_ = uVar16;
      local_138._0_8_ = dVar6;
      uStack_12c = uVar15;
      if (fVar17 < __real_3f7ff972) {
        dVar4 = (double)fVar17;
        dVar5 = (dVar14 - local_a8.Scale3D.ZW.m128d_f64[0]) * dVar4 +
                local_a8.Scale3D.ZW.m128d_f64[0];
        dVar14 = (dVar13 - dVar9) * dVar4 + dVar9;
        local_138._8_4_ = SUB84(dVar14,0);
        local_138._0_8_ = (dVar6 - dVar8) * dVar4 + dVar8;
        uStack_12c = (int)((ulonglong)dVar14 >> 0x20);
      }
      if (*(char *)(lVar2 + 0xd0) == '\0') {
        local_138._0_8_ = dVar8;
      }
      if (*(char *)(lVar2 + 0xd1) == '\0') {
        stack0xfffffffffffffed0 = dVar9;
      }
      if (*(char *)(lVar2 + 0xd2) == '\0') {
        dVar5 = local_a8.Scale3D.ZW.m128d_f64[0];
      }
      local_a8.Scale3D.XY.m128d_f64[0]._0_4_ = local_138._0_4_;
      local_a8.Scale3D.XY.m128d_f64[0]._4_4_ = local_138._4_4_;
      local_a8.Scale3D.XY.m128d_f64[1]._0_4_ = local_138._8_4_;
      local_a8.Scale3D.XY.m128d_f64[1]._4_4_ = uStack_12c;
      local_a8.Scale3D.ZW.m128d_f64[1] = 0.0;
      plVar3 = *(longlong **)(lVar2 + 0x98);
      local_a8.Scale3D.ZW.m128d_f64[0] = dVar5;
      if ((plVar3 != (longlong *)0x0) &&
         (cVar10 = (**(code **)(*plVar3 + 0x2b0))(plVar3,1), cVar10 != '\0')) {
        (**(code **)(**(longlong **)(lVar2 + 0x98) + 0x2b8))(*(longlong **)(lVar2 + 0x98),&local_a8)
        ;
      }
      if ((TransformableHandleUtils::bNewEvaluation == false) &&
         (*(longlong **)(*(longlong *)this + 0x98) != (longlong *)0x0)) {
        (**(code **)(**(longlong **)(*(longlong *)this + 0x98) + 0x2f0))();
      }
    }
  }
  return;
}

// CalculateInputHash @ 1464a8760

uint __thiscall UTickableScaleConstraint::CalculateInputHash(UTickableScaleConstraint *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  double local_88;
  double dStack_80;
  double local_78;
  TTransform<double> local_68;
  
  UTickableTransformConstraint::GetChildLocalTransform
            ((UTickableTransformConstraint *)this,&local_68);
  local_78 = local_68.Scale3D.ZW.m128d_f64[0];
  local_88 = local_68.Scale3D.XY.m128d_f64[0];
  dStack_80 = local_68.Scale3D.XY.m128d_f64[1];
  uVar1 = FCrc::MemCrc_DEPRECATED(&local_88,0x18,0);
  uVar3 = uVar1 >> 0xd ^ -uVar1;
  uVar2 = (-0x61c88647 - uVar3) - uVar1 ^ uVar3 << 8;
  uVar4 = (uVar1 - uVar2) - uVar3 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar4 >> 0xc;
  uVar1 = (uVar2 - uVar3) - uVar4 ^ uVar3 << 0x10;
  uVar4 = (uVar4 - uVar1) - uVar3 ^ uVar1 >> 5;
  uVar3 = (uVar3 - uVar4) - uVar1 ^ uVar4 >> 3;
  uVar2 = (uVar1 - uVar3) - uVar4 ^ uVar3 << 10;
  UTickableTransformConstraint::GetChildGlobalTransform
            ((UTickableTransformConstraint *)this,&local_68);
  local_78 = local_68.Scale3D.ZW.m128d_f64[0];
  local_88 = local_68.Scale3D.XY.m128d_f64[0];
  dStack_80 = local_68.Scale3D.XY.m128d_f64[1];
  uVar1 = FCrc::MemCrc_DEPRECATED(&local_88,0x18,0);
  uVar3 = ((uVar4 - uVar2) - uVar3 ^ uVar2 >> 0xf) - uVar1 ^ uVar1 >> 0xd;
  uVar2 = (-0x61c88647 - uVar3) - uVar1 ^ uVar3 << 8;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 0xc;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 << 0x10;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar1 ^ uVar3 << 10;
  return (uVar1 - uVar2) - uVar3 ^ uVar2 >> 0xf;
}

// ComputeOffset @ 1464a9fc0

void __thiscall UTickableScaleConstraint::ComputeOffset(UTickableScaleConstraint *this)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  double dVar5;
  undefined8 uVar6;
  double *pdVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  TTransform<double> local_c8;
  TTransform<double> local_68;
  
  UTickableTransformConstraint::GetParentGlobalTransform
            ((UTickableTransformConstraint *)this,&local_c8);
  UTickableTransformConstraint::GetChildGlobalTransform
            ((UTickableTransformConstraint *)this,&local_68);
  uVar6 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  lVar4 = this->_padding_;
  (this->OffsetScale).field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->OffsetScale).field0_0x0._s_0.Y = (double)uVar6;
  (this->OffsetScale).field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  dVar5 = __real_3f1a36e2e0000000;
  uVar11 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar9 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  if ((char)lVar4 != '\0') {
    (this->OffsetScale).field0_0x0._s_0.X = local_68.Scale3D.XY.m128d_f64[0];
    (this->OffsetScale).field0_0x0._s_0.Y = local_68.Scale3D.XY.m128d_f64[1];
    (this->OffsetScale).field0_0x0._s_0.Z = local_68.Scale3D.ZW.m128d_f64[0];
    dVar3 = 0.0;
    uVar8 = local_c8.Scale3D.XY.m128d_f64[0]._0_4_ & uVar9;
    uVar10 = local_c8.Scale3D.XY.m128d_f64[0]._4_4_ & uVar11;
    if ((double)CONCAT44(uVar10,uVar8) < dVar5 || (double)CONCAT44(uVar10,uVar8) == dVar5) {
      dVar2 = 0.0;
    }
    else {
      dVar2 = (this->OffsetScale).field0_0x0._s_0.X / local_c8.Scale3D.XY.m128d_f64[0];
    }
    (this->OffsetScale).field0_0x0._s_0.X = dVar2;
    pdVar1 = &(this->OffsetScale).field0_0x0._s_0.Y;
    uVar8 = local_c8.Scale3D.XY.m128d_f64[1]._0_4_ & uVar9;
    uVar10 = local_c8.Scale3D.XY.m128d_f64[1]._4_4_ & uVar11;
    if ((double)CONCAT44(uVar10,uVar8) < dVar5 || (double)CONCAT44(uVar10,uVar8) == dVar5) {
      dVar2 = 0.0;
    }
    else {
      dVar2 = *pdVar1 / local_c8.Scale3D.XY.m128d_f64[1];
    }
    pdVar7 = &(this->OffsetScale).field0_0x0._s_0.Z;
    *pdVar1 = dVar2;
    uVar9 = SUB84(local_c8.Scale3D.ZW.m128d_f64[0],0) & uVar9;
    uVar11 = (uint)((ulonglong)local_c8.Scale3D.ZW.m128d_f64[0] >> 0x20) & uVar11;
    if (dVar5 <= (double)CONCAT44(uVar11,uVar9) && (double)CONCAT44(uVar11,uVar9) != dVar5) {
      dVar3 = *pdVar7 / local_c8.Scale3D.ZW.m128d_f64[0];
    }
    *pdVar7 = dVar3;
  }
  return;
}

// GetFunction @ 1464b3530

TFunction<void___cdecl(void)> * __thiscall
UTickableScaleConstraint::GetFunction
          (UTickableScaleConstraint *this,TFunction<void___cdecl(void)> *__return_storage_ptr__)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined ***)&__return_storage_ptr__->field_0x10 =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`UTickableScaleConstraint::GetFunction'::`2'::<lambda_1>,0,0>::
        _vftable_;
  *(UTickableScaleConstraint **)&__return_storage_ptr__->field_0x18 = this;
  if (&__return_storage_ptr__->field_0x18 != (undefined1 *)0x0) {
    *(code **)__return_storage_ptr__ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UTickableScaleConstraint::GetFunction'::__l2::<lambda_1>,void>::Call;
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1464b5f90

UClass * __cdecl UTickableScaleConstraint::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTickableScaleConstraint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Constraints",L"TickableScaleConstraint",
               &Z_Registration_Info_UClass_UTickableScaleConstraint.InnerSingleton,
               StaticRegisterNativesUTickableScaleConstraint,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UTickableScaleConstraint>,
               InternalVTableHelperCtorCaller<UTickableScaleConstraint>,local_res8,
               UTickableTransformConstraint::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTickableScaleConstraint.InnerSingleton;
}

// OnHandleModified @ 1464bae50

void __thiscall
UTickableScaleConstraint::OnHandleModified
          (UTickableScaleConstraint *this,UTransformableHandle *param_1,EHandleEvent param_2)

{
  double *pdVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  uint uVar8;
  TTransform<double> *pTVar9;
  double *pdVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  TTransform<double> local_78;
  
  UTickableTransformConstraint::OnHandleModified
            ((UTickableTransformConstraint *)this,param_1,param_2);
  cVar7 = (**(code **)(this->_padding_ + 0x2d0))(this);
  if ((((cVar7 != '\0') && ((char)this->_padding_ != '\0')) &&
      (param_1 != (UTransformableHandle *)0x0)) &&
     ((((UTransformableHandle *)this->_padding_ != (UTransformableHandle *)0x0 &&
       ((UTransformableHandle *)this->_padding_ == param_1)) && (param_2 < ComponentUpdated)))) {
    uVar8 = CalculateInputHash(this);
    if (uVar8 != (this->Cache).CachedInputHash) {
      (this->Cache).CachedInputHash = uVar8;
      if (param_2 == GlobalTransformUpdated) {
        pTVar9 = UTickableTransformConstraint::GetParentGlobalTransform
                           ((UTickableTransformConstraint *)this,&local_78);
        dVar5 = (pTVar9->Scale3D).ZW.m128d_f64[0];
        auVar3 = *(undefined1 (*) [16])(pTVar9->Scale3D).XY.m128d_f64;
        pTVar9 = UTickableTransformConstraint::GetChildGlobalTransform
                           ((UTickableTransformConstraint *)this,&local_78);
        dVar6 = __real_3f1a36e2e0000000;
        uVar13 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        uVar8 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        dVar4 = (pTVar9->Scale3D).XY.m128d_f64[1];
        dVar2 = (pTVar9->Scale3D).ZW.m128d_f64[0];
        (this->OffsetScale).field0_0x0._s_0.X = (pTVar9->Scale3D).XY.m128d_f64[0];
        (this->OffsetScale).field0_0x0._s_0.Y = dVar4;
        (this->OffsetScale).field0_0x0._s_0.Z = dVar2;
        dVar2 = 0.0;
        uVar11 = auVar3._0_4_ & uVar8;
        uVar12 = auVar3._4_4_ & uVar13;
        if ((double)CONCAT44(uVar12,uVar11) < dVar6 || (double)CONCAT44(uVar12,uVar11) == dVar6) {
          dVar4 = 0.0;
        }
        else {
          dVar4 = (this->OffsetScale).field0_0x0._s_0.X / auVar3._0_8_;
        }
        (this->OffsetScale).field0_0x0._s_0.X = dVar4;
        pdVar1 = &(this->OffsetScale).field0_0x0._s_0.Y;
        uVar11 = auVar3._8_4_ & uVar8;
        uVar12 = auVar3._12_4_ & uVar13;
        if ((double)CONCAT44(uVar12,uVar11) < dVar6 || (double)CONCAT44(uVar12,uVar11) == dVar6) {
          dVar4 = 0.0;
        }
        else {
          dVar4 = *pdVar1 / auVar3._8_8_;
        }
        pdVar10 = &(this->OffsetScale).field0_0x0._s_0.Z;
        *pdVar1 = dVar4;
        uVar8 = SUB84(dVar5,0) & uVar8;
        uVar13 = (uint)((ulonglong)dVar5 >> 0x20) & uVar13;
        if (dVar6 <= (double)CONCAT44(uVar13,uVar8) && (double)CONCAT44(uVar13,uVar8) != dVar6) {
          dVar2 = *pdVar10 / dVar5;
        }
        *pdVar10 = dVar2;
      }
      else {
        UTickableTransformConstraint::GetChildLocalTransform
                  ((UTickableTransformConstraint *)this,&local_78);
        (this->OffsetScale).field0_0x0._s_0.X = local_78.Scale3D.XY.m128d_f64[0];
        (this->OffsetScale).field0_0x0._s_0.Y = local_78.Scale3D.XY.m128d_f64[1];
        (this->OffsetScale).field0_0x0._s_0.Z = local_78.Scale3D.ZW.m128d_f64[0];
      }
    }
  }
  return;
}

// StaticRegisterNativesUTickableScaleConstraint @ 1464c2020

void __cdecl UTickableScaleConstraint::StaticRegisterNativesUTickableScaleConstraint(void)

{
  return;
}

