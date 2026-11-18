// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 7

// StaticClass @ 1441c3cb0

UClass * __cdecl UEscalationManagerConfig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEscalationManagerConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NetCore",L"EscalationManagerConfig",
               &Z_Registration_Info_UClass_UEscalationManagerConfig.InnerSingleton,
               StaticRegisterNativesUEscalationManagerConfig,0x98,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UEscalationManagerConfig>,
               InternalVTableHelperCtorCaller<UEscalationManagerConfig>,local_res8,
               UStatePerObjectConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEscalationManagerConfig.InnerSingleton;
}

// UEscalationManagerConfig @ 1441d2ab0

UEscalationManagerConfig * __thiscall
UEscalationManagerConfig::UEscalationManagerConfig
          (UEscalationManagerConfig *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEscalationManagerConfig__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->EscalationSeverity).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EscalationSeverity).ArrayNum = 0;
  (this->EscalationSeverity).ArrayMax = 0;
  (this->EscalationSeverityState).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EscalationSeverityState).ArrayNum = 0;
  (this->EscalationSeverityState).ArrayMax = 0;
  return this;
}

// UEscalationManagerConfig @ 1441d2b20

UEscalationManagerConfig * __thiscall
UEscalationManagerConfig::UEscalationManagerConfig
          (UEscalationManagerConfig *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UEscalationManagerConfig__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->EscalationSeverity).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EscalationSeverity).ArrayNum = 0;
  (this->EscalationSeverity).ArrayMax = 0;
  (this->EscalationSeverityState).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EscalationSeverityState).ArrayNum = 0;
  (this->EscalationSeverityState).ArrayMax = 0;
  return this;
}

// ~UEscalationManagerConfig @ 1441d4410

void __thiscall UEscalationManagerConfig::~UEscalationManagerConfig(UEscalationManagerConfig *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UEscalationManagerConfig__6B_;
  DestructItems<TStructOnScope<FEscalationState>,int>
            ((TStructOnScope<FEscalationState> *)
             (this->EscalationSeverityState).AllocatorInstance.Data,
             (this->EscalationSeverityState).ArrayNum);
  pFVar1 = (this->EscalationSeverityState).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->EscalationSeverity).AllocatorInstance.Data,
             (this->EscalationSeverity).ArrayNum);
  pFVar1 = (this->EscalationSeverity).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UStatePerObjectConfig__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1441dcd20

UClass * __cdecl UEscalationManagerConfig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEscalationManagerConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NetCore",L"EscalationManagerConfig",
               &Z_Registration_Info_UClass_UEscalationManagerConfig.InnerSingleton,
               StaticRegisterNativesUEscalationManagerConfig,0x98,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UEscalationManagerConfig>,
               InternalVTableHelperCtorCaller<UEscalationManagerConfig>,local_res8,
               UStatePerObjectConfig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEscalationManagerConfig.InnerSingleton;
}

// LoadStateConfig @ 1441e1810

void __thiscall UEscalationManagerConfig::LoadStateConfig(UEscalationManagerConfig *this)

{
  UStatePerObjectConfig::RegisterStateConfig
            ((UStatePerObjectConfig *)this,&this->EscalationSeverity,
             (TArray<TStructOnScope<FStateStruct>,TSizedDefaultAllocator<32>_> *)
             &this->EscalationSeverityState);
  return;
}

// StaticRegisterNativesUEscalationManagerConfig @ 1441ec560

void __cdecl UEscalationManagerConfig::StaticRegisterNativesUEscalationManagerConfig(void)

{
  return;
}

