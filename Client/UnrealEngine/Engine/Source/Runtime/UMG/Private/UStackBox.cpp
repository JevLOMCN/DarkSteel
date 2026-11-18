// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 20

// GetOrientation_WrapperImpl @ 146964400

void __cdecl UStackBox::GetOrientation_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x1c8);
  return;
}

// SetOrientation_WrapperImpl @ 146964440

void __cdecl UStackBox::SetOrientation_WrapperImpl(void *param_1,void *param_2)

{
  SWidget *this;
  uint uVar1;
  
  uVar1 = (uint)*(byte *)param_2;
  if (*(byte *)((longlong)param_1 + 0x1c8) != uVar1) {
    *(byte *)((longlong)param_1 + 0x1c8) = *(byte *)param_2;
    this = *(SWidget **)((longlong)param_1 + 0x1d0);
    if (this != (SWidget *)0x0) {
      if (*(uint *)&this[1].field_0x30 != uVar1) {
        *(uint *)&this[1].field_0x30 = uVar1;
        SWidget::Invalidate(this,Layout);
        return;
      }
      return;
    }
  }
  return;
}

// StaticClass @ 146964490

UClass * __cdecl UStackBox::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStackBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"StackBox",&Z_Registration_Info_UClass_UStackBox.InnerSingleton,
               StaticRegisterNativesUStackBox,0x1e0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UStackBox>,InternalVTableHelperCtorCaller<UStackBox>,local_res8,
               UPanelWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStackBox.InnerSingleton;
}

// UStackBox @ 14698dec0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UStackBox * __thiscall UStackBox::UStackBox(UStackBox *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->MyBox).Object = (SStackBox *)0x0;
  (this->MyBox).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UStackBox @ 14698df10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UStackBox * __thiscall UStackBox::UStackBox(UStackBox *this)

{
  byte *pbVar1;
  FObjectInitializer *pFVar2;
  
  pFVar2 = FObjectInitializer::Get();
  UWidget::UWidget((UWidget *)this,pFVar2);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 & 0xfe;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->MyBox).Object = (SStackBox *)0x0;
  (this->MyBox).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined1 *)&this->_padding_ = 1;
  UWidget::SetVisibilityInternal((UWidget *)this,SelfHitTestInvisible);
  return this;
}

// ~UStackBox @ 146994530

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UStackBox::~UStackBox(UStackBox *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyBox).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&UPanelWidget::_vftable__for__UVisual__;
  this->_padding_ = (longlong)&UPanelWidget::_vftable__for__INotifyFieldValueChanged__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UWidget::~UWidget((UWidget *)this);
  return;
}

// AddChildToStackBox @ 1469a14e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UStackBoxSlot * __thiscall UStackBox::AddChildToStackBox(UStackBox *this,UWidget *param_1)

{
  int iVar1;
  UStackBoxSlot *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UStackBoxSlot *)UPanelWidget::AddChild((UPanelWidget *)this,param_1,(UPanelSlot *)0x0);
  if (pUVar2 != (UStackBoxSlot *)0x0) {
    pUVar3 = UStackBoxSlot::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UStackBoxSlot *)0x0;
}

// GetOrientation @ 1469d2e50

EOrientation __thiscall UStackBox::GetOrientation(UStackBox *this)

{
  return (EOrientation)(this->Orientation).Value;
}

// GetPrivateStaticClass @ 1469d6050

UClass * __cdecl UStackBox::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStackBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"StackBox",&Z_Registration_Info_UClass_UStackBox.InnerSingleton,
               StaticRegisterNativesUStackBox,0x1e0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UStackBox>,InternalVTableHelperCtorCaller<UStackBox>,local_res8,
               UPanelWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStackBox.InnerSingleton;
}

// GetSlotClass @ 1469d87a0

UClass * __thiscall UStackBox::GetSlotClass(UStackBox *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UStackBoxSlot.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"StackBoxSlot",
               &Z_Registration_Info_UClass_UStackBoxSlot.InnerSingleton,
               UStackBoxSlot::StaticRegisterNativesUStackBoxSlot,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UStackBoxSlot>,
               InternalVTableHelperCtorCaller<UStackBoxSlot>,aFStackX_8,UPanelSlot::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStackBoxSlot.InnerSingleton;
}

// OnSlotAdded @ 1469f0e90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UStackBox::OnSlotAdded(UStackBox *this,UPanelSlot *param_1)

