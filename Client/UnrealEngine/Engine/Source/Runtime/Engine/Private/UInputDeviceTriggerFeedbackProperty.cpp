// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// StaticClass @ 147ba6000

UClass * __cdecl UInputDeviceTriggerFeedbackProperty::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputDeviceTriggerFeedbackProperty.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InputDeviceTriggerFeedbackProperty",
               &Z_Registration_Info_UClass_UInputDeviceTriggerFeedbackProperty.InnerSingleton,
               StaticRegisterNativesUInputDeviceTriggerFeedbackProperty,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInputDeviceTriggerFeedbackProperty>,
               InternalVTableHelperCtorCaller<UInputDeviceTriggerFeedbackProperty>,local_res8,
               UInputDeviceTriggerEffect::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputDeviceTriggerFeedbackProperty.InnerSingleton;
}

// UInputDeviceTriggerFeedbackProperty @ 147bbd2f0

UInputDeviceTriggerFeedbackProperty * __thiscall
UInputDeviceTriggerFeedbackProperty::UInputDeviceTriggerFeedbackProperty
          (UInputDeviceTriggerFeedbackProperty *this,FVTableHelper *param_1)

{
  FName local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UInputDeviceTriggerEffect__6B_;
  *(undefined2 *)&this->_padding_ = 0x103;
  *(undefined4 *)&this->_padding_ = 0;
  ::FName::FName(&local_res8,"InputDeviceTriggerResetProperty");
  *(FName *)((longlong)&this->_padding_ + 4) = local_res8;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 3;
  this->_padding_ = (longlong)&___7UInputDeviceTriggerFeedbackProperty__6B_;
  (this->TriggerData).FeedbackPositionCurve.field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  (this->TriggerData).FeedbackStrenghCurve.field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  *(undefined8 *)&this->DeviceOverrideData = 0;
  *(undefined8 *)&(this->DeviceOverrideData).field_0x8 = 0;
  *(undefined8 *)&(this->DeviceOverrideData).field_0x20 = 0;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x28 = 0;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x2c = 0x80;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x34 = 0;
  *(undefined8 *)&(this->DeviceOverrideData).field_0x40 = 0;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x48 = 0;
  ::FName::FName(&local_res8,"InputDeviceTriggerFeedback");
  *(uint *)&(this->InternalProperty).field_0x0 = local_res8.ComparisonIndex.Value;
  *(uint *)&(this->InternalProperty).field_0x4 = local_res8.Number;
  (this->InternalProperty).field_0x8 = 0;
  (this->InternalProperty).Position = 0;
  (this->InternalProperty).Strengh = 0;
  return this;
}

// UInputDeviceTriggerFeedbackProperty @ 147bbd3c0

UInputDeviceTriggerFeedbackProperty * __thiscall
UInputDeviceTriggerFeedbackProperty::UInputDeviceTriggerFeedbackProperty
          (UInputDeviceTriggerFeedbackProperty *this)

{
  FObjectInitializer *pFVar1;
  FName local_res8;
  
  pFVar1 = FObjectInitializer::Get();
  UObject::UObject((UObject *)this,pFVar1);
  this->_padding_ = (longlong)&___7UInputDeviceTriggerEffect__6B_;
  *(undefined2 *)&this->_padding_ = 0x103;
  *(undefined4 *)&this->_padding_ = 0;
  ::FName::FName(&local_res8,"InputDeviceTriggerResetProperty");
  *(FName *)((longlong)&this->_padding_ + 4) = local_res8;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 3;
  this->_padding_ = (longlong)&___7UInputDeviceTriggerFeedbackProperty__6B_;
  (this->TriggerData).FeedbackPositionCurve.field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  (this->TriggerData).FeedbackStrenghCurve.field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  *(undefined8 *)&this->DeviceOverrideData = 0;
  *(undefined8 *)&(this->DeviceOverrideData).field_0x8 = 0;
  *(undefined8 *)&(this->DeviceOverrideData).field_0x20 = 0;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x28 = 0;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x2c = 0x80;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x34 = 0;
  *(undefined8 *)&(this->DeviceOverrideData).field_0x40 = 0;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x48 = 0;
  ::FName::FName(&local_res8,"InputDeviceTriggerFeedback");
  *(uint *)&(this->InternalProperty).field_0x0 = local_res8.ComparisonIndex.Value;
  *(uint *)&(this->InternalProperty).field_0x4 = local_res8.Number;
  (this->InternalProperty).Position = 0;
  (this->InternalProperty).Strengh = 0;
  (this->InternalProperty).field_0x8 = (char)this->_padding_;
  return this;
}

