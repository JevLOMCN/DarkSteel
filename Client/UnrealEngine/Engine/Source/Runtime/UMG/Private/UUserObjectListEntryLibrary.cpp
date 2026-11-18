// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 14

// StaticClass @ 1468d9550

UClass * __cdecl UUserObjectListEntryLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUserObjectListEntryLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"UserObjectListEntryLibrary",
               &Z_Registration_Info_UClass_UUserObjectListEntryLibrary.InnerSingleton,
               StaticRegisterNativesUUserObjectListEntryLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UUserObjectListEntryLibrary>,
               InternalVTableHelperCtorCaller<UUserObjectListEntryLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUserObjectListEntryLibrary.InnerSingleton;
}

// UUserObjectListEntryLibrary @ 146902530

UUserObjectListEntryLibrary * __thiscall
UUserObjectListEntryLibrary::UUserObjectListEntryLibrary
          (UUserObjectListEntryLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UUserObjectListEntryLibrary__6B_;
  return this;
}

// UUserObjectListEntryLibrary @ 146902560

UUserObjectListEntryLibrary * __thiscall
UUserObjectListEntryLibrary::UUserObjectListEntryLibrary
          (UUserObjectListEntryLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UUserObjectListEntryLibrary__6B_;
  return this;
}

// ~UUserObjectListEntryLibrary @ 146904ec0

void __thiscall
UUserObjectListEntryLibrary::~UUserObjectListEntryLibrary(UUserObjectListEntryLibrary *this)

{
  *(undefined ***)this = &___7UUserObjectListEntryLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetListItemIndex @ 14691ec60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

int __cdecl
UUserObjectListEntryLibrary::GetListItemIndex(TScriptInterface<IUserObjectListEntry> *param_1)

{
  int iVar1;
  UClass *pUVar2;
  UListView *this;
  UObject *pUVar3;
  UUserWidget *this_00;
  TSharedPtr<IObjectTableRow_const_,1> local_18;
  
  this_00 = *(UUserWidget **)param_1;
  if (this_00 != (UUserWidget *)0x0) {
    pUVar2 = Z_Construct_UClass_UUserWidget_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      pUVar2 = UUserListEntry::StaticClass();
      UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar2);
      pUVar2 = Z_Construct_UClass_UUserWidget_NoRegister();
      iVar1 = (int)pUVar2->_padding_;
      if ((*(int *)(this_00->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar2->_padding_)) {
        this_00 = (UUserWidget *)0x0;
      }
      IObjectTableRow::ObjectRowFromUserWidget(&local_18,this_00);
      if (local_18.Object == (IObjectTableRow *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.SharedReferenceCount.ReferenceController);
      }
      else {
        this = (UListView *)(**(code **)((longlong)*local_18.Object + 0x80))();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.SharedReferenceCount.ReferenceController);
        if (this != (UListView *)0x0) {
          pUVar2 = Z_Construct_UClass_UListView_NoRegister();
          iVar1 = (int)pUVar2->_padding_;
          if ((iVar1 <= *(int *)(*(longlong *)&this->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
              &pUVar2->_padding_)) {
            local_18.Object = *(IObjectTableRow **)param_1;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               ((UObject *)local_18.Object != (UObject *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_18.Object);
            }
            local_18.SharedReferenceCount.ReferenceController =
                 *(TReferenceControllerBase<1> **)&param_1->field_0x8;
            pUVar3 = GetListItemObject((TScriptInterface<IUserObjectListEntry> *)&local_18);
            if (pUVar3 != (UObject *)0x0) {
              iVar1 = UListView::GetIndexForItem(this,pUVar3);
              return iVar1;
            }
          }
        }
      }
    }
  }
  return -1;
}

// GetListItemObject @ 14691edb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UObject * __cdecl
UUserObjectListEntryLibrary::GetListItemObject(TScriptInterface<IUserObjectListEntry> *param_1)

