// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsCore
// Functions: 14

// StaticClass @ 144135070

UClass * __cdecl UPhysicalMaterial::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicalMaterial.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PhysicsCore",L"PhysicalMaterial",
               &Z_Registration_Info_UClass_UPhysicalMaterial.InnerSingleton,
               StaticRegisterNativesUPhysicalMaterial,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPhysicalMaterial>,
               InternalVTableHelperCtorCaller<UPhysicalMaterial>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicalMaterial.InnerSingleton;
}

// UPhysicalMaterial @ 1441a0b80

UPhysicalMaterial * __thiscall
UPhysicalMaterial::UPhysicalMaterial(UPhysicalMaterial *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPhysicalMaterial__6B_;
  (this->PhysicalMaterialProperty_DEPRECATED).field0_0x0.DebugPtr =
       (UDEPRECATED_PhysicalMaterialPropertyBase *)0x0;
  (this->Strength).TensileStrength = 2.0;
  (this->Strength).CompressionStrength = 20.0;
  (this->Strength).ShearStrength = 6.0;
  (this->DamageModifier).DamageThresholdMultiplier = 1.0;
  this->bShowExperimentalProperties = PhysicalMaterialCVars::bShowExperimentalProperties;
  (this->MaterialHandle).Ptr = (FMaterialHandle *)0x0;
  (this->UserData).Type = Invalid;
  (this->UserData).Payload = (void *)0x0;
  return this;
}

// UPhysicalMaterial @ 1441a0bf0

UPhysicalMaterial * __thiscall
UPhysicalMaterial::UPhysicalMaterial(UPhysicalMaterial *this,FObjectInitializer *param_1)

{
  bool bVar1;
  undefined4 uStack_14;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPhysicalMaterial__6B_;
  (this->PhysicalMaterialProperty_DEPRECATED).field0_0x0.DebugPtr =
       (UDEPRECATED_PhysicalMaterialPropertyBase *)0x0;
  (this->Strength).TensileStrength = 2.0;
  (this->Strength).CompressionStrength = 20.0;
  (this->Strength).ShearStrength = 6.0;
  (this->DamageModifier).DamageThresholdMultiplier = 1.0;
  bVar1 = PhysicalMaterialCVars::bShowExperimentalProperties;
  (this->MaterialHandle).Ptr = (FMaterialHandle *)0x0;
  this->bShowExperimentalProperties = bVar1;
  this->Friction = 0.7;
  this->StaticFriction = 0.0;
  this->Restitution = 0.3;
  this->RaiseMassToPower = 0.75;
  this->Density = 1.0;
  this->SleepLinearVelocityThreshold = 1.0;
  this->SleepAngularVelocityThreshold = 0.05;
  this->SleepCounterThreshold = 4;
  this->bOverrideFrictionCombineMode = false;
  *(ulonglong *)&this->UserData = CONCAT44(uStack_14,2);
  (this->UserData).Payload = this;
  this->SoftCollisionMode = None;
  this->SoftCollisionThickness = 0.0;
  this->BaseFrictionImpulse = 0.0;
  return this;
}

// ~UPhysicalMaterial @ 1441a1c70

void __thiscall UPhysicalMaterial::~UPhysicalMaterial(UPhysicalMaterial *this)

{
  this->_padding_ = (longlong)&___7UPhysicalMaterial__6B_;
  ::operator_delete((this->MaterialHandle).Ptr,4);
  UObject::~UObject((UObject *)this);
  return;
}

// DetermineSurfaceType @ 1441aba50

EPhysicalSurface __cdecl UPhysicalMaterial::DetermineSurfaceType(UPhysicalMaterial *param_1)

{
  if (param_1 == (UPhysicalMaterial *)0x0) {
    param_1 = GEngineDefaultPhysMaterial;
  }
  return (EPhysicalSurface)(param_1->SurfaceType).Value;
}

// FinishDestroy @ 1441acba0

void __thiscall UPhysicalMaterial::FinishDestroy(UPhysicalMaterial *this)

{
  FMaterialHandle *pFVar1;
  FPhysicalMaterialManager *this_00;
  
  pFVar1 = (this->MaterialHandle).Ptr;
  if (pFVar1 != (FMaterialHandle *)0x0) {
    this_00 = Chaos::FPhysicalMaterialManager::Get();
    Chaos::FPhysicalMaterialManager::Destroy(this_00,(FMaterialHandle)pFVar1->InnerHandle);
  }
  UObject::FinishDestroy((UObject *)this);
  return;
}

