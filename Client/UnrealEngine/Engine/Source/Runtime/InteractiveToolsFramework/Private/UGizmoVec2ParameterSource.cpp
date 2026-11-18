// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 6

// StaticClass @ 14966c090

UClass * __cdecl UGizmoVec2ParameterSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoVec2ParameterSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoVec2ParameterSource",
               &Z_Registration_Info_UClass_UGizmoVec2ParameterSource.InnerSingleton,
               StaticRegisterNativesUGizmoVec2ParameterSource,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoVec2ParameterSource>,
               InternalVTableHelperCtorCaller<UGizmoVec2ParameterSource>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoVec2ParameterSource.InnerSingleton;
}

// UGizmoVec2ParameterSource @ 149686cb0

UGizmoVec2ParameterSource * __thiscall
UGizmoVec2ParameterSource::UGizmoVec2ParameterSource
          (UGizmoVec2ParameterSource *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UGizmoVec2ParameterSource__6B_;
  return this;
}

// UGizmoVec2ParameterSource @ 149686ce0

UGizmoVec2ParameterSource * __thiscall
UGizmoVec2ParameterSource::UGizmoVec2ParameterSource
          (UGizmoVec2ParameterSource *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UGizmoVec2ParameterSource__6B_;
  return this;
}

// ~UGizmoVec2ParameterSource @ 14968a380

void __thiscall
UGizmoVec2ParameterSource::~UGizmoVec2ParameterSource(UGizmoVec2ParameterSource *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1496a6740

UClass * __cdecl UGizmoVec2ParameterSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoVec2ParameterSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoVec2ParameterSource",
               &Z_Registration_Info_UClass_UGizmoVec2ParameterSource.InnerSingleton,
               StaticRegisterNativesUGizmoVec2ParameterSource,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoVec2ParameterSource>,
               InternalVTableHelperCtorCaller<UGizmoVec2ParameterSource>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoVec2ParameterSource.InnerSingleton;
}

// StaticRegisterNativesUGizmoVec2ParameterSource @ 1496c2bf0

void __cdecl UGizmoVec2ParameterSource::StaticRegisterNativesUGizmoVec2ParameterSource(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UGizmoVec2ParameterSource_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

