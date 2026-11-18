// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 23

// StaticClass @ 14b7892a0

UClass * __cdecl UDS_W_SkillSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_SkillSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_SkillSlot",
               &Z_Registration_Info_UClass_UDS_W_SkillSlot.InnerSingleton,
               StaticRegisterNativesUDS_W_SkillSlot,0xab0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_W_SkillSlot>,InternalVTableHelperCtorCaller<UDS_W_SkillSlot>
               ,local_res8,UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_SkillSlot.InnerSingleton;
}

// UDS_W_SkillSlot @ 14b78d250

UDS_W_SkillSlot * __thiscall
UDS_W_SkillSlot::UDS_W_SkillSlot(UDS_W_SkillSlot *this,FVTableHelper *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  (this->DragVisualClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  (this->EventMouseButtonDown).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseButtonDown).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseButtonDown).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseButtonDown).KeyEvent);
  (this->EventMouseButtonUp).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseButtonUp).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseButtonUp).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseButtonUp).KeyEvent);
  this->EventMouseEnter = false;
  this->EventMouseLeave = false;
  this->EventOnDrag = false;
  this->EventDragCancelled = false;
  (this->EventOperationDrop).bIsActivate = false;
  (this->SkillSlotInfo).SlotIndex = 0;
  (this->SkillSlotInfo).SkillID = 0;
  (this->SkillSlotInfo).SkillIconID = 0;
  (this->SkillSlotInfo).IsDraggedFromSkillList = false;
  return this;
}

// ~UDS_W_SkillSlot @ 14b78e290

void __thiscall UDS_W_SkillSlot::~UDS_W_SkillSlot(UDS_W_SkillSlot *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  FKeyEvent::~FKeyEvent(&(this->EventMouseButtonUp).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseButtonUp).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventMouseButtonDown).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseButtonDown).PointerEvent);
  UDS_UserWidget::~UDS_UserWidget((UDS_UserWidget *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b78fc70

IClassDescriptor * __thiscall UDS_W_SkillSlot::GetFieldNotificationDescriptor(UDS_W_SkillSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_W_SkillSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b7905b0

UClass * __cdecl UDS_W_SkillSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_SkillSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_SkillSlot",
               &Z_Registration_Info_UClass_UDS_W_SkillSlot.InnerSingleton,
               StaticRegisterNativesUDS_W_SkillSlot,0xab0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_W_SkillSlot>,InternalVTableHelperCtorCaller<UDS_W_SkillSlot>
               ,local_res8,UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_SkillSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_W_SkillSlot @ 14b790bb0

void __cdecl UDS_W_SkillSlot::StaticRegisterNativesUDS_W_SkillSlot(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_W_SkillSlot_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnOperationDrop @ 14b792420

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_W_SkillSlot::execOnOperationDrop(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDragDropOperation *local_res10;
  
  local_res10 = (UDragDropOperation *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnOperationDrop((UDS_W_SkillSlot *)param_1,local_res10);
  return;
}

// UDS_W_SkillSlot @ 14bce5740

UDS_W_SkillSlot * __thiscall
UDS_W_SkillSlot::UDS_W_SkillSlot(UDS_W_SkillSlot *this,FObjectInitializer *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  (this->DragVisualClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  (this->EventMouseButtonDown).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseButtonDown).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseButtonDown).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseButtonDown).KeyEvent);
  (this->EventMouseButtonUp).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseButtonUp).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseButtonUp).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseButtonUp).KeyEvent);
  this->EventMouseEnter = false;
  this->EventMouseLeave = false;
  this->EventOnDrag = false;
  this->EventDragCancelled = false;
  (this->EventOperationDrop).bIsActivate = false;
  (this->SkillSlotInfo).SlotIndex = 0;
  (this->SkillSlotInfo).SkillID = 0;
  (this->SkillSlotInfo).SkillIconID = 0;
  (this->SkillSlotInfo).IsDraggedFromSkillList = false;
  return this;
}

