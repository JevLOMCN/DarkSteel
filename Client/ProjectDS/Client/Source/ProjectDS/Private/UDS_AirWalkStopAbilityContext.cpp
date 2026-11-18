// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b402e90

UClass * __cdecl UDS_AirWalkStopAbilityContext::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AirWalkStopAbilityContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AirWalkStopAbilityContext",
               &Z_Registration_Info_UClass_UDS_AirWalkStopAbilityContext.InnerSingleton,
               StaticRegisterNativesUDS_AirWalkStopAbilityContext,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_AirWalkStopAbilityContext>,
               InternalVTableHelperCtorCaller<UDS_AirWalkStopAbilityContext>,local_res8,
               UDS_AbilityContext::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AirWalkStopAbilityContext.InnerSingleton;
}

// UDS_AirWalkStopAbilityContext @ 14b406eb0

UDS_AirWalkStopAbilityContext * __thiscall
UDS_AirWalkStopAbilityContext::UDS_AirWalkStopAbilityContext
          (UDS_AirWalkStopAbilityContext *this,FVTableHelper *param_1)

{
  UWN_AbilityContext::UWN_AbilityContext((UWN_AbilityContext *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_AirWalkStopAbilityContext__6B_;
  *(undefined8 *)&this->StopStartDelegate = 0;
  *(undefined8 *)&(this->StopStartDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->StopStartDelegate).field_0x10 = 0;
  *(undefined8 *)&this->StopFinishDelegate = 0;
  *(undefined8 *)&(this->StopFinishDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->StopFinishDelegate).field_0x10 = 0;
  return this;
}

// UDS_AirWalkStopAbilityContext @ 14b406ef0

UDS_AirWalkStopAbilityContext * __thiscall
UDS_AirWalkStopAbilityContext::UDS_AirWalkStopAbilityContext
          (UDS_AirWalkStopAbilityContext *this,FObjectInitializer *param_1)

{
  UWN_AbilityContext::UWN_AbilityContext((UWN_AbilityContext *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_AirWalkStopAbilityContext__6B_;
  *(undefined8 *)&this->StopStartDelegate = 0;
  *(undefined8 *)&(this->StopStartDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->StopStartDelegate).field_0x10 = 0;
  *(undefined8 *)&this->StopFinishDelegate = 0;
  *(undefined8 *)&(this->StopFinishDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->StopFinishDelegate).field_0x10 = 0;
  return this;
}

// ~UDS_AirWalkStopAbilityContext @ 14b407ef0

void __thiscall
UDS_AirWalkStopAbilityContext::~UDS_AirWalkStopAbilityContext(UDS_AirWalkStopAbilityContext *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_AirWalkStopAbilityContext__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->StopFinishDelegate);
  pvVar1 = *(void **)&(this->StopFinishDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->StopFinishDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->StopStartDelegate);
  pvVar1 = *(void **)&(this->StopStartDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->StopStartDelegate);
  this->_padding_ = (longlong)&___7UWN_AbilityContext__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b409fc0

UClass * __cdecl UDS_AirWalkStopAbilityContext::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AirWalkStopAbilityContext.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AirWalkStopAbilityContext",
               &Z_Registration_Info_UClass_UDS_AirWalkStopAbilityContext.InnerSingleton,
               StaticRegisterNativesUDS_AirWalkStopAbilityContext,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_AirWalkStopAbilityContext>,
               InternalVTableHelperCtorCaller<UDS_AirWalkStopAbilityContext>,local_res8,
               UDS_AbilityContext::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AirWalkStopAbilityContext.InnerSingleton;
}

// StaticRegisterNativesUDS_AirWalkStopAbilityContext @ 14b40ae50

void __cdecl UDS_AirWalkStopAbilityContext::StaticRegisterNativesUDS_AirWalkStopAbilityContext(void)

{
  return;
}

