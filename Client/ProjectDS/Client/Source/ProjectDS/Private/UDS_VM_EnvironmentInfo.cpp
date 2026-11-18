// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 27

// SetInfoHoveredEvent_WrapperImpl @ 14b641cf0

void __cdecl UDS_VM_EnvironmentInfo::SetInfoHoveredEvent_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::InfoTooltipVisibility.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::InfoTooltipVisibility.FieldName;
  if (*(char *)((longlong)param_1 + 0x394) != '\x04') {
    *(undefined1 *)((longlong)param_1 + 0x394) = 4;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  return;
}

// SetInfoUnhoveredEvent_WrapperImpl @ 14b641d00

void __cdecl UDS_VM_EnvironmentInfo::SetInfoUnhoveredEvent_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  iStack_10 = FFieldNotificationClassDescriptor::InfoTooltipVisibility.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::InfoTooltipVisibility.FieldName;
  if (*(char *)((longlong)param_1 + 0x394) != '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x394) = 1;
    (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
              ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  }
  return;
}

// SetInfoTooltipVisibility_WrapperImpl @ 14b641d10

void __cdecl
UDS_VM_EnvironmentInfo::SetInfoTooltipVisibility_WrapperImpl(void *param_1,void *param_2)

{
  SetInfoTooltipVisibility(param_1,*(ESlateVisibility *)param_2);
  return;
}

// StaticClass @ 14b641d20

UClass * __cdecl UDS_VM_EnvironmentInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_EnvironmentInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_EnvironmentInfo",
               &Z_Registration_Info_UClass_UDS_VM_EnvironmentInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_EnvironmentInfo,0x3f0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_EnvironmentInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_EnvironmentInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_EnvironmentInfo.InnerSingleton;
}

// UDS_VM_EnvironmentInfo @ 14b6478e0

UDS_VM_EnvironmentInfo * __thiscall
UDS_VM_EnvironmentInfo::UDS_VM_EnvironmentInfo(UDS_VM_EnvironmentInfo *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_EnvironmentInfo__6B_;
  *(undefined8 *)&(this->InfoHoveredEvent).Delegate = 0;
  *(undefined8 *)&(this->InfoHoveredEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->InfoHoveredEvent).Delegate.field_0x10 = 0;
  (this->InfoUnhoveredEvent)._padding_ = '\0';
  (this->InfoUnhoveredEvent).bIsCustomSelected = false;
  (this->InfoUnhoveredEvent).bIsLacked = false;
  (this->InfoUnhoveredEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->InfoUnhoveredEvent).Delegate = 0;
  *(undefined8 *)&(this->InfoUnhoveredEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->InfoUnhoveredEvent).Delegate.field_0x10 = 0;
  (this->ZoneName).StringTableType = None;
  (this->ZoneName).StringTableID = 0;
  (this->ZoneName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ZoneName).StringEnumTableNameID.Number = 0;
  (this->ZoneName).DateTime.Ticks = 0;
  (this->ZoneName).TimeSpan.Ticks = 0;
  (this->ZoneName).TimeExpressionType = None;
  (this->ZoneName).IsExpression = false;
  (this->ZoneName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ZoneName).UniqueString.Data.ArrayNum = 0;
  (this->ZoneName).UniqueString.Data.ArrayMax = 0;
  (this->ZoneName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ZoneName).FormatArgs.ArrayNum = 0;
  (this->ZoneName).FormatArgs.ArrayMax = 0;
  (this->ZoneClimateText).StringTableType = None;
  (this->ZoneClimateText).StringTableID = 0;
  (this->ZoneClimateText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ZoneClimateText).StringEnumTableNameID.Number = 0;
  (this->ZoneClimateText).DateTime.Ticks = 0;
  (this->ZoneClimateText).TimeSpan.Ticks = 0;
  (this->ZoneClimateText).TimeExpressionType = None;
  (this->ZoneClimateText).IsExpression = false;
  (this->ZoneClimateText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ZoneClimateText).UniqueString.Data.ArrayNum = 0;
  (this->ZoneClimateText).UniqueString.Data.ArrayMax = 0;
  (this->ZoneClimateText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ZoneClimateText).FormatArgs.ArrayNum = 0;
  (this->ZoneClimateText).FormatArgs.ArrayMax = 0;
  (this->TodayWeatherText).StringTableType = None;
  (this->TodayWeatherText).StringTableID = 0;
  (this->TodayWeatherText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TodayWeatherText).StringEnumTableNameID.Number = 0;
  (this->TodayWeatherText).DateTime.Ticks = 0;
  (this->TodayWeatherText).TimeSpan.Ticks = 0;
  (this->TodayWeatherText).TimeExpressionType = None;
  (this->TodayWeatherText).IsExpression = false;
  (this->TodayWeatherText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->TodayWeatherText).UniqueString.Data.ArrayNum = 0;
  (this->TodayWeatherText).UniqueString.Data.ArrayMax = 0;
  (this->TodayWeatherText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TodayWeatherText).FormatArgs.ArrayNum = 0;
  (this->TodayWeatherText).FormatArgs.ArrayMax = 0;
  (this->NextDayWeatherText).StringTableType = None;
  (this->NextDayWeatherText).StringTableID = 0;
  (this->NextDayWeatherText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->NextDayWeatherText).StringEnumTableNameID.Number = 0;
  (this->NextDayWeatherText).DateTime.Ticks = 0;
  (this->NextDayWeatherText).TimeSpan.Ticks = 0;
  (this->NextDayWeatherText).TimeExpressionType = None;
  (this->NextDayWeatherText).IsExpression = false;
  (this->NextDayWeatherText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->NextDayWeatherText).UniqueString.Data.ArrayNum = 0;
  (this->NextDayWeatherText).UniqueString.Data.ArrayMax = 0;
  (this->NextDayWeatherText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NextDayWeatherText).FormatArgs.ArrayNum = 0;
  (this->NextDayWeatherText).FormatArgs.ArrayMax = 0;
  (this->CurrentGameTime).StringTableType = None;
  (this->CurrentGameTime).StringTableID = 0;
  (this->CurrentGameTime).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CurrentGameTime).StringEnumTableNameID.Number = 0;
  (this->CurrentGameTime).DateTime.Ticks = 0;
  (this->CurrentGameTime).TimeSpan.Ticks = 0;
  (this->CurrentGameTime).TimeExpressionType = None;
  (this->CurrentGameTime).IsExpression = false;
  (this->CurrentGameTime).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentGameTime).UniqueString.Data.ArrayNum = 0;
  (this->CurrentGameTime).UniqueString.Data.ArrayMax = 0;
  (this->CurrentGameTime).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentGameTime).FormatArgs.ArrayNum = 0;
  (this->CurrentGameTime).FormatArgs.ArrayMax = 0;
  (this->TimeUntilNextSunrise).StringTableType = None;
  (this->TimeUntilNextSunrise).StringTableID = 0;
  (this->TimeUntilNextSunrise).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TimeUntilNextSunrise).StringEnumTableNameID.Number = 0;
  (this->TimeUntilNextSunrise).DateTime.Ticks = 0;
  (this->TimeUntilNextSunrise).TimeSpan.Ticks = 0;
  (this->TimeUntilNextSunrise).TimeExpressionType = None;
  (this->TimeUntilNextSunrise).IsExpression = false;
  (this->TimeUntilNextSunrise).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TimeUntilNextSunrise).UniqueString.Data.ArrayNum = 0;
  (this->TimeUntilNextSunrise).UniqueString.Data.ArrayMax = 0;
  (this->InfoHoveredEvent)._padding_ = '\0';
  (this->InfoHoveredEvent).bIsCustomSelected = false;
  (this->InfoHoveredEvent).bIsLacked = false;
  (this->InfoHoveredEvent).bIsCustomDisabled = false;
  (this->TimeUntilNextSunrise).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TimeUntilNextSunrise).FormatArgs.ArrayNum = 0;
  (this->TimeUntilNextSunrise).FormatArgs.ArrayMax = 0;
  (this->TimeUntilNextNight).StringTableType = None;
  (this->TimeUntilNextNight).StringTableID = 0;
  (this->TimeUntilNextNight).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TimeUntilNextNight).StringEnumTableNameID.Number = 0;
  (this->TimeUntilNextNight).DateTime.Ticks = 0;
  (this->TimeUntilNextNight).TimeSpan.Ticks = 0;
  (this->TimeUntilNextNight).TimeExpressionType = None;
  (this->TimeUntilNextNight).IsExpression = false;
  (this->TimeUntilNextNight).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TimeUntilNextNight).UniqueString.Data.ArrayNum = 0;
  (this->TimeUntilNextNight).UniqueString.Data.ArrayMax = 0;
  (this->TimeUntilNextNight).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TimeUntilNextNight).FormatArgs.ArrayNum = 0;
  (this->TimeUntilNextNight).FormatArgs.ArrayMax = 0;
  (this->TimeUntilNextDay).StringTableType = None;
  (this->TimeUntilNextDay).StringTableID = 0;
  (this->TimeUntilNextDay).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TimeUntilNextDay).StringEnumTableNameID.Number = 0;
  (this->TimeUntilNextDay).DateTime.Ticks = 0;
  (this->TimeUntilNextDay).TimeSpan.Ticks = 0;
  (this->TimeUntilNextDay).TimeExpressionType = None;
  (this->TimeUntilNextDay).IsExpression = false;
  (this->TimeUntilNextDay).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->TimeUntilNextDay).UniqueString.Data.ArrayNum = 0;
  (this->TimeUntilNextDay).UniqueString.Data.ArrayMax = 0;
  (this->TimeUntilNextDay).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TimeUntilNextDay).FormatArgs.ArrayNum = 0;
  (this->TimeUntilNextDay).FormatArgs.ArrayMax = 0;
  this->DayNightSwitcherIndex = 0;
  this->ProgressDay = 0.0;
  this->ProgressNight = 0.0;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  this->ZoneId = 0;
  this->DistrictID = 0;
  this->IsNight = false;
  this->ZOrderDay = 10;
  this->ZOrderNight = 0;
  this->InfoTooltipVisibility = Collapsed;
  (this->AnimationEvent).NumberOfLoops = 1;
  return this;
}

