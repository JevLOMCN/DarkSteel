// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 54

// StaticClass @ 14db76f80

UClass * __cdecl UChaosClothingInteractor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosClothingInteractor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosCloth",L"ChaosClothingInteractor",
               &Z_Registration_Info_UClass_UChaosClothingInteractor.InnerSingleton,
               StaticRegisterNativesUChaosClothingInteractor,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UChaosClothingInteractor>,
               InternalVTableHelperCtorCaller<UChaosClothingInteractor>,local_res8,
               UClothingInteractor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosClothingInteractor.InnerSingleton;
}

// UChaosClothingInteractor @ 14db9d8e0

UChaosClothingInteractor * __thiscall
UChaosClothingInteractor::UChaosClothingInteractor
          (UChaosClothingInteractor *this,FVTableHelper *param_1)

{
  UClothingInteractor::UClothingInteractor((UClothingInteractor *)this,param_1);
  this->_padding_ = (longlong)&___7UChaosClothingInteractor__6B_;
  (this->Commands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Commands).ArrayNum = 0;
  (this->Commands).ArrayMax = 0;
  (this->ConfigCommands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConfigCommands).ArrayNum = 0;
  (this->ConfigCommands).ArrayMax = 0;
  return this;
}

// UChaosClothingInteractor @ 14db9d920

UChaosClothingInteractor * __thiscall
UChaosClothingInteractor::UChaosClothingInteractor
          (UChaosClothingInteractor *this,FObjectInitializer *param_1)

{
  UClothingInteractor::UClothingInteractor((UClothingInteractor *)this,param_1);
  this->_padding_ = (longlong)&___7UChaosClothingInteractor__6B_;
  (this->Commands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Commands).ArrayNum = 0;
  (this->Commands).ArrayMax = 0;
  (this->ConfigCommands).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConfigCommands).ArrayNum = 0;
  (this->ConfigCommands).ArrayMax = 0;
  return this;
}

// ~UChaosClothingInteractor @ 14dba07c0

void __thiscall UChaosClothingInteractor::~UChaosClothingInteractor(UChaosClothingInteractor *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UChaosClothingInteractor__6B_;
  DestructItems<TDelegate<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy>,int>
            ((TDelegate<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy>
              *)(this->ConfigCommands).AllocatorInstance.Data,(this->ConfigCommands).ArrayNum);
  pFVar1 = (this->ConfigCommands).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegate<void___cdecl(Chaos::FClothingSimulationCloth_*),FDefaultDelegateUserPolicy>,int>
            ((TDelegate<void___cdecl(Chaos::FClothingSimulationCloth_*),FDefaultDelegateUserPolicy>
              *)(this->Commands).AllocatorInstance.Data,(this->Commands).ArrayNum);
  pFVar1 = (this->Commands).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UClothingInteractor::~UClothingInteractor((UClothingInteractor *)this);
  return;
}

// operator() @ 14dba4f90

void __thiscall
`UChaosClothingInteractor::SetAerodynamics'::__l2::<lambda_1>::operator()
          (void *this,FClothingSimulationConfig *param_1,int param_2)

{
  FCollectionPropertyFacade *pFVar1;
  int *piVar2;
  float local_res8 [2];
  TVector2<float>_u_0 local_res20;
  TVector<float>_u_0 local_28;
  
  local_res8[0] = 1.225;
  pFVar1 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  local_res20._s_0.X = (float)*(undefined4 *)this;
  local_res20._s_0.Y = local_res20._s_0.X;
  Chaos::Softs::FCollectionPropertyFacade::SetWeightedFloatValue
            (pFVar1,&Chaos::Softs::FVelocityAndPressureField::DragName,
             (TVector2<float> *)&local_res20._s_0);
  pFVar1 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  local_res20._s_0.X = *(float *)((longlong)this + 4);
  local_res20._s_0.Y = local_res20._s_0.X;
  Chaos::Softs::FCollectionPropertyFacade::SetWeightedFloatValue
            (pFVar1,&Chaos::Softs::FVelocityAndPressureField::LiftName,
             (TVector2<float> *)&local_res20._s_0);
  pFVar1 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&pFVar1->field_0x58,
                      Chaos::Softs::FVelocityAndPressureField::FluidDensityName);
  if ((piVar2 != (int *)0x0) && (*piVar2 != -1)) {
    Chaos::Softs::FCollectionPropertyFacade::SetWeightedValue<float>
              (pFVar1,*piVar2,local_res8,local_res8);
  }
  pFVar1 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  local_28._s_0.X = (float)*(double *)((longlong)this + 8) * __real_3c23d70a;
  local_28._s_0.Z = (float)*(double *)((longlong)this + 0x18) * __real_3c23d70a;
  local_28._s_0.Y = (float)*(double *)((longlong)this + 0x10) * __real_3c23d70a;
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&pFVar1->field_0x58,
                      Chaos::Softs::FVelocityAndPressureField::WindVelocityName);
  if ((piVar2 != (int *)0x0) && (*piVar2 != -1)) {
    Chaos::Softs::FCollectionPropertyFacade::SetWeightedValue<UE::Math::TVector<float>_>
              (pFVar1,*piVar2,(TVector<float> *)&local_28._s_0,(TVector<float> *)&local_28._s_0);
  }
  return;
}

// operator() @ 14dba50e0

void __thiscall
`UChaosClothingInteractor::SetAnimDrive'::__l2::<lambda_1>::operator()
          (void *this,FClothingSimulationConfig *param_1,int param_2)

{
  FCollectionPropertyFacade *pFVar1;
  TVector2<float>_u_0 local_res8;
  
  pFVar1 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  local_res8._s_0.X = (float)*(double *)this;
  local_res8._s_0.Y = (float)*(double *)((longlong)this + 8);
  Chaos::Softs::FCollectionPropertyFacade::SetWeightedFloatValue
            (pFVar1,&Chaos::Softs::FPBDAnimDriveConstraint::AnimDriveStiffnessName,
             (TVector2<float> *)&local_res8._s_0);
  pFVar1 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  local_res8._s_0.X = (float)*(double *)((longlong)this + 0x10);
  local_res8._s_0.Y = (float)*(double *)((longlong)this + 0x18);
  Chaos::Softs::FCollectionPropertyFacade::SetWeightedFloatValue
            (pFVar1,&Chaos::Softs::FPBDAnimDriveConstraint::AnimDriveDampingName,
             (TVector2<float> *)&local_res8._s_0);
  return;
}

// operator() @ 14dba5190

void __thiscall
`UChaosClothingInteractor::SetAnimDriveLinear'::__l2::<lambda_1>::operator()
          (void *this,FClothingSimulationConfig *param_1,int param_2)

{
  int iVar1;
  FCollectionPropertyFacade *pFVar2;
  int *piVar3;
  TVector<float>_u_0 local_18;
  
  pFVar2 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  Chaos::Softs::FCollectionPropertyFacade::SetWeightedFloatValue
            (pFVar2,&Chaos::Softs::FPBDAnimDriveConstraint::AnimDriveStiffnessName,this);
  pFVar2 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  piVar3 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&pFVar2->field_0x58,
                      Chaos::Softs::FPBDAnimDriveConstraint::AnimDriveDampingName);
  if ((piVar3 != (int *)0x0) && (iVar1 = *piVar3, iVar1 != -1)) {
    local_18._s_0.X = AnimDriveDamping.field0_0x0._s_0.X;
    local_18._s_0.Y = AnimDriveDamping.field0_0x0._s_0.X;
    local_18._s_0.Z = AnimDriveDamping.field0_0x0._s_0.X;
    Chaos::Softs::FCollectionPropertyFacade::SetValue<UE::Math::TVector<float>_>
              (pFVar2,iVar1,(TArrayView<UE::Math::TVector<float>,int> *)&pFVar2->field_0x18,
               (TVector<float> *)&local_18._s_0);
    local_18._s_0.X = AnimDriveDamping.field0_0x0._s_0.Y;
    local_18._s_0.Y = AnimDriveDamping.field0_0x0._s_0.Y;
    local_18._s_0.Z = AnimDriveDamping.field0_0x0._s_0.Y;
    Chaos::Softs::FCollectionPropertyFacade::SetValue<UE::Math::TVector<float>_>
              (pFVar2,iVar1,(TArrayView<UE::Math::TVector<float>,int> *)&pFVar2->field_0x28,
               (TVector<float> *)&local_18._s_0);
  }
  return;
}

// operator() @ 14dba5260

void __thiscall
`UChaosClothingInteractor::SetCollision'::__l2::<lambda_1>::operator()
          (void *this,FClothingSimulationConfig *param_1,int param_2)

{
  FCollectionPropertyFacade *pFVar1;
  int *piVar2;
  
  pFVar1 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&pFVar1->field_0x58,Chaos::FClothingSimulationCloth::CollisionThicknessName
                     );
  if ((piVar2 != (int *)0x0) && (*piVar2 != -1)) {
    Chaos::Softs::FCollectionPropertyFacade::SetWeightedValue<float>(pFVar1,*piVar2,this,this);
  }
  pFVar1 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&pFVar1->field_0x58,
                      Chaos::FClothingSimulationCloth::FrictionCoefficientName);
  if ((piVar2 != (int *)0x0) && (*piVar2 != -1)) {
    Chaos::Softs::FCollectionPropertyFacade::SetWeightedValue<float>
              (pFVar1,*piVar2,(float *)((longlong)this + 4),(float *)((longlong)this + 4));
  }
  pFVar1 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&pFVar1->field_0x58,Chaos::FClothingSimulationCloth::UseCCDName);
  if ((piVar2 != (int *)0x0) && (*piVar2 != -1)) {
    Chaos::Softs::FCollectionPropertyFacade::SetWeightedValue<bool>
              (pFVar1,*piVar2,(bool *)((longlong)this + 8),(bool *)((longlong)this + 8));
  }
  pFVar1 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&pFVar1->field_0x58,
                      Chaos::Softs::FPBDCollisionSpringConstraints::SelfCollisionThicknessName);
  if ((piVar2 != (int *)0x0) && (*piVar2 != -1)) {
    Chaos::Softs::FCollectionPropertyFacade::SetWeightedValue<float>
              (pFVar1,*piVar2,(float *)((longlong)this + 0xc),(float *)((longlong)this + 0xc));
  }
  return;
}

// operator() @ 14dba5390

void __thiscall
`UChaosClothingInteractor::SetDamping'::__l2::<lambda_1>::operator()
          (void *this,FClothingSimulationConfig *param_1,int param_2)

{
  FCollectionPropertyFacade *pFVar1;
  int *piVar2;
  
  pFVar1 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&pFVar1->field_0x58,Chaos::FClothingSimulationCloth::DampingCoefficientName
                     );
  if ((piVar2 != (int *)0x0) && (*piVar2 != -1)) {
    Chaos::Softs::FCollectionPropertyFacade::SetWeightedValue<float>(pFVar1,*piVar2,this,this);
  }
  pFVar1 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&pFVar1->field_0x58,
                      Chaos::FClothingSimulationCloth::LocalDampingCoefficientName);
  if ((piVar2 != (int *)0x0) && (*piVar2 != -1)) {
    Chaos::Softs::FCollectionPropertyFacade::SetWeightedValue<float>
              (pFVar1,*piVar2,(float *)((longlong)this + 4),(float *)((longlong)this + 4));
  }
  return;
}

// operator() @ 14dba5440

void __thiscall
`UChaosClothingInteractor::SetGravity'::__l2::<lambda_1>::operator()
          (void *this,FClothingSimulationConfig *param_1,int param_2)

