// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// StaticClass @ 14b7613a0

UClass * __cdecl UDS_Widget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_Widget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_Widget",
               &Z_Registration_Info_UClass_UDS_Widget.InnerSingleton,StaticRegisterNativesUDS_Widget
               ,0x3a8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UDS_Widget>,
               InternalVTableHelperCtorCaller<UDS_Widget>,local_res8,UUserWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_Widget.InnerSingleton;
}

// UDS_Widget @ 14b7644e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDS_Widget * __thiscall UDS_Widget::UDS_Widget(UDS_Widget *this,FVTableHelper *param_1)

{
  UUserWidget::UUserWidget((UUserWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &___7UDS_Widget__6B_;
  return this;
}

// ~UDS_Widget @ 14b765200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_Widget::~UDS_Widget(UDS_Widget *this)

{
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &___7UDS_Widget__6B_;
  UUserWidget::~UUserWidget((UUserWidget *)this);
  return;
}

// GetPrivateStaticClass @ 14b7666d0

UClass * __cdecl UDS_Widget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_Widget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_Widget",
               &Z_Registration_Info_UClass_UDS_Widget.InnerSingleton,StaticRegisterNativesUDS_Widget
               ,0x3a8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UDS_Widget>,
               InternalVTableHelperCtorCaller<UDS_Widget>,local_res8,UUserWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_Widget.InnerSingleton;
}

// StaticRegisterNativesUDS_Widget @ 14b766d10

void __cdecl UDS_Widget::StaticRegisterNativesUDS_Widget(void)

{
  return;
}

// UDS_Widget @ 14bc847d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDS_Widget * __thiscall UDS_Widget::UDS_Widget(UDS_Widget *this,FObjectInitializer *param_1)

{
  UUserWidget::UUserWidget((UUserWidget *)this,param_1);
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &___7UDS_Widget__6B_;
  return this;
}

// GetAnimation @ 14bc9ece0

UWidgetAnimation * __thiscall UDS_Widget::GetAnimation(UDS_Widget *this,FName param_1)

{
  int iVar1;
  FObjectPropertyBase *pFVar2;
  UWidgetAnimation *pUVar3;
  UClass *pUVar4;
  
  pFVar2 = FindFProperty<FObjectPropertyBase>(*(UStruct **)&this->field_0x10,param_1,Default);
  if (pFVar2 != (FObjectPropertyBase *)0x0) {
    pUVar3 = (UWidgetAnimation *)(**(code **)(pFVar2->_padding_ + 0x208))(pFVar2,this,0);
    if (pUVar3 != (UWidgetAnimation *)0x0) {
      pUVar4 = Z_Construct_UClass_UWidgetAnimation_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        pUVar3 = (UWidgetAnimation *)0x0;
      }
      return pUVar3;
    }
  }
  return (UWidgetAnimation *)0x0;
}

// InitWidgetBinding @ 14bca5960

void __thiscall UDS_Widget::InitWidgetBinding(UDS_Widget *this)

{
  return;
}

// IsActive @ 14bca6bc0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_Widget::IsActive(UDS_Widget *this,UWidget *param_1)

{
  ESlateVisibility EVar1;
  
  if (param_1 != (UWidget *)0x0) {
    EVar1 = UWidget::GetVisibility(param_1);
    if (EVar1 != Collapsed) {
      return true;
    }
  }
  return false;
}

// NativeConstruct @ 14bcac200

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_Widget::NativeConstruct(UDS_Widget *this)

