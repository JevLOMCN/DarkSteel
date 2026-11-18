// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 20

// StaticClass @ 14b77cba0

UClass * __cdecl UDS_W_MenuInfoSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_MenuInfoSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_MenuInfoSlot",
               &Z_Registration_Info_UClass_UDS_W_MenuInfoSlot.InnerSingleton,
               StaticRegisterNativesUDS_W_MenuInfoSlot,0xbb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_W_MenuInfoSlot>,
               InternalVTableHelperCtorCaller<UDS_W_MenuInfoSlot>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_MenuInfoSlot.InnerSingleton;
}

// UDS_W_MenuInfoSlot @ 14b7827c0

UDS_W_MenuInfoSlot * __thiscall
UDS_W_MenuInfoSlot::UDS_W_MenuInfoSlot(UDS_W_MenuInfoSlot *this,FVTableHelper *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  (this->DragVisualClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->EventMouseButtonDown);
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->EventMouseButtonUp);
  FDS_WidgetPointerEventField::FDS_WidgetPointerEventField(&this->EventMouseButtonDoubleClick);
  this->EventMouseEnter = false;
  this->EventMouseLeave = false;
  this->EventOnDrag = false;
  this->EventDragCancelled = false;
  (this->EventOperationDrop).bIsActivate = false;
  return this;
}

// ~UDS_W_MenuInfoSlot @ 14b783460

void __thiscall UDS_W_MenuInfoSlot::~UDS_W_MenuInfoSlot(UDS_W_MenuInfoSlot *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  FKeyEvent::~FKeyEvent(&(this->EventMouseButtonDoubleClick).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseButtonDoubleClick).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventMouseButtonUp).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseButtonUp).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventMouseButtonDown).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseButtonDown).PointerEvent);
  UDS_UserWidget::~UDS_UserWidget((UDS_UserWidget *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b7852f0

IClassDescriptor * __thiscall
UDS_W_MenuInfoSlot::GetFieldNotificationDescriptor(UDS_W_MenuInfoSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_W_MenuInfoSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b786260

UClass * __cdecl UDS_W_MenuInfoSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_MenuInfoSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_MenuInfoSlot",
               &Z_Registration_Info_UClass_UDS_W_MenuInfoSlot.InnerSingleton,
               StaticRegisterNativesUDS_W_MenuInfoSlot,0xbb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_W_MenuInfoSlot>,
               InternalVTableHelperCtorCaller<UDS_W_MenuInfoSlot>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_MenuInfoSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_W_MenuInfoSlot @ 14b786610

void __cdecl UDS_W_MenuInfoSlot::StaticRegisterNativesUDS_W_MenuInfoSlot(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_W_MenuInfoSlot_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnOperationDrop @ 14b787bf0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_W_MenuInfoSlot::execOnOperationDrop(UObject *param_1,FFrame *param_2,void *param_3)

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
  OnOperationDrop((UDS_W_MenuInfoSlot *)param_1,local_res10);
  return;
}

// UDS_W_MenuInfoSlot @ 14bce54f0

UDS_W_MenuInfoSlot * __thiscall
UDS_W_MenuInfoSlot::UDS_W_MenuInfoSlot(UDS_W_MenuInfoSlot *this,FObjectInitializer *param_1)

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
  (this->EventMouseButtonDoubleClick).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseButtonDoubleClick).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseButtonDoubleClick).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseButtonDoubleClick).KeyEvent);
  this->EventMouseEnter = false;
  this->EventMouseLeave = false;
  this->EventOnDrag = false;
  this->EventDragCancelled = false;
  (this->EventOperationDrop).bIsActivate = false;
  return this;
}

// CustomDetectDrag @ 14bcef200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
UDS_W_MenuInfoSlot::CustomDetectDrag
          (UDS_W_MenuInfoSlot *this,FReply *__return_storage_ptr__,FPointerEvent *param_1,
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
        goto LAB_14bcef3d5;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_288.SharedReferenceCount.ReferenceController);
    }
    FReply::~FReply(&local_248);
  }
  FReply::FReply(__return_storage_ptr__,false);
