// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 9

// FLocalizationSCC @ 146b43110

FLocalizationSCC * __thiscall FLocalizationSCC::FLocalizationSCC(FLocalizationSCC *this)

{
  code *pcVar1;
  bool bVar2;
  FLocalizationSCC *pFVar3;
  ISourceControlModule *pIVar4;
  longlong *plVar5;
  
  *(undefined8 *)&(this->CheckedOutFiles).Elements = 0;
  *(undefined8 *)&(this->CheckedOutFiles).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CheckedOutFiles).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CheckedOutFiles).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CheckedOutFiles).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CheckedOutFiles).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CheckedOutFiles).Elements.field_0x34 = 0;
  (this->CheckedOutFiles).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CheckedOutFiles).HashSize = 0;
  *(undefined8 *)&(this->DeferredCheckedOutFiles).Elements = 0;
  *(undefined8 *)&(this->DeferredCheckedOutFiles).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->DeferredCheckedOutFiles).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->DeferredCheckedOutFiles).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->DeferredCheckedOutFiles).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->DeferredCheckedOutFiles).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DeferredCheckedOutFiles).Elements.field_0x34 = 0;
  (this->DeferredCheckedOutFiles).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->DeferredCheckedOutFiles).HashSize = 0;
  (this->FilesMutex).State = (atomic<unsigned_char>)0x0;
  this->ParallelTasksCount = (atomic<unsigned_short>)0x0;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocalizationSourceControlUtil.cpp"
                       ,0x18,L"FLocalizationSCC must be created on the game-thread");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FLocalizationSCC *)(*pcVar1)();
      return pFVar3;
    }
  }
  pIVar4 = ISourceControlModule::Get();
  plVar5 = (longlong *)(**(code **)((longlong)*pIVar4 + 0x78))(pIVar4);
  (**(code **)(*plVar5 + 0x10))(plVar5,1);
  return this;
}

// ~FLocalizationSCC @ 146b44990

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLocalizationSCC::~FLocalizationSCC(FLocalizationSCC *this)

{
  ForElementType<FSetElementId> FVar1;
  code *pcVar2;
  bool bVar3;
  ISourceControlModule *pIVar4;
  longlong *plVar5;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocalizationSourceControlUtil.cpp"
                       ,0x1f,L"FLocalizationSCC must be destroyed on the game-thread");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((0 < *(int *)&(this->CheckedOutFiles).Elements.field_0x8 -
           *(int *)&(this->CheckedOutFiles).Elements.field_0x34) &&
     (4 < (byte)LogLocalizationSourceControl._0_1_)) {
    UE::Logging::Private::BasicLog<5>
              (&::LOG_Static,(FLogCategoryBase *)&LogLocalizationSourceControl);
  }
  pIVar4 = ISourceControlModule::Get();
  plVar5 = (longlong *)(**(code **)((longlong)*pIVar4 + 0x78))(pIVar4);
  (**(code **)(*plVar5 + 0x18))(plVar5);
  (this->DeferredCheckedOutFiles).HashSize = 0;
  FVar1 = (this->DeferredCheckedOutFiles).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->DeferredCheckedOutFiles).Elements);
  (this->CheckedOutFiles).HashSize = 0;
  FVar1 = (this->CheckedOutFiles).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// BeginParallelTasks @ 146b50ed0

void __thiscall FLocalizationSCC::BeginParallelTasks(FLocalizationSCC *this)

{
  LOCK();
  this->ParallelTasksCount = (atomic<unsigned_short>)((short)this->ParallelTasksCount + 1);
  UNLOCK();
  return;
}

