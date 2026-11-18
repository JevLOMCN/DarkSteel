// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 9

// StaticClass @ 14940d740

UClass * __cdecl UNiagaraStatelessModule_AddVelocity::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_AddVelocity.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_AddVelocity",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_AddVelocity.InnerSingleton,
               StaticRegisterNativesUNiagaraStatelessModule_AddVelocity,0x140,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraStatelessModule_AddVelocity>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_AddVelocity>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_AddVelocity.InnerSingleton;
}

// UNiagaraStatelessModule_AddVelocity @ 149428d60

UNiagaraStatelessModule_AddVelocity * __thiscall
UNiagaraStatelessModule_AddVelocity::UNiagaraStatelessModule_AddVelocity
          (UNiagaraStatelessModule_AddVelocity *this,FVTableHelper *param_1)

{
  float fVar1;
  double dVar2;
  TVector<float>_u_0 local_18;
  
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this,param_1);
  this->VelocityType = Linear;
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_AddVelocity__6B_;
  local_18._0_8_ = 0;
  local_18._s_0.Z = 100.0;
  FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
            (&this->LinearVelocityDistribution,(TVector<float> *)&local_18._s_0);
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
            (&this->LinearVelocityScale,__real_3f800000);
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
            (&this->ConeVelocityDistribution,__real_43fa0000);
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  fVar1 = __real_42c80000;
  (this->ConeRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->ConeRotation).Yaw = dVar2;
  (this->ConeRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->ConeAngle = 45.0;
  this->InnerCone = 0.0;
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
            (&this->PointVelocityDistribution,fVar1);
  *(undefined8 *)&(this->PointOrigin).field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->PointOrigin).field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  this->bSpeedFalloffFromConeAxisEnabled = false;
  this->SpeedFalloffFromConeAxis = 0.0;
  this->CoordinateSpace = Local;
  return this;
}

// UNiagaraStatelessModule_AddVelocity @ 149428e50

UNiagaraStatelessModule_AddVelocity * __thiscall
UNiagaraStatelessModule_AddVelocity::UNiagaraStatelessModule_AddVelocity
          (UNiagaraStatelessModule_AddVelocity *this)

{
  float fVar1;
  double dVar2;
  TVector<float>_u_0 local_18;
  
  UNiagaraStatelessModule::UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  this->VelocityType = Linear;
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_AddVelocity__6B_;
  local_18._0_8_ = 0;
  local_18._s_0.Z = 100.0;
  FNiagaraDistributionRangeVector3::FNiagaraDistributionRangeVector3
            (&this->LinearVelocityDistribution,(TVector<float> *)&local_18._s_0);
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
            (&this->LinearVelocityScale,__real_3f800000);
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
            (&this->ConeVelocityDistribution,__real_43fa0000);
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  fVar1 = __real_42c80000;
  (this->ConeRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->ConeRotation).Yaw = dVar2;
  (this->ConeRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->ConeAngle = 45.0;
  this->InnerCone = 0.0;
  FNiagaraDistributionRangeFloat::FNiagaraDistributionRangeFloat
            (&this->PointVelocityDistribution,fVar1);
  *(undefined8 *)&(this->PointOrigin).field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (this->PointOrigin).field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  this->bSpeedFalloffFromConeAxisEnabled = false;
  this->SpeedFalloffFromConeAxis = 0.0;
  this->CoordinateSpace = Local;
  return this;
}

// ~UNiagaraStatelessModule_AddVelocity @ 14942c6b0

void __thiscall
UNiagaraStatelessModule_AddVelocity::~UNiagaraStatelessModule_AddVelocity
          (UNiagaraStatelessModule_AddVelocity *this)

{
  this->_padding_ = (longlong)&___7UNiagaraStatelessModule_AddVelocity__6B_;
  FInstancedStruct::Reset((FInstancedStruct *)&(this->PointVelocityDistribution)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->ConeVelocityDistribution)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->LinearVelocityScale)._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->LinearVelocityDistribution)._padding_);
  UNiagaraStatelessModule::~UNiagaraStatelessModule((UNiagaraStatelessModule *)this);
  return;
}

// BuildEmitterData @ 149431b40

