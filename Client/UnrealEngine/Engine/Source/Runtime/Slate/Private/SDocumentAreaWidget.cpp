// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// MakeDocumentAreaWidget @ 142755c40

TSharedRef<SWidget,1> * __cdecl
SDocumentAreaWidget::MakeDocumentAreaWidget(TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FArguments *pFVar3;
  FArguments *pFVar4;
  FText *pFVar5;
  ISlateStyle *pIVar6;
  FTextBlockStyle *pFVar7;
  TSharedRef<STextBlock,1> *pTVar8;
  TSharedRef<SBorder,1> *pTVar9;
  T0RequiredArgs local_res8 [8];
  T0RequiredArgs local_res10 [8];
  FLLMScope local_res18 [2];
  FName local_res20;
  FName local_9f8;
  TReferenceControllerBase<1> *pTStack_9f0;
  bool local_9e8;
  FName local_9e0;
  FText local_9d8;
  bool local_9c8;
  undefined1 local_9c0 [8];
  ForAnyElementType FStack_9b8;
  ulonglong local_9b0;
  TSharedRef<SBorder,1> local_9a8;
  TSharedRef<STextBlock,1> local_998;
  FText local_988;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_978;
  FArguments local_960;
  FArguments local_580;
  
  pFVar3 = SBorder::FArguments::FArguments(&local_960);
  pFVar3->_HAlign = HAlign_Center;
  pFVar3->_VAlign = VAlign_Center;
  pFVar4 = STextBlock::FArguments::FArguments(&local_580);
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_988,L"DockTabStack",L"DocumentArea",L"Document Area");
  FText::FText(&local_9d8,pFVar5);
  local_9c8 = true;
  local_9b0 = 0;
  local_9c0 = (undefined1  [8])0x0;
  FStack_9b8.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar4->_Text).Value,&local_9d8);
  (pFVar4->_Text).bIsSet = local_9c8;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar4->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_9c0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_9c0,
             (FWriteAccessScope *)&local_9f8);
  if (((int)local_9b0 != 0) && (FStack_9b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_9b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_9b8,0,0,0x10);
    local_9b0 = local_9b0 & 0xffffffff00000000;
  }
  if (local_9e8 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)pTStack_9f0,(FDestructionSentinel *)&local_9f8);
  }
  if (FStack_9b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_9b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_9c0);
  if (local_9d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_9d8.TextData.Reference + 0x10))();
  }
  ::FName::FName(&local_res20,"EmbossedText");
  pIVar6 = FAppStyle::Get();
  pFVar7 = (FTextBlockStyle *)
           (**(code **)((longlong)*pIVar6 + 0xa0))(pIVar6,FTextBlockStyle::TypeName,local_res20,0,1)
  ;
  if (pFVar7 == (FTextBlockStyle *)0x0) {
    pFVar7 = FTextBlockStyle::GetDefault();
  }
  pFVar4->_TextStyle = pFVar7;
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_9e0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_9f8,&local_9e0,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_978,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingTabStack.cpp"
             ,0x28,local_res8);
  FMemScope::~FMemScope((FMemScope *)&local_9f8);
  FLLMScope::~FLLMScope(local_res18);
  pTVar8 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_978,&local_998,pFVar4);
  pTVar1 = (pTVar8->SharedReferenceCount).ReferenceController;
  local_9f8 = (FName)pTVar8->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = (pFVar3->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar3->_Content).Widget.Object = (SWidget *)local_9f8;
  (pFVar3->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar1;
  pTStack_9f0 = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_9f8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_9e0,&local_9f8,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            ((TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *)&local_9f8,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Docking\\SDockingTabStack.cpp"
             ,0x24,local_res10);
  FMemScope::~FMemScope((FMemScope *)&local_9e0);
  FLLMScope::~FLLMScope(local_res18);
  pTVar9 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                     ((TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> *)&local_9f8,&local_9a8,
                      pFVar3);
  __return_storage_ptr__->Object = (SWidget *)pTVar9->Object;
  pTVar2 = (pTVar9->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_9a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_9f0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_998.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_978._Widget.SharedReferenceCount.ReferenceController);
  if (local_988.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_988.TextData.Reference + 0x10))();
  }
  STextBlock::FArguments::~FArguments(&local_580);
  SBorder::FArguments::~FArguments(&local_960);
  return __return_storage_ptr__;
}

