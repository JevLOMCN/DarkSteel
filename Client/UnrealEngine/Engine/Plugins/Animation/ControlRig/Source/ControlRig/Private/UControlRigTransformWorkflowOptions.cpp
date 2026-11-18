// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticClass @ 14a4c43f0

UClass * __cdecl UControlRigTransformWorkflowOptions::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRigTransformWorkflowOptions.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigTransformWorkflowOptions",
               &Z_Registration_Info_UClass_UControlRigTransformWorkflowOptions.InnerSingleton,
               StaticRegisterNativesUControlRigTransformWorkflowOptions,0xd0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UControlRigTransformWorkflowOptions>,
               InternalVTableHelperCtorCaller<UControlRigTransformWorkflowOptions>,local_res8,
               UControlRigWorkflowOptions::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRigTransformWorkflowOptions.InnerSingleton;
}

// UControlRigTransformWorkflowOptions @ 14a517c50

UControlRigTransformWorkflowOptions * __thiscall
UControlRigTransformWorkflowOptions::UControlRigTransformWorkflowOptions
          (UControlRigTransformWorkflowOptions *this,FVTableHelper *param_1)

{
  URigVMUserWorkflowOptions::URigVMUserWorkflowOptions((URigVMUserWorkflowOptions *)this,param_1);
  (this->TransformType).Value = '\x03';
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UControlRigTransformWorkflowOptions__6B_;
  return this;
}

// UControlRigTransformWorkflowOptions @ 14a517ca0

UControlRigTransformWorkflowOptions * __thiscall
UControlRigTransformWorkflowOptions::UControlRigTransformWorkflowOptions
          (UControlRigTransformWorkflowOptions *this,FObjectInitializer *param_1)

{
  URigVMUserWorkflowOptions::URigVMUserWorkflowOptions((URigVMUserWorkflowOptions *)this,param_1);
  (this->TransformType).Value = '\x03';
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UControlRigTransformWorkflowOptions__6B_;
  return this;
}

// ~UControlRigTransformWorkflowOptions @ 14a518d20

void __thiscall
UControlRigTransformWorkflowOptions::~UControlRigTransformWorkflowOptions
          (UControlRigTransformWorkflowOptions *this)

{
  this->_padding_ = (longlong)&___7UControlRigWorkflowOptions__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  URigVMUserWorkflowOptions::~URigVMUserWorkflowOptions((URigVMUserWorkflowOptions *)this);
  return;
}

// GetPrivateStaticClass @ 14a531450

UClass * __cdecl UControlRigTransformWorkflowOptions::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRigTransformWorkflowOptions.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigTransformWorkflowOptions",
               &Z_Registration_Info_UClass_UControlRigTransformWorkflowOptions.InnerSingleton,
               StaticRegisterNativesUControlRigTransformWorkflowOptions,0xd0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UControlRigTransformWorkflowOptions>,
               InternalVTableHelperCtorCaller<UControlRigTransformWorkflowOptions>,local_res8,
               UControlRigWorkflowOptions::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRigTransformWorkflowOptions.InnerSingleton;
}

// ProvideWorkflows @ 14a533640

TArray<FRigVMUserWorkflow,TSizedDefaultAllocator<32>_> * __thiscall
UControlRigTransformWorkflowOptions::ProvideWorkflows
          (UControlRigTransformWorkflowOptions *this,
          TArray<FRigVMUserWorkflow,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UObject *param_1)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUControlRigTransformWorkflowOptions @ 14a5a3010

void __cdecl
UControlRigTransformWorkflowOptions::StaticRegisterNativesUControlRigTransformWorkflowOptions(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UControlRigTransformWorkflowOptions_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execProvideWorkflows @ 14a5af0b0

void __cdecl
UControlRigTransformWorkflowOptions::execProvideWorkflows
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res10;
  undefined1 local_18 [16];
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (param_3 != local_18) {
    DestructItems<FRigVMUserWorkflow,int>
              (*(FRigVMUserWorkflow **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = 0;
    *(undefined8 *)((longlong)param_3 + 8) = 0;
  }
  DestructItems<FRigVMUserWorkflow,int>((FRigVMUserWorkflow *)0x0,0);
  return;
}

