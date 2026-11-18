// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 6

// StaticClass @ 142c89070

UClass * __cdecl UTestTypedElementInterfaceB::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UTestTypedElementInterfaceB.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TypedElementFramework",L"TestTypedElementInterfaceB",
               &Z_Registration_Info_UClass_UTestTypedElementInterfaceB.InnerSingleton,
               StaticRegisterNativesUTestTypedElementInterfaceB,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UTestTypedElementInterfaceB>,
               InternalVTableHelperCtorCaller<UTestTypedElementInterfaceB>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestTypedElementInterfaceB.InnerSingleton;
}

// UTestTypedElementInterfaceB @ 142c98c00

UTestTypedElementInterfaceB * __thiscall
UTestTypedElementInterfaceB::UTestTypedElementInterfaceB
          (UTestTypedElementInterfaceB *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UTestTypedElementInterfaceB__6B_;
  return this;
}

// UTestTypedElementInterfaceB @ 142c98c30

UTestTypedElementInterfaceB * __thiscall
UTestTypedElementInterfaceB::UTestTypedElementInterfaceB
          (UTestTypedElementInterfaceB *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UTestTypedElementInterfaceB__6B_;
  return this;
}

// ~UTestTypedElementInterfaceB @ 142c9a930

void __thiscall
UTestTypedElementInterfaceB::~UTestTypedElementInterfaceB(UTestTypedElementInterfaceB *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 142cae760

UClass * __cdecl UTestTypedElementInterfaceB::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTestTypedElementInterfaceB.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TypedElementFramework",L"TestTypedElementInterfaceB",
               &Z_Registration_Info_UClass_UTestTypedElementInterfaceB.InnerSingleton,
               StaticRegisterNativesUTestTypedElementInterfaceB,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UTestTypedElementInterfaceB>,
               InternalVTableHelperCtorCaller<UTestTypedElementInterfaceB>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTestTypedElementInterfaceB.InnerSingleton;
}

// StaticRegisterNativesUTestTypedElementInterfaceB @ 142cbc280

void __cdecl UTestTypedElementInterfaceB::StaticRegisterNativesUTestTypedElementInterfaceB(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UTestTypedElementInterfaceB_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

