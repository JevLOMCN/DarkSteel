// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 28

// GetActiveWidgetIndex_WrapperImpl @ 146a4bc40

void __cdecl UWidgetSwitcher::GetActiveWidgetIndex_WrapperImpl(void *param_1,void *param_2)

{
  int iVar1;
  
  if (*(SWidgetSwitcher **)((longlong)param_1 + 0x1d0) != (SWidgetSwitcher *)0x0) {
    iVar1 = SWidgetSwitcher::GetActiveWidgetIndex(*(SWidgetSwitcher **)((longlong)param_1 + 0x1d0));
    *(int *)param_2 = iVar1;
    return;
  }
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x1c8);
  return;
}

// SetActiveWidgetIndex_WrapperImpl @ 146a4bc80

void __cdecl UWidgetSwitcher::SetActiveWidgetIndex_WrapperImpl(void *param_1,void *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000146a4bc85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x330))(param_1,*(undefined4 *)param_2);
  return;
}

// StaticClass @ 146a4bca0

UClass * __cdecl UWidgetSwitcher::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetSwitcher.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetSwitcher",
               &Z_Registration_Info_UClass_UWidgetSwitcher.InnerSingleton,
               StaticRegisterNativesUWidgetSwitcher,0x1e0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UWidgetSwitcher>,InternalVTableHelperCtorCaller<UWidgetSwitcher>
               ,local_res8,UPanelWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetSwitcher.InnerSingleton;
}

// UWidgetSwitcher @ 146a57b70

UWidgetSwitcher * __thiscall
UWidgetSwitcher::UWidgetSwitcher(UWidgetSwitcher *this,FVTableHelper *param_1)

{
  UPanelWidget::UPanelWidget((UPanelWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->MyWidgetSwitcher).Object = (SWidgetSwitcher *)0x0;
  (this->MyWidgetSwitcher).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UWidgetSwitcher @ 146a57bc0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidgetSwitcher * __thiscall
UWidgetSwitcher::UWidgetSwitcher(UWidgetSwitcher *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UPanelWidget::UPanelWidget((UPanelWidget *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 | 1;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->MyWidgetSwitcher).Object = (SWidgetSwitcher *)0x0;
  (this->MyWidgetSwitcher).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  UWidget::SetVisibilityInternal((UWidget *)this,SelfHitTestInvisible);
  return this;
}

// ~UWidgetSwitcher @ 146a58d20

void __thiscall UWidgetSwitcher::~UWidgetSwitcher(UWidgetSwitcher *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyWidgetSwitcher).SharedReferenceCount.ReferenceController);
  UPanelWidget::~UPanelWidget((UPanelWidget *)this);
  return;
}

// GetActiveWidget @ 146a72850

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidget * __thiscall UWidgetSwitcher::GetActiveWidget(UWidgetSwitcher *this)

{
  SWidgetSwitcher *this_00;
  int iVar1;
  UWidget *pUVar2;
  
  this_00 = (this->MyWidgetSwitcher).Object;
  if (this_00 != (SWidgetSwitcher *)0x0) {
    iVar1 = SWidgetSwitcher::GetActiveWidgetIndex(this_00);
    pUVar2 = GetWidgetAtIndex(this,iVar1);
    return pUVar2;
  }
  pUVar2 = GetWidgetAtIndex(this,this->ActiveWidgetIndex);
  return pUVar2;
}

// GetActiveWidgetIndex @ 146a72950

int __thiscall UWidgetSwitcher::GetActiveWidgetIndex(UWidgetSwitcher *this)

{
  SWidgetSwitcher *this_00;
  int iVar1;
  
  this_00 = (this->MyWidgetSwitcher).Object;
  if (this_00 != (SWidgetSwitcher *)0x0) {
    iVar1 = SWidgetSwitcher::GetActiveWidgetIndex(this_00);
    return iVar1;
  }
  return this->ActiveWidgetIndex;
}

// GetFieldNotificationDescriptor @ 146a76580

IClassDescriptor * __thiscall UWidgetSwitcher::GetFieldNotificationDescriptor(UWidgetSwitcher *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UWidgetSwitcher::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetNumWidgets @ 146a77420

int __thiscall UWidgetSwitcher::GetNumWidgets(UWidgetSwitcher *this)

{
  SWidgetSwitcher *pSVar1;
  
  pSVar1 = (this->MyWidgetSwitcher).Object;
  if (pSVar1 != (SWidgetSwitcher *)0x0) {
    return (pSVar1->AllChildren).Children.ArrayNum;
  }
  return (int)this->_padding_;
}

// GetPrivateStaticClass @ 146a78510

UClass * __cdecl UWidgetSwitcher::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetSwitcher.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetSwitcher",
               &Z_Registration_Info_UClass_UWidgetSwitcher.InnerSingleton,
               StaticRegisterNativesUWidgetSwitcher,0x1e0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UWidgetSwitcher>,InternalVTableHelperCtorCaller<UWidgetSwitcher>
               ,local_res8,UPanelWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetSwitcher.InnerSingleton;
}

// GetSlotClass @ 146a793e0

UClass * __thiscall UWidgetSwitcher::GetSlotClass(UWidgetSwitcher *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetSwitcherSlot.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetSwitcherSlot",
               &Z_Registration_Info_UClass_UWidgetSwitcherSlot.InnerSingleton,
               UWidgetSwitcherSlot::StaticRegisterNativesUWidgetSwitcherSlot,0x58,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UWidgetSwitcherSlot>,
               InternalVTableHelperCtorCaller<UWidgetSwitcherSlot>,aFStackX_8,
               UPanelSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetSwitcherSlot.InnerSingleton;
}

// GetWidgetAtIndex @ 146a79930

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidget * __thiscall UWidgetSwitcher::GetWidgetAtIndex(UWidgetSwitcher *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  UWidget *pUVar4;
  
  if ((-1 < param_1) && (param_1 < (int)this->_padding_)) {
    uVar3 = 0;
    if (param_1 < (int)this->_padding_) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar4 = (UWidget *)(*pcVar1)();
        return pUVar4;
      }
    }
    return *(UWidget **)(*(longlong *)(this->_padding_ + (longlong)param_1 * 8) + 0x30);
  }
  return (UWidget *)0x0;
}