// CheckOutFile @ 146b51470

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall
FLocalizationSCC::CheckOutFile(FLocalizationSCC *this,FString *param_1,FText *param_2)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  FText *pFVar8;
  FPlatformFileManager *pFVar9;
  IPlatformFile *pIVar10;
  FText *pFVar11;
  FTextFormat *pFVar12;
  wchar_t *pwVar13;
  ForAnyElementType FVar14;
  FString *pFVar15;
  int iVar16;
  FString local_res10;
  undefined1 local_a8 [8];
  FString local_a0;
  FText local_90;
  FText local_80;
  FText local_70;
  FText local_60;
  FText local_50;
  FTextFormat local_40;
  
  if ((param_1->Data).ArrayNum < 2) {
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_90,L"LocalizationSourceControl",L"InvalidFileSpecified",
                        L"Could not checkout file at invalid path.");
    FText::operator=(param_2,pFVar8);
    if (local_90.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
    }
    return false;
  }
  bVar3 = ::FString::StartsWith(param_1,L"\\\\",2,IgnoreCase);
  if (bVar3) {
    return true;
  }
  FPaths::ConvertRelativePathToFull(&local_a0,param_1);
  if (this->ParallelTasksCount == (atomic<unsigned_short>)0x0) {
    bVar3 = IsReady(this,param_2);
    if (bVar3) {
      if (local_a0.Data.ArrayNum == 0) {
        pwVar13 = L"";
        iVar16 = 0;
      }
      else {
        iVar16 = local_a0.Data.ArrayNum + -1;
        pwVar13 = (wchar_t *)local_a0.Data.AllocatorInstance.Data;
      }
      uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar16,pwVar13);
      iVar16 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
               FindIndexByHash<FString>(&this->CheckedOutFiles,uVar6,&local_a0);
      if (iVar16 == -1) {
        bVar3 = USourceControlHelpers::CheckOutOrAddFile(&local_a0,false);
        if (!bVar3) {
          pFVar8 = USourceControlHelpers::LastErrorMsg(&local_60);
          FText::operator=(param_2,pFVar8);
          if (local_60.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
          }
          bVar3 = false;
          goto LAB_146b517e1;
        }
        pFVar9 = FPlatformFileManager::Get();
        pIVar10 = FPlatformFileManager::GetPlatformFile(pFVar9);
        FVar14.Data = (FScriptContainerElement *)L"";
        if (local_a0.Data.ArrayNum != 0) {
          FVar14.Data = local_a0.Data.AllocatorInstance.Data;
        }
        cVar5 = (**(code **)((longlong)*pIVar10 + 0x98))(pIVar10,FVar14.Data);
        if (cVar5 != '\0') {
          FVar14.Data = (FScriptContainerElement *)L"";
          if (local_a0.Data.ArrayNum != 0) {
            FVar14.Data = local_a0.Data.AllocatorInstance.Data;
          }
          (**(code **)((longlong)*pIVar10 + 0xa8))(pIVar10,FVar14.Data,0);
        }
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                  (&this->CheckedOutFiles,&local_res10,(bool *)&local_a0);
      }
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    goto LAB_146b517e1;
  }
  this_00 = &this->FilesMutex;
  if ((this_00 == (FMutex *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  LOCK();
  bVar3 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar3) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar3) {
    UE::FMutex::LockSlow(this_00);
  }
  iVar16 = 0;
  if (local_a0.Data.ArrayNum == 0) {
    pwVar13 = L"";
    iVar7 = iVar16;
  }
  else {
    pwVar13 = (wchar_t *)local_a0.Data.AllocatorInstance.Data;
    iVar7 = local_a0.Data.ArrayNum + -1;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar13);
  iVar7 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                    (&this->CheckedOutFiles,uVar6,&local_a0);
  if (iVar7 == -1) {
    if (local_a0.Data.ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      iVar16 = local_a0.Data.ArrayNum + -1;
      pwVar13 = (wchar_t *)local_a0.Data.AllocatorInstance.Data;
    }
    uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar16,pwVar13);
    iVar16 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                       (&this->DeferredCheckedOutFiles,uVar6,&local_a0);
    if (iVar16 != -1) goto LAB_146b516ca;
    pFVar9 = FPlatformFileManager::Get();
    pIVar10 = FPlatformFileManager::GetPlatformFile(pFVar9);
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_a0.Data.ArrayNum != 0) {
      FVar14.Data = local_a0.Data.AllocatorInstance.Data;
    }
    cVar5 = (**(code **)((longlong)*pIVar10 + 0x98))(pIVar10,FVar14.Data);
    if (cVar5 == '\0') {
      pFVar15 = (FString *)local_a8;
LAB_146b516bb:
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                (&this->DeferredCheckedOutFiles,pFVar15,(bool *)&local_a0);
      goto LAB_146b516ca;
    }
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_a0.Data.ArrayNum != 0) {
      FVar14.Data = local_a0.Data.AllocatorInstance.Data;
    }
    cVar5 = (**(code **)((longlong)*pIVar10 + 0xa8))(pIVar10,FVar14.Data,0);
    if (cVar5 != '\0') {
      pFVar15 = (FString *)&stack0x00000020;
      goto LAB_146b516bb;
    }
    pFVar8 = FText::FromString(&local_50,&local_a0);
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        (&local_70,L"LocalizationSourceControl",L"FailedToCheckOutFile",
                         L"Failed to make file writable \'{0}\'.");
    pFVar12 = FTextFormat::FTextFormat(&local_40,pFVar11,Default);
    pFVar8 = FText::Format<FText>(&local_80,pFVar12,pFVar8);
    FText::operator=(param_2,pFVar8);
    if (local_80.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
    }
    if (local_70.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
    }
    bVar3 = false;
  }
  else {
LAB_146b516ca:
    bVar3 = true;
  }
  if (this_00 != (FMutex *)0x0) {
    LOCK();
    aVar1 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(this_00);
    }
  }
