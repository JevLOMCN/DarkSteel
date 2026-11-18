// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 6

// StaticClass @ 14a78a4c0

UClass * __cdecl UCommonPoolableWidgetInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonPoolableWidgetInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonPoolableWidgetInterface",
               &Z_Registration_Info_UClass_UCommonPoolableWidgetInterface.InnerSingleton,
               StaticRegisterNativesUCommonPoolableWidgetInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UCommonPoolableWidgetInterface>,
               InternalVTableHelperCtorCaller<UCommonPoolableWidgetInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonPoolableWidgetInterface.InnerSingleton;
}

// UCommonPoolableWidgetInterface @ 14a7ae540

UCommonPoolableWidgetInterface * __thiscall
UCommonPoolableWidgetInterface::UCommonPoolableWidgetInterface
          (UCommonPoolableWidgetInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UCommonPoolableWidgetInterface__6B_;
  return this;
}

// UCommonPoolableWidgetInterface @ 14a7ae570

UCommonPoolableWidgetInterface * __thiscall
UCommonPoolableWidgetInterface::UCommonPoolableWidgetInterface
          (UCommonPoolableWidgetInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UCommonPoolableWidgetInterface__6B_;
  return this;
}

// ~UCommonPoolableWidgetInterface @ 14a7b3220

void __thiscall
UCommonPoolableWidgetInterface::~UCommonPoolableWidgetInterface
          (UCommonPoolableWidgetInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14a7e5ec0

UClass * __cdecl UCommonPoolableWidgetInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonPoolableWidgetInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonPoolableWidgetInterface",
               &Z_Registration_Info_UClass_UCommonPoolableWidgetInterface.InnerSingleton,
               StaticRegisterNativesUCommonPoolableWidgetInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UCommonPoolableWidgetInterface>,
               InternalVTableHelperCtorCaller<UCommonPoolableWidgetInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonPoolableWidgetInterface.InnerSingleton;
}

// StaticRegisterNativesUCommonPoolableWidgetInterface @ 14a81e740

void __cdecl
UCommonPoolableWidgetInterface::StaticRegisterNativesUCommonPoolableWidgetInterface(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UCommonPoolableWidgetInterface_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