// OnSlotAdded @ 146a865b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWidgetSwitcher::OnSlotAdded(UWidgetSwitcher *this,UPanelSlot *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UClass *pUVar4;
  TSharedRef<SWidgetSwitcher,1> *pTVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  FString local_48;
  TSharedRef<SWidgetSwitcher,1> local_38;
  FString local_28;
  FString local_18;
  
  if ((this->MyWidgetSwitcher).Object != (SWidgetSwitcher *)0x0) {
    if (param_1 == (UPanelSlot *)0x0) {
      pFVar6 = GetTypeName<UWidgetSwitcherSlot>(&local_48);
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar7);
    }
    pUVar4 = UWidgetSwitcherSlot::StaticClass();
    iVar3 = (int)pUVar4->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8)
        != &pUVar4->_padding_)) {
      pFVar6 = GetTypeName<UWidgetSwitcherSlot>(&local_28);
      pwVar7 = L"";
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
      pFVar6 = GetFullNameForCastLogError<UPanelSlot>(&local_18,param_1);
      if ((pFVar6->Data).ArrayNum != 0) {
        pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar7,pwVar8);
    }
    pTVar5 = TSharedPtr<SWidgetSwitcher,1>::ToSharedRef(&this->MyWidgetSwitcher,&local_38);
    UWidgetSwitcherSlot::BuildSlot((UWidgetSwitcherSlot *)param_1,pTVar5);
    if ((this->MyWidgetSwitcher).Object == (SWidgetSwitcher *)0x0) {
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
    iVar3 = SWidgetSwitcher::GetActiveWidgetIndex((this->MyWidgetSwitcher).Object);
    this->ActiveWidgetIndex = iVar3;
  }
  return;
}

// OnSlotRemoved @ 146a868e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWidgetSwitcher::OnSlotRemoved(UWidgetSwitcher *this,UPanelSlot *param_1)