{
  FCollectionPropertyFacade *pFVar1;
  int *piVar2;
  TVector<float>_u_0 local_18;
  
  pFVar1 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&pFVar1->field_0x58,Chaos::FClothingSimulationCloth::GravityScaleName);
  if ((piVar2 != (int *)0x0) && (*piVar2 != -1)) {
    Chaos::Softs::FCollectionPropertyFacade::SetWeightedValue<float>(pFVar1,*piVar2,this,this);
  }
  pFVar1 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&pFVar1->field_0x58,Chaos::FClothingSimulationCloth::UseGravityOverrideName
                     );
  if ((piVar2 != (int *)0x0) && (*piVar2 != -1)) {
    Chaos::Softs::FCollectionPropertyFacade::SetWeightedValue<bool>
              (pFVar1,*piVar2,(bool *)((longlong)this + 4),(bool *)((longlong)this + 4));
  }
  pFVar1 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  local_18._s_0.X = (float)*(double *)((longlong)this + 8);
  local_18._s_0.Y = (float)*(double *)((longlong)this + 0x10);
  local_18._s_0.Z = (float)*(double *)((longlong)this + 0x18);
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&pFVar1->field_0x58,Chaos::FClothingSimulationCloth::GravityOverrideName);
  if ((piVar2 != (int *)0x0) && (*piVar2 != -1)) {
    Chaos::Softs::FCollectionPropertyFacade::SetWeightedValue<UE::Math::TVector<float>_>
              (pFVar1,*piVar2,(TVector<float> *)&local_18._s_0,(TVector<float> *)&local_18._s_0);
  }
  return;
}

// operator() @ 14dba5560

void __thiscall
`UChaosClothingInteractor::SetLongRangeAttachment'::__l2::<lambda_1>::operator()
          (void *this,FClothingSimulationConfig *param_1,int param_2)

{
  FCollectionPropertyFacade *pFVar1;
  TVector2<float>_u_0 local_res8;
  
  pFVar1 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  local_res8._s_0.X = (float)*(double *)this;
  local_res8._s_0.Y = (float)*(double *)((longlong)this + 8);
  Chaos::Softs::FCollectionPropertyFacade::SetWeightedFloatValue
            (pFVar1,&Chaos::Softs::FPBDLongRangeConstraints::TetherStiffnessName,
             (TVector2<float> *)&local_res8._s_0);
  pFVar1 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  local_res8._s_0.X = (float)*(double *)((longlong)this + 0x10);
  local_res8._s_0.Y = (float)*(double *)((longlong)this + 0x18);
  Chaos::Softs::FCollectionPropertyFacade::SetWeightedFloatValue
            (pFVar1,&Chaos::Softs::FPBDLongRangeConstraints::TetherScaleName,
             (TVector2<float> *)&local_res8._s_0);
  return;
}

// operator() @ 14dba5610

void __thiscall
`UChaosClothingInteractor::SetMaterial'::__l2::<lambda_1>::operator()
          (void *this,FClothingSimulationConfig *param_1,int param_2)

{
  FCollectionPropertyFacade *pFVar1;
  TVector2<float>_u_0 local_res8;
  
  pFVar1 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  local_res8._s_0.X = (float)*(double *)this;
  local_res8._s_0.Y = (float)*(double *)((longlong)this + 8);
  Chaos::Softs::FCollectionPropertyFacade::SetWeightedFloatValue
            (pFVar1,&Chaos::Softs::FPBDEdgeSpringConstraints::EdgeSpringStiffnessName,
             (TVector2<float> *)&local_res8._s_0);
  pFVar1 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  local_res8._s_0.X = (float)*(double *)((longlong)this + 0x10);
  local_res8._s_0.Y = (float)*(double *)((longlong)this + 0x18);
  Chaos::Softs::FCollectionPropertyFacade::SetWeightedFloatValue
            (pFVar1,&Chaos::Softs::FPBDBendingSpringConstraints::BendingSpringStiffnessName,
             (TVector2<float> *)&local_res8._s_0);
  pFVar1 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  local_res8._s_0.X = (float)*(double *)((longlong)this + 0x20);
  local_res8._s_0.Y = (float)*(double *)((longlong)this + 0x28);
  Chaos::Softs::FCollectionPropertyFacade::SetWeightedFloatValue
            (pFVar1,&Chaos::Softs::FPBDAreaSpringConstraints::AreaSpringStiffnessName,
             (TVector2<float> *)&local_res8._s_0);
  return;
}

// operator() @ 14dba5700

void __thiscall
`UChaosClothingInteractor::SetMaterialBuckling'::__l2::<lambda_1>::operator()
          (void *this,FClothingSimulationConfig *param_1,int param_2)

{
  FCollectionPropertyFacade *pFVar1;
  int *piVar2;
  TVector2<float>_u_0 local_res8;
  
  pFVar1 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  local_res8._s_0.X = (float)*(double *)this;
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&pFVar1->field_0x58,Chaos::Softs::FPBDBendingConstraints::BucklingRatioName
                     );
  if ((piVar2 != (int *)0x0) && (*piVar2 != -1)) {
    Chaos::Softs::FCollectionPropertyFacade::SetWeightedValue<float>
              (pFVar1,*piVar2,local_res8.XY,local_res8.XY);
  }
  pFVar1 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  local_res8._s_0.X = (float)*(double *)((longlong)this + 0x10);
  local_res8._s_0.Y = (float)*(double *)((longlong)this + 0x18);
  Chaos::Softs::FCollectionPropertyFacade::SetWeightedFloatValue
            (pFVar1,&Chaos::Softs::FPBDBendingConstraints::BucklingStiffnessName,
             (TVector2<float> *)&local_res8._s_0);
  return;
}

// operator() @ 14dba57c0

void __thiscall
`UChaosClothingInteractor::SetMaterialLinear'::__l2::<lambda_1>::operator()
          (void *this,FClothingSimulationConfig *param_1,int param_2)

{
  FCollectionPropertyFacade *pFVar1;
  
  pFVar1 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  Chaos::Softs::FCollectionPropertyFacade::SetWeightedFloatValue
            (pFVar1,&Chaos::Softs::FPBDEdgeSpringConstraints::EdgeSpringStiffnessName,this);
  pFVar1 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  Chaos::Softs::FCollectionPropertyFacade::SetWeightedFloatValue
            (pFVar1,&Chaos::Softs::FPBDBendingSpringConstraints::BendingSpringStiffnessName,
             (TVector2<float> *)((longlong)this + 8));
  pFVar1 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  Chaos::Softs::FCollectionPropertyFacade::SetWeightedFloatValue
            (pFVar1,&Chaos::Softs::FPBDAreaSpringConstraints::AreaSpringStiffnessName,
             (TVector2<float> *)((longlong)this + 0x10));
  return;
}

// operator() @ 14dba5850

void __thiscall
`UChaosClothingInteractor::SetVelocityClamps'::__l2::<lambda_1>::operator()
          (void *this,FClothingSimulationConfig *param_1,int param_2)

{
  FCollectionPropertyFacade *pFVar1;
  int *piVar2;
  TVector<float>_u_0 *pTVar3;
  float fVar4;
  float local_res8 [2];
  TVector<float>_u_0 local_48;
  TVector<float>_u_0 local_3c [3];
  
  pFVar1 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  if (*(char *)this == '\0') {
    pTVar3 = local_3c;
    local_3c[0]._0_8_ = DefaultLinearClamp.field0_0x0._0_8_;
    local_3c[0]._s_0.Z = DefaultLinearClamp.field0_0x0._s_0.Z;
  }
  else {
    pTVar3 = &local_48;
    local_48._s_0.X = (float)*(double *)((longlong)this + 8);
    local_48._s_0.Y = (float)*(double *)((longlong)this + 0x10);
    local_48._s_0.Z = (float)*(double *)((longlong)this + 0x18);
  }
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&pFVar1->field_0x58,Chaos::FClothingSimulationCloth::MaxLinearVelocityName)
  ;
  if ((piVar2 != (int *)0x0) && (*piVar2 != -1)) {
    Chaos::Softs::FCollectionPropertyFacade::SetWeightedValue<UE::Math::TVector<float>_>
              (pFVar1,*piVar2,(TVector<float> *)&pTVar3->_s_0,(TVector<float> *)pTVar3);
  }
  pFVar1 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  if (*(char *)((longlong)this + 0x20) == '\0') {
    pTVar3 = local_3c;
    local_3c[0]._0_8_ = DefaultLinearClamp.field0_0x0._0_8_;
    local_3c[0]._s_0.Z = DefaultLinearClamp.field0_0x0._s_0.Z;
  }
  else {
    pTVar3 = &local_48;
    local_48._s_0.X = (float)*(double *)((longlong)this + 0x28);
    local_48._s_0.Y = (float)*(double *)((longlong)this + 0x30);
    local_48._s_0.Z = (float)*(double *)((longlong)this + 0x38);
  }
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&pFVar1->field_0x58,
                      Chaos::FClothingSimulationCloth::MaxLinearAccelerationName);
  if ((piVar2 != (int *)0x0) && (*piVar2 != -1)) {
    Chaos::Softs::FCollectionPropertyFacade::SetWeightedValue<UE::Math::TVector<float>_>
              (pFVar1,*piVar2,(TVector<float> *)&pTVar3->_s_0,(TVector<float> *)pTVar3);
  }
  pFVar1 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  fVar4 = __real_7f7fffff;
  local_res8[0] = __real_7f7fffff;
  if (*(char *)((longlong)this + 0x40) != '\0') {
    local_res8[0] = *(float *)((longlong)this + 0x44);
  }
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&pFVar1->field_0x58,Chaos::FClothingSimulationCloth::MaxAngularVelocityName
                     );
  if ((piVar2 != (int *)0x0) && (*piVar2 != -1)) {
    Chaos::Softs::FCollectionPropertyFacade::SetWeightedValue<float>
              (pFVar1,*piVar2,local_res8,local_res8);
  }
  pFVar1 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  if (*(char *)((longlong)this + 0x48) != '\0') {
    fVar4 = *(float *)((longlong)this + 0x4c);
  }
  local_res8[0] = fVar4;
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&pFVar1->field_0x58,
                      Chaos::FClothingSimulationCloth::MaxAngularAccelerationName);
  if ((piVar2 != (int *)0x0) && (*piVar2 != -1)) {
    Chaos::Softs::FCollectionPropertyFacade::SetWeightedValue<float>
              (pFVar1,*piVar2,local_res8,local_res8);
  }
  return;
}

// operator() @ 14dba5a60

void __thiscall
`UChaosClothingInteractor::SetVelocityScale'::__l2::<lambda_1>::operator()
          (void *this,FClothingSimulationConfig *param_1,int param_2)

