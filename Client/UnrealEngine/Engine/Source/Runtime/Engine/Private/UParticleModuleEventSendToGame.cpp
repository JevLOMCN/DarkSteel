// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 1472f7a30

UClass * __cdecl UParticleModuleEventSendToGame::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleEventSendToGame.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleEventSendToGame",
               &Z_Registration_Info_UClass_UParticleModuleEventSendToGame.InnerSingleton,
               StaticRegisterNativesUParticleModuleEventSendToGame,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UParticleModuleEventSendToGame>,
               InternalVTableHelperCtorCaller<UParticleModuleEventSendToGame>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleEventSendToGame.InnerSingleton;
}

// UParticleModuleEventSendToGame @ 1472fd280

UParticleModuleEventSendToGame * __thiscall
UParticleModuleEventSendToGame::UParticleModuleEventSendToGame
          (UParticleModuleEventSendToGame *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UParticleModuleEventSendToGame__6B_;
  return this;
}

// ~UParticleModuleEventSendToGame @ 1472fdeb0

void __thiscall
UParticleModuleEventSendToGame::~UParticleModuleEventSendToGame
          (UParticleModuleEventSendToGame *this)

{
  *(undefined ***)this = &___7UParticleModuleEventSendToGame__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// DoEvent @ 1472ff550

void __thiscall
UParticleModuleEventSendToGame::DoEvent
          (UParticleModuleEventSendToGame *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3,FName *param_4)

{
  return;
}

// GetPrivateStaticClass @ 147301080

UClass * __cdecl UParticleModuleEventSendToGame::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UParticleModuleEventSendToGame.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ParticleModuleEventSendToGame",
               &Z_Registration_Info_UClass_UParticleModuleEventSendToGame.InnerSingleton,
               StaticRegisterNativesUParticleModuleEventSendToGame,0x28,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UParticleModuleEventSendToGame>,
               InternalVTableHelperCtorCaller<UParticleModuleEventSendToGame>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UParticleModuleEventSendToGame.InnerSingleton;
}

// StaticRegisterNativesUParticleModuleEventSendToGame @ 147301900

void __cdecl
UParticleModuleEventSendToGame::StaticRegisterNativesUParticleModuleEventSendToGame(void)

{
  return;
}

// UParticleModuleEventSendToGame @ 14815c350

UParticleModuleEventSendToGame * __thiscall
UParticleModuleEventSendToGame::UParticleModuleEventSendToGame
          (UParticleModuleEventSendToGame *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UParticleModuleEventSendToGame__6B_;
  return this;
}

