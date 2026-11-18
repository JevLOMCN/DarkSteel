// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 116

// GetValue_WrapperImpl @ 1469668d0

void __cdecl USpinBox::GetValue_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x1b0);
  return;
}

// SetValue_WrapperImpl @ 146966950

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl USpinBox::SetValue_WrapperImpl(void *param_1,void *param_2)

{
  SetValue(param_1,*(float *)param_2);
  return;
}

// GetWidgetStyle_WrapperImpl @ 1469669b0

void __cdecl USpinBox::GetWidgetStyle_WrapperImpl(void *param_1,void *param_2)

{
  FSpinBoxStyle *pFVar1;
  FSpinBoxStyle local_528;
  
  pFVar1 = FSpinBoxStyle::FSpinBoxStyle(&local_528,(FSpinBoxStyle *)((longlong)param_1 + 0x1d0));
  FSpinBoxStyle::operator=(param_2,pFVar1);
  FSpinBoxStyle::~FSpinBoxStyle(&local_528);
  return;
}

// SetWidgetStyle_WrapperImpl @ 146966ad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl USpinBox::SetWidgetStyle_WrapperImpl(void *param_1,void *param_2)

{
  FSpinBoxStyle::operator=((FSpinBoxStyle *)((longlong)param_1 + 0x1d0),param_2);
  if (*(SSpinBox<float> **)((longlong)param_1 + 0x800) != (SSpinBox<float> *)0x0) {
    SSpinBox<float>::InvalidateStyle(*(SSpinBox<float> **)((longlong)param_1 + 0x800));
    return;
  }
  return;
}

// GetMinFractionalDigits_WrapperImpl @ 146966b70

void __cdecl USpinBox::GetMinFractionalDigits_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x6f0);
  return;
}

// SetMinFractionalDigits_WrapperImpl @ 146966ba0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl USpinBox::SetMinFractionalDigits_WrapperImpl(void *param_1,void *param_2)

{
  SetMinFractionalDigits(param_1,*(int *)param_2);
  return;
}

// GetMaxFractionalDigits_WrapperImpl @ 146966c00

void __cdecl USpinBox::GetMaxFractionalDigits_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x6f4);
  return;
}

// SetMaxFractionalDigits_WrapperImpl @ 146966c30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl USpinBox::SetMaxFractionalDigits_WrapperImpl(void *param_1,void *param_2)

{
  SetMaxFractionalDigits(param_1,*(int *)param_2);
  return;
}

// GetbAlwaysUsesDeltaSnap_WrapperImpl @ 146966ce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl USpinBox::GetbAlwaysUsesDeltaSnap_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  
  if (*(SSpinBox<float> **)((longlong)param_1 + 0x800) != (SSpinBox<float> *)0x0) {
    bVar1 = SSpinBox<float>::GetAlwaysUsesDeltaSnap
                      (*(SSpinBox<float> **)((longlong)param_1 + 0x800));
    *(bool *)param_2 = bVar1;
    return;
  }
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x6f8);
  return;
}

// SetbAlwaysUsesDeltaSnap_WrapperImpl @ 146966d40

void __cdecl USpinBox::SetbAlwaysUsesDeltaSnap_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  
  uVar1 = *(undefined1 *)param_2;
  *(undefined1 *)((longlong)param_1 + 0x6f8) = uVar1;
  lVar2 = *(longlong *)((longlong)param_1 + 0x800);
  if (lVar2 == 0) {
    return;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x578));
  *(undefined1 *)(lVar2 + 0x570) = uVar1;
  *(undefined1 *)(lVar2 + 0x571) = 1;
  return;
}

// GetbEnableSlider_WrapperImpl @ 146966e30

void __cdecl USpinBox::GetbEnableSlider_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x6f9);
  return;
}

// SetbEnableSlider_WrapperImpl @ 146966ea0

void __cdecl USpinBox::SetbEnableSlider_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  
  uVar1 = *(undefined1 *)param_2;
  *(undefined1 *)((longlong)param_1 + 0x6f9) = uVar1;
  lVar2 = *(longlong *)((longlong)param_1 + 0x800);
  if (lVar2 == 0) {
    return;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x598));
  *(undefined1 *)(lVar2 + 0x590) = uVar1;
  *(undefined1 *)(lVar2 + 0x591) = 1;
  return;
}

// GetDelta_WrapperImpl @ 146966fd0

void __cdecl USpinBox::GetDelta_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x6fc);
  return;
}

// SetDelta_WrapperImpl @ 146966ff0

void __cdecl USpinBox::SetDelta_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  uVar1 = *(undefined4 *)param_2;
  *(undefined4 *)((longlong)param_1 + 0x6fc) = uVar1;
  lVar2 = *(longlong *)((longlong)param_1 + 0x800);
  if (lVar2 == 0) {
    return;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x3c8));
  *(undefined4 *)(lVar2 + 0x3c0) = uVar1;
  *(undefined1 *)(lVar2 + 0x3c4) = 1;
  return;
}

// GetSliderExponent_WrapperImpl @ 1469670f0

void __cdecl USpinBox::GetSliderExponent_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x700);
  return;
}

// SetSliderExponent_WrapperImpl @ 146967110

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl USpinBox::SetSliderExponent_WrapperImpl(void *param_1,void *param_2)

{
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_30._0_4_ = *(undefined4 *)param_2;
  *(undefined4 *)((longlong)param_1 + 0x700) = local_30._0_4_;
  if (*(SSpinBox<float> **)((longlong)param_1 + 0x800) != (SSpinBox<float> *)0x0) {
    local_18 = 0;
    local_30[4] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SSpinBox<float>::SetSliderExponent
              (*(SSpinBox<float> **)((longlong)param_1 + 0x800),(TAttribute<float> *)local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_48);
    if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
      local_18 = local_18 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// GetFont_WrapperImpl @ 1469672b0

void __cdecl USpinBox::GetFont_WrapperImpl(void *param_1,void *param_2)

{
  FSlateFontInfo *pFVar1;
  FSlateFontInfo local_68;
  
  pFVar1 = FSlateFontInfo::FSlateFontInfo(&local_68,(FSlateFontInfo *)((longlong)param_1 + 0x708));
  FSlateFontInfo::operator=(param_2,pFVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
  return;
}

// SetFont_WrapperImpl @ 146967310

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl USpinBox::SetFont_WrapperImpl(void *param_1,void *param_2)

{
  SSpinBox<float> *this;
  FSlateFontInfo *pFVar1;
  FSlateFontInfo local_68;
  
  FSlateFontInfo::operator=((FSlateFontInfo *)((longlong)param_1 + 0x708),param_2);
  this = *(SSpinBox<float> **)((longlong)param_1 + 0x800);
  if (this != (SSpinBox<float> *)0x0) {
    pFVar1 = FSlateFontInfo::FSlateFontInfo(&local_68,param_2);
    SSpinBox<float>::SetTextBlockFont(this,pFVar1);
  }
  return;
}

// GetJustification_WrapperImpl @ 146967440

void __cdecl USpinBox::GetJustification_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x768);
  return;
}

// SetJustification_WrapperImpl @ 146967460

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl USpinBox::SetJustification_WrapperImpl(void *param_1,void *param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)param_2;
  *(byte *)((longlong)param_1 + 0x768) = bVar1;
  if (*(SSpinBox<float> **)((longlong)param_1 + 0x800) != (SSpinBox<float> *)0x0) {
    SSpinBox<float>::SetTextJustification
              (*(SSpinBox<float> **)((longlong)param_1 + 0x800),(uint)bVar1);
    return;
  }
  return;
}

// GetMinDesiredWidth_WrapperImpl @ 146967560

void __cdecl USpinBox::GetMinDesiredWidth_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x76c);
  return;
}

// SetMinDesiredWidth_WrapperImpl @ 146967580

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl USpinBox::SetMinDesiredWidth_WrapperImpl(void *param_1,void *param_2)

{
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_30._0_4_ = *(undefined4 *)param_2;
  *(undefined4 *)((longlong)param_1 + 0x76c) = local_30._0_4_;
  if (*(SSpinBox<float> **)((longlong)param_1 + 0x800) != (SSpinBox<float> *)0x0) {
    local_18 = 0;
    local_30[4] = true;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SSpinBox<float>::SetMinDesiredWidth
              (*(SSpinBox<float> **)((longlong)param_1 + 0x800),(TAttribute<float> *)local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_48);
    if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
      local_18 = local_18 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// GetClearKeyboardFocusOnCommit_WrapperImpl @ 146967660

void __cdecl USpinBox::GetClearKeyboardFocusOnCommit_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x771);
  return;
}

// SetClearKeyboardFocusOnCommit_WrapperImpl @ 146967680

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl USpinBox::SetClearKeyboardFocusOnCommit_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FDestructionSentinel FStack_48;
  undefined1 auStack_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_28;
  ForAnyElementType FStack_20;
  ulonglong uStack_18;
  
  uVar1 = *(undefined1 *)param_2;
  *(undefined1 *)((longlong)param_1 + 0x771) = uVar1;
  lVar2 = *(longlong *)((longlong)param_1 + 0x800);
  if (lVar2 == 0) {
    return;
  }
  if (*(longlong *)(lVar2 + 0x338) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  auStack_30[1] = true;
  uStack_18 = 0;
  TStack_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  auStack_30[0] = uVar1;
  SEditableText::SetClearKeyboardFocusOnCommit
            (*(SEditableText **)(lVar2 + 0x338),(TAttribute<bool> *)auStack_30);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&TStack_28,(FWriteAccessScope *)&FStack_48);
  if (((int)uStack_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
  }
  if (FStack_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_28.AccessDetector);
  return;
}

// GetSelectAllTextOnCommit_WrapperImpl @ 1469676e0

void __cdecl USpinBox::GetSelectAllTextOnCommit_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x772);
  return;
}