LAB_14bcef3d5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->KeyDetails).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// NativeOnDragCancelled @ 14bd07a50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_MenuInfoSlot::NativeOnDragCancelled
          (UDS_W_MenuInfoSlot *this,FDragDropEvent *param_1,UDragDropOperation *param_2)

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

// NativeOnDragDetected @ 14bd07ac0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UDS_W_MenuInfoSlot::NativeOnDragDetected
          (UDS_W_MenuInfoSlot *this,FGeometry *param_1,FPointerEvent *param_2,
          UDragDropOperation **param_3)

{
  code *pcVar1;
  bool bVar2;
  FDS_ContentsTotalMenuTableRow *pFVar3;
  UDS_W_DragSlotVisual *pUVar4;
  UObject *pUVar5;
  UDS_W_DragDropOperation *pUVar6;
  char *pcVar7;
  UFunction *pUVar8;
  char *pcVar9;
  <lambda_1> local_res8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_e8;
  FWeakObjectPtr local_e0;
  FName local_d8;
  FName local_d0;
  FName local_c8;
  UClass *local_c0;
  FName local_b8;
  UDS_W_MenuInfoSlot *local_b0;
  FName *local_a8 [2];
  FFieldId local_98;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_88;
  FDestructionSentinel local_78;
  FReadAccessScope local_60;
  FReadAccessScope local_48;
  
  UUserWidget::NativeOnDragDetected((UUserWidget *)this,param_1,param_2,param_3);
  pFVar3 = FDS_ContentsTotalMenuTableRow::GetRef(this->MenuSlotInfo,true);
  local_c0 = (this->DragVisualClass).Class.field0_0x0.DebugPtr;
  local_d0.ComparisonIndex.Value = 0;
  local_d0.Number = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_c0 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_c0);
  }
  pUVar4 = CreateWidget<UDS_W_DragSlotVisual,UDS_W_MenuInfoSlot_*>
                     (this,(TSubclassOf<UUserWidget>)&local_c0,local_d0);
  if (pUVar4 == (UDS_W_DragSlotVisual *)0x0) {
    return;
  }
  if (pUVar4->Img_GradeBG != (UDS_CommonLazyImage *)0x0) {
    pUVar4->Img_GradeBG->IconID = 0;
  }
  if (pUVar4->Img_Icon != (UDS_CommonLazyImage *)0x0) {
    pUVar4->Img_Icon->IconID = pFVar3->ID_Icon;
  }
  pUVar5 = GetTransientPackageAsObject();
  pUVar6 = NewObject<UDS_W_DragDropOperation>(pUVar5);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  pUVar6->_padding_ = (longlong)pUVar4;
  *(undefined1 *)&pUVar6->_padding_ = 0;
  pcVar7 = strstr("&UDS_W_MenuInfoSlot::OnOperationDrop","::");
  if (pcVar7 == (char *)0x0) {
LAB_14bd07bdb:
    pcVar9 = &DAT_00000002;
LAB_14bd07be0:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    do {
      pcVar9 = pcVar7;
      pcVar7 = strstr(pcVar9 + 1,"::");
    } while (pcVar7 != (char *)0x0);
    if (pcVar9 == (char *)0x0) goto LAB_14bd07bdb;
    pcVar9 = pcVar9 + 2;
    if (*pcVar9 == '0') goto LAB_14bd07be0;
  }
  ::FName::FName(&local_b8,pcVar9);
  local_c8 = local_b8;
  local_e8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_e0.ObjectIndex = 0;
  local_e0.ObjectSerialNumber = 0;
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  local_b0 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_W_MenuInfoSlot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_e0,(FObjectPtr)&local_b0);
  local_d8 = local_c8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_e8,&local_60);
  if ((local_d8 == (FName)0x0) ||
     (pUVar5 = FWeakObjectPtr::Get(&local_e0), pUVar5 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_60);
  }
  else {
    pUVar8 = UObject::FindFunction(pUVar5,local_d8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_60);
    if (pUVar8 != (UFunction *)0x0) goto LAB_14bd07cc3;
  }
  local_a8[0] = &local_c8;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDragDropOperation_*>::
  __Internal_BindDynamic<UDS_W_MenuInfoSlot>'::__l2::<lambda_1>::operator()(local_a8);