// ~UInputDeviceTriggerFeedbackProperty @ 147bbf8c0

void __thiscall
UInputDeviceTriggerFeedbackProperty::~UInputDeviceTriggerFeedbackProperty
          (UInputDeviceTriggerFeedbackProperty *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UInputDeviceTriggerFeedbackProperty__6B_;
  *(undefined4 *)&(this->DeviceOverrideData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DeviceOverrideData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FDeviceTriggerFeedbackData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FDeviceTriggerFeedbackData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FDeviceTriggerFeedbackData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DeviceOverrideData);
  this->_padding_ = (longlong)&___7UInputDeviceProperty__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// EvaluateDeviceProperty_Implementation @ 147bd8f00

void __thiscall
UInputDeviceTriggerFeedbackProperty::EvaluateDeviceProperty_Implementation
          (UInputDeviceTriggerFeedbackProperty *this,FPlatformUserId param_1,FInputDeviceId param_2,
          float param_3,float param_4)

{
  UCurveFloat *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UInputDeviceSubsystem *this_00;
  FHardwareDeviceIdentifier *pFVar5;
  FDeviceTriggerFeedbackData *pFVar6;
  UInputPlatformSettings *pUVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  FHardwareDeviceIdentifier local_40;
  FHardwareDeviceIdentifier local_28;
  
  (this->InternalProperty).field_0x8 = (char)this->_padding_;
  this_00 = UInputDeviceSubsystem::Get();
  if (this_00 != (UInputDeviceSubsystem *)0x0) {
    if (param_2.InternalId < 0) {
      pFVar5 = UInputDeviceSubsystem::GetMostRecentlyUsedHardwareDevice(this_00,&local_28,param_1);
    }
    else {
      pFVar5 = UInputDeviceSubsystem::GetInputDeviceHardwareIdentifier(this_00,&local_40,param_2);
    }
    pFVar6 = TMapBase<FName,FDeviceTriggerFeedbackData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDeviceTriggerFeedbackData,0>_>
             ::Find((TMapBase<FName,FDeviceTriggerFeedbackData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDeviceTriggerFeedbackData,0>_>
                     *)&this->DeviceOverrideData,pFVar5->HardwareDeviceIdentifier);
    if (pFVar6 != (FDeviceTriggerFeedbackData *)0x0) goto LAB_147bd8f93;
  }
  pFVar6 = (FDeviceTriggerFeedbackData *)0x0;
LAB_147bd8f93:
  if (pFVar6 == (FDeviceTriggerFeedbackData *)0x0) {
    pFVar6 = &this->TriggerData;
  }
  pUVar1 = (pFVar6->FeedbackPositionCurve).field0_0x0.DebugPtr;
  iVar9 = 0;
  iVar4 = iVar9;
  if (pUVar1 == (UCurveFloat *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_743917833502588692>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\InputDeviceProperties.cpp"
                       ,0xec,"Data->FeedbackPositionCurve");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    fVar10 = UCurveFloat::GetFloatValue(pUVar1,param_4);
    pUVar7 = UInputPlatformSettings::Get();
    iVar8 = pUVar7->MaxTriggerFeedbackPosition;
    if ((int)fVar10 < pUVar7->MaxTriggerFeedbackPosition) {
      iVar8 = (int)fVar10;
    }
    if (0 < iVar8) {
      iVar4 = iVar8;
    }
  }
  (this->InternalProperty).Position = iVar4;
  pUVar1 = (pFVar6->FeedbackStrenghCurve).field0_0x0.DebugPtr;
  if (pUVar1 == (UCurveFloat *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_743917833502588681>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\InputDeviceProperties.cpp"
                       ,0xf7,"Data->FeedbackStrenghCurve");
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
    iVar4 = pUVar7->MaxTriggerFeedbackStrength;
    if ((int)fVar10 < pUVar7->MaxTriggerFeedbackStrength) {
      iVar4 = (int)fVar10;
    }
    if (0 < iVar4) {
      iVar9 = iVar4;
    }
  }
  (this->InternalProperty).Strengh = iVar9;
  return;
}

// GetInternalDeviceProperty @ 147be0ac0

FInputDeviceProperty * __thiscall
UInputDeviceTriggerFeedbackProperty::GetInternalDeviceProperty
          (UInputDeviceTriggerFeedbackProperty *this)

{
  return (FInputDeviceProperty *)&this->InternalProperty;
}

// GetPositionValue @ 147be4430

int __thiscall
UInputDeviceTriggerFeedbackProperty::GetPositionValue
          (UInputDeviceTriggerFeedbackProperty *this,FDeviceTriggerFeedbackData *param_1,
          float param_2)

{
  UCurveFloat *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  UInputPlatformSettings *pUVar5;
  float fVar6;
  
  this_00 = (param_1->FeedbackPositionCurve).field0_0x0.DebugPtr;
  if (this_00 != (UCurveFloat *)0x0) {
    fVar6 = UCurveFloat::GetFloatValue(this_00,param_2);
    pUVar5 = UInputPlatformSettings::Get();
    iVar3 = pUVar5->MaxTriggerFeedbackPosition;
    if ((int)fVar6 < pUVar5->MaxTriggerFeedbackPosition) {
      iVar3 = (int)fVar6;
    }
    iVar4 = 0;
    if (0 < iVar3) {
      iVar4 = iVar3;
    }
    return iVar4;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_743917833502588692>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\InputDeviceProperties.cpp"
                     ,0xec,"Data->FeedbackPositionCurve");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return 0;
}

// GetPrivateStaticClass @ 147be5670

UClass * __cdecl UInputDeviceTriggerFeedbackProperty::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputDeviceTriggerFeedbackProperty.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InputDeviceTriggerFeedbackProperty",
               &Z_Registration_Info_UClass_UInputDeviceTriggerFeedbackProperty.InnerSingleton,
               StaticRegisterNativesUInputDeviceTriggerFeedbackProperty,0xb8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInputDeviceTriggerFeedbackProperty>,
               InternalVTableHelperCtorCaller<UInputDeviceTriggerFeedbackProperty>,local_res8,
               UInputDeviceTriggerEffect::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputDeviceTriggerFeedbackProperty.InnerSingleton;
}