LAB_146b517e1:
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  return bVar3;
}

// CheckinFiles @ 146b51820

bool __thiscall FLocalizationSCC::CheckinFiles(FLocalizationSCC *this,FText *param_1,FText *param_2)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  code *pcVar3;
  TSharedRef<ISourceControlState,1> *pTVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  ISourceControlModule *pIVar10;
  ISourceControlProvider *pIVar11;
  FCheckIn *pFVar12;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar13;
  FText *pFVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  undefined1 local_res20 [8];
  TSharedRef<ISourceControlState,1> *local_e8;
  undefined8 local_e0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_d8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_c8;
  ForAnyElementType local_c0;
  ulonglong local_b8;
  ISourceControlProvider *local_b0;
  TRawPtrProxy<FCheckIn> local_a8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_a0;
  TSharedRef<FCheckIn,1> local_88;
  FCheckIn *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  FDestructionSentinel local_68;
  FText local_50;
  
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocalizationSourceControlUtil.cpp"
                         ,0xc4,L"FLocalizationSCC::CheckinFiles must be called on the game-thread"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  if ((this->ParallelTasksCount != (atomic<unsigned_short>)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParallelTasksCount == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocalizationSourceControlUtil.cpp"
                         ,0xc5,
                         L"FLocalizationSCC::CheckinFiles was called while parallel tasks are running"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  if (*(int *)&(this->CheckedOutFiles).Elements.field_0x8 !=
      *(int *)&(this->CheckedOutFiles).Elements.field_0x34) {
    bVar5 = IsReady(this,param_2);
    if (!bVar5) {
      return false;
    }
    pIVar10 = ISourceControlModule::Get();
    pIVar11 = (ISourceControlProvider *)(**(code **)((longlong)*pIVar10 + 0x78))(pIVar10);
    local_b0 = pIVar11;
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Array
              (&this->CheckedOutFiles,&local_d8);
    USourceControlHelpers::RevertUnchangedFiles(pIVar11,&local_d8);
    uVar16 = 0;
    local_e8 = (TSharedRef<ISourceControlState,1> *)0x0;
    local_e0 = 0;
    iVar8 = (**(code **)((longlong)*pIVar11 + 0xa0))(pIVar11,&local_d8,&local_e8,0);
    if (iVar8 == 1) {
      if ((local_d8.ArrayNum != (int)local_e0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CheckedOutFilesArray.Num() == SourceControlStates.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocalizationSourceControlUtil.cpp"
                             ,0xdc,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Reset(&this->CheckedOutFiles);
      uVar17 = uVar16;
      if (0 < local_d8.ArrayNum) {
        do {
          uVar15 = (uint)uVar16;
          uVar9 = 0;
          if ((int)uVar15 < local_d8.ArrayNum) {
            uVar9 = ~uVar15 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          pFVar18 = local_d8.AllocatorInstance.Data + uVar17;
          uVar9 = 0;
          if ((int)uVar15 < (int)local_e0) {
            uVar9 = ~uVar15 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
          pTVar4 = local_e8;
          cVar7 = (**(code **)(**(longlong **)((longlong)&local_e8->Object + uVar17) + 0x88))();
          if ((cVar7 != '\0') ||
             (cVar7 = (**(code **)(**(longlong **)((longlong)&pTVar4->Object + uVar17) + 0xe8))(),
             cVar7 != '\0')) {
            TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                      (&this->CheckedOutFiles,(FString *)&stack0x00000008,(bool *)pFVar18);
          }
          uVar16 = (ulonglong)(uVar15 + 1);
          pIVar11 = local_b0;
          uVar17 = uVar17 + 0x10;
        } while ((int)(uVar15 + 1) < local_d8.ArrayNum);
      }
    }
    DestructItems<TSharedRef<ISourceControlState,1>,int>(local_e8,(int)local_e0);
    if (local_e8 != (TSharedRef<ISourceControlState,1> *)0x0) {
      FMemory::Free(local_e8);
    }
    DestructItems<FString,int>((FString *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
    if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.AllocatorInstance.Data);
    }
    if (0 < *(int *)&(this->CheckedOutFiles).Elements.field_0x8 -
            *(int *)&(this->CheckedOutFiles).Elements.field_0x34) {
      pFVar12 = ::operator_new(0x80);
      if (pFVar12 == (FCheckIn *)0x0) {
        pFVar12 = (FCheckIn *)0x0;
      }
      else {
        pFVar12->_padding_ = 0;
        *(undefined8 *)((longlong)&pFVar12->_padding_ + 4) = 0;
        *(undefined8 *)((longlong)&(pFVar12->Description).TextData.Reference + 4) = 0;
        *(undefined8 *)&(pFVar12->Description).field_0xc = 0;
        *(undefined8 *)((longlong)&(pFVar12->SuccessMessage).TextData.Reference + 4) = 0;
        *(undefined8 *)&(pFVar12->SuccessMessage).field_0xc = 0;
        *(undefined4 *)&pFVar12->field_0x7c = 0;
        pFVar12->_padding_ = 0;
        pFVar12->_padding_ = 0;
        pFVar12->_padding_ = 0;
        pFVar12->_padding_ = (longlong)&___7FCheckIn__6B_;
        pFVar12->_padding_ = 0;
        pFVar12->_padding_ = 0;
        pFVar12->_padding_ = 0;
        pFVar12->_padding_ = 0;
        pFVar12->_padding_ = 0;
        *(undefined4 *)&pFVar12->_padding_ = 0;
        FText::FText(&pFVar12->Description);
        FText::FText(&pFVar12->SuccessMessage);
        pFVar12->bKeepCheckedOut = false;
        if ((((pFVar12->_padding_ != 0) && (pFVar12->_padding_ != 0)) &&
            (0 < *(int *)(pFVar12->_padding_ + 8))) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("!InObject || !InObject->DoesSharedInstanceExist()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x7a5,L"Trying to share an already-shared object"), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
      }
      local_a8.Object = pFVar12;
      TSharedRef<FCheckIn,1>::TSharedRef<FCheckIn,1><FCheckIn>(&local_88,&local_a8);
      pFVar12 = local_88.Object;
      pIVar1 = (param_1->TextData).Reference;
      pIVar2 = ((local_88.Object)->Description).TextData.Reference;
      if (pIVar2 != pIVar1) {
        ((local_88.Object)->Description).TextData.Reference = pIVar1;
        if (pIVar1 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res20);
        }
        if (pIVar2 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
        }
      }
      (pFVar12->Description).Flags = param_1->Flags;
      local_b8 = 0;
      local_c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_c0.Data = (FScriptContainerElement *)0x0;
      pcVar3 = *(code **)((longlong)*pIVar11 + 0xe8);
      pTVar13 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Array
                          (&this->CheckedOutFiles,&local_a0);
      local_78 = local_88.Object;
      pTStack_70 = local_88.SharedReferenceCount.ReferenceController;
      if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      iVar8 = (*pcVar3)(pIVar11,&local_78,pTVar13,0,&local_c8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_70);
      DestructItems<FString,int>((FString *)local_a0.AllocatorInstance.Data,local_a0.ArrayNum);
      if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.AllocatorInstance.Data);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_c8,(FWriteAccessScope *)&local_68);
      if (((int)local_b8 != 0) && (local_c0.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_c0.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c0,0,0,0x10);
        local_b8 = local_b8 & 0xffffffff00000000;
      }
      if (local_68.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
      }
      if (local_c0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c8.AccessDetector);
      if (iVar8 == 0) {
        pFVar14 = FText::AsLocalizable_Advanced_LocText
                            (&local_50,L"LocalizationSourceControl",L"FailedToCheckInFiles",
                             L"The checked out localization files could not be checked in.");
        FText::operator=(param_2,pFVar14);
        if (local_50.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_88.SharedReferenceCount.ReferenceController);
        return false;
      }
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Reset(&this->CheckedOutFiles);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
    }
  }
  return true;
}

// CleanUp @ 146b51d40

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall FLocalizationSCC::CleanUp(FLocalizationSCC *this,FText *param_1)

{
  code *pcVar1;
  TSharedRef<ISourceControlState,1> *pTVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  ISourceControlModule *pIVar8;
  longlong *plVar9;
  FString *pFVar10;
  FText *pFVar11;
  FText *pFVar12;
  FTextFormat *pFVar13;
  uint uVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  TArray<FString,TSizedDefaultAllocator<32>_> local_a8;
  TSharedRef<ISourceControlState,1> *local_98;
  undefined8 local_90;
  FText local_88;
  FText local_78;
  FString local_68;
  FText local_58;
  FText local_48;
  FTextFormat local_38;
  
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocalizationSourceControlUtil.cpp"
                         ,0xfd,L"FLocalizationSCC::CleanUp must be called on the game-thread"),
     bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  if ((this->ParallelTasksCount != (atomic<unsigned_short>)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParallelTasksCount == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocalizationSourceControlUtil.cpp"
                         ,0xfe,
                         L"FLocalizationSCC::CleanUp was called while parallel tasks are running"),
     bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  if (*(int *)&(this->CheckedOutFiles).Elements.field_0x8 ==
      *(int *)&(this->CheckedOutFiles).Elements.field_0x34) {
    return true;
  }
  bVar3 = IsReady(this,param_1);
  if (bVar3) {
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Array
              (&this->CheckedOutFiles,&local_a8);
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Reset(&this->CheckedOutFiles);
    bVar3 = USourceControlHelpers::RevertFiles(&local_a8,false);
    if (bVar3) {
      bVar3 = true;
    }
    else {
      pIVar8 = ISourceControlModule::Get();
      plVar9 = (longlong *)(**(code **)((longlong)*pIVar8 + 0x78))(pIVar8);
      local_98 = (TSharedRef<ISourceControlState,1> *)0x0;
      local_90 = 0;
      iVar6 = (**(code **)(*plVar9 + 0xa0))(plVar9,&local_a8,&local_98,0);
      if (iVar6 == 1) {
        if ((local_a8.ArrayNum != (int)local_90) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("CheckedOutFilesArray.Num() == SourceControlStates.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocalizationSourceControlUtil.cpp"
                               ,0x116,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        uVar14 = 0;
        if (0 < local_a8.ArrayNum) {
          lVar15 = 0;
          do {
            uVar7 = 0;
            if ((int)uVar14 < local_a8.ArrayNum) {
              uVar7 = ~uVar14 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar1 = (code *)swi(3);
              uVar4 = (*pcVar1)();
              return (bool)uVar4;
            }
            pFVar16 = local_a8.AllocatorInstance.Data + lVar15;
            uVar7 = 0;
            if ((int)uVar14 < (int)local_90) {
              uVar7 = ~uVar14 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar1 = (code *)swi(3);
              uVar4 = (*pcVar1)();
              return (bool)uVar4;
            }
            pTVar2 = local_98;
            cVar5 = (**(code **)(**(longlong **)((longlong)&local_98->Object + lVar15) + 0x88))();
            if ((cVar5 != '\0') ||
               (cVar5 = (**(code **)(**(longlong **)((longlong)&pTVar2->Object + lVar15) + 0xe8))(),
               cVar5 != '\0')) {
              TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                        (&this->CheckedOutFiles,(FString *)&stack0x00000008,(bool *)pFVar16);
            }
            uVar14 = uVar14 + 1;
            lVar15 = lVar15 + 0x10;
          } while ((int)uVar14 < local_a8.ArrayNum);
        }
        pFVar10 = ::FString::Join<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
                            (&local_68,&this->CheckedOutFiles,L", ");
        pFVar11 = FText::FromString(&local_48,pFVar10);
        pFVar12 = FText::AsLocalizable_Advanced_LocText
                            (&local_78,L"LocalizationSourceControl",L"CleanUpFailed.WithFiles",
                             L"FLocalizationSCC::CleanUp failed to revert: {0}");
        pFVar13 = FTextFormat::FTextFormat(&local_38,pFVar12,Default);
        pFVar11 = FText::Format<FText>(&local_88,pFVar13,pFVar11);
        FText::operator=(param_1,pFVar11);
        if (local_88.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
        }
        if (local_78.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
      else {
        pFVar11 = FText::AsLocalizable_Advanced_LocText
                            (&local_58,L"LocalizationSourceControl",L"CleanUpFailed.Generic",
                             L"FLocalizationSCC::CleanUp failed to revert some files, but querying the file states also failed"
                            );
        FText::operator=(param_1,pFVar11);
        if (local_58.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
        }
      }
      DestructItems<TSharedRef<ISourceControlState,1>,int>(local_98,(int)local_90);
      if (local_98 != (TSharedRef<ISourceControlState,1> *)0x0) {
        FMemory::Free(local_98);
      }
      bVar3 = false;
    }
    DestructItems<FString,int>((FString *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
    if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.AllocatorInstance.Data);
    }
    return bVar3;
  }
  return false;
}

// EndParallelTasks @ 146b57130

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

bool __thiscall FLocalizationSCC::EndParallelTasks(FLocalizationSCC *this,FText *param_1)

{
  atomic<unsigned_short> *paVar1;
  atomic<unsigned_short> aVar2;
  code *pcVar3;
  undefined8 uVar4;
  TSharedRef<ISourceControlState,1> *pTVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  ISourceControlModule *pIVar11;
  FText *pFVar12;
  FText *pFVar13;
  FTextFormat *pFVar14;
  FScriptContainerElement *pFVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  int iVar19;
  longlong lVar20;
  undefined1 local_res8 [8];
  FText *local_res10;
  undefined1 local_res18 [16];
  ForAnyElementType local_138;
  int local_130;
  int local_12c;
  TArray<FString,TSizedDefaultAllocator<32>_> local_128;
  TSharedRef<ISourceControlState,1> *local_118;
  undefined8 local_110;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_108;
  ForAnyElementType local_100;
  ulonglong local_f8;
  FString local_f0;
  TRawPtrProxy<FSync> local_e0;
  TSharedRef<FSync,1> local_d8;
  FSync *local_c8;
  TReferenceControllerBase<1> *pTStack_c0;
  FDestructionSentinel local_b8;
  FText local_a0;
  FText local_90;
  FText local_80;
  FText local_70;
  FTextFormat local_60 [2];
  
  LOCK();
  paVar1 = &this->ParallelTasksCount;
  aVar2 = *paVar1;
  *paVar1 = (atomic<unsigned_short>)((short)*paVar1 + -1);
  UNLOCK();
  local_res10 = param_1;
  if (aVar2 == (atomic<unsigned_short>)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("PrevParallelTasksCount > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocalizationSourceControlUtil.cpp"
                       ,0x31,
                       L"FLocalizationSCC::EndParallelTasks was called while no parallel tasks are running"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return (bool)uVar7;
    }
  }
  else if (1 < (ushort)aVar2) {
    return true;
  }
  bVar6 = IsInGameThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocalizationSourceControlUtil.cpp"
                         ,0x37,
                         L"FLocalizationSCC::EndParallelTasks must be called on the game-thread when closing the final block"
                        ), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  if (*(int *)&(this->DeferredCheckedOutFiles).Elements.field_0x8 ==
      *(int *)&(this->DeferredCheckedOutFiles).Elements.field_0x34) {
    return true;
  }
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Array
            (&this->DeferredCheckedOutFiles,&local_128);
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Reset
            (&this->DeferredCheckedOutFiles);
  bVar6 = IsReady(this,param_1);
  if (bVar6) {
    bVar6 = USourceControlHelpers::CheckOutOrAddFiles(&local_128,false);
    if (bVar6) {
      bVar6 = true;
      goto LAB_146b57784;
    }
    pIVar11 = ISourceControlModule::Get();
    local_res18._8_8_ = (**(code **)((longlong)*pIVar11 + 0x78))(pIVar11);
    uVar17 = 0;
    local_118 = (TSharedRef<ISourceControlState,1> *)0x0;
    local_110 = 0;
    iVar9 = (**(code **)(*(longlong *)local_res18._8_8_ + 0xa0))
                      (local_res18._8_8_,&local_128,&local_118,0);
    if (iVar9 == 1) {
      if ((local_128.ArrayNum != (int)local_110) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("DeferredCheckedOutFilesArray.Num() == SourceControlStates.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocalizationSourceControlUtil.cpp"
                             ,0x4f,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return (bool)uVar7;
      }
      local_138.Data = (FScriptContainerElement *)0x0;
      local_130 = 0;
      local_12c = 0;
      if (0 < local_128.ArrayNum) {
        lVar20 = 0;
        do {
          uVar10 = 0;
          if ((int)uVar17 < local_128.ArrayNum) {
            uVar10 = ~uVar17 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
          pFVar18 = local_128.AllocatorInstance.Data + lVar20;
          uVar10 = 0;
          if ((int)uVar17 < (int)local_110) {
            uVar10 = ~uVar17 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            uVar7 = (*pcVar3)();
            return (bool)uVar7;
          }
          pTVar5 = local_118;
          cVar8 = (**(code **)(**(longlong **)((longlong)&local_118->Object + lVar20) + 0x88))();
          if ((cVar8 == '\0') &&
             (cVar8 = (**(code **)(**(longlong **)((longlong)&pTVar5->Object + lVar20) + 0xe8))(),
             cVar8 == '\0')) {
            if (((local_138.Data <= pFVar18) &&
                (pFVar18 < local_138.Data + (longlong)local_12c * 0x10)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar3 = (code *)swi(3);
              uVar7 = (*pcVar3)();
              return (bool)uVar7;
            }
            if (local_130 == local_12c) {
              local_130 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x810,&local_138,&local_12c);
            }
            pFVar15 = local_138.Data + (longlong)local_130 * 0x10;
            *(undefined8 *)pFVar15 = 0;
            *(undefined8 *)pFVar15 = *(undefined8 *)pFVar18;
            *(undefined8 *)pFVar18 = 0;
            *(int *)(pFVar15 + 8) = *(int *)(pFVar18 + 8);
            *(int *)(pFVar15 + 0xc) = *(int *)(pFVar18 + 0xc);
            *(undefined8 *)(pFVar18 + 8) = 0;
            local_130 = local_130 + 1;
          }
          else {
            TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                      (&this->CheckedOutFiles,(FString *)local_res18,(bool *)pFVar18);
          }
          uVar4 = local_res18._8_8_;
          uVar17 = uVar17 + 1;
          lVar20 = lVar20 + 0x10;
        } while ((int)uVar17 < local_128.ArrayNum);
        param_1 = local_res10;
        if (0 < local_130) {
          local_e0.Object = ::operator_new(0x70);
          if (local_e0.Object == (FSync *)0x0) {
            local_e0.Object = (FSync *)0x0;
          }
          else {
            (local_e0.Object)->_padding_ = 0;
            (local_e0.Object)->_padding_ = 0;
            *(undefined4 *)&(local_e0.Object)->field_0x6b = 0;
            (local_e0.Object)->field_0x6f = 0;
            (local_e0.Object)->_padding_ = (longlong)&___7FSync__6B_;
            (local_e0.Object)->_padding_ = 0;
            (local_e0.Object)->_padding_ = 0;
            (local_e0.Object)->_padding_ = 0;
            (local_e0.Object)->_padding_ = 0;
            (local_e0.Object)->_padding_ = 0;
            (local_e0.Object)->_padding_ = 0;
            (local_e0.Object)->_padding_ = 0;
            (local_e0.Object)->_padding_ = 0;
            ((local_e0.Object)->Revision).Data.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            ((local_e0.Object)->Revision).Data.ArrayNum = 0;
            ((local_e0.Object)->Revision).Data.ArrayMax = 0;
            (local_e0.Object)->bHeadRevision = false;
            (local_e0.Object)->bLastSynced = false;
            (local_e0.Object)->bForce = false;
          }
          TSharedRef<FSync,1>::TSharedRef<FSync,1><FSync>(&local_d8,&local_e0);
          local_c8 = local_d8.Object;
          pTStack_c0 = local_d8.SharedReferenceCount.ReferenceController;
          local_f8 = 0;
          (local_d8.Object)->bLastSynced = true;
          (local_d8.Object)->bForce = true;
          lVar20 = *(longlong *)uVar4;
          local_108.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          local_100.Data = (FScriptContainerElement *)0x0;
          if (local_d8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          (**(code **)(lVar20 + 0xe8))(uVar4,&local_c8,&local_138,0,&local_108);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_c0);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_108,(FWriteAccessScope *)&local_b8);
          if (((int)local_f8 != 0) && (local_100.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)local_100.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_100,0,0,0x10);
            local_f8 = local_f8 & 0xffffffff00000000;
          }
          if (local_b8.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b8.Accessor,&local_b8);
          }
          if (local_100.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_100.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_108.AccessDetector);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_d8.SharedReferenceCount.ReferenceController);
          param_1 = local_res10;
        }
      }
      iVar9 = local_130;
      local_f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      bVar6 = true;
      pFVar18 = local_138.Data + (longlong)local_130 * 0x10;
      local_f0.Data.ArrayNum = 0;
      local_f0.Data.ArrayMax = 0;
      FVar16.Data = local_138.Data;
      while( true ) {
        if (local_130 != iVar9) {
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (FVar16.Data == pFVar18) break;
        if (bVar6) {
          bVar6 = false;
        }
        else {
          ::FString::AppendChars(&local_f0,L", ",2);
        }
        iVar19 = *(int *)(FVar16.Data + 8) + -1;
        if (*(int *)(FVar16.Data + 8) == 0) {
          iVar19 = 0;
        }
        ::FString::AppendChars(&local_f0,*(wchar_t **)FVar16.Data,iVar19);
        FVar16.Data = FVar16.Data + 0x10;
      }
      pFVar12 = FText::FromString(&local_70,&local_f0);
      pFVar13 = FText::AsLocalizable_Advanced_LocText
                          (&local_90,L"LocalizationSourceControl",
                           L"EndParallelTasksFailed.WithFiles",
                           L"FLocalizationSCC::EndParallelTasks failed to check-out or add: {0}");
      pFVar14 = FTextFormat::FTextFormat(local_60,pFVar13,Default);
      pFVar12 = FText::Format<FText>(&local_a0,pFVar14,pFVar12);
      FText::operator=(param_1,pFVar12);
      if (local_a0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a0.TextData.Reference + 0x10))();
      }
      if (local_90.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
      }
      if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_138.Data,local_130);
      if (local_138.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data);
      }
    }
    else {
      pFVar12 = FText::AsLocalizable_Advanced_LocText
                          (&local_80,L"LocalizationSourceControl",L"EndParallelTasksFailed.Generic",
                           L"FLocalizationSCC::EndParallelTasksFailed failed to check-out or add some files, but querying the file states also failed"
                          );
      FText::operator=(param_1,pFVar12);
      if (local_80.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
      }
    }
    DestructItems<TSharedRef<ISourceControlState,1>,int>(local_118,(int)local_110);
    if (local_118 != (TSharedRef<ISourceControlState,1> *)0x0) {
      FMemory::Free(local_118);
    }
  }
  bVar6 = false;
LAB_146b57784:
  DestructItems<FString,int>((FString *)local_128.AllocatorInstance.Data,local_128.ArrayNum);
  if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.AllocatorInstance.Data);
  }
  return bVar6;
}

