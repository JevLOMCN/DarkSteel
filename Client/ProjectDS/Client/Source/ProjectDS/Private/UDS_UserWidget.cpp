// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 92

// GetFieldNotificationDescriptor @ 14b4249c0

IClassDescriptor * __thiscall UDS_UserWidget::GetFieldNotificationDescriptor(UDS_UserWidget *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_UserWidget::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetParentUserWidget @ 14b4249d0

TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> __thiscall
UDS_UserWidget::GetParentUserWidget(UDS_UserWidget *this)

{
  FWeakObjectPtr in_RDX;
  
  *(FWeakObjectPtr *)in_RDX = (this->ParentUserWidget).WeakPtr;
  return (TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)in_RDX;
}

// OnDoubleClick @ 14b4253c0

void __thiscall UDS_UserWidget::OnDoubleClick(UDS_UserWidget *this)

{
  return;
}

// StaticClass @ 14b425450

UClass * __cdecl UDS_UserWidget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UDS_UserWidget.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_UserWidget",
               &Z_Registration_Info_UClass_UDS_UserWidget.InnerSingleton,
               StaticRegisterNativesUDS_UserWidget,0x878,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_UserWidget>,InternalVTableHelperCtorCaller<UDS_UserWidget>,
               aFStackX_8,UCommonUserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_UserWidget.InnerSingleton;
}

// _getUObject @ 14b426300

UObject * __thiscall UDS_UserWidget::_getUObject(UDS_UserWidget *this)

{
  return (UObject *)&this[-1].bIsListItemExpanded;
}

// _getUObject`adjustor{392}' @ 14b42630c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UDS_UserWidget::_getUObject`adjustor{392}' (void)const __ptr64 */

