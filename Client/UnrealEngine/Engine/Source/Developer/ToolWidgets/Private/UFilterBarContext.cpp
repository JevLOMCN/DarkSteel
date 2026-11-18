// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 6

// StaticClass @ 142d51c80

UClass * __cdecl UFilterBarContext::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFilterBarContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ToolWidgets",L"FilterBarContext",
               &Z_Registration_Info_UClass_UFilterBarContext.InnerSingleton,
               StaticRegisterNativesUFilterBarContext,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UFilterBarContext>,
               InternalVTableHelperCtorCaller<UFilterBarContext>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFilterBarContext.InnerSingleton;
}

// UFilterBarContext @ 142d63e50

UFilterBarContext * __thiscall
UFilterBarContext::UFilterBarContext(UFilterBarContext *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UFilterBarContext__6B_;
  *(undefined8 *)&this->PopulateFilterMenu = 0;
  *(undefined8 *)&(this->PopulateFilterMenu).field_0x8 = 0;
  *(undefined4 *)&(this->PopulateFilterMenu).field_0x10 = 0;
  *(undefined8 *)&this->OnExtendAddFilterMenu = 0;
  *(undefined8 *)&(this->OnExtendAddFilterMenu).field_0x8 = 0;
  *(undefined4 *)&(this->OnExtendAddFilterMenu).field_0x10 = 0;
  return this;
}

// UFilterBarContext @ 142d63e90

UFilterBarContext * __thiscall
UFilterBarContext::UFilterBarContext(UFilterBarContext *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UFilterBarContext__6B_;
  *(undefined8 *)&this->PopulateFilterMenu = 0;
  *(undefined8 *)&(this->PopulateFilterMenu).field_0x8 = 0;
  *(undefined4 *)&(this->PopulateFilterMenu).field_0x10 = 0;
  *(undefined8 *)&this->OnExtendAddFilterMenu = 0;
  *(undefined8 *)&(this->OnExtendAddFilterMenu).field_0x8 = 0;
  *(undefined4 *)&(this->OnExtendAddFilterMenu).field_0x10 = 0;
  return this;
}

// ~UFilterBarContext @ 142d67a80

void __thiscall UFilterBarContext::~UFilterBarContext(UFilterBarContext *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UFilterBarContext__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnExtendAddFilterMenu);
  pvVar1 = *(void **)&(this->OnExtendAddFilterMenu).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnExtendAddFilterMenu);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->PopulateFilterMenu);
  pvVar1 = *(void **)&(this->PopulateFilterMenu).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->PopulateFilterMenu);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 142dafe10

UClass * __cdecl UFilterBarContext::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFilterBarContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ToolWidgets",L"FilterBarContext",
               &Z_Registration_Info_UClass_UFilterBarContext.InnerSingleton,
               StaticRegisterNativesUFilterBarContext,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UFilterBarContext>,
               InternalVTableHelperCtorCaller<UFilterBarContext>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFilterBarContext.InnerSingleton;
}

// StaticRegisterNativesUFilterBarContext @ 142dda210

void __cdecl UFilterBarContext::StaticRegisterNativesUFilterBarContext(void)

{
  return;
}

