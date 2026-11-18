// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 147a0d680

UClass * __cdecl UDataDrivenCVarEngineSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataDrivenCVarEngineSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DataDrivenCVarEngineSubsystem",
               &Z_Registration_Info_UClass_UDataDrivenCVarEngineSubsystem.InnerSingleton,
               StaticRegisterNativesUDataDrivenCVarEngineSubsystem,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDataDrivenCVarEngineSubsystem>,
               InternalVTableHelperCtorCaller<UDataDrivenCVarEngineSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataDrivenCVarEngineSubsystem.InnerSingleton;
}

// UDataDrivenCVarEngineSubsystem @ 147a282a0

UDataDrivenCVarEngineSubsystem * __thiscall
UDataDrivenCVarEngineSubsystem::UDataDrivenCVarEngineSubsystem
          (UDataDrivenCVarEngineSubsystem *this,FVTableHelper *param_1)

{
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this,param_1);
  this->_padding_ = (longlong)&___7UDataDrivenCVarEngineSubsystem__6B_;
  *(undefined8 *)&this->OnDataDrivenCVarDelegate = 0;
  *(undefined8 *)&(this->OnDataDrivenCVarDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnDataDrivenCVarDelegate).field_0x10 = 0;
  return this;
}

// ~UDataDrivenCVarEngineSubsystem @ 147a2a900

void __thiscall
UDataDrivenCVarEngineSubsystem::~UDataDrivenCVarEngineSubsystem
          (UDataDrivenCVarEngineSubsystem *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDataDrivenCVarEngineSubsystem__6B_;
  pvVar1 = *(void **)&(this->OnDataDrivenCVarDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDataDrivenCVarDelegate);
  UEngineSubsystem::~UEngineSubsystem((UEngineSubsystem *)this);
  return;
}

// FOnDataDrivenCVarChanged_DelegateWrapper @ 147a441b0

void __cdecl
UDataDrivenCVarEngineSubsystem::FOnDataDrivenCVarChanged_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FString *param_2)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  if (&local_18 != param_2) {
    uVar1 = (param_2->Data).ArrayNum;
    _Src = (param_2->Data).AllocatorInstance.Data;
    local_18.Data.ArrayMax = 0;
    local_18.Data.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar1,0,(ForAnyElementType *)&local_18,uVar1,&local_18.Data.ArrayMax);
      memcpy(local_18.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// GetPrivateStaticClass @ 147a57510

UClass * __cdecl UDataDrivenCVarEngineSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataDrivenCVarEngineSubsystem.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DataDrivenCVarEngineSubsystem",
               &Z_Registration_Info_UClass_UDataDrivenCVarEngineSubsystem.InnerSingleton,
               StaticRegisterNativesUDataDrivenCVarEngineSubsystem,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDataDrivenCVarEngineSubsystem>,
               InternalVTableHelperCtorCaller<UDataDrivenCVarEngineSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataDrivenCVarEngineSubsystem.InnerSingleton;
}

// StaticRegisterNativesUDataDrivenCVarEngineSubsystem @ 147a97650

void __cdecl
UDataDrivenCVarEngineSubsystem::StaticRegisterNativesUDataDrivenCVarEngineSubsystem(void)

{
  return;
}