UObject * __thiscall UDS_UserWidget::_getUObject_adjustor_392__(UDS_UserWidget *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UDS_UserWidget *)
                       &this[-1].HistoryEventField.HistoryData.HistoryUInt32Map.field_0x30);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{936}' @ 14b426320

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UDS_UserWidget::_getUObject`adjustor{936}' (void)const __ptr64 */

UObject * __thiscall UDS_UserWidget::_getUObject_adjustor_936__(UDS_UserWidget *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UDS_UserWidget *)&this[-1].ChildOriginalScales.field_0x28);
  return (UObject *)pUVar1;
}

// SetSetFocusEvent_WrapperImpl @ 14b5d5a20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UDS_UserWidget::SetSetFocusEvent_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  
  if (*(char *)param_2 == '\x01') {
    bVar1 = UUserWidget::IsFocusable(param_1);
    if (bVar1) {
      UWidget::SetFocus(param_1);
      return;
    }
  }
  return;
}

// SetWidgetEnabled_WrapperImpl @ 14b5d5a30

void __cdecl UDS_UserWidget::SetWidgetEnabled_WrapperImpl(void *param_1,void *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014bcbb0c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x2b8))(param_1,*(undefined1 *)param_2);
  return;
}

// SetRequestCloseMyselfEvent_WrapperImpl @ 14b5d5a40

void __cdecl UDS_UserWidget::SetRequestCloseMyselfEvent_WrapperImpl(void *param_1,void *param_2)

{
  if (*(char *)param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00014bcba548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x4f8))();
    return;
  }
  return;
}

// SetAnimationEvent_WrapperImpl @ 14b5d5a90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UDS_UserWidget::SetAnimationEvent_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  FName *pFVar6;
  UWidgetAnimation *this;
  float fVar7;
  FName FStackX_10;
  FReadAccessScope FStack_28;
  
  pFVar6 = ::FName::FName(&FStackX_10,"None");
  if (*(FName *)param_2 != *pFVar6) {
    FDS_WidgetAnimationEventField::operator=
              ((FDS_WidgetAnimationEventField *)((longlong)param_1 + 0x518),param_2);
    this = GetAnimation(param_1,(FName *)((longlong)param_1 + 0x518));
    if (this == (UWidgetAnimation *)0x0) {
      uVar4 = *(undefined8 *)((longlong)param_1 + 0x518);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 ((longlong)param_1 + 0x548),&FStack_28);
      if ((*(int *)((longlong)param_1 + 0x558) != 0) &&
         (plVar5 = *(longlong **)((longlong)param_1 + 0x550), plVar5 != (longlong *)0x0)) {
        (**(code **)(*plVar5 + 0x68))(plVar5,uVar4,0);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&FStack_28);
      *(undefined1 *)((longlong)param_1 + 0x525) = 0;
      return;
    }
    cVar3 = *(char *)((longlong)param_1 + 0x524);
    if (cVar3 == '\x02') {
      UUserWidget::PlayAnimation
                (param_1,(FWidgetAnimationHandle *)&FStack_28,this,
                 *(float *)((longlong)param_1 + 0x520),*(int *)((longlong)param_1 + 0x528),Forward,
                 __real_3f800000,false);
    }
    else {
      if (cVar3 != '\x03') {
        if (1 < (byte)(cVar3 - 4U)) {
          *(undefined1 *)((longlong)param_1 + 0x525) = 2;
          UUserWidget::StopAnimation(param_1,this);
          return;
        }
        iVar2 = *(int *)((longlong)param_1 + 0x86c);
        *(undefined1 *)((longlong)param_1 + 0x525) = 1;
        fVar7 = UWidgetAnimation::GetEndTime(this);
        UUserWidget::PlayAnimation
                  (param_1,(FWidgetAnimationHandle *)&FStack_28,this,fVar7 - __real_3c23d70a,iVar2,
                   (uint)(cVar3 != '\x04'),__real_3f800000,false);
        if (FStack_28.DestructionSentinel.Accessor == (FMRSWRecursiveAccessDetector *)0x0) {
          return;
        }
        LOCK();
        puVar1 = &FStack_28.DestructionSentinel.Accessor[1].State.field_0x4;
        iVar2 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if (iVar2 != 1) {
          return;
        }
        (**(code **)((longlong)(FStack_28.DestructionSentinel.Accessor)->State + 8))
                  (FStack_28.DestructionSentinel.Accessor,1);
        return;
      }
      UUserWidget::PlayAnimationReverse
                (param_1,(FWidgetAnimationHandle *)&FStack_28,this,__real_3f800000,false);
    }
    if (FStack_28.DestructionSentinel.Accessor != (FMRSWRecursiveAccessDetector *)0x0) {
      LOCK();
      puVar1 = &FStack_28.DestructionSentinel.Accessor[1].State.field_0x4;
      iVar2 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)((longlong)(FStack_28.DestructionSentinel.Accessor)->State + 8))
                  (FStack_28.DestructionSentinel.Accessor,1);
      }
    }
    *(undefined1 *)((longlong)param_1 + 0x525) = 1;
  }
  return;
}

// SetWidgetPosition_WrapperImpl @ 14b5d5aa0

void __cdecl UDS_UserWidget::SetWidgetPosition_WrapperImpl(void *param_1,void *param_2)

{
  FObjectPtr this;
  bool bVar1;
  UClass *pUVar2;
  TVector2<double>_u_0 TStack_18;
  
  if (*(longlong *)((longlong)param_1 + 0x30) != 0) {
    pUVar2 = Z_Construct_UClass_UCanvasPanelSlot_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)((longlong)param_1 + 0x30),pUVar2);
    if ((bVar1) &&
       (this.field0_0x0 = (FObjectPtr_u_0)((FObjectPtr_u_0 *)((longlong)param_1 + 0x30))->Handle,
       this.field0_0x0 != (UObject *)0x0)) {
      TStack_18._s_0.X = (double)*(undefined8 *)param_2;
      TStack_18._s_0.Y = *(double *)((longlong)param_2 + 8);
      UCanvasPanelSlot::SetPosition
                ((UCanvasPanelSlot *)this.field0_0x0,(TVector2<double> *)&TStack_18._s_0);
    }
  }
  return;
}

// SetWindowPosition_WrapperImpl @ 14b5d5ab0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_UserWidget::SetWindowPosition_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  UDS_W_WindowFrame *this;
  FAnchors *pFVar2;
  UDS_WindowInfoBase *this_00;
  TVector2<double>_u_0 aTStack_28 [2];
  
  bVar1 = TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr> *)((longlong)param_1 + 0x444)
                     ,(void *)0x0);
  if (!bVar1) {
    this = (UDS_W_WindowFrame *)FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)param_1 + 0x444));
    pFVar2 = UDS_W_WindowFrame::GetAnchor((FAnchors *)&aTStack_28[0]._s_0,LeftTop);
    UDS_W_WindowFrame::SetAnchors(this,pFVar2);
    if (this->WindowFrameSlot != (UCanvasPanelSlot *)0x0) {
      aTStack_28[0]._0_8_ = *(undefined8 *)param_2;
      aTStack_28[0]._8_8_ = *(double *)((longlong)param_2 + 8);
      UCanvasPanelSlot::SetPosition(this->WindowFrameSlot,(TVector2<double> *)&aTStack_28[0]._s_0);
      bVar1 = TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>::UEOpEquals
                        (&this->WindowInfo,(void *)0x0);
      if (!bVar1) {
        this_00 = (UDS_WindowInfoBase *)FWeakObjectPtr::Get(&(this->WindowInfo).WeakPtr);
        UDS_WindowInfoBase::SetWindowPosition(this_00,param_2);
      }
    }
  }
  return;
}

// GetbIsListItemExpanded_WrapperImpl @ 14b5d5ac0

void __cdecl UDS_UserWidget::GetbIsListItemExpanded_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  
  bVar1 = GetIsListItemExpanded(param_1);
  *(bool *)param_2 = bVar1;
  return;
}

// SetbIsListItemExpanded_WrapperImpl @ 14b5d5ae0

void __cdecl UDS_UserWidget::SetbIsListItemExpanded_WrapperImpl(void *param_1,void *param_2)

{
  SetIsListItemExpanded(param_1,*(bool *)param_2);
  return;
}

// UDS_UserWidget @ 14b5d9040

UDS_UserWidget * __thiscall
UDS_UserWidget::UDS_UserWidget(UDS_UserWidget *this,FVTableHelper *param_1)

{
  UCommonUserWidget::UCommonUserWidget((UCommonUserWidget *)this,param_1);
  *(undefined8 *)&(this->WidgetFocusLostEvent).field_0x18 = 2;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  *(undefined8 *)&this->WidgetFocusedDelegate = 0;
  *(undefined8 *)&(this->WidgetFocusedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->WidgetFocusedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->WidgetFocusLostDelegate = 0;
  *(undefined8 *)&(this->WidgetFocusLostDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->WidgetFocusLostDelegate).field_0x10 = 0;
  *(undefined8 *)&this->WidgetFocusLostEvent = 0;
  *(undefined8 *)&(this->WidgetFocusLostEvent).field_0x8 = 0;
  *(undefined8 *)&(this->WidgetFocusLostEvent).field_0x10 = 0;
  (this->ParentUserWidget).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ChildUserWidgets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildUserWidgets).ArrayNum = 0;
  (this->ChildUserWidgets).ArrayMax = 0;
  *(undefined8 *)&(this->WindowFrameWidget).WeakPtr.ObjectSerialNumber = 0;
  this->FocusReceivedEvent = false;
  this->SetFocusEvent = false;
  *(undefined8 *)&this->ChildScales = 0;
  *(undefined8 *)&(this->ChildScales).field_0x8 = 0;
  *(undefined8 *)&(this->ChildScales).field_0x20 = 0;
  this->MyWindowID = None;
  (this->WindowFrameWidget).WeakPtr.ObjectIndex = 0;
  *(undefined4 *)&(this->ChildScales).field_0x28 = 0;
  *(undefined4 *)&(this->ChildScales).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChildScales).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChildScales).field_0x34 = 0;
  *(undefined8 *)&(this->ChildScales).field_0x40 = 0;
  *(undefined4 *)&(this->ChildScales).field_0x48 = 0;
  *(undefined8 *)&this->ChildOriginalScales = 0;
  *(undefined8 *)&(this->ChildOriginalScales).field_0x8 = 0;
  *(undefined8 *)&(this->ChildOriginalScales).field_0x20 = 0;
  *(undefined4 *)&(this->ChildOriginalScales).field_0x28 = 0;
  *(undefined4 *)&(this->ChildOriginalScales).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChildOriginalScales).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChildOriginalScales).field_0x34 = 0;
  *(undefined8 *)&(this->ChildOriginalScales).field_0x40 = 0;
  *(undefined4 *)&(this->ChildOriginalScales).field_0x48 = 0;
  (this->AnimationNameOnConstruct).ComparisonIndex = 0;
  (this->AnimationNameOnConstruct).Number = 0;
  (this->WidgetImpl).field0_0x0.DebugPtr = (UDS_WidgetImpl *)0x0;
  (this->RequestCloseMyselfEvent).bIsActivate = false;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  (this->AnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  this->WidgetEnabled = true;
  (this->WidgetPosition).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->AnimationFinishedEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationFinishedEvent).AnimationName.Number = 0;
  (this->AnimationFinishedEvent).AnimationPlayTime = 0.0;
  (this->AnimationFinishedEvent).AnimationEventType = None;
  (this->AnimationFinishedEvent).AnimationStateType = None;
  (this->AnimationFinishedEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->AnimationFinishedEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationFinishedEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishedEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationFinishedEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationFinishedEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishedEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->WindowPosition).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->HistoryEventField).HistoryData.DataType = None;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryObjectMap = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryObjectMap.field_0x8 = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryObjectMap.field_0x20 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryObjectMap.field_0x28 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryObjectMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryObjectMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryObjectMap.field_0x34 = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryObjectMap.field_0x40 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryObjectMap.field_0x48 = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryStringMap = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryStringMap.field_0x8 = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryStringMap.field_0x20 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryStringMap.field_0x28 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryStringMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryStringMap.field_0x34 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryStringMap.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryStringMap.field_0x40 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryStringMap.field_0x48 = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryInt32Map = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryInt32Map.field_0x8 = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryInt32Map.field_0x20 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryInt32Map.field_0x28 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryInt32Map.field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryInt32Map.field_0x34 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryInt32Map.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryInt32Map.field_0x40 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryInt32Map.field_0x48 = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryUInt32Map = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryUInt32Map.field_0x8 = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryUInt32Map.field_0x20 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryUInt32Map.field_0x28 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryUInt32Map.field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryUInt32Map.field_0x34 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryUInt32Map.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryUInt32Map.field_0x40 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryUInt32Map.field_0x48 = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryInt64Map = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryInt64Map.field_0x8 = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryInt64Map.field_0x20 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryInt64Map.field_0x28 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryInt64Map.field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryInt64Map.field_0x34 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryInt64Map.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryInt64Map.field_0x40 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryInt64Map.field_0x48 = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryUInt64Map = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryUInt64Map.field_0x8 = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryUInt64Map.field_0x20 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryUInt64Map.field_0x28 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryUInt64Map.field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryUInt64Map.field_0x34 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryUInt64Map.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryUInt64Map.field_0x40 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryUInt64Map.field_0x48 = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryFloatMap = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryFloatMap.field_0x8 = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryFloatMap.field_0x20 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryFloatMap.field_0x28 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryFloatMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryFloatMap.field_0x34 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryFloatMap.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryFloatMap.field_0x40 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryFloatMap.field_0x48 = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryBoolMap = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryBoolMap.field_0x8 = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryBoolMap.field_0x20 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryBoolMap.field_0x28 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryBoolMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryBoolMap.field_0x34 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryBoolMap.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryBoolMap.field_0x40 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryBoolMap.field_0x48 = 0;
  this->bIsEntryWidget = false;
  (this->AnimationName).ComparisonIndex = 0;
  (this->AnimationName).Number = 0;
  (this->AnimationTimerHandle).Handle = 0;
  (this->ReleasedListView).bIsActivate = false;
  this->AnimationSkipLoop = 1;
  return this;
}

// ~UDS_UserWidget @ 14b5da270

void __thiscall UDS_UserWidget::~UDS_UserWidget(UDS_UserWidget *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  FDS_HistoryData::~FDS_HistoryData(&(this->HistoryEventField).HistoryData);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationFinishedEvent).Delegate_ValidAnimation);
  pvVar1 = *(void **)&(this->AnimationFinishedEvent).Delegate_ValidAnimation.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnimationFinishedEvent).Delegate_ValidAnimation
            );
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->AnimationFinishedEvent).Delegate_AnimationFinish);
  pvVar1 = *(void **)&(this->AnimationFinishedEvent).Delegate_AnimationFinish.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &(this->AnimationFinishedEvent).Delegate_AnimationFinish);
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
  *(undefined4 *)&(this->ChildOriginalScales).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ChildOriginalScales).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector2<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector2<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector2<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChildOriginalScales);
  *(undefined4 *)&(this->ChildScales).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ChildScales).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector2<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector2<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector2<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChildScales);
  pFVar2 = (this->ChildUserWidgets).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->WidgetFocusLostEvent).field_0x8,
             *(int *)&(this->WidgetFocusLostEvent).field_0x10);
  pvVar1 = *(void **)&(this->WidgetFocusLostEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->WidgetFocusLostEvent);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->WidgetFocusLostDelegate);
  pvVar1 = *(void **)&(this->WidgetFocusLostDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->WidgetFocusLostDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->WidgetFocusedDelegate);
  pvVar1 = *(void **)&(this->WidgetFocusedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->WidgetFocusedDelegate);
  this->_padding_ = (longlong)&___7IInterface__6B_;
  UCommonUserWidget::~UCommonUserWidget((UCommonUserWidget *)this);
  return;
}

// GetPrivateStaticClass @ 14b5db670

UClass * __cdecl UDS_UserWidget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_UserWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_UserWidget",
               &Z_Registration_Info_UClass_UDS_UserWidget.InnerSingleton,
               StaticRegisterNativesUDS_UserWidget,0x878,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_UserWidget>,InternalVTableHelperCtorCaller<UDS_UserWidget>,
               local_res8,UCommonUserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_UserWidget.InnerSingleton;
}

// OnViewModelSet @ 14b5dbcd0

void __thiscall UDS_UserWidget::OnViewModelSet(UDS_UserWidget *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UDS_UserWidget_OnViewModelSet);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014b5dbcfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// StaticRegisterNativesUDS_UserWidget @ 14b5dbd60

void __cdecl UDS_UserWidget::StaticRegisterNativesUDS_UserWidget(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_UserWidget_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCloseMyself @ 14b5dd870

void __cdecl UDS_UserWidget::execCloseMyself(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x00014b5dd888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x4f8))();
  return;
}

// BindWidget<UCommonButtonBase> @ 14bc75540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
UDS_UserWidget::BindWidget<UCommonButtonBase>
          (UDS_UserWidget *this,UCommonButtonBase **param_1,FName param_2)

{
  int iVar1;
  UCommonButtonBase *pUVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  FName local_res18;
  undefined1 auStackY_1c8 [32];
  uint uVar5;
  wchar_t *pwVar6;
  FName local_188;
  FString local_180;
  FString local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  *param_1 = (UCommonButtonBase *)0x0;
  local_res18 = param_2;
  pUVar2 = (UCommonButtonBase *)UUserWidget::GetWidgetFromName((UUserWidget *)this,&local_res18);
  if (pUVar2 == (UCommonButtonBase *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    ::FName::ToString(&local_res18,&local_170);
    local_188 = (FName)this->_padding_;
    ::FName::ToString(&local_188,&local_180);
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_UserWidget::BindWidget",0x1a,Yes);
    pwVar6 = L"Failed to find: %s.%s";
    uVar5 = 0x195;
  }
  else {
    pUVar3 = Z_Construct_UClass_UCommonButtonBase_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      *param_1 = pUVar2;
      return true;
    }
    *param_1 = (UCommonButtonBase *)0x0;
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    ::FName::ToString(&local_res18,&local_170);
    local_188 = (FName)this->_padding_;
    ::FName::ToString(&local_188,&local_180);
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_UserWidget::BindWidget",0x1a,Yes);
    pwVar6 = L"Failed to cast: %s.%s";
    uVar5 = 400;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Display,local_158.Ptr,uVar5,pwVar6);
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  return false;
}

// BindWidget<UDS_CanvasPanel> @ 14bc75780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
UDS_UserWidget::BindWidget<UDS_CanvasPanel>
          (UDS_UserWidget *this,UDS_CanvasPanel **param_1,FName param_2)

{
  int iVar1;
  UDS_CanvasPanel *pUVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  FName local_res18;
  undefined1 auStackY_1c8 [32];
  uint uVar5;
  wchar_t *pwVar6;
  FName local_188;
  FString local_180;
  FString local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  *param_1 = (UDS_CanvasPanel *)0x0;
  local_res18 = param_2;
  pUVar2 = (UDS_CanvasPanel *)UUserWidget::GetWidgetFromName((UUserWidget *)this,&local_res18);
  if (pUVar2 == (UDS_CanvasPanel *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    ::FName::ToString(&local_res18,&local_170);
    local_188 = (FName)this->_padding_;
    ::FName::ToString(&local_188,&local_180);
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_UserWidget::BindWidget",0x1a,Yes);
    pwVar6 = L"Failed to find: %s.%s";
    uVar5 = 0x195;
  }
  else {
    pUVar3 = Z_Construct_UClass_UDS_CanvasPanel_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      *param_1 = pUVar2;
      return true;
    }
    *param_1 = (UDS_CanvasPanel *)0x0;
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    ::FName::ToString(&local_res18,&local_170);
    local_188 = (FName)this->_padding_;
    ::FName::ToString(&local_188,&local_180);
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_UserWidget::BindWidget",0x1a,Yes);
    pwVar6 = L"Failed to cast: %s.%s";
    uVar5 = 400;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Display,local_158.Ptr,uVar5,pwVar6);
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  return false;
}

// BindWidget<UDS_CheckBox> @ 14bc759c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
UDS_UserWidget::BindWidget<UDS_CheckBox>
          (UDS_UserWidget *this,TObjectPtr<UDS_CheckBox> *param_1,FName param_2)

{
  int iVar1;
  UDS_CheckBox *pUVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  FName local_res18 [2];
  undefined1 auStackY_1c8 [32];
  uint uVar5;
  wchar_t *pwVar6;
  FName local_188;
  FString local_180;
  FString local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  (param_1->field0_0x0).DebugPtr = (UDS_CheckBox *)0x0;
  local_res18[0] = param_2;
  pUVar2 = (UDS_CheckBox *)UUserWidget::GetWidgetFromName((UUserWidget *)this,local_res18);
  if (pUVar2 == (UDS_CheckBox *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    ::FName::ToString(local_res18,&local_170);
    local_188 = (FName)this->_padding_;
    ::FName::ToString(&local_188,&local_180);
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_UserWidget::BindWidget",0x1a,Yes);
    pwVar6 = L"Failed to find: %s.%s";
    uVar5 = 0x1b7;
  }
  else {
    pUVar3 = Z_Construct_UClass_UDS_CheckBox_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pUVar2 = (UDS_CheckBox *)0x0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UDS_CheckBox *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
      (param_1->field0_0x0).DebugPtr = pUVar2;
      return true;
    }
    (param_1->field0_0x0).DebugPtr = pUVar2;
    if (pUVar2 != (UDS_CheckBox *)0x0) {
      return true;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    ::FName::ToString(local_res18,&local_170);
    local_188 = (FName)this->_padding_;
    ::FName::ToString(&local_188,&local_180);
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_UserWidget::BindWidget",0x1a,Yes);
    pwVar6 = L"Failed to cast: %s.%s";
    uVar5 = 0x1b2;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Display,local_158.Ptr,uVar5,pwVar6);
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  return false;
}

// BindWidget<UDS_CommonRichTextBlock> @ 14bc75c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
UDS_UserWidget::BindWidget<UDS_CommonRichTextBlock>
          (UDS_UserWidget *this,TObjectPtr<UDS_CommonRichTextBlock> *param_1,FName param_2)

{
  int iVar1;
  UDS_CommonRichTextBlock *pUVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  FName local_res18 [2];
  undefined1 auStackY_1c8 [32];
  uint uVar5;
  wchar_t *pwVar6;
  FName local_188;
  FString local_180;
  FString local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  (param_1->field0_0x0).DebugPtr = (UDS_CommonRichTextBlock *)0x0;
  local_res18[0] = param_2;
  pUVar2 = (UDS_CommonRichTextBlock *)
           UUserWidget::GetWidgetFromName((UUserWidget *)this,local_res18);
  if (pUVar2 == (UDS_CommonRichTextBlock *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    ::FName::ToString(local_res18,&local_170);
    local_188 = (FName)this->_padding_;
    ::FName::ToString(&local_188,&local_180);
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_UserWidget::BindWidget",0x1a,Yes);
    pwVar6 = L"Failed to find: %s.%s";
    uVar5 = 0x1b7;
  }
  else {
    pUVar3 = Z_Construct_UClass_UDS_CommonRichTextBlock_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pUVar2 = (UDS_CommonRichTextBlock *)0x0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UDS_CommonRichTextBlock *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
      (param_1->field0_0x0).DebugPtr = pUVar2;
      return true;
    }
    (param_1->field0_0x0).DebugPtr = pUVar2;
    if (pUVar2 != (UDS_CommonRichTextBlock *)0x0) {
      return true;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    ::FName::ToString(local_res18,&local_170);
    local_188 = (FName)this->_padding_;
    ::FName::ToString(&local_188,&local_180);
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_UserWidget::BindWidget",0x1a,Yes);
    pwVar6 = L"Failed to cast: %s.%s";
    uVar5 = 0x1b2;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Display,local_158.Ptr,uVar5,pwVar6);
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  return false;
}

// BindWidget<UDS_Image> @ 14bc75e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
UDS_UserWidget::BindWidget<UDS_Image>(UDS_UserWidget *this,UDS_Image **param_1,FName param_2)

{
  int iVar1;
  UDS_Image *pUVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  FName local_res18;
  undefined1 auStackY_1c8 [32];
  uint uVar5;
  wchar_t *pwVar6;
  FName local_188;
  FString local_180;
  FString local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  *param_1 = (UDS_Image *)0x0;
  local_res18 = param_2;
  pUVar2 = (UDS_Image *)UUserWidget::GetWidgetFromName((UUserWidget *)this,&local_res18);
  if (pUVar2 == (UDS_Image *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    ::FName::ToString(&local_res18,&local_170);
    local_188 = (FName)this->_padding_;
    ::FName::ToString(&local_188,&local_180);
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_UserWidget::BindWidget",0x1a,Yes);
    pwVar6 = L"Failed to find: %s.%s";
    uVar5 = 0x195;
  }
  else {
    pUVar3 = Z_Construct_UClass_UDS_Image_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      *param_1 = pUVar2;
      return true;
    }
    *param_1 = (UDS_Image *)0x0;
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    ::FName::ToString(&local_res18,&local_170);
    local_188 = (FName)this->_padding_;
    ::FName::ToString(&local_188,&local_180);
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_UserWidget::BindWidget",0x1a,Yes);
    pwVar6 = L"Failed to cast: %s.%s";
    uVar5 = 400;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Display,local_158.Ptr,uVar5,pwVar6);
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  return false;
}

// BindWidget<UDS_ScaleBox> @ 14bc760c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
UDS_UserWidget::BindWidget<UDS_ScaleBox>(UDS_UserWidget *this,UDS_ScaleBox **param_1,FName param_2)

{
  int iVar1;
  UDS_ScaleBox *pUVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  FName local_res18;
  undefined1 auStackY_1c8 [32];
  uint uVar5;
  wchar_t *pwVar6;
  FName local_188;
  FString local_180;
  FString local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  *param_1 = (UDS_ScaleBox *)0x0;
  local_res18 = param_2;
  pUVar2 = (UDS_ScaleBox *)UUserWidget::GetWidgetFromName((UUserWidget *)this,&local_res18);
  if (pUVar2 == (UDS_ScaleBox *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    ::FName::ToString(&local_res18,&local_170);
    local_188 = (FName)this->_padding_;
    ::FName::ToString(&local_188,&local_180);
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_UserWidget::BindWidget",0x1a,Yes);
    pwVar6 = L"Failed to find: %s.%s";
    uVar5 = 0x195;
  }
  else {
    pUVar3 = Z_Construct_UClass_UDS_ScaleBox_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      *param_1 = pUVar2;
      return true;
    }
    *param_1 = (UDS_ScaleBox *)0x0;
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    ::FName::ToString(&local_res18,&local_170);
    local_188 = (FName)this->_padding_;
    ::FName::ToString(&local_188,&local_180);
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_UserWidget::BindWidget",0x1a,Yes);
    pwVar6 = L"Failed to cast: %s.%s";
    uVar5 = 400;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Display,local_158.Ptr,uVar5,pwVar6);
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  return false;
}

// BindWidget<UDS_W_CommonCheckBox> @ 14bc76300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
UDS_UserWidget::BindWidget<UDS_W_CommonCheckBox>
          (UDS_UserWidget *this,TObjectPtr<UDS_W_CommonCheckBox> *param_1,FName param_2)

{
  int iVar1;
  UDS_W_CommonCheckBox *pUVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  FName local_res18 [2];
  undefined1 auStackY_1c8 [32];
  uint uVar5;
  wchar_t *pwVar6;
  FName local_188;
  FString local_180;
  FString local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  (param_1->field0_0x0).DebugPtr = (UDS_W_CommonCheckBox *)0x0;
  local_res18[0] = param_2;
  pUVar2 = (UDS_W_CommonCheckBox *)UUserWidget::GetWidgetFromName((UUserWidget *)this,local_res18);
  if (pUVar2 == (UDS_W_CommonCheckBox *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    ::FName::ToString(local_res18,&local_170);
    local_188 = (FName)this->_padding_;
    ::FName::ToString(&local_188,&local_180);
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_UserWidget::BindWidget",0x1a,Yes);
    pwVar6 = L"Failed to find: %s.%s";
    uVar5 = 0x1b7;
  }
  else {
    pUVar3 = Z_Construct_UClass_UDS_W_CommonCheckBox_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pUVar2 = (UDS_W_CommonCheckBox *)0x0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UDS_W_CommonCheckBox *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
      (param_1->field0_0x0).DebugPtr = pUVar2;
      return true;
    }
    (param_1->field0_0x0).DebugPtr = pUVar2;
    if (pUVar2 != (UDS_W_CommonCheckBox *)0x0) {
      return true;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    ::FName::ToString(local_res18,&local_170);
    local_188 = (FName)this->_padding_;
    ::FName::ToString(&local_188,&local_180);
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_UserWidget::BindWidget",0x1a,Yes);
    pwVar6 = L"Failed to cast: %s.%s";
    uVar5 = 0x1b2;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Display,local_158.Ptr,uVar5,pwVar6);
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  return false;
}

// BindWidget<UDS_WidgetSwitcher> @ 14bc76560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
UDS_UserWidget::BindWidget<UDS_WidgetSwitcher>
          (UDS_UserWidget *this,TObjectPtr<UDS_WidgetSwitcher> *param_1,FName param_2)

{
  int iVar1;
  UDS_WidgetSwitcher *pUVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  FName local_res18 [2];
  undefined1 auStackY_1c8 [32];
  uint uVar5;
  wchar_t *pwVar6;
  FName local_188;
  FString local_180;
  FString local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  (param_1->field0_0x0).DebugPtr = (UDS_WidgetSwitcher *)0x0;
  local_res18[0] = param_2;
  pUVar2 = (UDS_WidgetSwitcher *)UUserWidget::GetWidgetFromName((UUserWidget *)this,local_res18);
  if (pUVar2 == (UDS_WidgetSwitcher *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    ::FName::ToString(local_res18,&local_170);
    local_188 = (FName)this->_padding_;
    ::FName::ToString(&local_188,&local_180);
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_UserWidget::BindWidget",0x1a,Yes);
    pwVar6 = L"Failed to find: %s.%s";
    uVar5 = 0x1b7;
  }
  else {
    pUVar3 = Z_Construct_UClass_UDS_WidgetSwitcher_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) {
      pUVar2 = (UDS_WidgetSwitcher *)0x0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UDS_WidgetSwitcher *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
      (param_1->field0_0x0).DebugPtr = pUVar2;
      return true;
    }
    (param_1->field0_0x0).DebugPtr = pUVar2;
    if (pUVar2 != (UDS_WidgetSwitcher *)0x0) {
      return true;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    ::FName::ToString(local_res18,&local_170);
    local_188 = (FName)this->_padding_;
    ::FName::ToString(&local_188,&local_180);
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_UserWidget::BindWidget",0x1a,Yes);
    pwVar6 = L"Failed to cast: %s.%s";
    uVar5 = 0x1b2;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Display,local_158.Ptr,uVar5,pwVar6);
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  return false;
}

// BindWidget<UPanelWidget> @ 14bc767c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
UDS_UserWidget::BindWidget<UPanelWidget>(UDS_UserWidget *this,UPanelWidget **param_1,FName param_2)

{
  int iVar1;
  UPanelWidget *pUVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  FName local_res18;
  undefined1 auStackY_1c8 [32];
  uint uVar5;
  wchar_t *pwVar6;
  FName local_188;
  FString local_180;
  FString local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  *param_1 = (UPanelWidget *)0x0;
  local_res18 = param_2;
  pUVar2 = (UPanelWidget *)UUserWidget::GetWidgetFromName((UUserWidget *)this,&local_res18);
  if (pUVar2 == (UPanelWidget *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    ::FName::ToString(&local_res18,&local_170);
    local_188 = (FName)this->_padding_;
    ::FName::ToString(&local_188,&local_180);
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_UserWidget::BindWidget",0x1a,Yes);
    pwVar6 = L"Failed to find: %s.%s";
    uVar5 = 0x195;
  }
  else {
    pUVar3 = Z_Construct_UClass_UPanelWidget_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      *param_1 = pUVar2;
      return true;
    }
    *param_1 = (UPanelWidget *)0x0;
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    ::FName::ToString(&local_res18,&local_170);
    local_188 = (FName)this->_padding_;
    ::FName::ToString(&local_188,&local_180);
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_UserWidget::BindWidget",0x1a,Yes);
    pwVar6 = L"Failed to cast: %s.%s";
    uVar5 = 400;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Display,local_158.Ptr,uVar5,pwVar6);
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  return false;
}

// BindWidget<UTextBlock> @ 14bc76a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
UDS_UserWidget::BindWidget<UTextBlock>(UDS_UserWidget *this,UTextBlock **param_1,FName param_2)

{
  int iVar1;
  UTextBlock *pUVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  FName local_res18;
  undefined1 auStackY_1c8 [32];
  uint uVar5;
  wchar_t *pwVar6;
  FName local_188;
  FString local_180;
  FString local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  *param_1 = (UTextBlock *)0x0;
  local_res18 = param_2;
  pUVar2 = (UTextBlock *)UUserWidget::GetWidgetFromName((UUserWidget *)this,&local_res18);
  if (pUVar2 == (UTextBlock *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    ::FName::ToString(&local_res18,&local_170);
    local_188 = (FName)this->_padding_;
    ::FName::ToString(&local_188,&local_180);
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_UserWidget::BindWidget",0x1a,Yes);
    pwVar6 = L"Failed to find: %s.%s";
    uVar5 = 0x195;
  }
  else {
    pUVar3 = Z_Construct_UClass_UTextBlock_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      *param_1 = pUVar2;
      return true;
    }
    *param_1 = (UTextBlock *)0x0;
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    ::FName::ToString(&local_res18,&local_170);
    local_188 = (FName)this->_padding_;
    ::FName::ToString(&local_188,&local_180);
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_UserWidget::BindWidget",0x1a,Yes);
    pwVar6 = L"Failed to cast: %s.%s";
    uVar5 = 400;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Display,local_158.Ptr,uVar5,pwVar6);
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  return false;
}

// BindWidget<UWidget> @ 14bc76c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_UserWidget::BindWidget<UWidget>(UDS_UserWidget *this,UWidget **param_1,FName param_2)

{
  bool bVar1;
  UWidget *pUVar2;
  UDS_LogManager *pUVar3;
  FName local_res18;
  undefined1 auStackY_1b8 [32];
  FName local_178;
  FString local_170;
  FString local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  *param_1 = (UWidget *)0x0;
  local_res18 = param_2;
  pUVar2 = UUserWidget::GetWidgetFromName((UUserWidget *)this,&local_res18);
  if (pUVar2 == (UWidget *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      ::FName::ToString(&local_res18,&local_160);
      local_178 = (FName)this->_padding_;
      ::FName::ToString(&local_178,&local_170);
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_UserWidget::BindWidget",0x1a,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Display,local_148.Ptr,0x195,L"Failed to find: %s.%s");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
      if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.Data.AllocatorInstance.Data);
      }
      if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_160.Data.AllocatorInstance.Data);
      }
    }
    bVar1 = false;
  }
  else {
    *param_1 = pUVar2;
    bVar1 = true;
  }
  return bVar1;
}

// UDS_UserWidget @ 14bc84300

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDS_UserWidget * __thiscall
UDS_UserWidget::UDS_UserWidget(UDS_UserWidget *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  bool bVar2;
  UObject *pUVar3;
  
  UCommonUserWidget::UCommonUserWidget((UCommonUserWidget *)this,param_1);
  *(undefined8 *)&(this->WidgetFocusLostEvent).field_0x18 = 2;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  *(undefined8 *)&this->WidgetFocusedDelegate = 0;
  *(undefined8 *)&(this->WidgetFocusedDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->WidgetFocusedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->WidgetFocusLostDelegate = 0;
  *(undefined8 *)&(this->WidgetFocusLostDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->WidgetFocusLostDelegate).field_0x10 = 0;
  *(undefined8 *)&this->WidgetFocusLostEvent = 0;
  *(undefined8 *)&(this->WidgetFocusLostEvent).field_0x8 = 0;
  *(undefined8 *)&(this->WidgetFocusLostEvent).field_0x10 = 0;
  (this->ParentUserWidget).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ChildUserWidgets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildUserWidgets).ArrayNum = 0;
  (this->ChildUserWidgets).ArrayMax = 0;
  *(undefined8 *)&(this->WindowFrameWidget).WeakPtr.ObjectSerialNumber = 0;
  this->FocusReceivedEvent = false;
  this->SetFocusEvent = false;
  *(undefined8 *)&this->ChildScales = 0;
  *(undefined8 *)&(this->ChildScales).field_0x8 = 0;
  *(undefined8 *)&(this->ChildScales).field_0x20 = 0;
  this->MyWindowID = None;
  (this->WindowFrameWidget).WeakPtr.ObjectIndex = 0;
  *(undefined4 *)&(this->ChildScales).field_0x28 = 0;
  *(undefined4 *)&(this->ChildScales).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChildScales).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChildScales).field_0x34 = 0;
  *(undefined8 *)&(this->ChildScales).field_0x40 = 0;
  *(undefined4 *)&(this->ChildScales).field_0x48 = 0;
  *(undefined8 *)&this->ChildOriginalScales = 0;
  *(undefined8 *)&(this->ChildOriginalScales).field_0x8 = 0;
  *(undefined8 *)&(this->ChildOriginalScales).field_0x20 = 0;
  *(undefined4 *)&(this->ChildOriginalScales).field_0x28 = 0;
  *(undefined4 *)&(this->ChildOriginalScales).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChildOriginalScales).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChildOriginalScales).field_0x34 = 0;
  *(undefined8 *)&(this->ChildOriginalScales).field_0x40 = 0;
  *(undefined4 *)&(this->ChildOriginalScales).field_0x48 = 0;
  (this->AnimationNameOnConstruct).ComparisonIndex = 0;
  (this->AnimationNameOnConstruct).Number = 0;
  (this->WidgetImpl).field0_0x0.DebugPtr = (UDS_WidgetImpl *)0x0;
  (this->RequestCloseMyselfEvent).bIsActivate = false;
  (this->AnimationEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationEvent).AnimationName.Number = 0;
  (this->AnimationEvent).AnimationPlayTime = 0.0;
  (this->AnimationEvent).AnimationEventType = None;
  (this->AnimationEvent).AnimationStateType = None;
  (this->AnimationEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 = 0;
  this->WidgetEnabled = true;
  (this->WidgetPosition).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->AnimationFinishedEvent).AnimationName.ComparisonIndex = 0;
  (this->AnimationFinishedEvent).AnimationName.Number = 0;
  (this->AnimationFinishedEvent).AnimationPlayTime = 0.0;
  (this->AnimationFinishedEvent).AnimationEventType = None;
  (this->AnimationFinishedEvent).AnimationStateType = None;
  (this->AnimationFinishedEvent).NumberOfLoops = 1;
  *(undefined8 *)&(this->AnimationFinishedEvent).Delegate_AnimationFinish = 0;
  *(undefined8 *)&(this->AnimationFinishedEvent).Delegate_AnimationFinish.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishedEvent).Delegate_AnimationFinish.field_0x10 = 0;
  *(undefined8 *)&(this->AnimationFinishedEvent).Delegate_ValidAnimation = 0;
  *(undefined8 *)&(this->AnimationFinishedEvent).Delegate_ValidAnimation.field_0x8 = 0;
  *(undefined4 *)&(this->AnimationFinishedEvent).Delegate_ValidAnimation.field_0x10 = 0;
  (this->WindowPosition).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->HistoryEventField).HistoryData.DataType = None;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryObjectMap = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryObjectMap.field_0x8 = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryObjectMap.field_0x20 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryObjectMap.field_0x28 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryObjectMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryObjectMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryObjectMap.field_0x34 = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryObjectMap.field_0x40 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryObjectMap.field_0x48 = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryStringMap = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryStringMap.field_0x8 = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryStringMap.field_0x20 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryStringMap.field_0x28 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryStringMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryStringMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryStringMap.field_0x34 = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryStringMap.field_0x40 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryStringMap.field_0x48 = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryInt32Map = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryInt32Map.field_0x8 = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryInt32Map.field_0x20 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryInt32Map.field_0x28 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryInt32Map.field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryInt32Map.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryInt32Map.field_0x34 = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryInt32Map.field_0x40 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryInt32Map.field_0x48 = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryUInt32Map = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryUInt32Map.field_0x8 = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryUInt32Map.field_0x20 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryUInt32Map.field_0x28 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryUInt32Map.field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryUInt32Map.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryUInt32Map.field_0x34 = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryUInt32Map.field_0x40 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryUInt32Map.field_0x48 = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryInt64Map = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryInt64Map.field_0x8 = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryInt64Map.field_0x20 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryInt64Map.field_0x28 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryInt64Map.field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryInt64Map.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryInt64Map.field_0x34 = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryInt64Map.field_0x40 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryInt64Map.field_0x48 = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryUInt64Map = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryUInt64Map.field_0x8 = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryUInt64Map.field_0x20 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryUInt64Map.field_0x28 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryUInt64Map.field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryUInt64Map.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryUInt64Map.field_0x34 = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryUInt64Map.field_0x40 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryUInt64Map.field_0x48 = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryFloatMap = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryFloatMap.field_0x8 = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryFloatMap.field_0x20 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryFloatMap.field_0x28 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryFloatMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryFloatMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryFloatMap.field_0x34 = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryFloatMap.field_0x40 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryFloatMap.field_0x48 = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryBoolMap = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryBoolMap.field_0x8 = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryBoolMap.field_0x20 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryBoolMap.field_0x28 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryBoolMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryBoolMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryBoolMap.field_0x34 = 0;
  *(undefined8 *)&(this->HistoryEventField).HistoryData.HistoryBoolMap.field_0x40 = 0;
  *(undefined4 *)&(this->HistoryEventField).HistoryData.HistoryBoolMap.field_0x48 = 0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 & 0xfe;
  this->bIsEntryWidget = false;
  (this->AnimationName).ComparisonIndex = 0;
  (this->AnimationName).Number = 0;
  (this->AnimationTimerHandle).Handle = 0;
  this->AnimationSkipLoop = 1;
  (this->ReleasedListView).bIsActivate = false;
  UUserWidget::SetVisibility((UUserWidget *)this,SelfHitTestInvisible);
  bVar2 = FWeakObjectPtr::IsValid(&(this->WindowFrameWidget).WeakPtr);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&(this->WindowFrameWidget).WeakPtr);
    (**(code **)(*(longlong *)pUVar3 + 0x2c0))(pUVar3,4);
  }
  return this;
}

// BindInputAction @ 14bc8b5d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_UserWidget::BindInputAction(UDS_UserWidget *this,EDS_WindowWidget *param_1)

{
  FObjectPtr_u_0 *pFVar1;
  int iVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  UDS_WindowManager *this_00;
  UMVVMView *pUVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  FObjectPtr_u_0 *this_01;
  FWeakObjectPtr local_res18 [2];
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    UDS_WindowManager::GetWindowInfo(this_00,(EDS_WindowWidget)local_res18);
    bVar5 = FWeakObjectPtr::IsValid(local_res18);
    if ((bVar5) &&
       (pUVar6 = UMVVMSubsystem::GetViewFromUserWidget((UUserWidget *)this),
       pUVar6 != (UMVVMView *)0x0)) {
      iVar2 = (pUVar6->Sources).ArrayNum;
      this_01 = (FObjectPtr_u_0 *)(pUVar6->Sources).AllocatorInstance.Data;
      if ((iVar2 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar1 = this_01 + (longlong)iVar2 * 3;
      for (; this_01 != pFVar1; this_01 = this_01 + 3) {
        if (this_01->Handle != (UObject *)0x0) {
          pUVar7 = Z_Construct_UClass_UDS_ViewModelBase_NoRegister();
          bVar5 = FObjectPtr::IsA((FObjectPtr *)this_01,pUVar7);
          if ((bVar5) && (pUVar3 = this_01->Handle, pUVar3 != (UObject *)0x0)) {
            pUVar8 = FWeakObjectPtr::Get(local_res18);
            TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType_const_&,FDS_InputEventParams_const_&),FDefaultDelegateUserPolicy>
            ::AddUObject<UDS_ViewModelBase>
                      (&pUVar8[5].field_0x18,(UDS_ViewModelBase *)(local_res18 + 1),
                       (pmf_726aaeaf *)pUVar3);
          }
        }
      }
    }
  }
  return;
}

// CloseMyself @ 14bc8c5e0

void __thiscall UDS_UserWidget::CloseMyself(UDS_UserWidget *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr>::UEOpEquals
                    (&this->WindowFrameWidget,(void *)0x0);
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->WindowFrameWidget).WeakPtr);
                    /* WARNING: Could not recover jumptable at 0x00014bc8c615. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar2 + 0x4f8))(pUVar2,*(code **)(*(longlong *)pUVar2 + 0x4f8));
    return;
  }
  return;
}

// CollectChildUserWidget @ 14bc8c8b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_UserWidget::CollectChildUserWidget(UDS_UserWidget *this)

{
  int *piVar1;
  TArray<TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar2;
  FWeakObjectPtr *pFVar3;
  int iVar4;
  UObject *pUVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  int iVar8;
  UPanelWidget *pUVar9;
  UClass *pUVar10;
  UDS_UserWidget *this_00;
  longlong lVar11;
  FWeakObjectPtr *pFVar12;
  ForAnyElementType FVar13;
  FScriptContainerElement *local_res8;
  FScriptContainerElement *local_res10;
  undefined1 local_res18 [8];
  FWeakObjectPtr local_res20;
  UDS_UserWidget *local_98;
  UPanelWidget *local_90;
  UDS_UserWidget *local_88;
  UObject *local_80;
  ForAnyElementType local_78;
  int local_70 [2];
  TArray<UWidget_*,TSizedDefaultAllocator<32>_> local_68;
  TArray<UWidget_*,TSizedDefaultAllocator<32>_> local_58;
  
  pTVar2 = &this->ChildUserWidgets;
  piVar1 = &(this->ChildUserWidgets).ArrayMax;
  (this->ChildUserWidgets).ArrayNum = 0;
  if ((this->ChildUserWidgets).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  pUVar9 = (UPanelWidget *)UUserWidget::GetRootWidget((UUserWidget *)this);
  if (pUVar9 != (UPanelWidget *)0x0) {
    pUVar10 = Z_Construct_UClass_UPanelWidget_NoRegister();
    iVar4 = (int)pUVar10->_padding_;
    if ((iVar4 <= *(int *)(pUVar9->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar4 * 8)
        == &pUVar10->_padding_)) {
      UPanelWidget::GetAllChildren(pUVar9,&local_68);
      iVar4 = local_68.ArrayNum;
      local_78.Data = (FScriptContainerElement *)0x0;
      local_70[0] = 0;
      local_70[1] = 0;
      local_res10 = local_68.AllocatorInstance.Data + (longlong)local_68.ArrayNum * 8;
      FVar13.Data = local_68.AllocatorInstance.Data;
      do {
        while( true ) {
          pFVar6 = local_res10;
          if (local_68.ArrayNum != iVar4) {
            `TCheckedPointerIterator<UWidget_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_res8);
          }
          if (FVar13.Data == pFVar6) {
            iVar4 = local_70[0];
            local_res8 = local_78.Data + (longlong)local_70[0] * 8;
            FVar13.Data = local_78.Data;
            while( true ) {
              pFVar6 = local_res8;
              if (local_70[0] != iVar4) {
                `TCheckedPointerIterator<UWidget_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (&local_res10);
              }
              if (FVar13.Data == pFVar6) break;
              pUVar5 = *(UObject **)FVar13.Data;
              if (pUVar5 != (UObject *)0x0) {
                pUVar10 = Z_Construct_UClass_UDS_UserWidget_NoRegister();
                iVar8 = (int)pUVar10->_padding_;
                if ((iVar8 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar8 * 8)
                    == &pUVar10->_padding_)) {
                  local_88 = this;
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (this != (UDS_UserWidget *)0x0)) {
                    UE::GC::MarkAsReachable((UObject *)this);
                  }
                  FWeakObjectPtr::operator=
                            ((FWeakObjectPtr *)&pUVar5[0x1a].field_0x18,(FObjectPtr)&local_88);
                  iVar8 = (this->ChildUserWidgets).ArrayNum;
                  if (iVar8 == (this->ChildUserWidgets).ArrayMax) {
                    iVar8 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x408,&(this->ChildUserWidgets).AllocatorInstance,
                                       &(this->ChildUserWidgets).ArrayMax);
                  }
                  pFVar6 = (this->ChildUserWidgets).AllocatorInstance.Data;
                  (this->ChildUserWidgets).ArrayNum = iVar8 + 1;
                  pFVar3 = (FWeakObjectPtr *)(pFVar6 + (longlong)iVar8 * 8);
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    UE::GC::MarkAsReachable(pUVar5);
                  }
                  pFVar3->ObjectIndex = 0;
                  pFVar3->ObjectSerialNumber = 0;
                  local_80 = pUVar5;
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    UE::GC::MarkAsReachable(pUVar5);
                  }
                  FWeakObjectPtr::operator=(pFVar3,(FObjectPtr)&local_80);
                }
              }
              FVar13.Data = FVar13.Data + 8;
            }
            pFVar12 = (FWeakObjectPtr *)(this->ChildUserWidgets).AllocatorInstance.Data;
            iVar4 = (this->ChildUserWidgets).ArrayNum;
            pFVar3 = pFVar12 + iVar4;
            while( true ) {
              if ((this->ChildUserWidgets).ArrayNum != iVar4) {
                `TCheckedPointerIterator<TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>,int,0>::
                operator!='::__l2::<lambda_1>::operator()(local_res18);
              }
              if (pFVar12 == pFVar3) break;
              local_res20 = *pFVar12;
              bVar7 = TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>::UEOpEquals
                                ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> *)&local_res20,
                                 (void *)0x0);
              if (!bVar7) {
                this_00 = (UDS_UserWidget *)FWeakObjectPtr::Get(&local_res20);
                CollectChildUserWidget(this_00);
              }
              pFVar12 = pFVar12 + 1;
            }
            if (local_78.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data);
            }
            if (local_68.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
              return;
            }
            FMemory::Free(local_68.AllocatorInstance.Data);
            return;
          }
          pUVar9 = *(UPanelWidget **)FVar13.Data;
          if (pUVar9 != (UPanelWidget *)0x0) break;
