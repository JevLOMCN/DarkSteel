// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147b29e70

UClass * __cdecl UObjectElementSelectionInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectElementSelectionInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ObjectElementSelectionInterface",
               &Z_Registration_Info_UClass_UObjectElementSelectionInterface.InnerSingleton,
               StaticRegisterNativesUObjectElementSelectionInterface,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UObjectElementSelectionInterface>,
               InternalVTableHelperCtorCaller<UObjectElementSelectionInterface>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectElementSelectionInterface.InnerSingleton;
}

// UObjectElementSelectionInterface @ 147b3b680

UObjectElementSelectionInterface * __thiscall
UObjectElementSelectionInterface::UObjectElementSelectionInterface
          (UObjectElementSelectionInterface *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ITypedElementSelectionInterface__;
  return this;
}

// UObjectElementSelectionInterface @ 147b3b6c0

UObjectElementSelectionInterface * __thiscall
UObjectElementSelectionInterface::UObjectElementSelectionInterface
          (UObjectElementSelectionInterface *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ITypedElementSelectionInterface__;
  return this;
}

// ~UObjectElementSelectionInterface @ 147b3d9d0

void __thiscall
UObjectElementSelectionInterface::~UObjectElementSelectionInterface
          (UObjectElementSelectionInterface *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &___7ITypedElementSelectionInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147b6c4a0

UClass * __cdecl UObjectElementSelectionInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UObjectElementSelectionInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ObjectElementSelectionInterface",
               &Z_Registration_Info_UClass_UObjectElementSelectionInterface.InnerSingleton,
               StaticRegisterNativesUObjectElementSelectionInterface,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UObjectElementSelectionInterface>,
               InternalVTableHelperCtorCaller<UObjectElementSelectionInterface>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UObjectElementSelectionInterface.InnerSingleton;
}

// StaticRegisterNativesUObjectElementSelectionInterface @ 147b8ecc0

void __cdecl
UObjectElementSelectionInterface::StaticRegisterNativesUObjectElementSelectionInterface(void)

{
  return;
}

// _getUObject @ 147b92010

UObject * __thiscall
UObjectElementSelectionInterface::_getUObject(UObjectElementSelectionInterface *this)

{
  return (UObject *)&this[-1].field_0x8;
}

