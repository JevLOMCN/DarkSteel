// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 20

// StaticClass @ 14695c390

UClass * __cdecl UGridPanel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGridPanel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"GridPanel",&Z_Registration_Info_UClass_UGridPanel.InnerSingleton,
               StaticRegisterNativesUGridPanel,0x1f8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGridPanel>,InternalVTableHelperCtorCaller<UGridPanel>,local_res8
               ,UPanelWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGridPanel.InnerSingleton;
}

// UGridPanel @ 14698a460

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UGridPanel * __thiscall UGridPanel::UGridPanel(UGridPanel *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->ColumnFill).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ColumnFill).ArrayNum = 0;
  (this->ColumnFill).ArrayMax = 0;
  (this->RowFill).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RowFill).ArrayNum = 0;
  (this->RowFill).ArrayMax = 0;
  (this->MyGridPanel).Object = (SGridPanel *)0x0;
  (this->MyGridPanel).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UGridPanel @ 14698a4d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UGridPanel * __thiscall UGridPanel::UGridPanel(UGridPanel *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UWidget::UWidget((UWidget *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 & 0xfe;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->ColumnFill).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ColumnFill).ArrayNum = 0;
  (this->ColumnFill).ArrayMax = 0;
  (this->RowFill).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RowFill).ArrayNum = 0;
  (this->RowFill).ArrayMax = 0;
  (this->MyGridPanel).Object = (SGridPanel *)0x0;
  (this->MyGridPanel).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined1 *)&this->_padding_ = 1;
  UWidget::SetVisibilityInternal((UWidget *)this,SelfHitTestInvisible);
  return this;
}

// ~UGridPanel @ 146992e20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UGridPanel::~UGridPanel(UGridPanel *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyGridPanel).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->RowFill).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ColumnFill).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&UPanelWidget::_vftable__for__UVisual__;
  this->_padding_ = (longlong)&UPanelWidget::_vftable__for__INotifyFieldValueChanged__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UWidget::~UWidget((UWidget *)this);
  return;
}

// AddChildToGrid @ 1469a1380

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UGridSlot * __thiscall
UGridPanel::AddChildToGrid(UGridPanel *this,UWidget *param_1,int param_2,int param_3)

{
  int iVar1;
  FSlot *pFVar2;
  UGridSlot *pUVar3;
  UClass *pUVar4;
  
  pUVar3 = (UGridSlot *)UPanelWidget::AddChild((UPanelWidget *)this,param_1,(UPanelSlot *)0x0);
  if (pUVar3 != (UGridSlot *)0x0) {
    pUVar4 = UGridSlot::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      pFVar2 = pUVar3->Slot;
      pUVar3->Row = param_2;
      if (pFVar2 != (FSlot *)0x0) {
        if (param_2 < 0) {
          param_2 = 0;
        }
        if (param_2 != pFVar2->RowParam) {
          pFVar2->RowParam = param_2;
          SGridPanel::FSlot::NotifySlotChanged(pFVar2,false);
        }
      }
      pFVar2 = pUVar3->Slot;
      pUVar3->Column = param_3;
      if (pFVar2 == (FSlot *)0x0) {
        return pUVar3;
      }
      if (param_3 < 0) {
        param_3 = 0;
      }
      if (param_3 == pFVar2->ColumnParam) {
        return pUVar3;
      }
      pFVar2->ColumnParam = param_3;
      SGridPanel::FSlot::NotifySlotChanged(pFVar2,false);
      return pUVar3;
    }
  }
  return (UGridSlot *)0x0;
}

// ClearFill @ 1469a6400

void __thiscall UGridPanel::ClearFill(UGridPanel *this)

