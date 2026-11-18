// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// StaticClass @ 14d536e30

UClass * __cdecl UCameraRigInstanceFunctions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraRigInstanceFunctions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraRigInstanceFunctions",
               &Z_Registration_Info_UClass_UCameraRigInstanceFunctions.InnerSingleton,
               StaticRegisterNativesUCameraRigInstanceFunctions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraRigInstanceFunctions>,
               InternalVTableHelperCtorCaller<UCameraRigInstanceFunctions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraRigInstanceFunctions.InnerSingleton;
}

// UCameraRigInstanceFunctions @ 14d543c00

UCameraRigInstanceFunctions * __thiscall
UCameraRigInstanceFunctions::UCameraRigInstanceFunctions
          (UCameraRigInstanceFunctions *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UCameraRigInstanceFunctions__6B_;
  return this;
}

// UCameraRigInstanceFunctions @ 14d543c30

UCameraRigInstanceFunctions * __thiscall
UCameraRigInstanceFunctions::UCameraRigInstanceFunctions
          (UCameraRigInstanceFunctions *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UCameraRigInstanceFunctions__6B_;
  return this;
}

// ~UCameraRigInstanceFunctions @ 14d544c30

void __thiscall
UCameraRigInstanceFunctions::~UCameraRigInstanceFunctions(UCameraRigInstanceFunctions *this)

{
  *(undefined ***)this = &___7UCameraRigInstanceFunctions__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetPrivateStaticClass @ 14d558750

UClass * __cdecl UCameraRigInstanceFunctions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraRigInstanceFunctions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"CameraRigInstanceFunctions",
               &Z_Registration_Info_UClass_UCameraRigInstanceFunctions.InnerSingleton,
               StaticRegisterNativesUCameraRigInstanceFunctions,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UCameraRigInstanceFunctions>,
               InternalVTableHelperCtorCaller<UCameraRigInstanceFunctions>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraRigInstanceFunctions.InnerSingleton;
}

// StaticRegisterNativesUCameraRigInstanceFunctions @ 14d5685c0

void __cdecl UCameraRigInstanceFunctions::StaticRegisterNativesUCameraRigInstanceFunctions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UCameraRigInstanceFunctions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execIsValid @ 14d56ade0

void __cdecl
UCameraRigInstanceFunctions::execIsValid(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10;
  undefined1 local_res14;
  
  local_res10 = -1;
  local_res14 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = local_res10 != -1;
  return;
}

