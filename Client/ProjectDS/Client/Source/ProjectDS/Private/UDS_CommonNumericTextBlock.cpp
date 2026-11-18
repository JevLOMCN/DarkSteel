// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// SetTextField_WrapperImpl @ 14b4617f0

void __cdecl UDS_CommonNumericTextBlock::SetTextField_WrapperImpl(void *param_1,void *param_2)

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

// SetTextColor_WrapperImpl @ 14b461800

void __cdecl UDS_CommonNumericTextBlock::SetTextColor_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  FLinearColor_u_0 FStack_48;
  uint uStack_38;
  uint uStack_18;
  
  uVar1 = *(undefined8 *)((longlong)param_2 + 8);
  uStack_18 = uStack_18 & 0xffffff00;
  *(undefined8 *)((longlong)param_1 + 0x490) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 0x498) = uVar1;
  uStack_38 = uStack_18;
  FStack_48._0_8_ = *(undefined8 *)param_2;
  FStack_48._8_8_ = *(undefined8 *)((longlong)param_2 + 8);
  UTextBlock::SetColorAndOpacity(param_1,(FSlateColor *)&FStack_48._s_0);
  return;
}

// StaticClass @ 14b461810

UClass * __cdecl UDS_CommonNumericTextBlock::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonNumericTextBlock.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonNumericTextBlock",
               &Z_Registration_Info_UClass_UDS_CommonNumericTextBlock.InnerSingleton,
               StaticRegisterNativesUDS_CommonNumericTextBlock,0x4b0,0x10,
               CLASS_Intrinsic|CLASS_DefaultConfig,CASTCLASS_None,L"CommonUI",
               InternalConstructor<UDS_CommonNumericTextBlock>,
               InternalVTableHelperCtorCaller<UDS_CommonNumericTextBlock>,local_res8,
               UCommonNumericTextBlock::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonNumericTextBlock.InnerSingleton;
}

// UDS_CommonNumericTextBlock @ 14b465ab0

UDS_CommonNumericTextBlock * __thiscall
UDS_CommonNumericTextBlock::UDS_CommonNumericTextBlock
          (UDS_CommonNumericTextBlock *this,FVTableHelper *param_1)

{
  UCommonNumericTextBlock::UCommonNumericTextBlock((UCommonNumericTextBlock *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  FText::FText(&this->TextField);
  (this->TextColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  (this->TextArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextArray).ArrayNum = 0;
  (this->TextArray).ArrayMax = 0;
  return this;
}

// UDS_CommonNumericTextBlock @ 14b465b10

UDS_CommonNumericTextBlock * __thiscall
UDS_CommonNumericTextBlock::UDS_CommonNumericTextBlock
          (UDS_CommonNumericTextBlock *this,FObjectInitializer *param_1)

{
  UCommonNumericTextBlock::UCommonNumericTextBlock((UCommonNumericTextBlock *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  FText::FText(&this->TextField);
  (this->TextColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  (this->TextArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TextArray).ArrayNum = 0;
  (this->TextArray).ArrayMax = 0;
  return this;
}

// ~UDS_CommonNumericTextBlock @ 14b466650

void __thiscall
UDS_CommonNumericTextBlock::~UDS_CommonNumericTextBlock(UDS_CommonNumericTextBlock *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  DestructItems<FString,int>
            ((FString *)(this->TextArray).AllocatorInstance.Data,(this->TextArray).ArrayNum);
  pFVar1 = (this->TextArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->TextField).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  UCommonNumericTextBlock::~UCommonNumericTextBlock((UCommonNumericTextBlock *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b467c70

IClassDescriptor * __thiscall
UDS_CommonNumericTextBlock::GetFieldNotificationDescriptor(UDS_CommonNumericTextBlock *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_CommonNumericTextBlock::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b4684a0

UClass * __cdecl UDS_CommonNumericTextBlock::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CommonNumericTextBlock.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CommonNumericTextBlock",
               &Z_Registration_Info_UClass_UDS_CommonNumericTextBlock.InnerSingleton,
               StaticRegisterNativesUDS_CommonNumericTextBlock,0x4b0,0x10,
               CLASS_Intrinsic|CLASS_DefaultConfig,CASTCLASS_None,L"CommonUI",
               InternalConstructor<UDS_CommonNumericTextBlock>,
               InternalVTableHelperCtorCaller<UDS_CommonNumericTextBlock>,local_res8,
               UCommonNumericTextBlock::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CommonNumericTextBlock.InnerSingleton;
}

// StaticRegisterNativesUDS_CommonNumericTextBlock @ 14b468ce0

void __cdecl UDS_CommonNumericTextBlock::StaticRegisterNativesUDS_CommonNumericTextBlock(void)

{
  return;
}

// SetTextColor @ 14bcc9170

void __thiscall
UDS_CommonNumericTextBlock::SetTextColor(UDS_CommonNumericTextBlock *this,FLinearColor *param_1)

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

// SetTextField @ 14bcc91f0

void __thiscall
UDS_CommonNumericTextBlock::SetTextField(UDS_CommonNumericTextBlock *this,FText *param_1)

{
  code *pcVar1;
  undefined1 local_res8 [8];
  ITextData *local_18;
  uint local_10;
  
  local_18 = (param_1->TextData).Reference;
  pcVar1 = *(code **)(this->_padding_ + 0x358);
  if (local_18 != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18 + 8))(local_18,local_res8);
  }
  local_10 = param_1->Flags;
  (*pcVar1)(this,&local_18);
  return;
}

