// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1472881e0

UClass * __cdecl UPhysicsComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsComponent.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicsComponent",
               &Z_Registration_Info_UClass_UPhysicsComponent.InnerSingleton,
               StaticRegisterNativesUPhysicsComponent,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPhysicsComponent>,
               InternalVTableHelperCtorCaller<UPhysicsComponent>,aFStackX_8,UInterface::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsComponent.InnerSingleton;
}

// UPhysicsComponent @ 14728cc50

UPhysicsComponent * __thiscall
UPhysicsComponent::UPhysicsComponent(UPhysicsComponent *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UPhysicsComponent__6B_;
  return this;
}

// UPhysicsComponent @ 14728cc80

UPhysicsComponent * __thiscall
UPhysicsComponent::UPhysicsComponent(UPhysicsComponent *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UPhysicsComponent__6B_;
  return this;
}

// ~UPhysicsComponent @ 14728d830

void __thiscall UPhysicsComponent::~UPhysicsComponent(UPhysicsComponent *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 147290cd0

UClass * __cdecl UPhysicsComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPhysicsComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PhysicsComponent",
               &Z_Registration_Info_UClass_UPhysicsComponent.InnerSingleton,
               StaticRegisterNativesUPhysicsComponent,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPhysicsComponent>,
               InternalVTableHelperCtorCaller<UPhysicsComponent>,local_res8,UInterface::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPhysicsComponent.InnerSingleton;
}

// StaticRegisterNativesUPhysicsComponent @ 1472914d0

void __cdecl UPhysicsComponent::StaticRegisterNativesUPhysicsComponent(void)

{
  return;
}

