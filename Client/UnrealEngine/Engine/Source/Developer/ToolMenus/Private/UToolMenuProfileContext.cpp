// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 6

// StaticClass @ 142c2db00

UClass * __cdecl UToolMenuProfileContext::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolMenuProfileContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ToolMenus",L"ToolMenuProfileContext",
               &Z_Registration_Info_UClass_UToolMenuProfileContext.InnerSingleton,
               StaticRegisterNativesUToolMenuProfileContext,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UToolMenuProfileContext>,
               InternalVTableHelperCtorCaller<UToolMenuProfileContext>,local_res8,
               UToolMenuContextBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolMenuProfileContext.InnerSingleton;
}

// UToolMenuProfileContext @ 142c3b010

UToolMenuProfileContext * __thiscall
UToolMenuProfileContext::UToolMenuProfileContext
          (UToolMenuProfileContext *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UToolMenuProfileContext__6B_;
  (this->ActiveProfiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveProfiles).ArrayNum = 0;
  (this->ActiveProfiles).ArrayMax = 0;
  return this;
}

// UToolMenuProfileContext @ 142c3b050

UToolMenuProfileContext * __thiscall
UToolMenuProfileContext::UToolMenuProfileContext
          (UToolMenuProfileContext *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UToolMenuProfileContext__6B_;
  (this->ActiveProfiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveProfiles).ArrayNum = 0;
  (this->ActiveProfiles).ArrayMax = 0;
  return this;
}

// ~UToolMenuProfileContext @ 142c3c9e0

void __thiscall UToolMenuProfileContext::~UToolMenuProfileContext(UToolMenuProfileContext *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UToolMenuProfileContext__6B_;
  pFVar1 = (this->ActiveProfiles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UToolMenuContextBase__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 142c5f6a0

UClass * __cdecl UToolMenuProfileContext::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolMenuProfileContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ToolMenus",L"ToolMenuProfileContext",
               &Z_Registration_Info_UClass_UToolMenuProfileContext.InnerSingleton,
               StaticRegisterNativesUToolMenuProfileContext,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UToolMenuProfileContext>,
               InternalVTableHelperCtorCaller<UToolMenuProfileContext>,local_res8,
               UToolMenuContextBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolMenuProfileContext.InnerSingleton;
}

// StaticRegisterNativesUToolMenuProfileContext @ 142c70f80

void __cdecl UToolMenuProfileContext::StaticRegisterNativesUToolMenuProfileContext(void)

{
  return;
}