LAB_14bc8cae9:
          FVar13.Data = FVar13.Data + 8;
        }
        pUVar10 = Z_Construct_UClass_UPanelWidget_NoRegister();
        iVar8 = (int)pUVar10->_padding_;
        if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar8) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar8 * 8) !=
            &pUVar10->_padding_)) {
          pUVar10 = Z_Construct_UClass_UDS_UserWidget_NoRegister();
          iVar8 = (int)pUVar10->_padding_;
          if ((iVar8 <= *(int *)(pUVar9->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
              &pUVar10->_padding_)) {
            local_98 = this;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (this != (UDS_UserWidget *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar9[2]._padding_,(FObjectPtr)&local_98);
            iVar8 = (this->ChildUserWidgets).ArrayNum;
            if (iVar8 == *piVar1) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x408,&pTVar2->AllocatorInstance,piVar1);
            }
            (this->ChildUserWidgets).ArrayNum = iVar8 + 1;
            pFVar3 = (FWeakObjectPtr *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8);
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar9);
            }
            pFVar3->ObjectIndex = 0;
            pFVar3->ObjectSerialNumber = 0;
            local_90 = pUVar9;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar9);
            }
            FWeakObjectPtr::operator=(pFVar3,(FObjectPtr)&local_90);
          }
          goto LAB_14bc8cae9;
        }
        CollectPanelChildren(this,&local_58,pUVar9);
        lVar11 = (longlong)local_58.ArrayNum;
        if (local_58.ArrayNum != 0) {
          iVar8 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,8,local_58.ArrayNum,&local_78,local_70,local_70 + 1);
          memcpy(local_78.Data + (longlong)iVar8 * 8,local_58.AllocatorInstance.Data,lVar11 << 3);
        }
        if (local_58.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14bc8cae9;
        FMemory::Free(local_58.AllocatorInstance.Data);
        FVar13.Data = FVar13.Data + 8;
      } while( true );
    }
  }
  return;
}

// CollectPanelChildren @ 14bc8cc90

TArray<UWidget_*,TSizedDefaultAllocator<32>_> * __thiscall
UDS_UserWidget::CollectPanelChildren
          (UDS_UserWidget *this,
          TArray<UWidget_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UPanelWidget *param_1)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  UPanelWidget *pUVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  UClass *pUVar9;
  TArray<UWidget_*,TSizedDefaultAllocator<32>_> *pTVar10;
  ulonglong uVar11;
  longlong lVar12;
  ForAnyElementType FVar13;
  undefined1 local_res10 [8];
  TArray<UWidget_*,TSizedDefaultAllocator<32>_> local_48;
  TArray<UWidget_*,TSizedDefaultAllocator<32>_> local_38;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayNum;
  piVar2 = &__return_storage_ptr__->ArrayMax;
  *piVar2 = 0;
  *piVar1 = 0;
  UPanelWidget::GetAllChildren(param_1,&local_38);
  iVar6 = local_38.ArrayNum;
  uVar11 = (ulonglong)local_38.ArrayNum;
  pFVar3 = local_38.AllocatorInstance.Data + uVar11 * 8;
  FVar13.Data = local_38.AllocatorInstance.Data;
LAB_14bc8ccf0:
  do {
    if ((uint)uVar11 != iVar6) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UWidget_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (FVar13.Data == pFVar3) {
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    pUVar4 = *(UPanelWidget **)FVar13.Data;
    if (pUVar4 == (UPanelWidget *)0x0) {
LAB_14bc8cde5:
      iVar8 = *piVar1;
      if (iVar8 == *piVar2) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,piVar2);
      }
      *piVar1 = iVar8 + 1;
      *(UPanelWidget **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) =
           pUVar4;
    }
    else {
      pUVar9 = Z_Construct_UClass_UPanelWidget_NoRegister();
      iVar8 = (int)pUVar9->_padding_;
      if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar8) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar8 * 8) !=
          &pUVar9->_padding_)) goto LAB_14bc8cde5;
      CollectPanelChildren(this,&local_48,pUVar4);
      if (__return_storage_ptr__ == &local_48) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TArray<UWidget_*,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
          return pTVar10;
        }
      }
      lVar12 = (longlong)local_48.ArrayNum;
      if (local_48.ArrayNum != 0) {
        iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,local_48.ArrayNum,&__return_storage_ptr__->AllocatorInstance,piVar1,
                           piVar2);
        memcpy((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8,
               local_48.AllocatorInstance.Data,lVar12 << 3);
      }
      if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
        uVar11 = (ulonglong)(uint)local_38.ArrayNum;
        FVar13.Data = FVar13.Data + 8;
        goto LAB_14bc8ccf0;
      }
    }
    uVar11 = (ulonglong)(uint)local_38.ArrayNum;
    FVar13.Data = FVar13.Data + 8;
  } while( true );
}

// FindChildOfUserWidget @ 14bc9e2c0

TArray<TObjectPtr<UDS_UserWidget>,TSizedDefaultAllocator<32>_> * __thiscall
UDS_UserWidget::FindChildOfUserWidget
          (UDS_UserWidget *this,
          TArray<TObjectPtr<UDS_UserWidget>,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TObjectPtr<UPanelWidget> param_1)

{
  int *piVar1;
  int *piVar2;
  FObjectPtr_u_0 *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  UClass *pUVar9;
  TArray<TObjectPtr<UDS_UserWidget>,TSizedDefaultAllocator<32>_> *pTVar10;
  FObjectPtr_u_0 FVar11;
  ForAnyElementType FVar12;
  undefined1 local_res10 [8];
  FObjectPtr_u_0 local_res18;
  FObjectPtr_u_0 local_res20;
  TArray<TObjectPtr<UDS_UserWidget>,TSizedDefaultAllocator<32>_> local_58;
  TArray<UWidget_*,TSizedDefaultAllocator<32>_> local_48;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayNum;
  piVar2 = &__return_storage_ptr__->ArrayMax;
  *piVar2 = 0;
  *piVar1 = 0;
  UPanelWidget::GetAllChildren(*(UPanelWidget **)param_1.field0_0x0,&local_48);
  iVar5 = local_48.ArrayNum;
  pFVar3 = (FObjectPtr_u_0 *)(local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 8);
  FVar12.Data = local_48.AllocatorInstance.Data;
  do {
    while( true ) {
      if (local_48.ArrayNum != iVar5) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<UWidget_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if ((FObjectPtr_u_0 *)FVar12.Data == pFVar3) {
        if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.AllocatorInstance.Data);
        }
        return __return_storage_ptr__;
      }
      local_res18 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)FVar12.Data;
      if (UE::GC::GIsIncrementalReachabilityPending != false) break;
LAB_14bc9e371:
      if (local_res18.Handle == (UObject *)0x0) goto LAB_14bc9e4a1;
      pUVar9 = Z_Construct_UClass_UPanelWidget_NoRegister();
      bVar6 = FObjectPtr::IsA((FObjectPtr *)&local_res18,pUVar9);
      FVar11 = local_res18;
      if (!bVar6) {
        if (local_res18.Handle == (UObject *)0x0) goto LAB_14bc9e4a1;
        pUVar9 = Z_Construct_UClass_UDS_UserWidget_NoRegister();
        bVar6 = FObjectPtr::IsA((FObjectPtr *)&local_res18,pUVar9);
        FVar11 = local_res18;
        if (!bVar6) goto LAB_14bc9e4a1;
        goto LAB_14bc9e4a3;
      }
      if (local_res18.Handle == (UObject *)0x0) goto LAB_14bc9e4a1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(local_res18.Handle);
      }
      local_res20.Handle = FVar11.Handle;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(FVar11.Handle);
      }
      FindChildOfUserWidget(this,&local_58,(TObjectPtr<UPanelWidget>)&local_res20);
      if (local_58.ArrayNum != 0) {
        if ((__return_storage_ptr__ == &local_58) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x96e,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TArray<TObjectPtr<UDS_UserWidget>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar10;
        }
        iVar8 = local_58.ArrayNum;
        if (local_58.ArrayNum != 0) {
          iVar7 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (8,8,local_58.ArrayNum,&__return_storage_ptr__->AllocatorInstance,piVar1
                             ,piVar2);
          ConstructItems<TObjectPtr<UDS_UserWidget>,TObjectPtr<UDS_UserWidget>,int>
                    ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8,
                     (TObjectPtr<UDS_UserWidget> *)local_58.AllocatorInstance.Data,iVar8);
        }
      }
      if (local_58.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14bc9e4f9;
      FMemory::Free(local_58.AllocatorInstance.Data);
      FVar12.Data = FVar12.Data + 8;
    }
    if (local_res18.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res18.Handle);
      goto LAB_14bc9e371;
    }
LAB_14bc9e4a1:
    FVar11.Handle = (UObject *)0x0;
LAB_14bc9e4a3:
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (FVar11.Handle != (UObject *)0x0) goto LAB_14bc9e4c0;
    }
    else if (FVar11.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(FVar11.Handle);
LAB_14bc9e4c0:
      iVar8 = *piVar1;
      if (iVar8 == *piVar2) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,piVar2);
      }
      *piVar1 = iVar8 + 1;
      ((FObjectPtr_u_0 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8))->
      Handle = (UObject *)FVar11;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(FVar11.Handle);
      }
    }
LAB_14bc9e4f9:
    FVar12.Data = FVar12.Data + 8;
  } while( true );
}

// FindChildWidget @ 14bc9e550

UDS_UserWidget * __thiscall UDS_UserWidget::FindChildWidget(UDS_UserWidget *this,FName param_1)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  ForAnyElementType _Src;
  bool bVar3;
  UObject *pUVar4;
  UDS_UserWidget *this_00;
  int iVar5;
  FWeakObjectPtr *pFVar6;
  FWeakObjectPtr local_res8;
  FName local_res18 [2];
  ForAnyElementType local_78;
  int local_70;
  int local_6c;
  FString local_68;
  FScriptContainerElement *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  
  pFVar6 = (FWeakObjectPtr *)(this->ChildUserWidgets).AllocatorInstance.Data;
  iVar2 = (this->ChildUserWidgets).ArrayNum;
  pFVar1 = pFVar6 + iVar2;
  do {
    if ((this->ChildUserWidgets).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_res8);
    }
    if (pFVar6 == pFVar1) {
      return (UDS_UserWidget *)0x0;
    }
    local_res8 = *pFVar6;
    bVar3 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar3) {
      pUVar4 = FWeakObjectPtr::Get(&local_res8);
      local_res18[0].ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
      local_res18[0].Number = *(uint *)&pUVar4->field_0x1c;
      ::FName::ToString(local_res18,&local_68);
      _Src.Data = local_68.Data.AllocatorInstance.Data;
      local_78.Data = (FScriptContainerElement *)0x0;
      iVar5 = local_68.Data.ArrayNum;
      local_70 = iVar5;
      if (iVar5 == 0) {
        local_6c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar5,0,&local_78,iVar5,&local_6c);
        memcpy(local_78.Data,_Src.Data,(longlong)iVar5 * 2);
      }
      iStack_50 = local_70 + -1;
      if (local_70 == 0) {
        iStack_50 = 0;
      }
      local_48._12_4_ = uStack_4c;
      local_48.Size = iStack_50;
      local_58 = local_78.Data;
      local_48.DataPtr = (wchar_t *)local_78.Data;
      bVar3 = ::FName::Equals(param_1,&local_48);
      if (local_78.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data);
      }
      this_00 = (UDS_UserWidget *)FWeakObjectPtr::Get(&local_res8);
      if ((bVar3) || (this_00 = FindChildWidget(this_00,param_1), this_00 != (UDS_UserWidget *)0x0))
      {
        if (local_68.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return this_00;
        }
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
        return this_00;
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
    }
    pFVar6 = pFVar6 + 1;
  } while( true );
}

