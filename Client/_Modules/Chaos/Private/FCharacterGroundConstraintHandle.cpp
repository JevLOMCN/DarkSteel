// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 5

// IsEnabled @ 143701830

bool __thiscall
Chaos::FCharacterGroundConstraintHandle::IsEnabled(FCharacterGroundConstraintHandle *this)

{
  return this->bDisabled == false;
}

// GetConstrainedParticles @ 14378fe10

TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> * __thiscall
Chaos::FCharacterGroundConstraintHandle::GetConstrainedParticles
          (FCharacterGroundConstraintHandle *this,
          TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *__return_storage_ptr__)

{
  TGeometryParticleHandleImp<double,3,1> **ppTVar1;
  TGeometryParticleHandleImp<double,3,1> *local_18;
  TGeometryParticleHandleImp<double,3,1> *local_10;
  undefined8 local_8;
  
  ppTVar1 = &local_18;
  local_18 = this->CharacterParticle;
  local_10 = this->GroundParticle;
  do {
    *(TGeometryParticleHandleImp<double,3,1> **)
     (((longlong)__return_storage_ptr__ - (longlong)&local_18) + (longlong)ppTVar1) = *ppTVar1;
    ppTVar1 = ppTVar1 + 1;
  } while (ppTVar1 != (TGeometryParticleHandleImp<double,3,1> **)&local_8);
  return __return_storage_ptr__;
}

// SetEnabled @ 1438d21b0

void __thiscall
Chaos::FCharacterGroundConstraintHandle::SetEnabled
          (FCharacterGroundConstraintHandle *this,bool param_1)

{
  this->bDisabled = !param_1;
  return;
}

// SetGroundParticle @ 1438d2400

void __thiscall
Chaos::FCharacterGroundConstraintHandle::SetGroundParticle
          (FCharacterGroundConstraintHandle *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  double dVar1;
  double dVar2;
  bool *pbVar3;
  TVector<double,3> *pTVar4;
  TRotation<double,3> *pTVar5;
  TGeometryParticleHandleImp<double,3,1> *pTVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  TVector<double>_u_0 local_88;
  TVector<double>_u_0 local_68;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  TRotation<double,3> local_28;
  
  if (param_1 != this->GroundParticle) {
    if (param_1 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      pTVar6 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      if (1 < *(byte *)((longlong)&param_1->_padding_ + 4)) {
        pTVar6 = param_1;
      }
      if ((pTVar6 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
         (pbVar3 = TPBDRigidParticleHandleImp<double,3,1>::Disabled
                             ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar6), *pbVar3 != false))
      {
        param_1 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      }
    }
    pTVar6 = this->GroundParticle;
    if (pTVar6 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      TGeometryParticlesImp<double,3,0>::RemoveConstraintHandle
                ((TGeometryParticlesImp<double,3,0> *)pTVar6->_padding_,(int *)&pTVar6->_padding_,
                 (FConstraintHandle *)this);
    }
    this->GroundParticle = param_1;
    if (param_1 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      TGeometryParticlesImp<double,3,0>::AddConstraintHandle
                ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,(int *)&param_1->_padding_,
                 (FConstraintHandle *)this);
    }
    pTVar6 = this->CharacterParticle;
    local_88._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    local_88._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    local_88._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    local_88._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if ((pTVar6 != (TGeometryParticleHandleImp<double,3,1> *)0x0) && (this->bDisabled == false)) {
      pTVar4 = TParticles<double,3>::GetX
                         ((TParticles<double,3> *)pTVar6->_padding_,(int)pTVar6->_padding_);
      local_88._s_0.Z = (double)*(undefined8 *)&pTVar4->field_0x10;
      uVar7 = SUB84(local_88._s_0.Z,0);
      uVar8 = (undefined4)((ulonglong)local_88._s_0.Z >> 0x20);
      local_88._0_4_ = *(undefined4 *)pTVar4;
      local_88._4_4_ = *(undefined4 *)&pTVar4->field_0x4;
      local_88._8_4_ = *(undefined4 *)&pTVar4->field_0x8;
      local_88._12_4_ = *(undefined4 *)&pTVar4->field_0xc;
      if (this->GroundParticle != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        pTVar5 = TGeometryParticleHandleImp<double,3,1>::GetR(this->GroundParticle,&local_28);
        dVar2 = *(double *)&pTVar5->field_0x8 *
                GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        dVar1 = *(double *)&pTVar5->field_0x18 *
                GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        local_48._8_4_ = SUB84(dVar2,0);
        local_48._0_8_ =
             *(double *)pTVar5 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        local_48._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
        local_38._8_4_ = SUB84(dVar1,0);
        local_38._0_8_ =
             *(double *)&pTVar5->field_0x10 *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        local_38._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
        pTVar4 = TParticles<double,3>::GetX
                           ((TParticles<double,3> *)this->GroundParticle->_padding_,
                            (int)this->GroundParticle->_padding_);
        local_68._s_0.X = (double)CONCAT44(local_88._4_4_,local_88._0_4_) - *(double *)pTVar4;
        local_68._s_0.Y =
             (double)CONCAT44(local_88._12_4_,local_88._8_4_) - *(double *)&pTVar4->field_0x8;
        local_68._s_0.Z = local_88._s_0.Z - *(double *)&pTVar4->field_0x10;
        UE::Math::TQuat<double>::RotateVector
                  ((TQuat<double> *)local_48,(TVector<double> *)&local_88._s_0,
                   (TVector<double> *)&local_68._s_0);
        uVar7 = SUB84(local_88._s_0.Z,0);
        uVar8 = (undefined4)((ulonglong)local_88._16_8_ >> 0x20);
      }
      uVar9 = CONCAT44(uVar8,uVar7);
    }
    this->DirtyFlags = this->DirtyFlags | 1;
    *(undefined4 *)&this->LocalCharacterPosition = local_88._0_4_;
    *(undefined4 *)&(this->LocalCharacterPosition).field_0x4 = local_88._4_4_;
    *(undefined4 *)&(this->LocalCharacterPosition).field_0x8 = local_88._8_4_;
    *(undefined4 *)&(this->LocalCharacterPosition).field_0xc = local_88._12_4_;
    *(undefined8 *)&(this->LocalCharacterPosition).field_0x10 = uVar9;
  }
  return;
}

// StaticType @ 1438d6170

FConstraintHandleTypeID * __cdecl Chaos::FCharacterGroundConstraintHandle::StaticType(void)

{
  FConstraintHandleTypeID *pFVar1;
  FName local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FCharacterGroundConstraintHandle::StaticType(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FCharacterGroundConstraintHandle::StaticType(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FCharacterGroundConstraintHandle::StaticType(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = FIndexedConstraintHandle::StaticType();
      ::FName::FName(local_res8,L"FCharacterGroundConstraintHandle");
      `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FCharacterGroundConstraintHandle::StaticType(void)'
      ::__l2::STypeID.TypeName = local_res8[0];
      `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FCharacterGroundConstraintHandle::StaticType(void)'
      ::__l2::STypeID.BaseType = pFVar1;
      _Init_thread_footer(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FCharacterGroundConstraintHandle::StaticType(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return &`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FCharacterGroundConstraintHandle::StaticType(void)'
          ::__l2::STypeID;
}