{
  FCollectionPropertyFacade *pFVar1;
  int *piVar2;
  TVector<float>_u_0 local_18;
  
  pFVar1 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  local_18._s_0.X = (float)*(double *)this;
  local_18._s_0.Y = (float)*(double *)((longlong)this + 8);
  local_18._s_0.Z = (float)*(double *)((longlong)this + 0x10);
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&pFVar1->field_0x58,
                      Chaos::FClothingSimulationCloth::LinearVelocityScaleName);
  if ((piVar2 != (int *)0x0) && (*piVar2 != -1)) {
    Chaos::Softs::FCollectionPropertyFacade::SetWeightedValue<UE::Math::TVector<float>_>
              (pFVar1,*piVar2,(TVector<float> *)&local_18._s_0,(TVector<float> *)&local_18._s_0);
  }
  pFVar1 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&pFVar1->field_0x58,
                      Chaos::FClothingSimulationCloth::AngularVelocityScaleName);
  if ((piVar2 != (int *)0x0) && (*piVar2 != -1)) {
    Chaos::Softs::FCollectionPropertyFacade::SetWeightedValue<float>
              (pFVar1,*piVar2,(float *)((longlong)this + 0x18),(float *)((longlong)this + 0x18));
  }
  pFVar1 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&pFVar1->field_0x58,
                      Chaos::FClothingSimulationCloth::FictitiousAngularScaleName);
  if ((piVar2 != (int *)0x0) && (*piVar2 != -1)) {
    Chaos::Softs::FCollectionPropertyFacade::SetWeightedValue<float>
              (pFVar1,*piVar2,(float *)((longlong)this + 0x1c),(float *)((longlong)this + 0x1c));
  }
  return;
}

// operator() @ 14dba5b80

void __thiscall
`UChaosClothingInteractor::SetWind'::__l2::<lambda_1>::operator()
          (void *this,FClothingSimulationConfig *param_1,int param_2)

{
  FCollectionPropertyFacade *pFVar1;
  int *piVar2;
  TVector2<float>_u_0 local_res8;
  TVector<float>_u_0 local_18;
  
  pFVar1 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  local_res8._s_0.X = (float)*(double *)this;
  local_res8._s_0.Y = (float)*(double *)((longlong)this + 8);
  Chaos::Softs::FCollectionPropertyFacade::SetWeightedFloatValue
            (pFVar1,&Chaos::Softs::FVelocityAndPressureField::DragName,
             (TVector2<float> *)&local_res8._s_0);
  pFVar1 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  local_res8._s_0.X = (float)*(double *)((longlong)this + 0x40);
  local_res8._s_0.Y = (float)*(double *)((longlong)this + 0x48);
  Chaos::Softs::FCollectionPropertyFacade::SetWeightedFloatValue
            (pFVar1,&Chaos::Softs::FVelocityAndPressureField::OuterDragName,
             (TVector2<float> *)&local_res8._s_0);
  pFVar1 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  local_res8._s_0.X = (float)*(double *)((longlong)this + 0x10);
  local_res8._s_0.Y = (float)*(double *)((longlong)this + 0x18);
  Chaos::Softs::FCollectionPropertyFacade::SetWeightedFloatValue
            (pFVar1,&Chaos::Softs::FVelocityAndPressureField::LiftName,
             (TVector2<float> *)&local_res8._s_0);
  pFVar1 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  local_res8._s_0.X = (float)*(double *)((longlong)this + 0x50);
  local_res8._s_0.Y = (float)*(double *)((longlong)this + 0x58);
  Chaos::Softs::FCollectionPropertyFacade::SetWeightedFloatValue
            (pFVar1,&Chaos::Softs::FVelocityAndPressureField::OuterLiftName,
             (TVector2<float> *)&local_res8._s_0);
  pFVar1 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  local_res8._s_0.X = *(float *)((longlong)this + 0x20) * __real_49742400;
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&pFVar1->field_0x58,
                      Chaos::Softs::FVelocityAndPressureField::FluidDensityName);
  if ((piVar2 != (int *)0x0) && (*piVar2 != -1)) {
    Chaos::Softs::FCollectionPropertyFacade::SetWeightedValue<float>
              (pFVar1,*piVar2,local_res8.XY,local_res8.XY);
  }
  pFVar1 = Chaos::FClothingSimulationConfig::GetProperties(param_1,param_2);
  local_18._s_0.X = (float)*(double *)((longlong)this + 0x28) * __real_3c23d70a;
  local_18._s_0.Z = (float)*(double *)((longlong)this + 0x38) * __real_3c23d70a;
  local_18._s_0.Y = (float)*(double *)((longlong)this + 0x30) * __real_3c23d70a;
  piVar2 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>::Find
                     ((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       *)&pFVar1->field_0x58,
                      Chaos::Softs::FVelocityAndPressureField::WindVelocityName);
  if ((piVar2 != (int *)0x0) && (*piVar2 != -1)) {
    Chaos::Softs::FCollectionPropertyFacade::SetWeightedValue<UE::Math::TVector<float>_>
              (pFVar1,*piVar2,(TVector<float> *)&local_18._s_0,(TVector<float> *)&local_18._s_0);
  }
  return;
}

// GetPrivateStaticClass @ 14dbfee40

UClass * __cdecl UChaosClothingInteractor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosClothingInteractor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosCloth",L"ChaosClothingInteractor",
               &Z_Registration_Info_UClass_UChaosClothingInteractor.InnerSingleton,
               StaticRegisterNativesUChaosClothingInteractor,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UChaosClothingInteractor>,
               InternalVTableHelperCtorCaller<UChaosClothingInteractor>,local_res8,
               UClothingInteractor::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosClothingInteractor.InnerSingleton;
}

// ResetAndTeleport @ 14dc0ed40

void __thiscall
UChaosClothingInteractor::ResetAndTeleport(UChaosClothingInteractor *this,bool param_1,bool param_2)

{
  TArray<TDelegate<void___cdecl(Chaos::FClothingSimulationCloth_*),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  longlong lVar9;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_e8;
  FDelegateAllocation local_e0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_d0;
  FDelegateAllocation local_c8;
  FDestructionSentinel local_b8;
  FDestructionSentinel local_a0;
  FDestructionSentinel local_88;
  FDestructionSentinel local_70;
  FDestructionSentinel local_58;
  FDelegateAllocation *local_40;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pTVar1 = &this->Commands;
  if (param_1) {
    local_e8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_e0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_e8,(FWriteAccessScope *)&local_58);
    local_40 = &local_e0;
    puVar7 = UE::Core::Private::DelegateAllocate(0x20,&local_e0);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationCloth_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationCloth_*),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::ResetAndTeleport'::`5'::<lambda_1>_>
                 ::_vftable_;
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)&local_e8) &&
       ((FScriptContainerElement *)&local_e8 < pFVar3 + (longlong)(this->Commands).ArrayMax * 0x18))
    {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = (this->Commands).ArrayNum;
    piVar2 = &(this->Commands).ArrayMax;
    if (iVar6 == *piVar2) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar1->AllocatorInstance,piVar2);
    }
    lVar9 = (longlong)iVar6;
    (this->Commands).ArrayNum = iVar6 + 1;
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    *(undefined8 *)(pFVar3 + lVar9 * 0x18) = 0;
    *(undefined8 *)(pFVar3 + lVar9 * 0x18 + 8) = 0;
    *(undefined4 *)(pFVar3 + lVar9 * 0x18 + 0x10) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_e8,(FWriteAccessScope *)&local_b8);
    if (*(void **)(pFVar3 + lVar9 * 0x18 + 8) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar3 + lVar9 * 0x18 + 8));
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar3 + lVar9 * 0x18 + 8) =
         local_e0.DelegateAllocator;
    local_e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar3 + lVar9 * 0x18 + 0x10) = local_e0.DelegateSize;
    local_e0.DelegateSize = 0;
    if (local_b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_e8,(FWriteAccessScope *)&local_a0);
    if ((local_e0.DelegateSize != 0) &&
       (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_e0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_e0,0,0,0x10);
      local_e0.DelegateSize = 0;
    }
    if (local_a0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
    }
    if (local_e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_e0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_e8.AccessDetector);
  }
  if (param_2) {
    local_d0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_c8.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_d0,(FWriteAccessScope *)&local_38);
    local_20 = &local_c8;
    puVar7 = UE::Core::Private::DelegateAllocate(0x20,&local_c8);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationCloth_Chaos___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar8 = FDelegateHandle::GenerateNewID();
      puVar7[2] = uVar8;
      *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationCloth_*),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::ResetAndTeleport'::`8'::<lambda_2>_>
                 ::_vftable_;
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)&local_d0) &&
       ((FScriptContainerElement *)&local_d0 < pFVar3 + (longlong)(this->Commands).ArrayMax * 0x18))
    {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = (this->Commands).ArrayNum;
    piVar2 = &(this->Commands).ArrayMax;
    if (iVar6 == *piVar2) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar1->AllocatorInstance,piVar2);
      (this->Commands).ArrayNum = iVar6;
    }
    lVar9 = (longlong)iVar6;
    (this->Commands).ArrayNum = iVar6 + 1;
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    *(undefined8 *)(pFVar3 + lVar9 * 0x18) = 0;
    *(undefined8 *)(pFVar3 + lVar9 * 0x18 + 8) = 0;
    *(undefined4 *)(pFVar3 + lVar9 * 0x18 + 0x10) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_d0,(FWriteAccessScope *)&local_88);
    if (*(void **)(pFVar3 + lVar9 * 0x18 + 8) != (void *)0x0) {
      FMemory::Free(*(void **)(pFVar3 + lVar9 * 0x18 + 8));
    }
    *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar3 + lVar9 * 0x18 + 8) =
         local_c8.DelegateAllocator;
    local_c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar3 + lVar9 * 0x18 + 0x10) = local_c8.DelegateSize;
    local_c8.DelegateSize = 0;
    if (local_88.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_d0,(FWriteAccessScope *)&local_70);
    if ((local_c8.DelegateSize != 0) &&
       (local_c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_c8.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_c8,0,0,0x10);
      local_c8.DelegateSize = 0;
    }
    if (local_70.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
    }
    if (local_c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_c8.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_d0.AccessDetector);
  }
  return;
}

// SetAerodynamics @ 14dc10920

void __thiscall
UChaosClothingInteractor::SetAerodynamics
          (UChaosClothingInteractor *this,float param_1,float param_2,TVector<double> *param_3)

{
  TArray<TDelegate<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  longlong lVar9;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_98;
  FDelegateAllocation local_90;
  float local_80;
  float fStack_7c;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  dStack_78 = (param_3->field0_0x0)._s_0.X;
  dStack_70 = (param_3->field0_0x0)._s_0.Y;
  pTVar1 = &this->ConfigCommands;
  dStack_68 = (param_3->field0_0x0)._s_0.Z;
  local_98.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_90.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_90.DelegateSize = 0;
  local_80 = param_1;
  fStack_7c = param_2;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_98,(FWriteAccessScope *)&local_30);
  local_18 = &local_90;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,&local_90);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetAerodynamics'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar7[3] = CONCAT44(fStack_7c,local_80);
    puVar7[4] = dStack_78;
    puVar7[5] = dStack_70;
    puVar7[6] = dStack_68;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_98) &&
     ((FScriptContainerElement *)&local_98 <
      pFVar3 + (longlong)(this->ConfigCommands).ArrayMax * 0x18)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->ConfigCommands).ArrayNum;
  piVar2 = &(this->ConfigCommands).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar1->AllocatorInstance,piVar2);
  }
  lVar9 = (longlong)iVar6;
  (this->ConfigCommands).ArrayNum = iVar6 + 1;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar3 + lVar9 * 0x18) = 0;
  *(undefined8 *)(pFVar3 + lVar9 * 0x18 + 8) = 0;
  *(undefined4 *)(pFVar3 + lVar9 * 0x18 + 0x10) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_98,(FWriteAccessScope *)&local_60);
  if (*(void **)(pFVar3 + lVar9 * 0x18 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar3 + lVar9 * 0x18 + 8));
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar3 + lVar9 * 0x18 + 8) = local_90.DelegateAllocator
  ;
  local_90.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  *(int *)(pFVar3 + lVar9 * 0x18 + 0x10) = local_90.DelegateSize;
  local_90.DelegateSize = 0;
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_98,(FWriteAccessScope *)&local_48);
  if ((local_90.DelegateSize != 0) &&
     (local_90.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_90.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_90,0,0,0x10);
    local_90.DelegateSize = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (local_90.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_90.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_98.AccessDetector);
  return;
}

