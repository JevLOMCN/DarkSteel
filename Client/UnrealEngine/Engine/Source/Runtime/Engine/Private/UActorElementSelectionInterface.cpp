// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147b27a30

UClass * __cdecl UActorElementSelectionInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorElementSelectionInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ActorElementSelectionInterface",
               &Z_Registration_Info_UClass_UActorElementSelectionInterface.InnerSingleton,
               StaticRegisterNativesUActorElementSelectionInterface,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UActorElementSelectionInterface>,
               InternalVTableHelperCtorCaller<UActorElementSelectionInterface>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorElementSelectionInterface.InnerSingleton;
}

// UActorElementSelectionInterface @ 147b3a580

UActorElementSelectionInterface * __thiscall
UActorElementSelectionInterface::UActorElementSelectionInterface
          (UActorElementSelectionInterface *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ITypedElementSelectionInterface__;
  return this;
}

// UActorElementSelectionInterface @ 147b3a5c0

UActorElementSelectionInterface * __thiscall
UActorElementSelectionInterface::UActorElementSelectionInterface
          (UActorElementSelectionInterface *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ITypedElementSelectionInterface__;
  return this;
}

// ~UActorElementSelectionInterface @ 147b3d4a0

void __thiscall
UActorElementSelectionInterface::~UActorElementSelectionInterface
          (UActorElementSelectionInterface *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &___7ITypedElementSelectionInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147b6b550

UClass * __cdecl UActorElementSelectionInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorElementSelectionInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ActorElementSelectionInterface",
               &Z_Registration_Info_UClass_UActorElementSelectionInterface.InnerSingleton,
               StaticRegisterNativesUActorElementSelectionInterface,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UActorElementSelectionInterface>,
               InternalVTableHelperCtorCaller<UActorElementSelectionInterface>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorElementSelectionInterface.InnerSingleton;
}

// StaticRegisterNativesUActorElementSelectionInterface @ 147b8eb00

void __cdecl
UActorElementSelectionInterface::StaticRegisterNativesUActorElementSelectionInterface(void)

{
  return;
}

// _getUObject @ 147b91f60

UObject * __thiscall
UActorElementSelectionInterface::_getUObject(UActorElementSelectionInterface *this)

{
  return (UObject *)&this[-1].field_0x8;
}

