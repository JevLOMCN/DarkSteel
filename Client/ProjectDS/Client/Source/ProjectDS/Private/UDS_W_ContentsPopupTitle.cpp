// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// SetIsShowTitle_WrapperImpl @ 14b77e000

void __cdecl UDS_W_ContentsPopupTitle::SetIsShowTitle_WrapperImpl(void *param_1,void *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  cVar1 = *(char *)param_2;
  *(char *)((longlong)param_1 + 0x890) = cVar1;
  plVar2 = *(longlong **)((longlong)param_1 + 0x880);
  if (plVar2 != (longlong *)0x0) {
    uVar3 = 1;
    if (cVar1 != '\0') {
      uVar3 = 4;
    }
    (**(code **)(*plVar2 + 0x2c0))(plVar2,uVar3);
  }
  plVar2 = *(longlong **)((longlong)param_1 + 0x888);
  if (plVar2 != (longlong *)0x0) {
    uVar3 = 1;
    if (*(char *)((longlong)param_1 + 0x890) != '\0') {
      uVar3 = 4;
    }
    (**(code **)(*plVar2 + 0x2c0))(plVar2,uVar3);
  }
  return;
}

// SetTitleText_WrapperImpl @ 14b77e010

void __cdecl UDS_W_ContentsPopupTitle::SetTitleText_WrapperImpl(void *param_1,void *param_2)

{
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0x898),param_2);
  if ((*(char *)((longlong)param_1 + 0x890) == '\x01') &&
     (*(UDS_CommonRichTextBlock **)((longlong)param_1 + 0x878) != (UDS_CommonRichTextBlock *)0x0)) {
    UDS_CommonRichTextBlock::SetDSText
              (*(UDS_CommonRichTextBlock **)((longlong)param_1 + 0x878),
               (FDS_Text *)((longlong)param_1 + 0x898));
  }
  return;
}

// StaticClass @ 14b77e020

UClass * __cdecl UDS_W_ContentsPopupTitle::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_ContentsPopupTitle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_ContentsPopupTitle",
               &Z_Registration_Info_UClass_UDS_W_ContentsPopupTitle.InnerSingleton,
               StaticRegisterNativesUDS_W_ContentsPopupTitle,0x8f8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_W_ContentsPopupTitle>,
               InternalVTableHelperCtorCaller<UDS_W_ContentsPopupTitle>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_ContentsPopupTitle.InnerSingleton;
}

// UDS_W_ContentsPopupTitle @ 14b781640

UDS_W_ContentsPopupTitle * __thiscall
UDS_W_ContentsPopupTitle::UDS_W_ContentsPopupTitle
          (UDS_W_ContentsPopupTitle *this,FVTableHelper *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->IsShowTitle = true;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  (this->TitleRichText).field0_0x0.DebugPtr = (UDS_CommonRichTextBlock *)0x0;
  (this->TitleImgBox).field0_0x0.DebugPtr = (UDS_ScaleBox *)0x0;
  (this->TitleAreaBox).field0_0x0.DebugPtr = (UDS_ScaleBox *)0x0;
  (this->TitleText).StringTableType = None;
  (this->TitleText).StringTableID = 0;
  (this->TitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TitleText).StringEnumTableNameID.Number = 0;
  (this->TitleText).DateTime.Ticks = 0;
  (this->TitleText).TimeSpan.Ticks = 0;
  (this->TitleText).TimeExpressionType = None;
  (this->TitleText).IsExpression = false;
  (this->TitleText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).UniqueString.Data.ArrayNum = 0;
  (this->TitleText).UniqueString.Data.ArrayMax = 0;
  (this->TitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).FormatArgs.ArrayNum = 0;
  (this->TitleText).FormatArgs.ArrayMax = 0;
  (this->Text).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text).Data.ArrayNum = 0;
  (this->Text).Data.ArrayMax = 0;
  return this;
}

// UDS_W_ContentsPopupTitle @ 14b781710

UDS_W_ContentsPopupTitle * __thiscall
UDS_W_ContentsPopupTitle::UDS_W_ContentsPopupTitle
          (UDS_W_ContentsPopupTitle *this,FObjectInitializer *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->IsShowTitle = true;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  (this->TitleRichText).field0_0x0.DebugPtr = (UDS_CommonRichTextBlock *)0x0;
  (this->TitleImgBox).field0_0x0.DebugPtr = (UDS_ScaleBox *)0x0;
  (this->TitleAreaBox).field0_0x0.DebugPtr = (UDS_ScaleBox *)0x0;
  (this->TitleText).StringTableType = None;
  (this->TitleText).StringTableID = 0;
  (this->TitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TitleText).StringEnumTableNameID.Number = 0;
  (this->TitleText).DateTime.Ticks = 0;
  (this->TitleText).TimeSpan.Ticks = 0;
  (this->TitleText).TimeExpressionType = None;
  (this->TitleText).IsExpression = false;
  (this->TitleText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).UniqueString.Data.ArrayNum = 0;
  (this->TitleText).UniqueString.Data.ArrayMax = 0;
  (this->TitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).FormatArgs.ArrayNum = 0;
  (this->TitleText).FormatArgs.ArrayMax = 0;
  (this->Text).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text).Data.ArrayNum = 0;
  (this->Text).Data.ArrayMax = 0;
  return this;
}

// ~UDS_W_ContentsPopupTitle @ 14b782f20

void __thiscall UDS_W_ContentsPopupTitle::~UDS_W_ContentsPopupTitle(UDS_W_ContentsPopupTitle *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  pFVar1 = (this->Text).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TitleText).FormatArgs.AllocatorInstance.Data,
             (this->TitleText).FormatArgs.ArrayNum);
  pFVar1 = (this->TitleText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TitleText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_UserWidget::~UDS_UserWidget((UDS_UserWidget *)this);
  return;
}

