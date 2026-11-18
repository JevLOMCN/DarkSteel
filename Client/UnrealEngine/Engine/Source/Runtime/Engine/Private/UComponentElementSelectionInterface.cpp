// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147b28fd0

UClass * __cdecl UComponentElementSelectionInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComponentElementSelectionInterface.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ComponentElementSelectionInterface",
               &Z_Registration_Info_UClass_UComponentElementSelectionInterface.InnerSingleton,
               StaticRegisterNativesUComponentElementSelectionInterface,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UComponentElementSelectionInterface>,
               InternalVTableHelperCtorCaller<UComponentElementSelectionInterface>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComponentElementSelectionInterface.InnerSingleton;
}

// UComponentElementSelectionInterface @ 147b3a8e0

UComponentElementSelectionInterface * __thiscall
UComponentElementSelectionInterface::UComponentElementSelectionInterface
          (UComponentElementSelectionInterface *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ITypedElementSelectionInterface__;
  return this;
}

// UComponentElementSelectionInterface @ 147b3a920

UComponentElementSelectionInterface * __thiscall
UComponentElementSelectionInterface::UComponentElementSelectionInterface
          (UComponentElementSelectionInterface *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ITypedElementSelectionInterface__;
  return this;
}

// ~UComponentElementSelectionInterface @ 147b3d580

void __thiscall
UComponentElementSelectionInterface::~UComponentElementSelectionInterface
          (UComponentElementSelectionInterface *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &___7ITypedElementSelectionInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 147b6ba20

UClass * __cdecl UComponentElementSelectionInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComponentElementSelectionInterface.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ComponentElementSelectionInterface",
               &Z_Registration_Info_UClass_UComponentElementSelectionInterface.InnerSingleton,
               StaticRegisterNativesUComponentElementSelectionInterface,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UComponentElementSelectionInterface>,
               InternalVTableHelperCtorCaller<UComponentElementSelectionInterface>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComponentElementSelectionInterface.InnerSingleton;
}

// StaticRegisterNativesUComponentElementSelectionInterface @ 147b8eba0

void __cdecl
UComponentElementSelectionInterface::StaticRegisterNativesUComponentElementSelectionInterface(void)

{
  return;
}

// _getUObject @ 147b91fc0

UObject * __thiscall
UComponentElementSelectionInterface::_getUObject(UComponentElementSelectionInterface *this)

{
  return (UObject *)&this[-1].field_0x8;
}

