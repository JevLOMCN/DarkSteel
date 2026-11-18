// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 6

// StaticClass @ 14966b870

UClass * __cdecl UGizmoRenderMultiTarget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoRenderMultiTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoRenderMultiTarget",
               &Z_Registration_Info_UClass_UGizmoRenderMultiTarget.InnerSingleton,
               StaticRegisterNativesUGizmoRenderMultiTarget,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoRenderMultiTarget>,
               InternalVTableHelperCtorCaller<UGizmoRenderMultiTarget>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoRenderMultiTarget.InnerSingleton;
}

// UGizmoRenderMultiTarget @ 1496863b0

UGizmoRenderMultiTarget * __thiscall
UGizmoRenderMultiTarget::UGizmoRenderMultiTarget
          (UGizmoRenderMultiTarget *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UGizmoRenderMultiTarget__6B_;
  return this;
}

// UGizmoRenderMultiTarget @ 1496863e0

UGizmoRenderMultiTarget * __thiscall
UGizmoRenderMultiTarget::UGizmoRenderMultiTarget
          (UGizmoRenderMultiTarget *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UGizmoRenderMultiTarget__6B_;
  return this;
}

// ~UGizmoRenderMultiTarget @ 14968a160

void __thiscall UGizmoRenderMultiTarget::~UGizmoRenderMultiTarget(UGizmoRenderMultiTarget *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1496a6090

UClass * __cdecl UGizmoRenderMultiTarget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoRenderMultiTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoRenderMultiTarget",
               &Z_Registration_Info_UClass_UGizmoRenderMultiTarget.InnerSingleton,
               StaticRegisterNativesUGizmoRenderMultiTarget,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoRenderMultiTarget>,
               InternalVTableHelperCtorCaller<UGizmoRenderMultiTarget>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoRenderMultiTarget.InnerSingleton;
}

// StaticRegisterNativesUGizmoRenderMultiTarget @ 1496c2ad0

void __cdecl UGizmoRenderMultiTarget::StaticRegisterNativesUGizmoRenderMultiTarget(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UGizmoRenderMultiTarget_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

