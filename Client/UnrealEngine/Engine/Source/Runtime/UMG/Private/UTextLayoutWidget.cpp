// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 35

// SetShapedTextOptions_WrapperImpl @ 14695e3f0

void __cdecl UTextLayoutWidget::SetShapedTextOptions_WrapperImpl(void *param_1,void *param_2)

{
  undefined2 uVar1;
  byte bVar2;
  byte bVar3;
  undefined2 local_res8;
  char local_resa;
  
  uVar1 = *(undefined2 *)param_2;
  local_resa = *(char *)((longlong)param_2 + 2);
  bVar3 = *(byte *)((longlong)param_1 + 0x1b0) & 1;
  if (((bVar3 == ((byte)uVar1 & 1)) &&
      (bVar2 = *(byte *)((longlong)param_1 + 0x1b0) >> 1 & 1, bVar2 == ((byte)uVar1 >> 1 & 1))) &&
     ((bVar3 == 0 ||
      (local_res8._1_1_ = (char)((ushort)uVar1 >> 8),
      *(char *)((longlong)param_1 + 0x1b1) == local_res8._1_1_)))) {
    if (bVar2 == 0) {
      return;
    }
    if (*(char *)((longlong)param_1 + 0x1b2) == local_resa) {
      return;
    }
  }
  *(undefined2 *)((longlong)param_1 + 0x1b0) = uVar1;
  *(undefined1 *)((longlong)param_1 + 0x1b2) = *(undefined1 *)((longlong)param_2 + 2);
  local_res8 = uVar1;
  (**(code **)(*(longlong *)param_1 + 0x318))(param_1,&local_res8);
  return;
}

// SetJustification_WrapperImpl @ 14695e4d0

void __cdecl UTextLayoutWidget::SetJustification_WrapperImpl(void *param_1,void *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014695e4d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x310))(param_1,*(undefined1 *)param_2);
  return;
}

// SetWrappingPolicy_WrapperImpl @ 14695e4f0

void __cdecl UTextLayoutWidget::SetWrappingPolicy_WrapperImpl(void *param_1,void *param_2)