void __thiscall
UNiagaraStatelessModule_AddVelocity::BuildEmitterData
          (UNiagaraStatelessModule_AddVelocity *this,
          FNiagaraStatelessEmitterDataBuildContext *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  ENSM_VelocityType EVar5;
  bool bVar6;
  int iVar7;
  FPhysicsBuildData *pFVar8;
  TQuat<double> *pTVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar13;
  undefined8 uVar12;
  float fVar14;
  float fVar15;
  undefined1 local_res18 [16];
  undefined1 local_68 [80];
  
  bVar6 = UNiagaraStatelessModule::IsModuleEnabled((UNiagaraStatelessModule *)this);
  if (bVar6) {
    pFVar8 = FNiagaraStatelessEmitterDataBuildContext::
             GetTransientBuildData<NiagaraStateless::FPhysicsBuildData>(param_1);
    EVar5 = this->VelocityType;
    if (EVar5 == Linear) {
      cVar4 = (char)(this->LinearVelocityDistribution)._padding_;
      if (cVar4 == '\x01') {
        FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                  (param_1,(FNiagaraVariableBase *)
                           ((longlong)&(this->LinearVelocityDistribution)._padding_ + 4));
      }
      else if (cVar4 == '\x02') {
        FNiagaraStatelessEmitterDataBuildContext::AddExpression
                  (param_1,(FInstancedStruct *)&(this->LinearVelocityDistribution)._padding_);
      }
      pFVar8->VelocityCoordinateSpace = this->CoordinateSpace;
      uVar10 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      cVar4 = (char)(this->LinearVelocityDistribution)._padding_;
      uVar11 = (undefined4)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      uVar13 = (undefined4)
               ((ulonglong)UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_ >> 0x20);
      local_68._12_4_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_68._4_4_ = uVar11;
      local_68._8_4_ = uVar13;
      if (cVar4 == '\x01') {
        local_68._0_4_ =
             FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                       (param_1,(FNiagaraVariableBase *)
                                ((longlong)&(this->LinearVelocityDistribution)._padding_ + 4));
      }
      else if (cVar4 == '\x02') {
        local_68._0_4_ =
             FNiagaraStatelessEmitterDataBuildContext::AddExpression
                       (param_1,(FInstancedStruct *)&(this->LinearVelocityDistribution)._padding_);
      }
      else {
        uVar12 = *(undefined8 *)&(this->LinearVelocityDistribution).Min.field0_0x0;
        local_68._12_4_ = (this->LinearVelocityDistribution).Min.field0_0x0._s_0.Z;
        local_68._4_4_ = (undefined4)uVar12;
        local_68._8_4_ = (undefined4)((ulonglong)uVar12 >> 0x20);
        local_68._0_4_ = -1;
        uVar10 = local_68._12_4_;
        if (cVar4 != '\x03') {
          uVar12 = *(undefined8 *)&(this->LinearVelocityDistribution).Max.field0_0x0;
          uVar10 = (this->LinearVelocityDistribution).Max.field0_0x0._s_0.Z;
        }
        uVar11 = (undefined4)uVar12;
        uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
      }
      *(ulonglong *)&pFVar8->VelocityRange = CONCAT44(local_68._4_4_,local_68._0_4_);
      *(ulonglong *)((longlong)&(pFVar8->VelocityRange).Min.field0_0x0 + 4) =
           CONCAT44(local_68._12_4_,local_68._8_4_);
      *(ulonglong *)&(pFVar8->VelocityRange).Max.field0_0x0 = CONCAT44(uVar13,uVar11);
      (pFVar8->VelocityRange).Max.field0_0x0._s_0.Z = (float)uVar10;
      fVar15 = __real_3f800000;
      cVar4 = (char)(this->LinearVelocityScale)._padding_;
      if (cVar4 == '\x01') {
        iVar7 = FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                          (param_1,(FNiagaraVariableBase *)
                                   ((longlong)&(this->LinearVelocityScale)._padding_ + 4));
        (pFVar8->LinearVelocityScale).ParameterOffset = iVar7;
        (pFVar8->LinearVelocityScale).Min = fVar15;
        (pFVar8->LinearVelocityScale).Max = fVar15;
      }
      else if (cVar4 == '\x02') {
        iVar7 = FNiagaraStatelessEmitterDataBuildContext::AddExpression
                          (param_1,(FInstancedStruct *)&(this->LinearVelocityScale)._padding_);
        (pFVar8->LinearVelocityScale).ParameterOffset = iVar7;
        (pFVar8->LinearVelocityScale).Min = fVar15;
        (pFVar8->LinearVelocityScale).Max = fVar15;
      }
      else {
        fVar15 = (this->LinearVelocityScale).Min;
        if (cVar4 == '\x03') {
          (pFVar8->LinearVelocityScale).ParameterOffset = -1;
          (pFVar8->LinearVelocityScale).Min = fVar15;
          (pFVar8->LinearVelocityScale).Max = fVar15;
        }
        else {
          fVar14 = (this->LinearVelocityScale).Max;
          (pFVar8->LinearVelocityScale).ParameterOffset = -1;
          (pFVar8->LinearVelocityScale).Min = fVar15;
          (pFVar8->LinearVelocityScale).Max = fVar14;
        }
      }
    }
    else if (EVar5 == FromPoint) {
      if (pFVar8->bPointVelocity != false) {
        `UNiagaraStatelessModule_AddVelocity::BuildEmitterData'::__l12::<lambda_1>::operator()
                  (local_res18);
      }
      pFVar8->bPointVelocity = true;
      pFVar8->PointCoordinateSpace = this->CoordinateSpace;
      cVar4 = (char)(this->PointVelocityDistribution)._padding_;
      if (cVar4 == '\x01') {
        fVar14 = 0.0;
        fVar15 = 0.0;
        iVar7 = FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                          (param_1,(FNiagaraVariableBase *)
                                   ((longlong)&(this->PointVelocityDistribution)._padding_ + 4));
      }
      else if (cVar4 == '\x02') {
        fVar14 = 0.0;
        fVar15 = 0.0;
        iVar7 = FNiagaraStatelessEmitterDataBuildContext::AddExpression
                          (param_1,(FInstancedStruct *)&(this->PointVelocityDistribution)._padding_)
        ;
      }
      else {
        fVar15 = (this->PointVelocityDistribution).Min;
        fVar14 = fVar15;
        if (cVar4 != '\x03') {
          fVar14 = (this->PointVelocityDistribution).Max;
        }
        iVar7 = -1;
      }
      (pFVar8->PointVelocityRange).ParameterOffset = iVar7;
      (pFVar8->PointVelocityRange).Min = fVar15;
      (pFVar8->PointVelocityRange).Max = fVar14;
      *(undefined8 *)&(pFVar8->PointOrigin).field0_0x0 =
           *(undefined8 *)&(this->PointOrigin).field0_0x0;
      (pFVar8->PointOrigin).field0_0x0._s_0.Z = (this->PointOrigin).field0_0x0._s_0.Z;
    }
    else if (EVar5 == InCone) {
      if (pFVar8->bConeVelocity != false) {
        `UNiagaraStatelessModule_AddVelocity::BuildEmitterData'::__l16::<lambda_2>::operator()
                  (local_res18);
      }
      pFVar8->bConeVelocity = true;
      pFVar8->ConeCoordinateSpace = this->CoordinateSpace;
      pTVar9 = UE::Math::TRotator<double>::Quaternion(&this->ConeRotation,(TQuat<double> *)local_68)
      ;
      dVar1 = pTVar9->Y;
      dVar2 = pTVar9->Z;
      dVar3 = pTVar9->W;
      (pFVar8->ConeQuat).X = (float)pTVar9->X;
      (pFVar8->ConeQuat).Y = (float)dVar1;
      (pFVar8->ConeQuat).Z = (float)dVar2;
      (pFVar8->ConeQuat).W = (float)dVar3;
      cVar4 = (char)(this->ConeVelocityDistribution)._padding_;
      if (cVar4 == '\x01') {
        fVar14 = 0.0;
        fVar15 = 0.0;
        iVar7 = FNiagaraStatelessEmitterDataBuildContext::AddRendererBinding
                          (param_1,(FNiagaraVariableBase *)
                                   ((longlong)&(this->ConeVelocityDistribution)._padding_ + 4));
      }
      else if (cVar4 == '\x02') {
        fVar14 = 0.0;
        fVar15 = 0.0;
        iVar7 = FNiagaraStatelessEmitterDataBuildContext::AddExpression
                          (param_1,(FInstancedStruct *)&(this->ConeVelocityDistribution)._padding_);
      }
      else {
        fVar15 = (this->ConeVelocityDistribution).Min;
        fVar14 = fVar15;
        if (cVar4 != '\x03') {
          fVar14 = (this->ConeVelocityDistribution).Max;
        }
        iVar7 = -1;
      }
      (pFVar8->ConeVelocityRange).ParameterOffset = iVar7;
      (pFVar8->ConeVelocityRange).Min = fVar15;
      (pFVar8->ConeVelocityRange).Max = fVar14;
      pFVar8->ConeOuterAngle = this->ConeAngle;
      pFVar8->ConeInnerAngle = this->InnerCone;
      if (this->bSpeedFalloffFromConeAxisEnabled == false) {
        fVar15 = 0.0;
      }
      else {
        fVar15 = this->SpeedFalloffFromConeAxis;
        if (__real_3f800000 <= this->SpeedFalloffFromConeAxis) {
          fVar15 = __real_3f800000;
        }
        if (fVar15 <= 0.0) {
          fVar15 = 0.0;
        }
      }
      pFVar8->ConeVelocityFalloff = fVar15;
    }
  }
  return;
}