// GetStrengthValue @ 147be9fa0

int __thiscall
UInputDeviceTriggerFeedbackProperty::GetStrengthValue
          (UInputDeviceTriggerFeedbackProperty *this,FDeviceTriggerFeedbackData *param_1,
          float param_2)

{
  UCurveFloat *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  UInputPlatformSettings *pUVar5;
  float fVar6;
  
  this_00 = (param_1->FeedbackStrenghCurve).field0_0x0.DebugPtr;
  if (this_00 != (UCurveFloat *)0x0) {
    fVar6 = UCurveFloat::GetFloatValue(this_00,param_2);
    pUVar5 = UInputPlatformSettings::Get();
    iVar3 = pUVar5->MaxTriggerFeedbackStrength;
    if ((int)fVar6 < pUVar5->MaxTriggerFeedbackStrength) {
      iVar3 = (int)fVar6;
    }
    iVar4 = 0;
    if (0 < iVar3) {
      iVar4 = iVar3;
    }
    return iVar4;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_743917833502588681>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\InputDeviceProperties.cpp"
                     ,0xf7,"Data->FeedbackStrenghCurve");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return 0;
}

// RecalculateDuration @ 147bf9ef0

float __thiscall
UInputDeviceTriggerFeedbackProperty::RecalculateDuration(UInputDeviceTriggerFeedbackProperty *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  UCurveFloat *pUVar4;
  longlong lVar5;
  UCurveBase *pUVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  float fVar18;
  undefined1 local_res8 [8];
  float local_res10 [2];
  float local_res18 [2];
  int local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  local_res10[0] = 0.0;
  pUVar4 = (this->TriggerData).FeedbackPositionCurve.field0_0x0.DebugPtr;
  if (pUVar4 != (UCurveFloat *)0x0) {
    UCurveBase::GetTimeRange((UCurveBase *)pUVar4,local_res18,local_res10);
  }
  pUVar4 = (this->TriggerData).FeedbackStrenghCurve.field0_0x0.DebugPtr;
  if (pUVar4 != (UCurveFloat *)0x0) {
    UCurveBase::GetTimeRange((UCurveBase *)pUVar4,local_res18,local_res10);
  }
  iVar3 = *(int *)&(this->DeviceOverrideData).field_0x28;
  puVar1 = &(this->DeviceOverrideData).field_0x10;
  iVar14 = 0;
  uVar9 = 1;
  iVar16 = 0;
  iVar10 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->DeviceOverrideData).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar10 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_147bf9fbd;
      uVar13 = puVar17[lVar11 + 1];
    }
    uVar9 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar9 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iVar10 = iVar16 + -1 + local_res20;
    if (iVar3 < iVar10) {
      iVar10 = iVar3;
    }
  }