// SetSelectAllTextOnCommit_WrapperImpl @ 1469676f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl USpinBox::SetSelectAllTextOnCommit_WrapperImpl(void *param_1,void *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FDestructionSentinel FStack_48;
  undefined1 auStack_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_28;
  ForAnyElementType FStack_20;
  ulonglong uStack_18;
  
  uVar1 = *(undefined1 *)param_2;
  *(undefined1 *)((longlong)param_1 + 0x772) = uVar1;
  lVar2 = *(longlong *)((longlong)param_1 + 0x800);
  if (lVar2 == 0) {
    return;
  }
  if (*(longlong *)(lVar2 + 0x338) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  auStack_30[1] = true;
  uStack_18 = 0;
  TStack_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  auStack_30[0] = uVar1;
  SEditableText::SetSelectAllTextOnCommit
            (*(SEditableText **)(lVar2 + 0x338),(TAttribute<bool> *)auStack_30);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&TStack_28,(FWriteAccessScope *)&FStack_48);
  if (((int)uStack_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
  }
  if (FStack_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_28.AccessDetector);
  return;
}

// GetForegroundColor_WrapperImpl @ 146967710

void __cdecl USpinBox::GetForegroundColor_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x77c);
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x784);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x774);
  *(undefined8 *)((longlong)param_2 + 8) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0x10) = uVar1;
  return;
}

// SetForegroundColor_WrapperImpl @ 1469677f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl USpinBox::SetForegroundColor_WrapperImpl(void *param_1,void *param_2)

{
  FLinearColor_u_0 local_28;
  undefined4 local_18;
  
  local_28._0_8_ = *(undefined8 *)param_2;
  local_28._8_8_ = *(undefined8 *)((longlong)param_2 + 8);
  local_18 = *(undefined4 *)((longlong)param_2 + 0x10);
  SetForegroundColor(param_1,(FSlateColor *)&local_28._s_0);
  return;
}

// GetMinValue_WrapperImpl @ 146967820

void __cdecl USpinBox::GetMinValue_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  
  uVar1 = __real_ff7fffff;
  if ((*(byte *)((longlong)param_1 + 0x7e8) & 1) != 0) {
    uVar1 = *(undefined4 *)((longlong)param_1 + 0x7ec);
  }
  *(undefined4 *)param_2 = uVar1;
  return;
}

// SetMinValue_WrapperImpl @ 146967850

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl USpinBox::SetMinValue_WrapperImpl(void *param_1,void *param_2)

{
  SetMinValue(param_1,*(float *)param_2);
  return;
}

// GetMaxValue_WrapperImpl @ 1469678a0

void __cdecl USpinBox::GetMaxValue_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  
  uVar1 = __real_7f7fffff;
  if ((*(byte *)((longlong)param_1 + 0x7e8) & 2) != 0) {
    uVar1 = *(undefined4 *)((longlong)param_1 + 0x7f0);
  }
  *(undefined4 *)param_2 = uVar1;
  return;
}

// SetMaxValue_WrapperImpl @ 146967910

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl USpinBox::SetMaxValue_WrapperImpl(void *param_1,void *param_2)

{
  SetMaxValue(param_1,*(float *)param_2);
  return;
}

// GetMinSliderValue_WrapperImpl @ 146967920

void __cdecl USpinBox::GetMinSliderValue_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  
  uVar1 = __real_00800000;
  if ((*(byte *)((longlong)param_1 + 0x7e8) & 4) != 0) {
    uVar1 = *(undefined4 *)((longlong)param_1 + 0x7f4);
  }
  *(undefined4 *)param_2 = uVar1;
  return;
}

// SetMinSliderValue_WrapperImpl @ 146967950

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl USpinBox::SetMinSliderValue_WrapperImpl(void *param_1,void *param_2)

{
  SetMinSliderValue(param_1,*(float *)param_2);
  return;
}

// GetMaxSliderValue_WrapperImpl @ 146967960

void __cdecl USpinBox::GetMaxSliderValue_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 uVar1;
  
  uVar1 = __real_7f7fffff;
  if ((*(byte *)((longlong)param_1 + 0x7e8) & 8) != 0) {
    uVar1 = *(undefined4 *)((longlong)param_1 + 0x7f8);
  }
  *(undefined4 *)param_2 = uVar1;
  return;
}

// SetMaxSliderValue_WrapperImpl @ 146967990

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl USpinBox::SetMaxSliderValue_WrapperImpl(void *param_1,void *param_2)

{
  SetMaxSliderValue(param_1,*(float *)param_2);
  return;
}

// StaticClass @ 1469679a0

UClass * __cdecl USpinBox::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USpinBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"SpinBox",&Z_Registration_Info_UClass_USpinBox.InnerSingleton,
               StaticRegisterNativesUSpinBox,0x810,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USpinBox>,InternalVTableHelperCtorCaller<USpinBox>,local_res8,
               UWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USpinBox.InnerSingleton;
}

// USpinBox @ 14698dad0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

