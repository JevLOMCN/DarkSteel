// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 7

// AreAllTasksFinished @ 141926d30

bool __thiscall
FRemoteConfigAsyncTaskManager::AreAllTasksFinished(FRemoteConfigAsyncTaskManager *this,bool param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  void *_Src;
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  FAsyncTaskBase *this_00;
  bool bVar9;
  FString local_a8;
  undefined1 local_98 [32];
  longlong local_78;
  TSet<TTuple<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*>,TDefaultMapHashableKeyFuncs<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,0>,FDefaultSetAllocator>
  *pTStack_70;
  longlong *local_68;
  undefined1 auStack_60 [16];
  uint uStack_50;
  uint uStack_4c;
  longlong local_48;
  TSet<TTuple<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*>,TDefaultMapHashableKeyFuncs<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,0>,FDefaultSetAllocator>
  *pTStack_40;
  FRemoteConfigAsyncTaskManager *local_38;
  undefined2 local_30;
  
  lpCriticalSection = &this->SynchronizationObject;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  TSet<TTuple<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*>,TDefaultMapHashableKeyFuncs<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_98,
             (TSet<TTuple<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*>,TDefaultMapHashableKeyFuncs<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,0>,FDefaultSetAllocator>
              *)this);
  local_30._0_1_ = '\0';
  local_30._1_1_ = '\0';
  stack0xffffffffffffffa8 = local_98._16_16_;
  local_68 = (longlong *)local_98._0_8_;
  auStack_60._0_8_ = local_98._8_8_;
  local_30 = 0;
  local_48 = local_78;
  pTStack_40 = pTStack_70;
  uVar4 = local_98._24_8_ >> 0x20;
  uVar6 = local_98._28_4_;
  local_38 = this;
  if ((int)uVar6 < *(int *)(local_98._16_8_ + 0x18)) {
    if ((this->CachedWriteTasks).ArrayNum < 1) {
      do {
        plVar1 = local_68;
        lVar5 = (longlong)(int)uVar4 * 0x20;
        local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_a8.Data.ArrayNum = *(int *)(lVar5 + 8 + *local_68);
        lVar8 = (longlong)local_a8.Data.ArrayNum;
        _Src = *(void **)(lVar5 + *local_68);
        if (local_a8.Data.ArrayNum == 0) {
          local_a8.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_a8.Data.ArrayNum,0,(ForAnyElementType *)&local_a8,
                     local_a8.Data.ArrayNum,&local_a8.Data.ArrayMax);
          memcpy(local_a8.Data.AllocatorInstance.Data,_Src,lVar8 * 2);
        }
        if (local_a8.Data.ArrayNum == 0) {
          pwVar7 = L"";
          iVar3 = 0;
        }
        else {
          iVar3 = local_a8.Data.ArrayNum + -1;
          pwVar7 = (wchar_t *)local_a8.Data.AllocatorInstance.Data;
        }
        uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar7);
        iVar3 = TSet<TTuple<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*>,TDefaultMapHashableKeyFuncs<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FString>
                          ((TSet<TTuple<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*>,TDefaultMapHashableKeyFuncs<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,0>,FDefaultSetAllocator>
                            *)this,uVar2,&local_a8);
        if ((iVar3 == -1) ||
           (lVar5 = (longlong)iVar3 * 0x20 + *(longlong *)&this->PendingTasks, lVar5 == 0)) {
          this_00 = (FAsyncTaskBase *)0x0;
        }
        else {
          this_00 = *(FAsyncTaskBase **)(lVar5 + 0x10);
        }
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        if (this_00 != (FAsyncTaskBase *)0x0) {
          if (((this_00->WorkNotFinishedCounter).Counter != 0) ||
             (FAsyncTaskBase::SyncCompletion(this_00,false), !param_1)) break;
          TMapBase<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,0>_>
          ::Remove((TMapBase<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,0>_>
                    *)this,(FString *)((longlong)(int)uVar6 * 0x20 + *plVar1));
        }
        uStack_50 = uStack_50 & ~auStack_60._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_60);
        if (*(int *)(auStack_60._8_8_ + 0x18) <= (int)uStack_4c) {
          if (((char)local_30 != '\0') && (local_30._1_1_ != '\0')) {
            uVar6 = *(int *)&(local_38->PendingTasks).field_0x8 -
                    *(int *)&(local_38->PendingTasks).field_0x34;
            if (uVar6 < 4) {
              iVar3 = 1;
            }
            else {
              uVar4 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
              lVar5 = 0x3f;
              if (uVar4 != 0) {
                for (; uVar4 >> lVar5 == 0; lVar5 = lVar5 + -1) {
                }
              }
              iVar3 = 1 << ((byte)lVar5 & 0x1f);
            }
            if (((0 < (int)uVar6) && (*(int *)&(local_38->PendingTasks).field_0x48 < iVar3)) ||
               (iVar3 < *(int *)&(local_38->PendingTasks).field_0x48)) {
              *(int *)&(local_38->PendingTasks).field_0x48 = iVar3;
              TSet<TTuple<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*>,TDefaultMapHashableKeyFuncs<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,0>,FDefaultSetAllocator>
              ::Rehash((TSet<TTuple<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*>,TDefaultMapHashableKeyFuncs<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,0>,FDefaultSetAllocator>
                        *)local_38);
            }
          }
          goto LAB_141926f88;
        }
        uVar4 = (ulonglong)uStack_4c;
        uVar6 = uStack_4c;
      } while ((this->CachedWriteTasks).ArrayNum < 1);
    }
    if (((char)local_30 != '\0') && (local_30._1_1_ != '\0')) {
      uVar6 = *(int *)&(local_38->PendingTasks).field_0x8 -
              *(int *)&(local_38->PendingTasks).field_0x34;
      if (uVar6 < 4) {
        iVar3 = 1;
      }
      else {
        uVar4 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
        lVar5 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        iVar3 = 1 << ((byte)lVar5 & 0x1f);
      }
      if (((0 < (int)uVar6) && (*(int *)&(local_38->PendingTasks).field_0x48 < iVar3)) ||
         (iVar3 < *(int *)&(local_38->PendingTasks).field_0x48)) {
        *(int *)&(local_38->PendingTasks).field_0x48 = iVar3;
        TSet<TTuple<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*>,TDefaultMapHashableKeyFuncs<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,0>,FDefaultSetAllocator>
        ::Rehash((TSet<TTuple<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*>,TDefaultMapHashableKeyFuncs<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,0>,FDefaultSetAllocator>
                  *)local_38);
      }
    }
    bVar9 = false;
  }
  else {
LAB_141926f88:
    bVar9 = true;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar9;
}