// FindParentWidget @ 14bc9e6e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidget * __thiscall
UDS_UserWidget::FindParentWidget(UDS_UserWidget *this,UWidget *param_1,UClass *param_2)

{
  UClass *pUVar1;
  
  do {
    param_1 = (UWidget *)UWidget::GetParent(param_1);
    if ((UPanelWidget *)param_1 == (UPanelWidget *)0x0) {
      return (UWidget *)0x0;
    }
    pUVar1 = Z_Construct_UClass_UWidget_NoRegister();
  } while (param_2 != pUVar1);
  return (UWidget *)(UPanelWidget *)param_1;
}

// FindParentWidget @ 14bc9e760

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidget * __thiscall UDS_UserWidget::FindParentWidget(UDS_UserWidget *this,UClass *param_1)

{
  UPanelWidget *pUVar1;
  UClass *pUVar2;
  UWidget *pUVar3;
  
  pUVar1 = UWidget::GetParent((UWidget *)this);
  if (pUVar1 == (UPanelWidget *)0x0) {
    return (UWidget *)0x0;
  }
  pUVar2 = Z_Construct_UClass_UWidget_NoRegister();
  if (param_1 == pUVar2) {
    return (UWidget *)pUVar1;
  }
  pUVar3 = FindParentWidget(this,(UWidget *)pUVar1,param_1);
  return pUVar3;
}

// GetAnimation @ 14bc9ec60

UWidgetAnimation * __thiscall UDS_UserWidget::GetAnimation(UDS_UserWidget *this,FName *param_1)

{
  int iVar1;
  FObjectPropertyBase *pFVar2;
  UWidgetAnimation *pUVar3;
  UClass *pUVar4;
  
  pFVar2 = FindFProperty<FObjectPropertyBase>((UStruct *)this->_padding_,*param_1,Default);
  if (pFVar2 != (FObjectPropertyBase *)0x0) {
    pUVar3 = (UWidgetAnimation *)(**(code **)(pFVar2->_padding_ + 0x208))(pFVar2,this,0);
    if (pUVar3 != (UWidgetAnimation *)0x0) {
      pUVar4 = Z_Construct_UClass_UWidgetAnimation_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        pUVar3 = (UWidgetAnimation *)0x0;
      }
      return pUVar3;
    }
  }
  return (UWidgetAnimation *)0x0;
}

// GetIsListItemExpanded @ 14bca0610

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall UDS_UserWidget::GetIsListItemExpanded(UDS_UserWidget *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedPtr<IObjectTableRow_const_,1> local_18;
  
  IObjectTableRow::ObjectRowFromUserWidget(&local_18,(UUserWidget *)this);
  if (local_18.Object == (IObjectTableRow *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return false;
  }
  if (local_18.Object == (IObjectTableRow *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  uVar3 = (**(code **)((longlong)*local_18.Object + 0x20))(local_18.Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return (bool)uVar3;
}

// GetRootParentUserWidget @ 14bca1920

TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> __thiscall
UDS_UserWidget::GetRootParentUserWidget(UDS_UserWidget *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr in_RDX;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res18 [2];
  
  (**(code **)(this->_padding_ + 0x500))(this,&local_res8);
  bVar1 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar1) {
    do {
      pUVar2 = FWeakObjectPtr::Get(&local_res8);
      (**(code **)(*(longlong *)pUVar2 + 0x500))(pUVar2,local_res18);
      bVar1 = FWeakObjectPtr::IsValid(local_res18);
      if (!bVar1) {
        *(FWeakObjectPtr *)in_RDX = local_res8;
        return (TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)in_RDX;
      }
      local_res8 = local_res18[0];
      bVar1 = FWeakObjectPtr::IsValid(&local_res8);
    } while (bVar1);
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  *(undefined8 *)in_RDX = 0;
  local_res18[0] = (FWeakObjectPtr)this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)local_res18);
  return (TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)in_RDX;
}

// GetViewModel @ 14bca2640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TObjectPtr<UDS_ViewModelBase> __thiscall
UDS_UserWidget::GetViewModel(UDS_UserWidget *this,TObjectPtr<UDS_UserWidget> param_1,FName param_2)

{
  int iVar1;
  UMVVMView *this_00;
  UObject *pUVar2;
  UClass *pUVar3;
  FName in_R9;
  undefined1 local_18 [16];
  
  *(undefined8 *)param_1.field0_0x0 = 0;
  this_00 = UMVVMSubsystem::GetViewFromUserWidget(*(UUserWidget **)param_2);
  if (this_00 == (UMVVMView *)0x0) {
    return (TObjectPtr<UDS_ViewModelBase>)param_1.field0_0x0.DebugPtr;
  }
  UMVVMView::GetViewModel(this_00,(TScriptInterface<INotifyFieldValueChanged> *)local_18,in_R9);
  if (local_18._0_8_ == 0) {
    return (TObjectPtr<UDS_ViewModelBase>)param_1.field0_0x0.DebugPtr;
  }
  if ((longlong *)local_18._8_8_ == (longlong *)0x0) {
    return (TObjectPtr<UDS_ViewModelBase>)param_1.field0_0x0.DebugPtr;
  }
  pUVar2 = (UObject *)(**(code **)(*(longlong *)local_18._8_8_ + 8))();
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UDS_ViewModelBase_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_14bca26b9;
  }
  pUVar2 = (UObject *)0x0;
LAB_14bca26b9:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  *(UObject **)param_1.field0_0x0 = pUVar2;
  return (TObjectPtr<UDS_ViewModelBase>)param_1.field0_0x0.DebugPtr;
}

// GetViewModel @ 14bca26f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TObjectPtr<UDS_ViewModelBase> __thiscall
UDS_UserWidget::GetViewModel(UDS_UserWidget *this,FName param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UUserWidget *pUVar4;
  UMVVMView *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UWidget *pUVar8;
  ulonglong uVar9;
  undefined7 in_register_00000081;
  FName FVar10;
  char in_R9B;
  ForAnyElementType FVar11;
  UWidget *local_res8;
  TArray<TObjectPtr<UDS_UserWidget>,TSizedDefaultAllocator<32>_> local_48;
  undefined1 local_38 [16];
  
  FVar10._1_7_ = in_register_00000081;
  FVar10.ComparisonIndex.Value._0_1_ = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (this != (UDS_UserWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  pUVar6 = (UObject *)0x0;
  pUVar5 = UMVVMSubsystem::GetViewFromUserWidget((UUserWidget *)this);
  if (pUVar5 == (UMVVMView *)0x0) {
LAB_14bca27a1:
    if (pUVar6 != (UObject *)0x0) goto LAB_14bca2935;
  }
  else {
    UMVVMView::GetViewModel(pUVar5,(TScriptInterface<INotifyFieldValueChanged> *)&local_48,FVar10);
    if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      if ((longlong *)CONCAT44(local_48.ArrayMax,local_48.ArrayNum) == (longlong *)0x0)
      goto LAB_14bca27a1;
      pUVar6 = (UObject *)
               (**(code **)(*(longlong *)CONCAT44(local_48.ArrayMax,local_48.ArrayNum) + 8))();
      if (pUVar6 == (UObject *)0x0) {
LAB_14bca2789:
        pUVar6 = (UObject *)0x0;
      }
      else {
        pUVar7 = Z_Construct_UClass_UDS_ViewModelBase_NoRegister();
        iVar2 = (int)pUVar7->_padding_;
        if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar2) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
            &pUVar7->_padding_)) goto LAB_14bca2789;
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar6 == (UObject *)0x0) goto LAB_14bca27aa;
        UE::GC::MarkAsReachable(pUVar6);
      }
      goto LAB_14bca27a1;
    }
  }
