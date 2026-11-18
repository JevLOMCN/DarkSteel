// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// StaticClass @ 147ba3020

UClass * __cdecl UInputDeviceAudioBasedVibrationProperty::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputDeviceAudioBasedVibrationProperty.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InputDeviceAudioBasedVibrationProperty",
               &Z_Registration_Info_UClass_UInputDeviceAudioBasedVibrationProperty.InnerSingleton,
               StaticRegisterNativesUInputDeviceAudioBasedVibrationProperty,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInputDeviceAudioBasedVibrationProperty>
               ,InternalVTableHelperCtorCaller<UInputDeviceAudioBasedVibrationProperty>,local_res8,
               UInputDeviceProperty::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputDeviceAudioBasedVibrationProperty.InnerSingleton;
}

// UInputDeviceAudioBasedVibrationProperty @ 147bbce50

UInputDeviceAudioBasedVibrationProperty * __thiscall
UInputDeviceAudioBasedVibrationProperty::UInputDeviceAudioBasedVibrationProperty
          (UInputDeviceAudioBasedVibrationProperty *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UInputDeviceAudioBasedVibrationProperty__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  (this->Data).Sound.field0_0x0.DebugPtr = (USoundBase *)0x0;
  *(undefined8 *)&this->DeviceOverrideData = 0;
  *(undefined8 *)&(this->DeviceOverrideData).field_0x8 = 0;
  *(undefined8 *)&(this->DeviceOverrideData).field_0x20 = 0;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x28 = 0;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x2c = 0x80;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x34 = 0;
  *(undefined8 *)&(this->DeviceOverrideData).field_0x40 = 0;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x48 = 0;
  return this;
}

// UInputDeviceAudioBasedVibrationProperty @ 147bbceb0

UInputDeviceAudioBasedVibrationProperty * __thiscall
UInputDeviceAudioBasedVibrationProperty::UInputDeviceAudioBasedVibrationProperty
          (UInputDeviceAudioBasedVibrationProperty *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UInputDeviceAudioBasedVibrationProperty__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  (this->Data).Sound.field0_0x0.DebugPtr = (USoundBase *)0x0;
  *(undefined8 *)&this->DeviceOverrideData = 0;
  *(undefined8 *)&(this->DeviceOverrideData).field_0x8 = 0;
  *(undefined8 *)&(this->DeviceOverrideData).field_0x20 = 0;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x28 = 0;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x2c = 0x80;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x34 = 0;
  *(undefined8 *)&(this->DeviceOverrideData).field_0x40 = 0;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x48 = 0;
  return this;
}

// ~UInputDeviceAudioBasedVibrationProperty @ 147bbf710

void __thiscall
UInputDeviceAudioBasedVibrationProperty::~UInputDeviceAudioBasedVibrationProperty
          (UInputDeviceAudioBasedVibrationProperty *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UInputDeviceAudioBasedVibrationProperty__6B_;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DeviceOverrideData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FAudioBasedVibrationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FAudioBasedVibrationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FAudioBasedVibrationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DeviceOverrideData);
  this->_padding_ = (longlong)&___7UInputDeviceProperty__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ApplyDeviceProperty @ 147bc9a60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UInputDeviceAudioBasedVibrationProperty::ApplyDeviceProperty
          (UInputDeviceAudioBasedVibrationProperty *this,FPlatformUserId param_1,
          FInputDeviceId param_2)

{
  UInputDeviceSubsystem *this_00;
  FHardwareDeviceIdentifier *pFVar1;
  FAudioBasedVibrationData *pFVar2;
  APlayerController *this_01;
  FHardwareDeviceIdentifier local_40;
  FHardwareDeviceIdentifier local_28;
  
  this_00 = UInputDeviceSubsystem::Get();
  if (this_00 != (UInputDeviceSubsystem *)0x0) {
    if (param_2.InternalId < 0) {
      pFVar1 = UInputDeviceSubsystem::GetMostRecentlyUsedHardwareDevice(this_00,&local_28,param_1);
    }
    else {
      pFVar1 = UInputDeviceSubsystem::GetInputDeviceHardwareIdentifier(this_00,&local_40,param_2);
    }
    pFVar2 = TMapBase<FName,FAudioBasedVibrationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAudioBasedVibrationData,0>_>
             ::Find((TMapBase<FName,FAudioBasedVibrationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAudioBasedVibrationData,0>_>
                     *)&this->DeviceOverrideData,pFVar1->HardwareDeviceIdentifier);
    if (pFVar2 != (FAudioBasedVibrationData *)0x0) goto LAB_147bc9ad2;
  }
  pFVar2 = (FAudioBasedVibrationData *)0x0;
LAB_147bc9ad2:
  if (pFVar2 == (FAudioBasedVibrationData *)0x0) {
    pFVar2 = &this->Data;
  }
  if ((pFVar2 != (FAudioBasedVibrationData *)0x0) &&
     ((pFVar2->Sound).field0_0x0.DebugPtr != (USoundBase *)0x0)) {
    this_01 = UInputDeviceLibrary::GetPlayerControllerFromPlatformUser(param_1);
    if (this_01 != (APlayerController *)0x0) {
      APlayerController::ClientPlaySound
                (this_01,(pFVar2->Sound).field0_0x0.DebugPtr,__real_3f800000,__real_3f800000);
    }
  }
  return;
}

