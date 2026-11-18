// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 5

// Begin @ 1445b46d0

FTransaction * __cdecl
UE::IoStore::FCasJournal::Begin(FTransaction *__return_storage_ptr__,FString *param_1)

{
  (__return_storage_ptr__->JournalFile).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->JournalFile).Data.AllocatorInstance.Data =
       (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->JournalFile).Data.ArrayNum = (param_1->Data).ArrayNum;
  (__return_storage_ptr__->JournalFile).Data.ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  (__return_storage_ptr__->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Entries).ArrayNum = 0;
  (__return_storage_ptr__->Entries).ArrayMax = 0;
  return __return_storage_ptr__;
}

// Commit @ 1445b78e0

TValueOrError<void,UE::UnifiedError::FError> * __cdecl
UE::IoStore::FCasJournal::Commit
          (TValueOrError<void,UE::UnifiedError::FError> *__return_storage_ptr__,
          FTransaction *param_1)

{
  uint local_res8 [4];
  ulong64 local_res18 [2];
  
  local_res18[0] = 0;
  local_res8[0] = 0;
  Commit(__return_storage_ptr__,param_1,local_res18,local_res8);
  return __return_storage_ptr__;
}

// Commit @ 1445b7920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

TValueOrError<void,UE::UnifiedError::FError> * __cdecl
UE::IoStore::FCasJournal::Commit
          (TValueOrError<void,UE::UnifiedError::FError> *__return_storage_ptr__,
          FTransaction *param_1,ulong64 *param_2,uint *param_3)

