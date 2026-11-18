// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 6

// StaticClass @ 14966bcf0

UClass * __cdecl UGizmoStateTarget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoStateTarget.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoStateTarget",
               &Z_Registration_Info_UClass_UGizmoStateTarget.InnerSingleton,
               StaticRegisterNativesUGizmoStateTarget,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoStateTarget>,
               InternalVTableHelperCtorCaller<UGizmoStateTarget>,aFStackX_8,UInterface::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoStateTarget.InnerSingleton;
}

// UGizmoStateTarget @ 1496865f0

UGizmoStateTarget * __thiscall
UGizmoStateTarget::UGizmoStateTarget(UGizmoStateTarget *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UGizmoStateTarget__6B_;
  return this;
}

// UGizmoStateTarget @ 149686620

UGizmoStateTarget * __thiscall
UGizmoStateTarget::UGizmoStateTarget(UGizmoStateTarget *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UGizmoStateTarget__6B_;
  return this;
}

// ~UGizmoStateTarget @ 14968a210

void __thiscall UGizmoStateTarget::~UGizmoStateTarget(UGizmoStateTarget *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1496a6390

UClass * __cdecl UGizmoStateTarget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGizmoStateTarget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InteractiveToolsFramework",L"GizmoStateTarget",
               &Z_Registration_Info_UClass_UGizmoStateTarget.InnerSingleton,
               StaticRegisterNativesUGizmoStateTarget,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UGizmoStateTarget>,
               InternalVTableHelperCtorCaller<UGizmoStateTarget>,local_res8,UInterface::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGizmoStateTarget.InnerSingleton;
}

// StaticRegisterNativesUGizmoStateTarget @ 1496c2b40

void __cdecl UGizmoStateTarget::StaticRegisterNativesUGizmoStateTarget(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UGizmoStateTarget_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