USpinBox * __thiscall USpinBox::USpinBox(USpinBox *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  *(undefined8 *)&this->ValueDelegate = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&(this->ValueDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ValueDelegate).field_0x10 = 0;
  FSpinBoxStyle::FSpinBoxStyle(&this->WidgetStyle);
  this->bEnableSlider = true;
  FSlateFontInfo::FSlateFontInfo(&this->Font);
  *(undefined8 *)&(this->ForegroundColor).SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->ForegroundColor).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->ForegroundColor).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  (this->ForegroundColor).ColorUseRule = UseColor_Specified;
  *(undefined8 *)&this->OnValueChanged = 0;
  *(undefined8 *)&(this->OnValueChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnValueChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnValueCommitted = 0;
  *(undefined8 *)&(this->OnValueCommitted).field_0x8 = 0;
  *(undefined8 *)&(this->OnValueCommitted).field_0x10 = 0;
  *(undefined8 *)&this->OnBeginSliderMovement = 0;
  *(undefined8 *)&(this->OnBeginSliderMovement).field_0x8 = 0;
  *(undefined8 *)&(this->OnBeginSliderMovement).field_0x10 = 0;
  *(undefined8 *)&this->OnEndSliderMovement = 0;
  *(undefined8 *)&(this->OnEndSliderMovement).field_0x8 = 0;
  *(undefined8 *)&(this->OnEndSliderMovement).field_0x10 = 0;
  (this->MySpinBox).Object = (SSpinBox<float> *)0x0;
  (this->MySpinBox).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// USpinBox @ 14698dbd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

USpinBox * __thiscall USpinBox::USpinBox(USpinBox *this,FObjectInitializer *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  void *pvVar3;
  ESlateColorStylingMode EVar4;
  EStyleColor EVar5;
  undefined2 uVar6;
  FName *pFVar7;
  FSlateFontInfo *pFVar8;
  FDefaultStyleCache *pFVar9;
  ulonglong uVar10;
  wchar_t *pwVar11;
  FName local_res8;
  FFontOutlineSettings local_88;
  FSlateFontInfo local_68;
  
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  *(undefined8 *)&this->ValueDelegate = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined8 *)&(this->ValueDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ValueDelegate).field_0x10 = 0;
  FSpinBoxStyle::FSpinBoxStyle(&this->WidgetStyle);
  this->bEnableSlider = true;
  FSlateFontInfo::FSlateFontInfo(&this->Font);
  pvVar3 = ThreadLocalStoragePointer;
  uVar10 = (ulonglong)_tls_index;
  *(undefined8 *)&(this->ForegroundColor).SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->ForegroundColor).SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->ForegroundColor).SpecifiedColor.field0_0x0._s_0.A = 1.0;
  lVar1 = *(longlong *)((longlong)pvVar3 + uVar10 * 8);
  (this->ForegroundColor).ColorUseRule = UseColor_Specified;
  *(undefined8 *)&this->OnValueChanged = 0;
  *(undefined8 *)&(this->OnValueChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnValueChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnValueCommitted = 0;
  *(undefined8 *)&(this->OnValueCommitted).field_0x8 = 0;
  *(undefined8 *)&(this->OnValueCommitted).field_0x10 = 0;
  *(undefined8 *)&this->OnBeginSliderMovement = 0;
  *(undefined8 *)&(this->OnBeginSliderMovement).field_0x8 = 0;
  *(undefined8 *)&(this->OnBeginSliderMovement).field_0x10 = 0;
  *(undefined8 *)&this->OnEndSliderMovement = 0;
  *(undefined8 *)&(this->OnEndSliderMovement).field_0x8 = 0;
  *(undefined8 *)&(this->OnEndSliderMovement).field_0x10 = 0;
  (this->MySpinBox).Object = (SSpinBox<float> *)0x0;
  (this->MySpinBox).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (*(int *)(lVar1 + 0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString((FString *)&local_88,L"/Engine/EngineFonts/Roboto");
      FConfigCacheIni::GetString
                (GConfig,L"SlateStyle",L"DefaultFontName",(FString *)&local_88,&GEngineIni);
      pwVar11 = L"";
      if (local_88.OutlineMaterial.field0_0x0._0_4_ != 0) {
        pwVar11 = (wchar_t *)
                  CONCAT17(local_88._padding_,
                           CONCAT16(local_88.bApplyOutlineToDropShadows,
                                    CONCAT24(local_88._4_2_,local_88.OutlineSize)));
      }
      ConstructorHelpers::FObjectFinder<UFont>::FObjectFinder<UFont>(&RobotoFontObj,pwVar11,0);
      pvVar3 = (void *)CONCAT17(local_88._padding_,
                                CONCAT16(local_88.bApplyOutlineToDropShadows,
                                         CONCAT24(local_88._4_2_,local_88.OutlineSize)));
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      atexit(`USpinBox::USpinBox'::__l5::_dynamic_atexit_destructor_for__RobotoFontObj__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_88.OutlineSize = 0;
  local_88.bMiteredCorners = false;
  local_88.bSeparateFillAlpha = false;
  local_88.OutlineColor.field0_0x0._s_0 = FLinearColor::Black.field0_0x0;
  local_88.bApplyOutlineToDropShadows = false;
  local_88.OutlineMaterial.field0_0x0.DebugPtr = (TObjectPtr<UObject>_u_0)0x0;
  pFVar7 = ::FName::FName(&local_res8,"Bold");
  pFVar8 = FSlateFontInfo::FSlateFontInfo
                     (&local_68,(UObject *)RobotoFontObj.Object.field0_0x0,__real_41400000,pFVar7,
                      &local_88);
  FSlateFontInfo::operator=(&this->Font,pFVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.CompositeFont.SharedReferenceCount.ReferenceController);
  this->Value = 0.0;
  this->MinValue = 0.0;
  this->MaxValue = 0.0;
  this->MinSliderValue = 0.0;
  this->MaxSliderValue = 0.0;
  this->MinFractionalDigits = 1;
  this->MaxFractionalDigits = 6;
  this->bAlwaysUsesDeltaSnap = false;
  this->bEnableSlider = true;
  this->Delta = 0.0;
  this->SliderExponent = 1.0;
  this->MinDesiredWidth = 0.0;
  this->ClearKeyboardFocusOnCommit = false;
  this->SelectAllTextOnCommit = true;
  (this->KeyboardType).Value = '\x01';
  pFVar9 = UE::Slate::Private::FDefaultStyleCache::Get();
  FSpinBoxStyle::operator=(&this->WidgetStyle,&(pFVar9->Runtime).SpinBoxStyle);
  EVar4 = (this->WidgetStyle).ForegroundColor.ColorUseRule;
  EVar5 = (this->WidgetStyle).ForegroundColor.ColorTableId;
  uVar6 = *(undefined2 *)&(this->WidgetStyle).ForegroundColor.field_0x12;
  uVar2 = *(undefined8 *)
           ((longlong)&(this->WidgetStyle).ForegroundColor.SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(this->ForegroundColor).SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(this->WidgetStyle).ForegroundColor.SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(this->ForegroundColor).SpecifiedColor.field0_0x0 + 8) = uVar2;
  (this->ForegroundColor).ColorUseRule = EVar4;
  (this->ForegroundColor).ColorTableId = EVar5;
  *(undefined2 *)&(this->ForegroundColor).field_0x12 = uVar6;
  return this;
}

// ~USpinBox @ 146994450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall USpinBox::~USpinBox(USpinBox *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MySpinBox).SharedReferenceCount.ReferenceController);
  pvVar1 = *(void **)&(this->OnEndSliderMovement).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnEndSliderMovement);
  pvVar1 = *(void **)&(this->OnBeginSliderMovement).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnBeginSliderMovement);
  pvVar1 = *(void **)&(this->OnValueCommitted).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnValueCommitted);
  pvVar1 = *(void **)&(this->OnValueChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnValueChanged);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Font).CompositeFont.SharedReferenceCount.ReferenceController);
  FSpinBoxStyle::~FSpinBoxStyle(&this->WidgetStyle);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ValueDelegate);
  UWidget::~UWidget((UWidget *)this);
  return;
}

// ClearMaxSliderValue @ 1469a69a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USpinBox::ClearMaxSliderValue(USpinBox *this)

{
  SSpinBox<float> *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_20;
  ForAnyElementType FStack_18;
  ulonglong local_10;
  
  this->bOverride_MaxSliderValue = 0;
  this_00 = (this->MySpinBox).Object;
  if (this_00 != (SSpinBox<float> *)0x0) {
    local_30[4] = false;
    local_10 = 0;
    local_30[8] = true;
    local_20.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_18.Data = (FScriptContainerElement *)0x0;
    SSpinBox<float>::SetMaxSliderValue(this_00,(TAttribute<TOptional<float>_> *)local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_20,(FWriteAccessScope *)&local_48);
    if (((int)local_10 != 0) && (FStack_18.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_18.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_18,0,0,0x10);
      local_10 = local_10 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_20.AccessDetector);
  }
  return;
}

// ClearMaxValue @ 1469a6a70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USpinBox::ClearMaxValue(USpinBox *this)

{
  SSpinBox<float> *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_20;
  ForAnyElementType FStack_18;
  ulonglong local_10;
  
  this->bOverride_MaxValue = 0;
  this_00 = (this->MySpinBox).Object;
  if (this_00 != (SSpinBox<float> *)0x0) {
    local_30[4] = false;
    local_10 = 0;
    local_30[8] = true;
    local_20.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_18.Data = (FScriptContainerElement *)0x0;
    SSpinBox<float>::SetMaxValue(this_00,(TAttribute<TOptional<float>_> *)local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_20,(FWriteAccessScope *)&local_48);
    if (((int)local_10 != 0) && (FStack_18.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_18.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_18,0,0,0x10);
      local_10 = local_10 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_20.AccessDetector);
  }
  return;
}

// ClearMinSliderValue @ 1469a6e10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USpinBox::ClearMinSliderValue(USpinBox *this)

{
  SSpinBox<float> *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_20;
  ForAnyElementType FStack_18;
  ulonglong local_10;
  
  this->bOverride_MinSliderValue = 0;
  this_00 = (this->MySpinBox).Object;
  if (this_00 != (SSpinBox<float> *)0x0) {
    local_30[4] = false;
    local_10 = 0;
    local_30[8] = true;
    local_20.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_18.Data = (FScriptContainerElement *)0x0;
    SSpinBox<float>::SetMinSliderValue(this_00,(TAttribute<TOptional<float>_> *)local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_20,(FWriteAccessScope *)&local_48);
    if (((int)local_10 != 0) && (FStack_18.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_18.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_18,0,0,0x10);
      local_10 = local_10 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_20.AccessDetector);
  }
  return;
}

// ClearMinValue @ 1469a6ee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USpinBox::ClearMinValue(USpinBox *this)

{
  SSpinBox<float> *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_20;
  ForAnyElementType FStack_18;
  ulonglong local_10;
  
  this->bOverride_MinValue = 0;
  this_00 = (this->MySpinBox).Object;
  if (this_00 != (SSpinBox<float> *)0x0) {
    local_30[4] = false;
    local_10 = 0;
    local_30[8] = true;
    local_20.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_18.Data = (FScriptContainerElement *)0x0;
    SSpinBox<float>::SetMinValue(this_00,(TAttribute<TOptional<float>_> *)local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_20,(FWriteAccessScope *)&local_48);
    if (((int)local_10 != 0) && (FStack_18.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_18.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_18,0,0,0x10);
      local_10 = local_10 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_20.AccessDetector);
  }
  return;
}

// FOnSpinBoxBeginSliderMovement_DelegateWrapper @ 1469c84b0

void __cdecl
USpinBox::FOnSpinBoxBeginSliderMovement_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// FOnSpinBoxValueChangedEvent_DelegateWrapper @ 1469c84c0

void __cdecl
USpinBox::FOnSpinBoxValueChangedEvent_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,float param_2)

{
  float local_res10 [6];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FOnSpinBoxValueCommittedEvent_DelegateWrapper @ 1469c84e0

void __cdecl
USpinBox::FOnSpinBoxValueCommittedEvent_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,float param_2,Type param_3)

{
  float local_res20;
  undefined1 local_res24;
  
  local_res24 = (undefined1)param_3;
  local_res20 = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_res20);
  return;
}

// GetAlwaysUsesDeltaSnap @ 1469cd060

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall USpinBox::GetAlwaysUsesDeltaSnap(USpinBox *this)

{
  SSpinBox<float> *this_00;
  bool bVar1;
  
  this_00 = (this->MySpinBox).Object;
  if (this_00 != (SSpinBox<float> *)0x0) {
    bVar1 = SSpinBox<float>::GetAlwaysUsesDeltaSnap(this_00);
    return bVar1;
  }
  return this->bAlwaysUsesDeltaSnap;
}

// GetClearKeyboardFocusOnCommit @ 1469ce4d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall USpinBox::GetClearKeyboardFocusOnCommit(USpinBox *this)

{
  return this->ClearKeyboardFocusOnCommit;
}

// GetDelta @ 1469cf2f0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall USpinBox::GetDelta(USpinBox *this)

{
  return this->Delta;
}

// GetEnableSlider @ 1469d0240

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall USpinBox::GetEnableSlider(USpinBox *this)

{
  return this->bEnableSlider;
}

// GetFieldNotificationDescriptor @ 1469d0860

/* WARNING: Enum "Type": Some values do not have unique names */

IClassDescriptor * __thiscall USpinBox::GetFieldNotificationDescriptor(USpinBox *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`USpinBox::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetFont @ 1469d0930

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateFontInfo * __thiscall USpinBox::GetFont(USpinBox *this)

{
  return &this->Font;
}

// GetForegroundColor @ 1469d0c10

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateColor * __thiscall
USpinBox::GetForegroundColor(USpinBox *this,FSlateColor *__return_storage_ptr__)

{
  undefined8 uVar1;
  ESlateColorStylingMode EVar2;
  EStyleColor EVar3;
  undefined2 uVar4;
  
  EVar2 = (this->ForegroundColor).ColorUseRule;
  EVar3 = (this->ForegroundColor).ColorTableId;
  uVar4 = *(undefined2 *)&(this->ForegroundColor).field_0x12;
  uVar1 = *(undefined8 *)((longlong)&(this->ForegroundColor).SpecifiedColor.field0_0x0 + 8);
  *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 =
       *(undefined8 *)&(this->ForegroundColor).SpecifiedColor.field0_0x0;
  *(undefined8 *)((longlong)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 + 8) = uVar1;
  __return_storage_ptr__->ColorUseRule = EVar2;
  __return_storage_ptr__->ColorTableId = EVar3;
  *(undefined2 *)&__return_storage_ptr__->field_0x12 = uVar4;
  return __return_storage_ptr__;
}

// GetJustification @ 1469d1b70

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall USpinBox::GetJustification(USpinBox *this)

{
  return (Type)(this->Justification).Value;
}

// GetMaxFractionalDigits @ 1469d1c90

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall USpinBox::GetMaxFractionalDigits(USpinBox *this)

{
  return this->MaxFractionalDigits;
}

// GetMaxSliderValue @ 1469d1cd0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall USpinBox::GetMaxSliderValue(USpinBox *this)

{
  if (this->bOverride_MaxSliderValue != 0) {
    return this->MaxSliderValue;
  }
  return __real_7f7fffff;
}

// GetMaxValue @ 1469d1d30

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall USpinBox::GetMaxValue(USpinBox *this)

{
  if (this->bOverride_MaxValue != 0) {
    return this->MaxValue;
  }
  return __real_7f7fffff;
}

// GetMinDesiredWidth @ 1469d1e30

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall USpinBox::GetMinDesiredWidth(USpinBox *this)

{
  return this->MinDesiredWidth;
}

// GetMinFractionalDigits @ 1469d1e50

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall USpinBox::GetMinFractionalDigits(USpinBox *this)

{
  return this->MinFractionalDigits;
}

// GetMinSliderValue @ 1469d1e60

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall USpinBox::GetMinSliderValue(USpinBox *this)

{
  if (this->bOverride_MinSliderValue != 0) {
    return this->MinSliderValue;
  }
  return __real_00800000;
}

// GetMinValue @ 1469d1ec0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall USpinBox::GetMinValue(USpinBox *this)

{
  if (this->bOverride_MinValue != 0) {
    return this->MinValue;
  }
  return __real_ff7fffff;
}

// GetPrivateStaticClass @ 1469d5f90

UClass * __cdecl USpinBox::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USpinBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"SpinBox",&Z_Registration_Info_UClass_USpinBox.InnerSingleton,
               StaticRegisterNativesUSpinBox,0x810,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USpinBox>,InternalVTableHelperCtorCaller<USpinBox>,local_res8,
               UWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USpinBox.InnerSingleton;
}

// GetSelectAllTextOnCommit @ 1469d7190

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall USpinBox::GetSelectAllTextOnCommit(USpinBox *this)

{
  return this->SelectAllTextOnCommit;
}

// GetSliderExponent @ 1469d86e0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall USpinBox::GetSliderExponent(USpinBox *this)

{
  return this->SliderExponent;
}

// GetValue @ 1469d9bb0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall USpinBox::GetValue(USpinBox *this)

{
  return this->Value;
}

// GetWidgetStyle @ 1469da3d0

/* WARNING: Enum "Type": Some values do not have unique names */

FSpinBoxStyle * __thiscall USpinBox::GetWidgetStyle(USpinBox *this)

{
  return &this->WidgetStyle;
}

// HandleOnBeginSliderMovement @ 1469dcf20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USpinBox::HandleOnBeginSliderMovement(USpinBox *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnBeginSliderMovement,
             (void *)0x0);
  return;
}

// HandleOnEndSliderMovement @ 1469dcf80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USpinBox::HandleOnEndSliderMovement(USpinBox *this,float param_1)

{
  float local_res18 [4];
  
  local_res18[0] = param_1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnEndSliderMovement,
             local_res18);
  return;
}

