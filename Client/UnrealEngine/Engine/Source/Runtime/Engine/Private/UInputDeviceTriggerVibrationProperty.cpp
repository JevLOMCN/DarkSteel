// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// StaticClass @ 147b9f240

UClass * __cdecl UInputDeviceTriggerVibrationProperty::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputDeviceTriggerVibrationProperty.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InputDeviceTriggerVibrationProperty",
               &Z_Registration_Info_UClass_UInputDeviceTriggerVibrationProperty.InnerSingleton,
               StaticRegisterNativesUInputDeviceTriggerVibrationProperty,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInputDeviceTriggerVibrationProperty>,
               InternalVTableHelperCtorCaller<UInputDeviceTriggerVibrationProperty>,local_res8,
               UInputDeviceTriggerEffect::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputDeviceTriggerVibrationProperty.InnerSingleton;
}

// UInputDeviceTriggerVibrationProperty @ 147bbd660

UInputDeviceTriggerVibrationProperty * __thiscall
UInputDeviceTriggerVibrationProperty::UInputDeviceTriggerVibrationProperty
          (UInputDeviceTriggerVibrationProperty *this,FVTableHelper *param_1)

{
  FName local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UInputDeviceTriggerEffect__6B_;
  *(undefined2 *)&this->_padding_ = 0x103;
  *(undefined4 *)&this->_padding_ = 0;
  ::FName::FName(&local_res8,"InputDeviceTriggerResetProperty");
  *(FName *)((longlong)&this->_padding_ + 4) = local_res8;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 3;
  this->_padding_ = (longlong)&___7UInputDeviceTriggerVibrationProperty__6B_;
  (this->TriggerData).TriggerPositionCurve.field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  (this->TriggerData).VibrationFrequencyCurve.field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  (this->TriggerData).VibrationAmplitudeCurve.field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  *(undefined8 *)&this->DeviceOverrideData = 0;
  *(undefined8 *)&(this->DeviceOverrideData).field_0x8 = 0;
  *(undefined8 *)&(this->DeviceOverrideData).field_0x20 = 0;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x28 = 0;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x2c = 0x80;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x34 = 0;
  *(undefined8 *)&(this->DeviceOverrideData).field_0x40 = 0;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x48 = 0;
  ::FName::FName(&local_res8,"InputDeviceTriggerVibration");
  (this->InternalProperty)._padding_ = (longlong)local_res8;
  *(undefined1 *)&(this->InternalProperty)._padding_ = 0;
  (this->InternalProperty).TriggerPosition = 0;
  (this->InternalProperty).VibrationFrequency = 0;
  (this->InternalProperty).VibrationAmplitude = 0;
  return this;
}

// UInputDeviceTriggerVibrationProperty @ 147bbd740

UInputDeviceTriggerVibrationProperty * __thiscall
UInputDeviceTriggerVibrationProperty::UInputDeviceTriggerVibrationProperty
          (UInputDeviceTriggerVibrationProperty *this)

{
  FObjectInitializer *pFVar1;
  FName local_res8;
  
  pFVar1 = FObjectInitializer::Get();
  UObject::UObject((UObject *)this,pFVar1);
  this->_padding_ = (longlong)&___7UInputDeviceTriggerEffect__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 0x103;
  ::FName::FName(&local_res8,"InputDeviceTriggerResetProperty");
  *(FName *)((longlong)&this->_padding_ + 4) = local_res8;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 3;
  this->_padding_ = (longlong)&___7UInputDeviceTriggerVibrationProperty__6B_;
  (this->TriggerData).TriggerPositionCurve.field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  (this->TriggerData).VibrationFrequencyCurve.field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  (this->TriggerData).VibrationAmplitudeCurve.field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  *(undefined8 *)&this->DeviceOverrideData = 0;
  *(undefined8 *)&(this->DeviceOverrideData).field_0x8 = 0;
  *(undefined8 *)&(this->DeviceOverrideData).field_0x20 = 0;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x28 = 0;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x2c = 0x80;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x34 = 0;
  *(undefined8 *)&(this->DeviceOverrideData).field_0x40 = 0;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x48 = 0;
  ::FName::FName(&local_res8,"InputDeviceTriggerVibration");
  (this->InternalProperty)._padding_ = (longlong)local_res8;
  *(undefined1 *)&(this->InternalProperty)._padding_ = 0;
  (this->InternalProperty).TriggerPosition = 0;
  (this->InternalProperty).VibrationFrequency = 0;
  (this->InternalProperty).VibrationAmplitude = 0;
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  return this;
}