// UDS_VM_EnvironmentInfo @ 14b647c20

UDS_VM_EnvironmentInfo * __thiscall
UDS_VM_EnvironmentInfo::UDS_VM_EnvironmentInfo
          (UDS_VM_EnvironmentInfo *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_EnvironmentInfo__6B_;
  *(undefined8 *)&(this->InfoHoveredEvent).Delegate = 0;
  *(undefined8 *)&(this->InfoHoveredEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->InfoHoveredEvent).Delegate.field_0x10 = 0;
  (this->InfoUnhoveredEvent)._padding_ = '\0';
  (this->InfoUnhoveredEvent).bIsCustomSelected = false;
  (this->InfoUnhoveredEvent).bIsLacked = false;
  (this->InfoUnhoveredEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->InfoUnhoveredEvent).Delegate = 0;
  *(undefined8 *)&(this->InfoUnhoveredEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->InfoUnhoveredEvent).Delegate.field_0x10 = 0;
  (this->ZoneName).StringTableType = None;
  (this->ZoneName).StringTableID = 0;
  (this->ZoneName).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ZoneName).StringEnumTableNameID.Number = 0;
  (this->ZoneName).DateTime.Ticks = 0;
  (this->ZoneName).TimeSpan.Ticks = 0;
  (this->ZoneName).TimeExpressionType = None;
  (this->ZoneName).IsExpression = false;
  (this->ZoneName).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ZoneName).UniqueString.Data.ArrayNum = 0;
  (this->ZoneName).UniqueString.Data.ArrayMax = 0;
  (this->ZoneName).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ZoneName).FormatArgs.ArrayNum = 0;
  (this->ZoneName).FormatArgs.ArrayMax = 0;
  (this->ZoneClimateText).StringTableType = None;
  (this->ZoneClimateText).StringTableID = 0;
  (this->ZoneClimateText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->ZoneClimateText).StringEnumTableNameID.Number = 0;
  (this->ZoneClimateText).DateTime.Ticks = 0;
  (this->ZoneClimateText).TimeSpan.Ticks = 0;
  (this->ZoneClimateText).TimeExpressionType = None;
  (this->ZoneClimateText).IsExpression = false;
  (this->ZoneClimateText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ZoneClimateText).UniqueString.Data.ArrayNum = 0;
  (this->ZoneClimateText).UniqueString.Data.ArrayMax = 0;
  (this->ZoneClimateText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ZoneClimateText).FormatArgs.ArrayNum = 0;
  (this->ZoneClimateText).FormatArgs.ArrayMax = 0;
  (this->TodayWeatherText).StringTableType = None;
  (this->TodayWeatherText).StringTableID = 0;
  (this->TodayWeatherText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TodayWeatherText).StringEnumTableNameID.Number = 0;
  (this->TodayWeatherText).DateTime.Ticks = 0;
  (this->TodayWeatherText).TimeSpan.Ticks = 0;
  (this->TodayWeatherText).TimeExpressionType = None;
  (this->TodayWeatherText).IsExpression = false;
  (this->TodayWeatherText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->TodayWeatherText).UniqueString.Data.ArrayNum = 0;
  (this->TodayWeatherText).UniqueString.Data.ArrayMax = 0;
  (this->TodayWeatherText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TodayWeatherText).FormatArgs.ArrayNum = 0;
  (this->TodayWeatherText).FormatArgs.ArrayMax = 0;
  (this->NextDayWeatherText).StringTableType = None;
  (this->NextDayWeatherText).StringTableID = 0;
  (this->NextDayWeatherText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->NextDayWeatherText).StringEnumTableNameID.Number = 0;
  (this->NextDayWeatherText).DateTime.Ticks = 0;
  (this->NextDayWeatherText).TimeSpan.Ticks = 0;
  (this->NextDayWeatherText).TimeExpressionType = None;
  (this->NextDayWeatherText).IsExpression = false;
  (this->NextDayWeatherText).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->NextDayWeatherText).UniqueString.Data.ArrayNum = 0;
  (this->NextDayWeatherText).UniqueString.Data.ArrayMax = 0;
  (this->NextDayWeatherText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NextDayWeatherText).FormatArgs.ArrayNum = 0;
  (this->NextDayWeatherText).FormatArgs.ArrayMax = 0;
  (this->CurrentGameTime).StringTableType = None;
  (this->CurrentGameTime).StringTableID = 0;
  (this->CurrentGameTime).StringEnumTableNameID.ComparisonIndex = 0;
  (this->CurrentGameTime).StringEnumTableNameID.Number = 0;
  (this->CurrentGameTime).DateTime.Ticks = 0;
  (this->CurrentGameTime).TimeSpan.Ticks = 0;
  (this->CurrentGameTime).TimeExpressionType = None;
  (this->CurrentGameTime).IsExpression = false;
  (this->CurrentGameTime).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentGameTime).UniqueString.Data.ArrayNum = 0;
  (this->CurrentGameTime).UniqueString.Data.ArrayMax = 0;
  (this->CurrentGameTime).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentGameTime).FormatArgs.ArrayNum = 0;
  (this->CurrentGameTime).FormatArgs.ArrayMax = 0;
  (this->TimeUntilNextSunrise).StringTableType = None;
  (this->TimeUntilNextSunrise).StringTableID = 0;
  (this->TimeUntilNextSunrise).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TimeUntilNextSunrise).StringEnumTableNameID.Number = 0;
  (this->TimeUntilNextSunrise).DateTime.Ticks = 0;
  (this->TimeUntilNextSunrise).TimeSpan.Ticks = 0;
  (this->TimeUntilNextSunrise).TimeExpressionType = None;
  (this->TimeUntilNextSunrise).IsExpression = false;
  (this->TimeUntilNextSunrise).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TimeUntilNextSunrise).UniqueString.Data.ArrayNum = 0;
  (this->TimeUntilNextSunrise).UniqueString.Data.ArrayMax = 0;
  (this->InfoHoveredEvent)._padding_ = '\0';
  (this->InfoHoveredEvent).bIsCustomSelected = false;
  (this->InfoHoveredEvent).bIsLacked = false;
  (this->InfoHoveredEvent).bIsCustomDisabled = false;
  (this->TimeUntilNextSunrise).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TimeUntilNextSunrise).FormatArgs.ArrayNum = 0;
  (this->TimeUntilNextSunrise).FormatArgs.ArrayMax = 0;
  (this->TimeUntilNextNight).StringTableType = None;
  (this->TimeUntilNextNight).StringTableID = 0;
  (this->TimeUntilNextNight).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TimeUntilNextNight).StringEnumTableNameID.Number = 0;
  (this->TimeUntilNextNight).DateTime.Ticks = 0;
  (this->TimeUntilNextNight).TimeSpan.Ticks = 0;
  (this->TimeUntilNextNight).TimeExpressionType = None;
  (this->TimeUntilNextNight).IsExpression = false;
  (this->TimeUntilNextNight).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TimeUntilNextNight).UniqueString.Data.ArrayNum = 0;
  (this->TimeUntilNextNight).UniqueString.Data.ArrayMax = 0;
  (this->TimeUntilNextNight).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TimeUntilNextNight).FormatArgs.ArrayNum = 0;
  (this->TimeUntilNextNight).FormatArgs.ArrayMax = 0;
  (this->TimeUntilNextDay).StringTableType = None;
  (this->TimeUntilNextDay).StringTableID = 0;
  (this->TimeUntilNextDay).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TimeUntilNextDay).StringEnumTableNameID.Number = 0;
  (this->TimeUntilNextDay).DateTime.Ticks = 0;
  (this->TimeUntilNextDay).TimeSpan.Ticks = 0;
  (this->TimeUntilNextDay).TimeExpressionType = None;
  (this->TimeUntilNextDay).IsExpression = false;
  (this->TimeUntilNextDay).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->TimeUntilNextDay).UniqueString.Data.ArrayNum = 0;
  (this->TimeUntilNextDay).UniqueString.Data.ArrayMax = 0;
  (this->TimeUntilNextDay).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TimeUntilNextDay).FormatArgs.ArrayNum = 0;
  (this->TimeUntilNextDay).FormatArgs.ArrayMax = 0;
  this->DayNightSwitcherIndex = 0;
  this->ProgressDay = 0.0;
  this->ProgressNight = 0.0;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  this->ZoneId = 0;
  this->DistrictID = 0;
  this->IsNight = false;
  this->ZOrderDay = 10;
  this->ZOrderNight = 0;
  this->InfoTooltipVisibility = Collapsed;
  (this->AnimationEvent).NumberOfLoops = 1;
  return this;
}