// HandleOnValueChanged @ 1469dd770

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall USpinBox::HandleOnValueChanged(USpinBox *this,float param_1)

{
  float local_res18 [4];
  FFieldId local_28 [2];
  
  if (param_1 != this->Value) {
    this->Value = param_1;
    local_28[0].FieldName = FFieldNotificationClassDescriptor::Value.FieldName;
    local_28[0].BitNumber = FFieldNotificationClassDescriptor::Value.BitNumber;
    UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,local_28);
  }
  local_res18[0] = param_1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnValueChanged,
             local_res18);
  return;
}

// HandleOnValueCommitted @ 1469dd7e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall USpinBox::HandleOnValueCommitted(USpinBox *this,float param_1,Type param_2)

{
  float local_res20;
  undefined1 local_res24;
  FFieldId local_28 [2];
  
  if (param_1 != this->Value) {
    this->Value = param_1;
    local_28[0].FieldName = FFieldNotificationClassDescriptor::Value.FieldName;
    local_28[0].BitNumber = FFieldNotificationClassDescriptor::Value.BitNumber;
    UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,local_28);
  }
  local_res24 = (undefined1)param_2;
  local_res20 = param_1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnValueCommitted,
             &local_res20);
  return;
}

// RebuildWidget @ 146a06640

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
USpinBox::RebuildWidget(USpinBox *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  TReferenceControllerBase<1> *pTVar2;
  SSpinBox<float> *pSVar3;
  code *pcVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  FArguments *pFVar9;
  undefined8 *puVar10;
  ulong64 uVar11;
  TSharedRef<SWidget,1> *pTVar12;
  EKeyboardType EVar13;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  USpinBox *local_res18;
  USpinBox *local_res20;
  FMemScope local_a58;
  undefined4 uStack_a50;
  undefined4 uStack_a4c;
  undefined1 local_a48 [8];
  FDelegateAllocation local_a40;
  undefined1 local_a30 [8];
  FDelegateAllocation local_a28;
  undefined1 local_a18 [8];
  FDelegateAllocation local_a10;
  undefined1 local_a00 [8];
  FDelegateAllocation local_9f8;
  undefined1 local_9e8;
  undefined1 local_9e7;
  undefined1 local_9e0 [8];
  ForAnyElementType FStack_9d8;
  ulonglong local_9d0;
  undefined1 local_9c8;
  undefined1 local_9c7;
  undefined1 local_9c0 [8];
  ForAnyElementType FStack_9b8;
  ulonglong local_9b0;
  Type local_9a8;
  undefined1 local_9a4;
  undefined1 local_9a0 [8];
  ForAnyElementType FStack_998;
  ulonglong local_990;
  EKeyboardType local_988;
  undefined1 local_984;
  undefined1 local_980 [8];
  ForAnyElementType FStack_978;
  ulonglong local_970;
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs> local_968;
  SSpinBox<float> *local_950;
  FSharedReferencer<1> local_948;
  USpinBox *local_940;
  USpinBox *local_938;
  FName local_930;
  FDestructionSentinel local_928;
  FDestructionSentinel local_910;
  FDestructionSentinel local_8f8;
  FDestructionSentinel local_8e0;
  FDestructionSentinel local_8c8;
  FDestructionSentinel local_8b0;
  FDestructionSentinel local_898;
  FDestructionSentinel local_880;
  FDestructionSentinel local_868;
  FDestructionSentinel local_850;
  FDelegateAllocation *local_838;
  FDestructionSentinel local_830;
  FDelegateAllocation *local_818;
  FDestructionSentinel local_810;
  FDelegateAllocation *local_7f8;
  FDestructionSentinel local_7f0;
  FDelegateAllocation *local_7d8;
  FSlateFontInfo local_7d0;
  bool local_770;
  undefined1 local_768 [8];
  ForAnyElementType FStack_760;
  ulonglong local_758;
  FArguments local_750;
  
  pFVar9 = SSpinBox<float>::FArguments::FArguments(&local_750);
  pFVar9->_Style = &this->WidgetStyle;
  FSlateFontInfo::FSlateFontInfo(&local_7d0,&this->Font);
  local_770 = true;
  EVar13 = Keyboard_Default;
  local_758 = 0;
  local_768 = (undefined1  [8])0x0;
  FStack_760.Data = (FScriptContainerElement *)0x0;
  FSlateFontInfo::operator=(&(pFVar9->_Font).Value,&local_7d0);
  (pFVar9->_Font).bIsSet = local_770;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar9->_Font).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_768);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_768,
             (FWriteAccessScope *)&local_928);
  if (((int)local_758 != 0) && (FStack_760.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_760.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_760,0,0,0x10);
    local_758 = local_758 & 0xffffffff00000000;
  }
  if (local_928.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_928.Accessor,&local_928);
  }
  if (FStack_760.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_760.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_768);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_7d0.CompositeFont.SharedReferenceCount.ReferenceController);
  local_9e8 = this->ClearKeyboardFocusOnCommit;
  local_9e7 = 1;
  local_9d0 = 0;
  local_9e0 = (undefined1  [8])0x0;
  FStack_9d8.Data = (FScriptContainerElement *)0x0;
  (pFVar9->_ClearKeyboardFocusOnCommit).Value = (bool)local_9e8;
  (pFVar9->_ClearKeyboardFocusOnCommit).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(pFVar9->_ClearKeyboardFocusOnCommit).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_9e0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9e0,
             (FWriteAccessScope *)&local_910);
  if (((int)local_9d0 != 0) && (FStack_9d8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_9d8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_9d8,0,0,0x10);
    local_9d0 = local_9d0 & 0xffffffff00000000;
  }
  if (local_910.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_910.Accessor,&local_910);
  }
  if (FStack_9d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_9d8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_9e0);
  local_9c8 = this->SelectAllTextOnCommit;
  local_9c7 = 1;
  local_9b0 = 0;
  local_9c0 = (undefined1  [8])0x0;
  FStack_9b8.Data = (FScriptContainerElement *)0x0;
  (pFVar9->_SelectAllTextOnCommit).Value = (bool)local_9c8;
  (pFVar9->_SelectAllTextOnCommit).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar9->_SelectAllTextOnCommit).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_9c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9c0,
             (FWriteAccessScope *)&local_8f8);
  if (((int)local_9b0 != 0) && (FStack_9b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_9b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_9b8,0,0,0x10);
    local_9b0 = local_9b0 & 0xffffffff00000000;
  }
  if (local_8f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_8f8.Accessor,&local_8f8);
  }
  if (FStack_9b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_9b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_9c0);
  local_9a8 = (Type)(this->Justification).Value;
  local_9a4 = 1;
  local_990 = 0;
  local_9a0 = (undefined1  [8])0x0;
  FStack_998.Data = (FScriptContainerElement *)0x0;
  (pFVar9->_Justification).Value = local_9a8;
  (pFVar9->_Justification).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar9->_Justification).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_9a0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9a0,
             (FWriteAccessScope *)&local_8e0);
  if (((int)local_990 != 0) && (FStack_998.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_998.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_998,0,0,0x10);
    local_990 = local_990 & 0xffffffff00000000;
  }
  if (local_8e0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_8e0.Accessor,&local_8e0);
  }
  if (FStack_998.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_998.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_9a0);
  switch((this->KeyboardType).Value) {
  default:
    break;
  case '\x01':
    EVar13 = Keyboard_Number;
    break;
  case '\x02':
    EVar13 = Keyboard_Web;
    break;
  case '\x03':
    EVar13 = Keyboard_Email;
    break;
  case '\x04':
    EVar13 = Keyboard_Password;
    break;
  case '\x05':
    EVar13 = Keyboard_AlphaNumeric;
  }
  local_984 = 1;
  local_970 = 0;
  local_980 = (undefined1  [8])0x0;
  FStack_978.Data = (FScriptContainerElement *)0x0;
  (pFVar9->_KeyboardType).Value = EVar13;
  (pFVar9->_KeyboardType).bIsSet = true;
  local_988 = EVar13;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar9->_KeyboardType).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_980);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_980,
             (FWriteAccessScope *)&local_8c8);
  if (((int)local_970 != 0) && (FStack_978.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_978.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_978,0,0,0x10);
    local_970 = local_970 & 0xffffffff00000000;
  }
  if (local_8c8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_8c8.Accessor,&local_8c8);
  }
  if (FStack_978.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_978.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_980);
  uStack_a50 = 0;
  local_a58 = (FMemScope)HandleOnValueChanged;
  local_a00 = (undefined1  [8])0x0;
  local_9f8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_9f8.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a00,
             (FWriteAccessScope *)&local_850);
  local_838 = &local_9f8;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_9f8);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUSpinBox____A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar10[3] = 0;
    local_res18 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_res18);
    *(FMemScope *)(puVar10 + 4) = local_a58;
    puVar10[5] = CONCAT44(uStack_a4c,uStack_a50);
  }
  if (local_850.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_850.Accessor,&local_850);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar9->_OnValueChanged,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a00);
  uStack_a50 = 0;
  local_a58 = (FMemScope)HandleOnValueCommitted;
  local_a18 = (undefined1  [8])0x0;
  local_a10.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_a10.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a18,
             (FWriteAccessScope *)&local_830);
  local_818 = &local_a10;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_a10);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &
               ___7__TCommonDelegateInstanceState___A6AXMW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUSpinBox____A6AXMW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar10[3] = 0;
    local_res20 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_res20);
    *(FMemScope *)(puVar10 + 4) = local_a58;
    puVar10[5] = CONCAT44(uStack_a4c,uStack_a50);
  }
  if (local_830.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_830.Accessor,&local_830);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar9->_OnValueCommitted,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a18);
  uStack_a50 = 0;
  local_a58 = (FMemScope)HandleOnBeginSliderMovement;
  local_a30 = (undefined1  [8])0x0;
  local_a28.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_a28.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a30,
             (FWriteAccessScope *)&local_810);
  local_7f8 = &local_a28;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_a28);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUSpinBox____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar10[3] = 0;
    local_940 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_940);
    *(FMemScope *)(puVar10 + 4) = local_a58;
    puVar10[5] = CONCAT44(uStack_a4c,uStack_a50);
  }
  if (local_810.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_810.Accessor,&local_810);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar9->_OnBeginSliderMovement,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a30);
  uStack_a50 = 0;
  local_a58 = (FMemScope)HandleOnEndSliderMovement;
  local_a48 = (undefined1  [8])0x0;
  local_a40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_a40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a48,
             (FWriteAccessScope *)&local_7f0);
  local_7d8 = &local_a40;
  puVar10 = UE::Core::Private::DelegateAllocate(0x30,&local_a40);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &___7__TCommonDelegateInstanceState___A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[2] = uVar11;
    *puVar10 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUSpinBox____A6AXM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar10[3] = 0;
    local_938 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar10 + 3),(FObjectPtr)&local_938);
    *(FMemScope *)(puVar10 + 4) = local_a58;
    puVar10[5] = CONCAT44(uStack_a4c,uStack_a50);
  }
  if (local_7f0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_7f0.Accessor,&local_7f0);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar9->_OnEndSliderMovement,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_a48);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_930 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_a58,&local_930,true);
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSpinBox<float>,RequiredArgs::T0RequiredArgs>
            (&local_968,"SSpinBox<float>",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\SpinBox.cpp"
             ,0x41,local_res8);
  FMemScope::~FMemScope(&local_a58);
  FLLMScope::~FLLMScope(local_res10);
  pSVar3 = local_968._Widget.Object;
  if ((local_968._Widget.Object == (SSpinBox<float> *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar12;
  }
  SWidget::SWidgetConstruct((SWidget *)local_968._Widget.Object,(FSlateBaseNamedArgs *)pFVar9);
  SSpinBox<float>::Construct(local_968._Widget.Object,pFVar9);
  if ((local_968._Widget.Object == (SSpinBox<float> *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar12;
  }
  if (((local_968._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar7 = (**(code **)((local_968._Widget.Object)->_padding_ + 0x228))(local_968._Widget.Object);
    bVar8 = 0;
    if (cVar7 == '\0') goto LAB_146a06f26;
  }
  bVar8 = 0x20;
LAB_146a06f26:
  *(byte *)&(local_968._Widget.Object)->_padding_ =
       (byte)(local_968._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_968._Widget.Object)->_padding_ =
       (byte)(local_968._Widget.Object)->_padding_ | bVar8;
  if ((local_968._Widget.Object == (SSpinBox<float> *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar12;
  }
  pbVar1 = (byte *)((longlong)&(local_968._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_968._Widget.Object == (SSpinBox<float> *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar12;
  }
  FVar5.ReferenceController = local_968._Widget.SharedReferenceCount.ReferenceController;
  local_968._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_968._Widget.Object = (SSpinBox<float> *)0x0;
  if ((pSVar3 == (SSpinBox<float> *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar12;
  }
  local_950 = pSVar3;
  local_948.ReferenceController = FVar5.ReferenceController;
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->MySpinBox != (TSharedPtr<SSpinBox<float>,1> *)&local_950) {
    (this->MySpinBox).Object = pSVar3;
    local_950 = (SSpinBox<float> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MySpinBox).SharedReferenceCount,&local_948);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_948.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a48,
             (FWriteAccessScope *)&local_8b0);
  if ((local_a40.DelegateSize != 0) &&
     (local_a40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_a40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_a40,0,0,0x10);
    local_a40.DelegateSize = 0;
  }
  if (local_8b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_8b0.Accessor,&local_8b0);
  }
  if (local_a40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_a40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a30,
             (FWriteAccessScope *)&local_898);
  if ((local_a28.DelegateSize != 0) &&
     (local_a28.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_a28.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_a28,0,0,0x10);
    local_a28.DelegateSize = 0;
  }
  if (local_898.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_898.Accessor,&local_898);
  }
  if (local_a28.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_a28.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a30);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a18,
             (FWriteAccessScope *)&local_880);
  if ((local_a10.DelegateSize != 0) &&
     (local_a10.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_a10.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_a10,0,0,0x10);
    local_a10.DelegateSize = 0;
  }
  if (local_880.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_880.Accessor,&local_880);
  }
  if (local_a10.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_a10.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a18);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_a00,
             (FWriteAccessScope *)&local_868);
  if ((local_9f8.DelegateSize != 0) &&
     (local_9f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_9f8.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_9f8,0,0,0x10);
    local_9f8.DelegateSize = 0;
  }
  if (local_868.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_868.Accessor,&local_868);
  }
  if (local_9f8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_9f8.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a00);
  SSpinBox<float>::FArguments::~FArguments(&local_750);
  if (((this->MySpinBox).Object == (SSpinBox<float> *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar12;
  }
  pTVar2 = (this->MySpinBox).SharedReferenceCount.ReferenceController;
  pSVar3 = (this->MySpinBox).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar3 == (SSpinBox<float> *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar12;
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar3;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 146a0b4f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USpinBox::ReleaseSlateResources(USpinBox *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MySpinBox != (TSharedPtr<SSpinBox<float>,1> *)&local_18) {
    (this->MySpinBox).Object = (SSpinBox<float> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MySpinBox).SharedReferenceCount,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// SetAlwaysUsesDeltaSnap @ 146a10e20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USpinBox::SetAlwaysUsesDeltaSnap(USpinBox *this,bool param_1)

{
  SSpinBox<float> *pSVar1;
  
  this->bAlwaysUsesDeltaSnap = param_1;
  pSVar1 = (this->MySpinBox).Object;
  if (pSVar1 == (SSpinBox<float> *)0x0) {
    return;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pSVar1->AlwaysUsesDeltaSnap).Getter);
  (pSVar1->AlwaysUsesDeltaSnap).Value = param_1;
  (pSVar1->AlwaysUsesDeltaSnap).bIsSet = true;
  return;
}

// SetClearKeyboardFocusOnCommit @ 146a12270

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USpinBox::SetClearKeyboardFocusOnCommit(USpinBox *this,bool param_1)

{
  SSpinBox<float> *pSVar1;
  code *pcVar2;
  bool bVar3;
  FDestructionSentinel FStack_48;
  undefined1 auStack_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_28;
  ForAnyElementType FStack_20;
  ulonglong uStack_18;
  
  this->ClearKeyboardFocusOnCommit = param_1;
  pSVar1 = (this->MySpinBox).Object;
  if (pSVar1 == (SSpinBox<float> *)0x0) {
    return;
  }
  if ((pSVar1->EditableText).Object == (SEditableText *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  auStack_30[1] = true;
  uStack_18 = 0;
  TStack_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  auStack_30[0] = param_1;
  SEditableText::SetClearKeyboardFocusOnCommit
            ((pSVar1->EditableText).Object,(TAttribute<bool> *)auStack_30);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&TStack_28,(FWriteAccessScope *)&FStack_48);
  if (((int)uStack_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
  }
  if (FStack_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_28.AccessDetector);
  return;
}

// SetDelta @ 146a13230

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USpinBox::SetDelta(USpinBox *this,float param_1)

{
  SSpinBox<float> *pSVar1;
  
  this->Delta = param_1;
  pSVar1 = (this->MySpinBox).Object;
  if (pSVar1 == (SSpinBox<float> *)0x0) {
    return;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pSVar1->Delta).Getter);
  (pSVar1->Delta).Value = param_1;
  (pSVar1->Delta).bIsSet = true;
  return;
}

// SetEnableSlider @ 146a13650

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USpinBox::SetEnableSlider(USpinBox *this,bool param_1)

{
  SSpinBox<float> *pSVar1;
  
  this->bEnableSlider = param_1;
  pSVar1 = (this->MySpinBox).Object;
  if (pSVar1 == (SSpinBox<float> *)0x0) {
    return;
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pSVar1->EnableSlider).Getter);
  (pSVar1->EnableSlider).Value = param_1;
  (pSVar1->EnableSlider).bIsSet = true;
  return;
}

// SetFont @ 146a14090

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USpinBox::SetFont(USpinBox *this,FSlateFontInfo *param_1)

{
  SSpinBox<float> *this_00;
  FSlateFontInfo *pFVar1;
  FSlateFontInfo local_68;
  
  FSlateFontInfo::operator=(&this->Font,param_1);
  this_00 = (this->MySpinBox).Object;
  if (this_00 != (SSpinBox<float> *)0x0) {
    pFVar1 = FSlateFontInfo::FSlateFontInfo(&local_68,param_1);
    SSpinBox<float>::SetTextBlockFont(this_00,pFVar1);
  }
  return;
}

// SetForegroundColor @ 146a145d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USpinBox::SetForegroundColor(USpinBox *this,FSlateColor *param_1)

{
  SSpinBox<float> *pSVar1;
  FDestructionSentinel local_58;
  FLinearColor_u_0 local_40;
  undefined4 local_30;
  undefined1 local_2c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  local_40._0_8_ = *(undefined8 *)&(param_1->SpecifiedColor).field0_0x0;
  local_40._8_8_ = *(undefined8 *)((longlong)&(param_1->SpecifiedColor).field0_0x0 + 8);
  pSVar1 = (this->MySpinBox).Object;
  local_30._0_1_ = param_1->ColorUseRule;
  local_30._1_1_ = param_1->ColorTableId;
  local_30._2_2_ = *(undefined2 *)&param_1->field_0x12;
  *(undefined8 *)&(this->ForegroundColor).SpecifiedColor.field0_0x0 = local_40._0_8_;
  *(undefined8 *)((longlong)&(this->ForegroundColor).SpecifiedColor.field0_0x0 + 8) = local_40._8_8_
  ;
  (this->ForegroundColor).ColorUseRule = (undefined1)local_30;
  (this->ForegroundColor).ColorTableId = local_30._1_1_;
  *(undefined2 *)&(this->ForegroundColor).field_0x12 = local_30._2_2_;
  if (pSVar1 != (SSpinBox<float> *)0x0) {
    local_2c = 1;
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Assign((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)&pSVar1->_padding_,(SWidget *)pSVar1,(TAttribute<FSlateColor> *)&local_40._s_0,None)
    ;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_58);
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
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// SetJustification @ 146a165d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USpinBox::SetJustification(USpinBox *this,Type param_1)

{
  SSpinBox<float> *pSVar1;
  code *pcVar2;
  bool bVar3;
  FDestructionSentinel FStack_68;
  undefined1 auStack_50 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_48;
  ForAnyElementType FStack_40;
  ulonglong uStack_38;
  TAttribute<ETextJustify::Type> TStack_30;
  
  (this->Justification).Value = (uchar)param_1;
  pSVar1 = (this->MySpinBox).Object;
  if (pSVar1 == (SSpinBox<float> *)0x0) {
    return;
  }
  if ((pSVar1->EditableText).Object == (SEditableText *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uStack_38 = 0;
  auStack_50[4] = true;
  TStack_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_40.Data = (FScriptContainerElement *)0x0;
  auStack_50._0_4_ = param_1;
  SEditableText::SetJustification
            ((pSVar1->EditableText).Object,(TAttribute<ETextJustify::Type> *)auStack_50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&TStack_48,(FWriteAccessScope *)&FStack_68);
  if (((int)uStack_38 != 0) && (FStack_40.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_40,0,0,0x10);
    uStack_38 = uStack_38 & 0xffffffff00000000;
  }
  if (FStack_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_68.Accessor,&FStack_68);
  }
  if (FStack_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_40.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_48.AccessDetector);
  if ((pSVar1->TextBlock).Object == (STextBlock *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  TStack_30.Getter._16_8_ = 0;
  TStack_30.bIsSet = true;
  TStack_30.Getter._0_8_ = 0;
  TStack_30.Getter._8_8_ = 0;
  TStack_30.Value = param_1;
  STextBlock::SetJustification((pSVar1->TextBlock).Object,&TStack_30);
  return;
}

// SetMaxFractionalDigits @ 146a16de0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USpinBox::SetMaxFractionalDigits(USpinBox *this,int param_1)

{
  SSpinBox<float> *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_20;
  ForAnyElementType FStack_18;
  ulonglong local_10;
  
  local_30._0_4_ = param_1;
  if (param_1 < 0) {
    local_30._0_4_ = 0;
  }
  this->MaxFractionalDigits = local_30._0_4_;
  this_00 = (this->MySpinBox).Object;
  if (this_00 != (SSpinBox<float> *)0x0) {
    local_10 = 0;
    local_30[4] = true;
    local_30[8] = true;
    local_20.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_18.Data = (FScriptContainerElement *)0x0;
    SSpinBox<float>::SetMaxFractionalDigits(this_00,(TAttribute<TOptional<int>_> *)local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_20,(FWriteAccessScope *)&local_48);
    if (((int)local_10 != 0) && (FStack_18.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_18.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_18,0,0,0x10);
      local_10 = local_10 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_20.AccessDetector);
  }
  return;
}

// SetMaxSliderValue @ 146a17010

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USpinBox::SetMaxSliderValue(USpinBox *this,float param_1)

{
  SSpinBox<float> *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_20;
  ForAnyElementType FStack_18;
  ulonglong local_10;
  
  this->bOverride_MaxSliderValue = 1;
  this->MaxSliderValue = param_1;
  this_00 = (this->MySpinBox).Object;
  if (this_00 != (SSpinBox<float> *)0x0) {
    local_10 = 0;
    local_20.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_18.Data = (FScriptContainerElement *)0x0;
    local_30[4] = true;
    local_30[8] = true;
    local_30._0_4_ = param_1;
    SSpinBox<float>::SetMaxSliderValue(this_00,(TAttribute<TOptional<float>_> *)local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_20,(FWriteAccessScope *)&local_48);
    if (((int)local_10 != 0) && (FStack_18.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_18.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_18,0,0,0x10);
      local_10 = local_10 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_20.AccessDetector);
  }
  return;
}

// SetMaxValue @ 146a17120

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USpinBox::SetMaxValue(USpinBox *this,float param_1)

{
  SSpinBox<float> *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_20;
  ForAnyElementType FStack_18;
  ulonglong local_10;
  
  this->bOverride_MaxValue = 1;
  this->MaxValue = param_1;
  this_00 = (this->MySpinBox).Object;
  if (this_00 != (SSpinBox<float> *)0x0) {
    local_10 = 0;
    local_20.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_18.Data = (FScriptContainerElement *)0x0;
    local_30[4] = true;
    local_30[8] = true;
    local_30._0_4_ = param_1;
    SSpinBox<float>::SetMaxValue(this_00,(TAttribute<TOptional<float>_> *)local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_20,(FWriteAccessScope *)&local_48);
    if (((int)local_10 != 0) && (FStack_18.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_18.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_18,0,0,0x10);
      local_10 = local_10 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_20.AccessDetector);
  }
  return;
}

// SetMinDesiredWidth @ 146a17740

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USpinBox::SetMinDesiredWidth(USpinBox *this,float param_1)

{
  SSpinBox<float> *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this->MinDesiredWidth = param_1;
  this_00 = (this->MySpinBox).Object;
  if (this_00 != (SSpinBox<float> *)0x0) {
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30[4] = true;
    local_30._0_4_ = param_1;
    SSpinBox<float>::SetMinDesiredWidth(this_00,(TAttribute<float> *)local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_48);
    if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
      local_18 = local_18 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// SetMinFractionalDigits @ 146a17860

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USpinBox::SetMinFractionalDigits(USpinBox *this,int param_1)

{
  SSpinBox<float> *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_20;
  ForAnyElementType FStack_18;
  ulonglong local_10;
  
  local_30._0_4_ = param_1;
  if (param_1 < 0) {
    local_30._0_4_ = 0;
  }
  this->MinFractionalDigits = local_30._0_4_;
  this_00 = (this->MySpinBox).Object;
  if (this_00 != (SSpinBox<float> *)0x0) {
    local_10 = 0;
    local_30[4] = true;
    local_30[8] = true;
    local_20.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_18.Data = (FScriptContainerElement *)0x0;
    SSpinBox<float>::SetMinFractionalDigits(this_00,(TAttribute<TOptional<int>_> *)local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_20,(FWriteAccessScope *)&local_48);
    if (((int)local_10 != 0) && (FStack_18.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_18.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_18,0,0,0x10);
      local_10 = local_10 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_20.AccessDetector);
  }
  return;
}

// SetMinSliderValue @ 146a17930

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USpinBox::SetMinSliderValue(USpinBox *this,float param_1)

{
  SSpinBox<float> *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_20;
  ForAnyElementType FStack_18;
  ulonglong local_10;
  
  this->bOverride_MinSliderValue = 1;
  this->MinSliderValue = param_1;
  this_00 = (this->MySpinBox).Object;
  if (this_00 != (SSpinBox<float> *)0x0) {
    local_10 = 0;
    local_20.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_18.Data = (FScriptContainerElement *)0x0;
    local_30[4] = true;
    local_30[8] = true;
    local_30._0_4_ = param_1;
    SSpinBox<float>::SetMinSliderValue(this_00,(TAttribute<TOptional<float>_> *)local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_20,(FWriteAccessScope *)&local_48);
    if (((int)local_10 != 0) && (FStack_18.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_18.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_18,0,0,0x10);
      local_10 = local_10 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_20.AccessDetector);
  }
  return;
}

// SetMinValue @ 146a17a40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USpinBox::SetMinValue(USpinBox *this,float param_1)

{
  SSpinBox<float> *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_20;
  ForAnyElementType FStack_18;
  ulonglong local_10;
  
  this->bOverride_MinValue = 1;
  this->MinValue = param_1;
  this_00 = (this->MySpinBox).Object;
  if (this_00 != (SSpinBox<float> *)0x0) {
    local_10 = 0;
    local_20.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_18.Data = (FScriptContainerElement *)0x0;
    local_30[4] = true;
    local_30[8] = true;
    local_30._0_4_ = param_1;
    SSpinBox<float>::SetMinValue(this_00,(TAttribute<TOptional<float>_> *)local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_20,(FWriteAccessScope *)&local_48);
    if (((int)local_10 != 0) && (FStack_18.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_18.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_18,0,0,0x10);
      local_10 = local_10 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_20.AccessDetector);
  }
  return;
}

// SetSelectAllTextOnCommit @ 146a1a190

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USpinBox::SetSelectAllTextOnCommit(USpinBox *this,bool param_1)

{
  SSpinBox<float> *pSVar1;
  code *pcVar2;
  bool bVar3;
  FDestructionSentinel FStack_48;
  undefined1 auStack_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_28;
  ForAnyElementType FStack_20;
  ulonglong uStack_18;
  
  this->SelectAllTextOnCommit = param_1;
  pSVar1 = (this->MySpinBox).Object;
  if (pSVar1 == (SSpinBox<float> *)0x0) {
    return;
  }
  if ((pSVar1->EditableText).Object == (SEditableText *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  auStack_30[1] = true;
  uStack_18 = 0;
  TStack_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  auStack_30[0] = param_1;
  SEditableText::SetSelectAllTextOnCommit
            ((pSVar1->EditableText).Object,(TAttribute<bool> *)auStack_30);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&TStack_28,(FWriteAccessScope *)&FStack_48);
  if (((int)uStack_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    uStack_18 = uStack_18 & 0xffffffff00000000;
  }
  if (FStack_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_48.Accessor,&FStack_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_28.AccessDetector);
  return;
}

// SetSliderExponent @ 146a1b7f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USpinBox::SetSliderExponent(USpinBox *this,float param_1)

{
  SSpinBox<float> *this_00;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  ulonglong local_18;
  
  this->SliderExponent = param_1;
  this_00 = (this->MySpinBox).Object;
  if (this_00 != (SSpinBox<float> *)0x0) {
    local_18 = 0;
    local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_20.Data = (FScriptContainerElement *)0x0;
    local_30[4] = true;
    local_30._0_4_ = param_1;
    SSpinBox<float>::SetSliderExponent(this_00,(TAttribute<float> *)local_30);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_28,(FWriteAccessScope *)&local_48);
    if (((int)local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_20.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
      local_18 = local_18 & 0xffffffff00000000;
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
    if (FStack_20.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_20.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  }
  return;
}

// SetValue @ 146a1d3d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall USpinBox::SetValue(USpinBox *this,float param_1)

{
  SSpinBox<float> *this_00;
  FName local_58;
  int local_50;
  undefined4 uStack_4c;
  bool local_48;
  undefined1 local_38 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_30;
  ForAnyElementType FStack_28;
  ulonglong local_20;
  
  if (param_1 != this->Value) {
    this->Value = param_1;
    local_58 = FFieldNotificationClassDescriptor::Value.FieldName;
    local_50 = FFieldNotificationClassDescriptor::Value.BitNumber;
    UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,(FFieldId *)&local_58);
    this_00 = (this->MySpinBox).Object;
    if (this_00 != (SSpinBox<float> *)0x0) {
      local_38[4] = true;
      local_20 = 0;
      local_30.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_28.Data = (FScriptContainerElement *)0x0;
      local_38._0_4_ = param_1;
      SSpinBox<float>::SetValue(this_00,(TAttribute<float> *)local_38,false);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_30,(FWriteAccessScope *)&local_58);
      if (((int)local_20 != 0) && (FStack_28.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_28.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_28,0,0,0x10);
        local_20 = local_20 & 0xffffffff00000000;
      }
      if (local_48 == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_4c,local_50),
                   (FDestructionSentinel *)&local_58);
      }
      if (FStack_28.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_28.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_30.AccessDetector);
    }
  }
  return;
}

// SetWidgetStyle @ 146a1dfb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USpinBox::SetWidgetStyle(USpinBox *this,FSpinBoxStyle *param_1)

{
  SSpinBox<float> *this_00;
  
  FSpinBoxStyle::operator=(&this->WidgetStyle,param_1);
  this_00 = (this->MySpinBox).Object;
  if (this_00 != (SSpinBox<float> *)0x0) {
    SSpinBox<float>::InvalidateStyle(this_00);
    return;
  }
  return;
}

// StaticRegisterNativesUSpinBox @ 146a1f090

void __cdecl USpinBox::StaticRegisterNativesUSpinBox(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x17;
  local_18.DataPtr = Z_Construct_UClass_USpinBox_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 146a25f50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall USpinBox::SynchronizeProperties(USpinBox *this)

{
  SSpinBox<float> *pSVar1;
  code *pcVar2;
  bool bVar3;
  FSlateFontInfo *pFVar4;
  UObject *pUVar5;
  TAttribute<float> *pTVar6;
  FName local_res8;
  undefined1 local_248 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_240;
  ForAnyElementType FStack_238;
  ulonglong local_230;
  undefined1 local_228 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_220;
  ForAnyElementType FStack_218;
  ulonglong local_210;
  undefined1 local_208 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_200;
  ForAnyElementType FStack_1f8;
  ulonglong local_1f0;
  undefined1 local_1e8 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1d8;
  ForAnyElementType FStack_1d0;
  ulonglong local_1c8;
  undefined1 local_1c0 [16];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_1b0;
  ForAnyElementType FStack_1a8;
  ulonglong local_1a0;
  FLinearColor_u_0 local_198;
  undefined4 local_188;
  undefined1 local_184;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_180;
  ForAnyElementType FStack_178;
  ulonglong local_170;
  undefined1 local_168 [8];
  undefined1 local_160 [24];
  FDestructionSentinel local_148;
  FDestructionSentinel local_130;
  FDestructionSentinel local_118;
  FDestructionSentinel local_100;
  FDestructionSentinel local_e8;
  FDestructionSentinel local_d0;
  undefined1 local_b8 [8];
  undefined1 local_b0 [24];
  FReadAccessScope local_98;
  FSlateFontInfo local_80;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  pSVar1 = (this->MySpinBox).Object;
  if (pSVar1 != (SSpinBox<float> *)0x0) {
    SSpinBox<float>::SetDelta(pSVar1,this->Delta);
    if ((this->MySpinBox).Object == (SSpinBox<float> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_248._0_4_ = this->SliderExponent;
    local_240.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_238.Data = (FScriptContainerElement *)0x0;
    local_248[4] = true;
    local_230 = 0;
    SSpinBox<float>::SetSliderExponent((this->MySpinBox).Object,(TAttribute<float> *)local_248);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_240,(FWriteAccessScope *)&local_148);
    if (((int)local_230 != 0) && (FStack_238.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_238.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_238,0,0,0x10);
      local_230 = local_230 & 0xffffffff00000000;
    }
    if (local_148.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_148.Accessor,&local_148);
    }
    if (FStack_238.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_238.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_240.AccessDetector);
    if ((this->MySpinBox).Object == (SSpinBox<float> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_228._0_4_ = this->MinDesiredWidth;
    local_220.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_218.Data = (FScriptContainerElement *)0x0;
    local_228[4] = true;
    local_210 = 0;
    SSpinBox<float>::SetMinDesiredWidth((this->MySpinBox).Object,(TAttribute<float> *)local_228);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_220,(FWriteAccessScope *)&local_130);
    if (((int)local_210 != 0) && (FStack_218.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_218.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_218,0,0,0x10);
      local_210 = local_210 & 0xffffffff00000000;
    }
    if (local_130.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_130.Accessor,&local_130);
    }
    if (FStack_218.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_218.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_220.AccessDetector);
    if ((this->MySpinBox).Object == (SSpinBox<float> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_188._0_1_ = (this->ForegroundColor).ColorUseRule;
    local_188._1_1_ = (this->ForegroundColor).ColorTableId;
    local_188._2_2_ = *(undefined2 *)&(this->ForegroundColor).field_0x12;
    pSVar1 = (this->MySpinBox).Object;
    local_198._0_8_ = *(undefined8 *)&(this->ForegroundColor).SpecifiedColor.field0_0x0;
    local_198._8_8_ =
         *(undefined8 *)((longlong)&(this->ForegroundColor).SpecifiedColor.field0_0x0 + 8);
    local_184 = 1;
    local_170 = 0;
    local_180.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_178.Data = (FScriptContainerElement *)0x0;
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Assign((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)&pSVar1->_padding_,(SWidget *)pSVar1,(TAttribute<FSlateColor> *)&local_198._s_0,None
            );
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_180,(FWriteAccessScope *)&local_118);
    if (((int)local_170 != 0) && (FStack_178.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_178.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_178,0,0,0x10);
      local_170 = local_170 & 0xffffffff00000000;
    }
    if (local_118.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_118.Accessor,&local_118);
    }
    if (FStack_178.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_178.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_180.AccessDetector);
    if ((this->MySpinBox).Object == (SSpinBox<float> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_1e8._0_4_ = this->MinFractionalDigits;
    local_1c8 = 0;
    local_1e8[4] = true;
    local_1e8[8] = true;
    local_1d8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_1d0.Data = (FScriptContainerElement *)0x0;
    SSpinBox<float>::SetMinFractionalDigits
              ((this->MySpinBox).Object,(TAttribute<TOptional<int>_> *)local_1e8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_1d8,(FWriteAccessScope *)&local_100);
    if (((int)local_1c8 != 0) && (FStack_1d0.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_1d0.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1d0,0,0,0x10);
      local_1c8 = local_1c8 & 0xffffffff00000000;
    }
    if (local_100.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_100.Accessor,&local_100);
    }
    if (FStack_1d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1d0.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1d8.AccessDetector);
    if ((this->MySpinBox).Object == (SSpinBox<float> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_1c0._0_4_ = this->MaxFractionalDigits;
    local_1a0 = 0;
    local_1c0[4] = true;
    local_1c0[8] = true;
    local_1b0.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    FStack_1a8.Data = (FScriptContainerElement *)0x0;
    SSpinBox<float>::SetMaxFractionalDigits
              ((this->MySpinBox).Object,(TAttribute<TOptional<int>_> *)local_1c0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_1b0,(FWriteAccessScope *)&local_e8);
    if (((int)local_1a0 != 0) && (FStack_1a8.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_1a8.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1a8,0,0,0x10);
      local_1a0 = local_1a0 & 0xffffffff00000000;
    }
    if (local_e8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
    }
    if (FStack_1a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1a8.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_1b0.AccessDetector);
    if ((this->MySpinBox).Object == (SSpinBox<float> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    SSpinBox<float>::SetAlwaysUsesDeltaSnap((this->MySpinBox).Object,this->bAlwaysUsesDeltaSnap);
    if ((this->MySpinBox).Object == (SSpinBox<float> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    SSpinBox<float>::SetEnableSlider((this->MySpinBox).Object,this->bEnableSlider);
    if (this->bOverride_MinValue == 0) {
      ClearMinValue(this);
    }
    else {
      SetMinValue(this,this->MinValue);
    }
    if (this->bOverride_MaxValue == 0) {
      ClearMaxValue(this);
    }
    else {
      SetMaxValue(this,this->MaxValue);
    }
    if (this->bOverride_MinSliderValue == 0) {
      ClearMinSliderValue(this);
    }
    else {
      SetMinSliderValue(this,this->MinSliderValue);
    }
    if (this->bOverride_MaxSliderValue == 0) {
      ClearMaxSliderValue(this);
    }
    else {
      SetMaxSliderValue(this,this->MaxSliderValue);
    }
    if ((this->MySpinBox).Object == (SSpinBox<float> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    SSpinBox<float>::SetWidgetStyle((this->MySpinBox).Object,&this->WidgetStyle);
    if ((this->MySpinBox).Object == (SSpinBox<float> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    SSpinBox<float>::InvalidateStyle((this->MySpinBox).Object);
    if ((this->MySpinBox).Object == (SSpinBox<float> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    SSpinBox<float>::SetTextJustification
              ((this->MySpinBox).Object,(uint)(this->Justification).Value);
    if ((this->MySpinBox).Object == (SSpinBox<float> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pSVar1 = (this->MySpinBox).Object;
    pFVar4 = FSlateFontInfo::FSlateFontInfo(&local_80,&this->Font);
    SSpinBox<float>::SetTextBlockFont(pSVar1,pFVar4);
    if ((this->MySpinBox).Object == (SSpinBox<float> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    SSpinBox<float>::SetTextClearKeyboardFocusOnCommit
              ((this->MySpinBox).Object,this->ClearKeyboardFocusOnCommit);
    if ((this->MySpinBox).Object == (SSpinBox<float> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    SSpinBox<float>::SetTextSelectAllTextOnCommit
              ((this->MySpinBox).Object,this->ClearKeyboardFocusOnCommit);
    bVar3 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                      ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->ValueDelegate);
    bVar3 = !bVar3;
    if (bVar3) {
      pTVar6 = (TAttribute<float> *)local_208;
      local_208._0_4_ = this->Value;
      local_200.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_1f8.Data = (FScriptContainerElement *)0x0;
      local_208[4] = true;
      local_1f0 = 0;
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ValueDelegate,
                 &local_98);
      local_res8.ComparisonIndex.Value = *(uint *)&(this->ValueDelegate).field_0x10;
      local_res8.Number = *(uint *)&(this->ValueDelegate).field_0x14;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_98);
      pUVar5 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                         ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->ValueDelegate);
      pTVar6 = TAttribute<float>::Create<UObject>((TAttribute<float> *)local_b8,pUVar5,&local_res8);
    }
    local_168._0_4_ = pTVar6->Value;
    local_168[4] = pTVar6->bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_160,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&pTVar6->Getter);
    if (bVar3) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_200,(FWriteAccessScope *)&local_d0);
      if (((int)local_1f0 != 0) && (FStack_1f8.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_1f8.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1f8,0,0,0x10);
        local_1f0 = local_1f0 & 0xffffffff00000000;
      }
      if (local_d0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
      }
      if (FStack_1f8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_1f8.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_200.AccessDetector);
    }
    if (!bVar3) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b0);
      if ((void *)local_b0._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_b0._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_b0);
    }
    if ((this->MySpinBox).Object == (SSpinBox<float> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    SSpinBox<float>::SetValue((this->MySpinBox).Object,(TAttribute<float> *)local_168,false);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_160);
    if ((void *)local_160._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_160._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_160);
  }
  return;
}

// execClearMaxSliderValue @ 146a33390

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl USpinBox::execClearMaxSliderValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ClearMaxSliderValue((USpinBox *)param_1);
  return;
}

// execClearMaxValue @ 146a333b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl USpinBox::execClearMaxValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ClearMaxValue((USpinBox *)param_1);
  return;
}

// execClearMinSliderValue @ 146a33730

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl USpinBox::execClearMinSliderValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ClearMinSliderValue((USpinBox *)param_1);
  return;
}

// execClearMinValue @ 146a33750

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl USpinBox::execClearMinValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ClearMinValue((USpinBox *)param_1);
  return;
}

// execGetAlwaysUsesDeltaSnap @ 146a344f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl USpinBox::execGetAlwaysUsesDeltaSnap(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(SSpinBox<float> **)&param_1[0x33].field_0x8 != (SSpinBox<float> *)0x0) {
    bVar1 = SSpinBox<float>::GetAlwaysUsesDeltaSnap(*(SSpinBox<float> **)&param_1[0x33].field_0x8);
    *(bool *)param_3 = bVar1;
    return;
  }
  *(undefined1 *)param_3 = param_1[0x2c].field_0x18;
  return;
}

// execGetDelta @ 146a34cf0

void __cdecl USpinBox::execGetDelta(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x2c].field_0x1c;
  return;
}

// execGetMaxFractionalDigits @ 146a357e0

void __cdecl USpinBox::execGetMaxFractionalDigits(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x2c].field_0x14;
  return;
}

// execGetMaxSliderValue @ 146a35810

void __cdecl USpinBox::execGetMaxSliderValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  uVar1 = __real_7f7fffff;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((param_1[0x32].field_0x18 & 8) != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x33);
  }
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execGetMaxValue @ 146a35850

void __cdecl USpinBox::execGetMaxValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  uVar1 = __real_7f7fffff;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((param_1[0x32].field_0x18 & 2) != 0) {
    uVar1 = *(undefined4 *)&param_1[0x32].field_0x20;
  }
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execGetMinFractionalDigits @ 146a358f0

void __cdecl USpinBox::execGetMinFractionalDigits(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0x2c].field_0x10;
  return;
}

// execGetMinSliderValue @ 146a35920

void __cdecl USpinBox::execGetMinSliderValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  uVar1 = __real_00800000;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((param_1[0x32].field_0x18 & 4) != 0) {
    uVar1 = *(undefined4 *)&param_1[0x32].field_0x24;
  }
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execGetMinValue @ 146a35960

void __cdecl USpinBox::execGetMinValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  uVar1 = __real_ff7fffff;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((param_1[0x32].field_0x18 & 1) != 0) {
    uVar1 = *(undefined4 *)&param_1[0x32].field_0x1c;
  }
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execGetValue @ 146a366b0

void __cdecl USpinBox::execGetValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[10].field_0x20;
  return;
}

// execSetAlwaysUsesDeltaSnap @ 146a39d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl USpinBox::execSetAlwaysUsesDeltaSnap(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SSpinBox<float> *this;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SSpinBox<float> **)&param_1[0x33].field_0x8;
  param_1[0x2c].field_0x18 = local_res8[0] != 0;
  if (this != (SSpinBox<float> *)0x0) {
    SSpinBox<float>::SetAlwaysUsesDeltaSnap(this,local_res8[0] != 0);
  }
  return;
}

// execSetDelta @ 146a3bec0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl USpinBox::execSetDelta(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SSpinBox<float> *this;
  float local_res8 [2];
  
  local_res8[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(SSpinBox<float> **)&param_1[0x33].field_0x8;
  *(float *)&param_1[0x2c].field_0x1c = local_res8[0];
  if (this != (SSpinBox<float> *)0x0) {
    SSpinBox<float>::SetDelta(this,local_res8[0]);
  }
  return;
}

// execSetForegroundColor @ 146a3d240

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl USpinBox::execSetForegroundColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  FLinearColor_u_0 local_28;
  uint local_18;
  
  local_48 = ___xmm_3f8000003f800000000000003f800000;
  uStack_40 = _UNK_15090c6d8;
  local_38 = local_38 & 0xffffff00;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_28._0_8_ = local_48;
  local_28._8_8_ = uStack_40;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_18 = local_38;
  SetForegroundColor((USpinBox *)param_1,(FSlateColor *)&local_28._s_0);
  return;
}

// execSetMaxFractionalDigits @ 146a3eff0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl USpinBox::execSetMaxFractionalDigits(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetMaxFractionalDigits((USpinBox *)param_1,local_res10[0]);
  return;
}

// execSetMaxSliderValue @ 146a3f080

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl USpinBox::execSetMaxSliderValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetMaxSliderValue((USpinBox *)param_1,local_res10[0]);
  return;
}

// execSetMaxValue @ 146a3f1b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl USpinBox::execSetMaxValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetMaxValue((USpinBox *)param_1,local_res10[0]);
  return;
}

// execSetMinFractionalDigits @ 146a3f780

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl USpinBox::execSetMinFractionalDigits(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetMinFractionalDigits((USpinBox *)param_1,local_res10[0]);
  return;
}

// execSetMinSliderValue @ 146a3f810

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl USpinBox::execSetMinSliderValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetMinSliderValue((USpinBox *)param_1,local_res10[0]);
  return;
}

// execSetMinValue @ 146a3f940

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl USpinBox::execSetMinValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetMinValue((USpinBox *)param_1,local_res10[0]);
  return;
}

// execSetValue @ 146a440f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl USpinBox::execSetValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetValue((USpinBox *)param_1,local_res10[0]);
  return;
}