{
  SGridPanel *this_00;
  
  (this->ColumnFill).ArrayNum = 0;
  if ((this->ColumnFill).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->ColumnFill).AllocatorInstance,0,&(this->ColumnFill).ArrayMax);
  }
  (this->RowFill).ArrayNum = 0;
  if ((this->RowFill).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->RowFill).AllocatorInstance,0,&(this->RowFill).ArrayMax);
  }
  this_00 = (this->MyGridPanel).Object;
  if (this_00 != (SGridPanel *)0x0) {
    SGridPanel::ClearFill(this_00);
  }
  return;
}

// GetPrivateStaticClass @ 1469d40f0

UClass * __cdecl UGridPanel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGridPanel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"GridPanel",&Z_Registration_Info_UClass_UGridPanel.InnerSingleton,
               StaticRegisterNativesUGridPanel,0x1f8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UGridPanel>,InternalVTableHelperCtorCaller<UGridPanel>,local_res8
               ,UPanelWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGridPanel.InnerSingleton;
}

// GetSlotClass @ 1469d8720

UClass * __thiscall UGridPanel::GetSlotClass(UGridPanel *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UGridSlot.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"GridSlot",&Z_Registration_Info_UClass_UGridSlot.InnerSingleton,
               UGridSlot::StaticRegisterNativesUGridSlot,0x78,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UGridSlot>,InternalVTableHelperCtorCaller<UGridSlot>,
               aFStackX_8,UPanelSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGridSlot.InnerSingleton;
}

// OnSlotAdded @ 1469f05d0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UGridPanel::OnSlotAdded(UGridPanel *this,UPanelSlot *param_1)

{
  int iVar1;
  UClass *pUVar2;
  TSharedRef<SGridPanel,1> *pTVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_38;
  TSharedRef<SGridPanel,1> local_28;
  FString local_18;
  
  if ((this->MyGridPanel).Object != (SGridPanel *)0x0) {
    if (param_1 == (UPanelSlot *)0x0) {
      pFVar4 = GetTypeName<UGridSlot>(&local_38);
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar5);
    }
    pUVar2 = UGridSlot::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar2->_padding_)) {
      pFVar4 = GetTypeName<UGridSlot>(&local_38);
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
    pTVar3 = TSharedPtr<SGridPanel,1>::ToSharedRef(&this->MyGridPanel,&local_28);
    UGridSlot::BuildSlot((UGridSlot *)param_1,pTVar3);
  }
  return;
}

// OnSlotRemoved @ 1469f1250

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UGridPanel::OnSlotRemoved(UGridPanel *this,UPanelSlot *param_1)

