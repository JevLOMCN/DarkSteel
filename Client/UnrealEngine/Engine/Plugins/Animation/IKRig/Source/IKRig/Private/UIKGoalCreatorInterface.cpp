// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 6

// StaticClass @ 14df01e60

UClass * __cdecl UIKGoalCreatorInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UIKGoalCreatorInterface.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKGoalCreatorInterface",
               &Z_Registration_Info_UClass_UIKGoalCreatorInterface.InnerSingleton,
               StaticRegisterNativesUIKGoalCreatorInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UIKGoalCreatorInterface>,
               InternalVTableHelperCtorCaller<UIKGoalCreatorInterface>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKGoalCreatorInterface.InnerSingleton;
}

// UIKGoalCreatorInterface @ 14df18f00

UIKGoalCreatorInterface * __thiscall
UIKGoalCreatorInterface::UIKGoalCreatorInterface
          (UIKGoalCreatorInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UIKGoalCreatorInterface__6B_;
  return this;
}

// UIKGoalCreatorInterface @ 14df18f30

UIKGoalCreatorInterface * __thiscall
UIKGoalCreatorInterface::UIKGoalCreatorInterface
          (UIKGoalCreatorInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UIKGoalCreatorInterface__6B_;
  return this;
}

// ~UIKGoalCreatorInterface @ 14df1c1d0

void __thiscall UIKGoalCreatorInterface::~UIKGoalCreatorInterface(UIKGoalCreatorInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14df3bf80

UClass * __cdecl UIKGoalCreatorInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKGoalCreatorInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKGoalCreatorInterface",
               &Z_Registration_Info_UClass_UIKGoalCreatorInterface.InnerSingleton,
               StaticRegisterNativesUIKGoalCreatorInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UIKGoalCreatorInterface>,
               InternalVTableHelperCtorCaller<UIKGoalCreatorInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKGoalCreatorInterface.InnerSingleton;
}

// StaticRegisterNativesUIKGoalCreatorInterface @ 14df59bd0

void __cdecl UIKGoalCreatorInterface::StaticRegisterNativesUIKGoalCreatorInterface(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UIKGoalCreatorInterface_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

