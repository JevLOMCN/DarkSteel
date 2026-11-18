// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 20

// StaticClass @ 14b788770

UClass * __cdecl UDS_W_RingCmdInfoSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_RingCmdInfoSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_RingCmdInfoSlot",
               &Z_Registration_Info_UClass_UDS_W_RingCmdInfoSlot.InnerSingleton,
               StaticRegisterNativesUDS_W_RingCmdInfoSlot,0xdc8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_W_RingCmdInfoSlot>,
               InternalVTableHelperCtorCaller<UDS_W_RingCmdInfoSlot>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_RingCmdInfoSlot.InnerSingleton;
}

// UDS_W_RingCmdInfoSlot @ 14b78cfd0

UDS_W_RingCmdInfoSlot * __thiscall
UDS_W_RingCmdInfoSlot::UDS_W_RingCmdInfoSlot(UDS_W_RingCmdInfoSlot *this,FVTableHelper *param_1)

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
  (this->EventMouseEnter).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseEnter).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseEnter).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseEnter).KeyEvent);
  (this->EventMouseLeave).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseLeave).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseLeave).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseLeave).KeyEvent);
  this->EventOnDrag = false;
  this->EventDragCancelled = false;
  (this->EventOperationDrop).bIsActivate = false;
  (this->SlotInfo).SlotInfo.Object = (FDS_SlotInfoBase *)0x0;
  (this->SlotInfo).SlotInfo.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UDS_W_RingCmdInfoSlot @ 14b78e170

void __thiscall UDS_W_RingCmdInfoSlot::~UDS_W_RingCmdInfoSlot(UDS_W_RingCmdInfoSlot *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SlotInfo).SlotInfo.SharedReferenceCount.ReferenceController);
  FKeyEvent::~FKeyEvent(&(this->EventMouseLeave).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseLeave).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventMouseEnter).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseEnter).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventMouseButtonDoubleClick).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseButtonDoubleClick).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventMouseButtonUp).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseButtonUp).PointerEvent);
  FKeyEvent::~FKeyEvent(&(this->EventMouseButtonDown).KeyEvent);
  FPointerEvent::~FPointerEvent(&(this->EventMouseButtonDown).PointerEvent);
  UDS_UserWidget::~UDS_UserWidget((UDS_UserWidget *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b78fc00

IClassDescriptor * __thiscall
UDS_W_RingCmdInfoSlot::GetFieldNotificationDescriptor(UDS_W_RingCmdInfoSlot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_W_RingCmdInfoSlot::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b790430

UClass * __cdecl UDS_W_RingCmdInfoSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_RingCmdInfoSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_RingCmdInfoSlot",
               &Z_Registration_Info_UClass_UDS_W_RingCmdInfoSlot.InnerSingleton,
               StaticRegisterNativesUDS_W_RingCmdInfoSlot,0xdc8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_W_RingCmdInfoSlot>,
               InternalVTableHelperCtorCaller<UDS_W_RingCmdInfoSlot>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_RingCmdInfoSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_W_RingCmdInfoSlot @ 14b790b60

void __cdecl UDS_W_RingCmdInfoSlot::StaticRegisterNativesUDS_W_RingCmdInfoSlot(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_W_RingCmdInfoSlot_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnOperationDrop @ 14b792390

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_W_RingCmdInfoSlot::execOnOperationDrop(UObject *param_1,FFrame *param_2,void *param_3)

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
  OnOperationDrop((UDS_W_RingCmdInfoSlot *)param_1,local_res10);
  return;
}

// UDS_W_RingCmdInfoSlot @ 14bce55e0

UDS_W_RingCmdInfoSlot * __thiscall
UDS_W_RingCmdInfoSlot::UDS_W_RingCmdInfoSlot
          (UDS_W_RingCmdInfoSlot *this,FObjectInitializer *param_1)

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
  (this->EventMouseEnter).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseEnter).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseEnter).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseEnter).KeyEvent);
  (this->EventMouseLeave).TargetWidget = (UDS_UserWidget *)0x0;
  FGeometry::FGeometry(&(this->EventMouseLeave).Geometry);
  FPointerEvent::FPointerEvent(&(this->EventMouseLeave).PointerEvent);
  FKeyEvent::FKeyEvent(&(this->EventMouseLeave).KeyEvent);
  this->EventOnDrag = false;
  this->EventDragCancelled = false;
  (this->EventOperationDrop).bIsActivate = false;
  (this->SlotInfo).SlotInfo.Object = (FDS_SlotInfoBase *)0x0;
  (this->SlotInfo).SlotInfo.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// CustomDetectDrag @ 14bcef400

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
UDS_W_RingCmdInfoSlot::CustomDetectDrag
          (UDS_W_RingCmdInfoSlot *this,FReply *__return_storage_ptr__,FPointerEvent *param_1,
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
        goto LAB_14bcef5d5;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_288.SharedReferenceCount.ReferenceController);
    }
    FReply::~FReply(&local_248);
  }
  FReply::FReply(__return_storage_ptr__,false);
