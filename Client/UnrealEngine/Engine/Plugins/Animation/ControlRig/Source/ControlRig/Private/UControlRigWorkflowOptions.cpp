// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticClass @ 14a4c0aa0

UClass * __cdecl UControlRigWorkflowOptions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRigWorkflowOptions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigWorkflowOptions",
               &Z_Registration_Info_UClass_UControlRigWorkflowOptions.InnerSingleton,
               StaticRegisterNativesUControlRigWorkflowOptions,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UControlRigWorkflowOptions>,
               InternalVTableHelperCtorCaller<UControlRigWorkflowOptions>,local_res8,
               URigVMUserWorkflowOptions::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRigWorkflowOptions.InnerSingleton;
}

// UControlRigWorkflowOptions @ 14a517cf0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UControlRigWorkflowOptions * __thiscall
UControlRigWorkflowOptions::UControlRigWorkflowOptions
          (UControlRigWorkflowOptions *this,FVTableHelper *param_1)

{
  URigVMUserWorkflowOptions::URigVMUserWorkflowOptions((URigVMUserWorkflowOptions *)this,param_1);
  this->_padding_ = (longlong)&___7UControlRigWorkflowOptions__6B_;
  (this->Hierarchy).field0_0x0.DebugPtr = (URigHierarchy *)0x0;
  (this->Selection).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Selection).ArrayNum = 0;
  (this->Selection).ArrayMax = 0;
  return this;
}

// UControlRigWorkflowOptions @ 14a517d30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UControlRigWorkflowOptions * __thiscall
UControlRigWorkflowOptions::UControlRigWorkflowOptions
          (UControlRigWorkflowOptions *this,FObjectInitializer *param_1)

{
  URigVMUserWorkflowOptions::URigVMUserWorkflowOptions((URigVMUserWorkflowOptions *)this,param_1);
  this->_padding_ = (longlong)&___7UControlRigWorkflowOptions__6B_;
  (this->Hierarchy).field0_0x0.DebugPtr = (URigHierarchy *)0x0;
  (this->Selection).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Selection).ArrayNum = 0;
  (this->Selection).ArrayMax = 0;
  return this;
}

// ~UControlRigWorkflowOptions @ 14a518d60

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRigWorkflowOptions::~UControlRigWorkflowOptions(UControlRigWorkflowOptions *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UControlRigWorkflowOptions__6B_;
  pFVar1 = (this->Selection).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  URigVMUserWorkflowOptions::~URigVMUserWorkflowOptions((URigVMUserWorkflowOptions *)this);
  return;
}

// EnsureAtLeastOneRigElementSelected @ 14a523570

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UControlRigWorkflowOptions::EnsureAtLeastOneRigElementSelected(UControlRigWorkflowOptions *this)

{
  FString local_18;
  
  if ((this->Selection).ArrayNum == 0) {
    ::FString::PrintfImpl(&local_18,L"Please select at least one element in the hierarchy!");
    URigVMUserWorkflowOptions::Report((URigVMUserWorkflowOptions *)this,Error,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// GetPrivateStaticClass @ 14a531510

UClass * __cdecl UControlRigWorkflowOptions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRigWorkflowOptions.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigWorkflowOptions",
               &Z_Registration_Info_UClass_UControlRigWorkflowOptions.InnerSingleton,
               StaticRegisterNativesUControlRigWorkflowOptions,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UControlRigWorkflowOptions>,
               InternalVTableHelperCtorCaller<UControlRigWorkflowOptions>,local_res8,
               URigVMUserWorkflowOptions::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRigWorkflowOptions.InnerSingleton;
}

// StaticRegisterNativesUControlRigWorkflowOptions @ 14a5a3050

void __cdecl UControlRigWorkflowOptions::StaticRegisterNativesUControlRigWorkflowOptions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UControlRigWorkflowOptions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execEnsureAtLeastOneRigElementSelected @ 14a5af020

void __cdecl
UControlRigWorkflowOptions::execEnsureAtLeastOneRigElementSelected
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(int *)&param_1[4].field_0x20 == 0) {
    ::FString::PrintfImpl(&local_18,L"Please select at least one element in the hierarchy!");
    URigVMUserWorkflowOptions::Report((URigVMUserWorkflowOptions *)param_1,Error,&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    *(undefined1 *)param_3 = 0;
    return;
  }
  *(undefined1 *)param_3 = 1;
  return;
}