LAB_14bca27aa:
  if ((in_R9B != '\0') &&
     (pUVar8 = UUserWidget::GetRootWidget((UUserWidget *)this), pUVar8 != (UWidget *)0x0)) {
    pUVar7 = Z_Construct_UClass_UPanelWidget_NoRegister();
    iVar2 = (int)pUVar7->_padding_;
    if ((iVar2 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar7->_padding_)) {
      local_res8 = pUVar8;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      FindChildOfUserWidget(this,&local_48,(TObjectPtr<UPanelWidget>)&local_res8);
      iVar2 = local_48.ArrayNum;
      uVar9 = (ulonglong)local_48.ArrayNum;
      pFVar1 = local_48.AllocatorInstance.Data + uVar9 * 8;
      FVar11.Data = local_48.AllocatorInstance.Data;
      while( true ) {
        if ((uint)uVar9 != iVar2) {
          `TCheckedPointerIterator<TObjectPtr<UDS_UserWidget>,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_res8);
        }
        if (FVar11.Data == pFVar1) break;
        pUVar4 = *(UUserWidget **)FVar11.Data;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (pUVar4 != (UUserWidget *)0x0) {
            UE::GC::MarkAsReachable((UObject *)pUVar4);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UUserWidget *)0x0)
             ) {
            UE::GC::MarkAsReachable((UObject *)pUVar4);
          }
        }
        pUVar6 = (UObject *)0x0;
        pUVar5 = UMVVMSubsystem::GetViewFromUserWidget(pUVar4);
        if (pUVar5 == (UMVVMView *)0x0) {
LAB_14bca28ef:
          if (pUVar6 != (UObject *)0x0) {
            *(UObject **)param_1 = pUVar6;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar6);
            }
            if (local_48.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
              return (TObjectPtr<UDS_ViewModelBase>)param_1;
            }
            FMemory::Free(local_48.AllocatorInstance.Data);
            return (TObjectPtr<UDS_ViewModelBase>)param_1;
          }
        }
        else {
          UMVVMView::GetViewModel
                    (pUVar5,(TScriptInterface<INotifyFieldValueChanged> *)local_38,FVar10);
          if (local_38._0_8_ != 0) {
            if ((longlong *)local_38._8_8_ == (longlong *)0x0) goto LAB_14bca28ef;
            pUVar6 = (UObject *)(**(code **)(*(longlong *)local_38._8_8_ + 8))();
            if (pUVar6 == (UObject *)0x0) {
LAB_14bca28d7:
              pUVar6 = (UObject *)0x0;
            }
            else {
              pUVar7 = Z_Construct_UClass_UDS_ViewModelBase_NoRegister();
              iVar3 = (int)pUVar7->_padding_;
              if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar3) ||
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
                  &pUVar7->_padding_)) goto LAB_14bca28d7;
            }
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              if (pUVar6 == (UObject *)0x0) goto LAB_14bca28f4;
              UE::GC::MarkAsReachable(pUVar6);
            }
            goto LAB_14bca28ef;
          }
        }
LAB_14bca28f4:
        pUVar6 = (UObject *)0x0;
        uVar9 = (ulonglong)(uint)local_48.ArrayNum;
        FVar11.Data = FVar11.Data + 8;
      }
      if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
    }
  }
LAB_14bca2935:
  *(UObject **)param_1 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  return (TObjectPtr<UDS_ViewModelBase>)param_1;
}

// GetViewModels @ 14bca2970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TArray<TWeakObjectPtr<UDS_ViewModelBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
UDS_UserWidget::GetViewModels
          (UDS_UserWidget *this,
          TArray<TWeakObjectPtr<UDS_ViewModelBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FObjectPtr_u_0 *pFVar1;
  FWeakObjectPtr *this_00;
  UObject *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UMVVMView *pUVar7;
  TArray<TWeakObjectPtr<UDS_ViewModelBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar8;
  UClass *pUVar9;
  FObjectPtr_u_0 *this_01;
  UObject *local_res10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pUVar7 = UMVVMSubsystem::GetViewFromUserWidget((UUserWidget *)this);
  if (pUVar7 == (UMVVMView *)0x0) {
    return __return_storage_ptr__;
  }
  this_01 = (FObjectPtr_u_0 *)(pUVar7->Sources).AllocatorInstance.Data;
  iVar6 = (pUVar7->Sources).ArrayNum;
  if ((iVar6 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TArray<TWeakObjectPtr<UDS_ViewModelBase,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *
             )(*pcVar4)();
    return pTVar8;
  }
  pFVar1 = this_01 + (longlong)iVar6 * 3;
  for (; this_01 != pFVar1; this_01 = this_01 + 3) {
    if (this_01->Handle != (UObject *)0x0) {
      pUVar9 = Z_Construct_UClass_UDS_ViewModelBase_NoRegister();
      bVar5 = FObjectPtr::IsA((FObjectPtr *)this_01,pUVar9);
      if ((bVar5) && (pUVar2 = this_01->Handle, pUVar2 != (UObject *)0x0)) {
        iVar6 = __return_storage_ptr__->ArrayNum;
        if (iVar6 == __return_storage_ptr__->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
        __return_storage_ptr__->ArrayNum = iVar6 + 1;
        this_00 = (FWeakObjectPtr *)(pFVar3 + (longlong)iVar6 * 8);
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar2);
        }
        this_00->ObjectIndex = 0;
        this_00->ObjectSerialNumber = 0;
        local_res10 = pUVar2;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar2);
        }
        FWeakObjectPtr::operator=(this_00,(FObjectPtr)&local_res10);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetWindowFrameSlotMargin @ 14bca2b00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FMargin * __thiscall
UDS_UserWidget::GetWindowFrameSlotMargin(UDS_UserWidget *this,FMargin *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  UObject *pUVar5;
  FAnchorData *pFVar6;
  FAnchorData local_48;
  
  bVar4 = FWeakObjectPtr::IsValid(&(this->WindowFrameWidget).WeakPtr);
  if (bVar4) {
    pUVar5 = FWeakObjectPtr::Get(&(this->WindowFrameWidget).WeakPtr);
    pFVar6 = UCanvasPanelSlot::GetLayout(*(UCanvasPanelSlot **)&pUVar5[0x3a].field_0x18,&local_48);
    fVar1 = (pFVar6->Offsets).Top;
    fVar2 = (pFVar6->Offsets).Right;
    fVar3 = (pFVar6->Offsets).Bottom;
    __return_storage_ptr__->Left = (pFVar6->Offsets).Left;
    __return_storage_ptr__->Top = fVar1;
    __return_storage_ptr__->Right = fVar2;
    __return_storage_ptr__->Bottom = fVar3;
    return __return_storage_ptr__;
  }
  UUserWidget::GetPadding((UUserWidget *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InitWithData @ 14bca68f0

bool __thiscall UDS_UserWidget::InitWithData(UDS_UserWidget *this,FDS_WidgetContext *param_1)

{
  return true;
}

// InitializeNativeClassData @ 14bca6ab0

void __thiscall UDS_UserWidget::InitializeNativeClassData(UDS_UserWidget *this)

{
  return;
}

// NativeConstruct @ 14bcaaad0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_UserWidget::NativeConstruct(UDS_UserWidget *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  UWidgetAnimation *pUVar3;
  FWidgetAnimationHandle local_18;
  
  UUserWidget::NativeConstruct((UUserWidget *)this);
  CollectChildUserWidget(this);
  if ((this->bIsAnimationPlayOnConstruct != false) && (this->AnimationNameOnConstruct != (FName)0x0)
     ) {
    pUVar3 = GetAnimation(this,&this->AnimationNameOnConstruct);
    if (pUVar3 != (UWidgetAnimation *)0x0) {
      UUserWidget::PlayAnimation
                ((UUserWidget *)this,&local_18,pUVar3,0.0,(uint)(this->bIsAnimationLoop != true),
                 Forward,__real_3f800000,false);
      if (local_18.WeakState.WeakReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_18.WeakState.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_18.WeakState.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_18.WeakState.WeakReferenceCount.ReferenceController,1);
        }
      }
    }
  }
  return;
}

// NativeDestruct @ 14bcac230

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_UserWidget::NativeDestruct(UDS_UserWidget *this)

{
  FObjectPtr_u_0 *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UMVVMView *pUVar5;
  UClass *pUVar6;
  FTimerManager *this_00;
  FTimerData *pFVar7;
  FObjectPtr_u_0 *this_01;
  
  pUVar5 = UMVVMSubsystem::GetViewFromUserWidget((UUserWidget *)this);
  if (pUVar5 != (UMVVMView *)0x0) {
    iVar2 = (pUVar5->Sources).ArrayNum;
    this_01 = (FObjectPtr_u_0 *)(pUVar5->Sources).AllocatorInstance.Data;
    if ((iVar2 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar1 = this_01 + (longlong)iVar2 * 3;
    for (; this_01 != pFVar1; this_01 = this_01 + 3) {
      if (this_01->Handle != (UObject *)0x0) {
        pUVar6 = Z_Construct_UClass_UDS_ViewModelBase_NoRegister();
        bVar4 = FObjectPtr::IsA((FObjectPtr *)this_01,pUVar6);
        if ((bVar4) && (this_01->Handle != (UObject *)0x0)) {
          (**(code **)(*(longlong *)this_01->Handle + 0x2b8))();
        }
      }
    }
  }
  if ((this->AnimationTimerHandle).Handle != 0) {
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar7 = FTimerManager::FindTimer(this_00,&this->AnimationTimerHandle);
    if (pFVar7 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(this_00,(FTimerHandle)(this->AnimationTimerHandle).Handle);
    }
    (this->AnimationTimerHandle).Handle = 0;
  }
  UCommonUserWidget::NativeDestruct((UCommonUserWidget *)this);
  return;
}

// NativeOnFocusLost @ 14bcac6b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_UserWidget::NativeOnFocusLost(UDS_UserWidget *this,FFocusEvent *param_1)

{
  FFieldId local_18;
  
  (this->FocusLostEvent).bLostFocusByChild = param_1->bLostFocusByChild;
  local_18.FieldName = FFieldNotificationClassDescriptor::FocusLostEvent.FieldName;
  local_18.BitNumber = FFieldNotificationClassDescriptor::FocusLostEvent.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
  UUserWidget::NativeOnFocusLost((UUserWidget *)this,param_1);
  return;
}

// NativeOnFocusReceived @ 14bcac910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
UDS_UserWidget::NativeOnFocusReceived
          (UDS_UserWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FFocusEvent *param_2)

{
  FFieldId local_18;
  
  local_18.FieldName = FFieldNotificationClassDescriptor::FocusReceivedEvent.FieldName;
  local_18.BitNumber = FFieldNotificationClassDescriptor::FocusReceivedEvent.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
  UUserWidget::NativeOnFocusReceived((UUserWidget *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// NativeOnKeyDown @ 14bcacdd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
UDS_UserWidget::NativeOnKeyDown
          (UDS_UserWidget *this,FReply *__return_storage_ptr__,FGeometry *param_1,FKeyEvent *param_2
          )

{
  char cVar1;
  int iVar2;
  FSlateApplication *pFVar3;
  FName FVar4;
  FFieldId local_18;
  
  pFVar3 = FSlateApplication::Get();
  cVar1 = (**(code **)(*(longlong *)pFVar3 + 0xb0))(pFVar3,param_2);
  FVar4 = FFieldNotificationClassDescriptor::NavigationAcceptEvent.FieldName;
  iVar2 = FFieldNotificationClassDescriptor::NavigationAcceptEvent.BitNumber;
  if ((cVar1 == '\0') ||
     (FVar4 = FFieldNotificationClassDescriptor::NavigationBackEvent.FieldName,
     iVar2 = FFieldNotificationClassDescriptor::NavigationBackEvent.BitNumber, cVar1 == '\x01')) {
    local_18.FieldName = FVar4;
    local_18.BitNumber = iVar2;
    UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
  }
  UUserWidget::NativeOnKeyDown((UUserWidget *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// NativeOnListItemObjectSet @ 14bcace80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_UserWidget::NativeOnListItemObjectSet(UDS_UserWidget *this,UObject *param_1)

{
  atomic<int> *paVar1;
  TMap<FString,UE::Math::TVector2<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector2<double>,0>_>
  *this_00;
  float fVar2;
  atomic<int> aVar3;
  int iVar4;
  FName FVar5;
  UClass *pUVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  FObjectPropertyBase *pFVar9;
  UWidgetAnimation *pUVar10;
  FTimerManager *pFVar11;
  FWeakObjectPtr local_res10;
  TMap<FString,UE::Math::TVector2<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector2<double>,0>_>
  *local_res18;
  FWidgetAnimationHandle local_78;
  FDestructionSentinel local_68;
  undefined1 *local_50;
  
  if (param_1 != (UObject *)0x0) {
    pUVar6 = Z_Construct_UClass_UDS_UserObjectListItem_NoRegister();
    iVar4 = (int)pUVar6->_padding_;
    if ((iVar4 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar4 * 8) ==
        &pUVar6->_padding_)) {
      this_00 = &this[-1].ChildOriginalScales;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_00 !=
          (TMap<FString,UE::Math::TVector2<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector2<double>,0>_>
           *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      local_res10.ObjectIndex = 0;
      local_res10.ObjectSerialNumber = 0;
      local_res18 = this_00;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_00 !=
          (TMap<FString,UE::Math::TVector2<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector2<double>,0>_>
           *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
      UDS_UserObjectListItem::BindViewModels
                ((UDS_UserObjectListItem *)param_1,
                 (TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res10);
      if (param_1[4].field_0x14 != '\0') {
        FVar5.ComparisonIndex.Value = *(uint *)&param_1[4].field_0x18;
        FVar5.Number = *(uint *)&param_1[4].field_0x1c;
        fVar2 = *(float *)&param_1[4].field_0x20;
        if (fVar2 <= 0.0) {
          pFVar9 = FindFProperty<FObjectPropertyBase>
                             (*(UStruct **)&this[-1].ChildOriginalScales.field_0x10,FVar5,Default);
          if ((pFVar9 != (FObjectPropertyBase *)0x0) &&
             (pUVar10 = (UWidgetAnimation *)
                        (**(code **)(pFVar9->_padding_ + 0x208))(pFVar9,this_00,0),
             pUVar10 != (UWidgetAnimation *)0x0)) {
            pUVar6 = Z_Construct_UClass_UWidgetAnimation_NoRegister();
            iVar4 = (int)pUVar6->_padding_;
            if ((*(int *)(pUVar10->_padding_ + 0x38) < iVar4) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar4 * 8) !=
                &pUVar6->_padding_)) {
              pUVar10 = (UWidgetAnimation *)0x0;
            }
            if ((pUVar10 != (UWidgetAnimation *)0x0) &&
               (UUserWidget::PlayAnimation
                          ((UUserWidget *)this_00,&local_78,pUVar10,0.0,1,Forward,__real_3f800000,
                           false),
               local_78.WeakState.WeakReferenceCount.ReferenceController !=
               (TReferenceControllerBase<1> *)0x0)) {
              LOCK();
              paVar1 = &(local_78.WeakState.WeakReferenceCount.ReferenceController)->
                        WeakReferenceCount;
              aVar3 = *paVar1;
              *paVar1 = (atomic<int>)((int)*paVar1 + -1);
              UNLOCK();
              if ((aVar3 == (atomic<int>)0x1) &&
                 (local_78.WeakState.WeakReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0)) {
                (**(code **)((local_78.WeakState.WeakReferenceCount.ReferenceController)->_padding_
                            + 8))(local_78.WeakState.WeakReferenceCount.ReferenceController,1);
              }
            }
          }
        }
        else {
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1[3].field_0x8);
          local_78.WeakState.Object = (FWidgetAnimationState *)OnCancelAnimationEvent;
          local_78.WeakState.WeakReferenceCount.ReferenceController =
               local_78.WeakState.WeakReferenceCount.ReferenceController & 0xffffffff00000000;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1[3].field_0x8
                     ,(FWriteAccessScope *)&local_68);
          local_50 = &param_1[3].field_0x10;
          puVar7 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_50);
          if (puVar7 != (undefined8 *)0x0) {
            *puVar7 = &
                      ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
            ;
            uVar8 = FDelegateHandle::GenerateNewID();
            puVar7[2] = uVar8;
            *puVar7 = &
                      ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_UserWidget____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
            ;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (this_00 !=
                (TMap<FString,UE::Math::TVector2<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector2<double>,0>_>
                 *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)this_00);
            }
            puVar7[3] = 0;
            local_res10 = (FWeakObjectPtr)this_00;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (this_00 !=
                (TMap<FString,UE::Math::TVector2<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector2<double>,0>_>
                 *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)this_00);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 3),(FObjectPtr)&local_res10);
            puVar7[4] = local_78.WeakState.Object;
            puVar7[5] = local_78.WeakState.WeakReferenceCount.ReferenceController;
          }
          if (local_68.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
          }
          pFVar9 = FindFProperty<FObjectPropertyBase>
                             (*(UStruct **)&this[-1].ChildOriginalScales.field_0x10,FVar5,Default);
          if ((pFVar9 != (FObjectPropertyBase *)0x0) &&
             (pUVar10 = (UWidgetAnimation *)
                        (**(code **)(pFVar9->_padding_ + 0x208))(pFVar9,this_00,0),
             pUVar10 != (UWidgetAnimation *)0x0)) {
            pUVar6 = Z_Construct_UClass_UWidgetAnimation_NoRegister();
            iVar4 = (int)pUVar6->_padding_;
            if ((*(int *)(pUVar10->_padding_ + 0x38) < iVar4) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar4 * 8) !=
                &pUVar6->_padding_)) {
              pUVar10 = (UWidgetAnimation *)0x0;
            }
            if (pUVar10 != (UWidgetAnimation *)0x0) {
              UUserWidget::PlayAnimation
                        ((UUserWidget *)this_00,&local_78,pUVar10,0.0,1,Forward,__real_3f800000,
                         false);
              if (local_78.WeakState.WeakReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                paVar1 = &(local_78.WeakState.WeakReferenceCount.ReferenceController)->
                          WeakReferenceCount;
                aVar3 = *paVar1;
                *paVar1 = (atomic<int>)((int)*paVar1 + -1);
                UNLOCK();
                if ((aVar3 == (atomic<int>)0x1) &&
                   (local_78.WeakState.WeakReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0)) {
                  (**(code **)((local_78.WeakState.WeakReferenceCount.ReferenceController)->
                               _padding_ + 8))
                            (local_78.WeakState.WeakReferenceCount.ReferenceController,1);
                }
              }
              UUserWidget::PauseAnimation((UUserWidget *)this_00,pUVar10);
            }
          }
          if (*(longlong *)&(this->ChildScales).field_0x38 != 0) {
            pFVar11 = FDS_TimerManager::Get((UObject *)0x0);
            FTimerManager::ClearTimer(pFVar11,(FTimerHandle *)&(this->ChildScales).field_0x38);
          }
          *(uint *)&(this->ChildScales).field_0x2c = FVar5.ComparisonIndex.Value;
          *(uint *)&(this->ChildScales).field_0x30 = FVar5.Number;
          pFVar11 = FDS_TimerManager::Get((UObject *)0x0);
          local_78.WeakState.WeakReferenceCount.ReferenceController =
               local_78.WeakState.WeakReferenceCount.ReferenceController & 0xffffffff00000000;
          local_78.WeakState.Object = (FWidgetAnimationState *)OnDelayedAnimationEvent;
          FTimerManager::SetTimer<UDS_UserWidget>
                    (pFVar11,(FTimerHandle *)&(this->ChildScales).field_0x38,
                     (UDS_UserWidget *)this_00,(pmf_7a41ef92 *)&local_78,fVar2,false,__real_bf800000
                    );
        }
        UDS_UserObjectListItem::SetStopAnimation((UDS_UserObjectListItem *)param_1);
      }
    }
  }
  return;
}

// NativePreConstruct @ 14bcae010

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_UserWidget::NativePreConstruct(UDS_UserWidget *this)

{
  undefined1 *puVar1;
  double *pdVar2;
  uint uVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  int iVar7;
  FName *pFVar8;
  UWidget *pUVar9;
  FWidgetTransform *pFVar10;
  TVector2<double> *pTVar11;
  longlong lVar12;
  ulonglong uVar13;
  TSet<TTuple<FString,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
  *this_00;
  wchar_t *pwVar14;
  ForAnyElementType FVar15;
  ulonglong uVar16;
  int iVar17;
  FString *pFVar18;
  uint uVar19;
  TMap<FString,UE::Math::TVector2<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector2<double>,0>_>
  *pTVar20;
  undefined1 *puVar21;
  uint *puVar22;
  int iVar23;
  uint uVar24;
  undefined1 local_res8 [8];
  int local_res10;
  TPairInitializer<FString_&,UE::Math::TVector2<double>_const_&> local_res18;
  FString local_298;
  FString local_288;
  FString local_278;
  TMap<FString,UE::Math::TVector2<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector2<double>,0>_>
  *local_268;
  int iStack_260;
  uint uStack_25c;
  undefined1 *local_258;
  undefined4 uStack_250;
  int iStack_24c;
  int local_248;
  int iStack_244;
  int iStack_240;
  undefined4 uStack_23c;
  longlong *local_238;
  undefined1 auStack_230 [16];
  uint uStack_220;
  uint uStack_21c;
  longlong local_218;
  TSet<TTuple<FString,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
  *pTStack_210;
  TSet<TTuple<FString,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
  *local_208;
  undefined2 local_200;
  longlong *local_1f8;
  undefined1 auStack_1f0 [16];
  uint uStack_1e0;
  uint uStack_1dc;
  longlong local_1d8;
  TSet<TTuple<FString,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
  *pTStack_1d0;
  TSet<TTuple<FString,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
  *local_1c8;
  undefined2 local_1c0;
  FName local_1b8;
  FString local_1b0;
  FString local_1a0;
  TMap<FString,UE::Math::TVector2<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector2<double>,0>_>
  *local_190;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_188;
  undefined8 uStack_168;
  FString *local_160;
  double *local_158;
  undefined1 local_150 [64];
  double dStack_110;
  TVector2<double>_u_0 local_108;
  TVector2<double>_u_0 local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  longlong local_b8;
  undefined1 local_b0 [32];
  longlong local_90;
  TSet<TTuple<FString,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
  *pTStack_88;
  undefined1 local_80 [32];
  longlong local_60;
  TSet<TTuple<FString,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
  *pTStack_58;
  
  UUserWidget::NativePreConstruct((UUserWidget *)this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->_padding_,this);
  local_288.Data.AllocatorInstance.Data = (FScriptContainerElement *)OnFinishedAnimationEvent;
  local_288.Data.ArrayNum = 0;
  local_150._48_8_ = (ulonglong)(uint)local_288.Data.ArrayMax << 0x20;
  local_150._40_8_ = OnFinishedAnimationEvent;
  TMulticastDelegateRegistration<void___cdecl(FWidgetAnimationState_&),FDefaultDelegateUserPolicy>::
  AddUObject<UDS_UserWidget>
            ((TMulticastDelegateRegistration<void___cdecl(FWidgetAnimationState_&),FDefaultDelegateUserPolicy>
              *)&this->_padding_,(UDS_UserWidget *)local_150,(pmf_482b87f0 *)this);
  iVar23 = 1;
  if (this->bIsChildScale == false) {
    this_00 = (TSet<TTuple<FString,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
               *)&this->ChildOriginalScales;
    if (0 < *(int *)&(this->ChildOriginalScales).field_0x8 -
            *(int *)&(this->ChildOriginalScales).field_0x34) {
      TSet<TTuple<FString,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
      ::TIterator::TIterator((TIterator *)local_80,this_00);
      local_1c0 = 0;
      stack0xfffffffffffffe18 = local_80._16_16_;
      local_1f8 = (longlong *)local_80._0_8_;
      auStack_1f0._0_8_ = local_80._8_8_;
      local_1d8 = local_60;
      pTStack_1d0 = pTStack_58;
      uVar13 = local_80._24_8_ >> 0x20;
      local_1c8 = this_00;
      if ((int)local_80._28_4_ < *(int *)(local_80._16_8_ + 0x18)) {
        uVar16 = (ulonglong)local_80._28_4_;
        do {
          plVar5 = local_1f8;
          lVar12 = (longlong)(int)uVar13 * 0x28;
          ::FString::Replace((FString *)(*local_1f8 + lVar12),&local_288,L" ",L"",IgnoreCase);
          pwVar14 = L"";
          if (local_288.Data.ArrayNum != 0) {
            pwVar14 = (wchar_t *)local_288.Data.AllocatorInstance.Data;
          }
          pFVar8 = ::FName::FName((FName *)(local_150 + 0x18),pwVar14);
          pUVar9 = UUserWidget::GetWidgetFromName((UUserWidget *)this,pFVar8);
          if (pUVar9 != (UWidget *)0x0) {
            pdVar2 = (double *)(*plVar5 + 0x10 + (longlong)(int)uVar16 * 0x28);
            local_f8._s_0.X = *pdVar2;
            local_f8._s_0.Y = pdVar2[1];
            UWidget::SetRenderScale(pUVar9,(TVector2<double> *)&local_f8._s_0);
          }
          pFVar18 = (FString *)(*plVar5 + lVar12);
          if (*(int *)&(this->ChildOriginalScales).field_0x8 !=
              *(int *)&(this->ChildOriginalScales).field_0x34) {
            iVar23 = (pFVar18->Data).ArrayNum;
            if (iVar23 == 0) {
              pwVar14 = L"";
              iVar23 = 0;
            }
            else {
              pwVar14 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
              iVar23 = iVar23 + -1;
            }
            uVar19 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar23,pwVar14);
            TSet<TTuple<FString,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
            ::RemoveImpl<FString>(this_00,uVar19,pFVar18);
          }
          if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_288.Data.AllocatorInstance.Data);
          }
          uStack_1e0 = uStack_1e0 & ~auStack_1f0._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_1f0);
          uVar13 = (ulonglong)uStack_1dc;
          uVar16 = uVar13;
        } while ((int)uStack_1dc < *(int *)(auStack_1f0._8_8_ + 0x18));
        if (((char)local_1c0 != '\0') && (local_1c0._1_1_ != '\0')) {
          uVar19 = *(int *)&(local_1c8->Elements).field_0x8 -
                   *(int *)&(local_1c8->Elements).field_0x34;
          if (uVar19 < 4) {
            iVar23 = 1;
          }
          else {
            uVar13 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
            lVar12 = 0x3f;
            if (uVar13 != 0) {
              for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
              }
            }
            iVar23 = 1 << ((byte)lVar12 & 0x1f);
          }
          if (((0 < (int)uVar19) && (local_1c8->HashSize < iVar23)) ||
             (iVar23 < local_1c8->HashSize)) {
            local_1c8->HashSize = iVar23;
            TSet<TTuple<FString,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
            ::Rehash(local_1c8);
          }
        }
      }
    }
    pTVar20 = &this->ChildScales;
    bVar6 = 1 < *(int *)&(this->ChildScales).field_0x48;
    if (!bVar6) {
      TSet<TTuple<FString,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FString,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
                        *)pTVar20);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector2<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector2<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)pTVar20,0,*(int *)&(this->ChildScales).field_0x8);
    puVar1 = &(this->ChildScales).field_0xc;
    *(undefined4 *)&(this->ChildScales).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)pTVar20,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->ChildScales).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->ChildScales).field_0x34 = 0;
    iVar23 = *(int *)&(this->ChildScales).field_0x2c;
    *(undefined4 *)&(this->ChildScales).field_0x28 = 0;
    if ((iVar23 < 0) || (0x80 < iVar23)) {
      *(undefined4 *)&(this->ChildScales).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ChildScales).field_0x10,0);
    }
    if (bVar6) {
      *(undefined4 *)&(this->ChildScales).field_0x48 = 1;
      TSet<TTuple<FString,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FString,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
                *)pTVar20);
    }
    bVar6 = *(int *)&(this->ChildOriginalScales).field_0x48 < 2;
    if (bVar6) {
      TSet<TTuple<FString,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
      ::UnhashElements(this_00);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector2<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector2<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_00,0,*(int *)&(this->ChildOriginalScales).field_0x8);
    puVar1 = &(this->ChildOriginalScales).field_0xc;
    *(undefined4 *)&(this->ChildOriginalScales).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->ChildOriginalScales).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->ChildOriginalScales).field_0x34 = 0;
    iVar23 = *(int *)&(this->ChildOriginalScales).field_0x2c;
    *(undefined4 *)&(this->ChildOriginalScales).field_0x28 = 0;
    if ((iVar23 < 0) || (0x80 < iVar23)) {
      *(undefined4 *)&(this->ChildOriginalScales).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ChildOriginalScales).field_0x10,0);
    }
    if (bVar6) {
      return;
    }
    *(undefined4 *)&(this->ChildOriginalScales).field_0x48 = 1;
  }
  else {
    local_258 = &(this->ChildScales).field_0x10;
    iStack_260 = 0;
    iVar7 = *(int *)&(this->ChildScales).field_0x28;
    local_268 = &this->ChildScales;
    local_248 = 0;
    uStack_25c = 1;
    iStack_24c = 0;
    if (iVar7 != 0) {
      puVar22 = *(uint **)&(this->ChildScales).field_0x20;
      if (puVar22 == (uint *)0x0) {
        puVar22 = (uint *)local_258;
      }
      uStack_25c = *puVar22;
      while (uStack_25c == 0) {
        lVar12 = (longlong)iStack_260;
        local_248 = local_248 + 0x20;
        iStack_260 = iStack_260 + 1;
        uStack_25c = 1;
        iStack_24c = iVar7;
        if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_260) goto LAB_14bcae122;
        uStack_25c = puVar22[lVar12 + 1];
      }
      uStack_25c = -uStack_25c & uStack_25c;
      uVar13 = (ulonglong)uStack_25c * 2 + 1;
      lVar12 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_res10 = (int)lVar12;
      iStack_24c = local_res10 + -1 + local_248;
      if (iVar7 < iStack_24c) {
        iStack_24c = iVar7;
      }
    }
LAB_14bcae122:
    puVar1 = &(this->ChildScales).field_0x10;
    iStack_240 = *(int *)&(this->ChildScales).field_0x8 - *(int *)&(this->ChildScales).field_0x34;
    uVar19 = *(uint *)&(this->ChildScales).field_0x28;
    uStack_250 = 0xffffffff;
    TStack_188.CurrentBitIndex = iStack_24c;
    TStack_188.UnvisitedBitMask = 0xffffffff;
    TStack_188._padding_ = CONCAT44(uStack_25c,iStack_260);
    uVar24 = uVar19 & 0xffffffe0;
    iVar17 = (int)uVar19 >> 5;
    TStack_188._28_4_ = iStack_24c;
    TStack_188.BaseBitIndex = local_248;
    uStack_168 = CONCAT44(uStack_23c,iStack_240);
    iStack_244 = iStack_24c;
    local_190 = local_268;
    TStack_188.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_258;
    if ((((int)uVar19 < 0) || (iVar7 < (int)uVar19)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar3 = *(uint *)&(this->ChildScales).field_0x28;
    if (uVar19 != uVar3) {
      puVar21 = *(undefined1 **)&(this->ChildScales).field_0x20;
      if (puVar21 == (undefined1 *)0x0) {
        puVar21 = puVar1;
      }
      uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar17 * 4);
      while (uVar19 == 0) {
        lVar12 = (longlong)iVar17;
        uVar24 = uVar24 + 0x20;
        iVar17 = iVar17 + 1;
        uVar19 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
        goto LAB_14bcae240;
        uVar19 = *(uint *)(puVar21 + lVar12 * 4 + 4);
      }
      uVar13 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar19 = (int)lVar12 + -1 + uVar24;
      if ((int)uVar3 < (int)uVar19) {
        uVar19 = uVar3;
      }
    }
LAB_14bcae240:
    while( true ) {
      pTVar20 = local_190;
      if (*(int *)&local_190->field_0x8 - *(int *)&local_190->field_0x34 != (int)uStack_168) {
        `TSparseArray<TSparseSetElement<TTuple<FString,UE::Math::TVector2<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_188.CurrentBitIndex == uVar19) &&
          (TStack_188.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar20 == &this->ChildScales)) break;
      pFVar18 = (FString *)(*(longlong *)pTVar20 + (longlong)TStack_188.CurrentBitIndex * 0x28);
      ::FString::Replace(pFVar18,&local_298,L" ",L"",IgnoreCase);
      FVar15.Data = (FScriptContainerElement *)L"";
      if (local_298.Data.ArrayNum != 0) {
        FVar15.Data = local_298.Data.AllocatorInstance.Data;
      }
      pFVar8 = ::FName::FName((FName *)(local_150 + 8),(wchar_t *)FVar15.Data);
      pUVar9 = UUserWidget::GetWidgetFromName((UUserWidget *)this,pFVar8);
      if (pUVar9 != (UWidget *)0x0) {
        local_res18.Value = (TVector2<double> *)pUVar9->_padding_;
        ::FName::ToString((FName *)&local_res18.Value,&local_1b0);
        if (local_298.Data.ArrayNum == local_1b0.Data.ArrayNum) {
          if (local_298.Data.ArrayNum < 2) {
            bVar6 = true;
          }
          else {
            iVar7 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)local_298.Data.AllocatorInstance.Data,
                               (wchar_t *)local_1b0.Data.AllocatorInstance.Data);
            bVar6 = iVar7 == 0;
          }
        }
        else {
          bVar6 = local_298.Data.ArrayNum + local_1b0.Data.ArrayNum == 1;
        }
        if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
        }
        if (bVar6) {
          iVar7 = (pFVar18->Data).ArrayNum;
          if (iVar7 == 0) {
            pwVar14 = L"";
            iVar7 = 0;
          }
          else {
            pwVar14 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
            iVar7 = iVar7 + -1;
          }
          uVar24 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar14);
          iVar7 = TSet<TTuple<FString,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<FString>
                            ((TSet<TTuple<FString,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
                              *)&this->ChildOriginalScales,uVar24,pFVar18);
          if (iVar7 == -1) {
            pFVar10 = UWidget::GetRenderTransform(pUVar9);
            local_e8 = (pFVar10->Translation).field0_0x0._s_0.X;
            dStack_e0 = (pFVar10->Translation).field0_0x0._s_0.Y;
            local_d8 = (pFVar10->Scale).field0_0x0._s_0.X;
            dStack_d0 = (pFVar10->Scale).field0_0x0._s_0.Y;
            local_c8 = (pFVar10->Shear).field0_0x0._s_0.X;
            dStack_c0 = (pFVar10->Shear).field0_0x0._s_0.Y;
            local_b8 = *(longlong *)&pFVar10->Angle;
            local_158 = &local_d8;
            local_160 = pFVar18;
            TSet<TTuple<FString,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<FString_&,UE::Math::TVector2<double>_const_&>_>
                      ((TSet<TTuple<FString,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
                        *)&this->ChildOriginalScales,&local_res18,(bool *)&local_160);
          }
          pTVar11 = TMapBase<FString,UE::Math::TVector2<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector2<double>,0>_>
                    ::FindChecked((TMapBase<FString,UE::Math::TVector2<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector2<double>,0>_>
                                   *)&this->ChildScales,pFVar18);
          local_150._56_8_ = (pTVar11->field0_0x0)._s_0.X;
          dStack_110 = (pTVar11->field0_0x0)._s_0.Y;
          UWidget::SetRenderScale(pUVar9,(TVector2<double> *)(local_150 + 0x38));
        }
      }
      if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_298.Data.AllocatorInstance.Data);
      }
      TStack_188.UnvisitedBitMask = TStack_188.UnvisitedBitMask & ~TStack_188._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_188);
    }
    TSet<TTuple<FString,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_b0,
               (TSet<TTuple<FString,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
                *)&this->ChildOriginalScales);
    local_200 = 0;
    stack0xfffffffffffffdd8 = local_b0._16_16_;
    local_238 = (longlong *)local_b0._0_8_;
    auStack_230._0_8_ = local_b0._8_8_;
    local_218 = local_90;
    pTStack_210 = pTStack_88;
    uVar13 = local_b0._24_8_ >> 0x20;
    uVar19 = local_b0._28_4_;
    local_208 = (TSet<TTuple<FString,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
                 *)&this->ChildOriginalScales;
    if (*(int *)(local_b0._16_8_ + 0x18) <= (int)uVar19) {
      return;
    }
    do {
      plVar5 = local_238;
      lVar12 = (longlong)(int)uVar13 * 0x28;
      pFVar18 = (FString *)(*local_238 + lVar12);
      iVar7 = (pFVar18->Data).ArrayNum;
      if (iVar7 == 0) {
        pwVar14 = L"";
        iVar7 = 0;
      }
      else {
        pwVar14 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
        iVar7 = iVar7 + -1;
      }
      uVar24 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar14);
      iVar7 = TSet<TTuple<FString,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>
                        ((TSet<TTuple<FString,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
                          *)&this->ChildScales,uVar24,pFVar18);
      if (iVar7 == -1) {
        ::FString::Replace((FString *)(*plVar5 + lVar12),&local_278,L" ",L"",IgnoreCase);
        FVar15.Data = (FScriptContainerElement *)L"";
        if (local_278.Data.ArrayNum != 0) {
          FVar15.Data = local_278.Data.AllocatorInstance.Data;
        }
        pFVar8 = ::FName::FName((FName *)(local_150 + 0x10),(wchar_t *)FVar15.Data);
        pUVar9 = UUserWidget::GetWidgetFromName((UUserWidget *)this,pFVar8);
        if (pUVar9 != (UWidget *)0x0) {
          local_1b8 = (FName)pUVar9->_padding_;
          ::FName::ToString(&local_1b8,&local_1a0);
          if (local_278.Data.ArrayNum == local_1a0.Data.ArrayNum) {
            if (local_278.Data.ArrayNum < 2) {
              bVar6 = true;
            }
            else {
              iVar7 = FGenericPlatformStricmp::Stricmp
                                ((wchar_t *)local_278.Data.AllocatorInstance.Data,
                                 (wchar_t *)local_1a0.Data.AllocatorInstance.Data);
              bVar6 = iVar7 == 0;
            }
          }
          else {
            bVar6 = local_278.Data.ArrayNum + local_1a0.Data.ArrayNum == 1;
          }
          if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
          }
          if (bVar6) {
            pdVar2 = (double *)(*plVar5 + 0x10 + (longlong)(int)uVar19 * 0x28);
            local_108._s_0.X = *pdVar2;
            local_108._s_0.Y = pdVar2[1];
            UWidget::SetRenderScale(pUVar9,(TVector2<double> *)&local_108._s_0);
          }
        }
        pFVar18 = (FString *)(*plVar5 + lVar12);
        if (*(int *)&(this->ChildOriginalScales).field_0x8 !=
            *(int *)&(this->ChildOriginalScales).field_0x34) {
          iVar7 = (pFVar18->Data).ArrayNum;
          if (iVar7 == 0) {
            pwVar14 = L"";
            iVar7 = 0;
          }
          else {
            pwVar14 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
            iVar7 = iVar7 + -1;
          }
          uVar19 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar14);
          TSet<TTuple<FString,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
          ::RemoveImpl<FString>
                    ((TSet<TTuple<FString,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
                      *)&this->ChildOriginalScales,uVar19,pFVar18);
        }
        if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_278.Data.AllocatorInstance.Data);
        }
      }
      uStack_220 = uStack_220 & ~auStack_230._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_230);
      uVar13 = (ulonglong)uStack_21c;
      uVar19 = uStack_21c;
    } while ((int)uStack_21c < *(int *)(auStack_230._8_8_ + 0x18));
    if ((char)local_200 == '\0') {
      return;
    }
    if (local_200._1_1_ == '\0') {
      return;
    }
    uVar19 = *(int *)&(local_208->Elements).field_0x8 - *(int *)&(local_208->Elements).field_0x34;
    if (3 < uVar19) {
      uVar13 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar23 = 1 << ((byte)lVar12 & 0x1f);
    }
    if ((((int)uVar19 < 1) || (iVar23 <= local_208->HashSize)) && (local_208->HashSize <= iVar23)) {
      return;
    }
    local_208->HashSize = iVar23;
    this_00 = local_208;
  }
  TSet<TTuple<FString,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
  ::Rehash(this_00);
  return;
}