LAB_14bcef5d5:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->KeyDetails).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// NativeOnDragCancelled @ 14bd07a60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_RingCmdInfoSlot::NativeOnDragCancelled
          (UDS_W_RingCmdInfoSlot *this,FDragDropEvent *param_1,UDragDropOperation *param_2)

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

// NativeOnDragDetected @ 14bd07d90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UDS_W_RingCmdInfoSlot::NativeOnDragDetected
          (UDS_W_RingCmdInfoSlot *this,FGeometry *param_1,FPointerEvent *param_2,
          UDragDropOperation **param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FDS_SlotInfoBase *pFVar2;
  code *pcVar3;
  bool bVar4;
  UDS_W_DragSlotVisual *pUVar5;
  UObject *pUVar6;
  UDS_W_DragDropOperation *pUVar7;
  char *pcVar8;
  UFunction *pUVar9;
  char *pcVar10;
  <lambda_1> local_res8 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_108;
  FWeakObjectPtr local_100;
  FName local_f8;
  FWeakObjectPtr local_f0;
  FName local_e8;
  FName local_e0;
  UClass *local_d8;
  FName local_d0;
  UDS_W_RingCmdInfoSlot *local_c8;
  FName *local_c0;
  UDS_W_DragSlotVisual *local_b8 [2];
  FFieldId local_a8;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_98;
  FDestructionSentinel local_88;
  FDS_SlotInfoBase *local_70;
  TReferenceControllerBase<1> *pTStack_68;
  FReadAccessScope local_60;
  FReadAccessScope local_48;
  
  UUserWidget::NativeOnDragDetected((UUserWidget *)this,param_1,param_2,param_3);
  if ((this->SlotInfo).SlotInfo.Object == (FDS_SlotInfoBase *)0x0) {
    return;
  }
  local_e8.ComparisonIndex.Value = 0;
  local_e8.Number = 0;
  local_d8 = (this->DragVisualClass).Class.field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_d8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_d8);
  }
  pUVar5 = CreateWidget<UDS_W_DragSlotVisual,UDS_W_RingCmdInfoSlot_*>
                     (this,(TSubclassOf<UUserWidget>)&local_d8,local_e8);
  if (pUVar5 == (UDS_W_DragSlotVisual *)0x0) {
    return;
  }
  pUVar6 = GetTransientPackageAsObject();
  pUVar7 = NewObject<UDS_W_DragDropOperation>(pUVar6);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pUVar7->_padding_ = (longlong)pUVar5;
  *(undefined1 *)&pUVar7->_padding_ = 0;
  pcVar8 = strstr("&UDS_W_RingCmdInfoSlot::OnOperationDrop","::");
  if (pcVar8 == (char *)0x0) {
LAB_14bd07e9b:
    pcVar10 = &DAT_00000002;
LAB_14bd07ea0:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    do {
      pcVar10 = pcVar8;
      pcVar8 = strstr(pcVar10 + 1,"::");
    } while (pcVar8 != (char *)0x0);
    if (pcVar10 == (char *)0x0) goto LAB_14bd07e9b;
    pcVar10 = pcVar10 + 2;
    if (*pcVar10 == '0') goto LAB_14bd07ea0;
  }
  ::FName::FName(&local_d0,pcVar10);
  local_108.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_100.ObjectIndex = 0;
  local_100.ObjectSerialNumber = 0;
  local_f8.ComparisonIndex.Value = 0;
  local_f8.Number = 0;
  local_e0 = local_d0;
  local_c8 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_W_RingCmdInfoSlot *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_100,(FObjectPtr)&local_c8);
  local_f8 = local_e0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_108,&local_60);
  if ((local_f8 == (FName)0x0) ||
     (pUVar6 = FWeakObjectPtr::Get(&local_100), pUVar6 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_60);
  }
  else {
    pUVar9 = UObject::FindFunction(pUVar6,local_f8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_60);
    if (pUVar9 != (UFunction *)0x0) goto LAB_14bd07f92;
  }
  local_c0 = &local_e0;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,UDragDropOperation_*>::
  __Internal_BindDynamic<UDS_W_RingCmdInfoSlot>'::__l2::<lambda_1>::operator()(&local_c0);
