// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b4ad9b0

UClass * __cdecl UDS_HUD_RingCmd_QuickSlotList::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_HUD_RingCmd_QuickSlotList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_HUD_RingCmd_QuickSlotList",
               &Z_Registration_Info_UClass_UDS_HUD_RingCmd_QuickSlotList.InnerSingleton,
               StaticRegisterNativesUDS_HUD_RingCmd_QuickSlotList,0x898,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_HUD_RingCmd_QuickSlotList>,
               InternalVTableHelperCtorCaller<UDS_HUD_RingCmd_QuickSlotList>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_HUD_RingCmd_QuickSlotList.InnerSingleton;
}

// UDS_HUD_RingCmd_QuickSlotList @ 14b4b2260

UDS_HUD_RingCmd_QuickSlotList * __thiscall
UDS_HUD_RingCmd_QuickSlotList::UDS_HUD_RingCmd_QuickSlotList
          (UDS_HUD_RingCmd_QuickSlotList *this,FVTableHelper *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  this->EventSwipeLeft = false;
  this->EventSwipeRight = false;
  (this->DragStartScreenPos).field0_0x0._s_0.X = 0.0;
  (this->DragStartScreenPos).field0_0x0._s_0.Y = 0.0;
  this->IsSwiped = false;
  return this;
}

// UDS_HUD_RingCmd_QuickSlotList @ 14b4b22d0

UDS_HUD_RingCmd_QuickSlotList * __thiscall
UDS_HUD_RingCmd_QuickSlotList::UDS_HUD_RingCmd_QuickSlotList
          (UDS_HUD_RingCmd_QuickSlotList *this,FObjectInitializer *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  this->EventSwipeLeft = false;
  this->EventSwipeRight = false;
  (this->DragStartScreenPos).field0_0x0._s_0.X = 0.0;
  (this->DragStartScreenPos).field0_0x0._s_0.Y = 0.0;
  this->IsSwiped = false;
  return this;
}

// ~UDS_HUD_RingCmd_QuickSlotList @ 14b4b3670

