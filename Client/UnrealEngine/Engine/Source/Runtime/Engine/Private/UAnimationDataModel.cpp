// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147424630

UClass * __cdecl UAnimationDataModel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UAnimationDataModel.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimationDataModel",
               &Z_Registration_Info_UClass_UAnimationDataModel.InnerSingleton,
               StaticRegisterNativesUAnimationDataModel,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimationDataModel>,
               InternalVTableHelperCtorCaller<UAnimationDataModel>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimationDataModel.InnerSingleton;
}

// UAnimationDataModel @ 147435880

UAnimationDataModel * __thiscall
UAnimationDataModel::UAnimationDataModel(UAnimationDataModel *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UAnimationDataModel__6B_;
  return this;
}

// UAnimationDataModel @ 1474358b0

UAnimationDataModel * __thiscall
UAnimationDataModel::UAnimationDataModel(UAnimationDataModel *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UAnimationDataModel__6B_;
  return this;
}

// ~UAnimationDataModel @ 147436f30

void __thiscall UAnimationDataModel::~UAnimationDataModel(UAnimationDataModel *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1474626f0

UClass * __cdecl UAnimationDataModel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimationDataModel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimationDataModel",
               &Z_Registration_Info_UClass_UAnimationDataModel.InnerSingleton,
               StaticRegisterNativesUAnimationDataModel,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UAnimationDataModel>,
               InternalVTableHelperCtorCaller<UAnimationDataModel>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimationDataModel.InnerSingleton;
}

// StaticRegisterNativesUAnimationDataModel @ 14747b390

void __cdecl UAnimationDataModel::StaticRegisterNativesUAnimationDataModel(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x10;
  local_18.DataPtr = Z_Construct_UClass_UAnimationDataModel_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