{
  int iVar1;
  UUserWidget *this;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  longlong lVar7;
  UClass *pUVar8;
  TSharedPtr<SWidget,1> *pTVar9;
  UUserWidget *pUVar10;
  UObject *pUVar11;
  UUserWidget *pUVar12;
  TSharedPtr<IObjectTableRow_const_,1> local_28;
  TSharedPtr<SWidget,1> local_18;
  
  this = *(UUserWidget **)param_1;
  if (this == (UUserWidget *)0x0) {
    return (UObject *)0x0;
  }
  pUVar6 = Z_Construct_UClass_UUserWidget_NoRegister();
  iVar1 = (int)pUVar6->_padding_;
  if (*(int *)(this->_padding_ + 0x38) < iVar1) {
    return (UObject *)0x0;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar6->_padding_) {
    return (UObject *)0x0;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  pUVar6 = UUserListEntry::StaticClass();
  UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar6);
  pUVar6 = Z_Construct_UClass_UUserWidget_NoRegister();
  pUVar10 = (UUserWidget *)0x0;
  iVar1 = (int)pUVar6->_padding_;
  if ((*(int *)(this->_padding_ + 0x38) < iVar1) ||
     (pUVar12 = this,
     (longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
     &pUVar6->_padding_)) {
    pUVar12 = pUVar10;
  }
  IObjectTableRow::ObjectRowFromUserWidget(&local_28,pUVar12);
  if (local_28.Object == (IObjectTableRow *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    return (UObject *)0x0;
  }
  lVar7 = (**(code **)((longlong)*local_28.Object + 0x80))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (lVar7 == 0) {
    return (UObject *)0x0;
  }
  pUVar6 = Z_Construct_UClass_UListView_NoRegister();
  iVar1 = (int)pUVar6->_padding_;
  if (*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < iVar1) {
    return (UObject *)0x0;
  }
  if ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar6->_padding_) {
    return (UObject *)0x0;
  }
  lVar7 = (**(code **)(*(longlong *)(lVar7 + 0x348) + 0x88))();
  pUVar6 = (UClass *)this->_padding_;
  if (pUVar6 != (UClass *)0x0) {
    pUVar8 = UUserListEntry::StaticClass();
    bVar5 = UClass::ImplementsInterface(pUVar6,pUVar8);
    if (bVar5) {
      if (lVar7 != 0) {
        pTVar9 = UWidget::GetCachedWidget((UWidget *)this,&local_18);
        pTVar2 = (pTVar9->SharedReferenceCount).ReferenceController;
        pSVar3 = pTVar9->Object;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.SharedReferenceCount.ReferenceController);
        if (pSVar3 != (SWidget *)0x0) {
          pUVar10 = (UUserWidget *)
                    (**(code **)(*(longlong *)(lVar7 + 0x598) + 0x48))
                              ((longlong *)(lVar7 + 0x598),
                               &pSVar3[1].PersistentState.DesktopGeometry);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      }
      goto LAB_14691ef5e;
    }
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<883302746462093448>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Components\\ListViewBase.h"
                     ,0x88,"EntryWidget.Implements<UUserListEntry>()");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    pUVar11 = (UObject *)(*pcVar4)();
    return pUVar11;
  }
LAB_14691ef5e:
  if (pUVar10 == (UUserWidget *)0x0) {
    return (UObject *)0x0;
  }
  return (UObject *)pUVar10->_padding_;
}

// GetPrivateStaticClass @ 146922f70

UClass * __cdecl UUserObjectListEntryLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUserObjectListEntryLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"UserObjectListEntryLibrary",
               &Z_Registration_Info_UClass_UUserObjectListEntryLibrary.InnerSingleton,
               StaticRegisterNativesUUserObjectListEntryLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UUserObjectListEntryLibrary>,
               InternalVTableHelperCtorCaller<UUserObjectListEntryLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUserObjectListEntryLibrary.InnerSingleton;
}