// SetAnimDrive @ 14dc10b50

void __thiscall
UChaosClothingInteractor::SetAnimDrive
          (UChaosClothingInteractor *this,TVector2<double> *param_1,TVector2<double> *param_2)

{
  TArray<TDelegate<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  int iVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  longlong lVar13;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a8;
  FDelegateAllocation local_a0;
  FDestructionSentinel local_90;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  double local_40;
  double dStack_38;
  double local_30;
  double dStack_28;
  
  local_40 = (param_1->field0_0x0)._s_0.X;
  dStack_38 = (param_1->field0_0x0)._s_0.Y;
  pTVar1 = &this->ConfigCommands;
  local_a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_30 = (param_2->field0_0x0)._s_0.X;
  dStack_28 = (param_2->field0_0x0)._s_0.Y;
  local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_a0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a8,(FWriteAccessScope *)&local_60);
  local_48 = &local_a0;
  puVar11 = UE::Core::Private::DelegateAllocate(0x38,&local_a0);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    dVar5 = (param_1->field0_0x0)._s_0.X;
    dVar6 = (param_1->field0_0x0)._s_0.Y;
    puVar11[2] = uVar12;
    dVar7 = (param_2->field0_0x0)._s_0.X;
    dVar8 = (param_2->field0_0x0)._s_0.Y;
    *puVar11 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetAnimDrive'::`2'::<lambda_1>_>
                ::_vftable_;
    puVar11[3] = dVar5;
    puVar11[4] = dVar6;
    puVar11[5] = dVar7;
    puVar11[6] = dVar8;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_a8) &&
     ((FScriptContainerElement *)&local_a8 <
      pFVar3 + (longlong)(this->ConfigCommands).ArrayMax * 0x18)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar10 = (this->ConfigCommands).ArrayNum;
  piVar2 = &(this->ConfigCommands).ArrayMax;
  if (iVar10 == *piVar2) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&pTVar1->AllocatorInstance,piVar2);
  }
  lVar13 = (longlong)iVar10;
  (this->ConfigCommands).ArrayNum = iVar10 + 1;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar3 + lVar13 * 0x18) = 0;
  *(undefined8 *)(pFVar3 + lVar13 * 0x18 + 8) = 0;
  *(undefined4 *)(pFVar3 + lVar13 * 0x18 + 0x10) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a8,(FWriteAccessScope *)&local_90);
  if (*(void **)(pFVar3 + lVar13 * 0x18 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar3 + lVar13 * 0x18 + 8));
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar3 + lVar13 * 0x18 + 8) =
       local_a0.DelegateAllocator;
  local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  *(int *)(pFVar3 + lVar13 * 0x18 + 0x10) = local_a0.DelegateSize;
  local_a0.DelegateSize = 0;
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a8,(FWriteAccessScope *)&local_78);
  if ((local_a0.DelegateSize != 0) &&
     (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_a0,0,0,0x10);
    local_a0.DelegateSize = 0;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_a0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a8.AccessDetector);
  return;
}

// SetAnimDriveLinear @ 14dc10d80

void __thiscall
UChaosClothingInteractor::SetAnimDriveLinear(UChaosClothingInteractor *this,float param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  longlong lVar8;
  float fVar9;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_88;
  FDelegateAllocation local_80;
  FDestructionSentinel local_70;
  FDestructionSentinel local_58;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  fVar9 = logf(param_1);
  local_88.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_80.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  fVar9 = fVar9 * ChaosClothingInteractor::InvStiffnessLogBase + __real_3f800000;
  local_80.DelegateSize = 0;
  if (__real_3f800000 <= fVar9) {
    fVar9 = __real_3f800000;
  }
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_88,(FWriteAccessScope *)&local_40);
  local_28 = &local_80;
  puVar6 = UE::Core::Private::DelegateAllocate(0x20,&local_80);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetAnimDriveLinear'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar6[3] = (ulonglong)(uint)fVar9 << 0x20;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  pFVar2 = (this->ConfigCommands).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_88) &&
     ((FScriptContainerElement *)&local_88 <
      pFVar2 + (longlong)(this->ConfigCommands).ArrayMax * 0x18)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->ConfigCommands).ArrayNum;
  piVar1 = &(this->ConfigCommands).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->ConfigCommands).AllocatorInstance,piVar1);
  }
  lVar8 = (longlong)iVar5;
  (this->ConfigCommands).ArrayNum = iVar5 + 1;
  pFVar2 = (this->ConfigCommands).AllocatorInstance.Data;
  *(undefined8 *)(pFVar2 + lVar8 * 0x18) = 0;
  *(undefined8 *)(pFVar2 + lVar8 * 0x18 + 8) = 0;
  *(undefined4 *)(pFVar2 + lVar8 * 0x18 + 0x10) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_88,(FWriteAccessScope *)&local_70);
  if (*(void **)(pFVar2 + lVar8 * 0x18 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar2 + lVar8 * 0x18 + 8));
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar2 + lVar8 * 0x18 + 8) = local_80.DelegateAllocator
  ;
  local_80.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  *(int *)(pFVar2 + lVar8 * 0x18 + 0x10) = local_80.DelegateSize;
  local_80.DelegateSize = 0;
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_88,(FWriteAccessScope *)&local_58);
  if ((local_80.DelegateSize != 0) &&
     (local_80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_80.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_80,0,0,0x10);
    local_80.DelegateSize = 0;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (local_80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_80.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_88.AccessDetector);
  return;
}

// SetBackstop @ 14dc11210

void __thiscall UChaosClothingInteractor::SetBackstop(UChaosClothingInteractor *this,bool param_1)

{
  TArray<TDelegate<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  longlong lVar9;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  pTVar1 = &this->ConfigCommands;
  local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_30);
  local_18 = &local_70;
  puVar7 = UE::Core::Private::DelegateAllocate(0x20,&local_70);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetBackstop'::`2'::<lambda_1>_>
               ::_vftable_;
    *(bool *)(puVar7 + 3) = param_1;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_78) &&
     ((FScriptContainerElement *)&local_78 <
      pFVar3 + (longlong)(this->ConfigCommands).ArrayMax * 0x18)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->ConfigCommands).ArrayNum;
  piVar2 = &(this->ConfigCommands).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar1->AllocatorInstance,piVar2);
  }
  lVar9 = (longlong)iVar6;
  (this->ConfigCommands).ArrayNum = iVar6 + 1;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar3 + lVar9 * 0x18) = 0;
  *(undefined8 *)(pFVar3 + lVar9 * 0x18 + 8) = 0;
  *(undefined4 *)(pFVar3 + lVar9 * 0x18 + 0x10) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_60);
  if (*(void **)(pFVar3 + lVar9 * 0x18 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar3 + lVar9 * 0x18 + 8));
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar3 + lVar9 * 0x18 + 8) = local_70.DelegateAllocator
  ;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  *(int *)(pFVar3 + lVar9 * 0x18 + 0x10) = local_70.DelegateSize;
  local_70.DelegateSize = 0;
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_48);
  if ((local_70.DelegateSize != 0) &&
     (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_70,0,0,0x10);
    local_70.DelegateSize = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_70.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
  return;
}

// SetCollision @ 14dc116d0

void __thiscall
UChaosClothingInteractor::SetCollision
          (UChaosClothingInteractor *this,float param_1,float param_2,bool param_3,float param_4)

{
  TArray<TDelegate<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  longlong lVar9;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_88;
  FDelegateAllocation local_80;
  float local_70;
  float fStack_6c;
  undefined4 uStack_68;
  float fStack_64;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  pTVar1 = &this->ConfigCommands;
  fStack_64 = param_4;
  local_88.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_80.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_80.DelegateSize = 0;
  uStack_68 = CONCAT31(uStack_68._1_3_,param_3);
  local_70 = param_1;
  fStack_6c = param_2;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_88,(FWriteAccessScope *)&local_30);
  local_18 = &local_80;
  puVar7 = UE::Core::Private::DelegateAllocate(0x28,&local_80);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetCollision'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar7[3] = CONCAT44(fStack_6c,local_70);
    puVar7[4] = CONCAT44(fStack_64,uStack_68);
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_88) &&
     ((FScriptContainerElement *)&local_88 <
      pFVar3 + (longlong)(this->ConfigCommands).ArrayMax * 0x18)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->ConfigCommands).ArrayNum;
  piVar2 = &(this->ConfigCommands).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar1->AllocatorInstance,piVar2);
  }
  lVar9 = (longlong)iVar6;
  (this->ConfigCommands).ArrayNum = iVar6 + 1;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar3 + lVar9 * 0x18) = 0;
  *(undefined8 *)(pFVar3 + lVar9 * 0x18 + 8) = 0;
  *(undefined4 *)(pFVar3 + lVar9 * 0x18 + 0x10) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_88,(FWriteAccessScope *)&local_60);
  if (*(void **)(pFVar3 + lVar9 * 0x18 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar3 + lVar9 * 0x18 + 8));
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar3 + lVar9 * 0x18 + 8) = local_80.DelegateAllocator
  ;
  local_80.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  *(int *)(pFVar3 + lVar9 * 0x18 + 0x10) = local_80.DelegateSize;
  local_80.DelegateSize = 0;
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_88,(FWriteAccessScope *)&local_48);
  if ((local_80.DelegateSize != 0) &&
     (local_80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_80.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_80,0,0,0x10);
    local_80.DelegateSize = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (local_80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_80.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_88.AccessDetector);
  return;
}

// SetDamping @ 14dc11dd0

void __thiscall
UChaosClothingInteractor::SetDamping(UChaosClothingInteractor *this,float param_1,float param_2)

{
  TArray<TDelegate<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  longlong lVar9;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_98;
  FDelegateAllocation local_90;
  FDestructionSentinel local_80;
  FDestructionSentinel local_68;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  pTVar1 = &this->ConfigCommands;
  local_98.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_90.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_90.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_98,(FWriteAccessScope *)&local_50);
  local_38 = &local_90;
  puVar7 = UE::Core::Private::DelegateAllocate(0x20,&local_90);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetDamping'::`2'::<lambda_1>_>
               ::_vftable_;
    *(float *)(puVar7 + 3) = param_1;
    *(float *)((longlong)puVar7 + 0x1c) = param_2;
  }
  if (local_50.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_98) &&
     ((FScriptContainerElement *)&local_98 <
      pFVar3 + (longlong)(this->ConfigCommands).ArrayMax * 0x18)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->ConfigCommands).ArrayNum;
  piVar2 = &(this->ConfigCommands).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar1->AllocatorInstance,piVar2);
  }
  lVar9 = (longlong)iVar6;
  (this->ConfigCommands).ArrayNum = iVar6 + 1;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar3 + lVar9 * 0x18) = 0;
  *(undefined8 *)(pFVar3 + lVar9 * 0x18 + 8) = 0;
  *(undefined4 *)(pFVar3 + lVar9 * 0x18 + 0x10) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_98,(FWriteAccessScope *)&local_80);
  if (*(void **)(pFVar3 + lVar9 * 0x18 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar3 + lVar9 * 0x18 + 8));
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar3 + lVar9 * 0x18 + 8) = local_90.DelegateAllocator
  ;
  local_90.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  *(int *)(pFVar3 + lVar9 * 0x18 + 0x10) = local_90.DelegateSize;
  local_90.DelegateSize = 0;
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_98,(FWriteAccessScope *)&local_68);
  if ((local_90.DelegateSize != 0) &&
     (local_90.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_90.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_90,0,0,0x10);
    local_90.DelegateSize = 0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (local_90.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_90.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_98.AccessDetector);
  return;
}