LAB_14bd07f92:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_108,&local_48);
  local_98.Object = local_100;
  local_98.FunctionName = local_f8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar7->_padding_,
             (FWriteAccessScope *)&local_88);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)&pUVar7->_padding_,local_res8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&pUVar7->_padding_,&local_98);
  if (local_88.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_108.AccessDetector);
  pTVar1 = (this->SlotInfo).SlotInfo.SharedReferenceCount.ReferenceController;
  pFVar2 = (this->SlotInfo).SlotInfo.Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_70 = (pUVar7->SlotInfo).SlotInfo.Object;
  pTStack_68 = (pUVar7->SlotInfo).SlotInfo.SharedReferenceCount.ReferenceController;
  (pUVar7->SlotInfo).SlotInfo.Object = pFVar2;
  (pUVar7->SlotInfo).SlotInfo.SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_68);
  if (((this->SlotInfo).SlotInfo.Object == (FDS_SlotInfoBase *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->SlotInfo).SlotInfo.Object;
  pcVar3 = *(code **)(pFVar2->_padding_ + 0x18);
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  local_f0.ObjectIndex = 0;
  local_f0.ObjectSerialNumber = 0;
  local_b8[0] = pUVar5;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  FWeakObjectPtr::operator=(&local_f0,(FObjectPtr)local_b8);
  (*pcVar3)(pFVar2,local_f0);
  *param_3 = (UDragDropOperation *)pUVar7;
  local_a8.FieldName = FFieldNotificationClassDescriptor::EventOnDrag.FieldName;
  local_a8.BitNumber = FFieldNotificationClassDescriptor::EventOnDrag.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_a8);
  return;
}

// NativeOnDrop @ 14bd08370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_W_RingCmdInfoSlot::NativeOnDrop
          (UDS_W_RingCmdInfoSlot *this,FGeometry *param_1,FDragDropEvent *param_2,
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

// NativeOnMouseButtonDown @ 14bd087a0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UDS_W_RingCmdInfoSlot::NativeOnMouseButtonDown
          (UDS_W_RingCmdInfoSlot *this,FReply *__return_storage_ptr__,FGeometry *param_1,
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

// NativeOnMouseButtonUp @ 14bd08ca0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
UDS_W_RingCmdInfoSlot::NativeOnMouseButtonUp
          (UDS_W_RingCmdInfoSlot *this,FReply *__return_storage_ptr__,FGeometry *param_1,
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
      goto LAB_14bd08d3f;
    }
  }
  bVar3 = false;
LAB_14bd08d3f:
  FReply::FReply(__return_storage_ptr__,bVar3);
  return __return_storage_ptr__;
}

