// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 2

// HandleDebugDumpTree @ 14a7ebb50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
FActionRouterDebugUtils::HandleDebugDumpTree
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  UGameInstance *this;
  ULocalPlayer *this_00;
  FActivatableTreeRoot *pFVar1;
  FActionRouterBindingCollection *this_01;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_> *pTVar9;
  UCommonUIActionRouterBase *this_02;
  longlong lVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  undefined1 local_res10 [8];
  TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_> *local_res18;
  longlong local_res20;
  longlong local_58;
  FString local_48;
  
  if (param_2 == (UWorld *)0x0) {
    if (1 < (byte)LogUIActionRouter._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_static_void___cdecl_FActionRouterDebugUtils::HandleDebugDumpTree(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64,UWorld*___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
      return;
    }
  }
  else {
    if ((param_1->ArrayNum < 1) ||
       (bVar3 = ::FString::ToBool((FString *)(param_1->AllocatorInstance).Data), bVar3)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((param_1->ArrayNum < 2) ||
       (bVar4 = ::FString::ToBool((FString *)((param_1->AllocatorInstance).Data + 0x10)), bVar4)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if ((param_1->ArrayNum < 3) ||
       (bVar5 = ::FString::ToBool((FString *)((param_1->AllocatorInstance).Data + 0x20)), bVar5)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (param_1->ArrayNum < 4) {
      iVar7 = -1;
    }
    else {
      pFVar12 = (param_1->AllocatorInstance).Data;
      if (*(int *)(pFVar12 + 0x38) == 0) {
        iVar7 = _wtoi(L"");
      }
      else {
        iVar7 = _wtoi(*(wchar_t **)(pFVar12 + 0x30));
      }
    }
    this = (param_2->OwningGameInstance).field0_0x0.DebugPtr;
    if (this == (UGameInstance *)0x0) {
      if (1 < (byte)LogUIActionRouter._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  (&`public:_static_void___cdecl_FActionRouterDebugUtils::HandleDebugDumpTree(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64,UWorld*___ptr64)'
                    ::__l27::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
      }
    }
    else {
      pTVar9 = UGameInstance::GetLocalPlayers(this);
      uVar14 = 0;
      iVar11 = pTVar9->ArrayNum;
      if (0 < iVar11) {
        lVar10 = (longlong)iVar7;
        local_58 = 0;
        local_res18 = pTVar9;
        local_res20 = lVar10;
        do {
          if ((lVar10 == -1) || (lVar10 == local_58)) {
            uVar8 = 0;
            if ((int)uVar14 < iVar11) {
              uVar8 = ~uVar14 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            this_00 = *(ULocalPlayer **)((local_res18->AllocatorInstance).Data + local_58 * 8);
            this_02 = ULocalPlayer::GetSubsystem<UCommonUIActionRouterBase>(this_00);
            pTVar9 = local_res18;
            lVar10 = local_res20;
            if (this_02 != (UCommonUIActionRouterBase *)0x0) {
              local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_48.Data.ArrayNum = 0;
              local_48.Data.ArrayMax = 0;
              if ((this_02->ActiveRootNode).Object != (FActivatableTreeRoot *)0x0) {
                ::FString::AppendChars(&local_48,L"** Active Root **",0x11);
                if (((this_02->ActiveRootNode).Object == (FActivatableTreeRoot *)0x0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar6)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                FActivatableTreeNode::DebugDumpRecursive
                          ((FActivatableTreeNode *)(this_02->ActiveRootNode).Object,&local_48,0,
                           bVar3,bVar4,bVar5);
                ::FString::AppendChars(&local_48,L"\n*****************\n",0x13);
              }
              iVar7 = (this_02->RootNodes).ArrayNum;
              pFVar12 = (this_02->RootNodes).AllocatorInstance.Data;
              pFVar13 = pFVar12 + (longlong)iVar7 * 0x10;
              while( true ) {
                if ((this_02->RootNodes).ArrayNum != iVar7) {
                  local_res10[0] = 0;
                  `TCheckedPointerIterator<TSharedRef<FActivatableTreeRoot,1>,int,0>::operator!='::
                  __l2::<lambda_1>::operator()(local_res10);
                }
                if (pFVar12 == pFVar13) break;
                pFVar1 = (this_02->ActiveRootNode).Object;
                if ((pFVar1 == (FActivatableTreeRoot *)0x0) ||
                   (pFVar1 != *(FActivatableTreeRoot **)pFVar12)) {
                  FActivatableTreeNode::DebugDumpRecursive
                            (*(FActivatableTreeNode **)pFVar12,&local_48,0,bVar3,bVar4,bVar5);
                }
                pFVar12 = pFVar12 + 0x10;
              }
              if (bVar3 != false) {
                if (((this_02->PersistentActions).Object == (FPersistentActionCollection *)0x0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar6)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                this_01 = (FActionRouterBindingCollection *)(this_02->PersistentActions).Object;
                ::FString::AppendChars(&local_48,L"\nPersistent Action Collection:",0x1e);
                FActionRouterBindingCollection::DebugDumpActionBindings(this_01,&local_48,0);
              }
              if (3 < (byte)LogUIActionRouter._0_1_) {
                UE::Logging::Private::BasicLog<4>
                          (&`public:_static_void___cdecl_FActionRouterDebugUtils::HandleDebugDumpTree(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64,UWorld*___ptr64)'
                            ::__l66::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
              }
              UCommonUIActionRouterBase::DebugDumpActionDomainRootNodes
                        (this_02,uVar14,this_00->ControllerId,bVar3,bVar4,bVar5);
              pTVar9 = local_res18;
              lVar10 = local_res20;
              if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_48.Data.AllocatorInstance.Data);
                pTVar9 = local_res18;
                lVar10 = local_res20;
              }
            }
          }
          iVar11 = pTVar9->ArrayNum;
          local_58 = local_58 + 1;
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < iVar11);
      }
    }
  }
  return;
}

// HandleDumpCurrentInputConfig @ 14a7ec530

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FActionRouterDebugUtils::HandleDumpCurrentInputConfig(UWorld *param_1)

{
  UGameInstance *this;
  FScriptContainerElement *_Src;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<ULocalPlayer_*,TSizedDefaultAllocator<32>_> *pTVar4;
  UCommonUIActionRouterBase *pUVar5;
  ForAnyElementType FVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  uint uVar9;
  int *piVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  ForAnyElementType local_a8;
  int local_a0;
  int local_9c;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  if (param_1 == (UWorld *)0x0) {
    if (1 < (byte)LogUIActionRouter._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_static_void___cdecl_FActionRouterDebugUtils::HandleDumpCurrentInputConfig(UWorld*___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
      return;
    }
  }
  else {
    piVar10 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c);
    if ((*piVar10 <
         `public:_static_void___cdecl_FActionRouterDebugUtils::HandleDumpCurrentInputConfig(UWorld*___ptr64)'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_void___cdecl_FActionRouterDebugUtils::HandleDumpCurrentInputConfig(UWorld*___ptr64)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_void___cdecl_FActionRouterDebugUtils::HandleDumpCurrentInputConfig(UWorld*___ptr64)'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      `public:_static_void___cdecl_FActionRouterDebugUtils::HandleDumpCurrentInputConfig(UWorld*___ptr64)'
      ::__l2::InputModeEnum = StaticEnum<enum_ECommonInputMode>();
      _Init_thread_footer(&`public:_static_void___cdecl_FActionRouterDebugUtils::HandleDumpCurrentInputConfig(UWorld*___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    if ((*piVar10 <
         `public:_static_void___cdecl_FActionRouterDebugUtils::HandleDumpCurrentInputConfig(UWorld*___ptr64)'
         ::__l2::_thread_safe_static_guard_1__) &&
       (_Init_thread_header(&`public:_static_void___cdecl_FActionRouterDebugUtils::HandleDumpCurrentInputConfig(UWorld*___ptr64)'
                             ::__l2::_thread_safe_static_guard_1__),
       `public:_static_void___cdecl_FActionRouterDebugUtils::HandleDumpCurrentInputConfig(UWorld*___ptr64)'
       ::__l2::_thread_safe_static_guard_1__ == -1)) {
      `public:_static_void___cdecl_FActionRouterDebugUtils::HandleDumpCurrentInputConfig(UWorld*___ptr64)'
      ::__l2::MouseCaptureModeEnum = StaticEnum<enum_EMouseCaptureMode>();
      _Init_thread_footer(&`public:_static_void___cdecl_FActionRouterDebugUtils::HandleDumpCurrentInputConfig(UWorld*___ptr64)'
                           ::__l2::_thread_safe_static_guard_1__);
    }
    if ((`public:_static_void___cdecl_FActionRouterDebugUtils::HandleDumpCurrentInputConfig(UWorld*___ptr64)'
         ::__l2::InputModeEnum == (UEnum *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InputModeEnum",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\CommonUIActionRouterBase.cpp"
                           ,0x802,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((`public:_static_void___cdecl_FActionRouterDebugUtils::HandleDumpCurrentInputConfig(UWorld*___ptr64)'
         ::__l2::MouseCaptureModeEnum == (UEnum *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("MouseCaptureModeEnum",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\Input\\CommonUIActionRouterBase.cpp"
                           ,0x803,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this = (param_1->OwningGameInstance).field0_0x0.DebugPtr;
    if (this == (UGameInstance *)0x0) {
      if (1 < (byte)LogUIActionRouter._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  (&`public:_static_void___cdecl_FActionRouterDebugUtils::HandleDumpCurrentInputConfig(UWorld*___ptr64)'
                    ::__l41::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
      }
    }
    else {
      uVar11 = 0;
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.Data.ArrayNum = 0;
      local_98.Data.ArrayMax = 0;
      pTVar4 = UGameInstance::GetLocalPlayers(this);
      local_a8.Data = (FScriptContainerElement *)0x0;
      local_a0 = pTVar4->ArrayNum;
      lVar8 = (longlong)local_a0;
      _Src = (pTVar4->AllocatorInstance).Data;
      if (local_a0 == 0) {
        local_9c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_a0,0,&local_a8,local_a0,&local_9c);
        memcpy(local_a8.Data,_Src,lVar8 << 3);
      }
      uVar13 = uVar11;
      if (0 < local_a0) {
        do {
          uVar9 = (uint)uVar11;
          uVar3 = 0;
          if ((int)uVar9 < local_a0) {
            uVar3 = ~uVar9 >> 0x1f;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (*(ULocalPlayer **)(local_a8.Data + uVar13) != (ULocalPlayer *)0x0) {
            pUVar5 = ULocalPlayer::GetSubsystem<UCommonUIActionRouterBase>
                               (*(ULocalPlayer **)(local_a8.Data + uVar13));
            if (pUVar5 == (UCommonUIActionRouterBase *)0x0) {
              ::FString::PrintfImpl
                        (&local_38,L"LocalPlayer [User %d, Controller %d] has no ActionRouter\n");
              iVar12 = local_38.Data.ArrayNum + -1;
              if (local_38.Data.ArrayNum == 0) {
                iVar12 = 0;
              }
              ::FString::AppendChars
                        (&local_98,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar12);
              FVar6.Data = local_38.Data.AllocatorInstance.Data;
            }
            else if ((pUVar5->ActiveInputConfig).bIsSet == false) {
              ::FString::PrintfImpl
                        (&local_48,L"LocalPlayer [User %d, ControllerId %d] no ActiveInputConfig\n")
              ;
              iVar12 = local_48.Data.ArrayNum + -1;
              if (local_48.Data.ArrayNum == 0) {
                iVar12 = 0;
              }
              ::FString::AppendChars
                        (&local_98,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar12);
              FVar6.Data = local_48.Data.AllocatorInstance.Data;
            }
            else {
              UEnum::GetNameStringByValue
                        (`public:_static_void___cdecl_FActionRouterDebugUtils::HandleDumpCurrentInputConfig(UWorld*___ptr64)'
                         ::__l2::InputModeEnum,&local_58,
                         (ulonglong)(pUVar5->ActiveInputConfig).TypedValue.InputMode);
              if (((pUVar5->ActiveInputConfig).bIsSet == false) &&
                 (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsSet()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                     ,0x1bd,
                                     L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                    ), bVar2)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              UEnum::GetNameStringByValue
                        (`public:_static_void___cdecl_FActionRouterDebugUtils::HandleDumpCurrentInputConfig(UWorld*___ptr64)'
                         ::__l2::MouseCaptureModeEnum,&local_68,
                         (ulonglong)(pUVar5->ActiveInputConfig).TypedValue.MouseCaptureMode);
              if (((pUVar5->ActiveInputConfig).bIsSet == false) &&
                 (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsSet()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                     ,0x1bd,
                                     L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                    ), bVar2)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              pwVar7 = L"No";
              if ((pUVar5->ActiveInputConfig).TypedValue.bHideCursorDuringViewportCapture != false)
              {
                pwVar7 = L"Yes";
              }
              ::FString::FString(&local_78,pwVar7);
              ::FString::PrintfImpl
                        (&local_88,
                         L"\tLocalPlayer[User %d, ControllerId %d] ActiveInputConfig: Input Mode [%s] Mouse Capture [%s] Hide Cursor During Capture [%s]\n"
                        );
              uVar3 = local_88.Data.ArrayNum - 1;
              if (local_88.Data.ArrayNum == 0) {
                uVar3 = 0;
              }
              ::FString::AppendChars
                        (&local_98,(wchar_t *)local_88.Data.AllocatorInstance.Data,uVar3);
              if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_88.Data.AllocatorInstance.Data);
              }
              if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_78.Data.AllocatorInstance.Data);
              }
              FVar6.Data = local_58.Data.AllocatorInstance.Data;
              if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_68.Data.AllocatorInstance.Data);
                FVar6.Data = local_58.Data.AllocatorInstance.Data;
              }
            }
            if (FVar6.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FVar6.Data);
            }
          }
          uVar11 = (ulonglong)(uVar9 + 1);
          uVar13 = uVar13 + 8;
        } while ((int)(uVar9 + 1) < local_a0);
      }
      if (3 < (byte)LogUIActionRouter._0_1_) {
        UE::Logging::Private::BasicLog<4>
                  (&`public:_static_void___cdecl_FActionRouterDebugUtils::HandleDumpCurrentInputConfig(UWorld*___ptr64)'
                    ::__l74::LOG_Static,(FLogCategoryBase *)&LogUIActionRouter);
      }
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data);
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