// SetGravity @ 14dc12030

void __thiscall
UChaosClothingInteractor::SetGravity
          (UChaosClothingInteractor *this,float param_1,bool param_2,TVector<double> *param_3)

{
  TArray<TDelegate<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  longlong lVar9;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_98;
  FDelegateAllocation local_90;
  float local_80;
  undefined4 uStack_7c;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  dStack_78 = (param_3->field0_0x0)._s_0.X;
  dStack_70 = (param_3->field0_0x0)._s_0.Y;
  pTVar1 = &this->ConfigCommands;
  dStack_68 = (param_3->field0_0x0)._s_0.Z;
  uStack_7c = CONCAT31(uStack_7c._1_3_,param_2);
  local_98.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_90.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_90.DelegateSize = 0;
  local_80 = param_1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_98,(FWriteAccessScope *)&local_30);
  local_18 = &local_90;
  puVar7 = UE::Core::Private::DelegateAllocate(0x38,&local_90);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetGravity'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar7[3] = CONCAT44(uStack_7c,local_80);
    puVar7[4] = dStack_78;
    puVar7[5] = dStack_70;
    puVar7[6] = dStack_68;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_98) &&
     ((FScriptContainerElement *)&local_98 <
      pFVar3 + (longlong)(this->ConfigCommands).ArrayMax * 0x18)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->ConfigCommands).ArrayNum;
  piVar2 = &(this->ConfigCommands).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar1->AllocatorInstance,piVar2);
  }
  lVar9 = (longlong)iVar6;
  (this->ConfigCommands).ArrayNum = iVar6 + 1;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar3 + lVar9 * 0x18) = 0;
  *(undefined8 *)(pFVar3 + lVar9 * 0x18 + 8) = 0;
  *(undefined4 *)(pFVar3 + lVar9 * 0x18 + 0x10) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_98,(FWriteAccessScope *)&local_60);
  if (*(void **)(pFVar3 + lVar9 * 0x18 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar3 + lVar9 * 0x18 + 8));
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar3 + lVar9 * 0x18 + 8) = local_90.DelegateAllocator
  ;
  local_90.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  *(int *)(pFVar3 + lVar9 * 0x18 + 0x10) = local_90.DelegateSize;
  local_90.DelegateSize = 0;
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_98,(FWriteAccessScope *)&local_48);
  if ((local_90.DelegateSize != 0) &&
     (local_90.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_90.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_90,0,0,0x10);
    local_90.DelegateSize = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (local_90.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_90.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_98.AccessDetector);
  return;
}

// SetLongRangeAttachment @ 14dc122f0

void __thiscall
UChaosClothingInteractor::SetLongRangeAttachment
          (UChaosClothingInteractor *this,TVector2<double> *param_1,TVector2<double> *param_2)

{
  TArray<TDelegate<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  int iVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  longlong lVar13;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a8;
  FDelegateAllocation local_a0;
  FDestructionSentinel local_90;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  double local_40;
  double dStack_38;
  double local_30;
  double dStack_28;
  
  local_40 = (param_1->field0_0x0)._s_0.X;
  dStack_38 = (param_1->field0_0x0)._s_0.Y;
  pTVar1 = &this->ConfigCommands;
  local_a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_30 = (param_2->field0_0x0)._s_0.X;
  dStack_28 = (param_2->field0_0x0)._s_0.Y;
  local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_a0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a8,(FWriteAccessScope *)&local_60);
  local_48 = &local_a0;
  puVar11 = UE::Core::Private::DelegateAllocate(0x38,&local_a0);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    dVar5 = (param_1->field0_0x0)._s_0.X;
    dVar6 = (param_1->field0_0x0)._s_0.Y;
    puVar11[2] = uVar12;
    dVar7 = (param_2->field0_0x0)._s_0.X;
    dVar8 = (param_2->field0_0x0)._s_0.Y;
    *puVar11 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetLongRangeAttachment'::`2'::<lambda_1>_>
                ::_vftable_;
    puVar11[3] = dVar5;
    puVar11[4] = dVar6;
    puVar11[5] = dVar7;
    puVar11[6] = dVar8;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_a8) &&
     ((FScriptContainerElement *)&local_a8 <
      pFVar3 + (longlong)(this->ConfigCommands).ArrayMax * 0x18)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar10 = (this->ConfigCommands).ArrayNum;
  piVar2 = &(this->ConfigCommands).ArrayMax;
  if (iVar10 == *piVar2) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&pTVar1->AllocatorInstance,piVar2);
  }
  lVar13 = (longlong)iVar10;
  (this->ConfigCommands).ArrayNum = iVar10 + 1;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar3 + lVar13 * 0x18) = 0;
  *(undefined8 *)(pFVar3 + lVar13 * 0x18 + 8) = 0;
  *(undefined4 *)(pFVar3 + lVar13 * 0x18 + 0x10) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a8,(FWriteAccessScope *)&local_90);
  if (*(void **)(pFVar3 + lVar13 * 0x18 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar3 + lVar13 * 0x18 + 8));
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar3 + lVar13 * 0x18 + 8) =
       local_a0.DelegateAllocator;
  local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  *(int *)(pFVar3 + lVar13 * 0x18 + 0x10) = local_a0.DelegateSize;
  local_a0.DelegateSize = 0;
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a8,(FWriteAccessScope *)&local_78);
  if ((local_a0.DelegateSize != 0) &&
     (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_a0,0,0,0x10);
    local_a0.DelegateSize = 0;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_a0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a8.AccessDetector);
  return;
}

// SetLongRangeAttachmentLinear @ 14dc12520

void __thiscall
UChaosClothingInteractor::SetLongRangeAttachmentLinear
          (UChaosClothingInteractor *this,float param_1,float param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  longlong lVar8;
  float fVar9;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_88;
  FDelegateAllocation local_80;
  FDestructionSentinel local_70;
  FDestructionSentinel local_58;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  fVar9 = logf(param_1);
  local_88.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_80.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  fVar9 = fVar9 * ChaosClothingInteractor::InvStiffnessLogBase + __real_3f800000;
  local_80.DelegateSize = 0;
  if (__real_3f800000 <= fVar9) {
    fVar9 = __real_3f800000;
  }
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_88,(FWriteAccessScope *)&local_40);
  local_28 = &local_80;
  puVar6 = UE::Core::Private::DelegateAllocate(0x28,&local_80);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[2] = uVar7;
    *puVar6 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetLongRangeAttachmentLinear'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar6[3] = CONCAT44(0x3f800000,fVar9);
    *(float *)(puVar6 + 4) = param_2;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  pFVar2 = (this->ConfigCommands).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_88) &&
     ((FScriptContainerElement *)&local_88 <
      pFVar2 + (longlong)(this->ConfigCommands).ArrayMax * 0x18)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->ConfigCommands).ArrayNum;
  piVar1 = &(this->ConfigCommands).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->ConfigCommands).AllocatorInstance,piVar1);
  }
  lVar8 = (longlong)iVar5;
  (this->ConfigCommands).ArrayNum = iVar5 + 1;
  pFVar2 = (this->ConfigCommands).AllocatorInstance.Data;
  *(undefined8 *)(pFVar2 + lVar8 * 0x18) = 0;
  *(undefined8 *)(pFVar2 + lVar8 * 0x18 + 8) = 0;
  *(undefined4 *)(pFVar2 + lVar8 * 0x18 + 0x10) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_88,(FWriteAccessScope *)&local_70);
  if (*(void **)(pFVar2 + lVar8 * 0x18 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar2 + lVar8 * 0x18 + 8));
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar2 + lVar8 * 0x18 + 8) = local_80.DelegateAllocator
  ;
  local_80.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  *(int *)(pFVar2 + lVar8 * 0x18 + 0x10) = local_80.DelegateSize;
  local_80.DelegateSize = 0;
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_88,(FWriteAccessScope *)&local_58);
  if ((local_80.DelegateSize != 0) &&
     (local_80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_80.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_80,0,0,0x10);
    local_80.DelegateSize = 0;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (local_80.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_80.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_88.AccessDetector);
  return;
}

// SetMaterial @ 14dc12770

void __thiscall
UChaosClothingInteractor::SetMaterial
          (UChaosClothingInteractor *this,TVector2<double> *param_1,TVector2<double> *param_2,
          TVector2<double> *param_3)

