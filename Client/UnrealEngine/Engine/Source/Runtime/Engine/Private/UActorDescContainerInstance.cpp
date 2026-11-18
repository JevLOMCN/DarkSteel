// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// StaticClass @ 148a29d60

UClass * __cdecl UActorDescContainerInstance::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorDescContainerInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ActorDescContainerInstance",
               &Z_Registration_Info_UClass_UActorDescContainerInstance.InnerSingleton,
               StaticRegisterNativesUActorDescContainerInstance,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UActorDescContainerInstance>,
               InternalVTableHelperCtorCaller<UActorDescContainerInstance>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorDescContainerInstance.InnerSingleton;
}

// UActorDescContainerInstance @ 148a42190

UActorDescContainerInstance * __thiscall
UActorDescContainerInstance::UActorDescContainerInstance
          (UActorDescContainerInstance *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UActorDescContainerInstance__6B_;
  return this;
}

// ~UActorDescContainerInstance @ 148a443e0

void __thiscall
UActorDescContainerInstance::~UActorDescContainerInstance(UActorDescContainerInstance *this)

{
  *(undefined ***)this = &___7UActorDescContainerInstance__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 148a599d0

UClass * __cdecl UActorDescContainerInstance::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorDescContainerInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ActorDescContainerInstance",
               &Z_Registration_Info_UClass_UActorDescContainerInstance.InnerSingleton,
               StaticRegisterNativesUActorDescContainerInstance,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UActorDescContainerInstance>,
               InternalVTableHelperCtorCaller<UActorDescContainerInstance>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorDescContainerInstance.InnerSingleton;
}

// StaticRegisterNativesUActorDescContainerInstance @ 148a6a2a0

void __cdecl UActorDescContainerInstance::StaticRegisterNativesUActorDescContainerInstance(void)

{
  return;
}