LAB_14bd07cc3:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_e8,&local_48);
  local_88.Object = local_e0;
  local_88.FunctionName = local_d8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar6->_padding_,
             (FWriteAccessScope *)&local_78);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar6->_padding_,local_res8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar6->_padding_,&local_88);
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_e8.AccessDetector);
  *param_3 = (UDragDropOperation *)pUVar6;
  local_98.FieldName = FFieldNotificationClassDescriptor::EventOnDrag.FieldName;
  local_98.BitNumber = FFieldNotificationClassDescriptor::EventOnDrag.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_98);
  return;
}

// NativeOnDrop @ 14bd08360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_W_MenuInfoSlot::NativeOnDrop
          (UDS_W_MenuInfoSlot *this,FGeometry *param_1,FDragDropEvent *param_2,
          UDragDropOperation *param_3)

{
  char cVar1;
  FPointerEvent *this_00;
  UFunction *pUVar2;
  undefined1 auStack_1e8 [32];
  FGeometry FStack_1c8;
  FPointerEvent FStack_188;
  FGeometry FStack_108;
  FPointerEvent FStack_d0;
  UDragDropOperation *pUStack_50;
  char cStack_48;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  this_00 = FPointerEvent::FPointerEvent(&FStack_188,(FPointerEvent *)param_2);
  FStack_1c8.Size = param_1->Size;
  FStack_1c8._8_8_ = *(undefined8 *)&param_1->Scale;
  FStack_1c8._16_8_ = *(undefined8 *)((longlong)&(param_1->AbsolutePosition).field0_0x0 + 4);
  FStack_1c8._24_8_ = *(undefined8 *)((longlong)&(param_1->Position).field0_0x0 + 4);
  FStack_1c8.AccumulatedRenderTransform.M.M._4_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[0] + 1);
  FStack_1c8.AccumulatedRenderTransform._12_8_ =
       *(undefined8 *)((param_1->AccumulatedRenderTransform).M.M[1] + 1);
  FStack_1c8._48_8_ =
       *(undefined8 *)((longlong)&(param_1->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
  FGeometry::FGeometry(&FStack_108);
  FPointerEvent::FPointerEvent(&FStack_d0);
  cStack_48 = '\0';
  FGeometry::operator=(&FStack_108,&FStack_1c8);
  FPointerEvent::operator=(&FStack_d0,this_00);
  pUStack_50 = param_3;
  pUVar2 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_OnDrop);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar2,&FStack_108);
  cVar1 = cStack_48;
  FPointerEvent::~FPointerEvent(&FStack_d0);
  FPointerEvent::~FPointerEvent(this_00);
  return cVar1 != '\0';
}

// NativeOnMouseButtonDown @ 14bd086c0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UDS_W_MenuInfoSlot::NativeOnMouseButtonDown
          (UDS_W_MenuInfoSlot *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  FName local_d8;
  FKeyDetails *local_d0;
  TReferenceControllerBase<1> *local_c8;
  FReply local_c0;
  
  UCommonUserWidget::NativeOnMouseButtonDown((UCommonUserWidget *)this,&local_c0,param_1,param_2);
  FReply::~FReply(&local_c0);
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
    this->bIsButtonDown = true;
    pcVar3 = *(code **)(this->_padding_ + 0x518);
    local_d8 = EKeys::LeftMouseButton.KeyName;
    local_d0 = EKeys::LeftMouseButton.KeyDetails.Object;
    local_c8 = EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController;
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
    (*pcVar3)(this,__return_storage_ptr__,param_2,this,&local_d8);
  }
  else {
    FReply::FReply(__return_storage_ptr__,false);
  }
  return __return_storage_ptr__;
}

