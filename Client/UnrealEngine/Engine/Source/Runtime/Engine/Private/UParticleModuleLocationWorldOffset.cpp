// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticClass @ 147306be0

UClass * __cdecl UParticleModuleLocationWorldOffset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleLocationWorldOffset.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleLocationWorldOffset",
               &Z_Registration_Info_UClass_UParticleModuleLocationWorldOffset.InnerSingleton,
               StaticRegisterNativesUParticleModuleLocationWorldOffset,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleLocationWorldOffset>,
               InternalVTableHelperCtorCaller<UParticleModuleLocationWorldOffset>,local_res8,
               UParticleModuleLocation::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleLocationWorldOffset.InnerSingleton;
}

// UParticleModuleLocationWorldOffset @ 14730ab90

UParticleModuleLocationWorldOffset * __thiscall
UParticleModuleLocationWorldOffset::UParticleModuleLocationWorldOffset
          (UParticleModuleLocationWorldOffset *this,FVTableHelper *param_1)

{
  UParticleModuleLocation::UParticleModuleLocation((UParticleModuleLocation *)this,param_1);
  *(undefined ***)this = &___7UParticleModuleLocationWorldOffset__6B_;
  return this;
}

// ~UParticleModuleLocationWorldOffset @ 14730ba50

void __thiscall
UParticleModuleLocationWorldOffset::~UParticleModuleLocationWorldOffset
          (UParticleModuleLocationWorldOffset *this)

{
  *(undefined ***)this = &___7UParticleModuleLocation__6B_;
  if (*(void **)&this->field_0x38 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x38);
  }
  *(undefined ***)this = &___7UParticleModuleLocationBase__6B_;
  UParticleModule::~UParticleModule((UParticleModule *)this);
  return;
}

// GetPrivateStaticClass @ 14730e660

UClass * __cdecl UParticleModuleLocationWorldOffset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleLocationWorldOffset.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleLocationWorldOffset",
               &Z_Registration_Info_UClass_UParticleModuleLocationWorldOffset.InnerSingleton,
               StaticRegisterNativesUParticleModuleLocationWorldOffset,0x98,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UParticleModuleLocationWorldOffset>,
               InternalVTableHelperCtorCaller<UParticleModuleLocationWorldOffset>,local_res8,
               UParticleModuleLocation::StaticClass,UParticleSystem::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleLocationWorldOffset.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleLocationWorldOffset @ 14730fe30

void __cdecl
UParticleModuleLocationWorldOffset::StaticRegisterNativesUParticleModuleLocationWorldOffset(void)

{
  return;
}

// UParticleModuleLocationWorldOffset @ 14815d3a0

UParticleModuleLocationWorldOffset * __thiscall
UParticleModuleLocationWorldOffset::UParticleModuleLocationWorldOffset
          (UParticleModuleLocationWorldOffset *this,FObjectInitializer *param_1)

{
  UParticleModuleLocation::UParticleModuleLocation((UParticleModuleLocation *)this,param_1);
  *(undefined ***)this = &___7UParticleModuleLocationWorldOffset__6B_;
  return this;
}

// SpawnEx @ 14819fb20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UParticleModuleLocationWorldOffset::SpawnEx
          (UParticleModuleLocationWorldOffset *this,FSpawnContext *param_1,FRandomStream *param_2)