{
  UWidget *this_00;
  code *pcVar1;
  SGridPanel *this_01;
  bool bVar2;
  TSharedPtr<SWidget,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  if (((this->MyGridPanel).Object != (SGridPanel *)0x0) &&
     (this_00 = (param_1->Content).field0_0x0.DebugPtr, this_00 != (UWidget *)0x0)) {
    UWidget::GetCachedWidget(this_00,&local_28);
    bVar2 = local_28.Object == (SWidget *)0x0;
    if (local_28.Object != (SWidget *)0x0) {
      this_01 = TSharedPtr<SGridPanel,1>::operator->(&this->MyGridPanel);
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
      SGridPanel::RemoveSlot(this_01,&local_18);
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

// RebuildWidget @ 1469feef0

TSharedRef<SWidget,1> * __thiscall
UGridPanel::RebuildWidget(UGridPanel *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  UGridSlot *this_00;
  TReferenceControllerBase<1> *pTVar5;
  SGridPanel *pSVar6;
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
  SGridPanel *local_2b8;
  FSharedReferencer<1> local_2b0;
  TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs> local_2a8;
  FMemScope local_290;
  TSharedRef<SGridPanel,1> local_288;
  FArguments local_278;
  
  pFVar12 = SGridPanel::FArguments::FArguments(&local_278);
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_290,&local_res20,true);
  TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SGridPanel,RequiredArgs::T0RequiredArgs>
            (&local_2a8,"SGridPanel",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\GridPanel.cpp"
             ,0x3b,local_res10);
  FMemScope::~FMemScope(&local_290);
  FLLMScope::~FLLMScope(local_res18);
  pSVar6 = local_2a8._Widget.Object;
  if (local_2a8._Widget.Object == (SGridPanel *)0x0) {
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
  SGridPanel::Construct(local_2a8._Widget.Object,pFVar12);
  if (local_2a8._Widget.Object == (SGridPanel *)0x0) {
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
    if (cVar10 == '\0') goto LAB_1469ff037;
  }
  bVar11 = 0x20;
LAB_1469ff037:
  FVar8.ReferenceController = local_2a8._Widget.SharedReferenceCount.ReferenceController;
  *(byte *)&(local_2a8._Widget.Object)->_padding_ =
       (byte)(local_2a8._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_2a8._Widget.Object)->_padding_ =
       (byte)(local_2a8._Widget.Object)->_padding_ | bVar11;
  pbVar1 = (byte *)((longlong)&(local_2a8._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  local_2a8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_2a8._Widget.Object = (SGridPanel *)0x0;
  if (pSVar6 == (SGridPanel *)0x0) {
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
  if (&this->MyGridPanel != (TSharedPtr<SGridPanel,1> *)&local_2b8) {
    (this->MyGridPanel).Object = pSVar6;
    local_2b8 = (SGridPanel *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyGridPanel).SharedReferenceCount,&local_2b0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2b0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  DestructItems<TAttribute<float>,int>
            ((TAttribute<float> *)local_278.RowFillCoefficients.AllocatorInstance.Data,
             local_278.RowFillCoefficients.ArrayNum);
  if ((TAttribute<float> *)local_278.RowFillCoefficients.AllocatorInstance.Data !=
      (TAttribute<float> *)0x0) {
    FMemory::Free(local_278.RowFillCoefficients.AllocatorInstance.Data);
  }
  DestructItems<TAttribute<float>,int>
            ((TAttribute<float> *)local_278.ColFillCoefficients.AllocatorInstance.Data,
             local_278.ColFillCoefficients.ArrayNum);
  if ((TAttribute<float> *)local_278.ColFillCoefficients.AllocatorInstance.Data !=
      (TAttribute<float> *)0x0) {
    FMemory::Free(local_278.ColFillCoefficients.AllocatorInstance.Data);
  }
  DestructItems<SGridPanel::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_278._Slots.AllocatorInstance.Data,local_278._Slots.ArrayNum);
  if ((FSlotArguments *)local_278._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_278._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_278);
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
    this_00 = (UGridSlot *)*puVar15;
    if (this_00 != (UGridSlot *)0x0) {
      pUVar14 = UGridSlot::StaticClass();
      iVar4 = (int)pUVar14->_padding_;
      if ((iVar4 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
          &pUVar14->_padding_)) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UGridPanel *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        this_00->_padding_ = (longlong)this;
        if ((this->MyGridPanel).Object == (SGridPanel *)0x0) {
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
             (this->MyGridPanel).SharedReferenceCount.ReferenceController;
        local_288.Object = (this->MyGridPanel).Object;
        if (local_288.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_288.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_288.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if (local_288.Object == (SGridPanel *)0x0) {
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
        UGridSlot::BuildSlot(this_00,&local_288);
      }
    }
    puVar15 = puVar15 + 1;
  }
  if ((this->MyGridPanel).Object == (SGridPanel *)0x0) {
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
  pTVar5 = (this->MyGridPanel).SharedReferenceCount.ReferenceController;
  pSVar6 = (this->MyGridPanel).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar6 == (SGridPanel *)0x0) {
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

// ReleaseSlateResources @ 146a0a520

void __thiscall UGridPanel::ReleaseSlateResources(UGridPanel *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UPanelWidget::ReleaseSlateResources((UPanelWidget *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyGridPanel != (TSharedPtr<SGridPanel,1> *)&local_18) {
    (this->MyGridPanel).Object = (SGridPanel *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyGridPanel).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// SetColumnFill @ 146a12520

void __thiscall UGridPanel::SetColumnFill(UGridPanel *this,int param_1,float param_2)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  SGridPanel *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FDestructionSentinel local_58;
  undefined1 local_40 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_38;
  ForAnyElementType FStack_30;
  ulonglong local_28;
  
  pTVar1 = &this->ColumnFill;
  iVar4 = (this->ColumnFill).ArrayNum;
  while (iVar4 <= param_1) {
    iVar4 = (this->ColumnFill).ArrayNum;
    if (iVar4 == (this->ColumnFill).ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar1->AllocatorInstance,&(this->ColumnFill).ArrayMax);
    }
    (this->ColumnFill).ArrayNum = iVar4 + 1;
    *(undefined4 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar4 * 4) = 0;
    iVar4 = (this->ColumnFill).ArrayNum;
  }
  uVar5 = 0;
  if (param_1 < (this->ColumnFill).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(float *)((pTVar1->AllocatorInstance).Data + (longlong)param_1 * 4) = param_2;
  this_00 = (this->MyGridPanel).Object;
  if (this_00 != (SGridPanel *)0x0) {
    local_28 = 0;
    local_40[4] = true;
    local_38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_30.Data = (FScriptContainerElement *)0x0;
    local_40._0_4_ = param_2;
    SGridPanel::SetColumnFill(this_00,param_1,(TAttribute<float> *)local_40);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_38,(FWriteAccessScope *)&local_58);
    if (((int)local_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
      local_28 = local_28 & 0xffffffff00000000;
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    if (FStack_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_38.AccessDetector);
  }
  return;
}

// SetRowFill @ 146a19b30

void __thiscall UGridPanel::SetRowFill(UGridPanel *this,int param_1,float param_2)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  SGridPanel *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FDestructionSentinel local_58;
  undefined1 local_40 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_38;
  ForAnyElementType FStack_30;
  ulonglong local_28;
  
  pTVar1 = &this->RowFill;
  iVar4 = (this->RowFill).ArrayNum;
  while (iVar4 <= param_1) {
    iVar4 = (this->RowFill).ArrayNum;
    if (iVar4 == (this->RowFill).ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar1->AllocatorInstance,&(this->RowFill).ArrayMax);
    }
    (this->RowFill).ArrayNum = iVar4 + 1;
    *(undefined4 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar4 * 4) = 0;
    iVar4 = (this->RowFill).ArrayNum;
  }
  uVar5 = 0;
  if (param_1 < (this->RowFill).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(float *)((pTVar1->AllocatorInstance).Data + (longlong)param_1 * 4) = param_2;
  this_00 = (this->MyGridPanel).Object;
  if (this_00 != (SGridPanel *)0x0) {
    local_28 = 0;
    local_40[4] = true;
    local_38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_30.Data = (FScriptContainerElement *)0x0;
    local_40._0_4_ = param_2;
    SGridPanel::SetRowFill(this_00,param_1,(TAttribute<float> *)local_40);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_38,(FWriteAccessScope *)&local_58);
    if (((int)local_28 != 0) && (FStack_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
      local_28 = local_28 & 0xffffffff00000000;
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
    if (FStack_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_38.AccessDetector);
  }
  return;
}

// StaticRegisterNativesUGridPanel @ 146a1e860

void __cdecl UGridPanel::StaticRegisterNativesUGridPanel(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UGridPanel_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 146a21390

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UGridPanel::SynchronizeProperties(UGridPanel *this)

{
  SGridPanel *pSVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  FDestructionSentinel local_88;
  FDestructionSentinel local_70;
  undefined1 local_58 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_50;
  ForAnyElementType FStack_48;
  ulonglong local_40;
  undefined1 local_38 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_30;
  ForAnyElementType FStack_28;
  ulonglong local_20;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  pSVar1 = (this->MyGridPanel).Object;
  if (pSVar1 != (SGridPanel *)0x0) {
    SGridPanel::ClearFill(pSVar1);
    uVar5 = 0;
    uVar7 = uVar5;
    uVar8 = uVar5;
    if (0 < (this->ColumnFill).ArrayNum) {
      do {
        if (((this->MyGridPanel).Object == (SGridPanel *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar6 = (uint)uVar7;
        pSVar1 = (this->MyGridPanel).Object;
        uVar4 = 0;
        if ((int)uVar6 < (this->ColumnFill).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_58._0_4_ = *(undefined4 *)((this->ColumnFill).AllocatorInstance.Data + uVar8);
        local_50.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
        FStack_48.Data = (FScriptContainerElement *)0x0;
        local_58[4] = true;
        local_40 = 0;
        SGridPanel::SetColumnFill(pSVar1,uVar6,(TAttribute<float> *)local_58);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_50,(FWriteAccessScope *)&local_88);
        if (((int)local_40 != 0) && (FStack_48.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_48.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_48,0,0,0x10);
          local_40 = local_40 & 0xffffffff00000000;
        }
        if (local_88.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
        }
        if (FStack_48.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_48.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_50.AccessDetector);
        uVar7 = (ulonglong)(uVar6 + 1);
        uVar8 = uVar8 + 4;
      } while ((int)(uVar6 + 1) < (this->ColumnFill).ArrayNum);
    }
    uVar7 = uVar5;
    if (0 < (this->RowFill).ArrayNum) {
      do {
        if (((this->MyGridPanel).Object == (SGridPanel *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar6 = (uint)uVar7;
        pSVar1 = (this->MyGridPanel).Object;
        uVar4 = 0;
        if ((int)uVar6 < (this->RowFill).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_38._0_4_ = *(undefined4 *)((this->RowFill).AllocatorInstance.Data + uVar5);
        local_30.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
        FStack_28.Data = (FScriptContainerElement *)0x0;
        local_38[4] = true;
        local_20 = 0;
        SGridPanel::SetRowFill(pSVar1,uVar6,(TAttribute<float> *)local_38);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_30,(FWriteAccessScope *)&local_70);
        if (((int)local_20 != 0) && (FStack_28.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_28.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_28,0,0,0x10);
          local_20 = local_20 & 0xffffffff00000000;
        }
        if (local_70.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_70.Accessor,&local_70);
        }
        if (FStack_28.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_28.Data);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_30.AccessDetector);
        uVar5 = uVar5 + 4;
        uVar7 = (ulonglong)(uVar6 + 1);
      } while ((int)(uVar6 + 1) < (this->RowFill).ArrayNum);
    }
  }
  return;
}

// execAddChildToGrid @ 146a30f30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UGridPanel::execAddChildToGrid(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  undefined1 *puVar2;
  uint uVar3;
  FProperty *pFVar4;
  FSlot *pFVar5;
  code *pcVar6;
  TObjectPtr<UWidget>_u_0 TVar7;
  bool bVar8;
  int iVar9;
  UClass *pUVar10;
  UPanelSlot *pUVar11;
  int iVar12;
  int iVar13;
  int local_res10 [2];
  int local_res18 [2];
  TObjectPtr<UWidget>_u_0 local_res20;
  UPanelSlot *local_48;
  undefined8 local_40;
  
  local_res20.DebugPtr = (UWidget *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  TVar7 = local_res20;
  iVar13 = local_res18[0];
  iVar12 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res20.DebugPtr != (UWidget *)0x0) &&
     ((param_1[0xb].field_0x8 != '\0' || (*(int *)(param_1 + 0xb) < 1)))) {
    (**(code **)((local_res20.DebugPtr)->_padding_ + 0x2d0))(local_res20.DebugPtr);
    uVar3 = *(uint *)&param_1->field_0x8;
    local_40 = 0;
    pUVar10 = (UClass *)(**(code **)(*(longlong *)param_1 + 0x318))(param_1);
    pUVar11 = NewObject<UPanelSlot>
                        (param_1,pUVar10,(FName)0x0,(uVar3 >> 6 & 1) * 0x40 + RF_Transactional,
                         (UObject *)0x0,false,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)TVar7.DebugPtr);
    }
    (pUVar11->Content).field0_0x0.DebugPtr = (UWidget *)TVar7;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    (pUVar11->Parent).field0_0x0.DebugPtr = (UPanelWidget *)param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UPanelSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    (((TObjectPtr<UPanelSlot> *)((longlong)TVar7 + 0x30))->field0_0x0).DebugPtr = pUVar11;
    puVar2 = &param_1[10].field_0x20;
    local_48 = pUVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UPanelSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    if ((*(UPanelSlot ***)puVar2 <= &local_48) &&
       (&local_48 < *(UPanelSlot ***)puVar2 + *(int *)&param_1[0xb].field_0x4)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar9 = *(int *)(param_1 + 0xb);
    if (iVar9 == *(int *)&param_1[0xb].field_0x4) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)puVar2,(int *)&param_1[0xb].field_0x4);
    }
    *(int *)(param_1 + 0xb) = iVar9 + 1;
    *(UPanelSlot **)(*(longlong *)puVar2 + (longlong)iVar9 * 8) = local_48;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UPanelSlot *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_48);
    }
    (**(code **)(*(longlong *)param_1 + 800))(param_1,pUVar11);
    UWidget::InvalidateLayoutAndVolatility((UWidget *)param_1);
    if (pUVar11 != (UPanelSlot *)0x0) {
      pUVar10 = UGridSlot::StaticClass();
      iVar9 = (int)pUVar10->_padding_;
      if ((iVar9 <= *(int *)(pUVar11->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar9 * 8) ==
          &pUVar10->_padding_)) {
        pFVar5 = (FSlot *)pUVar11[2]._padding_;
        *(int *)((longlong)&pUVar11[1]._padding_ + 4) = iVar13;
        if (pFVar5 != (FSlot *)0x0) {
          if (iVar13 < 0) {
            iVar13 = 0;
          }
          if (iVar13 != pFVar5->RowParam) {
            pFVar5->RowParam = iVar13;
            SGridPanel::FSlot::NotifySlotChanged(pFVar5,false);
          }
        }
        pFVar5 = (FSlot *)pUVar11[2]._padding_;
        *(int *)((longlong)&pUVar11[1]._padding_ + 4) = iVar12;
        if (pFVar5 != (FSlot *)0x0) {
          if (iVar12 < 0) {
            iVar12 = 0;
          }
          if (iVar12 != pFVar5->ColumnParam) {
            pFVar5->ColumnParam = iVar12;
            SGridPanel::FSlot::NotifySlotChanged(pFVar5,false);
          }
        }
        *(UPanelSlot **)param_3 = pUVar11;
        return;
      }
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execClearFill @ 146a32e50

void __cdecl UGridPanel::execClearFill(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[0xb].field_0x18 = 0;
  if (*(int *)&param_1[0xb].field_0x1c < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&param_1[0xb].field_0x10,0,(int *)&param_1[0xb].field_0x1c
              );
  }
  iVar1 = *(int *)&param_1[0xc].field_0x4;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&param_1[0xb].field_0x20,0,(int *)&param_1[0xc].field_0x4)
    ;
  }
  if (*(SGridPanel **)&param_1[0xc].field_0x8 != (SGridPanel *)0x0) {
    SGridPanel::ClearFill(*(SGridPanel **)&param_1[0xc].field_0x8);
  }
  return;
}

// execSetColumnFill @ 146a3b260

void __cdecl UGridPanel::execSetColumnFill(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [2];
  int local_res20 [2];
  
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetColumnFill((UGridPanel *)param_1,local_res20[0],local_res10[0]);
  return;
}

// execSetRowFill @ 146a416c0

void __cdecl UGridPanel::execSetRowFill(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [2];
  int local_res20 [2];
  
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetRowFill((UGridPanel *)param_1,local_res20[0],local_res10[0]);
  return;
}

