// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 15

// StaticClass @ 146963710

UClass * __cdecl UOverlay::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOverlay.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"Overlay",&Z_Registration_Info_UClass_UOverlay.InnerSingleton,
               StaticRegisterNativesUOverlay,0x1d8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UOverlay>,InternalVTableHelperCtorCaller<UOverlay>,local_res8,
               UPanelWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOverlay.InnerSingleton;
}

// UOverlay @ 14698c3c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UOverlay * __thiscall UOverlay::UOverlay(UOverlay *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->MyOverlay).Object = (SOverlay *)0x0;
  (this->MyOverlay).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UOverlay @ 14698c410

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UOverlay * __thiscall UOverlay::UOverlay(UOverlay *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UWidget::UWidget((UWidget *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 & 0xfe;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->MyOverlay).Object = (SOverlay *)0x0;
  (this->MyOverlay).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined1 *)&this->_padding_ = 1;
  UWidget::SetVisibilityInternal((UWidget *)this,SelfHitTestInvisible);
  return this;
}

// ~UOverlay @ 146993b00

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UOverlay::~UOverlay(UOverlay *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyOverlay).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&UPanelWidget::_vftable__for__UVisual__;
  this->_padding_ = (longlong)&UPanelWidget::_vftable__for__INotifyFieldValueChanged__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UWidget::~UWidget((UWidget *)this);
  return;
}

// AddChildToOverlay @ 1469a1490

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UOverlaySlot * __thiscall UOverlay::AddChildToOverlay(UOverlay *this,UWidget *param_1)

{
  int iVar1;
  UOverlaySlot *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UOverlaySlot *)UPanelWidget::AddChild((UPanelWidget *)this,param_1,(UPanelSlot *)0x0);
  if (pUVar2 != (UOverlaySlot *)0x0) {
    pUVar3 = UOverlaySlot::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UOverlaySlot *)0x0;
}

// GetPrivateStaticClass @ 1469d4cf0

UClass * __cdecl UOverlay::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOverlay.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"Overlay",&Z_Registration_Info_UClass_UOverlay.InnerSingleton,
               StaticRegisterNativesUOverlay,0x1d8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UOverlay>,InternalVTableHelperCtorCaller<UOverlay>,local_res8,
               UPanelWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOverlay.InnerSingleton;
}

// GetSlotClass @ 1469d8740

UClass * __thiscall UOverlay::GetSlotClass(UOverlay *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UOverlaySlot.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"OverlaySlot",&Z_Registration_Info_UClass_UOverlaySlot.InnerSingleton
               ,UOverlaySlot::StaticRegisterNativesUOverlaySlot,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOverlaySlot>,
               InternalVTableHelperCtorCaller<UOverlaySlot>,aFStackX_8,UPanelSlot::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOverlaySlot.InnerSingleton;
}

// OnSlotAdded @ 1469f0960

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UOverlay::OnSlotAdded(UOverlay *this,UPanelSlot *param_1)

{
  int iVar1;
  code *pcVar2;
  UClass *pUVar3;
  TSharedRef<SOverlay,1> *pTVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FString local_38;
  TSharedRef<SOverlay,1> local_28;
  FString local_18;
  
  if ((this->MyOverlay).Object != (SOverlay *)0x0) {
    if (param_1 == (UPanelSlot *)0x0) {
      pFVar5 = GetTypeName<UOverlaySlot>(&local_38);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar6);
    }
    pUVar3 = UOverlaySlot::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar5 = GetTypeName<UOverlaySlot>(&local_38);
      pwVar6 = L"";
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      pFVar5 = GetFullNameForCastLogError<UPanelSlot>(&local_18,param_1);
      if ((pFVar5->Data).ArrayNum != 0) {
        pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar6,pwVar7);
    }
    pcVar2 = *(code **)(param_1->_padding_ + 0x2c0);
    pTVar4 = TSharedPtr<SOverlay,1>::ToSharedRef(&this->MyOverlay,&local_28);
    (*pcVar2)(param_1,pTVar4);
  }
  return;
}

// OnSlotRemoved @ 1469f1520

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UOverlay::OnSlotRemoved(UOverlay *this,UPanelSlot *param_1)

