// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 14727a720

UClass * __cdecl UInterface_ActorSubobject::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterface_ActorSubobject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Interface_ActorSubobject",
               &Z_Registration_Info_UClass_UInterface_ActorSubobject.InnerSingleton,
               StaticRegisterNativesUInterface_ActorSubobject,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterface_ActorSubobject>,
               InternalVTableHelperCtorCaller<UInterface_ActorSubobject>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterface_ActorSubobject.InnerSingleton;
}

// UInterface_ActorSubobject @ 14727fa90

UInterface_ActorSubobject * __thiscall
UInterface_ActorSubobject::UInterface_ActorSubobject
          (UInterface_ActorSubobject *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UInterface_ActorSubobject__6B_;
  return this;
}

// ~UInterface_ActorSubobject @ 14727fe20

void __thiscall
UInterface_ActorSubobject::~UInterface_ActorSubobject(UInterface_ActorSubobject *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 147281160

UClass * __cdecl UInterface_ActorSubobject::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterface_ActorSubobject.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Interface_ActorSubobject",
               &Z_Registration_Info_UClass_UInterface_ActorSubobject.InnerSingleton,
               StaticRegisterNativesUInterface_ActorSubobject,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UInterface_ActorSubobject>,
               InternalVTableHelperCtorCaller<UInterface_ActorSubobject>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterface_ActorSubobject.InnerSingleton;
}

// StaticRegisterNativesUInterface_ActorSubobject @ 1472815b0

void __cdecl UInterface_ActorSubobject::StaticRegisterNativesUInterface_ActorSubobject(void)

{
  return;
}

// UInterface_ActorSubobject @ 147d798c0

UInterface_ActorSubobject * __thiscall
UInterface_ActorSubobject::UInterface_ActorSubobject
          (UInterface_ActorSubobject *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UInterface_ActorSubobject__6B_;
  return this;
}

