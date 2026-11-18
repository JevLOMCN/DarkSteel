// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MessageLog
// Functions: 12

// FMessageLogModule @ 142bc8740

FMessageLogModule * __thiscall FMessageLogModule::FMessageLogModule(FMessageLogModule *this)

{
  this->_padding_ = (longlong)&___7FMessageLogModule__6B_;
  (this->MessageLogViewModel).Object = (FMessageLogViewModel *)0x0;
  (this->MessageLogViewModel).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bCanDisplayMessageLog = false;
  (this->ModulesChangedHandle).ID = 0;
  return this;
}

// CreateLogListing @ 142bea5d0

TSharedRef<IMessageLogListing,1> * __thiscall
FMessageLogModule::CreateLogListing
          (FMessageLogModule *this,TSharedRef<IMessageLogListing,1> *__return_storage_ptr__,
          FName *param_1,FMessageLogInitializationOptions *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FMessageLogListingModel *this_00;
  FMessageLogListingModel *pFVar2;
  FText *pFVar3;
  TSharedRef<FMessageLogListingViewModel,1> *pTVar4;
  FLLMScope local_res10 [2];
  TSharedRef<FMessageLogListingViewModel,1> local_48;
  FMemScope local_38;
  TSharedRef<FMessageLogListingModel,1> local_30;
  FText local_20;
  
  FLLMScope::FLLMScope
            (local_res10,LLMTagDeclaration_EngineMisc_MessageLog.UniqueName,false,None,Default,true)
  ;
  local_48.Object =
       (FMessageLogListingViewModel *)LLMTagDeclaration_EngineMisc_MessageLog.UniqueName;
  FMemScope::FMemScope(&local_38,(FName *)&local_48,true);
  this_00 = ::operator_new(0x88);
  pFVar2 = (FMessageLogListingModel *)0x0;
  if (this_00 != (FMessageLogListingModel *)0x0) {
    pFVar2 = FMessageLogListingModel::FMessageLogListingModel(this_00,param_1);
  }
  TSharedRef<FMessageLogListingModel,1>::
  TSharedRef<FMessageLogListingModel,1><FMessageLogListingModel>(&local_30,pFVar2);
  pFVar3 = FText::FText(&local_20);
  pTVar4 = FMessageLogListingViewModel::Create(&local_48,&local_30,pFVar3,param_2);
  __return_storage_ptr__->Object = (IMessageLogListing *)pTVar4->Object;
  pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  if (local_20.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_20.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.SharedReferenceCount.ReferenceController);
  FMemScope::~FMemScope(&local_38);
  FLLMScope::~FLLMScope(local_res10);
  return __return_storage_ptr__;
}

// CreateLogListingWidget @ 142bea6e0

TSharedRef<SWidget,1> * __thiscall
FMessageLogModule::CreateLogListingWidget
          (FMessageLogModule *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          TSharedRef<IMessageLogListing,1> *param_1)