// ~UDS_VM_EnvironmentInfo @ 14b6491f0

void __thiscall UDS_VM_EnvironmentInfo::~UDS_VM_EnvironmentInfo(UDS_VM_EnvironmentInfo *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_EnvironmentInfo__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_ValidAnimation);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationEvent).Delegate_AnimationFinish);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TimeUntilNextDay).FormatArgs.AllocatorInstance.Data,
             (this->TimeUntilNextDay).FormatArgs.ArrayNum);
  pFVar2 = (this->TimeUntilNextDay).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TimeUntilNextDay).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TimeUntilNextNight).FormatArgs.AllocatorInstance.Data,
             (this->TimeUntilNextNight).FormatArgs.ArrayNum);
  pFVar2 = (this->TimeUntilNextNight).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TimeUntilNextNight).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TimeUntilNextSunrise).FormatArgs.AllocatorInstance.Data,
             (this->TimeUntilNextSunrise).FormatArgs.ArrayNum);
  pFVar2 = (this->TimeUntilNextSunrise).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TimeUntilNextSunrise).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->CurrentGameTime).FormatArgs.AllocatorInstance.Data,
             (this->CurrentGameTime).FormatArgs.ArrayNum);
  pFVar2 = (this->CurrentGameTime).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->CurrentGameTime).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->NextDayWeatherText).FormatArgs.AllocatorInstance.Data,
             (this->NextDayWeatherText).FormatArgs.ArrayNum);
  pFVar2 = (this->NextDayWeatherText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->NextDayWeatherText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TodayWeatherText).FormatArgs.AllocatorInstance.Data,
             (this->TodayWeatherText).FormatArgs.ArrayNum);
  pFVar2 = (this->TodayWeatherText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TodayWeatherText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ZoneClimateText).FormatArgs.AllocatorInstance.Data,
             (this->ZoneClimateText).FormatArgs.ArrayNum);
  pFVar2 = (this->ZoneClimateText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ZoneClimateText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->ZoneName).FormatArgs.AllocatorInstance.Data,
             (this->ZoneName).FormatArgs.ArrayNum);
  pFVar2 = (this->ZoneName).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ZoneName).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->InfoUnhoveredEvent).Delegate);
  pvVar1 = *(void **)&(this->InfoUnhoveredEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->InfoUnhoveredEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->InfoHoveredEvent).Delegate);
  pvVar1 = *(void **)&(this->InfoHoveredEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->InfoHoveredEvent).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b64afa0

