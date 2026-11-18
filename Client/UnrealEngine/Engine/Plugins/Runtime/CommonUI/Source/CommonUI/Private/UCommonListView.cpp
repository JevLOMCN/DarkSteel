// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 10

// StaticClass @ 14a788c60

UClass * __cdecl UCommonListView::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonListView.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonListView",
               &Z_Registration_Info_UClass_UCommonListView.InnerSingleton,
               StaticRegisterNativesUCommonListView,0x1100,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCommonListView>,
               InternalVTableHelperCtorCaller<UCommonListView>,local_res8,UListView::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonListView.InnerSingleton;
}

// UCommonListView @ 14a7adfa0

UCommonListView * __thiscall
UCommonListView::UCommonListView(UCommonListView *this,FVTableHelper *param_1)

{
  UListView::UListView((UListView *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x348 = &___7UCommonListView__6B_;
  return this;
}

// UCommonListView @ 14a7adfe0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UCommonListView * __thiscall
UCommonListView::UCommonListView(UCommonListView *this,FObjectInitializer *param_1)

{
  UListView::UListView((UListView *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x348 = &___7UCommonListView__6B_;
  UWidget::SetVisibilityInternal((UWidget *)this,Visible);
  this->field_0x1fc = 1;
  return this;
}

// ~UCommonListView @ 14a7b2fb0

void __thiscall UCommonListView::~UCommonListView(UCommonListView *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x348 = &___7UCommonListView__6B_;
  UListView::~UListView((UListView *)this);
  return;
}

// GetPrivateStaticClass @ 14a7e5b00

UClass * __cdecl UCommonListView::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonListView.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonListView",
               &Z_Registration_Info_UClass_UCommonListView.InnerSingleton,
               StaticRegisterNativesUCommonListView,0x1100,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UCommonListView>,
               InternalVTableHelperCtorCaller<UCommonListView>,local_res8,UListView::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonListView.InnerSingleton;
}

// OnGenerateEntryWidgetInternal @ 14a7fc9a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UUserWidget * __thiscall
UCommonListView::OnGenerateEntryWidgetInternal
          (UCommonListView *this,UObject *param_1,TSubclassOf<UUserWidget> param_2,
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
      goto LAB_14a7fc9fa;
    }
  }
  lVar5 = 0;
LAB_14a7fc9fa:
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
                         ((UListViewBase *)&this[-1].field_0xdb8,
                          (TSubclassOf<UUserWidget>)&local_res18,param_3);
      return pUVar4;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res18);
  }
  pUVar4 = UListViewBase::GenerateTypedEntry<UUserWidget,SObjectTableRow<UObject_*>_>
                     ((UListViewBase *)&this[-1].field_0xdb8,(TSubclassOf<UUserWidget>)&local_res18,
                      param_3);
  return pUVar4;
}

// RebuildListWidget @ 14a804c80

TSharedRef<STableViewBase,1> * __thiscall
UCommonListView::RebuildListWidget
          (UCommonListView *this,TSharedRef<STableViewBase,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<SCommonListView<UObject_*>,1> *pTVar2;
  TSharedRef<SCommonListView<UObject_*>,1> local_18;
  
  pTVar2 = UListView::ConstructListView<SCommonListView>((UListView *)this,&local_18);
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

// SetEntrySpacing @ 14a8181c0

void __thiscall UCommonListView::SetEntrySpacing(UCommonListView *this,float param_1)

{
  UListView::SetHorizontalEntrySpacing((UListView *)this,param_1);
  UListView::SetVerticalEntrySpacing((UListView *)this,param_1);
  return;
}

// StaticRegisterNativesUCommonListView @ 14a81e660

void __cdecl UCommonListView::StaticRegisterNativesUCommonListView(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UCommonListView_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetEntrySpacing @ 14a832f60

void __cdecl UCommonListView::execSetEntrySpacing(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float local_res10 [6];
  
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
  fVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UListView::SetHorizontalEntrySpacing((UListView *)param_1,local_res10[0]);
  UListView::SetVerticalEntrySpacing((UListView *)param_1,fVar2);
  return;
}

