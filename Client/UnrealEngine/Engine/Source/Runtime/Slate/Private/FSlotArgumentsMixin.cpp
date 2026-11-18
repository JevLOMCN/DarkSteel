// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 26

// ~FSlotArgumentsMixin @ 142701650

void __thiscall
TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
          (FSlotArgumentsMixin *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MaxSize).Getter);
  pvVar1 = *(void **)&(this->_MaxSize).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MaxSize).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MinSize).Getter);
  pvVar1 = *(void **)&(this->_MinSize).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MinSize).Getter);
  TOptional<FSizeParam>::~TOptional<FSizeParam>(&this->_SizeParam);
  return;
}

// HAlign @ 142746730

FSlotArguments * __thiscall
TAlignmentWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::HAlign
          (FSlotArgumentsMixin *this,EHorizontalAlignment param_1)

{
  FSlotArguments *pFVar1;
  FSlotArgumentsMixin local_res10;
  
  if (&local_res10 != this) {
    (this->_HAlignment).TypedValue = param_1;
    (this->_HAlignment).bIsSet = true;
  }
  pFVar1 = (FSlotArguments *)&this[-5]._VAlignment;
  if (this == (FSlotArgumentsMixin *)0x0) {
    pFVar1 = (FSlotArguments *)0x0;
  }
  return pFVar1;
}

// Padding @ 142770650

FSlotArguments * __thiscall
TPaddingWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::Padding
          (FSlotArgumentsMixin *this,TAttribute<FMargin> *param_1)

{
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  FSlotArguments *pFVar5;
  
  fVar2 = (param_1->Value).Top;
  fVar3 = (param_1->Value).Right;
  fVar4 = (param_1->Value).Bottom;
  this_00 = &param_1->Getter;
  (this->_Padding).Value.Left = (param_1->Value).Left;
  (this->_Padding).Value.Top = fVar2;
  (this->_Padding).Value.Right = fVar3;
  (this->_Padding).Value.Bottom = fVar4;
  (this->_Padding).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pFVar5 = (FSlotArguments *)&this[-1]._Padding.Getter;
  if (this == (FSlotArgumentsMixin *)0x0) {
    pFVar5 = (FSlotArguments *)0x0;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return pFVar5;
}

// Padding @ 1427706d0

FSlotArguments * __thiscall
TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
          (FSlotArgumentsMixin *this,float param_1,float param_2)

{
  FSlotArguments *pFVar1;
  FDestructionSentinel local_58;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined1 local_30;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  (this->_Padding).bIsSet = true;
  local_30 = 1;
  (this->_Padding).Value.Left = param_1;
  (this->_Padding).Value.Top = param_2;
  (this->_Padding).Value.Right = param_1;
  (this->_Padding).Value.Bottom = param_2;
  local_18 = 0;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  local_40 = param_1;
  fStack_3c = param_2;
  fStack_38 = param_1;
  fStack_34 = param_2;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_58);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  pFVar1 = (FSlotArguments *)&this[-1]._Padding.Getter;
  if (this == (FSlotArgumentsMixin *)0x0) {
    pFVar1 = (FSlotArguments *)0x0;
  }
  return pFVar1;
}

// Padding @ 1427707d0

FSlotArguments * __thiscall
TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
          (FSlotArgumentsMixin *this,float param_1,float param_2,float param_3,float param_4)

{
  FSlotArguments *pFVar1;
  FDestructionSentinel local_58;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined1 local_30;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  (this->_Padding).bIsSet = true;
  local_30 = 1;
  (this->_Padding).Value.Left = param_1;
  (this->_Padding).Value.Top = param_2;
  (this->_Padding).Value.Right = param_3;
  (this->_Padding).Value.Bottom = param_4;
  local_18 = 0;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  fStack_34 = param_4;
  local_40 = param_1;
  fStack_3c = param_2;
  fStack_38 = param_3;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_58);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  pFVar1 = (FSlotArguments *)&this[-1]._Padding.Getter;
  if (this == (FSlotArgumentsMixin *)0x0) {
    pFVar1 = (FSlotArguments *)0x0;
  }
  return pFVar1;
}

// Padding @ 1427708d0

FSlotArguments * __thiscall
TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
          (FSlotArgumentsMixin *this,TAttribute<FMargin> *param_1)