{
  int iVar1;
  UClass *pUVar2;
  TSharedRef<SStackBox,1> *pTVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_38;
  TSharedRef<SStackBox,1> local_28;
  FString local_18;
  
  if ((this->MyBox).Object != (SStackBox *)0x0) {
    if (param_1 == (UPanelSlot *)0x0) {
      pFVar4 = GetTypeName<UStackBoxSlot>(&local_38);
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar5);
    }
    pUVar2 = UStackBoxSlot::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar2->_padding_)) {
      pFVar4 = GetTypeName<UStackBoxSlot>(&local_38);
      pwVar5 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UPanelSlot>(&local_18,param_1);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar5,pwVar6);
    }
    pTVar3 = TSharedPtr<SStackBox,1>::ToSharedRef(&this->MyBox,&local_28);
    UStackBoxSlot::BuildSlot((UStackBoxSlot *)param_1,pTVar3);
  }
  return;
}

// OnSlotRemoved @ 1469f1820

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UStackBox::OnSlotRemoved(UStackBox *this,UPanelSlot *param_1)

{
  UWidget *this_00;
  code *pcVar1;
  SBoxPanel *this_01;
  bool bVar2;
  TSharedPtr<SWidget,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  if (((this->MyBox).Object != (SStackBox *)0x0) &&
     (this_00 = (param_1->Content).field0_0x0.DebugPtr, this_00 != (UWidget *)0x0)) {
    UWidget::GetCachedWidget(this_00,&local_28);
    bVar2 = local_28.Object == (SWidget *)0x0;
    if (local_28.Object != (SWidget *)0x0) {
      this_01 = (SBoxPanel *)TSharedPtr<SStackBox,1>::operator->(&this->MyBox);
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
      SBoxPanel::RemoveSlot(this_01,&local_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  return;
}

// RebuildWidget @ 146a072e0

TSharedRef<SWidget,1> * __thiscall
UStackBox::RebuildWidget(UStackBox *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TSharedPtr<SStackBox,1> *pTVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  UStackBoxSlot *this_00;
  TReferenceControllerBase<1> *pTVar5;
  SStackBox *pSVar6;
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
  SStackBox *local_298;
  FSharedReferencer<1> local_290;
  TSlateDecl<SStackBox,RequiredArgs::T0RequiredArgs> local_288;
  FMemScope local_270;
  TSharedRef<SStackBox,1> local_268;
  FArguments local_258;
  
  pFVar12 = SStackBox::FArguments::FArguments(&local_258);
  pFVar12->_Orientation = (uint)(this->Orientation).Value;
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_270,&local_res20,true);
  TSlateDecl<SStackBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SStackBox,RequiredArgs::T0RequiredArgs>
            (&local_288,"SStackBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\StackBox.cpp"
             ,0x5c,local_res10);
  FMemScope::~FMemScope(&local_270);
  FLLMScope::~FLLMScope(local_res18);
  pSVar6 = local_288._Widget.Object;
  if (local_288._Widget.Object == (SStackBox *)0x0) {
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
  SWidget::SWidgetConstruct((SWidget *)local_288._Widget.Object,(FSlateBaseNamedArgs *)pFVar12);
  SStackBox::Construct(local_288._Widget.Object,pFVar12);
  if (local_288._Widget.Object == (SStackBox *)0x0) {
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
  if (((local_288._Widget.Object)->field_0x30 & 0x10) == 0) {
    cVar10 = (**(code **)(*(longlong *)local_288._Widget.Object + 0x228))(local_288._Widget.Object);
    bVar11 = 0;
    if (cVar10 == '\0') goto LAB_146a07436;
  }
  bVar11 = 0x20;
LAB_146a07436:
  FVar8.ReferenceController = local_288._Widget.SharedReferenceCount.ReferenceController;
  (local_288._Widget.Object)->field_0x30 = (local_288._Widget.Object)->field_0x30 & 0xdf;
  (local_288._Widget.Object)->field_0x30 = (local_288._Widget.Object)->field_0x30 | bVar11;
  (local_288._Widget.Object)->field_0x31 = (local_288._Widget.Object)->field_0x31 | 4;
  local_288._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_288._Widget.Object = (SStackBox *)0x0;
  if (pSVar6 == (SStackBox *)0x0) {
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
  local_298 = pSVar6;
  local_290.ReferenceController = FVar8.ReferenceController;
  if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->MyBox;
  if (pTVar1 != (TSharedPtr<SStackBox,1> *)&local_298) {
    pTVar1->Object = pSVar6;
    local_298 = (SStackBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyBox).SharedReferenceCount,&local_290);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_290.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  DestructItems<SStackBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_258._Slots.AllocatorInstance.Data,local_258._Slots.ArrayNum);
  if ((FSlotArguments *)local_258._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_258._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_258);
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
    this_00 = (UStackBoxSlot *)*puVar15;
    if (this_00 != (UStackBoxSlot *)0x0) {
      pUVar14 = UStackBoxSlot::StaticClass();
      iVar4 = (int)pUVar14->_padding_;
      if ((iVar4 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
          &pUVar14->_padding_)) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        this_00->_padding_ = (longlong)this;
        if (pTVar1->Object == (SStackBox *)0x0) {
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
        local_268.SharedReferenceCount.ReferenceController =
             (this->MyBox).SharedReferenceCount.ReferenceController;
        local_268.Object = pTVar1->Object;
        if (local_268.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_268.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_268.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if (local_268.Object == (SStackBox *)0x0) {
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
        UStackBoxSlot::BuildSlot(this_00,&local_268);
      }
    }
    puVar15 = puVar15 + 1;
  }
  if ((this->MyBox).Object == (SStackBox *)0x0) {
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
  pTVar5 = (this->MyBox).SharedReferenceCount.ReferenceController;
  pSVar6 = (this->MyBox).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar6 == (SStackBox *)0x0) {
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

// ReleaseSlateResources @ 146a0b540

void __thiscall UStackBox::ReleaseSlateResources(UStackBox *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UPanelWidget::ReleaseSlateResources((UPanelWidget *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyBox != (TSharedPtr<SStackBox,1> *)&local_18) {
    (this->MyBox).Object = (SStackBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyBox).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// ReplaceStackBoxChildAt @ 146a0d240

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UStackBox::ReplaceStackBoxChildAt(UStackBox *this,int param_1,UWidget *param_2)

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
      pFVar12 = GetTypeName<UStackBoxSlot>(&local_18);
      if ((pFVar12->Data).ArrayNum == 0) {
        pwVar13 = L"";
      }
      else {
        pwVar13 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar13);
    }
    pUVar10 = UStackBoxSlot::StaticClass();
    bVar7 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar10);
    if ((!bVar7) ||
       (FVar1.field0_0x0 = (FObjectPtr_u_0)this_00->Handle, FVar1.field0_0x0 == (UObject *)0x0)) {
      pFVar12 = GetTypeName<UStackBoxSlot>(&local_38);
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
      this_01 = *(FSlotBase **)((longlong)FVar1.field0_0x0 + 0x58);
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

// SetOrientation @ 146a184e0

void __thiscall UStackBox::SetOrientation(UStackBox *this,EOrientation param_1)

{
  SStackBox *this_00;
  
  if ((this->Orientation).Value != param_1) {
    (this->Orientation).Value = (uchar)param_1;
    this_00 = (this->MyBox).Object;
    if (this_00 != (SStackBox *)0x0) {
      if (*(EOrientation *)(&this_00->field_0x218 + 0x30) != param_1) {
        *(EOrientation *)(&this_00->field_0x218 + 0x30) = param_1;
        SWidget::Invalidate((SWidget *)this_00,Layout);
        return;
      }
      return;
    }
  }
  return;
}

// StaticRegisterNativesUStackBox @ 146a1f0d0

void __cdecl UStackBox::StaticRegisterNativesUStackBox(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UStackBox_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 146a26860

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UStackBox::SynchronizeProperties(UStackBox *this)

{
  SBoxPanel *this_00;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  this_00 = (SBoxPanel *)(this->MyBox).Object;
  if (this_00 != (SBoxPanel *)0x0) {
    SBoxPanel::SetOrientation(this_00,(uint)(this->Orientation).Value);
    return;
  }
  return;
}

// execAddChildToStackBox @ 146a31760

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UStackBox::execAddChildToStackBox(UObject *param_1,FFrame *param_2,void *param_3)

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
      pUVar8 = UStackBoxSlot::StaticClass();
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

// execReplaceStackBoxChildAt @ 146a38f90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UStackBox::execReplaceStackBoxChildAt(UObject *param_1,FFrame *param_2,void *param_3)

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
      pFVar14 = GetTypeName<UStackBoxSlot>(&local_38);
      if ((pFVar14->Data).ArrayNum == 0) {
        pwVar16 = L"";
      }
      else {
        pwVar16 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar16);
    }
    pUVar12 = UStackBoxSlot::StaticClass();
    bVar9 = FObjectPtr::IsA((FObjectPtr *)this,pUVar12);
    if ((!bVar9) ||
       (FVar2.field0_0x0 = (FObjectPtr_u_0)this->Handle, FVar2.field0_0x0 == (UObject *)0x0)) {
      pFVar14 = GetTypeName<UStackBoxSlot>(&local_58);
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
      this_00 = *(FSlotBase **)((longlong)FVar2.field0_0x0 + 0x58);
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

