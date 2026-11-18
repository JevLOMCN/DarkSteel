// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 6

// StaticClass @ 14966b570

UClass * __cdecl UGizmoClickMultiTarget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoClickMultiTarget.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoClickMultiTarget",
               &Z_Registration_Info_UClass_UGizmoClickMultiTarget.InnerSingleton,
               StaticRegisterNativesUGizmoClickMultiTarget,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoClickMultiTarget>,
               InternalVTableHelperCtorCaller<UGizmoClickMultiTarget>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoClickMultiTarget.InnerSingleton;
}

// UGizmoClickMultiTarget @ 149684190

UGizmoClickMultiTarget * __thiscall
UGizmoClickMultiTarget::UGizmoClickMultiTarget(UGizmoClickMultiTarget *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UGizmoClickMultiTarget__6B_;
  return this;
}

// UGizmoClickMultiTarget @ 1496841c0

UGizmoClickMultiTarget * __thiscall
UGizmoClickMultiTarget::UGizmoClickMultiTarget
          (UGizmoClickMultiTarget *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UGizmoClickMultiTarget__6B_;
  return this;
}

// ~UGizmoClickMultiTarget @ 1496898a0

void __thiscall UGizmoClickMultiTarget::~UGizmoClickMultiTarget(UGizmoClickMultiTarget *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1496a4a90

UClass * __cdecl UGizmoClickMultiTarget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoClickMultiTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoClickMultiTarget",
               &Z_Registration_Info_UClass_UGizmoClickMultiTarget.InnerSingleton,
               StaticRegisterNativesUGizmoClickMultiTarget,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoClickMultiTarget>,
               InternalVTableHelperCtorCaller<UGizmoClickMultiTarget>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoClickMultiTarget.InnerSingleton;
}

// StaticRegisterNativesUGizmoClickMultiTarget @ 1496c2860

void __cdecl UGizmoClickMultiTarget::StaticRegisterNativesUGizmoClickMultiTarget(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 5;
  local_18.DataPtr = Z_Construct_UClass_UGizmoClickMultiTarget_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