{
  UWidget *this_00;
  code *pcVar1;
  SOverlay *this_01;
  bool bVar2;
  TSharedPtr<SWidget,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  if (((this->MyOverlay).Object != (SOverlay *)0x0) &&
     (this_00 = (param_1->Content).field0_0x0.DebugPtr, this_00 != (UWidget *)0x0)) {
    UWidget::GetCachedWidget(this_00,&local_28);
    bVar2 = local_28.Object == (SWidget *)0x0;
    if (local_28.Object != (SWidget *)0x0) {
      this_01 = TSharedPtr<SOverlay,1>::operator->(&this->MyOverlay);
      if (bVar2) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      local_18.Object = local_28.Object;
      local_18.SharedReferenceCount.ReferenceController =
           local_28.SharedReferenceCount.ReferenceController;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (local_28.Object == (SWidget *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      SOverlay::RemoveSlot(this_01,&local_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return;
}

// RebuildWidget @ 146a029a0

TSharedRef<SWidget,1> * __thiscall
UOverlay::RebuildWidget(UOverlay *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TSharedPtr<SOverlay,1> *pTVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  code *pcVar6;
  TReferenceControllerBase<1> *pTVar7;
  SOverlay *pSVar8;
  bool bVar9;
  FArguments *pFVar10;
  TSharedRef<SOverlay,1> *pTVar11;
  UClass *pUVar12;
  TSharedRef<SWidget,1> *pTVar13;
  longlong *plVar14;
  undefined1 local_res8 [8];
  TSharedRef<SWidget,1> *local_res10;
  T0RequiredArgs local_res18 [8];
  FLLMScope local_res20 [2];
  SOverlay *local_2a8;
  FSharedReferencer<1> local_2a0;
  FName local_298;
  FMemScope local_290;
  SOverlay *local_288;
  TReferenceControllerBase<1> *local_280;
  TSharedRef<SOverlay,1> local_278;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_268;
  FArguments local_250;
  
  local_res10 = __return_storage_ptr__;
  pFVar10 = SOverlay::FArguments::FArguments(&local_250);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_298 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_290,&local_298,true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            (&local_268,"SOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\Overlay.cpp"
             ,0x49,local_res18);
  FMemScope::~FMemScope(&local_290);
  FLLMScope::~FLLMScope(local_res20);
  pTVar11 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_268,&local_278,pFVar10);
  local_2a0.ReferenceController = (pTVar11->SharedReferenceCount).ReferenceController;
  local_2a8 = pTVar11->Object;
  if (local_2a0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2a0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_2a0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->MyOverlay;
  if (pTVar1 != (TSharedPtr<SOverlay,1> *)&local_2a8) {
    pTVar1->Object = local_2a8;
    local_2a8 = (SOverlay *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyOverlay).SharedReferenceCount,&local_2a0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_278.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_268._Widget.SharedReferenceCount.ReferenceController);
  DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
            ((FSlotArguments *)local_250._Slots.AllocatorInstance.Data,local_250._Slots.ArrayNum);
  if ((FSlotArguments *)local_250._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_250._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_250);
  plVar14 = (longlong *)this->_padding_;
  iVar3 = (int)this->_padding_;
  plVar2 = plVar14 + iVar3;
  while( true ) {
    if ((int)this->_padding_ != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UPanelSlot>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (plVar14 == plVar2) break;
    plVar5 = (longlong *)*plVar14;
    if (plVar5 != (longlong *)0x0) {
      pUVar12 = UOverlaySlot::StaticClass();
      iVar4 = (int)pUVar12->_padding_;
      if ((iVar4 <= *(int *)(plVar5[2] + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(plVar5[2] + 0x30) + (longlong)iVar4 * 8) ==
          &pUVar12->_padding_)) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UOverlay *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        plVar5[5] = (longlong)this;
        pcVar6 = *(code **)(*plVar5 + 0x2c0);
        if (pTVar1->Object == (SOverlay *)0x0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L"");
          if (bVar9) {
            pcVar6 = (code *)swi(3);
            pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar6)();
            return pTVar13;
          }
        }
        local_280 = (this->MyOverlay).SharedReferenceCount.ReferenceController;
        local_288 = pTVar1->Object;
        if (local_280 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_280->SharedReferenceCount = (atomic<int>)((int)local_280->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (local_288 == (SOverlay *)0x0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L"");
          if (bVar9) {
            pcVar6 = (code *)swi(3);
            pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar6)();
            return pTVar13;
          }
        }
        (*pcVar6)(plVar5,&local_288);
      }
    }
    plVar14 = plVar14 + 1;
  }
  if ((this->MyOverlay).Object == (SOverlay *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar6)();
      return pTVar13;
    }
  }
  pTVar7 = (this->MyOverlay).SharedReferenceCount.ReferenceController;
  pSVar8 = (this->MyOverlay).Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar8 == (SOverlay *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar6)();
      return pTVar13;
    }
  }
  pTVar13 = local_res10;
  local_res10->Object = (SWidget *)pSVar8;
  (local_res10->SharedReferenceCount).ReferenceController = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return pTVar13;
}

