// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 23

// StaticClass @ 14b77bbf0

UClass * __cdecl UDS_W_CommonButtonBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_CommonButtonBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_CommonButtonBase",
               &Z_Registration_Info_UClass_UDS_W_CommonButtonBase.InnerSingleton,
               StaticRegisterNativesUDS_W_CommonButtonBase,0x1780,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_W_CommonButtonBase>,
               InternalVTableHelperCtorCaller<UDS_W_CommonButtonBase>,local_res8,
               UCommonButtonBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_CommonButtonBase.InnerSingleton;
}

// UDS_W_CommonButtonBase @ 14b780c60

UDS_W_CommonButtonBase * __thiscall
UDS_W_CommonButtonBase::UDS_W_CommonButtonBase(UDS_W_CommonButtonBase *this,FVTableHelper *param_1)

{
  UCommonButtonBase::UCommonButtonBase((UCommonButtonBase *)this,param_1);
  this->ButtonStateType = Normal;
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &___7UDS_W_CommonButtonBase__6B_;
  (this->ButtonImageArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ButtonImageArray).ArrayNum = 0;
  (this->ButtonImageArray).ArrayMax = 0;
  (this->ButtonTextArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ButtonTextArray).ArrayNum = 0;
  (this->ButtonTextArray).ArrayMax = 0;
  this->bIsCustomSelected = false;
  this->bIsLacked = false;
  this->bIsCustomDisabled = false;
  return this;
}

// ~UDS_W_CommonButtonBase @ 14b782b30

