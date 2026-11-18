// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 3

// ProcessError @ 14bbce710

bool __cdecl FDS_AIService::ProcessError(FDS_ErrorMessageInfo *param_1,Message *param_2)

{
  return false;
}

// ReceiveAiCommandResponse @ 14bbcfbf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_AIService::ReceiveAiCommandResponse(ServerMessages *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  UDS_CCSAIManager *this;
  UDS_LogManager *pUVar6;
  SkillCommandDefaultTypeInternal *pSVar7;
  undefined1 *puVar8;
  FIdentityFunctor FVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  undefined1 auStackY_248 [32];
  FIdentityFunctor local_208 [8];
  ForAnyElementType local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  ServerMessageUnion local_1e8;
  FString local_1e0;
  FString local_1d0;
  undefined8 local_1c0;
  undefined8 local_1b8;
  ulong64 local_1b0;
  UDS_CCSAIManager *local_1a8;
  longlong local_1a0;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_248;
  lVar16 = 0;
  this = UDS_CCSAIManager::GetInst();
  local_1a8 = this;
  if (this == (UDS_CCSAIManager *)0x0) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"FDS_AIService::ReceiveAiCommandResponse",0x27,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_158.Ptr,0x42,L"ccsAIMng is nullptr.");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    if ((param_1->_impl_)._oneof_case_[0] == 0x753b) {
      local_1e8 = (param_1->_impl_).ServerMessage_;
    }
    else {
      local_1e8.errorcoderes_ = (Message *)&nvidia_command::_NvidiaCommandRequest_default_instance_;
    }
    local_1a0 = (longlong)*(int *)(local_1e8.errorcoderes_ + 2);
    local_1b0 = *(ulong64 *)(local_1e8.errorcoderes_ + 3);
    FVar9 = local_208[0];
    if (0 < local_1a0) {
      do {
        uVar10 = 0;
        uVar13 = *(ulonglong *)&local_1e8.errorcoderes_[1].field_0x8;
        if ((uVar13 & 1) != 0) {
          uVar13 = *(ulonglong *)(uVar13 + 7 + lVar16 * 8);
        }
        local_1c0 = *(undefined8 *)(uVar13 + 0x18);
        iVar4 = *(int *)(uVar13 + 0x28);
        if (iVar4 == 2) {
          ::FString::PrintfImpl(&local_198,L"X=%3.3f Y=%3.3f Z=%3.3f");
          ::FString::PrintfImpl(&local_188,L"[EntityID:%llu] [MOVE:%llu] [Destination:%s]");
          if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_198.Data.AllocatorInstance.Data);
          }
          UDS_CCSAIManager::WriteLogToFile(this,&local_188);
          if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_188.Data.AllocatorInstance.Data);
          }
        }
        else if (iVar4 == 3) {
          lVar11 = *(longlong *)(uVar13 + 0x20);
          local_1f0 = *(undefined4 *)(lVar11 + 0x38);
          local_1b8 = *(undefined8 *)(lVar11 + 0x30);
          local_200.Data = (FScriptContainerElement *)0x0;
          local_1f8 = 0;
          if ((*(ulonglong *)(lVar11 + 0x18) & 4) == 0) {
            uVar17 = (uint)*(ulonglong *)(lVar11 + 0x18) & 3;
          }
          else {
            uVar17 = *(uint *)(lVar11 + 0x20);
          }
          uVar14 = uVar10;
          uVar15 = uVar10;
          if (0 < (int)uVar17) {
            while( true ) {
              iVar4 = (int)uVar15;
              if (*(int *)(uVar13 + 0x28) == 3) {
                pSVar7 = *(SkillCommandDefaultTypeInternal **)(uVar13 + 0x20);
              }
              else {
                pSVar7 = &nvidia_command::_SkillCommand_default_instance_;
              }
              uVar15 = (pSVar7->_instance)._impl_.alternative_skill_ids_.soo_rep_.field0_0x0.
                       long_rep.elements_int;
              puVar8 = (undefined1 *)
                       ((longlong)
                        &(pSVar7->_instance)._impl_.alternative_skill_ids_.soo_rep_.field0_0x0 + 8);
              if ((uVar15 & 4) != 0) {
                puVar8 = (undefined1 *)(uVar15 & 0xfffffffffffffff8);
              }
              uVar1 = *(undefined4 *)(puVar8 + uVar10 * 4);
              if (iVar4 == (int)uVar14) {
                iVar4 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&local_200,(int *)((longlong)&local_1f8 + 4));
              }
              local_1f8 = CONCAT44(local_1f8._4_4_,iVar4 + 1U);
              uVar10 = uVar10 + 1;
              *(undefined4 *)(local_200.Data + (longlong)iVar4 * 4) = uVar1;
              uVar15 = (ulonglong)(iVar4 + 1U);
              if ((longlong)(int)uVar17 <= (longlong)uVar10) break;
              uVar14 = (ulonglong)local_1f8._4_4_;
            }
          }
          AlgoImpl::
          IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FDS_AIService::ReceiveAiCommandResponse_::__l16::<lambda_1>_>_>
                    ((int *)local_200.Data,(int)uVar15,FVar9,(<lambda_1> *)local_208);
          ::FString::FString(&local_1d0,"");
          uVar12 = 0;
          lVar11 = 0;
          if (0 < (int)uVar17) {
            do {
              uVar5 = 0;
              if ((int)uVar12 < (int)local_1f8) {
                uVar5 = ~uVar12 >> 0x1f;
              }
              if ((uVar5 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              ::FString::PrintfImpl(&local_1e0,L"%d");
              if (uVar12 != uVar17 - 1) {
                ::FString::AppendChars(&local_1e0,L", ",2);
              }
              iVar4 = local_1e0.Data.ArrayNum + -1;
              if (local_1e0.Data.ArrayNum == 0) {
                iVar4 = 0;
              }
              ::FString::AppendChars
                        (&local_1d0,(wchar_t *)local_1e0.Data.AllocatorInstance.Data,iVar4);
              if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
              }
              uVar12 = uVar12 + 1;
              lVar11 = lVar11 + 1;
              FVar9 = local_208[0];
            } while (lVar11 < (int)uVar17);
          }
          ::FString::PrintfImpl
                    (&local_178,
                     L"[EntityID:%llu] [SKILL:%llu] [SkillID:%d] [TargetID:%llu] [AlternativeSkills:%s]"
                    );
          this = local_1a8;
          UDS_CCSAIManager::WriteLogToFile(local_1a8,&local_178);
          if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_178.Data.AllocatorInstance.Data);
          }
          if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
          }
          if (local_200.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_200.Data);
          }
        }
        else if ((iVar4 == 4) && (*(int *)(*(longlong *)(uVar13 + 0x20) + 0x1c) == 1)) {
          ::FString::PrintfImpl(&local_168,L"[EntityID:%llu] [CHEAT:%llu] [LevelUp:%d]");
          UDS_CCSAIManager::WriteLogToFile(this,&local_168);
          if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.Data.AllocatorInstance.Data);
          }
        }
        lVar16 = lVar16 + 1;
      } while (lVar16 < local_1a0);
    }
  }
  return;
}