// ~UInputDeviceTriggerVibrationProperty @ 147bbf980

void __thiscall
UInputDeviceTriggerVibrationProperty::~UInputDeviceTriggerVibrationProperty
          (UInputDeviceTriggerVibrationProperty *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UInputDeviceTriggerVibrationProperty__6B_;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DeviceOverrideData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FDeviceTriggerTriggerVibrationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FDeviceTriggerTriggerVibrationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FDeviceTriggerTriggerVibrationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DeviceOverrideData);
  this->_padding_ = (longlong)&___7UInputDeviceProperty__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// EvaluateDeviceProperty_Implementation @ 147bd9160

void __thiscall
UInputDeviceTriggerVibrationProperty::EvaluateDeviceProperty_Implementation
          (UInputDeviceTriggerVibrationProperty *this,FPlatformUserId param_1,FInputDeviceId param_2
          ,float param_3,float param_4)

{
  UCurveFloat *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UInputDeviceSubsystem *this_00;
  FHardwareDeviceIdentifier *pFVar5;
  FDeviceTriggerTriggerVibrationData *pFVar6;
  UInputPlatformSettings *pUVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  FHardwareDeviceIdentifier local_40;
  FHardwareDeviceIdentifier local_28;
  
  this_00 = UInputDeviceSubsystem::Get();
  if (this_00 != (UInputDeviceSubsystem *)0x0) {
    if (param_2.InternalId < 0) {
      pFVar5 = UInputDeviceSubsystem::GetMostRecentlyUsedHardwareDevice(this_00,&local_28,param_1);
    }
    else {
      pFVar5 = UInputDeviceSubsystem::GetInputDeviceHardwareIdentifier(this_00,&local_40,param_2);
    }
    pFVar6 = TMapBase<FName,FDeviceTriggerTriggerVibrationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDeviceTriggerTriggerVibrationData,0>_>
             ::Find((TMapBase<FName,FDeviceTriggerTriggerVibrationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDeviceTriggerTriggerVibrationData,0>_>
                     *)&this->DeviceOverrideData,pFVar5->HardwareDeviceIdentifier);
    if (pFVar6 != (FDeviceTriggerTriggerVibrationData *)0x0) goto LAB_147bd91e9;
  }
  pFVar6 = (FDeviceTriggerTriggerVibrationData *)0x0;
LAB_147bd91e9:
  *(char *)&(this->InternalProperty)._padding_ = (char)this->_padding_;
  if (pFVar6 == (FDeviceTriggerTriggerVibrationData *)0x0) {
    pFVar6 = &this->TriggerData;
  }
  pUVar1 = (pFVar6->TriggerPositionCurve).field0_0x0.DebugPtr;
  iVar9 = 0;
  iVar4 = iVar9;
  if (pUVar1 == (UCurveFloat *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_743917833502588521>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\InputDeviceProperties.cpp"
                       ,0x197,"Data->TriggerPositionCurve");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    fVar10 = UCurveFloat::GetFloatValue(pUVar1,param_4);
    pUVar7 = UInputPlatformSettings::Get();
    iVar8 = pUVar7->MaxTriggerVibrationTriggerPosition;
    if ((int)fVar10 < pUVar7->MaxTriggerVibrationTriggerPosition) {
      iVar8 = (int)fVar10;
    }
    if (0 < iVar8) {
      iVar4 = iVar8;
    }
  }
  (this->InternalProperty).TriggerPosition = iVar4;
  pUVar1 = (pFVar6->VibrationFrequencyCurve).field0_0x0.DebugPtr;
  iVar4 = iVar9;
  if (pUVar1 == (UCurveFloat *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_743917833502588510>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\InputDeviceProperties.cpp"
                       ,0x1a2,"Data->VibrationFrequencyCurve");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    fVar10 = UCurveFloat::GetFloatValue(pUVar1,param_4);
    pUVar7 = UInputPlatformSettings::Get();
    iVar8 = pUVar7->MaxTriggerVibrationFrequency;
    if ((int)fVar10 < pUVar7->MaxTriggerVibrationFrequency) {
      iVar8 = (int)fVar10;
    }
    if (0 < iVar8) {
      iVar4 = iVar8;
    }
  }
  (this->InternalProperty).VibrationFrequency = iVar4;
  pUVar1 = (pFVar6->VibrationAmplitudeCurve).field0_0x0.DebugPtr;
  if (pUVar1 == (UCurveFloat *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_743917833502588499>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\InputDeviceProperties.cpp"
                       ,0x1ad,"Data->VibrationAmplitudeCurve");
    iVar9 = 0;
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    fVar10 = UCurveFloat::GetFloatValue(pUVar1,param_4);
    pUVar7 = UInputPlatformSettings::Get();
    iVar4 = pUVar7->MaxTriggerVibrationAmplitude;
    if ((int)fVar10 < pUVar7->MaxTriggerVibrationAmplitude) {
      iVar4 = (int)fVar10;
    }
    if (0 < iVar4) {
      iVar9 = iVar4;
    }
  }
  (this->InternalProperty).VibrationAmplitude = iVar9;
  return;
}

