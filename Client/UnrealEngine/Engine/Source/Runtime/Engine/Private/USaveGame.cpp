// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147ba6230

UClass * __cdecl USaveGame::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USaveGame.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SaveGame",&Z_Registration_Info_UClass_USaveGame.InnerSingleton,
               StaticRegisterNativesUSaveGame,0x28,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,
               L"Engine",InternalConstructor<USaveGame>,InternalVTableHelperCtorCaller<USaveGame>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USaveGame.InnerSingleton;
}

// USaveGame @ 147bbdb40

USaveGame * __thiscall USaveGame::USaveGame(USaveGame *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7USaveGame__6B_;
  return this;
}

// USaveGame @ 147bbdb70

USaveGame * __thiscall USaveGame::USaveGame(USaveGame *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7USaveGame__6B_;
  return this;
}

// ~USaveGame @ 147bbfab0

void __thiscall USaveGame::~USaveGame(USaveGame *this)

{
  *(undefined ***)this = &___7USaveGame__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147be5dc0

UClass * __cdecl USaveGame::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USaveGame.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SaveGame",&Z_Registration_Info_UClass_USaveGame.InnerSingleton,
               StaticRegisterNativesUSaveGame,0x28,8,CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,
               L"Engine",InternalConstructor<USaveGame>,InternalVTableHelperCtorCaller<USaveGame>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USaveGame.InnerSingleton;
}

// StaticRegisterNativesUSaveGame @ 147c037b0

void __cdecl USaveGame::StaticRegisterNativesUSaveGame(void)

{
  return;
}

