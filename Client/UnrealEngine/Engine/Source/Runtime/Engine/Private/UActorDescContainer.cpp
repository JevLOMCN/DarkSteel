// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 148a29b30

UClass * __cdecl UActorDescContainer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorDescContainer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ActorDescContainer",
               &Z_Registration_Info_UClass_UActorDescContainer.InnerSingleton,
               StaticRegisterNativesUActorDescContainer,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UActorDescContainer>,
               InternalVTableHelperCtorCaller<UActorDescContainer>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorDescContainer.InnerSingleton;
}

// UActorDescContainer @ 148a42130

UActorDescContainer * __thiscall
UActorDescContainer::UActorDescContainer(UActorDescContainer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UActorDescContainer__6B_;
  return this;
}

// UActorDescContainer @ 148a42160

UActorDescContainer * __thiscall
UActorDescContainer::UActorDescContainer(UActorDescContainer *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UActorDescContainer__6B_;
  return this;
}

// ~UActorDescContainer @ 148a443c0

void __thiscall UActorDescContainer::~UActorDescContainer(UActorDescContainer *this)

{
  *(undefined ***)this = &___7UActorDescContainer__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 148a59920

UClass * __cdecl UActorDescContainer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorDescContainer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ActorDescContainer",
               &Z_Registration_Info_UClass_UActorDescContainer.InnerSingleton,
               StaticRegisterNativesUActorDescContainer,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UActorDescContainer>,
               InternalVTableHelperCtorCaller<UActorDescContainer>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorDescContainer.InnerSingleton;
}

// StaticRegisterNativesUActorDescContainer @ 148a6a290

void __cdecl UActorDescContainer::StaticRegisterNativesUActorDescContainer(void)

{
  return;
}