// GetPhysicsMaterial @ 1441aefb0

FMaterialHandle * __thiscall UPhysicalMaterial::GetPhysicsMaterial(UPhysicalMaterial *this)

{
  TUniquePtr<Chaos::FMaterialHandle,TDefaultDelete<Chaos::FMaterialHandle>_> *pTVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  ECombineMode EVar5;
  THandle<Chaos::FChaosPhysicsMaterial,24,8> *pTVar6;
  FChaosPhysicsMaterial *pFVar7;
  FPhysicalMaterialManager *pFVar8;
  FMaterialHandle *pFVar9;
  THandle<Chaos::FChaosPhysicsMaterial,24,8> local_res8;
  longlong local_18 [2];
  
  pTVar1 = &this->MaterialHandle;
  if (pTVar1->Ptr == (FMaterialHandle *)0x0) {
    pTVar6 = ::operator_new(4);
    if (pTVar6 == (THandle<Chaos::FChaosPhysicsMaterial,24,8> *)0x0) {
      pTVar6 = (THandle<Chaos::FChaosPhysicsMaterial,24,8> *)0x0;
    }
    else {
      *pTVar6 = (THandle<Chaos::FChaosPhysicsMaterial,24,8>)0x0;
    }
    if (pTVar1 != (TUniquePtr<Chaos::FMaterialHandle,TDefaultDelete<Chaos::FMaterialHandle>_> *)
                  local_18) {
      pFVar9 = pTVar1->Ptr;
      pTVar1->Ptr = (FMaterialHandle *)pTVar6;
      pTVar6 = (THandle<Chaos::FChaosPhysicsMaterial,24,8> *)0x0;
      ::operator_delete(pFVar9,4);
    }
    ::operator_delete(pTVar6,4);
  }
  pFVar7 = Chaos::FMaterialHandle::Get(pTVar1->Ptr);
  if (pFVar7 == (FChaosPhysicsMaterial *)0x0) {
    pFVar8 = Chaos::FPhysicalMaterialManager::Get();
    Chaos::FPhysicalMaterialManager::Create(pFVar8);
    pTVar1->Ptr->InnerHandle = local_res8;
    pFVar7 = Chaos::FMaterialHandle::Get(pTVar1->Ptr);
    if (pFVar7 == (FChaosPhysicsMaterial *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaterialHandle->IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PhysicsCore\\Private\\PhysicalMaterial.cpp"
                         ,0x97,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pFVar9 = (FMaterialHandle *)(*pcVar2)();
        return pFVar9;
      }
    }
    pFVar9 = pTVar1->Ptr;
    pFVar7 = Chaos::FMaterialHandle::Get(pFVar9);
    if (pFVar7 != (FChaosPhysicsMaterial *)0x0) {
      pFVar7->UserData = &this->UserData;
    }
    pFVar8 = Chaos::FPhysicalMaterialManager::Get();
    Chaos::FPhysicalMaterialManager::UpdateMaterial(pFVar8,(FMaterialHandle)pFVar9->InnerHandle);
    pFVar9 = pTVar1->Ptr;
    pFVar7 = Chaos::FMaterialHandle::Get(pFVar9);
    if (pFVar7 != (FChaosPhysicsMaterial *)0x0) {
      pFVar7->Friction = (double)this->Friction;
      pFVar7->StaticFriction = (double)this->StaticFriction;
      EVar5 = UToCCombineMode((uint)(this->FrictionCombineMode).Value);
      pFVar7->FrictionCombineMode = EVar5;
      pFVar7->Restitution = (double)this->Restitution;
      EVar5 = UToCCombineMode((uint)(this->RestitutionCombineMode).Value);
      fVar3 = __real_461c4000;
      pFVar7->RestitutionCombineMode = EVar5;
      pFVar7->Density = (double)this->Density;
      pFVar7->SleepingLinearThreshold = (double)this->SleepLinearVelocityThreshold;
      pFVar7->SleepingAngularThreshold = (double)this->SleepAngularVelocityThreshold;
      pFVar7->SleepCounterThreshold = this->SleepCounterThreshold;
      (pFVar7->Strength).TensileStrength = (this->Strength).TensileStrength * fVar3;
      (pFVar7->Strength).CompressionStrength = (this->Strength).CompressionStrength * fVar3;
      (pFVar7->Strength).ShearStrength = (this->Strength).ShearStrength * fVar3;
      (pFVar7->DamageModifier).DamageThresholdMultiplier =
           (this->DamageModifier).DamageThresholdMultiplier;
      pFVar7->BaseFrictionImpulse = this->BaseFrictionImpulse;
      pFVar7->SoftCollisionMode = this->SoftCollisionMode;
      pFVar7->SoftCollisionThickness = this->SoftCollisionThickness;
    }
    pFVar8 = Chaos::FPhysicalMaterialManager::Get();
    Chaos::FPhysicalMaterialManager::UpdateMaterial(pFVar8,(FMaterialHandle)pFVar9->InnerHandle);
  }
  return pTVar1->Ptr;
}

