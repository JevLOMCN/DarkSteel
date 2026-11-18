// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 28

// StaticClass @ 14b777ad0

UClass * __cdecl UDS_W_Slot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_Slot.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_Slot",
               &Z_Registration_Info_UClass_UDS_W_Slot.InnerSingleton,StaticRegisterNativesUDS_W_Slot
               ,0x1198,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UDS_W_Slot>,
               InternalVTableHelperCtorCaller<UDS_W_Slot>,aFStackX_8,UDS_UserWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_Slot.InnerSingleton;
}

// UDS_W_Slot @ 14b78d330

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_W_Slot * __thiscall UDS_W_Slot::UDS_W_Slot(UDS_W_Slot *this,FVTableHelper *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  (this->DragVisualClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  (this->EventKeyDown).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventKeyDown).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventKeyDown).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventKeyDown).KeyEvent);
  (this->EventKeyUp).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventKeyUp).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventKeyUp).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventKeyUp).KeyEvent);
  (this->EventMouseButtonUp).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseButtonUp).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseButtonUp).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseButtonUp).KeyEvent);
  (this->EventMouseButtonDown).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseButtonDown).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseButtonDown).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseButtonDown).KeyEvent);
  (this->EventMouseButtonDoubleClick).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseButtonDoubleClick).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseButtonDoubleClick).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseButtonDoubleClick).KeyEvent);
  (this->EventMouseEnter).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseEnter).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseEnter).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseEnter).KeyEvent);
  (this->EventMouseLeave).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseLeave).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseLeave).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseLeave).KeyEvent);
  *(undefined1 *)&(this->EventOnDragDetected)._padding_ = 0;
  (this->EventOnDragDetected).DragDropOperation.field0_0x0.DebugPtr = (UDragDropOperation *)0x0;
  FPointerEvent::FPointerEvent(&(this->EventOnDragDetected).PointerEvent);
  (this->EventOnDragDetected).DragCanceled = false;
  *(undefined1 *)&(this->EventOnDrop)._padding_ = 0;
  (this->EventOnDrop).DragDropOperation.field0_0x0.DebugPtr = (UDragDropOperation *)0x0;
  FPointerEvent::FPointerEvent(&(this->EventOnDrop).PointerEvent);
  (this->EventOnDrop).DragCanceled = false;
  *(undefined1 *)&(this->EventOnDragCancelled)._padding_ = 0;
  (this->EventOnDragCancelled).DragDropOperation.field0_0x0.DebugPtr = (UDragDropOperation *)0x0;
  FPointerEvent::FPointerEvent(&(this->EventOnDragCancelled).PointerEvent);
  (this->EventOnDragCancelled).DragCanceled = false;
  this->IsHoverSlowdown = true;
  (this->SlotInfo).SlotInfo.Object = (FDS_SlotInfoBase *)0x0;
  (this->SlotInfo).SlotInfo.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UDS_W_Slot @ 14b78e310

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_Slot::~UDS_W_Slot(UDS_W_Slot *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SlotInfo).SlotInfo.SharedReferenceCount.ReferenceController);
  FPointerEvent::~FPointerEvent(&(this->EventOnDragCancelled).PointerEvent);
  FPointerEvent::~FPointerEvent(&(this->EventOnDrop).PointerEvent);
  FPointerEvent::~FPointerEvent(&(this->EventOnDragDetected).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventMouseLeave).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseLeave).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventMouseEnter).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseEnter).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventMouseButtonDoubleClick).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseButtonDoubleClick).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventMouseButtonDown).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseButtonDown).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventMouseButtonUp).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseButtonUp).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventKeyUp).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventKeyUp).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventKeyDown).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventKeyDown).PointerEvent);
  UDS_UserWidget::~UDS_UserWidget((UDS_UserWidget *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b78fce0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

IClassDescriptor * __thiscall UDS_W_Slot::GetFieldNotificationDescriptor(UDS_W_Slot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_W_Slot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b790670

UClass * __cdecl UDS_W_Slot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_Slot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_Slot",
               &Z_Registration_Info_UClass_UDS_W_Slot.InnerSingleton,StaticRegisterNativesUDS_W_Slot
               ,0x1198,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UDS_W_Slot>,
               InternalVTableHelperCtorCaller<UDS_W_Slot>,local_res8,UDS_UserWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_Slot.InnerSingleton;
}

// StaticRegisterNativesUDS_W_Slot @ 14b790bf0

void __cdecl UDS_W_Slot::StaticRegisterNativesUDS_W_Slot(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_W_Slot_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnOperationDrop @ 14b7924b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_W_Slot::execOnOperationDrop(UObject *param_1,FFrame *param_2,void *param_3)

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
  OnOperationDrop((UDS_W_Slot *)param_1,local_res10);
  return;
}

// UDS_W_Slot @ 14bce5820

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_W_Slot * __thiscall UDS_W_Slot::UDS_W_Slot(UDS_W_Slot *this,FObjectInitializer *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  (this->DragVisualClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  (this->EventKeyDown).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventKeyDown).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventKeyDown).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventKeyDown).KeyEvent);
  (this->EventKeyUp).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventKeyUp).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventKeyUp).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventKeyUp).KeyEvent);
  (this->EventMouseButtonUp).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseButtonUp).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseButtonUp).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseButtonUp).KeyEvent);
  (this->EventMouseButtonDown).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseButtonDown).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseButtonDown).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseButtonDown).KeyEvent);
  (this->EventMouseButtonDoubleClick).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseButtonDoubleClick).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseButtonDoubleClick).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseButtonDoubleClick).KeyEvent);
  (this->EventMouseEnter).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseEnter).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseEnter).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseEnter).KeyEvent);
  (this->EventMouseLeave).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseLeave).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseLeave).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseLeave).KeyEvent);
  *(undefined1 *)&(this->EventOnDragDetected)._padding_ = 0;
  (this->EventOnDragDetected).DragDropOperation.field0_0x0.DebugPtr = (UDragDropOperation *)0x0;
  FPointerEvent::FPointerEvent(&(this->EventOnDragDetected).PointerEvent);
  (this->EventOnDragDetected).DragCanceled = false;
  *(undefined1 *)&(this->EventOnDrop)._padding_ = 0;
  (this->EventOnDrop).DragDropOperation.field0_0x0.DebugPtr = (UDragDropOperation *)0x0;
  FPointerEvent::FPointerEvent(&(this->EventOnDrop).PointerEvent);
  (this->EventOnDrop).DragCanceled = false;
  *(undefined1 *)&(this->EventOnDragCancelled)._padding_ = 0;
  (this->EventOnDragCancelled).DragDropOperation.field0_0x0.DebugPtr = (UDragDropOperation *)0x0;
  FPointerEvent::FPointerEvent(&(this->EventOnDragCancelled).PointerEvent);
  (this->EventOnDragCancelled).DragCanceled = false;
  this->IsHoverSlowdown = true;
  (this->SlotInfo).SlotInfo.Object = (FDS_SlotInfoBase *)0x0;
  (this->SlotInfo).SlotInfo.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// CustomDetectDrag @ 14bcef800

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UDS_W_Slot::CustomDetectDrag
          (UDS_W_Slot *this,FReply *__return_storage_ptr__,FPointerEvent *param_1,UWidget *param_2,
          FKey *param_3)

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
        goto LAB_14bcef9d5;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_288.SharedReferenceCount.ReferenceController);
    }
    FReply::~FReply(&local_248);
  }
  FReply::FReply(__return_storage_ptr__,false);