// EvaluateDeviceProperty_Implementation @ 147bd8ee0

void __thiscall
UInputDeviceAudioBasedVibrationProperty::EvaluateDeviceProperty_Implementation
          (UInputDeviceAudioBasedVibrationProperty *this,FPlatformUserId param_1,
          FInputDeviceId param_2,float param_3,float param_4)

{
  return;
}

// GetInternalDeviceProperty @ 147be0a90

FInputDeviceProperty * __thiscall
UInputDeviceAudioBasedVibrationProperty::GetInternalDeviceProperty
          (UInputDeviceAudioBasedVibrationProperty *this)

{
  return (FInputDeviceProperty *)0x0;
}

// GetPrivateStaticClass @ 147be5380

UClass * __cdecl UInputDeviceAudioBasedVibrationProperty::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputDeviceAudioBasedVibrationProperty.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InputDeviceAudioBasedVibrationProperty",
               &Z_Registration_Info_UClass_UInputDeviceAudioBasedVibrationProperty.InnerSingleton,
               StaticRegisterNativesUInputDeviceAudioBasedVibrationProperty,0x88,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInputDeviceAudioBasedVibrationProperty>
               ,InternalVTableHelperCtorCaller<UInputDeviceAudioBasedVibrationProperty>,local_res8,
               UInputDeviceProperty::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputDeviceAudioBasedVibrationProperty.InnerSingleton;
}

// GetRelevantData @ 147be6a30

FAudioBasedVibrationData * __thiscall
UInputDeviceAudioBasedVibrationProperty::GetRelevantData
          (UInputDeviceAudioBasedVibrationProperty *this,FPlatformUserId param_1,
          FInputDeviceId param_2)

{
  UInputDeviceSubsystem *this_00;
  FHardwareDeviceIdentifier *pFVar1;
  FAudioBasedVibrationData *pFVar2;
  bool bVar3;
  FHardwareDeviceIdentifier local_40;
  FHardwareDeviceIdentifier local_28;
  
  this_00 = UInputDeviceSubsystem::Get();
  if (this_00 != (UInputDeviceSubsystem *)0x0) {
    if (param_2.InternalId < 0) {
      pFVar1 = UInputDeviceSubsystem::GetMostRecentlyUsedHardwareDevice(this_00,&local_28,param_1);
    }
    else {
      pFVar1 = UInputDeviceSubsystem::GetInputDeviceHardwareIdentifier(this_00,&local_40,param_2);
    }
    pFVar2 = TMapBase<FName,FAudioBasedVibrationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAudioBasedVibrationData,0>_>
             ::Find((TMapBase<FName,FAudioBasedVibrationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAudioBasedVibrationData,0>_>
                     *)&this->DeviceOverrideData,pFVar1->HardwareDeviceIdentifier);
    bVar3 = pFVar2 == (FAudioBasedVibrationData *)0x0;
    if (!bVar3) goto LAB_147be6aa2;
  }
  pFVar2 = (FAudioBasedVibrationData *)0x0;
  bVar3 = true;
LAB_147be6aa2:
  if (bVar3) {
    pFVar2 = &this->Data;
  }
  return pFVar2;
}

// RecalculateDuration @ 147bf9ed0

float __thiscall
UInputDeviceAudioBasedVibrationProperty::RecalculateDuration
          (UInputDeviceAudioBasedVibrationProperty *this)

{
  return 0.0;
}

// StaticRegisterNativesUInputDeviceAudioBasedVibrationProperty @ 147c03640

void __cdecl
UInputDeviceAudioBasedVibrationProperty::
StaticRegisterNativesUInputDeviceAudioBasedVibrationProperty(void)

{
  return;
}

