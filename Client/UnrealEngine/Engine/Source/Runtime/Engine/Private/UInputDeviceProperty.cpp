// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 24

// StaticClass @ 147b9ad20

UClass * __cdecl UInputDeviceProperty::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputDeviceProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InputDeviceProperty",
               &Z_Registration_Info_UClass_UInputDeviceProperty.InnerSingleton,
               StaticRegisterNativesUInputDeviceProperty,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UInputDeviceProperty>,
               InternalVTableHelperCtorCaller<UInputDeviceProperty>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputDeviceProperty.InnerSingleton;
}

// GetDeviceSpecificData<FAudioBasedVibrationData> @ 147baffe0

FAudioBasedVibrationData * __thiscall
UInputDeviceProperty::GetDeviceSpecificData<FAudioBasedVibrationData>
          (UInputDeviceProperty *this,FPlatformUserId param_1,FInputDeviceId param_2,
          TMap<FName,FAudioBasedVibrationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAudioBasedVibrationData,0>_>
          *param_3)

{
  UInputDeviceSubsystem *this_00;
  FHardwareDeviceIdentifier *pFVar1;
  FAudioBasedVibrationData *pFVar2;
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
                     *)param_3,pFVar1->HardwareDeviceIdentifier);
    return pFVar2;
  }
  return (FAudioBasedVibrationData *)0x0;
}

// GetDeviceSpecificData<FDeviceColorCurveData> @ 147bb0070

FDeviceColorCurveData * __thiscall
UInputDeviceProperty::GetDeviceSpecificData<FDeviceColorCurveData>
          (UInputDeviceProperty *this,FPlatformUserId param_1,FInputDeviceId param_2,
          TMap<FName,FDeviceColorCurveData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDeviceColorCurveData,0>_>
          *param_3)

{
  UInputDeviceSubsystem *this_00;
  FHardwareDeviceIdentifier *pFVar1;
  FDeviceColorCurveData *pFVar2;
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
    pFVar2 = TMapBase<FName,FDeviceColorCurveData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDeviceColorCurveData,0>_>
             ::Find((TMapBase<FName,FDeviceColorCurveData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDeviceColorCurveData,0>_>
                     *)param_3,pFVar1->HardwareDeviceIdentifier);
    return pFVar2;
  }
  return (FDeviceColorCurveData *)0x0;
}

// GetDeviceSpecificData<FDeviceColorData> @ 147bb0100

FDeviceColorData * __thiscall
UInputDeviceProperty::GetDeviceSpecificData<FDeviceColorData>
          (UInputDeviceProperty *this,FPlatformUserId param_1,FInputDeviceId param_2,
          TMap<FName,FDeviceColorData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDeviceColorData,0>_>
          *param_3)

{
  UInputDeviceSubsystem *this_00;
  FHardwareDeviceIdentifier *pFVar1;
  FDeviceColorData *pFVar2;
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
    pFVar2 = TMapBase<FName,FDeviceColorData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDeviceColorData,0>_>
             ::Find((TMapBase<FName,FDeviceColorData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDeviceColorData,0>_>
                     *)param_3,pFVar1->HardwareDeviceIdentifier);
    return pFVar2;
  }
  return (FDeviceColorData *)0x0;
}

// GetDeviceSpecificData<FDeviceTriggerFeedbackData> @ 147bb0190

FDeviceTriggerFeedbackData * __thiscall
UInputDeviceProperty::GetDeviceSpecificData<FDeviceTriggerFeedbackData>
          (UInputDeviceProperty *this,FPlatformUserId param_1,FInputDeviceId param_2,
          TMap<FName,FDeviceTriggerFeedbackData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDeviceTriggerFeedbackData,0>_>
          *param_3)

{
  UInputDeviceSubsystem *this_00;
  FHardwareDeviceIdentifier *pFVar1;
  FDeviceTriggerFeedbackData *pFVar2;
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
    pFVar2 = TMapBase<FName,FDeviceTriggerFeedbackData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDeviceTriggerFeedbackData,0>_>
             ::Find((TMapBase<FName,FDeviceTriggerFeedbackData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDeviceTriggerFeedbackData,0>_>
                     *)param_3,pFVar1->HardwareDeviceIdentifier);
    return pFVar2;
  }
  return (FDeviceTriggerFeedbackData *)0x0;
}

// GetDeviceSpecificData<FDeviceTriggerTriggerResistanceData> @ 147bb0220