{
  code *pcVar1;
  byte bVar2;
  atomic<unsigned_char> aVar3;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar4;
  uint *puVar5;
  bool bVar6;
  char cVar7;
  DWORD DVar8;
  int iVar9;
  FPlatformFileManager *this;
  IPlatformFile *pIVar10;
  longlong *plVar11;
  TOptional<UE::UnifiedError::FError> *pTVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  TValueOrError<void,UE::UnifiedError::FError> *pTVar16;
  wchar_t *pwVar17;
  undefined1 auStackY_2c8 [32];
  TOptional<UE::UnifiedError::FError> local_298;
  TOptional<UE::UnifiedError::FError> *local_278;
  longlong *local_270;
  longlong local_268;
  ulong64 *local_260;
  uint *local_258;
  TValueOrError<void,UE::UnifiedError::FError> local_250;
  TValueOrError<void,UE::UnifiedError::FError> local_238;
  TValueOrError<void,UE::UnifiedError::FError> local_220;
  TValueOrError<void,UE::UnifiedError::FError> local_208;
  TValueOrError<void,UE::UnifiedError::FError> local_1f0;
  undefined1 local_1d8 [4];
  undefined1 local_1d4 [4];
  undefined1 local_1d0 [4];
  undefined1 local_1cc [4];
  undefined1 local_1c8 [4];
  undefined1 local_1c4 [4];
  undefined1 local_1c0 [4];
  undefined1 local_1bc [4];
  undefined1 local_1b8 [8];
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  TOptional<UE::UnifiedError::FError> local_110;
  TValueOrError<void,UE::UnifiedError::FError> local_f8;
  TValueOrError<void,UE::UnifiedError::FError> local_e0;
  TValueOrError<void,UE::UnifiedError::FError> local_c8;
  TValueOrError<void,UE::UnifiedError::FError> local_b0;
  undefined8 local_98;
  undefined8 uStack_90;
  uint local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  uchar local_68 [4];
  uchar auStack_64 [4];
  uchar auStack_60 [4];
  uchar auStack_5c [4];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  *param_2 = 0;
  *param_3 = 0;
  if ((param_1->Entries).ArrayNum == 0) {
    (__return_storage_ptr__->Error).bIsSet = false;
    return __return_storage_ptr__;
  }
  local_260 = param_2;
  local_258 = param_3;
  this = FPlatformFileManager::Get();
  pIVar10 = FPlatformFileManager::GetPlatformFile(this);
  local_278 = &local_298;
  local_298.bIsSet = false;
  local_270 = &local_268;
  local_268 = 0;
  if ((param_1->JournalFile).Data.ArrayNum == 0) {
    pwVar17 = L"";
  }
  else {
    pwVar17 = (wchar_t *)(param_1->JournalFile).Data.AllocatorInstance.Data;
  }
  plVar11 = (longlong *)(**(code **)((longlong)*pIVar10 + 0xe8))(pIVar10,pwVar17,0);
  if (plVar11 == (longlong *)0x0) {
    DVar8 = FWindowsPlatformMisc::GetLastError();
    ::FString::PrintfImpl(&local_160,L"Failed to open journal \'%s\'");
    pTVar12 = &UnifiedError::IoStoreOnDemand::MakeJournalError
                         (&local_250,CommitJournalFailed,FileOpenFailed,&local_160,DVar8)->Error;
    TOptional<UE::UnifiedError::FError>::operator=(&local_298,pTVar12);
    (__return_storage_ptr__->Error).bIsSet = local_298.bIsSet;
    if (local_298.bIsSet != false) {
      (__return_storage_ptr__->Error).TypedValue.ErrorCode = local_298.TypedValue.ErrorCode;
      (__return_storage_ptr__->Error).TypedValue.ModuleId = local_298.TypedValue.ModuleId;
      (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
      if (local_298.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
        (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference =
             local_298.TypedValue.ErrorDetails.Reference;
        (**(code **)((longlong)*local_298.TypedValue.ErrorDetails.Reference + 8))
                  (local_298.TypedValue.ErrorDetails.Reference,local_1d8);
      }
    }
    TVar4.Reference = local_250.Error.TypedValue.ErrorDetails.Reference;
    if ((local_250.Error.bIsSet != false) &&
       (local_250.Error.TypedValue.ErrorCode = 0, local_250.Error.TypedValue.ModuleId = 0,
       local_250.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
      local_250.Error.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
      (**(code **)((longlong)*TVar4.Reference + 0x10))();
      if (local_250.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
        (**(code **)((longlong)*local_250.Error.TypedValue.ErrorDetails.Reference + 0x10))();
      }
    }
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
    if (local_298.bIsSet != false) {
      bVar6 = UnifiedError::IsCancellationError(&local_298.TypedValue);
joined_r0x0001445b7cb0:
      TVar4.Reference = local_298.TypedValue.ErrorDetails.Reference;
      if (bVar6) goto joined_r0x0001445b8000;
    }
  }
  else {
    lVar13 = (**(code **)(*plVar11 + 0x50))(plVar11);
    if (0x1f < lVar13) {
      local_88 = 0;
      local_84 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_7c = 0;
      cVar7 = (**(code **)(*plVar11 + 0x20))(plVar11,&local_98,0x20);
      if (((cVar7 == '\0') || (iVar9 = memcmp(&local_98,"CASJOURNALHEADER",0x10), iVar9 != 0)) ||
         (1 < local_88)) {
        DVar8 = FWindowsPlatformMisc::GetLastError();
        ::FString::PrintfImpl(&local_170,L"Failed to validate journal header in \'%s\'");
        pTVar12 = &UnifiedError::IoStoreOnDemand::MakeJournalError
                             (&local_1f0,CommitJournalFailed,ReadError,&local_170,DVar8)->Error;
        TVar4.Reference = local_298.TypedValue.ErrorDetails.Reference;
        if (pTVar12 != &local_298) {
          if (pTVar12->bIsSet == false) {
            if (local_298.bIsSet != false) {
              local_298.TypedValue.ErrorCode = 0;
              local_298.TypedValue.ModuleId = 0;
              if (local_298.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                local_298.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
                (**(code **)((longlong)*TVar4.Reference + 0x10))();
                if (local_298.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                  (**(code **)((longlong)*local_298.TypedValue.ErrorDetails.Reference + 0x10))();
                }
              }
              local_298.bIsSet = false;
            }
          }
          else {
            if ((local_298.bIsSet != false) &&
               (local_298.TypedValue.ErrorCode = 0, local_298.TypedValue.ModuleId = 0,
               local_298.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
              local_298.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
              (**(code **)((longlong)*TVar4.Reference + 0x10))();
              if (local_298.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                (**(code **)((longlong)*local_298.TypedValue.ErrorDetails.Reference + 0x10))();
              }
            }
            UnifiedError::FError::FError(&local_298.TypedValue,&pTVar12->TypedValue);
            local_298.bIsSet = true;
          }
        }
        (__return_storage_ptr__->Error).bIsSet = local_298.bIsSet;
        if (local_298.bIsSet != false) {
          (__return_storage_ptr__->Error).TypedValue.ErrorCode = local_298.TypedValue.ErrorCode;
          (__return_storage_ptr__->Error).TypedValue.ModuleId = local_298.TypedValue.ModuleId;
          (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
          if (local_298.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
            (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference =
                 local_298.TypedValue.ErrorDetails.Reference;
            (**(code **)((longlong)*local_298.TypedValue.ErrorDetails.Reference + 8))
                      (local_298.TypedValue.ErrorDetails.Reference,&local_260);
          }
        }
        TVar4.Reference = local_1f0.Error.TypedValue.ErrorDetails.Reference;
        if ((local_1f0.Error.bIsSet != false) &&
           (local_1f0.Error.TypedValue.ErrorCode = 0, local_1f0.Error.TypedValue.ModuleId = 0,
           local_1f0.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
          local_1f0.Error.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
          (**(code **)((longlong)*TVar4.Reference + 0x10))();
          if (local_1f0.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
            (**(code **)((longlong)*local_1f0.Error.TypedValue.ErrorDetails.Reference + 0x10))();
          }
        }
      }
      else {
        cVar7 = (**(code **)(*plVar11 + 0x10))(plVar11,lVar13 + -0x10);
        if (cVar7 == '\0') {
          DVar8 = FWindowsPlatformMisc::GetLastError();
          ::FString::PrintfImpl(&local_140,L"Failed to validate journal footer in \'%s\'");
          pTVar12 = &UnifiedError::IoStoreOnDemand::MakeJournalError
                               (&local_220,CommitJournalFailed,FileSeekFailed,&local_140,DVar8)->
                     Error;
          TVar4.Reference = local_298.TypedValue.ErrorDetails.Reference;
          if (pTVar12 != &local_298) {
            if (pTVar12->bIsSet == false) {
              if (local_298.bIsSet != false) {
                local_298.TypedValue.ErrorCode = 0;
                local_298.TypedValue.ModuleId = 0;
                if (local_298.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                  local_298.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
                  (**(code **)((longlong)*TVar4.Reference + 0x10))();
                  if (local_298.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                    (**(code **)((longlong)*local_298.TypedValue.ErrorDetails.Reference + 0x10))();
                  }
                }
                local_298.bIsSet = false;
              }
            }
            else {
              if ((local_298.bIsSet != false) &&
                 (local_298.TypedValue.ErrorCode = 0, local_298.TypedValue.ModuleId = 0,
                 local_298.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
                local_298.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
                (**(code **)((longlong)*TVar4.Reference + 0x10))();
                if (local_298.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                  (**(code **)((longlong)*local_298.TypedValue.ErrorDetails.Reference + 0x10))();
                }
              }
              UnifiedError::FError::FError(&local_298.TypedValue,&pTVar12->TypedValue);
              local_298.bIsSet = true;
            }
          }
          (__return_storage_ptr__->Error).bIsSet = local_298.bIsSet;
          if (local_298.bIsSet != false) {
            (__return_storage_ptr__->Error).TypedValue.ErrorCode = local_298.TypedValue.ErrorCode;
            (__return_storage_ptr__->Error).TypedValue.ModuleId = local_298.TypedValue.ModuleId;
            (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0
            ;
            if (local_298.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
              (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference =
                   local_298.TypedValue.ErrorDetails.Reference;
              (**(code **)((longlong)*local_298.TypedValue.ErrorDetails.Reference + 8))
                        (local_298.TypedValue.ErrorDetails.Reference,local_1d0);
            }
          }
          TVar4.Reference = local_220.Error.TypedValue.ErrorDetails.Reference;
          local_170.Data.AllocatorInstance.Data = local_140.Data.AllocatorInstance.Data;
          if ((local_220.Error.bIsSet != false) &&
             (local_220.Error.TypedValue.ErrorCode = 0, local_220.Error.TypedValue.ModuleId = 0,
             local_220.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
            local_220.Error.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
            (**(code **)((longlong)*TVar4.Reference + 0x10))();
            local_170.Data.AllocatorInstance.Data = local_140.Data.AllocatorInstance.Data;
            if (local_220.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
              (**(code **)((longlong)*local_220.Error.TypedValue.ErrorDetails.Reference + 0x10))();
              local_170.Data.AllocatorInstance.Data = local_140.Data.AllocatorInstance.Data;
            }
          }
        }
        else {
          local_78 = 0;
          uStack_70 = 0;
          cVar7 = (**(code **)(*plVar11 + 0x20))(plVar11,&local_78,0x10);
          if ((cVar7 != '\0') && (iVar9 = memcmp(&local_78,"CASJOURNALFOOTER",0x10), iVar9 == 0)) {
            (**(code **)*plVar11)(plVar11,1);
            if ((param_1->JournalFile).Data.ArrayNum == 0) {
              pwVar17 = L"";
            }
            else {
              pwVar17 = (wchar_t *)(param_1->JournalFile).Data.AllocatorInstance.Data;
            }
            plVar14 = (longlong *)(**(code **)((longlong)*pIVar10 + 0x110))(pIVar10,pwVar17,1,0);
            plVar11 = (longlong *)0x0;
            if (plVar14 == (longlong *)0x0) {
LAB_1445b7f26:
              lVar13 = -1;
            }
            else {
              lVar15 = (**(code **)(*plVar14 + 0x50))(plVar14);
              lVar13 = lVar15 + -0x10;
              plVar11 = plVar14;
              if (lVar15 < 1) goto LAB_1445b7f26;
            }
            if (lVar13 < 0) {
              DVar8 = FWindowsPlatformMisc::GetLastError();
              ::FString::PrintfImpl(&local_130,L"Failed to open journal \'%s\'");
              pTVar12 = &UnifiedError::IoStoreOnDemand::MakeJournalError
                                   ((TValueOrError<void,UE::UnifiedError::FError> *)&local_110,
                                    CommitJournalFailed,FileOpenFailed,&local_130,DVar8)->Error;
              TOptional<UE::UnifiedError::FError>::operator=(&local_298,pTVar12);
              (__return_storage_ptr__->Error).bIsSet = local_298.bIsSet;
              if (local_298.bIsSet != false) {
                (__return_storage_ptr__->Error).TypedValue.ErrorCode =
                     local_298.TypedValue.ErrorCode;
                (__return_storage_ptr__->Error).TypedValue.ModuleId = local_298.TypedValue.ModuleId;
                (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference =
                     (IErrorDetails *)0x0;
                if (local_298.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                  (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference =
                       local_298.TypedValue.ErrorDetails.Reference;
                  (**(code **)((longlong)*local_298.TypedValue.ErrorDetails.Reference + 8))
                            (local_298.TypedValue.ErrorDetails.Reference,local_1cc);
                }
              }
              TOptional<UE::UnifiedError::FError>::~TOptional<UE::UnifiedError::FError>(&local_110);
              if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_130.Data.AllocatorInstance.Data);
              }
              if (plVar14 != (longlong *)0x0) {
                (**(code **)*plVar14)(plVar14,1);
              }
              ScopeExitSupport::TScopeGuard<`UE::IoStore::FCasJournal::Commit'::__l2::<lambda_1>_>::
              ~TScopeGuard<_UE::IoStore::FCasJournal::Commit_::__l2::<lambda_1>_>(&local_278);
              TVar4.Reference = local_298.TypedValue.ErrorDetails.Reference;
            }
            else {
              cVar7 = (**(code **)(*plVar11 + 0x10))(plVar11,lVar13);
              if (cVar7 == '\0') {
                DVar8 = FWindowsPlatformMisc::GetLastError();
                ::FString::PrintfImpl
                          (&local_120,L"Failed to seek to journal entries offset %lld in \'%s\'");
                pTVar12 = &UnifiedError::IoStoreOnDemand::MakeJournalError
                                     (&local_f8,CommitJournalFailed,FileSeekFailed,&local_120,DVar8)
                           ->Error;
                TOptional<UE::UnifiedError::FError>::operator=(&local_298,pTVar12);
                (__return_storage_ptr__->Error).bIsSet = local_298.bIsSet;
                if (local_298.bIsSet != false) {
                  (__return_storage_ptr__->Error).TypedValue.ErrorCode =
                       local_298.TypedValue.ErrorCode;
                  (__return_storage_ptr__->Error).TypedValue.ModuleId =
                       local_298.TypedValue.ModuleId;
                  (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference =
                       (IErrorDetails *)0x0;
                  if (local_298.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                    (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference =
                         local_298.TypedValue.ErrorDetails.Reference;
                    (**(code **)((longlong)*local_298.TypedValue.ErrorDetails.Reference + 8))
                              (local_298.TypedValue.ErrorDetails.Reference,local_1c8);
                  }
                }
                TValueOrError<void,UE::UnifiedError::FError>::
                ~TValueOrError<void,UE::UnifiedError::FError>(&local_f8);
                if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_120.Data.AllocatorInstance.Data);
                }
                if (plVar14 != (longlong *)0x0) {
                  (**(code **)*plVar14)(plVar14,1);
                }
                ScopeExitSupport::TScopeGuard<`UE::IoStore::FCasJournal::Commit'::__l2::<lambda_1>_>
                ::~TScopeGuard<_UE::IoStore::FCasJournal::Commit_::__l2::<lambda_1>_>(&local_278);
                TVar4.Reference = local_298.TypedValue.ErrorDetails.Reference;
              }
              else {
                local_268 = (longlong)(param_1->Entries).ArrayNum * 0x18;
                cVar7 = (**(code **)(*plVar11 + 0x30))
                                  (plVar11,(param_1->Entries).AllocatorInstance.Data);
                puVar5 = local_258;
                if (cVar7 == '\0') {
                  DVar8 = FWindowsPlatformMisc::GetLastError();
                  ::FString::PrintfImpl(&local_1b0,L"Failed to write journal entries to \'%s\'");
                  pTVar12 = &UnifiedError::IoStoreOnDemand::MakeJournalError
                                       (&local_e0,CommitJournalFailed,WriteError,&local_1b0,DVar8)->
                             Error;
                  TOptional<UE::UnifiedError::FError>::operator=(&local_298,pTVar12);
                  (__return_storage_ptr__->Error).bIsSet = local_298.bIsSet;
                  if (local_298.bIsSet != false) {
                    (__return_storage_ptr__->Error).TypedValue.ErrorCode =
                         local_298.TypedValue.ErrorCode;
                    (__return_storage_ptr__->Error).TypedValue.ModuleId =
                         local_298.TypedValue.ModuleId;
                    (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference =
                         (IErrorDetails *)0x0;
                    if (local_298.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                      (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference =
                           local_298.TypedValue.ErrorDetails.Reference;
                      (**(code **)((longlong)*local_298.TypedValue.ErrorDetails.Reference + 8))
                                (local_298.TypedValue.ErrorDetails.Reference,local_1c4);
                    }
                  }
                  TValueOrError<void,UE::UnifiedError::FError>::
                  ~TValueOrError<void,UE::UnifiedError::FError>(&local_e0);
                  if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
                  }
                  if (plVar14 != (longlong *)0x0) {
                    (**(code **)*plVar14)(plVar14,1);
                  }
                  ScopeExitSupport::
                  TScopeGuard<`UE::IoStore::FCasJournal::Commit'::__l2::<lambda_1>_>::
                  ~TScopeGuard<_UE::IoStore::FCasJournal::Commit_::__l2::<lambda_1>_>(&local_278);
                  TVar4.Reference = local_298.TypedValue.ErrorDetails.Reference;
                }
                else {
                  *local_258 = *local_258 + 1;
                  *local_260 = *local_260 + local_268;
                  local_68[0] = FFooter::MagicSequence[0];
                  local_68[1] = FFooter::MagicSequence[1];
                  local_68[2] = FFooter::MagicSequence[2];
                  local_68[3] = FFooter::MagicSequence[3];
                  auStack_64[0] = FFooter::MagicSequence[4];
                  auStack_64[1] = FFooter::MagicSequence[5];
                  auStack_64[2] = FFooter::MagicSequence[6];
                  auStack_64[3] = FFooter::MagicSequence[7];
                  auStack_60[0] = FFooter::MagicSequence[8];
                  auStack_60[1] = FFooter::MagicSequence[9];
                  auStack_60[2] = FFooter::MagicSequence[10];
                  auStack_60[3] = FFooter::MagicSequence[0xb];
                  auStack_5c[0] = FFooter::MagicSequence[0xc];
                  auStack_5c[1] = FFooter::MagicSequence[0xd];
                  auStack_5c[2] = FFooter::MagicSequence[0xe];
                  auStack_5c[3] = FFooter::MagicSequence[0xf];
                  cVar7 = (**(code **)(*plVar11 + 0x30))(plVar11,local_68,0x10);
                  if (cVar7 == '\0') {
                    DVar8 = FWindowsPlatformMisc::GetLastError();
                    ::FString::PrintfImpl(&local_1a0,L"Failed to write journal footer to \'%s\'");
                    pTVar12 = &UnifiedError::IoStoreOnDemand::MakeJournalError
                                         (&local_c8,CommitJournalFailed,WriteError,&local_1a0,DVar8)
                               ->Error;
                    TOptional<UE::UnifiedError::FError>::operator=(&local_298,pTVar12);
                    (__return_storage_ptr__->Error).bIsSet = local_298.bIsSet;
                    if (local_298.bIsSet != false) {
                      (__return_storage_ptr__->Error).TypedValue.ErrorCode =
                           local_298.TypedValue.ErrorCode;
                      (__return_storage_ptr__->Error).TypedValue.ModuleId =
                           local_298.TypedValue.ModuleId;
                      (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference =
                           (IErrorDetails *)0x0;
                      if (local_298.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                        (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference =
                             local_298.TypedValue.ErrorDetails.Reference;
                        (**(code **)((longlong)*local_298.TypedValue.ErrorDetails.Reference + 8))
                                  (local_298.TypedValue.ErrorDetails.Reference,local_1c0);
                      }
                    }
                    TValueOrError<void,UE::UnifiedError::FError>::
                    ~TValueOrError<void,UE::UnifiedError::FError>(&local_c8);
                    if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
                    }
                    if (plVar14 != (longlong *)0x0) {
                      (**(code **)*plVar14)(plVar14,1);
                    }
                    ScopeExitSupport::
                    TScopeGuard<`UE::IoStore::FCasJournal::Commit'::__l2::<lambda_1>_>::
                    ~TScopeGuard<_UE::IoStore::FCasJournal::Commit_::__l2::<lambda_1>_>(&local_278);
                    TVar4.Reference = local_298.TypedValue.ErrorDetails.Reference;
                  }
                  else {
                    *puVar5 = *puVar5 + 1;
                    *local_260 = *local_260 + 0x10;
                    cVar7 = (**(code **)(*plVar11 + 0x38))(plVar11,0);
                    if (cVar7 == '\0') {
                      DVar8 = FWindowsPlatformMisc::GetLastError();
                      ::FString::PrintfImpl(&local_190,L"Failed to flush journal entries to \'%s\'")
                      ;
                      pTVar12 = &UnifiedError::IoStoreOnDemand::MakeJournalError
                                           (&local_b0,CommitJournalFailed,FileFlushFailed,&local_190
                                            ,DVar8)->Error;
                      TOptional<UE::UnifiedError::FError>::operator=(&local_298,pTVar12);
                      (__return_storage_ptr__->Error).bIsSet = local_298.bIsSet;
                      if (local_298.bIsSet != false) {
                        (__return_storage_ptr__->Error).TypedValue.ErrorCode =
                             local_298.TypedValue.ErrorCode;
                        (__return_storage_ptr__->Error).TypedValue.ModuleId =
                             local_298.TypedValue.ModuleId;
                        (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference =
                             (IErrorDetails *)0x0;
                        if (local_298.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                          (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference =
                               local_298.TypedValue.ErrorDetails.Reference;
                          (**(code **)((longlong)*local_298.TypedValue.ErrorDetails.Reference + 8))
                                    (local_298.TypedValue.ErrorDetails.Reference,local_1bc);
                        }
                      }
                      TValueOrError<void,UE::UnifiedError::FError>::
                      ~TValueOrError<void,UE::UnifiedError::FError>(&local_b0);
                      if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_190.Data.AllocatorInstance.Data);
                      }
                      if (plVar14 != (longlong *)0x0) {
                        (**(code **)*plVar14)(plVar14,1);
                      }
                      ScopeExitSupport::
                      TScopeGuard<`UE::IoStore::FCasJournal::Commit'::__l2::<lambda_1>_>::
                      ~TScopeGuard<_UE::IoStore::FCasJournal::Commit_::__l2::<lambda_1>_>
                                (&local_278);
                      TVar4.Reference = local_298.TypedValue.ErrorDetails.Reference;
                    }
                    else {
                      *puVar5 = *puVar5 + 1;
                      if (4 < (byte)LogIoStoreOnDemand._0_1_) {
                        Logging::Private::BasicLog<5>
                                  (&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
                      }
                      if ((local_298.bIsSet != false) &&
                         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Result.HasValue()",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandInstallCache.cpp"
                                             ,0x4b0,L""), bVar6)) {
                        pcVar1 = (code *)swi(3);
                        pTVar16 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar1)();
                        return pTVar16;
                      }
                      (__return_storage_ptr__->Error).bIsSet = local_298.bIsSet;
                      if (local_298.bIsSet != false) {
                        (__return_storage_ptr__->Error).TypedValue.ErrorCode =
                             local_298.TypedValue.ErrorCode;
                        (__return_storage_ptr__->Error).TypedValue.ModuleId =
                             local_298.TypedValue.ModuleId;
                        (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference =
                             (IErrorDetails *)0x0;
                        local_298.TypedValue.ErrorCode = 0;
                        local_298.TypedValue.ModuleId = 0;
                        if (local_298.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                          (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference =
                               local_298.TypedValue.ErrorDetails.Reference;
                          (**(code **)((longlong)*local_298.TypedValue.ErrorDetails.Reference + 8))
                                    (local_298.TypedValue.ErrorDetails.Reference,local_1b8);
                          TVar4.Reference = local_298.TypedValue.ErrorDetails.Reference;
                          if (local_298.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                            local_298.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
                            (**(code **)((longlong)*TVar4.Reference + 0x10))();
                          }
                        }
                      }
                      if (plVar14 != (longlong *)0x0) {
                        (**(code **)*plVar14)(plVar14,1);
                      }
                      ScopeExitSupport::
                      TScopeGuard<`UE::IoStore::FCasJournal::Commit'::__l2::<lambda_1>_>::
                      ~TScopeGuard<_UE::IoStore::FCasJournal::Commit_::__l2::<lambda_1>_>
                                (&local_278);
                      TVar4.Reference = local_298.TypedValue.ErrorDetails.Reference;
                    }
                  }
                }
              }
            }
            goto joined_r0x0001445b8000;
          }
          DVar8 = FWindowsPlatformMisc::GetLastError();
          ::FString::PrintfImpl(&local_180,L"Found to validate journal footer in \'%s\'");
          pTVar12 = &UnifiedError::IoStoreOnDemand::MakeJournalError
                               (&local_208,CommitJournalFailed,ReadError,&local_180,DVar8)->Error;
          TVar4.Reference = local_298.TypedValue.ErrorDetails.Reference;
          if (pTVar12 != &local_298) {
            if (pTVar12->bIsSet == false) {
              if (local_298.bIsSet != false) {
                local_298.TypedValue.ErrorCode = 0;
                local_298.TypedValue.ModuleId = 0;
                if (local_298.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                  local_298.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
                  (**(code **)((longlong)*TVar4.Reference + 0x10))();
                  if (local_298.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                    (**(code **)((longlong)*local_298.TypedValue.ErrorDetails.Reference + 0x10))();
                  }
                }
                local_298.bIsSet = false;
              }
            }
            else {
              if ((local_298.bIsSet != false) &&
                 (local_298.TypedValue.ErrorCode = 0, local_298.TypedValue.ModuleId = 0,
                 local_298.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
                local_298.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
                (**(code **)((longlong)*TVar4.Reference + 0x10))();
                if (local_298.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                  (**(code **)((longlong)*local_298.TypedValue.ErrorDetails.Reference + 0x10))();
                }
              }
              UnifiedError::FError::FError(&local_298.TypedValue,&pTVar12->TypedValue);
              local_298.bIsSet = true;
            }
          }
          (__return_storage_ptr__->Error).bIsSet = local_298.bIsSet;
          if (local_298.bIsSet != false) {
            (__return_storage_ptr__->Error).TypedValue.ErrorCode = local_298.TypedValue.ErrorCode;
            (__return_storage_ptr__->Error).TypedValue.ModuleId = local_298.TypedValue.ModuleId;
            (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0
            ;
            if (local_298.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
              (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference =
                   local_298.TypedValue.ErrorDetails.Reference;
              (**(code **)((longlong)*local_298.TypedValue.ErrorDetails.Reference + 8))
                        (local_298.TypedValue.ErrorDetails.Reference,&local_258);
            }
          }
          TVar4.Reference = local_208.Error.TypedValue.ErrorDetails.Reference;
          local_170.Data.AllocatorInstance.Data = local_180.Data.AllocatorInstance.Data;
          if ((local_208.Error.bIsSet != false) &&
             (local_208.Error.TypedValue.ErrorCode = 0, local_208.Error.TypedValue.ModuleId = 0,
             local_208.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
            local_208.Error.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
            (**(code **)((longlong)*TVar4.Reference + 0x10))();
            local_170.Data.AllocatorInstance.Data = local_180.Data.AllocatorInstance.Data;
            if (local_208.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
              (**(code **)((longlong)*local_208.Error.TypedValue.ErrorDetails.Reference + 0x10))();
              local_170.Data.AllocatorInstance.Data = local_180.Data.AllocatorInstance.Data;
            }
          }
        }
      }
      if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.Data.AllocatorInstance.Data);
      }
      (**(code **)*plVar11)(plVar11,1);
      ScopeExitSupport::TScopeGuard<`UE::IoStore::FCasJournal::Commit'::__l2::<lambda_1>_>::
      ~TScopeGuard<_UE::IoStore::FCasJournal::Commit_::__l2::<lambda_1>_>(&local_278);
      TVar4.Reference = local_298.TypedValue.ErrorDetails.Reference;
      goto joined_r0x0001445b8000;
    }
    DVar8 = FWindowsPlatformMisc::GetLastError();
    ::FString::PrintfImpl(&local_150,L"Failed to validate journal header in \'%s\'");
    pTVar12 = &UnifiedError::IoStoreOnDemand::MakeJournalError
                         (&local_238,CommitJournalFailed,FileCorrupt,&local_150,DVar8)->Error;
    TVar4.Reference = local_298.TypedValue.ErrorDetails.Reference;
    if (pTVar12 != &local_298) {
      if (pTVar12->bIsSet == false) {
        if (local_298.bIsSet != false) {
          local_298.TypedValue.ErrorCode = 0;
          local_298.TypedValue.ModuleId = 0;
          if (local_298.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
            local_298.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
            (**(code **)((longlong)*TVar4.Reference + 0x10))();
            if (local_298.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
              (**(code **)((longlong)*local_298.TypedValue.ErrorDetails.Reference + 0x10))();
            }
          }
          local_298.bIsSet = false;
        }
      }
      else {
        if ((local_298.bIsSet != false) &&
           (local_298.TypedValue.ErrorCode = 0, local_298.TypedValue.ModuleId = 0,
           local_298.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
          local_298.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
          (**(code **)((longlong)*TVar4.Reference + 0x10))();
          if (local_298.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
            (**(code **)((longlong)*local_298.TypedValue.ErrorDetails.Reference + 0x10))();
          }
        }
        UnifiedError::FError::FError(&local_298.TypedValue,&pTVar12->TypedValue);
        local_298.bIsSet = true;
      }
    }
    (__return_storage_ptr__->Error).bIsSet = local_298.bIsSet;
    if (local_298.bIsSet != false) {
      (__return_storage_ptr__->Error).TypedValue.ErrorCode = local_298.TypedValue.ErrorCode;
      (__return_storage_ptr__->Error).TypedValue.ModuleId = local_298.TypedValue.ModuleId;
      (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
      if (local_298.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
        (__return_storage_ptr__->Error).TypedValue.ErrorDetails.Reference =
             local_298.TypedValue.ErrorDetails.Reference;
        (**(code **)((longlong)*local_298.TypedValue.ErrorDetails.Reference + 8))
                  (local_298.TypedValue.ErrorDetails.Reference,local_1d4);
      }
    }
    TVar4.Reference = local_238.Error.TypedValue.ErrorDetails.Reference;
    if ((local_238.Error.bIsSet != false) &&
       (local_238.Error.TypedValue.ErrorCode = 0, local_238.Error.TypedValue.ModuleId = 0,
       local_238.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
      local_238.Error.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
      (**(code **)((longlong)*TVar4.Reference + 0x10))();
      if (local_238.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
        (**(code **)((longlong)*local_238.Error.TypedValue.ErrorDetails.Reference + 0x10))();
      }
    }
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
    (**(code **)*plVar11)(plVar11,1);
    if (local_298.bIsSet != false) {
      bVar6 = UnifiedError::IsCancellationError(&local_298.TypedValue);
      goto joined_r0x0001445b7cb0;
    }
  }
  LOCK();
  bVar6 = FInstallCacheAnalytics::Mutex.State == (atomic<unsigned_char>)0x0;
  if (bVar6) {
    FInstallCacheAnalytics::Mutex.State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar6) {
    FMutex::LockSlow(&FInstallCacheAnalytics::Mutex);
  }
  if (local_298.bIsSet != false) {
    InstallCacheAnalytics.JournalCommitErrorCount =
         InstallCacheAnalytics.JournalCommitErrorCount + 1;
  }
  InstallCacheAnalytics.JournalCommitCount = InstallCacheAnalytics.JournalCommitCount + 1;
  LOCK();
  aVar3 = FInstallCacheAnalytics::Mutex.State + -1;
  UNLOCK();
  bVar2 = (byte)FInstallCacheAnalytics::Mutex.State & 2;
  FInstallCacheAnalytics::Mutex.State = aVar3;
  TVar4.Reference = local_298.TypedValue.ErrorDetails.Reference;
  if (bVar2 != 0) {
    FMutex::WakeWaitingThread(&FInstallCacheAnalytics::Mutex);
    TVar4.Reference = local_298.TypedValue.ErrorDetails.Reference;
  }
joined_r0x0001445b8000:
  if ((local_298.bIsSet != false) && (TVar4.Reference != (IErrorDetails *)0x0)) {
    local_298.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
    local_298.TypedValue.ErrorCode = 0;
    local_298.TypedValue.ModuleId = 0;
    (**(code **)((longlong)*TVar4.Reference + 0x10))();
    if (local_298.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
      (**(code **)((longlong)*local_298.TypedValue.ErrorDetails.Reference + 0x10))();
    }
  }
  return __return_storage_ptr__;
}

// Create @ 1445bdf30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<void,UE::UnifiedError::FError> * __cdecl
UE::IoStore::FCasJournal::Create
          (TValueOrError<void,UE::UnifiedError::FError> *__return_storage_ptr__,FString *param_1)

{
  char cVar1;
  DWORD DVar2;
  FPlatformFileManager *this;
  IPlatformFile *pIVar3;
  longlong *plVar4;
  wchar_t *pwVar5;
  undefined1 auStackY_98 [32];
  FString local_68;
  uchar local_58 [4];
  uchar auStack_54 [4];
  uchar auStack_50 [4];
  uchar auStack_4c [4];
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  uchar local_38 [4];
  uchar auStack_34 [4];
  uchar auStack_30 [4];
  uchar auStack_2c [4];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_98;
  this = FPlatformFileManager::Get();
  pIVar3 = FPlatformFileManager::GetPlatformFile(this);
  if ((param_1->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar3 + 0x88))(pIVar3,pwVar5);
  if ((param_1->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  plVar4 = (longlong *)(**(code **)((longlong)*pIVar3 + 0x110))(pIVar3,pwVar5,0,0);
  if (plVar4 == (longlong *)0x0) {
    DVar2 = FWindowsPlatformMisc::GetLastError();
    ::FString::PrintfImpl(&local_68,L"Failed to create journal \'%s\'");
    UnifiedError::IoStoreOnDemand::MakeJournalError
              (__return_storage_ptr__,CreateJournalFailed,FileOpenFailed,&local_68,DVar2);
    if (local_68.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return __return_storage_ptr__;
    }
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
    return __return_storage_ptr__;
  }
  local_48 = 1;
  local_44 = 0;
  local_58[0] = FHeader::MagicSequence[0];
  local_58[1] = FHeader::MagicSequence[1];
  local_58[2] = FHeader::MagicSequence[2];
  local_58[3] = FHeader::MagicSequence[3];
  auStack_54[0] = FHeader::MagicSequence[4];
  auStack_54[1] = FHeader::MagicSequence[5];
  auStack_54[2] = FHeader::MagicSequence[6];
  auStack_54[3] = FHeader::MagicSequence[7];
  auStack_50[0] = FHeader::MagicSequence[8];
  auStack_50[1] = FHeader::MagicSequence[9];
  auStack_50[2] = FHeader::MagicSequence[10];
  auStack_50[3] = FHeader::MagicSequence[0xb];
  auStack_4c[0] = FHeader::MagicSequence[0xc];
  auStack_4c[1] = FHeader::MagicSequence[0xd];
  auStack_4c[2] = FHeader::MagicSequence[0xe];
  auStack_4c[3] = FHeader::MagicSequence[0xf];
  local_3c = 0;
  cVar1 = (**(code **)(*plVar4 + 0x30))(plVar4,local_58,0x20);
  if (cVar1 == '\0') {
    DVar2 = FWindowsPlatformMisc::GetLastError();
    pwVar5 = L"Failed to write journal header in \'%s\'";
  }
  else {
    local_38[0] = FFooter::MagicSequence[0];
    local_38[1] = FFooter::MagicSequence[1];
    local_38[2] = FFooter::MagicSequence[2];
    local_38[3] = FFooter::MagicSequence[3];
    auStack_34[0] = FFooter::MagicSequence[4];
    auStack_34[1] = FFooter::MagicSequence[5];
    auStack_34[2] = FFooter::MagicSequence[6];
    auStack_34[3] = FFooter::MagicSequence[7];
    auStack_30[0] = FFooter::MagicSequence[8];
    auStack_30[1] = FFooter::MagicSequence[9];
    auStack_30[2] = FFooter::MagicSequence[10];
    auStack_30[3] = FFooter::MagicSequence[0xb];
    auStack_2c[0] = FFooter::MagicSequence[0xc];
    auStack_2c[1] = FFooter::MagicSequence[0xd];
    auStack_2c[2] = FFooter::MagicSequence[0xe];
    auStack_2c[3] = FFooter::MagicSequence[0xf];
    cVar1 = (**(code **)(*plVar4 + 0x30))(plVar4,local_38,0x10);
    if (cVar1 != '\0') {
      (__return_storage_ptr__->Error).bIsSet = false;
      goto LAB_1445be0d9;
    }
    DVar2 = FWindowsPlatformMisc::GetLastError();
    pwVar5 = L"Failed to write journal footer in \'%s\'";
  }
  ::FString::PrintfImpl(&local_68,pwVar5);
  UnifiedError::IoStoreOnDemand::MakeJournalError
            (__return_storage_ptr__,CreateJournalFailed,WriteError,&local_68,DVar2);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
LAB_1445be0d9:
  (**(code **)*plVar4)(plVar4,1);
  return __return_storage_ptr__;
}

// Replay @ 1445f6ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TValueOrError<void,UE::UnifiedError::FError> * __cdecl
UE::IoStore::FCasJournal::Replay
          (TValueOrError<void,UE::UnifiedError::FError> *__return_storage_ptr__,FString *param_1,
          TFunction<void___cdecl(UE::IoStore::FCasJournal::FEntry_const_&)> *param_2)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  char cVar3;
  bool bVar4;
  DWORD DVar5;
  int iVar6;
  FPlatformFileManager *this;
  IPlatformFile *pIVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  TValueOrError<void,UE::UnifiedError::FError> *pTVar11;
  longlong *plVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  ulonglong uVar15;
  ForAnyElementType FVar16;
  undefined1 auStackY_168 [32];
  undefined1 local_138 [8];
  TArray<UE::IoStore::FCasJournal::FEntry,TSizedDefaultAllocator<32>_> local_130;
  TFunction<void___cdecl(UE::IoStore::FCasJournal::FEntry_const_&)> *local_120;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  uint local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_120 = param_2;
  this = FPlatformFileManager::Get();
  pIVar7 = FPlatformFileManager::GetPlatformFile(this);
  if ((param_1->Data).ArrayNum == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  cVar3 = (**(code **)((longlong)*pIVar7 + 0x78))(pIVar7,pwVar13);
  if (cVar3 == '\0') {
    DVar5 = FWindowsPlatformMisc::GetLastError();
    ::FString::PrintfImpl(&local_118,L"Failed to find \'%s\'");
    UnifiedError::IoStoreOnDemand::MakeJournalError
              (__return_storage_ptr__,ReplayJournalFailed,NotFound,&local_118,DVar5);
LAB_1445f6bc0:
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    return __return_storage_ptr__;
  }
  if ((param_1->Data).ArrayNum == 0) {
    pwVar13 = L"";
  }
  else {
    pwVar13 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  plVar8 = (longlong *)(**(code **)((longlong)*pIVar7 + 0xe8))(pIVar7,pwVar13,0);
  if (plVar8 == (longlong *)0x0) {
    DVar5 = FWindowsPlatformMisc::GetLastError();
    ::FString::PrintfImpl(&local_108,L"Failed to open \'%s\'");
    UnifiedError::IoStoreOnDemand::MakeJournalError
              (__return_storage_ptr__,ReplayJournalFailed,FileOpenFailed,&local_108,DVar5);
    local_118.Data.AllocatorInstance.Data = local_108.Data.AllocatorInstance.Data;
    goto LAB_1445f6bc0;
  }
  local_68 = 0;
  local_64 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_5c = 0;
  cVar3 = (**(code **)(*plVar8 + 0x20))(plVar8,&local_78,0x20);
  if (((cVar3 == '\0') || (iVar6 = memcmp(&local_78,"CASJOURNALHEADER",0x10), iVar6 != 0)) ||
     (1 < local_68)) {
    DVar5 = FWindowsPlatformMisc::GetLastError();
    ::FString::PrintfImpl(&local_88,L"Failed to validate journal header in \'%s\'");
    UnifiedError::IoStoreOnDemand::MakeJournalError
              (__return_storage_ptr__,ReplayJournalFailed,ReadError,&local_88,DVar5);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    (**(code **)*plVar8)(plVar8,1);
    return __return_storage_ptr__;
  }
  lVar9 = (**(code **)(*plVar8 + 0x50))(plVar8);
  lVar14 = (lVar9 + -0x30) / 6 + (lVar9 + -0x30 >> 0x3f);
  lVar14 = (lVar14 >> 2) - (lVar14 >> 0x3f);
  if (lVar14 < 0) {
    DVar5 = FWindowsPlatformMisc::GetLastError();
    ::FString::PrintfImpl(&local_f8,L"Invalid journal file \'%s\'");
    UnifiedError::IoStoreOnDemand::MakeJournalError
              (__return_storage_ptr__,ReplayJournalFailed,FileCorrupt,&local_f8,DVar5);
  }
  else {
    if (lVar14 == 0) {
      (__return_storage_ptr__->Error).bIsSet = false;
      goto LAB_1445f6d10;
    }
    if (-1 < lVar9 + -0x10) {
      uVar10 = (**(code **)(*plVar8 + 8))(plVar8);
      cVar3 = (**(code **)(*plVar8 + 0x10))(plVar8,lVar9 + -0x10);
      if (cVar3 == '\0') {
        DVar5 = FWindowsPlatformMisc::GetLastError();
        ::FString::PrintfImpl(&local_d8,L"Failed to seek to footer offset %lld in \'%s\'");
        UnifiedError::IoStoreOnDemand::MakeJournalError
                  (__return_storage_ptr__,ReplayJournalFailed,FileSeekFailed,&local_d8,DVar5);
      }
      else {
        local_58 = 0;
        uStack_50 = 0;
        cVar3 = (**(code **)(*plVar8 + 0x20))(plVar8,&local_58,0x10);
        if ((cVar3 == '\0') || (iVar6 = memcmp(&local_58,"CASJOURNALFOOTER",0x10), iVar6 != 0)) {
          DVar5 = FWindowsPlatformMisc::GetLastError();
          ::FString::PrintfImpl(&local_98,L"Failed to validate journal footer in \'%s\'");
          UnifiedError::IoStoreOnDemand::MakeJournalError
                    (__return_storage_ptr__,ReplayJournalFailed,ReadError,&local_98,DVar5);
          local_d8.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
        }
        else {
          cVar3 = (**(code **)(*plVar8 + 0x10))(plVar8,uVar10);
          if (cVar3 == '\0') {
            DVar5 = FWindowsPlatformMisc::GetLastError();
            ::FString::PrintfImpl(&local_c8,L"Failed to seek to entries offset %lld in \'%s\'");
            UnifiedError::IoStoreOnDemand::MakeJournalError
                      (__return_storage_ptr__,ReplayJournalFailed,FileSeekFailed,&local_c8,DVar5);
            local_d8.Data.AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
          }
          else {
            local_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_130.ArrayNum = 0;
            local_130.ArrayMax = 0;
            if ((lVar14 != (int)lVar14) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IntFitsIn<OutType>(In)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                   ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"),
               bVar4)) {
              pcVar1 = (code *)swi(3);
              pTVar11 = (TValueOrError<void,UE::UnifiedError::FError> *)(*pcVar1)();
              return pTVar11;
            }
            TArray<UE::IoStore::FCasJournal::FEntry,TSizedDefaultAllocator<32>_>::SetNumZeroed
                      (&local_130,(int)lVar14,Default);
            cVar3 = (**(code **)(*plVar8 + 0x20))
                              (plVar8,local_130.AllocatorInstance.Data,lVar14 * 0x18);
            if (cVar3 == '\0') {
              DVar5 = FWindowsPlatformMisc::GetLastError();
              ::FString::PrintfImpl(&local_b8,L"Failed to read journal entries in \'%s\'");
              UnifiedError::IoStoreOnDemand::MakeJournalError
                        (__return_storage_ptr__,ReplayJournalFailed,ReadError,&local_b8,DVar5);
            }
            else {
              if (4 < (byte)LogIoStoreOnDemand._0_1_) {
                Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand)
                ;
              }
              iVar6 = local_130.ArrayNum;
              uVar15 = (ulonglong)local_130.ArrayNum;
              local_118.Data.AllocatorInstance.Data =
                   local_130.AllocatorInstance.Data + uVar15 * 0x18;
              FVar16.Data = local_130.AllocatorInstance.Data;
              while( true ) {
                FVar2.Data = local_118.Data.AllocatorInstance.Data;
                if ((int)uVar15 != iVar6) {
                  `TCheckedPointerIterator<UE::IoStore::FCasJournal::FEntry,int,0>::operator!='::
                  __l2::<lambda_1>::operator()(local_138);
                }
                if (FVar16.Data == FVar2.Data) {
                  (__return_storage_ptr__->Error).bIsSet = false;
                  local_d8.Data.AllocatorInstance.Data = local_130.AllocatorInstance.Data;
                  goto LAB_1445f70eb;
                }
                if (*FVar16.Data == (FScriptContainerElement)0x5) break;
                Core::Private::Function::CheckCallable(*(void **)local_120);
                pcVar1 = *(code **)local_120;
                plVar12 = *(longlong **)&local_120->field_0x28;
                if (*(longlong **)&local_120->field_0x28 == (longlong *)0x0) {
                  plVar12 = (longlong *)&local_120->field_0x10;
                }
                uVar10 = (**(code **)(*plVar12 + 8))();
                (*pcVar1)(uVar10,FVar16.Data);
                uVar15 = local_130._8_8_ & 0xffffffff;
                FVar16.Data = FVar16.Data + 0x18;
              }
              if (2 < (byte)LogIoStoreOnDemand._0_1_) {
                Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand)
                ;
              }
              DVar5 = FWindowsPlatformMisc::GetLastError();
              ::FString::PrintfImpl(&local_a8,L"Found critical error journal entry in \'%s\'");
              UnifiedError::IoStoreOnDemand::MakeJournalError
                        (__return_storage_ptr__,ReplayJournalFailed,InvalidCode,&local_a8,DVar5);
              local_b8.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
            }
            local_d8.Data.AllocatorInstance.Data = local_130.AllocatorInstance.Data;
            if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b8.Data.AllocatorInstance.Data);
              local_d8.Data.AllocatorInstance.Data = local_130.AllocatorInstance.Data;
            }
          }
        }
      }
LAB_1445f70eb:
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      (**(code **)*plVar8)(plVar8,1);
      return __return_storage_ptr__;
    }
    DVar5 = FWindowsPlatformMisc::GetLastError();
    ::FString::PrintfImpl(&local_e8,L"Invalid journal footer in \'%s\'");
    UnifiedError::IoStoreOnDemand::MakeJournalError
              (__return_storage_ptr__,ReplayJournalFailed,FileCorrupt,&local_e8,DVar5);
    local_f8.Data.AllocatorInstance.Data = local_e8.Data.AllocatorInstance.Data;
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
LAB_1445f6d10:
  (**(code **)*plVar8)(plVar8,1);
  return __return_storage_ptr__;
}

