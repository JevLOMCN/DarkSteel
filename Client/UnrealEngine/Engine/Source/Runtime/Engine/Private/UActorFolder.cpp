// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147363570

UClass * __cdecl UActorFolder::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorFolder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ActorFolder",
               &Z_Registration_Info_UClass_UActorFolder.InnerSingleton,
               StaticRegisterNativesUActorFolder,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UActorFolder>,InternalVTableHelperCtorCaller<UActorFolder>,
               local_res8,UObject::StaticClass,ULevel::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorFolder.InnerSingleton;
}

// UActorFolder @ 14737c7b0

UActorFolder * __thiscall UActorFolder::UActorFolder(UActorFolder *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UActorFolder__6B_;
  return this;
}

// UActorFolder @ 14737c7e0

UActorFolder * __thiscall UActorFolder::UActorFolder(UActorFolder *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UActorFolder__6B_;
  return this;
}

// ~UActorFolder @ 14737da30

void __thiscall UActorFolder::~UActorFolder(UActorFolder *this)

{
  *(undefined ***)this = &___7UActorFolder__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1473a0870

UClass * __cdecl UActorFolder::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorFolder.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ActorFolder",
               &Z_Registration_Info_UClass_UActorFolder.InnerSingleton,
               StaticRegisterNativesUActorFolder,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UActorFolder>,InternalVTableHelperCtorCaller<UActorFolder>,
               local_res8,UObject::StaticClass,ULevel::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorFolder.InnerSingleton;
}

// StaticRegisterNativesUActorFolder @ 1473b88f0

void __cdecl UActorFolder::StaticRegisterNativesUActorFolder(void)

{
  return;
}