// CustomDetectDrag @ 14bcef600

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
UDS_W_SkillSlot::CustomDetectDrag
          (UDS_W_SkillSlot *this,FReply *__return_storage_ptr__,FPointerEvent *param_1,
          UWidget *param_2,FKey *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  code *pcVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  FReply *pFVar6;
  TSharedPtr<SWidget,1> local_288;
  TSharedRef<SWidget,1> local_278;
  FKey local_268;
  FReply local_248;
  FReply local_188;
  FReply local_d0;
  
  pTVar1 = (param_1->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar2 = (param_1->EffectingButton).KeyName;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((FVar2 == param_3->KeyName) || (param_1->bIsTouchEvent != false)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (bVar5) {
    FReply::FReply(&local_188,false);
    FReply::FReply(&local_248,&local_188);
    FReply::~FReply(&local_188);
    FReply::FReply(&local_d0,true);
    FReply::operator=(&local_248,&local_d0);
    FReply::~FReply(&local_d0);
    if (param_2 != (UWidget *)0x0) {
      UWidget::GetCachedWidget(param_2,&local_288);
      if (local_288.Object != (SWidget *)0x0) {
        local_268.KeyName = param_3->KeyName;
        local_268.KeyDetails.Object = (param_3->KeyDetails).Object;
        local_268.KeyDetails.SharedReferenceCount.ReferenceController =
             (param_3->KeyDetails).SharedReferenceCount.ReferenceController;
        if (local_268.KeyDetails.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_268.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_268.KeyDetails.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((local_288.Object == (SWidget *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x408,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          pFVar6 = (FReply *)(*pcVar3)();
          return pFVar6;
        }
        FVar4.ReferenceController = local_288.SharedReferenceCount.ReferenceController;
        local_278.SharedReferenceCount.ReferenceController =
             local_288.SharedReferenceCount.ReferenceController;
        if (local_288.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_288.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_288.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if ((local_288.Object == (SWidget *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x25d,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          pFVar6 = (FReply *)(*pcVar3)();
          return pFVar6;
        }
        pFVar6 = FReply::DetectDrag(&local_248,&local_278,&local_268);
        FReply::operator=(&local_248,pFVar6);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar4.ReferenceController);
        FReply::FReply(__return_storage_ptr__,&local_248);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_288.SharedReferenceCount.ReferenceController);
        FReply::~FReply(&local_248);
        goto LAB_14bcef7d5;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_288.SharedReferenceCount.ReferenceController);
    }
    FReply::~FReply(&local_248);
  }
  FReply::FReply(__return_storage_ptr__,false);
LAB_14bcef7d5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->KeyDetails).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// NativeConstruct @ 14bd07400

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_W_SkillSlot::NativeConstruct(UDS_W_SkillSlot *this)

{
  atomic<int> *paVar1;
  FName *pFVar2;
  atomic<int> aVar3;
  UWidgetAnimation *pUVar4;
  FWidgetAnimationHandle FStack_18;
  
  UUserWidget::NativeConstruct((UUserWidget *)this);
  UDS_UserWidget::CollectChildUserWidget((UDS_UserWidget *)this);
  if (((char)this->_padding_ != '\0') &&
     (pFVar2 = (FName *)((longlong)&this->_padding_ + 4), *pFVar2 != (FName)0x0)) {
    pUVar4 = UDS_UserWidget::GetAnimation((UDS_UserWidget *)this,pFVar2);
    if (pUVar4 != (UWidgetAnimation *)0x0) {
      UUserWidget::PlayAnimation
                ((UUserWidget *)this,&FStack_18,pUVar4,0.0,
                 (uint)(*(char *)((longlong)&this->_padding_ + 4) != '\x01'),Forward,__real_3f800000
                 ,false);
      if (FStack_18.WeakState.WeakReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(FStack_18.WeakState.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<int>)0x1) {
          (**(code **)((FStack_18.WeakState.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (FStack_18.WeakState.WeakReferenceCount.ReferenceController,1);
        }
      }
    }
  }
  return;
}

// NativeOnDragCancelled @ 14bd07a70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_SkillSlot::NativeOnDragCancelled
          (UDS_W_SkillSlot *this,FDragDropEvent *param_1,UDragDropOperation *param_2)

{
  UFunction *pUVar1;
  FPointerEvent FStack_98;
  UDragDropOperation *pUStack_18;
  
  FPointerEvent::FPointerEvent(&FStack_98);
  FPointerEvent::operator=(&FStack_98,(FPointerEvent *)param_1);
  pUStack_18 = param_2;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnDragCancelled);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&FStack_98);
  FPointerEvent::~FPointerEvent(&FStack_98);
  return;
}

// NativeOnDragDetected @ 14bd08130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_SkillSlot::NativeOnDragDetected
          (UDS_W_SkillSlot *this,FGeometry *param_1,FPointerEvent *param_2,
          UDragDropOperation **param_3)

{
  UFunction *pUVar1;
  undefined1 auStack_148 [32];
  FGeometry FStack_128;
  FGeometry FStack_e8;
  FPointerEvent FStack_b0;
  UDragDropOperation *pUStack_30;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  FStack_128.Size = param_1->Size;
  FStack_128._8_8_ = *(undefined8 *)&param_1->Scale;
  FStack_128._16_8_ = *(undefined8 *)((longlong)&(param_1->AbsolutePosition).field0_0x0 + 4);
  FStack_128._24_8_ = *(undefined8 *)((longlong)&(param_1->Position).field0_0x0 + 4);
  FStack_128.AccumulatedRenderTransform.M.M._4_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[0] + 1);
  FStack_128.AccumulatedRenderTransform._12_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[1] + 1);
  FStack_128._48_8_ =
       *(undefined8 *)((longlong)&(param_1->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
  FGeometry::FGeometry(&FStack_e8);
  FPointerEvent::FPointerEvent(&FStack_b0);
  FGeometry::operator=(&FStack_e8,&FStack_128);
  FPointerEvent::operator=(&FStack_b0,param_2);
  pUStack_30 = *param_3;
  pUVar1 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnDragDetected);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&FStack_e8);
  *param_3 = pUStack_30;
  FPointerEvent::~FPointerEvent(&FStack_b0);
  return;
}

// NativeOnDrop @ 14bd08380

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_W_SkillSlot::NativeOnDrop
          (UDS_W_SkillSlot *this,FGeometry *param_1,FDragDropEvent *param_2,
          UDragDropOperation *param_3)

{
  UUserWidget::NativeOnDrop((UUserWidget *)this,param_1,param_2,param_3);
  return true;
}

// NativeOnMouseButtonDown @ 14bd08880

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
UDS_W_SkillSlot::NativeOnMouseButtonDown
          (UDS_W_SkillSlot *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  code *pcVar3;
  FName *pFVar4;
  bool bVar5;
  FName local_res8;
  undefined1 local_e8 [16];
  TReferenceControllerBase<1> *local_d8;
  FReply local_c8;
  
  UCommonUserWidget::NativeOnMouseButtonDown((UCommonUserWidget *)this,&local_c8,param_1,param_2);
  FReply::~FReply(&local_c8);
  FPointerEvent::operator=(&(this->EventMouseButtonDown).PointerEvent,param_2);
  local_e8._0_4_ =
       FFieldNotificationClassDescriptor::EventMouseButtonDown.FieldName.ComparisonIndex.Value;
  local_e8._4_4_ = FFieldNotificationClassDescriptor::EventMouseButtonDown.FieldName.Number;
  local_e8._8_4_ = FFieldNotificationClassDescriptor::EventMouseButtonDown.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,(FFieldId *)local_e8);
  pTVar1 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar2 = (param_2->EffectingButton).KeyName;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar5 = FVar2 == EKeys::LeftMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (bVar5) {
    this->bIsButtonDown = true;
    pFVar4 = ::FName::FName(&local_res8,"pressed");
    UDS_UserWidget::PlayAnimationByName((UDS_UserWidget *)this,pFVar4);
    pcVar3 = *(code **)(this->_padding_ + 0x518);
    local_e8._0_4_ = EKeys::LeftMouseButton.KeyName.ComparisonIndex.Value;
    local_e8._4_4_ = EKeys::LeftMouseButton.KeyName.Number;
    local_e8._8_8_ = EKeys::LeftMouseButton.KeyDetails.Object;
    local_d8 = EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController;
    if (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
      SharedReferenceCount =
           (atomic<int>)
           ((int)(EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar3)(this,__return_storage_ptr__,param_2,this,local_e8);
  }
  else {
    FReply::FReply(__return_storage_ptr__,false);
  }
  return __return_storage_ptr__;
}

// NativeOnMouseButtonUp @ 14bd08da0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
UDS_W_SkillSlot::NativeOnMouseButtonUp
          (UDS_W_SkillSlot *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  FName *pFVar3;
  bool bVar4;
  FName local_res8;
  FFieldId local_d8;
  FReply local_c8;
  
  UCommonUserWidget::NativeOnMouseButtonUp((UCommonUserWidget *)this,&local_c8,param_1,param_2);
  FReply::~FReply(&local_c8);
  FPointerEvent::operator=(&(this->EventMouseButtonUp).PointerEvent,param_2);
  local_d8.FieldName = FFieldNotificationClassDescriptor::EventMouseButtonUp.FieldName;
  local_d8.BitNumber = FFieldNotificationClassDescriptor::EventMouseButtonUp.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_d8);
  pTVar1 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar2 = (param_2->EffectingButton).KeyName;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar4 = FVar2 == EKeys::LeftMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (bVar4) {
    if (this->bIsButtonDown == true) {
      this->bIsButtonDown = false;
      pFVar3 = ::FName::FName(&local_res8,"released");
      UDS_UserWidget::PlayAnimationByName((UDS_UserWidget *)this,pFVar3);
    }
  }
  else {
    pTVar1 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar2 = (param_2->EffectingButton).KeyName;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar4 = FVar2 == EKeys::RightMouseButton.KeyName;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    if (bVar4) {
      bVar4 = true;
      goto LAB_14bd08e5e;
    }
  }
  bVar4 = false;
LAB_14bd08e5e:
  FReply::FReply(__return_storage_ptr__,bVar4);
  return __return_storage_ptr__;
}

// NativeOnMouseEnter @ 14bd09180

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_W_SkillSlot::NativeOnMouseEnter(UDS_W_SkillSlot *this,FGeometry *param_1,FPointerEvent *param_2)

{
  FFieldId local_18;
  
  UUserWidget::NativeOnMouseEnter((UUserWidget *)this,param_1,param_2);
  local_18.FieldName = FFieldNotificationClassDescriptor::EventMouseEnter.FieldName;
  local_18.BitNumber = FFieldNotificationClassDescriptor::EventMouseEnter.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
  return;
}

// NativeOnMouseLeave @ 14bd09470

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_W_SkillSlot::NativeOnMouseLeave(UDS_W_SkillSlot *this,FPointerEvent *param_1)

{
  FFieldId local_18;
  
  UUserWidget::NativeOnMouseLeave((UUserWidget *)this,param_1);
  local_18.FieldName = FFieldNotificationClassDescriptor::EventMouseLeave.FieldName;
  local_18.BitNumber = FFieldNotificationClassDescriptor::EventMouseLeave.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
  return;
}

// OnEventMouseButtonDown @ 14bd0d140

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_SkillSlot::OnEventMouseButtonDown(UDS_W_SkillSlot *this,FPointerEvent *param_1)

{
  FFieldId local_18;
  
  FPointerEvent::operator=(&(this->EventMouseButtonDown).PointerEvent,param_1);
  local_18.FieldName = FFieldNotificationClassDescriptor::EventMouseButtonDown.FieldName;
  local_18.BitNumber = FFieldNotificationClassDescriptor::EventMouseButtonDown.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
  return;
}

// OnEventMouseButtonUp @ 14bd0d2d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_SkillSlot::OnEventMouseButtonUp(UDS_W_SkillSlot *this,FPointerEvent *param_1)

{
  FFieldId local_18;
  
  FPointerEvent::operator=(&(this->EventMouseButtonUp).PointerEvent,param_1);
  local_18.FieldName = FFieldNotificationClassDescriptor::EventMouseButtonUp.FieldName;
  local_18.BitNumber = FFieldNotificationClassDescriptor::EventMouseButtonUp.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
  return;
}

// OnOperationDrop @ 14bd0fb30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_SkillSlot::OnOperationDrop(UDS_W_SkillSlot *this,UDragDropOperation *param_1)

{
  FFieldId local_18 [2];
  
  local_18[0].FieldName = FFieldNotificationClassDescriptor::EventOperationDrop.FieldName;
  local_18[0].BitNumber = FFieldNotificationClassDescriptor::EventOperationDrop.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,local_18);
  return;
}

// PlayButtonPressedAnimation @ 14bd14e90

void __thiscall UDS_W_SkillSlot::PlayButtonPressedAnimation(UDS_W_SkillSlot *this)

{
  FName *pFVar1;
  FName local_res10 [3];
  
  pFVar1 = ::FName::FName(local_res10,"pressed");
  UDS_UserWidget::PlayAnimationByName((UDS_UserWidget *)this,pFVar1);
  return;
}

// PlayButtonReleasedAnimation @ 14bd14ed0

void __thiscall UDS_W_SkillSlot::PlayButtonReleasedAnimation(UDS_W_SkillSlot *this)

{
  FName *pFVar1;
  FName local_res10 [3];
  
  pFVar1 = ::FName::FName(local_res10,"released");
  UDS_UserWidget::PlayAnimationByName((UDS_UserWidget *)this,pFVar1);
  return;
}

// SendEquipmentItem @ 14bd1d500

bool __thiscall
UDS_W_SkillSlot::SendEquipmentItem
          (UDS_W_SkillSlot *this,UDS_W_DragDropOperation *param_1,bool param_2)

{
  UDS_SendPacketManager *pUVar1;
  
  if (param_1 != (UDS_W_DragDropOperation *)0x0) {
    pUVar1 = UDS_SendPacketManager::GetInst();
    return pUVar1 != (UDS_SendPacketManager *)0x0;
  }
  return false;
}