{
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  FSlotArguments *pFVar5;
  
  fVar2 = (param_1->Value).Top;
  fVar3 = (param_1->Value).Right;
  fVar4 = (param_1->Value).Bottom;
  this_00 = &param_1->Getter;
  (this->_Padding).Value.Left = (param_1->Value).Left;
  (this->_Padding).Value.Top = fVar2;
  (this->_Padding).Value.Right = fVar3;
  (this->_Padding).Value.Bottom = fVar4;
  (this->_Padding).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pFVar5 = (FSlotArguments *)&this[-1]._Padding.Getter;
  if (this == (FSlotArgumentsMixin *)0x0) {
    pFVar5 = (FSlotArguments *)0x0;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return pFVar5;
}

// Padding @ 142770950

FSlotArguments * __thiscall
TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
          (FSlotArgumentsMixin *this,float param_1,float param_2,float param_3,float param_4)

{
  FSlotArguments *pFVar1;
  FDestructionSentinel local_58;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined1 local_30;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  (this->_Padding).bIsSet = true;
  local_30 = 1;
  (this->_Padding).Value.Left = param_1;
  (this->_Padding).Value.Top = param_2;
  (this->_Padding).Value.Right = param_3;
  (this->_Padding).Value.Bottom = param_4;
  local_18 = 0;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  fStack_34 = param_4;
  local_40 = param_1;
  fStack_3c = param_2;
  fStack_38 = param_3;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_58);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  pFVar1 = (FSlotArguments *)&this[-1]._Padding.Getter;
  if (this == (FSlotArgumentsMixin *)0x0) {
    pFVar1 = (FSlotArguments *)0x0;
  }
  return pFVar1;
}

// ~FSlotArgumentsMixin @ 1427b9c40

void __thiscall
TResizingWidgetSlotMixin<SPrioritizedWrapBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
          (FSlotArgumentsMixin *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MaxSize).Getter);
  pvVar1 = *(void **)&(this->_MaxSize).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MaxSize).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MinSize).Getter);
  pvVar1 = *(void **)&(this->_MinSize).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MinSize).Getter);
  TOptional<FSizeParam>::~TOptional<FSizeParam>(&this->_SizeParam);
  return;
}

// ~FSlotArgumentsMixin @ 1427b9cb0

void __thiscall
TResizingWidgetSlotMixin<SScrollBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
          (FSlotArgumentsMixin *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MaxSize).Getter);
  pvVar1 = *(void **)&(this->_MaxSize).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MaxSize).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MinSize).Getter);
  pvVar1 = *(void **)&(this->_MinSize).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->_MinSize).Getter);
  TOptional<FSizeParam>::~TOptional<FSizeParam>(&this->_SizeParam);
  return;
}

// HAlign @ 142817580

FSlotArguments * __thiscall
TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::HAlign
          (FSlotArgumentsMixin *this,EHorizontalAlignment param_1)

{
  FSlotArguments *pFVar1;
  FSlotArgumentsMixin local_res10;
  
  if (&local_res10 != this) {
    (this->_HAlignment).TypedValue = param_1;
    (this->_HAlignment).bIsSet = true;
  }
  pFVar1 = (FSlotArguments *)&this[-5]._VAlignment;
  if (this == (FSlotArgumentsMixin *)0x0) {
    pFVar1 = (FSlotArguments *)0x0;
  }
  return pFVar1;
}

// HAlign @ 1428175b0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FSlotArguments * __thiscall
TAlignmentWidgetSlotMixin<SPrioritizedWrapBox::FSlot>::FSlotArgumentsMixin::HAlign
          (FSlotArgumentsMixin *this,EHorizontalAlignment param_1)

{
  FSlotArguments *pFVar1;
  FSlotArgumentsMixin local_res10;
  
  if (&local_res10 != this) {
    (this->_HAlignment).TypedValue = param_1;
    (this->_HAlignment).bIsSet = true;
  }
  pFVar1 = (FSlotArguments *)&this[-5]._VAlignment;
  if (this == (FSlotArgumentsMixin *)0x0) {
    pFVar1 = (FSlotArguments *)0x0;
  }
  return pFVar1;
}

// HAlign @ 1428175e0

FSlotArguments * __thiscall
TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::HAlign
          (FSlotArgumentsMixin *this,EHorizontalAlignment param_1)

{
  FSlotArguments *pFVar1;
  FSlotArgumentsMixin local_res10;
  
  if (&local_res10 != this) {
    (this->_HAlignment).TypedValue = param_1;
    (this->_HAlignment).bIsSet = true;
  }
  pFVar1 = (FSlotArguments *)&this[-5]._VAlignment;
  if (this == (FSlotArgumentsMixin *)0x0) {
    pFVar1 = (FSlotArguments *)0x0;
  }
  return pFVar1;
}