// NativeTick @ 14bcaec40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_UserWidget::NativeTick(UDS_UserWidget *this,FGeometry *param_1,float param_2)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UWorld *this_00;
  FLatentActionManager *this_01;
  UFunction *pUVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_f8 [32];
  longlong lStack_d8;
  longlong lStack_d0;
  undefined1 auStack_c8 [16];
  FGeometry FStack_b8;
  FGeometry FStack_78;
  float fStack_40;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if ((char)this->_padding_ == '\0') {
    auStack_c8[0] = 0;
    bVar4 = `UUserWidget::NativeTick'::__l3::<lambda_1>::operator()(auStack_c8);
    if (!bVar4) {
      return;
    }
  }
  GInitRunaway();
  uVar8 = 0;
  if (0 < (int)this->_padding_) {
    lVar7 = 0;
    do {
      iVar1 = (int)this->_padding_;
      uVar5 = 0;
      if ((int)uVar8 < iVar1) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        lStack_d8 = (longlong)(int)uVar8;
        lStack_d0 = (longlong)iVar1;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      plVar2 = *(longlong **)(lVar7 + this->_padding_);
      (**(code **)(*plVar2 + 0x2e0))(plVar2,param_1,param_2);
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar8 < (int)this->_padding_);
  }
  if ((UUMGSequenceTickManager *)this->_padding_ != (UUMGSequenceTickManager *)0x0) {
    UUMGSequenceTickManager::OnWidgetTicked
              ((UUMGSequenceTickManager *)this->_padding_,(UUserWidget *)this);
  }
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  if (this_00 != (UWorld *)0x0) {
    this_01 = UWorld::GetLatentActionManager(this_00);
    FLatentActionManager::ProcessLatentActions(this_01,(UObject *)this,param_2);
  }
  if ((this->_padding_ & 1) != 0) {
    FStack_b8.Size = param_1->Size;
    FStack_b8._8_8_ = *(undefined8 *)&param_1->Scale;
    FStack_b8._16_8_ = *(undefined8 *)((longlong)&(param_1->AbsolutePosition).field0_0x0 + 4);
    FStack_b8._24_8_ = *(undefined8 *)((longlong)&(param_1->Position).field0_0x0 + 4);
    FStack_b8.AccumulatedRenderTransform.M.M._4_8_ =
         *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[0] + 1);
    FStack_b8.AccumulatedRenderTransform._12_8_ =
         *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[1] + 1);
    FStack_b8._48_8_ =
         *(undefined8 *)((longlong)&(param_1->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
    FGeometry::FGeometry(&FStack_78);
    FGeometry::operator=(&FStack_78,&FStack_b8);
    fStack_40 = param_2;
    pUVar6 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_Tick);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar6,&FStack_78);
  }
  return;
}

// NotifyCloseInitToVM @ 14bcaee50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_UserWidget::NotifyCloseInitToVM(UDS_UserWidget *this)

{
  FObjectPtr_u_0 *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UMVVMView *pUVar5;
  UClass *pUVar6;
  FObjectPtr_u_0 *this_00;
  
  pUVar5 = UMVVMSubsystem::GetViewFromUserWidget((UUserWidget *)this);
  if (pUVar5 != (UMVVMView *)0x0) {
    this_00 = (FObjectPtr_u_0 *)(pUVar5->Sources).AllocatorInstance.Data;
    iVar2 = (pUVar5->Sources).ArrayNum;
    if ((iVar2 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar1 = this_00 + (longlong)iVar2 * 3;
    for (; this_00 != pFVar1; this_00 = this_00 + 3) {
      if (this_00->Handle != (UObject *)0x0) {
        pUVar6 = Z_Construct_UClass_UDS_ViewModelBase_NoRegister();
        bVar4 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar6);
        if ((bVar4) && (this_00->Handle != (UObject *)0x0)) {
          (**(code **)(*(longlong *)this_00->Handle + 0x2b0))();
        }
      }
    }
  }
  return;
}

// NotifyDestructToVM @ 14bcaef00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_UserWidget::NotifyDestructToVM(UDS_UserWidget *this)

{
  FObjectPtr_u_0 *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UMVVMView *pUVar5;
  UClass *pUVar6;
  FObjectPtr_u_0 *this_00;
  
  pUVar5 = UMVVMSubsystem::GetViewFromUserWidget((UUserWidget *)this);
  if (pUVar5 != (UMVVMView *)0x0) {
    this_00 = (FObjectPtr_u_0 *)(pUVar5->Sources).AllocatorInstance.Data;
    iVar2 = (pUVar5->Sources).ArrayNum;
    if ((iVar2 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar1 = this_00 + (longlong)iVar2 * 3;
    for (; this_00 != pFVar1; this_00 = this_00 + 3) {
      if (this_00->Handle != (UObject *)0x0) {
        pUVar6 = Z_Construct_UClass_UDS_ViewModelBase_NoRegister();
        bVar4 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar6);
        if ((bVar4) && (this_00->Handle != (UObject *)0x0)) {
          (**(code **)(*(longlong *)this_00->Handle + 0x2b8))();
        }
      }
    }
  }
  return;
}

// NotifyReleasedListViewToVM @ 14bcaefc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_UserWidget::NotifyReleasedListViewToVM(UDS_UserWidget *this)

{
  FObjectPtr_u_0 *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UMVVMView *pUVar5;
  UClass *pUVar6;
  FObjectPtr_u_0 *this_00;
  
  pUVar5 = UMVVMSubsystem::GetViewFromUserWidget((UUserWidget *)this);
  if (pUVar5 != (UMVVMView *)0x0) {
    this_00 = (FObjectPtr_u_0 *)(pUVar5->Sources).AllocatorInstance.Data;
    iVar2 = (pUVar5->Sources).ArrayNum;
    if ((iVar2 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar1 = this_00 + (longlong)iVar2 * 3;
    for (; this_00 != pFVar1; this_00 = this_00 + 3) {
      if (this_00->Handle != (UObject *)0x0) {
        pUVar6 = Z_Construct_UClass_UDS_ViewModelBase_NoRegister();
        bVar4 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar6);
        if ((bVar4) && (this_00->Handle != (UObject *)0x0)) {
          (**(code **)(*(longlong *)this_00->Handle + 0x2c0))();
        }
      }
    }
  }
  return;
}

// OnAnimationEvent @ 14bcafa10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_UserWidget::OnAnimationEvent(UDS_UserWidget *this,FDS_WidgetAnimationEventField *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  EDS_AnimationEventType EVar3;
  FName FVar4;
  longlong *plVar5;
  FName *pFVar6;
  UWidgetAnimation *this_00;
  float fVar7;
  FName local_res10;
  FReadAccessScope local_28;
  
  pFVar6 = ::FName::FName(&local_res10,"None");
  if (param_1->AnimationName != *pFVar6) {
    FDS_WidgetAnimationEventField::operator=(&this->AnimationEvent,param_1);
    this_00 = GetAnimation(this,&(this->AnimationEvent).AnimationName);
    if (this_00 == (UWidgetAnimation *)0x0) {
      FVar4 = (this->AnimationEvent).AnimationName;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(this->AnimationEvent).Delegate_ValidAnimation,&local_28);
      if ((*(int *)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x10 != 0) &&
         (plVar5 = *(longlong **)&(this->AnimationEvent).Delegate_ValidAnimation.field_0x8,
         plVar5 != (longlong *)0x0)) {
        (**(code **)(*plVar5 + 0x68))(plVar5,FVar4,0);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      (this->AnimationEvent).AnimationStateType = None;
      return;
    }
    EVar3 = (this->AnimationEvent).AnimationEventType;
    if (EVar3 == PlayForward) {
      UUserWidget::PlayAnimation
                ((UUserWidget *)this,(FWidgetAnimationHandle *)&local_28,this_00,
                 (this->AnimationEvent).AnimationPlayTime,(this->AnimationEvent).NumberOfLoops,
                 Forward,__real_3f800000,false);
    }
    else {
      if (EVar3 != PlayReverse) {
        if (1 < (byte)(EVar3 - PlayForwardSkip)) {
          (this->AnimationEvent).AnimationStateType = Finished;
          UUserWidget::StopAnimation((UUserWidget *)this,this_00);
          return;
        }
        iVar2 = this->AnimationSkipLoop;
        (this->AnimationEvent).AnimationStateType = Started;
        fVar7 = UWidgetAnimation::GetEndTime(this_00);
        UUserWidget::PlayAnimation
                  ((UUserWidget *)this,(FWidgetAnimationHandle *)&local_28,this_00,
                   fVar7 - __real_3c23d70a,iVar2,(uint)(EVar3 != PlayForwardSkip),__real_3f800000,
                   false);
        if (local_28.DestructionSentinel.Accessor == (FMRSWRecursiveAccessDetector *)0x0) {
          return;
        }
        LOCK();
        puVar1 = &local_28.DestructionSentinel.Accessor[1].State.field_0x4;
        iVar2 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if (iVar2 != 1) {
          return;
        }
        (**(code **)((longlong)(local_28.DestructionSentinel.Accessor)->State + 8))
                  (local_28.DestructionSentinel.Accessor,1);
        return;
      }
      UUserWidget::PlayAnimationReverse
                ((UUserWidget *)this,(FWidgetAnimationHandle *)&local_28,this_00,__real_3f800000,
                 false);
    }
    if (local_28.DestructionSentinel.Accessor != (FMRSWRecursiveAccessDetector *)0x0) {
      LOCK();
      puVar1 = &local_28.DestructionSentinel.Accessor[1].State.field_0x4;
      iVar2 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)((longlong)(local_28.DestructionSentinel.Accessor)->State + 8))
                  (local_28.DestructionSentinel.Accessor,1);
      }
    }
    (this->AnimationEvent).AnimationStateType = Started;
  }
  return;
}

// OnCancelAnimationEvent @ 14bcb05b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_UserWidget::OnCancelAnimationEvent(UDS_UserWidget *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FTimerManager *this_00;
  FTimerData *pFVar3;
  UWidgetAnimation *this_01;
  float fVar4;
  FWidgetAnimationHandle local_18;
  
  if ((this->AnimationTimerHandle).Handle != 0) {
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar3 = FTimerManager::FindTimer(this_00,&this->AnimationTimerHandle);
    if (pFVar3 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(this_00,(FTimerHandle)(this->AnimationTimerHandle).Handle);
    }
    (this->AnimationTimerHandle).Handle = 0;
  }
  this_01 = GetAnimation(this,&this->AnimationName);
  if (this_01 != (UWidgetAnimation *)0x0) {
    fVar4 = UWidgetAnimation::GetEndTime(this_01);
    UUserWidget::PlayAnimation
              ((UUserWidget *)this,&local_18,this_01,fVar4,1,Forward,__real_3f800000,false);
    if (local_18.WeakState.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_18.WeakState.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_18.WeakState.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_18.WeakState.WeakReferenceCount.ReferenceController,1);
      }
    }
  }
  return;
}

// OnCloseInit @ 14bcb2420

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_UserWidget::OnCloseInit(UDS_UserWidget *this)

{
  int *piVar1;
  TArray<TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *_Dst;
  FObjectPtr_u_0 *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UObject *pUVar7;
  UMVVMView *pUVar8;
  UClass *pUVar9;
  int iVar10;
  uint uVar11;
  FObjectPtr_u_0 *this_00;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  FWeakObjectPtr local_res8;
  FFieldId local_38;
  
  uVar11 = 0;
  iVar14 = (this->ChildUserWidgets).ArrayNum;
  if (0 < iVar14) {
    pTVar2 = &this->ChildUserWidgets;
    lVar13 = 0;
    do {
      uVar12 = ~uVar11 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar11 < (this->ChildUserWidgets).ArrayNum) {
        uVar6 = uVar12;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_res8 = *(FWeakObjectPtr *)((pTVar2->AllocatorInstance).Data + lVar13);
      bVar5 = TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> *)&local_res8,(void *)0x0);
      if (bVar5) {
        uVar6 = 0;
        if ((int)uVar11 < (this->ChildUserWidgets).ArrayNum) {
          uVar6 = uVar12;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        _Dst = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar11 * 8;
        iVar10 = (this->ChildUserWidgets).ArrayNum + ~uVar11;
        if (iVar10 != 0) {
          memmove(_Dst,_Dst + 8,(longlong)iVar10 << 3);
        }
        piVar1 = &(this->ChildUserWidgets).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,&pTVar2->AllocatorInstance,(this->ChildUserWidgets).ArrayNum,
                   &(this->ChildUserWidgets).ArrayMax);
        uVar11 = uVar11 - 1;
        lVar13 = lVar13 + -8;
        iVar14 = iVar14 + -1;
      }
      else {
        pUVar7 = FWeakObjectPtr::Get(&local_res8);
        (**(code **)(*(longlong *)pUVar7 + 0x4e8))(pUVar7);
      }
      uVar11 = uVar11 + 1;
      lVar13 = lVar13 + 8;
    } while ((int)uVar11 < iVar14);
  }
  local_38.FieldName = FFieldNotificationClassDescriptor::CloseEvent.FieldName;
  local_38.BitNumber = FFieldNotificationClassDescriptor::CloseEvent.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_38);
  pUVar8 = UMVVMSubsystem::GetViewFromUserWidget((UUserWidget *)this);
  if (pUVar8 != (UMVVMView *)0x0) {
    iVar14 = (pUVar8->Sources).ArrayNum;
    this_00 = (FObjectPtr_u_0 *)(pUVar8->Sources).AllocatorInstance.Data;
    if ((iVar14 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = this_00 + (longlong)iVar14 * 3;
    for (; this_00 != pFVar3; this_00 = this_00 + 3) {
      if (this_00->Handle != (UObject *)0x0) {
        pUVar9 = Z_Construct_UClass_UDS_ViewModelBase_NoRegister();
        bVar5 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar9);
        if ((bVar5) && (this_00->Handle != (UObject *)0x0)) {
          (**(code **)(*(longlong *)this_00->Handle + 0x2b0))();
        }
      }
    }
  }
  return;
}

// OnDelayedAnimationEvent @ 14bcb2d30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_UserWidget::OnDelayedAnimationEvent(UDS_UserWidget *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FTimerManager *this_00;
  FTimerData *pFVar3;
  UWidgetAnimation *pUVar4;
  FWidgetAnimationHandle local_18;
  
  if ((this->AnimationTimerHandle).Handle != 0) {
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    pFVar3 = FTimerManager::FindTimer(this_00,&this->AnimationTimerHandle);
    if (pFVar3 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer(this_00,(FTimerHandle)(this->AnimationTimerHandle).Handle);
    }
    (this->AnimationTimerHandle).Handle = 0;
  }
  pUVar4 = GetAnimation(this,&this->AnimationName);
  if (pUVar4 != (UWidgetAnimation *)0x0) {
    UUserWidget::PlayAnimation
              ((UUserWidget *)this,&local_18,pUVar4,0.0,1,Forward,__real_3f800000,false);
    if (local_18.WeakState.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_18.WeakState.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_18.WeakState.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_18.WeakState.WeakReferenceCount.ReferenceController,1);
      }
    }
  }
  return;
}

// OnFinishedAnimationEvent @ 14bcb4e70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_UserWidget::OnFinishedAnimationEvent(UDS_UserWidget *this,FWidgetAnimationState *param_1)

{
  int iVar1;
  UWidgetAnimation *pUVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  FName *pFVar8;
  FName local_res10;
  FName local_res18;
  FFieldId local_58;
  FString local_48;
  FString local_38;
  FReadAccessScope local_28;
  
  pUVar2 = (param_1->Animation).field0_0x0.DebugPtr;
  if (pUVar2 != (UWidgetAnimation *)0x0) {
    local_res10 = (FName)pUVar2->_padding_;
    ::FName::ToString(&local_res10,&local_48);
    iVar6 = ::FString::Find(&local_48,L"_INST",5,IgnoreCase,FromStart,-1);
    if (iVar6 == -1) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8690972340428735120>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\CommonUI\\DS_UserWidget.cpp"
                         ,0x290,"false");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FDS_WidgetAnimationEventField::operator=(&this->AnimationFinishedEvent,&this->AnimationEvent);
    pFVar7 = ::FString::Replace(&local_48,&local_38,L"_INST",L"",IgnoreCase);
    iVar1 = (pFVar7->Data).ArrayNum;
    iVar6 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar6 = 0;
    }
    pFVar8 = ::FName::FName(&local_res18,iVar6,(wchar_t *)(pFVar7->Data).AllocatorInstance.Data,
                            FNAME_Add);
    (this->AnimationFinishedEvent).AnimationName = *pFVar8;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    (this->AnimationFinishedEvent).AnimationStateType = Finished;
    local_58.FieldName = FFieldNotificationClassDescriptor::AnimationFinishedEvent.FieldName;
    local_58.BitNumber = FFieldNotificationClassDescriptor::AnimationFinishedEvent.BitNumber;
    UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(this->AnimationEvent).Delegate_AnimationFinish,&local_28);
    if ((*(int *)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x10 != 0) &&
       (plVar3 = *(longlong **)&(this->AnimationEvent).Delegate_AnimationFinish.field_0x8,
       plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnHistoryEvent @ 14bcb5fe0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_UserWidget::OnHistoryEvent(UDS_UserWidget *this,FDS_HistoryData *param_1)

{
  FFieldId local_18;
  
  FDS_HistoryData::operator=(&(this->HistoryEventField).HistoryData,param_1);
  local_18.FieldName = FFieldNotificationClassDescriptor::HistoryEventField.FieldName;
  local_18.BitNumber = FFieldNotificationClassDescriptor::HistoryEventField.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
  return;
}

// OnOpenInit @ 14bcb80c0

void __thiscall UDS_UserWidget::OnOpenInit(UDS_UserWidget *this)

{
  int *piVar1;
  TArray<TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *_Dst;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UObject *pUVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  FWeakObjectPtr local_res8;
  
  iVar11 = (this->ChildUserWidgets).ArrayNum;
  uVar8 = 0;
  if (0 < iVar11) {
    lVar10 = 0;
    pTVar2 = &this->ChildUserWidgets;
    do {
      uVar9 = ~uVar8 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar8 < (this->ChildUserWidgets).ArrayNum) {
        uVar5 = uVar9;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_res8 = *(FWeakObjectPtr *)((pTVar2->AllocatorInstance).Data + lVar10);
      bVar4 = TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> *)&local_res8,(void *)0x0);
      if (bVar4) {
        uVar5 = 0;
        if ((int)uVar8 < (this->ChildUserWidgets).ArrayNum) {
          uVar5 = uVar9;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        _Dst = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar8 * 8;
        iVar7 = (this->ChildUserWidgets).ArrayNum + ~uVar8;
        if (iVar7 != 0) {
          memmove(_Dst,_Dst + 8,(longlong)iVar7 << 3);
        }
        piVar1 = &(this->ChildUserWidgets).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,&pTVar2->AllocatorInstance,(this->ChildUserWidgets).ArrayNum,
                   &(this->ChildUserWidgets).ArrayMax);
        uVar8 = uVar8 - 1;
        lVar10 = lVar10 + -8;
        iVar11 = iVar11 + -1;
      }
      else {
        pUVar6 = FWeakObjectPtr::Get(&local_res8);
        (**(code **)(*(longlong *)pUVar6 + 0x4e0))(pUVar6);
      }
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 8;
    } while ((int)uVar8 < iVar11);
  }
  return;
}

// OnReleasedListViewEvent @ 14bcba470

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_UserWidget::OnReleasedListViewEvent(UDS_UserWidget *this)

{
  FObjectPtr_u_0 *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UMVVMView *pUVar5;
  UClass *pUVar6;
  FObjectPtr_u_0 *this_00;
  FFieldId local_18;
  
  local_18.FieldName = FFieldNotificationClassDescriptor::ReleasedListView.FieldName;
  local_18.BitNumber = FFieldNotificationClassDescriptor::ReleasedListView.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
  pUVar5 = UMVVMSubsystem::GetViewFromUserWidget((UUserWidget *)this);
  if (pUVar5 != (UMVVMView *)0x0) {
    this_00 = (FObjectPtr_u_0 *)(pUVar5->Sources).AllocatorInstance.Data;
    iVar2 = (pUVar5->Sources).ArrayNum;
    if ((iVar2 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar1 = this_00 + (longlong)iVar2 * 3;
    for (; this_00 != pFVar1; this_00 = this_00 + 3) {
      if (this_00->Handle != (UObject *)0x0) {
        pUVar6 = Z_Construct_UClass_UDS_ViewModelBase_NoRegister();
        bVar4 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar6);
        if ((bVar4) && (this_00->Handle != (UObject *)0x0)) {
          (**(code **)(*(longlong *)this_00->Handle + 0x2c0))();
        }
      }
    }
  }
  return;
}

// OnRequestCloseMyself @ 14bcba540

void __thiscall
UDS_UserWidget::OnRequestCloseMyself(UDS_UserWidget *this,FDS_WidgetEventField *param_1)

{
  if (param_1->bIsActivate == true) {
                    /* WARNING: Could not recover jumptable at 0x00014bcba548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x4f8))();
    return;
  }
  return;
}

// OnSetFocusEvent @ 14bcbb090

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_UserWidget::OnSetFocusEvent(UDS_UserWidget *this,FDS_WidgetEventField *param_1)

{
  bool bVar1;
  
  if (param_1->bIsActivate == true) {
    bVar1 = UUserWidget::IsFocusable((UUserWidget *)this);
    if (bVar1) {
      UWidget::SetFocus((UWidget *)this);
      return;
    }
  }
  return;
}

// OnSetWidgetEnabled @ 14bcbb0c0

void __thiscall UDS_UserWidget::OnSetWidgetEnabled(UDS_UserWidget *this,bool *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014bcbb0c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2b8))(this,*param_1);
  return;
}

// OnSetWidgetPosition @ 14bcbb0e0

void __thiscall UDS_UserWidget::OnSetWidgetPosition(UDS_UserWidget *this,TVector2<double> *param_1)

{
  UCanvasPanelSlot *this_00;
  bool bVar1;
  UClass *pUVar2;
  TVector2<double>_u_0 local_18;
  
  if (this->_padding_ != 0) {
    pUVar2 = Z_Construct_UClass_UCanvasPanelSlot_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar2);
    if ((bVar1) &&
       (this_00 = (UCanvasPanelSlot *)this->_padding_, this_00 != (UCanvasPanelSlot *)0x0)) {
      local_18._s_0.X = (param_1->field0_0x0)._s_0.X;
      local_18._s_0.Y = (param_1->field0_0x0)._s_0.Y;
      UCanvasPanelSlot::SetPosition(this_00,(TVector2<double> *)&local_18._s_0);
    }
  }
  return;
}

// OnSetWindowPosition @ 14bcbb140

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_UserWidget::OnSetWindowPosition(UDS_UserWidget *this,TVector2<double> *param_1)

{
  bool bVar1;
  UDS_W_WindowFrame *this_00;
  FAnchors *pFVar2;
  UDS_WindowInfoBase *this_01;
  TVector2<double>_u_0 local_28 [2];
  
  bVar1 = TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr>::UEOpEquals
                    (&this->WindowFrameWidget,(void *)0x0);
  if (!bVar1) {
    this_00 = (UDS_W_WindowFrame *)FWeakObjectPtr::Get(&(this->WindowFrameWidget).WeakPtr);
    pFVar2 = UDS_W_WindowFrame::GetAnchor((FAnchors *)&local_28[0]._s_0,LeftTop);
    UDS_W_WindowFrame::SetAnchors(this_00,pFVar2);
    if (this_00->WindowFrameSlot != (UCanvasPanelSlot *)0x0) {
      local_28[0]._0_8_ = (param_1->field0_0x0)._s_0.X;
      local_28[0]._8_8_ = (param_1->field0_0x0)._s_0.Y;
      UCanvasPanelSlot::SetPosition(this_00->WindowFrameSlot,(TVector2<double> *)&local_28[0]._s_0);
      bVar1 = TWeakObjectPtr<UDS_WindowInfoBase,FWeakObjectPtr>::UEOpEquals
                        (&this_00->WindowInfo,(void *)0x0);
      if (!bVar1) {
        this_01 = (UDS_WindowInfoBase *)FWeakObjectPtr::Get(&(this_00->WindowInfo).WeakPtr);
        UDS_WindowInfoBase::SetWindowPosition(this_01,param_1);
      }
    }
  }
  return;
}

// OnSetWindowPositionByAbsolutePos @ 14bcbb1e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_UserWidget::OnSetWindowPositionByAbsolutePos(UDS_UserWidget *this,TVector2<double> *param_1)

{
  bool bVar1;
  UDS_W_WindowFrame *this_00;
  
  bVar1 = TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr>::UEOpEquals
                    (&this->WindowFrameWidget,(void *)0x0);
  if (!bVar1) {
    this_00 = (UDS_W_WindowFrame *)FWeakObjectPtr::Get(&(this->WindowFrameWidget).WeakPtr);
    UDS_W_WindowFrame::MoveWindowPosForcedByAbsolutePos(this_00,param_1);
  }
  return;
}

// PlayAnimationByName @ 14bcbcfc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_UserWidget::PlayAnimationByName(UDS_UserWidget *this,FName *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  UWidgetAnimation *pUVar3;
  FWidgetAnimationHandle local_18;
  
  pUVar3 = GetAnimation(this,param_1);
  if (pUVar3 != (UWidgetAnimation *)0x0) {
    UUserWidget::PlayAnimationForward((UUserWidget *)this,&local_18,pUVar3,__real_3f800000,false);
    if (local_18.WeakState.WeakReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_18.WeakState.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_18.WeakState.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_18.WeakState.WeakReferenceCount.ReferenceController,1);
      }
    }
  }
  return;
}

// SetDelegateResize @ 14bcc5ed0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_UserWidget::SetDelegateResize
          (UDS_UserWidget *this,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr> *this_00;
  bool bVar1;
  TVector2<double> *pTVar2;
  UDS_W_WindowFrame *this_01;
  UObject *pUVar3;
  TVector2<double>_u_0 local_28;
  TVector2<double> local_18;
  
  this_00 = &this->WindowFrameWidget;
  bVar1 = TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  if (!bVar1) {
    pTVar2 = DS_Util::GetViewportSize(&local_18);
    local_28._s_0.X = (pTVar2->field0_0x0)._s_0.X;
    local_28._s_0.Y = __real_3ff0000000000000;
    bVar1 = TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
    if (!bVar1) {
      this_01 = (UDS_W_WindowFrame *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      UDS_W_WindowFrame::MoveWindowPosForcedByAbsolutePos
                (this_01,(TVector2<double> *)&local_28._s_0);
    }
    pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&pUVar3[0x41].field_0x10,
               param_1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  if (*(void **)&param_1->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// SetIsListItemExpanded @ 14bcc7390

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_UserWidget::SetIsListItemExpanded(UDS_UserWidget *this,bool param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IObjectTableRow *pIVar2;
  char cVar3;
  TSharedPtr<IObjectTableRow_const_,1> *pTVar4;
  TSharedPtr<IObjectTableRow_const_,1> local_18;
  
  pTVar4 = IObjectTableRow::ObjectRowFromUserWidget(&local_18,(UUserWidget *)this);
  pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
  pIVar2 = pTVar4->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (pIVar2 != (IObjectTableRow *)0x0) {
    cVar3 = (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2);
    if ((bool)cVar3 != param_1) {
      (**(code **)((longlong)*pIVar2 + 0x28))(pIVar2);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// SetViewModel @ 14bcc9790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_UserWidget::SetViewModel(UDS_UserWidget *this,UDS_ViewModelBase *param_1,bool param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_1a8 [32];
  undefined1 local_168 [16];
  FString local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  if (param_1 != (UDS_ViewModelBase *)0x0) {
    local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_168._8_8_ = &param_1->_padding_;
    local_168._0_8_ = param_1;
    bVar1 = SetViewModel(this,*(FName *)(param_1->_padding_ + 0x18),
                         (TScriptInterface<INotifyFieldValueChanged> *)local_168,param_2);
    if ((!bVar1) && (pUVar2 = UDS_LogManager::GetInst(), pUVar2 != (UDS_LogManager *)0x0)) {
      pUVar2 = UDS_LogManager::GetInst();
      local_168._0_8_ = *(FName *)(param_1->_padding_ + 0x18);
      ::FName::ToString((FName *)local_168,&local_158);
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_UserWidget::SetViewModel",0x1c,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_148.Ptr,0x3d4,
                 L"The ViewModel(%s) to be bound does not exist.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// SetViewModel @ 14bcc98f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
UDS_UserWidget::SetViewModel
          (UDS_UserWidget *this,FName param_1,TScriptInterface<INotifyFieldValueChanged> *param_2,
          bool param_3)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  UMVVMViewClass *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  UMVVMView *this_00;
  UDS_UserWidget *this_01;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FWeakObjectPtr *pFVar9;
  undefined1 local_58 [8];
  FWeakObjectPtr local_50;
  UObject *local_48 [2];
  UObject *local_38 [2];
  
  this_00 = UMVVMSubsystem::GetViewFromUserWidget((UUserWidget *)this);
  if ((this_00 != (UMVVMView *)0x0) &&
     (pUVar3 = (this_00->GeneratedViewClass).field0_0x0.DebugPtr, pUVar3 != (UMVVMViewClass *)0x0))
  {
    iVar2 = (pUVar3->Sources).ArrayNum;
    pFVar8 = (pUVar3->Sources).AllocatorInstance.Data;
    if ((iVar2 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pFVar7 = pFVar8 + (longlong)iVar2 * 0x68;
    for (; pFVar8 != pFVar7; pFVar8 = pFVar8 + 0x68) {
      if (*(FName *)(pFVar8 + 0x24) == param_1) {
        local_48[0] = *(UObject **)param_2;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48[0] != (UObject *)0x0))
        {
          UE::GC::MarkAsReachable(local_48[0]);
        }
        local_48[1] = *(UObject **)&param_2->field_0x8;
        bVar5 = UMVVMView::SetViewModel
                          (this_00,param_1,(TScriptInterface<INotifyFieldValueChanged> *)local_48);
        if (bVar5) {
          OnViewModelSet(this);
          return true;
        }
        break;
      }
    }
  }
  if (param_3) {
    iVar2 = (this->ChildUserWidgets).ArrayNum;
    if (iVar2 != 0) {
      pFVar9 = (FWeakObjectPtr *)(this->ChildUserWidgets).AllocatorInstance.Data;
      pFVar1 = pFVar9 + iVar2;
      while( true ) {
        if ((this->ChildUserWidgets).ArrayNum != iVar2) {
          `TCheckedPointerIterator<TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(local_58);
        }
        if (pFVar9 == pFVar1) break;
        local_50 = *pFVar9;
        bVar5 = FWeakObjectPtr::IsValid(&local_50);
        if (bVar5) {
          this_01 = (UDS_UserWidget *)FWeakObjectPtr::Get(&local_50);
          local_38[0] = *(UObject **)param_2;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_38[0] != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(local_38[0]);
          }
          local_38[1] = *(UObject **)&param_2->field_0x8;
          bVar5 = SetViewModel(this_01,param_1,
                               (TScriptInterface<INotifyFieldValueChanged> *)local_38,true);
          if (bVar5) {
            return true;
          }
        }
        pFVar9 = pFVar9 + 1;
      }
    }
  }
  return false;
}