// IsFirstWidget @ 14692c6d0

bool __cdecl
UUserObjectListEntryLibrary::IsFirstWidget(TScriptInterface<IUserObjectListEntry> *param_1)

{
  int iVar1;
  UObject *local_18 [2];
  
  local_18[0] = *(UObject **)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_18[0] != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_18[0]);
  }
  local_18[1] = *(UObject **)&param_1->field_0x8;
  iVar1 = GetListItemIndex((TScriptInterface<IUserObjectListEntry> *)local_18);
  return iVar1 == 0;
}

// IsLastWidget @ 14692c720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __cdecl
UUserObjectListEntryLibrary::IsLastWidget(TScriptInterface<IUserObjectListEntry> *param_1)

{
  int iVar1;
  int iVar2;
  UClass *pUVar3;
  UListView *this;
  UObject *pUVar4;
  UUserWidget *this_00;
  TSharedPtr<IObjectTableRow_const_,1> local_18;
  
  this_00 = *(UUserWidget **)param_1;
  if (this_00 != (UUserWidget *)0x0) {
    pUVar3 = Z_Construct_UClass_UUserWidget_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      pUVar3 = UUserListEntry::StaticClass();
      UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar3);
      pUVar3 = Z_Construct_UClass_UUserWidget_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((*(int *)(this_00->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar3->_padding_)) {
        this_00 = (UUserWidget *)0x0;
      }
      IObjectTableRow::ObjectRowFromUserWidget(&local_18,this_00);
      if (local_18.Object == (IObjectTableRow *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.SharedReferenceCount.ReferenceController);
      }
      else {
        this = (UListView *)(**(code **)((longlong)*local_18.Object + 0x80))();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.SharedReferenceCount.ReferenceController);
        if (this != (UListView *)0x0) {
          pUVar3 = Z_Construct_UClass_UListView_NoRegister();
          iVar1 = (int)pUVar3->_padding_;
          if ((iVar1 <= *(int *)(*(longlong *)&this->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
              &pUVar3->_padding_)) {
            local_18.Object = *(IObjectTableRow **)param_1;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               ((UObject *)local_18.Object != (UObject *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_18.Object);
            }
            local_18.SharedReferenceCount.ReferenceController =
                 *(TReferenceControllerBase<1> **)&param_1->field_0x8;
            pUVar4 = GetListItemObject((TScriptInterface<IUserObjectListEntry> *)&local_18);
            if (pUVar4 != (UObject *)0x0) {
              iVar1 = UListView::GetIndexForItem(this,pUVar4);
              if (iVar1 != -1) {
                iVar2 = UListView::GetNumItems(this);
                if (iVar1 == iVar2 + -1) {
                  return true;
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}

// StaticRegisterNativesUUserObjectListEntryLibrary @ 146945b10

void __cdecl UUserObjectListEntryLibrary::StaticRegisterNativesUUserObjectListEntryLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UUserObjectListEntryLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetListItemIndex @ 146951c40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UUserObjectListEntryLibrary::execGetListItemIndex(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  code *pcVar4;
  UUserWidget *this;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  UListView *this_00;
  longlong lVar8;
  UClass *pUVar9;
  TSharedPtr<SWidget,1> *pTVar10;
  UUserWidget *pUVar11;
  UUserWidget *pUVar12;
  UUserWidget *local_58;
  undefined8 uStack_50;
  TSharedPtr<IObjectTableRow_const_,1> local_48;
  TSharedPtr<IObjectTableRow_const_,1> local_38;
  TSharedPtr<SWidget,1> local_28;
  
  local_58 = (UUserWidget *)0x0;
  uStack_50 = 0;
  FInterfaceProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  this = local_58;
  pUVar11 = (UUserWidget *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_58 == (UUserWidget *)0x0) goto LAB_146951f89;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)local_58);
  }
  pUVar7 = Z_Construct_UClass_UUserWidget_NoRegister();
  iVar6 = (int)pUVar7->_padding_;
  if ((*(int *)(this->_padding_ + 0x38) < iVar6) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar6 * 8) !=
      &pUVar7->_padding_)) goto LAB_146951f89;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  pUVar7 = UUserListEntry::StaticClass();
  UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar7);
  pUVar7 = Z_Construct_UClass_UUserWidget_NoRegister();
  iVar6 = (int)pUVar7->_padding_;
  if ((*(int *)(this->_padding_ + 0x38) < iVar6) ||
     (pUVar12 = this,
     (longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar6 * 8) !=
     &pUVar7->_padding_)) {
    pUVar12 = pUVar11;
  }
  IObjectTableRow::ObjectRowFromUserWidget(&local_38,pUVar12);
  if (local_38.Object == (IObjectTableRow *)0x0) {
LAB_146951f84:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    goto LAB_146951f89;
  }
  this_00 = (UListView *)(**(code **)((longlong)*local_38.Object + 0x80))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  if (this_00 == (UListView *)0x0) goto LAB_146951f89;
  pUVar7 = Z_Construct_UClass_UListView_NoRegister();
  iVar6 = (int)pUVar7->_padding_;
  if ((*(int *)(*(longlong *)&this_00->field_0x10 + 0x38) < iVar6) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar6 * 8) !=
      &pUVar7->_padding_)) goto LAB_146951f89;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  pUVar7 = Z_Construct_UClass_UUserWidget_NoRegister();
  iVar6 = (int)pUVar7->_padding_;
  if ((*(int *)(this->_padding_ + 0x38) < iVar6) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar6 * 8) !=
      &pUVar7->_padding_)) goto LAB_146951f89;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  pUVar7 = UUserListEntry::StaticClass();
  UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar7);
  pUVar7 = Z_Construct_UClass_UUserWidget_NoRegister();
  iVar6 = (int)pUVar7->_padding_;
  if ((*(int *)(this->_padding_ + 0x38) < iVar6) ||
     (pUVar12 = this,
     (longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar6 * 8) !=
     &pUVar7->_padding_)) {
    pUVar12 = pUVar11;
  }
  IObjectTableRow::ObjectRowFromUserWidget(&local_48,pUVar12);
  local_38.SharedReferenceCount.ReferenceController =
       local_48.SharedReferenceCount.ReferenceController;
  if (local_48.Object == (IObjectTableRow *)0x0) goto LAB_146951f84;
  lVar8 = (**(code **)((longlong)*local_48.Object + 0x80))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  if (lVar8 == 0) goto LAB_146951f89;
  pUVar7 = Z_Construct_UClass_UListView_NoRegister();
  iVar6 = (int)pUVar7->_padding_;
  if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < iVar6) ||
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)iVar6 * 8) !=
      &pUVar7->_padding_)) goto LAB_146951f89;
  lVar8 = (**(code **)(*(longlong *)(lVar8 + 0x348) + 0x88))();
  pUVar7 = (UClass *)this->_padding_;
  if (pUVar7 == (UClass *)0x0) {
LAB_146951f28:
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<883302746462093448>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Components\\ListViewBase.h"
                       ,0x88,"EntryWidget.Implements<UUserListEntry>()");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    pUVar9 = UUserListEntry::StaticClass();
    bVar5 = UClass::ImplementsInterface(pUVar7,pUVar9);
    if (!bVar5) goto LAB_146951f28;
    if (lVar8 != 0) {
      pTVar10 = UWidget::GetCachedWidget((UWidget *)this,&local_28);
      pTVar2 = (pTVar10->SharedReferenceCount).ReferenceController;
      pSVar3 = pTVar10->Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      if (pSVar3 != (SWidget *)0x0) {
        pUVar11 = (UUserWidget *)
                  (**(code **)(*(longlong *)(lVar8 + 0x598) + 0x48))
                            ((longlong *)(lVar8 + 0x598),&pSVar3[1].PersistentState.DesktopGeometry)
        ;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
  }
  if ((pUVar11 != (UUserWidget *)0x0) && ((UObject *)pUVar11->_padding_ != (UObject *)0x0)) {
    iVar6 = UListView::GetIndexForItem(this_00,(UObject *)pUVar11->_padding_);
    *(int *)param_3 = iVar6;
    return;
  }
LAB_146951f89:
  *(undefined4 *)param_3 = 0xffffffff;
  return;
}