// IsReady @ 146b7a7d0

bool __thiscall FLocalizationSCC::IsReady(FLocalizationSCC *this,FText *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  ISourceControlModule *pIVar5;
  FText *pFVar6;
  longlong *plVar7;
  FText local_28;
  FText local_18;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocalizationSourceControlUtil.cpp"
                       ,0x131,L"FLocalizationSCC::IsReady must be called on the game-thread");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (this->ParallelTasksCount != (atomic<unsigned_short>)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParallelTasksCount == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocalizationSourceControlUtil.cpp"
                       ,0x132,
                       L"FLocalizationSCC::IsReady was called while parallel tasks are running");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pIVar5 = ISourceControlModule::Get();
  cVar4 = (**(code **)((longlong)*pIVar5 + 0x70))(pIVar5);
  if (cVar4 == '\0') {
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"LocalizationSourceControl",L"SourceControlNotEnabled",
                        L"Revision control is not enabled.");
    FText::operator=(param_1,pFVar6);
  }
  else {
    pIVar5 = ISourceControlModule::Get();
    plVar7 = (longlong *)(**(code **)((longlong)*pIVar5 + 0x78))(pIVar5);
    cVar4 = (**(code **)(*plVar7 + 0x40))(plVar7);
    if (cVar4 != '\0') {
      return true;
    }
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"LocalizationSourceControl",L"SourceControlNotAvailable",
                        L"Revision control server is currently not available.");
    FText::operator=(param_1,pFVar6);
    local_28.TextData.Reference = local_18.TextData.Reference;
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return false;
}