{
  UWidget *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  SWidgetSwitcher *pSVar4;
  TSharedPtr<SWidget,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  if (((this->MyWidgetSwitcher).Object != (SWidgetSwitcher *)0x0) &&
     (this_00 = (param_1->Content).field0_0x0.DebugPtr, this_00 != (UWidget *)0x0)) {
    UWidget::GetCachedWidget(this_00,&local_28);
    if (local_28.Object != (SWidget *)0x0) {
      pSVar4 = TSharedPtr<SWidgetSwitcher,1>::operator->(&this->MyWidgetSwitcher);
      if (local_28.Object == (SWidget *)0x0) {
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
      SWidgetSwitcher::RemoveSlot(pSVar4,&local_18);
      pSVar4 = TSharedPtr<SWidgetSwitcher,1>::operator->(&this->MyWidgetSwitcher);
      iVar3 = SWidgetSwitcher::GetActiveWidgetIndex(pSVar4);
      this->ActiveWidgetIndex = iVar3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return;
}

// RebuildWidget @ 146a8c380

TSharedRef<SWidget,1> * __thiscall
UWidgetSwitcher::RebuildWidget(UWidgetSwitcher *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  UWidgetSwitcherSlot *this_00;
  TReferenceControllerBase<1> *pTVar5;
  SWidgetSwitcher *pSVar6;
  code *pcVar7;
  FSharedReferencer<1> FVar8;
  bool bVar9;
  char cVar10;
  byte bVar11;
  FArguments *pFVar12;
  TSharedRef<SWidget,1> *pTVar13;
  UClass *pUVar14;
  undefined8 *puVar15;
  undefined1 local_res8 [8];
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  FName local_res20;
  SWidgetSwitcher *local_2b8;
  FSharedReferencer<1> local_2b0;
  TSlateDecl<SWidgetSwitcher,RequiredArgs::T0RequiredArgs> local_2a8;
  FMemScope local_290;
  TSharedRef<SWidgetSwitcher,1> local_288;
  undefined1 local_278 [528];
  undefined1 local_68 [40];
  
  pFVar12 = SWidgetSwitcher::FArguments::FArguments((FArguments *)local_278);
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_290,&local_res20,true);
  TSlateDecl<SWidgetSwitcher,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SWidgetSwitcher,RequiredArgs::T0RequiredArgs>
            (&local_2a8,"SWidgetSwitcher",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\WidgetSwitcher.cpp"
             ,0x89,local_res10);
  FMemScope::~FMemScope(&local_290);
  FLLMScope::~FLLMScope(local_res18);
  pSVar6 = local_2a8._Widget.Object;
  if (local_2a8._Widget.Object == (SWidgetSwitcher *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar7)();
      return pTVar13;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_2a8._Widget.Object,(FSlateBaseNamedArgs *)pFVar12);
  SWidgetSwitcher::Construct(local_2a8._Widget.Object,pFVar12);
  if (local_2a8._Widget.Object == (SWidgetSwitcher *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar7)();
      return pTVar13;
    }
  }
  if (((local_2a8._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar10 = (**(code **)((local_2a8._Widget.Object)->_padding_ + 0x228))(local_2a8._Widget.Object);
    bVar11 = 0;
    if (cVar10 == '\0') goto LAB_146a8c4c7;
  }
  bVar11 = 0x20;
LAB_146a8c4c7:
  FVar8.ReferenceController = local_2a8._Widget.SharedReferenceCount.ReferenceController;
  *(byte *)&(local_2a8._Widget.Object)->_padding_ =
       (byte)(local_2a8._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_2a8._Widget.Object)->_padding_ =
       (byte)(local_2a8._Widget.Object)->_padding_ | bVar11;
  pbVar1 = (byte *)((longlong)&(local_2a8._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  local_2a8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_2a8._Widget.Object = (SWidgetSwitcher *)0x0;
  if (pSVar6 == (SWidgetSwitcher *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar7)();
      return pTVar13;
    }
  }
  local_2b8 = pSVar6;
  local_2b0.ReferenceController = FVar8.ReferenceController;
  if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->MyWidgetSwitcher != (TSharedPtr<SWidgetSwitcher,1> *)&local_2b8) {
    (this->MyWidgetSwitcher).Object = pSVar6;
    local_2b8 = (SWidgetSwitcher *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyWidgetSwitcher).SharedReferenceCount,&local_2b0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2b0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
  if ((void *)local_68._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_68._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  DestructItems<TBasicLayoutWidgetSlot<FBasicLayoutWidgetSlot>::FSlotArguments,int>
            ((FSlotArguments *)local_278._504_8_,local_278._512_4_);
  if ((FSlotArguments *)local_278._504_8_ != (FSlotArguments *)0x0) {
    FMemory::Free((void *)local_278._504_8_);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_278);
  puVar15 = (undefined8 *)this->_padding_;
  iVar3 = (int)this->_padding_;
  puVar2 = puVar15 + iVar3;
  while( true ) {
    if ((int)this->_padding_ != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UPanelSlot>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (puVar15 == puVar2) break;
    this_00 = (UWidgetSwitcherSlot *)*puVar15;
    if (this_00 != (UWidgetSwitcherSlot *)0x0) {
      pUVar14 = UWidgetSwitcherSlot::StaticClass();
      iVar4 = (int)pUVar14->_padding_;
      if ((iVar4 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
          &pUVar14->_padding_)) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UWidgetSwitcher *)0x0)
           ) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        this_00->_padding_ = (longlong)this;
        if ((this->MyWidgetSwitcher).Object == (SWidgetSwitcher *)0x0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L"");
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar7)();
            return pTVar13;
          }
        }
        local_288.SharedReferenceCount.ReferenceController =
             (this->MyWidgetSwitcher).SharedReferenceCount.ReferenceController;
        local_288.Object = (this->MyWidgetSwitcher).Object;
        if (local_288.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_288.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_288.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if (local_288.Object == (SWidgetSwitcher *)0x0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L"");
          if (bVar9) {
            pcVar7 = (code *)swi(3);
            pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar7)();
            return pTVar13;
          }
        }
        UWidgetSwitcherSlot::BuildSlot(this_00,&local_288);
      }
    }
    puVar15 = puVar15 + 1;
  }
  if ((this->MyWidgetSwitcher).Object == (SWidgetSwitcher *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar7)();
      return pTVar13;
    }
  }
  pTVar5 = (this->MyWidgetSwitcher).SharedReferenceCount.ReferenceController;
  pSVar6 = (this->MyWidgetSwitcher).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar6 == (SWidgetSwitcher *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      pTVar13 = (TSharedRef<SWidget,1> *)(*pcVar7)();
      return pTVar13;
    }
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar6;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 146a8eb20