// ReceiveAvailableSkillsResponse @ 14bbd03e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FDS_AIService::ReceiveAvailableSkillsResponse(ServerMessages *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  UDS_CCSAIManager *this;
  bool bVar3;
  int iVar4;
  UDS_LogManager *pUVar5;
  Message *pMVar6;
  uint uVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  ulonglong uVar10;
  AvailableSkillsResponseDefaultTypeInternal *pAVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined1 auStackY_1d8 [32];
  FIdentityFunctor local_1a8 [8];
  ForAnyElementType local_1a0;
  undefined8 local_198;
  FString local_190;
  FString local_180;
  UDS_CCSAIManager *local_170;
  FString local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_170 = UDS_CCSAIManager::GetInst();
  if (local_170 == (UDS_CCSAIManager *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"FDS_AIService::ReceiveAvailableSkillsResponse",0x2d,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,local_158.Ptr,0x17,L"ccsAIMng is nullptr.");
    FVar8.Data = (FScriptContainerElement *)local_158._padding_;
  }
  else {
    if ((param_1->_impl_)._oneof_case_[0] == 0x753a) {
      pAVar11 = *(AvailableSkillsResponseDefaultTypeInternal **)&(param_1->_impl_).ServerMessage_;
    }
    else {
      pAVar11 = &server_msg::_AvailableSkillsResponse_default_instance_;
    }
    uVar10 = 0;
    local_1a0.Data = (FScriptContainerElement *)0x0;
    local_198 = 0;
    if ((*(ulonglong *)&((Message *)((longlong)pAVar11 + 0x10))->field_0x8 & 4) == 0) {
      uVar15 = (uint)*(ulonglong *)&((Message *)((longlong)pAVar11 + 0x10))->field_0x8 & 3;
    }
    else {
      uVar15 = *(uint *)((longlong)pAVar11 + 0x20);
    }
    uVar12 = uVar10;
    uVar13 = uVar10;
    uVar14 = uVar10;
    uVar7 = 0;
    if (0 < (int)uVar15) {
      while( true ) {
        iVar4 = (int)uVar14;
        pMVar6 = (Message *)((longlong)pAVar11 + 0x20);
        if ((*(ulonglong *)&((Message *)((longlong)pAVar11 + 0x10))->field_0x8 & 4) != 0) {
          pMVar6 = (Message *)
                   (*(ulonglong *)&((Message *)((longlong)pAVar11 + 0x10))->field_0x8 &
                   0xfffffffffffffff8);
        }
        uVar1 = *(undefined4 *)(&pMVar6->field_0x0 + uVar12 * 4);
        if (iVar4 == (int)uVar13) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_1a0,(int *)((longlong)&local_198 + 4));
        }
        uVar7 = iVar4 + 1;
        local_198 = CONCAT44(local_198._4_4_,uVar7);
        *(undefined4 *)(local_1a0.Data + (longlong)iVar4 * 4) = uVar1;
        if ((longlong)(int)uVar15 <= (longlong)(uVar12 + 1)) break;
        uVar12 = uVar12 + 1;
        uVar13 = (ulonglong)local_198._4_4_;
        uVar14 = (ulonglong)uVar7;
      }
    }
    this = local_170;
    AlgoImpl::
    IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FDS_AIService::ReceiveAvailableSkillsResponse_::__l2::<lambda_1>_>_>
              ((int *)local_1a0.Data,uVar7,local_1a8[0],(<lambda_1> *)local_1a8);
    ::FString::FString(&local_180,"");
    if (0 < (int)uVar15) {
      uVar12 = uVar10;
      do {
        uVar9 = (uint)uVar10;
        uVar7 = 0;
        if ((int)uVar9 < (int)local_198) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        ::FString::PrintfImpl(&local_190,L"%d");
        if (uVar9 != uVar15 - 1) {
          ::FString::AppendChars(&local_190,L", ",2);
        }
        uVar7 = local_190.Data.ArrayNum - 1;
        if (local_190.Data.ArrayNum == 0) {
          uVar7 = 0;
        }
        ::FString::AppendChars(&local_180,(wchar_t *)local_190.Data.AllocatorInstance.Data,uVar7);
        if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_190.Data.AllocatorInstance.Data);
        }
        uVar10 = (ulonglong)(uVar9 + 1);
        uVar12 = uVar12 + 1;
      } while ((longlong)uVar12 < (longlong)(int)uVar15);
    }
    ::FString::PrintfImpl(&local_168,L"[EntityID:%llu] [AvailableSkills:%s]");
    UDS_CCSAIManager::WriteLogToFile(this,&local_168);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    FVar8.Data = local_1a0.Data;
    if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_180.Data.AllocatorInstance.Data);
      FVar8.Data = local_1a0.Data;
    }
  }
  if (FVar8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar8.Data);
  }
  return;
}