LAB_14bcef9d5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->KeyDetails).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// NativeConstruct @ 14bd07410

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_Slot::NativeConstruct(UDS_W_Slot *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SWidget *pSVar2;
  TSharedRef<SWidget,1> *pTVar3;
  FName *pFVar4;
  FName local_res8;
  TSharedRef<SWidget,1> local_18;
  
  UDS_UserWidget::NativeConstruct((UDS_UserWidget *)this);
  if (this->IsHoverSlowdown == true) {
    pTVar3 = UWidget::TakeWidget((UWidget *)this,&local_18);
    pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
    pSVar2 = pTVar3->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    if (pSVar2 != (SWidget *)0x0) {
      pFVar4 = ::FName::FName(&local_res8,"Slot");
      pSVar2->Tag = *pFVar4;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  return;
}

// NativeDestruct @ 14bd07860

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_Slot::NativeDestruct(UDS_W_Slot *this)

{
  bool bVar1;
  UObject *pUVar2;
  ADS_PlayerController *this_00;
  FWeakObjectPtr local_res8 [4];
  
  if (this->IsHoverSlowdown == true) {
    ADS_PlayerController::GetPlayerController();
    bVar1 = FWeakObjectPtr::IsValid(local_res8);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(local_res8);
      if (pUVar2[0x3d].field_0x20 == '\x02') {
        this_00 = (ADS_PlayerController *)FWeakObjectPtr::Get(local_res8);
        ADS_PlayerController::SetCursorShape(this_00,Default);
      }
    }
  }
  UDS_UserWidget::NativeDestruct((UDS_UserWidget *)this);
  return;
}

// NativeOnDragCancelled @ 14bd07a80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_Slot::NativeOnDragCancelled
          (UDS_W_Slot *this,FDragDropEvent *param_1,UDragDropOperation *param_2)

{
  FFieldId local_18;
  
  UUserWidget::NativeOnDragCancelled((UUserWidget *)this,param_1,param_2);
  local_18.FieldName = FFieldNotificationClassDescriptor::EventOnDragCancelled.FieldName;
  local_18.BitNumber = FFieldNotificationClassDescriptor::EventOnDragCancelled.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
  return;
}

// NativeOnDragDetected @ 14bd08140

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_Slot::NativeOnDragDetected
          (UDS_W_Slot *this,FGeometry *param_1,FPointerEvent *param_2,UDragDropOperation **param_3)

{
  FDS_SlotInfoBase *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  char cVar3;
  bool bVar4;
  UObject *pUVar5;
  UDS_W_DragDropOperation *pUVar6;
  FWeakObjectPtr local_res8;
  UClass *local_50;
  UDS_W_DragSlotVisual *local_48 [2];
  FFieldId local_38;
  FDS_SlotInfoBase *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  UUserWidget::NativeOnDragDetected((UUserWidget *)this,param_1,param_2,param_3);
  pFVar1 = (this->SlotInfo).SlotInfo.Object;
  if ((pFVar1 != (FDS_SlotInfoBase *)0x0) &&
     (cVar3 = (**(code **)(pFVar1->_padding_ + 8))(), cVar3 != '\0')) {
    local_50 = (this->DragVisualClass).Class.field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_50 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_50);
    }
    local_48[0] = CreateWidget<UDS_W_DragSlotVisual,UDS_W_Slot_*>
                            (this,(TSubclassOf<UUserWidget>)&local_50,(FName)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_48[0] != (UDS_W_DragSlotVisual *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_48[0]);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_48[0] != (UDS_W_DragSlotVisual *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_48[0]);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_48);
    bVar4 = TWeakObjectPtr<UDS_W_DragSlotVisual,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_W_DragSlotVisual,FWeakObjectPtr> *)&local_res8,
                       (void *)0x0);
    if (!bVar4) {
      pFVar1 = (this->SlotInfo).SlotInfo.Object;
      if (pFVar1 != (FDS_SlotInfoBase *)0x0) {
        (**(code **)(pFVar1->_padding_ + 0x18))(pFVar1,local_res8);
      }
      pUVar5 = GetTransientPackageAsObject();
      pUVar6 = NewObject<UDS_W_DragDropOperation>(pUVar5);
      pUVar5 = FWeakObjectPtr::Get(&local_res8);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      pUVar6->_padding_ = (longlong)pUVar5;
      *(undefined1 *)&pUVar6->_padding_ = 5;
      pUVar6->ShiftDown = (param_2->_padding_ & 3) != 0;
      pTVar2 = (this->SlotInfo).SlotInfo.SharedReferenceCount.ReferenceController;
      pFVar1 = (this->SlotInfo).SlotInfo.Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_28 = (pUVar6->SlotInfo).SlotInfo.Object;
      pTStack_20 = (pUVar6->SlotInfo).SlotInfo.SharedReferenceCount.ReferenceController;
      (pUVar6->SlotInfo).SlotInfo.Object = pFVar1;
      (pUVar6->SlotInfo).SlotInfo.SharedReferenceCount.ReferenceController = pTVar2;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_20);
      *param_3 = (UDragDropOperation *)pUVar6;
      FPointerEvent::operator=(&(this->EventOnDragDetected).PointerEvent,param_2);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      (this->EventOnDragDetected).DragDropOperation.field0_0x0.DebugPtr =
           (UDragDropOperation *)pUVar6;
      local_38.FieldName = FFieldNotificationClassDescriptor::EventOnDragDetected.FieldName;
      local_38.BitNumber = FFieldNotificationClassDescriptor::EventOnDragDetected.BitNumber;
      UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_38);
    }
  }
  return;
}