// NativeOnMouseButtonUp @ 14bd08ba0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
UDS_W_MenuInfoSlot::NativeOnMouseButtonUp
          (UDS_W_MenuInfoSlot *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  bool bVar3;
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
  bVar3 = FVar2 == EKeys::LeftMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (bVar3) {
    if (this->bIsButtonDown == true) {
      this->bIsButtonDown = false;
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
    bVar3 = FVar2 == EKeys::RightMouseButton.KeyName;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    if (bVar3) {
      bVar3 = true;
      goto LAB_14bd08c3f;
    }
  }
  bVar3 = false;
LAB_14bd08c3f:
  FReply::FReply(__return_storage_ptr__,bVar3);
  return __return_storage_ptr__;
}

// NativeOnMouseEnter @ 14bd090c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_W_MenuInfoSlot::NativeOnMouseEnter
          (UDS_W_MenuInfoSlot *this,FGeometry *param_1,FPointerEvent *param_2)

{
  FFieldId local_18;
  
  UUserWidget::NativeOnMouseEnter((UUserWidget *)this,param_1,param_2);
  local_18.FieldName = FFieldNotificationClassDescriptor::EventMouseEnter.FieldName;
  local_18.BitNumber = FFieldNotificationClassDescriptor::EventMouseEnter.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
  return;
}

// NativeOnMouseLeave @ 14bd093d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_W_MenuInfoSlot::NativeOnMouseLeave(UDS_W_MenuInfoSlot *this,FPointerEvent *param_1)

{
  FFieldId local_18;
  
  UUserWidget::NativeOnMouseLeave((UUserWidget *)this,param_1);
  local_18.FieldName = FFieldNotificationClassDescriptor::EventMouseLeave.FieldName;
  local_18.BitNumber = FFieldNotificationClassDescriptor::EventMouseLeave.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
  return;
}

// OnDoubleClick @ 14bd0cdd0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_MenuInfoSlot::OnDoubleClick(UDS_W_MenuInfoSlot *this)

{
  FFieldId local_18 [2];
  
  local_18[0].FieldName = FFieldNotificationClassDescriptor::EventMouseButtonDoubleClick.FieldName;
  local_18[0].BitNumber = FFieldNotificationClassDescriptor::EventMouseButtonDoubleClick.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,local_18);
  return;
}

// OnEventMouseButtonDown @ 14bd0d0a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_MenuInfoSlot::OnEventMouseButtonDown(UDS_W_MenuInfoSlot *this,FPointerEvent *param_1)

{
  FFieldId local_18;
  
  FPointerEvent::operator=(&(this->EventMouseButtonDown).PointerEvent,param_1);
  local_18.FieldName = FFieldNotificationClassDescriptor::EventMouseButtonDown.FieldName;
  local_18.BitNumber = FFieldNotificationClassDescriptor::EventMouseButtonDown.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
  return;
}

// OnEventMouseButtonUp @ 14bd0d230

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_MenuInfoSlot::OnEventMouseButtonUp(UDS_W_MenuInfoSlot *this,FPointerEvent *param_1)

{
  FFieldId local_18;
  
  FPointerEvent::operator=(&(this->EventMouseButtonUp).PointerEvent,param_1);
  local_18.FieldName = FFieldNotificationClassDescriptor::EventMouseButtonUp.FieldName;
  local_18.BitNumber = FFieldNotificationClassDescriptor::EventMouseButtonUp.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
  return;
}

// OnOperationDrop @ 14bd0fab0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_MenuInfoSlot::OnOperationDrop(UDS_W_MenuInfoSlot *this,UDragDropOperation *param_1)

{
  FFieldId local_18 [2];
  
  local_18[0].FieldName = FFieldNotificationClassDescriptor::EventOperationDrop.FieldName;
  local_18[0].BitNumber = FFieldNotificationClassDescriptor::EventOperationDrop.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,local_18);
  return;
}

