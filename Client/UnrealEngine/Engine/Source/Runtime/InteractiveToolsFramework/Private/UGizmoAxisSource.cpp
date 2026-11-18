// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 6

// StaticClass @ 149673070

UClass * __cdecl UGizmoAxisSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoAxisSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoAxisSource",
               &Z_Registration_Info_UClass_UGizmoAxisSource.InnerSingleton,
               StaticRegisterNativesUGizmoAxisSource,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoAxisSource>,
               InternalVTableHelperCtorCaller<UGizmoAxisSource>,local_res8,UInterface::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoAxisSource.InnerSingleton;
}

// UGizmoAxisSource @ 149683d70

UGizmoAxisSource * __thiscall
UGizmoAxisSource::UGizmoAxisSource(UGizmoAxisSource *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UGizmoAxisSource__6B_;
  return this;
}

// UGizmoAxisSource @ 149683da0

UGizmoAxisSource * __thiscall
UGizmoAxisSource::UGizmoAxisSource(UGizmoAxisSource *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UGizmoAxisSource__6B_;
  return this;
}

// ~UGizmoAxisSource @ 149689740

void __thiscall UGizmoAxisSource::~UGizmoAxisSource(UGizmoAxisSource *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1496a47b0

UClass * __cdecl UGizmoAxisSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoAxisSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoAxisSource",
               &Z_Registration_Info_UClass_UGizmoAxisSource.InnerSingleton,
               StaticRegisterNativesUGizmoAxisSource,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoAxisSource>,
               InternalVTableHelperCtorCaller<UGizmoAxisSource>,local_res8,UInterface::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoAxisSource.InnerSingleton;
}

// StaticRegisterNativesUGizmoAxisSource @ 1496c27f0

void __cdecl UGizmoAxisSource::StaticRegisterNativesUGizmoAxisSource(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UGizmoAxisSource_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

