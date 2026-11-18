// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 6

// StaticClass @ 14966bf00

UClass * __cdecl UGizmoFloatParameterSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoFloatParameterSource.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoFloatParameterSource",
               &Z_Registration_Info_UClass_UGizmoFloatParameterSource.InnerSingleton,
               StaticRegisterNativesUGizmoFloatParameterSource,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoFloatParameterSource>,
               InternalVTableHelperCtorCaller<UGizmoFloatParameterSource>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoFloatParameterSource.InnerSingleton;
}

// UGizmoFloatParameterSource @ 149685570

UGizmoFloatParameterSource * __thiscall
UGizmoFloatParameterSource::UGizmoFloatParameterSource
          (UGizmoFloatParameterSource *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UGizmoFloatParameterSource__6B_;
  return this;
}

// UGizmoFloatParameterSource @ 1496855a0

UGizmoFloatParameterSource * __thiscall
UGizmoFloatParameterSource::UGizmoFloatParameterSource
          (UGizmoFloatParameterSource *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UGizmoFloatParameterSource__6B_;
  return this;
}

// ~UGizmoFloatParameterSource @ 149689d20

void __thiscall
UGizmoFloatParameterSource::~UGizmoFloatParameterSource(UGizmoFloatParameterSource *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1496a5950

UClass * __cdecl UGizmoFloatParameterSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoFloatParameterSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoFloatParameterSource",
               &Z_Registration_Info_UClass_UGizmoFloatParameterSource.InnerSingleton,
               StaticRegisterNativesUGizmoFloatParameterSource,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoFloatParameterSource>,
               InternalVTableHelperCtorCaller<UGizmoFloatParameterSource>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoFloatParameterSource.InnerSingleton;
}

// StaticRegisterNativesUGizmoFloatParameterSource @ 1496c2a00

void __cdecl UGizmoFloatParameterSource::StaticRegisterNativesUGizmoFloatParameterSource(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UGizmoFloatParameterSource_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

