// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TranslationEditor
// Functions: 4

// ~FTranslationPickerInputProcessor @ 146b990a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTranslationPickerInputProcessor::~FTranslationPickerInputProcessor
          (FTranslationPickerInputProcessor *this)

{
  this->_padding_ = (longlong)&___7IInputProcessor__6B_;
  return;
}

// GetDebugName @ 146bac470

/* WARNING: Enum "Type": Some values do not have unique names */

wchar_t * __thiscall
FTranslationPickerInputProcessor::GetDebugName(FTranslationPickerInputProcessor *this)

{
  return L"TranslationPicker";
}

// HandleKeyDownEvent @ 146bb0920

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FTranslationPickerInputProcessor::HandleKeyDownEvent
          (FTranslationPickerInputProcessor *this,FSlateApplication *param_1,FKeyEvent *param_2)

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  FKeyDetails *pFVar3;
  STranslationPickerFloatingWindow *this_00;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FInputKeyManager *pFVar7;
  FString *pFVar8;
  ForAnyElementType FVar9;
  uint uVar10;
  FTextKey local_res8 [2];
  FTextKey local_res20 [2];
  uint *local_2d8;
  uint *local_2d0;
  undefined1 local_2c8 [8];
  FString local_2c0;
  uint *local_2b0;
  uint *local_2a8;
  FString local_2a0;
  FString local_290;
  FKey local_280;
  FKey local_268;
  FString local_250;
  FReply local_240;
  FReply local_188;
  FReply local_d0;
  
  if (this->Owner == (STranslationPickerFloatingWindow *)0x0) {
    return false;
  }
  FVar1 = (param_2->Key).KeyName;
  pTVar2 = (param_2->Key).KeyDetails.SharedReferenceCount.ReferenceController;
  pFVar3 = (param_2->Key).KeyDetails.Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (FVar1 == EKeys::Escape.KeyName) {
    STranslationPickerFloatingWindow::SetViewportMouseIgnoreLook(this->Owner,false);
    this_00 = this->Owner;
    TranslationPickerManager::RemoveOverlay();
    STranslationPickerFloatingWindow::Close(this_00,&local_240);
    FReply::~FReply(&local_240);
    FReply::FReply(&local_188,true);
    FReply::~FReply(&local_188);
    bVar5 = true;
    goto LAB_146bb0c63;
  }
  if (FVar1 == EKeys::Enter.KeyName) {
    bVar5 = STranslationPickerFloatingWindow::SwitchToEditWindow(this->Owner);
    if (bVar5) {
      STranslationPickerFloatingWindow::SetViewportMouseIgnoreLook(this->Owner,false);
      STranslationPickerFloatingWindow::Close(this->Owner,&local_d0);
      FReply::~FReply(&local_d0);
      bVar5 = true;
      goto LAB_146bb0c63;
    }
LAB_146bb0c5d:
    bVar5 = true;
  }
  else {
    if (FVar1 == EKeys::BackSpace.KeyName) {
      TranslationPickerManager::bDrawBoxes = TranslationPickerManager::bDrawBoxes == false;
      bVar5 = true;
      goto LAB_146bb0c63;
    }
    if (FVar1 == EKeys::Backslash.KeyName) {
      STranslationPickerFloatingWindow::SetViewportMouseIgnoreLook
                (this->Owner,this->Owner->bMouseLookInputIgnored == false);
      bVar5 = true;
      goto LAB_146bb0c63;
    }
    if ((param_2->_padding_ & 0xc) != 0) {
      local_2b0 = (uint *)0x0;
      local_2d8 = (uint *)0x0;
      pFVar7 = FInputKeyManager::Get();
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_280.KeyName = FVar1;
      local_280.KeyDetails.Object = pFVar3;
      local_280.KeyDetails.SharedReferenceCount.ReferenceController = pTVar2;
      FInputKeyManager::GetCodesFromKey(pFVar7,&local_280,&local_2b0,&local_2d8);
      if (local_2d8 != (uint *)0x0) {
        local_2a8 = (uint *)0x0;
        local_2d0 = (uint *)0x0;
        pFVar7 = FInputKeyManager::Get();
        local_268.KeyName = EKeys::One.KeyName;
        local_268.KeyDetails.Object = EKeys::One.KeyDetails.Object;
        local_268.KeyDetails.SharedReferenceCount.ReferenceController =
             EKeys::One.KeyDetails.SharedReferenceCount.ReferenceController;
        if (EKeys::One.KeyDetails.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (EKeys::One.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(EKeys::One.KeyDetails.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        FInputKeyManager::GetCodesFromKey(pFVar7,&local_268,&local_2a8,&local_2d0);
        uVar10 = *local_2d8 - *local_2d0;
        if ((uVar10 < 5) && ((int)uVar10 < TranslationPickerManager::PickedTexts.ArrayNum)) {
          if (((int)uVar10 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          FTextInspector::GetTextId((FText *)local_2c8);
          local_res8[0].Index = local_2c8._0_4_;
          pFVar8 = FTextKey::ToString(local_res8,&local_250);
          TextNamespaceUtil::StripPackageNamespace(&local_290,pFVar8);
          if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_250.Data.AllocatorInstance.Data);
          }
          local_res20[0].Index = local_2c8._4_4_;
          FTextKey::ToString(local_res20,&local_2a0);
          ::FString::PrintfImpl(&local_2c0,L"%s,%s");
          FVar9.Data = (FScriptContainerElement *)L"";
          if (local_2c0.Data.ArrayNum != 0) {
            FVar9.Data = local_2c0.Data.AllocatorInstance.Data;
          }
          FWindowsPlatformApplicationMisc::ClipboardCopy((wchar_t *)FVar9.Data);
          if (3 < (byte)LogConsoleResponse._0_1_) {
            UE::Logging::Private::BasicLog<4>
                      (&`public:_virtual_bool___cdecl_FTranslationPickerInputProcessor::HandleKeyDownEvent(FSlateApplication&___ptr64,FKeyEvent_const&___ptr64)___ptr64'
                        ::__l39::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
          }
          if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
          }
          if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
          }
          if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_290.Data.AllocatorInstance.Data);
          }
          goto LAB_146bb0c5d;
        }
      }
    }
    bVar5 = false;
  }
LAB_146bb0c63:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return bVar5;
}

// Tick @ 146bc15a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTranslationPickerInputProcessor::Tick
          (FTranslationPickerInputProcessor *this,float param_1,FSlateApplication *param_2,
          TSharedRef<ICursor,1> *param_3)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