// GetPrivateStaticClass @ 1441af430

UClass * __cdecl UPhysicalMaterial::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicalMaterial.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PhysicsCore",L"PhysicalMaterial",
               &Z_Registration_Info_UClass_UPhysicalMaterial.InnerSingleton,
               StaticRegisterNativesUPhysicalMaterial,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPhysicalMaterial>,
               InternalVTableHelperCtorCaller<UPhysicalMaterial>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicalMaterial.InnerSingleton;
}

// PostLoad @ 1441b31d0

void __thiscall UPhysicalMaterial::PostLoad(UPhysicalMaterial *this)

{
  int iVar1;
  UDEPRECATED_PhysicalMaterialPropertyBase *pUVar2;
  undefined8 uVar3;
  uchar uVar4;
  int iVar5;
  uint uVar6;
  FPackageFileVersion FVar7;
  FString *pFVar8;
  FLinearColor *pFVar9;
  wchar_t *pwVar10;
  FGuid local_28;
  FLinearColor local_18;
  
  UObject::PostLoad((UObject *)this);
  FVar7 = UObjectBaseUtility::GetLinkerUEVersion((UObjectBaseUtility *)this);
  if ((*(int *)FVar7 < 0x103) &&
     (pUVar2 = (this->PhysicalMaterialProperty_DEPRECATED).field0_0x0.DebugPtr,
     pUVar2 != (UDEPRECATED_PhysicalMaterialPropertyBase *)0x0)) {
    uVar4 = (**(code **)(*(longlong *)pUVar2 + 0x2b0))();
    (this->SurfaceType).Value = uVar4;
  }
  local_28 = FFortniteMainBranchObjectVersion::GUID;
  iVar5 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_28);
  if (iVar5 < 0xb3) {
    pFVar8 = UObjectBaseUtility::GetPathName
                       ((UObjectBaseUtility *)this,(FString *)&local_28,(UObject *)0x0);
    iVar1 = (pFVar8->Data).ArrayNum;
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      pwVar10 = L"";
      iVar5 = 0;
    }
    else {
      pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar10);
    pFVar9 = FLinearColor::MakeRandomSeededColor(&local_18,uVar6);
    uVar3 = *(undefined8 *)((longlong)&pFVar9->field0_0x0 + 8);
    *(undefined8 *)&(this->DebugColor).field0_0x0 = *(undefined8 *)&pFVar9->field0_0x0;
    *(undefined8 *)((longlong)&(this->DebugColor).field0_0x0 + 8) = uVar3;
    if ((void *)local_28._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_28._0_8_);
    }
  }
  return;
}

// Serialize @ 1441b5750

void __thiscall UPhysicalMaterial::Serialize(UPhysicalMaterial *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  UObject::Serialize((UObject *)this,param_1);
  return;
}

// Serialize @ 1441b5790

void __thiscall
UPhysicalMaterial::Serialize(UPhysicalMaterial *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FFortniteMainBranchObjectVersion::GUID);
  UObject::Serialize((UObject *)this,pFVar1);
  return;
}

// SetEngineDefaultDestructiblePhysMaterial @ 1441b6ca0

void __cdecl UPhysicalMaterial::SetEngineDefaultDestructiblePhysMaterial(UPhysicalMaterial *param_1)

{
  GEngineDefaultDestructiblePhysMaterial = param_1;
  return;
}

// SetEngineDefaultPhysMaterial @ 1441b6cb0

void __cdecl UPhysicalMaterial::SetEngineDefaultPhysMaterial(UPhysicalMaterial *param_1)

{
  GEngineDefaultPhysMaterial = param_1;
  return;
}

// StaticRegisterNativesUPhysicalMaterial @ 1441ba9f0

void __cdecl UPhysicalMaterial::StaticRegisterNativesUPhysicalMaterial(void)

{
  return;
}