// ReleaseSlateResources @ 146a0ab20

void __thiscall UOverlay::ReleaseSlateResources(UOverlay *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UPanelWidget::ReleaseSlateResources((UPanelWidget *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyOverlay != (TSharedPtr<SOverlay,1> *)&local_18) {
    (this->MyOverlay).Object = (SOverlay *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyOverlay).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// ReplaceOverlayChildAt @ 146a0cff0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UOverlay::ReplaceOverlayChildAt(UOverlay *this,int param_1,UWidget *param_2)

{
  FObjectPtr_u_0 *this_00;
  FObjectPtr FVar1;
  longlong *plVar2;
  FSlotBase *this_01;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  SWidget *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  UClass *pUVar10;
  TSharedRef<SWidget,1> *pTVar11;
  FString *pFVar12;
  wchar_t *pwVar13;
  uint uVar14;
  wchar_t *pwVar15;
  TSharedRef<SWidget,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  uVar14 = 0;
  if (((param_1 < 0) || ((int)this->_padding_ <= param_1)) || (param_2 == (UWidget *)0x0)) {
    bVar7 = false;
  }
  else {
    uVar9 = uVar14;
    if (param_1 < (int)this->_padding_) {
      uVar9 = (uint)~param_1 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
    }
    this_00 = (FObjectPtr_u_0 *)(this->_padding_ + (longlong)param_1 * 8);
    if (*(longlong *)(this->_padding_ + (longlong)param_1 * 8) == 0) {
      pFVar12 = GetTypeName<UOverlaySlot>(&local_18);
      if ((pFVar12->Data).ArrayNum == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar13);
    }
    pUVar10 = UOverlaySlot::StaticClass();
    bVar7 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar10);
    if ((!bVar7) ||
       (FVar1.field0_0x0 = (FObjectPtr_u_0)this_00->Handle, FVar1.field0_0x0 == (UObject *)0x0)) {
      pFVar12 = GetTypeName<UOverlaySlot>(&local_38);
      pwVar13 = L"";
      if ((pFVar12->Data).ArrayNum == 0) {
        pwVar15 = L"";
      }
      else {
        pwVar15 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
      }
      pFVar12 = GetFullNameForCastLogError<UPanelSlot>(&local_28,(UPanelSlot *)this_00->Handle);
      if ((pFVar12->Data).ArrayNum != 0) {
        pwVar13 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar13,pwVar15);
    }
    if ((*(UWidget **)((longlong)FVar1.field0_0x0 + 0x30) == (UWidget *)0x0) ||
       (*(UWidget **)((longlong)FVar1.field0_0x0 + 0x30) != param_2)) {
      (**(code **)(param_2->_padding_ + 0x2d0))(param_2);
      plVar2 = *(longlong **)((longlong)FVar1.field0_0x0 + 0x30);
      if (plVar2 != (longlong *)0x0) {
        plVar2[6] = 0;
        (**(code **)(*plVar2 + 0x2d0))();
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      *(UWidget **)((longlong)FVar1.field0_0x0 + 0x30) = param_2;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)FVar1.field0_0x0);
      }
      (param_2->Slot).field0_0x0.DebugPtr = (UPanelSlot *)FVar1.field0_0x0;
      this_01 = *(FSlotBase **)((longlong)FVar1.field0_0x0 + 0x38);
      if (this_01 != (FSlotBase *)0x0) {
        if (*(UWidget **)((longlong)FVar1.field0_0x0 + 0x30) == (UWidget *)0x0) {
          local_58.Object = SNullWidget::NullWidget.Object;
          local_58.SharedReferenceCount.ReferenceController =
               SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
          if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                 = (atomic<int>)
                   ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                         SharedReferenceCount + 1);
            UNLOCK();
          }
          pTVar11 = &local_58;
          uVar9 = uVar14;
          uVar14 = 1;
        }
        else {
          pTVar11 = UWidget::TakeWidget(*(UWidget **)((longlong)FVar1.field0_0x0 + 0x30),&local_48);
          uVar9 = 2;
        }
        FSlotBase::DetatchParentFromContent(this_01);
        pTVar4 = (pTVar11->SharedReferenceCount).ReferenceController;
        pSVar5 = (this_01->Widget).Object;
        pTVar6 = (this_01->Widget).SharedReferenceCount.ReferenceController;
        (this_01->Widget).Object = pTVar11->Object;
        (this_01->Widget).SharedReferenceCount.ReferenceController = pTVar4;
        pTVar11->Object = pSVar5;
        (pTVar11->SharedReferenceCount).ReferenceController = pTVar6;
        FSlotBase::AfterContentOrOwnerAssigned(this_01);
        if (uVar9 != 0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_48.SharedReferenceCount.ReferenceController);
        }
        if (uVar14 != 0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_58.SharedReferenceCount.ReferenceController);
        }
      }
    }
    bVar7 = true;
  }
  return bVar7;
}

