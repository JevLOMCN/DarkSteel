// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// StaticClass @ 1488efa00

UClass * __cdecl UInputPlatformSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputPlatformSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InputPlatformSettings",
               &Z_Registration_Info_UClass_UInputPlatformSettings.InnerSingleton,
               StaticRegisterNativesUInputPlatformSettings,0x70,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UInputPlatformSettings>,
               InternalVTableHelperCtorCaller<UInputPlatformSettings>,local_res8,
               UPlatformSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputPlatformSettings.InnerSingleton;
}

// UInputPlatformSettings @ 14890af30

UInputPlatformSettings * __thiscall
UInputPlatformSettings::UInputPlatformSettings(UInputPlatformSettings *this,FVTableHelper *param_1)

{
  UPlatformSettings::UPlatformSettings((UPlatformSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UInputPlatformSettings__6B_;
  (this->HardwareDevices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HardwareDevices).ArrayNum = 0;
  (this->HardwareDevices).ArrayMax = 0;
  return this;
}

// UInputPlatformSettings @ 14890af70

UInputPlatformSettings * __thiscall
UInputPlatformSettings::UInputPlatformSettings(UInputPlatformSettings *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UPlatformSettings::UPlatformSettings((UPlatformSettings *)this,pFVar1);
  this->MaxPlatformUserCount = 8;
  this->_padding_ = (longlong)&___7UInputPlatformSettings__6B_;
  this->DeviceMappingPolicy = PrimaryUserSharesKeyboardAndFirstGamepad;
  (this->HardwareDevices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HardwareDevices).ArrayNum = 0;
  (this->HardwareDevices).ArrayMax = 0;
  this->MaxTriggerFeedbackPosition = 8;
  this->MaxTriggerFeedbackStrength = 8;
  this->MaxTriggerVibrationTriggerPosition = 9;
  this->MaxTriggerVibrationFrequency = 0xff;
  this->MaxTriggerVibrationAmplitude = 8;
  TArray<FHardwareDeviceIdentifier,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<FHardwareDeviceIdentifier_const_&>
            (&this->HardwareDevices,&FHardwareDeviceIdentifier::Invalid);
  TArray<FHardwareDeviceIdentifier,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<FHardwareDeviceIdentifier_const_&>
            (&this->HardwareDevices,&FHardwareDeviceIdentifier::DefaultKeyboardAndMouse);
  TArray<FHardwareDeviceIdentifier,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<FHardwareDeviceIdentifier_const_&>
            (&this->HardwareDevices,&FHardwareDeviceIdentifier::DefaultGamepad);
  TArray<FHardwareDeviceIdentifier,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<FHardwareDeviceIdentifier_const_&>
            (&this->HardwareDevices,&FHardwareDeviceIdentifier::DefaultMobileTouch);
  return this;
}

// ~UInputPlatformSettings @ 14890e7f0

void __thiscall UInputPlatformSettings::~UInputPlatformSettings(UInputPlatformSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInputPlatformSettings__6B_;
  pFVar1 = (this->HardwareDevices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPlatformSettings::~UPlatformSettings((UPlatformSettings *)this);
  return;
}

// AddHardwareDeviceIdentifier @ 148916b20

void __thiscall
UInputPlatformSettings::AddHardwareDeviceIdentifier
          (UInputPlatformSettings *this,FHardwareDeviceIdentifier *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FName::IsWithinBounds((FNameEntryId)(param_1->InputClassName).ComparisonIndex.Value);
  if (bVar2) {
    bVar2 = ::FName::IsWithinBounds
                      ((FNameEntryId)(param_1->HardwareDeviceIdentifier).ComparisonIndex.Value);
    if (bVar2) {
      TArray<FHardwareDeviceIdentifier,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<FHardwareDeviceIdentifier_const_&>(&this->HardwareDevices,param_1);
      return;
    }
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<3895977100628198084>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UserInterface\\InputSettings.cpp"
                     ,0x2c4,"InHardwareDevice.IsValid()");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// Get @ 148954610

UInputPlatformSettings * __cdecl UInputPlatformSettings::Get(void)

{
  int iVar1;
  UPlatformSettingsManager *this;
  UClass *pUVar2;
  UInputPlatformSettings *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  UClass *local_res8;
  FString local_28;
  FString local_18;
  
  pUVar2 = Z_Construct_UClass_UPlatformSettingsManager_NoRegister();
  if ((pUVar2->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar2);
  }
  this = (UPlatformSettingsManager *)(pUVar2->ClassDefaultObject).field0_0x0.DebugPtr;
  local_res8 = StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  pUVar3 = (UInputPlatformSettings *)
           UPlatformSettingsManager::GetSettingsForPlatform
                     (this,(TSubclassOf<UPlatformSettings>)&local_res8);
  if (pUVar3 != (UInputPlatformSettings *)0x0) {
    pUVar2 = StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return pUVar3;
    }
    pFVar4 = GetTypeName<UInputPlatformSettings>(&local_28);
    pwVar5 = L"";
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    pFVar4 = GetFullNameForCastLogError<UPlatformSettings>(&local_18,(UPlatformSettings *)pUVar3);
    if ((pFVar4->Data).ArrayNum != 0) {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar5,pwVar6);
  }
  pFVar4 = GetTypeName<UInputPlatformSettings>(&local_28);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar5);
}

// GetHardwareDeviceForClassName @ 148958e10

FHardwareDeviceIdentifier * __thiscall
UInputPlatformSettings::GetHardwareDeviceForClassName(UInputPlatformSettings *this,FName param_1)

{
  FHardwareDeviceIdentifier *pFVar1;
  FHardwareDeviceIdentifier *pFVar2;
  
  pFVar2 = (FHardwareDeviceIdentifier *)(this->HardwareDevices).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (this->HardwareDevices).ArrayNum;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return (FHardwareDeviceIdentifier *)0x0;
    }
    if (pFVar2->HardwareDeviceIdentifier == param_1) break;
    pFVar2 = pFVar2 + 1;
  }
  return pFVar2;
}

// GetHardwareDevices @ 148958e40

TArray<FHardwareDeviceIdentifier,TSizedDefaultAllocator<32>_> * __thiscall
UInputPlatformSettings::GetHardwareDevices(UInputPlatformSettings *this)

{
  return &this->HardwareDevices;
}

// GetPrivateStaticClass @ 14895b0d0

UClass * __cdecl UInputPlatformSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputPlatformSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InputPlatformSettings",
               &Z_Registration_Info_UClass_UInputPlatformSettings.InnerSingleton,
               StaticRegisterNativesUInputPlatformSettings,0x70,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UInputPlatformSettings>,
               InternalVTableHelperCtorCaller<UInputPlatformSettings>,local_res8,
               UPlatformSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputPlatformSettings.InnerSingleton;
}

// StaticRegisterNativesUInputPlatformSettings @ 148982aa0

void __cdecl UInputPlatformSettings::StaticRegisterNativesUInputPlatformSettings(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18._8_8_ = (ulonglong)(uint)local_18._12_4_ << 0x20;
  local_18.DataPtr = (FClassNativeFunction *)0x0;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

