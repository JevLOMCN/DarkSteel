// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Constraints
// Functions: 11

// StaticClass @ 14648dac0

UClass * __cdecl UTickableParentConstraint::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTickableParentConstraint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Constraints",L"TickableParentConstraint",
               &Z_Registration_Info_UClass_UTickableParentConstraint.InnerSingleton,
               StaticRegisterNativesUTickableParentConstraint,0x130,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTickableParentConstraint>,
               InternalVTableHelperCtorCaller<UTickableParentConstraint>,local_res8,
               UTickableTransformConstraint::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTickableParentConstraint.InnerSingleton;
}

// UTickableParentConstraint @ 14649e960

UTickableParentConstraint * __thiscall
UTickableParentConstraint::UTickableParentConstraint
          (UTickableParentConstraint *this,FVTableHelper *param_1)

{
  UTickableTransformConstraint::UTickableTransformConstraint
            ((UTickableTransformConstraint *)this,param_1);
  this->_padding_ = (longlong)&___7UTickableParentConstraint__6B_;
  (this->Cache).CachedInputHash = 0;
  *&(this->OffsetTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->OffsetTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->OffsetTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->OffsetTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->OffsetTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->OffsetTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->TransformFilter).RotationFilter.bX = true;
  (this->TransformFilter).RotationFilter.bY = true;
  (this->TransformFilter).RotationFilter.bZ = true;
  (this->TransformFilter).ScaleFilter.bX = true;
  (this->TransformFilter).ScaleFilter.bY = true;
  (this->TransformFilter).ScaleFilter.bZ = true;
  this->bScaling = false;
  (this->TransformFilter).TranslationFilter.bX = true;
  (this->TransformFilter).TranslationFilter.bY = true;
  (this->TransformFilter).TranslationFilter.bZ = true;
  return this;
}

// UTickableParentConstraint @ 14649ea10

UTickableParentConstraint * __thiscall
UTickableParentConstraint::UTickableParentConstraint(UTickableParentConstraint *this)