// GetInternalDeviceProperty @ 147be0ae0

FInputDeviceProperty * __thiscall
UInputDeviceTriggerVibrationProperty::GetInternalDeviceProperty
          (UInputDeviceTriggerVibrationProperty *this)

{
  return (FInputDeviceProperty *)&this->InternalProperty;
}

// GetPrivateStaticClass @ 147be57f0

UClass * __cdecl UInputDeviceTriggerVibrationProperty::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputDeviceTriggerVibrationProperty.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InputDeviceTriggerVibrationProperty",
               &Z_Registration_Info_UClass_UInputDeviceTriggerVibrationProperty.InnerSingleton,
               StaticRegisterNativesUInputDeviceTriggerVibrationProperty,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInputDeviceTriggerVibrationProperty>,
               InternalVTableHelperCtorCaller<UInputDeviceTriggerVibrationProperty>,local_res8,
               UInputDeviceTriggerEffect::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputDeviceTriggerVibrationProperty.InnerSingleton;
}

// GetTriggerPositionValue @ 147bec140

int __thiscall
UInputDeviceTriggerVibrationProperty::GetTriggerPositionValue
          (UInputDeviceTriggerVibrationProperty *this,FDeviceTriggerTriggerVibrationData *param_1,
          float param_2)

{
  UCurveFloat *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  UInputPlatformSettings *pUVar5;
  float fVar6;
  
  this_00 = (param_1->TriggerPositionCurve).field0_0x0.DebugPtr;
  if (this_00 != (UCurveFloat *)0x0) {
    fVar6 = UCurveFloat::GetFloatValue(this_00,param_2);
    pUVar5 = UInputPlatformSettings::Get();
    iVar3 = pUVar5->MaxTriggerVibrationTriggerPosition;
    if ((int)fVar6 < pUVar5->MaxTriggerVibrationTriggerPosition) {
      iVar3 = (int)fVar6;
    }
    iVar4 = 0;
    if (0 < iVar3) {
      iVar4 = iVar3;
    }
    return iVar4;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_743917833502588521>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\InputDeviceProperties.cpp"
                     ,0x197,"Data->TriggerPositionCurve");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return 0;
}

// GetVibrationAmplitudeValue @ 147becdb0

int __thiscall
UInputDeviceTriggerVibrationProperty::GetVibrationAmplitudeValue
          (UInputDeviceTriggerVibrationProperty *this,FDeviceTriggerTriggerVibrationData *param_1,
          float param_2)

{
  UCurveFloat *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  UInputPlatformSettings *pUVar5;
  float fVar6;
  
  this_00 = (param_1->VibrationAmplitudeCurve).field0_0x0.DebugPtr;
  if (this_00 != (UCurveFloat *)0x0) {
    fVar6 = UCurveFloat::GetFloatValue(this_00,param_2);
    pUVar5 = UInputPlatformSettings::Get();
    iVar3 = pUVar5->MaxTriggerVibrationAmplitude;
    if ((int)fVar6 < pUVar5->MaxTriggerVibrationAmplitude) {
      iVar3 = (int)fVar6;
    }
    iVar4 = 0;
    if (0 < iVar3) {
      iVar4 = iVar3;
    }
    return iVar4;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_743917833502588499>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\InputDeviceProperties.cpp"
                     ,0x1ad,"Data->VibrationAmplitudeCurve");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return 0;
}

// GetVibrationFrequencyValue @ 147bece30

int __thiscall
UInputDeviceTriggerVibrationProperty::GetVibrationFrequencyValue
          (UInputDeviceTriggerVibrationProperty *this,FDeviceTriggerTriggerVibrationData *param_1,
          float param_2)

