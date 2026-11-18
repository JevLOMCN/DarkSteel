// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 5

// Construct @ 142861a10

void __thiscall
SRichTextHyperlink::Construct
          (SRichTextHyperlink *this,FArguments *param_1,
          TSharedRef<FSlateHyperlinkRun::FWidgetViewModel,1> *param_2)

{
  bool bVar1;
  FArguments *pFVar2;
  undefined1 local_res8 [8];
  ETextShapingMethod local_3c8 [2];
  ETextFlowDirection local_3c6 [6];
  FText local_3c0;
  bool local_3b0;
  undefined1 local_3a8 [8];
  ForAnyElementType FStack_3a0;
  int local_398;
  FWidgetViewModel *local_390;
  FSharedReferencer<1> local_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined1 local_370;
  undefined1 local_368 [8];
  ForAnyElementType FStack_360;
  ulonglong local_358;
  FDestructionSentinel local_350;
  undefined1 local_338 [528];
  undefined1 local_128 [72];
  undefined1 local_e0 [24];
  undefined1 local_c8 [56];
  undefined1 local_90 [40];
  undefined1 local_68 [24];
  TRefCountPtr<ITextData> local_50;
  undefined1 local_38 [32];
  
  local_388.ReferenceController = (param_2->SharedReferenceCount).ReferenceController;
  local_390 = param_2->Object;
  if (local_388.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_388.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_388.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->ViewModel != (TSharedPtr<FSlateHyperlinkRun::FWidgetViewModel,1> *)&local_390) {
    (this->ViewModel).Object = local_390;
    local_390 = (FWidgetViewModel *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ViewModel).SharedReferenceCount,&local_388);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_388.ReferenceController);
  pFVar2 = SHyperlink::FArguments::FArguments((FArguments *)local_338);
  local_3c0.TextData.Reference = (param_1->_Text).Value.TextData.Reference;
  if (local_3c0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3c0.TextData.Reference + 8))
              (local_3c0.TextData.Reference,local_res8);
  }
  local_3c0.Flags = (param_1->_Text).Value.Flags;
  local_3b0 = (param_1->_Text).bIsSet;
  local_3a8 = (undefined1  [8])0x0;
  FStack_3a0.Data = (FScriptContainerElement *)0x0;
  local_398 = 0;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_3a8,
             &(param_1->_Text).Getter);
  FText::operator=(&(pFVar2->_Text).Value,&local_3c0);
  (pFVar2->_Text).bIsSet = local_3b0;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar2->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_3a8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3a8,
             (FWriteAccessScope *)&local_350);
  if ((local_398 != 0) && (FStack_3a0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_3a0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_3a0,0,0,0x10);
    local_398 = 0;
  }
  if (local_350.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_350.Accessor,&local_350);
  }
  if (FStack_3a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3a0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3a8);
  if (local_3c0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_3c0.TextData.Reference + 0x10))();
  }
  pFVar2->_Style = param_1->_Style;
  local_370 = 1;
  local_358 = 0;
  local_380 = 0;
  uStack_378 = 0;
  local_368 = (undefined1  [8])0x0;
  FStack_360.Data = (FScriptContainerElement *)0x0;
  (pFVar2->_Padding).Value.Left = 0.0;
  (pFVar2->_Padding).Value.Top = 0.0;
  (pFVar2->_Padding).Value.Right = 0.0;
  (pFVar2->_Padding).Value.Bottom = 0.0;
  (pFVar2->_Padding).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar2->_Padding).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_368);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_368,
             (FWriteAccessScope *)&local_350);
  if (((int)local_358 != 0) && (FStack_360.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_360.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_360,0,0,0x10);
    local_358 = local_358 & 0xffffffff00000000;
  }
  if (local_350.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_350.Accessor,&local_350);
  }
  if (FStack_360.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_360.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_368);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&pFVar2->_OnNavigate,&param_1->_OnNavigate);
  bVar1 = (param_1->_TextShapingMethod).bIsSet;
  if (bVar1 != false) {
    local_3c8[0] = (param_1->_TextShapingMethod).TypedValue;
  }
  if ((TOptional<ETextShapingMethod> *)local_3c8 != &pFVar2->_TextShapingMethod) {
    if (bVar1 == false) {
      if ((pFVar2->_TextShapingMethod).bIsSet != false) {
        (pFVar2->_TextShapingMethod).bIsSet = false;
      }
    }
    else {
      (pFVar2->_TextShapingMethod).TypedValue = local_3c8[0];
      (pFVar2->_TextShapingMethod).bIsSet = true;
    }
  }
  bVar1 = (param_1->_TextFlowDirection).bIsSet;
  if (bVar1 != false) {
    local_3c6[0] = (param_1->_TextFlowDirection).TypedValue;
  }
  if ((TOptional<ETextFlowDirection> *)local_3c6 != &pFVar2->_TextFlowDirection) {
    if (bVar1 == false) {
      if ((pFVar2->_TextFlowDirection).bIsSet != false) {
        (pFVar2->_TextFlowDirection).bIsSet = false;
      }
    }
    else {
      (pFVar2->_TextFlowDirection).TypedValue = local_3c6[0];
      (pFVar2->_TextFlowDirection).bIsSet = true;
    }
  }
  SHyperlink::Construct((SHyperlink *)this,pFVar2);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
  if ((void *)local_38._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_38._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_38);
  if (local_50.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_50.Reference + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_68);
  if ((void *)local_68._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_68._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_68);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_90);
  if ((void *)local_90._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_90._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_90);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_c8);
  if ((void *)local_c8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_c8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c8);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_e0);
  if ((void *)local_e0._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_e0._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_e0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_128);
  if ((void *)local_128._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_128._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_128);
  if ((ITextData *)local_338._504_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_338._504_8_ + 0x10))();
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_338);
  return;
}