// MaxSize @ 142821990

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FSlotArguments * __thiscall
TResizingWidgetSlotMixin<SPrioritizedWrapBox::FSlot>::FSlotArgumentsMixin::MaxSize
          (FSlotArgumentsMixin *this,TAttribute<float> *param_1)

{
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  FSlotArguments *pFVar2;
  
  this_00 = &param_1->Getter;
  (this->_MaxSize).Value = param_1->Value;
  (this->_MaxSize).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MaxSize).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pFVar2 = (FSlotArguments *)&this[-1]._SizeParam.TypedValue.ShrinkValue.Getter.field_0x8;
  if (this == (FSlotArgumentsMixin *)0x0) {
    pFVar2 = (FSlotArguments *)0x0;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return pFVar2;
}

// MinSize @ 142821b60

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FSlotArguments * __thiscall
TResizingWidgetSlotMixin<SPrioritizedWrapBox::FSlot>::FSlotArgumentsMixin::MinSize
          (FSlotArgumentsMixin *this,TAttribute<float> *param_1)

{
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  FSlotArguments *pFVar2;
  
  this_00 = &param_1->Getter;
  (this->_MinSize).Value = param_1->Value;
  (this->_MinSize).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_MinSize).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pFVar2 = (FSlotArguments *)&this[-1]._SizeParam.TypedValue.ShrinkValue.Getter.field_0x8;
  if (this == (FSlotArgumentsMixin *)0x0) {
    pFVar2 = (FSlotArguments *)0x0;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return pFVar2;
}

// Padding @ 14282c500

FSlotArguments * __thiscall
TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
          (FSlotArgumentsMixin *this,float param_1)

{
  FSlotArguments *pFVar1;
  undefined1 local_58 [8];
  float fStack_50;
  float fStack_4c;
  bool local_48;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined1 local_30;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  (this->_Padding).bIsSet = true;
  (this->_Padding).Value.Left = param_1;
  (this->_Padding).Value.Top = param_1;
  (this->_Padding).Value.Right = param_1;
  (this->_Padding).Value.Bottom = param_1;
  local_30 = 1;
  local_18 = 0;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  local_58._0_4_ = param_1;
  local_58._4_4_ = param_1;
  fStack_50 = param_1;
  fStack_4c = param_1;
  local_40 = param_1;
  fStack_3c = param_1;
  fStack_38 = param_1;
  fStack_34 = param_1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)local_58);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_48 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(fStack_4c,fStack_50),
               (FDestructionSentinel *)local_58);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  pFVar1 = (FSlotArguments *)&this[-1]._Padding.Getter;
  if (this == (FSlotArgumentsMixin *)0x0) {
    pFVar1 = (FSlotArguments *)0x0;
  }
  return pFVar1;
}

// Padding @ 14282c5e0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FSlotArguments * __thiscall
TPaddingWidgetSlotMixin<SPrioritizedWrapBox::FSlot>::FSlotArgumentsMixin::Padding
          (FSlotArgumentsMixin *this,float param_1)

{
  FSlotArguments *pFVar1;
  undefined1 local_58 [8];
  float fStack_50;
  float fStack_4c;
  bool local_48;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined1 local_30;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  (this->_Padding).bIsSet = true;
  (this->_Padding).Value.Left = param_1;
  (this->_Padding).Value.Top = param_1;
  (this->_Padding).Value.Right = param_1;
  (this->_Padding).Value.Bottom = param_1;
  local_30 = 1;
  local_18 = 0;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  local_58._0_4_ = param_1;
  local_58._4_4_ = param_1;
  fStack_50 = param_1;
  fStack_4c = param_1;
  local_40 = param_1;
  fStack_3c = param_1;
  fStack_38 = param_1;
  fStack_34 = param_1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)local_58);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_48 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(fStack_4c,fStack_50),
               (FDestructionSentinel *)local_58);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  pFVar1 = (FSlotArguments *)&this[-1]._Padding.Getter;
  if (this == (FSlotArgumentsMixin *)0x0) {
    pFVar1 = (FSlotArguments *)0x0;
  }
  return pFVar1;
}

// Padding @ 14282c6c0

FSlotArguments * __thiscall
TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
          (FSlotArgumentsMixin *this,float param_1)