{
  UCurveFloat *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  UInputPlatformSettings *pUVar5;
  float fVar6;
  
  this_00 = (param_1->VibrationFrequencyCurve).field0_0x0.DebugPtr;
  if (this_00 != (UCurveFloat *)0x0) {
    fVar6 = UCurveFloat::GetFloatValue(this_00,param_2);
    pUVar5 = UInputPlatformSettings::Get();
    iVar3 = pUVar5->MaxTriggerVibrationFrequency;
    if ((int)fVar6 < pUVar5->MaxTriggerVibrationFrequency) {
      iVar3 = (int)fVar6;
    }
    iVar4 = 0;
    if (0 < iVar3) {
      iVar4 = iVar3;
    }
    return iVar4;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_743917833502588510>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\InputDeviceProperties.cpp"
                     ,0x1a2,"Data->VibrationFrequencyCurve");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return 0;
}

// RecalculateDuration @ 147bfa160

float __thiscall
UInputDeviceTriggerVibrationProperty::RecalculateDuration
          (UInputDeviceTriggerVibrationProperty *this)

{
  undefined1 *puVar1;
  TMap<FName,FDeviceTriggerTriggerVibrationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDeviceTriggerTriggerVibrationData,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  UCurveFloat *pUVar6;
  longlong lVar7;
  UCurveBase *pUVar8;
  code *pcVar9;
  TMap<FName,FDeviceTriggerTriggerVibrationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDeviceTriggerTriggerVibrationData,0>_>
  *pTVar10;
  bool bVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  float fVar18;
  undefined1 local_res8 [8];
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  float local_e8;
  float local_e4;
  float local_e0 [2];
  TMap<FName,FDeviceTriggerTriggerVibrationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDeviceTriggerTriggerVibrationData,0>_>
  *local_d8;
  int iStack_d0;
  uint uStack_cc;
  undefined1 *local_c8;
  undefined4 uStack_c0;
  int iStack_bc;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  int local_9c;
  float local_98;
  float local_94;
  float local_90 [2];
  TMap<FName,FDeviceTriggerTriggerVibrationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDeviceTriggerTriggerVibrationData,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  
  pUVar6 = (this->TriggerData).TriggerPositionCurve.field0_0x0.DebugPtr;
  fVar18 = 0.0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar6 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
LAB_147bfa1b6:
    local_res10[0] = 0.0;
    UCurveBase::GetTimeRange((UCurveBase *)pUVar6,&local_a8,local_res10);
    if (0.0 < local_res10[0]) {
      fVar18 = local_res10[0];
    }
  }
  else {
    local_res10[0] = 0.0;
    if (pUVar6 != (UCurveFloat *)0x0) goto LAB_147bfa1b6;
  }
  pUVar6 = (this->TriggerData).VibrationFrequencyCurve.field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar6 == (UCurveFloat *)0x0)) {
    local_res18[0] = 0.0;
    if (pUVar6 != (UCurveFloat *)0x0) goto LAB_147bfa202;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
LAB_147bfa202:
    local_res18[0] = 0.0;
    UCurveBase::GetTimeRange((UCurveBase *)pUVar6,&local_a4,local_res18);
    if (fVar18 < local_res18[0]) {
      fVar18 = local_res18[0];
    }
  }
  pUVar6 = (this->TriggerData).VibrationAmplitudeCurve.field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar6 == (UCurveFloat *)0x0)) {
    local_res20[0] = 0.0;
    if (pUVar6 == (UCurveFloat *)0x0) goto LAB_147bfa26b;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  local_res20[0] = 0.0;
  UCurveBase::GetTimeRange((UCurveBase *)pUVar6,&local_a0,local_res20);
  if (fVar18 < local_res20[0]) {
    fVar18 = local_res20[0];
  }
LAB_147bfa26b:
  iStack_d0 = 0;
  puVar1 = &(this->DeviceOverrideData).field_0x10;
  iVar4 = *(int *)&(this->DeviceOverrideData).field_0x28;
  pTVar2 = &this->DeviceOverrideData;
  uStack_cc = 1;
  local_b8 = 0;
  iStack_bc = 0;
  if (iVar4 != 0) {
    puVar17 = *(uint **)&(this->DeviceOverrideData).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar15 = *puVar17;
    while (uVar15 == 0) {
      lVar12 = (longlong)iStack_d0;
      local_b8 = local_b8 + 0x20;
      iStack_d0 = iStack_d0 + 1;
      iStack_bc = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_d0) goto LAB_147bfa2ed;
      uVar15 = puVar17[lVar12 + 1];
    }
    uStack_cc = -uVar15 & uVar15;
    uVar3 = (ulonglong)uStack_cc * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_9c = (int)lVar12;
    iStack_bc = local_b8 + -1 + local_9c;
    if (iVar4 < iStack_bc) {
      iStack_bc = iVar4;
    }
  }