// StaticRegisterNativesUOverlay @ 146a1eba0

void __cdecl UOverlay::StaticRegisterNativesUOverlay(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UOverlay_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddChildToOverlay @ 146a314f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UOverlay::execAddChildToOverlay(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  FProperty *pFVar3;
  code *pcVar4;
  TObjectPtr<UWidget>_u_0 TVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  UPanelSlot *pUVar9;
  TObjectPtr<UWidget>_u_0 local_res10;
  undefined8 local_res18;
  UPanelSlot *local_28 [2];
  
  local_res10.DebugPtr = (UWidget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  TVar5 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res10.DebugPtr != (UWidget *)0x0) &&
     ((param_1[0xb].field_0x8 != '\0' || (*(int *)(param_1 + 0xb) < 1)))) {
    (**(code **)((local_res10.DebugPtr)->_padding_ + 0x2d0))(local_res10.DebugPtr);
    uVar2 = *(uint *)&param_1->field_0x8;
    local_res18 = 0;
    pUVar8 = (UClass *)(**(code **)(*(longlong *)param_1 + 0x318))(param_1);
    pUVar9 = NewObject<UPanelSlot>
                       (param_1,pUVar8,(FName)0x0,(uVar2 >> 6 & 1) * 0x40 + RF_Transactional,
                        (UObject *)0x0,false,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
    }
    (pUVar9->Content).field0_0x0.DebugPtr = (UWidget *)TVar5;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    (pUVar9->Parent).field0_0x0.DebugPtr = (UPanelWidget *)param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UPanelSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    (((TObjectPtr<UPanelSlot> *)((longlong)TVar5 + 0x30))->field0_0x0).DebugPtr = pUVar9;
    puVar1 = &param_1[10].field_0x20;
    local_28[0] = pUVar9;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UPanelSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    if (((*(UPanelSlot ***)puVar1 <= local_28) &&
        (local_28 < *(UPanelSlot ***)puVar1 + *(int *)&param_1[0xb].field_0x4)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = *(int *)(param_1 + 0xb);
    if (iVar7 == *(int *)&param_1[0xb].field_0x4) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)puVar1,(int *)&param_1[0xb].field_0x4);
    }
    *(int *)(param_1 + 0xb) = iVar7 + 1;
    *(UPanelSlot **)(*(longlong *)puVar1 + (longlong)iVar7 * 8) = local_28[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28[0] != (UPanelSlot *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)local_28[0]);
    }
    (**(code **)(*(longlong *)param_1 + 800))(param_1,pUVar9);
    UWidget::InvalidateLayoutAndVolatility((UWidget *)param_1);
    if (pUVar9 != (UPanelSlot *)0x0) {
      pUVar8 = UOverlaySlot::StaticClass();
      iVar7 = (int)pUVar8->_padding_;
      if ((iVar7 <= *(int *)(pUVar9->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar7 * 8) ==
          &pUVar8->_padding_)) {
        *(UPanelSlot **)param_3 = pUVar9;
        return;
      }
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execReplaceOverlayChildAt @ 146a38c90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UOverlay::execReplaceOverlayChildAt(UObject *param_1,FFrame *param_2,void *param_3)

{
  FObjectPtr_u_0 *this;
  FProperty *pFVar1;
  FObjectPtr FVar2;
  longlong *plVar3;
  FSlotBase *this_00;
  code *pcVar4;
  TReferenceControllerBase<1> *pTVar5;
  SWidget *pSVar6;
  TReferenceControllerBase<1> *pTVar7;
  UObject *pUVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  UClass *pUVar12;
  TSharedRef<SWidget,1> *pTVar13;
  FString *pFVar14;
  longlong lVar15;
  wchar_t *pwVar16;
  uint uVar17;
  wchar_t *pwVar18;
  uint local_res8 [2];
  UObject *local_res10;
  TSharedRef<SWidget,1> local_78;
  TSharedRef<SWidget,1> local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  uVar17 = 0;
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar8 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar15 = (longlong)(int)local_res8[0];
  if ((((int)local_res8[0] < 0) || (*(int *)(param_1 + 0xb) <= (int)local_res8[0])) ||
     (local_res10 == (UObject *)0x0)) {
    uVar10 = 0;
  }
  else {
    uVar11 = uVar17;
    if ((int)local_res8[0] < *(int *)(param_1 + 0xb)) {
      uVar11 = ~local_res8[0] >> 0x1f;
    }
    if (uVar11 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    this = (FObjectPtr_u_0 *)(*(longlong *)&param_1[10].field_0x20 + lVar15 * 8);
    if (*(longlong *)(*(longlong *)&param_1[10].field_0x20 + lVar15 * 8) == 0) {
      pFVar14 = GetTypeName<UOverlaySlot>(&local_38);
      if ((pFVar14->Data).ArrayNum == 0) {
        pwVar16 = L"";
      }
      else {
        pwVar16 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar16);
    }
    pUVar12 = UOverlaySlot::StaticClass();
    bVar9 = FObjectPtr::IsA((FObjectPtr *)this,pUVar12);
    if ((!bVar9) ||
       (FVar2.field0_0x0 = (FObjectPtr_u_0)this->Handle, FVar2.field0_0x0 == (UObject *)0x0)) {
      pFVar14 = GetTypeName<UOverlaySlot>(&local_58);
      pwVar16 = L"";
      if ((pFVar14->Data).ArrayNum == 0) {
        pwVar18 = L"";
      }
      else {
        pwVar18 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
      }
      pFVar14 = GetFullNameForCastLogError<UPanelSlot>(&local_48,(UPanelSlot *)this->Handle);
      if ((pFVar14->Data).ArrayNum != 0) {
        pwVar16 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar16,pwVar18);
    }
    if (*(UObject **)((longlong)FVar2.field0_0x0 + 0x30) == (UObject *)0x0) {
      bVar9 = pUVar8 == (UObject *)0x0;
    }
    else {
      bVar9 = *(UObject **)((longlong)FVar2.field0_0x0 + 0x30) == pUVar8;
    }
    if (!bVar9) {
      (**(code **)(*(longlong *)pUVar8 + 0x2d0))(pUVar8);
      plVar3 = *(longlong **)((longlong)FVar2.field0_0x0 + 0x30);
      if (plVar3 != (longlong *)0x0) {
        plVar3[6] = 0;
        (**(code **)(*plVar3 + 0x2d0))();
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar8);
      }
      *(UObject **)((longlong)FVar2.field0_0x0 + 0x30) = pUVar8;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)FVar2.field0_0x0);
      }
      *(FObjectPtr_u_0 *)&pUVar8[1].field_0x8 = (UObject *)FVar2.field0_0x0;
      this_00 = *(FSlotBase **)((longlong)FVar2.field0_0x0 + 0x38);
      if (this_00 != (FSlotBase *)0x0) {
        if (*(UWidget **)((longlong)FVar2.field0_0x0 + 0x30) == (UWidget *)0x0) {
          local_78.Object = SNullWidget::NullWidget.Object;
          local_78.SharedReferenceCount.ReferenceController =
               SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
          if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                 = (atomic<int>)
                   ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                         SharedReferenceCount + 1);
            UNLOCK();
          }
          pTVar13 = &local_78;
          uVar11 = uVar17;
          uVar17 = 1;
        }
        else {
          pTVar13 = UWidget::TakeWidget(*(UWidget **)((longlong)FVar2.field0_0x0 + 0x30),&local_68);
          uVar11 = 2;
        }
        FSlotBase::DetatchParentFromContent(this_00);
        pTVar5 = (pTVar13->SharedReferenceCount).ReferenceController;
        pSVar6 = (this_00->Widget).Object;
        pTVar7 = (this_00->Widget).SharedReferenceCount.ReferenceController;
        (this_00->Widget).Object = pTVar13->Object;
        (this_00->Widget).SharedReferenceCount.ReferenceController = pTVar5;
        pTVar13->Object = pSVar6;
        (pTVar13->SharedReferenceCount).ReferenceController = pTVar7;
        FSlotBase::AfterContentOrOwnerAssigned(this_00);
        if (uVar11 != 0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_68.SharedReferenceCount.ReferenceController);
        }
        if (uVar17 != 0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_78.SharedReferenceCount.ReferenceController);
        }
      }
    }
    uVar10 = 1;
  }
  *(undefined1 *)param_3 = uVar10;
  return;
}