{
  FSlotArguments *pFVar1;
  undefined1 local_58 [8];
  float fStack_50;
  float fStack_4c;
  bool local_48;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined1 local_30;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  (this->_Padding).bIsSet = true;
  (this->_Padding).Value.Left = param_1;
  (this->_Padding).Value.Top = param_1;
  (this->_Padding).Value.Right = param_1;
  (this->_Padding).Value.Bottom = param_1;
  local_30 = 1;
  local_18 = 0;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  local_58._0_4_ = param_1;
  local_58._4_4_ = param_1;
  fStack_50 = param_1;
  fStack_4c = param_1;
  local_40 = param_1;
  fStack_3c = param_1;
  fStack_38 = param_1;
  fStack_34 = param_1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)local_58);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_48 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(fStack_4c,fStack_50),
               (FDestructionSentinel *)local_58);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  pFVar1 = (FSlotArguments *)&this[-1]._Padding.Getter;
  if (this == (FSlotArgumentsMixin *)0x0) {
    pFVar1 = (FSlotArguments *)0x0;
  }
  return pFVar1;
}

// Padding @ 14282c7a0

FSlotArguments * __thiscall
TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
          (FSlotArgumentsMixin *this,TAttribute<FMargin> *param_1)

{
  TDelegate<FMargin___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  void *pvVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  FSlotArguments *pFVar5;
  
  fVar2 = (param_1->Value).Top;
  fVar3 = (param_1->Value).Right;
  fVar4 = (param_1->Value).Bottom;
  this_00 = &param_1->Getter;
  (this->_Padding).Value.Left = (param_1->Value).Left;
  (this->_Padding).Value.Top = fVar2;
  (this->_Padding).Value.Right = fVar3;
  (this->_Padding).Value.Bottom = fVar4;
  (this->_Padding).bIsSet = param_1->bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pFVar5 = (FSlotArguments *)&this[-1]._Padding.Getter;
  if (this == (FSlotArgumentsMixin *)0x0) {
    pFVar5 = (FSlotArguments *)0x0;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)this_00);
  pvVar1 = *(void **)&(param_1->Getter).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)this_00);
  return pFVar5;
}

// SizeParam @ 142836040

FSlotArguments * __thiscall
TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::SizeParam
          (FSlotArgumentsMixin *this,TOptional<FSizeParam> *param_1)

{
  FSlotArguments *pFVar1;
  
  TOptional<FSizeParam>::operator=(&this->_SizeParam,param_1);
  pFVar1 = (FSlotArguments *)&this[-1]._SizeParam.TypedValue.ShrinkValue.Getter.field_0x8;
  if (this == (FSlotArgumentsMixin *)0x0) {
    pFVar1 = (FSlotArguments *)0x0;
  }
  TOptional<FSizeParam>::~TOptional<FSizeParam>(param_1);
  return pFVar1;
}

// SizeParam @ 142836090

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FSlotArguments * __thiscall
TResizingWidgetSlotMixin<SPrioritizedWrapBox::FSlot>::FSlotArgumentsMixin::SizeParam
          (FSlotArgumentsMixin *this,TOptional<FSizeParam> *param_1)

{
  FSlotArguments *pFVar1;
  
  TOptional<FSizeParam>::operator=(&this->_SizeParam,param_1);
  pFVar1 = (FSlotArguments *)&this[-1]._SizeParam.TypedValue.ShrinkValue.Getter.field_0x8;
  if (this == (FSlotArgumentsMixin *)0x0) {
    pFVar1 = (FSlotArguments *)0x0;
  }
  TOptional<FSizeParam>::~TOptional<FSizeParam>(param_1);
  return pFVar1;
}

// VAlign @ 14283aea0

FSlotArguments * __thiscall
TAlignmentWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::VAlign
          (FSlotArgumentsMixin *this,EVerticalAlignment param_1)

{
  FSlotArguments *pFVar1;
  undefined1 local_res10 [24];
  
  if ((TOptional<EVerticalAlignment> *)local_res10 != &this->_VAlignment) {
    (this->_VAlignment).TypedValue = param_1;
    (this->_VAlignment).bIsSet = true;
  }
  pFVar1 = (FSlotArguments *)&this[-5]._VAlignment;
  if (this == (FSlotArgumentsMixin *)0x0) {
    pFVar1 = (FSlotArguments *)0x0;
  }
  return pFVar1;
}

// VAlign @ 14283aed0

FSlotArguments * __thiscall
TAlignmentWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::VAlign
          (FSlotArgumentsMixin *this,EVerticalAlignment param_1)