{
  if (*(char *)((longlong)param_1 + 0x1b4) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0x1b4) = *(char *)param_2;
                    /* WARNING: Could not recover jumptable at 0x00014695e504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x328))();
    return;
  }
  return;
}

// SetAutoWrapText_WrapperImpl @ 14695e520

void __cdecl UTextLayoutWidget::SetAutoWrapText_WrapperImpl(void *param_1,void *param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)((longlong)param_1 + 0x1b5);
  if ((bVar1 & 1) != *(byte *)param_2) {
    *(byte *)((longlong)param_1 + 0x1b5) = (bVar1 ^ *(byte *)param_2) & 1 ^ bVar1;
                    /* WARNING: Could not recover jumptable at 0x00014695e549. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x330))();
    return;
  }
  return;
}

// SetApplyLineHeightToBottomLine_WrapperImpl @ 14695e560

void __cdecl
UTextLayoutWidget::SetApplyLineHeightToBottomLine_WrapperImpl(void *param_1,void *param_2)

{
  if (*(char *)((longlong)param_1 + 0x1b6) != *(char *)param_2) {
    *(char *)((longlong)param_1 + 0x1b6) = *(char *)param_2;
                    /* WARNING: Could not recover jumptable at 0x00014695e574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x348))();
    return;
  }
  return;
}

// SetWrapTextAt_WrapperImpl @ 14695e590

void __cdecl UTextLayoutWidget::SetWrapTextAt_WrapperImpl(void *param_1,void *param_2)

{
  if (*(float *)param_2 != *(float *)((longlong)param_1 + 0x1b8)) {
    *(float *)((longlong)param_1 + 0x1b8) = *(float *)param_2;
                    /* WARNING: Could not recover jumptable at 0x00014695e5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x338))();
    return;
  }
  return;
}

// SetMargin_WrapperImpl @ 14695e5c0

void __cdecl UTextLayoutWidget::SetMargin_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((((*(float *)param_2 == *(float *)((longlong)param_1 + 0x1bc)) &&
       (*(float *)((longlong)param_2 + 8) == *(float *)((longlong)param_1 + 0x1c4))) &&
      (*(float *)((longlong)param_2 + 4) == *(float *)((longlong)param_1 + 0x1c0))) &&
     (*(float *)((longlong)param_2 + 0xc) == *(float *)((longlong)param_1 + 0x1c8))) {
    return;
  }
  uVar1 = *(undefined4 *)param_2;
  uVar2 = *(undefined4 *)((longlong)param_2 + 4);
  uVar3 = *(undefined4 *)((longlong)param_2 + 8);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x1bc) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x1c0) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c8) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00014695e60b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x350))(uVar1,(longlong)param_1 + 0x1bc);
  return;
}

// SetLineHeightPercentage_WrapperImpl @ 14695e6f0

void __cdecl UTextLayoutWidget::SetLineHeightPercentage_WrapperImpl(void *param_1,void *param_2)

{
  if (*(float *)param_2 != *(float *)((longlong)param_1 + 0x1cc)) {
    *(float *)((longlong)param_1 + 0x1cc) = *(float *)param_2;
                    /* WARNING: Could not recover jumptable at 0x00014695e708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x340))();
    return;
  }
  return;
}

// StaticClass @ 14695e7a0

UClass * __cdecl UTextLayoutWidget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextLayoutWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"TextLayoutWidget",
               &Z_Registration_Info_UClass_UTextLayoutWidget.InnerSingleton,
               StaticRegisterNativesUTextLayoutWidget,0x1d0,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UTextLayoutWidget>,
               InternalVTableHelperCtorCaller<UTextLayoutWidget>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextLayoutWidget.InnerSingleton;
}

// SynchronizeTextLayoutProperties<SMultiLineEditableText> @ 1469801d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UTextLayoutWidget::SynchronizeTextLayoutProperties<SMultiLineEditableText>
          (UTextLayoutWidget *this,SMultiLineEditableText *param_1)

{
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this_00;
  FDestructionSentinel local_78;
  undefined1 local_60 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  ForAnyElementType FStack_50;
  ulonglong local_48;
  undefined1 local_40 [4];
  bool bStack_3c;
  undefined3 uStack_3b;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_38;
  ForAnyElementType FStack_30;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  FShapedTextOptions::SynchronizeShapedTextProperties<SMultiLineEditableText>
            (&this->ShapedTextOptions,param_1);
  local_60._0_4_ = ZEXT14((this->Justification).Value);
  local_60[4] = true;
  local_48 = 0;
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_50.Data = (FScriptContainerElement *)0x0;
  SMultiLineEditableText::SetJustification(param_1,(TAttribute<ETextJustify::Type> *)local_60);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_78);
  if (((int)local_48 != 0) && (FStack_50.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_50.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
    local_48 = local_48 & 0xffffffff00000000;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (FStack_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_50.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  local_60._0_2_ = 0x100;
  local_60._0_4_ = CONCAT31(local_60._1_3_,this->field_0x1b5) & 0xffffff01;
  local_48 = 0;
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_50.Data = (FScriptContainerElement *)0x0;
  SMultiLineEditableText::SetAutoWrapText(param_1,(TAttribute<bool> *)local_60);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_78);
  if (((int)local_48 != 0) && (FStack_50.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_50.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
    local_48 = local_48 & 0xffffffff00000000;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (FStack_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_50.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  if (this->WrapTextAt == 0.0) {
    TStack_38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_30.Data = (FScriptContainerElement *)0x0;
    _local_40 = _local_40 & 0xffffff0000000000;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    SMultiLineEditableText::SetWrapTextAt(param_1,(TAttribute<float> *)local_40);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&TStack_38,(FWriteAccessScope *)&local_78);
    if ((local_28.AccessDetector.State._0_4_ != 0) &&
       (FStack_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
      local_28.AccessDetector.State =
           (FMRSWRecursiveAccessDetector)
           ((ulonglong)local_28.AccessDetector.State & 0xffffffff00000000);
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if (FStack_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_30.Data);
    }
    this_00 = &TStack_38;
  }
  else {
    local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_50.Data = (FScriptContainerElement *)0x0;
    local_60[4] = true;
    local_48 = 0;
    local_60._0_4_ = this->WrapTextAt;
    SMultiLineEditableText::SetWrapTextAt(param_1,(TAttribute<float> *)local_60);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_58,(FWriteAccessScope *)&local_78);
    if (((int)local_48 != 0) && (FStack_50.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_50.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
      local_48 = local_48 & 0xffffffff00000000;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if (FStack_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_50.Data);
    }
    this_00 = &local_58;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&this_00->AccessDetector);
  local_40[1] = true;
  local_40[0] = (bool)this->WrappingPolicy;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  TStack_38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_30.Data = (FScriptContainerElement *)0x0;
  SMultiLineEditableText::SetWrappingPolicy(param_1,(TAttribute<ETextWrappingPolicy> *)local_40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&TStack_38,(FWriteAccessScope *)&local_78);
  if ((local_28.AccessDetector.State._0_4_ != 0) &&
     (FStack_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
    local_28.AccessDetector.State =
         (FMRSWRecursiveAccessDetector)
         ((ulonglong)local_28.AccessDetector.State & 0xffffffff00000000);
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (FStack_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_38.AccessDetector);
  _local_40 = *(ulonglong *)&this->Margin;
  TStack_38.AccessDetector.State = *(FMRSWRecursiveAccessDetector *)&(this->Margin).Right;
  FStack_30.Data._0_1_ = 1;
  local_18 = 0;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  SMultiLineEditableText::SetMargin(param_1,(TAttribute<FMargin> *)local_40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_28,(FWriteAccessScope *)&local_78);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  bStack_3c = true;
  local_40 = (undefined1  [4])this->LineHeightPercentage;
  TStack_38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_30.Data = (FScriptContainerElement *)0x0;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  SMultiLineEditableText::SetLineHeightPercentage(param_1,(TAttribute<float> *)local_40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&TStack_38,(FWriteAccessScope *)&local_78);
  if ((local_28.AccessDetector.State._0_4_ != 0) &&
     (FStack_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
    local_28.AccessDetector.State =
         (FMRSWRecursiveAccessDetector)
         ((ulonglong)local_28.AccessDetector.State & 0xffffffff00000000);
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (FStack_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_38.AccessDetector);
  local_40[1] = true;
  local_40[0] = this->ApplyLineHeightToBottomLine;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  TStack_38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_30.Data = (FScriptContainerElement *)0x0;
  SMultiLineEditableText::SetApplyLineHeightToBottomLine(param_1,(TAttribute<bool> *)local_40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&TStack_38,(FWriteAccessScope *)&local_78);
  if ((local_28.AccessDetector.State._0_4_ != 0) &&
     (FStack_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
    local_28.AccessDetector.State =
         (FMRSWRecursiveAccessDetector)
         ((ulonglong)local_28.AccessDetector.State & 0xffffffff00000000);
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (FStack_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_38.AccessDetector);
  return;
}

// SynchronizeTextLayoutProperties<SMultiLineEditableTextBox> @ 1469806c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UTextLayoutWidget::SynchronizeTextLayoutProperties<SMultiLineEditableTextBox>
          (UTextLayoutWidget *this,SMultiLineEditableTextBox *param_1)

{
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this_00;
  FDestructionSentinel local_78;
  undefined1 local_60 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  ForAnyElementType FStack_50;
  ulonglong local_48;
  undefined1 local_40 [4];
  bool bStack_3c;
  undefined3 uStack_3b;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_38;
  ForAnyElementType FStack_30;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  FShapedTextOptions::SynchronizeShapedTextProperties<SMultiLineEditableTextBox>
            (&this->ShapedTextOptions,param_1);
  local_60._0_4_ = ZEXT14((this->Justification).Value);
  local_60[4] = true;
  local_48 = 0;
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_50.Data = (FScriptContainerElement *)0x0;
  SMultiLineEditableTextBox::SetJustification(param_1,(TAttribute<ETextJustify::Type> *)local_60);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_78);
  if (((int)local_48 != 0) && (FStack_50.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_50.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
    local_48 = local_48 & 0xffffffff00000000;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (FStack_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_50.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  local_60._0_2_ = 0x100;
  local_60._0_4_ = CONCAT31(local_60._1_3_,this->field_0x1b5) & 0xffffff01;
  local_48 = 0;
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_50.Data = (FScriptContainerElement *)0x0;
  SMultiLineEditableTextBox::SetAutoWrapText(param_1,(TAttribute<bool> *)local_60);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_78);
  if (((int)local_48 != 0) && (FStack_50.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_50.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
    local_48 = local_48 & 0xffffffff00000000;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (FStack_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_50.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  if (this->WrapTextAt == 0.0) {
    TStack_38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_30.Data = (FScriptContainerElement *)0x0;
    _local_40 = _local_40 & 0xffffff0000000000;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    SMultiLineEditableTextBox::SetWrapTextAt(param_1,(TAttribute<float> *)local_40);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&TStack_38,(FWriteAccessScope *)&local_78);
    if ((local_28.AccessDetector.State._0_4_ != 0) &&
       (FStack_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
      local_28.AccessDetector.State =
           (FMRSWRecursiveAccessDetector)
           ((ulonglong)local_28.AccessDetector.State & 0xffffffff00000000);
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if (FStack_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_30.Data);
    }
    this_00 = &TStack_38;
  }
  else {
    local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_50.Data = (FScriptContainerElement *)0x0;
    local_60[4] = true;
    local_48 = 0;
    local_60._0_4_ = this->WrapTextAt;
    SMultiLineEditableTextBox::SetWrapTextAt(param_1,(TAttribute<float> *)local_60);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_58,(FWriteAccessScope *)&local_78);
    if (((int)local_48 != 0) && (FStack_50.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_50.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
      local_48 = local_48 & 0xffffffff00000000;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if (FStack_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_50.Data);
    }
    this_00 = &local_58;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&this_00->AccessDetector);
  local_40[1] = true;
  local_40[0] = (bool)this->WrappingPolicy;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  TStack_38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_30.Data = (FScriptContainerElement *)0x0;
  SMultiLineEditableTextBox::SetWrappingPolicy(param_1,(TAttribute<ETextWrappingPolicy> *)local_40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&TStack_38,(FWriteAccessScope *)&local_78);
  if ((local_28.AccessDetector.State._0_4_ != 0) &&
     (FStack_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
    local_28.AccessDetector.State =
         (FMRSWRecursiveAccessDetector)
         ((ulonglong)local_28.AccessDetector.State & 0xffffffff00000000);
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (FStack_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_38.AccessDetector);
  _local_40 = *(ulonglong *)&this->Margin;
  TStack_38.AccessDetector.State = *(FMRSWRecursiveAccessDetector *)&(this->Margin).Right;
  FStack_30.Data._0_1_ = 1;
  local_18 = 0;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  SMultiLineEditableTextBox::SetMargin(param_1,(TAttribute<FMargin> *)local_40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_28,(FWriteAccessScope *)&local_78);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  bStack_3c = true;
  local_40 = (undefined1  [4])this->LineHeightPercentage;
  TStack_38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_30.Data = (FScriptContainerElement *)0x0;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  SMultiLineEditableTextBox::SetLineHeightPercentage(param_1,(TAttribute<float> *)local_40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&TStack_38,(FWriteAccessScope *)&local_78);
  if ((local_28.AccessDetector.State._0_4_ != 0) &&
     (FStack_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
    local_28.AccessDetector.State =
         (FMRSWRecursiveAccessDetector)
         ((ulonglong)local_28.AccessDetector.State & 0xffffffff00000000);
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (FStack_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_38.AccessDetector);
  local_40[1] = true;
  local_40[0] = this->ApplyLineHeightToBottomLine;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  TStack_38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_30.Data = (FScriptContainerElement *)0x0;
  SMultiLineEditableTextBox::SetApplyLineHeightToBottomLine(param_1,(TAttribute<bool> *)local_40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&TStack_38,(FWriteAccessScope *)&local_78);
  if ((local_28.AccessDetector.State._0_4_ != 0) &&
     (FStack_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
    local_28.AccessDetector.State =
         (FMRSWRecursiveAccessDetector)
         ((ulonglong)local_28.AccessDetector.State & 0xffffffff00000000);
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (FStack_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_38.AccessDetector);
  return;
}

// SynchronizeTextLayoutProperties<SRichTextBlock> @ 146980bb0

void __thiscall
UTextLayoutWidget::SynchronizeTextLayoutProperties<SRichTextBlock>
          (UTextLayoutWidget *this,SRichTextBlock *param_1)

{
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this_00;
  FDestructionSentinel local_78;
  undefined1 local_60 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  ForAnyElementType FStack_50;
  ulonglong local_48;
  undefined1 local_40 [4];
  bool bStack_3c;
  undefined3 uStack_3b;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_38;
  ForAnyElementType FStack_30;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  FShapedTextOptions::SynchronizeShapedTextProperties<SRichTextBlock>
            (&this->ShapedTextOptions,param_1);
  local_60._0_4_ = ZEXT14((this->Justification).Value);
  local_60[4] = true;
  local_48 = 0;
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_50.Data = (FScriptContainerElement *)0x0;
  SRichTextBlock::SetJustification(param_1,(TAttribute<ETextJustify::Type> *)local_60);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_78);
  if (((int)local_48 != 0) && (FStack_50.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_50.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
    local_48 = local_48 & 0xffffffff00000000;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (FStack_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_50.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  local_60._0_2_ = 0x100;
  local_60._0_4_ = CONCAT31(local_60._1_3_,this->field_0x1b5) & 0xffffff01;
  local_48 = 0;
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_50.Data = (FScriptContainerElement *)0x0;
  SRichTextBlock::SetAutoWrapText(param_1,(TAttribute<bool> *)local_60);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_58,(FWriteAccessScope *)&local_78);
  if (((int)local_48 != 0) && (FStack_50.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_50.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
    local_48 = local_48 & 0xffffffff00000000;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (FStack_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_50.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  if (this->WrapTextAt == 0.0) {
    TStack_38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_30.Data = (FScriptContainerElement *)0x0;
    _local_40 = _local_40 & 0xffffff0000000000;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    SRichTextBlock::SetWrapTextAt(param_1,(TAttribute<float> *)local_40);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&TStack_38,(FWriteAccessScope *)&local_78);
    if ((local_28.AccessDetector.State._0_4_ != 0) &&
       (FStack_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
      local_28.AccessDetector.State =
           (FMRSWRecursiveAccessDetector)
           ((ulonglong)local_28.AccessDetector.State & 0xffffffff00000000);
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if (FStack_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_30.Data);
    }
    this_00 = &TStack_38;
  }
  else {
    local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_50.Data = (FScriptContainerElement *)0x0;
    local_60[4] = true;
    local_48 = 0;
    local_60._0_4_ = this->WrapTextAt;
    SRichTextBlock::SetWrapTextAt(param_1,(TAttribute<float> *)local_60);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_58,(FWriteAccessScope *)&local_78);
    if (((int)local_48 != 0) && (FStack_50.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_50.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_50,0,0,0x10);
      local_48 = local_48 & 0xffffffff00000000;
    }
    if (local_78.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
    }
    if (FStack_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_50.Data);
    }
    this_00 = &local_58;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&this_00->AccessDetector);
  local_40[1] = true;
  local_40[0] = (bool)this->WrappingPolicy;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  TStack_38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_30.Data = (FScriptContainerElement *)0x0;
  SRichTextBlock::SetWrappingPolicy(param_1,(TAttribute<ETextWrappingPolicy> *)local_40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&TStack_38,(FWriteAccessScope *)&local_78);
  if ((local_28.AccessDetector.State._0_4_ != 0) &&
     (FStack_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
    local_28.AccessDetector.State =
         (FMRSWRecursiveAccessDetector)
         ((ulonglong)local_28.AccessDetector.State & 0xffffffff00000000);
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (FStack_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_38.AccessDetector);
  _local_40 = *(ulonglong *)&this->Margin;
  TStack_38.AccessDetector.State = *(FMRSWRecursiveAccessDetector *)&(this->Margin).Right;
  FStack_30.Data._0_1_ = 1;
  local_18 = 0;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  SRichTextBlock::SetMargin(param_1,(TAttribute<FMargin> *)local_40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_28,(FWriteAccessScope *)&local_78);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  bStack_3c = true;
  local_40 = (undefined1  [4])this->LineHeightPercentage;
  TStack_38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_30.Data = (FScriptContainerElement *)0x0;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  SRichTextBlock::SetLineHeightPercentage(param_1,(TAttribute<float> *)local_40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&TStack_38,(FWriteAccessScope *)&local_78);
  if ((local_28.AccessDetector.State._0_4_ != 0) &&
     (FStack_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
    local_28.AccessDetector.State =
         (FMRSWRecursiveAccessDetector)
         ((ulonglong)local_28.AccessDetector.State & 0xffffffff00000000);
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (FStack_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_38.AccessDetector);
  local_40[1] = true;
  local_40[0] = this->ApplyLineHeightToBottomLine;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  TStack_38.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_30.Data = (FScriptContainerElement *)0x0;
  SRichTextBlock::SetApplyLineHeightToBottomLine(param_1,(TAttribute<bool> *)local_40);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&TStack_38,(FWriteAccessScope *)&local_78);
  if ((local_28.AccessDetector.State._0_4_ != 0) &&
     (FStack_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_30,0,0,0x10);
    local_28.AccessDetector.State =
         (FMRSWRecursiveAccessDetector)
         ((ulonglong)local_28.AccessDetector.State & 0xffffffff00000000);
  }
  if (local_78.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
  }
  if (FStack_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_38.AccessDetector);
  return;
}

// SynchronizeTextLayoutProperties<STextBlock> @ 1469810a0

void __thiscall
UTextLayoutWidget::SynchronizeTextLayoutProperties<STextBlock>
          (UTextLayoutWidget *this,STextBlock *param_1)

{
  float fVar1;
  FMRSWRecursiveAccessDetector *this_00;
  undefined1 local_98 [8];
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  undefined8 local_70;
  float local_68;
  undefined1 local_64;
  undefined1 local_60 [8];
  ForAnyElementType FStack_58;
  ulonglong local_50;
  undefined4 local_48;
  undefined1 local_44;
  undefined1 local_40 [8];
  ForAnyElementType FStack_38;
  ulonglong local_30;
  FDestructionSentinel local_28;
  
  FShapedTextOptions::SynchronizeShapedTextProperties<STextBlock>(&this->ShapedTextOptions,param_1);
  local_98._1_3_ = 0;
  local_98[0] = (this->Justification).Value;
  local_98[4] = true;
  auStack_90._16_8_ = 0;
  auStack_90._0_8_ = 0;
  auStack_90._8_8_ = 0;
  STextBlock::SetJustification(param_1,(TAttribute<ETextJustify::Type> *)local_98);
  local_98._0_2_ = 0x100;
  local_98 = (undefined1  [8])(CONCAT71(local_98._1_7_,this->field_0x1b5) & 0xffffffffffffff01);
  auStack_90._16_8_ = 0;
  auStack_90._0_8_ = 0;
  auStack_90._8_8_ = 0;
  STextBlock::SetAutoWrapText(param_1,(TAttribute<bool> *)local_98);
  fVar1 = this->WrapTextAt;
  if (fVar1 == 0.0) {
    local_30 = 0;
    local_48 = 0;
    local_44 = 0;
    local_40 = (undefined1  [8])0x0;
    FStack_38.Data = (FScriptContainerElement *)0x0;
    local_98 = (undefined1  [8])((ulonglong)local_98 & 0xffffff0000000000);
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_90,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_40);
    STextBlock::SetWrapTextAt(param_1,(TAttribute<float> *)local_98);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_40,
               (FWriteAccessScope *)&local_28);
    if (((int)local_30 != 0) && (FStack_38.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_38.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_38,0,0,0x10);
      local_30 = local_30 & 0xffffffff00000000;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    if (FStack_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_38.Data);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_40;
  }
  else {
    local_50 = 0;
    local_64 = 1;
    local_60 = (undefined1  [8])0x0;
    FStack_58.Data = (FScriptContainerElement *)0x0;
    local_98[4] = true;
    local_98._0_4_ = fVar1;
    local_68 = fVar1;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_90,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_60);
    STextBlock::SetWrapTextAt(param_1,(TAttribute<float> *)local_98);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_60,
               (FWriteAccessScope *)&local_28);
    if (((int)local_50 != 0) && (FStack_58.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_58.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_58,0,0,0x10);
      local_50 = local_50 & 0xffffffff00000000;
    }
    if (local_28.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
    }
    if (FStack_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_58.Data);
    }
    this_00 = (FMRSWRecursiveAccessDetector *)local_60;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(this_00);
  local_98[1] = 1;
  local_98[0] = this->WrappingPolicy;
  auStack_90._16_8_ = 0;
  auStack_90._0_8_ = 0;
  auStack_90._8_8_ = 0;
  STextBlock::SetWrappingPolicy(param_1,(TAttribute<ETextWrappingPolicy> *)local_98);
  local_98 = *(undefined1 (*) [8])&this->Margin;
  auStack_90._0_4_ = (this->Margin).Right;
  auStack_90._4_4_ = (this->Margin).Bottom;
  auStack_90[8] = 1;
  local_70 = 0;
  auStack_90._16_8_ = 0;
  uStack_78 = 0;
  STextBlock::SetMargin(param_1,(TAttribute<FMargin> *)local_98);
  local_98[4] = true;
  local_98._0_4_ = this->LineHeightPercentage;
  auStack_90._0_8_ = 0;
  auStack_90._8_8_ = 0;
  auStack_90._16_8_ = 0;
  STextBlock::SetLineHeightPercentage(param_1,(TAttribute<float> *)local_98);
  local_98[1] = 1;
  local_98[0] = this->ApplyLineHeightToBottomLine;
  auStack_90._16_8_ = 0;
  auStack_90._0_8_ = 0;
  auStack_90._8_8_ = 0;
  STextBlock::SetApplyLineHeightToBottomLine(param_1,(TAttribute<bool> *)local_98);
  return;
}

// UTextLayoutWidget @ 14698e3c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UTextLayoutWidget * __thiscall
UTextLayoutWidget::UTextLayoutWidget(UTextLayoutWidget *this,FVTableHelper *param_1)

{
  FShapedTextOptions *pFVar1;
  
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  pFVar1->bOverride_TextShapingMethod = '\0';
  pFVar1->bOverride_TextFlowDirection = '\0';
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->Margin).Left = 0.0;
  (this->Margin).Top = 0.0;
  (this->Margin).Right = 0.0;
  (this->Margin).Bottom = 0.0;
  (this->ShapedTextOptions).TextShapingMethod = Auto;
  (this->ShapedTextOptions).TextFlowDirection = Auto;
  return this;
}

// UTextLayoutWidget @ 14698e420

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UTextLayoutWidget * __thiscall
UTextLayoutWidget::UTextLayoutWidget(UTextLayoutWidget *this,FObjectInitializer *param_1)

{
  FShapedTextOptions *pFVar1;
  
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  pFVar1->bOverride_TextShapingMethod = '\0';
  pFVar1->bOverride_TextFlowDirection = '\0';
  *(undefined4 *)&(this->ShapedTextOptions).TextShapingMethod = 0;
  this->AutoWrapText = '\0';
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->WrapTextAt = 0.0;
  (this->Margin).Left = 0.0;
  (this->Margin).Top = 0.0;
  (this->Margin).Right = 0.0;
  (this->Margin).Bottom = 0.0;
  this->LineHeightPercentage = 1.0;
  this->ApplyLineHeightToBottomLine = true;
  return this;
}

// ~UTextLayoutWidget @ 146994670

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UTextLayoutWidget::~UTextLayoutWidget(UTextLayoutWidget *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  UWidget::~UWidget((UWidget *)this);
  return;
}

// GetPrivateStaticClass @ 1469d6290

UClass * __cdecl UTextLayoutWidget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextLayoutWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"TextLayoutWidget",
               &Z_Registration_Info_UClass_UTextLayoutWidget.InnerSingleton,
               StaticRegisterNativesUTextLayoutWidget,0x1d0,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UTextLayoutWidget>,
               InternalVTableHelperCtorCaller<UTextLayoutWidget>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextLayoutWidget.InnerSingleton;
}

// OnApplyLineHeightToBottomLineChanged @ 1469e5380

void __thiscall
UTextLayoutWidget::OnApplyLineHeightToBottomLineChanged(UTextLayoutWidget *this,bool param_1)

{
  return;
}

// OnAutoWrapTextChanged @ 1469e5620

void __thiscall UTextLayoutWidget::OnAutoWrapTextChanged(UTextLayoutWidget *this,bool param_1)

{
  return;
}

// OnJustificationChanged @ 1469e96e0

void __thiscall UTextLayoutWidget::OnJustificationChanged(UTextLayoutWidget *this,Type param_1)

{
  return;
}

// OnLineHeightPercentageChanged @ 1469eb890

void __thiscall
UTextLayoutWidget::OnLineHeightPercentageChanged(UTextLayoutWidget *this,float param_1)

{
  return;
}

// OnMarginChanged @ 1469ebcd0

void __thiscall UTextLayoutWidget::OnMarginChanged(UTextLayoutWidget *this,FMargin *param_1)

{
  return;
}

// OnShapedTextOptionsChanged @ 1469f0530

void __thiscall
UTextLayoutWidget::OnShapedTextOptionsChanged(UTextLayoutWidget *this,FShapedTextOptions param_1)

{
  return;
}

// OnWrapTextAtChanged @ 1469f2af0

void __thiscall UTextLayoutWidget::OnWrapTextAtChanged(UTextLayoutWidget *this,float param_1)

{
  return;
}

// OnWrappingPolicyChanged @ 1469f2d90

void __thiscall
UTextLayoutWidget::OnWrappingPolicyChanged(UTextLayoutWidget *this,ETextWrappingPolicy param_1)

{
  return;
}

// SetApplyLineHeightToBottomLine @ 146a11000

void __thiscall
UTextLayoutWidget::SetApplyLineHeightToBottomLine(UTextLayoutWidget *this,bool param_1)

{
  if (this->ApplyLineHeightToBottomLine != param_1) {
    this->ApplyLineHeightToBottomLine = param_1;
                    /* WARNING: Could not recover jumptable at 0x000146a11011. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x348))();
    return;
  }
  return;
}

// SetAutoWrapText @ 146a11180

void __thiscall UTextLayoutWidget::SetAutoWrapText(UTextLayoutWidget *this,bool param_1)

{
  if (this->AutoWrapText != param_1) {
    this->field_0x1b5 = this->field_0x1b5 & 0xfe | param_1;
                    /* WARNING: Could not recover jumptable at 0x000146a111a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x330))();
    return;
  }
  return;
}

// SetJustification @ 146a165f0

void __thiscall UTextLayoutWidget::SetJustification(UTextLayoutWidget *this,Type param_1)

{
  if ((this->Justification).Value != param_1) {
    (this->Justification).Value = (uchar)param_1;
                    /* WARNING: Could not recover jumptable at 0x000146a16604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 800))();
    return;
  }
  return;
}

// SetLineHeightPercentage @ 146a16960

void __thiscall UTextLayoutWidget::SetLineHeightPercentage(UTextLayoutWidget *this,float param_1)

{
  if (param_1 != this->LineHeightPercentage) {
    this->LineHeightPercentage = param_1;
                    /* WARNING: Could not recover jumptable at 0x000146a16974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x340))();
    return;
  }
  return;
}

// SetMargin @ 146a16a80

void __thiscall UTextLayoutWidget::SetMargin(UTextLayoutWidget *this,FMargin *param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if ((((param_1->Left == (this->Margin).Left) && (param_1->Right == (this->Margin).Right)) &&
      (param_1->Top == (this->Margin).Top)) && (param_1->Bottom == (this->Margin).Bottom)) {
    return;
  }
  fVar2 = param_1->Left;
  fVar3 = param_1->Top;
  fVar4 = param_1->Right;
  fVar5 = param_1->Bottom;
  lVar1 = this->_padding_;
  (this->Margin).Left = fVar2;
  (this->Margin).Top = fVar3;
  (this->Margin).Right = fVar4;
  (this->Margin).Bottom = fVar5;
                    /* WARNING: Could not recover jumptable at 0x000146a16acb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x350))(fVar2,&this->Margin);
  return;
}

// SetShapedTextOptions @ 146a1ade0

void __thiscall
UTextLayoutWidget::SetShapedTextOptions(UTextLayoutWidget *this,FShapedTextOptions param_1)

{
  undefined5 in_register_00000013;
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  undefined2 local_res8;
  byte local_resa;
  
  pbVar1 = (byte *)CONCAT53(in_register_00000013,param_1);
  bVar3 = (this->ShapedTextOptions).bOverride_TextShapingMethod;
  if (((bVar3 == (*pbVar1 & 1)) &&
      (bVar2 = (this->ShapedTextOptions).bOverride_TextFlowDirection, bVar2 == (*pbVar1 >> 1 & 1)))
     && ((bVar3 == 0 || ((this->ShapedTextOptions).TextShapingMethod == pbVar1[1])))) {
    if (bVar2 == 0) {
      return;
    }
    if ((this->ShapedTextOptions).TextFlowDirection == pbVar1[2]) {
      return;
    }
  }
  bVar3 = pbVar1[1];
  (this->ShapedTextOptions).field_0x0 = pbVar1[0];
  (this->ShapedTextOptions).TextShapingMethod = bVar3;
  (this->ShapedTextOptions).TextFlowDirection = pbVar1[2];
  local_res8 = *(undefined2 *)pbVar1;
  local_resa = pbVar1[2];
  (**(code **)(this->_padding_ + 0x318))(this,&local_res8);
  return;
}

// SetWrapTextAt @ 146a1e0f0

void __thiscall UTextLayoutWidget::SetWrapTextAt(UTextLayoutWidget *this,float param_1)

{
  if (param_1 != this->WrapTextAt) {
    this->WrapTextAt = param_1;
                    /* WARNING: Could not recover jumptable at 0x000146a1e104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x338))();
    return;
  }
  return;
}

// SetWrappingPolicy @ 146a1e120

void __thiscall
UTextLayoutWidget::SetWrappingPolicy(UTextLayoutWidget *this,ETextWrappingPolicy param_1)

{
  if (this->WrappingPolicy != param_1) {
    this->WrappingPolicy = param_1;
                    /* WARNING: Could not recover jumptable at 0x000146a1e131. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x328))();
    return;
  }
  return;
}

// StaticRegisterNativesUTextLayoutWidget @ 146a1f160

void __cdecl UTextLayoutWidget::StaticRegisterNativesUTextLayoutWidget(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UTextLayoutWidget_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetJustification @ 146a3e980

void __cdecl UTextLayoutWidget::execSetJustification(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x310))(param_1,local_res8[0]);
  return;
}