// RevertFile @ 146b84de0

bool __thiscall FLocalizationSCC::RevertFile(FLocalizationSCC *this,FString *param_1,FText *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  FText *pFVar5;
  wchar_t *pwVar6;
  FString local_38;
  FText local_28;
  FText local_18;
  
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocalizationSourceControlUtil.cpp"
                         ,0x145,L"FLocalizationSCC::RevertFile must be called on the game-thread"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((this->ParallelTasksCount != (atomic<unsigned_short>)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParallelTasksCount == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocalizationSourceControlUtil.cpp"
                         ,0x146,
                         L"FLocalizationSCC::RevertFile was called while parallel tasks are running"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((1 < (param_1->Data).ArrayNum) &&
     (bVar2 = ::FString::StartsWith(param_1,L"\\\\",2,IgnoreCase), !bVar2)) {
    bVar2 = IsReady(this,param_2);
    if (!bVar2) {
      return false;
    }
    FPaths::ConvertRelativePathToFull(&local_38,param_1);
    bVar2 = USourceControlHelpers::RevertFile(&local_38,false);
    if (bVar2) {
      if (*(int *)&(this->CheckedOutFiles).Elements.field_0x8 !=
          *(int *)&(this->CheckedOutFiles).Elements.field_0x34) {
        if (local_38.Data.ArrayNum == 0) {
          pwVar6 = L"";
          local_38.Data.ArrayNum = 0;
        }
        else {
          local_38.Data.ArrayNum = local_38.Data.ArrayNum + -1;
          pwVar6 = (wchar_t *)local_38.Data.AllocatorInstance.Data;
        }
        uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(local_38.Data.ArrayNum,pwVar6);
        TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::RemoveImpl<FString>
                  (&this->CheckedOutFiles,uVar4,&local_38);
      }
      bVar2 = true;
    }
    else {
      pFVar5 = USourceControlHelpers::LastErrorMsg(&local_28);
      FText::operator=(param_2,pFVar5);
      if (local_28.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
      }
      bVar2 = false;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    return bVar2;
  }
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"LocalizationSourceControl",L"CouldNotRevertFile",
                      L"Could not revert file.");
  FText::operator=(param_2,pFVar5);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return false;
}