FDeviceTriggerTriggerResistanceData * __thiscall
UInputDeviceProperty::GetDeviceSpecificData<FDeviceTriggerTriggerResistanceData>
          (UInputDeviceProperty *this,FPlatformUserId param_1,FInputDeviceId param_2,
          TMap<FName,FDeviceTriggerTriggerResistanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDeviceTriggerTriggerResistanceData,0>_>
          *param_3)

{
  UInputDeviceSubsystem *this_00;
  FHardwareDeviceIdentifier *pFVar1;
  FDeviceTriggerTriggerResistanceData *pFVar2;
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
    pFVar2 = TMapBase<FName,FDeviceTriggerTriggerResistanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDeviceTriggerTriggerResistanceData,0>_>
             ::Find((TMapBase<FName,FDeviceTriggerTriggerResistanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDeviceTriggerTriggerResistanceData,0>_>
                     *)param_3,pFVar1->HardwareDeviceIdentifier);
    return pFVar2;
  }
  return (FDeviceTriggerTriggerResistanceData *)0x0;
}

// GetDeviceSpecificData<FDeviceTriggerTriggerVibrationData> @ 147bb02b0

FDeviceTriggerTriggerVibrationData * __thiscall
UInputDeviceProperty::GetDeviceSpecificData<FDeviceTriggerTriggerVibrationData>
          (UInputDeviceProperty *this,FPlatformUserId param_1,FInputDeviceId param_2,
          TMap<FName,FDeviceTriggerTriggerVibrationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDeviceTriggerTriggerVibrationData,0>_>
          *param_3)

{
  UInputDeviceSubsystem *this_00;
  FHardwareDeviceIdentifier *pFVar1;
  FDeviceTriggerTriggerVibrationData *pFVar2;
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
    pFVar2 = TMapBase<FName,FDeviceTriggerTriggerVibrationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDeviceTriggerTriggerVibrationData,0>_>
             ::Find((TMapBase<FName,FDeviceTriggerTriggerVibrationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDeviceTriggerTriggerVibrationData,0>_>
                     *)param_3,pFVar1->HardwareDeviceIdentifier);
    return pFVar2;
  }
  return (FDeviceTriggerTriggerVibrationData *)0x0;
}

// UInputDeviceProperty @ 147bbcf10

UInputDeviceProperty * __thiscall
UInputDeviceProperty::UInputDeviceProperty(UInputDeviceProperty *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->PropertyDuration = 0.0;
  this->_padding_ = (longlong)&___7UInputDeviceProperty__6B_;
  return this;
}

// UInputDeviceProperty @ 147bbcf40

UInputDeviceProperty * __thiscall
UInputDeviceProperty::UInputDeviceProperty(UInputDeviceProperty *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->PropertyDuration = 0.0;
  this->_padding_ = (longlong)&___7UInputDeviceProperty__6B_;
  return this;
}

// ~UInputDeviceProperty @ 147bbf770

void __thiscall UInputDeviceProperty::~UInputDeviceProperty(UInputDeviceProperty *this)

{
  this->_padding_ = (longlong)&___7UInputDeviceProperty__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// ApplyDeviceProperty @ 147bc9b30

void __thiscall
UInputDeviceProperty::ApplyDeviceProperty
          (UInputDeviceProperty *this,FPlatformUserId param_1,FInputDeviceId param_2)

{
  FInputDeviceProperty *pFVar1;
  
  pFVar1 = (FInputDeviceProperty *)(**(code **)(this->_padding_ + 0x2c8))();
  ApplyDeviceProperty_Internal(param_1,param_2,pFVar1);
  return;
}

// ApplyDeviceProperty_Internal @ 147bc9c10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UInputDeviceProperty::ApplyDeviceProperty_Internal
          (FPlatformUserId param_1,FInputDeviceId param_2,FInputDeviceProperty *param_3)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  IPlatformInputDeviceMapper *pIVar4;
  undefined4 local_res18 [2];
  
  if (param_3 == (FInputDeviceProperty *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_743917833502588900>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\InputDeviceProperties.cpp"
                       ,0x1c,"RawProperty");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    FSlateApplication::Get();
    if (FSlateApplication::CurrentApplication.Object != (FSlateApplication *)0x0) {
      FSlateApplication::Get();
      if ((FSlateApplicationBase::PlatformApplication.Object == (GenericApplication *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      plVar3 = (longlong *)
               (**(code **)((FSlateApplicationBase::PlatformApplication.Object)->_padding_ + 0xe0))
                         ();
      if (plVar3 != (longlong *)0x0) {
        local_res18[0] = 0xffffffff;
        pIVar4 = IPlatformInputDeviceMapper::Get();
        (**(code **)(pIVar4->_padding_ + 0xa0))
                  (pIVar4,param_1.InternalId,local_res18,param_2.InternalId);
        (**(code **)(*plVar3 + 0x20))(plVar3,local_res18[0],param_3);
      }
    }
  }
  return;
}

// EvaluateDeviceProperty @ 147bd8cc0

void __thiscall
UInputDeviceProperty::EvaluateDeviceProperty
          (UInputDeviceProperty *this,FPlatformUserId param_1,FInputDeviceId param_2,float param_3,
          float param_4)

{
  UFunction *this_00;
  UClass *pUVar1;
  int local_28;
  int local_24;
  float local_20;
  float local_1c;
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UInputDeviceProperty_EvaluateDeviceProperty);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_1c = param_4;
    local_28 = param_1.InternalId;
    local_24 = param_2.InternalId;
    local_20 = param_3;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_28);
  }
  else {
    (**(code **)(this->_padding_ + 0x2b0))
              (this,param_1.InternalId,param_2.InternalId,param_3,param_4);
  }
  return;
}