LAB_147bfa2ed:
  uVar15 = *(uint *)&(this->DeviceOverrideData).field_0x28;
  uVar14 = uVar15 & 0xffffffe0;
  iStack_b0 = *(int *)&(this->DeviceOverrideData).field_0x8 -
              *(int *)&(this->DeviceOverrideData).field_0x34;
  uStack_c0 = 0xffffffff;
  TStack_80._padding_ = CONCAT44(uStack_cc,iStack_d0);
  TStack_80.CurrentBitIndex = iStack_bc;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar15 >> 5;
  TStack_80._28_4_ = iStack_bc;
  TStack_80.BaseBitIndex = local_b8;
  uStack_60 = CONCAT44(uStack_ac,iStack_b0);
  local_d8 = pTVar2;
  local_c8 = puVar1;
  iStack_b4 = iStack_bc;
  local_88 = pTVar2;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar4 < (int)uVar15)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    fVar18 = (float)(*pcVar9)();
    return fVar18;
  }
  uVar5 = *(uint *)&(this->DeviceOverrideData).field_0x28;
  if (uVar15 != uVar5) {
    puVar16 = *(undefined1 **)&(this->DeviceOverrideData).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar13 * 4);
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar13;
      uVar14 = uVar14 + 0x20;
      iVar13 = iVar13 + 1;
      uVar15 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_147bfa3f0;
      uVar15 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar15 = (int)lVar12 + -1 + uVar14;
    if ((int)uVar5 < (int)uVar15) {
      uVar15 = uVar5;
    }
  }
LAB_147bfa3f0:
  do {
    pTVar10 = local_88;
    if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FDeviceTriggerTriggerVibrationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar12 = (longlong)TStack_80.CurrentBitIndex;
    if (((TStack_80.CurrentBitIndex == uVar15) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar10 == pTVar2))
    {
      *(float *)&this->_padding_ = fVar18;
      return fVar18;
    }
    lVar7 = *(longlong *)pTVar10;
    pUVar8 = *(UCurveBase **)(lVar7 + 8 + lVar12 * 0x28);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar8 == (UCurveBase *)0x0)) {
      local_e8 = 0.0;
      if (pUVar8 != (UCurveBase *)0x0) goto LAB_147bfa459;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
LAB_147bfa459:
      local_e8 = 0.0;
      UCurveBase::GetTimeRange(pUVar8,&local_98,&local_e8);
      if (fVar18 < local_e8) {
        fVar18 = local_e8;
      }
    }
    pUVar8 = *(UCurveBase **)(lVar7 + 0x10 + lVar12 * 0x28);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar8 == (UCurveBase *)0x0)) {
      local_e4 = 0.0;
      if (pUVar8 != (UCurveBase *)0x0) goto LAB_147bfa4aa;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
LAB_147bfa4aa:
      local_e4 = 0.0;
      UCurveBase::GetTimeRange(pUVar8,&local_94,&local_e4);
      if (fVar18 < local_e4) {
        fVar18 = local_e4;
      }
    }
    pUVar8 = *(UCurveBase **)(lVar7 + 0x18 + lVar12 * 0x28);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar8 == (UCurveBase *)0x0)) {
      local_e0[0] = 0.0;
      if (pUVar8 != (UCurveBase *)0x0) goto LAB_147bfa4fb;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
LAB_147bfa4fb:
      local_e0[0] = 0.0;
      UCurveBase::GetTimeRange(pUVar8,local_90,local_e0);
      if (fVar18 < local_e0[0]) {
        fVar18 = local_e0[0];
      }
    }
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  } while( true );
}

// StaticRegisterNativesUInputDeviceTriggerVibrationProperty @ 147c03700

void __cdecl
UInputDeviceTriggerVibrationProperty::StaticRegisterNativesUInputDeviceTriggerVibrationProperty
          (void)

{
  return;
}

