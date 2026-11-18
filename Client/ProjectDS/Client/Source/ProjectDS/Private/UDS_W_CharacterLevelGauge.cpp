// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// SetEventExpUpStart_WrapperImpl @ 14b769f10

void __cdecl UDS_W_CharacterLevelGauge::SetEventExpUpStart_WrapperImpl(void *param_1,void *param_2)

{
  float fVar1;
  
  if (*(UProgressBar **)((longlong)param_1 + 0x880) != (UProgressBar *)0x0) {
    fVar1 = UProgressBar::GetPercent(*(UProgressBar **)((longlong)param_1 + 0x880));
    *(float *)((longlong)param_1 + 0x894) = fVar1;
  }
  if (*(UProgressBar **)((longlong)param_1 + 0x888) != (UProgressBar *)0x0) {
    fVar1 = UProgressBar::GetPercent(*(UProgressBar **)((longlong)param_1 + 0x888));
    *(float *)((longlong)param_1 + 0x898) = fVar1;
  }
  if (__real_322bcc77 <
      (float)((uint)(*(float *)((longlong)param_1 + 0x894) - *(float *)((longlong)param_1 + 0x898))
             & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    *(undefined1 *)((longlong)param_1 + 0x890) = 1;
  }
  return;
}

// StaticClass @ 14b769f20

UClass * __cdecl UDS_W_CharacterLevelGauge::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_CharacterLevelGauge.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_CharacterLevelGauge",
               &Z_Registration_Info_UClass_UDS_W_CharacterLevelGauge.InnerSingleton,
               StaticRegisterNativesUDS_W_CharacterLevelGauge,0x8a8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_W_CharacterLevelGauge>,
               InternalVTableHelperCtorCaller<UDS_W_CharacterLevelGauge>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_CharacterLevelGauge.InnerSingleton;
}

// UDS_W_CharacterLevelGauge @ 14b76d630

UDS_W_CharacterLevelGauge * __thiscall
UDS_W_CharacterLevelGauge::UDS_W_CharacterLevelGauge
          (UDS_W_CharacterLevelGauge *this,FVTableHelper *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->ProgressTime = 1.0;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->EventExpUpStart = false;
  this->EventExpUpEnd = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  (this->CurrentExp).field0_0x0.DebugPtr = (UDS_ProgressBar *)0x0;
  (this->TargetExp).field0_0x0.DebugPtr = (UDS_ProgressBar *)0x0;
  this->IsProgressing = false;
  ::FName::FName(&this->ExpUpEndAniName,"Guage_End");
  return this;
}

// UDS_W_CharacterLevelGauge @ 14b76d6c0

UDS_W_CharacterLevelGauge * __thiscall
UDS_W_CharacterLevelGauge::UDS_W_CharacterLevelGauge
          (UDS_W_CharacterLevelGauge *this,FObjectInitializer *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->ProgressTime = 1.0;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->EventExpUpStart = false;
  this->EventExpUpEnd = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  (this->CurrentExp).field0_0x0.DebugPtr = (UDS_ProgressBar *)0x0;
  (this->TargetExp).field0_0x0.DebugPtr = (UDS_ProgressBar *)0x0;
  this->IsProgressing = false;
  ::FName::FName(&this->ExpUpEndAniName,"Guage_End");
  return this;
}

// ~UDS_W_CharacterLevelGauge @ 14b770b10

