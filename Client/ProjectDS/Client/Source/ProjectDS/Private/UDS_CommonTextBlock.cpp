// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// SetDSText_WrapperImpl @ 14b462820

void __cdecl UDS_CommonTextBlock::SetDSText_WrapperImpl(void *param_1,void *param_2)

{
  code *pcVar1;
  FText *pFVar2;
  FText FStack_18;
  
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0x3c0),param_2);
  pcVar1 = *(code **)(*(longlong *)param_1 + 0x358);
  pFVar2 = FDS_Text::GetText((FDS_Text *)((longlong)param_1 + 0x3c0),&FStack_18);
  (*pcVar1)(param_1,pFVar2);
  return;
}

// SetTextField_WrapperImpl @ 14b462830

void __cdecl UDS_CommonTextBlock::SetTextField_WrapperImpl(void *param_1,void *param_2)

{
  code *pcVar1;
  undefined1 auStackX_8 [8];
  longlong *plStack_18;
  undefined4 uStack_10;
  
  plStack_18 = *(longlong **)param_2;
  pcVar1 = *(code **)(*(longlong *)param_1 + 0x358);
  if (plStack_18 != (longlong *)0x0) {
    (**(code **)(*plStack_18 + 8))(plStack_18,auStackX_8);
  }
  uStack_10 = *(undefined4 *)((longlong)param_2 + 8);
  (*pcVar1)(param_1,&plStack_18);
  return;
}

// SetTextColor_WrapperImpl @ 14b462840

void __cdecl UDS_CommonTextBlock::SetTextColor_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  FLinearColor_u_0 FStack_48;
  uint uStack_38;
  uint uStack_18;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  uStack_18 = uStack_18 & 0xffffff00;
  *(undefined8 *)((longlong)param_1 + 0x438) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 0x440) = uVar1;
  uStack_38 = uStack_18;
  FStack_48._0_8_ = *(undefined8 *)param_2;
  FStack_48._8_8_ = *(undefined8 *)((longlong)param_2 + 8);
  UTextBlock::SetColorAndOpacity(param_1,(FSlateColor *)&FStack_48._s_0);
  return;
}

// StaticClass @ 14b462850

UClass * __cdecl UDS_CommonTextBlock::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonTextBlock.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonTextBlock",
               &Z_Registration_Info_UClass_UDS_CommonTextBlock.InnerSingleton,
               StaticRegisterNativesUDS_CommonTextBlock,0x450,0x10,
               CLASS_Intrinsic|CLASS_DefaultConfig,CASTCLASS_None,L"CommonUI",
               InternalConstructor<UDS_CommonTextBlock>,
               InternalVTableHelperCtorCaller<UDS_CommonTextBlock>,local_res8,
               UCommonTextBlock::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonTextBlock.InnerSingleton;
}

// UDS_CommonTextBlock @ 14b466190

UDS_CommonTextBlock * __thiscall
UDS_CommonTextBlock::UDS_CommonTextBlock(UDS_CommonTextBlock *this,FVTableHelper *param_1)

