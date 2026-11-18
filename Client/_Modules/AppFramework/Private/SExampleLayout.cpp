// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 5

// <lambda_2> @ 142f2aa80

<lambda_2> * __thiscall
`SExampleLayout::Construct'::__l2::<lambda_2>::<lambda_2>(void *this,<lambda_2> *param_1)

{
  *(int **)this = (param_1->SharedSizeValue).Object;
  *(TReferenceControllerBase<1> **)((longlong)this + 8) =
       (param_1->SharedSizeValue).SharedReferenceCount.ReferenceController;
  (param_1->SharedSizeValue).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->SharedSizeValue).Object = (int *)0x0;
  return this;
}

// <lambda_3> @ 142f2aab0

<lambda_3> * __thiscall
`SExampleLayout::Construct'::__l2::<lambda_3>::<lambda_3>(void *this,TSharedPtr<int,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  *(int **)this = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)((longlong)this + 8) = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// operator() @ 142f48d40

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
`SExampleLayout::Construct'::__l2::<lambda_2>::operator()(void *this,FText *__return_storage_ptr__)

{
  int iVar1;
  FText *pFVar2;
  FTextFormat *pFVar3;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_68;
  FTextFormat local_58;
  FText local_48;
  FTextFormat local_38;
  FFormatArgumentValue local_28;
  
  iVar1 = **(int **)this;
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"ExampleLayoutTest",L"ExampleLayout-FillContent2",
                      L"Allow grow and Shrink\n.FillContentWidth({0})");
  pFVar3 = FTextFormat::FTextFormat(&local_38,pFVar2,Default);
  local_68.ArrayNum = 1;
  local_28.Type = Int;
  local_28.TextValue.field0_0x0.TypedValue.TextData.Reference =
       (TRefCountPtr<ITextData>)(ITextData *)0x0;
  local_28.TextValue.field0_0x0.TypedValue.Flags = 0;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)iVar1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,1,0,&local_68.AllocatorInstance,1,&local_68.ArrayMax);
  ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
            (local_68.AllocatorInstance.Data,&local_28,1);
  local_58.TextFormatData.Object = (pFVar3->TextFormatData).Object;
  local_58.TextFormatData.SharedReferenceCount.ReferenceController =
       (pFVar3->TextFormatData).SharedReferenceCount.ReferenceController;
  if (local_58.TextFormatData.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.TextFormatData.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  FText::Format(__return_storage_ptr__,&local_58,&local_68);
  DestructItems<FFormatArgumentValue,int>
            ((FFormatArgumentValue *)local_68.AllocatorInstance.Data,local_68.ArrayNum);
  if ((FFormatArgumentValue *)local_68.AllocatorInstance.Data != (FFormatArgumentValue *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  if (local_28.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_28.TextValue.field0_0x0.TypedValue.TextData.Reference
                + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar3->TextFormatData).SharedReferenceCount.ReferenceController);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator() @ 142f4aa60

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
`SExampleLayout::Construct'::__l2::<lambda_3>::operator()(void *this,FReply *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FReply *pFVar4;
  
  if (*(longlong *)this == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FReply *)(*pcVar1)();
      return pFVar4;
    }
  }
  uVar3 = **(uint **)this + 1 & 0x80000003;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
  }
  **(uint **)this = uVar3;
  FReply::FReply(__return_storage_ptr__,true);
  return __return_storage_ptr__;
}

// OnVisualizeTooltip @ 142ff9260

bool __thiscall
SExampleLayout::OnVisualizeTooltip(SExampleLayout *this,TSharedPtr<SWidget,1> *param_1)

{
  byte *pbVar1;
  SBorder *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  SWidget *pSVar4;
  code *pcVar5;
  SWeakWidget *pSVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  byte bVar11;
  FArguments *pFVar12;
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  FName local_res20;
  TSlateDecl<SWeakWidget,RequiredArgs::T0RequiredArgs> local_288;
  FMemScope local_270;
  SWeakWidget *local_268;
  TReferenceControllerBase<1> *local_260;
  SWidget *local_258;
  TReferenceControllerBase<1> *local_250;
  SWidget *local_248;
  TReferenceControllerBase<1> *pTStack_240;
  FArguments local_238;
  
  pSVar2 = (this->TooltipArea).Object;
  if (param_1->Object == (SWidget *)0x0) {
    if (pSVar2 == (SBorder *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
    }
    pSVar2 = (this->TooltipArea).Object;
    pcVar5 = *(code **)(pSVar2->_padding_ + 0x248);
    local_258 = SNullWidget::NullWidget.Object;
    local_250 = SNullWidget::NullWidget.SharedReferenceCount.ReferenceController;
    if (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(SNullWidget::NullWidget.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    (*pcVar5)(pSVar2,&local_258);
    return true;
  }
  if (pSVar2 == (SBorder *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
  }
  pSVar2 = (this->TooltipArea).Object;
  pcVar5 = *(code **)(pSVar2->_padding_ + 0x248);
  pFVar12 = SWeakWidget::FArguments::FArguments(&local_238);
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  pSVar4 = param_1->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_248 = (pFVar12->_PossiblyNullContent).Object;
  pTStack_240 = (pFVar12->_PossiblyNullContent).SharedReferenceCount.ReferenceController;
  (pFVar12->_PossiblyNullContent).Object = pSVar4;
  (pFVar12->_PossiblyNullContent).SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_240);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_270,&local_res20,true);
  TSlateDecl<SWeakWidget,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SWeakWidget,RequiredArgs::T0RequiredArgs>
            (&local_288,"SWeakWidget",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AppFramework\\Private\\Framework\\Testing\\SLayoutExample.cpp"
             ,0x1a5,local_res10);
  FMemScope::~FMemScope(&local_270);
  FLLMScope::~FLLMScope(local_res18);
  pSVar6 = local_288._Widget.Object;
  if (local_288._Widget.Object == (SWeakWidget *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_288._Widget.Object,(FSlateBaseNamedArgs *)pFVar12);
  SWeakWidget::Construct(local_288._Widget.Object,pFVar12);
  if (local_288._Widget.Object == (SWeakWidget *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
  }
  if (((local_288._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar10 = (**(code **)((local_288._Widget.Object)->_padding_ + 0x228))(local_288._Widget.Object);
    bVar11 = 0;
    if (cVar10 == '\0') goto LAB_142ff9436;
  }
  bVar11 = 0x20;
LAB_142ff9436:
  *(byte *)&(local_288._Widget.Object)->_padding_ =
       (byte)(local_288._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_288._Widget.Object)->_padding_ =
       (byte)(local_288._Widget.Object)->_padding_ | bVar11;
  if (local_288._Widget.Object == (SWeakWidget *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_288._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_288._Widget.Object == (SWeakWidget *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
  }
  FVar7.ReferenceController = local_288._Widget.SharedReferenceCount.ReferenceController;
  local_288._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_288._Widget.Object = (SWeakWidget *)0x0;
  if (pSVar6 == (SWeakWidget *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
  }
  local_268 = pSVar6;
  local_260 = FVar7.ReferenceController;
  if (FVar7.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar7.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar7.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar5)(pSVar2,&local_268);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar7.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_238._PossiblyNullContent.SharedReferenceCount.ReferenceController);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_238);
  return true;
}