void __thiscall
UDS_HUD_RingCmd_QuickSlotList::~UDS_HUD_RingCmd_QuickSlotList(UDS_HUD_RingCmd_QuickSlotList *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  UDS_UserWidget::~UDS_UserWidget((UDS_UserWidget *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b4b6640

IClassDescriptor * __thiscall
UDS_HUD_RingCmd_QuickSlotList::GetFieldNotificationDescriptor(UDS_HUD_RingCmd_QuickSlotList *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_HUD_RingCmd_QuickSlotList::FFieldNotificationClassDescriptor::GetDescriptor'::__l2
             ::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b4b7260

UClass * __cdecl UDS_HUD_RingCmd_QuickSlotList::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_HUD_RingCmd_QuickSlotList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_HUD_RingCmd_QuickSlotList",
               &Z_Registration_Info_UClass_UDS_HUD_RingCmd_QuickSlotList.InnerSingleton,
               StaticRegisterNativesUDS_HUD_RingCmd_QuickSlotList,0x898,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_HUD_RingCmd_QuickSlotList>,
               InternalVTableHelperCtorCaller<UDS_HUD_RingCmd_QuickSlotList>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_HUD_RingCmd_QuickSlotList.InnerSingleton;
}

// StaticRegisterNativesUDS_HUD_RingCmd_QuickSlotList @ 14b4b84e0

void __cdecl UDS_HUD_RingCmd_QuickSlotList::StaticRegisterNativesUDS_HUD_RingCmd_QuickSlotList(void)

{
  return;
}

// DetectSwipe @ 14c07dd80

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_HUD_RingCmd_QuickSlotList::DetectSwipe
          (UDS_HUD_RingCmd_QuickSlotList *this,TVector2<double> *param_1)

{
  double dVar1;
  uint uVar2;
  FNameEntryId FVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  double dVar7;
  FFieldId local_18;
  
  if ((this->IsSwiped != true) &&
     (dVar7 = (param_1->field0_0x0)._s_0.X - (this->DragStartScreenPos).field0_0x0._s_0.X,
     dVar1 = (param_1->field0_0x0)._s_0.Y - (this->DragStartScreenPos).field0_0x0._s_0.Y,
     uVar5 = SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar6 = (uint)((ulonglong)dVar7 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     uVar2 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar4 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     (double)CONCAT44(uVar4,uVar2) <= (double)CONCAT44(uVar6,uVar5) &&
     (double)CONCAT44(uVar6,uVar5) != (double)CONCAT44(uVar4,uVar2))) {
    if (dVar7 <= __real_403e000000000000) {
      if (__real_c03e000000000000 <= dVar7) {
        return;
      }
      FVar3 = FFieldNotificationClassDescriptor::EventSwipeLeft.FieldName.ComparisonIndex.Value;
      uVar2 = FFieldNotificationClassDescriptor::EventSwipeLeft.FieldName.Number;
      local_18.BitNumber = FFieldNotificationClassDescriptor::EventSwipeLeft.BitNumber;
    }
    else {
      FVar3 = FFieldNotificationClassDescriptor::EventSwipeRight.FieldName.ComparisonIndex.Value;
      uVar2 = FFieldNotificationClassDescriptor::EventSwipeRight.FieldName.Number;
      local_18.BitNumber = FFieldNotificationClassDescriptor::EventSwipeRight.BitNumber;
    }
    local_18.FieldName.Number = uVar2;
    local_18.FieldName.ComparisonIndex.Value = FVar3.Value;
    UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
    this->IsSwiped = true;
    (this->DragStartScreenPos).field0_0x0._s_0 =
         (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  }
  return;
}

// NativeOnDragCancelled @ 14c090e90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_HUD_RingCmd_QuickSlotList::NativeOnDragCancelled
          (UDS_HUD_RingCmd_QuickSlotList *this,FDragDropEvent *param_1,UDragDropOperation *param_2)

{
  TVector2<double>_u_0 local_18;
  
  UUserWidget::NativeOnDragCancelled((UUserWidget *)this,param_1,param_2);
  local_18._s_0.X = (double)*(float *)&param_1->_padding_;
  local_18._s_0.Y = (double)*(float *)((longlong)&param_1->_padding_ + 4);
  DetectSwipe(this,(TVector2<double> *)&local_18._s_0);
  return;
}

// NativeOnDragDetected @ 14c090ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_HUD_RingCmd_QuickSlotList::NativeOnDragDetected
          (UDS_HUD_RingCmd_QuickSlotList *this,FGeometry *param_1,FPointerEvent *param_2,
          UDragDropOperation **param_3)

{
  float fVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UDragDropOperation *pUVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  UUserWidget::NativeOnDragDetected((UUserWidget *)this,param_1,param_2,param_3);
  this->IsSwiped = false;
  fVar1 = *(float *)&(param_2->ScreenSpacePosition).field_0x4;
  (this->DragStartScreenPos).field0_0x0._s_0.X = (double)*(float *)&param_2->ScreenSpacePosition;
  (this->DragStartScreenPos).field0_0x0._s_0.Y = (double)fVar1;
  pUVar2 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UDragDropOperation_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar3);
  local_a8._8_8_ = pUVar2;
  pUVar4 = (UDragDropOperation *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar5 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  *param_3 = pUVar4;
  return;
}

// NativeOnDragLeave @ 14c090fc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_HUD_RingCmd_QuickSlotList::NativeOnDragLeave
          (UDS_HUD_RingCmd_QuickSlotList *this,FDragDropEvent *param_1,UDragDropOperation *param_2)

{
  TVector2<double>_u_0 local_18;
  
  UUserWidget::NativeOnDragLeave((UUserWidget *)this,param_1,param_2);
  local_18._s_0.X = (double)*(float *)&param_1->_padding_;
  local_18._s_0.Y = (double)*(float *)((longlong)&param_1->_padding_ + 4);
  DetectSwipe(this,(TVector2<double> *)&local_18._s_0);
  return;
}

// NativeOnDragOver @ 14c091010

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_HUD_RingCmd_QuickSlotList::NativeOnDragOver
          (UDS_HUD_RingCmd_QuickSlotList *this,FGeometry *param_1,FDragDropEvent *param_2,
          UDragDropOperation *param_3)

{
  TVector2<double>_u_0 local_18;
  
  UUserWidget::NativeOnDragOver((UUserWidget *)this,param_1,param_2,param_3);
  local_18._s_0.X = (double)*(float *)&param_2->_padding_;
  local_18._s_0.Y = (double)*(float *)((longlong)&param_2->_padding_ + 4);
  DetectSwipe(this,(TVector2<double> *)&local_18._s_0);
  return true;
}

// NativeOnMouseButtonDown @ 14c091070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
UDS_HUD_RingCmd_QuickSlotList::NativeOnMouseButtonDown
          (UDS_HUD_RingCmd_QuickSlotList *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  code *pcVar5;
  FKeyDetails *pFVar6;
  FSharedReferencer<1> FVar7;
  FSharedReferencer<1> FVar8;
  FSharedReferencer<1> FVar9;
  FReply *pFVar10;
  bool bVar11;
  TSharedPtr<SWidget,1> local_328;
  FReply local_318;
  FReply local_258;
  FReply local_1a0;
  FReply local_e8;
  
  UCommonUserWidget::NativeOnMouseButtonDown((UCommonUserWidget *)this,&local_e8,param_1,param_2);
  FReply::~FReply(&local_e8);
  pTVar3 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar4 = (param_2->EffectingButton).KeyName;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar11 = FVar4 == EKeys::RightMouseButton.KeyName;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (bVar11) {
    bVar11 = true;
  }
  else {
    pTVar3 = (param_2->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
    FVar4 = (param_2->EffectingButton).KeyName;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar11 = FVar4 == EKeys::LeftMouseButton.KeyName;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if (bVar11) {
      FReply::FReply(&local_258,false);
      FReply::FReply(&local_318,&local_258);
      FReply::~FReply(&local_258);
      FReply::FReply(&local_1a0,true);
      FReply::operator=(&local_318,&local_1a0);
      FReply::~FReply(&local_1a0);
      if (this != (UDS_HUD_RingCmd_QuickSlotList *)0x0) {
        UWidget::GetCachedWidget((UWidget *)this,&local_328);
        FVar7 = EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount;
        pFVar6 = EKeys::LeftMouseButton.KeyDetails.Object;
        FVar4 = EKeys::LeftMouseButton.KeyName;
        if (local_328.Object != (SWidget *)0x0) {
          if (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)->
            SharedReferenceCount =
                 (atomic<int>)
                 ((int)(EKeys::LeftMouseButton.KeyDetails.SharedReferenceCount.ReferenceController)
                       ->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((local_328.Object == (SWidget *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x408,L""), bVar11)) {
            pcVar5 = (code *)swi(3);
            pFVar10 = (FReply *)(*pcVar5)();
            return pFVar10;
          }
          FVar8.ReferenceController = local_328.SharedReferenceCount.ReferenceController;
          if (local_328.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_328.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_328.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          if ((local_328.Object == (SWidget *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x25d,L""), bVar11)) {
            pcVar5 = (code *)swi(3);
            pFVar10 = (FReply *)(*pcVar5)();
            return pFVar10;
          }
          local_318.DetectDragForWidget.Object = local_328.Object;
          if (FVar8.ReferenceController !=
              local_318.DetectDragForWidget.WeakReferenceCount.ReferenceController) {
            if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (FVar8.ReferenceController)->WeakReferenceCount =
                   (atomic<int>)((int)(FVar8.ReferenceController)->WeakReferenceCount + 1);
              UNLOCK();
            }
            if (local_318.DetectDragForWidget.WeakReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              paVar1 = &(local_318.DetectDragForWidget.WeakReferenceCount.ReferenceController)->
                        WeakReferenceCount;
              aVar2 = *paVar1;
              *paVar1 = (atomic<int>)((int)*paVar1 + -1);
              UNLOCK();
              if (aVar2 == (atomic<int>)0x1) {
                (**(code **)((local_318.DetectDragForWidget.WeakReferenceCount.ReferenceController)
                             ->_padding_ + 8))
                          (local_318.DetectDragForWidget.WeakReferenceCount.ReferenceController,1);
              }
            }
            local_318.DetectDragForWidget.WeakReferenceCount.ReferenceController =
                 FVar8.ReferenceController;
          }
          FVar9.ReferenceController =
               local_318.DetectDragForMouseButton.KeyDetails.SharedReferenceCount.
               ReferenceController;
          local_318.DetectDragForMouseButton.KeyName = FVar4;
          if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar7.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_318.DetectDragForMouseButton.KeyDetails.Object = pFVar6;
          local_318.DetectDragForMouseButton.KeyDetails.SharedReferenceCount.ReferenceController =
               FVar7.ReferenceController;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar9.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar7.ReferenceController);
          FReply::operator=(&local_318,&local_318);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar8.ReferenceController);
          FReply::FReply(__return_storage_ptr__,&local_318);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_328.SharedReferenceCount.ReferenceController);
          FReply::~FReply(&local_318);
          return __return_storage_ptr__;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_328.SharedReferenceCount.ReferenceController);
      }
      FReply::~FReply(&local_318);
    }
    bVar11 = false;
  }
  FReply::FReply(__return_storage_ptr__,bVar11);
  return __return_storage_ptr__;
}