{
  byte *pbVar1;
  code *pcVar2;
  SMessageLogListing *pSVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  FSlateBaseNamedArgs *pFVar8;
  TSharedRef<SWidget,1> *pTVar9;
  FLLMScope local_res10 [2];
  FLLMScope local_res18 [2];
  FName local_res20;
  TSlateDecl<SMessageLogListing,RequiredArgs::T1RequiredArgs<TSharedRef<IMessageLogListing,1>_const_&>_>
  local_258;
  T1RequiredArgs<TSharedRef<IMessageLogListing,1>_const_&> local_240;
  FMemScope local_238;
  FMemScope local_230;
  FSlateBaseNamedArgs local_228;
  
  FLLMScope::FLLMScope(local_res18,UI,false,None,Default,true);
  FMemScope::FMemScope(&local_230,UI,true);
  pFVar8 = (FSlateBaseNamedArgs *)
           SMessageLogListing::FArguments::FArguments((FArguments *)&local_228);
  local_240.Arg0 = param_1;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_238,&local_res20,true);
  TSlateDecl<SMessageLogListing,RequiredArgs::T1RequiredArgs<TSharedRef<IMessageLogListing,1>_const_&>_>
  ::
  TSlateDecl<SMessageLogListing,RequiredArgs::T1RequiredArgs<TSharedRef<IMessageLogListing,1>_const_&>_>
            (&local_258,"SMessageLogListing",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\MessageLogModule.cpp"
             ,0x7b,&local_240);
  FMemScope::~FMemScope(&local_238);
  FLLMScope::~FLLMScope(local_res10);
  pSVar3 = local_258._Widget.Object;
  if (local_258._Widget.Object == (SMessageLogListing *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar9;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_258._Widget.Object,pFVar8);
  SMessageLogListing::Construct
            (local_258._Widget.Object,(FArguments *)pFVar8,(local_258._RequiredArgs)->Arg0);
  if (local_258._Widget.Object == (SMessageLogListing *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar9;
    }
  }
  if (((local_258._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar6 = (**(code **)((local_258._Widget.Object)->_padding_ + 0x228))(local_258._Widget.Object);
    bVar7 = 0;
    if (cVar6 == '\0') goto LAB_142bea859;
  }
  bVar7 = 0x20;
LAB_142bea859:
  *(byte *)&(local_258._Widget.Object)->_padding_ =
       (byte)(local_258._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_258._Widget.Object)->_padding_ =
       (byte)(local_258._Widget.Object)->_padding_ | bVar7;
  if (local_258._Widget.Object == (SMessageLogListing *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar9;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_258._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_258._Widget.Object == (SMessageLogListing *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar9;
    }
  }
  FVar4.ReferenceController = local_258._Widget.SharedReferenceCount.ReferenceController;
  local_258._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_258._Widget.Object = (SMessageLogListing *)0x0;
  if (pSVar3 == (SMessageLogListing *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pTVar9 = (TSharedRef<SWidget,1> *)(*pcVar2)();
      return pTVar9;
    }
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar3;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar4.ReferenceController;
  if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar4.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar4.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs(&local_228);
  FMemScope::~FMemScope(&local_230);
  FLLMScope::~FLLMScope(local_res18);
  return __return_storage_ptr__;
}

// EnableMessageLogDisplay @ 142befbc0

void __thiscall FMessageLogModule::EnableMessageLogDisplay(FMessageLogModule *this,bool param_1)

{
  this->bCanDisplayMessageLog = param_1;
  return;
}

// GetLogListing @ 142bfd6c0

TSharedRef<IMessageLogListing,1> * __thiscall
FMessageLogModule::GetLogListing
          (FMessageLogModule *this,TSharedRef<IMessageLogListing,1> *__return_storage_ptr__,
          FName *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<IMessageLogListing,1> *pTVar4;
  TSharedRef<FMessageLogListingViewModel,1> *pTVar5;
  FLLMScope local_res8 [2];
  FName local_res10 [2];
  FMemScope local_res20;
  TSharedRef<FMessageLogListingViewModel,1> local_28;
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_EngineMisc_MessageLog.UniqueName,false,None,Default,true);
  local_res10[0] = LLMTagDeclaration_EngineMisc_MessageLog.UniqueName;
  FMemScope::FMemScope(&local_res20,local_res10,true);
  if ((this->MessageLogViewModel).Object == (FMessageLogViewModel *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<IMessageLogListing,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  pTVar5 = FMessageLogViewModel::GetLogListingViewModel
                     ((this->MessageLogViewModel).Object,&local_28,param_1);
  __return_storage_ptr__->Object = (IMessageLogListing *)pTVar5->Object;
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// IsRegisteredLogListing @ 142c06310

bool __thiscall FMessageLogModule::IsRegisteredLogListing(FMessageLogModule *this,FName *param_1)

{
  FMessageLogViewModel *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TSharedPtr<FMessageLogListingViewModel,1> *pTVar5;
  
  if ((this->MessageLogViewModel).Object == (FMessageLogViewModel *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (this->MessageLogViewModel).Object;
  if (*param_1 == (FName)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LogName != NAME_None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\Presentation\\MessageLogViewModel.cpp"
                       ,0x6b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pTVar5 = TMapBase<FName,TSharedPtr<FMessageLogListingViewModel,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingViewModel,1>,0>_>
           ::Find((TMapBase<FName,TSharedPtr<FMessageLogListingViewModel,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingViewModel,1>,0>_>
                   *)&pFVar1->NameToViewModelMap,*param_1);
  return pTVar5 != (TSharedPtr<FMessageLogListingViewModel,1> *)0x0;
}

// OpenMessageLog @ 142c18790

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMessageLogModule::OpenMessageLog(FMessageLogModule *this,FName *param_1)

{
  FGlobalTabmanager *pFVar1;
  code *pcVar2;
  FMessageLogViewModel *pFVar3;
  FMessageLogListingViewModel *pFVar4;
  bool bVar5;
  TSharedRef<FGlobalTabmanager,1> *pTVar6;
  TSharedPtr<SWindow,1> *pTVar7;
  FName *pFVar8;
  TSharedPtr<FMessageLogListingViewModel,1> *pTVar9;
  FString *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  wchar_t *pwVar13;
  FName local_res18;
  FName local_68;
  undefined4 local_60;
  undefined1 local_5c;
  TSharedPtr<SWindow,1> local_58;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  FString local_38;
  FMessageLogListingViewModel *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  pTVar12 = (TReferenceControllerBase<1> *)0x0;
  local_res18.ComparisonIndex.Value = 0;
  if (GDisableMessageLogPopup) {
    return;
  }
  pTVar11 = pTVar12;
  if (this->bCanDisplayMessageLog != false) {
    pTVar6 = FGlobalTabmanager::Get();
    pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000001;
    pTVar7 = FGlobalTabmanager::GetRootWindow(pTVar6->Object,&local_58);
    if (pTVar7->Object != (SWindow *)0x0) {
      bVar5 = true;
      goto LAB_142c187ee;
    }
  }
  bVar5 = false;
LAB_142c187ee:
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
  }
  if (bVar5) {
    pTVar6 = FGlobalTabmanager::Get();
    pFVar1 = pTVar6->Object;
    pcVar2 = *(code **)(pFVar1->_padding_ + 8);
    pFVar8 = ::FName::FName(&local_res18,"MessageLog");
    local_68 = *pFVar8;
    local_60 = 0xffffffff;
    local_5c = 1;
    (*pcVar2)(pFVar1,local_48,&local_68,0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    pwVar13 = L"";
    if (((this->MessageLogViewModel).Object == (FMessageLogViewModel *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar3 = (this->MessageLogViewModel).Object;
    if ((*param_1 == (FName)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("LogName != NAME_None",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\Presentation\\MessageLogViewModel.cpp"
                           ,0x71,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pTVar9 = TMapBase<FName,TSharedPtr<FMessageLogListingViewModel,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingViewModel,1>,0>_>
             ::Find((TMapBase<FName,TSharedPtr<FMessageLogListingViewModel,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingViewModel,1>,0>_>
                     *)&pFVar3->NameToViewModelMap,*param_1);
    if (pTVar9 != (TSharedPtr<FMessageLogListingViewModel,1> *)0x0) {
      pTVar12 = (pTVar9->SharedReferenceCount).ReferenceController;
      pFVar4 = pTVar9->Object;
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar4 != (FMessageLogListingViewModel *)0x0) {
        bVar5 = FPaths::FileExists(&GEditorPerProjectIni);
        if (bVar5) {
          pFVar10 = ::FName::ToString(param_1,&local_38);
          if ((pFVar10->Data).ArrayNum != 0) {
            pwVar13 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
          }
          FConfigCacheIni::SetString
                    (GConfig,L"MessageLog",L"LastLogListing",pwVar13,&GEditorPerProjectIni);
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
        }
        if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_28 = (pFVar3->SelectedLogListingViewModel).Object;
        pTStack_20 = (pFVar3->SelectedLogListingViewModel).SharedReferenceCount.ReferenceController;
        (pFVar3->SelectedLogListingViewModel).Object = pFVar4;
        (pFVar3->SelectedLogListingViewModel).SharedReferenceCount.ReferenceController = pTVar12;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_20);
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                   &pFVar3->SelectionChangedEvent);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  }
  return;
}

// RegisterLogListing @ 142c1fe40

void __thiscall
FMessageLogModule::RegisterLogListing
          (FMessageLogModule *this,FName *param_1,FText *param_2,
          FMessageLogInitializationOptions *param_3)

{
  code *pcVar1;
  bool bVar2;
  FLLMScope local_res8 [2];
  FName local_28;
  FMemScope local_20;
  TSharedRef<FMessageLogListingViewModel,1> local_18;
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_EngineMisc_MessageLog.UniqueName,false,None,Default,true);
  local_28 = LLMTagDeclaration_EngineMisc_MessageLog.UniqueName;
  FMemScope::FMemScope(&local_20,&local_28,true);
  if ((this->MessageLogViewModel).Object == (FMessageLogViewModel *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FMessageLogViewModel::RegisterLogListingViewModel
            ((this->MessageLogViewModel).Object,&local_18,param_1,param_2,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  FMemScope::~FMemScope(&local_20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// RegisterMessageLogSpawner @ 142c20310

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMessageLogModule::RegisterMessageLogSpawner
          (FMessageLogModule *this,TSharedRef<FWorkspaceItem,1> *param_1)

{
  FGlobalTabmanager *this_00;
  FMessageLogViewModel *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FWorkspaceItem *this_01;
  TReferenceControllerBase<1> *pTVar3;
  FWorkspaceItem *pFVar4;
  FName FVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  TSharedRef<FGlobalTabmanager,1> *pTVar11;
  undefined8 *puVar12;
  ulong64 uVar13;
  FName *pFVar14;
  FTabSpawnerEntry *pFVar15;
  FText *pFVar16;
  TSharedRef<FWorkspaceItem,1> *pTVar17;
  FName FVar18;
  FSlateIcon *pFVar19;
  FLLMScope local_res8 [2];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined8 local_res20;
  undefined1 local_1d8 [8];
  FDelegateAllocation local_1d0;
  undefined1 local_1c0 [8];
  ForAnyElementType local_1b8;
  ulonglong local_1b0;
  FText local_1a8;
  undefined1 local_198;
  undefined1 local_190 [8];
  ForAnyElementType FStack_188;
  ulonglong local_180;
  FText local_178;
  undefined1 local_168;
  undefined1 local_160 [8];
  ForAnyElementType FStack_158;
  ulonglong local_150;
  undefined8 local_148;
  TSharedRef<FWorkspaceItem,1> local_140;
  FMemScope local_130;
  TSharedRef<FWorkspaceItem,1> local_128;
  FDestructionSentinel local_118;
  FDestructionSentinel local_100;
  FDestructionSentinel local_e8;
  FDestructionSentinel local_d0;
  FDestructionSentinel local_b8;
  FDelegateAllocation *local_a0;
  FName local_98;
  FName local_90 [2];
  FText local_80;
  FText local_70;
  FSlateIcon local_60;
  
  FLLMScope::FLLMScope(local_res8,UI,false,None,Default,true);
  FMemScope::FMemScope(&local_130,UI,true);
  pTVar11 = FGlobalTabmanager::Get();
  this_00 = pTVar11->Object;
  local_1b0 = 0;
  local_1c0 = (undefined1  [8])0x0;
  local_1b8.Data = (FScriptContainerElement *)0x0;
  if ((this->MessageLogViewModel).Object == (FMessageLogViewModel *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x408,L"");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar1 = (this->MessageLogViewModel).Object;
  pTVar2 = (this->MessageLogViewModel).SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar1 == (FMessageLogViewModel *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x25d,L"");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  local_1d8 = (undefined1  [8])0x0;
  local_1d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_1d0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1d8,
             (FWriteAccessScope *)&local_b8);
  local_a0 = &local_1d0;
  puVar12 = UE::Core::Private::DelegateAllocate(0x28,&local_1d0);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy__V__TSharedRef_VFMessageLogViewModel___00____6B_
    ;
    puVar12[1] = pFVar1;
    puVar12[2] = pTVar2;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar13 = FDelegateHandle::GenerateNewID();
    puVar12[3] = uVar13;
    *puVar12 = &
               ___7__TBaseStaticDelegateInstance___A6A_AV__TSharedRef_VSDockTab___00__AEBVFSpawnTabArgs___ZUFDefaultDelegateUserPolicy__V__TSharedRef_VFMessageLogViewModel___00____6B_
    ;
    puVar12[4] = SpawnMessageLog;
  }
  if (local_b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
  }
  pFVar14 = ::FName::FName(&local_98,"MessageLog");
  pFVar15 = FGlobalTabmanager::RegisterNomadTabSpawner
                      (this_00,*pFVar14,
                       (TDelegate<TSharedRef<SDockTab,1>___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy>
                        *)local_1d8,
                       (TDelegate<bool___cdecl(FSpawnTabArgs_const_&),FDefaultDelegateUserPolicy> *)
                       local_1c0);
  pFVar16 = FText::AsLocalizable_Advanced_LocText
                      (&local_70,L"UnrealEditor",L"MessageLogTab",L"Message Log");
  local_1a8.TextData.Reference = (pFVar16->TextData).Reference;
  if (local_1a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1a8.TextData.Reference + 8))
              (local_1a8.TextData.Reference,local_res10);
  }
  local_1a8.Flags = pFVar16->Flags;
  local_198 = 1;
  local_180 = 0;
  local_190 = (undefined1  [8])0x0;
  FStack_188.Data = (FScriptContainerElement *)0x0;
  FText::operator=((FText *)&pFVar15->_padding_,&local_1a8);
  *(undefined1 *)&pFVar15->_padding_ = local_198;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar15->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_190);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_190,
             (FWriteAccessScope *)&local_118);
  if (((int)local_180 != 0) && (FStack_188.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_188.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_188,0,0,0x10);
    local_180 = local_180 & 0xffffffff00000000;
  }
  if (local_118.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_118.Accessor,&local_118);
  }
  if (FStack_188.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_188.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_190);
  if (local_1a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1a8.TextData.Reference + 0x10))();
  }
  pFVar16 = FText::AsLocalizable_Advanced_LocText
                      (&local_80,L"UnrealEditor",L"MessageLogTooltipText",
                       L"Open the Message Log tab.");
  local_178.TextData.Reference = (pFVar16->TextData).Reference;
  if (local_178.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_178.TextData.Reference + 8))
              (local_178.TextData.Reference,local_res18);
  }
  local_178.Flags = pFVar16->Flags;
  local_168 = 1;
  local_150 = 0;
  local_160 = (undefined1  [8])0x0;
  FStack_158.Data = (FScriptContainerElement *)0x0;
  FText::operator=((FText *)&pFVar15->_padding_,&local_178);
  *(undefined1 *)&pFVar15->_padding_ = local_168;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar15->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_160);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_160,
             (FWriteAccessScope *)&local_100);
  if (((int)local_150 != 0) && (FStack_158.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_158.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_158,0,0,0x10);
    local_150 = local_150 & 0xffffffff00000000;
  }
  if (local_100.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_100.Accessor,&local_100);
  }
  if (FStack_158.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_158.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_160);
  if (local_178.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
  }
  this_01 = param_1->Object;
  pTVar17 = TSharedFromThis<FWorkspaceItem,1>::AsShared
                      ((TSharedFromThis<FWorkspaceItem,1> *)&pFVar15->_padding_,&local_128);
  pTVar3 = (pTVar17->SharedReferenceCount).ReferenceController;
  pFVar4 = pTVar17->Object;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_128.SharedReferenceCount.ReferenceController);
  }
  else {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_128.SharedReferenceCount.ReferenceController);
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_140.Object = pFVar4;
  local_140.SharedReferenceCount.ReferenceController = pTVar3;
  FWorkspaceItem::AddItem(this_01,&local_140);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_140.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  local_res20 = 0;
  local_148 = 0;
  pFVar14 = ::FName::FName(local_90,"MessageLog.TabIcon");
  FVar5 = *pFVar14;
  FVar18 = FAppStyle::GetAppStyleSetName();
  pFVar19 = FSlateIcon::FSlateIcon(&local_60,*(FName *)FVar18,FVar5,(FName)0x0,(FName)0x0);
  uVar7 = (pFVar19->StyleSetName).Number;
  uVar8 = (pFVar19->StyleName).ComparisonIndex.Value;
  uVar9 = (pFVar19->StyleName).Number;
  *(uint *)&pFVar15->_padding_ = (pFVar19->StyleSetName).ComparisonIndex.Value;
  *(uint *)((longlong)&pFVar15->_padding_ + 4) = uVar7;
  *(uint *)&pFVar15->_padding_ = uVar8;
  *(uint *)((longlong)&pFVar15->_padding_ + 4) = uVar9;
  uVar7 = (pFVar19->SmallStyleName).Number;
  uVar8 = (pFVar19->StatusOverlayStyleName).ComparisonIndex.Value;
  uVar9 = (pFVar19->StatusOverlayStyleName).Number;
  *(uint *)&pFVar15->_padding_ = (pFVar19->SmallStyleName).ComparisonIndex.Value;
  *(uint *)((longlong)&pFVar15->_padding_ + 4) = uVar7;
  *(uint *)&pFVar15->_padding_ = uVar8;
  *(uint *)((longlong)&pFVar15->_padding_ + 4) = uVar9;
  if (local_80.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
  }
  if (local_70.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1d8,
             (FWriteAccessScope *)&local_e8);
  if ((local_1d0.DelegateSize != 0) &&
     (local_1d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_1d0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_1d0,0,0,0x10);
    local_1d0.DelegateSize = 0;
  }
  if (local_e8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e8.Accessor,&local_e8);
  }
  if (local_1d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_1d0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1c0,
             (FWriteAccessScope *)&local_d0);
  if (((int)local_1b0 != 0) && (local_1b8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_1b8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1b8,0,0,0x10);
    local_1b0 = local_1b0 & 0xffffffff00000000;
  }
  if (local_d0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_d0.Accessor,&local_d0);
  }
  if (local_1b8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1c0);
  FMemScope::~FMemScope(&local_130);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ShutdownModule @ 142c27b00

void __thiscall FMessageLogModule::ShutdownModule(FMessageLogModule *this)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&FMessageLog::GetLog,
             (FWriteAccessScope *)&local_28);
  if ((FMessageLog::GetLog._16_4_ != 0) && (FMessageLog::GetLog._8_8_ != 0)) {
    (*(code *)**(undefined8 **)FMessageLog::GetLog._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&FMessageLog::GetLog.field_0x8,0,0,0x10);
    FMessageLog::GetLog._16_4_ = 0;
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// StartupModule @ 142c28010

void __thiscall FMessageLogModule::StartupModule(FMessageLogModule *this)

{
  code *pcVar1;
  bool bVar2;
  FMessageLogViewModel *this_00;
  FMessageLogModel *pFVar3;
  FMessageLogModel *pFVar4;
  TRawPtrProxy<FMessageLogModel> local_res8;
  TRawPtrProxy<FMessageLogViewModel> local_res10;
  TSharedPtr<FMessageLogModel,1> local_18;
  
  pFVar4 = (FMessageLogModel *)0x0;
  local_res8.Object = local_res8.Object & 0xffffffff00000000;
  this_00 = ::operator_new(0xd8);
  if (this_00 == (FMessageLogViewModel *)0x0) {
    local_res10.Object = (FMessageLogViewModel *)0x0;
  }
  else {
    pFVar3 = ::operator_new(0x78);
    if (pFVar3 != (FMessageLogModel *)0x0) {
      *(undefined8 *)&(pFVar3->NameToModelMap).field_0x10 = 0;
      *(undefined8 *)&(pFVar3->NameToModelMap).field_0x18 = 0;
      *(undefined8 *)&(pFVar3->NameToModelMap).field_0x38 = 0;
      *(undefined8 *)&(pFVar3->NameToModelMap).field_0x48 = 0;
      pFVar3->_padding_ = (longlong)&___7FMessageLogModel__6B_;
      *(undefined8 *)&pFVar3->NameToModelMap = 0;
      *(undefined8 *)&(pFVar3->NameToModelMap).field_0x8 = 0;
      *(undefined8 *)&(pFVar3->NameToModelMap).field_0x20 = 0;
      *(undefined4 *)&(pFVar3->NameToModelMap).field_0x28 = 0;
      *(undefined4 *)&(pFVar3->NameToModelMap).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar3->NameToModelMap).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar3->NameToModelMap).field_0x34 = 0;
      *(undefined8 *)&(pFVar3->NameToModelMap).field_0x40 = 0;
      *(undefined8 *)&pFVar3->ChangedEvent = 0;
      *(undefined8 *)&(pFVar3->ChangedEvent).field_0x8 = 0;
      *(undefined8 *)&(pFVar3->ChangedEvent).field_0x10 = 0;
      *(undefined8 *)&(pFVar3->ChangedEvent).field_0x18 = 2;
      pFVar4 = pFVar3;
    }
    local_res8.Object = pFVar4;
    TSharedPtr<FMessageLogModel,1>::TSharedPtr<FMessageLogModel,1><FMessageLogModel>
              (&local_18,&local_res8);
    local_res10.Object = FMessageLogViewModel::FMessageLogViewModel(this_00,&local_18);
    pFVar4 = (FMessageLogModel *)&DAT_00000001;
    if ((((local_res10.Object != (FMessageLogViewModel *)0x0) &&
         ((local_res10.Object)->_padding_ != 0)) && ((local_res10.Object)->_padding_ != 0)) &&
       ((0 < *(int *)((local_res10.Object)->_padding_ + 8) &&
        (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                           ("!InObject || !InObject->DoesSharedInstanceExist()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x7a5,L"Trying to share an already-shared object"), bVar2)))) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TSharedPtr<FMessageLogViewModel,1>::operator=<FMessageLogViewModel>
            (&this->MessageLogViewModel,&local_res10);
  if (pFVar4 != (FMessageLogModel *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  if (((this->MessageLogViewModel).Object == (FMessageLogViewModel *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (**(code **)(((this->MessageLogViewModel).Object)->_padding_ + 8))();
  TDelegateRegistration<TSharedRef<IMessageLog,1>___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
  ::BindStatic<>((TDelegateRegistration<TSharedRef<IMessageLog,1>___cdecl(FName_const_&),FDefaultDelegateUserPolicy>
                  *)&FMessageLog::GetLog,GetLog);
  return;
}

// UnregisterLogListing @ 142c29f80

bool __thiscall FMessageLogModule::UnregisterLogListing(FMessageLogModule *this,FName *param_1)

{
  FMessageLogViewModel *pFVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  FLLMScope local_res8 [2];
  FName local_res10;
  FName local_res18;
  FMemScope local_res20;
  
  FLLMScope::FLLMScope
            (local_res8,LLMTagDeclaration_EngineMisc_MessageLog.UniqueName,false,None,Default,true);
  local_res10 = LLMTagDeclaration_EngineMisc_MessageLog.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res10,true);
  if ((this->MessageLogViewModel).Object == (FMessageLogViewModel *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pFVar1 = (this->MessageLogViewModel).Object;
  if (*param_1 == (FName)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("LogName != NAME_None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MessageLog\\Private\\Presentation\\MessageLogViewModel.cpp"
                       ,0x65,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  FVar2 = *param_1;
  local_res18 = FVar2;
  if (*(int *)&(pFVar1->NameToViewModelMap).field_0x8 ==
      *(int *)&(pFVar1->NameToViewModelMap).field_0x34) {
    iVar7 = 0;
  }
  else {
    uVar6 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
    iVar7 = TSet<TTuple<FName,TSharedPtr<FMessageLogListingViewModel,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingViewModel,1>,0>,FDefaultSetAllocator>
            ::RemoveImpl<FName>((TSet<TTuple<FName,TSharedPtr<FMessageLogListingViewModel,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FMessageLogListingViewModel,1>,0>,FDefaultSetAllocator>
                                 *)&pFVar1->NameToViewModelMap,FVar2.Number + uVar6,&local_res18);
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return 0 < iVar7;
}