// GetPrivateStaticClass @ 14944b470

UClass * __cdecl UNiagaraStatelessModule_AddVelocity::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraStatelessModule_AddVelocity.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraStatelessModule_AddVelocity",
               &Z_Registration_Info_UClass_UNiagaraStatelessModule_AddVelocity.InnerSingleton,
               StaticRegisterNativesUNiagaraStatelessModule_AddVelocity,0x140,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraStatelessModule_AddVelocity>,
               InternalVTableHelperCtorCaller<UNiagaraStatelessModule_AddVelocity>,local_res8,
               UNiagaraStatelessModule::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraStatelessModule_AddVelocity.InnerSingleton;
}

// StaticRegisterNativesUNiagaraStatelessModule_AddVelocity @ 149469bf0

void __cdecl
UNiagaraStatelessModule_AddVelocity::StaticRegisterNativesUNiagaraStatelessModule_AddVelocity(void)

{
  return;
}

// operator() @ 1505428a0

bool __thiscall
`UNiagaraStatelessModule_AddVelocity::BuildEmitterData'::__l12::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6611384789574352871>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6611384789574352871>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150542920

bool __thiscall
`UNiagaraStatelessModule_AddVelocity::BuildEmitterData'::__l16::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6611384789574352862>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6611384789574352862>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

