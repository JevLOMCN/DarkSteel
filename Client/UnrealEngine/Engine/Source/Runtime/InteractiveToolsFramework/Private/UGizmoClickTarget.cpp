// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 6

// StaticClass @ 149673270

UClass * __cdecl UGizmoClickTarget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoClickTarget.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoClickTarget",
               &Z_Registration_Info_UClass_UGizmoClickTarget.InnerSingleton,
               StaticRegisterNativesUGizmoClickTarget,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoClickTarget>,
               InternalVTableHelperCtorCaller<UGizmoClickTarget>,aFStackX_8,UInterface::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoClickTarget.InnerSingleton;
}

// UGizmoClickTarget @ 1496841f0

UGizmoClickTarget * __thiscall
UGizmoClickTarget::UGizmoClickTarget(UGizmoClickTarget *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UGizmoClickTarget__6B_;
  return this;
}

// UGizmoClickTarget @ 149684220

UGizmoClickTarget * __thiscall
UGizmoClickTarget::UGizmoClickTarget(UGizmoClickTarget *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UGizmoClickTarget__6B_;
  return this;
}

// ~UGizmoClickTarget @ 1496898b0

void __thiscall UGizmoClickTarget::~UGizmoClickTarget(UGizmoClickTarget *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1496a4b50

UClass * __cdecl UGizmoClickTarget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoClickTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoClickTarget",
               &Z_Registration_Info_UClass_UGizmoClickTarget.InnerSingleton,
               StaticRegisterNativesUGizmoClickTarget,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoClickTarget>,
               InternalVTableHelperCtorCaller<UGizmoClickTarget>,local_res8,UInterface::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoClickTarget.InnerSingleton;
}

// StaticRegisterNativesUGizmoClickTarget @ 1496c28a0

void __cdecl UGizmoClickTarget::StaticRegisterNativesUGizmoClickTarget(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UGizmoClickTarget_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