// FindCachedWriteTask @ 14193ce90

bool __thiscall
FRemoteConfigAsyncTaskManager::FindCachedWriteTask
          (FRemoteConfigAsyncTaskManager *this,wchar_t *param_1,bool param_2,wchar_t *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  wchar_t *pwVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar8 = 0;
  if (0 < (this->CachedWriteTasks).ArrayNum) {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (this->CachedWriteTasks).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      pFVar1 = (this->CachedWriteTasks).AllocatorInstance.Data;
      if (*(int *)(pFVar1 + lVar9 + 8) == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = *(wchar_t **)(pFVar1 + lVar9);
      }
      iVar6 = FGenericPlatformStricmp::Stricmp(param_1,pwVar7);
      if (iVar6 == 0) {
        if (!param_2) {
          return true;
        }
        uVar5 = 0;
        if ((int)uVar8 < (this->CachedWriteTasks).ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        pFVar1 = (this->CachedWriteTasks).AllocatorInstance.Data;
        if (*(int *)(pFVar1 + lVar9 + 0x18) == 0) {
          pwVar7 = L"";
        }
        else {
          pwVar7 = *(wchar_t **)(pFVar1 + lVar9 + 0x10);
        }
        iVar6 = FGenericPlatformStricmp::Stricmp(param_3,pwVar7);
        if (iVar6 == 0) {
          return true;
        }
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x20;
    } while ((int)uVar8 < (this->CachedWriteTasks).ArrayNum);
  }
  return false;
}

// Get @ 141944ba0

FRemoteConfigAsyncTaskManager * __cdecl FRemoteConfigAsyncTaskManager::Get(void)

{
  return &GRemoteConfigIOManager;
}

// GetReadData @ 14194a8c0

bool __thiscall
FRemoteConfigAsyncTaskManager::GetReadData
          (FRemoteConfigAsyncTaskManager *this,wchar_t *param_1,FRemoteConfigAsyncIOInfo *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  FAsyncTaskBase *this_00;
  FString local_18;
  
  lpCriticalSection = &this->SynchronizationObject;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  this_00 = (FAsyncTaskBase *)0x0;
  bVar3 = IsFinished(this,param_1);
  if (bVar3) {
    pFVar7 = ::FString::FString(&local_18,param_1);
    iVar1 = (pFVar7->Data).ArrayNum;
    iVar6 = iVar1 + -1;
    if (iVar1 == 0) {
      pwVar8 = L"";
      iVar6 = 0;
    }
    else {
      pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar8);
    iVar6 = TSet<TTuple<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*>,TDefaultMapHashableKeyFuncs<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*>,TDefaultMapHashableKeyFuncs<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,0>,FDefaultSetAllocator>
                        *)this,uVar5,pFVar7);
    if (iVar6 != -1) {
      this_00 = *(FAsyncTaskBase **)
                 ((longlong)iVar6 * 0x20 + 0x10 + *(longlong *)&this->PendingTasks);
      TSet<TTuple<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*>,TDefaultMapHashableKeyFuncs<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,0>,FDefaultSetAllocator>
      ::RemoveByIndex((TSet<TTuple<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*>,TDefaultMapHashableKeyFuncs<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,0>,FDefaultSetAllocator>
                       *)this,iVar6);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if ((this_00 == (FAsyncTaskBase *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("AsyncTask",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\RemoteConfigIni.cpp"
                           ,0xec,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    FAsyncTaskBase::CheckIdle(this_00);
    bVar3 = *(char *)&this_00[0x13].QueuedPool == '\0';
    FAsyncTaskBase::CheckIdle(this_00);
    FRemoteConfigAsyncIOInfo::operator=
              (param_2,(FRemoteConfigAsyncIOInfo *)&this_00[0x13]._padding_);
    if (this_00 != (FAsyncTaskBase *)0x0) {
      (**(code **)(this_00->_padding_ + 0x28))(this_00,1);
    }
  }
  else {
    bVar3 = false;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar3;
}

// IsFinished @ 141951a50

bool __thiscall
FRemoteConfigAsyncTaskManager::IsFinished(FRemoteConfigAsyncTaskManager *this,wchar_t *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FString *pFVar1;
  FAsyncTask<FRemoteConfigAsyncWorker> *this_00;
  bool bVar2;
  FString local_18;
  
  lpCriticalSection = &this->SynchronizationObject;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar1 = ::FString::FString(&local_18,param_1);
  this_00 = TMapBase<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,0>_>
            ::FindRef((TMapBase<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,0>_>
                       *)this,pFVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (this_00 != (FAsyncTask<FRemoteConfigAsyncWorker> *)0x0) {
    if ((int)this_00->_padding_ != 0) {
      bVar2 = false;
      goto LAB_141951abe;
    }
    FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)this_00,false);
  }
  bVar2 = true;
LAB_141951abe:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar2;
}

// StartTask @ 14196ec50

/* WARNING: Removing unreachable block (ram,0x00014196ef99) */
/* WARNING: Removing unreachable block (ram,0x00014196efa7) */

bool __thiscall
FRemoteConfigAsyncTaskManager::StartTask
          (FRemoteConfigAsyncTaskManager *this,wchar_t *param_1,wchar_t *param_2,
          FRemoteConfigAsyncIOInfo *param_3,FString *param_4,bool param_5)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<FRemoteConfigAsyncCachedWriteTask,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  FString *pFVar9;
  FAsyncTask<FRemoteConfigAsyncWorker> *pFVar10;
  wchar_t *pwVar11;
  FScriptContainerElement *pFVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  TPairInitializer<FString_&&,FAsyncTask<FRemoteConfigAsyncWorker>_*_&&> local_res8;
  wchar_t *local_res18;
  FString local_b8;
  FString local_a8;
  longlong local_98;
  FScriptContainerElement *local_90;
  FAsyncTask<FRemoteConfigAsyncWorker> *local_88;
  FString *local_80;
  FAsyncTask<FRemoteConfigAsyncWorker> **local_78;
  FString local_70;
  FString local_60;
  FString local_50;
  
  lpCriticalSection = &this->SynchronizationObject;
  local_res8.Value = (FAsyncTask<FRemoteConfigAsyncWorker> **)param_1;
  local_res18 = param_2;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar9 = ::FString::FString(&local_70,param_1);
  pFVar10 = TMapBase<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,0>_>
            ::FindRef((TMapBase<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,0>_>
                       *)this,pFVar9);
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  if (pFVar10 == (FAsyncTask<FRemoteConfigAsyncWorker> *)0x0) {
LAB_14196ecfe:
    pFVar10 = ::operator_new(0x10b8);
    local_88 = (FAsyncTask<FRemoteConfigAsyncWorker> *)0x0;
    if (pFVar10 != (FAsyncTask<FRemoteConfigAsyncWorker> *)0x0) {
      local_88 = FAsyncTask<FRemoteConfigAsyncWorker>::
                 FAsyncTask<FRemoteConfigAsyncWorker><wchar_t_const_*_&,FRemoteConfigAsyncIOInfo_&,FString_*_&,bool_&>
                           (pFVar10,&local_res18,param_3,&param_4,&param_5);
    }
    local_80 = ::FString::FString(&local_50,param_1);
    local_78 = &local_88;
    TSet<TTuple<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*>,TDefaultMapHashableKeyFuncs<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FAsyncTask<FRemoteConfigAsyncWorker>_*_&&>_>
              ((TSet<TTuple<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*>,TDefaultMapHashableKeyFuncs<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,0>,FDefaultSetAllocator>
                *)this,&local_res8,(bool *)&local_80);
    lVar3 = *(longlong *)&this->PendingTasks;
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    FAsyncTaskBase::Start
              (*(FAsyncTaskBase **)((longlong)(int)local_res8.Key * 0x20 + lVar3 + 0x10),false,
               GThreadPool,Normal,None,-1,(wchar_t *)0x0);
    bVar5 = true;
  }
  else {
    if (param_5 == false) {
      if ((int)pFVar10->_padding_ == 0) {
        FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)pFVar10,false);
        pFVar9 = ::FString::FString(&local_60,param_1);
        TMapBase<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,0>_>
        ::Remove((TMapBase<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FAsyncTask<FRemoteConfigAsyncWorker>_*,0>_>
                  *)this,pFVar9);
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
        goto LAB_14196ecfe;
      }
      if ((param_4->Data).ArrayNum == 0) {
        local_90 = (FScriptContainerElement *)0x15060d16c;
      }
      else {
        local_90 = (param_4->Data).AllocatorInstance.Data;
      }
      uVar13 = 0;
      pTVar1 = &this->CachedWriteTasks;
      if (0 < (this->CachedWriteTasks).ArrayNum) {
        local_98 = 0;
        uVar15 = uVar13;
        do {
          uVar14 = (uint)uVar15;
          uVar7 = 0;
          if ((int)uVar14 < (this->CachedWriteTasks).ArrayNum) {
            uVar7 = ~uVar14 >> 0x1f;
          }
          if ((uVar7 == 0) &&
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
          pwVar11 = L"";
          pFVar12 = (pTVar1->AllocatorInstance).Data;
          if (*(int *)(pFVar12 + uVar13 + 8) != 0) {
            pwVar11 = *(wchar_t **)(pFVar12 + uVar13);
          }
          iVar8 = FGenericPlatformStricmp::Stricmp((wchar_t *)local_res8.Value,pwVar11);
          if (iVar8 == 0) {
            uVar7 = 0;
            if ((int)uVar14 < (this->CachedWriteTasks).ArrayNum) {
              uVar7 = ~uVar14 >> 0x1f;
            }
            if ((uVar7 == 0) &&
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
            pFVar12 = (pTVar1->AllocatorInstance).Data;
            if (*(int *)(pFVar12 + uVar13 + 0x18) == 0) {
              pwVar11 = L"";
            }
            else {
              pwVar11 = *(wchar_t **)(pFVar12 + uVar13 + 0x10);
            }
            iVar8 = FGenericPlatformStricmp::Stricmp((wchar_t *)local_90,pwVar11);
            if (iVar8 == 0) goto LAB_14196efbc;
          }
          local_98 = local_98 + 1;
          uVar15 = (ulonglong)(uVar14 + 1);
          uVar13 = uVar13 + 0x20;
        } while ((int)(uVar14 + 1) < (this->CachedWriteTasks).ArrayNum);
      }
      pFVar9 = param_4;
      local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.Data.ArrayNum = 0;
      local_b8.Data.ArrayMax = 0;
      local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.Data.ArrayNum = 0;
      local_a8.Data.ArrayMax = 0;
      ::FString::operator=(&local_b8,(wchar_t *)local_res8.Value);
      iVar8 = (pFVar9->Data).ArrayNum;
      uVar7 = iVar8 - 1;
      if (iVar8 == 0) {
        uVar7 = 0;
      }
      ::FString::AssignRange(&local_a8,(wchar_t *)(pFVar9->Data).AllocatorInstance.Data,uVar7);
      pFVar12 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar12 <= (FScriptContainerElement *)&local_b8) &&
          ((FScriptContainerElement *)&local_b8 <
           pFVar12 + (longlong)(this->CachedWriteTasks).ArrayMax * 0x20)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      iVar8 = (this->CachedWriteTasks).ArrayNum;
      piVar2 = &(this->CachedWriteTasks).ArrayMax;
      if (iVar8 == *piVar2) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&pTVar1->AllocatorInstance,piVar2);
        (this->CachedWriteTasks).ArrayNum = iVar8;
      }
      (this->CachedWriteTasks).ArrayNum = iVar8 + 1;
      pFVar12 = (pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 0x20;
      *(undefined8 *)pFVar12 = 0;
      *(FScriptContainerElement **)pFVar12 = local_b8.Data.AllocatorInstance.Data;
      *(int *)(pFVar12 + 8) = local_b8.Data.ArrayNum;
      *(int *)(pFVar12 + 0xc) = local_b8.Data.ArrayMax;
      *(undefined8 *)(pFVar12 + 0x10) = 0;
      *(FScriptContainerElement **)(pFVar12 + 0x10) = local_a8.Data.AllocatorInstance.Data;
      *(int *)(pFVar12 + 0x18) = local_a8.Data.ArrayNum;
      *(int *)(pFVar12 + 0x1c) = local_a8.Data.ArrayMax;
      local_a8.Data.ArrayNum = 0;
      local_a8.Data.ArrayMax = 0;
      local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.Data.ArrayNum = 0;
      local_b8.Data.ArrayMax = 0;
      local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
LAB_14196efbc:
    bVar5 = false;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar5;
}

// Tick @ 141970520

void __thiscall FRemoteConfigAsyncTaskManager::Tick(FRemoteConfigAsyncTaskManager *this)

{
  int *piVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  uint uVar5;
  FRemoteConfigAsyncIOInfo *pFVar6;
  int iVar7;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar8;
  uint uVar9;
  ForAnyElementType FVar10;
  wchar_t *pwVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  LARGE_INTEGER local_res10;
  FScriptContainerElement *local_res18;
  LPCRITICAL_SECTION local_res20;
  FString local_68 [2];
  
  lpCriticalSection = (LPCRITICAL_SECTION)&this->SynchronizationObject;
  local_res20 = lpCriticalSection;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  dVar3 = __real_4170000000000000;
  uVar9 = 0;
  if (0 < (this->CachedWriteTasks).ArrayNum) {
    lVar13 = 0;
    do {
      uVar8 = ~uVar9 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar9 < (this->CachedWriteTasks).ArrayNum) {
        uVar5 = uVar8;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_res18 = (this->CachedWriteTasks).AllocatorInstance.Data;
      uVar5 = 0;
      if ((int)uVar9 < (this->CachedWriteTasks).ArrayNum) {
        uVar5 = uVar8;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar12 = (this->CachedWriteTasks).AllocatorInstance.Data;
      if (*(int *)(pFVar12 + lVar13 + 8) == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = *(wchar_t **)(pFVar12 + lVar13);
      }
      pFVar6 = FRemoteConfig::FindConfig(&GRemoteConfig,pwVar11);
      if (pFVar6 == (FRemoteConfigAsyncIOInfo *)0x0) {
LAB_1419706fb:
        uVar5 = 0;
        if ((int)uVar9 < (this->CachedWriteTasks).ArrayNum) {
          uVar5 = uVar8;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar12 = (this->CachedWriteTasks).AllocatorInstance.Data + lVar13;
        if (*(void **)(pFVar12 + 0x10) != (void *)0x0) {
          FMemory::Free(*(void **)(pFVar12 + 0x10));
        }
        if (*(void **)pFVar12 != (void *)0x0) {
          FMemory::Free(*(void **)pFVar12);
        }
        iVar7 = (this->CachedWriteTasks).ArrayNum + ~uVar9;
        if (iVar7 != 0) {
          memmove(pFVar12,pFVar12 + 0x20,(longlong)iVar7 << 5);
        }
        piVar1 = &(this->CachedWriteTasks).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,&(this->CachedWriteTasks).AllocatorInstance,
                   (this->CachedWriteTasks).ArrayNum,&(this->CachedWriteTasks).ArrayMax);
      }
      else {
        FRemoteConfig::GenerateRemotePath(&GRemoteConfig,local_68,pwVar11);
        QueryPerformanceCounter(&local_res10);
        FVar10.Data = (FScriptContainerElement *)L"";
        if (local_68[0].Data.ArrayNum != 0) {
          FVar10.Data = local_68[0].Data.AllocatorInstance.Data;
        }
        pFVar6->StartWriteTime =
             (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar3;
        bVar4 = StartTask(&GRemoteConfigIOManager,pwVar11,(wchar_t *)FVar10.Data,pFVar6,
                          (FString *)(local_res18 + lVar13 + 0x10),false);
        if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
        }
        if (bVar4) goto LAB_1419706fb;
      }
      uVar9 = uVar9 + 1;
      lVar13 = lVar13 + 0x20;
      lpCriticalSection = local_res20;
    } while ((int)uVar9 < (this->CachedWriteTasks).ArrayNum);
  }
                    /* WARNING: Could not recover jumptable at 0x0001419707ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}

