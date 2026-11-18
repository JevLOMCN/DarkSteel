// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 2

// FMenuSeparatorBlock @ 1427b3430

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

FMenuSeparatorBlock * __thiscall
FMenuSeparatorBlock::FMenuSeparatorBlock(FMenuSeparatorBlock *this,FName *param_1,bool param_2)

{
  TSharedPtr<FUICommandList_const_,1> local_28;
  TSharedPtr<FUICommandInfo_const_,1> local_18;
  
  local_28.Object = (FUICommandList *)0x0;
  local_28.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_18.Object = (FUICommandInfo *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FMultiBlock::FMultiBlock((FMultiBlock *)this,&local_18,&local_28,*param_1,Separator,param_2);
  this->field_0xbc = 0;
  *(undefined ***)this = &___7FMenuSeparatorBlock__6B_;
  return this;
}

// ConstructWidget @ 1427f2fb0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<IMultiBlockBaseWidget,1> * __thiscall
FMenuSeparatorBlock::ConstructWidget
          (FMenuSeparatorBlock *this,TSharedRef<IMultiBlockBaseWidget,1> *__return_storage_ptr__)

{
  code *pcVar1;
  FSharedReferencer<1> FVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  FSlateBaseNamedArgs *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedRef<IMultiBlockBaseWidget,1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined1 local_res10 [8];
  FLLMScope local_res18 [2];
  FName local_res20;
  FSharedReferencer<1> local_260;
  undefined1 *local_258;
  FMemScope local_250;
  undefined8 local_248;
  FSharedReferencer<1> local_240;
  TSharedRef<SMenuSeparatorBlock,1> local_238;
  FSlateBaseNamedArgs local_228;
  
  pFVar6 = (FSlateBaseNamedArgs *)
           SMenuSeparatorBlock::FArguments::FArguments((FArguments *)&local_228);
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_250,&local_res20,true);
  local_258 = local_res10;
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  local_260.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar7 = ::operator_new(0x2f8);
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VSMenuSeparatorBlock___00_SharedPointerInternals__6B_;
    memset(pTVar7 + 1,0,0x2e8);
    SMultiBlockBaseWidget::SMultiBlockBaseWidget((SMultiBlockBaseWidget *)(pTVar7 + 1));
    pTVar7[1]._padding_ = (longlong)&SMenuSeparatorBlock::_vftable__for__IMultiBlockBaseWidget__;
    *(undefined ***)&pTVar7[1].SharedReferenceCount =
         &SMenuSeparatorBlock::_vftable__for__SCompoundWidget__;
    pTVar9 = pTVar7;
  }
  TSharedRef<SMenuSeparatorBlock,1>::TSharedRef<SMenuSeparatorBlock,1>
            (&local_238,(SMenuSeparatorBlock *)(pTVar9 + 1),pTVar9);
  local_240.ReferenceController = local_238.SharedReferenceCount.ReferenceController;
  if (local_238.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_238.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_238.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_248 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_260,&local_240);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_240.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_238.SharedReferenceCount.ReferenceController);
  if ((local_238.Object == (SMenuSeparatorBlock *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar8 = (TSharedRef<IMultiBlockBaseWidget,1> *)(*pcVar1)();
    return pTVar8;
  }
  SWidget::SetDebugInfo
            ((SWidget *)&(local_238.Object)->field_0x8,"SMenuSeparatorBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\SMenuSeparatorBlock.cpp"
             ,0x19,0x2e8);
  FMemScope::~FMemScope(&local_250);
  FLLMScope::~FLLMScope(local_res18);
  if ((local_238.Object == (SMenuSeparatorBlock *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar8 = (TSharedRef<IMultiBlockBaseWidget,1> *)(*pcVar1)();
    return pTVar8;
  }
  SWidget::SWidgetConstruct((SWidget *)&(local_238.Object)->field_0x8,pFVar6);
  if ((local_238.Object == (SMenuSeparatorBlock *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar8 = (TSharedRef<IMultiBlockBaseWidget,1> *)(*pcVar1)();
    return pTVar8;
  }
  if (((local_238.Object)->field_0x38 & 0x10) == 0) {
    cVar4 = (**(code **)(*(longlong *)&(local_238.Object)->field_0x8 + 0x228))
                      (&(local_238.Object)->field_0x8);
    bVar5 = 0;
    if (cVar4 == '\0') goto LAB_1427f31dd;
  }
  bVar5 = 0x20;
LAB_1427f31dd:
  (local_238.Object)->field_0x38 = (local_238.Object)->field_0x38 & 0xdf;
  (local_238.Object)->field_0x38 = (local_238.Object)->field_0x38 | bVar5;
  if ((local_238.Object == (SMenuSeparatorBlock *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar8 = (TSharedRef<IMultiBlockBaseWidget,1> *)(*pcVar1)();
    return pTVar8;
  }
  (local_238.Object)->field_0x39 = (local_238.Object)->field_0x39 | 4;
  if ((local_238.Object == (SMenuSeparatorBlock *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar8 = (TSharedRef<IMultiBlockBaseWidget,1> *)(*pcVar1)();
    return pTVar8;
  }
  FVar2.ReferenceController = local_260.ReferenceController;
  local_260.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((local_238.Object == (SMenuSeparatorBlock *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar8 = (TSharedRef<IMultiBlockBaseWidget,1> *)(*pcVar1)();
    return pTVar8;
  }
  __return_storage_ptr__->Object = (IMultiBlockBaseWidget *)local_238.Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar2.ReferenceController;
  if (FVar2.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar2.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar2.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar2.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_228);
  return __return_storage_ptr__;
}