{
  TArray<TDelegate<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  int iVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  longlong lVar13;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  FDelegateAllocation local_b0;
  FDestructionSentinel local_a0;
  FDestructionSentinel local_88;
  FDestructionSentinel local_70;
  FDelegateAllocation *local_58;
  double local_50;
  double dStack_48;
  double local_40;
  double dStack_38;
  double local_30;
  double dStack_28;
  
  local_50 = (param_1->field0_0x0)._s_0.X;
  dStack_48 = (param_1->field0_0x0)._s_0.Y;
  pTVar1 = &this->ConfigCommands;
  local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_40 = (param_2->field0_0x0)._s_0.X;
  dStack_38 = (param_2->field0_0x0)._s_0.Y;
  local_b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_b0.DelegateSize = 0;
  local_30 = (param_3->field0_0x0)._s_0.X;
  dStack_28 = (param_3->field0_0x0)._s_0.Y;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b8,(FWriteAccessScope *)&local_70);
  local_58 = &local_b0;
  puVar11 = UE::Core::Private::DelegateAllocate(0x48,&local_b0);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    dVar5 = (param_1->field0_0x0)._s_0.X;
    dVar6 = (param_1->field0_0x0)._s_0.Y;
    puVar11[2] = uVar12;
    dVar7 = (param_2->field0_0x0)._s_0.X;
    dVar8 = (param_2->field0_0x0)._s_0.Y;
    *puVar11 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetMaterial'::`2'::<lambda_1>_>
                ::_vftable_;
    puVar11[3] = dVar5;
    puVar11[4] = dVar6;
    dVar5 = (param_3->field0_0x0)._s_0.X;
    dVar6 = (param_3->field0_0x0)._s_0.Y;
    puVar11[5] = dVar7;
    puVar11[6] = dVar8;
    puVar11[7] = dVar5;
    puVar11[8] = dVar6;
  }
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_b8) &&
     ((FScriptContainerElement *)&local_b8 <
      pFVar3 + (longlong)(this->ConfigCommands).ArrayMax * 0x18)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar10 = (this->ConfigCommands).ArrayNum;
  piVar2 = &(this->ConfigCommands).ArrayMax;
  if (iVar10 == *piVar2) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&pTVar1->AllocatorInstance,piVar2);
  }
  lVar13 = (longlong)iVar10;
  (this->ConfigCommands).ArrayNum = iVar10 + 1;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar3 + lVar13 * 0x18) = 0;
  *(undefined8 *)(pFVar3 + lVar13 * 0x18 + 8) = 0;
  *(undefined4 *)(pFVar3 + lVar13 * 0x18 + 0x10) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b8,(FWriteAccessScope *)&local_a0);
  if (*(void **)(pFVar3 + lVar13 * 0x18 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar3 + lVar13 * 0x18 + 8));
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar3 + lVar13 * 0x18 + 8) =
       local_b0.DelegateAllocator;
  local_b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  *(int *)(pFVar3 + lVar13 * 0x18 + 0x10) = local_b0.DelegateSize;
  local_b0.DelegateSize = 0;
  if (local_a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b8,(FWriteAccessScope *)&local_88);
  if ((local_b0.DelegateSize != 0) &&
     (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_b0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_b0,0,0,0x10);
    local_b0.DelegateSize = 0;
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  if (local_b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_b0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  return;
}

// SetMaterialBuckling @ 14dc129c0

void __thiscall
UChaosClothingInteractor::SetMaterialBuckling
          (UChaosClothingInteractor *this,TVector2<double> *param_1,TVector2<double> *param_2)

{
  TArray<TDelegate<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  int iVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  longlong lVar13;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a8;
  FDelegateAllocation local_a0;
  FDestructionSentinel local_90;
  FDestructionSentinel local_78;
  FDestructionSentinel local_60;
  FDelegateAllocation *local_48;
  double local_40;
  double dStack_38;
  double local_30;
  double dStack_28;
  
  local_40 = (param_1->field0_0x0)._s_0.X;
  dStack_38 = (param_1->field0_0x0)._s_0.Y;
  pTVar1 = &this->ConfigCommands;
  local_a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_30 = (param_2->field0_0x0)._s_0.X;
  dStack_28 = (param_2->field0_0x0)._s_0.Y;
  local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_a0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a8,(FWriteAccessScope *)&local_60);
  local_48 = &local_a0;
  puVar11 = UE::Core::Private::DelegateAllocate(0x38,&local_a0);
  if (puVar11 != (undefined8 *)0x0) {
    *puVar11 = &
               ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar12 = FDelegateHandle::GenerateNewID();
    dVar5 = (param_1->field0_0x0)._s_0.X;
    dVar6 = (param_1->field0_0x0)._s_0.Y;
    puVar11[2] = uVar12;
    dVar7 = (param_2->field0_0x0)._s_0.X;
    dVar8 = (param_2->field0_0x0)._s_0.Y;
    *puVar11 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetMaterialBuckling'::`2'::<lambda_1>_>
                ::_vftable_;
    puVar11[3] = dVar5;
    puVar11[4] = dVar6;
    puVar11[5] = dVar7;
    puVar11[6] = dVar8;
  }
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_a8) &&
     ((FScriptContainerElement *)&local_a8 <
      pFVar3 + (longlong)(this->ConfigCommands).ArrayMax * 0x18)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar10 = (this->ConfigCommands).ArrayNum;
  piVar2 = &(this->ConfigCommands).ArrayMax;
  if (iVar10 == *piVar2) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&pTVar1->AllocatorInstance,piVar2);
  }
  lVar13 = (longlong)iVar10;
  (this->ConfigCommands).ArrayNum = iVar10 + 1;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar3 + lVar13 * 0x18) = 0;
  *(undefined8 *)(pFVar3 + lVar13 * 0x18 + 8) = 0;
  *(undefined4 *)(pFVar3 + lVar13 * 0x18 + 0x10) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a8,(FWriteAccessScope *)&local_90);
  if (*(void **)(pFVar3 + lVar13 * 0x18 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar3 + lVar13 * 0x18 + 8));
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar3 + lVar13 * 0x18 + 8) =
       local_a0.DelegateAllocator;
  local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  *(int *)(pFVar3 + lVar13 * 0x18 + 0x10) = local_a0.DelegateSize;
  local_a0.DelegateSize = 0;
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a8,(FWriteAccessScope *)&local_78);
  if ((local_a0.DelegateSize != 0) &&
     (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_a0,0,0,0x10);
    local_a0.DelegateSize = 0;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_a0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a8.AccessDetector);
  return;
}

// SetMaterialLinear @ 14dc12bf0

void __thiscall
UChaosClothingInteractor::SetMaterialLinear
          (UChaosClothingInteractor *this,float param_1,float param_2,float param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_c8;
  FDelegateAllocation local_c0;
  float local_b0;
  undefined4 uStack_ac;
  float local_a8;
  undefined4 uStack_a4;
  FDestructionSentinel local_a0;
  FDestructionSentinel local_88;
  FDestructionSentinel local_70;
  FDelegateAllocation *local_58;
  
  fVar10 = logf(param_1);
  fVar4 = __real_3f800000;
  fVar10 = fVar10 * ChaosClothingInteractor::InvStiffnessLogBase + __real_3f800000;
  if (__real_3f800000 <= fVar10) {
    fVar10 = __real_3f800000;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  fVar11 = logf(param_2);
  uStack_ac = 0x3f800000;
  local_b0 = fVar11 * ChaosClothingInteractor::InvStiffnessLogBase + fVar4;
  if (fVar4 <= local_b0) {
    local_b0 = fVar4;
  }
  if (local_b0 <= 0.0) {
    local_b0 = 0.0;
  }
  fVar11 = logf(param_3);
  uStack_a4 = 0x3f800000;
  local_c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_a8 = fVar11 * ChaosClothingInteractor::InvStiffnessLogBase + fVar4;
  local_c0.DelegateSize = 0;
  if (fVar4 <= local_a8) {
    local_a8 = fVar4;
  }
  if (local_a8 <= 0.0) {
    local_a8 = 0.0;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_c8,(FWriteAccessScope *)&local_70);
  local_58 = &local_c0;
  puVar7 = UE::Core::Private::DelegateAllocate(0x30,&local_c0);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetMaterialLinear'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar7[3] = CONCAT44(0x3f800000,fVar10);
    puVar7[4] = CONCAT44(uStack_ac,local_b0);
    puVar7[5] = CONCAT44(uStack_a4,local_a8);
  }
  if (local_70.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
  }
  pFVar2 = (this->ConfigCommands).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_c8) &&
     ((FScriptContainerElement *)&local_c8 <
      pFVar2 + (longlong)(this->ConfigCommands).ArrayMax * 0x18)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = (this->ConfigCommands).ArrayNum;
  piVar1 = &(this->ConfigCommands).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&(this->ConfigCommands).AllocatorInstance,piVar1);
  }
  lVar9 = (longlong)iVar6;
  (this->ConfigCommands).ArrayNum = iVar6 + 1;
  pFVar2 = (this->ConfigCommands).AllocatorInstance.Data;
  *(undefined8 *)(pFVar2 + lVar9 * 0x18) = 0;
  *(undefined8 *)(pFVar2 + lVar9 * 0x18 + 8) = 0;
  *(undefined4 *)(pFVar2 + lVar9 * 0x18 + 0x10) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_c8,(FWriteAccessScope *)&local_a0);
  if (*(void **)(pFVar2 + lVar9 * 0x18 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar2 + lVar9 * 0x18 + 8));
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar2 + lVar9 * 0x18 + 8) = local_c0.DelegateAllocator
  ;
  local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  *(int *)(pFVar2 + lVar9 * 0x18 + 0x10) = local_c0.DelegateSize;
  local_c0.DelegateSize = 0;
  if (local_a0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a0.Accessor,&local_a0);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_c8,(FWriteAccessScope *)&local_88);
  if ((local_c0.DelegateSize != 0) &&
     (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_c0,0,0,0x10);
    local_c0.DelegateSize = 0;
  }
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_c0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c8.AccessDetector);
  return;
}

// SetPressure @ 14dc14d20

void __thiscall
UChaosClothingInteractor::SetPressure(UChaosClothingInteractor *this,TVector2<double> *param_1)

{
  TArray<TDelegate<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  longlong lVar11;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  FDelegateAllocation local_70;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  pTVar1 = &this->ConfigCommands;
  local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_70.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_30);
  local_18 = &local_70;
  puVar9 = UE::Core::Private::DelegateAllocate(0x28,&local_70);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    dVar5 = (param_1->field0_0x0)._s_0.X;
    dVar6 = (param_1->field0_0x0)._s_0.Y;
    puVar9[2] = uVar10;
    *puVar9 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetPressure'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar9[3] = dVar5;
    puVar9[4] = dVar6;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_78) &&
     ((FScriptContainerElement *)&local_78 <
      pFVar3 + (longlong)(this->ConfigCommands).ArrayMax * 0x18)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar8 = (this->ConfigCommands).ArrayNum;
  piVar2 = &(this->ConfigCommands).ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar1->AllocatorInstance,piVar2);
  }
  lVar11 = (longlong)iVar8;
  (this->ConfigCommands).ArrayNum = iVar8 + 1;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar3 + lVar11 * 0x18) = 0;
  *(undefined8 *)(pFVar3 + lVar11 * 0x18 + 8) = 0;
  *(undefined4 *)(pFVar3 + lVar11 * 0x18 + 0x10) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_60);
  if (*(void **)(pFVar3 + lVar11 * 0x18 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar3 + lVar11 * 0x18 + 8));
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar3 + lVar11 * 0x18 + 8) =
       local_70.DelegateAllocator;
  local_70.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  *(int *)(pFVar3 + lVar11 * 0x18 + 0x10) = local_70.DelegateSize;
  local_70.DelegateSize = 0;
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_78,(FWriteAccessScope *)&local_48);
  if ((local_70.DelegateSize != 0) &&
     (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_70.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_70,0,0,0x10);
    local_70.DelegateSize = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (local_70.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_70.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
  return;
}

// SetVelocityClamps @ 14dc19480

void __thiscall
UChaosClothingInteractor::SetVelocityClamps
          (UChaosClothingInteractor *this,bool param_1,TVector<double> *param_2,bool param_3,
          TVector<double> *param_4,bool param_5,float param_6,bool param_7,float param_8)

{
  TArray<TDelegate<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  longlong lVar9;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_c8;
  FDelegateAllocation local_c0;
  undefined1 local_b0;
  undefined7 uStack_af;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  undefined1 local_90;
  undefined7 uStack_8f;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  undefined4 local_70;
  float fStack_6c;
  undefined4 uStack_68;
  float fStack_64;
  FDestructionSentinel local_60;
  FDestructionSentinel local_48;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  pTVar1 = &this->ConfigCommands;
  dStack_a8 = (param_2->field0_0x0)._s_0.X;
  dStack_a0 = (param_2->field0_0x0)._s_0.Y;
  dStack_98 = (param_2->field0_0x0)._s_0.Z;
  dStack_88 = (param_4->field0_0x0)._s_0.X;
  dStack_80 = (param_4->field0_0x0)._s_0.Y;
  dStack_78 = (param_4->field0_0x0)._s_0.Z;
  local_70 = CONCAT31(local_70._1_3_,param_5);
  fStack_6c = param_6;
  fStack_64 = param_8;
  uStack_68 = CONCAT31(uStack_68._1_3_,param_7);
  local_c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_c0.DelegateSize = 0;
  local_b0 = param_1;
  local_90 = param_3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_c8,(FWriteAccessScope *)&local_30);
  local_18 = &local_c0;
  puVar7 = UE::Core::Private::DelegateAllocate(0x68,&local_c0);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar8 = FDelegateHandle::GenerateNewID();
    puVar7[2] = uVar8;
    *puVar7 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetVelocityClamps'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar7[3] = CONCAT71(uStack_af,local_b0);
    puVar7[4] = dStack_a8;
    puVar7[5] = dStack_a0;
    puVar7[6] = dStack_98;
    puVar7[7] = CONCAT71(uStack_8f,local_90);
    puVar7[8] = dStack_88;
    puVar7[9] = dStack_80;
    puVar7[10] = dStack_78;
    puVar7[0xb] = CONCAT44(fStack_6c,local_70);
    puVar7[0xc] = CONCAT44(fStack_64,uStack_68);
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_c8) &&
     ((FScriptContainerElement *)&local_c8 <
      pFVar3 + (longlong)(this->ConfigCommands).ArrayMax * 0x18)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->ConfigCommands).ArrayNum;
  piVar2 = &(this->ConfigCommands).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar1->AllocatorInstance,piVar2);
  }
  lVar9 = (longlong)iVar6;
  (this->ConfigCommands).ArrayNum = iVar6 + 1;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar3 + lVar9 * 0x18) = 0;
  *(undefined8 *)(pFVar3 + lVar9 * 0x18 + 8) = 0;
  *(undefined4 *)(pFVar3 + lVar9 * 0x18 + 0x10) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_c8,(FWriteAccessScope *)&local_60);
  if (*(void **)(pFVar3 + lVar9 * 0x18 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar3 + lVar9 * 0x18 + 8));
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar3 + lVar9 * 0x18 + 8) = local_c0.DelegateAllocator
  ;
  local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  *(int *)(pFVar3 + lVar9 * 0x18 + 0x10) = local_c0.DelegateSize;
  local_c0.DelegateSize = 0;
  if (local_60.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_60.Accessor,&local_60);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_c8,(FWriteAccessScope *)&local_48);
  if ((local_c0.DelegateSize != 0) &&
     (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_c0,0,0,0x10);
    local_c0.DelegateSize = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_c0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c8.AccessDetector);
  return;
}

