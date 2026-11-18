// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 6

// StaticClass @ 149672f60

UClass * __cdecl UGizmoTransformSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoTransformSource.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoTransformSource",
               &Z_Registration_Info_UClass_UGizmoTransformSource.InnerSingleton,
               StaticRegisterNativesUGizmoTransformSource,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoTransformSource>,
               InternalVTableHelperCtorCaller<UGizmoTransformSource>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoTransformSource.InnerSingleton;
}

// UGizmoTransformSource @ 149686970

UGizmoTransformSource * __thiscall
UGizmoTransformSource::UGizmoTransformSource(UGizmoTransformSource *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UGizmoTransformSource__6B_;
  return this;
}

// UGizmoTransformSource @ 1496869a0

UGizmoTransformSource * __thiscall
UGizmoTransformSource::UGizmoTransformSource
          (UGizmoTransformSource *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UGizmoTransformSource__6B_;
  return this;
}

// ~UGizmoTransformSource @ 14968a300

void __thiscall UGizmoTransformSource::~UGizmoTransformSource(UGizmoTransformSource *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1496a65c0

UClass * __cdecl UGizmoTransformSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoTransformSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoTransformSource",
               &Z_Registration_Info_UClass_UGizmoTransformSource.InnerSingleton,
               StaticRegisterNativesUGizmoTransformSource,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoTransformSource>,
               InternalVTableHelperCtorCaller<UGizmoTransformSource>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoTransformSource.InnerSingleton;
}

// StaticRegisterNativesUGizmoTransformSource @ 1496c2ba0

void __cdecl UGizmoTransformSource::StaticRegisterNativesUGizmoTransformSource(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UGizmoTransformSource_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

