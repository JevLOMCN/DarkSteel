// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 1476769b0

UClass * __cdecl UCameraLensEffectInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraLensEffectInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CameraLensEffectInterface",
               &Z_Registration_Info_UClass_UCameraLensEffectInterface.InnerSingleton,
               StaticRegisterNativesUCameraLensEffectInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UCameraLensEffectInterface>,
               InternalVTableHelperCtorCaller<UCameraLensEffectInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraLensEffectInterface.InnerSingleton;
}

// UCameraLensEffectInterface @ 147688d10

UCameraLensEffectInterface * __thiscall
UCameraLensEffectInterface::UCameraLensEffectInterface
          (UCameraLensEffectInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UCameraLensEffectInterface__6B_;
  return this;
}

// UCameraLensEffectInterface @ 147688d40

UCameraLensEffectInterface * __thiscall
UCameraLensEffectInterface::UCameraLensEffectInterface
          (UCameraLensEffectInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UCameraLensEffectInterface__6B_;
  return this;
}

// ~UCameraLensEffectInterface @ 14768aaa0

void __thiscall
UCameraLensEffectInterface::~UCameraLensEffectInterface(UCameraLensEffectInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1476b4470

UClass * __cdecl UCameraLensEffectInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraLensEffectInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CameraLensEffectInterface",
               &Z_Registration_Info_UClass_UCameraLensEffectInterface.InnerSingleton,
               StaticRegisterNativesUCameraLensEffectInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UCameraLensEffectInterface>,
               InternalVTableHelperCtorCaller<UCameraLensEffectInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraLensEffectInterface.InnerSingleton;
}

// StaticRegisterNativesUCameraLensEffectInterface @ 1476ca380

void __cdecl UCameraLensEffectInterface::StaticRegisterNativesUCameraLensEffectInterface(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UCameraLensEffectInterface_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