// EvaluateDeviceProperty_Implementation @ 147bd8ef0

void __thiscall
UInputDeviceProperty::EvaluateDeviceProperty_Implementation
          (UInputDeviceProperty *this,FPlatformUserId param_1,FInputDeviceId param_2,float param_3,
          float param_4)

{
  return;
}

// GetDuration @ 147bdfd30

float __thiscall UInputDeviceProperty::GetDuration(UInputDeviceProperty *this)

{
  return this->PropertyDuration;
}

// GetInternalDeviceProperty @ 147be0aa0

FInputDeviceProperty * __thiscall
UInputDeviceProperty::GetInternalDeviceProperty(UInputDeviceProperty *this)

{
  return (FInputDeviceProperty *)0x0;
}

// GetPrivateStaticClass @ 147be5440

UClass * __cdecl UInputDeviceProperty::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputDeviceProperty.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"InputDeviceProperty",
               &Z_Registration_Info_UClass_UInputDeviceProperty.InnerSingleton,
               StaticRegisterNativesUInputDeviceProperty,0x30,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UInputDeviceProperty>,
               InternalVTableHelperCtorCaller<UInputDeviceProperty>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputDeviceProperty.InnerSingleton;
}

// RecalculateDuration @ 147bf9ee0

float __thiscall UInputDeviceProperty::RecalculateDuration(UInputDeviceProperty *this)

{
  return this->PropertyDuration;
}

// ResetDeviceProperty @ 147bfdb40

void __thiscall
UInputDeviceProperty::ResetDeviceProperty
          (UInputDeviceProperty *this,FPlatformUserId param_1,FInputDeviceId param_2,bool param_3)

{
  UFunction *this_00;
  UClass *pUVar1;
  int local_18;
  int local_14;
  undefined1 local_10;
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_UInputDeviceProperty_ResetDeviceProperty);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_18 = param_1.InternalId;
    local_14 = param_2.InternalId;
    local_10 = param_3;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_18);
  }
  else {
    (**(code **)(this->_padding_ + 0x2b8))(this,param_1.InternalId,param_2.InternalId,param_3);
  }
  return;
}

// ResetDeviceProperty_Implementation @ 147bfdce0

void __thiscall
UInputDeviceProperty::ResetDeviceProperty_Implementation
          (UInputDeviceProperty *this,FPlatformUserId param_1,FInputDeviceId param_2,bool param_3)

{
  return;
}

// StaticRegisterNativesUInputDeviceProperty @ 147c03650

void __cdecl UInputDeviceProperty::StaticRegisterNativesUInputDeviceProperty(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UInputDeviceProperty_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execApplyDeviceProperty @ 147c12910

void __cdecl
UInputDeviceProperty::execApplyDeviceProperty(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  
  local_res10[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2c0))(param_1,local_res10[0],local_res8[0]);
  return;
}

// execEvaluateDeviceProperty @ 147c13ac0

void __cdecl
UInputDeviceProperty::execEvaluateDeviceProperty(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  undefined4 local_18 [4];
  
  local_18[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res20[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2b0))
            (param_1,local_18[0],local_res20[0],local_res10[0],local_res8[0]);
  return;
}

// execResetDeviceProperty @ 147c15400

void __cdecl
UInputDeviceProperty::execResetDeviceProperty(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  
  local_res20[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2b8))
            (param_1,local_res20[0],local_res10[0],local_res8[0] != 0);
  return;
}