LAB_147bf9fbd:
  uVar13 = *(uint *)&(this->DeviceOverrideData).field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar9,iVar14);
  TStack_70.CurrentBitIndex = iVar10;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_70._28_4_ = iVar10;
  TStack_70.BaseBitIndex = iVar16;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(this->DeviceOverrideData).field_0x8 -
                       *(int *)&(this->DeviceOverrideData).field_0x34);
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    fVar18 = (float)(*pcVar7)();
    return fVar18;
  }
  uVar9 = *(uint *)&(this->DeviceOverrideData).field_0x28;
  if (uVar13 != uVar9) {
    puVar15 = *(undefined1 **)&(this->DeviceOverrideData).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_147bfa0c0;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar9 < (int)uVar13) {
      uVar13 = uVar9;
    }
  }
LAB_147bfa0c0:
  while( true ) {
    if (*(int *)&(this->DeviceOverrideData).field_0x8 -
        *(int *)&(this->DeviceOverrideData).field_0x34 != (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FDeviceTriggerFeedbackData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar11 = (longlong)TStack_70.CurrentBitIndex;
    if ((TStack_70.CurrentBitIndex == uVar13) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar5 = *(longlong *)&this->DeviceOverrideData;
    pUVar6 = *(UCurveBase **)(lVar11 * 0x20 + 8 + lVar5);
    if (pUVar6 != (UCurveBase *)0x0) {
      UCurveBase::GetTimeRange(pUVar6,local_res18,local_res10);
    }
    pUVar6 = *(UCurveBase **)(lVar11 * 0x20 + 0x10 + lVar5);
    if (pUVar6 != (UCurveBase *)0x0) {
      UCurveBase::GetTimeRange(pUVar6,local_res18,local_res10);
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  *(float *)&this->_padding_ = local_res10[0];
  return local_res10[0];
}

// StaticRegisterNativesUInputDeviceTriggerFeedbackProperty @ 147c036e0

void __cdecl
UInputDeviceTriggerFeedbackProperty::StaticRegisterNativesUInputDeviceTriggerFeedbackProperty(void)

{
  return;
}