void __thiscall UDS_W_CommonButtonBase::~UDS_W_CommonButtonBase(UDS_W_CommonButtonBase *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x1b0 = &___7UDS_W_CommonButtonBase__6B_;
  pFVar1 = (this->ButtonTextArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ButtonImageArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UCommonButtonBase::~UCommonButtonBase((UCommonButtonBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b785420

UClass * __cdecl UDS_W_CommonButtonBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_CommonButtonBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_CommonButtonBase",
               &Z_Registration_Info_UClass_UDS_W_CommonButtonBase.InnerSingleton,
               StaticRegisterNativesUDS_W_CommonButtonBase,0x1780,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_W_CommonButtonBase>,
               InternalVTableHelperCtorCaller<UDS_W_CommonButtonBase>,local_res8,
               UCommonButtonBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_CommonButtonBase.InnerSingleton;
}

// StaticRegisterNativesUDS_W_CommonButtonBase @ 14b786420

void __cdecl UDS_W_CommonButtonBase::StaticRegisterNativesUDS_W_CommonButtonBase(void)

{
  return;
}

// UDS_W_CommonButtonBase @ 14bce5460

UDS_W_CommonButtonBase * __thiscall
UDS_W_CommonButtonBase::UDS_W_CommonButtonBase
          (UDS_W_CommonButtonBase *this,FObjectInitializer *param_1)

{
  UCommonButtonBase::UCommonButtonBase((UCommonButtonBase *)this,param_1);
  this->ButtonStateType = Normal;
  *(undefined ***)this = &_vftable__for__UVisual__;
  this->bIsCustomSelected = false;
  this->bIsLacked = false;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  this->bIsCustomDisabled = false;
  *(undefined ***)&this->field_0x1b0 = &___7UDS_W_CommonButtonBase__6B_;
  (this->ButtonImageArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ButtonImageArray).ArrayNum = 0;
  (this->ButtonImageArray).ArrayMax = 0;
  (this->ButtonTextArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ButtonTextArray).ArrayNum = 0;
  (this->ButtonTextArray).ArrayMax = 0;
  UCommonButtonBase::SetVisibility((UCommonButtonBase *)this,Visible);
  return this;
}

// Called_OnClicked @ 14bceac50

void __thiscall UDS_W_CommonButtonBase::Called_OnClicked(UDS_W_CommonButtonBase *this)

{
  UpdateButtonStateType(this);
  NotifyButtonEvent(this);
  return;
}

// Called_OnDoubleClicked @ 14bceac80

void __thiscall UDS_W_CommonButtonBase::Called_OnDoubleClicked(UDS_W_CommonButtonBase *this)

{
  UpdateButtonStateType(this);
  NotifyButtonEvent(this);
  return;
}

// Called_OnHovered @ 14bceacb0

void __thiscall UDS_W_CommonButtonBase::Called_OnHovered(UDS_W_CommonButtonBase *this)

{
  UpdateButtonStateType(this);
  NotifyButtonEvent(this);
  return;
}

// Called_OnPressed @ 14bceace0

void __thiscall UDS_W_CommonButtonBase::Called_OnPressed(UDS_W_CommonButtonBase *this)

{
  UpdateButtonStateType(this);
  NotifyButtonEvent(this);
  return;
}

// Called_OnReleased @ 14bcead10

void __thiscall UDS_W_CommonButtonBase::Called_OnReleased(UDS_W_CommonButtonBase *this)

{
  UpdateButtonStateType(this);
  NotifyButtonEvent(this);
  return;
}

// Called_OnUnhovered @ 14bcead40

void __thiscall UDS_W_CommonButtonBase::Called_OnUnhovered(UDS_W_CommonButtonBase *this)

{
  UpdateButtonStateType(this);
  NotifyButtonEvent(this);
  return;
}

// FindImageAndTextWidget @ 14bcf30f0

void __thiscall
UDS_W_CommonButtonBase::FindImageAndTextWidget(UDS_W_CommonButtonBase *this,UPanelWidget *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FWeakObjectPtr *pFVar3;
  UDS_CommonRichTextBlock *this_00;
  int iVar4;
  int iVar5;
  UClass *pUVar6;
  ForAnyElementType FVar7;
  UDS_CommonRichTextBlock *local_res18 [2];
  TArray<UWidget_*,TSizedDefaultAllocator<32>_> local_38;
  
  UPanelWidget::GetAllChildren(param_1,&local_38);
  iVar4 = local_38.ArrayNum;
  pFVar2 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar7.Data = local_38.AllocatorInstance.Data;
LAB_14bcf3140:
  do {
    while( true ) {
      if (local_38.ArrayNum != iVar4) {
        `TCheckedPointerIterator<UWidget_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (FVar7.Data == pFVar2) {
        if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.AllocatorInstance.Data);
        }
        return;
      }
      this_00 = *(UDS_CommonRichTextBlock **)FVar7.Data;
      if (this_00 != (UDS_CommonRichTextBlock *)0x0) break;
LAB_14bcf3321:
      FVar7.Data = FVar7.Data + 8;
    }
    pUVar6 = Z_Construct_UClass_UDS_CommonLazyImage_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if ((iVar5 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar5 * 8)
        == &pUVar6->_padding_)) {
      if (*(char *)((longlong)&this_00->_padding_ + 4) == '\0') goto LAB_14bcf3321;
      (**(code **)(this_00->_padding_ + 0x378))(this_00,&this->ButtonStateType);
      iVar5 = (this->ButtonImageArray).ArrayNum;
      piVar1 = &(this->ButtonImageArray).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&(this->ButtonImageArray).AllocatorInstance,piVar1);
      }
      (this->ButtonImageArray).ArrayNum = iVar5 + 1;
      pFVar3 = (FWeakObjectPtr *)
               ((this->ButtonImageArray).AllocatorInstance.Data + (longlong)iVar5 * 8);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      pFVar3->ObjectIndex = 0;
      pFVar3->ObjectSerialNumber = 0;
      local_res18[0] = this_00;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      FWeakObjectPtr::operator=(pFVar3,(FObjectPtr)local_res18);
      FVar7.Data = FVar7.Data + 8;
      goto LAB_14bcf3140;
    }
    pUVar6 = Z_Construct_UClass_UDS_CommonRichTextBlock_NoRegister();
    iVar5 = (int)pUVar6->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar5) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar5 * 8)
        != &pUVar6->_padding_)) {
      pUVar6 = Z_Construct_UClass_UPanelWidget_NoRegister();
      iVar5 = (int)pUVar6->_padding_;
      if ((iVar5 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
          &pUVar6->_padding_)) {
        (**(code **)(*(longlong *)this + 0x620))(this,this_00);
      }
      goto LAB_14bcf3321;
    }
    if (this_00->IsButtonText == false) goto LAB_14bcf3321;
    UDS_CommonRichTextBlock::SetButtonStateType(this_00,&this->ButtonStateType);
    iVar5 = (this->ButtonTextArray).ArrayNum;
    piVar1 = &(this->ButtonTextArray).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&(this->ButtonTextArray).AllocatorInstance,piVar1);
    }
    (this->ButtonTextArray).ArrayNum = iVar5 + 1;
    pFVar3 = (FWeakObjectPtr *)
             ((this->ButtonTextArray).AllocatorInstance.Data + (longlong)iVar5 * 8);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    pFVar3->ObjectIndex = 0;
    pFVar3->ObjectSerialNumber = 0;
    local_res18[0] = this_00;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    FWeakObjectPtr::operator=(pFVar3,(FObjectPtr)local_res18);
    FVar7.Data = FVar7.Data + 8;
  } while( true );
}

// GetRootPanel @ 14bcfb740

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UPanelWidget * __thiscall UDS_W_CommonButtonBase::GetRootPanel(UDS_W_CommonButtonBase *this)

{
  UDS_W_CommonButtonBase *pUVar1;
  uint uVar2;
  UDS_W_CommonButtonBase *pUVar4;
  UDS_W_CommonButtonBase *pUVar3;
  
  pUVar3 = (UDS_W_CommonButtonBase *)0x0;
  pUVar4 = pUVar3;
  while( true ) {
    pUVar1 = pUVar4;
    if (pUVar4 == (UDS_W_CommonButtonBase *)0x0) {
      pUVar1 = this;
    }
    pUVar1 = (UDS_W_CommonButtonBase *)UWidget::GetParent((UWidget *)pUVar1);
    if (pUVar1 == (UDS_W_CommonButtonBase *)0x0) break;
    uVar2 = (int)pUVar3 + 1;
    pUVar3 = (UDS_W_CommonButtonBase *)(ulonglong)uVar2;
    pUVar4 = pUVar1;
    if (9 < (int)uVar2) {
      return (UPanelWidget *)pUVar1;
    }
  }
  return (UPanelWidget *)pUVar4;
}

// NativePreConstruct @ 14bd09650

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_W_CommonButtonBase::NativePreConstruct(UDS_W_CommonButtonBase *this)

{
  UDS_W_CommonButtonBase *pUVar1;
  UDS_W_CommonButtonBase *pUVar2;
  uint uVar3;
  UDS_W_CommonButtonBase *pUVar4;
  
  UUserWidget::NativePreConstruct((UUserWidget *)this);
  pUVar2 = (UDS_W_CommonButtonBase *)0x0;
  (this->ButtonImageArray).ArrayNum = 0;
  if ((this->ButtonImageArray).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->ButtonImageArray).AllocatorInstance,0,
               &(this->ButtonImageArray).ArrayMax);
  }
  (this->ButtonTextArray).ArrayNum = 0;
  pUVar4 = pUVar2;
  if ((this->ButtonTextArray).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->ButtonTextArray).AllocatorInstance,0,&(this->ButtonTextArray).ArrayMax)
    ;
  }
  do {
    pUVar1 = pUVar2;
    if (pUVar2 == (UDS_W_CommonButtonBase *)0x0) {
      pUVar1 = this;
    }
    pUVar1 = (UDS_W_CommonButtonBase *)UWidget::GetParent((UWidget *)pUVar1);
  } while ((pUVar1 != (UDS_W_CommonButtonBase *)0x0) &&
          (uVar3 = (int)pUVar4 + 1, pUVar2 = pUVar1,
          pUVar4 = (UDS_W_CommonButtonBase *)(ulonglong)uVar3, (int)uVar3 < 10));
  if (pUVar2 != (UDS_W_CommonButtonBase *)0x0) {
    (**(code **)(*(longlong *)this + 0x620))(this,pUVar2);
  }
  return;
}

// NotifyButtonEvent @ 14bd09d10

void __thiscall UDS_W_CommonButtonBase::NotifyButtonEvent(UDS_W_CommonButtonBase *this)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  bool bVar3;
  UObject *pUVar4;
  UDS_CommonRichTextBlock *this_00;
  FWeakObjectPtr *pFVar5;
  undefined1 local_res8 [8];
  
  pFVar5 = (FWeakObjectPtr *)(this->ButtonImageArray).AllocatorInstance.Data;
  iVar2 = (this->ButtonImageArray).ArrayNum;
  pFVar1 = pFVar5 + iVar2;
  while( true ) {
    if ((this->ButtonImageArray).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_CommonLazyImage,FWeakObjectPtr>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    bVar3 = FWeakObjectPtr::IsValid(pFVar5);
    if (bVar3) {
      pUVar4 = FWeakObjectPtr::Get(pFVar5);
      (**(code **)(*(longlong *)pUVar4 + 0x378))(pUVar4,&this->ButtonStateType);
    }
    pFVar5 = pFVar5 + 1;
  }
  pFVar5 = (FWeakObjectPtr *)(this->ButtonTextArray).AllocatorInstance.Data;
  iVar2 = (this->ButtonTextArray).ArrayNum;
  pFVar1 = pFVar5 + iVar2;
  while( true ) {
    if ((this->ButtonTextArray).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_CommonRichTextBlock,FWeakObjectPtr>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar1) break;
    bVar3 = FWeakObjectPtr::IsValid(pFVar5);
    if (bVar3) {
      this_00 = (UDS_CommonRichTextBlock *)FWeakObjectPtr::Get(pFVar5);
      UDS_CommonRichTextBlock::SetButtonStateType(this_00,&this->ButtonStateType);
    }
    pFVar5 = pFVar5 + 1;
  }
  return;
}

// SetButtonStateType @ 14bd1e0b0

void __thiscall
UDS_W_CommonButtonBase::SetButtonStateType
          (UDS_W_CommonButtonBase *this,EDS_ButtonStateType *param_1)

{
  this->ButtonStateType = *param_1;
  NotifyButtonEvent(this);
  return;
}

// SetDisabled @ 14bd1f260

void __thiscall UDS_W_CommonButtonBase::SetDisabled(UDS_W_CommonButtonBase *this,bool *param_1)

{
  this->bIsCustomDisabled = *param_1;
  UpdateButtonStateType(this);
  NotifyButtonEvent(this);
  return;
}

// SetLacked @ 14bd201e0

void __thiscall UDS_W_CommonButtonBase::SetLacked(UDS_W_CommonButtonBase *this,bool *param_1)

{
  this->bIsLacked = *param_1;
  UpdateButtonStateType(this);
  NotifyButtonEvent(this);
  return;
}

// SetMinHeight @ 14bd202d0

void __thiscall UDS_W_CommonButtonBase::SetMinHeight(UDS_W_CommonButtonBase *this,int *param_1)

{
  *(int *)&this->field_0x3d8 = *param_1;
  UCommonButtonBase::RefreshDimensions((UCommonButtonBase *)this);
  return;
}

// SetMinWidth @ 14bd202f0

void __thiscall UDS_W_CommonButtonBase::SetMinWidth(UDS_W_CommonButtonBase *this,int *param_1)

{
  *(int *)&this->field_0x3d4 = *param_1;
  UCommonButtonBase::RefreshDimensions((UCommonButtonBase *)this);
  return;
}

// SetSelected @ 14bd20ea0

void __thiscall UDS_W_CommonButtonBase::SetSelected(UDS_W_CommonButtonBase *this,bool *param_1)

{
  this->bIsCustomSelected = *param_1;
  UpdateButtonStateType(this);
  NotifyButtonEvent(this);
  return;
}

// UpdateButtonStateType @ 14bd27300

void __thiscall UDS_W_CommonButtonBase::UpdateButtonStateType(UDS_W_CommonButtonBase *this)

{
  bool bVar1;
  char cVar2;
  EDS_ButtonStateType EVar3;
  EDS_ButtonStateType EVar4;
  
  bVar1 = UCommonButtonBase::IsPressed((UCommonButtonBase *)this);
  cVar2 = (**(code **)(*(longlong *)this + 0x2c8))(this);
  if ((this->bIsCustomDisabled == true) || (this->bIsLacked == true)) {
    if (bVar1) {
      this->ButtonStateType = Disabled_Clicked;
      return;
    }
    EVar3 = Disabled;
    EVar4 = Disabled_Hovered;
  }
  else {
    if (this->bIsCustomSelected != true) {
      if (bVar1) {
        this->ButtonStateType = Normal_Clicked;
        return;
      }
      this->ButtonStateType = (cVar2 == '\x01') + Normal;
      return;
    }
    if (bVar1) {
      this->ButtonStateType = Selected_Clicked;
      return;
    }
    EVar3 = Selected;
    EVar4 = Selected_Hovered;
  }
  if (cVar2 == '\x01') {
    EVar3 = EVar4;
  }
  this->ButtonStateType = EVar3;
  return;
}

