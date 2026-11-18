// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 9

// StaticClass @ 142c82290

UClass * __cdecl UTestTypedElementInterfaceA_ImplTyped::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestTypedElementInterfaceA_ImplTyped.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TypedElementFramework",L"TestTypedElementInterfaceA_ImplTyped",
               &Z_Registration_Info_UClass_UTestTypedElementInterfaceA_ImplTyped.InnerSingleton,
               StaticRegisterNativesUTestTypedElementInterfaceA_ImplTyped,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTestTypedElementInterfaceA_ImplTyped>,
               InternalVTableHelperCtorCaller<UTestTypedElementInterfaceA_ImplTyped>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestTypedElementInterfaceA_ImplTyped.InnerSingleton;
}

// UTestTypedElementInterfaceA_ImplTyped @ 142c98b00

UTestTypedElementInterfaceA_ImplTyped * __thiscall
UTestTypedElementInterfaceA_ImplTyped::UTestTypedElementInterfaceA_ImplTyped
          (UTestTypedElementInterfaceA_ImplTyped *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ITestTypedElementInterfaceA__;
  return this;
}

// UTestTypedElementInterfaceA_ImplTyped @ 142c98b40

UTestTypedElementInterfaceA_ImplTyped * __thiscall
UTestTypedElementInterfaceA_ImplTyped::UTestTypedElementInterfaceA_ImplTyped
          (UTestTypedElementInterfaceA_ImplTyped *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ITestTypedElementInterfaceA__;
  return this;
}

// ~UTestTypedElementInterfaceA_ImplTyped @ 142c9a8f0

void __thiscall
UTestTypedElementInterfaceA_ImplTyped::~UTestTypedElementInterfaceA_ImplTyped
          (UTestTypedElementInterfaceA_ImplTyped *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &___7ITestTypedElementInterfaceA__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetDisplayName @ 142cad420

FText * __thiscall
UTestTypedElementInterfaceA_ImplTyped::GetDisplayName
          (UTestTypedElementInterfaceA_ImplTyped *this,FText *__return_storage_ptr__,
          FTypedElementHandle *param_1)

{
  FTypedElementHandle::GetData<FTestTypedElementData>(param_1,false);
  FText::FText(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 142cae600

UClass * __cdecl UTestTypedElementInterfaceA_ImplTyped::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestTypedElementInterfaceA_ImplTyped.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TypedElementFramework",L"TestTypedElementInterfaceA_ImplTyped",
               &Z_Registration_Info_UClass_UTestTypedElementInterfaceA_ImplTyped.InnerSingleton,
               StaticRegisterNativesUTestTypedElementInterfaceA_ImplTyped,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTestTypedElementInterfaceA_ImplTyped>,
               InternalVTableHelperCtorCaller<UTestTypedElementInterfaceA_ImplTyped>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestTypedElementInterfaceA_ImplTyped.InnerSingleton;
}

// SetDisplayName @ 142cbb250

bool __thiscall
UTestTypedElementInterfaceA_ImplTyped::SetDisplayName
          (UTestTypedElementInterfaceA_ImplTyped *this,FTypedElementHandle *param_1,FText *param_2,
          bool param_3)

{
  ITextData *pIVar1;
  
  FTypedElementHandle::GetData<FTestTypedElementData>(param_1,false);
  pIVar1 = (param_2->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return false;
}

// StaticRegisterNativesUTestTypedElementInterfaceA_ImplTyped @ 142cbc260

void __cdecl
UTestTypedElementInterfaceA_ImplTyped::StaticRegisterNativesUTestTypedElementInterfaceA_ImplTyped
          (void)

{
  return;
}

// _getUObject @ 142cc43c0

UObject * __thiscall
UTestTypedElementInterfaceA_ImplTyped::_getUObject(UTestTypedElementInterfaceA_ImplTyped *this)

{
  return (UObject *)&this[-1].field_0x8;
}

