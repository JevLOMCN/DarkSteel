// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 8

// StaticClass @ 14a787700

UClass * __cdecl UCommonUILibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonUILibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonUILibrary",
               &Z_Registration_Info_UClass_UCommonUILibrary.InnerSingleton,
               StaticRegisterNativesUCommonUILibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UCommonUILibrary>,
               InternalVTableHelperCtorCaller<UCommonUILibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonUILibrary.InnerSingleton;
}

// UCommonUILibrary @ 14a7af730

UCommonUILibrary * __thiscall
UCommonUILibrary::UCommonUILibrary(UCommonUILibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UCommonUILibrary__6B_;
  return this;
}

// UCommonUILibrary @ 14a7af760

UCommonUILibrary * __thiscall
UCommonUILibrary::UCommonUILibrary(UCommonUILibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UCommonUILibrary__6B_;
  return this;
}

// ~UCommonUILibrary @ 14a7b3870

void __thiscall UCommonUILibrary::~UCommonUILibrary(UCommonUILibrary *this)

{
  *(undefined ***)this = &___7UCommonUILibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// FindParentWidgetOfType @ 14a7dd1f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UWidget * __cdecl
UCommonUILibrary::FindParentWidgetOfType(UWidget *param_1,TSubclassOf<UWidget> param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UPanelWidget *this;
  UPanelWidget *pUVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  
  if (param_1 == (UWidget *)0x0) {
    return (UWidget *)0x0;
  }
  do {
    pUVar4 = UWidget::GetParent(param_1);
    while (this = pUVar4, this != (UPanelWidget *)0x0) {
      pUVar6 = *(UObject **)param_2.Class.field0_0x0;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar6 != (UObject *)0x0) goto LAB_14a7dd244;
LAB_14a7dd272:
        pUVar6 = (UObject *)0x0;
      }
      else {
        if (pUVar6 == (UObject *)0x0) goto LAB_14a7dd272;
        UE::GC::MarkAsReachable(pUVar6);
LAB_14a7dd244:
        pUVar5 = Z_Construct_UClass_UWidget_NoRegister();
        if (pUVar5 == (UClass *)0x0) goto LAB_14a7dd272;
        iVar1 = (int)pUVar5->_padding_;
        if ((*(int *)&pUVar6[1].field_0x10 < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar6[1].field_0x8 + (longlong)iVar1 * 8) !=
            &pUVar5->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_14a7dd272;
      }
      if ((*(int *)&pUVar6[1].field_0x10 <= *(int *)(this->_padding_ + 0x38)) &&
         (*(undefined1 **)
           (*(longlong *)(this->_padding_ + 0x30) + (longlong)*(int *)&pUVar6[1].field_0x10 * 8) ==
          &pUVar6[1].field_0x8)) {
        return (UWidget *)this;
      }
      pUVar4 = UWidget::GetParent((UWidget *)this);
      param_1 = (UWidget *)this;
    }
    lVar2 = ((UPanelWidget *)param_1)->_padding_;
    if (lVar2 == 0) {
      return (UWidget *)0x0;
    }
    pUVar5 = Z_Construct_UClass_UWidgetTree_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if (*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < iVar1) {
      return (UWidget *)0x0;
    }
    if ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_) {
      return (UWidget *)0x0;
    }
    param_1 = *(UWidget **)(lVar2 + 0x20);
    if ((UPanelWidget *)param_1 == (UPanelWidget *)0x0) {
      return (UWidget *)0x0;
    }
    pUVar5 = Z_Construct_UClass_UUserWidget_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if (*(int *)(((UPanelWidget *)param_1)->_padding_ + 0x38) < iVar1) {
      return (UWidget *)0x0;
    }
    if ((longlong *)
        *(undefined1 **)
         (*(longlong *)(((UPanelWidget *)param_1)->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_) {
      return (UWidget *)0x0;
    }
    pUVar6 = *(UObject **)param_2.Class.field0_0x0;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar6 != (UObject *)0x0) goto LAB_14a7dd33a;
LAB_14a7dd368:
      pUVar6 = (UObject *)0x0;
    }
    else {
      if (pUVar6 == (UObject *)0x0) goto LAB_14a7dd368;
      UE::GC::MarkAsReachable(pUVar6);
LAB_14a7dd33a:
      pUVar5 = Z_Construct_UClass_UWidget_NoRegister();
      if (pUVar5 == (UClass *)0x0) goto LAB_14a7dd368;
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)&pUVar6[1].field_0x10 < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)&pUVar6[1].field_0x8 + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_14a7dd368;
    }
    if ((*(int *)&pUVar6[1].field_0x10 <= *(int *)(((UPanelWidget *)param_1)->_padding_ + 0x38)) &&
       (*(undefined1 **)
         (*(longlong *)(((UPanelWidget *)param_1)->_padding_ + 0x30) +
         (longlong)*(int *)&pUVar6[1].field_0x10 * 8) == &pUVar6[1].field_0x8)) {
      return (UWidget *)(UPanelWidget *)param_1;
    }
  } while( true );
}