// SetVisibility @ 14bcc9ab0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_UserWidget::SetVisibility(UDS_UserWidget *this,ESlateVisibility param_1)

{
  bool bVar1;
  UObject *pUVar2;
  
  UUserWidget::SetVisibility((UUserWidget *)this,param_1);
  bVar1 = FWeakObjectPtr::IsValid(&(this->WindowFrameWidget).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->WindowFrameWidget).WeakPtr);
    (**(code **)(*(longlong *)pUVar2 + 0x2c0))(pUVar2,param_1);
  }
  return;
}

// SetWindowFrameWidget @ 14bcc9b80

void __thiscall
UDS_UserWidget::SetWindowFrameWidget
          (UDS_UserWidget *this,TWeakObjectPtr<UDS_W_WindowFrame,FWeakObjectPtr> param_1)

{
  (this->WindowFrameWidget).WeakPtr = param_1.WeakPtr;
  return;
}

// SynchronizeProperties @ 14bccbbb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_UserWidget::SynchronizeProperties(UDS_UserWidget *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SObjectWidget *this_00;
  FName FVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  UObject *pUVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  UFunction *pUVar9;
  FMRSWRecursiveAccessDetector *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  UObject *pUStackX_8;
  UObject *pUStackX_10;
  undefined1 auStack_290 [8];
  ForAnyElementType FStack_288;
  ulonglong uStack_280;
  longlong lStack_278;
  longlong lStack_270;
  undefined1 uStack_268;
  undefined1 auStack_260 [8];
  ForAnyElementType FStack_258;
  ulonglong uStack_250;
  longlong lStack_248;
  longlong lStack_240;
  uint uStack_238;
  undefined1 uStack_234;
  undefined1 auStack_230 [8];
  FDelegateAllocation FStack_228;
  undefined1 auStack_218 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_200;
  ForAnyElementType FStack_1f8;
  ulonglong uStack_1f0;
  longlong lStack_1e8;
  longlong lStack_1e0;
  undefined1 uStack_1d8;
  undefined1 auStack_1d0 [8];
  FDelegateAllocation FStack_1c8;
  longlong lStack_1b8;
  longlong lStack_1b0;
  uint uStack_1a8;
  undefined1 uStack_1a4;
  undefined1 auStack_1a0 [24];
  longlong lStack_188;
  longlong lStack_180;
  undefined1 uStack_178;
  undefined1 auStack_170 [24];
  FDestructionSentinel FStack_158;
  FDestructionSentinel FStack_140;
  FDestructionSentinel FStack_128;
  FLinearColor_u_0 FStack_110;
  uint uStack_100;
  undefined1 uStack_fc;
  undefined1 auStack_f8 [24];
  FDestructionSentinel FStack_e0;
  FDelegateAllocation *pFStack_c8;
  FDestructionSentinel FStack_c0;
  FDelegateAllocation *pFStack_a8;
  FLinearColor_u_0 FStack_a0;
  undefined1 uStack_90;
  undefined1 auStack_88 [24];
  FReadAccessScope FStack_70;
  FReadAccessScope FStack_58;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  pTVar11 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar1->SharedReferenceCount;
    do {
      pTVar11 = (TReferenceControllerBase<1> *)0x0;
      if (aVar4 == (atomic<int>)0x0) goto LAB_146a96f76;
      LOCK();
      aVar5 = pTVar1->SharedReferenceCount;
      bVar12 = aVar4 == aVar5;
      if (bVar12) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar12);
    this_00 = (SObjectWidget *)this->_padding_;
    pTVar11 = pTVar1;
    if (this_00 != (SObjectWidget *)0x0) {
      bVar12 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                         ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_);
      if (bVar12) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
                   &FStack_70);
        FVar2 = (FName)this->_padding_;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&FStack_70);
        pUVar6 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                           ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_);
        uStack_1d8 = 1;
        FStack_1c8.DelegateSize = 0;
        FStack_1c8._12_4_ = 0;
        lStack_1e8 = 0;
        lStack_1e0 = 0;
        auStack_1d0 = (undefined1  [8])0x0;
        FStack_1c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_1d0,
                   (FWriteAccessScope *)&FStack_e0);
        pFStack_c8 = &FStack_1c8;
        puVar7 = UE::Core::Private::DelegateAllocate(0x30,&FStack_1c8);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = &
                    ___7__TCommonDelegateInstanceState___A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar8 = FDelegateHandle::GenerateNewID();
          puVar7[2] = uVar8;
          *puVar7 = &
                    ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
          ;
          *(FName *)(puVar7 + 4) = FVar2;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar6);
          }
          puVar7[5] = 0;
          pUStackX_8 = pUVar6;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar6);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 5),(FObjectPtr)&pUStackX_8);
          if ((FVar2 == (FName)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InFunctionName != NAME_None",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                                  ,0x56,L""), bVar12)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (pUVar6 != (UObject *)0x0) {
            pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(puVar7 + 5));
            pUVar9 = UObject::FindFunctionChecked(pUVar6,FVar2);
            puVar7[3] = pUVar9;
          }
        }
        if (FStack_e0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_e0.Accessor,&FStack_e0);
        }
        uStack_178 = uStack_1d8;
        lStack_188 = lStack_1e8;
        lStack_180 = lStack_1e0;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_170,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_1d0);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_1d0);
        if (FStack_1c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)FStack_1c8.DelegateAllocator);
        }
        pFVar10 = (FMRSWRecursiveAccessDetector *)auStack_1d0;
      }
      else {
        lStack_278 = this->_padding_;
        lStack_270 = this->_padding_;
        uStack_268 = 1;
        uStack_250 = 0;
        uStack_178 = 1;
        auStack_260 = (undefined1  [8])0x0;
        FStack_258.Data = (FScriptContainerElement *)0x0;
        lStack_188 = lStack_278;
        lStack_180 = lStack_270;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_170,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_260);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_260,
                   (FWriteAccessScope *)&FStack_158);
        if (((int)uStack_250 != 0) && (FStack_258.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_258.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_258,0,0,0x10)
          ;
          uStack_250 = uStack_250 & 0xffffffff00000000;
        }
        if (FStack_158.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_158.Accessor,&FStack_158);
        }
        if (FStack_258.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_258.Data);
        }
        pFVar10 = (FMRSWRecursiveAccessDetector *)auStack_260;
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(pFVar10);
      bVar12 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                         ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_);
      if (bVar12) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
                   &FStack_58);
        FVar2 = (FName)this->_padding_;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&FStack_58);
        pUVar6 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                           ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_);
        uStack_238 = uStack_238 & 0xffffff00;
        uStack_234 = 1;
        FStack_228.DelegateSize = 0;
        FStack_228._12_4_ = 0;
        lStack_248 = ___xmm_3f8000003f800000000000003f800000;
        lStack_240 = _UNK_15090c6d8;
        auStack_230 = (undefined1  [8])0x0;
        FStack_228.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_230,
                   (FWriteAccessScope *)&FStack_c0);
        pFStack_a8 = &FStack_228;
        puVar7 = UE::Core::Private::DelegateAllocate(0x30,&FStack_228);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = &
                    ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar8 = FDelegateHandle::GenerateNewID();
          puVar7[2] = uVar8;
          *puVar7 = &
                    ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
          ;
          *(FName *)(puVar7 + 4) = FVar2;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar6);
          }
          puVar7[5] = 0;
          pUStackX_10 = pUVar6;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar6);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 5),(FObjectPtr)&pUStackX_10);
          if ((FVar2 == (FName)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InFunctionName != NAME_None",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                                  ,0x56,L""), bVar12)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (pUVar6 != (UObject *)0x0) {
            pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(puVar7 + 5));
            pUVar9 = UObject::FindFunctionChecked(pUVar6,FVar2);
            puVar7[3] = pUVar9;
          }
        }
        if (FStack_c0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_c0.Accessor,&FStack_c0);
        }
        uStack_1a8 = uStack_238;
        uStack_1a4 = uStack_234;
        lStack_1b8 = lStack_248;
        lStack_1b0 = lStack_240;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_1a0,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_230);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_230);
        if (FStack_228.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)FStack_228.DelegateAllocator);
        }
        pFVar10 = (FMRSWRecursiveAccessDetector *)auStack_230;
      }
      else {
        uStack_1a8 = (uint)this->_padding_;
        lStack_1b8 = this->_padding_;
        lStack_1b0 = this->_padding_;
        uStack_280 = 0;
        uStack_1a4 = 1;
        auStack_290 = (undefined1  [8])0x0;
        FStack_288.Data = (FScriptContainerElement *)0x0;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_1a0,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_290);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_290,
                   (FWriteAccessScope *)&FStack_140);
        if (((int)uStack_280 != 0) && (FStack_288.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_288.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_288,0,0,0x10)
          ;
          uStack_280 = uStack_280 & 0xffffffff00000000;
        }
        if (FStack_140.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_140.Accessor,&FStack_140);
        }
        if (FStack_288.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_288.Data);
        }
        pFVar10 = (FMRSWRecursiveAccessDetector *)auStack_290;
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(pFVar10);
      uStack_90 = uStack_178;
      FStack_a0._0_8_ = lStack_188;
      FStack_a0._8_8_ = lStack_180;
      TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::
      TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
                ((TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_88,
                 (TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_170);
      SlateAttributePrivate::
      TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
      ::Assign((TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                *)&this_00->_padding_,(SWidget *)this_00,(TAttribute<FLinearColor> *)&FStack_a0._s_0
               ,None);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_88);
      if ((void *)auStack_88._8_8_ != (void *)0x0) {
        FMemory::Free((void *)auStack_88._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_88);
      uStack_100 = uStack_1a8;
      FStack_110._0_8_ = lStack_1b8;
      FStack_110._8_8_ = lStack_1b0;
      uStack_fc = uStack_1a4;
      TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
      TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
                ((TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_f8,
                 (TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_1a0);
      SlateAttributePrivate::
      TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
      ::Assign((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                *)&this_00->_padding_,(SWidget *)this_00,(TAttribute<FSlateColor> *)&FStack_110._s_0
               ,None);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_f8);
      if ((void *)auStack_f8._8_8_ != (void *)0x0) {
        FMemory::Free((void *)auStack_f8._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_f8);
      auStack_218._0_8_ = this->_padding_;
      auStack_218._8_8_ = this->_padding_;
      auStack_218[0x10] = true;
      uStack_1f0 = 0;
      TStack_200.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_1f8.Data = (FScriptContainerElement *)0x0;
      SObjectWidget::SetPadding(this_00,(TAttribute<FMargin> *)auStack_218);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&TStack_200,(FWriteAccessScope *)&FStack_128);
      if (((int)uStack_1f0 != 0) && (FStack_1f8.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_1f8.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1f8,0,0,0x10);
        uStack_1f0 = uStack_1f0 & 0xffffffff00000000;
      }
      if (FStack_128.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_128.Accessor,&FStack_128);
      }
      if (FStack_1f8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_1f8.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_200.AccessDetector);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_1a0);
      if ((void *)auStack_1a0._8_8_ != (void *)0x0) {
        FMemory::Free((void *)auStack_1a0._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_1a0);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_170);
      if ((void *)auStack_170._8_8_ != (void *)0x0) {
        FMemory::Free((void *)auStack_170._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_170);
    }
  }
