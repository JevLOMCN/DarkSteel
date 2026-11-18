// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LevelSequence
// Functions: 12

// StaticClass @ 146c46000

UClass * __cdecl ULevelSequenceBurnIn::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelSequenceBurnIn.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LevelSequence",L"LevelSequenceBurnIn",
               &Z_Registration_Info_UClass_ULevelSequenceBurnIn.InnerSingleton,
               StaticRegisterNativesULevelSequenceBurnIn,0x458,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULevelSequenceBurnIn>,
               InternalVTableHelperCtorCaller<ULevelSequenceBurnIn>,local_res8,
               UUserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelSequenceBurnIn.InnerSingleton;
}

// ULevelSequenceBurnIn @ 146c4e7a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

ULevelSequenceBurnIn * __thiscall
ULevelSequenceBurnIn::ULevelSequenceBurnIn(ULevelSequenceBurnIn *this,FVTableHelper *param_1)

{
  UUserWidget::UUserWidget((UUserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7ULevelSequenceBurnIn__6B_;
  FLevelSequencePlayerSnapshot::FLevelSequencePlayerSnapshot(&this->FrameInformation);
  (this->LevelSequenceActor).field0_0x0.DebugPtr = (ALevelSequenceActor *)0x0;
  return this;
}

// ULevelSequenceBurnIn @ 146c4e800

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

ULevelSequenceBurnIn * __thiscall
ULevelSequenceBurnIn::ULevelSequenceBurnIn(ULevelSequenceBurnIn *this,FObjectInitializer *param_1)

{
  UUserWidget::UUserWidget((UUserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7ULevelSequenceBurnIn__6B_;
  FLevelSequencePlayerSnapshot::FLevelSequencePlayerSnapshot(&this->FrameInformation);
  (this->LevelSequenceActor).field0_0x0.DebugPtr = (ALevelSequenceActor *)0x0;
  return this;
}

// ~ULevelSequenceBurnIn @ 146c4f160

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ULevelSequenceBurnIn::~ULevelSequenceBurnIn(ULevelSequenceBurnIn *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7ULevelSequenceBurnIn__6B_;
  pvVar1 = *(void **)&(this->FrameInformation).CameraComponent.SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pFVar2 = (this->FrameInformation).SourceTimecode.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FrameInformation).CurrentShotName.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FrameInformation).RootName.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UUserWidget::~UUserWidget((UUserWidget *)this);
  return;
}

// GetPrivateStaticClass @ 146c558e0

UClass * __cdecl ULevelSequenceBurnIn::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULevelSequenceBurnIn.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LevelSequence",L"LevelSequenceBurnIn",
               &Z_Registration_Info_UClass_ULevelSequenceBurnIn.InnerSingleton,
               StaticRegisterNativesULevelSequenceBurnIn,0x458,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULevelSequenceBurnIn>,
               InternalVTableHelperCtorCaller<ULevelSequenceBurnIn>,local_res8,
               UUserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULevelSequenceBurnIn.InnerSingleton;
}

// GetSettingsClass @ 146c56440

TSubclassOf<ULevelSequenceBurnInInitSettings> __thiscall
ULevelSequenceBurnIn::GetSettingsClass(ULevelSequenceBurnIn *this)

{
  UFunction *this_00;
  UClass *pUVar1;
  TObjectPtr<UClass> in_RDX;
  UObject *local_res18 [2];
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_ULevelSequenceBurnIn_GetSettingsClass)
  ;
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res18[0] = (UObject *)0x0;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_res18);
    *(UObject **)in_RDX.field0_0x0 = local_res18[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(local_res18[0]);
      return (TSubclassOf<ULevelSequenceBurnInInitSettings>)in_RDX.field0_0x0;
    }
  }
  else {
    (**(code **)(this->_padding_ + 0x4e0))(this);
  }
  return (TSubclassOf<ULevelSequenceBurnInInitSettings>)in_RDX.field0_0x0.DebugPtr;
}

// GetSettingsClass_Implementation @ 146c564f0

TSubclassOf<ULevelSequenceBurnInInitSettings> __thiscall
ULevelSequenceBurnIn::GetSettingsClass_Implementation(ULevelSequenceBurnIn *this)

{
  TObjectPtr<UClass> in_RDX;
  
  *(undefined8 *)in_RDX.field0_0x0 = 0;
  return (TSubclassOf<ULevelSequenceBurnInInitSettings>)in_RDX.field0_0x0;
}

// OnSequenceUpdated @ 146c57e80

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ULevelSequenceBurnIn::OnSequenceUpdated
          (ULevelSequenceBurnIn *this,UMovieSceneSequencePlayer *param_1,FFrameTime param_2,
          FFrameTime param_3)

{
  ULevelSequencePlayer::TakeFrameSnapshot((ULevelSequencePlayer *)param_1,&this->FrameInformation);
  return;
}

// SetSettings @ 146c5b660

void __thiscall ULevelSequenceBurnIn::SetSettings(ULevelSequenceBurnIn *this,UObject *param_1)

{
  UFunction *pUVar1;
  UObject *local_res8 [4];
  
  local_res8[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_ULevelSequenceBurnIn_SetSettings);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return;
}

// StaticRegisterNativesULevelSequenceBurnIn @ 146c5c5b0

void __cdecl ULevelSequenceBurnIn::StaticRegisterNativesULevelSequenceBurnIn(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_ULevelSequenceBurnIn_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TakeSnapshotsFrom @ 146c5cec0

void __thiscall
ULevelSequenceBurnIn::TakeSnapshotsFrom(ULevelSequenceBurnIn *this,ALevelSequenceActor *param_1)

{
  ULevelSequencePlayer *this_00;
  code *pcVar1;
  bool bVar2;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (ALevelSequenceActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->LevelSequenceActor).field0_0x0.DebugPtr = param_1;
  this_00 = (param_1->SequencePlayer).field0_0x0.DebugPtr;
  if (this_00 == (ULevelSequencePlayer *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6238924104678768624>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LevelSequence\\Private\\LevelSequenceBurnIn.cpp"
                       ,0x10,"SequencePlayer");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    TMulticastDelegateRegistration<void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
    ::AddUObject<ULevelSequenceBurnIn>
              ((TMulticastDelegateRegistration<void___cdecl(UMovieSceneSequencePlayer_const_&,FFrameTime,FFrameTime),FDefaultDelegateUserPolicy>
                *)&this_00->_padding_,(ULevelSequenceBurnIn *)&stack0x00000008,(pmf_1f503f94 *)this)
    ;
    ULevelSequencePlayer::TakeFrameSnapshot(this_00,&this->FrameInformation);
  }
  return;
}

// execGetSettingsClass @ 146c60620

void __cdecl
ULevelSequenceBurnIn::execGetSettingsClass(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res8 [8];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x4e0))(param_1,local_res8);
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    *(undefined8 *)param_3 = *puVar1;
    return;
  }
  if ((UObject *)*puVar1 != (UObject *)0x0) {
    UE::GC::MarkAsReachable((UObject *)*puVar1);
    *(undefined8 *)param_3 = *puVar1;
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