// execGetListItemObject @ 146951fc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UUserObjectListEntryLibrary::execGetListItemObject(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  SWidget *pSVar4;
  code *pcVar5;
  UUserWidget *this;
  bool bVar6;
  UClass *pUVar7;
  longlong lVar8;
  UClass *pUVar9;
  TSharedPtr<SWidget,1> *pTVar10;
  undefined8 *puVar11;
  UUserWidget *pUVar12;
  UUserWidget *local_38;
  undefined8 uStack_30;
  TSharedPtr<IObjectTableRow_const_,1> local_28;
  TSharedPtr<SWidget,1> local_18;
  
  local_38 = (UUserWidget *)0x0;
  uStack_30 = 0;
  FInterfaceProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  this = local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_38 == (UUserWidget *)0x0) goto LAB_14695220c;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)local_38);
  }
  pUVar7 = Z_Construct_UClass_UUserWidget_NoRegister();
  iVar1 = (int)pUVar7->_padding_;
  if ((*(int *)(this->_padding_ + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar7->_padding_)) goto LAB_14695220c;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  pUVar7 = UUserListEntry::StaticClass();
  UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar7);
  pUVar7 = Z_Construct_UClass_UUserWidget_NoRegister();
  iVar1 = (int)pUVar7->_padding_;
  if ((*(int *)(this->_padding_ + 0x38) < iVar1) ||
     (pUVar12 = this,
     (longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
     &pUVar7->_padding_)) {
    pUVar12 = (UUserWidget *)0x0;
  }
  IObjectTableRow::ObjectRowFromUserWidget(&local_28,pUVar12);
  if (local_28.Object == (IObjectTableRow *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    goto LAB_14695220c;
  }
  lVar8 = (**(code **)((longlong)*local_28.Object + 0x80))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (lVar8 == 0) goto LAB_14695220c;
  pUVar7 = Z_Construct_UClass_UListView_NoRegister();
  iVar1 = (int)pUVar7->_padding_;
  if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < iVar1) ||
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar7->_padding_)) goto LAB_14695220c;
  lVar8 = (**(code **)(*(longlong *)(lVar8 + 0x348) + 0x88))();
  pUVar7 = (UClass *)this->_padding_;
  if (pUVar7 == (UClass *)0x0) {
LAB_1469521c1:
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<883302746462093448>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Components\\ListViewBase.h"
                       ,0x88,"EntryWidget.Implements<UUserListEntry>()");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
