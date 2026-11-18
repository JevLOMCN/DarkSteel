// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 6

// StaticClass @ 14df038e0

UClass * __cdecl URetargetOpStack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URetargetOpStack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"RetargetOpStack",
               &Z_Registration_Info_UClass_URetargetOpStack.InnerSingleton,
               StaticRegisterNativesURetargetOpStack,0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<URetargetOpStack>,
               InternalVTableHelperCtorCaller<URetargetOpStack>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URetargetOpStack.InnerSingleton;
}

// URetargetOpStack @ 14df1ae40

URetargetOpStack * __thiscall
URetargetOpStack::URetargetOpStack(URetargetOpStack *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7URetargetOpStack__6B_;
  (this->RetargetOps_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RetargetOps_DEPRECATED).ArrayNum = 0;
  (this->RetargetOps_DEPRECATED).ArrayMax = 0;
  return this;
}

// URetargetOpStack @ 14df1ae80

URetargetOpStack * __thiscall
URetargetOpStack::URetargetOpStack(URetargetOpStack *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7URetargetOpStack__6B_;
  (this->RetargetOps_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RetargetOps_DEPRECATED).ArrayNum = 0;
  (this->RetargetOps_DEPRECATED).ArrayMax = 0;
  return this;
}

// ~URetargetOpStack @ 14df1ca00

void __thiscall URetargetOpStack::~URetargetOpStack(URetargetOpStack *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7URetargetOpStack__6B_;
  pFVar1 = (this->RetargetOps_DEPRECATED).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14df3e0f0

UClass * __cdecl URetargetOpStack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URetargetOpStack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/IKRig",L"RetargetOpStack",
               &Z_Registration_Info_UClass_URetargetOpStack.InnerSingleton,
               StaticRegisterNativesURetargetOpStack,0x38,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<URetargetOpStack>,
               InternalVTableHelperCtorCaller<URetargetOpStack>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URetargetOpStack.InnerSingleton;
}

// StaticRegisterNativesURetargetOpStack @ 14df5a390

void __cdecl URetargetOpStack::StaticRegisterNativesURetargetOpStack(void)

{
  return;
}