void __thiscall UWidgetSwitcher::ReleaseSlateResources(UWidgetSwitcher *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UPanelWidget::ReleaseSlateResources((UPanelWidget *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyWidgetSwitcher != (TSharedPtr<SWidgetSwitcher,1> *)&local_18) {
    (this->MyWidgetSwitcher).Object = (SWidgetSwitcher *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyWidgetSwitcher).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// SetActiveWidget @ 146a92370

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWidgetSwitcher::SetActiveWidget(UWidgetSwitcher *this,UWidget *param_1)

{
  SWidgetSwitcher *this_00;
  int iVar1;
  int iVar2;
  FFieldId local_18;
  
  iVar1 = UPanelWidget::GetChildIndex((UPanelWidget *)this,param_1);
  if (this->ActiveWidgetIndex != iVar1) {
    this->ActiveWidgetIndex = iVar1;
    local_18.FieldName = FFieldNotificationClassDescriptor::ActiveWidgetIndex.FieldName;
    local_18.BitNumber = FFieldNotificationClassDescriptor::ActiveWidgetIndex.BitNumber;
    UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
    this_00 = (this->MyWidgetSwitcher).Object;
    if (this_00 != (SWidgetSwitcher *)0x0) {
      iVar1 = (int)this->_padding_ + -1;
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      if (this->ActiveWidgetIndex < iVar1) {
        iVar1 = this->ActiveWidgetIndex;
      }
      iVar2 = 0;
      if (0 < iVar1) {
        iVar2 = iVar1;
      }
      SWidgetSwitcher::SetActiveWidgetIndex(this_00,iVar2);
      return;
    }
  }
  return;
}

// SetActiveWidgetIndex @ 146a92400

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWidgetSwitcher::SetActiveWidgetIndex(UWidgetSwitcher *this,int param_1)

{
  SWidgetSwitcher *this_00;
  int iVar1;
  int iVar2;
  FFieldId local_18;
  
  if (this->ActiveWidgetIndex != param_1) {
    this->ActiveWidgetIndex = param_1;
    local_18.FieldName = FFieldNotificationClassDescriptor::ActiveWidgetIndex.FieldName;
    local_18.BitNumber = FFieldNotificationClassDescriptor::ActiveWidgetIndex.BitNumber;
    UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
    this_00 = (this->MyWidgetSwitcher).Object;
    if (this_00 != (SWidgetSwitcher *)0x0) {
      iVar2 = (int)this->_padding_ + -1;
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      if (this->ActiveWidgetIndex < iVar2) {
        iVar2 = this->ActiveWidgetIndex;
      }
      iVar1 = 0;
      if (0 < iVar2) {
        iVar1 = iVar2;
      }
      SWidgetSwitcher::SetActiveWidgetIndex(this_00,iVar1);
      return;
    }
  }
  return;
}

// SetActiveWidgetIndexForSlateWidget @ 146a92490

void __thiscall UWidgetSwitcher::SetActiveWidgetIndexForSlateWidget(UWidgetSwitcher *this)

{
  SWidgetSwitcher *this_00;
  int iVar1;
  int iVar2;
  
  this_00 = (this->MyWidgetSwitcher).Object;
  if (this_00 != (SWidgetSwitcher *)0x0) {
    iVar2 = (int)this->_padding_ + -1;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    if (this->ActiveWidgetIndex < iVar2) {
      iVar2 = this->ActiveWidgetIndex;
    }
    iVar1 = 0;
    if (0 < iVar2) {
      iVar1 = iVar2;
    }
    SWidgetSwitcher::SetActiveWidgetIndex(this_00,iVar1);
    return;
  }
  return;
}

// StaticRegisterNativesUWidgetSwitcher @ 146a96990

void __cdecl UWidgetSwitcher::StaticRegisterNativesUWidgetSwitcher(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_UWidgetSwitcher_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 146a97680

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWidgetSwitcher::SynchronizeProperties(UWidgetSwitcher *this)

{
  SWidgetSwitcher *this_00;
  int iVar1;
  int iVar2;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  this_00 = (this->MyWidgetSwitcher).Object;
  if (this_00 != (SWidgetSwitcher *)0x0) {
    iVar2 = (int)this->_padding_ + -1;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    if (this->ActiveWidgetIndex < iVar2) {
      iVar2 = this->ActiveWidgetIndex;
    }
    iVar1 = 0;
    if (0 < iVar2) {
      iVar1 = iVar2;
    }
    SWidgetSwitcher::SetActiveWidgetIndex(this_00,iVar1);
    return;
  }
  return;
}

// execGetActiveWidget @ 146aa0890

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidgetSwitcher::execGetActiveWidget(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  UWidget *pUVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(SWidgetSwitcher **)&param_1[0xb].field_0x18 == (SWidgetSwitcher *)0x0) {
    iVar1 = *(int *)&param_1[0xb].field_0x10;
  }
  else {
    iVar1 = SWidgetSwitcher::GetActiveWidgetIndex(*(SWidgetSwitcher **)&param_1[0xb].field_0x18);
  }
  pUVar2 = GetWidgetAtIndex((UWidgetSwitcher *)param_1,iVar1);
  *(UWidget **)param_3 = pUVar2;
  return;
}

// execGetActiveWidgetIndex @ 146aa08f0

void __cdecl
UWidgetSwitcher::execGetActiveWidgetIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(SWidgetSwitcher **)&param_1[0xb].field_0x18 != (SWidgetSwitcher *)0x0) {
    iVar1 = SWidgetSwitcher::GetActiveWidgetIndex(*(SWidgetSwitcher **)&param_1[0xb].field_0x18);
    *(int *)param_3 = iVar1;
    return;
  }
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0xb].field_0x10;
  return;
}