// NativeOnDrop @ 14bd083a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_W_Slot::NativeOnDrop
          (UDS_W_Slot *this,FGeometry *param_1,FDragDropEvent *param_2,UDragDropOperation *param_3)

{
  int iVar1;
  UClass *pUVar2;
  FFieldId local_18;
  
  UUserWidget::NativeOnDrop((UUserWidget *)this,param_1,param_2,param_3);
  if (param_3 != (UDragDropOperation *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_W_DragDropOperation_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if (((iVar1 <= *(int *)(param_3->_padding_ + 0x38)) &&
        ((longlong *)
         *(undefined1 **)(*(longlong *)(param_3->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar2->_padding_)) && (((uint)param_3->_padding_ >> 0x1e & 1) == 0)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_3);
      }
      (this->EventOnDrop).DragDropOperation.field0_0x0.DebugPtr = param_3;
      local_18.FieldName = FFieldNotificationClassDescriptor::EventOnDrop.FieldName;
      local_18.BitNumber = FFieldNotificationClassDescriptor::EventOnDrop.BitNumber;
      UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
    }
  }
  return false;
}

// NativeOnKeyChar @ 14bd08440

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UDS_W_Slot::NativeOnKeyChar
          (UDS_W_Slot *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FCharacterEvent *param_2)

{
  UUserWidget::NativeOnKeyChar((UUserWidget *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// NativeOnKeyDown @ 14bd08460

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UDS_W_Slot::NativeOnKeyDown
          (UDS_W_Slot *this,FReply *__return_storage_ptr__,FGeometry *param_1,FKeyEvent *param_2)

{
  FFieldId local_18;
  
  FGeometry::operator=(&(this->EventKeyDown).Geometry,param_1);
  FKeyEvent::operator=(&(this->EventKeyDown).KeyEvent,param_2);
  local_18.FieldName = FFieldNotificationClassDescriptor::EventKeyDown.FieldName;
  local_18.BitNumber = FFieldNotificationClassDescriptor::EventKeyDown.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
  UDS_UserWidget::NativeOnKeyDown((UDS_UserWidget *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// NativeOnKeyUp @ 14bd08500

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UDS_W_Slot::NativeOnKeyUp
          (UDS_W_Slot *this,FReply *__return_storage_ptr__,FGeometry *param_1,FKeyEvent *param_2)

{
  FFieldId local_18;
  
  FGeometry::operator=(&(this->EventKeyDown).Geometry,param_1);
  FKeyEvent::operator=(&(this->EventKeyUp).KeyEvent,param_2);
  local_18.FieldName = FFieldNotificationClassDescriptor::EventKeyUp.FieldName;
  local_18.BitNumber = FFieldNotificationClassDescriptor::EventKeyUp.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
  UUserWidget::NativeOnKeyUp((UUserWidget *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// NativeOnMouseButtonDoubleClick @ 14bd085a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UDS_W_Slot::NativeOnMouseButtonDoubleClick
          (UDS_W_Slot *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2
          )

{
  FFieldId local_18;
  
  FPointerEvent::operator=(&(this->EventMouseButtonDoubleClick).PointerEvent,param_2);
  local_18.FieldName = FFieldNotificationClassDescriptor::EventMouseButtonDoubleClick.FieldName;
  local_18.BitNumber = FFieldNotificationClassDescriptor::EventMouseButtonDoubleClick.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// NativeOnMouseButtonDown @ 14bd089c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UDS_W_Slot::NativeOnMouseButtonDown
          (UDS_W_Slot *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2
          )

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 local_28 [16];
  TReferenceControllerBase<1> *local_18;
  
  FPointerEvent::operator=(&(this->EventMouseButtonDown).PointerEvent,param_2);
  local_28._0_4_ =
       FFieldNotificationClassDescriptor::EventMouseButtonDown.FieldName.ComparisonIndex.Value;
  local_28._4_4_ = FFieldNotificationClassDescriptor::EventMouseButtonDown.FieldName.Number;
  local_28._8_4_ = FFieldNotificationClassDescriptor::EventMouseButtonDown.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,(FFieldId *)local_28);
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
    pcVar3 = *(code **)(this->_padding_ + 0x518);
    local_28._0_4_ = EKeys::LeftMouseButton.KeyName.ComparisonIndex.Value;
    local_28._4_4_ = EKeys::LeftMouseButton.KeyName.Number;
    local_28._8_8_ = EKeys::LeftMouseButton.KeyDetails.Object;
    local_18 = EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController;
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
    (*pcVar3)(this,__return_storage_ptr__,param_2,this,local_28);
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
    FReply::FReply(__return_storage_ptr__,bVar4);
  }
  return __return_storage_ptr__;
}

// NativeOnMouseButtonUp @ 14bd08eb0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UDS_W_Slot::NativeOnMouseButtonUp
          (UDS_W_Slot *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2
          )

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  bool bVar3;
  FFieldId local_18;
  
  (this->EventMouseButtonUp).TargetWidget = (UDS_UserWidget *)this;
  FPointerEvent::operator=(&(this->EventMouseButtonUp).PointerEvent,param_2);
  local_18.FieldName = FFieldNotificationClassDescriptor::EventMouseButtonUp.FieldName;
  local_18.BitNumber = FFieldNotificationClassDescriptor::EventMouseButtonUp.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
  pTVar1 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar2 = (param_2->EffectingButton).KeyName;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar3 = FVar2 == EKeys::RightMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FReply::FReply(__return_storage_ptr__,bVar3);
  return __return_storage_ptr__;
}

// NativeOnMouseEnter @ 14bd091c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_Slot::NativeOnMouseEnter(UDS_W_Slot *this,FGeometry *param_1,FPointerEvent *param_2)

{
  bool bVar1;
  ADS_PlayerController *this_00;
  FWeakObjectPtr local_res8;
  FFieldId local_18;
  
  UUserWidget::NativeOnMouseEnter((UUserWidget *)this,param_1,param_2);
  (this->EventMouseEnter).TargetWidget = (UDS_UserWidget *)this;
  FGeometry::operator=(&(this->EventMouseEnter).Geometry,param_1);
  FPointerEvent::operator=(&(this->EventMouseEnter).PointerEvent,param_2);
  local_18.FieldName = FFieldNotificationClassDescriptor::EventMouseEnter.FieldName;
  local_18.BitNumber = FFieldNotificationClassDescriptor::EventMouseEnter.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
  bVar1 = UUserWidget::IsFocusable((UUserWidget *)this);
  if (bVar1) {
    UWidget::SetKeyboardFocus((UWidget *)this);
  }
  if (this->IsHoverSlowdown == true) {
    ADS_PlayerController::GetPlayerController();
    bVar1 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar1) {
      this_00 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_res8);
      ADS_PlayerController::SetCursorShape(this_00,Hovered_Button);
    }
  }
  return;
}

// NativeOnMouseLeave @ 14bd094b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_Slot::NativeOnMouseLeave(UDS_W_Slot *this,FPointerEvent *param_1)

{
  bool bVar1;
  ADS_PlayerController *this_00;
  FWeakObjectPtr local_res8;
  FFieldId local_18;
  
  UUserWidget::NativeOnMouseLeave((UUserWidget *)this,param_1);
  FPointerEvent::operator=(&(this->EventMouseLeave).PointerEvent,param_1);
  local_18.FieldName = FFieldNotificationClassDescriptor::EventMouseLeave.FieldName;
  local_18.BitNumber = FFieldNotificationClassDescriptor::EventMouseLeave.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
  if (this->IsHoverSlowdown == true) {
    ADS_PlayerController::GetPlayerController();
    bVar1 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar1) {
      this_00 = (ADS_PlayerController *)FWeakObjectPtr::Get(&local_res8);
      ADS_PlayerController::SetCursorShape(this_00,Default);
    }
  }
  return;
}

// NativeOnPreviewKeyDown @ 14bd09630

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UDS_W_Slot::NativeOnPreviewKeyDown
          (UDS_W_Slot *this,FReply *__return_storage_ptr__,FGeometry *param_1,FKeyEvent *param_2)

{
  UUserWidget::NativeOnPreviewKeyDown((UUserWidget *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnDoubleClick @ 14bd0ce50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_Slot::OnDoubleClick(UDS_W_Slot *this)

{
  FFieldId local_18 [2];
  
  local_18[0].FieldName = FFieldNotificationClassDescriptor::EventMouseButtonDoubleClick.FieldName;
  local_18[0].BitNumber = FFieldNotificationClassDescriptor::EventMouseButtonDoubleClick.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,local_18);
  return;
}

// OnEventMouseButtonDoubleClick @ 14bd0d050

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_Slot::OnEventMouseButtonDoubleClick(UDS_W_Slot *this,FPointerEvent *param_1)

{
  FFieldId local_18;
  
  FPointerEvent::operator=(&(this->EventMouseButtonDoubleClick).PointerEvent,param_1);
  local_18.FieldName = FFieldNotificationClassDescriptor::EventMouseButtonDoubleClick.FieldName;
  local_18.BitNumber = FFieldNotificationClassDescriptor::EventMouseButtonDoubleClick.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
  return;
}

// OnEventMouseButtonDown @ 14bd0d190

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_Slot::OnEventMouseButtonDown(UDS_W_Slot *this,FPointerEvent *param_1)

{
  FFieldId local_18;
  
  FPointerEvent::operator=(&(this->EventMouseButtonDown).PointerEvent,param_1);
  local_18.FieldName = FFieldNotificationClassDescriptor::EventMouseButtonDown.FieldName;
  local_18.BitNumber = FFieldNotificationClassDescriptor::EventMouseButtonDown.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
  return;
}

// OnEventMouseButtonUp @ 14bd0d320

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_Slot::OnEventMouseButtonUp(UDS_W_Slot *this,FPointerEvent *param_1)

{
  FFieldId local_18;
  
  (this->EventMouseButtonUp).TargetWidget = (UDS_UserWidget *)this;
  FPointerEvent::operator=(&(this->EventMouseButtonUp).PointerEvent,param_1);
  local_18.FieldName = FFieldNotificationClassDescriptor::EventMouseButtonUp.FieldName;
  local_18.BitNumber = FFieldNotificationClassDescriptor::EventMouseButtonUp.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
  return;
}

// OnOperationDrop @ 14bd0fb70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_Slot::OnOperationDrop(UDS_W_Slot *this,UDragDropOperation *param_1)

{
  FFieldId local_18 [2];
  
  local_18[0].FieldName = FFieldNotificationClassDescriptor::EventOnDrop.FieldName;
  local_18[0].BitNumber = FFieldNotificationClassDescriptor::EventOnDrop.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,local_18);
  return;
}

