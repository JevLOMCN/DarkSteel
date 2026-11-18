// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 6

// StaticClass @ 14a8949d0

UClass * __cdecl UPoseSearchTrajectoryPredictorInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchTrajectoryPredictorInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchTrajectoryPredictorInterface",
               &Z_Registration_Info_UClass_UPoseSearchTrajectoryPredictorInterface.InnerSingleton,
               StaticRegisterNativesUPoseSearchTrajectoryPredictorInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPoseSearchTrajectoryPredictorInterface>,
               InternalVTableHelperCtorCaller<UPoseSearchTrajectoryPredictorInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchTrajectoryPredictorInterface.InnerSingleton;
}

// UPoseSearchTrajectoryPredictorInterface @ 14a8ad160

UPoseSearchTrajectoryPredictorInterface * __thiscall
UPoseSearchTrajectoryPredictorInterface::UPoseSearchTrajectoryPredictorInterface
          (UPoseSearchTrajectoryPredictorInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UPoseSearchTrajectoryPredictorInterface__6B_;
  return this;
}

// UPoseSearchTrajectoryPredictorInterface @ 14a8ad190

UPoseSearchTrajectoryPredictorInterface * __thiscall
UPoseSearchTrajectoryPredictorInterface::UPoseSearchTrajectoryPredictorInterface
          (UPoseSearchTrajectoryPredictorInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UPoseSearchTrajectoryPredictorInterface__6B_;
  return this;
}

// ~UPoseSearchTrajectoryPredictorInterface @ 14a8ae190

void __thiscall
UPoseSearchTrajectoryPredictorInterface::~UPoseSearchTrajectoryPredictorInterface
          (UPoseSearchTrajectoryPredictorInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14a8bd2c0

UClass * __cdecl UPoseSearchTrajectoryPredictorInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPoseSearchTrajectoryPredictorInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PoseSearch",L"PoseSearchTrajectoryPredictorInterface",
               &Z_Registration_Info_UClass_UPoseSearchTrajectoryPredictorInterface.InnerSingleton,
               StaticRegisterNativesUPoseSearchTrajectoryPredictorInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPoseSearchTrajectoryPredictorInterface>,
               InternalVTableHelperCtorCaller<UPoseSearchTrajectoryPredictorInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPoseSearchTrajectoryPredictorInterface.InnerSingleton;
}

// StaticRegisterNativesUPoseSearchTrajectoryPredictorInterface @ 14a8ce410

void __cdecl
UPoseSearchTrajectoryPredictorInterface::
StaticRegisterNativesUPoseSearchTrajectoryPredictorInterface(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UPoseSearchTrajectoryPredictorInterface_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