{
  double dVar1;
  double dVar2;
  FBaseParticle *pFVar3;
  FParticleEmitterInstance *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  UParticleLODLevel *pUVar9;
  UObject *pUVar10;
  TVector<double> *pTVar11;
  TTransform<double> *this_00;
  TMatrix<double> *this_01;
  undefined1 auStackY_1c8 [32];
  FSpawnContext *local_198;
  TVector<double>_u_0 local_190;
  TVector<double> local_178;
  TMatrix<double> local_158;
  TMatrix<double> local_d8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pFVar3 = param_1->ParticleBase;
  pFVar4 = (FParticleEmitterInstance *)param_1->_padding_;
  pUVar9 = UParticleEmitter::GetCurrentLODLevel(pFVar4->SpriteTemplate,pFVar4);
  if ((pUVar9 == (UParticleLODLevel *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("LODLevel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleModules_Location.cpp"
                         ,0xdc,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar5 = **(longlong **)(param_1->_padding_ + 0x10);
  if (((pUVar9->RequiredModule).field0_0x0.DebugPtr)->bUseLocalSpace == 0) {
    pUVar10 = (UObject *)(**(code **)(lVar5 + 8))();
    pTVar11 = FRawDistributionVector::GetValue
                        ((FRawDistributionVector *)&this->field_0x30,&local_178,pFVar4->EmitterTime,
                         pUVar10,0,param_2);
    (pFVar3->Location).field0_0x0._s_0.X =
         (pFVar3->Location).field0_0x0._s_0.X + (pTVar11->field0_0x0)._s_0.X;
    (pFVar3->Location).field0_0x0._s_0.Y =
         (pTVar11->field0_0x0)._s_0.Y + (pFVar3->Location).field0_0x0._s_0.Y;
    (pFVar3->Location).field0_0x0._s_0.Z =
         (pTVar11->field0_0x0)._s_0.Z + (pFVar3->Location).field0_0x0._s_0.Z;
  }
  else {
    this_00 = (TTransform<double> *)(**(code **)(lVar5 + 0x10))();
    this_01 = UE::Math::TTransform<double>::ToMatrixWithScale(this_00,&local_d8);
    UE::Math::TMatrix<double>::InverseFast(this_01,&local_158);
    pUVar10 = (UObject *)(**(code **)(**(longlong **)(param_1->_padding_ + 0x10) + 8))();
    FRawDistributionVector::GetValue
              ((FRawDistributionVector *)&this->field_0x30,(TVector<double> *)&local_190._s_0,
               pFVar4->EmitterTime,pUVar10,0,param_2);
    dVar1 = (pFVar3->Location).field0_0x0._s_0.Z;
    dVar2 = (pFVar3->Location).field0_0x0._s_0.X;
    (pFVar3->Location).field0_0x0._s_0.Y =
         local_158.M[1][1] * local_190._s_0.Y + local_158.M[0][1] * local_190._s_0.X +
         local_158.M[2][1] * local_190._s_0.Z + local_158.M[3][1] * 0.0 +
         (pFVar3->Location).field0_0x0._s_0.Y;
    (pFVar3->Location).field0_0x0._s_0.Z =
         local_158.M[1][2] * local_190._s_0.Y + local_158.M[0][2] * local_190._s_0.X +
         local_158.M[2][2] * local_190._s_0.Z + local_158.M[3][2] * 0.0 + dVar1;
    (pFVar3->Location).field0_0x0._s_0.X =
         local_158.M[1][0] * local_190._s_0.Y + local_158.M[0][0] * local_190._s_0.X +
         local_158.M[2][0] * local_190._s_0.Z + local_158.M[3][0] * 0.0 + dVar2;
  }
  iVar8 = _finite((pFVar3->Location).field0_0x0._s_0.X);
  if (((iVar8 != 0) && (iVar8 = _finite((pFVar3->Location).field0_0x0._s_0.Y), iVar8 != 0)) &&
     (iVar8 = _finite((pFVar3->Location).field0_0x0._s_0.Z), iVar8 != 0)) {
    return;
  }
  local_198 = param_1;
  `UParticleModuleLocationWorldOffset::SpawnEx'::__l2::<lambda_1>::operator()(&local_198);
  return;
}

// operator() @ 150525fc0

bool __thiscall
`UParticleModuleLocationWorldOffset::SpawnEx'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  FName local_res10;
  FString local_28;
  void *local_18 [2];
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7003914095707554025>);
  if (bVar4) {
    (**(code **)(**(longlong **)(**(longlong **)this + 0x10) + 0x90))
              (*(longlong **)(**(longlong **)this + 0x10),local_18);
    lVar6 = (**(code **)(**(longlong **)(**(longlong **)this + 0x10) + 0xd8))();
    if (lVar6 == 0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res10 = *(FName *)(lVar6 + 0x18);
      ::FName::ToString(&local_res10,&local_28);
    }
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7003914095707554025>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_15052609f;
    }
  }
  bVar4 = false;
LAB_15052609f:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18[0] != (void *)0x0)) {
    FMemory::Free(local_18[0]);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