IClassDescriptor * __thiscall
UDS_VM_EnvironmentInfo::GetFieldNotificationDescriptor(UDS_VM_EnvironmentInfo *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_EnvironmentInfo::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b64b750

UClass * __cdecl UDS_VM_EnvironmentInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_EnvironmentInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_EnvironmentInfo",
               &Z_Registration_Info_UClass_UDS_VM_EnvironmentInfo.InnerSingleton,
               StaticRegisterNativesUDS_VM_EnvironmentInfo,0x3f0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_EnvironmentInfo>,
               InternalVTableHelperCtorCaller<UDS_VM_EnvironmentInfo>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_EnvironmentInfo.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_EnvironmentInfo @ 14b64bef0

void __cdecl UDS_VM_EnvironmentInfo::StaticRegisterNativesUDS_VM_EnvironmentInfo(void)

{
  return;
}

// BindModel @ 14bdb1990

void __thiscall UDS_VM_EnvironmentInfo::BindModel(UDS_VM_EnvironmentInfo *this)

{
  UDS_ZoneManager *pUVar1;
  UDS_EnvironmentEvent *pUVar2;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_ZoneManager::GetInst();
  if (pUVar1 != (UDS_ZoneManager *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_EnvironmentInfo>
              ((TMulticastDelegateRegistration<void___cdecl(unsigned_int,unsigned_int),FDefaultDelegateUserPolicy>
                *)&pUVar1->ZoneDistrictChangedDelegate,(UDS_VM_EnvironmentInfo *)&stack0x00000010,
               (pmf_e2f19c0c *)this);
  }
  pUVar2 = UDS_EnvironmentEvent::GetEvent();
  if (pUVar2 != (UDS_EnvironmentEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnUpdateGameTime,this)
    ;
    TMulticastDelegateRegistration<void___cdecl(FDS_InGameTimeData_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_EnvironmentInfo>
              ((TMulticastDelegateRegistration<void___cdecl(FDS_InGameTimeData_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar2->OnUpdateGameTime,(UDS_VM_EnvironmentInfo *)&stack0x00000010,
               (pmf_a316dd30 *)this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2->OnUpdateEnvironment,
               this);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_EnvironmentUpdate),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_VM_EnvironmentInfo>
              (&pUVar2->OnUpdateEnvironment,(UDS_VM_EnvironmentInfo *)&stack0x00000010,
               (pmf_3da60f1e *)this);
  }
  return;
}

// GetWeatherUpdateInfo @ 14bdc4a90

void __thiscall
UDS_VM_EnvironmentInfo::GetWeatherUpdateInfo
          (UDS_VM_EnvironmentInfo *this,FDS_DayWeatherData *param_1,int param_2,int *param_3,
          EDS_WeatherType *param_4,float *param_5)

{
  EDS_WeatherType EVar1;
  int iVar2;
  FDS_EnvWeatherTableRow *pFVar3;
  UEnum *pUVar4;
  int local_res20;
  float fStackX_24;
  
  FDS_DayWeatherData::GetWeatherForecastData(param_1,(int)&local_res20);
  *param_4 = Clear;
  *param_5 = 0.0;
  if ((0 < local_res20) && (0.0 < fStackX_24)) {
    pFVar3 = FDS_EnvWeatherTableRow::Get((longlong)local_res20,true);
    if (pFVar3 != (FDS_EnvWeatherTableRow *)0x0) {
      *param_4 = pFVar3->WeatherType;
      *param_5 = fStackX_24;
    }
  }
  EVar1 = *param_4;
  pUVar4 = StaticEnum<enum_EDS_WeatherType>();
  iVar2 = DS_Util::GetEnumIconID(pUVar4,(uint)EVar1);
  *param_3 = iVar2;
  return;
}

// InitViewModel @ 14bdc7300

void __thiscall UDS_VM_EnvironmentInfo::InitViewModel(UDS_VM_EnvironmentInfo *this)

{
  return;
}

// OnChangedZoneDistrictID @ 14bdcab50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_EnvironmentInfo::OnChangedZoneDistrictID
          (UDS_VM_EnvironmentInfo *this,uint param_1,uint param_2)

{
  FDS_ZoneBaseTableRow *this_00;
  UDS_LogManager *pUVar1;
  FDS_StringWorldTableRow *pFVar2;
  undefined1 auStackY_188 [32];
  FName local_148;
  int local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  this->ZoneId = param_1;
  this->DistrictID = param_2;
  this_00 = FDS_ZoneBaseTableRow::Get((ulonglong)param_1,true);
  if (this_00 == (FDS_ZoneBaseTableRow *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_EnvironmentInfo::OnChangedZoneDistrictID",0x2f,Yes);
      UDS_LogManager::PrintLog
                (pUVar1,1,Warning,local_138.Ptr,0x123,
                 L"[Env] zoneBaseTableRow is invalid. ZoneID : %d");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    pFVar2 = FDS_ZoneBaseTableRow::ID_ZoneNameTable(this_00);
    FDS_Text::SetTextFromStringTable(&this->ZoneName,pFVar2);
    local_140 = FFieldNotificationClassDescriptor::ZoneName.BitNumber;
    local_148 = FFieldNotificationClassDescriptor::ZoneName.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_148);
    UpdateZoneClimate(this,this->ZoneId,this->DistrictID);
  }
  return;
}

// OnInfoHoveredEvent @ 14bdcefe0

void __thiscall
UDS_VM_EnvironmentInfo::OnInfoHoveredEvent
          (UDS_VM_EnvironmentInfo *this,FDS_ButtonEventField *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::InfoTooltipVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::InfoTooltipVisibility.FieldName;
  if (this->InfoTooltipVisibility != SelfHitTestInvisible) {
    this->InfoTooltipVisibility = SelfHitTestInvisible;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnInfoUnhoveredEvent @ 14bdcf030

void __thiscall
UDS_VM_EnvironmentInfo::OnInfoUnhoveredEvent
          (UDS_VM_EnvironmentInfo *this,FDS_ButtonEventField *param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::InfoTooltipVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::InfoTooltipVisibility.FieldName;
  if (this->InfoTooltipVisibility != Collapsed) {
    this->InfoTooltipVisibility = Collapsed;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// OnSetViewModel @ 14bddba40

void __thiscall
UDS_VM_EnvironmentInfo::OnSetViewModel
          (UDS_VM_EnvironmentInfo *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  int iVar3;
  char cVar4;
  undefined1 uVar5;
  UDS_ZoneManager *pUVar6;
  UDS_EnvironmentEvent *pUVar7;
  longlong *plVar8;
  FName local_28;
  int local_20;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pUVar6 = UDS_ZoneManager::GetInst();
  if (pUVar6 != (UDS_ZoneManager *)0x0) {
    OnChangedZoneDistrictID(this,pUVar6->ZoneID,pUVar6->DistrictID);
  }
  pUVar7 = UDS_EnvironmentEvent::GetEvent();
  if (pUVar7 == (UDS_EnvironmentEvent *)0x0) goto LAB_14bddbb00;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar7->QueryDayNight,
             (FReadAccessScope *)&local_28);
  if ((*(int *)&(pUVar7->QueryDayNight).Delegate.field_0x10 == 0) ||
     (plVar8 = *(longlong **)&(pUVar7->QueryDayNight).Delegate.field_0x8, plVar8 == (longlong *)0x0)
     ) {
LAB_14bddbaee:
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_28);
    uVar5 = false;
  }
  else {
    cVar4 = (**(code **)(*plVar8 + 0x38))();
    if (cVar4 == '\0') goto LAB_14bddbaee;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_28);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar7->QueryDayNight,
               (FReadAccessScope *)&local_28);
    if (*(int *)&(pUVar7->QueryDayNight).Delegate.field_0x10 == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = *(longlong **)&(pUVar7->QueryDayNight).Delegate.field_0x8;
    }
    uVar5 = (**(code **)(*plVar8 + 0x60))();
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_28);
  }
  this->IsNight = (bool)uVar5;
LAB_14bddbb00:
  UpdateZoneWeather(this);
  PlayDayNightAnimation(this,this->IsNight,PlayForwardSkip);
  iVar3 = FFieldNotificationClassDescriptor::InfoTooltipVisibility.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::InfoTooltipVisibility.FieldName;
  if (this->InfoTooltipVisibility != Collapsed) {
    this->InfoTooltipVisibility = Collapsed;
    local_20 = iVar3;
    local_28 = FVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  iVar3 = FFieldNotificationClassDescriptor::NextDayIconID.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::NextDayIconID.FieldName;
  if (this->NextDayIconID != 0x1c25) {
    this->NextDayIconID = 0x1c25;
    local_20 = iVar3;
    local_28 = FVar2;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdateEnvironment @ 14bddfb30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_EnvironmentInfo::OnUpdateEnvironment
          (UDS_VM_EnvironmentInfo *this,EDS_EnvironmentUpdate param_1)

{
  UDS_EnvironmentManager *pUVar1;
  UDS_LogManager *pUVar2;
  FTimespan FVar3;
  double dVar4;
  undefined1 auStackY_188 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  if (3 < param_1 - UpdateNextDay) {
    return;
  }
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pUVar1 = UDS_EnvironmentManager::GetInst();
  if (pUVar1 == (UDS_EnvironmentManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      TStack_138._padding_ = (longlong)pUVar1;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_EnvironmentInfo::UpdateZoneWeather",0x29,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,TStack_138.Ptr,0x95,L"environmentManager == nullptr");
      if ((UDS_EnvironmentManager *)TStack_138._padding_ != (UDS_EnvironmentManager *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  else {
    FVar3 = FDS_InGameTimeData::GetInGameTime(&pUVar1->InGameTimeData);
    dVar4 = (double)*(longlong *)FVar3.Ticks * ___real_3dbe8abfd59a6108;
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_EnvironmentInfo::UpdateZoneWeather",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Display,TStack_138.Ptr,0x9e,L"[Env] Today hours : %d");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
    UpdateTodayWeather(this,&pUVar1->TodayWeatherData,(int)dVar4);
    UpdateNextDayWeather(this,&pUVar1->NextDayWeatherData);
  }
  return;
}

// OnUpdateGameTime @ 14bddfb50

void __thiscall
UDS_VM_EnvironmentInfo::OnUpdateGameTime(UDS_VM_EnvironmentInfo *this,FDS_InGameTimeData *param_1)

{
  bool bVar1;
  FTimespan FVar2;
  FName local_58;
  int local_50;
  FString local_48;
  FString local_38;
  FString local_28;
  
  FVar2 = FDS_InGameTimeData::GetInGameTime(param_1);
  FDS_Text::SetTextFromTimespan(&this->CurrentGameTime,(FTimespan *)FVar2.Ticks,HourSec,false);
  local_50 = FFieldNotificationClassDescriptor::CurrentGameTime.BitNumber;
  local_58 = FFieldNotificationClassDescriptor::CurrentGameTime.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
  bVar1 = (param_1->TimeUntilNextSunrise).Ticks < (param_1->TimeUntilNextNight).Ticks;
  if (this->IsNight != bVar1) {
    this->IsNight = bVar1;
    PlayDayNightAnimation(this,bVar1,PlayForward);
  }
  UDS_TimeUtilManager::ConvertStringFromTimespan
            (&local_28,&param_1->TimeUntilNextSunrise,HourSec,false);
  FDS_Text::SetTextFormatFromStringTable<FString_const_&>
            (&this->TimeUntilNextSunrise,StringUi,0x4481e,&local_28);
  local_50 = FFieldNotificationClassDescriptor::TimeUntilNextSunrise.BitNumber;
  local_58 = FFieldNotificationClassDescriptor::TimeUntilNextSunrise.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
  UDS_TimeUtilManager::ConvertStringFromTimespan
            (&local_38,&param_1->TimeUntilNextNight,HourSec,false);
  FDS_Text::SetTextFormatFromStringTable<FString_const_&>
            (&this->TimeUntilNextNight,StringUi,0x4481d,&local_38);
  local_50 = FFieldNotificationClassDescriptor::TimeUntilNextNight.BitNumber;
  local_58 = FFieldNotificationClassDescriptor::TimeUntilNextNight.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
  UDS_TimeUtilManager::ConvertStringFromTimespan(&local_48,&param_1->TimeUntilNextDay,HourSec,false)
  ;
  FDS_Text::SetTextFormatFromStringTable<FString_const_&>
            (&this->TimeUntilNextDay,StringUi,0x4481f,&local_48);
  local_50 = FFieldNotificationClassDescriptor::TimeUntilNextDay.BitNumber;
  local_58 = FFieldNotificationClassDescriptor::TimeUntilNextDay.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
  UpdateDayNightProgress(this,param_1);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// PlayDayNightAnimation @ 14bde2000

void __thiscall
UDS_VM_EnvironmentInfo::PlayDayNightAnimation
          (UDS_VM_EnvironmentInfo *this,bool param_1,EDS_AnimationEventType param_2)

{
  FName *pFVar1;
  FName local_res20;
  FName local_18;
  int local_10;
  
  if (param_1) {
    pFVar1 = ::FName::FName(&local_res20,"Night_Open_Anim");
    (this->AnimationEvent).AnimationName = *pFVar1;
  }
  else {
    pFVar1 = ::FName::FName(&local_res20,"Afternoon_Open_Anim");
    (this->AnimationEvent).AnimationName = *pFVar1;
  }
  (this->AnimationEvent).AnimationEventType = param_2;
  local_10 = FFieldNotificationClassDescriptor::AnimationEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::AnimationEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetInfoTooltipVisibility @ 14bde6640

void __thiscall
UDS_VM_EnvironmentInfo::SetInfoTooltipVisibility
          (UDS_VM_EnvironmentInfo *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::InfoTooltipVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::InfoTooltipVisibility.FieldName;
  if (this->InfoTooltipVisibility != param_1) {
    this->InfoTooltipVisibility = param_1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  }
  return;
}

// UnbindModel @ 14bdecc00

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_EnvironmentInfo::UnbindModel(UDS_VM_EnvironmentInfo *this)

{
  UDS_LanguageManager *pUVar1;
  UDS_ZoneManager *pUVar2;
  UDS_EnvironmentEvent *pUVar3;
  
  pUVar1 = UDS_LanguageManager::GetInst();
  if (pUVar1 != (UDS_LanguageManager *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLanguageChanged,this
              );
  }
  pUVar2 = UDS_ZoneManager::GetInst();
  if (pUVar2 != (UDS_ZoneManager *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &pUVar2->ZoneDistrictChangedDelegate,this);
  }
  pUVar3 = UDS_EnvironmentEvent::GetEvent();
  if (pUVar3 != (UDS_EnvironmentEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3->OnUpdateGameTime,this)
    ;
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3->OnUpdateEnvironment,
               this);
  }
  return;
}

// UpdateDayNightProgress @ 14bdefe70

void __thiscall
UDS_VM_EnvironmentInfo::UpdateDayNightProgress
          (UDS_VM_EnvironmentInfo *this,FDS_InGameTimeData *param_1)

{
  float fVar1;
  double dVar2;
  float fVar3;
  FName local_28;
  int local_20;
  
  local_20 = FFieldNotificationClassDescriptor::DayNightIconID.BitNumber;
  local_28 = FFieldNotificationClassDescriptor::DayNightIconID.FieldName;
  if (this->IsNight == true) {
    if (this->DayNightIconID != 0x1c22) {
      this->DayNightIconID = 0x1c22;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
    }
    local_20 = FFieldNotificationClassDescriptor::DayNightSwitcherIndex.BitNumber;
    local_28 = FFieldNotificationClassDescriptor::DayNightSwitcherIndex.FieldName;
    if (this->DayNightSwitcherIndex != 1) {
      this->DayNightSwitcherIndex = 1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
    }
    local_20 = FFieldNotificationClassDescriptor::ProgressDay.BitNumber;
    local_28 = FFieldNotificationClassDescriptor::ProgressDay.FieldName;
    dVar2 = (double)(param_1->NightDuration).Ticks;
    fVar3 = 0.0;
    if (0.0 < dVar2 * __real_3e7ad7f29abcaf48) {
      fVar3 = (float)((double)(param_1->TimeUntilNextSunrise).Ticks / dVar2);
      if (__real_3f800000 <= fVar3) {
        fVar3 = __real_3f800000;
      }
      if (fVar3 <= 0.0) {
        fVar3 = 0.0;
      }
    }
    if (__real_3f800000 != this->ProgressDay) {
      this->ProgressDay = 1.0;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
    }
    local_20 = FFieldNotificationClassDescriptor::ProgressNight.BitNumber;
    local_28 = FFieldNotificationClassDescriptor::ProgressNight.FieldName;
    if (fVar3 != this->ProgressNight) {
      this->ProgressNight = fVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
    }
    local_20 = FFieldNotificationClassDescriptor::ZOrderDay.BitNumber;
    local_28 = FFieldNotificationClassDescriptor::ZOrderDay.FieldName;
    if (this->ZOrderDay != 0) {
      this->ZOrderDay = 0;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
    }
    local_20 = FFieldNotificationClassDescriptor::ZOrderNight.BitNumber;
    local_28 = FFieldNotificationClassDescriptor::ZOrderNight.FieldName;
    if (this->ZOrderNight == 10) {
      return;
    }
    this->ZOrderNight = 10;
  }
  else {
    if (this->DayNightIconID != 0x1c24) {
      this->DayNightIconID = 0x1c24;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
    }
    local_20 = FFieldNotificationClassDescriptor::DayNightSwitcherIndex.BitNumber;
    local_28 = FFieldNotificationClassDescriptor::DayNightSwitcherIndex.FieldName;
    if (this->DayNightSwitcherIndex != 0) {
      this->DayNightSwitcherIndex = 0;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
    }
    local_20 = FFieldNotificationClassDescriptor::ProgressDay.BitNumber;
    local_28 = FFieldNotificationClassDescriptor::ProgressDay.FieldName;
    fVar3 = __real_3f800000;
    dVar2 = (double)(param_1->DayDuration).Ticks;
    fVar1 = 0.0;
    if (0.0 < dVar2 * __real_3e7ad7f29abcaf48) {
      fVar1 = (float)((double)(param_1->TimeUntilNextNight).Ticks / dVar2);
      if (__real_3f800000 <= fVar1) {
        fVar1 = __real_3f800000;
      }
      if (fVar1 <= 0.0) {
        fVar1 = 0.0;
      }
    }
    if (fVar1 != this->ProgressDay) {
      this->ProgressDay = fVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
    }
    local_20 = FFieldNotificationClassDescriptor::ProgressNight.BitNumber;
    local_28 = FFieldNotificationClassDescriptor::ProgressNight.FieldName;
    if (fVar3 != this->ProgressNight) {
      this->ProgressNight = 1.0;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
    }
    local_20 = FFieldNotificationClassDescriptor::ZOrderDay.BitNumber;
    local_28 = FFieldNotificationClassDescriptor::ZOrderDay.FieldName;
    if (this->ZOrderDay != 10) {
      this->ZOrderDay = 10;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
    }
    local_20 = FFieldNotificationClassDescriptor::ZOrderNight.BitNumber;
    local_28 = FFieldNotificationClassDescriptor::ZOrderNight.FieldName;
    if (this->ZOrderNight == 0) {
      return;
    }
    this->ZOrderNight = 0;
  }
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
  return;
}

// UpdateNextDayWeather @ 14bdf3620

void __thiscall
UDS_VM_EnvironmentInfo::UpdateNextDayWeather
          (UDS_VM_EnvironmentInfo *this,FDS_DayWeatherData *param_1)

{
  FName FVar1;
  int iVar2;
  int iVar3;
  FDS_EnvWeatherTableRow *pFVar4;
  UEnum *pUVar5;
  FNumberFormattingOptions *pFVar6;
  EDS_WeatherType EVar7;
  float local_res8 [2];
  FName local_res18 [2];
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_a8;
  FDS_TextFormatArg local_98;
  FDS_TextFormatArg local_70;
  FNumberFormattingOptions local_48;
  
  FDS_DayWeatherData::GetWeatherForecastData(param_1,(int)local_res18);
  EVar7 = Clear;
  local_res8[0] = 0.0;
  if ((0 < (int)local_res18[0].ComparisonIndex.Value) && (0.0 < (float)local_res18[0].Number)) {
    pFVar4 = FDS_EnvWeatherTableRow::Get((longlong)(int)local_res18[0].ComparisonIndex.Value,true);
    if (pFVar4 != (FDS_EnvWeatherTableRow *)0x0) {
      EVar7 = pFVar4->WeatherType;
      local_res8[0] = (float)local_res18[0].Number;
    }
  }
  pUVar5 = StaticEnum<enum_EDS_WeatherType>();
  iVar3 = DS_Util::GetEnumIconID(pUVar5,(uint)EVar7);
  iVar2 = FFieldNotificationClassDescriptor::NextDayWeatherIcon.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::NextDayWeatherIcon.FieldName;
  if (this->NextDayWeatherIcon != iVar3) {
    this->NextDayWeatherIcon = iVar3;
    local_a8.ArrayNum = iVar2;
    local_a8.AllocatorInstance.Data = (FScriptContainerElement *)FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
  }
  if (EVar7 == Clear) {
    FDS_Text::SetTextFromStringTable(&this->NextDayWeatherText,StringUi,0x4481c);
  }
  else {
    pUVar5 = StaticEnum<enum_EDS_WeatherType>();
    DS_Util::GetStringEnumTableKey((UEnum *)local_res18,(int)pUVar5);
    FDS_TextFormatArg::FDS_TextFormatArg<FName>(&local_98,local_res18);
    pFVar6 = FNumberFormattingOptions::FNumberFormattingOptions(&local_48);
    pFVar6->MinimumFractionalDigits = 0;
    pFVar6->MaximumFractionalDigits = 0;
    FDS_TextFormatArg::FDS_TextFormatArg<float_&>(&local_70,local_res8,pFVar6);
    local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.ArrayNum = 2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,2,0,&local_a8.AllocatorInstance,2,&local_a8.ArrayMax);
    ConstructItems<FDS_TextFormatArg,FDS_TextFormatArg,int>
              (local_a8.AllocatorInstance.Data,&local_98,2);
    FInstancedStruct::Reset(&local_70.Arg);
    FInstancedStruct::Reset(&local_98.Arg);
    FDS_Text::SetTextFormatFromStringTable(&this->NextDayWeatherText,StringUi,0x4481b,&local_a8);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
    if ((FDS_TextFormatArg *)local_a8.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
      FMemory::Free(local_a8.AllocatorInstance.Data);
    }
  }
  local_a8.ArrayNum = FFieldNotificationClassDescriptor::NextDayWeatherText.BitNumber;
  local_a8.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::NextDayWeatherText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
  return;
}

// UpdateTodayWeather @ 14bdf97c0

void __thiscall
UDS_VM_EnvironmentInfo::UpdateTodayWeather
          (UDS_VM_EnvironmentInfo *this,FDS_DayWeatherData *param_1,int param_2)

{
  FName FVar1;
  int iVar2;
  int iVar3;
  FDS_EnvWeatherTableRow *pFVar4;
  UEnum *pUVar5;
  FNumberFormattingOptions *pFVar6;
  EDS_WeatherType EVar7;
  float local_res8 [2];
  FName local_res20;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_a8;
  FDS_TextFormatArg local_98;
  FDS_TextFormatArg local_70;
  FNumberFormattingOptions local_48;
  
  FDS_DayWeatherData::GetWeatherForecastData(param_1,(int)&local_res20);
  EVar7 = Clear;
  local_res8[0] = 0.0;
  if ((0 < (int)local_res20.ComparisonIndex.Value) && (0.0 < (float)local_res20.Number)) {
    pFVar4 = FDS_EnvWeatherTableRow::Get((longlong)(int)local_res20.ComparisonIndex.Value,true);
    if (pFVar4 != (FDS_EnvWeatherTableRow *)0x0) {
      EVar7 = pFVar4->WeatherType;
      local_res8[0] = (float)local_res20.Number;
    }
  }
  pUVar5 = StaticEnum<enum_EDS_WeatherType>();
  iVar3 = DS_Util::GetEnumIconID(pUVar5,(uint)EVar7);
  iVar2 = FFieldNotificationClassDescriptor::TodayWeatherIcon.BitNumber;
  FVar1 = FFieldNotificationClassDescriptor::TodayWeatherIcon.FieldName;
  if (this->TodayWeatherIcon != iVar3) {
    this->TodayWeatherIcon = iVar3;
    local_a8.ArrayNum = iVar2;
    local_a8.AllocatorInstance.Data = (FScriptContainerElement *)FVar1;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
  }
  if (EVar7 == Clear) {
    FDS_Text::SetTextFromStringTable(&this->TodayWeatherText,StringUi,0x4481a);
  }
  else {
    pUVar5 = StaticEnum<enum_EDS_WeatherType>();
    DS_Util::GetStringEnumTableKey((UEnum *)&local_res20,(int)pUVar5);
    FDS_TextFormatArg::FDS_TextFormatArg<FName>(&local_98,&local_res20);
    pFVar6 = FNumberFormattingOptions::FNumberFormattingOptions(&local_48);
    pFVar6->MinimumFractionalDigits = 0;
    pFVar6->MaximumFractionalDigits = 0;
    FDS_TextFormatArg::FDS_TextFormatArg<float_&>(&local_70,local_res8,pFVar6);
    local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.ArrayNum = 2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,2,0,&local_a8.AllocatorInstance,2,&local_a8.ArrayMax);
    ConstructItems<FDS_TextFormatArg,FDS_TextFormatArg,int>
              (local_a8.AllocatorInstance.Data,&local_98,2);
    FInstancedStruct::Reset(&local_70.Arg);
    FInstancedStruct::Reset(&local_98.Arg);
    FDS_Text::SetTextFormatFromStringTable(&this->TodayWeatherText,StringUi,0x44819,&local_a8);
    DestructItems<FDS_TextFormatArg,int>
              ((FDS_TextFormatArg *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
    if ((FDS_TextFormatArg *)local_a8.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
      FMemory::Free(local_a8.AllocatorInstance.Data);
    }
  }
  local_a8.ArrayNum = FFieldNotificationClassDescriptor::TodayWeatherText.BitNumber;
  local_a8.AllocatorInstance.Data =
       (FScriptContainerElement *)FFieldNotificationClassDescriptor::TodayWeatherText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
  return;
}

// UpdateZoneClimate @ 14bdfad40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_EnvironmentInfo::UpdateZoneClimate(UDS_VM_EnvironmentInfo *this,uint param_1,uint param_2)

{
  EDS_ClimateType EVar1;
  FName FVar2;
  FName FVar3;
  int iVar4;
  FDS_ZoneBaseTableRow *pFVar5;
  UDS_LogManager *pUVar6;
  FDS_ZonePropInfoTableRow *pFVar7;
  FDS_ZoneDistrictTableRow *pFVar8;
  FDS_EnvClimateTableRow *pFVar9;
  UEnum *pUVar10;
  undefined1 auStackY_198 [32];
  uint uVar11;
  wchar_t *pwVar12;
  undefined1 local_158 [272];
  FDS_EnvClimateTableRow *local_48;
  wchar_t *local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pFVar5 = FDS_ZoneBaseTableRow::Get((ulonglong)param_1,true);
  if (pFVar5 == (FDS_ZoneBaseTableRow *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar6 = UDS_LogManager::GetInst();
    local_48 = (void *)0x0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_158 + 0x10),
               "UDS_VM_EnvironmentInfo::UpdateZoneClimate",0x29,Yes);
    pwVar12 = L"[Env] zoneBaseTableRow is invalid. ZoneID : %d";
    uVar11 = 0x6a;
  }
  else {
    pFVar7 = FDS_ZonePropInfoTableRow::Get((longlong)pFVar5->ID_PropInfo,true);
    if (pFVar7 != (FDS_ZonePropInfoTableRow *)0x0) {
      iVar4 = pFVar7->ID_Climate;
      if ((param_2 != 0) &&
         (pFVar8 = FDS_ZoneDistrictTableRow::Get((ulonglong)param_2,false),
         pFVar8 != (FDS_ZoneDistrictTableRow *)0x0)) {
        iVar4 = pFVar8->ID_Climate;
      }
      pFVar9 = FDS_EnvClimateTableRow::Get((longlong)iVar4,true);
      if (pFVar9 != (FDS_EnvClimateTableRow *)0x0) {
        EVar1 = pFVar9->ClimateType;
        pUVar10 = StaticEnum<enum_EDS_ClimateType>();
        iVar4 = DS_Util::GetEnumIconID(pUVar10,(uint)EVar1);
        FVar2 = FFieldNotificationClassDescriptor::ZoneClimateIcon.FieldName;
        if (this->ZoneClimateIcon != iVar4) {
          local_158._8_4_ = FFieldNotificationClassDescriptor::ZoneClimateIcon.BitNumber;
          this->ZoneClimateIcon = iVar4;
          FVar3 = FFieldNotificationClassDescriptor::ZoneClimateIcon.FieldName;
          FFieldNotificationClassDescriptor::ZoneClimateIcon.FieldName.ComparisonIndex =
               FVar2.ComparisonIndex.Value;
          FFieldNotificationClassDescriptor::ZoneClimateIcon.FieldName.Number = FVar2.Number;
          local_158._0_4_ =
               FFieldNotificationClassDescriptor::ZoneClimateIcon.FieldName.ComparisonIndex.Value;
          local_158._4_4_ = FFieldNotificationClassDescriptor::ZoneClimateIcon.FieldName.Number;
          FFieldNotificationClassDescriptor::ZoneClimateIcon.FieldName = FVar3;
          (**(code **)(this->_padding_ + 0x38))(&this->_padding_,local_158);
        }
        pUVar10 = StaticEnum<enum_EDS_ClimateType>();
        DS_Util::GetStringEnumTableKey((UEnum *)local_158,(int)pUVar10);
        FDS_Text::SetTextFromStringEnumTable(&this->ZoneClimateText,(FName *)local_158);
        local_158._8_4_ = FFieldNotificationClassDescriptor::ZoneClimateText.BitNumber;
        local_158._0_4_ =
             FFieldNotificationClassDescriptor::ZoneClimateText.FieldName.ComparisonIndex.Value;
        local_158._4_4_ = FFieldNotificationClassDescriptor::ZoneClimateText.FieldName.Number;
        (**(code **)(this->_padding_ + 0x38))(&this->_padding_,local_158);
        return;
      }
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar6 = UDS_LogManager::GetInst();
      local_48 = pFVar9;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_158 + 0x10),
                 "UDS_VM_EnvironmentInfo::UpdateZoneClimate",0x29,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_40,0x83,
                 L"[Env] envClimateTableRow is invalid. ClimateID : %d");
      if (local_48 == (FDS_EnvClimateTableRow *)0x0) {
        return;
      }
      FMemory::Free(local_48);
      return;
    }
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar6 = UDS_LogManager::GetInst();
    local_48 = (void *)0x0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_158 + 0x10),
               "UDS_VM_EnvironmentInfo::UpdateZoneClimate",0x29,Yes);
    pwVar12 = L"[Env] zonePropInfoTableRow is invalid. ZonePropInfoID : %d";
    uVar11 = 0x72;
  }
  UDS_LogManager::PrintLog(pUVar6,1,Warning,local_40,uVar11,pwVar12);
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// UpdateZoneWeather @ 14bdfb000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_EnvironmentInfo::UpdateZoneWeather(UDS_VM_EnvironmentInfo *this)

{
  UDS_EnvironmentManager *pUVar1;
  UDS_LogManager *pUVar2;
  FTimespan FVar3;
  double dVar4;
  undefined1 auStackY_188 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pUVar1 = UDS_EnvironmentManager::GetInst();
  if (pUVar1 == (UDS_EnvironmentManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = (longlong)pUVar1;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_EnvironmentInfo::UpdateZoneWeather",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x95,L"environmentManager == nullptr")
      ;
      if ((UDS_EnvironmentManager *)local_138._padding_ != (UDS_EnvironmentManager *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    FVar3 = FDS_InGameTimeData::GetInGameTime(&pUVar1->InGameTimeData);
    dVar4 = (double)*(longlong *)FVar3.Ticks * ___real_3dbe8abfd59a6108;
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_EnvironmentInfo::UpdateZoneWeather",0x29,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Display,local_138.Ptr,0x9e,L"[Env] Today hours : %d");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    UpdateTodayWeather(this,&pUVar1->TodayWeatherData,(int)dVar4);
    UpdateNextDayWeather(this,&pUVar1->NextDayWeatherData);
  }
  return;
}