{
  FSlotArguments *pFVar1;
  undefined1 local_res10 [24];
  
  if ((TOptional<EVerticalAlignment> *)local_res10 != &this->_VAlignment) {
    (this->_VAlignment).TypedValue = param_1;
    (this->_VAlignment).bIsSet = true;
  }
  pFVar1 = (FSlotArguments *)&this[-5]._VAlignment;
  if (this == (FSlotArgumentsMixin *)0x0) {
    pFVar1 = (FSlotArguments *)0x0;
  }
  return pFVar1;
}

// VAlign @ 14283af00

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FSlotArguments * __thiscall
TAlignmentWidgetSlotMixin<SPrioritizedWrapBox::FSlot>::FSlotArgumentsMixin::VAlign
          (FSlotArgumentsMixin *this,EVerticalAlignment param_1)

{
  FSlotArguments *pFVar1;
  undefined1 local_res10 [24];
  
  if ((TOptional<EVerticalAlignment> *)local_res10 != &this->_VAlignment) {
    (this->_VAlignment).TypedValue = param_1;
    (this->_VAlignment).bIsSet = true;
  }
  pFVar1 = (FSlotArguments *)&this[-5]._VAlignment;
  if (this == (FSlotArgumentsMixin *)0x0) {
    pFVar1 = (FSlotArguments *)0x0;
  }
  return pFVar1;
}

// Padding @ 1429843c0

FSlotArguments * __thiscall
TPaddingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::Padding
          (FSlotArgumentsMixin *this,float param_1,float param_2)

{
  FSlotArguments *pFVar1;
  FDestructionSentinel local_58;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined1 local_30;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  (this->_Padding).bIsSet = true;
  local_30 = 1;
  (this->_Padding).Value.Left = param_1;
  (this->_Padding).Value.Top = param_2;
  (this->_Padding).Value.Right = param_1;
  (this->_Padding).Value.Bottom = param_2;
  local_18 = 0;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  local_40 = param_1;
  fStack_3c = param_2;
  fStack_38 = param_1;
  fStack_34 = param_2;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)&local_58);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_58.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  pFVar1 = (FSlotArguments *)&this[-1]._Padding.Getter;
  if (this == (FSlotArgumentsMixin *)0x0) {
    pFVar1 = (FSlotArguments *)0x0;
  }
  return pFVar1;
}

// VAlign @ 142a14ee0

FSlotArguments * __thiscall
TAlignmentWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::VAlign
          (FSlotArgumentsMixin *this,EVerticalAlignment param_1)

{
  FSlotArguments *pFVar1;
  undefined1 local_res10 [24];
  
  if ((TOptional<EVerticalAlignment> *)local_res10 != &this->_VAlignment) {
    (this->_VAlignment).TypedValue = param_1;
    (this->_VAlignment).bIsSet = true;
  }
  pFVar1 = (FSlotArguments *)&this[-5]._VAlignment;
  if (this == (FSlotArgumentsMixin *)0x0) {
    pFVar1 = (FSlotArguments *)0x0;
  }
  return pFVar1;
}

// Padding @ 142a32240

FSlotArguments * __thiscall
TPaddingWidgetSlotMixin<SOverlay::FOverlaySlot>::FSlotArgumentsMixin::Padding
          (FSlotArgumentsMixin *this,float param_1)

{
  FSlotArguments *pFVar1;
  undefined1 local_58 [8];
  float fStack_50;
  float fStack_4c;
  bool local_48;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined1 local_30;
  undefined1 local_28 [8];
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  (this->_Padding).bIsSet = true;
  (this->_Padding).Value.Left = param_1;
  (this->_Padding).Value.Top = param_1;
  (this->_Padding).Value.Right = param_1;
  (this->_Padding).Value.Bottom = param_1;
  local_30 = 1;
  local_18 = 0;
  local_28 = (undefined1  [8])0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  local_58._0_4_ = param_1;
  local_58._4_4_ = param_1;
  fStack_50 = param_1;
  fStack_4c = param_1;
  local_40 = param_1;
  fStack_3c = param_1;
  fStack_38 = param_1;
  fStack_34 = param_1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_28);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_28,
             (FWriteAccessScope *)local_58);
  if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = local_18 & 0xffffffff00000000;
  }
  if (local_48 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(fStack_4c,fStack_50),
               (FDestructionSentinel *)local_58);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_28);
  pFVar1 = (FSlotArguments *)&this[-1]._Padding.Getter;
  if (this == (FSlotArgumentsMixin *)0x0) {
    pFVar1 = (FSlotArguments *)0x0;
  }
  return pFVar1;
}

