// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 14741e7e0

UClass * __cdecl UAnimationDataController::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UAnimationDataController.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimationDataController",
               &Z_Registration_Info_UClass_UAnimationDataController.InnerSingleton,
               StaticRegisterNativesUAnimationDataController,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimationDataController>,
               InternalVTableHelperCtorCaller<UAnimationDataController>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimationDataController.InnerSingleton;
}

// UAnimationDataController @ 147435820

UAnimationDataController * __thiscall
UAnimationDataController::UAnimationDataController
          (UAnimationDataController *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UAnimationDataController__6B_;
  return this;
}

// UAnimationDataController @ 147435850

UAnimationDataController * __thiscall
UAnimationDataController::UAnimationDataController
          (UAnimationDataController *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UAnimationDataController__6B_;
  return this;
}

// ~UAnimationDataController @ 147436f20

void __thiscall UAnimationDataController::~UAnimationDataController(UAnimationDataController *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 147462630

UClass * __cdecl UAnimationDataController::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimationDataController.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimationDataController",
               &Z_Registration_Info_UClass_UAnimationDataController.InnerSingleton,
               StaticRegisterNativesUAnimationDataController,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimationDataController>,
               InternalVTableHelperCtorCaller<UAnimationDataController>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimationDataController.InnerSingleton;
}

// StaticRegisterNativesUAnimationDataController @ 14747b350

void __cdecl UAnimationDataController::StaticRegisterNativesUAnimationDataController(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x29;
  local_18.DataPtr = Z_Construct_UClass_UAnimationDataController_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