// GetPrivateStaticClass @ 14b785ae0

UClass * __cdecl UDS_W_ContentsPopupTitle::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_ContentsPopupTitle.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_ContentsPopupTitle",
               &Z_Registration_Info_UClass_UDS_W_ContentsPopupTitle.InnerSingleton,
               StaticRegisterNativesUDS_W_ContentsPopupTitle,0x8f8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_W_ContentsPopupTitle>,
               InternalVTableHelperCtorCaller<UDS_W_ContentsPopupTitle>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_ContentsPopupTitle.InnerSingleton;
}

// StaticRegisterNativesUDS_W_ContentsPopupTitle @ 14b786540

void __cdecl UDS_W_ContentsPopupTitle::StaticRegisterNativesUDS_W_ContentsPopupTitle(void)

{
  return;
}

// NativePreConstruct @ 14bd097c0

void __thiscall UDS_W_ContentsPopupTitle::NativePreConstruct(UDS_W_ContentsPopupTitle *this)

{
  UDS_ScaleBox *pUVar1;
  UDS_CommonRichTextBlock *pUVar2;
  code *pcVar3;
  FName *pFVar4;
  FText *pFVar5;
  undefined8 uVar6;
  FName local_res8;
  FText local_28;
  
  UDS_UserWidget::NativePreConstruct((UDS_UserWidget *)this);
  pFVar4 = ::FName::FName(&local_res8,"RText_Title");
  UDS_UserWidget::BindWidget<UDS_CommonRichTextBlock>
            ((UDS_UserWidget *)this,&this->TitleRichText,*pFVar4);
  pFVar4 = ::FName::FName(&local_res8,"Scal_TitleImg");
  UDS_UserWidget::BindWidget<UDS_ScaleBox>((UDS_UserWidget *)this,&this->TitleImgBox,*pFVar4);
  pFVar4 = ::FName::FName(&local_res8,"Scal_TitleArea");
  UDS_UserWidget::BindWidget<UDS_ScaleBox>((UDS_UserWidget *)this,&this->TitleAreaBox,*pFVar4);
  pUVar1 = (this->TitleImgBox).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_ScaleBox *)0x0) {
    uVar6 = 1;
    if (this->IsShowTitle != false) {
      uVar6 = 4;
    }
    (**(code **)(*(longlong *)pUVar1 + 0x2c0))(pUVar1,uVar6);
  }
  pUVar1 = (this->TitleAreaBox).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_ScaleBox *)0x0) {
    uVar6 = 1;
    if (this->IsShowTitle != false) {
      uVar6 = 4;
    }
    (**(code **)(*(longlong *)pUVar1 + 0x2c0))(pUVar1,uVar6);
  }
  if ((this->IsShowTitle == true) &&
     (pUVar2 = (this->TitleRichText).field0_0x0.DebugPtr, pUVar2 != (UDS_CommonRichTextBlock *)0x0))
  {
    pcVar3 = *(code **)(pUVar2->_padding_ + 0x358);
    pFVar5 = FText::FromString(&local_28,&this->Text);
    (*pcVar3)(pUVar2,pFVar5);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
  }
  return;
}

// SetIsShowTitle @ 14bd1fdc0

void __thiscall
UDS_W_ContentsPopupTitle::SetIsShowTitle(UDS_W_ContentsPopupTitle *this,bool *param_1)

{
  bool bVar1;
  UDS_ScaleBox *pUVar2;
  undefined8 uVar3;
  
  bVar1 = *param_1;
  this->IsShowTitle = bVar1;
  pUVar2 = (this->TitleImgBox).field0_0x0.DebugPtr;
  if (pUVar2 != (UDS_ScaleBox *)0x0) {
    uVar3 = 1;
    if (bVar1 != false) {
      uVar3 = 4;
    }
    (**(code **)(*(longlong *)pUVar2 + 0x2c0))(pUVar2,uVar3);
  }
  pUVar2 = (this->TitleAreaBox).field0_0x0.DebugPtr;
  if (pUVar2 != (UDS_ScaleBox *)0x0) {
    uVar3 = 1;
    if (this->IsShowTitle != false) {
      uVar3 = 4;
    }
    (**(code **)(*(longlong *)pUVar2 + 0x2c0))(pUVar2,uVar3);
  }
  return;
}

// SetTitleText @ 14bd22cc0

void __thiscall
UDS_W_ContentsPopupTitle::SetTitleText(UDS_W_ContentsPopupTitle *this,FDS_Text *param_1)

{
  UDS_CommonRichTextBlock *this_00;
  
  FDS_Text::operator=(&this->TitleText,param_1);
  if ((this->IsShowTitle == true) &&
     (this_00 = (this->TitleRichText).field0_0x0.DebugPtr, this_00 != (UDS_CommonRichTextBlock *)0x0
     )) {
    UDS_CommonRichTextBlock::SetDSText(this_00,&this->TitleText);
  }
  return;
}

// SynchronizeProperties @ 14bd22fd0

void __thiscall UDS_W_ContentsPopupTitle::SynchronizeProperties(UDS_W_ContentsPopupTitle *this)

{
  UDS_CommonRichTextBlock *this_00;
  
  UDS_UserWidget::SynchronizeProperties((UDS_UserWidget *)this);
  if ((((this->IsShowTitle == true) &&
       (this_00 = (this->TitleRichText).field0_0x0.DebugPtr,
       this_00 != (UDS_CommonRichTextBlock *)0x0)) && (0 < (this->TitleText).StringTableID)) &&
     ((this->TitleText).StringTableType != None)) {
    UDS_CommonRichTextBlock::SetDSText(this_00,&this->TitleText);
    return;
  }
  return;
}