{
  UCommonTextBlock::UCommonTextBlock((UCommonTextBlock *)this,param_1);
  this->ButtonStateType = Normal;
  *(undefined ***)this = &_vftable__for__UVisual__;
  (this->DSText).StringTableType = None;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  (this->DSText).StringTableID = 0;
  (this->DSText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->DSText).StringEnumTableNameID.Number = 0;
  (this->DSText).DateTime.Ticks = 0;
  (this->DSText).TimeSpan.Ticks = 0;
  (this->DSText).TimeExpressionType = None;
  (this->DSText).IsExpression = false;
  (this->DSText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DSText).UniqueString.Data.ArrayNum = 0;
  (this->DSText).UniqueString.Data.ArrayMax = 0;
  (this->DSText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DSText).FormatArgs.ArrayNum = 0;
  (this->DSText).FormatArgs.ArrayMax = 0;
  this->IsButtonText = false;
  (this->ButtonTextData).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  FText::FText(&this->TextField);
  (this->TextColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  return this;
}

// ~UDS_CommonTextBlock @ 14b466910

void __thiscall UDS_CommonTextBlock::~UDS_CommonTextBlock(UDS_CommonTextBlock *this)

{
  ITextData *pIVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined ***)this = &_vftable__for__UVisual__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  pIVar1 = (this->TextField).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->DSText).FormatArgs.AllocatorInstance.Data,
             (this->DSText).FormatArgs.ArrayNum);
  pFVar2 = (this->DSText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->DSText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UCommonTextBlock::~UCommonTextBlock((UCommonTextBlock *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b467d50

IClassDescriptor * __thiscall
UDS_CommonTextBlock::GetFieldNotificationDescriptor(UDS_CommonTextBlock *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_CommonTextBlock::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b468920

UClass * __cdecl UDS_CommonTextBlock::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonTextBlock.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonTextBlock",
               &Z_Registration_Info_UClass_UDS_CommonTextBlock.InnerSingleton,
               StaticRegisterNativesUDS_CommonTextBlock,0x450,0x10,
               CLASS_Intrinsic|CLASS_DefaultConfig,CASTCLASS_None,L"CommonUI",
               InternalConstructor<UDS_CommonTextBlock>,
               InternalVTableHelperCtorCaller<UDS_CommonTextBlock>,local_res8,
               UCommonTextBlock::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonTextBlock.InnerSingleton;
}

// StaticRegisterNativesUDS_CommonTextBlock @ 14b468d40

void __cdecl UDS_CommonTextBlock::StaticRegisterNativesUDS_CommonTextBlock(void)

{
  return;
}

// UDS_CommonTextBlock @ 14bc837f0

UDS_CommonTextBlock * __thiscall
UDS_CommonTextBlock::UDS_CommonTextBlock(UDS_CommonTextBlock *this,FObjectInitializer *param_1)

{
  UCommonTextBlock::UCommonTextBlock((UCommonTextBlock *)this,param_1);
  this->ButtonStateType = Normal;
  *(undefined ***)this = &_vftable__for__UVisual__;
  (this->DSText).StringTableType = None;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  (this->DSText).StringTableID = 0;
  (this->DSText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->DSText).StringEnumTableNameID.Number = 0;
  (this->DSText).DateTime.Ticks = 0;
  (this->DSText).TimeSpan.Ticks = 0;
  (this->DSText).TimeExpressionType = None;
  (this->DSText).IsExpression = false;
  (this->DSText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DSText).UniqueString.Data.ArrayNum = 0;
  (this->DSText).UniqueString.Data.ArrayMax = 0;
  (this->DSText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DSText).FormatArgs.ArrayNum = 0;
  (this->DSText).FormatArgs.ArrayMax = 0;
  this->IsButtonText = false;
  (this->ButtonTextData).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  FText::FText(&this->TextField);
  (this->TextColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  return this;
}

// SetButtonStateType @ 14bcc5300

void __thiscall
UDS_CommonTextBlock::SetButtonStateType(UDS_CommonTextBlock *this,EDS_ButtonStateType *param_1)

{
  this->ButtonStateType = *param_1;
                    /* WARNING: Could not recover jumptable at 0x00014bcc530b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x380))();
  return;
}

// SetDSText @ 14bcc5b10

void __thiscall UDS_CommonTextBlock::SetDSText(UDS_CommonTextBlock *this,FDS_Text *param_1)

{
  code *pcVar1;
  FText *pFVar2;
  FText local_18;
  
  FDS_Text::operator=(&this->DSText,param_1);
  pcVar1 = *(code **)(*(longlong *)this + 0x358);
  pFVar2 = FDS_Text::GetText(&this->DSText,&local_18);
  (*pcVar1)(this,pFVar2);
  return;
}

// SetTextColor @ 14bcc91b0

void __thiscall UDS_CommonTextBlock::SetTextColor(UDS_CommonTextBlock *this,FLinearColor *param_1)

{
  undefined8 uVar1;
  FLinearColor_u_0 local_48;
  uint local_38;
  uint local_18;
  
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  local_18 = local_18 & 0xffffff00;
  *(undefined8 *)&(this->TextColor).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  *(undefined8 *)((longlong)&(this->TextColor).field0_0x0 + 8) = uVar1;
  local_38 = local_18;
  local_48._0_8_ = *(undefined8 *)&param_1->field0_0x0;
  local_48._8_8_ = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  UTextBlock::SetColorAndOpacity((UTextBlock *)this,(FSlateColor *)&local_48._s_0);
  return;
}

// SetTextField @ 14bcc9250

void __thiscall UDS_CommonTextBlock::SetTextField(UDS_CommonTextBlock *this,FText *param_1)

{
  code *pcVar1;
  undefined1 local_res8 [8];
  ITextData *local_18;
  uint local_10;
  
  local_18 = (param_1->TextData).Reference;
  pcVar1 = *(code **)(*(longlong *)this + 0x358);
  if (local_18 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18 + 8))(local_18,local_res8);
  }
  local_10 = param_1->Flags;
  (*pcVar1)(this,&local_18);
  return;
}

// SetTextFromButtonTextData @ 14bcc92c0

void __thiscall UDS_CommonTextBlock::SetTextFromButtonTextData(UDS_CommonTextBlock *this)

{
  int iVar1;
  UObject *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  
  pUVar7 = (this->ButtonTextData).Class.field0_0x0.DebugPtr;
  if (pUVar7 == (UClass *)0x0) {
    return;
  }
  pUVar6 = Z_Construct_UClass_UDS_ButtonTextData_NoRegister();
  if (pUVar6 == (UClass *)0x0) {
    return;
  }
  iVar1 = (int)pUVar6->_padding_;
  if (((int)pUVar7->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_))
  {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) {
    return;
  }
  pUVar7 = (this->ButtonTextData).Class.field0_0x0.DebugPtr;
  if (pUVar7 == (UClass *)0x0) {
    return;
  }
  pUVar6 = Z_Construct_UClass_UDS_ButtonTextData_NoRegister();
  if (pUVar6 != (UClass *)0x0) {
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar7->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      pUVar7 = (this->ButtonTextData).Class.field0_0x0.DebugPtr;
      goto LAB_14bcc935c;
    }
  }
  pUVar7 = (UClass *)0x0;
LAB_14bcc935c:
  if ((pUVar7->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar7);
  }
  pUVar2 = (pUVar7->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar7 = Z_Construct_UClass_UDS_ButtonTextData_NoRegister();
  lVar3 = *(longlong *)&pUVar2->field_0x10;
  iVar1 = (int)pUVar7->_padding_;
  if (((*(int *)(lVar3 + 0x38) < iVar1) ||
      ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
       &pUVar7->_padding_)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ret->IsA(T::StaticClass())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0x1181,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  return;
}

// SynchronizeProperties @ 14bccab00

void __thiscall UDS_CommonTextBlock::SynchronizeProperties(UDS_CommonTextBlock *this)

{
  longlong lVar1;
  STextScroller *this_00;
  bool bVar2;
  int iVar3;
  FText *this_01;
  undefined8 uVar4;
  undefined2 auStackX_8 [4];
  FText FStack_18;
  
  UCommonTextBlock::UpdateFromStyle((UCommonTextBlock *)this);
  UTextBlock::SynchronizeProperties((UTextBlock *)this);
  if (this->field_0x396 != '\0') {
    lVar1 = *(longlong *)this;
    this_01 = UTextBlock::GetText((UTextBlock *)this,&FStack_18);
    bVar2 = FText::IsEmpty(this_01);
    uVar4 = 4;
    if (bVar2) {
      uVar4 = 1;
    }
    (**(code **)(lVar1 + 0x2c0))(this,uVar4);
    if (FStack_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*FStack_18.TextData.Reference + 0x10))();
    }
  }
  iVar3 = (**(code **)(*(longlong *)CommonUIUtils::EnableMobileUITextScaling._padding_ + 200))();
  if (iVar3 == 1) {
    UCommonTextBlock::ApplyFontSizeMultiplier((UCommonTextBlock *)this);
  }
  this_00 = *(STextScroller **)&this->field_0x3b0;
  if (this_00 != (STextScroller *)0x0) {
    if (this->field_0x394 == '\0') {
      STextScroller::SuspendScrolling(this_00);
      return;
    }
    STextScroller::StartScrolling(this_00);
    if (*(STextBlock **)&this->field_0x380 != (STextBlock *)0x0) {
      auStackX_8[0] = 0x100;
      STextBlock::SetOverflowPolicy(*(STextBlock **)&this->field_0x380,SUB82(auStackX_8,0));
      return;
    }
  }
  return;
}

