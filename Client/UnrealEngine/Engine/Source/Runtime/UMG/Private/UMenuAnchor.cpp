// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 49

// GetPlacement_WrapperImpl @ 1469634b0

void __cdecl UMenuAnchor::GetPlacement_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x200);
  return;
}

// SetPlacement_WrapperImpl @ 1469634d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMenuAnchor::SetPlacement_WrapperImpl(void *param_1,void *param_2)

{
  byte bVar1;
  TAttribute<EMenuPlacement> local_28;
  
  bVar1 = *(byte *)param_2;
  *(byte *)((longlong)param_1 + 0x200) = bVar1;
  if (*(SMenuAnchor **)((longlong)param_1 + 0x220) != (SMenuAnchor *)0x0) {
    local_28.Value = (EMenuPlacement)bVar1;
    local_28.bIsSet = true;
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SMenuAnchor::SetMenuPlacement(*(SMenuAnchor **)((longlong)param_1 + 0x220),&local_28);
  }
  return;
}

// GetbFitInWindow_WrapperImpl @ 146963520

void __cdecl UMenuAnchor::GetbFitInWindow_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x201);
  return;
}

// SetbFitInWindow_WrapperImpl @ 146963530

void __cdecl UMenuAnchor::SetbFitInWindow_WrapperImpl(void *param_1,void *param_2)

{
  char cVar1;
  SWidget *this;
  
  cVar1 = *(char *)param_2;
  *(char *)((longlong)param_1 + 0x201) = cVar1;
  this = *(SWidget **)((longlong)param_1 + 0x220);
  if (this == (SWidget *)0x0) {
    return;
  }
  if (*(char *)((longlong)&this[1].PersistentState.AllottedGeometry.AbsolutePosition.field0_0x0 + 4)
      != cVar1) {
    *(char *)((longlong)&this[1].PersistentState.AllottedGeometry.AbsolutePosition.field0_0x0 + 4) =
         cVar1;
    SWidget::Invalidate(this,Layout);
    return;
  }
  return;
}

// GetShouldDeferPaintingAfterWindowContent_WrapperImpl @ 146963550

void __cdecl
UMenuAnchor::GetShouldDeferPaintingAfterWindowContent_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x202);
  return;
}

// GetUseApplicationMenuStack_WrapperImpl @ 146963560

void __cdecl UMenuAnchor::GetUseApplicationMenuStack_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x203);
  return;
}

// GetShowMenuBackground_WrapperImpl @ 146963570

void __cdecl UMenuAnchor::GetShowMenuBackground_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x204);
  return;
}

// StaticClass @ 146963580

UClass * __cdecl UMenuAnchor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMenuAnchor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"MenuAnchor",&Z_Registration_Info_UClass_UMenuAnchor.InnerSingleton,
               StaticRegisterNativesUMenuAnchor,0x230,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMenuAnchor>,InternalVTableHelperCtorCaller<UMenuAnchor>,
               local_res8,UContentWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMenuAnchor.InnerSingleton;
}

// UMenuAnchor @ 14698b970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UMenuAnchor * __thiscall UMenuAnchor::UMenuAnchor(UMenuAnchor *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->MenuClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  *(undefined8 *)&this->OnGetMenuContentEvent = 0;
  *(undefined8 *)&(this->OnGetMenuContentEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnGetMenuContentEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnGetUserMenuContentEvent = 0;
  *(undefined8 *)&(this->OnGetUserMenuContentEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnGetUserMenuContentEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnMenuOpenChanged = 0;
  *(undefined8 *)&(this->OnMenuOpenChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnMenuOpenChanged).field_0x10 = 0;
  (this->MyMenuAnchor).Object = (SMenuAnchor *)0x0;
  (this->MyMenuAnchor).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  return this;
}

// UMenuAnchor @ 14698ba10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UMenuAnchor * __thiscall UMenuAnchor::UMenuAnchor(UMenuAnchor *this,FObjectInitializer *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->MenuClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  *(undefined8 *)&this->OnGetMenuContentEvent = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)&(this->OnGetMenuContentEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnGetMenuContentEvent).field_0x10 = 0;
  *(undefined8 *)&this->OnGetUserMenuContentEvent = 0;
  *(undefined8 *)&(this->OnGetUserMenuContentEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnGetUserMenuContentEvent).field_0x10 = 0;
  this->Placement = '\x03';
  this->bFitInWindow = true;
  this->ShouldDeferPaintingAfterWindowContent = true;
  this->UseApplicationMenuStack = true;
  *(undefined8 *)&this->OnMenuOpenChanged = 0;
  *(undefined8 *)&(this->OnMenuOpenChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnMenuOpenChanged).field_0x10 = 0;
  (this->MyMenuAnchor).Object = (SMenuAnchor *)0x0;
  (this->MyMenuAnchor).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  this->ShowMenuBackground = true;
  return this;
}