{
  UUserWidget::NativeConstruct((UUserWidget *)this);
                    /* WARNING: Could not recover jumptable at 0x00014bcac219. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x4e8))(this);
  return;
}

// NativeDestruct @ 14bcac570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_Widget::NativeDestruct(UDS_Widget *this)

{
  ForElementType<UUserWidgetExtension_*> FVar1;
  longlong *plVar2;
  UWidgetBlueprintGeneratedClass *this_00;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  UFunction *pUVar9;
  UClass *pUVar10;
  int iVar11;
  ForElementType<UUserWidgetExtension_*> FVar12;
  undefined1 auStackY_188 [32];
  undefined1 auStack_158 [8];
  FDestructionSentinel FStack_150;
  ForElementType<UUserWidgetExtension_*> FStack_138;
  int aiStack_30 [2];
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  (**(code **)(*(longlong *)this + 0x4d0))();
  lVar8 = (**(code **)(*(longlong *)this + 0x2e0))(this);
  if (lVar8 != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(lVar8 + 0x140),this);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->field_0x298,
             (FWriteAccessScope *)&FStack_150);
  *(int *)&this->field_0x2b4 = *(int *)&this->field_0x2b4 + 1;
  bVar6 = false;
  iVar11 = *(int *)&this->field_0x2a8 + -1;
  if (-1 < iVar11) {
    lVar8 = (longlong)iVar11 << 4;
    bVar6 = false;
    do {
      if ((*(int *)&this->field_0x2a8 <= iVar11) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((*(int *)(lVar8 + 8 + *(longlong *)&this->field_0x2a0) == 0) ||
          (plVar2 = *(longlong **)(lVar8 + *(longlong *)&this->field_0x2a0),
          plVar2 == (longlong *)0x0)) || (cVar5 = (**(code **)(*plVar2 + 0x68))(), cVar5 == '\0')) {
        bVar6 = true;
      }
      lVar8 = lVar8 + -0x10;
      iVar11 = iVar11 + -1;
    } while (-1 < iVar11);
  }
  *(int *)&this->field_0x2b4 = *(int *)&this->field_0x2b4 + -1;
  if (bVar6) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->field_0x298,false);
  }
  if (FStack_150.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_150.Accessor,&FStack_150);
  }
  pUVar9 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_Destruct);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar9,0);
  this->field_0x348 = this->field_0x348 & 0xe7;
  if (0 < *(int *)&this->field_0x338) {
    aiStack_30[1] = 0x20;
    FStack_138.SecondaryData = (ForElementType<UUserWidgetExtension_*>)0x0;
    aiStack_30[0] = 0;
    if ((&FStack_138 == (ForElementType<UUserWidgetExtension_*> *)&this->field_0x330) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar11 = *(int *)&this->field_0x338;
    if (iVar11 != 0) {
      iVar7 = UE::Core::Private::
              ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UUserWidgetExtension_*>_>
                        (8,8,iVar11,&FStack_138,aiStack_30,aiStack_30 + 1);
      FVar12 = (ForElementType<UUserWidgetExtension_*>)&FStack_138;
      if (FStack_138.SecondaryData != (ForElementType<UUserWidgetExtension_*>)0x0) {
        FVar12 = FStack_138.SecondaryData;
      }
      ConstructItems<UUserWidgetExtension_*,TObjectPtr<UUserWidgetExtension>,int>
                ((longlong *)((longlong)FVar12 + (longlong)iVar7 * 8),
                 *(TObjectPtr<UUserWidgetExtension> **)&this->field_0x330,iVar11);
    }
    iVar11 = aiStack_30[0];
    FVar12 = (ForElementType<UUserWidgetExtension_*>)&FStack_138;
    if (FStack_138.SecondaryData != (ForElementType<UUserWidgetExtension_*>)0x0) {
      FVar12 = FStack_138.SecondaryData;
    }
    FVar1 = (ForElementType<UUserWidgetExtension_*>)((longlong)FVar12 + (longlong)aiStack_30[0] * 8)
    ;
    while( true ) {
      if (aiStack_30[0] != iVar11) {
        auStack_158[0] = 0;
        `TCheckedPointerIterator<UUserWidgetExtension_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(auStack_158);
      }
      if (FVar12 == FVar1) break;
      plVar2 = *(longlong **)FVar12;
      if ((plVar2 == (longlong *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Extension",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\UserWidget.cpp"
                             ,0x7a5,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (**(code **)(*plVar2 + 0x2d0))(plVar2);
      FVar12 = (ForElementType<UUserWidgetExtension_*>)((longlong)FVar12 + 8);
    }
    if (FStack_138.SecondaryData != (ForElementType<UUserWidgetExtension_*>)0x0) {
      FMemory::Free((void *)FStack_138.SecondaryData);
    }
  }
  this_00 = *(UWidgetBlueprintGeneratedClass **)&this->field_0x10;
  if (this_00 != (UWidgetBlueprintGeneratedClass *)0x0) {
    pUVar10 = UWidgetBlueprintGeneratedClass::StaticClass();
    iVar11 = (int)pUVar10->_padding_;
    if ((iVar11 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar11 * 8) ==
        &pUVar10->_padding_)) {
      UWidgetBlueprintGeneratedClass::
      ForEachExtension<_UUserWidget::NativeDestruct_::__l19::<lambda_1>_>
                (this_00,(<lambda_1>)this,true);
    }
  }
  return;
}

// NativeOnMouseButtonDown @ 14bcad630

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
UDS_Widget::NativeOnMouseButtonDown
          (UDS_Widget *this,FReply *__return_storage_ptr__,FGeometry *param_1,FPointerEvent *param_2
          )

{
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// NativePreConstruct @ 14bcaec30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_Widget::NativePreConstruct(UDS_Widget *this)

{
  ForElementType<UUserWidgetExtension_*> FVar1;
  int iVar2;
  UWidgetBlueprintGeneratedClass *this_00;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  UFunction *pUVar8;
  ForElementType<UUserWidgetExtension_*> FVar9;
  undefined1 auStackY_1a8 [32];
  undefined1 uStack_178;
  undefined1 auStack_177 [3];
  FLLMScope FStack_174;
  FName FStack_170;
  FMemScope aFStack_168 [2];
  UDS_Widget *pUStack_158;
  undefined1 uStack_150;
  uint7 uStack_14f;
  <lambda_1> <Stack_148;
  ForElementType<UUserWidgetExtension_*> FStack_138;
  int aiStack_30 [2];
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  FLLMScope::FLLMScope(&FStack_174,LLMTagDeclaration_UI_UMG.UniqueName,false,None,Default,true);
  FStack_170 = LLMTagDeclaration_UI_UMG.UniqueName;
  FMemScope::FMemScope(aFStack_168,&FStack_170,true);
  this_00 = *(UWidgetBlueprintGeneratedClass **)&this->field_0x10;
  if (this_00 != (UWidgetBlueprintGeneratedClass *)0x0) {
    pUVar7 = UWidgetBlueprintGeneratedClass::StaticClass();
    iVar2 = (int)pUVar7->_padding_;
    if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar7->_padding_)) {
      uStack_150 = 0;
      <Stack_148._8_8_ = (ulonglong)uStack_14f << 8;
      pUStack_158 = this;
      <Stack_148.__this = (UUserWidget *)this;
      UWidgetBlueprintGeneratedClass::
      ForEachExtension<_UUserWidget::NativePreConstruct_::__l5::<lambda_1>_>
                (this_00,&<Stack_148,true);
    }
  }
  this->field_0x348 = this->field_0x348 | 8;
  aiStack_30[1] = 0x20;
  FStack_138.SecondaryData = (ForElementType<UUserWidgetExtension_*>)0x0;
  aiStack_30[0] = 0;
  if ((&FStack_138 == (ForElementType<UUserWidgetExtension_*> *)&this->field_0x330) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar2 = *(int *)&this->field_0x338;
  if (iVar2 != 0) {
    iVar6 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<UUserWidgetExtension_*>_>
                      (8,8,iVar2,&FStack_138,aiStack_30,aiStack_30 + 1);
    FVar9 = (ForElementType<UUserWidgetExtension_*>)&FStack_138;
    if (FStack_138.SecondaryData != (ForElementType<UUserWidgetExtension_*>)0x0) {
      FVar9 = FStack_138.SecondaryData;
    }
    ConstructItems<UUserWidgetExtension_*,TObjectPtr<UUserWidgetExtension>,int>
              ((longlong *)((longlong)FVar9 + (longlong)iVar6 * 8),
               *(TObjectPtr<UUserWidgetExtension> **)&this->field_0x330,iVar2);
  }
  iVar2 = aiStack_30[0];
  FVar9 = (ForElementType<UUserWidgetExtension_*>)&FStack_138;
  if (FStack_138.SecondaryData != (ForElementType<UUserWidgetExtension_*>)0x0) {
    FVar9 = FStack_138.SecondaryData;
  }
  FVar1 = (ForElementType<UUserWidgetExtension_*>)((longlong)FVar9 + (longlong)aiStack_30[0] * 8);
  while( true ) {
    if (aiStack_30[0] != iVar2) {
      uStack_178 = 0;
      `TCheckedPointerIterator<UUserWidgetExtension_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&uStack_178);
    }
    if (FVar9 == FVar1) break;
    plVar3 = *(longlong **)FVar9;
    if ((plVar3 == (longlong *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Extension",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\UserWidget.cpp"
                           ,0x765,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (**(code **)(*plVar3 + 0x2c0))(plVar3,0);
    FVar9 = (ForElementType<UUserWidgetExtension_*>)((longlong)FVar9 + 8);
  }
  FWidgetChild::Resolve((FWidgetChild *)&this->field_0x364,*(UWidgetTree **)&this->field_0x340);
  auStack_177[0] = 0;
  pUVar8 = UObject::FindFunctionChecked((UObject *)this,NAME_UUserWidget_PreConstruct);
  (**(code **)(*(longlong *)this + 0x260))(this,pUVar8,auStack_177);
  if (FStack_138.SecondaryData != (ForElementType<UUserWidgetExtension_*>)0x0) {
    FMemory::Free((void *)FStack_138.SecondaryData);
  }
  FMemScope::~FMemScope(aFStack_168);
  FLLMScope::~FLLMScope(&FStack_174);
  return;
}

// OnOpenInit @ 14bcb8330

void __thiscall UDS_Widget::OnOpenInit(UDS_Widget *this)

{
  return;
}

// Toggle @ 14bccd1a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_Widget::Toggle(UDS_Widget *this,UWidget *param_1,bool param_2)

{
  undefined1 uVar1;
  
  if (param_1 != (UWidget *)0x0) {
    uVar1 = 4;
    if (!param_2) {
      uVar1 = 1;
    }
                    /* WARNING: Could not recover jumptable at 0x00014bccd1bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1->_padding_ + 0x2c0))(param_1,uVar1,param_2,param_1);
    return;
  }
  return;
}

