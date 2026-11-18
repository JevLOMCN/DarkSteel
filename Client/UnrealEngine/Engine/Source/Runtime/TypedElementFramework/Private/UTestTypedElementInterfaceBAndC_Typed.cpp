// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 10

// StaticClass @ 142c826f0

UClass * __cdecl UTestTypedElementInterfaceBAndC_Typed::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestTypedElementInterfaceBAndC_Typed.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TypedElementFramework",L"TestTypedElementInterfaceBAndC_Typed",
               &Z_Registration_Info_UClass_UTestTypedElementInterfaceBAndC_Typed.InnerSingleton,
               StaticRegisterNativesUTestTypedElementInterfaceBAndC_Typed,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTestTypedElementInterfaceBAndC_Typed>,
               InternalVTableHelperCtorCaller<UTestTypedElementInterfaceBAndC_Typed>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestTypedElementInterfaceBAndC_Typed.InnerSingleton;
}

// UTestTypedElementInterfaceBAndC_Typed @ 142c98c60

UTestTypedElementInterfaceBAndC_Typed * __thiscall
UTestTypedElementInterfaceBAndC_Typed::UTestTypedElementInterfaceBAndC_Typed
          (UTestTypedElementInterfaceBAndC_Typed *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ITestTypedElementInterfaceB__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__ITestTypedElementInterfaceC__;
  return this;
}

// UTestTypedElementInterfaceBAndC_Typed @ 142c98ca0

UTestTypedElementInterfaceBAndC_Typed * __thiscall
UTestTypedElementInterfaceBAndC_Typed::UTestTypedElementInterfaceBAndC_Typed
          (UTestTypedElementInterfaceBAndC_Typed *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__ITestTypedElementInterfaceB__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__ITestTypedElementInterfaceC__;
  return this;
}

// ~UTestTypedElementInterfaceBAndC_Typed @ 142c9a940

void __thiscall
UTestTypedElementInterfaceBAndC_Typed::~UTestTypedElementInterfaceBAndC_Typed
          (UTestTypedElementInterfaceBAndC_Typed *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x30 = &___7ITestTypedElementInterfaceC__6B_;
  *(undefined ***)&this->field_0x28 = &___7ITestTypedElementInterfaceB__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetIsTested @ 142cae400

bool __thiscall
UTestTypedElementInterfaceBAndC_Typed::GetIsTested
          (UTestTypedElementInterfaceBAndC_Typed *this,FTypedElementHandle *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FTestTypedElementData *pFVar4;
  
  pFVar4 = FTypedElementHandle::GetData<FTestTypedElementData>(param_1,false);
  if (pFVar4 == (FTestTypedElementData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\TypedElementFrameworkTests.cpp"
                       ,0x41,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// GetPrivateStaticClass @ 142cae820

UClass * __cdecl UTestTypedElementInterfaceBAndC_Typed::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestTypedElementInterfaceBAndC_Typed.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TypedElementFramework",L"TestTypedElementInterfaceBAndC_Typed",
               &Z_Registration_Info_UClass_UTestTypedElementInterfaceBAndC_Typed.InnerSingleton,
               StaticRegisterNativesUTestTypedElementInterfaceBAndC_Typed,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTestTypedElementInterfaceBAndC_Typed>,
               InternalVTableHelperCtorCaller<UTestTypedElementInterfaceBAndC_Typed>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestTypedElementInterfaceBAndC_Typed.InnerSingleton;
}

// MarkAsTested @ 142cb0870

bool __thiscall
UTestTypedElementInterfaceBAndC_Typed::MarkAsTested
          (UTestTypedElementInterfaceBAndC_Typed *this,FTypedElementHandle *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FTestTypedElementData *pFVar4;
  
  pFVar4 = FTypedElementHandle::GetData<FTestTypedElementData>(param_1,false);
  if (pFVar4 == (FTestTypedElementData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Private\\TypedElementFrameworkTests.cpp"
                       ,0x34,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// StaticRegisterNativesUTestTypedElementInterfaceBAndC_Typed @ 142cbc2c0

void __cdecl
UTestTypedElementInterfaceBAndC_Typed::StaticRegisterNativesUTestTypedElementInterfaceBAndC_Typed
          (void)

{
  return;
}

// _getUObject @ 142cc43e0

UObject * __thiscall
UTestTypedElementInterfaceBAndC_Typed::_getUObject(UTestTypedElementInterfaceBAndC_Typed *this)

{
  return (UObject *)&this[-1].field_0x10;
}

// _getUObject`adjustor{8}' @ 142cc43ec

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UTestTypedElementInterfaceBAndC_Typed::_getUObject`adjustor{8}' (void)const __ptr64 */

UObject * __thiscall
UTestTypedElementInterfaceBAndC_Typed::_getUObject_adjustor_8__
          (UTestTypedElementInterfaceBAndC_Typed *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UTestTypedElementInterfaceBAndC_Typed *)&this[-1].field_0x30);
  return (UObject *)pUVar1;
}