{
  UTickableTransformConstraint::UTickableTransformConstraint((UTickableTransformConstraint *)this);
  this->_padding_ = (longlong)&___7UTickableParentConstraint__6B_;
  (this->Cache).CachedInputHash = 0;
  *&(this->OffsetTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->OffsetTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->OffsetTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->OffsetTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->OffsetTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->OffsetTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  (this->TransformFilter).RotationFilter.bX = true;
  (this->TransformFilter).RotationFilter.bY = true;
  (this->TransformFilter).RotationFilter.bZ = true;
  (this->TransformFilter).ScaleFilter.bX = true;
  (this->TransformFilter).ScaleFilter.bY = true;
  (this->TransformFilter).ScaleFilter.bZ = true;
  this->bScaling = false;
  (this->TransformFilter).TranslationFilter.bX = true;
  (this->TransformFilter).TranslationFilter.bY = true;
  (this->TransformFilter).TranslationFilter.bZ = true;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 3;
  return this;
}

// ~UTickableParentConstraint @ 14649fb90

void __thiscall
UTickableParentConstraint::~UTickableParentConstraint(UTickableParentConstraint *this)

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

// operator() @ 1464a0e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall `UTickableParentConstraint::GetFunction'::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 auStack_168 [32];
  float local_148 [4];
  TTransform<double> local_138;
  TTransform<double> local_d8;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  cVar3 = (**(code **)(**(longlong **)this + 0x2d0))();
  if (cVar3 != '\0') {
    local_148[0] = (*(UTickableTransformConstraint **)this)->Weight;
    if (__real_3f800000 <= local_148[0]) {
      local_148[0] = __real_3f800000;
    }
    if (local_148[0] <= 0.0) {
      local_148[0] = 0.0;
    }
    if (__real_38d1b717 <= local_148[0]) {
      UTickableTransformConstraint::PreEvaluate(*(UTickableTransformConstraint **)this);
      UTickableTransformConstraint::GetParentGlobalTransform
                (*(UTickableTransformConstraint **)this,&local_78);
      local_d8.Rotation.XY.m128d_f64[0]._0_4_ = local_78.Rotation.XY.m128d_f64[0]._0_4_;
      local_d8.Rotation.XY.m128d_f64[0]._4_4_ = local_78.Rotation.XY.m128d_f64[0]._4_4_;
      local_d8.Rotation.XY.m128d_f64[1]._0_4_ = local_78.Rotation.XY.m128d_f64[1]._0_4_;
      local_d8.Rotation.XY.m128d_f64[1]._4_4_ = local_78.Rotation.XY.m128d_f64[1]._4_4_;
      local_d8.Rotation.ZW.m128d_f64[0]._0_4_ = local_78.Rotation.ZW.m128d_f64[0]._0_4_;
      local_d8.Rotation.ZW.m128d_f64[0]._4_4_ = local_78.Rotation.ZW.m128d_f64[0]._4_4_;
      local_d8.Rotation.ZW.m128d_f64[1]._0_4_ = local_78.Rotation.ZW.m128d_f64[1]._0_4_;
      local_d8.Rotation.ZW.m128d_f64[1]._4_4_ = local_78.Rotation.ZW.m128d_f64[1]._4_4_;
      local_d8.Translation.XY.m128d_f64[0]._0_4_ = local_78.Translation.XY.m128d_f64[0]._0_4_;
      local_d8.Translation.XY.m128d_f64[0]._4_4_ = local_78.Translation.XY.m128d_f64[0]._4_4_;
      local_d8.Translation.XY.m128d_f64[1]._0_4_ = local_78.Translation.XY.m128d_f64[1]._0_4_;
      local_d8.Translation.XY.m128d_f64[1]._4_4_ = local_78.Translation.XY.m128d_f64[1]._4_4_;
      local_d8.Translation.ZW.m128d_f64[0]._0_4_ = local_78.Translation.ZW.m128d_f64[0]._0_4_;
      local_d8.Translation.ZW.m128d_f64[0]._4_4_ = local_78.Translation.ZW.m128d_f64[0]._4_4_;
      local_d8.Translation.ZW.m128d_f64[1]._0_4_ = local_78.Translation.ZW.m128d_f64[1]._0_4_;
      local_d8.Translation.ZW.m128d_f64[1]._4_4_ = local_78.Translation.ZW.m128d_f64[1]._4_4_;
      local_d8.Scale3D.XY.m128d_f64[0]._0_4_ = local_78.Scale3D.XY.m128d_f64[0]._0_4_;
      local_d8.Scale3D.XY.m128d_f64[0]._4_4_ = local_78.Scale3D.XY.m128d_f64[0]._4_4_;
      local_d8.Scale3D.XY.m128d_f64[1]._0_4_ = local_78.Scale3D.XY.m128d_f64[1]._0_4_;
      local_d8.Scale3D.XY.m128d_f64[1]._4_4_ = local_78.Scale3D.XY.m128d_f64[1]._4_4_;
      if (*(char *)(*(longlong *)this + 0xa0) != '\0') {
        local_138.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_138.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_138.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_138.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_138.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_138.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_138.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_138.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_138.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_138.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_138.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_138.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_138.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_138.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_138.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_138.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_138.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_138.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply
                  (&local_138,(TTransform<double> *)(*(longlong *)this + 0xc0),&local_78);
        local_d8.Rotation.XY.m128d_f64[0]._0_4_ = local_138.Rotation.XY.m128d_f64[0]._0_4_;
        local_d8.Rotation.XY.m128d_f64[0]._4_4_ = local_138.Rotation.XY.m128d_f64[0]._4_4_;
        local_d8.Rotation.XY.m128d_f64[1]._0_4_ = local_138.Rotation.XY.m128d_f64[1]._0_4_;
        local_d8.Rotation.XY.m128d_f64[1]._4_4_ = local_138.Rotation.XY.m128d_f64[1]._4_4_;
        local_d8.Rotation.ZW.m128d_f64[0]._0_4_ = local_138.Rotation.ZW.m128d_f64[0]._0_4_;
        local_d8.Rotation.ZW.m128d_f64[0]._4_4_ = local_138.Rotation.ZW.m128d_f64[0]._4_4_;
        local_d8.Rotation.ZW.m128d_f64[1]._0_4_ = local_138.Rotation.ZW.m128d_f64[1]._0_4_;
        local_d8.Rotation.ZW.m128d_f64[1]._4_4_ = local_138.Rotation.ZW.m128d_f64[1]._4_4_;
        local_d8.Translation.XY.m128d_f64[0]._0_4_ = local_138.Translation.XY.m128d_f64[0]._0_4_;
        local_d8.Translation.XY.m128d_f64[0]._4_4_ = local_138.Translation.XY.m128d_f64[0]._4_4_;
        local_d8.Translation.XY.m128d_f64[1]._0_4_ = local_138.Translation.XY.m128d_f64[1]._0_4_;
        local_d8.Translation.XY.m128d_f64[1]._4_4_ = local_138.Translation.XY.m128d_f64[1]._4_4_;
        local_d8.Translation.ZW.m128d_f64[0]._0_4_ = local_138.Translation.ZW.m128d_f64[0]._0_4_;
        local_d8.Translation.ZW.m128d_f64[0]._4_4_ = local_138.Translation.ZW.m128d_f64[0]._4_4_;
        local_d8.Translation.ZW.m128d_f64[1]._0_4_ = local_138.Translation.ZW.m128d_f64[1]._0_4_;
        local_d8.Translation.ZW.m128d_f64[1]._4_4_ = local_138.Translation.ZW.m128d_f64[1]._4_4_;
        local_d8.Scale3D.XY.m128d_f64[0]._0_4_ = local_138.Scale3D.XY.m128d_f64[0]._0_4_;
        local_d8.Scale3D.XY.m128d_f64[0]._4_4_ = local_138.Scale3D.XY.m128d_f64[0]._4_4_;
        local_d8.Scale3D.XY.m128d_f64[1]._0_4_ = local_138.Scale3D.XY.m128d_f64[1]._0_4_;
        local_d8.Scale3D.XY.m128d_f64[1]._4_4_ = local_138.Scale3D.XY.m128d_f64[1]._4_4_;
        local_78.Scale3D.ZW.m128d_f64[0]._0_4_ = local_138.Scale3D.ZW.m128d_f64[0]._0_4_;
        local_78.Scale3D.ZW.m128d_f64[0]._4_4_ = local_138.Scale3D.ZW.m128d_f64[0]._4_4_;
        local_78.Scale3D.ZW.m128d_f64[1]._0_4_ = local_138.Scale3D.ZW.m128d_f64[1]._0_4_;
        local_78.Scale3D.ZW.m128d_f64[1]._4_4_ = local_138.Scale3D.ZW.m128d_f64[1]._4_4_;
      }
      local_d8.Scale3D.ZW.m128d_f64[0] =
           (double)CONCAT44(local_78.Scale3D.ZW.m128d_f64[0]._4_4_,
                            local_78.Scale3D.ZW.m128d_f64[0]._0_4_);
      local_d8.Scale3D.ZW.m128d_f64[1] =
           (double)CONCAT44(local_78.Scale3D.ZW.m128d_f64[1]._4_4_,
                            local_78.Scale3D.ZW.m128d_f64[1]._0_4_);
      UTickableTransformConstraint::GetChildGlobalTransform
                (*(UTickableTransformConstraint **)this,&local_138);
      ``UTickableParentConstraint::GetFunction'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::
      operator()(local_148,&local_138,&local_d8,(FTransformFilter *)(*(longlong *)this + 0x121));
      lVar1 = *(longlong *)this;
      if (*(char *)(lVar1 + 0x120) == '\0') {
        local_d8.Scale3D.XY.m128d_f64[0]._0_4_ = local_138.Scale3D.XY.m128d_f64[0]._0_4_;
        local_d8.Scale3D.XY.m128d_f64[0]._4_4_ = local_138.Scale3D.XY.m128d_f64[0]._4_4_;
        local_d8.Scale3D.XY.m128d_f64[1]._0_4_ = local_138.Scale3D.XY.m128d_f64[1]._0_4_;
        local_d8.Scale3D.XY.m128d_f64[1]._4_4_ = local_138.Scale3D.XY.m128d_f64[1]._4_4_;
        local_d8.Scale3D.ZW.m128d_f64[0] = local_138.Scale3D.ZW.m128d_f64[0];
        local_d8.Scale3D.ZW.m128d_f64[1] = 0.0;
      }
      plVar2 = *(longlong **)(lVar1 + 0x98);
      if ((plVar2 != (longlong *)0x0) &&
         (cVar3 = (**(code **)(*plVar2 + 0x2b0))(plVar2,1), cVar3 != '\0')) {
        (**(code **)(**(longlong **)(lVar1 + 0x98) + 0x2b8))(*(longlong **)(lVar1 + 0x98),&local_d8)
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

// CalculateInputHash @ 1464a81b0

uint __thiscall UTickableParentConstraint::CalculateInputHash(UTickableParentConstraint *this)

{
  uint uVar1;
  TVector<double> *pTVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  TVector<double>_u_0 local_c8;
  TQuat<double> local_a8;
  TTransform<double> local_88;
  
  UTickableTransformConstraint::GetChildLocalTransform
            ((UTickableTransformConstraint *)this,&local_88);
  local_c8._s_0.Z = local_88.Translation.ZW.m128d_f64[0];
  local_c8._s_0.X = local_88.Translation.XY.m128d_f64[0];
  local_c8._s_0.Y = local_88.Translation.XY.m128d_f64[1];
  uVar1 = FCrc::MemCrc_DEPRECATED(&local_c8,0x18,0);
  local_a8.X = local_88.Rotation.XY.m128d_f64[0];
  local_a8.Y = local_88.Rotation.XY.m128d_f64[1];
  local_a8.Z = local_88.Rotation.ZW.m128d_f64[0];
  local_a8.W = local_88.Rotation.ZW.m128d_f64[1];
  uVar5 = uVar1 >> 0xd ^ -uVar1;
  uVar3 = (-0x61c88647 - uVar5) - uVar1 ^ uVar5 << 8;
  uVar4 = (uVar1 - uVar3) - uVar5 ^ uVar3 >> 0xd;
  uVar5 = (uVar5 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar1 = (uVar3 - uVar5) - uVar4 ^ uVar5 << 0x10;
  uVar4 = (uVar4 - uVar1) - uVar5 ^ uVar1 >> 5;
  uVar5 = (uVar5 - uVar4) - uVar1 ^ uVar4 >> 3;
  uVar3 = (uVar1 - uVar5) - uVar4 ^ uVar5 << 10;
  pTVar2 = UE::Math::TQuat<double>::Euler(&local_a8,(TVector<double> *)&local_c8._s_0);
  uVar1 = FCrc::MemCrc_DEPRECATED(pTVar2,0x18,0);
  uVar4 = ((uVar4 - uVar3) - uVar5 ^ uVar3 >> 0xf) - uVar1 ^ uVar1 >> 0xd;
  uVar3 = (-0x61c88647 - uVar4) - uVar1 ^ uVar4 << 8;
  local_c8._s_0.Z = local_88.Scale3D.ZW.m128d_f64[0];
  uVar5 = (uVar1 - uVar3) - uVar4 ^ uVar3 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar3 ^ uVar5 >> 0xc;
  uVar1 = (uVar3 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar1) - uVar4 ^ uVar1 >> 5;
  uVar4 = (uVar4 - uVar5) - uVar1 ^ uVar5 >> 3;
  uVar3 = (uVar1 - uVar4) - uVar5 ^ uVar4 << 10;
  local_c8._s_0.X = local_88.Scale3D.XY.m128d_f64[0];
  local_c8._s_0.Y = local_88.Scale3D.XY.m128d_f64[1];
  uVar1 = FCrc::MemCrc_DEPRECATED(&local_c8,0x18,0);
  uVar4 = ((uVar5 - uVar3) - uVar4 ^ uVar3 >> 0xf) - uVar1 ^ uVar1 >> 0xd;
  uVar3 = (-0x61c88647 - uVar4) - uVar1 ^ uVar4 << 8;
  uVar5 = (uVar1 - uVar3) - uVar4 ^ uVar3 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar3 ^ uVar5 >> 0xc;
  uVar1 = (uVar3 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar1) - uVar4 ^ uVar1 >> 5;
  uVar4 = (uVar4 - uVar5) - uVar1 ^ uVar5 >> 3;
  uVar3 = (uVar1 - uVar4) - uVar5 ^ uVar4 << 10;
  UTickableTransformConstraint::GetChildGlobalTransform
            ((UTickableTransformConstraint *)this,&local_88);
  local_c8._s_0.Z = local_88.Translation.ZW.m128d_f64[0];
  local_c8._s_0.X = local_88.Translation.XY.m128d_f64[0];
  local_c8._s_0.Y = local_88.Translation.XY.m128d_f64[1];
  uVar1 = FCrc::MemCrc_DEPRECATED(&local_c8,0x18,0);
  local_a8.X = local_88.Rotation.XY.m128d_f64[0];
  local_a8.Y = local_88.Rotation.XY.m128d_f64[1];
  local_a8.Z = local_88.Rotation.ZW.m128d_f64[0];
  local_a8.W = local_88.Rotation.ZW.m128d_f64[1];
  uVar5 = ((uVar5 - uVar3) - uVar4 ^ uVar3 >> 0xf) - uVar1 ^ uVar1 >> 0xd;
  uVar3 = (-0x61c88647 - uVar5) - uVar1 ^ uVar5 << 8;
  uVar4 = (uVar1 - uVar3) - uVar5 ^ uVar3 >> 0xd;
  uVar5 = (uVar5 - uVar4) - uVar3 ^ uVar4 >> 0xc;
  uVar1 = (uVar3 - uVar5) - uVar4 ^ uVar5 << 0x10;
  uVar4 = (uVar4 - uVar1) - uVar5 ^ uVar1 >> 5;
  uVar5 = (uVar5 - uVar4) - uVar1 ^ uVar4 >> 3;
  uVar3 = (uVar1 - uVar5) - uVar4 ^ uVar5 << 10;
  pTVar2 = UE::Math::TQuat<double>::Euler(&local_a8,(TVector<double> *)&local_c8._s_0);
  uVar1 = FCrc::MemCrc_DEPRECATED(pTVar2,0x18,0);
  uVar4 = ((uVar4 - uVar3) - uVar5 ^ uVar3 >> 0xf) - uVar1 ^ uVar1 >> 0xd;
  uVar3 = (-0x61c88647 - uVar4) - uVar1 ^ uVar4 << 8;
  local_c8._s_0.Z = local_88.Scale3D.ZW.m128d_f64[0];
  uVar5 = (uVar1 - uVar3) - uVar4 ^ uVar3 >> 0xd;
  uVar4 = (uVar4 - uVar5) - uVar3 ^ uVar5 >> 0xc;
  uVar1 = (uVar3 - uVar4) - uVar5 ^ uVar4 << 0x10;
  uVar5 = (uVar5 - uVar1) - uVar4 ^ uVar1 >> 5;
  uVar4 = (uVar4 - uVar5) - uVar1 ^ uVar5 >> 3;
  uVar3 = (uVar1 - uVar4) - uVar5 ^ uVar4 << 10;
  local_c8._s_0.X = local_88.Scale3D.XY.m128d_f64[0];
  local_c8._s_0.Y = local_88.Scale3D.XY.m128d_f64[1];
  uVar1 = FCrc::MemCrc_DEPRECATED(&local_c8,0x18,0);
  uVar3 = ((uVar5 - uVar3) - uVar4 ^ uVar3 >> 0xf) - uVar1 ^ uVar1 >> 0xd;
  uVar4 = (-0x61c88647 - uVar3) - uVar1 ^ uVar3 << 8;
  uVar1 = (uVar1 - uVar4) - uVar3 ^ uVar4 >> 0xd;
  uVar3 = (uVar3 - uVar1) - uVar4 ^ uVar1 >> 0xc;
  uVar4 = (uVar4 - uVar3) - uVar1 ^ uVar3 << 0x10;
  uVar1 = (uVar1 - uVar4) - uVar3 ^ uVar4 >> 5;
  uVar3 = (uVar3 - uVar1) - uVar4 ^ uVar1 >> 3;
  uVar4 = (uVar4 - uVar3) - uVar1 ^ uVar3 << 10;
  return (uVar1 - uVar4) - uVar3 ^ uVar4 >> 0xf;
}

// ComputeOffset @ 1464a9ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UTickableParentConstraint::ComputeOffset(UTickableParentConstraint *this)

{
  ulonglong uVar1;
  longlong lVar2;
  TTransform<double> *pTVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar14;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar15 [16];
  undefined1 auStack_168 [32];
  TTransform<double> local_148;
  TTransform<double> local_e8;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_168;
  UTickableTransformConstraint::GetParentGlobalTransform
            ((UTickableTransformConstraint *)this,&local_e8);
  UTickableTransformConstraint::GetChildGlobalTransform
            ((UTickableTransformConstraint *)this,&local_148);
  lVar2 = this->_padding_;
  *&(this->OffsetTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(this->OffsetTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(this->OffsetTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(this->OffsetTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(this->OffsetTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(this->OffsetTransform).Scale3D.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  if (((char)lVar2 != '\0') || ((char)this->_padding_ != '\0')) {
    if (this->bScaling == false) {
      local_148.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_148.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_148.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_148.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      dVar11 = local_148.Rotation.XY.m128d_f64[0] * local_148.Rotation.XY.m128d_f64[0] +
               local_148.Rotation.ZW.m128d_f64[0] * local_148.Rotation.ZW.m128d_f64[0];
      dVar14 = local_148.Rotation.XY.m128d_f64[1] * local_148.Rotation.XY.m128d_f64[1] +
               local_148.Rotation.ZW.m128d_f64[1] * local_148.Rotation.ZW.m128d_f64[1];
      auVar8._8_4_ = SUB84(dVar14,0);
      auVar8._0_8_ = dVar11;
      auVar8._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
      auVar9._0_8_ = auVar8._8_8_ + dVar11;
      auVar9._8_8_ = dVar11 + dVar14;
      auVar15 = sqrtpd(in_XMM2,auVar9);
      uVar4 = -(ulonglong)
               (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar9._0_8_);
      uVar6 = -(ulonglong)
               (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar9._8_8_);
      uVar5 = -(ulonglong)
               (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar9._0_8_);
      uVar7 = -(ulonglong)
               (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar9._8_8_);
      auVar12 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar15);
      auVar15 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar15);
      auVar13._0_8_ = uVar4 & (ulonglong)(auVar12._0_8_ * local_148.Rotation.XY.m128d_f64[0]);
      uVar1 = uVar6 & (ulonglong)(auVar12._8_8_ * local_148.Rotation.XY.m128d_f64[1]);
      auVar13._8_4_ = (undefined4)uVar1;
      auVar13._12_4_ = (undefined4)(uVar1 >> 0x20);
      auVar10._0_8_ = uVar5 & (ulonglong)(auVar15._0_8_ * local_148.Rotation.ZW.m128d_f64[0]);
      uVar1 = uVar7 & (ulonglong)(auVar15._8_8_ * local_148.Rotation.ZW.m128d_f64[1]);
      auVar10._8_4_ = (undefined4)uVar1;
      auVar10._12_4_ = (undefined4)(uVar1 >> 0x20);
      auVar15._4_4_ =
           ~(uint)(uVar4 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
      auVar15._0_4_ = ~(uint)uVar4 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
      auVar15._8_4_ = ~(uint)uVar6 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
      auVar15._12_4_ =
           ~(uint)(uVar6 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
      local_148.Rotation.XY.m128d_f64 = (double  [2])(auVar13 | auVar15);
      auVar12._4_4_ =
           ~(uint)(uVar5 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
      auVar12._0_4_ = ~(uint)uVar5 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
      auVar12._8_4_ = ~(uint)uVar7 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
      auVar12._12_4_ =
           ~(uint)(uVar7 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
      local_148.Rotation.ZW.m128d_f64 = (double  [2])(auVar10 | auVar12);
    }
    pTVar3 = UE::Math::TTransform<double>::GetRelativeTransform(&local_148,&local_88,&local_e8);
    dVar11 = (pTVar3->Rotation).XY.m128d_f64[1];
    (this->OffsetTransform).Rotation.XY.m128d_f64[0] = (pTVar3->Rotation).XY.m128d_f64[0];
    (this->OffsetTransform).Rotation.XY.m128d_f64[1] = dVar11;
    dVar11 = (pTVar3->Rotation).ZW.m128d_f64[1];
    (this->OffsetTransform).Rotation.ZW.m128d_f64[0] = (pTVar3->Rotation).ZW.m128d_f64[0];
    (this->OffsetTransform).Rotation.ZW.m128d_f64[1] = dVar11;
    dVar11 = (pTVar3->Translation).XY.m128d_f64[1];
    (this->OffsetTransform).Translation.XY.m128d_f64[0] = (pTVar3->Translation).XY.m128d_f64[0];
    (this->OffsetTransform).Translation.XY.m128d_f64[1] = dVar11;
    dVar11 = (pTVar3->Translation).ZW.m128d_f64[1];
    (this->OffsetTransform).Translation.ZW.m128d_f64[0] = (pTVar3->Translation).ZW.m128d_f64[0];
    (this->OffsetTransform).Translation.ZW.m128d_f64[1] = dVar11;
    dVar11 = (pTVar3->Scale3D).XY.m128d_f64[1];
    (this->OffsetTransform).Scale3D.XY.m128d_f64[0] = (pTVar3->Scale3D).XY.m128d_f64[0];
    (this->OffsetTransform).Scale3D.XY.m128d_f64[1] = dVar11;
    dVar11 = (pTVar3->Scale3D).ZW.m128d_f64[1];
    (this->OffsetTransform).Scale3D.ZW.m128d_f64[0] = (pTVar3->Scale3D).ZW.m128d_f64[0];
    (this->OffsetTransform).Scale3D.ZW.m128d_f64[1] = dVar11;
  }
  return;
}

// GetFunction @ 1464b34b0

TFunction<void___cdecl(void)> * __thiscall
UTickableParentConstraint::GetFunction
          (UTickableParentConstraint *this,TFunction<void___cdecl(void)> *__return_storage_ptr__)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined ***)&__return_storage_ptr__->field_0x10 =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`UTickableParentConstraint::GetFunction'::`2'::<lambda_1>,0,0>::
        _vftable_;
  *(UTickableParentConstraint **)&__return_storage_ptr__->field_0x18 = this;
  if (&__return_storage_ptr__->field_0x18 != (undefined1 *)0x0) {
    *(code **)__return_storage_ptr__ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UTickableParentConstraint::GetFunction'::__l2::<lambda_1>,void>::Call;
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1464b5e10

UClass * __cdecl UTickableParentConstraint::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTickableParentConstraint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Constraints",L"TickableParentConstraint",
               &Z_Registration_Info_UClass_UTickableParentConstraint.InnerSingleton,
               StaticRegisterNativesUTickableParentConstraint,0x130,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTickableParentConstraint>,
               InternalVTableHelperCtorCaller<UTickableParentConstraint>,local_res8,
               UTickableTransformConstraint::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTickableParentConstraint.InnerSingleton;
}

// OnHandleModified @ 1464ba9f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UTickableParentConstraint::OnHandleModified
          (UTickableParentConstraint *this,UTransformableHandle *param_1,EHandleEvent param_2)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  TTransform<double> *pTVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar15;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar16 [16];
  undefined1 auStack_168 [32];
  TTransform<double> local_148;
  TTransform<double> local_e8;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_168;
  UTickableTransformConstraint::OnHandleModified
            ((UTickableTransformConstraint *)this,param_1,param_2);
  cVar2 = (**(code **)(this->_padding_ + 0x2d0))(this);
  if ((((cVar2 != '\0') && ((char)this->_padding_ != '\0')) &&
      (param_1 != (UTransformableHandle *)0x0)) &&
     ((((UTransformableHandle *)this->_padding_ != (UTransformableHandle *)0x0 &&
       ((UTransformableHandle *)this->_padding_ == param_1)) && (param_2 < ComponentUpdated)))) {
    uVar3 = CalculateInputHash(this);
    if (uVar3 != (this->Cache).CachedInputHash) {
      (this->Cache).CachedInputHash = uVar3;
      if (param_2 == GlobalTransformUpdated) {
        UTickableTransformConstraint::GetParentGlobalTransform
                  ((UTickableTransformConstraint *)this,&local_e8);
        UTickableTransformConstraint::GetChildGlobalTransform
                  ((UTickableTransformConstraint *)this,&local_148);
        if (this->bScaling == false) {
          local_148.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_148.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          local_148.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_148.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          dVar12 = local_148.Rotation.XY.m128d_f64[0] * local_148.Rotation.XY.m128d_f64[0] +
                   local_148.Rotation.ZW.m128d_f64[0] * local_148.Rotation.ZW.m128d_f64[0];
          dVar15 = local_148.Rotation.XY.m128d_f64[1] * local_148.Rotation.XY.m128d_f64[1] +
                   local_148.Rotation.ZW.m128d_f64[1] * local_148.Rotation.ZW.m128d_f64[1];
          auVar9._8_4_ = SUB84(dVar15,0);
          auVar9._0_8_ = dVar12;
          auVar9._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
          auVar10._0_8_ = auVar9._8_8_ + dVar12;
          auVar10._8_8_ = dVar12 + dVar15;
          auVar16 = sqrtpd(in_XMM2,auVar10);
          uVar5 = -(ulonglong)
                   (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                   auVar10._0_8_);
          uVar7 = -(ulonglong)
                   (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                   auVar10._8_8_);
          uVar6 = -(ulonglong)
                   (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                   auVar10._0_8_);
          uVar8 = -(ulonglong)
                   (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                   auVar10._8_8_);
          auVar13 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar16);
          auVar16 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar16);
          auVar14._0_8_ = uVar5 & (ulonglong)(auVar13._0_8_ * local_148.Rotation.XY.m128d_f64[0]);
          uVar1 = uVar7 & (ulonglong)(auVar13._8_8_ * local_148.Rotation.XY.m128d_f64[1]);
          auVar14._8_4_ = (undefined4)uVar1;
          auVar14._12_4_ = (undefined4)(uVar1 >> 0x20);
          auVar11._0_8_ = uVar6 & (ulonglong)(auVar16._0_8_ * local_148.Rotation.ZW.m128d_f64[0]);
          uVar1 = uVar8 & (ulonglong)(auVar16._8_8_ * local_148.Rotation.ZW.m128d_f64[1]);
          auVar11._8_4_ = (undefined4)uVar1;
          auVar11._12_4_ = (undefined4)(uVar1 >> 0x20);
          auVar16._4_4_ =
               ~(uint)(uVar5 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
          auVar16._0_4_ = ~(uint)uVar5 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
          auVar16._8_4_ = ~(uint)uVar7 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
          auVar16._12_4_ =
               ~(uint)(uVar7 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
          local_148.Rotation.XY.m128d_f64 = (double  [2])(auVar14 | auVar16);
          auVar13._4_4_ =
               ~(uint)(uVar6 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
          auVar13._0_4_ = ~(uint)uVar6 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
          auVar13._8_4_ = ~(uint)uVar8 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
          auVar13._12_4_ =
               ~(uint)(uVar8 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
          local_148.Rotation.ZW.m128d_f64 = (double  [2])(auVar11 | auVar13);
        }
        pTVar4 = UE::Math::TTransform<double>::GetRelativeTransform(&local_148,&local_88,&local_e8);
      }
      else {
        pTVar4 = UTickableTransformConstraint::GetChildLocalTransform
                           ((UTickableTransformConstraint *)this,&local_88);
      }
      dVar12 = (pTVar4->Rotation).XY.m128d_f64[1];
      (this->OffsetTransform).Rotation.XY.m128d_f64[0] = (pTVar4->Rotation).XY.m128d_f64[0];
      (this->OffsetTransform).Rotation.XY.m128d_f64[1] = dVar12;
      dVar12 = (pTVar4->Rotation).ZW.m128d_f64[1];
      (this->OffsetTransform).Rotation.ZW.m128d_f64[0] = (pTVar4->Rotation).ZW.m128d_f64[0];
      (this->OffsetTransform).Rotation.ZW.m128d_f64[1] = dVar12;
      dVar12 = (pTVar4->Translation).XY.m128d_f64[1];
      (this->OffsetTransform).Translation.XY.m128d_f64[0] = (pTVar4->Translation).XY.m128d_f64[0];
      (this->OffsetTransform).Translation.XY.m128d_f64[1] = dVar12;
      dVar12 = (pTVar4->Translation).ZW.m128d_f64[1];
      (this->OffsetTransform).Translation.ZW.m128d_f64[0] = (pTVar4->Translation).ZW.m128d_f64[0];
      (this->OffsetTransform).Translation.ZW.m128d_f64[1] = dVar12;
      dVar12 = (pTVar4->Scale3D).XY.m128d_f64[1];
      (this->OffsetTransform).Scale3D.XY.m128d_f64[0] = (pTVar4->Scale3D).XY.m128d_f64[0];
      (this->OffsetTransform).Scale3D.XY.m128d_f64[1] = dVar12;
      dVar12 = (pTVar4->Scale3D).ZW.m128d_f64[1];
      (this->OffsetTransform).Scale3D.ZW.m128d_f64[0] = (pTVar4->Scale3D).ZW.m128d_f64[0];
      (this->OffsetTransform).Scale3D.ZW.m128d_f64[1] = dVar12;
    }
  }
  return;
}

// StaticRegisterNativesUTickableParentConstraint @ 1464c2000

void __cdecl UTickableParentConstraint::StaticRegisterNativesUTickableParentConstraint(void)

{
  return;
}

