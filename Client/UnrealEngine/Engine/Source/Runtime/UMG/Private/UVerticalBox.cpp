// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 13

// StaticClass @ 14695e950

UClass * __cdecl UVerticalBox::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVerticalBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"VerticalBox",&Z_Registration_Info_UClass_UVerticalBox.InnerSingleton
               ,StaticRegisterNativesUVerticalBox,0x1d8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UVerticalBox>,InternalVTableHelperCtorCaller<UVerticalBox>,
               local_res8,UPanelWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVerticalBox.InnerSingleton;
}

// UVerticalBox @ 14698e950

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UVerticalBox * __thiscall UVerticalBox::UVerticalBox(UVerticalBox *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->MyVerticalBox).Object = (SVerticalBox *)0x0;
  (this->MyVerticalBox).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UVerticalBox @ 14698e9a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UVerticalBox * __thiscall UVerticalBox::UVerticalBox(UVerticalBox *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UWidget::UWidget((UWidget *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 & 0xfe;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->MyVerticalBox).Object = (SVerticalBox *)0x0;
  (this->MyVerticalBox).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined1 *)&this->_padding_ = 1;
  UWidget::SetVisibilityInternal((UWidget *)this,SelfHitTestInvisible);
  return this;
}

// ~UVerticalBox @ 1469948b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UVerticalBox::~UVerticalBox(UVerticalBox *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyVerticalBox).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&UPanelWidget::_vftable__for__UVisual__;
  this->_padding_ = (longlong)&UPanelWidget::_vftable__for__INotifyFieldValueChanged__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UWidget::~UWidget((UWidget *)this);
  return;
}

// AddChildToVerticalBox @ 1469a15e0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UVerticalBoxSlot * __thiscall
UVerticalBox::AddChildToVerticalBox(UVerticalBox *this,UWidget *param_1)

{
  int iVar1;
  UVerticalBoxSlot *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UVerticalBoxSlot *)
           UPanelWidget::AddChild((UPanelWidget *)this,param_1,(UPanelSlot *)0x0);
  if (pUVar2 != (UVerticalBoxSlot *)0x0) {
    pUVar3 = UVerticalBoxSlot::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UVerticalBoxSlot *)0x0;
}

// GetPrivateStaticClass @ 1469d6710

UClass * __cdecl UVerticalBox::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVerticalBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"VerticalBox",&Z_Registration_Info_UClass_UVerticalBox.InnerSingleton
               ,StaticRegisterNativesUVerticalBox,0x1d8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UVerticalBox>,InternalVTableHelperCtorCaller<UVerticalBox>,
               local_res8,UPanelWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVerticalBox.InnerSingleton;
}

// GetSlotClass @ 1469d87c0

UClass * __thiscall UVerticalBox::GetSlotClass(UVerticalBox *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UVerticalBoxSlot.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"VerticalBoxSlot",
               &Z_Registration_Info_UClass_UVerticalBoxSlot.InnerSingleton,
               UVerticalBoxSlot::StaticRegisterNativesUVerticalBoxSlot,0x60,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UVerticalBoxSlot>,
               InternalVTableHelperCtorCaller<UVerticalBoxSlot>,aFStackX_8,UPanelSlot::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVerticalBoxSlot.InnerSingleton;
}

// OnSlotAdded @ 1469f1070

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UVerticalBox::OnSlotAdded(UVerticalBox *this,UPanelSlot *param_1)

{
  int iVar1;
  UClass *pUVar2;
  TSharedRef<SVerticalBox,1> *pTVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_38;
  TSharedRef<SVerticalBox,1> local_28;
  FString local_18;
  
  if ((this->MyVerticalBox).Object != (SVerticalBox *)0x0) {
    if (param_1 == (UPanelSlot *)0x0) {
      pFVar4 = GetTypeName<UVerticalBoxSlot>(&local_38);
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar5);
    }
    pUVar2 = UVerticalBoxSlot::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar2->_padding_)) {
      pFVar4 = GetTypeName<UVerticalBoxSlot>(&local_38);
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
    pTVar3 = TSharedPtr<SVerticalBox,1>::ToSharedRef(&this->MyVerticalBox,&local_28);
    UVerticalBoxSlot::BuildSlot((UVerticalBoxSlot *)param_1,pTVar3);
  }
  return;
}

// OnSlotRemoved @ 1469f1a60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UVerticalBox::OnSlotRemoved(UVerticalBox *this,UPanelSlot *param_1)