// NativeOnMouseEnter @ 14bd09100

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_W_RingCmdInfoSlot::NativeOnMouseEnter
          (UDS_W_RingCmdInfoSlot *this,FGeometry *param_1,FPointerEvent *param_2)

{
  FFieldId local_18;
  
  UUserWidget::NativeOnMouseEnter((UUserWidget *)this,param_1,param_2);
  (this->EventMouseEnter).TargetWidget = (UDS_UserWidget *)this;
  FGeometry::operator=(&(this->EventMouseEnter).Geometry,param_1);
  FPointerEvent::operator=(&(this->EventMouseEnter).PointerEvent,param_2);
  local_18.FieldName = FFieldNotificationClassDescriptor::EventMouseEnter.FieldName;
  local_18.BitNumber = FFieldNotificationClassDescriptor::EventMouseEnter.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
  return;
}

// NativeOnMouseLeave @ 14bd09410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_W_RingCmdInfoSlot::NativeOnMouseLeave(UDS_W_RingCmdInfoSlot *this,FPointerEvent *param_1)

{
  FFieldId local_18;
  
  UUserWidget::NativeOnMouseLeave((UUserWidget *)this,param_1);
  FPointerEvent::operator=(&(this->EventMouseLeave).PointerEvent,param_1);
  local_18.FieldName = FFieldNotificationClassDescriptor::EventMouseLeave.FieldName;
  local_18.BitNumber = FFieldNotificationClassDescriptor::EventMouseLeave.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
  return;
}

// OnDoubleClick @ 14bd0ce10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_RingCmdInfoSlot::OnDoubleClick(UDS_W_RingCmdInfoSlot *this)

{
  FFieldId local_18 [2];
  
  local_18[0].FieldName = FFieldNotificationClassDescriptor::EventMouseButtonDoubleClick.FieldName;
  local_18[0].BitNumber = FFieldNotificationClassDescriptor::EventMouseButtonDoubleClick.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,local_18);
  return;
}

// OnEventMouseButtonDown @ 14bd0d0f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_RingCmdInfoSlot::OnEventMouseButtonDown(UDS_W_RingCmdInfoSlot *this,FPointerEvent *param_1)

{
  FFieldId local_18;
  
  FPointerEvent::operator=(&(this->EventMouseButtonDown).PointerEvent,param_1);
  local_18.FieldName = FFieldNotificationClassDescriptor::EventMouseButtonDown.FieldName;
  local_18.BitNumber = FFieldNotificationClassDescriptor::EventMouseButtonDown.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
  return;
}

// OnEventMouseButtonUp @ 14bd0d280

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_RingCmdInfoSlot::OnEventMouseButtonUp(UDS_W_RingCmdInfoSlot *this,FPointerEvent *param_1)

{
  FFieldId local_18;
  
  FPointerEvent::operator=(&(this->EventMouseButtonUp).PointerEvent,param_1);
  local_18.FieldName = FFieldNotificationClassDescriptor::EventMouseButtonUp.FieldName;
  local_18.BitNumber = FFieldNotificationClassDescriptor::EventMouseButtonUp.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
  return;
}

// OnOperationDrop @ 14bd0faf0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_RingCmdInfoSlot::OnOperationDrop(UDS_W_RingCmdInfoSlot *this,UDragDropOperation *param_1)

{
  FFieldId local_18 [2];
  
  local_18[0].FieldName = FFieldNotificationClassDescriptor::EventOperationDrop.FieldName;
  local_18[0].BitNumber = FFieldNotificationClassDescriptor::EventOperationDrop.BitNumber;
  UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,local_18);
  return;
}

