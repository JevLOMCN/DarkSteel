// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 8

// StaticClass @ 14deefbb0

UClass * __cdecl UIKRigSolverControllerBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRigSolverControllerBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRigSolverControllerBase",
               &Z_Registration_Info_UClass_UIKRigSolverControllerBase.InnerSingleton,
               StaticRegisterNativesUIKRigSolverControllerBase,0x30,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UIKRigSolverControllerBase>,
               InternalVTableHelperCtorCaller<UIKRigSolverControllerBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRigSolverControllerBase.InnerSingleton;
}

// UIKRigSolverControllerBase @ 14df1a530

UIKRigSolverControllerBase * __thiscall
UIKRigSolverControllerBase::UIKRigSolverControllerBase
          (UIKRigSolverControllerBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->SolverToControl = (FIKRigSolverBase *)0x0;
  this->_padding_ = (longlong)&___7UIKRigSolverControllerBase__6B_;
  return this;
}

// UIKRigSolverControllerBase @ 14df1a560

UIKRigSolverControllerBase * __thiscall
UIKRigSolverControllerBase::UIKRigSolverControllerBase
          (UIKRigSolverControllerBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->SolverToControl = (FIKRigSolverBase *)0x0;
  this->_padding_ = (longlong)&___7UIKRigSolverControllerBase__6B_;
  return this;
}

// ~UIKRigSolverControllerBase @ 14df1c800

void __thiscall
UIKRigSolverControllerBase::~UIKRigSolverControllerBase(UIKRigSolverControllerBase *this)

{
  this->_padding_ = (longlong)&___7UIKRigSolverControllerBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14df3d700

UClass * __cdecl UIKRigSolverControllerBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIKRigSolverControllerBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"IKRigSolverControllerBase",
               &Z_Registration_Info_UClass_UIKRigSolverControllerBase.InnerSingleton,
               StaticRegisterNativesUIKRigSolverControllerBase,0x30,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UIKRigSolverControllerBase>,
               InternalVTableHelperCtorCaller<UIKRigSolverControllerBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIKRigSolverControllerBase.InnerSingleton;
}

// StaticRegisterNativesUIKRigSolverControllerBase @ 14df5a280

void __cdecl UIKRigSolverControllerBase::StaticRegisterNativesUIKRigSolverControllerBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UIKRigSolverControllerBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetEnabled @ 14df64c80

void __cdecl
UIKRigSolverControllerBase::execGetEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = *(undefined1 *)(*(longlong *)(param_1 + 1) + 8);
  return;
}

// execSetEnabled @ 14df68020

void __cdecl
UIKRigSolverControllerBase::execSetEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)(*(longlong *)(param_1 + 1) + 8) = local_res8[0] != 0;
  return;
}

