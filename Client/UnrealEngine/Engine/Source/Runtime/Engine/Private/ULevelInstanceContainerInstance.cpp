// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// StaticClass @ 148a74390

UClass * __cdecl ULevelInstanceContainerInstance::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelInstanceContainerInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelInstanceContainerInstance",
               &Z_Registration_Info_UClass_ULevelInstanceContainerInstance.InnerSingleton,
               StaticRegisterNativesULevelInstanceContainerInstance,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULevelInstanceContainerInstance>,
               InternalVTableHelperCtorCaller<ULevelInstanceContainerInstance>,local_res8,
               UActorDescContainerInstance::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelInstanceContainerInstance.InnerSingleton;
}

// ULevelInstanceContainerInstance @ 148a7fbf0

ULevelInstanceContainerInstance * __thiscall
ULevelInstanceContainerInstance::ULevelInstanceContainerInstance
          (ULevelInstanceContainerInstance *this,FVTableHelper *param_1)

{
  UActorDescContainerInstance::UActorDescContainerInstance
            ((UActorDescContainerInstance *)this,param_1);
  *(undefined ***)this = &___7ULevelInstanceContainerInstance__6B_;
  return this;
}

// ~ULevelInstanceContainerInstance @ 148a81940

void __thiscall
ULevelInstanceContainerInstance::~ULevelInstanceContainerInstance
          (ULevelInstanceContainerInstance *this)

{
  *(undefined ***)this = &___7ULevelInstanceContainerInstance__6B_;
  UActorDescContainerInstance::~UActorDescContainerInstance((UActorDescContainerInstance *)this);
  return;
}

// GetPrivateStaticClass @ 148a95e90

UClass * __cdecl ULevelInstanceContainerInstance::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelInstanceContainerInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"LevelInstanceContainerInstance",
               &Z_Registration_Info_UClass_ULevelInstanceContainerInstance.InnerSingleton,
               StaticRegisterNativesULevelInstanceContainerInstance,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<ULevelInstanceContainerInstance>,
               InternalVTableHelperCtorCaller<ULevelInstanceContainerInstance>,local_res8,
               UActorDescContainerInstance::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelInstanceContainerInstance.InnerSingleton;
}

// StaticRegisterNativesULevelInstanceContainerInstance @ 148aa2920

void __cdecl
ULevelInstanceContainerInstance::StaticRegisterNativesULevelInstanceContainerInstance(void)

{
  return;
}