LAB_146a96f76:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return;
}

// UnbindInputAction @ 14bccda80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_UserWidget::UnbindInputAction(UDS_UserWidget *this,EDS_WindowWidget *param_1)

{
  FObjectPtr_u_0 *pFVar1;
  int iVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  UDS_WindowManager *this_00;
  UMVVMView *pUVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  FObjectPtr_u_0 *this_01;
  FWeakObjectPtr local_res18 [2];
  
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 != (UDS_WindowManager *)0x0) {
    UDS_WindowManager::GetWindowInfo(this_00,(EDS_WindowWidget)local_res18);
    bVar5 = FWeakObjectPtr::IsValid(local_res18);
    if ((bVar5) &&
       (pUVar6 = UMVVMSubsystem::GetViewFromUserWidget((UUserWidget *)this),
       pUVar6 != (UMVVMView *)0x0)) {
      iVar2 = (pUVar6->Sources).ArrayNum;
      this_01 = (FObjectPtr_u_0 *)(pUVar6->Sources).AllocatorInstance.Data;
      if ((iVar2 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar1 = this_01 + (longlong)iVar2 * 3;
      for (; this_01 != pFVar1; this_01 = this_01 + 3) {
        if (this_01->Handle != (UObject *)0x0) {
          pUVar7 = Z_Construct_UClass_UDS_ViewModelBase_NoRegister();
          bVar5 = FObjectPtr::IsA((FObjectPtr *)this_01,pUVar7);
          if ((bVar5) && (pUVar3 = this_01->Handle, pUVar3 != (UObject *)0x0)) {
            pUVar8 = FWeakObjectPtr::Get(local_res18);
            TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar8[5].field_0x18,
                       pUVar3);
          }
        }
      }
    }
  }
  return;
}

// BindWidget<UDS_CanvasPanel> @ 14bcd2320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
UDS_UserWidget::BindWidget<UDS_CanvasPanel>
          (UDS_UserWidget *this,TObjectPtr<UDS_CanvasPanel> *param_1,FName param_2)

{
  int iVar1;
  UDS_CanvasPanel *pUVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  FName local_res18 [2];
  undefined1 auStackY_1c8 [32];
  uint uVar5;
  wchar_t *pwVar6;
  FName local_188;
  FString local_180;
  FString local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  (param_1->field0_0x0).DebugPtr = (UDS_CanvasPanel *)0x0;
  local_res18[0] = param_2;
  pUVar2 = (UDS_CanvasPanel *)UUserWidget::GetWidgetFromName((UUserWidget *)this,local_res18);
  if (pUVar2 == (UDS_CanvasPanel *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    ::FName::ToString(local_res18,&local_170);
    local_188 = (FName)this->_padding_;
    ::FName::ToString(&local_188,&local_180);
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_UserWidget::BindWidget",0x1a,Yes);
    pwVar6 = L"Failed to find: %s.%s";
    uVar5 = 0x1b7;
  }
  else {
    pUVar3 = Z_Construct_UClass_UDS_CanvasPanel_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) {
      pUVar2 = (UDS_CanvasPanel *)0x0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UDS_CanvasPanel *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
      (param_1->field0_0x0).DebugPtr = pUVar2;
      return true;
    }
    (param_1->field0_0x0).DebugPtr = pUVar2;
    if (pUVar2 != (UDS_CanvasPanel *)0x0) {
      return true;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    ::FName::ToString(local_res18,&local_170);
    local_188 = (FName)this->_padding_;
    ::FName::ToString(&local_188,&local_180);
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_UserWidget::BindWidget",0x1a,Yes);
    pwVar6 = L"Failed to cast: %s.%s";
    uVar5 = 0x1b2;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Display,local_158.Ptr,uVar5,pwVar6);
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  return false;
}

// BindWidget<UDS_EditableText> @ 14bcd2580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
UDS_UserWidget::BindWidget<UDS_EditableText>
          (UDS_UserWidget *this,TObjectPtr<UDS_EditableText> *param_1,FName param_2)

{
  int iVar1;
  UDS_EditableText *pUVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  FName local_res18 [2];
  undefined1 auStackY_1c8 [32];
  uint uVar5;
  wchar_t *pwVar6;
  FName local_188;
  FString local_180;
  FString local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  (param_1->field0_0x0).DebugPtr = (UDS_EditableText *)0x0;
  local_res18[0] = param_2;
  pUVar2 = (UDS_EditableText *)UUserWidget::GetWidgetFromName((UUserWidget *)this,local_res18);
  if (pUVar2 == (UDS_EditableText *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    ::FName::ToString(local_res18,&local_170);
    local_188 = (FName)this->_padding_;
    ::FName::ToString(&local_188,&local_180);
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_UserWidget::BindWidget",0x1a,Yes);
    pwVar6 = L"Failed to find: %s.%s";
    uVar5 = 0x1b7;
  }
  else {
    pUVar3 = Z_Construct_UClass_UDS_EditableText_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pUVar2 = (UDS_EditableText *)0x0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UDS_EditableText *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
      (param_1->field0_0x0).DebugPtr = pUVar2;
      return true;
    }
    (param_1->field0_0x0).DebugPtr = pUVar2;
    if (pUVar2 != (UDS_EditableText *)0x0) {
      return true;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    ::FName::ToString(local_res18,&local_170);
    local_188 = (FName)this->_padding_;
    ::FName::ToString(&local_188,&local_180);
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_UserWidget::BindWidget",0x1a,Yes);
    pwVar6 = L"Failed to cast: %s.%s";
    uVar5 = 0x1b2;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Display,local_158.Ptr,uVar5,pwVar6);
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  return false;
}

// BindWidget<UDS_ProgressBar> @ 14bcd27e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
UDS_UserWidget::BindWidget<UDS_ProgressBar>
          (UDS_UserWidget *this,TObjectPtr<UDS_ProgressBar> *param_1,FName param_2)

{
  int iVar1;
  UDS_ProgressBar *pUVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  FName local_res18 [2];
  undefined1 auStackY_1c8 [32];
  uint uVar5;
  wchar_t *pwVar6;
  FName local_188;
  FString local_180;
  FString local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  (param_1->field0_0x0).DebugPtr = (UDS_ProgressBar *)0x0;
  local_res18[0] = param_2;
  pUVar2 = (UDS_ProgressBar *)UUserWidget::GetWidgetFromName((UUserWidget *)this,local_res18);
  if (pUVar2 == (UDS_ProgressBar *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    ::FName::ToString(local_res18,&local_170);
    local_188 = (FName)this->_padding_;
    ::FName::ToString(&local_188,&local_180);
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_UserWidget::BindWidget",0x1a,Yes);
    pwVar6 = L"Failed to find: %s.%s";
    uVar5 = 0x1b7;
  }
  else {
    pUVar3 = Z_Construct_UClass_UDS_ProgressBar_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) {
      pUVar2 = (UDS_ProgressBar *)0x0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UDS_ProgressBar *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
      (param_1->field0_0x0).DebugPtr = pUVar2;
      return true;
    }
    (param_1->field0_0x0).DebugPtr = pUVar2;
    if (pUVar2 != (UDS_ProgressBar *)0x0) {
      return true;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    ::FName::ToString(local_res18,&local_170);
    local_188 = (FName)this->_padding_;
    ::FName::ToString(&local_188,&local_180);
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_UserWidget::BindWidget",0x1a,Yes);
    pwVar6 = L"Failed to cast: %s.%s";
    uVar5 = 0x1b2;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Display,local_158.Ptr,uVar5,pwVar6);
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  return false;
}

// BindWidget<UDS_ScaleBox> @ 14bcd2a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
UDS_UserWidget::BindWidget<UDS_ScaleBox>
          (UDS_UserWidget *this,TObjectPtr<UDS_ScaleBox> *param_1,FName param_2)

{
  int iVar1;
  UDS_ScaleBox *pUVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  FName local_res18 [2];
  undefined1 auStackY_1c8 [32];
  uint uVar5;
  wchar_t *pwVar6;
  FName local_188;
  FString local_180;
  FString local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  (param_1->field0_0x0).DebugPtr = (UDS_ScaleBox *)0x0;
  local_res18[0] = param_2;
  pUVar2 = (UDS_ScaleBox *)UUserWidget::GetWidgetFromName((UUserWidget *)this,local_res18);
  if (pUVar2 == (UDS_ScaleBox *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    ::FName::ToString(local_res18,&local_170);
    local_188 = (FName)this->_padding_;
    ::FName::ToString(&local_188,&local_180);
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_UserWidget::BindWidget",0x1a,Yes);
    pwVar6 = L"Failed to find: %s.%s";
    uVar5 = 0x1b7;
  }
  else {
    pUVar3 = Z_Construct_UClass_UDS_ScaleBox_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) {
      pUVar2 = (UDS_ScaleBox *)0x0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UDS_ScaleBox *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
      (param_1->field0_0x0).DebugPtr = pUVar2;
      return true;
    }
    (param_1->field0_0x0).DebugPtr = pUVar2;
    if (pUVar2 != (UDS_ScaleBox *)0x0) {
      return true;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    ::FName::ToString(local_res18,&local_170);
    local_188 = (FName)this->_padding_;
    ::FName::ToString(&local_188,&local_180);
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_UserWidget::BindWidget",0x1a,Yes);
    pwVar6 = L"Failed to cast: %s.%s";
    uVar5 = 0x1b2;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Display,local_158.Ptr,uVar5,pwVar6);
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  return false;
}

// BindWidget<UDS_CommonLazyImage> @ 14c05cb70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
UDS_UserWidget::BindWidget<UDS_CommonLazyImage>
          (UDS_UserWidget *this,UDS_CommonLazyImage **param_1,FName param_2)

{
  int iVar1;
  UDS_CommonLazyImage *pUVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  FName local_res18;
  undefined1 auStackY_1c8 [32];
  uint uVar5;
  wchar_t *pwVar6;
  FName local_188;
  FString local_180;
  FString local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  *param_1 = (UDS_CommonLazyImage *)0x0;
  local_res18 = param_2;
  pUVar2 = (UDS_CommonLazyImage *)UUserWidget::GetWidgetFromName((UUserWidget *)this,&local_res18);
  if (pUVar2 == (UDS_CommonLazyImage *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    ::FName::ToString(&local_res18,&local_170);
    local_188 = (FName)this->_padding_;
    ::FName::ToString(&local_188,&local_180);
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_UserWidget::BindWidget",0x1a,Yes);
    pwVar6 = L"Failed to find: %s.%s";
    uVar5 = 0x195;
  }
  else {
    pUVar3 = Z_Construct_UClass_UDS_CommonLazyImage_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      *param_1 = pUVar2;
      return true;
    }
    *param_1 = (UDS_CommonLazyImage *)0x0;
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    ::FName::ToString(&local_res18,&local_170);
    local_188 = (FName)this->_padding_;
    ::FName::ToString(&local_188,&local_180);
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_UserWidget::BindWidget",0x1a,Yes);
    pwVar6 = L"Failed to cast: %s.%s";
    uVar5 = 400;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Display,local_158.Ptr,uVar5,pwVar6);
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  return false;
}

// BindWidget<UDS_CommonRichTextBlock> @ 14c05cdb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
UDS_UserWidget::BindWidget<UDS_CommonRichTextBlock>
          (UDS_UserWidget *this,UDS_CommonRichTextBlock **param_1,FName param_2)

{
  int iVar1;
  UDS_CommonRichTextBlock *pUVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  FName local_res18;
  undefined1 auStackY_1c8 [32];
  uint uVar5;
  wchar_t *pwVar6;
  FName local_188;
  FString local_180;
  FString local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  *param_1 = (UDS_CommonRichTextBlock *)0x0;
  local_res18 = param_2;
  pUVar2 = (UDS_CommonRichTextBlock *)
           UUserWidget::GetWidgetFromName((UUserWidget *)this,&local_res18);
  if (pUVar2 == (UDS_CommonRichTextBlock *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    ::FName::ToString(&local_res18,&local_170);
    local_188 = (FName)this->_padding_;
    ::FName::ToString(&local_188,&local_180);
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_UserWidget::BindWidget",0x1a,Yes);
    pwVar6 = L"Failed to find: %s.%s";
    uVar5 = 0x195;
  }
  else {
    pUVar3 = Z_Construct_UClass_UDS_CommonRichTextBlock_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      *param_1 = pUVar2;
      return true;
    }
    *param_1 = (UDS_CommonRichTextBlock *)0x0;
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    ::FName::ToString(&local_res18,&local_170);
    local_188 = (FName)this->_padding_;
    ::FName::ToString(&local_188,&local_180);
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_UserWidget::BindWidget",0x1a,Yes);
    pwVar6 = L"Failed to cast: %s.%s";
    uVar5 = 400;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Display,local_158.Ptr,uVar5,pwVar6);
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  return false;
}

// BindWidget<UDS_VerticalBox> @ 14c05cff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
UDS_UserWidget::BindWidget<UDS_VerticalBox>
          (UDS_UserWidget *this,TObjectPtr<UDS_VerticalBox> *param_1,FName param_2)

{
  int iVar1;
  UDS_VerticalBox *pUVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  FName local_res18 [2];
  undefined1 auStackY_1c8 [32];
  uint uVar5;
  wchar_t *pwVar6;
  FName local_188;
  FString local_180;
  FString local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  (param_1->field0_0x0).DebugPtr = (UDS_VerticalBox *)0x0;
  local_res18[0] = param_2;
  pUVar2 = (UDS_VerticalBox *)UUserWidget::GetWidgetFromName((UUserWidget *)this,local_res18);
  if (pUVar2 == (UDS_VerticalBox *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    ::FName::ToString(local_res18,&local_170);
    local_188 = (FName)this->_padding_;
    ::FName::ToString(&local_188,&local_180);
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_UserWidget::BindWidget",0x1a,Yes);
    pwVar6 = L"Failed to find: %s.%s";
    uVar5 = 0x1b7;
  }
  else {
    pUVar3 = Z_Construct_UClass_UDS_VerticalBox_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) {
      pUVar2 = (UDS_VerticalBox *)0x0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UDS_VerticalBox *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
      (param_1->field0_0x0).DebugPtr = pUVar2;
      return true;
    }
    (param_1->field0_0x0).DebugPtr = pUVar2;
    if (pUVar2 != (UDS_VerticalBox *)0x0) {
      return true;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    ::FName::ToString(local_res18,&local_170);
    local_188 = (FName)this->_padding_;
    ::FName::ToString(&local_188,&local_180);
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_UserWidget::BindWidget",0x1a,Yes);
    pwVar6 = L"Failed to cast: %s.%s";
    uVar5 = 0x1b2;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Display,local_158.Ptr,uVar5,pwVar6);
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  return false;
}

// BindWidget<UGridPanel> @ 14c05d250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
UDS_UserWidget::BindWidget<UGridPanel>(UDS_UserWidget *this,UGridPanel **param_1,FName param_2)

{
  int iVar1;
  UGridPanel *pUVar2;
  UClass *pUVar3;
  UDS_LogManager *pUVar4;
  FName local_res18;
  undefined1 auStackY_1c8 [32];
  uint uVar5;
  wchar_t *pwVar6;
  FName local_188;
  FString local_180;
  FString local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  *param_1 = (UGridPanel *)0x0;
  local_res18 = param_2;
  pUVar2 = (UGridPanel *)UUserWidget::GetWidgetFromName((UUserWidget *)this,&local_res18);
  if (pUVar2 == (UGridPanel *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    ::FName::ToString(&local_res18,&local_170);
    local_188 = (FName)this->_padding_;
    ::FName::ToString(&local_188,&local_180);
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_UserWidget::BindWidget",0x1a,Yes);
    pwVar6 = L"Failed to find: %s.%s";
    uVar5 = 0x195;
  }
  else {
    pUVar3 = Z_Construct_UClass_UGridPanel_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      *param_1 = pUVar2;
      return true;
    }
    *param_1 = (UGridPanel *)0x0;
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    ::FName::ToString(&local_res18,&local_170);
    local_188 = (FName)this->_padding_;
    ::FName::ToString(&local_188,&local_180);
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_UserWidget::BindWidget",0x1a,Yes);
    pwVar6 = L"Failed to cast: %s.%s";
    uVar5 = 400;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Display,local_158.Ptr,uVar5,pwVar6);
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  return false;
}

