// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 8

// StaticClass @ 14a780970

UClass * __cdecl UCommonTileView::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonTileView.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonTileView",
               &Z_Registration_Info_UClass_UCommonTileView.InnerSingleton,
               StaticRegisterNativesUCommonTileView,0x1120,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCommonTileView>,
               InternalVTableHelperCtorCaller<UCommonTileView>,local_res8,UTileView::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonTileView.InnerSingleton;
}

// UCommonTileView @ 14a7aee30

UCommonTileView * __thiscall
UCommonTileView::UCommonTileView(UCommonTileView *this,FVTableHelper *param_1)

{
  UTileView::UTileView((UTileView *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x348 = &___7UCommonTileView__6B_;
  return this;
}

// UCommonTileView @ 14a7aee70

UCommonTileView * __thiscall
UCommonTileView::UCommonTileView(UCommonTileView *this,FObjectInitializer *param_1)

{
  UTileView::UTileView((UTileView *)this,param_1);
  this->field_0x1fc = 1;
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x348 = &___7UCommonTileView__6B_;
  return this;
}

// ~UCommonTileView @ 14a7b3540

void __thiscall UCommonTileView::~UCommonTileView(UCommonTileView *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x348 = &___7UCommonTileView__6B_;
  UTileView::~UTileView((UTileView *)this);
  return;
}

// GetPrivateStaticClass @ 14a7e63e0

UClass * __cdecl UCommonTileView::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonTileView.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonTileView",
               &Z_Registration_Info_UClass_UCommonTileView.InnerSingleton,
               StaticRegisterNativesUCommonTileView,0x1120,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCommonTileView>,
               InternalVTableHelperCtorCaller<UCommonTileView>,local_res8,UTileView::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonTileView.InnerSingleton;
}

// OnGenerateEntryWidgetInternal @ 14a7fcab0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UUserWidget * __thiscall
UCommonTileView::OnGenerateEntryWidgetInternal
          (UCommonTileView *this,UObject *param_1,TSubclassOf<UUserWidget> param_2,
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
      goto LAB_14a7fcb0a;
    }
  }
  lVar5 = 0;
LAB_14a7fcb0a:
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
                         ((UListViewBase *)&this[-1].field_0xdd8,
                          (TSubclassOf<UUserWidget>)&local_res18,param_3);
      return pUVar4;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res18);
  }
  pUVar4 = UListViewBase::GenerateTypedEntry<UUserWidget,SObjectTableRow<UObject_*>_>
                     ((UListViewBase *)&this[-1].field_0xdd8,(TSubclassOf<UUserWidget>)&local_res18,
                      param_3);
  return pUVar4;
}

// RebuildListWidget @ 14a804cd0

TSharedRef<STableViewBase,1> * __thiscall
UCommonTileView::RebuildListWidget
          (UCommonTileView *this,TSharedRef<STableViewBase,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<SCommonTileView<UObject_*>,1> *pTVar2;
  TSharedRef<SCommonTileView<UObject_*>,1> local_18;
  
  pTVar2 = UTileView::ConstructTileView<SCommonTileView>((UTileView *)this,&local_18);
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

// StaticRegisterNativesUCommonTileView @ 14a81e8d0

void __cdecl UCommonTileView::StaticRegisterNativesUCommonTileView(void)

{
  return;
}