// OnMouseButtonDown @ 142888840

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SRichTextHyperlink::OnMouseButtonDown
          (SRichTextHyperlink *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FWidgetViewModel *pFVar1;
  code *pcVar2;
  bool bVar3;
  FReply *pFVar4;
  
  SButton::OnMouseButtonDown((SButton *)this,__return_storage_ptr__,param_1,param_2);
  if ((this->ViewModel).Object == (FWidgetViewModel *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FReply *)(*pcVar2)();
      return pFVar4;
    }
  }
  pFVar1 = (this->ViewModel).Object;
  if (((this->_padding_ & 0x200000000) == 0) && (*(char *)((longlong)&this->_padding_ + 4) == '\0'))
  {
    pFVar1->bIsPressed = false;
    return __return_storage_ptr__;
  }
  pFVar1->bIsPressed = true;
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 1428896b0

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SRichTextHyperlink::OnMouseButtonUp
          (SRichTextHyperlink *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  FWidgetViewModel *pFVar1;
  code *pcVar2;
  bool bVar3;
  FReply *pFVar4;
  
  SButton::OnMouseButtonUp((SButton *)this,__return_storage_ptr__,param_1,param_2);
  if ((this->ViewModel).Object == (FWidgetViewModel *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FReply *)(*pcVar2)();
      return pFVar4;
    }
  }
  pFVar1 = (this->ViewModel).Object;
  if (((this->_padding_ & 0x200000000) == 0) && (*(char *)((longlong)&this->_padding_ + 4) == '\0'))
  {
    pFVar1->bIsPressed = false;
    return __return_storage_ptr__;
  }
  pFVar1->bIsPressed = true;
  return __return_storage_ptr__;
}

// OnMouseEnter @ 142889830

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SRichTextHyperlink::OnMouseEnter(SRichTextHyperlink *this,FGeometry *param_1,FPointerEvent *param_2)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  FSlateApplication *this_00;
  FReadAccessScope local_28;
  
  cVar1 = *(char *)((longlong)&this->_padding_ + 3);
  SWidget::OnMouseEnter((SWidget *)this,param_1,param_2);
  if ((cVar1 == '\0') && (*(char *)((longlong)&this->_padding_ + 3) != '\0')) {
    this_00 = FSlateApplication::Get();
    FSlateApplication::PlaySound(this_00,(FSlateSound *)&this->_padding_,0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,&local_28)
    ;
    if (((int)this->_padding_ != 0) && ((longlong *)this->_padding_ != (longlong *)0x0)) {
      (**(code **)(*(longlong *)this->_padding_ + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  if ((this->ViewModel).Object == (FWidgetViewModel *)0x0) {
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
  ((this->ViewModel).Object)->bIsHovered = *(bool *)((longlong)&this->_padding_ + 3);
  return;
}

// OnMouseLeave @ 142889a00

void __thiscall SRichTextHyperlink::OnMouseLeave(SRichTextHyperlink *this,FPointerEvent *param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  FReadAccessScope local_28;
  
  cVar1 = *(char *)((longlong)&this->_padding_ + 3);
  SWidget::OnMouseLeave((SWidget *)this,param_1);
  cVar2 = (char)this->_padding_;
  if (cVar2 != '\x01') {
    if (param_1->bIsTouchEvent != false) {
      cVar3 = *(char *)((longlong)&this->_padding_ + 1);
      if ((cVar3 == '\0') || (cVar3 == '\x01')) goto LAB_142889a56;
      if (cVar3 == '\x02') goto LAB_142889a4a;
    }
    if (cVar2 != '\x03') goto LAB_142889a56;
  }
LAB_142889a4a:
  (**(code **)(this->_padding_ + 600))(this);
LAB_142889a56:
  if ((cVar1 != '\0') && (*(char *)((longlong)&this->_padding_ + 3) == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,&local_28)
    ;
    if (((int)this->_padding_ != 0) && ((longlong *)this->_padding_ != (longlong *)0x0)) {
      (**(code **)(*(longlong *)this->_padding_ + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
  }
  if ((this->ViewModel).Object == (FWidgetViewModel *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  ((this->ViewModel).Object)->bIsHovered = *(bool *)((longlong)&this->_padding_ + 3);
  return;
}