// SetVelocityScale @ 14dc19710

void __thiscall
UChaosClothingInteractor::SetVelocityScale
          (UChaosClothingInteractor *this,TVector<double> *param_1,float param_2,float param_3)

{
  TArray<TDelegate<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  longlong lVar11;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_a8;
  FDelegateAllocation local_a0;
  FDestructionSentinel local_90;
  FDestructionSentinel local_78;
  double local_60;
  double dStack_58;
  double local_50;
  float fStack_48;
  float fStack_44;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  local_50 = (param_1->field0_0x0)._s_0.Z;
  pTVar1 = &this->ConfigCommands;
  dVar5 = (param_1->field0_0x0)._s_0.X;
  dVar6 = (param_1->field0_0x0)._s_0.Y;
  local_a8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_a0.DelegateSize = 0;
  local_60 = dVar5;
  dStack_58 = dVar6;
  fStack_48 = param_2;
  fStack_44 = param_3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a8,(FWriteAccessScope *)&local_40);
  local_28 = &local_a0;
  puVar9 = UE::Core::Private::DelegateAllocate(0x38,&local_a0);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &
              ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    puVar9[3] = dVar5;
    puVar9[4] = dVar6;
    *puVar9 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetVelocityScale'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar9[5] = local_50;
    puVar9[6] = CONCAT44(fStack_44,fStack_48);
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_a8) &&
     ((FScriptContainerElement *)&local_a8 <
      pFVar3 + (longlong)(this->ConfigCommands).ArrayMax * 0x18)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar8 = (this->ConfigCommands).ArrayNum;
  piVar2 = &(this->ConfigCommands).ArrayMax;
  if (iVar8 == *piVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar1->AllocatorInstance,piVar2);
  }
  lVar11 = (longlong)iVar8;
  (this->ConfigCommands).ArrayNum = iVar8 + 1;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar3 + lVar11 * 0x18) = 0;
  *(undefined8 *)(pFVar3 + lVar11 * 0x18 + 8) = 0;
  *(undefined4 *)(pFVar3 + lVar11 * 0x18 + 0x10) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a8,(FWriteAccessScope *)&local_90);
  if (*(void **)(pFVar3 + lVar11 * 0x18 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar3 + lVar11 * 0x18 + 8));
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar3 + lVar11 * 0x18 + 8) =
       local_a0.DelegateAllocator;
  local_a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  *(int *)(pFVar3 + lVar11 * 0x18 + 0x10) = local_a0.DelegateSize;
  local_a0.DelegateSize = 0;
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_a8,(FWriteAccessScope *)&local_78);
  if ((local_a0.DelegateSize != 0) &&
     (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_a0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_a0,0,0,0x10);
    local_a0.DelegateSize = 0;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (local_a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_a0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_a8.AccessDetector);
  return;
}

// SetWind @ 14dc199f0

void __thiscall
UChaosClothingInteractor::SetWind
          (UChaosClothingInteractor *this,TVector2<double> *param_1,TVector2<double> *param_2,
          float param_3,TVector<double> *param_4,TVector2<double> *param_5,TVector2<double> *param_6
          )

{
  TArray<TDelegate<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  int iVar14;
  undefined8 *puVar15;
  ulong64 uVar16;
  longlong lVar17;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_118;
  FDelegateAllocation local_110;
  FDestructionSentinel local_100;
  FDestructionSentinel local_e8;
  FDestructionSentinel local_d0;
  FDelegateAllocation *local_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  double dStack_98;
  float local_90;
  undefined4 uStack_8c;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  double local_70;
  double dStack_68;
  double local_60;
  double dStack_58;
  
  pTVar1 = &this->ConfigCommands;
  dVar5 = (param_1->field0_0x0)._s_0.X;
  dVar6 = (param_1->field0_0x0)._s_0.Y;
  dVar7 = (param_2->field0_0x0)._s_0.X;
  dVar8 = (param_2->field0_0x0)._s_0.Y;
  local_118.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_110.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  dStack_88 = (param_4->field0_0x0)._s_0.X;
  dStack_80 = (param_4->field0_0x0)._s_0.Y;
  local_110.DelegateSize = 0;
  dStack_78 = (param_4->field0_0x0)._s_0.Z;
  dVar9 = (param_5->field0_0x0)._s_0.X;
  dVar10 = (param_5->field0_0x0)._s_0.Y;
  dVar11 = (param_6->field0_0x0)._s_0.X;
  dVar12 = (param_6->field0_0x0)._s_0.Y;
  local_b0 = dVar5;
  dStack_a8 = dVar6;
  local_a0 = dVar7;
  dStack_98 = dVar8;
  local_90 = param_3;
  local_70 = dVar9;
  dStack_68 = dVar10;
  local_60 = dVar11;
  dStack_58 = dVar12;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_118,(FWriteAccessScope *)&local_d0);
  local_b8 = &local_110;
  puVar15 = UE::Core::Private::DelegateAllocate(0x78,&local_110);
  if (puVar15 != (undefined8 *)0x0) {
    *puVar15 = &
               ___7__TCommonDelegateInstanceState___A6AXPEAVFClothingSimulationConfig_Chaos__H_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar16 = FDelegateHandle::GenerateNewID();
    puVar15[2] = uVar16;
    *puVar15 = &TBaseFunctorDelegateInstance<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy,`UChaosClothingInteractor::SetWind'::`2'::<lambda_1>_>
                ::_vftable_;
    puVar15[3] = dVar5;
    puVar15[4] = dVar6;
    puVar15[5] = dVar7;
    puVar15[6] = dVar8;
    puVar15[7] = CONCAT44(uStack_8c,local_90);
    puVar15[8] = dStack_88;
    puVar15[9] = dStack_80;
    puVar15[10] = dStack_78;
    puVar15[0xb] = dVar9;
    puVar15[0xc] = dVar10;
    puVar15[0xd] = dVar11;
    puVar15[0xe] = dVar12;
  }
  if (local_d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_118) &&
     ((FScriptContainerElement *)&local_118 <
      pFVar3 + (longlong)(this->ConfigCommands).ArrayMax * 0x18)) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar14 = (this->ConfigCommands).ArrayNum;
  piVar2 = &(this->ConfigCommands).ArrayMax;
  if (iVar14 == *piVar2) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&pTVar1->AllocatorInstance,piVar2);
  }
  lVar17 = (longlong)iVar14;
  (this->ConfigCommands).ArrayNum = iVar14 + 1;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  *(undefined8 *)(pFVar3 + lVar17 * 0x18) = 0;
  *(undefined8 *)(pFVar3 + lVar17 * 0x18 + 8) = 0;
  *(undefined4 *)(pFVar3 + lVar17 * 0x18 + 0x10) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_118,(FWriteAccessScope *)&local_100);
  if (*(void **)(pFVar3 + lVar17 * 0x18 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar3 + lVar17 * 0x18 + 8));
  }
  *(ForElementType<TAlignedBytes<16,16>_> *)(pFVar3 + lVar17 * 0x18 + 8) =
       local_110.DelegateAllocator;
  local_110.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  *(int *)(pFVar3 + lVar17 * 0x18 + 0x10) = local_110.DelegateSize;
  local_110.DelegateSize = 0;
  if (local_100.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_100.Accessor,&local_100);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_118,(FWriteAccessScope *)&local_e8);
  if ((local_110.DelegateSize != 0) &&
     (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_110.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_110,0,0,0x10);
    local_110.DelegateSize = 0;
  }
  if (local_e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
  }
  if (local_110.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_110.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_118.AccessDetector);
  return;
}

// StaticRegisterNativesUChaosClothingInteractor @ 14dc1ba20