// ~UMenuAnchor @ 1469937b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UMenuAnchor::~UMenuAnchor(UMenuAnchor *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyMenuAnchor).SharedReferenceCount.ReferenceController);
  pvVar1 = *(void **)&(this->OnMenuOpenChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMenuOpenChanged);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGetUserMenuContentEvent);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGetMenuContentEvent);
  this->_padding_ = (longlong)&UPanelWidget::_vftable__for__UVisual__;
  this->_padding_ = (longlong)&UPanelWidget::_vftable__for__INotifyFieldValueChanged__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UWidget::~UWidget((UWidget *)this);
  return;
}

// Close @ 1469a75a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMenuAnchor::Close(UMenuAnchor *this)

{
  SMenuAnchor *pSVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if ((this->MyMenuAnchor).Object != (SMenuAnchor *)0x0) {
    lVar5 = (**(code **)(this->_padding_ + 0x2e0))();
    if (lVar5 == 0) {
      uVar4 = 0;
    }
    else {
      plVar6 = (longlong *)(**(code **)(this->_padding_ + 0x2e0))(this);
      uVar4 = (**(code **)(*plVar6 + 0x340))(plVar6);
    }
    if ((this->MyMenuAnchor).Object == (SMenuAnchor *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pSVar1 = (this->MyMenuAnchor).Object;
    (**(code **)(pSVar1->_padding_ + 0x250))(pSVar1,0,0,uVar4);
  }
  return;
}

// FGetUserWidget_DelegateWrapper @ 1469c75e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UUserWidget * __cdecl
UMenuAnchor::FGetUserWidget_DelegateWrapper(TScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  UUserWidget *local_res10 [3];
  
  local_res10[0] = (UUserWidget *)0x0;
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,local_res10);
  return local_res10[0];
}

// FitInWindow @ 1469c9480

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMenuAnchor::FitInWindow(UMenuAnchor *this,bool param_1)

{
  SMenuAnchor *this_00;
  
  this->bFitInWindow = param_1;
  this_00 = (this->MyMenuAnchor).Object;
  if (this_00 == (SMenuAnchor *)0x0) {
    return;
  }
  if (this_00->bFitInWindow != param_1) {
    this_00->bFitInWindow = param_1;
    SWidget::Invalidate((SWidget *)this_00,Layout);
    return;
  }
  return;
}

// GetMenuPosition @ 1469d1d60

/* WARNING: Enum "Type": Some values do not have unique names */

TVector2<double> * __thiscall
UMenuAnchor::GetMenuPosition(UMenuAnchor *this,TVector2<double> *__return_storage_ptr__)

{
  SMenuAnchor *this_00;
  
  this_00 = (this->MyMenuAnchor).Object;
  if (this_00 != (SMenuAnchor *)0x0) {
    SMenuAnchor::GetMenuPosition(this_00,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  return __return_storage_ptr__;
}

// GetPlacement @ 1469d3890

/* WARNING: Enum "Type": Some values do not have unique names */

EMenuPlacement __thiscall UMenuAnchor::GetPlacement(UMenuAnchor *this)

{
  return (EMenuPlacement)(this->Placement).Value;
}

// GetPrivateStaticClass @ 1469d47b0

UClass * __cdecl UMenuAnchor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMenuAnchor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"MenuAnchor",&Z_Registration_Info_UClass_UMenuAnchor.InnerSingleton,
               StaticRegisterNativesUMenuAnchor,0x230,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMenuAnchor>,InternalVTableHelperCtorCaller<UMenuAnchor>,
               local_res8,UContentWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMenuAnchor.InnerSingleton;
}

// HandleGetMenuContent @ 1469dbc60

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

TSharedRef<SWidget,1> * __thiscall
UMenuAnchor::HandleGetMenuContent(UMenuAnchor *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  UClass *pUVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  TSharedRef<SWidget,1> *pTVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UWorld *pUVar8;
  UUserWidget *this_00;
  FSharedReferencer<1> FVar9;
  SWidget *pSVar10;
  int iVar11;
  int iVar12;
  FSharedReferencer<1> FVar13;
  UWidget *local_res8;
  UWidget *local_res10;
  FName local_res18;
  UClass *local_res20;
  SWidget *local_c8;
  FSharedReferencer<1> FStack_c0;
  undefined8 local_b8;
  FSharedReferencer<1> local_b0;
  undefined8 local_a8;
  FSharedReferencer<1> local_a0;
  undefined8 local_98;
  FSharedReferencer<1> local_90;
  SWidget *local_88;
  TReferenceControllerBase<1> *pTStack_80;
  TSharedRef<SWidget,1> local_78;
  TSharedRef<SWidget,1> local_68;
  TSharedRef<SWidget,1> local_58;
  TReferenceControllerBase<1> *local_40;
  
  local_c8 = (SWidget *)0x0;
  FStack_c0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pUVar7 = (UClass *)0x0;
  iVar11 = 0;
  bVar4 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnGetUserMenuContentEvent
                    );
  if (bVar4) {
    local_res8 = (UWidget *)0x0;
    TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>
              ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnGetUserMenuContentEvent,
               &local_res8);
    if (local_res8 == (UWidget *)0x0) goto LAB_1469dbe9d;
    pTVar5 = UWidget::TakeWidget(local_res8,&local_78);
    local_b0.ReferenceController = (pTVar5->SharedReferenceCount).ReferenceController;
    local_c8 = pTVar5->Object;
    if (local_b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_b0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_b0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_b8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_c0,&local_b0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b0.ReferenceController);
  }
  else {
    bVar4 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                      ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnGetMenuContentEvent);
    if (bVar4) {
      local_res10 = (UWidget *)0x0;
      TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>
                ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnGetMenuContentEvent,
                 &local_res10);
      if (local_res10 == (UWidget *)0x0) goto LAB_1469dbe9d;
      pTVar5 = UWidget::TakeWidget(local_res10,&local_68);
      local_a0.ReferenceController = (pTVar5->SharedReferenceCount).ReferenceController;
      local_c8 = pTVar5->Object;
      if (local_a0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_a0.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_a0.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_a8 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_c0,&local_a0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a0.ReferenceController);
      local_78.SharedReferenceCount.ReferenceController =
           local_68.SharedReferenceCount.ReferenceController;
    }
    else {
      pUVar1 = (this->MenuClass).Class.field0_0x0.DebugPtr;
      if ((pUVar1 == (UClass *)0x0) ||
         (pUVar6 = Z_Construct_UClass_UUserWidget_NoRegister(), pUVar6 == (UClass *)0x0))
      goto LAB_1469dbe9d;
      iVar12 = (int)pUVar6->_padding_;
      if (((int)pUVar1->_padding_ < iVar12) ||
         ((longlong *)*(undefined1 **)(pUVar1->_padding_ + (longlong)iVar12 * 8) !=
          &pUVar6->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((!bVar4) ||
         (pUVar1 = (this->MenuClass).Class.field0_0x0.DebugPtr, pUVar1 == (UClass *)0x0))
      goto LAB_1469dbe9d;
      pUVar6 = Z_Construct_UClass_UUserWidget_NoRegister();
      if (pUVar6 != (UClass *)0x0) {
        iVar12 = (int)pUVar6->_padding_;
        if (((int)pUVar1->_padding_ < iVar12) ||
           ((longlong *)*(undefined1 **)(pUVar1->_padding_ + (longlong)iVar12 * 8) !=
            &pUVar6->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          pUVar7 = (this->MenuClass).Class.field0_0x0.DebugPtr;
        }
      }
      if (((pUVar7->ClassFlags & CLASS_Abstract) != CLASS_None) ||
         (pUVar8 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this), pUVar8 == (UWorld *)0x0))
      goto LAB_1469dbe9d;
      local_res20 = (this->MenuClass).Class.field0_0x0.DebugPtr;
      local_res18.ComparisonIndex.Value = 0;
      local_res18.Number = 0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res20);
      }
      this_00 = CreateWidget<UUserWidget,UWorld_*>
                          (pUVar8,(TSubclassOf<UUserWidget>)&local_res20,local_res18);
      if (this_00 == (UUserWidget *)0x0) goto LAB_1469dbe9d;
      pTVar5 = UWidget::TakeWidget((UWidget *)this_00,&local_58);
      local_90.ReferenceController = (pTVar5->SharedReferenceCount).ReferenceController;
      local_c8 = pTVar5->Object;
      if (local_90.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_90.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_90.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_98 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_c0,&local_90);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_90.ReferenceController);
      local_78.SharedReferenceCount.ReferenceController =
           local_58.SharedReferenceCount.ReferenceController;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