// GetPrivateStaticClass @ 14a7e6780

UClass * __cdecl UCommonUILibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCommonUILibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CommonUI",L"CommonUILibrary",
               &Z_Registration_Info_UClass_UCommonUILibrary.InnerSingleton,
               StaticRegisterNativesUCommonUILibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UCommonUILibrary>,
               InternalVTableHelperCtorCaller<UCommonUILibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCommonUILibrary.InnerSingleton;
}

// StaticRegisterNativesUCommonUILibrary @ 14a81e920

void __cdecl UCommonUILibrary::StaticRegisterNativesUCommonUILibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UCommonUILibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execFindParentWidgetOfType @ 14a82d070

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UCommonUILibrary::execFindParentWidgetOfType(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  bool bVar4;
  UPanelWidget *this;
  UObject *pUVar5;
  UPanelWidget *pUVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  UPanelWidget *this_00;
  UObject *local_res10;
  UPanelWidget *local_res18 [2];
  
  local_res18[0] = (UPanelWidget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar5 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  this_00 = local_res18[0];
  if (local_res18[0] != (UPanelWidget *)0x0) {
    do {
      pUVar6 = UWidget::GetParent((UWidget *)this_00);
      while (this = pUVar6, this != (UPanelWidget *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar5 != (UObject *)0x0) goto LAB_14a82d17d;
LAB_14a82d1b0:
          pUVar8 = (UObject *)0x0;
        }
        else {
          if (pUVar5 == (UObject *)0x0) goto LAB_14a82d1b0;
          UE::GC::MarkAsReachable(pUVar5);
LAB_14a82d17d:
          pUVar7 = Z_Construct_UClass_UWidget_NoRegister();
          if (pUVar7 == (UClass *)0x0) goto LAB_14a82d1b0;
          iVar1 = (int)pUVar7->_padding_;
          if ((*(int *)&pUVar5[1].field_0x10 < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar5[1].field_0x8 + (longlong)iVar1 * 8)
              != &pUVar7->_padding_)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          pUVar8 = pUVar5;
          if (!bVar4) goto LAB_14a82d1b0;
        }
        if ((*(int *)&pUVar8[1].field_0x10 <= *(int *)(this->_padding_ + 0x38)) &&
           (*(undefined1 **)
             (*(longlong *)(this->_padding_ + 0x30) + (longlong)*(int *)&pUVar8[1].field_0x10 * 8)
            == &pUVar8[1].field_0x8)) {
          *(UPanelWidget **)param_3 = this;
          return;
        }
        pUVar6 = UWidget::GetParent((UWidget *)this);
        this_00 = this;
      }
      lVar3 = this_00->_padding_;
      if (lVar3 == 0) break;
      pUVar7 = Z_Construct_UClass_UWidgetTree_NoRegister();
      iVar1 = (int)pUVar7->_padding_;
      if (((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < iVar1) ||
          ((longlong *)
           *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8)
           != &pUVar7->_padding_)) ||
         (this_00 = *(UPanelWidget **)(lVar3 + 0x20), this_00 == (UPanelWidget *)0x0)) break;
      pUVar7 = Z_Construct_UClass_UUserWidget_NoRegister();
      iVar1 = (int)pUVar7->_padding_;
      if ((*(int *)(this_00->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) break;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar5 != (UObject *)0x0) goto LAB_14a82d278;
LAB_14a82d2ab:
        pUVar8 = (UObject *)0x0;
      }
      else {
        if (pUVar5 == (UObject *)0x0) goto LAB_14a82d2ab;
        UE::GC::MarkAsReachable(pUVar5);
LAB_14a82d278:
        pUVar7 = Z_Construct_UClass_UWidget_NoRegister();
        if (pUVar7 == (UClass *)0x0) goto LAB_14a82d2ab;
        iVar1 = (int)pUVar7->_padding_;
        if ((*(int *)&pUVar5[1].field_0x10 < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar5[1].field_0x8 + (longlong)iVar1 * 8) !=
            &pUVar7->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        pUVar8 = pUVar5;
        if (!bVar4) goto LAB_14a82d2ab;
      }
      if ((*(int *)&pUVar8[1].field_0x10 <= *(int *)(this_00->_padding_ + 0x38)) &&
         (*(undefined1 **)
           (*(longlong *)(this_00->_padding_ + 0x30) + (longlong)*(int *)&pUVar8[1].field_0x10 * 8)
          == &pUVar8[1].field_0x8)) {
        *(UPanelWidget **)param_3 = this_00;
        return;
      }
    } while( true );
  }
  *(undefined8 *)param_3 = 0;
  return;
}