LAB_1469521ee:
    puVar11 = (undefined8 *)0x0;
  }
  else {
    pUVar9 = UUserListEntry::StaticClass();
    bVar6 = UClass::ImplementsInterface(pUVar7,pUVar9);
    if (!bVar6) goto LAB_1469521c1;
    if (lVar8 == 0) goto LAB_1469521ee;
    pTVar10 = UWidget::GetCachedWidget((UWidget *)this,&local_18);
    pTVar3 = (pTVar10->SharedReferenceCount).ReferenceController;
    pSVar4 = pTVar10->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    if (pSVar4 == (SWidget *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      goto LAB_1469521ee;
    }
    puVar11 = (undefined8 *)
              (**(code **)(*(longlong *)(lVar8 + 0x598) + 0x48))
                        ((longlong *)(lVar8 + 0x598),&pSVar4[1].PersistentState.DesktopGeometry);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  if (puVar11 != (undefined8 *)0x0) {
    *(undefined8 *)param_3 = *puVar11;
    return;
  }
LAB_14695220c:
  *(undefined8 *)param_3 = 0;
  return;
}

// execIsFirstWidget @ 1469530d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UUserObjectListEntryLibrary::execIsFirstWidget(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  code *pcVar4;
  UUserWidget *this;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  UListView *this_00;
  longlong lVar8;
  UClass *pUVar9;
  TSharedPtr<SWidget,1> *pTVar10;
  UUserWidget *pUVar11;
  UUserWidget *pUVar12;
  UUserWidget *local_58;
  undefined8 uStack_50;
  TSharedPtr<IObjectTableRow_const_,1> local_48;
  TSharedPtr<IObjectTableRow_const_,1> local_38;
  TSharedPtr<SWidget,1> local_28;
  
  local_58 = (UUserWidget *)0x0;
  uStack_50 = 0;
  FInterfaceProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  this = local_58;
  pUVar11 = (UUserWidget *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_58 != (UUserWidget *)0x0) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (UE::GC::MarkAsReachable((UObject *)local_58),
       UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    pUVar7 = Z_Construct_UClass_UUserWidget_NoRegister();
    iVar6 = (int)pUVar7->_padding_;
    if ((iVar6 <= *(int *)(this->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar6 * 8) ==
        &pUVar7->_padding_)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      pUVar7 = UUserListEntry::StaticClass();
      UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar7);
      pUVar7 = Z_Construct_UClass_UUserWidget_NoRegister();
      iVar6 = (int)pUVar7->_padding_;
      if ((*(int *)(this->_padding_ + 0x38) < iVar6) ||
         (pUVar12 = this,
         (longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar6 * 8)
         != &pUVar7->_padding_)) {
        pUVar12 = pUVar11;
      }
      IObjectTableRow::ObjectRowFromUserWidget(&local_38,pUVar12);
      if (local_38.Object == (IObjectTableRow *)0x0) {
LAB_146953425:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_38.SharedReferenceCount.ReferenceController);
      }
      else {
        this_00 = (UListView *)(**(code **)((longlong)*local_38.Object + 0x80))();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_38.SharedReferenceCount.ReferenceController);
        if (this_00 != (UListView *)0x0) {
          pUVar7 = Z_Construct_UClass_UListView_NoRegister();
          iVar6 = (int)pUVar7->_padding_;
          if ((iVar6 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar6 * 8) ==
              &pUVar7->_padding_)) {
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            pUVar7 = Z_Construct_UClass_UUserWidget_NoRegister();
            iVar6 = (int)pUVar7->_padding_;
            if ((iVar6 <= *(int *)(this->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar6 * 8) ==
                &pUVar7->_padding_)) {
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)this);
              }
              pUVar7 = UUserListEntry::StaticClass();
              UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar7);
              pUVar7 = Z_Construct_UClass_UUserWidget_NoRegister();
              iVar6 = (int)pUVar7->_padding_;
              if ((*(int *)(this->_padding_ + 0x38) < iVar6) ||
                 (pUVar12 = this,
                 (longlong *)
                 *(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar6 * 8) !=
                 &pUVar7->_padding_)) {
                pUVar12 = pUVar11;
              }
              IObjectTableRow::ObjectRowFromUserWidget(&local_48,pUVar12);
              local_38.SharedReferenceCount.ReferenceController =
                   local_48.SharedReferenceCount.ReferenceController;
              if (local_48.Object == (IObjectTableRow *)0x0) goto LAB_146953425;
              lVar8 = (**(code **)((longlong)*local_48.Object + 0x80))();
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_48.SharedReferenceCount.ReferenceController);
              if (lVar8 != 0) {
                pUVar7 = Z_Construct_UClass_UListView_NoRegister();
                iVar6 = (int)pUVar7->_padding_;
                if ((iVar6 <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)iVar6 * 8) ==
                    &pUVar7->_padding_)) {
                  lVar8 = (**(code **)(*(longlong *)(lVar8 + 0x348) + 0x88))();
                  pUVar7 = (UClass *)this->_padding_;
                  if (pUVar7 == (UClass *)0x0) {
LAB_1469533cd:
                    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                                      (&bGEnsureHasExecuted<883302746462093448>,false,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Components\\ListViewBase.h"
                                       ,0x88,"EntryWidget.Implements<UUserListEntry>()");
                    if (bVar5) {
                      pcVar4 = (code *)swi(3);
                      (*pcVar4)();
                      return;
                    }
                  }
                  else {
                    pUVar9 = UUserListEntry::StaticClass();
                    bVar5 = UClass::ImplementsInterface(pUVar7,pUVar9);
                    if (!bVar5) goto LAB_1469533cd;
                    if (lVar8 != 0) {
                      pTVar10 = UWidget::GetCachedWidget((UWidget *)this,&local_28);
                      pTVar2 = (pTVar10->SharedReferenceCount).ReferenceController;
                      pSVar3 = pTVar10->Object;
                      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
                        LOCK();
                        pTVar2->SharedReferenceCount =
                             (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
                        UNLOCK();
                      }
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline
                                (local_28.SharedReferenceCount.ReferenceController);
                      if (pSVar3 != (SWidget *)0x0) {
                        pUVar11 = (UUserWidget *)
                                  (**(code **)(*(longlong *)(lVar8 + 0x598) + 0x48))
                                            ((longlong *)(lVar8 + 0x598),
                                             &pSVar3[1].PersistentState.DesktopGeometry);
                      }
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline(pTVar2);
                    }
                  }
                  if ((pUVar11 != (UUserWidget *)0x0) &&
                     ((UObject *)pUVar11->_padding_ != (UObject *)0x0)) {
                    iVar6 = UListView::GetIndexForItem(this_00,(UObject *)pUVar11->_padding_);
                    goto LAB_14695342f;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  iVar6 = -1;
LAB_14695342f:
  *(bool *)param_3 = iVar6 == 0;
  return;
}

// execIsLastWidget @ 146953460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UUserObjectListEntryLibrary::execIsLastWidget(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  code *pcVar4;
  UUserWidget *this;
  bool bVar5;
  int iVar6;
  int iVar7;
  UClass *pUVar8;
  UListView *this_00;
  longlong lVar9;
  UClass *pUVar10;
  TSharedPtr<SWidget,1> *pTVar11;
  UUserWidget *pUVar12;
  UUserWidget *pUVar13;
  UUserWidget *local_58;
  undefined8 uStack_50;
  TSharedPtr<IObjectTableRow_const_,1> local_48;
  TSharedPtr<IObjectTableRow_const_,1> local_38;
  TSharedPtr<SWidget,1> local_28;
  
  local_58 = (UUserWidget *)0x0;
  uStack_50 = 0;
  FInterfaceProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  this = local_58;
  pUVar12 = (UUserWidget *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_58 == (UUserWidget *)0x0) goto LAB_1469537be;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)local_58);
  }
  pUVar8 = Z_Construct_UClass_UUserWidget_NoRegister();
  iVar6 = (int)pUVar8->_padding_;
  if ((*(int *)(this->_padding_ + 0x38) < iVar6) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar6 * 8) !=
      &pUVar8->_padding_)) goto LAB_1469537be;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  pUVar8 = UUserListEntry::StaticClass();
  UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar8);
  pUVar8 = Z_Construct_UClass_UUserWidget_NoRegister();
  iVar6 = (int)pUVar8->_padding_;
  if ((*(int *)(this->_padding_ + 0x38) < iVar6) ||
     (pUVar13 = this,
     (longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar6 * 8) !=
     &pUVar8->_padding_)) {
    pUVar13 = pUVar12;
  }
  IObjectTableRow::ObjectRowFromUserWidget(&local_38,pUVar13);
  if (local_38.Object == (IObjectTableRow *)0x0) {
LAB_1469537b9:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    goto LAB_1469537be;
  }
  this_00 = (UListView *)(**(code **)((longlong)*local_38.Object + 0x80))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  if (this_00 == (UListView *)0x0) goto LAB_1469537be;
  pUVar8 = Z_Construct_UClass_UListView_NoRegister();
  iVar6 = (int)pUVar8->_padding_;
  if ((*(int *)(*(longlong *)&this_00->field_0x10 + 0x38) < iVar6) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar6 * 8) !=
      &pUVar8->_padding_)) goto LAB_1469537be;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  pUVar8 = Z_Construct_UClass_UUserWidget_NoRegister();
  iVar6 = (int)pUVar8->_padding_;
  if ((*(int *)(this->_padding_ + 0x38) < iVar6) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar6 * 8) !=
      &pUVar8->_padding_)) goto LAB_1469537be;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  pUVar8 = UUserListEntry::StaticClass();
  UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar8);
  pUVar8 = Z_Construct_UClass_UUserWidget_NoRegister();
  iVar6 = (int)pUVar8->_padding_;
  if ((*(int *)(this->_padding_ + 0x38) < iVar6) ||
     (pUVar13 = this,
     (longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar6 * 8) !=
     &pUVar8->_padding_)) {
    pUVar13 = pUVar12;
  }
  IObjectTableRow::ObjectRowFromUserWidget(&local_48,pUVar13);
  local_38.SharedReferenceCount.ReferenceController =
       local_48.SharedReferenceCount.ReferenceController;
  if (local_48.Object == (IObjectTableRow *)0x0) goto LAB_1469537b9;
  lVar9 = (**(code **)((longlong)*local_48.Object + 0x80))();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  if (lVar9 == 0) goto LAB_1469537be;
  pUVar8 = Z_Construct_UClass_UListView_NoRegister();
  iVar6 = (int)pUVar8->_padding_;
  if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < iVar6) ||
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)iVar6 * 8) !=
      &pUVar8->_padding_)) goto LAB_1469537be;
  lVar9 = (**(code **)(*(longlong *)(lVar9 + 0x348) + 0x88))();
  pUVar8 = (UClass *)this->_padding_;
  if (pUVar8 == (UClass *)0x0) {
LAB_146953748:
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<883302746462093448>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Components\\ListViewBase.h"
                       ,0x88,"EntryWidget.Implements<UUserListEntry>()");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    pUVar10 = UUserListEntry::StaticClass();
    bVar5 = UClass::ImplementsInterface(pUVar8,pUVar10);
    if (!bVar5) goto LAB_146953748;
    if (lVar9 != 0) {
      pTVar11 = UWidget::GetCachedWidget((UWidget *)this,&local_28);
      pTVar2 = (pTVar11->SharedReferenceCount).ReferenceController;
      pSVar3 = pTVar11->Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      if (pSVar3 != (SWidget *)0x0) {
        pUVar12 = (UUserWidget *)
                  (**(code **)(*(longlong *)(lVar9 + 0x598) + 0x48))
                            ((longlong *)(lVar9 + 0x598),&pSVar3[1].PersistentState.DesktopGeometry)
        ;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
  }
  if ((((pUVar12 != (UUserWidget *)0x0) && ((UObject *)pUVar12->_padding_ != (UObject *)0x0)) &&
      (iVar6 = UListView::GetIndexForItem(this_00,(UObject *)pUVar12->_padding_), iVar6 != -1)) &&
     (iVar7 = UListView::GetNumItems(this_00), iVar6 == iVar7 + -1)) {
    *(undefined1 *)param_3 = 1;
    return;
  }
LAB_1469537be:
  *(undefined1 *)param_3 = 0;
  return;
}