// execGetNumWidgets @ 146aa25f0

void __cdecl UWidgetSwitcher::execGetNumWidgets(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0xb].field_0x18 != 0) {
    *(undefined4 *)param_3 = *(undefined4 *)(*(longlong *)&param_1[0xb].field_0x18 + 0x260);
    return;
  }
  *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 0xb);
  return;
}

// execGetWidgetAtIndex @ 146aa2b80

void __cdecl UWidgetSwitcher::execGetWidgetAtIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  uint local_res8 [2];
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar4 = (longlong)(int)local_res8[0];
  if (((int)local_res8[0] < 0) || (*(int *)(param_1 + 0xb) <= (int)local_res8[0])) {
    *(undefined8 *)param_3 = 0;
  }
  else {
    uVar5 = 0;
    if ((int)local_res8[0] < *(int *)(param_1 + 0xb)) {
      uVar5 = ~local_res8[0] >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(undefined8 *)param_3 =
         *(undefined8 *)(*(longlong *)(*(longlong *)&param_1[10].field_0x20 + lVar4 * 8) + 0x30);
  }
  return;
}

// execSetActiveWidget @ 146aa7290

void __cdecl UWidgetSwitcher::execSetActiveWidget(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x338))(param_1,local_res8);
  return;
}

// execSetActiveWidgetIndex @ 146aa7320

void __cdecl
UWidgetSwitcher::execSetActiveWidgetIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x330))(param_1,local_res8[0]);
  return;
}

