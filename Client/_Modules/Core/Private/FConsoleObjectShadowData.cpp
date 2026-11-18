// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// ~FConsoleObjectShadowData @ 141620a50

void __thiscall FConsoleObjectShadowData::~FConsoleObjectShadowData(FConsoleObjectShadowData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FConsoleObjectShadowData__6B_;
  pFVar1 = (this->DeprecationMessage).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DeprecatedVersion).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ShadowName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Bind @ 14162c150

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FConsoleObjectShadowData::Bind(FConsoleObjectShadowData *this)

{
  EShadowCVarBehavior EVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong lVar5;
  IConsoleManager *pIVar6;
  FString *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  wchar_t *pwVar10;
  FText *local_res8;
  undefined1 local_128 [16];
  FText local_118;
  FString local_108;
  FString local_f8;
  FFormatArgumentValue local_e8;
  FFormatArgumentValue local_c8;
  FText local_a8;
  void *local_98 [2];
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FTextFormat local_28;
  FTextFormat local_18;
  
  lVar5 = (**(code **)(this->_padding_ + 8))();
  if (lVar5 == 0) {
    if (this->bHasLooked == 0) {
      this->field_0x3a = this->field_0x3a | 1;
      pIVar6 = IConsoleManager::Get();
      if ((this->ShadowName).Data.ArrayNum == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = (wchar_t *)(this->ShadowName).Data.AllocatorInstance.Data;
      }
      local_128._0_8_ = (**(code **)((longlong)*pIVar6 + 200))(pIVar6,pwVar10,0);
      if ((TTuple<FString,FFormatArgumentValue> *)local_128._0_8_ !=
          (TTuple<FString,FFormatArgumentValue> *)0x0) {
        (**(code **)(this->_padding_ + 0x10))(this,local_128._0_8_);
        goto LAB_14162c532;
      }
      if (this->LookupBehavior != NoMessaging) {
        local_128._8_8_ = local_128._0_8_;
        pFVar7 = (FString *)(**(code **)(this->_padding_ + 0x18))(this,local_98);
        pFVar8 = FText::FromString(&local_a8,pFVar7);
        local_e8.Type = Text;
        FText::FText((FText *)&local_e8.TextValue,pFVar8);
        if ((local_e8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        ::FString::FString(&local_108,L"ThisName");
        TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
        Emplace<FString,FFormatArgumentValue>
                  ((TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                    *)local_128,&local_108,&local_e8);
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        if (local_e8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_e8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        if (local_a8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
        }
        if (local_98[0] != (void *)0x0) {
          FMemory::Free(local_98[0]);
        }
        pFVar8 = FText::FromString(&local_88,&this->ShadowName);
        local_c8.Type = Text;
        FText::FText((FText *)&local_c8.TextValue,pFVar8);
        if ((local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        ::FString::FString(&local_f8,L"ShadowName");
        TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
        Emplace<FString,FFormatArgumentValue>
                  ((TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                    *)local_128,&local_f8,&local_c8);
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        if (local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)
                       *(ITextData *)local_c8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        if (local_88.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
        }
        FText::FText(&local_118);
        if ((this->DeprecationMessage).Data.ArrayNum < 2) {
          if (this->LookupBehavior == Assert) {
            pFVar8 = FText::AsLocalizable_Advanced_LocText
                               (&local_68,L"ConsoleManager",L"FailedShadowCVarLookup_Assert",
                                L"Attempted to delay-load real CVar \'{ThisName}\' for shadowed CVar \'{ShadowName}\' failed."
                               );
            pFVar9 = FTextFormat::FTextFormat(&local_28,pFVar8,Default);
            pFVar8 = FText::Format(&local_78,pFVar9,
                                   (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                                    *)local_128);
            FText::operator=(&local_118,pFVar8);
            local_38.TextData.Reference = local_68.TextData.Reference;
            if (local_78.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
              local_38.TextData.Reference = local_68.TextData.Reference;
            }
          }
          else {
            pFVar8 = FText::AsLocalizable_Advanced_LocText
                               (&local_48,L"ConsoleManager",L"FailedShadowCVarLookup",
                                L"Attempted to delay-load real CVar \'{ThisName}\' for shadowed CVar \'{ShadowName}\' failed. Uses of \'{ThisName}\' will do nothing."
                               );
            pFVar9 = FTextFormat::FTextFormat(&local_18,pFVar8,Default);
            pFVar8 = FText::Format(&local_58,pFVar9,
                                   (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                                    *)local_128);
            FText::operator=(&local_118,pFVar8);
            local_38.TextData.Reference = local_48.TextData.Reference;
            if (local_58.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
              local_38.TextData.Reference = local_48.TextData.Reference;
            }
          }
        }
        else {
          pFVar8 = FText::FromString(&local_38,&this->DeprecationMessage);
          FText::operator=(&local_118,pFVar8);
        }
        if (local_38.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
        }
        EVar1 = this->LookupBehavior;
        if (EVar1 == Warn) {
          if (2 < (byte)LogConsoleManager._0_1_) {
            FText::ToString(&local_118);
            UE::Logging::Private::BasicLog<3>
                      ((FStaticBasicLogRecord *)
                       &`protected:_void___cdecl_FConsoleObjectShadowData::LogOrEditorMessage(FText_const&___ptr64,bool)const___ptr64'
                        ::__l29::LOG_Static,(FLogCategoryBase *)&LogConsoleManager);
          }
        }
        else if (EVar1 == Error) {
          if (1 < (byte)LogConsoleManager._0_1_) {
            FText::ToString(&local_118);
            UE::Logging::Private::BasicLog<2>
                      ((FStaticBasicLogRecord *)
                       &`protected:_void___cdecl_FConsoleObjectShadowData::LogOrEditorMessage(FText_const&___ptr64,bool)const___ptr64'
                        ::__l9::LOG_Static,(FLogCategoryBase *)&LogConsoleManager);
          }
        }
        else if (EVar1 == Ensure) {
          local_res8 = &local_118;
          `FConsoleObjectShadowData::Bind'::__l26::<lambda_1>::operator()(&local_res8);
        }
        else if (EVar1 == Assert) {
          FText::ToString(&local_118);
          UE::Logging::Private::BasicFatalLog
                    (&`protected:_bool___cdecl_FConsoleObjectShadowData::Bind(void)const___ptr64'::
                      __l27::LOG_Static,(FLogCategoryBase *)&LogConsoleManager);
        }
        if (local_118.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
        }
        DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                  ((TTuple<FString,FFormatArgumentValue> *)local_128._0_8_,local_128._8_4_);
        if ((TTuple<FString,FFormatArgumentValue> *)local_128._0_8_ !=
            (TTuple<FString,FFormatArgumentValue> *)0x0) {
          FMemory::Free((void *)local_128._0_8_);
        }
      }
    }
    bVar3 = false;
  }
  else {
LAB_14162c532:
    bVar3 = true;
  }
  return bVar3;
}

// BindForUsage @ 14162c560

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FConsoleObjectShadowData::BindForUsage(FConsoleObjectShadowData *this)

{
  EShadowCVarBehavior EVar1;
  wchar_t wVar2;
  wchar_t wVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FString *pFVar7;
  FText *pFVar8;
  FTextFormat *pFVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  FText *local_res10;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_178
  ;
  FText local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FFormatArgumentValue local_128;
  FFormatArgumentValue local_108;
  FFormatArgumentValue local_e8;
  FText local_c8;
  void *local_b8 [2];
  FText local_a8;
  FText local_98;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FTextFormat local_38;
  FTextFormat local_28;
  
  bVar5 = Bind(this);
  if (!bVar5) {
    return false;
  }
  if ((this->bHasMessagedForUsage == '\0') && (this->UsageBehavior != NoMessaging)) {
    local_178.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_178.Pairs.ArrayNum = 0;
    local_178.Pairs.ArrayMax = 0;
    pFVar7 = (FString *)(**(code **)(this->_padding_ + 0x18))(this,local_b8);
    pFVar8 = FText::FromString(&local_c8,pFVar7);
    local_128.Type = Text;
    FText::FText((FText *)&local_128.TextValue,pFVar8);
    if ((local_128.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    ::FString::FString(&local_158,L"ThisName");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_178,&local_158,&local_128);
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    if (local_128.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_128.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_c8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_c8.TextData.Reference + 0x10))();
    }
    if (local_b8[0] != (void *)0x0) {
      FMemory::Free(local_b8[0]);
    }
    pFVar8 = FText::FromString(&local_a8,&this->ShadowName);
    local_108.Type = Text;
    FText::FText((FText *)&local_108.TextValue,pFVar8);
    if ((local_108.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    ::FString::FString(&local_148,L"ShadowName");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_178,&local_148,&local_108);
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    if (local_108.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_108.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
    pFVar8 = FText::FromString(&local_98,&this->DeprecatedVersion);
    local_e8.Type = Text;
    FText::FText((FText *)&local_e8.TextValue,pFVar8);
    if ((local_e8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    ::FString::FString(&local_138,L"DeprecatedVersion");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_178,&local_138,&local_e8);
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    if (local_e8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_e8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10)
      )();
    }
    if (local_98.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
    }
    FText::FText(&local_168);
    if ((this->DeprecationMessage).Data.ArrayNum < 2) {
      if ((this->DeprecatedVersion).Data.ArrayNum == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)(this->DeprecatedVersion).Data.AllocatorInstance.Data;
      }
      pwVar10 = L"";
      do {
        while( true ) {
          wVar2 = *(wchar_t *)
                   ((FScriptContainerElement *)((longlong)pwVar11 + -0x15060d16c) +
                   (longlong)pwVar10);
          wVar3 = *pwVar10;
          pwVar10 = pwVar10 + 1;
          if (wVar2 != wVar3) break;
          if (wVar2 == L'\0') {
LAB_14162c809:
            pFVar8 = FText::AsLocalizable_Advanced_LocText
                               (&local_58,L"ConsoleManager",L"ShadowCVarUsage",
                                L"Using a shadowed CVar \'{ThisName}\'. It is recommended to change all uses to \'{ShadowName}\' instead."
                               );
            pFVar9 = FTextFormat::FTextFormat(&local_28,pFVar8,Default);
            pFVar8 = FText::Format(&local_68,pFVar9,&local_178);
            FText::operator=(&local_168,pFVar8);
            local_48.TextData.Reference = local_58.TextData.Reference;
            if (local_68.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
              local_48.TextData.Reference = local_58.TextData.Reference;
            }
            goto LAB_14162c910;
          }
        }
        if (((wVar3 | wVar2) & 0xff80U) != 0) {
          if (wVar2 == wVar3) goto LAB_14162c809;
          break;
        }
      } while (""[(ushort)wVar2] == ""[(ushort)wVar3]);
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_78,L"ConsoleManager",L"ShadowCVarUsage_Deprecated",
                          L"Using a deprecated (as of UE {DeprecatedVersion}) CVar: \'{ThisName}\'. It will be removed in the future. Change all uses to \'{ShadowName}\' instead."
                         );
      pFVar9 = FTextFormat::FTextFormat(&local_38,pFVar8,Default);
      pFVar8 = FText::Format(&local_88,pFVar9,&local_178);
      FText::operator=(&local_168,pFVar8);
      local_48.TextData.Reference = local_78.TextData.Reference;
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
        local_48.TextData.Reference = local_78.TextData.Reference;
      }
    }
    else {
      pFVar8 = FText::FromString(&local_48,&this->DeprecationMessage);
      FText::operator=(&local_168,pFVar8);
    }
LAB_14162c910:
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    EVar1 = this->UsageBehavior;
    if (EVar1 == Warn) {
      if (2 < (byte)LogConsoleManager._0_1_) {
        FText::ToString(&local_168);
        UE::Logging::Private::BasicLog<3>
                  ((FStaticBasicLogRecord *)
                   &`protected:_void___cdecl_FConsoleObjectShadowData::LogOrEditorMessage(FText_const&___ptr64,bool)const___ptr64'
                    ::__l29::LOG_Static,(FLogCategoryBase *)&LogConsoleManager);
      }
    }
    else if (EVar1 == Error) {
      if (1 < (byte)LogConsoleManager._0_1_) {
        FText::ToString(&local_168);
        UE::Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)
                   &`protected:_void___cdecl_FConsoleObjectShadowData::LogOrEditorMessage(FText_const&___ptr64,bool)const___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&LogConsoleManager);
      }
    }
    else if (EVar1 == Ensure) {
      this->bHasMessagedForUsage = '\x01';
      local_res10 = &local_168;
      `FConsoleObjectShadowData::BindForUsage'::__l23::<lambda_1>::operator()(&local_res10);
    }
    else if (EVar1 == Assert) {
      FText::ToString(&local_168);
      UE::Logging::Private::BasicFatalLog
                (&`protected:_bool___cdecl_FConsoleObjectShadowData::BindForUsage(void)const___ptr64'
                  ::__l24::LOG_Static,(FLogCategoryBase *)&LogConsoleManager);
    }
    if (local_168.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
    }
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>
              ((TTuple<FString,FFormatArgumentValue> *)local_178.Pairs.AllocatorInstance.Data,
               local_178.Pairs.ArrayNum);
    if ((TTuple<FString,FFormatArgumentValue> *)local_178.Pairs.AllocatorInstance.Data !=
        (TTuple<FString,FFormatArgumentValue> *)0x0) {
      FMemory::Free(local_178.Pairs.AllocatorInstance.Data);
    }
  }
  return true;
}

// operator() @ 150479540

bool __thiscall `FConsoleObjectShadowData::BindForUsage'::__l23::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<2189577819309216394>);
  if (bVar2) {
    FText::ToString(*(FText **)this);
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2189577819309216394>,
                       &`public:___cdecl_`protected:_bool___cdecl_FConsoleObjectShadowData::BindForUsage(void)const___ptr64'::`23'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504795a0

bool __thiscall `FConsoleObjectShadowData::Bind'::__l26::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2189577819309216334>);
  if (bVar2) {
    FText::ToString(*(FText **)this);
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2189577819309216334>,
                       &`public:___cdecl_`protected:_bool___cdecl_FConsoleObjectShadowData::Bind(void)const___ptr64'::`26'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