{
  UWidget *this_00;
  code *pcVar1;
  SBoxPanel *this_01;
  bool bVar2;
  TSharedPtr<SWidget,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  if (((this->MyVerticalBox).Object != (SVerticalBox *)0x0) &&
     (this_00 = (param_1->Content).field0_0x0.DebugPtr, this_00 != (UWidget *)0x0)) {
    UWidget::GetCachedWidget(this_00,&local_28);
    bVar2 = local_28.Object == (SWidget *)0x0;
    if (local_28.Object != (SWidget *)0x0) {
      this_01 = (SBoxPanel *)TSharedPtr<SVerticalBox,1>::operator->(&this->MyVerticalBox);
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

// RebuildWidget @ 146a08300

TSharedRef<SWidget,1> * __thiscall
UVerticalBox::RebuildWidget(UVerticalBox *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TSharedPtr<SVerticalBox,1> *pTVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  UVerticalBoxSlot *this_00;
  TReferenceControllerBase<1> *pTVar5;
  SVerticalBox *pSVar6;
  code *pcVar7;
  bool bVar8;
  FArguments *pFVar9;
  TSharedRef<SVerticalBox,1> *pTVar10;
  UClass *pUVar11;
  TSharedRef<SWidget,1> *pTVar12;
  undefined8 *puVar13;
  undefined1 local_res8 [8];
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  FName local_res20;
  SVerticalBox *local_2a8;
  FSharedReferencer<1> local_2a0;
  FMemScope local_298;
  TSharedRef<SVerticalBox,1> local_290;
  TSharedRef<SVerticalBox,1> local_280;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_270;
  FArguments local_258;
  
  pFVar9 = SVerticalBox::FArguments::FArguments(&local_258);
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_298,&local_res20,true);
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
            (&local_270,"SVerticalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\VerticalBox.cpp"
             ,0x3d,local_res10);
  FMemScope::~FMemScope(&local_298);
  FLLMScope::~FLLMScope(local_res18);
  pTVar10 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_270,&local_280,pFVar9);
  local_2a0.ReferenceController = (pTVar10->SharedReferenceCount).ReferenceController;
  local_2a8 = pTVar10->Object;
  if (local_2a0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_2a0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_2a0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->MyVerticalBox;
  if (pTVar1 != (TSharedPtr<SVerticalBox,1> *)&local_2a8) {
    pTVar1->Object = local_2a8;
    local_2a8 = (SVerticalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyVerticalBox).SharedReferenceCount,&local_2a0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_280.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_270._Widget.SharedReferenceCount.ReferenceController);
  DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_258._Slots.AllocatorInstance.Data,local_258._Slots.ArrayNum);
  if ((FSlotArguments *)local_258._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_258._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_258);
  puVar13 = (undefined8 *)this->_padding_;
  iVar3 = (int)this->_padding_;
  puVar2 = puVar13 + iVar3;
  while( true ) {
    if ((int)this->_padding_ != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UPanelSlot>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (puVar13 == puVar2) break;
    this_00 = (UVerticalBoxSlot *)*puVar13;
    if (this_00 != (UVerticalBoxSlot *)0x0) {
      pUVar11 = UVerticalBoxSlot::StaticClass();
      iVar4 = (int)pUVar11->_padding_;
      if ((iVar4 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
          &pUVar11->_padding_)) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UVerticalBox *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        this_00->_padding_ = (longlong)this;
        if (pTVar1->Object == (SVerticalBox *)0x0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L"");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar7)();
            return pTVar12;
          }
        }
        local_290.SharedReferenceCount.ReferenceController =
             (this->MyVerticalBox).SharedReferenceCount.ReferenceController;
        local_290.Object = pTVar1->Object;
        if (local_290.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_290.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_290.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if (local_290.Object == (SVerticalBox *)0x0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L"");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar7)();
            return pTVar12;
          }
        }
        UVerticalBoxSlot::BuildSlot(this_00,&local_290);
      }
    }
    puVar13 = puVar13 + 1;
  }
  if ((this->MyVerticalBox).Object == (SVerticalBox *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar7)();
      return pTVar12;
    }
  }
  pTVar5 = (this->MyVerticalBox).SharedReferenceCount.ReferenceController;
  pSVar6 = (this->MyVerticalBox).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar6 == (SVerticalBox *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar7)();
      return pTVar12;
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

// ReleaseSlateResources @ 146a0b880

void __thiscall UVerticalBox::ReleaseSlateResources(UVerticalBox *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UPanelWidget::ReleaseSlateResources((UPanelWidget *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyVerticalBox != (TSharedPtr<SVerticalBox,1> *)&local_18) {
    (this->MyVerticalBox).Object = (SVerticalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyVerticalBox).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// StaticRegisterNativesUVerticalBox @ 146a1f2e0

void __cdecl UVerticalBox::StaticRegisterNativesUVerticalBox(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UVerticalBox_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAddChildToVerticalBox @ 146a31d10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UVerticalBox::execAddChildToVerticalBox(UObject *param_1,FFrame *param_2,void *param_3)

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
      pUVar8 = UVerticalBoxSlot::StaticClass();
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

