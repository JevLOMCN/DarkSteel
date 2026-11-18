// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 148702060

UClass * __cdecl ASpectatorPawn::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ASpectatorPawn.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SpectatorPawn",
               &Z_Registration_Info_UClass_ASpectatorPawn.InnerSingleton,
               StaticRegisterNativesASpectatorPawn,0x368,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<ASpectatorPawn>,
               InternalVTableHelperCtorCaller<ASpectatorPawn>,local_res8,ADefaultPawn::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ASpectatorPawn.InnerSingleton;
}

// ASpectatorPawn @ 14870f760

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ASpectatorPawn * __thiscall
ASpectatorPawn::ASpectatorPawn(ASpectatorPawn *this,FVTableHelper *param_1)

{
  ADefaultPawn::ADefaultPawn((ADefaultPawn *)this,param_1);
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__INavAgentInterface__;
  return this;
}

// ASpectatorPawn @ 14870f7a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ASpectatorPawn * __thiscall
ASpectatorPawn::ASpectatorPawn(ASpectatorPawn *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  UClass *pUVar3;
  ulonglong uVar4;
  
  FVar2 = ADefaultPawn::MovementComponentName;
  pUVar3 = USpectatorPawnMovement::StaticClass();
  FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,FVar2);
  FObjectInitializer::FOverrides::Add
            (&param_1->SubobjectOverrides,FVar2,pUVar3,(TArrayView<FName_const_,int> *)0x0);
  FVar2 = ADefaultPawn::MeshComponentName;
  FObjectInitializer::AssertIfSubobjectSetupIsNotAllowed(param_1,ADefaultPawn::MeshComponentName);
  FObjectInitializer::FOverrides::Add
            (&param_1->SubobjectOverrides,FVar2,(UClass *)0x0,(TArrayView<FName_const_,int> *)0x0);
  ADefaultPawn::ADefaultPawn((ADefaultPawn *)this,param_1);
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__INavAgentInterface__;
  AActor::SetCanBeDamaged((AActor *)this,false);
  this->field_0x5a = this->field_0x5a & 0xef;
  uVar4 = (ulonglong)_tls_index;
  *(undefined4 *)&this->field_0x2cc = 0;
  this->field_0x16a = 1;
  pbVar1 = (byte *)(*(longlong *)&this->field_0x348 + 0x120);
  *pbVar1 = *pbVar1 & 0x7f;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar4 * 8) + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&CollisionProfileName,L"Spectator");
      _Init_thread_footer(&::_TSS0);
    }
  }
  (**(code **)(**(longlong **)&this->field_0x350 + 0x788))
            (*(longlong **)&this->field_0x350,CollisionProfileName,1);
  return this;
}

// ~ASpectatorPawn @ 148714020

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ASpectatorPawn::~ASpectatorPawn(ASpectatorPawn *this)

{
  *(undefined ***)this = &_vftable__for__AActor__;
  *(undefined ***)&this->field_0x2c0 = &_vftable__for__INavAgentInterface__;
  ADefaultPawn::~ADefaultPawn((ADefaultPawn *)this);
  return;
}

// GetPrivateStaticClass @ 14873e3a0

UClass * __cdecl ASpectatorPawn::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ASpectatorPawn.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SpectatorPawn",
               &Z_Registration_Info_UClass_ASpectatorPawn.InnerSingleton,
               StaticRegisterNativesASpectatorPawn,0x368,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<ASpectatorPawn>,
               InternalVTableHelperCtorCaller<ASpectatorPawn>,local_res8,ADefaultPawn::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ASpectatorPawn.InnerSingleton;
}

// LookUpAtRate @ 14874ce40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ASpectatorPawn::LookUpAtRate(ASpectatorPawn *this,float param_1)

{
  AWorldSettings *pAVar1;
  float fVar2;
  
  pAVar1 = AActor::GetWorldSettings((AActor *)this);
  if (pAVar1 != (AWorldSettings *)0x0) {
    fVar2 = (float)(**(code **)(pAVar1->_padding_ + 0x790))(pAVar1);
    if (fVar2 <= __real_38d1b717) {
                    /* WARNING: Could not recover jumptable at 0x00014874cea1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)this + 0x898))
                (this,(float)(double)FApp::DeltaTime * *(float *)&this->field_0x68 *
                      param_1 * *(float *)&this->field_0x344);
      return;
    }
  }
  ADefaultPawn::LookUpAtRate((ADefaultPawn *)this,param_1);
  return;
}

// PossessedBy @ 14874f7f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall ASpectatorPawn::PossessedBy(ASpectatorPawn *this,AController *param_1)

{
  AController *pAVar1;
  
  if ((this->field_0x5b & 8) != 0) {
    APawn::PossessedBy((APawn *)this,param_1);
    return;
  }
  pAVar1 = *(AController **)&this->field_0x2f0;
  APawn::SetController((APawn *)this,param_1);
  if (pAVar1 != param_1) {
    APawn::ReceivePossessed((APawn *)this,*(AController **)&this->field_0x2f0);
  }
  return;
}

// StaticRegisterNativesASpectatorPawn @ 14875d080

void __cdecl ASpectatorPawn::StaticRegisterNativesASpectatorPawn(void)

{
  return;
}

// TurnAtRate @ 14875d4d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ASpectatorPawn::TurnAtRate(ASpectatorPawn *this,float param_1)

{
  AWorldSettings *pAVar1;
  float fVar2;
  
  pAVar1 = AActor::GetWorldSettings((AActor *)this);
  if (pAVar1 != (AWorldSettings *)0x0) {
    fVar2 = (float)(**(code **)(pAVar1->_padding_ + 0x790))(pAVar1);
    if (fVar2 <= __real_38d1b717) {
                    /* WARNING: Could not recover jumptable at 0x00014875d531. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)this + 0x8a0))
                (this,(float)(double)FApp::DeltaTime * *(float *)&this->field_0x68 *
                      param_1 * *(float *)&this->field_0x340);
      return;
    }
  }
  ADefaultPawn::TurnAtRate((ADefaultPawn *)this,param_1);
  return;
}

