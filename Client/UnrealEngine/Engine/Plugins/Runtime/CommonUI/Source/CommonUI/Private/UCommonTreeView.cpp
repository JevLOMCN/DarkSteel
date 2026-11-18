// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 8

// StaticClass @ 14a786bf0

UClass * __cdecl UCommonTreeView::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonTreeView.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonTreeView",
               &Z_Registration_Info_UClass_UCommonTreeView.InnerSingleton,
               StaticRegisterNativesUCommonTreeView,0x1170,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCommonTreeView>,
               InternalVTableHelperCtorCaller<UCommonTreeView>,local_res8,UTreeView::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonTreeView.InnerSingleton;
}

// UCommonTreeView @ 14a7aeec0

UCommonTreeView * __thiscall
UCommonTreeView::UCommonTreeView(UCommonTreeView *this,FVTableHelper *param_1)

{
  UTreeView::UTreeView((UTreeView *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x348 = &___7UCommonTreeView__6B_;
  return this;
}

// UCommonTreeView @ 14a7aef00

UCommonTreeView * __thiscall
UCommonTreeView::UCommonTreeView(UCommonTreeView *this,FObjectInitializer *param_1)

{
  UTreeView::UTreeView((UTreeView *)this,param_1);
  this->field_0x1fc = 1;
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x348 = &___7UCommonTreeView__6B_;
  return this;
}

// ~UCommonTreeView @ 14a7b3570

void __thiscall UCommonTreeView::~UCommonTreeView(UCommonTreeView *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x348 = &___7UCommonTreeView__6B_;
  UTreeView::~UTreeView((UTreeView *)this);
  return;
}

// GetPrivateStaticClass @ 14a7e64a0

UClass * __cdecl UCommonTreeView::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonTreeView.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonTreeView",
               &Z_Registration_Info_UClass_UCommonTreeView.InnerSingleton,
               StaticRegisterNativesUCommonTreeView,0x1170,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCommonTreeView>,
               InternalVTableHelperCtorCaller<UCommonTreeView>,local_res8,UTreeView::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonTreeView.InnerSingleton;
}

// OnGenerateEntryWidgetInternal @ 14a7fcbc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UUserWidget * __thiscall
UCommonTreeView::OnGenerateEntryWidgetInternal
          (UCommonTreeView *this,UObject *param_1,TSubclassOf<UUserWidget> param_2,
          TSharedRef<STableViewBase,1> *param_3)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UUserWidget *pUVar4;
  longlong lVar5;
  UObject *local_res18;
  
  lVar5 = *(longlong *)param_2.Class.field0_0x0;
  if ((lVar5 != 0) &&
     (pUVar3 = Z_Construct_UClass_UUserWidget_NoRegister(), pUVar3 != (UClass *)0x0)) {
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(lVar5 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar5 = *(longlong *)param_2.Class.field0_0x0;
      goto LAB_14a7fcc1a;
    }
  }
  lVar5 = 0;
LAB_14a7fcc1a:
  pUVar3 = UCommonButtonBase::StaticClass();
  if (pUVar3 == (UClass *)0x0) {
    local_res18 = *(UObject **)param_2.Class.field0_0x0;
  }
  else {
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(lVar5 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    local_res18 = *(UObject **)param_2.Class.field0_0x0;
    if (bVar2) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_res18);
      }
      pUVar4 = UListViewBase::GenerateTypedEntry<UUserWidget,SCommonButtonTableRow<UObject_*>_>
                         ((UListViewBase *)&this[-1].field_0xe28,
                          (TSubclassOf<UUserWidget>)&local_res18,param_3);
      return pUVar4;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res18);
  }
  pUVar4 = UListViewBase::GenerateTypedEntry<UUserWidget,SObjectTableRow<UObject_*>_>
                     ((UListViewBase *)&this[-1].field_0xe28,(TSubclassOf<UUserWidget>)&local_res18,
                      param_3);
  return pUVar4;
}

// RebuildListWidget @ 14a804d20

TSharedRef<STableViewBase,1> * __thiscall
UCommonTreeView::RebuildListWidget
          (UCommonTreeView *this,TSharedRef<STableViewBase,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<SCommonTreeView<UObject_*>,1> *pTVar2;
  TSharedRef<SCommonTreeView<UObject_*>,1> local_18;
  
  pTVar2 = UTreeView::ConstructTreeView<SCommonTreeView>((UTreeView *)this,&local_18);
  __return_storage_ptr__->Object = (STableViewBase *)pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUCommonTreeView @ 14a81e8e0

void __cdecl UCommonTreeView::StaticRegisterNativesUCommonTreeView(void)

{
  return;
}

