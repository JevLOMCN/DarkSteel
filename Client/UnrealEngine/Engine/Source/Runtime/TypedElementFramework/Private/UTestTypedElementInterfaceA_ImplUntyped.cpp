// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 9

// StaticClass @ 142c825b0

UClass * __cdecl UTestTypedElementInterfaceA_ImplUntyped::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestTypedElementInterfaceA_ImplUntyped.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TypedElementFramework",L"TestTypedElementInterfaceA_ImplUntyped",
               &Z_Registration_Info_UClass_UTestTypedElementInterfaceA_ImplUntyped.InnerSingleton,
               StaticRegisterNativesUTestTypedElementInterfaceA_ImplUntyped,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTestTypedElementInterfaceA_ImplUntyped>
               ,InternalVTableHelperCtorCaller<UTestTypedElementInterfaceA_ImplUntyped>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestTypedElementInterfaceA_ImplUntyped.InnerSingleton;
}

// UTestTypedElementInterfaceA_ImplUntyped @ 142c98b80

UTestTypedElementInterfaceA_ImplUntyped * __thiscall
UTestTypedElementInterfaceA_ImplUntyped::UTestTypedElementInterfaceA_ImplUntyped
          (UTestTypedElementInterfaceA_ImplUntyped *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ITestTypedElementInterfaceA__;
  return this;
}

// UTestTypedElementInterfaceA_ImplUntyped @ 142c98bc0

UTestTypedElementInterfaceA_ImplUntyped * __thiscall
UTestTypedElementInterfaceA_ImplUntyped::UTestTypedElementInterfaceA_ImplUntyped
          (UTestTypedElementInterfaceA_ImplUntyped *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ITestTypedElementInterfaceA__;
  return this;
}

// ~UTestTypedElementInterfaceA_ImplUntyped @ 142c9a910

void __thiscall
UTestTypedElementInterfaceA_ImplUntyped::~UTestTypedElementInterfaceA_ImplUntyped
          (UTestTypedElementInterfaceA_ImplUntyped *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &___7ITestTypedElementInterfaceA__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetDisplayName @ 142cad450

FText * __thiscall
UTestTypedElementInterfaceA_ImplUntyped::GetDisplayName
          (UTestTypedElementInterfaceA_ImplUntyped *this,FText *__return_storage_ptr__,
          FTypedElementHandle *param_1)

{
  FText::FText(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 142cae6b0

UClass * __cdecl UTestTypedElementInterfaceA_ImplUntyped::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestTypedElementInterfaceA_ImplUntyped.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TypedElementFramework",L"TestTypedElementInterfaceA_ImplUntyped",
               &Z_Registration_Info_UClass_UTestTypedElementInterfaceA_ImplUntyped.InnerSingleton,
               StaticRegisterNativesUTestTypedElementInterfaceA_ImplUntyped,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTestTypedElementInterfaceA_ImplUntyped>
               ,InternalVTableHelperCtorCaller<UTestTypedElementInterfaceA_ImplUntyped>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestTypedElementInterfaceA_ImplUntyped.InnerSingleton;
}

// SetDisplayName @ 142cbb280

bool __thiscall
UTestTypedElementInterfaceA_ImplUntyped::SetDisplayName
          (UTestTypedElementInterfaceA_ImplUntyped *this,FTypedElementHandle *param_1,FText *param_2
          ,bool param_3)

{
  ITextData *pIVar1;
  
  pIVar1 = (param_2->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return false;
}

// StaticRegisterNativesUTestTypedElementInterfaceA_ImplUntyped @ 142cbc270

void __cdecl
UTestTypedElementInterfaceA_ImplUntyped::
StaticRegisterNativesUTestTypedElementInterfaceA_ImplUntyped(void)

{
  return;
}

// _getUObject @ 142cc43d0

UObject * __thiscall
UTestTypedElementInterfaceA_ImplUntyped::_getUObject(UTestTypedElementInterfaceA_ImplUntyped *this)

{
  return (UObject *)&this[-1].field_0x8;
}