void __cdecl UChaosClothingInteractor::StaticRegisterNativesUChaosClothingInteractor(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x11;
  local_18.DataPtr = Z_Construct_UClass_UChaosClothingInteractor_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Sync @ 14dc1bbb0

void __thiscall
UChaosClothingInteractor::Sync(UChaosClothingInteractor *this,IClothingSimulationInterface *param_1)

{
  int *piVar1;
  TArray<TDelegate<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  longlong lVar5;
  TDelegate<void___cdecl(Chaos::FClothingSimulationCloth_*),FDefaultDelegateUserPolicy> *pTVar6;
  undefined8 uVar7;
  TDelegate<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy> *pTVar8
  ;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  longlong *plVar12;
  longlong *plVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  
  if ((param_1 == (IClothingSimulationInterface *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Simulation",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationInteractor.cpp"
                          ,0x1d,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId31,"UChaosClothingInteractor_Sync",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationInteractor.cpp"
               ,0x1f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId31);
  }
  plVar12 = (longlong *)param_1[4]._padding_;
  plVar13 = plVar12 + *(int *)&param_1[4].bIsLegacyInterface;
  do {
    if (plVar12 == plVar13) {
LAB_14dc1be5b:
      if (bVar10) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    lVar5 = *plVar12;
    if (*(int *)(lVar5 + 0x20) == (int)this->_padding_) {
      if (lVar5 != 0) {
        pFVar14 = (this->Commands).AllocatorInstance.Data;
        iVar4 = (this->Commands).ArrayNum;
        pFVar3 = pFVar14 + (longlong)iVar4 * 0x18;
        while( true ) {
          if ((this->Commands).ArrayNum != iVar4) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<TDelegate<void___cdecl(Chaos::FClothingSimulationCloth_*),FDefaultDelegateUserPolicy>,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_res8);
          }
          if (pFVar14 == pFVar3) break;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pFVar14,&local_68);
          plVar13 = (longlong *)0x0;
          if (*(int *)&pFVar14[0x10].field_0x0 != 0) {
            plVar13 = *(longlong **)&pFVar14[8].field_0x0;
          }
          (**(code **)(*plVar13 + 0x60))(plVar13,lVar5);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_68);
          pFVar14 = pFVar14 + 0x18;
        }
        piVar1 = &(this->Commands).ArrayMax;
        pTVar6 = (TDelegate<void___cdecl(Chaos::FClothingSimulationCloth_*),FDefaultDelegateUserPolicy>
                  *)(this->Commands).AllocatorInstance.Data;
        iVar4 = (this->Commands).ArrayNum;
        if (*piVar1 < 0) {
          DestructItems<TDelegate<void___cdecl(Chaos::FClothingSimulationCloth_*),FDefaultDelegateUserPolicy>,int>
                    (pTVar6,iVar4);
          (this->Commands).ArrayNum = 0;
          if (*piVar1 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,0,&(this->Commands).AllocatorInstance,0,piVar1);
          }
        }
        else {
          DestructItems<TDelegate<void___cdecl(Chaos::FClothingSimulationCloth_*),FDefaultDelegateUserPolicy>,int>
                    (pTVar6,iVar4);
          (this->Commands).ArrayNum = 0;
        }
        iVar4 = (this->ConfigCommands).ArrayNum;
        pTVar2 = &this->ConfigCommands;
        pFVar14 = (pTVar2->AllocatorInstance).Data;
        pFVar3 = pFVar14 + (longlong)iVar4 * 0x18;
        while( true ) {
          if ((this->ConfigCommands).ArrayNum != iVar4) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<TDelegate<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy>,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_res10);
          }
          if (pFVar14 == pFVar3) break;
          if ((**(char **)(lVar5 + 8) == '\0') &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Cloth->GetConfig()->IsLegacySingleLOD()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosCloth\\Source\\ChaosCloth\\Private\\ChaosCloth\\ChaosClothingSimulationInteractor.cpp"
                                  ,0x2a,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar7 = *(undefined8 *)(lVar5 + 8);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)pFVar14,&local_50);
          plVar13 = (longlong *)0x0;
          if (*(int *)(pFVar14 + 0x10) != 0) {
            plVar13 = *(longlong **)(pFVar14 + 8);
          }
          (**(code **)(*plVar13 + 0x60))(plVar13,uVar7);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_50);
          pFVar14 = pFVar14 + 0x18;
        }
        piVar1 = &(this->ConfigCommands).ArrayMax;
        pTVar8 = (TDelegate<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy>
                  *)(pTVar2->AllocatorInstance).Data;
        iVar4 = (this->ConfigCommands).ArrayNum;
        if (*piVar1 < 0) {
          DestructItems<TDelegate<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy>,int>
                    (pTVar8,iVar4);
          (this->ConfigCommands).ArrayNum = 0;
          if (*piVar1 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,0,&pTVar2->AllocatorInstance,0,piVar1);
          }
        }
        else {
          DestructItems<TDelegate<void___cdecl(Chaos::FClothingSimulationConfig_*,int),FDefaultDelegateUserPolicy>,int>
                    (pTVar8,iVar4);
          (this->ConfigCommands).ArrayNum = 0;
        }
      }
      goto LAB_14dc1be5b;
    }
    plVar12 = plVar12 + 1;
  } while( true );
}

// execResetAndTeleport @ 14dc25e10

void __cdecl
UChaosClothingInteractor::execResetAndTeleport(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [4];
  int local_res20 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ResetAndTeleport((UChaosClothingInteractor *)param_1,bVar2,local_res20[0] != 0);
  return;
}

// execSetAerodynamics @ 14dc25ef0

void __cdecl
UChaosClothingInteractor::execSetAerodynamics(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [4];
  float local_res20 [2];
  double local_48;
  double dStack_40;
  double local_38;
  TVector<double>_u_0 local_28;
  
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_28._s_0.Z = local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28._s_0.X = local_48;
  local_28._s_0.Y = dStack_40;
  SetAerodynamics((UChaosClothingInteractor *)param_1,local_res20[0],local_res10[0],
                  (TVector<double> *)&local_28._s_0);
  return;
}

// execSetAnimDrive @ 14dc26020

void __cdecl
UChaosClothingInteractor::execSetAnimDrive(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  TVector2<double>_u_0 local_28;
  TVector2<double>_u_0 local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_28._s_0.X = local_48;
  local_28._s_0.Y = dStack_40;
  local_18._s_0.X = local_38;
  local_18._s_0.Y = dStack_30;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetAnimDrive((UChaosClothingInteractor *)param_1,(TVector2<double> *)&local_18._s_0,
               (TVector2<double> *)&local_28._s_0);
  return;
}

// execSetAnimDriveLinear @ 14dc26100

void __cdecl
UChaosClothingInteractor::execSetAnimDriveLinear(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetAnimDriveLinear((UChaosClothingInteractor *)param_1,local_res10[0]);
  return;
}

// execSetBackstop @ 14dc26190

void __cdecl
UChaosClothingInteractor::execSetBackstop(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetBackstop((UChaosClothingInteractor *)param_1,local_res10[0] != 0);
  return;
}

// execSetCollision @ 14dc26220

void __cdecl
UChaosClothingInteractor::execSetCollision(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [4];
  float local_res20 [2];
  float local_28;
  float local_24 [3];
  
  local_24[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_24,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_24);
  }
  local_28 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetCollision((UChaosClothingInteractor *)param_1,local_24[0],local_28,bVar2,local_res20[0]);
  return;
}

// execSetDamping @ 14dc26390

void __cdecl
UChaosClothingInteractor::execSetDamping(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [4];
  float local_res20 [2];
  
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetDamping((UChaosClothingInteractor *)param_1,local_res20[0],local_res10[0]);
  return;
}

// execSetGravity @ 14dc26460

void __cdecl
UChaosClothingInteractor::execSetGravity(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res10 [4];
  float local_res20 [2];
  double local_58;
  double dStack_50;
  double local_48;
  TVector<double>_u_0 local_38;
  
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar2 = local_res10[0] != 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_38._s_0.Z = local_48;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38._s_0.X = local_58;
  local_38._s_0.Y = dStack_50;
  SetGravity((UChaosClothingInteractor *)param_1,local_res20[0],bVar2,
             (TVector<double> *)&local_38._s_0);
  return;
}

// execSetLongRangeAttachment @ 14dc265b0

void __cdecl
UChaosClothingInteractor::execSetLongRangeAttachment(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  TVector2<double>_u_0 local_28;
  TVector2<double>_u_0 local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_28._s_0.X = local_48;
  local_28._s_0.Y = dStack_40;
  local_18._s_0.X = local_38;
  local_18._s_0.Y = dStack_30;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetLongRangeAttachment
            ((UChaosClothingInteractor *)param_1,(TVector2<double> *)&local_18._s_0,
             (TVector2<double> *)&local_28._s_0);
  return;
}

// execSetLongRangeAttachmentLinear @ 14dc26690

void __cdecl
UChaosClothingInteractor::execSetLongRangeAttachmentLinear
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [4];
  float local_res20 [2];
  
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetLongRangeAttachmentLinear((UChaosClothingInteractor *)param_1,local_res20[0],local_res10[0]);
  return;
}

// execSetMaterial @ 14dc26760

void __cdecl
UChaosClothingInteractor::execSetMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  TVector2<double>_u_0 local_38;
  TVector2<double>_u_0 local_28;
  TVector2<double>_u_0 local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_38._s_0.X = local_68;
  local_38._s_0.Y = dStack_60;
  local_28._s_0.X = local_58;
  local_28._s_0.Y = dStack_50;
  local_18._s_0.X = local_48;
  local_18._s_0.Y = dStack_40;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetMaterial((UChaosClothingInteractor *)param_1,(TVector2<double> *)&local_18._s_0,
              (TVector2<double> *)&local_28._s_0,(TVector2<double> *)&local_38._s_0);
  return;
}

// execSetMaterialBuckling @ 14dc26890

void __cdecl
UChaosClothingInteractor::execSetMaterialBuckling(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  TVector2<double>_u_0 local_28;
  TVector2<double>_u_0 local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_28._s_0.X = local_48;
  local_28._s_0.Y = dStack_40;
  local_18._s_0.X = local_38;
  local_18._s_0.Y = dStack_30;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetMaterialBuckling((UChaosClothingInteractor *)param_1,(TVector2<double> *)&local_18._s_0,
                      (TVector2<double> *)&local_28._s_0);
  return;
}

// execSetMaterialLinear @ 14dc26970

void __cdecl
UChaosClothingInteractor::execSetMaterialLinear(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [4];
  float local_res20 [2];
  float local_18 [4];
  
  local_18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetMaterialLinear((UChaosClothingInteractor *)param_1,local_18[0],local_res20[0],local_res10[0]);
  return;
}

// execSetPressure @ 14dc26a90

void __cdecl
UChaosClothingInteractor::execSetPressure(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double local_28;
  double dStack_20;
  TVector2<double>_u_0 local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_18._s_0.X = local_28;
  local_18._s_0.Y = dStack_20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetPressure((UChaosClothingInteractor *)param_1,(TVector2<double> *)&local_18._s_0);
  return;
}

// execSetVelocityClamps @ 14dc26b20

void __cdecl
UChaosClothingInteractor::execSetVelocityClamps(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int local_res10 [4];
  int local_res20 [2];
  int local_b8;
  int local_b4;
  float local_b0;
  float local_ac;
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_90;
  double dStack_88;
  double local_80;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 local_58;
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar2 = local_res10[0] != 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar3 = local_res20[0] != 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_b8 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  bVar4 = local_b8 != 0;
  local_ac = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_ac,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_ac);
  }
  local_b4 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b4,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b4);
  }
  bVar5 = local_b4 != 0;
  local_b0 = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  local_78._s_0.X = local_a8;
  local_78._s_0.Y = dStack_a0;
  local_78._s_0.Z = local_98;
  local_58._s_0.X = local_90;
  local_58._s_0.Y = dStack_88;
  local_58._s_0.Z = local_80;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetVelocityClamps((UChaosClothingInteractor *)param_1,bVar2,(TVector<double> *)&local_58._s_0,
                    bVar3,(TVector<double> *)&local_78._s_0,bVar4,local_ac,bVar5,local_b0);
  return;
}

// execSetVelocityScale @ 14dc26dd0

void __cdecl
UChaosClothingInteractor::execSetVelocityScale(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [4];
  float local_res20 [2];
  double local_48;
  double dStack_40;
  double local_38;
  TVector<double>_u_0 local_28;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_28._s_0.X = local_48;
  local_28._s_0.Y = dStack_40;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28._s_0.Z = local_38;
  SetVelocityScale((UChaosClothingInteractor *)param_1,(TVector<double> *)&local_28._s_0,
                   local_res20[0],local_res10[0]);
  return;
}

// execSetWind @ 14dc26f00

void __cdecl UChaosClothingInteractor::execSetWind(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [2];
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  TVector2<double>_u_0 local_68;
  TVector2<double>_u_0 local_58;
  TVector2<double>_u_0 local_48;
  TVector2<double>_u_0 local_38;
  TVector<double>_u_0 local_28;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_68._s_0.X = local_c8;
  local_68._s_0.Y = dStack_c0;
  local_58._s_0.X = local_b8;
  local_58._s_0.Y = dStack_b0;
  local_28._s_0.X = local_88;
  local_28._s_0.Y = dStack_80;
  local_28._s_0.Z = local_78;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_48._s_0.X = local_a8;
  local_48._s_0.Y = dStack_a0;
  local_38._s_0.X = local_98;
  local_38._s_0.Y = dStack_90;
  SetWind((UChaosClothingInteractor *)param_1,(TVector2<double> *)&local_38._s_0,
          (TVector2<double> *)&local_48._s_0,local_res10[0],(TVector<double> *)&local_28._s_0,
          (TVector2<double> *)&local_58._s_0,(TVector2<double> *)&local_68._s_0);
  return;
}