LAB_1469dbe9d:
  FVar9.ReferenceController = SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
  pSVar10 = SNullWidget::NullWidget.Object;
  if (local_c8 == (SWidget *)0x0) {
    if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    iVar12 = 2;
    local_40 = FVar9.ReferenceController;
    FVar13.ReferenceController = FStack_c0.ReferenceController;
  }
  else {
    if ((local_c8 == (SWidget *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar5;
    }
    FVar13.ReferenceController = FStack_c0.ReferenceController;
    local_88 = local_c8;
    pTStack_80 = FStack_c0.ReferenceController;
    if (FStack_c0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_c0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_c0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_c8 == (SWidget *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar5;
    }
    FVar9.ReferenceController = pTStack_80;
    pSVar10 = local_88;
    iVar12 = iVar11;
    iVar11 = 1;
  }
  pTVar3 = pTStack_80;
  __return_storage_ptr__->Object = pSVar10;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar9.ReferenceController;
  if (FVar9.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar9.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar9.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (iVar12 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  }
  if (iVar11 != 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar13.ReferenceController);
  return __return_storage_ptr__;
}

// HandleMenuOpenChanged @ 1469dce10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMenuAnchor::HandleMenuOpenChanged(UMenuAnchor *this,bool param_1)

{
  undefined1 local_res10 [24];
  
  local_res10[0] = param_1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnMenuOpenChanged,
             local_res10);
  return;
}

// HasOpenSubMenus @ 1469de380

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMenuAnchor::HasOpenSubMenus(UMenuAnchor *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SMenuAnchor *pSVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  FSlateApplication *this_00;
  bool bVar5;
  TSharedPtr<IMenu,1> TStack_18;
  
  pSVar2 = (this->MyMenuAnchor).Object;
  if (pSVar2 == (SMenuAnchor *)0x0) {
    return false;
  }
  if ((((pSVar2->PopupMenuPtr).Object == (IMenu *)0x0) ||
      (pTVar1 = (pSVar2->PopupMenuPtr).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) {
    return false;
  }
  this_00 = FSlateApplication::Get();
  TStack_18.SharedReferenceCount.ReferenceController =
       (pSVar2->PopupMenuPtr).WeakReferenceCount.ReferenceController;
  TStack_18.Object = (IMenu *)0x0;
  if (TStack_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = (TStack_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        TStack_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14294ee45;
      }
      LOCK();
      aVar4 = (TStack_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      bVar5 = aVar3 == aVar4;
      if (bVar5) {
        (TStack_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar5);
    if (TStack_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      TStack_18.Object = (pSVar2->PopupMenuPtr).Object;
      bVar5 = FSlateApplication::HasOpenSubMenus(this_00,&TStack_18);
      return bVar5;
    }
  }
LAB_14294ee45:
  bVar5 = FSlateApplication::HasOpenSubMenus(this_00,&TStack_18);
  return bVar5;
}

// InitShouldDeferPaintingAfterWindowContent @ 1469e0140

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMenuAnchor::InitShouldDeferPaintingAfterWindowContent(UMenuAnchor *this,bool param_1)

{
  undefined1 local_res10 [24];
  
  if ((this->MyMenuAnchor).Object != (SMenuAnchor *)0x0) {
    `UMenuAnchor::InitShouldDeferPaintingAfterWindowContent'::__l2::<lambda_1>::operator()
              (local_res10);
    this->ShouldDeferPaintingAfterWindowContent = param_1;
    return;
  }
  this->ShouldDeferPaintingAfterWindowContent = param_1;
  return;
}

// InitShowMenuBackground @ 1469e0190

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMenuAnchor::InitShowMenuBackground(UMenuAnchor *this,bool param_1)

{
  undefined1 local_res10 [24];
  
  if ((this->MyMenuAnchor).Object != (SMenuAnchor *)0x0) {
    `UMenuAnchor::InitShowMenuBackground'::__l2::<lambda_1>::operator()(local_res10);
    this->ShowMenuBackground = param_1;
    return;
  }
  this->ShowMenuBackground = param_1;
  return;
}

// InitUseApplicationMenuStack @ 1469e01e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMenuAnchor::InitUseApplicationMenuStack(UMenuAnchor *this,bool param_1)

{
  undefined1 local_res10 [24];
  
  if ((this->MyMenuAnchor).Object != (SMenuAnchor *)0x0) {
    `UMenuAnchor::InitUseApplicationMenuStack'::__l2::<lambda_1>::operator()(local_res10);
    this->UseApplicationMenuStack = param_1;
    return;
  }
  this->UseApplicationMenuStack = param_1;
  return;
}

// IsDeferPaintingAfterWindowContent @ 1469e1510

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMenuAnchor::IsDeferPaintingAfterWindowContent(UMenuAnchor *this)

{
  return this->ShouldDeferPaintingAfterWindowContent;
}

// IsFitInWindow @ 1469e1700

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMenuAnchor::IsFitInWindow(UMenuAnchor *this)

{
  return this->bFitInWindow;
}

// IsOpen @ 1469e27e0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMenuAnchor::IsOpen(UMenuAnchor *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SMenuAnchor *pSVar2;
  
  pSVar2 = (this->MyMenuAnchor).Object;
  if (pSVar2 == (SMenuAnchor *)0x0) {
    return false;
  }
  if (((((char)(pSVar2->MethodInUse)._padding_ != '\0') &&
       ((pSVar2->PopupMenuPtr).Object != (IMenu *)0x0)) &&
      (pTVar1 = (pSVar2->PopupMenuPtr).WeakReferenceCount.ReferenceController,
      pTVar1 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar1->SharedReferenceCount)) {
    return true;
  }
  return false;
}

// IsShowMenuBackground @ 1469e3810

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMenuAnchor::IsShowMenuBackground(UMenuAnchor *this)

{
  return this->ShowMenuBackground;
}

// IsUseApplicationMenuStack @ 1469e3840

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMenuAnchor::IsUseApplicationMenuStack(UMenuAnchor *this)

{
  return this->UseApplicationMenuStack;
}

// OnSlotAdded @ 1469f0840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UMenuAnchor::OnSlotAdded(UMenuAnchor *this,UPanelSlot *param_1)

{
  SMenuAnchor *this_00;
  UWidget *this_01;
  bool bVar1;
  bool bVar2;
  FSharedReferencer<1> FVar3;
  TSharedRef<SWidget,1> *pTVar4;
  TSharedRef<SWidget,1> local_38;
  TSharedRef<SWidget,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  local_28.Object = SNullWidget::NullWidget.Object;
  this_00 = (this->MyMenuAnchor).Object;
  bVar1 = false;
  if (this_00 != (SMenuAnchor *)0x0) {
    this_01 = (param_1->Content).field0_0x0.DebugPtr;
    if (this_01 == (UWidget *)0x0) {
      local_38.Object = SNullWidget::NullWidget.Object;
      local_38.SharedReferenceCount.ReferenceController =
           SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
      if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar2 = false;
      pTVar4 = &local_38;
      bVar1 = true;
    }
    else {
      pTVar4 = UWidget::TakeWidget(this_01,&local_18);
      bVar2 = true;
      local_28.Object = pTVar4->Object;
    }
    FVar3.ReferenceController = local_38.SharedReferenceCount.ReferenceController;
    local_28.SharedReferenceCount.ReferenceController =
         (pTVar4->SharedReferenceCount).ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SMenuAnchor::SetContent(this_00,&local_28);
    if (bVar1) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar3.ReferenceController);
    }
    if (bVar2) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// OnSlotRemoved @ 1469f14b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UMenuAnchor::OnSlotRemoved(UMenuAnchor *this,UPanelSlot *param_1)

{
  SMenuAnchor *this_00;
  TSharedRef<SWidget,1> local_18;
  
  this_00 = (this->MyMenuAnchor).Object;
  if (this_00 != (SMenuAnchor *)0x0) {
    local_18.Object = SNullWidget::NullWidget.Object;
    local_18.SharedReferenceCount.ReferenceController =
         SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    SMenuAnchor::SetContent(this_00,&local_18);
  }
  return;
}

// Open @ 1469f2da0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMenuAnchor::Open(UMenuAnchor *this,bool param_1)

{
  SMenuAnchor *pSVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  pSVar1 = (this->MyMenuAnchor).Object;
  if (pSVar1 != (SMenuAnchor *)0x0) {
    bVar3 = SMenuAnchor::IsOpen(pSVar1);
    if (!bVar3) {
      lVar5 = (**(code **)(this->_padding_ + 0x2e0))(this);
      if (lVar5 == 0) {
        uVar4 = 0;
      }
      else {
        plVar6 = (longlong *)(**(code **)(this->_padding_ + 0x2e0))(this);
        uVar4 = (**(code **)(*plVar6 + 0x340))(plVar6);
      }
      if ((this->MyMenuAnchor).Object == (SMenuAnchor *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pSVar1 = (this->MyMenuAnchor).Object;
      (**(code **)(pSVar1->_padding_ + 0x250))(pSVar1,1,param_1,uVar4);
    }
  }
  return;
}

// RebuildWidget @ 146a00ab0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UMenuAnchor::RebuildWidget(UMenuAnchor *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  SMenuAnchor *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  FArguments *pFVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  TSharedRef<SWidget,1> *pTVar12;
  UObject *pUVar13;
  int iVar14;
  int iVar15;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  UMenuAnchor *local_res18;
  UMenuAnchor *local_res20;
  undefined1 local_408 [8];
  FDelegateAllocation local_400;
  undefined1 local_3f0 [8];
  FDelegateAllocation local_3e8;
  FMemScope local_3d8;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  EMenuPlacement local_3c8;
  undefined1 local_3c4;
  undefined1 local_3c0 [8];
  ForAnyElementType FStack_3b8;
  ulonglong local_3b0;
  TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs> local_3a8;
  SMenuAnchor *local_390;
  FSharedReferencer<1> local_388;
  FName local_380;
  TSharedRef<SWidget,1> local_378;
  TSharedRef<SWidget,1> local_368;
  TSharedRef<SWidget,1> local_358;
  FDestructionSentinel local_348;
  FDestructionSentinel local_330;
  FDestructionSentinel local_318;
  FDestructionSentinel local_300;
  FDelegateAllocation *local_2e8;
  FDestructionSentinel local_2e0;
  FDelegateAllocation *local_2c8;
  undefined1 local_2c0 [552];
  undefined1 local_98 [24];
  undefined1 local_80 [32];
  undefined1 local_60 [40];
  
  pUVar13 = (UObject *)0x0;
  pFVar9 = SMenuAnchor::FArguments::FArguments((FArguments *)local_2c0);
  local_3c8 = (EMenuPlacement)(this->Placement).Value;
  local_3c4 = 1;
  iVar14 = 0;
  local_3b0 = 0;
  local_3c0 = (undefined1  [8])0x0;
  FStack_3b8.Data = (FScriptContainerElement *)0x0;
  (pFVar9->_Placement).Value = local_3c8;
  (pFVar9->_Placement).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar9->_Placement).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3c0,
             (FWriteAccessScope *)&local_348);
  if (((int)local_3b0 != 0) && (FStack_3b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3b8,0,0,0x10);
    local_3b0 = local_3b0 & 0xffffffff00000000;
  }
  if (local_348.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_348.Accessor,&local_348);
  }
  if (FStack_3b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3c0);
  pFVar9->_FitInWindow = this->bFitInWindow;
  uStack_3d0 = 0;
  local_3d8 = (FMemScope)HandleGetMenuContent;
  uStack_3cc = local_368.SharedReferenceCount.ReferenceController._4_4_;
  local_3f0 = (undefined1  [8])0x0;
  local_3e8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_3e8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3f0,
             (FWriteAccessScope *)&local_300);
  local_2e8 = &local_3e8;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_3e8);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUMenuAnchor____A6A_AV__TSharedRef_VSWidget___00__XZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar10[3] = 0;
    local_res18 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_res18);
    *(FMemScope *)(puVar10 + 4) = local_3d8;
    puVar10[5] = CONCAT44(uStack_3cc,uStack_3d0);
  }
  if (local_300.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_300.Accessor,&local_300);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar9->_OnGetMenuContent,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3f0);
  uStack_3d0 = 0;
  local_3d8 = (FMemScope)HandleMenuOpenChanged;
  uStack_3cc = local_368.SharedReferenceCount.ReferenceController._4_4_;
  local_408 = (undefined1  [8])0x0;
  local_400.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_400.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_408,
             (FWriteAccessScope *)&local_2e0);
  local_2c8 = &local_400;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_400);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &___7__TCommonDelegateInstanceState___A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUMenuAnchor____A6AX_N_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar10[3] = 0;
    local_res20 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_res20);
    *(FMemScope *)(puVar10 + 4) = local_3d8;
    puVar10[5] = CONCAT44(uStack_3cc,uStack_3d0);
  }
  if (local_2e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2e0.Accessor,&local_2e0);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar9->_OnMenuOpenChanged,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_408);
  pFVar9->_ShouldDeferPaintingAfterWindowContent = this->ShouldDeferPaintingAfterWindowContent;
  pFVar9->_UseApplicationMenuStack = this->UseApplicationMenuStack;
  pFVar9->_ShowMenuBackground = this->ShowMenuBackground;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_380 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_3d8,&local_380,true);
  TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SMenuAnchor,RequiredArgs::T0RequiredArgs>
            (&local_3a8,"SMenuAnchor",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\MenuAnchor.cpp"
             ,0x26,local_res8);
  FMemScope::~FMemScope(&local_3d8);
  FLLMScope::~FLLMScope(local_res10);
  pSVar2 = local_3a8._Widget.Object;
  if ((local_3a8._Widget.Object == (SMenuAnchor *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar12;
  }
  SWidget::SWidgetConstruct((SWidget *)local_3a8._Widget.Object,(FSlateBaseNamedArgs *)pFVar9);
  SMenuAnchor::Construct(local_3a8._Widget.Object,pFVar9);
  if ((local_3a8._Widget.Object == (SMenuAnchor *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar12;
  }
  if (((local_3a8._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar7 = (**(code **)((local_3a8._Widget.Object)->_padding_ + 0x228))(local_3a8._Widget.Object);
    bVar8 = 0;
    if (cVar7 == '\0') goto LAB_146a00e87;
  }
  bVar8 = 0x20;
LAB_146a00e87:
  *(byte *)&(local_3a8._Widget.Object)->_padding_ =
       (byte)(local_3a8._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_3a8._Widget.Object)->_padding_ =
       (byte)(local_3a8._Widget.Object)->_padding_ | bVar8;
  if ((local_3a8._Widget.Object == (SMenuAnchor *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar12;
  }
  pbVar1 = (byte *)((longlong)&(local_3a8._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_3a8._Widget.Object == (SMenuAnchor *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar12;
  }
  FVar5.ReferenceController = local_3a8._Widget.SharedReferenceCount.ReferenceController;
  local_3a8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_3a8._Widget.Object = (SMenuAnchor *)0x0;
  if ((pSVar2 == (SMenuAnchor *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar12;
  }
  local_390 = pSVar2;
  local_388.ReferenceController = FVar5.ReferenceController;
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->MyMenuAnchor != (TSharedPtr<SMenuAnchor,1> *)&local_390) {
    (this->MyMenuAnchor).Object = pSVar2;
    local_390 = (SMenuAnchor *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyMenuAnchor).SharedReferenceCount,&local_388);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_388.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_408,
             (FWriteAccessScope *)&local_330);
  if ((local_400.DelegateSize != 0) &&
     (local_400.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_400.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_400,0,0,0x10);
    local_400.DelegateSize = 0;
  }
  if (local_330.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_330.Accessor,&local_330);
  }
  if (local_400.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_400.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_408);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3f0,
             (FWriteAccessScope *)&local_318);
  if ((local_3e8.DelegateSize != 0) &&
     (local_3e8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_3e8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_3e8,0,0,0x10);
    local_3e8.DelegateSize = 0;
  }
  if (local_318.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_318.Accessor,&local_318);
  }
  if (local_3e8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_3e8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3f0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_60);
  if ((void *)local_60._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_60._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_60);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_80);
  if ((void *)local_80._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_80._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_80);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_98);
  if ((void *)local_98._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_98._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_2c0._544_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_2c0._512_8_);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_2c0);
  if (0 < (int)this->_padding_) {
    if (((this->MyMenuAnchor).Object == (SMenuAnchor *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar12;
    }
    pSVar2 = (this->MyMenuAnchor).Object;
    if (((0 < (int)this->_padding_) &&
        (pUVar13 = *(UObject **)this->_padding_, UE::GC::GIsIncrementalReachabilityPending != false)
        ) && (pUVar13 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar13);
    }
    local_358.Object = SNullWidget::NullWidget.Object;
    if (*(longlong *)&pUVar13[1].field_0x8 == 0) {
      local_378.Object = SNullWidget::NullWidget.Object;
      local_378.SharedReferenceCount.ReferenceController =
           SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
      if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar12 = &local_378;
      iVar15 = 2;
    }
    else {
      if ((int)this->_padding_ < 1) {
        pUVar13 = (UObject *)0x0;
      }
      else {
        pUVar13 = *(UObject **)this->_padding_;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar13);
        }
      }
      pTVar12 = UWidget::TakeWidget(*(UWidget **)&pUVar13[1].field_0x8,&local_368);
      local_358.Object = pTVar12->Object;
      iVar15 = iVar14;
      iVar14 = 1;
    }
    FVar5.ReferenceController = local_378.SharedReferenceCount.ReferenceController;
    local_358.SharedReferenceCount.ReferenceController =
         (pTVar12->SharedReferenceCount).ReferenceController;
    if (local_358.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_358.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_358.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SMenuAnchor::SetContent(pSVar2,&local_358);
    if (iVar15 != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar5.ReferenceController);
    }
    if (iVar14 != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)
                 CONCAT44(local_368.SharedReferenceCount.ReferenceController._4_4_,
                          local_368.SharedReferenceCount.ReferenceController._0_4_));
    }
  }
  if (((this->MyMenuAnchor).Object == (SMenuAnchor *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar12;
  }
  pTVar3 = (this->MyMenuAnchor).SharedReferenceCount.ReferenceController;
  pSVar2 = (this->MyMenuAnchor).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar2 == (SMenuAnchor *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar12;
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar2;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 146a0a970

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMenuAnchor::ReleaseSlateResources(UMenuAnchor *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UPanelWidget::ReleaseSlateResources((UPanelWidget *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyMenuAnchor != (TSharedPtr<SMenuAnchor,1> *)&local_18) {
    (this->MyMenuAnchor).Object = (SMenuAnchor *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyMenuAnchor).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// SetPlacement @ 146a191d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMenuAnchor::SetPlacement(UMenuAnchor *this,EMenuPlacement param_1)

{
  SMenuAnchor *this_00;
  TAttribute<EMenuPlacement> local_28;
  
  (this->Placement).Value = (uchar)param_1;
  this_00 = (this->MyMenuAnchor).Object;
  if (this_00 != (SMenuAnchor *)0x0) {
    local_28.Value = param_1 & 0xff;
    local_28.bIsSet = true;
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SMenuAnchor::SetMenuPlacement(this_00,&local_28);
  }
  return;
}

// ShouldOpenDueToClick @ 146a1e2c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMenuAnchor::ShouldOpenDueToClick(UMenuAnchor *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SMenuAnchor *pSVar2;
  
  pSVar2 = (this->MyMenuAnchor).Object;
  if (pSVar2 == (SMenuAnchor *)0x0) {
    return false;
  }
  if ((((((char)(pSVar2->MethodInUse)._padding_ == '\0') ||
        ((pSVar2->PopupMenuPtr).Object == (IMenu *)0x0)) ||
       (pTVar1 = (pSVar2->PopupMenuPtr).WeakReferenceCount.ReferenceController,
       pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) &&
     (pSVar2->bDismissedThisTick == false)) {
    return true;
  }
  return false;
}

// StaticRegisterNativesUMenuAnchor @ 146a1eaa0

void __cdecl UMenuAnchor::StaticRegisterNativesUMenuAnchor(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 9;
  local_18.DataPtr = Z_Construct_UClass_UMenuAnchor_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// ToggleOpen @ 146a2a6a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMenuAnchor::ToggleOpen(UMenuAnchor *this,bool param_1)

{
  SMenuAnchor *this_00;
  code *pcVar1;
  bool bVar2;
  
  this_00 = (this->MyMenuAnchor).Object;
  if (this_00 != (SMenuAnchor *)0x0) {
    pcVar1 = *(code **)(this_00->_padding_ + 0x250);
    bVar2 = SMenuAnchor::IsOpen(this_00);
    (*pcVar1)(this_00,!bVar2,param_1,0);
  }
  return;
}

// execClose @ 146a33a60

void __cdecl UMenuAnchor::execClose(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0xd].field_0x18 != 0) {
    lVar4 = (**(code **)(*(longlong *)param_1 + 0x2e0))();
    if (lVar4 != 0) {
      plVar5 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x2e0))(param_1);
      uVar3 = (**(code **)(*plVar5 + 0x340))(plVar5);
    }
    if (*(longlong *)&param_1[0xd].field_0x18 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (**(code **)(**(longlong **)&param_1[0xd].field_0x18 + 0x250))
              (*(longlong **)&param_1[0xd].field_0x18,0,0,uVar3);
  }
  return;
}

// execFitInWindow @ 146a33ea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMenuAnchor::execFitInWindow(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SMenuAnchor *this;
  int local_res8 [2];
  
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
  this = *(SMenuAnchor **)&param_1[0xd].field_0x18;
  param_1[0xc].field_0x21 = local_res8[0] != 0;
  if (this != (SMenuAnchor *)0x0) {
    SMenuAnchor::SetFitInWindow(this,local_res8[0] != 0);
  }
  return;
}

// execGetMenuPosition @ 146a35890

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMenuAnchor::execGetMenuPosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  TVector2<double>_u_0 local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(SMenuAnchor **)&param_1[0xd].field_0x18 != (SMenuAnchor *)0x0) {
    SMenuAnchor::GetMenuPosition
              (*(SMenuAnchor **)&param_1[0xd].field_0x18,(TVector2<double> *)&local_18._s_0);
    *(double *)param_3 = local_18._s_0.X;
    *(double *)((longlong)param_3 + 8) = local_18._s_0.Y;
    return;
  }
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)((longlong)param_3 + 8) = 0;
  return;
}

// execHasOpenSubMenus @ 146a370b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMenuAnchor::execHasOpenSubMenus(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(SMenuAnchor **)&param_1[0xd].field_0x18 != (SMenuAnchor *)0x0) {
    bVar1 = SMenuAnchor::HasOpenSubMenus(*(SMenuAnchor **)&param_1[0xd].field_0x18);
    *(bool *)param_3 = bVar1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execIsOpen @ 146a376c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMenuAnchor::execIsOpen(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(SMenuAnchor **)&param_1[0xd].field_0x18 != (SMenuAnchor *)0x0) {
    bVar1 = SMenuAnchor::IsOpen(*(SMenuAnchor **)&param_1[0xd].field_0x18);
    *(bool *)param_3 = bVar1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execOpen @ 146a38070

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMenuAnchor::execOpen(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  int local_res8 [2];
  
  uVar4 = 0;
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
  bVar7 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(SMenuAnchor **)&param_1[0xd].field_0x18 != (SMenuAnchor *)0x0) {
    bVar3 = SMenuAnchor::IsOpen(*(SMenuAnchor **)&param_1[0xd].field_0x18);
    if (!bVar3) {
      lVar5 = (**(code **)(*(longlong *)param_1 + 0x2e0))(param_1);
      if (lVar5 != 0) {
        plVar6 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x2e0))(param_1);
        uVar4 = (**(code **)(*plVar6 + 0x340))(plVar6);
      }
      if (*(longlong *)&param_1[0xd].field_0x18 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      (**(code **)(**(longlong **)&param_1[0xd].field_0x18 + 0x250))
                (*(longlong **)&param_1[0xd].field_0x18,1,bVar7,uVar4);
    }
  }
  return;
}

// execSetPlacement @ 146a40cb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMenuAnchor::execSetPlacement(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SMenuAnchor *this;
  byte local_res8 [8];
  TAttribute<EMenuPlacement> local_28;
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SMenuAnchor **)&param_1[0xd].field_0x18;
  param_1[0xc].field_0x20 = local_res8[0];
  if (this != (SMenuAnchor *)0x0) {
    local_28.Value = (EMenuPlacement)local_res8[0];
    local_28.bIsSet = true;
    local_28.Getter._16_8_ = 0;
    local_28.Getter._0_8_ = 0;
    local_28.Getter._8_8_ = 0;
    SMenuAnchor::SetMenuPlacement(this,&local_28);
  }
  return;
}

// execShouldOpenDueToClick @ 146a44c40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMenuAnchor::execShouldOpenDueToClick(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(SMenuAnchor **)&param_1[0xd].field_0x18 != (SMenuAnchor *)0x0) {
    bVar1 = SMenuAnchor::ShouldOpenDueToClick(*(SMenuAnchor **)&param_1[0xd].field_0x18);
    *(bool *)param_3 = bVar1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execToggleOpen @ 146a44e00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UMenuAnchor::execToggleOpen(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SMenuAnchor *this;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int local_res8 [2];
  
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
  bVar4 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SMenuAnchor **)&param_1[0xd].field_0x18;
  if (this != (SMenuAnchor *)0x0) {
    pcVar2 = *(code **)(this->_padding_ + 0x250);
    bVar3 = SMenuAnchor::IsOpen(this);
    (*pcVar2)(this,!bVar3,bVar4,0);
  }
  return;
}

// operator() @ 1504f6bd0

bool __thiscall
`UMenuAnchor::InitShouldDeferPaintingAfterWindowContent'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5301645232897523511>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5301645232897523511>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f6c10

bool __thiscall `UMenuAnchor::InitShowMenuBackground'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5301645232897523499>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5301645232897523499>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f6c50

bool __thiscall `UMenuAnchor::InitUseApplicationMenuStack'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5301645232897523505>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5301645232897523505>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