void __thiscall
UDS_W_CharacterLevelGauge::~UDS_W_CharacterLevelGauge(UDS_W_CharacterLevelGauge *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  UDS_UserWidget::~UDS_UserWidget((UDS_UserWidget *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b775080

IClassDescriptor * __thiscall
UDS_W_CharacterLevelGauge::GetFieldNotificationDescriptor(UDS_W_CharacterLevelGauge *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_W_CharacterLevelGauge::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b7755e0

UClass * __cdecl UDS_W_CharacterLevelGauge::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_CharacterLevelGauge.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_CharacterLevelGauge",
               &Z_Registration_Info_UClass_UDS_W_CharacterLevelGauge.InnerSingleton,
               StaticRegisterNativesUDS_W_CharacterLevelGauge,0x8a8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_W_CharacterLevelGauge>,
               InternalVTableHelperCtorCaller<UDS_W_CharacterLevelGauge>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_CharacterLevelGauge.InnerSingleton;
}

// StaticRegisterNativesUDS_W_CharacterLevelGauge @ 14b777bd0

void __cdecl UDS_W_CharacterLevelGauge::StaticRegisterNativesUDS_W_CharacterLevelGauge(void)

{
  return;
}

// NativeConstruct @ 14bd06f00

void __thiscall UDS_W_CharacterLevelGauge::NativeConstruct(UDS_W_CharacterLevelGauge *this)

{
  FName *pFVar1;
  float fVar2;
  FName local_res8 [4];
  
  UDS_UserWidget::NativeConstruct((UDS_UserWidget *)this);
  pFVar1 = ::FName::FName(local_res8,"Progress_Bar_Guage");
  UDS_UserWidget::BindWidget<UDS_ProgressBar>((UDS_UserWidget *)this,&this->CurrentExp,*pFVar1);
  pFVar1 = ::FName::FName(local_res8,"Progress_Bar_Rising_Guage");
  UDS_UserWidget::BindWidget<UDS_ProgressBar>((UDS_UserWidget *)this,&this->TargetExp,*pFVar1);
  fVar2 = DS_CommonDataHelper::CharacterLevelExpGaugeTime();
  this->ProgressTime = fVar2;
  return;
}

// NativeTick @ 14bd099a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_CharacterLevelGauge::NativeTick
          (UDS_W_CharacterLevelGauge *this,FGeometry *param_1,float param_2)

{
  int *piVar1;
  int iVar2;
  UProgressBar *this_00;
  longlong *plVar3;
  UWidgetAnimation *pUVar4;
  float fVar5;
  FWidgetAnimationHandle local_28 [2];
  
  UDS_UserWidget::NativeTick((UDS_UserWidget *)this,param_1,param_2);
  if (this->IsProgressing != false) {
    fVar5 = param_2 / this->ProgressTime + this->CurrentPercent;
    this->CurrentPercent = fVar5;
    if (this->TargetPercent <= fVar5) {
      this->IsProgressing = false;
      local_28[0].WeakState.Object =
           (FWidgetAnimationState *)FFieldNotificationClassDescriptor::EventExpUpEnd.FieldName;
      local_28[0].WeakState.WeakReferenceCount.ReferenceController._0_4_ =
           FFieldNotificationClassDescriptor::EventExpUpEnd.BitNumber;
      UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,(FFieldId *)local_28);
      pUVar4 = UDS_UserWidget::GetAnimation((UDS_UserWidget *)this,&this->ExpUpEndAniName);
      if (pUVar4 != (UWidgetAnimation *)0x0) {
        UUserWidget::PlayAnimation
                  ((UUserWidget *)this,local_28,pUVar4,0.0,1,Forward,__real_3f800000,false);
        plVar3 = (longlong *)
                 CONCAT44(local_28[0].WeakState.WeakReferenceCount.ReferenceController._4_4_,
                          (int)local_28[0].WeakState.WeakReferenceCount.ReferenceController);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
    }
    else {
      this_00 = (UProgressBar *)(this->CurrentExp).field0_0x0.DebugPtr;
      if (this_00 != (UProgressBar *)0x0) {
        UProgressBar::SetPercent(this_00,fVar5);
        return;
      }
    }
  }
  return;
}

// OnEventExpUpStart @ 14bd0cfd0

void __thiscall
UDS_W_CharacterLevelGauge::OnEventExpUpStart
          (UDS_W_CharacterLevelGauge *this,FDS_WidgetEventField *param_1)

{
  UProgressBar *pUVar1;
  float fVar2;
  
  pUVar1 = (UProgressBar *)(this->CurrentExp).field0_0x0.DebugPtr;
  if (pUVar1 != (UProgressBar *)0x0) {
    fVar2 = UProgressBar::GetPercent(pUVar1);
    this->CurrentPercent = fVar2;
  }
  pUVar1 = (UProgressBar *)(this->TargetExp).field0_0x0.DebugPtr;
  if (pUVar1 != (UProgressBar *)0x0) {
    fVar2 = UProgressBar::GetPercent(pUVar1);
    this->TargetPercent = fVar2;
  }
  if (__real_322bcc77 <
      (float)((uint)(this->CurrentPercent - this->TargetPercent) &
             __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->IsProgressing = true;
  }
  return;
}

