// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 42

// <lambda_2> @ 1445a1b20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

<lambda_2> * __thiscall
`UE::IoStore::FOnDemandContentInstaller::CompleteInstallRequest'::__l60::<lambda_2>::<lambda_2>
          (void *this,<lambda_2> *param_1)

{
  bool bVar1;
  ulong64 uVar2;
  
  *(FOnDemandContentInstaller **)this = param_1->__this;
  *(FRequest **)((longlong)this + 8) = param_1->Request;
  *(double *)((longlong)this + 0x10) = (param_1->InstallResult).DurationInSeconds;
  uVar2 = (param_1->InstallResult).Progress.TotalInstallSize;
  *(ulong64 *)((longlong)this + 0x18) = (param_1->InstallResult).Progress.TotalContentSize;
  *(ulong64 *)((longlong)this + 0x20) = uVar2;
  *(ulong64 *)((longlong)this + 0x28) = (param_1->InstallResult).Progress.CurrentInstallSize;
  *(undefined1 *)((longlong)this + 0x40) = 0;
  bVar1 = (param_1->InstallResult).Error.bIsSet;
  *(bool *)((longlong)this + 0x40) = bVar1;
  if (bVar1 != false) {
    UE::UnifiedError::FError::FError
              ((FError *)((longlong)this + 0x30),&(param_1->InstallResult).Error.TypedValue);
  }
  *(EStatus *)((longlong)this + 0x48) = param_1->FinalRequestStatus;
  return this;
}

// FOnDemandContentInstaller @ 1445a3c10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

FOnDemandContentInstaller * __thiscall
UE::IoStore::FOnDemandContentInstaller::FOnDemandContentInstaller
          (FOnDemandContentInstaller *this,FOnDemandIoStore *param_1,FOnDemandHttpThread *param_2)

{
  FSlab *pFVar1;
  longlong lVar2;
  FSlab *pFVar3;
  FSlab *pFVar4;
  
  this->IoStore = param_1;
  this->HttpClient = param_2;
  Tasks::FPipe::FPipe(&this->InstallerPipe,L"IoStoreOnDemandInstallerPipe");
  (this->Mutex).State = (atomic<unsigned_char>)0x0;
  (this->RequestAllocator).CurrentSlab = (FSlab *)0x0;
  pFVar1 = ::operator_new(0x2c10);
  pFVar4 = (FSlab *)0x0;
  if (pFVar1 != (FSlab *)0x0) {
    memset(&pFVar1->field_0x4,0,0x2c0c);
    lVar2 = 0x20;
    pFVar1->Allocated = 0;
    pFVar1->Freed = 0;
    pFVar3 = pFVar1;
    do {
      pFVar3 = (FSlab *)&pFVar3->Elements[0].Slab;
      *(FSlab **)pFVar3 = (FSlab *)0x0;
      lVar2 = lVar2 + -1;
      pFVar4 = pFVar1;
    } while (lVar2 != 0);
  }
  (this->RequestAllocator).CurrentSlab = pFVar4;
  (this->RequestQueue).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RequestQueue).ArrayNum = 0;
  (this->RequestQueue).ArrayMax = 0;
  (this->RunningRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RunningRequests).ArrayNum = 0;
  (this->RunningRequests).ArrayMax = 0;
  *(undefined8 *)&this->PendingChunkDownloads = 0;
  *(undefined8 *)&(this->PendingChunkDownloads).field_0x8 = 0;
  *(undefined8 *)&(this->PendingChunkDownloads).field_0x20 = 0;
  *(undefined4 *)&(this->PendingChunkDownloads).field_0x28 = 0;
  *(undefined4 *)&(this->PendingChunkDownloads).field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingChunkDownloads).field_0x34 = 0;
  *(undefined4 *)&(this->PendingChunkDownloads).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PendingChunkDownloads).field_0x40 = 0;
  *(undefined4 *)&(this->PendingChunkDownloads).field_0x48 = 0;
  this->bShuttingDown = (atomic<bool>)0x0;
  return this;
}

// ~FOnDemandContentInstaller @ 1445a8c00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandContentInstaller::~FOnDemandContentInstaller(FOnDemandContentInstaller *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  FSlab *pFVar3;
  code *pcVar4;
  bool bVar5;
  
  Shutdown(this);
  *(undefined4 *)&(this->PendingChunkDownloads).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PendingChunkDownloads).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PendingChunkDownloads);
  pFVar2 = (this->RunningRequests).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->RequestQueue).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar3 = (this->RequestAllocator).CurrentSlab;
  if (pFVar3->Allocated != pFVar3->Freed) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentSlab->Allocated == CurrentSlab->Freed",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                       ,0x23,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  ::operator_delete((this->RequestAllocator).CurrentSlab,0x2c10);
  if ((this->InstallerPipe).TaskCount != (atomic<unsigned___int64>)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasWork()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Pipe.h"
                       ,0x2a,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InstallerPipe).EmptyEventRef.SharedReferenceCount.ReferenceController);
  return;
}

// operator() @ 1445aad20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
`UE::IoStore::FOnDemandContentInstaller::CancelInstallRequest'::__l2::<lambda_1>::operator()
          (void *this)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  FRequest *pFVar8;
  bool bVar9;
  longlong lVar10;
  FRequest *pFVar11;
  uint uVar12;
  uint uVar13;
  FRequest *pFVar15;
  uint uVar16;
  FRequest *pFVar17;
  FRequest *pFVar18;
  FIdentityFunctor local_res8;
  int local_res18 [2];
  longlong local_res20;
  FRequest *local_78;
  FString local_70;
  FString local_60 [2];
  FRequest *pFVar14;
  
  pFVar18 = (FRequest *)0x0;
  if ((*(longlong *)((longlong)this + 8) == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (**(longlong **)((longlong)this + 8) != 0) {
    if ((*(longlong **)((longlong)this + 8) == (longlong *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar14 = (FRequest *)**(longlong **)((longlong)this + 8);
    local_78 = pFVar14;
    if (((pFVar14->Variant).TypeIndex != '\x01') &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    bVar9 = local_78->bCancelled;
    cVar3 = (pFVar14->Variant).field_0x108;
    local_78->bCancelled = true;
    if (cVar3 == '\0') {
      if (bVar9 == false) {
        if (4 < (byte)LogIoStoreOnDemand._0_1_) {
          UE::IoStore::LexToString
                    (local_60,(FOnDemandContentHandle *)&(pFVar14->Variant).field_0x30);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
          if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
          }
        }
        lVar4 = *(longlong *)this;
        LOCK();
        bVar9 = *(char *)(lVar4 + 0x38) == '\0';
        if (bVar9) {
          *(char *)(lVar4 + 0x38) = '\x01';
        }
        UNLOCK();
        if (!bVar9) {
          UE::FMutex::LockSlow((FMutex *)(lVar4 + 0x38));
        }
        lVar5 = *(longlong *)this;
        local_res20 = lVar5;
        if (((*(FRequest ***)(lVar5 + 0x48) <= &local_78) &&
            (&local_78 < *(FRequest ***)(lVar5 + 0x48) + *(int *)(lVar5 + 0x54))) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_res18[0] = *(int *)(lVar5 + 0x50);
        lVar10 = (longlong)local_res18[0];
        if (local_res18[0] != 0) {
          plVar6 = *(longlong **)(lVar5 + 0x48);
          bVar9 = (FRequest *)*plVar6 != local_78;
          pFVar11 = local_78;
          pFVar14 = pFVar18;
          pFVar15 = pFVar18;
          pFVar17 = pFVar18;
          do {
            uVar12 = (uint)pFVar14;
            uVar13 = uVar12;
            do {
              pFVar15 = (FRequest *)((longlong)&pFVar15->SeqNo + 1);
              uVar13 = uVar13 + 1;
              pFVar14 = (FRequest *)(ulonglong)uVar13;
              if (lVar10 <= (longlong)pFVar15) break;
            } while (bVar9 == ((FRequest *)plVar6[(longlong)pFVar15] != pFVar11));
            if (bVar9 != false) {
              uVar16 = (uint)pFVar17;
              if (uVar16 != uVar12) {
                memmove(plVar6 + (int)uVar16,plVar6 + (int)uVar12,
                        (longlong)(int)(uVar13 - uVar12) << 3);
                pFVar11 = local_78;
              }
              pFVar17 = (FRequest *)(ulonglong)(uVar16 + (uVar13 - uVar12));
            }
            pFVar8 = local_78;
            bVar9 = (bool)(bVar9 ^ 1);
          } while ((longlong)pFVar15 < lVar10);
          *(int *)(local_res20 + 0x50) = (int)pFVar17;
          if (0 < local_res18[0] - (int)pFVar17) {
            local_res8 = SUB81(this,0);
            AlgoImpl::
            HeapifyInternal<UE::IoStore::FOnDemandContentInstaller::FRequest_*,int,FIdentityFunctor,TDereferenceWrapper<UE::IoStore::FOnDemandContentInstaller::FRequest_*,bool___cdecl(UE::IoStore::FOnDemandContentInstaller::FRequest_const_&,UE::IoStore::FOnDemandContentInstaller::FRequest_const_&)>_>
                      (*(FRequest ***)(*(longlong *)this + 0x48),*(int *)(*(longlong *)this + 0x50),
                       local_res8,
                       (TDereferenceWrapper<UE::IoStore::FOnDemandContentInstaller::FRequest_*,bool___cdecl(UE::IoStore::FOnDemandContentInstaller::FRequest_const_&,UE::IoStore::FOnDemandContentInstaller::FRequest_const_&)>
                        )0x1445f82e0);
            pFVar18 = pFVar8;
          }
        }
        LOCK();
        pbVar1 = (byte *)(lVar4 + 0x38);
        bVar2 = *pbVar1;
        *pbVar1 = *pbVar1 - 1;
        UNLOCK();
        if ((bVar2 & 2) != 0) {
          UE::FMutex::WakeWaitingThread((FMutex *)(lVar4 + 0x38));
        }
        if (pFVar18 != (FRequest *)0x0) {
          UE::IoStore::FOnDemandContentInstaller::CompleteInstallRequest
                    (*(FOnDemandContentInstaller **)this,pFVar18);
        }
      }
    }
    else if (bVar9 == false) {
      if (4 < (byte)LogIoStoreOnDemand._0_1_) {
        UE::IoStore::LexToString(&local_70,(FOnDemandContentHandle *)&(pFVar14->Variant).field_0x30)
        ;
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
      }
      local_res18[0] = 0;
      UE::IoStore::FOnDemandContentInstaller::TryCancelHttpRequestsForInstallRequest
                (*(FOnDemandContentInstaller **)this,(FInstall *)&pFVar14->Variant,local_res18);
      if (5 < (byte)LogIoStoreOnDemand._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
      }
    }
  }
  return;
}

// operator() @ 1445ab250

void __thiscall
`UE::IoStore::FOnDemandContentInstaller::ExecuteInstallRequest'::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FOnDemandChunkEntry *pFVar9;
  ForAnyElementType *pFVar10;
  undefined8 local_38;
  undefined8 uStack_30;
  int local_28;
  int iStack_24;
  
  lVar2 = *(longlong *)this;
  if (*(char *)(lVar2 + 0x140) != '\x01') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar7 = 0;
  if (param_1 < *(int *)(lVar2 + 0xf8)) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar3 = *(longlong *)(lVar2 + 0xf0);
  if (*(longlong *)(lVar3 + (longlong)param_1 * 0x28) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar9 = TArrayView<UE::IoStore::FOnDemandChunkEntry,int>::operator[]
                     ((TArrayView<UE::IoStore::FOnDemandChunkEntry,int> *)
                      (*(longlong *)(lVar3 + (longlong)param_1 * 0x28) + 0xd8),param_2);
  **(longlong **)((longlong)this + 8) =
       **(longlong **)((longlong)this + 8) + ((ulonglong)(pFVar9->EncodedSize + 0xf) & 0xfffffff0);
  if (!param_3) {
    uStack_30 = *(undefined8 *)this;
    pFVar10 = (ForAnyElementType *)(lVar2 + 0x100);
    local_38 = 0;
    local_28 = param_1;
    iStack_24 = param_2;
    if ((pFVar10->Data <= (FScriptContainerElement *)&local_38) &&
       ((FScriptContainerElement *)&local_38 <
        pFVar10->Data + (longlong)*(int *)(lVar2 + 0x10c) * 0x18)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar8 = *(int *)(lVar2 + 0x108);
    if (iVar8 == *(int *)(lVar2 + 0x10c)) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,pFVar10,(int *)(lVar2 + 0x10c));
    }
    *(int *)(lVar2 + 0x108) = iVar8 + 1;
    pFVar4 = pFVar10->Data;
    pFVar1 = pFVar4 + (longlong)iVar8 * 0x18;
    *(undefined8 *)pFVar1 = local_38;
    *(undefined8 *)(pFVar1 + 8) = uStack_30;
    *(ulonglong *)(pFVar4 + (longlong)iVar8 * 0x18 + 0x10) = CONCAT44(iStack_24,local_28);
    **(longlong **)((longlong)this + 0x10) =
         **(longlong **)((longlong)this + 0x10) +
         ((ulonglong)(pFVar9->EncodedSize + 0xf) & 0xfffffff0);
  }
  return;
}

// operator() @ 1445ac110

void __thiscall
`UE::IoStore::FOnDemandContentInstaller::ProcessInstallRequest'::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2,bool param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FOnDemandChunkEntry *pFVar5;
  
  lVar1 = *(longlong *)this;
  uVar4 = 0;
  if (param_1 < *(int *)(lVar1 + 200)) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar1 = *(longlong *)(lVar1 + 0xc0);
  if (*(longlong *)(lVar1 + (longlong)param_1 * 0x28) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar5 = TArrayView<UE::IoStore::FOnDemandChunkEntry,int>::operator[]
                     ((TArrayView<UE::IoStore::FOnDemandChunkEntry,int> *)
                      (*(longlong *)(lVar1 + (longlong)param_1 * 0x28) + 0xd8),param_2);
  **(longlong **)((longlong)this + 8) =
       **(longlong **)((longlong)this + 8) + ((ulonglong)(pFVar5->EncodedSize + 0xf) & 0xfffffff0);
  if (!param_3) {
    **(longlong **)((longlong)this + 0x10) =
         **(longlong **)((longlong)this + 0x10) +
         ((ulonglong)(pFVar5->EncodedSize + 0xf) & 0xfffffff0);
  }
  return;
}

// operator() @ 1445ace50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UE::IoStore::FOnDemandContentInstaller::UpdateInstallRequestPriority'::__l2::<lambda_1>::operator()
          (void *this)

{
  longlong *plVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  FIdentityFunctor local_res8 [8];
  uint local_res10;
  longlong local_res18;
  FString local_a8;
  undefined4 local_8c;
  TSet<TTuple<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest>,TDefaultMapHashableKeyFuncs<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest,1>,FDefaultSetAllocator>
  *local_88;
  FIoHash *pFStack_80;
  int local_78;
  int iStack_74;
  TBaseKeyIterator<0> local_70;
  int local_58 [2];
  undefined8 local_50;
  int local_48;
  undefined4 local_44;
  
  if ((*(longlong *)((longlong)this + 8) == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (**(longlong **)((longlong)this + 8) != 0) {
    if ((*(longlong **)((longlong)this + 8) == (longlong *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar5 = **(longlong **)((longlong)this + 8);
    if ((*(char *)(lVar5 + 0x140) != '\x01') &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (4 < (byte)LogIoStoreOnDemand._0_1_) {
      UE::IoStore::LexToString(&local_a8,(FOnDemandContentHandle *)(lVar5 + 0x60));
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    if (*(char *)(lVar5 + 0x138) == '\0') {
      lVar14 = *(longlong *)this;
      LOCK();
      bVar8 = *(char *)(lVar14 + 0x38) == '\0';
      if (bVar8) {
        *(char *)(lVar14 + 0x38) = '\x01';
      }
      UNLOCK();
      if (!bVar8) {
        UE::FMutex::LockSlow((FMutex *)(lVar14 + 0x38));
      }
      *(undefined4 *)(lVar5 + 4) = *(undefined4 *)((longlong)this + 0x18);
      AlgoImpl::
      HeapifyInternal<UE::IoStore::FOnDemandContentInstaller::FRequest_*,int,FIdentityFunctor,TDereferenceWrapper<UE::IoStore::FOnDemandContentInstaller::FRequest_*,bool___cdecl(UE::IoStore::FOnDemandContentInstaller::FRequest_const_&,UE::IoStore::FOnDemandContentInstaller::FRequest_const_&)>_>
                (*(FRequest ***)(*(longlong *)this + 0x48),*(int *)(*(longlong *)this + 0x50),
                 local_res8[0],
                 (TDereferenceWrapper<UE::IoStore::FOnDemandContentInstaller::FRequest_*,bool___cdecl(UE::IoStore::FOnDemandContentInstaller::FRequest_const_&,UE::IoStore::FOnDemandContentInstaller::FRequest_const_&)>
                  )0x1445f82e0);
      LOCK();
      pbVar2 = (byte *)(lVar14 + 0x38);
      bVar3 = *pbVar2;
      *pbVar2 = *pbVar2 - 1;
      UNLOCK();
      if ((bVar3 & 2) != 0) {
        UE::FMutex::WakeWaitingThread((FMutex *)(lVar14 + 0x38));
      }
    }
    else {
      *(undefined4 *)(lVar5 + 4) = *(undefined4 *)((longlong)this + 0x18);
      local_res10 = *(uint *)(lVar5 + 0x108);
      uVar12 = (ulonglong)(int)local_res10;
      lVar14 = *(longlong *)(lVar5 + 0x100);
      local_res18 = lVar14 + uVar12 * 0x18;
      while( true ) {
        lVar13 = local_res18;
        if (*(int *)(lVar5 + 0x108) != (int)uVar12) {
          local_res8[0] = (FIdentityFunctor)0x0;
          `TCheckedPointerIterator<UE::IoStore::FOnDemandContentInstaller::FChunkHttpRequestHandle,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (lVar14 == lVar13) break;
        uVar4 = *(uint *)(lVar14 + 0x10);
        uVar9 = 0;
        if ((int)uVar4 < *(int *)(lVar5 + 0xf8)) {
          uVar9 = ~uVar4 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar13 = *(longlong *)(lVar5 + 0xf0);
        if ((*(longlong *)(lVar13 + (longlong)(int)uVar4 * 0x28) == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar13 = *(longlong *)(lVar13 + (longlong)(int)uVar4 * 0x28);
        uVar4 = *(uint *)(lVar14 + 0x14);
        uVar9 = 0;
        if ((int)uVar4 < *(int *)(lVar13 + 0xe0)) {
          uVar9 = ~uVar4 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar11 = *(longlong *)this;
        local_88 = (TSet<TTuple<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest>,TDefaultMapHashableKeyFuncs<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest,1>,FDefaultSetAllocator>
                    *)(lVar11 + 0x68);
        local_78 = -1;
        pFStack_80 = (FIoHash *)(*(longlong *)(lVar13 + 0xd8) + (longlong)(int)uVar4 * 0x28);
        if (*(int *)(lVar11 + 0xb0) == 0) {
          iStack_74 = -1;
        }
        else {
          lVar13 = lVar11 + 0xa0;
          if (*(longlong *)(lVar11 + 0xa8) != 0) {
            lVar13 = *(longlong *)(lVar11 + 0xa8);
          }
          iStack_74 = *(int *)(lVar13 + ((longlong)*(int *)(lVar11 + 0xb0) - 1U &
                                        (longlong)*(int *)pFStack_80->Hash) * 4);
          local_78 = iStack_74;
          if (iStack_74 != -1) {
            lVar13 = *(longlong *)&local_88->Elements;
            do {
              lVar11 = (longlong)local_78;
              iStack_74 = *(int *)(lVar13 + 0x40 + lVar11 * 0x48);
              if (((*(longlong *)(lVar13 + lVar11 * 0x48) == *(longlong *)pFStack_80->Hash) &&
                  (*(longlong *)(lVar13 + 8 + lVar11 * 0x48) == *(longlong *)(pFStack_80->Hash + 8))
                  ) && (*(int *)(lVar13 + 0x10 + lVar11 * 0x48) == *(int *)(pFStack_80->Hash + 0x10)
                       )) break;
              local_78 = iStack_74;
            } while (iStack_74 != -1);
          }
        }
        local_70.NextIndex = iStack_74;
        local_70.Index = local_78;
        iVar10 = local_78;
        local_70.Set = local_88;
        local_70.Key = pFStack_80;
        if (local_78 == -1) {
LAB_1445ad227:
          uVar12 = (ulonglong)local_res10;
          lVar14 = lVar14 + 0x18;
        }
        else {
          do {
            lVar13 = *(longlong *)&(local_70.Set)->Elements + (longlong)iVar10 * 0x48;
            if (*(char *)(*(longlong *)&(local_70.Set)->Elements + 0x3c + (longlong)iVar10 * 0x48)
                == '\0') {
              puVar6 = *(undefined8 **)(lVar13 + 0x28);
              iVar10 = -0x80000000;
              while (local_58[0] = iVar10, puVar6 != (undefined8 *)0x0) {
                plVar1 = puVar6 + 1;
                puVar6 = (undefined8 *)*puVar6;
                iVar10 = *(int *)(*plVar1 + 4);
                if (*(int *)(*plVar1 + 4) <= local_58[0]) {
                  iVar10 = local_58[0];
                }
              }
              local_50 = *(undefined8 *)this;
              local_44 = local_8c;
              local_48 = local_58[0];
              (*(code *)(&
                        PTR_VisitApplyEncoded<0,0,UE::Core::Private::TOverload<__UE::IoStore::FOnDemandContentInstaller::UpdateInstallRequestPriority_::__l2::<lambda_1>::operator()_::__l24::<lambda_1>,__UE::IoStore::FOnDemandContentInstaller::UpdateInstallRequestPriority_::__l2::<lambda_1>::operator()_::__l24::<lambda_2>_>,TVariant<void_*,UE::FIoHttpRequest>_&>_150d7f1a8
                        )[*(byte *)(lVar13 + 0x20)])(local_58,lVar13 + 0x18);
              goto LAB_1445ad227;
            }
            TSet<TTuple<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest>,TDefaultMapHashableKeyFuncs<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest,1>,FDefaultSetAllocator>
            ::TBaseKeyIterator<0>::operator++(&local_70);
            iVar10 = local_70.Index;
          } while (local_70.Index != -1);
          uVar12 = (ulonglong)local_res10;
          lVar14 = lVar14 + 0x18;
        }
      }
    }
  }
  return;
}

// operator() @ 1445af2c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UE::IoStore::FOnDemandContentInstaller::TryExecuteNextRequest'::__l27::<lambda_2>::operator()
          (void *this)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar6;
  bool bVar7;
  FString local_38;
  FError local_28;
  char local_18;
  
  lVar3 = *(longlong *)this;
  LOCK();
  bVar7 = *(char *)(lVar3 + 0x38) == '\0';
  if (bVar7) {
    *(char *)(lVar3 + 0x38) = '\x01';
  }
  UNLOCK();
  if (!bVar7) {
    UE::FMutex::LockSlow((FMutex *)(lVar3 + 0x38));
  }
  if ((*(int *)(*(longlong *)this + 0x50) == 0) && (*(int *)(*(longlong *)this + 0x60) == 0)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  LOCK();
  pbVar1 = (byte *)(lVar3 + 0x38);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 - 1;
  UNLOCK();
  if ((bVar2 & 2) != 0) {
    UE::FMutex::WakeWaitingThread((FMutex *)(lVar3 + 0x38));
  }
  if (bVar7) {
    lVar3 = **(longlong **)this;
    if ((*(longlong *)(lVar3 + 0x30) == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    plVar4 = *(longlong **)(lVar3 + 0x30);
    (**(code **)(*plVar4 + 0xa0))(plVar4,&local_28);
    if (local_18 != '\0') {
      if (1 < (byte)LogIoStoreOnDemand._0_1_) {
        ::LexToString(&local_38,&local_28);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      TVar6.Reference = local_28.ErrorDetails.Reference;
      if ((local_18 != '\0') &&
         (local_28.ErrorCode = 0, local_28.ModuleId = 0,
         local_28.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
        local_28.ErrorDetails.Reference = (IErrorDetails *)0x0;
        (**(code **)((longlong)*TVar6.Reference + 0x10))();
        if (local_28.ErrorDetails.Reference != (IErrorDetails *)0x0) {
          (**(code **)((longlong)*local_28.ErrorDetails.Reference + 0x10))();
        }
      }
    }
  }
  return;
}

// operator() @ 1445af410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
`UE::IoStore::FOnDemandContentInstaller::CompleteInstallRequest'::__l60::<lambda_2>::operator()
          (void *this)

{
  longlong lVar1;
  code *pcVar2;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStackY_c8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  FError local_78;
  char local_68;
  code *local_58;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  lVar1 = *(longlong *)((longlong)this + 8);
  if (*(char *)(lVar1 + 0x140) != '\x01') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_58 = *(code **)(lVar1 + 0x80);
  local_30 = *(longlong **)(lVar1 + 0xa8);
  *(undefined8 *)(lVar1 + 0xa8) = 0;
  local_48 = *(longlong *)(lVar1 + 0x90);
  uStack_40 = *(undefined8 *)(lVar1 + 0x98);
  local_38 = *(undefined8 *)(lVar1 + 0xa0);
  if (local_58 != (code *)0x0) {
    *(undefined8 *)(lVar1 + 0x80) = 0;
  }
  if (*(char *)(lVar1 + 0x139) != '\0') {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5765499935633966562>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandContentInstaller.cpp"
                       ,0x5e2,"InstallRequest.bNotifyingProgressOnGameThread == false");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_98 = *(undefined8 *)((longlong)this + 0x10);
  local_68 = *(char *)((longlong)this + 0x40);
  local_80 = *(undefined8 *)((longlong)this + 0x28);
  local_90 = *(undefined8 *)((longlong)this + 0x18);
  uStack_88 = *(undefined8 *)((longlong)this + 0x20);
  if (local_68 != '\0') {
    UE::UnifiedError::FError::FError(&local_78,(FError *)((longlong)this + 0x30));
  }
  UE::Core::Private::Function::CheckCallable(local_58);
  pcVar2 = local_58;
  plVar6 = &local_48;
  if (local_30 != (longlong *)0x0) {
    plVar6 = local_30;
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  (*pcVar2)(uVar5,&local_98);
  TVar3.Reference = local_78.ErrorDetails.Reference;
  if (local_68 != '\0') {
    local_78.ErrorCode = 0;
    local_78.ModuleId = 0;
    if (local_78.ErrorDetails.Reference != (IErrorDetails *)0x0) {
      local_78.ErrorDetails.Reference = (IErrorDetails *)0x0;
      (**(code **)((longlong)*TVar3.Reference + 0x10))();
      if (local_78.ErrorDetails.Reference != (IErrorDetails *)0x0) {
        (**(code **)((longlong)*local_78.ErrorDetails.Reference + 0x10))();
      }
    }
  }
  if (*(longlong *)(lVar1 + 0xe0) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  LOCK();
  *(undefined1 *)(*(longlong *)(lVar1 + 0xe0) + 8) = *(undefined1 *)((longlong)this + 0x48);
  UNLOCK();
  UE::IoStore::FOnDemandContentInstaller::DestroyRequest
            (*(FOnDemandContentInstaller **)this,*(FRequest **)((longlong)this + 8));
  if (local_58 != (code *)0x0) {
    plVar6 = &local_48;
    if (local_30 != (longlong *)0x0) {
      plVar6 = local_30;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return;
}

// operator() @ 1445af610

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`UE::IoStore::FOnDemandContentInstaller::ExecuteInstallRequest'::__l112::<lambda_2>::operator()
          (void *this,FIoHttpResponse *param_1)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  int iVar3;
  EIoHttpResponseFlags EVar4;
  atomic<unsigned_int> aVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  EIoErrorCode EVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined2 uVar17;
  FTaskBase *this_00;
  FPipe *pFVar18;
  BufCore *this_01;
  atomic<unsigned_int> aVar19;
  
  lVar11 = *(longlong *)((longlong)this + 8);
  lVar12 = *(longlong *)((longlong)this + 0x10);
  lVar10 = *(longlong *)this;
  aVar5 = *(atomic<unsigned_int> *)((param_1->CacheKey).Hash + 0x10);
  uVar6 = *(undefined4 *)((longlong)this + 0x18);
  uVar7 = *(undefined4 *)((longlong)this + 0x1c);
  pFVar18 = (FPipe *)(param_1->Headers).Headers.AllocatorInstance.Data;
  lVar13 = *(longlong *)(param_1->CacheKey).Hash;
  lVar14 = *(longlong *)((param_1->CacheKey).Hash + 8);
  (param_1->Headers).Headers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar15 = *(undefined1 *)&(param_1->Headers).Headers.ArrayMax;
  uVar16 = *(undefined1 *)((longlong)&(param_1->Headers).Headers.ArrayMax + 1);
  uVar17 = *(undefined2 *)((longlong)&(param_1->Headers).Headers.ArrayMax + 2);
  aVar19 = (atomic<unsigned_int>)(param_1->Headers).Headers.ArrayNum;
  (param_1->Headers).Headers.ArrayNum = 0;
  (param_1->Headers).Headers.ArrayMax = 0;
  this_01 = (param_1->Body).CorePtr.Reference;
  (param_1->Body).CorePtr.Reference = (BufCore *)0x0;
  EVar8 = param_1->ErrorCode;
  uVar9 = param_1->StatusCode;
  EVar4 = param_1->Flags;
  this_00 = FMemory::Malloc(0x140,0x40);
  if (this_00 == (FTaskBase *)0x0) {
    this_00 = (FTaskBase *)0x0;
  }
  else {
    UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
    this_00->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<``UE::IoStore::FOnDemandContentInstaller::ExecuteInstallRequest'::`112'::<lambda_2>::operator()'::`2'::<lambda_1>,void,void>
          ::_vftable_;
    UE::Tasks::Private::FTaskBase::Init
              (this_00,L"ProcessIoStoreOnDemandDownloadedChunk",BackgroundLow,None,None);
    this_00[1]._padding_ = lVar10;
    *(undefined4 *)((longlong)&this_00[1]._padding_ + 4) = uVar7;
    this_00[1]._padding_ = lVar11;
    this_00[1]._padding_ = lVar12;
    *(undefined4 *)&this_00[1]._padding_ = uVar6;
    this_00[1]._padding_ = lVar13;
    this_00[1]._padding_ = lVar14;
    this_00[1].RefCount = aVar5;
    this_00[1].Pipe = pFVar18;
    pFVar18 = (FPipe *)0x0;
    this_00[1].ExtendedPriority = uVar15;
    this_00[1].TaskTriggered = (atomic<bool>)uVar16;
    this_00[1]._padding_ = uVar17;
    this_00[1].StateChangeEvent.Count = aVar19;
    aVar19 = (atomic<unsigned_int>)0x0;
    *(EIoErrorCode *)&this_00[1].TraceId = EVar8;
    *(uint *)&this_00[1].TraceId.field_0x4 = uVar9;
    this_00[1].Prerequisites.Prerequisites.AllocatorInstance.InlineData[0] = EVar4;
    *(BufCore **)&this_00[1].ExecutingThreadId = this_01;
    this_01 = (BufCore *)0x0;
    this_00->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTask<``UE::IoStore::FOnDemandContentInstaller::ExecuteInstallRequest'::`112'::<lambda_2>::operator()'::`2'::<lambda_1>_>
          ::_vftable_;
  }
  LOCK();
  *(longlong *)(lVar10 + 0x18) = *(longlong *)(lVar10 + 0x18) + 1;
  UNLOCK();
  LOCK();
  this_00->NumLocks = (atomic<unsigned_int>)((int)this_00->NumLocks + 1);
  UNLOCK();
  this_00->Pipe = (FPipe *)(lVar10 + 0x10);
  UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x140);
  LOCK();
  paVar1 = &this_00->RefCount;
  aVar5 = *paVar1;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar5 == (atomic<unsigned_int>)0x1) {
    (**(code **)this_00->_padding_)(this_00,1);
  }
  if (this_01 != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount(this_01);
    LOCK();
    piVar2 = &this_01->NumRefs;
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      FIoBuffer::BufCore::~BufCore(this_01);
      ::operator_delete(this_01,0x20);
    }
  }
  DestructItems<FAnsiString,int>((FAnsiString *)pFVar18,(int)aVar19);
  if (pFVar18 != (FPipe *)0x0) {
    FMemory::Free(pFVar18);
  }
  return;
}

// operator() @ 1445af910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`UE::IoStore::FOnDemandContentInstaller::ExecuteInstallRequest'::__l114::<lambda_3>::operator()
          (void *this,uint param_1,TStringView<wchar_t> *param_2,FIoBuffer *param_3)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  atomic<unsigned_int> aVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  FTaskBase *this_00;
  undefined4 uVar13;
  BufCore *this_01;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58 [2];
  
  iVar4 = param_2->Size;
  pwVar7 = param_2->DataPtr;
  local_68.Size = 9;
  uVar13 = 0;
  if (99 < param_1 - 200) {
    uVar13 = 6;
  }
  local_68.DataPtr = L"cancelled";
  iVar12 = 0;
  if (0 < iVar4) {
    iVar12 = iVar4;
  }
  local_58[0].DataPtr = pwVar7 + ((longlong)iVar4 - (longlong)iVar12);
  local_58[0].Size = iVar12;
  iVar11 = UE::String::FindFirst(local_58,&local_68,IgnoreCase);
  if (iVar11 == -1) {
    local_58[0].DataPtr = L"canceled";
    local_58[0].Size = 8;
    local_68.DataPtr = pwVar7 + ((longlong)iVar4 - (longlong)iVar12);
    local_68.Size = iVar12;
    iVar12 = UE::String::FindFirst(&local_68,local_58,IgnoreCase);
    if (iVar12 == -1) {
      if ((2 < (byte)LogIoStoreOnDemand._0_1_) && (iVar4 != 0)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
      }
      goto LAB_1445afa2b;
    }
  }
  uVar13 = 3;
LAB_1445afa2b:
  lVar8 = *(longlong *)this;
  lVar9 = *(longlong *)((longlong)this + 8);
  lVar10 = *(longlong *)((longlong)this + 0x10);
  uVar5 = *(undefined4 *)((longlong)this + 0x18);
  uVar6 = *(undefined4 *)((longlong)this + 0x1c);
  this_01 = (param_3->CorePtr).Reference;
  (param_3->CorePtr).Reference = (BufCore *)0x0;
  this_00 = FMemory::Malloc(0x140,0x40);
  if (this_00 == (FTaskBase *)0x0) {
    this_00 = (FTaskBase *)0x0;
  }
  else {
    UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
    this_00->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<``UE::IoStore::FOnDemandContentInstaller::ExecuteInstallRequest'::`114'::<lambda_3>::operator()'::`2'::<lambda_1>,void,void>
          ::_vftable_;
    UE::Tasks::Private::FTaskBase::Init
              (this_00,L"ProcessIoStoreOnDemandDownloadedChunk",BackgroundLow,None,None);
    this_00[1]._padding_ = lVar9;
    this_00[1]._padding_ = lVar10;
    *(uint *)((longlong)&this_00[1]._padding_ + 4) = param_1;
    this_00[1]._padding_ = lVar8;
    *(undefined4 *)&this_00[1]._padding_ = uVar5;
    this_00[1]._padding_ = (longlong)this_01;
    this_01 = (BufCore *)0x0;
    *(undefined4 *)((longlong)&this_00[1]._padding_ + 4) = uVar6;
    *(undefined4 *)&this_00[1]._padding_ = uVar13;
    this_00->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTask<``UE::IoStore::FOnDemandContentInstaller::ExecuteInstallRequest'::`114'::<lambda_3>::operator()'::`2'::<lambda_1>_>
          ::_vftable_;
  }
  LOCK();
  *(longlong *)(lVar8 + 0x18) = *(longlong *)(lVar8 + 0x18) + 1;
  UNLOCK();
  LOCK();
  this_00->NumLocks = (atomic<unsigned_int>)((int)this_00->NumLocks + 1);
  UNLOCK();
  this_00->Pipe = (FPipe *)(lVar8 + 0x10);
  UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x140);
  LOCK();
  paVar1 = &this_00->RefCount;
  aVar3 = *paVar1;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar3 == (atomic<unsigned_int>)0x1) {
    (**(code **)this_00->_padding_)(this_00,1);
  }
  if (this_01 != (BufCore *)0x0) {
    FIoBuffer::BufCore::CheckRefCount(this_01);
    LOCK();
    piVar2 = &this_01->NumRefs;
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      FIoBuffer::BufCore::~BufCore(this_01);
      ::operator_delete(this_01,0x20);
    }
  }
  return;
}

// CanExecuteRequest @ 1445b5960

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

bool __thiscall
UE::IoStore::FOnDemandContentInstaller::CanExecuteRequest
          (FOnDemandContentInstaller *this,FRequest *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  
  bVar3 = CVars::EnableConcurentInstallRequests();
  iVar1 = (this->RunningRequests).ArrayNum;
  if (!bVar3) {
    return iVar1 == 0;
  }
  if (iVar1 != 0) {
    uVar5 = (ulonglong)(param_1->Variant).TypeIndex;
    if ((5 < uVar5) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,FEmptyVariantState,UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,UE::IoStore::FOnDemandContentInstaller::FRequest::FPurge,UE::IoStore::FOnDemandContentInstaller::FRequest::FDefrag,UE::IoStore::FOnDemandContentInstaller::FRequest::FVerify,UE::IoStore::FOnDemandContentInstaller::FRequest::FFlushLastAccess>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar5) == '\0') {
      return false;
    }
    iVar1 = (this->RunningRequests).ArrayNum;
    if (iVar1 < 2) {
      if ((iVar1 < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      bVar3 = FRequest::IsInstall(*(FRequest **)(this->RunningRequests).AllocatorInstance.Data);
      if (!bVar3) {
        return false;
      }
    }
  }
  return true;
}

// CancelInstallRequest @ 1445b6510

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandContentInstaller::CancelInstallRequest
          (FOnDemandContentInstaller *this,
          TSharedPtr<UE::IoStore::FOnDemandInternalInstallRequest,1> *param_1)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned_int> *paVar2;
  atomic<unsigned_int> aVar3;
  FOnDemandInternalInstallRequest *pFVar4;
  FTaskBase *this_00;
  TReferenceControllerBase<1> *pTVar5;
  
  pTVar5 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar4 = param_1->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Tasks::Private::SmallTaskAllocator);
  if (this_00 == (FTaskBase *)0x0) {
    this_00 = (FTaskBase *)0x0;
  }
  else {
    Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
    this_00->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::IoStore::FOnDemandContentInstaller::CancelInstallRequest'::`2'::<lambda_1>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              (this_00,L"CancelIoStoreOnDemandInstallRequest",Default,None,None);
    this_00[1]._padding_ = (longlong)pTVar5;
    this_00->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::IoStore::FOnDemandContentInstaller::CancelInstallRequest'::`2'::<lambda_1>_>
          ::_vftable_;
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    this_00[1]._padding_ = (longlong)this;
    this_00[1]._padding_ = (longlong)pFVar4;
  }
  LOCK();
  paVar1 = &(this->InstallerPipe).TaskCount;
  *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
  UNLOCK();
  LOCK();
  this_00->NumLocks = (atomic<unsigned_int>)((int)this_00->NumLocks + 1);
  UNLOCK();
  this_00->Pipe = &this->InstallerPipe;
  Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
  LOCK();
  paVar2 = &this_00->RefCount;
  aVar3 = *paVar2;
  *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
  UNLOCK();
  if (aVar3 == (atomic<unsigned_int>)0x1) {
    (**(code **)this_00->_padding_)(this_00,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// CompleteDefragRequest @ 1445b8fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandContentInstaller::CompleteDefragRequest
          (FOnDemandContentInstaller *this,FRequest *param_1)

{
  FScriptContainerElement *pFVar1;
  FMutex *pFVar2;
  atomic<unsigned_char> aVar3;
  byte bVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  FScriptContainerElement *pFVar8;
  TOptional<UE::UnifiedError::FError> *pTVar9;
  undefined8 uVar10;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar11;
  IErrorDetails *pIVar12;
  undefined1 auStack_178 [32];
  double local_158;
  TOptional<UE::UnifiedError::FError> local_150;
  double local_130;
  FError local_128;
  char local_118;
  TOptional<UE::UnifiedError::FError> local_110;
  undefined1 local_f8 [4];
  undefined1 local_f4 [4];
  LARGE_INTEGER local_f0;
  FRequest *local_e8;
  FString local_e0;
  code *local_c8;
  IErrorDetails local_b8 [3];
  IErrorDetails *local_a0;
  code *local_98 [2];
  IErrorDetails local_88 [3];
  IErrorDetails *local_70;
  double local_68;
  FError local_60;
  bool local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_178;
  if ((this->RunningRequests).ArrayNum == 1) {
    pFVar8 = (this->RunningRequests).AllocatorInstance.Data;
    pFVar1 = pFVar8 + 8;
    for (; pFVar8 != pFVar1; pFVar8 = pFVar8 + 8) {
      if (*(FRequest **)pFVar8 == param_1) goto LAB_1445b9064;
    }
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("RunningRequests.Num() == 1 && RunningRequests.Contains(&Request)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandContentInstaller.cpp"
                     ,0x61e,L"");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1445b9064:
  QueryPerformanceCounter(&local_f0);
  dVar6 = (double)(local_f0.QuadPart - param_1->StartTimeCycles) *
          FGenericPlatformTime::SecondsPerCycle64;
  if (4 < (byte)LogIoStoreOnDemand._0_1_) {
    FRequest::GetErrorString(param_1,&local_e0);
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
  }
  local_150.bIsSet = false;
  local_158 = dVar6;
  pTVar9 = FRequest::ConsumeError(param_1,&local_110);
  TVar11.Reference = local_150.TypedValue.ErrorDetails.Reference;
  if (pTVar9 != &local_150) {
    if (pTVar9->bIsSet == false) {
      if (local_150.bIsSet != false) {
        local_150.TypedValue.ErrorCode = 0;
        local_150.TypedValue.ModuleId = 0;
        if (local_150.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
          local_150.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
          (**(code **)((longlong)*TVar11.Reference + 0x10))();
          if (local_150.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
            (**(code **)((longlong)*local_150.TypedValue.ErrorDetails.Reference + 0x10))();
          }
        }
        local_150.bIsSet = false;
      }
    }
    else {
      if ((local_150.bIsSet != false) &&
         (local_150.TypedValue.ErrorCode = 0, local_150.TypedValue.ModuleId = 0,
         local_150.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
        local_150.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
        (**(code **)((longlong)*TVar11.Reference + 0x10))();
        if (local_150.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
          (**(code **)((longlong)*local_150.TypedValue.ErrorDetails.Reference + 0x10))();
        }
      }
      UnifiedError::FError::FError(&local_150.TypedValue,&pTVar9->TypedValue);
      local_150.bIsSet = true;
    }
  }
  TVar11.Reference = local_110.TypedValue.ErrorDetails.Reference;
  if ((local_110.bIsSet != false) &&
     (local_110.TypedValue.ErrorCode = 0, local_110.TypedValue.ModuleId = 0,
     local_110.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
    local_110.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
    (**(code **)((longlong)*TVar11.Reference + 0x10))();
    if (local_110.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
      (**(code **)((longlong)*local_110.TypedValue.ErrorDetails.Reference + 0x10))();
    }
  }
  if (((param_1->Variant).TypeIndex != '\x03') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  bVar4 = *(byte *)&param_1->Variant;
  if (((param_1->Variant).TypeIndex != '\x03') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_c8 = *(code **)&(param_1->Variant).field_0x20;
  local_a0 = *(IErrorDetails **)&(param_1->Variant).field_0x48;
  *(undefined8 *)&(param_1->Variant).field_0x48 = 0;
  local_b8[2] = *(IErrorDetails *)&(param_1->Variant).field_0x40;
  local_b8[0] = *(IErrorDetails *)&(param_1->Variant).field_0x30;
  local_b8[1] = *(IErrorDetails *)&(param_1->Variant).field_0x38;
  if (local_c8 != (code *)0x0) {
    *(undefined8 *)&(param_1->Variant).field_0x20 = 0;
  }
  LOCK();
  bVar7 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar7) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar7) {
    FMutex::LockSlow(&this->Mutex);
  }
  local_e8 = param_1;
  TArray<UE::IoStore::FOnDemandContentInstaller::FRequest_*,TSizedDefaultAllocator<32>_>::
  RemoveSingleSwap(&this->RunningRequests,&local_e8,Default);
  LOCK();
  pFVar2 = &this->Mutex;
  aVar3 = pFVar2->State;
  pFVar2->State = (atomic<unsigned_char>)((char)pFVar2->State + -1);
  UNLOCK();
  if (((byte)aVar3 & 2) != 0) {
    FMutex::WakeWaitingThread(&this->Mutex);
  }
  DestroyRequest(this,param_1);
  TryExecuteNextRequest(this);
  if (local_c8 == (code *)0x0) goto LAB_1445b94a8;
  if ((bVar4 & 1) == 0) {
    local_130 = local_158;
    local_118 = local_150.bIsSet;
    if (local_150.bIsSet != false) {
      local_128.ErrorCode = local_150.TypedValue.ErrorCode;
      local_128.ModuleId = local_150.TypedValue.ModuleId;
      local_128.ErrorDetails.Reference = (IErrorDetails *)0x0;
      local_150.TypedValue.ErrorCode = 0;
      local_150.TypedValue.ModuleId = 0;
      if (local_150.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
        local_128.ErrorDetails.Reference = local_150.TypedValue.ErrorDetails.Reference;
        (**(code **)((longlong)*local_150.TypedValue.ErrorDetails.Reference + 8))
                  (local_150.TypedValue.ErrorDetails.Reference,local_f4);
        TVar11.Reference = local_150.TypedValue.ErrorDetails.Reference;
        if (local_150.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
          local_150.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
          (**(code **)((longlong)*TVar11.Reference + 0x10))();
        }
      }
    }
    Core::Private::Function::CheckCallable(local_c8);
    pcVar5 = local_c8;
    pIVar12 = local_b8;
    if (local_a0 != (IErrorDetails *)0x0) {
      pIVar12 = local_a0;
    }
    uVar10 = (**(code **)((longlong)*pIVar12 + 8))();
    (*pcVar5)(uVar10,&local_130);
    TVar11.Reference = local_128.ErrorDetails.Reference;
    if ((local_118 != '\0') &&
       (local_128.ErrorCode = 0, local_128.ModuleId = 0,
       local_128.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
      local_128.ErrorDetails.Reference = (IErrorDetails *)0x0;
      (**(code **)((longlong)*TVar11.Reference + 0x10))();
      TVar11.Reference = local_128.ErrorDetails.Reference;
      if (local_128.ErrorDetails.Reference != (IErrorDetails *)0x0) goto LAB_1445b9487;
    }
  }
  else {
    local_70 = local_a0;
    local_88[0] = local_b8[0];
    local_88[1] = local_b8[1];
    local_68 = local_158;
    local_98[0] = local_c8;
    local_a0 = (IErrorDetails *)0x0;
    local_88[2] = local_b8[2];
    local_c8 = (code *)0x0;
    local_50 = local_150.bIsSet;
    if (local_150.bIsSet != false) {
      local_60.ErrorCode = local_150.TypedValue.ErrorCode;
      local_60.ModuleId = local_150.TypedValue.ModuleId;
      local_60.ErrorDetails.Reference = (IErrorDetails *)0x0;
      local_150.TypedValue.ErrorCode = 0;
      local_150.TypedValue.ModuleId = 0;
      if (local_150.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
        local_60.ErrorDetails.Reference = local_150.TypedValue.ErrorDetails.Reference;
        (**(code **)((longlong)*local_150.TypedValue.ErrorDetails.Reference + 8))
                  (local_150.TypedValue.ErrorDetails.Reference,local_f8);
        TVar11.Reference = local_150.TypedValue.ErrorDetails.Reference;
        if (local_150.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
          local_150.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
          (**(code **)((longlong)*TVar11.Reference + 0x10))();
        }
      }
    }
    ExecuteOnGameThread<_UE::IoStore::FOnDemandContentInstaller::CompleteDefragRequest_::__l34::<lambda_1>_>
              (L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandContentInstaller.cpp(1595)"
               ,(<lambda_1> *)local_98);
    TVar11.Reference = local_60.ErrorDetails.Reference;
    if ((local_50 != false) &&
       (local_60.ErrorCode = 0, local_60.ModuleId = 0,
       local_60.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
      local_60.ErrorDetails.Reference = (IErrorDetails *)0x0;
      (**(code **)((longlong)*TVar11.Reference + 0x10))();
      if (local_60.ErrorDetails.Reference != (IErrorDetails *)0x0) {
        (**(code **)((longlong)*local_60.ErrorDetails.Reference + 0x10))();
      }
    }
    if (local_98[0] != (code *)0x0) {
      TVar11.Reference = local_88;
      if (local_70 != (IErrorDetails *)0x0) {
        TVar11.Reference = local_70;
      }
LAB_1445b9487:
      (**(code **)((longlong)*TVar11.Reference + 0x10))();
    }
  }
  if (local_c8 != (code *)0x0) {
    pIVar12 = local_b8;
    if (local_a0 != (IErrorDetails *)0x0) {
      pIVar12 = local_a0;
    }
    (**(code **)((longlong)*pIVar12 + 0x10))();
  }
LAB_1445b94a8:
  TVar11.Reference = local_150.TypedValue.ErrorDetails.Reference;
  if ((local_150.bIsSet != false) &&
     (local_150.TypedValue.ErrorCode = 0, local_150.TypedValue.ModuleId = 0,
     local_150.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
    local_150.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
    (**(code **)((longlong)*TVar11.Reference + 0x10))();
    if (local_150.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
      (**(code **)((longlong)*local_150.TypedValue.ErrorDetails.Reference + 0x10))();
    }
  }
  return;
}

// CompleteFlushLastAccessRequest @ 1445b9510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandContentInstaller::CompleteFlushLastAccessRequest
          (FOnDemandContentInstaller *this,FRequest *param_1)

{
  FMutex *pFVar1;
  atomic<unsigned_char> aVar2;
  code *pcVar3;
  double dVar4;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar5;
  bool bVar6;
  TOptional<UE::UnifiedError::FError> *pTVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 auStack_118 [40];
  double local_f0;
  TOptional<UE::UnifiedError::FError> local_e8;
  double local_d0;
  FError local_c8;
  char local_b8;
  TOptional<UE::UnifiedError::FError> local_b0;
  undefined1 local_98 [8];
  LARGE_INTEGER local_90;
  FRequest *local_88;
  FString local_80;
  code *local_68;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  QueryPerformanceCounter(&local_90);
  dVar4 = (double)(local_90.QuadPart - param_1->StartTimeCycles) *
          FGenericPlatformTime::SecondsPerCycle64;
  if (4 < (byte)LogIoStoreOnDemand._0_1_) {
    FRequest::GetErrorString(param_1,&local_80);
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
  }
  local_e8.bIsSet = false;
  local_f0 = dVar4;
  pTVar7 = FRequest::ConsumeError(param_1,&local_b0);
  TOptional<UE::UnifiedError::FError>::operator=(&local_e8,pTVar7);
  TVar5.Reference = local_b0.TypedValue.ErrorDetails.Reference;
  if ((local_b0.bIsSet != false) &&
     (local_b0.TypedValue.ErrorCode = 0, local_b0.TypedValue.ModuleId = 0,
     local_b0.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
    local_b0.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
    (**(code **)((longlong)*TVar5.Reference + 0x10))();
    if (local_b0.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
      (**(code **)((longlong)*local_b0.TypedValue.ErrorDetails.Reference + 0x10))();
    }
  }
  if (((param_1->Variant).TypeIndex != '\x05') &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_68 = *(code **)&param_1->Variant;
  local_40 = *(longlong **)&(param_1->Variant).field_0x28;
  *(undefined8 *)&(param_1->Variant).field_0x28 = 0;
  local_48 = *(undefined8 *)&(param_1->Variant).field_0x20;
  local_58 = *(longlong *)&(param_1->Variant).field_0x10;
  uStack_50 = *(undefined8 *)&(param_1->Variant).field_0x18;
  if (local_68 != (code *)0x0) {
    *(undefined8 *)&param_1->Variant = 0;
  }
  LOCK();
  bVar6 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar6) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar6) {
    FMutex::LockSlow(&this->Mutex);
  }
  local_88 = param_1;
  TArray<UE::IoStore::FOnDemandContentInstaller::FRequest_*,TSizedDefaultAllocator<32>_>::
  RemoveSingleSwap(&this->RunningRequests,&local_88,Default);
  LOCK();
  pFVar1 = &this->Mutex;
  aVar2 = pFVar1->State;
  pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    FMutex::WakeWaitingThread(&this->Mutex);
  }
  DestroyRequest(this,param_1);
  TryExecuteNextRequest(this);
  if (local_68 != (code *)0x0) {
    local_d0 = local_f0;
    local_b8 = local_e8.bIsSet;
    if (local_e8.bIsSet != false) {
      local_c8.ErrorCode = local_e8.TypedValue.ErrorCode;
      local_c8.ModuleId = local_e8.TypedValue.ModuleId;
      local_c8.ErrorDetails.Reference = (IErrorDetails *)0x0;
      local_e8.TypedValue.ErrorCode = 0;
      local_e8.TypedValue.ModuleId = 0;
      if (local_e8.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
        local_c8.ErrorDetails.Reference = local_e8.TypedValue.ErrorDetails.Reference;
        (**(code **)((longlong)*local_e8.TypedValue.ErrorDetails.Reference + 8))
                  (local_e8.TypedValue.ErrorDetails.Reference,local_98);
        TVar5.Reference = local_e8.TypedValue.ErrorDetails.Reference;
        if (local_e8.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
          local_e8.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
          (**(code **)((longlong)*TVar5.Reference + 0x10))();
        }
      }
    }
    Core::Private::Function::CheckCallable(local_68);
    pcVar3 = local_68;
    plVar9 = &local_58;
    if (local_40 != (longlong *)0x0) {
      plVar9 = local_40;
    }
    uVar8 = (**(code **)(*plVar9 + 8))();
    (*pcVar3)(uVar8,&local_d0);
    TVar5.Reference = local_c8.ErrorDetails.Reference;
    if ((local_b8 != '\0') &&
       (local_c8.ErrorCode = 0, local_c8.ModuleId = 0,
       local_c8.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
      local_c8.ErrorDetails.Reference = (IErrorDetails *)0x0;
      (**(code **)((longlong)*TVar5.Reference + 0x10))();
      if (local_c8.ErrorDetails.Reference != (IErrorDetails *)0x0) {
        (**(code **)((longlong)*local_c8.ErrorDetails.Reference + 0x10))();
      }
    }
    if (local_68 != (code *)0x0) {
      plVar9 = &local_58;
      if (local_40 != (longlong *)0x0) {
        plVar9 = local_40;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  TVar5.Reference = local_e8.TypedValue.ErrorDetails.Reference;
  if ((local_e8.bIsSet != false) &&
     (local_e8.TypedValue.ErrorCode = 0, local_e8.TypedValue.ModuleId = 0,
     local_e8.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
    local_e8.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
    (**(code **)((longlong)*TVar5.Reference + 0x10))();
    if (local_e8.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
      (**(code **)((longlong)*local_e8.TypedValue.ErrorDetails.Reference + 0x10))();
    }
  }
  return;
}

// CompleteInstallRequest @ 1445b9980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001445b9ec1) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandContentInstaller::CompleteInstallRequest
          (FOnDemandContentInstaller *this,FRequest *param_1)

{
  FMutex *pFVar1;
  atomic<int> *paVar2;
  ForAnyElementType *pFVar3;
  atomic<unsigned_char> aVar4;
  atomic<int> aVar5;
  uint uVar6;
  FOnDemandIoStore *pFVar7;
  IOnDemandPackageStoreBackend *pIVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  FRequest *pFVar12;
  FOnDemandContentInstaller *this_00;
  uint *puVar13;
  longlong *plVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  TOptional<UE::UnifiedError::FError> *pTVar18;
  FTSTicker *this_01;
  undefined8 uVar19;
  longlong lVar20;
  code **ppcVar21;
  IErrorDetails *pIVar22;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong *plVar26;
  uint *puVar27;
  ForAnyElementType FVar28;
  FScriptContainerElement *pFVar29;
  EStatus EVar30;
  int iVar31;
  FScriptContainerElement *pFVar32;
  ulonglong uVar33;
  bool bVar34;
  undefined1 auStackY_358 [32];
  undefined1 local_307;
  undefined1 local_306;
  undefined1 local_305;
  undefined1 local_304;
  undefined1 local_303 [3];
  ForAnyElementType local_300;
  undefined8 local_2f8;
  FString local_2f0;
  FScriptContainerElement *local_2e0;
  longlong *local_2d8;
  uint *local_2d0;
  double local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  ulong64 local_2b0;
  TOptional<UE::UnifiedError::FError> local_2a8;
  uint local_290;
  uint local_28c;
  ulong64 local_288;
  FRequest *local_280;
  FString local_278;
  FOnDemandContentInstaller *local_268;
  TOptional<UE::UnifiedError::FError> local_260;
  double local_248;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  ulong64 local_230;
  FError local_228;
  char local_218;
  FRequest *local_210;
  undefined1 local_208 [4];
  undefined1 local_204 [4];
  uint *local_200;
  longlong *local_1f8;
  atomic<unsigned_char> *local_1f0;
  LARGE_INTEGER local_1e8;
  <lambda_2> local_1e0;
  FString local_190;
  TWeakPtr<FTSTicker::FElement,1> local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  <lambda_2> local_140;
  code *local_e8;
  IErrorDetails local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  IErrorDetails *local_c0;
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_358;
  local_280 = param_1;
  local_268 = this;
  if (((param_1->Variant).TypeIndex != '\x01') &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index == TypeIndex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                          ,0x97,L""), bVar15)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar17 = *(int *)&(param_1->Variant).field_0xc8;
  local_288 = 0;
  lVar25 = *(longlong *)&(param_1->Variant).field_0xc0;
  local_300.Data = (FScriptContainerElement *)0x0;
  local_2f8 = 0;
  lVar20 = lVar25 + (longlong)iVar17 * 0x28;
  while( true ) {
    if (*(int *)&(param_1->Variant).field_0xc8 != iVar17) {
      local_307 = 0;
      `TCheckedPointerIterator<UE::IoStore::Private::FResolvedContainerChunks_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_307);
    }
    if (lVar25 == lVar20) break;
    local_288 = local_288 + (longlong)*(int *)(lVar25 + 0x18);
    lVar25 = lVar25 + 0x28;
  }
  if (((param_1->bCancelled == false) && ((param_1->Result).Error.bIsSet == false)) &&
     (local_288 != 0)) {
    local_1f0 = &(this->IoStore->ContainerMutex).State;
    LOCK();
    bVar15 = ((FMutex *)local_1f0)->State == (atomic<unsigned_char>)0x0;
    if (bVar15) {
      ((FMutex *)local_1f0)->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar15) {
      FMutex::LockSlow((FMutex *)local_1f0);
    }
    local_28c = *(uint *)&(param_1->Variant).field_0xc8;
    uVar24 = (ulonglong)(int)local_28c;
    plVar26 = *(longlong **)&(param_1->Variant).field_0xc0;
    local_1f8 = plVar26 + uVar24 * 5;
    local_2d0 = (uint *)(plVar26 + 3);
    while( true ) {
      plVar14 = local_1f8;
      local_2d8 = plVar26;
      if (*(int *)&(param_1->Variant).field_0xc8 != (int)uVar24) {
        local_306 = 0;
        `TCheckedPointerIterator<UE::IoStore::Private::FResolvedContainerChunks,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(&local_306);
      }
      if (plVar26 == plVar14) break;
      if ((*plVar26 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar12 = local_280;
      lVar20 = *plVar26;
      if ((*(longlong *)&(local_280->Variant).field_0x30 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar25 = *(longlong *)&(pFVar12->Variant).field_0x30;
      pFVar3 = (ForAnyElementType *)(lVar20 + 0xe8);
      iVar17 = *(int *)(lVar20 + 0xf0);
      pFVar32 = pFVar3->Data;
      pFVar29 = pFVar32 + (longlong)iVar17 * 0x28;
      while( true ) {
        local_2e0 = pFVar32;
        if (*(int *)(lVar20 + 0xf0) != iVar17) {
          local_305 = 0;
          `TCheckedPointerIterator<UE::IoStore::FOnDemandChunkEntryReferences,int,0>::operator!='::
          __l2::<lambda_1>::operator()(&local_305);
        }
        if (pFVar32 == pFVar29) break;
        if (*(longlong *)pFVar32 == lVar25) goto LAB_1445b9bf3;
        pFVar32 = pFVar32 + 0x28;
      }
      iVar17 = *(int *)(lVar20 + 0xf0);
      if (iVar17 == *(int *)(lVar20 + 0xf4)) {
        iVar17 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x828,pFVar3,(int *)(lVar20 + 0xf4));
      }
      *(int *)(lVar20 + 0xf0) = iVar17 + 1;
      pFVar32 = pFVar3->Data + (longlong)iVar17 * 0x28;
      local_2e0 = pFVar32;
      DefaultConstructItems<UE::IoStore::FOnDemandChunkEntryReferences,int>(pFVar32,1);
      *(longlong *)pFVar32 = lVar25;
      TBitArray<FDefaultBitArrayAllocator>::SetNum<bool>
                ((TBitArray<FDefaultBitArrayAllocator> *)(pFVar32 + 8),*(int *)(lVar20 + 0xe0),false
                );
LAB_1445b9bf3:
      local_290 = *local_2d0;
      uVar24 = (ulonglong)(int)local_290;
      puVar27 = *(uint **)(local_2d0 + -2);
      local_200 = puVar27 + uVar24;
      while( true ) {
        puVar13 = local_200;
        if (*local_2d0 != (uint)uVar24) {
          local_304 = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_304)
          ;
        }
        if (puVar27 == puVar13) break;
        uVar6 = *puVar27;
        if ((((int)uVar6 < 0) || (*(int *)(pFVar32 + 0x20) <= (int)uVar6)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        plVar26 = local_2d8;
        pFVar29 = pFVar32 + 8;
        if (*(FScriptContainerElement **)(pFVar32 + 0x18) != (FScriptContainerElement *)0x0) {
          pFVar29 = *(FScriptContainerElement **)(pFVar32 + 0x18);
        }
        uVar16 = uVar6;
        if ((int)uVar6 < 0) {
          uVar16 = uVar6 + 0x1f;
        }
        *(uint *)(pFVar29 + (longlong)((int)uVar16 >> 5) * 4) =
             *(uint *)(pFVar29 + (longlong)((int)uVar16 >> 5) * 4) | 1 << ((byte)uVar6 & 0x1f);
        if (5 < (byte)LogIoStoreOnDemand._0_1_) {
          if ((*local_2d8 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar15)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar16 = 0;
          if ((int)uVar6 < *(int *)(*plVar26 + 0xe0)) {
            uVar16 = ~uVar6 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar15)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          plVar26 = local_2d8;
          if ((*local_2d8 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar15)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar20 = *plVar26;
          uVar16 = 0;
          if ((int)uVar6 < *(int *)(lVar20 + 0xe0)) {
            uVar16 = ~uVar6 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar15)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          ::LexToString(&local_170,
                        (FIoHash *)(*(longlong *)(lVar20 + 0xd8) + (longlong)(int)uVar6 * 0x28));
          ::FString::PrintfImpl(&local_2f0,L"ID:%s, Size:%d");
          if (((local_300.Data <= (FScriptContainerElement *)&local_2f0) &&
              ((FScriptContainerElement *)&local_2f0 <
               local_300.Data + (longlong)local_2f8._4_4_ * 0x10)) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar15)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar17 = (int)local_2f8;
          if ((int)local_2f8 == local_2f8._4_4_) {
            iVar17 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_300,(int *)((longlong)&local_2f8 + 4));
          }
          local_2f8 = CONCAT44(local_2f8._4_4_,iVar17 + 1);
          lVar20 = (longlong)iVar17;
          *(undefined8 *)(local_300.Data + lVar20 * 0x10) = 0;
          *(FScriptContainerElement **)(local_300.Data + lVar20 * 0x10) =
               local_2f0.Data.AllocatorInstance.Data;
          *(int *)(local_300.Data + lVar20 * 0x10 + 8) = local_2f0.Data.ArrayNum;
          *(int *)(local_300.Data + lVar20 * 0x10 + 0xc) = local_2f0.Data.ArrayMax;
          local_2f0.Data.ArrayNum = 0;
          local_2f0.Data.ArrayMax = 0;
          local_2f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          pFVar32 = local_2e0;
          if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_170.Data.AllocatorInstance.Data);
            pFVar32 = local_2e0;
          }
        }
        uVar24 = (ulonglong)local_290;
        puVar27 = puVar27 + 1;
      }
      plVar26 = local_2d8 + 5;
      local_2d0 = local_2d0 + 10;
      uVar24 = (ulonglong)local_28c;
      param_1 = local_280;
    }
    LOCK();
    aVar4 = *local_1f0;
    *local_1f0 = (atomic<unsigned_char>)((char)*local_1f0 + -1);
    UNLOCK();
    if (((byte)aVar4 & 2) != 0) {
      FMutex::WakeWaitingThread((FMutex *)local_1f0);
    }
    pFVar7 = local_268->IoStore;
    if (((pFVar7->PackageStoreBackend).Object == (IOnDemandPackageStoreBackend *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pIVar8 = (pFVar7->PackageStoreBackend).Object;
    (**(code **)((longlong)*pIVar8 + 0x40))(pIVar8,2);
  }
  bVar15 = param_1->bCancelled;
  QueryPerformanceCounter(&local_1e8);
  uVar33 = local_1e8.QuadPart - param_1->StartTimeCycles;
  uVar24 = *(ulonglong *)&(param_1->Variant).field_0xe0;
  dVar10 = (double)uVar33 * FGenericPlatformTime::SecondsPerCycle64;
  dVar11 = 0.0;
  if (uVar24 != 0) {
    dVar11 = (double)(uVar24 - *(longlong *)&(param_1->Variant).field_0xe8) / (double)uVar24;
  }
  iVar17 = (int)local_2f8;
  uVar24 = (ulonglong)(int)local_2f8;
  bVar34 = true;
  pFVar29 = local_300.Data + uVar24 * 0x10;
  local_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_278.Data.ArrayNum = 0;
  local_278.Data.ArrayMax = 0;
  FVar28.Data = local_300.Data;
  while( true ) {
    if ((int)uVar24 != iVar17) {
      local_303[0] = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_303);
    }
    pFVar12 = local_280;
    if (FVar28.Data == pFVar29) break;
    if (bVar34) {
      bVar34 = false;
    }
    else {
      ::FString::AppendChars(&local_278,L",",1);
    }
    iVar31 = *(int *)(FVar28.Data + 8) + -1;
    if (*(int *)(FVar28.Data + 8) == 0) {
      iVar31 = 0;
    }
    ::FString::AppendChars(&local_278,*(wchar_t **)FVar28.Data,iVar31);
    uVar24 = local_2f8 & 0xffffffff;
    FVar28.Data = FVar28.Data + 0x10;
  }
  if (5 < (byte)LogIoStoreOnDemand._0_1_) {
    IoStore::LexToString(&local_160,(FOnDemandContentHandle *)&(local_280->Variant).field_0x30);
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
    if (5 < (byte)LogIoStoreOnDemand._0_1_) {
      IoStore::LexToString(&local_190,(FOnDemandContentHandle *)&(pFVar12->Variant).field_0x30);
      FRequest::GetErrorString(pFVar12,&local_150);
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
      if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.Data.AllocatorInstance.Data);
      }
    }
  }
  FOnDemandContentInstallerStats::OnRequestCompleted
            (&pFVar12->Result,local_288,*(ulong64 *)&(pFVar12->Variant).field_0xe0,
             (longlong)*(int *)&(pFVar12->Variant).field_0xd8,
             *(ulong64 *)&(pFVar12->Variant).field_0xf0,dVar11,uVar33);
  local_2c0 = *(undefined8 *)&(pFVar12->Variant).field_0xe0;
  uStack_2b8 = *(undefined8 *)&(pFVar12->Variant).field_0xe8;
  local_2b0 = *(ulong64 *)&(pFVar12->Variant).field_0xf0;
  local_2a8.bIsSet = false;
  local_2c8 = dVar10;
  pTVar18 = FRequest::ConsumeError(pFVar12,&local_260);
  TOptional<UE::UnifiedError::FError>::operator=(&local_2a8,pTVar18);
  TVar23.Reference = local_260.TypedValue.ErrorDetails.Reference;
  if ((local_260.bIsSet != false) &&
     (local_260.TypedValue.ErrorCode = 0, local_260.TypedValue.ModuleId = 0,
     local_260.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
    local_260.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
    (**(code **)((longlong)*TVar23.Reference + 0x10))();
    if (local_260.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
      (**(code **)((longlong)*local_260.TypedValue.ErrorDetails.Reference + 0x10))();
    }
  }
  this_00 = local_268;
  LOCK();
  bVar34 = (local_268->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar34) {
    (local_268->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar34) {
    FMutex::LockSlow(&local_268->Mutex);
  }
  if ((*(longlong *)&(pFVar12->Variant).field_0xb0 == 0) &&
     (bVar34 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar34)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_210 = pFVar12;
  **(undefined8 **)&(pFVar12->Variant).field_0xb0 = 0;
  TArray<UE::IoStore::FOnDemandContentInstaller::FRequest_*,TSizedDefaultAllocator<32>_>::
  RemoveSingleSwap(&this_00->RunningRequests,&local_210,Default);
  LOCK();
  pFVar1 = &this_00->Mutex;
  aVar4 = pFVar1->State;
  pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
  UNLOCK();
  if (((byte)aVar4 & 2) != 0) {
    FMutex::WakeWaitingThread(&this_00->Mutex);
  }
  TryExecuteNextRequest(this_00);
  if (bVar15 == false) {
    EVar30 = Ok;
    if (local_2a8.bIsSet != false) {
      EVar30 = Error;
    }
  }
  else {
    EVar30 = Cancelled;
  }
  lVar20 = *(longlong *)&(pFVar12->Variant).field_0xb0;
  if (*(longlong *)&(pFVar12->Variant).field_0x50 == 0) {
    if ((lVar20 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    LOCK();
    *(EStatus *)(*(longlong *)&(pFVar12->Variant).field_0xb0 + 8) = EVar30;
    UNLOCK();
    DestroyRequest(this_00,pFVar12);
  }
  else {
    if ((lVar20 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    LOCK();
    *(undefined1 *)(*(longlong *)&(pFVar12->Variant).field_0xb0 + 8) = 2;
    UNLOCK();
    if (((pFVar12->Variant).field_0x40 & 1) == 0) {
      local_e8 = *(code **)&(pFVar12->Variant).field_0x50;
      local_c0 = *(IErrorDetails **)&(pFVar12->Variant).field_0x78;
      *(undefined8 *)&(pFVar12->Variant).field_0x78 = 0;
      local_c8 = *(undefined8 *)&(pFVar12->Variant).field_0x70;
      local_d8 = *(IErrorDetails *)&(pFVar12->Variant).field_0x60;
      uStack_d0 = *(undefined8 *)&(pFVar12->Variant).field_0x68;
      if (local_e8 != (code *)0x0) {
        *(undefined8 *)&(pFVar12->Variant).field_0x50 = 0;
      }
      local_248 = local_2c8;
      local_230 = local_2b0;
      local_218 = local_2a8.bIsSet;
      local_240 = (undefined4)local_2c0;
      uStack_23c = local_2c0._4_4_;
      uStack_238 = (undefined4)uStack_2b8;
      uStack_234 = uStack_2b8._4_4_;
      if (local_2a8.bIsSet != false) {
        local_228.ErrorCode = local_2a8.TypedValue.ErrorCode;
        local_228.ModuleId = local_2a8.TypedValue.ModuleId;
        local_228.ErrorDetails.Reference = (IErrorDetails *)0x0;
        local_2a8.TypedValue.ErrorCode = 0;
        local_2a8.TypedValue.ModuleId = 0;
        if (local_2a8.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
          local_228.ErrorDetails.Reference = local_2a8.TypedValue.ErrorDetails.Reference;
          (**(code **)((longlong)*local_2a8.TypedValue.ErrorDetails.Reference + 8))
                    (local_2a8.TypedValue.ErrorDetails.Reference,local_204);
          TVar23.Reference = local_2a8.TypedValue.ErrorDetails.Reference;
          if (local_2a8.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
            local_2a8.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
            (**(code **)((longlong)*TVar23.Reference + 0x10))();
          }
        }
      }
      Core::Private::Function::CheckCallable(local_e8);
      pcVar9 = local_e8;
      pIVar22 = &local_d8;
      if (local_c0 != (IErrorDetails *)0x0) {
        pIVar22 = local_c0;
      }
      uVar19 = (**(code **)((longlong)*pIVar22 + 8))();
      (*pcVar9)(uVar19,&local_248);
      TVar23.Reference = local_228.ErrorDetails.Reference;
      if ((local_218 != '\0') &&
         (local_228.ErrorCode = 0, local_228.ModuleId = 0,
         local_228.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
        local_228.ErrorDetails.Reference = (IErrorDetails *)0x0;
        (**(code **)((longlong)*TVar23.Reference + 0x10))();
        if (local_228.ErrorDetails.Reference != (IErrorDetails *)0x0) {
          (**(code **)((longlong)*local_228.ErrorDetails.Reference + 0x10))();
        }
      }
      if ((*(longlong *)&(pFVar12->Variant).field_0xb0 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      LOCK();
      *(EStatus *)(*(longlong *)&(pFVar12->Variant).field_0xb0 + 8) = EVar30;
      UNLOCK();
      DestroyRequest(this_00,pFVar12);
      if (local_e8 == (code *)0x0) goto LAB_1445ba7a0;
      TVar23.Reference = &local_d8;
      if (local_c0 != (IErrorDetails *)0x0) {
        TVar23.Reference = local_c0;
      }
    }
    else {
      local_1e0.InstallResult.DurationInSeconds = local_2c8;
      local_1e0.InstallResult.Progress.CurrentInstallSize = local_2b0;
      local_1e0.__this = this_00;
      local_1e0.Request = pFVar12;
      local_1e0.InstallResult.Error.bIsSet = local_2a8.bIsSet;
      local_1e0.InstallResult.Progress.TotalContentSize._0_4_ = (undefined4)local_2c0;
      local_1e0.InstallResult.Progress.TotalContentSize._4_4_ = local_2c0._4_4_;
      local_1e0.InstallResult.Progress.TotalInstallSize._0_4_ = (undefined4)uStack_2b8;
      local_1e0.InstallResult.Progress.TotalInstallSize._4_4_ = uStack_2b8._4_4_;
      if (local_2a8.bIsSet != false) {
        local_1e0.InstallResult.Error.TypedValue.ErrorCode = local_2a8.TypedValue.ErrorCode;
        local_1e0.InstallResult.Error.TypedValue.ModuleId = local_2a8.TypedValue.ModuleId;
        local_1e0.InstallResult.Error.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
        local_2a8.TypedValue.ErrorCode = 0;
        local_2a8.TypedValue.ModuleId = 0;
        if (local_2a8.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
          local_1e0.InstallResult.Error.TypedValue.ErrorDetails.Reference =
               local_2a8.TypedValue.ErrorDetails.Reference;
          (**(code **)((longlong)*local_2a8.TypedValue.ErrorDetails.Reference + 8))
                    (local_2a8.TypedValue.ErrorDetails.Reference,local_208);
          TVar23.Reference = local_2a8.TypedValue.ErrorDetails.Reference;
          if (local_2a8.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
            local_2a8.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
            (**(code **)((longlong)*TVar23.Reference + 0x10))();
          }
        }
      }
      local_1e0.FinalRequestStatus = EVar30;
      this_01 = FTSTicker::GetCoreTicker();
      `UE::IoStore::FOnDemandContentInstaller::CompleteInstallRequest'::__l60::<lambda_2>::
      <lambda_2>(&local_140,&local_1e0);
      local_b8[0] = (code *)0x0;
      local_90 = FMemory::Malloc(0x58,8);
      ppcVar21 = local_90 + 1;
      *local_90 = (code *)&Core::Private::Function::
                           TFunction_OwnedObject<`ExecuteOnGameThread<`UE::IoStore::FOnDemandContentInstaller::CompleteInstallRequest'::`60'::<lambda_2>_>'::`2'::<lambda_1>,1,1>
                           ::_vftable_;
      `UE::IoStore::FOnDemandContentInstaller::CompleteInstallRequest'::__l60::<lambda_2>::
      <lambda_2>(ppcVar21,&local_140);
      if (ppcVar21 != (code **)0x0) {
        local_b8[0] = Core::Private::Function::
                      TFunctionRefCaller<`ExecuteOnGameThread<`UE::IoStore::FOnDemandContentInstaller::CompleteInstallRequest'::__l60::<lambda_2>_>'::__l2::<lambda_1>,bool,float>
                      ::Call;
      }
      FTSTicker::AddTicker
                (this_01,&local_180,
                 L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandContentInstaller.cpp(1500)"
                 ,0.0,(TUniqueFunction<bool___cdecl(float)> *)local_b8);
      if (local_180.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar2 = &(local_180.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar5 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar5 == (atomic<int>)0x1) {
          (**(code **)((local_180.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_180.WeakReferenceCount.ReferenceController,1);
        }
      }
      if (local_b8[0] != (code *)0x0) {
        ppcVar21 = local_b8 + 2;
        if (local_90 != (code **)0x0) {
          ppcVar21 = local_90;
        }
        (**(code **)(*ppcVar21 + 0x10))();
      }
      if ((local_140.InstallResult.Error.bIsSet != false) &&
         (local_140.InstallResult.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0))
      {
        (**(code **)((longlong)*local_140.InstallResult.Error.TypedValue.ErrorDetails.Reference +
                    0x10))();
      }
      if ((local_1e0.InstallResult.Error.bIsSet == false) ||
         (TVar23.Reference = local_1e0.InstallResult.Error.TypedValue.ErrorDetails.Reference,
         local_1e0.InstallResult.Error.TypedValue.ErrorDetails.Reference == (IErrorDetails *)0x0))
      goto LAB_1445ba7a0;
    }
    (**(code **)((longlong)*TVar23.Reference + 0x10))();
  }
LAB_1445ba7a0:
  TVar23.Reference = local_2a8.TypedValue.ErrorDetails.Reference;
  if ((local_2a8.bIsSet != false) &&
     (local_2a8.TypedValue.ErrorCode = 0, local_2a8.TypedValue.ModuleId = 0,
     local_2a8.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
    local_2a8.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
    (**(code **)((longlong)*TVar23.Reference + 0x10))();
    if (local_2a8.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
      (**(code **)((longlong)*local_2a8.TypedValue.ErrorDetails.Reference + 0x10))();
    }
  }
  if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_300.Data,(int)local_2f8);
  if (local_300.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_300.Data);
  }
  return;
}

// CompletePurgeRequest @ 1445babf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandContentInstaller::CompletePurgeRequest
          (FOnDemandContentInstaller *this,FRequest *param_1)

{
  FScriptContainerElement *pFVar1;
  FMutex *pFVar2;
  atomic<unsigned_char> aVar3;
  byte bVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  FScriptContainerElement *pFVar8;
  TOptional<UE::UnifiedError::FError> *pTVar9;
  undefined8 uVar10;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar11;
  IErrorDetails *pIVar12;
  undefined1 auStack_178 [32];
  double local_158;
  TOptional<UE::UnifiedError::FError> local_150;
  double local_130;
  FError local_128;
  char local_118;
  TOptional<UE::UnifiedError::FError> local_110;
  undefined1 local_f8 [4];
  undefined1 local_f4 [4];
  LARGE_INTEGER local_f0;
  FRequest *local_e8;
  FString local_e0;
  code *local_c8;
  IErrorDetails local_b8 [3];
  IErrorDetails *local_a0;
  code *local_98 [2];
  IErrorDetails local_88 [3];
  IErrorDetails *local_70;
  double local_68;
  FError local_60;
  bool local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_178;
  if ((this->RunningRequests).ArrayNum == 1) {
    pFVar8 = (this->RunningRequests).AllocatorInstance.Data;
    pFVar1 = pFVar8 + 8;
    for (; pFVar8 != pFVar1; pFVar8 = pFVar8 + 8) {
      if (*(FRequest **)pFVar8 == param_1) goto LAB_1445bac74;
    }
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("RunningRequests.Num() == 1 && RunningRequests.Contains(&Request)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandContentInstaller.cpp"
                     ,0x5f3,L"");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1445bac74:
  QueryPerformanceCounter(&local_f0);
  dVar6 = (double)(local_f0.QuadPart - param_1->StartTimeCycles) *
          FGenericPlatformTime::SecondsPerCycle64;
  if (4 < (byte)LogIoStoreOnDemand._0_1_) {
    FRequest::GetErrorString(param_1,&local_e0);
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
  }
  local_150.bIsSet = false;
  local_158 = dVar6;
  pTVar9 = FRequest::ConsumeError(param_1,&local_110);
  TVar11.Reference = local_150.TypedValue.ErrorDetails.Reference;
  if (pTVar9 != &local_150) {
    if (pTVar9->bIsSet == false) {
      if (local_150.bIsSet != false) {
        local_150.TypedValue.ErrorCode = 0;
        local_150.TypedValue.ModuleId = 0;
        if (local_150.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
          local_150.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
          (**(code **)((longlong)*TVar11.Reference + 0x10))();
          if (local_150.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
            (**(code **)((longlong)*local_150.TypedValue.ErrorDetails.Reference + 0x10))();
          }
        }
        local_150.bIsSet = false;
      }
    }
    else {
      if ((local_150.bIsSet != false) &&
         (local_150.TypedValue.ErrorCode = 0, local_150.TypedValue.ModuleId = 0,
         local_150.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
        local_150.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
        (**(code **)((longlong)*TVar11.Reference + 0x10))();
        if (local_150.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
          (**(code **)((longlong)*local_150.TypedValue.ErrorDetails.Reference + 0x10))();
        }
      }
      UnifiedError::FError::FError(&local_150.TypedValue,&pTVar9->TypedValue);
      local_150.bIsSet = true;
    }
  }
  TVar11.Reference = local_110.TypedValue.ErrorDetails.Reference;
  if ((local_110.bIsSet != false) &&
     (local_110.TypedValue.ErrorCode = 0, local_110.TypedValue.ModuleId = 0,
     local_110.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
    local_110.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
    (**(code **)((longlong)*TVar11.Reference + 0x10))();
    if (local_110.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
      (**(code **)((longlong)*local_110.TypedValue.ErrorDetails.Reference + 0x10))();
    }
  }
  if (((param_1->Variant).TypeIndex != '\x02') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  bVar4 = *(byte *)&param_1->Variant;
  if (((param_1->Variant).TypeIndex != '\x02') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_c8 = *(code **)&(param_1->Variant).field_0x20;
  local_a0 = *(IErrorDetails **)&(param_1->Variant).field_0x48;
  *(undefined8 *)&(param_1->Variant).field_0x48 = 0;
  local_b8[2] = *(IErrorDetails *)&(param_1->Variant).field_0x40;
  local_b8[0] = *(IErrorDetails *)&(param_1->Variant).field_0x30;
  local_b8[1] = *(IErrorDetails *)&(param_1->Variant).field_0x38;
  if (local_c8 != (code *)0x0) {
    *(undefined8 *)&(param_1->Variant).field_0x20 = 0;
  }
  LOCK();
  bVar7 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar7) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar7) {
    FMutex::LockSlow(&this->Mutex);
  }
  local_e8 = param_1;
  TArray<UE::IoStore::FOnDemandContentInstaller::FRequest_*,TSizedDefaultAllocator<32>_>::
  RemoveSingleSwap(&this->RunningRequests,&local_e8,Default);
  LOCK();
  pFVar2 = &this->Mutex;
  aVar3 = pFVar2->State;
  pFVar2->State = (atomic<unsigned_char>)((char)pFVar2->State + -1);
  UNLOCK();
  if (((byte)aVar3 & 2) != 0) {
    FMutex::WakeWaitingThread(&this->Mutex);
  }
  DestroyRequest(this,param_1);
  TryExecuteNextRequest(this);
  if (local_c8 == (code *)0x0) goto LAB_1445bb0b8;
  if ((bVar4 & 1) == 0) {
    local_130 = local_158;
    local_118 = local_150.bIsSet;
    if (local_150.bIsSet != false) {
      local_128.ErrorCode = local_150.TypedValue.ErrorCode;
      local_128.ModuleId = local_150.TypedValue.ModuleId;
      local_128.ErrorDetails.Reference = (IErrorDetails *)0x0;
      local_150.TypedValue.ErrorCode = 0;
      local_150.TypedValue.ModuleId = 0;
      if (local_150.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
        local_128.ErrorDetails.Reference = local_150.TypedValue.ErrorDetails.Reference;
        (**(code **)((longlong)*local_150.TypedValue.ErrorDetails.Reference + 8))
                  (local_150.TypedValue.ErrorDetails.Reference,local_f4);
        TVar11.Reference = local_150.TypedValue.ErrorDetails.Reference;
        if (local_150.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
          local_150.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
          (**(code **)((longlong)*TVar11.Reference + 0x10))();
        }
      }
    }
    Core::Private::Function::CheckCallable(local_c8);
    pcVar5 = local_c8;
    pIVar12 = local_b8;
    if (local_a0 != (IErrorDetails *)0x0) {
      pIVar12 = local_a0;
    }
    uVar10 = (**(code **)((longlong)*pIVar12 + 8))();
    (*pcVar5)(uVar10,&local_130);
    TVar11.Reference = local_128.ErrorDetails.Reference;
    if ((local_118 != '\0') &&
       (local_128.ErrorCode = 0, local_128.ModuleId = 0,
       local_128.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
      local_128.ErrorDetails.Reference = (IErrorDetails *)0x0;
      (**(code **)((longlong)*TVar11.Reference + 0x10))();
      TVar11.Reference = local_128.ErrorDetails.Reference;
      if (local_128.ErrorDetails.Reference != (IErrorDetails *)0x0) goto LAB_1445bb097;
    }
  }
  else {
    local_70 = local_a0;
    local_88[0] = local_b8[0];
    local_88[1] = local_b8[1];
    local_68 = local_158;
    local_98[0] = local_c8;
    local_a0 = (IErrorDetails *)0x0;
    local_88[2] = local_b8[2];
    local_c8 = (code *)0x0;
    local_50 = local_150.bIsSet;
    if (local_150.bIsSet != false) {
      local_60.ErrorCode = local_150.TypedValue.ErrorCode;
      local_60.ModuleId = local_150.TypedValue.ModuleId;
      local_60.ErrorDetails.Reference = (IErrorDetails *)0x0;
      local_150.TypedValue.ErrorCode = 0;
      local_150.TypedValue.ModuleId = 0;
      if (local_150.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
        local_60.ErrorDetails.Reference = local_150.TypedValue.ErrorDetails.Reference;
        (**(code **)((longlong)*local_150.TypedValue.ErrorDetails.Reference + 8))
                  (local_150.TypedValue.ErrorDetails.Reference,local_f8);
        TVar11.Reference = local_150.TypedValue.ErrorDetails.Reference;
        if (local_150.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
          local_150.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
          (**(code **)((longlong)*TVar11.Reference + 0x10))();
        }
      }
    }
    ExecuteOnGameThread<_UE::IoStore::FOnDemandContentInstaller::CompletePurgeRequest_::__l34::<lambda_1>_>
              (L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandContentInstaller.cpp(1552)"
               ,(<lambda_1> *)local_98);
    TVar11.Reference = local_60.ErrorDetails.Reference;
    if ((local_50 != false) &&
       (local_60.ErrorCode = 0, local_60.ModuleId = 0,
       local_60.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
      local_60.ErrorDetails.Reference = (IErrorDetails *)0x0;
      (**(code **)((longlong)*TVar11.Reference + 0x10))();
      if (local_60.ErrorDetails.Reference != (IErrorDetails *)0x0) {
        (**(code **)((longlong)*local_60.ErrorDetails.Reference + 0x10))();
      }
    }
    if (local_98[0] != (code *)0x0) {
      TVar11.Reference = local_88;
      if (local_70 != (IErrorDetails *)0x0) {
        TVar11.Reference = local_70;
      }
LAB_1445bb097:
      (**(code **)((longlong)*TVar11.Reference + 0x10))();
    }
  }
  if (local_c8 != (code *)0x0) {
    pIVar12 = local_b8;
    if (local_a0 != (IErrorDetails *)0x0) {
      pIVar12 = local_a0;
    }
    (**(code **)((longlong)*pIVar12 + 0x10))();
  }
LAB_1445bb0b8:
  TVar11.Reference = local_150.TypedValue.ErrorDetails.Reference;
  if ((local_150.bIsSet != false) &&
     (local_150.TypedValue.ErrorCode = 0, local_150.TypedValue.ModuleId = 0,
     local_150.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
    local_150.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
    (**(code **)((longlong)*TVar11.Reference + 0x10))();
    if (local_150.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
      (**(code **)((longlong)*local_150.TypedValue.ErrorDetails.Reference + 0x10))();
    }
  }
  return;
}

// CompleteVerifyRequest @ 1445bcf20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandContentInstaller::CompleteVerifyRequest
          (FOnDemandContentInstaller *this,FRequest *param_1)

{
  FMutex *pFVar1;
  atomic<unsigned_char> aVar2;
  code *pcVar3;
  double dVar4;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar5;
  bool bVar6;
  TOptional<UE::UnifiedError::FError> *pTVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 auStack_118 [40];
  double local_f0;
  TOptional<UE::UnifiedError::FError> local_e8;
  double local_d0;
  FError local_c8;
  char local_b8;
  TOptional<UE::UnifiedError::FError> local_b0;
  undefined1 local_98 [8];
  LARGE_INTEGER local_90;
  FRequest *local_88;
  FString local_80;
  code *local_68;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  QueryPerformanceCounter(&local_90);
  dVar4 = (double)(local_90.QuadPart - param_1->StartTimeCycles) *
          FGenericPlatformTime::SecondsPerCycle64;
  if (4 < (byte)LogIoStoreOnDemand._0_1_) {
    FRequest::GetErrorString(param_1,&local_80);
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
  }
  local_e8.bIsSet = false;
  local_f0 = dVar4;
  pTVar7 = FRequest::ConsumeError(param_1,&local_b0);
  TOptional<UE::UnifiedError::FError>::operator=(&local_e8,pTVar7);
  TVar5.Reference = local_b0.TypedValue.ErrorDetails.Reference;
  if ((local_b0.bIsSet != false) &&
     (local_b0.TypedValue.ErrorCode = 0, local_b0.TypedValue.ModuleId = 0,
     local_b0.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
    local_b0.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
    (**(code **)((longlong)*TVar5.Reference + 0x10))();
    if (local_b0.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
      (**(code **)((longlong)*local_b0.TypedValue.ErrorDetails.Reference + 0x10))();
    }
  }
  if (((param_1->Variant).TypeIndex != '\x04') &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_68 = *(code **)&param_1->Variant;
  local_40 = *(longlong **)&(param_1->Variant).field_0x28;
  *(undefined8 *)&(param_1->Variant).field_0x28 = 0;
  local_48 = *(undefined8 *)&(param_1->Variant).field_0x20;
  local_58 = *(longlong *)&(param_1->Variant).field_0x10;
  uStack_50 = *(undefined8 *)&(param_1->Variant).field_0x18;
  if (local_68 != (code *)0x0) {
    *(undefined8 *)&param_1->Variant = 0;
  }
  LOCK();
  bVar6 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar6) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar6) {
    FMutex::LockSlow(&this->Mutex);
  }
  local_88 = param_1;
  TArray<UE::IoStore::FOnDemandContentInstaller::FRequest_*,TSizedDefaultAllocator<32>_>::
  RemoveSingleSwap(&this->RunningRequests,&local_88,Default);
  LOCK();
  pFVar1 = &this->Mutex;
  aVar2 = pFVar1->State;
  pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    FMutex::WakeWaitingThread(&this->Mutex);
  }
  DestroyRequest(this,param_1);
  TryExecuteNextRequest(this);
  if (local_68 != (code *)0x0) {
    local_d0 = local_f0;
    local_b8 = local_e8.bIsSet;
    if (local_e8.bIsSet != false) {
      local_c8.ErrorCode = local_e8.TypedValue.ErrorCode;
      local_c8.ModuleId = local_e8.TypedValue.ModuleId;
      local_c8.ErrorDetails.Reference = (IErrorDetails *)0x0;
      local_e8.TypedValue.ErrorCode = 0;
      local_e8.TypedValue.ModuleId = 0;
      if (local_e8.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
        local_c8.ErrorDetails.Reference = local_e8.TypedValue.ErrorDetails.Reference;
        (**(code **)((longlong)*local_e8.TypedValue.ErrorDetails.Reference + 8))
                  (local_e8.TypedValue.ErrorDetails.Reference,local_98);
        TVar5.Reference = local_e8.TypedValue.ErrorDetails.Reference;
        if (local_e8.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
          local_e8.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
          (**(code **)((longlong)*TVar5.Reference + 0x10))();
        }
      }
    }
    Core::Private::Function::CheckCallable(local_68);
    pcVar3 = local_68;
    plVar9 = &local_58;
    if (local_40 != (longlong *)0x0) {
      plVar9 = local_40;
    }
    uVar8 = (**(code **)(*plVar9 + 8))();
    (*pcVar3)(uVar8,&local_d0);
    TVar5.Reference = local_c8.ErrorDetails.Reference;
    if ((local_b8 != '\0') &&
       (local_c8.ErrorCode = 0, local_c8.ModuleId = 0,
       local_c8.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
      local_c8.ErrorDetails.Reference = (IErrorDetails *)0x0;
      (**(code **)((longlong)*TVar5.Reference + 0x10))();
      if (local_c8.ErrorDetails.Reference != (IErrorDetails *)0x0) {
        (**(code **)((longlong)*local_c8.ErrorDetails.Reference + 0x10))();
      }
    }
    if (local_68 != (code *)0x0) {
      plVar9 = &local_58;
      if (local_40 != (longlong *)0x0) {
        plVar9 = local_40;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  TVar5.Reference = local_e8.TypedValue.ErrorDetails.Reference;
  if ((local_e8.bIsSet != false) &&
     (local_e8.TypedValue.ErrorCode = 0, local_e8.TypedValue.ModuleId = 0,
     local_e8.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
    local_e8.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
    (**(code **)((longlong)*TVar5.Reference + 0x10))();
    if (local_e8.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
      (**(code **)((longlong)*local_e8.TypedValue.ErrorDetails.Reference + 0x10))();
    }
  }
  return;
}

// DestroyRequest @ 1445c82f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandContentInstaller::DestroyRequest
          (FOnDemandContentInstaller *this,FRequest *param_1)

{
  FMutex *pFVar1;
  atomic<unsigned_char> aVar2;
  IErrorDetails *pIVar3;
  short *psVar4;
  code *pcVar5;
  bool bVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)(param_1->Variant).TypeIndex;
  if ((5 < uVar7) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,UE::IoStore::FOnDemandContentInstaller::FRequest::FPurge,UE::IoStore::FOnDemandContentInstaller::FRequest::FDefrag,UE::IoStore::FOnDemandContentInstaller::FRequest::FVerify,UE::IoStore::FOnDemandContentInstaller::FRequest::FFlushLastAccess>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar7])(&param_1->Variant);
  if ((param_1->Result).Error.bIsSet != false) {
    (param_1->Result).Error.TypedValue.ErrorCode = 0;
    (param_1->Result).Error.TypedValue.ModuleId = 0;
    pIVar3 = (param_1->Result).Error.TypedValue.ErrorDetails.Reference;
    if (pIVar3 != (IErrorDetails *)0x0) {
      (param_1->Result).Error.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
      (**(code **)((longlong)*pIVar3 + 0x10))();
    }
    pIVar3 = (param_1->Result).Error.TypedValue.ErrorDetails.Reference;
    if (pIVar3 != (IErrorDetails *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))();
    }
  }
  LOCK();
  bVar6 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar6) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar6) {
    FMutex::LockSlow(&this->Mutex);
  }
  psVar4 = *(short **)(param_1 + 1);
  psVar4[1] = psVar4[1] + 1;
  if (psVar4[1] == 0x20) {
    if ((*psVar4 != 0x20) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Slab->Freed == Slab->Allocated",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoAllocators.h"
                           ,0x48,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    ::operator_delete(psVar4,0x2c10);
  }
  LOCK();
  pFVar1 = &this->Mutex;
  aVar2 = pFVar1->State;
  pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    FMutex::WakeWaitingThread(&this->Mutex);
  }
  return;
}

// EnqueueDefragRequest @ 1445ca1f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandContentInstaller::EnqueueDefragRequest
          (FOnDemandContentInstaller *this,FOnDemandDefragArgs *param_1,
          TUniqueFunction<void___cdecl(UE::IoStore::FOnDemandDefragResult)> *param_2)

{
  FMutex *pFVar1;
  atomic<unsigned_char> aVar2;
  EOnDemandDefragOptions EVar3;
  undefined8 uVar4;
  uint uVar5;
  FRequest *pFVar6;
  bool bVar7;
  LARGE_INTEGER local_res8;
  FRequest *local_res10;
  
  LOCK();
  bVar7 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar7) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar7) {
    FMutex::LockSlow(&this->Mutex);
  }
  pFVar6 = TSingleThreadedSlabAllocator<UE::IoStore::FOnDemandContentInstaller::FRequest,32>::Alloc
                     (&this->RequestAllocator);
  uVar5 = FRequest::NextSeqNo + 1;
  pFVar6->SeqNo = FRequest::NextSeqNo;
  FRequest::NextSeqNo = uVar5;
  pFVar6->Priority = 0;
  QueryPerformanceCounter(&local_res8);
  pFVar6->StartTimeCycles = (ulong64)local_res8;
  (pFVar6->Result).Error.bIsSet = false;
  pFVar6->bCancelled = false;
  (pFVar6->Variant).TypeIndex = '\0';
  EVar3 = param_1->Options;
  (pFVar6->Variant).field_0x10 = 0;
  *(EOnDemandDefragOptions *)&pFVar6->Variant = EVar3;
  bVar7 = (param_1->BytesToFree).bIsSet;
  (pFVar6->Variant).field_0x10 = bVar7;
  if (bVar7 != false) {
    *(ulong64 *)&(pFVar6->Variant).field_0x8 = (param_1->BytesToFree).TypedValue;
  }
  *(undefined8 *)&(pFVar6->Variant).field_0x20 = *(undefined8 *)param_2;
  *(undefined8 *)&(pFVar6->Variant).field_0x48 = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar4 = *(undefined8 *)&param_2->field_0x18;
  *(undefined8 *)&(pFVar6->Variant).field_0x30 = *(undefined8 *)&param_2->field_0x10;
  *(undefined8 *)&(pFVar6->Variant).field_0x38 = uVar4;
  *(undefined8 *)&(pFVar6->Variant).field_0x40 = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)&(pFVar6->Variant).field_0x20 != 0) {
    *(undefined8 *)param_2 = 0;
  }
  (pFVar6->Variant).TypeIndex = '\x03';
  local_res10 = pFVar6;
  TArray<UE::IoStore::FOnDemandContentInstaller::FRequest_*,TSizedDefaultAllocator<32>_>::
  HeapPush<bool___cdecl(UE::IoStore::FOnDemandContentInstaller::FRequest_const_&,UE::IoStore::FOnDemandContentInstaller::FRequest_const_&)>
            (&this->RequestQueue,&local_res10,RequestSortPredicate);
  LOCK();
  pFVar1 = &this->Mutex;
  aVar2 = pFVar1->State;
  pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    FMutex::WakeWaitingThread(&this->Mutex);
  }
  TryExecuteNextRequest(this);
  return;
}

// EnqueueFlushLastAccessRequest @ 1445ca320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandContentInstaller::EnqueueFlushLastAccessRequest
          (FOnDemandContentInstaller *this,
          TUniqueFunction<void___cdecl(UE::IoStore::FOnDemandFlushLastAccessResult)> *param_1)

{
  FMutex *pFVar1;
  atomic<unsigned_char> aVar2;
  undefined8 uVar3;
  uint uVar4;
  FRequest *pFVar5;
  bool bVar6;
  LARGE_INTEGER local_res8;
  FRequest *local_res10;
  
  LOCK();
  bVar6 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar6) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar6) {
    FMutex::LockSlow(&this->Mutex);
  }
  pFVar5 = TSingleThreadedSlabAllocator<UE::IoStore::FOnDemandContentInstaller::FRequest,32>::Alloc
                     (&this->RequestAllocator);
  uVar4 = FRequest::NextSeqNo + 1;
  pFVar5->SeqNo = FRequest::NextSeqNo;
  FRequest::NextSeqNo = uVar4;
  pFVar5->Priority = 0;
  QueryPerformanceCounter(&local_res8);
  pFVar5->StartTimeCycles = (ulong64)local_res8;
  (pFVar5->Result).Error.bIsSet = false;
  pFVar5->bCancelled = false;
  (pFVar5->Variant).TypeIndex = '\0';
  *(undefined8 *)&pFVar5->Variant = *(undefined8 *)param_1;
  *(undefined8 *)&(pFVar5->Variant).field_0x28 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&param_1->field_0x28 = 0;
  uVar3 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)&(pFVar5->Variant).field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&(pFVar5->Variant).field_0x18 = uVar3;
  *(undefined8 *)&(pFVar5->Variant).field_0x20 = *(undefined8 *)&param_1->field_0x20;
  if (*(longlong *)&pFVar5->Variant != 0) {
    *(undefined8 *)param_1 = 0;
  }
  (pFVar5->Variant).TypeIndex = '\x05';
  local_res10 = pFVar5;
  TArray<UE::IoStore::FOnDemandContentInstaller::FRequest_*,TSizedDefaultAllocator<32>_>::
  HeapPush<bool___cdecl(UE::IoStore::FOnDemandContentInstaller::FRequest_const_&,UE::IoStore::FOnDemandContentInstaller::FRequest_const_&)>
            (&this->RequestQueue,&local_res10,RequestSortPredicate);
  LOCK();
  pFVar1 = &this->Mutex;
  aVar2 = pFVar1->State;
  pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    FMutex::WakeWaitingThread(&this->Mutex);
  }
  TryExecuteNextRequest(this);
  return;
}

// EnqueueInstallRequest @ 1445ca420

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TSharedPtr<UE::IoStore::FOnDemandInternalInstallRequest,1> * __thiscall
UE::IoStore::FOnDemandContentInstaller::EnqueueInstallRequest
          (FOnDemandContentInstaller *this,
          TSharedPtr<UE::IoStore::FOnDemandInternalInstallRequest,1> *__return_storage_ptr__,
          FOnDemandInstallArgs *param_1,
          TUniqueFunction<void___cdecl(UE::IoStore::FOnDemandInstallResult)> *param_2,
          TFunction<void___cdecl(UE::IoStore::FOnDemandInstallProgress)> *param_3)

{
  FMutex *pFVar1;
  atomic<unsigned___int64> *paVar2;
  atomic<unsigned_int> *paVar3;
  atomic<unsigned_char> aVar4;
  atomic<unsigned_int> aVar5;
  FOnDemandInternalInstallRequest *pFVar6;
  code *pcVar7;
  byte bVar8;
  uint uVar9;
  ushort uVar10;
  FRequest *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  TSharedPtr<UE::IoStore::FOnDemandInternalInstallRequest,1> *pTVar13;
  FTaskBase *this_00;
  FTaskBase *this_01;
  TReferenceControllerBase<1> *pTVar14;
  bool bVar15;
  LARGE_INTEGER local_res8;
  
  LOCK();
  bVar15 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar15) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar15) {
    FMutex::LockSlow(&this->Mutex);
  }
  pFVar11 = TSingleThreadedSlabAllocator<UE::IoStore::FOnDemandContentInstaller::FRequest,32>::Alloc
                      (&this->RequestAllocator);
  pTVar14 = (TReferenceControllerBase<1> *)0x0;
  uVar9 = FRequest::NextSeqNo + 1;
  pFVar11->SeqNo = FRequest::NextSeqNo;
  FRequest::NextSeqNo = uVar9;
  pFVar11->Priority = 0;
  QueryPerformanceCounter(&local_res8);
  pFVar11->StartTimeCycles = (ulong64)local_res8;
  (pFVar11->Variant).TypeIndex = '\0';
  (pFVar11->Result).Error.bIsSet = false;
  pFVar11->bCancelled = false;
  TVariant<FEmptyVariantState,UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,UE::IoStore::FOnDemandContentInstaller::FRequest::FPurge,UE::IoStore::FOnDemandContentInstaller::FRequest::FDefrag,UE::IoStore::FOnDemandContentInstaller::FRequest::FVerify,UE::IoStore::FOnDemandContentInstaller::FRequest::FFlushLastAccess>
  ::
  Emplace<UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,UE::IoStore::FOnDemandInstallArgs,TUniqueFunction<void___cdecl(UE::IoStore::FOnDemandInstallResult)>,TFunction<void___cdecl(UE::IoStore::FOnDemandInstallProgress)>_>
            (&pFVar11->Variant,param_1,param_2,param_3);
  LOCK();
  pFVar1 = &this->Mutex;
  aVar4 = pFVar1->State;
  pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
  UNLOCK();
  if (((byte)aVar4 & 2) != 0) {
    FMutex::WakeWaitingThread(&this->Mutex);
  }
  pTVar12 = ::operator_new(0x20);
  if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FOnDemandInternalInstallRequest *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar12->SharedReferenceCount = (atomic<int>)0x1;
    pTVar12->WeakReferenceCount = (atomic<int>)0x1;
    pTVar12->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFOnDemandInternalInstallRequest_IoStore_UE___00_SharedPointerInternals__6B_
    ;
    pTVar12[1]._padding_ = (longlong)pFVar11;
    *(undefined1 *)&pTVar12[1].SharedReferenceCount = 1;
    if ((pTVar12 + 1 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar15)) {
      pcVar7 = (code *)swi(3);
      pTVar13 = (TSharedPtr<UE::IoStore::FOnDemandInternalInstallRequest,1> *)(*pcVar7)();
      return pTVar13;
    }
    __return_storage_ptr__->Object = (FOnDemandInternalInstallRequest *)(pTVar12 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar12;
    LOCK();
    pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
    UNLOCK();
    pTVar14 = pTVar12;
  }
  this_01 = (FTaskBase *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  if (((pFVar11->Variant).TypeIndex != '\x01') &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index == TypeIndex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                          ,0x97,L""), bVar15)) {
    pcVar7 = (code *)swi(3);
    pTVar13 = (TSharedPtr<UE::IoStore::FOnDemandInternalInstallRequest,1> *)(*pcVar7)();
    return pTVar13;
  }
  pTVar14 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  pFVar6 = __return_storage_ptr__->Object;
  if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar12 = *(TReferenceControllerBase<1> **)&(pFVar11->Variant).field_0xb8;
  *(FOnDemandInternalInstallRequest **)&(pFVar11->Variant).field_0xb0 = pFVar6;
  *(TReferenceControllerBase<1> **)&(pFVar11->Variant).field_0xb8 = pTVar14;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  LOCK();
  bVar15 = FInstallerTraceCounters::Mutex.State == (atomic<unsigned_char>)0x0;
  if (bVar15) {
    FInstallerTraceCounters::Mutex.State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar15) {
    FMutex::LockSlow(&FInstallerTraceCounters::Mutex);
  }
  InstallerTraceCounters.InflightInstallCount.Value =
       InstallerTraceCounters.InflightInstallCount.Value + 1;
  if (-1 < CountersChannel->Enabled) {
    if (InstallerTraceCounters.InflightInstallCount.CounterId == (atomic<unsigned_int>)0x0) {
      uVar10 = FCountersTrace::OutputInitCounter
                         (InstallerTraceCounters.InflightInstallCount.CounterName,
                          TraceCounterType_Int,
                          InstallerTraceCounters.InflightInstallCount.CounterFlags & 0xf);
      LOCK();
      if (InstallerTraceCounters.InflightInstallCount.CounterId == (atomic<unsigned_int>)0x0) {
        InstallerTraceCounters.InflightInstallCount.CounterId._2_2_ = 0;
        InstallerTraceCounters.InflightInstallCount.CounterId._0_2_ = uVar10;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (InstallerTraceCounters.InflightInstallCount.CounterId._0_2_,
               InstallerTraceCounters.InflightInstallCount.Value);
  }
  LOCK();
  aVar4 = FInstallerTraceCounters::Mutex.State + -1;
  UNLOCK();
  bVar8 = (byte)FInstallerTraceCounters::Mutex.State & 2;
  FInstallerTraceCounters::Mutex.State = aVar4;
  if (bVar8 != 0) {
    FMutex::WakeWaitingThread(&FInstallerTraceCounters::Mutex);
  }
  this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Tasks::Private::SmallTaskAllocator);
  if (this_00 != (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
    this_00->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::IoStore::FOnDemandContentInstaller::EnqueueInstallRequest'::`2'::<lambda_1>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              (this_00,L"ProcessIoStoreOnDemandInstallRequest",BackgroundLow,None,None);
    this_00[1]._padding_ = (longlong)this;
    this_00[1]._padding_ = (longlong)pFVar11;
    this_00->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::IoStore::FOnDemandContentInstaller::EnqueueInstallRequest'::`2'::<lambda_1>_>
          ::_vftable_;
    this_01 = this_00;
  }
  LOCK();
  paVar2 = &(this->InstallerPipe).TaskCount;
  *paVar2 = (atomic<unsigned___int64>)((longlong)*paVar2 + 1);
  UNLOCK();
  LOCK();
  this_01->NumLocks = (atomic<unsigned_int>)((int)this_01->NumLocks + 1);
  UNLOCK();
  this_01->Pipe = &this->InstallerPipe;
  Tasks::Private::FTaskBase::TryLaunch(this_01,0x100);
  LOCK();
  paVar3 = &this_01->RefCount;
  aVar5 = *paVar3;
  *paVar3 = (atomic<unsigned_int>)((int)*paVar3 + -1);
  UNLOCK();
  if (aVar5 == (atomic<unsigned_int>)0x1) {
    (**(code **)this_01->_padding_)(this_01,1);
  }
  return __return_storage_ptr__;
}

// EnqueuePurgeRequest @ 1445ca900

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandContentInstaller::EnqueuePurgeRequest
          (FOnDemandContentInstaller *this,FOnDemandPurgeArgs *param_1,
          TUniqueFunction<void___cdecl(UE::IoStore::FOnDemandPurgeResult)> *param_2)

{
  FMutex *pFVar1;
  atomic<unsigned_char> aVar2;
  EOnDemandPurgeOptions EVar3;
  undefined8 uVar4;
  uint uVar5;
  FRequest *pFVar6;
  bool bVar7;
  LARGE_INTEGER local_res8;
  FRequest *local_res10;
  
  LOCK();
  bVar7 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar7) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar7) {
    FMutex::LockSlow(&this->Mutex);
  }
  pFVar6 = TSingleThreadedSlabAllocator<UE::IoStore::FOnDemandContentInstaller::FRequest,32>::Alloc
                     (&this->RequestAllocator);
  uVar5 = FRequest::NextSeqNo + 1;
  pFVar6->SeqNo = FRequest::NextSeqNo;
  FRequest::NextSeqNo = uVar5;
  pFVar6->Priority = 0;
  QueryPerformanceCounter(&local_res8);
  pFVar6->StartTimeCycles = (ulong64)local_res8;
  (pFVar6->Result).Error.bIsSet = false;
  pFVar6->bCancelled = false;
  (pFVar6->Variant).TypeIndex = '\0';
  EVar3 = param_1->Options;
  (pFVar6->Variant).field_0x10 = 0;
  *(EOnDemandPurgeOptions *)&pFVar6->Variant = EVar3;
  bVar7 = (param_1->BytesToPurge).bIsSet;
  (pFVar6->Variant).field_0x10 = bVar7;
  if (bVar7 != false) {
    *(ulong64 *)&(pFVar6->Variant).field_0x8 = (param_1->BytesToPurge).TypedValue;
  }
  *(undefined8 *)&(pFVar6->Variant).field_0x20 = *(undefined8 *)param_2;
  *(undefined8 *)&(pFVar6->Variant).field_0x48 = *(undefined8 *)&param_2->field_0x28;
  *(undefined8 *)&param_2->field_0x28 = 0;
  uVar4 = *(undefined8 *)&param_2->field_0x18;
  *(undefined8 *)&(pFVar6->Variant).field_0x30 = *(undefined8 *)&param_2->field_0x10;
  *(undefined8 *)&(pFVar6->Variant).field_0x38 = uVar4;
  *(undefined8 *)&(pFVar6->Variant).field_0x40 = *(undefined8 *)&param_2->field_0x20;
  if (*(longlong *)&(pFVar6->Variant).field_0x20 != 0) {
    *(undefined8 *)param_2 = 0;
  }
  (pFVar6->Variant).TypeIndex = '\x02';
  local_res10 = pFVar6;
  TArray<UE::IoStore::FOnDemandContentInstaller::FRequest_*,TSizedDefaultAllocator<32>_>::
  HeapPush<bool___cdecl(UE::IoStore::FOnDemandContentInstaller::FRequest_const_&,UE::IoStore::FOnDemandContentInstaller::FRequest_const_&)>
            (&this->RequestQueue,&local_res10,RequestSortPredicate);
  LOCK();
  pFVar1 = &this->Mutex;
  aVar2 = pFVar1->State;
  pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    FMutex::WakeWaitingThread(&this->Mutex);
  }
  TryExecuteNextRequest(this);
  return;
}

// EnqueueVerifyRequest @ 1445caa30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandContentInstaller::EnqueueVerifyRequest
          (FOnDemandContentInstaller *this,
          TUniqueFunction<void___cdecl(UE::IoStore::FOnDemandVerifyCacheResult)> *param_1)

{
  FMutex *pFVar1;
  atomic<unsigned_char> aVar2;
  undefined8 uVar3;
  uint uVar4;
  FRequest *pFVar5;
  bool bVar6;
  LARGE_INTEGER local_res8;
  FRequest *local_res10;
  
  LOCK();
  bVar6 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar6) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar6) {
    FMutex::LockSlow(&this->Mutex);
  }
  pFVar5 = TSingleThreadedSlabAllocator<UE::IoStore::FOnDemandContentInstaller::FRequest,32>::Alloc
                     (&this->RequestAllocator);
  uVar4 = FRequest::NextSeqNo + 1;
  pFVar5->SeqNo = FRequest::NextSeqNo;
  FRequest::NextSeqNo = uVar4;
  pFVar5->Priority = 0;
  QueryPerformanceCounter(&local_res8);
  pFVar5->StartTimeCycles = (ulong64)local_res8;
  (pFVar5->Result).Error.bIsSet = false;
  pFVar5->bCancelled = false;
  (pFVar5->Variant).TypeIndex = '\0';
  *(undefined8 *)&pFVar5->Variant = *(undefined8 *)param_1;
  *(undefined8 *)&(pFVar5->Variant).field_0x28 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&param_1->field_0x28 = 0;
  uVar3 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)&(pFVar5->Variant).field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&(pFVar5->Variant).field_0x18 = uVar3;
  *(undefined8 *)&(pFVar5->Variant).field_0x20 = *(undefined8 *)&param_1->field_0x20;
  if (*(longlong *)&pFVar5->Variant != 0) {
    *(undefined8 *)param_1 = 0;
  }
  (pFVar5->Variant).TypeIndex = '\x04';
  local_res10 = pFVar5;
  TArray<UE::IoStore::FOnDemandContentInstaller::FRequest_*,TSizedDefaultAllocator<32>_>::
  HeapPush<bool___cdecl(UE::IoStore::FOnDemandContentInstaller::FRequest_const_&,UE::IoStore::FOnDemandContentInstaller::FRequest_const_&)>
            (&this->RequestQueue,&local_res10,RequestSortPredicate);
  LOCK();
  pFVar1 = &this->Mutex;
  aVar2 = pFVar1->State;
  pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    FMutex::WakeWaitingThread(&this->Mutex);
  }
  TryExecuteNextRequest(this);
  return;
}

// ExectuteFlushLastAccessRequest @ 1445cb180

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandContentInstaller::ExectuteFlushLastAccessRequest
          (FOnDemandContentInstaller *this,FRequest *param_1)

{
  FScriptContainerElement *pFVar1;
  FOnDemandIoStore *pFVar2;
  IOnDemandInstallCache *pIVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  TOptional<UE::UnifiedError::FError> *pTVar8;
  ulonglong uVar9;
  undefined8 local_28;
  longlong *local_20;
  char local_18;
  
  uVar9 = (ulonglong)(param_1->Variant).TypeIndex;
  if ((5 < uVar9) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((*(char *)((longlong)
                 &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::IoStore::FOnDemandContentInstaller::FRequest::FFlushLastAccess,FEmptyVariantState,UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,UE::IoStore::FOnDemandContentInstaller::FRequest::FPurge,UE::IoStore::FOnDemandContentInstaller::FRequest::FDefrag,UE::IoStore::FOnDemandContentInstaller::FRequest::FVerify,UE::IoStore::FOnDemandContentInstaller::FRequest::FFlushLastAccess>::IsSame(unsigned___int64)'
                  ::__l2::bIsSameType + uVar9) == '\0') &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Request.IsFlushLastAccess()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandContentInstaller.cpp"
                         ,0x44c,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((this->RunningRequests).ArrayNum == 1) {
    pFVar7 = (this->RunningRequests).AllocatorInstance.Data;
    pFVar1 = pFVar7 + 8;
    for (; pFVar7 != pFVar1; pFVar7 = pFVar7 + 8) {
      if (*(FRequest **)pFVar7 == param_1) goto LAB_1445cb244;
    }
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("RunningRequests.Num() == 1 && RunningRequests.Contains(&Request)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandContentInstaller.cpp"
                     ,0x44d,L"");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_1445cb244:
  if (4 < (byte)LogIoStoreOnDemand._0_1_) {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
  }
  if (param_1->bCancelled == false) {
    pFVar2 = this->IoStore;
    if (((pFVar2->InstallCache).Object == (IOnDemandInstallCache *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pIVar3 = (pFVar2->InstallCache).Object;
    pTVar8 = (TOptional<UE::UnifiedError::FError> *)
             (**(code **)((longlong)*pIVar3 + 0xa8))(pIVar3,&local_28);
    TOptional<UE::UnifiedError::FError>::operator=(&(param_1->Result).Error,pTVar8);
    plVar5 = local_20;
    if ((local_18 != '\0') && (local_28 = 0, local_20 != (longlong *)0x0)) {
      local_20 = (longlong *)0x0;
      (**(code **)(*plVar5 + 0x10))();
      if (local_20 != (longlong *)0x0) {
        (**(code **)(*local_20 + 0x10))();
      }
    }
  }
  CompleteFlushLastAccessRequest(this,param_1);
  return;
}

// ExecuteDefragRequest @ 1445cb5e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandContentInstaller::ExecuteDefragRequest
          (FOnDemandContentInstaller *this,FRequest *param_1)

{
  FScriptContainerElement *pFVar1;
  FOnDemandIoStore *pFVar2;
  IOnDemandInstallCache *pIVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  TOptional<UE::UnifiedError::FError> *pTVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined8 local_28;
  longlong *local_20;
  char local_18;
  
  uVar9 = (ulonglong)(param_1->Variant).TypeIndex;
  if ((5 < uVar9) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((*(char *)((longlong)
                 &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::IoStore::FOnDemandContentInstaller::FRequest::FDefrag,FEmptyVariantState,UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,UE::IoStore::FOnDemandContentInstaller::FRequest::FPurge,UE::IoStore::FOnDemandContentInstaller::FRequest::FDefrag,UE::IoStore::FOnDemandContentInstaller::FRequest::FVerify,UE::IoStore::FOnDemandContentInstaller::FRequest::FFlushLastAccess>::IsSame(unsigned___int64)'
                  ::__l2::bIsSameType + uVar9) == '\0') &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Request.IsDefrag()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandContentInstaller.cpp"
                         ,0x42a,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((this->RunningRequests).ArrayNum == 1) {
    pFVar7 = (this->RunningRequests).AllocatorInstance.Data;
    pFVar1 = pFVar7 + 8;
    for (; pFVar7 != pFVar1; pFVar7 = pFVar7 + 8) {
      if (*(FRequest **)pFVar7 == param_1) goto LAB_1445cb6a8;
    }
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("RunningRequests.Num() == 1 && RunningRequests.Contains(&Request)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandContentInstaller.cpp"
                     ,0x42b,L"");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_1445cb6a8:
  if (((param_1->Variant).TypeIndex != '\x03') &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  puVar10 = &(param_1->Variant).field_0x8;
  if ((param_1->Variant).field_0x10 == '\0') {
    puVar10 = (undefined1 *)0x0;
  }
  if (4 < (byte)LogIoStoreOnDemand._0_1_) {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
  }
  if (param_1->bCancelled == false) {
    pFVar2 = this->IoStore;
    if (((pFVar2->InstallCache).Object == (IOnDemandInstallCache *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pIVar3 = (pFVar2->InstallCache).Object;
    pTVar8 = (TOptional<UE::UnifiedError::FError> *)
             (**(code **)((longlong)*pIVar3 + 0x90))(pIVar3,&local_28,puVar10);
    TOptional<UE::UnifiedError::FError>::operator=(&(param_1->Result).Error,pTVar8);
    plVar5 = local_20;
    if ((local_18 != '\0') && (local_28 = 0, local_20 != (longlong *)0x0)) {
      local_20 = (longlong *)0x0;
      (**(code **)(*plVar5 + 0x10))();
      if (local_20 != (longlong *)0x0) {
        (**(code **)(*local_20 + 0x10))();
      }
    }
  }
  CompleteDefragRequest(this,param_1);
  return;
}

// ExecuteInstallRequest @ 1445cbb80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */
/* WARNING: Enum "EIoHttpFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandContentInstaller::ExecuteInstallRequest
          (FOnDemandContentInstaller *this,FRequest *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  FIoHttpRequest *this_00;
  longlong lVar3;
  FOnDemandIoStore *pFVar4;
  IOnDemandInstallCache *pIVar5;
  undefined1 *puVar6;
  FOnDemandHttpThread *this_01;
  longlong lVar7;
  code *pcVar8;
  ulong64 *puVar9;
  bool bVar10;
  bool bVar11;
  FString *pFVar12;
  FString *pFVar13;
  FError *pFVar14;
  ulonglong uVar15;
  FOnDemandChunkEntry *pFVar16;
  TOptional<UE::UnifiedError::FError> *pTVar17;
  FIoHttpBatch *pFVar18;
  TUniqueFunction<void___cdecl(UE::FIoHttpResponse_&&)> *pTVar19;
  FIoHttpRequest FVar20;
  void *pvVar21;
  code **ppcVar22;
  int iVar23;
  FScriptContainerElement *pFVar24;
  ForAnyElementType FVar25;
  code **ppcVar26;
  undefined1 *puVar27;
  uint uVar28;
  longlong lVar29;
  uint uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  uint *puVar33;
  ForElementType<unsigned_int> FVar34;
  FRequest *pFVar35;
  ulonglong uVar36;
  ulong64 *puVar37;
  undefined1 auStackY_438 [32];
  undefined1 local_3f7;
  undefined1 local_3f6;
  char local_3f5;
  FOnDemandContentInstaller *local_3f0;
  FIoHttpBatch local_3e8;
  char local_3d8;
  TKeyInitializer<FIoHash_const_&> local_3d0;
  FRequest *local_3c8;
  TMultiMap<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest,1>_>
  *local_3c0;
  TUniqueFunction<void___cdecl(UE::FIoHttpResponse_&&)> *pTStack_3b8;
  int local_3b0;
  int iStack_3ac;
  uint local_3a8;
  uint uStack_3a4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_3a0;
  undefined4 local_398;
  uint uStack_394;
  uint uStack_390;
  undefined4 uStack_38c;
  FOnDemandChunkInfo local_388;
  FIoHttpOptions local_370;
  undefined8 local_358;
  undefined1 local_350 [16];
  longlong *local_340;
  FIoOffsetAndLength local_338;
  undefined8 local_328;
  longlong *local_320;
  char local_318;
  FIoHash local_310;
  undefined1 local_2fc;
  undefined4 local_2f8;
  int local_2f4;
  undefined1 local_2f0 [16];
  FName local_2e0;
  FName local_2d8;
  ulong64 *local_2d0;
  TBaseKeyIterator<0> local_2c8;
  longlong *local_2b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2a8;
  TOptional<UE::UnifiedError::FError> local_288;
  TUniqueFunction<void___cdecl(UE::FIoHttpResponse_&&)> *local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  FOnDemandContentInstaller *local_258;
  code *pcStack_250;
  code *pcStack_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  FOnDemandContentInstaller *local_238;
  code *pcStack_230;
  code *pcStack_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  code *local_218;
  FRequest **local_210;
  FRequest *local_208;
  EIoHttpFlags *local_200;
  undefined8 *local_1f8;
  FIoHttpBatch local_1f0;
  TArrayView<unsigned_char_const_,int> local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  undefined1 local_198 [32];
  ForElementType<unsigned_int> local_178;
  uint local_170;
  int local_16c;
  int local_168;
  int local_164;
  FScriptContainerElement local_160 [8];
  ForAnyElementType local_158;
  uint local_150;
  code *local_148;
  code *local_138 [3];
  code **local_120;
  code *local_118 [2];
  code *local_108 [3];
  code **local_f0;
  TStringBuilderBase<wchar_t> local_e8;
  wchar_t local_c8 [64];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_438;
  uVar36 = (ulonglong)(param_1->Variant).TypeIndex;
  local_3f0 = this;
  local_3c8 = param_1;
  if ((5 < uVar36) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0x12f,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((*(char *)((longlong)
                 &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,FEmptyVariantState,UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,UE::IoStore::FOnDemandContentInstaller::FRequest::FPurge,UE::IoStore::FOnDemandContentInstaller::FRequest::FDefrag,UE::IoStore::FOnDemandContentInstaller::FRequest::FVerify,UE::IoStore::FOnDemandContentInstaller::FRequest::FFlushLastAccess>::IsSame(unsigned___int64)'
                  ::__l2::bIsSameType + uVar36) == '\0') &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Request.IsInstall()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandContentInstaller.cpp"
                          ,0x34e,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar24 = (this->RunningRequests).AllocatorInstance.Data;
  pFVar1 = pFVar24 + (longlong)(this->RunningRequests).ArrayNum * 8;
  for (; pFVar24 != pFVar1; pFVar24 = pFVar24 + 8) {
    if (*(FRequest **)pFVar24 == param_1) goto LAB_1445cbc67;
  }
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("RunningRequests.Contains(&Request)",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandContentInstaller.cpp"
                      ,0x34f,L"");
  if (bVar10) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_1445cbc67:
  if (((param_1->Variant).TypeIndex != '\x01') &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index == TypeIndex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                          ,0x97,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((*(int *)&(param_1->Variant).field_0xd8 != 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InstallRequest.HttpRequestHandles.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandContentInstaller.cpp"
                          ,0x352,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (5 < (byte)LogIoStoreOnDemand._0_1_) {
    IoStore::LexToString(&local_1c8,(FOnDemandContentHandle *)&(param_1->Variant).field_0x30);
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
  }
  pFVar35 = param_1;
  if (param_1->bCancelled != false) goto LAB_1445cbe77;
  local_200 = &local_370.Flags;
  local_1f8 = &local_358;
  uVar36 = 0;
  local_210 = &local_208;
  local_370.Flags = None;
  local_370.Category = '\0';
  local_370._21_3_ = 0;
  local_358 = 0;
  local_218 = Core::Private::Function::
              TFunctionRefCaller<`UE::IoStore::FOnDemandContentInstaller::ExecuteInstallRequest'::__l2::<lambda_1>,void,int,int,bool>
              ::Call;
  local_208 = param_1;
  PinCachedChunks(this,(FInstall *)&param_1->Variant,
                  (TFunctionRef<void___cdecl(int,int,bool)> *)&local_218);
  *(EIoHttpFlags *)&(param_1->Variant).field_0xe0 = local_370.Flags;
  (param_1->Variant).field_0xe4 = local_370.Category;
  *(undefined3 *)&(param_1->Variant).field_0xe5 = local_370._21_3_;
  *(undefined8 *)&(param_1->Variant).field_0xe8 = local_358;
  *(undefined8 *)&(param_1->Variant).field_0xf0 = 0;
  if (*(int *)&(param_1->Variant).field_0xd8 == 0) goto LAB_1445cbe77;
  if (((param_1->Variant).field_0x40 & 8) != 0) {
    pFVar12 = ::FString::FString(&local_1b8,L"DoNotDownload flag specified when download required");
    pFVar13 = ::FString::FString(&local_1a8,L"Options");
    pFVar14 = UnifiedError::Core::ArgumentError::MakeError
                        ((FError *)(local_350 + 8),pFVar13,pFVar12);
    UnifiedError::FError::FError(&local_288.TypedValue,pFVar14);
    local_288.bIsSet = true;
    TOptional<UE::UnifiedError::FError>::operator=(&(param_1->Result).Error,&local_288);
    if ((local_288.bIsSet != false) &&
       (local_288.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
      (**(code **)((longlong)*local_288.TypedValue.ErrorDetails.Reference + 0x10))();
    }
    plVar2 = local_340;
    local_350._8_4_ = 0;
    local_350._12_4_ = 0;
    if (local_340 != (longlong *)0x0) {
      local_340 = (longlong *)0x0;
      (**(code **)(*plVar2 + 0x10))();
      if (local_340 != (longlong *)0x0) {
        (**(code **)(*local_340 + 0x10))();
      }
    }
    goto LAB_1445cbe77;
  }
  bVar10 = CVars::EnableConcurentInstallRequests();
  if (!bVar10) {
    uVar28 = *(uint *)&(param_1->Variant).field_0xd8;
    local_198._0_8_ = (FScriptContainerElement *)0x0;
    local_198._8_8_ = 0;
    local_178 = (ForElementType<unsigned_int>)0x0;
    local_170 = 0;
    local_16c = 0x80;
    local_168 = -1;
    local_164 = 0;
    local_158.Data = (FScriptContainerElement *)0x0;
    local_150 = 0;
    if (uVar28 != 0) {
      if ((int)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidSetNum((longlong)(int)uVar28);
      }
      TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_198,uVar28);
      if (uVar28 < 4) {
        uVar28 = 1;
      }
      else {
        uVar31 = (ulonglong)((uVar28 >> 1) + 7) * 2 + 1;
        lVar7 = 0x3f;
        if (uVar31 != 0) {
          for (; uVar31 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        local_2f8 = (undefined4)lVar7;
        uVar28 = 1 << ((byte)lVar7 & 0x1f);
      }
      if ((local_150 == 0) || ((int)local_150 < (int)uVar28)) {
        local_150 = uVar28;
        if (local_158.Data != (FScriptContainerElement *)0x0) {
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_158,0,0,4);
        }
        if (uVar28 != 0) {
          uVar30 = uVar28;
          if (uVar28 < 2) {
            if (local_158.Data != (FScriptContainerElement *)0x0) {
              uVar30 = 0;
              goto LAB_1445cbfac;
            }
          }
          else {
LAB_1445cbfac:
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&local_158,0,uVar30,4);
          }
          if (0 < (int)uVar28) {
            uVar32 = (ulonglong)uVar28;
            uVar31 = uVar36;
            do {
              FVar25.Data = local_160;
              if (local_158.Data != (FScriptContainerElement *)0x0) {
                FVar25.Data = local_158.Data;
              }
              uVar15 = uVar31 & (longlong)(int)uVar28 - 1U;
              uVar31 = uVar31 + 1;
              *(undefined4 *)(FVar25.Data + uVar15 * 4) = 0xffffffff;
              uVar32 = uVar32 - 1;
            } while (uVar32 != 0);
          }
        }
        if (local_150 != 0) {
          pTStack_3a0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_198 + 0x10);
          local_3a8 = 0;
          uStack_3a4 = 1;
          uStack_394 = 0;
          uStack_390 = 0;
          uVar31 = uVar36;
          if (local_170 != 0) {
            FVar34 = (ForElementType<unsigned_int>)((longlong)local_198 + 0x10);
            if (local_178 != (ForElementType<unsigned_int>)0x0) {
              FVar34 = local_178;
            }
            uVar28 = *(uint *)FVar34;
            uVar32 = uVar36;
            while (uVar28 == 0) {
              uStack_390 = (int)uVar32 + 0x20;
              uVar32 = (ulonglong)uStack_390;
              iVar23 = (int)uVar31;
              local_3a8 = iVar23 + 1;
              uVar31 = (ulonglong)local_3a8;
              if ((int)((local_170 - 1) + ((int)(local_170 - 1) >> 0x1f & 0x1fU)) >> 5 <
                  (int)local_3a8) goto LAB_1445cc0cd;
              uVar28 = ((uint *)((longlong)FVar34 + 4))[iVar23];
            }
            uStack_3a4 = -uVar28 & uVar28;
            uVar31 = (ulonglong)uStack_3a4 * 2 + 1;
            lVar7 = 0x3f;
            if (uVar31 != 0) {
              for (; uVar31 >> lVar7 == 0; lVar7 = lVar7 + -1) {
              }
            }
            local_2f4 = (int)lVar7;
            uStack_394 = local_2f4 + -1 + uStack_390;
            uVar31 = (ulonglong)uStack_394;
            if ((int)local_170 < (int)uStack_394) {
LAB_1445cc0cd:
              uVar31 = (ulonglong)local_170;
              uStack_394 = local_170;
            }
          }
          local_398 = 0xffffffff;
          local_2b0 = (longlong *)local_198;
          local_2a8._padding_ = CONCAT44(uStack_3a4,local_3a8);
          local_2a8.CurrentBitIndex = uStack_394;
          local_2a8.UnvisitedBitMask = 0xffffffff;
          local_2a8._28_4_ = uStack_38c;
          local_2a8.BaseBitIndex = uStack_390;
          local_2a8.Array = pTStack_3a0;
          if ((int)uVar31 < (int)local_170) {
            do {
              puVar33 = (uint *)((longlong)(int)uVar31 * 0x1c + *local_2b0);
              uVar28 = local_150 - 1 & *puVar33;
              puVar33[6] = uVar28;
              FVar25.Data = local_160;
              if (local_158.Data != (FScriptContainerElement *)0x0) {
                FVar25.Data = local_158.Data;
              }
              uVar32 = (longlong)(int)local_150 - 1U & (longlong)(int)uVar28;
              puVar33[5] = *(uint *)(FVar25.Data + uVar32 * 4);
              *(int *)(FVar25.Data + uVar32 * 4) = (int)uVar31;
              local_2a8.UnvisitedBitMask = local_2a8.UnvisitedBitMask & ~local_2a8._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2a8);
              uVar31 = (ulonglong)(uint)local_2a8.CurrentBitIndex;
            } while (local_2a8.CurrentBitIndex < (local_2a8.Array)->NumBits);
          }
        }
      }
    }
    iVar23 = *(int *)&(param_1->Variant).field_0xd8;
    lVar29 = *(longlong *)&(param_1->Variant).field_0xd0;
    lVar7 = lVar29 + (longlong)iVar23 * 0x18;
    while( true ) {
      if (*(int *)&(param_1->Variant).field_0xd8 != iVar23) {
        local_3f7 = 0;
        `TCheckedPointerIterator<UE::IoStore::FOnDemandContentInstaller::FChunkHttpRequestHandle,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_3f7);
      }
      pFVar35 = local_3c8;
      if (lVar29 == lVar7) break;
      uVar28 = *(uint *)(lVar29 + 0x10);
      uVar30 = 0;
      if ((int)uVar28 < *(int *)&(param_1->Variant).field_0xc8) {
        uVar30 = ~uVar28 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar3 = *(longlong *)&(param_1->Variant).field_0xc0;
      if ((*(longlong *)(lVar3 + (longlong)(int)uVar28 * 0x28) == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar16 = TArrayView<UE::IoStore::FOnDemandChunkEntry,int>::operator[]
                          ((TArrayView<UE::IoStore::FOnDemandChunkEntry,int> *)
                           (*(longlong *)(lVar3 + (longlong)(int)uVar28 * 0x28) + 0xd8),
                           *(int *)(lVar29 + 0x14));
      TSet<FIoHash,DefaultKeyFuncs<FIoHash,0>,FDefaultSetAllocator>::Emplace<FIoHash_const_&>
                ((TSet<FIoHash,DefaultKeyFuncs<FIoHash,0>,FDefaultSetAllocator> *)local_198,
                 (FIoHash *)local_2f0,(bool *)pFVar16);
      uVar36 = uVar36 + ((ulonglong)(pFVar16->EncodedSize + 0xf) & 0xfffffff0);
      lVar29 = lVar29 + 0x18;
    }
    local_150 = 0;
    if (local_158.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data);
    }
    TSparseArray<TSparseSetElement<FIoHash>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FIoHash>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FIoHash>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_198);
    this = local_3f0;
    pFVar4 = local_3f0->IoStore;
    if (((pFVar4->InstallCache).Object == (IOnDemandInstallCache *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pIVar5 = (pFVar4->InstallCache).Object;
    pTVar17 = (TOptional<UE::UnifiedError::FError> *)
              (**(code **)((longlong)*pIVar5 + 0x80))(pIVar5,&local_328,uVar36);
    TOptional<UE::UnifiedError::FError>::operator=(&(pFVar35->Result).Error,pTVar17);
    plVar2 = local_320;
    if ((local_318 != '\0') && (local_328 = 0, local_320 != (longlong *)0x0)) {
      local_320 = (longlong *)0x0;
      (**(code **)(*plVar2 + 0x10))();
      if (local_320 != (longlong *)0x0) {
        (**(code **)(*local_320 + 0x10))();
      }
    }
    if ((pFVar35->Result).Error.bIsSet != false) goto LAB_1445cbe77;
  }
  if (pFVar35->bCancelled == false) {
    NotifyInstallProgress(this,pFVar35);
    bVar10 = FHttpIoDispatcher::IsInitialized();
    local_3f5 = bVar10;
    if (((!bVar10) && (this->HttpClient == (FOnDemandHttpThread *)0x0)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("bUseHttpIoDispatcher || HttpClient != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandContentInstaller.cpp"
                            ,0x3a7,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_3d8 = '\0';
    if (bVar10) {
      pFVar18 = FHttpIoDispatcher::NewBatch(&local_1f0);
      if (local_3d8 != '\0') {
        FIoHttpBatch::~FIoHttpBatch(&local_3e8);
      }
      local_3e8.First = pFVar18->First;
      local_3e8.Last = pFVar18->Last;
      pFVar18->First = 0;
      pFVar18->Last = 0;
      local_3d8 = '\x01';
      FIoHttpBatch::~FIoHttpBatch(&local_1f0);
    }
    iVar23 = *(int *)&(param_1->Variant).field_0xd8;
    uVar36 = (ulonglong)iVar23;
    puVar37 = *(ulong64 **)&(param_1->Variant).field_0xd0;
    local_3c8 = (FRequest *)CONCAT44(local_3c8._4_4_,iVar23);
    local_2d0 = puVar37 + uVar36 * 3;
    do {
      puVar9 = local_2d0;
      if (*(int *)&(param_1->Variant).field_0xd8 != (int)uVar36) {
        local_3f6 = 0;
        `TCheckedPointerIterator<UE::IoStore::FOnDemandContentInstaller::FChunkHttpRequestHandle,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_3f6);
      }
      if (puVar37 == puVar9) {
        if (local_3d8 != '\0') {
          FIoHttpBatch::Issue(&local_3e8);
        }
        (param_1->Variant).field_0x108 = 1;
        if (local_3d8 == '\0') {
          return;
        }
        FIoHttpBatch::~FIoHttpBatch(&local_3e8);
        return;
      }
      bVar10 = -1 < CpuChannel->Enabled;
      if (bVar10) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId946,"FOnDemandContentInstaller::IssueRequest",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandContentInstaller.cpp"
                   ,0x3b2);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId946);
      }
      uVar28 = (uint)puVar37[2];
      uVar30 = 0;
      if ((int)uVar28 < *(int *)&(param_1->Variant).field_0xc8) {
        uVar30 = ~uVar28 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar7 = *(longlong *)&(param_1->Variant).field_0xc0;
      plVar2 = (longlong *)(lVar7 + (longlong)(int)uVar28 * 0x28);
      if ((*(longlong *)(lVar7 + (longlong)(int)uVar28 * 0x28) == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pTVar19 = (TUniqueFunction<void___cdecl(UE::FIoHttpResponse_&&)> *)
                TArrayView<UE::IoStore::FOnDemandChunkEntry,int>::operator[]
                          ((TArrayView<UE::IoStore::FOnDemandChunkEntry,int> *)(*plVar2 + 0xd8),
                           *(int *)((longlong)puVar37 + 0x14));
      local_388.SharedContainer.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)plVar2[1];
      local_388.SharedContainer.Object = (FOnDemandContainer *)*plVar2;
      if (local_388.SharedContainer.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_388.SharedContainer.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_388.SharedContainer.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        (local_388.SharedContainer.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_388.SharedContainer.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      local_388.Entry = (FOnDemandChunkEntry *)pTVar19;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_388.SharedContainer.SharedReferenceCount.ReferenceController);
      local_3c0 = &this->PendingChunkDownloads;
      iVar23 = *(int *)&(this->PendingChunkDownloads).field_0x48;
      local_3b0 = -1;
      if (iVar23 == 0) {
        iStack_3ac = -1;
      }
      else {
        puVar6 = *(undefined1 **)&(this->PendingChunkDownloads).field_0x40;
        puVar27 = &(this->PendingChunkDownloads).field_0x38;
        if (puVar6 != (undefined1 *)0x0) {
          puVar27 = puVar6;
        }
        iStack_3ac = *(int *)(puVar27 + ((longlong)iVar23 - 1U & (longlong)*(int *)pTVar19) * 4);
        local_3b0 = iStack_3ac;
        if (iStack_3ac != -1) {
          lVar7 = *(longlong *)&local_3c0->field_0x0;
          do {
            lVar29 = (longlong)local_3b0;
            iStack_3ac = *(int *)(lVar7 + 0x40 + lVar29 * 0x48);
            if (((*(longlong *)(lVar7 + lVar29 * 0x48) == *(longlong *)pTVar19) &&
                (*(longlong *)(lVar7 + 8 + lVar29 * 0x48) == *(longlong *)&pTVar19->field_0x8)) &&
               (*(int *)(lVar7 + 0x10 + lVar29 * 0x48) == *(int *)&pTVar19->field_0x10)) break;
            local_3b0 = iStack_3ac;
          } while (iStack_3ac != -1);
        }
      }
      local_2c8.NextIndex = iStack_3ac;
      local_2c8.Index = local_3b0;
      local_2c8.Set =
           (TSet<TTuple<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest>,TDefaultMapHashableKeyFuncs<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest,1>,FDefaultSetAllocator>
            *)local_3c0;
      pTStack_3b8 = pTVar19;
      local_2c8.Key = (FIoHash *)pTVar19;
      iVar23 = local_3b0;
      while (iVar23 != -1) {
        lVar7 = *(longlong *)&(local_2c8.Set)->Elements + (longlong)iVar23 * 0x48;
        if (*(char *)(*(longlong *)&(local_2c8.Set)->Elements + 0x3c + (longlong)iVar23 * 0x48) ==
            '\0') {
          if (((puVar37 == (ulong64 *)0x0) || (*puVar37 != 0)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Element != nullptr && TypeTraits::GetNext(Element) == nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                                  ,0x62,L""), bVar11)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (*(longlong *)(lVar7 + 0x30) == 0) {
            if ((*(longlong *)(lVar7 + 0x28) != 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Head == nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                                    ,0x66,L""), bVar11)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            *(ulong64 **)(lVar7 + 0x30) = puVar37;
            *(ulong64 **)(lVar7 + 0x28) = puVar37;
          }
          else {
            *puVar37 = *(ulong64 *)(lVar7 + 0x28);
            *(ulong64 **)(lVar7 + 0x28) = puVar37;
          }
          goto LAB_1445ccbdd;
        }
        TSet<TTuple<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest>,TDefaultMapHashableKeyFuncs<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest,1>,FDefaultSetAllocator>
        ::TBaseKeyIterator<0>::operator++(&local_2c8);
        iVar23 = local_2c8.Index;
      }
      local_2f0._8_8_ = pTVar19;
      TSet<TTuple<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest>,TDefaultMapHashableKeyFuncs<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest,1>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<FIoHash_const_&>_>
                ((TSet<TTuple<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest>,TDefaultMapHashableKeyFuncs<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest,1>,FDefaultSetAllocator>
                  *)&this->PendingChunkDownloads,&local_3d0,(bool *)(local_2f0 + 8));
      this_00 = (FIoHttpRequest *)
                (*(longlong *)&(this->PendingChunkDownloads).field_0x0 +
                ((longlong)(int)local_3d0.Key * 9 + 3) * 8);
      *(uint *)&this_00[4].Handle = pFVar35->SeqNo;
      if (((puVar37 == (ulong64 *)0x0) || (*puVar37 != 0)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Element != nullptr && TypeTraits::GetNext(Element) == nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                              ,0x62,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (this_00[3].Handle == 0) {
        if ((this_00[2].Handle != 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Head == nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoContainers.h"
                                ,0x66,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        this_00[3].Handle = (ulong64)puVar37;
      }
      else {
        *puVar37 = this_00[2].Handle;
      }
      this_00[2].Handle = (ulong64)puVar37;
      local_310.Hash._8_4_ = pFVar35->Priority;
      local_310.Hash[0] = 0xff;
      local_310.Hash[1] = 0xff;
      local_310.Hash[2] = 0xff;
      local_310.Hash[3] = 0xff;
      local_310.Hash[4] = '\0';
      local_310.Hash[5] = '\0';
      local_310.Hash[6] = '\0';
      local_310.Hash[7] = '\0';
      local_310.Hash[0xc] = '\x02';
      local_310.Hash[0xd] = '\0';
      local_310.Hash[0xe] = '\0';
      local_310.Hash[0xf] = '\0';
      local_310.Hash[0x10] = '\0';
      local_310.Hash[0x11] = '\0';
      local_310.Hash[0x12] = '\0';
      local_310.Hash[0x13] = '\0';
      local_2fc = 1;
      if (6 < (byte)LogIoStoreOnDemand._0_1_) {
        local_e8.Base = local_c8;
        local_e8.CurPos = local_c8;
        local_e8.End = (wchar_t *)local_48;
        uStack_260 = 0x14;
        local_1d8._12_4_ = uStack_25c;
        local_1d8.ArrayNum = 0x14;
        local_e8.bIsDynamic = false;
        local_e8.bIsExternal = false;
        local_268 = pTVar19;
        local_1d8.DataPtr = (uchar *)pTVar19;
        String::BytesToHexLower(&local_1d8,&local_e8);
        if (local_e8.End < local_e8.CurPos + 1) {
          TStringBuilderBase<wchar_t>::Extend(&local_e8,1);
        }
        *local_e8.CurPos = L'\0';
        Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
        TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_e8);
      }
      if (local_3f5 == '\0') {
        pcStack_230 = *(code **)pTVar19;
        pcStack_228 = *(code **)&pTVar19->field_0x8;
        local_238 = local_3f0;
        this_01 = local_3f0->HttpClient;
        uStack_220 = *(undefined4 *)&pTVar19->field_0x10;
        uStack_21c = (undefined4)this_00[4].Handle;
        local_118[0] = (code *)0x0;
        local_f0 = (code **)0x0;
        local_f0 = FMemory::Malloc(0x28,8);
        *local_f0 = (code *)&Core::Private::Function::
                             TFunction_OwnedObject<`UE::IoStore::FOnDemandContentInstaller::ExecuteInstallRequest'::`114'::<lambda_3>,1,1>
                             ::_vftable_;
        local_f0[1] = (code *)local_238;
        local_f0[2] = pcStack_230;
        local_f0[3] = pcStack_228;
        local_f0[4] = (code *)CONCAT44(uStack_21c,uStack_220);
        if (local_f0 + 1 != (code **)0x0) {
          local_118[0] = Core::Private::Function::
                         TFunctionRefCaller<`UE::IoStore::FOnDemandContentInstaller::ExecuteInstallRequest'::__l114::<lambda_3>,void,unsigned_int,TStringView<wchar_t>,FIoBuffer_&&>
                         ::Call;
        }
        local_338.OffsetAndLength[0] = '\0';
        local_338.OffsetAndLength[1] = '\0';
        local_338.OffsetAndLength[2] = '\0';
        local_338.OffsetAndLength[3] = '\0';
        local_338.OffsetAndLength[4] = '\0';
        local_338.OffsetAndLength[5] = '\0';
        local_338.OffsetAndLength[6] = '\0';
        local_338.OffsetAndLength[7] = '\0';
        local_338.OffsetAndLength[8] = '\0';
        local_338.OffsetAndLength[9] = '\0';
        pvVar21 = FOnDemandHttpThread::IssueRequest
                            (this_01,&local_388,&local_338,pFVar35->Priority,
                             (TUniqueFunction<void___cdecl(unsigned_int,TStringView<wchar_t>,FIoBuffer_&&)>
                              *)local_118,Installed);
        uVar36 = (ulonglong)(byte)this_00[1].Handle;
        if ((1 < uVar36) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<void*___ptr64,UE::FIoHttpRequest>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar36] ==
            Core::Private::TDestructorCaller<UE::FIoHttpRequest>::Destruct) {
          FIoHttpRequest::~FIoHttpRequest(this_00);
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<void*___ptr64,UE::FIoHttpRequest>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar36])();
        }
        this_00->Handle = (ulong64)pvVar21;
        *(undefined1 *)&this_00[1].Handle = 0;
        this = local_3f0;
        if (local_118[0] != (code *)0x0) {
          ppcVar26 = local_118 + 2;
          ppcVar22 = local_f0;
          goto LAB_1445ccbcb;
        }
      }
      else {
        if ((local_3d8 == '\0') &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pcStack_250 = *(code **)pTVar19;
        pcStack_248 = *(code **)&pTVar19->field_0x8;
        local_258 = local_3f0;
        uStack_240 = *(undefined4 *)&pTVar19->field_0x10;
        uStack_23c = (undefined4)this_00[4].Handle;
        local_148 = (code *)0x0;
        local_120 = (code **)0x0;
        local_120 = FMemory::Malloc(0x28,8);
        *local_120 = (code *)&Core::Private::Function::
                              TFunction_OwnedObject<`UE::IoStore::FOnDemandContentInstaller::ExecuteInstallRequest'::`112'::<lambda_2>,1,1>
                              ::_vftable_;
        local_120[1] = (code *)local_258;
        local_120[2] = pcStack_250;
        local_120[3] = pcStack_248;
        local_120[4] = (code *)CONCAT44(uStack_23c,uStack_240);
        if (local_120 + 1 != (code **)0x0) {
          local_148 = Core::Private::Function::
                      TFunctionRefCaller<`UE::IoStore::FOnDemandContentInstaller::ExecuteInstallRequest'::__l112::<lambda_2>,void,UE::FIoHttpResponse_&&>
                      ::Call;
        }
        local_370.Range.Min = 0;
        local_370.Range.Max = 0;
        local_370.Priority = 0;
        local_370.RetryCount = 0;
        if ((local_388.SharedContainer.Object == (FOnDemandContainer *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_350._0_8_ = ((local_388.SharedContainer.Object)->RelativeUrl).Url.Chars;
        if ((FScriptContainerElement *)local_350._0_8_ != (FScriptContainerElement *)0x0) {
          LOCK();
          *(int *)(local_350._0_8_ + -8) = *(int *)(local_350._0_8_ + -8) + 1;
          UNLOCK();
        }
        if ((local_388.SharedContainer.Object == (FOnDemandContainer *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        local_2e0 = (local_388.SharedContainer.Object)->HostGroupName;
        FVar20 = FIoHttpBatch::Get(&local_3e8,&local_2d8,(FIoRelativeUrl *)&local_2e0,
                                   (FIoHttpHeaders *)local_350,&local_370,&local_310,pTVar19);
        uVar36 = (ulonglong)(byte)this_00[1].Handle;
        if ((1 < uVar36) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L""), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<void*___ptr64,UE::FIoHttpRequest>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar36])(this_00);
                    /* WARNING: Load size is inaccurate */
        this_00->Handle = *FVar20.Handle;
        *(undefined8 *)FVar20.Handle = 0;
        *(undefined1 *)&this_00[1].Handle = 1;
        FIoHttpRequest::~FIoHttpRequest((FIoHttpRequest *)&local_2d8);
        if ((FScriptContainerElement *)local_350._0_8_ != (FScriptContainerElement *)0x0) {
          pFVar1 = (FScriptContainerElement *)(local_350._0_8_ + -8);
          LOCK();
          iVar23 = *(int *)pFVar1;
          *(int *)pFVar1 = *(int *)pFVar1 + -1;
          UNLOCK();
          if (iVar23 == 1) {
            FMemory::Free(pFVar1);
          }
        }
        DestructItems<FAnsiString,int>((FAnsiString *)local_370.Range,local_370.Priority);
        if (local_370.Range != (FIoHttpRange)0x0) {
          FMemory::Free((void *)local_370.Range);
        }
        this = local_3f0;
        if (local_148 != (code *)0x0) {
          ppcVar26 = local_138;
          ppcVar22 = local_120;
LAB_1445ccbcb:
          if (ppcVar22 != (code **)0x0) {
            ppcVar26 = ppcVar22;
          }
          (**(code **)(*ppcVar26 + 0x10))();
          this = local_3f0;
        }
      }
LAB_1445ccbdd:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_388.SharedContainer.SharedReferenceCount.ReferenceController);
      if (bVar10) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      uVar36 = (ulonglong)local_3c8 & 0xffffffff;
      puVar37 = puVar37 + 3;
    } while( true );
  }
LAB_1445cbe77:
  CompleteInstallRequest(this,pFVar35);
  return;
}

// ExecutePurgeRequest @ 1445ccc50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandContentInstaller::ExecutePurgeRequest
          (FOnDemandContentInstaller *this,FRequest *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  FOnDemandIoStore *pFVar3;
  IOnDemandInstallCache *pIVar4;
  code *pcVar5;
  longlong *plVar6;
  bool bVar7;
  FScriptContainerElement *pFVar8;
  TOptional<UE::UnifiedError::FError> *pTVar9;
  ulonglong uVar10;
  undefined1 *puVar11;
  undefined8 local_38;
  longlong *local_30;
  char local_28;
  
  uVar10 = (ulonglong)(param_1->Variant).TypeIndex;
  if ((5 < uVar10) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((*(char *)((longlong)
                 &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::IoStore::FOnDemandContentInstaller::FRequest::FPurge,FEmptyVariantState,UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,UE::IoStore::FOnDemandContentInstaller::FRequest::FPurge,UE::IoStore::FOnDemandContentInstaller::FRequest::FDefrag,UE::IoStore::FOnDemandContentInstaller::FRequest::FVerify,UE::IoStore::FOnDemandContentInstaller::FRequest::FFlushLastAccess>::IsSame(unsigned___int64)'
                  ::__l2::bIsSameType + uVar10) == '\0') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Request.IsPurge()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandContentInstaller.cpp"
                         ,0x416,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((this->RunningRequests).ArrayNum == 1) {
    pFVar8 = (this->RunningRequests).AllocatorInstance.Data;
    pFVar1 = pFVar8 + 8;
    for (; pFVar8 != pFVar1; pFVar8 = pFVar8 + 8) {
      if (*(FRequest **)pFVar8 == param_1) goto LAB_1445ccd16;
    }
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("RunningRequests.Num() == 1 && RunningRequests.Contains(&Request)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandContentInstaller.cpp"
                     ,0x417,L"");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_1445ccd16:
  if (((param_1->Variant).TypeIndex != '\x02') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar2 = *(uint *)&param_1->Variant;
  puVar11 = &(param_1->Variant).field_0x8;
  if ((param_1->Variant).field_0x10 == '\0') {
    puVar11 = (undefined1 *)0x0;
  }
  if (4 < (byte)LogIoStoreOnDemand._0_1_) {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
  }
  if (param_1->bCancelled == false) {
    pFVar3 = this->IoStore;
    if (((pFVar3->InstallCache).Object == (IOnDemandInstallCache *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pIVar4 = (pFVar3->InstallCache).Object;
    pTVar9 = (TOptional<UE::UnifiedError::FError> *)
             (**(code **)((longlong)*pIVar4 + 0x88))(pIVar4,&local_38,(uVar2 & 2) != 0,puVar11);
    TOptional<UE::UnifiedError::FError>::operator=(&(param_1->Result).Error,pTVar9);
    plVar6 = local_30;
    if ((local_28 != '\0') && (local_38 = 0, local_30 != (longlong *)0x0)) {
      local_30 = (longlong *)0x0;
      (**(code **)(*plVar6 + 0x10))();
      if (local_30 != (longlong *)0x0) {
        (**(code **)(*local_30 + 0x10))();
      }
    }
  }
  CompletePurgeRequest(this,param_1);
  return;
}

// ExecuteRequest @ 1445cce60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandContentInstaller::ExecuteRequest
          (FOnDemandContentInstaller *this,FRequest *param_1)

{
  FOnDemandContentInstaller *local_18;
  FRequest *local_10;
  
  local_18 = this;
  local_10 = param_1;
  (*(code *)(&
            PTR_VisitApplyEncoded<0,0,_UE::IoStore::FOnDemandContentInstaller::ExecuteRequest_::__l2::FVisitor_&,TVariant<FEmptyVariantState,UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,UE::IoStore::FOnDemandContentInstaller::FRequest::FPurge,UE::IoStore::FOnDemandContentInstaller::FRequest::FDefrag,UE::IoStore::FOnDemandContentInstaller::FRequest::FVerify,UE::IoStore::FOnDemandContentInstaller::FRequest::FFlushLastAccess>_&>_150d7f340
            )[(param_1->Variant).TypeIndex])(&local_18,&param_1->Variant);
  return;
}

// ExecuteVerifyRequest @ 1445cd290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandContentInstaller::ExecuteVerifyRequest
          (FOnDemandContentInstaller *this,FRequest *param_1)

{
  FScriptContainerElement *pFVar1;
  FOnDemandIoStore *pFVar2;
  IOnDemandInstallCache *pIVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  TOptional<UE::UnifiedError::FError> *pTVar8;
  ulonglong uVar9;
  undefined8 local_28;
  longlong *local_20;
  char local_18;
  
  uVar9 = (ulonglong)(param_1->Variant).TypeIndex;
  if ((5 < uVar9) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((*(char *)((longlong)
                 &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::IoStore::FOnDemandContentInstaller::FRequest::FVerify,FEmptyVariantState,UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,UE::IoStore::FOnDemandContentInstaller::FRequest::FPurge,UE::IoStore::FOnDemandContentInstaller::FRequest::FDefrag,UE::IoStore::FOnDemandContentInstaller::FRequest::FVerify,UE::IoStore::FOnDemandContentInstaller::FRequest::FFlushLastAccess>::IsSame(unsigned___int64)'
                  ::__l2::bIsSameType + uVar9) == '\0') &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Request.IsVerify()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandContentInstaller.cpp"
                         ,0x43d,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((this->RunningRequests).ArrayNum == 1) {
    pFVar7 = (this->RunningRequests).AllocatorInstance.Data;
    pFVar1 = pFVar7 + 8;
    for (; pFVar7 != pFVar1; pFVar7 = pFVar7 + 8) {
      if (*(FRequest **)pFVar7 == param_1) goto LAB_1445cd354;
    }
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("RunningRequests.Num() == 1 && RunningRequests.Contains(&Request)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandContentInstaller.cpp"
                     ,0x43e,L"");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_1445cd354:
  if (4 < (byte)LogIoStoreOnDemand._0_1_) {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
  }
  if (param_1->bCancelled == false) {
    pFVar2 = this->IoStore;
    if (((pFVar2->InstallCache).Object == (IOnDemandInstallCache *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pIVar3 = (pFVar2->InstallCache).Object;
    pTVar8 = (TOptional<UE::UnifiedError::FError> *)
             (**(code **)((longlong)*pIVar3 + 0x98))(pIVar3,&local_28);
    TOptional<UE::UnifiedError::FError>::operator=(&(param_1->Result).Error,pTVar8);
    plVar5 = local_20;
    if ((local_18 != '\0') && (local_28 = 0, local_20 != (longlong *)0x0)) {
      local_20 = (longlong *)0x0;
      (**(code **)(*plVar5 + 0x10))();
      if (local_20 != (longlong *)0x0) {
        (**(code **)(*local_20 + 0x10))();
      }
    }
  }
  CompleteVerifyRequest(this,param_1);
  return;
}

// NotifyInstallProgress @ 1445e2a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandContentInstaller::NotifyInstallProgress
          (FOnDemandContentInstaller *this,FRequest *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  FTSTicker *this_00;
  undefined8 uVar6;
  code **ppcVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined1 auStackY_e8 [32];
  LARGE_INTEGER local_b8;
  TVariant<FEmptyVariantState,UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,UE::IoStore::FOnDemandContentInstaller::FRequest::FPurge,UE::IoStore::FOnDemandContentInstaller::FRequest::FDefrag,UE::IoStore::FOnDemandContentInstaller::FRequest::FVerify,UE::IoStore::FOnDemandContentInstaller::FRequest::FFlushLastAccess>
  *local_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  TWeakPtr<FTSTicker::FElement,1> local_90;
  code *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  code *local_58 [2];
  code *local_48 [3];
  code **local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  uVar9 = (ulonglong)(param_1->Variant).TypeIndex;
  if ((5 < uVar9) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((*(char *)((longlong)
                 &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,FEmptyVariantState,UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,UE::IoStore::FOnDemandContentInstaller::FRequest::FPurge,UE::IoStore::FOnDemandContentInstaller::FRequest::FDefrag,UE::IoStore::FOnDemandContentInstaller::FRequest::FVerify,UE::IoStore::FOnDemandContentInstaller::FRequest::FFlushLastAccess>::IsSame(unsigned___int64)'
                  ::__l2::bIsSameType + uVar9) == '\0') &&
     (bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5765499935633966407>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandContentInstaller.cpp"
                         ,0x547,"Request.IsInstall()"), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((param_1->Variant).TypeIndex != '\x01') &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (*(longlong *)&(param_1->Variant).field_0x80 != 0) {
    QueryPerformanceCounter(&local_b8);
    if (((param_1->Variant).field_0x109 == '\0') &&
       (__real_3fd0000000000000 <=
        (double)(ulonglong)(local_b8.QuadPart - *(longlong *)&(param_1->Variant).field_0x100) *
        FGenericPlatformTime::SecondsPerCycle64)) {
      pcStack_a8 = *(code **)&(param_1->Variant).field_0xe0;
      uStack_a0 = *(undefined8 *)&(param_1->Variant).field_0xe8;
      *(LARGE_INTEGER *)&(param_1->Variant).field_0x100 = (LONGLONG)local_b8;
      local_68 = *(undefined8 *)&(param_1->Variant).field_0xf0;
      if (((param_1->Variant).field_0x40 & 1) == 0) {
        local_78 = pcStack_a8;
        uStack_70 = uStack_a0;
        Core::Private::Function::CheckCallable(*(void **)&(param_1->Variant).field_0x80);
        pcVar4 = *(code **)&(param_1->Variant).field_0x80;
        plVar3 = *(longlong **)&(param_1->Variant).field_0xa8;
        plVar8 = (longlong *)&(param_1->Variant).field_0x90;
        if (plVar3 != (longlong *)0x0) {
          plVar8 = plVar3;
        }
        uVar6 = (**(code **)(*plVar8 + 8))();
        (*pcVar4)(uVar6,&local_78);
      }
      else {
        LOCK();
        (param_1->Variant).field_0x109 = 1;
        UNLOCK();
        local_b0 = &param_1->Variant;
        this_00 = FTSTicker::GetCoreTicker();
        local_58[0] = (code *)0x0;
        local_30 = FMemory::Malloc(0x28,8);
        *local_30 = (code *)&Core::Private::Function::
                             TFunction_OwnedObject<`ExecuteOnGameThread<`UE::IoStore::FOnDemandContentInstaller::NotifyInstallProgress'::`11'::<lambda_1>_>'::`2'::<lambda_1>,1,1>
                             ::_vftable_;
        local_30[1] = (code *)local_b0;
        local_30[2] = pcStack_a8;
        *(undefined4 *)(local_30 + 3) = (undefined4)uStack_a0;
        *(undefined4 *)((longlong)local_30 + 0x1c) = uStack_a0._4_4_;
        *(int *)(local_30 + 4) = (int)local_68;
        *(int *)((longlong)local_30 + 0x24) = (int)((ulonglong)local_68 >> 0x20);
        if (local_30 + 1 != (code **)0x0) {
          local_58[0] = Core::Private::Function::
                        TFunctionRefCaller<`ExecuteOnGameThread<`UE::IoStore::FOnDemandContentInstaller::NotifyInstallProgress'::__l11::<lambda_1>_>'::__l2::<lambda_1>,bool,float>
                        ::Call;
        }
        FTSTicker::AddTicker
                  (this_00,&local_90,
                   L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandContentInstaller.cpp(1374)"
                   ,0.0,(TUniqueFunction<bool___cdecl(float)> *)local_58);
        if (local_90.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &(local_90.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)((local_90.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                      (local_90.WeakReferenceCount.ReferenceController,1);
          }
        }
        if (local_58[0] != (code *)0x0) {
          ppcVar7 = local_58 + 2;
          if (local_30 != (code **)0x0) {
            ppcVar7 = local_30;
          }
          (**(code **)(*ppcVar7 + 0x10))();
        }
      }
    }
  }
  return;
}

// OnProcessDownloadedChunkNotifyRequest @ 1445e5bf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandContentInstaller::OnProcessDownloadedChunkNotifyRequest
          (FOnDemandContentInstaller *this,FChunkHttpRequestHandle *param_1,
          TValueOrError<void,UE::UnifiedError::FError> *param_2,bool param_3)

{
  undefined1 *puVar1;
  TValueOrError<void,UE::UnifiedError::FError> *pTVar2;
  uint uVar3;
  undefined4 uVar4;
  FRequest *pFVar5;
  longlong lVar6;
  IErrorDetails *pIVar7;
  code *pcVar8;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar9;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  FIoChunkId *pFVar14;
  FChunkHashMismatchErrorContext *pFVar15;
  TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_> TVar16;
  FText *this_00;
  FError *this_01;
  FError *this_02;
  longlong lVar17;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar18;
  IErrorDetails *pIVar19;
  bool bVar20;
  uint local_res10 [2];
  FError *local_res18;
  char local_res20;
  FError local_178;
  int local_168 [2];
  FOnDemandChunkEntry *local_160;
  FDynamicErrorDetails *local_158;
  FIoChunkId *local_150;
  undefined1 local_148 [4];
  undefined1 local_144 [4];
  undefined1 local_140 [4];
  undefined1 local_13c [4];
  FInstall *local_138;
  undefined8 local_130 [2];
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FText local_e0;
  FString local_d0;
  FString local_c0;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a4;
  undefined8 uStack_9c;
  undefined4 uStack_94;
  undefined8 local_78 [7];
  
  bVar20 = -1 < CpuChannel->Enabled;
  local_res18 = (FError *)param_2;
  local_res20 = param_3;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1190,
               "FOnDemandContentInstaller::OnProcessDownloadedChunkNotifyRequest",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandContentInstaller.cpp"
               ,0x4a6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1190);
  }
  pFVar5 = param_1->OwnerRequest;
  if (((pFVar5->Variant).TypeIndex != '\x01') &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index == TypeIndex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                          ,0x97,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar3 = param_1->ContainerIndex;
  lVar17 = (longlong)(int)uVar3;
  uVar12 = 0;
  if ((int)uVar3 < *(int *)&(pFVar5->Variant).field_0xc8) {
    uVar12 = ~uVar3 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar6 = *(longlong *)&(pFVar5->Variant).field_0xc0;
  if ((*(longlong *)(lVar6 + lVar17 * 0x28) == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_160 = TArrayView<UE::IoStore::FOnDemandChunkEntry,int>::operator[]
                        ((TArrayView<UE::IoStore::FOnDemandChunkEntry,int> *)
                         (*(longlong *)(lVar6 + lVar17 * 0x28) + 0xd8),param_1->EntryIndex);
  if ((*(longlong *)(lVar6 + lVar17 * 0x28) == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar14 = TArrayView<FIoChunkId,int>::operator[]
                      ((TArrayView<FIoChunkId,int> *)(*(longlong *)(lVar6 + lVar17 * 0x28) + 200),
                       param_1->EntryIndex);
  local_res10[0] = local_res10[0] & 0xffffff00;
  this_02 = local_res18;
  local_150 = pFVar14;
  if ((pFVar5->bCancelled == false) && ((pFVar5->Result).Error.bIsSet == false)) {
    if ((local_res20 == '\0') ||
       (local_138 = (FInstall *)&pFVar5->Variant,
       bVar11 = `UE::IoStore::FOnDemandContentInstaller::OnProcessDownloadedChunkNotifyRequest'::
                __l6::<lambda_1>::operator()(&local_138), bVar11)) {
      this_02 = local_res18;
      this_01 = local_res18;
      if ((char)local_res18[1].ErrorCode == '\0') {
        this_01 = (FError *)0x0;
      }
      if (this_01 != (FError *)0x0) {
        local_res10[0] = CONCAT31(local_res10[0]._1_3_,1);
        pFVar15 = UnifiedError::FError::
                  GetErrorContext<UE::UnifiedError::IoStoreOnDemand::FChunkHashMismatchErrorContext>
                            (this_01);
        if (pFVar15 == (FChunkHashMismatchErrorContext *)0x0) {
          TValueOrError<void,UE::UnifiedError::FError>::operator=
                    (&pFVar5->Result,(TValueOrError<void,UE::UnifiedError::FError> *)this_02);
        }
        else {
          uStack_a8 = *(undefined4 *)(pFVar14->Id + 8);
          local_b0 = *(undefined8 *)pFVar14->Id;
          lVar17 = *(longlong *)(pFVar15->ActualHash).Hash;
          lVar6 = *(longlong *)((pFVar15->ActualHash).Hash + 8);
          uVar4 = *(undefined4 *)((pFVar15->ActualHash).Hash + 0x10);
          uStack_94 = *(undefined4 *)((pFVar15->ExpectedHash).Hash + 0x10);
          uStack_a4 = *(undefined8 *)(pFVar15->ExpectedHash).Hash;
          uStack_9c = *(undefined8 *)((pFVar15->ExpectedHash).Hash + 8);
          TVar16 = UnifiedError::IoStoreOnDemand::ChunkHashError::GetStaticErrorDetails();
          pIVar19 = (IErrorDetails *)(TVar16.Reference)->_padding_;
          if (pIVar19 == (IErrorDetails *)0x0) {
            iVar13 = UnifiedError::IoStoreOnDemand::ChunkHashError::GetErrorCodeId();
            local_178.ModuleId = UnifiedError::IoStoreOnDemand::GetStaticModuleId();
            local_178.ErrorDetails.Reference = (IErrorDetails *)0x0;
            local_178.ErrorCode = iVar13;
          }
          else {
            (**(code **)((longlong)*pIVar19 + 8))(pIVar19,local_168);
            iVar13 = UnifiedError::IoStoreOnDemand::ChunkHashError::GetErrorCodeId();
            local_178.ModuleId = UnifiedError::IoStoreOnDemand::GetStaticModuleId();
            local_178.ErrorCode = iVar13;
            local_178.ErrorDetails.Reference = pIVar19;
            (**(code **)((longlong)*pIVar19 + 8))(pIVar19,local_148);
            (**(code **)((longlong)*pIVar19 + 0x10))(pIVar19);
          }
          local_158 = ::operator_new(0x58);
          if (local_158 == (FDynamicErrorDetails *)0x0) {
            local_158 = (FDynamicErrorDetails *)0x0;
          }
          else {
            local_130[0] = 0;
            UnifiedError::FDynamicErrorDetails::FDynamicErrorDetails
                      (local_158,(IErrorDetails *)local_130);
            *(undefined1 *)((longlong)&local_158[2]._padding_ + 4) = 5;
            local_158->_padding_ =
                 (longlong)
                 &UnifiedError::
                  TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FChunkHashMismatchErrorContext>::
                  _vftable__for__UE__UnifiedError__IErrorDetails__;
            *(undefined4 *)&local_158[1]._padding_ = (undefined4)local_b0;
            *(undefined4 *)((longlong)&local_158[1]._padding_ + 4) = local_b0._4_4_;
            *(undefined4 *)&local_158[1]._padding_ = uStack_a8;
            *(undefined4 *)((longlong)&local_158[1]._padding_ + 4) = (undefined4)uStack_a4;
            local_158->_padding_ =
                 (longlong)
                 &UnifiedError::
                  TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FChunkHashMismatchErrorContext>::
                  _vftable__for__FRefCountBase__;
            *(undefined4 *)&local_158[1]._padding_ = uStack_a4._4_4_;
            *(undefined4 *)((longlong)&local_158[1]._padding_ + 4) = (undefined4)uStack_9c;
            *(undefined4 *)&local_158[1].InnerErrorDetails.Reference = uStack_9c._4_4_;
            *(undefined4 *)((longlong)&local_158[1].InnerErrorDetails.Reference + 4) = uStack_94;
            local_158[2]._padding_ = lVar17;
            local_158[2]._padding_ = lVar6;
            *(undefined4 *)&local_158[2]._padding_ = uVar4;
            (**(code **)(local_158->_padding_ + 8))(local_158,local_144);
          }
          UnifiedError::FError::PushErrorDetails(&local_178,(IErrorDetails *)&local_158);
          TVar9.Reference = local_178.ErrorDetails.Reference;
          iVar13 = local_178.ErrorCode;
          local_168[0] = local_178.ModuleId;
          local_178.ErrorCode = 0;
          local_178.ModuleId = 0;
          TVar18.Reference = (IErrorDetails *)0x0;
          if ((local_178.ErrorDetails.Reference != (IErrorDetails *)0x0) &&
             ((**(code **)((longlong)*local_178.ErrorDetails.Reference + 8))
                        (local_178.ErrorDetails.Reference,local_140),
             TVar10.Reference = local_178.ErrorDetails.Reference, TVar18.Reference = TVar9.Reference
             , local_178.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
            local_178.ErrorDetails.Reference = (IErrorDetails *)0x0;
            (**(code **)((longlong)*TVar10.Reference + 0x10))();
          }
          pTVar2 = &pFVar5->Result;
          pIVar19 = TVar18.Reference;
          if ((TValueOrError<void,UE::UnifiedError::FError> *)local_78 != pTVar2) {
            if ((pFVar5->Result).Error.bIsSet != false) {
              (pTVar2->Error).TypedValue.ErrorCode = 0;
              (pTVar2->Error).TypedValue.ModuleId = 0;
              pIVar7 = (pFVar5->Result).Error.TypedValue.ErrorDetails.Reference;
              if (pIVar7 != (IErrorDetails *)0x0) {
                (pFVar5->Result).Error.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
                (**(code **)((longlong)*pIVar7 + 0x10))(pIVar7);
              }
              pIVar7 = (pFVar5->Result).Error.TypedValue.ErrorDetails.Reference;
              if (pIVar7 != (IErrorDetails *)0x0) {
                (**(code **)((longlong)*pIVar7 + 0x10))(pIVar7);
              }
            }
            (pTVar2->Error).TypedValue.ErrorCode = iVar13;
            (pFVar5->Result).Error.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
            (pFVar5->Result).Error.TypedValue.ModuleId = local_168[0];
            if (TVar18.Reference != (IErrorDetails *)0x0) {
              (pFVar5->Result).Error.TypedValue.ErrorDetails.Reference = TVar18.Reference;
              (**(code **)((longlong)*TVar18.Reference + 8))(TVar18.Reference,local_13c);
              pIVar19 = (IErrorDetails *)0x0;
              (**(code **)((longlong)*TVar18.Reference + 0x10))(TVar18.Reference);
            }
            (pFVar5->Result).Error.bIsSet = true;
          }
          if (pIVar19 != (IErrorDetails *)0x0) {
            (**(code **)((longlong)*pIVar19 + 0x10))(pIVar19);
          }
          TVar9.Reference = local_178.ErrorDetails.Reference;
          local_178.ErrorCode = 0;
          local_178.ModuleId = 0;
          this_02 = local_res18;
          pFVar14 = local_150;
          if (local_178.ErrorDetails.Reference != (IErrorDetails *)0x0) {
            local_178.ErrorDetails.Reference = (IErrorDetails *)0x0;
            (**(code **)((longlong)*TVar9.Reference + 0x10))();
            this_02 = local_res18;
            pFVar14 = local_150;
            if (local_178.ErrorDetails.Reference != (IErrorDetails *)0x0) {
              (**(code **)((longlong)*local_178.ErrorDetails.Reference + 0x10))();
              this_02 = local_res18;
              pFVar14 = local_150;
            }
          }
        }
      }
      goto LAB_1445e6060;
    }
    local_res10[0] = CONCAT31(local_res10[0]._1_3_,1);
    TValueOrError<void,UE::UnifiedError::FError>::operator=
              (&pFVar5->Result,(TValueOrError<void,UE::UnifiedError::FError> *)local_res18);
LAB_1445e606d:
    if ((byte)LogIoStoreOnDemand._0_1_ < 6) goto LAB_1445e6448;
    ::LexToString(&local_110,pFVar14);
    IoStore::LexToString(&local_120,(FOnDemandContentHandle *)&(pFVar5->Variant).field_0x30);
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    local_c0.Data.AllocatorInstance.Data = local_110.Data.AllocatorInstance.Data;
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
      local_c0.Data.AllocatorInstance.Data = local_110.Data.AllocatorInstance.Data;
    }
  }
  else {
LAB_1445e6060:
    if (local_res20 != '\0') goto LAB_1445e606d;
    if ((char)this_02[1].ErrorCode != '\0') {
      if (2 < (byte)LogIoStoreOnDemand._0_1_) {
        this_00 = UnifiedError::FError::GetErrorMessage(this_02,&local_e0,true);
        FText::ToString(this_00);
        ::LexToString(&local_f0,pFVar14);
        IoStore::LexToString(&local_100,(FOnDemandContentHandle *)&(pFVar5->Variant).field_0x30);
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
        if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100.Data.AllocatorInstance.Data);
        }
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
        if (local_e0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
        }
      }
      goto LAB_1445e6448;
    }
    puVar1 = &(pFVar5->Variant).field_0xf0;
    *(ulonglong *)puVar1 =
         *(longlong *)puVar1 + ((ulonglong)(local_160->EncodedSize + 0xf) & 0xfffffff0);
    if ((byte)LogIoStoreOnDemand._0_1_ < 6) goto LAB_1445e6448;
    ::LexToString(&local_c0,pFVar14);
    IoStore::LexToString(&local_d0,(FOnDemandContentHandle *)&(pFVar5->Variant).field_0x30);
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
  }
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
LAB_1445e6448:
  puVar1 = &(pFVar5->Variant).field_0xf8;
  *(longlong *)puVar1 = *(longlong *)puVar1 + 1;
  if (*(ulonglong *)&(pFVar5->Variant).field_0xf8 <
      (ulonglong)(longlong)*(int *)&(pFVar5->Variant).field_0xd8) {
    NotifyInstallProgress(this,pFVar5);
    if ((char)local_res10[0] != '\0') {
      local_res10[0] = 0;
      TryCancelHttpRequestsForInstallRequest(this,(FInstall *)&pFVar5->Variant,(int *)local_res10);
      if ((2 < (byte)LogIoStoreOnDemand._0_1_) && (local_res10[0] == 0)) {
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
      }
    }
  }
  else {
    CompleteInstallRequest(this,pFVar5);
  }
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// PinCachedChunks @ 1445e9830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandContentInstaller::PinCachedChunks
          (FOnDemandContentInstaller *this,FInstall *param_1,
          TFunctionRef<void___cdecl(int,int,bool)> *param_2)

{
  ForAnyElementType *pFVar1;
  uint *puVar2;
  ForElementType<int> FVar3;
  atomic<unsigned_char> aVar4;
  int iVar5;
  FOnDemandIoStore *pFVar6;
  IOnDemandInstallCache *pIVar7;
  FOnDemandInternalContentHandle *pFVar8;
  code *pcVar9;
  FInstall *pFVar10;
  FScriptContainerElement *pFVar11;
  bool bVar12;
  char cVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  uint *puVar17;
  FScriptContainerElement *pFVar18;
  uint *puVar19;
  ulonglong uVar20;
  int iVar21;
  ForElementType<int> FVar22;
  FScriptContainerElement *pFVar23;
  undefined1 auStack_218 [32];
  uint *local_1f8;
  ForElementType<int> local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  undefined1 local_1c8;
  undefined1 local_1c7 [7];
  char local_1c0 [8];
  undefined1 local_1b8;
  undefined1 local_1b7 [3];
  uint local_1b4 [2];
  int local_1ac;
  FScriptContainerElement *local_1a8;
  FScriptContainerElement *local_1a0;
  uint local_198 [2];
  int local_190 [2];
  uint local_188;
  FOnDemandContentInstaller *local_180;
  atomic<unsigned_char> *local_178;
  TFunctionRef<void___cdecl(int,int,bool)> *local_170;
  FInstall *local_168;
  FScriptContainerElement *local_160;
  ForElementType<int> local_158;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_218;
  pFVar23 = (param_1->ResolvedChunks).AllocatorInstance.Data;
  iVar21 = 0;
  local_188 = (param_1->ResolvedChunks).ArrayNum;
  uVar20 = (ulonglong)(int)local_188;
  pFVar18 = pFVar23 + 0x18;
  local_1ac = 0;
  local_160 = pFVar23 + uVar20 * 0x28;
  local_180 = this;
  local_170 = param_2;
  local_168 = param_1;
  do {
    pFVar11 = local_160;
    local_1a8 = pFVar23;
    local_1a0 = pFVar18;
    if ((local_168->ResolvedChunks).ArrayNum != (int)uVar20) {
      local_1c8 = 0;
      `TCheckedPointerIterator<UE::IoStore::Private::FResolvedContainerChunks,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_1c8);
    }
    if (pFVar23 == pFVar11) {
      return;
    }
    puVar19 = *(uint **)(pFVar18 + -8);
    iVar15 = *(int *)pFVar18;
    local_158.SecondaryData = (ForElementType<int>)0x0;
    local_50 = 0;
    local_4c = 0x40;
    puVar2 = puVar19 + iVar15;
    while( true ) {
      if (*(int *)pFVar18 != iVar15) {
        local_1c7[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_1c7);
      }
      if (puVar19 == puVar2) break;
      local_1b4[0] = *puVar19;
      if ((*(longlong *)pFVar23 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      puVar17 = (uint *)(longlong)(int)local_1b4[0];
      lVar16 = *(longlong *)pFVar23;
      iVar5 = *(int *)(lVar16 + 0xe0);
      uVar14 = 0;
      if ((int)local_1b4[0] < iVar5) {
        uVar14 = ~local_1b4[0] >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (local_1f8 = puVar17, local_1f0 = (ForElementType<int>)(longlong)iVar5,
         bVar12 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar16 = *(longlong *)(lVar16 + 0xd8);
      pFVar6 = local_180->IoStore;
      if (((pFVar6->InstallCache).Object == (IOnDemandInstallCache *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pIVar7 = (pFVar6->InstallCache).Object;
      cVar13 = (**(code **)((longlong)*pIVar7 + 0x68))(pIVar7,lVar16 + (longlong)puVar17 * 0x28);
      if (cVar13 != '\0') {
        FVar22 = (ForElementType<int>)&local_158;
        if (local_158.SecondaryData != (ForElementType<int>)0x0) {
          FVar22 = local_158.SecondaryData;
        }
        if ((ulonglong)FVar22 <= local_1b4) {
          FVar22 = (ForElementType<int>)&local_158;
          if (local_158.SecondaryData != (ForElementType<int>)0x0) {
            FVar22 = local_158.SecondaryData;
          }
          if (local_1b4 < (uint *)((longlong)FVar22 + (longlong)(int)local_4c * 4)) {
            local_1e0 = (longlong)(int)local_50;
            local_1d8 = 4;
            local_1f8 = local_1b4;
            local_1f0 = (ForElementType<int>)&local_158;
            if (local_158.SecondaryData != (ForElementType<int>)0x0) {
              local_1f0 = local_158.SecondaryData;
            }
            local_1e8 = (longlong)(int)local_4c;
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar12) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
        }
        if (local_50 == local_4c) {
          local_50 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                               (0x404,&local_158,(int *)&local_4c);
        }
        lVar16 = (longlong)(int)local_50;
        FVar22 = (ForElementType<int>)&local_158;
        if (local_158.SecondaryData != (ForElementType<int>)0x0) {
          FVar22 = local_158.SecondaryData;
        }
        local_50 = local_50 + 1;
        *(uint *)((longlong)FVar22 + lVar16 * 4) = local_1b4[0];
      }
      local_198[0] = local_1b4[0];
      local_1c0[0] = cVar13;
      local_190[0] = iVar21;
      (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,local_190,local_198,local_1c0);
      puVar19 = puVar19 + 1;
      pFVar18 = local_1a0;
      pFVar23 = local_1a8;
    }
    if (local_50 != 0) {
      local_178 = &(local_180->IoStore->ContainerMutex).State;
      LOCK();
      bVar12 = ((FMutex *)local_178)->State == (atomic<unsigned_char>)0x0;
      if (bVar12) {
        ((FMutex *)local_178)->State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar12) {
        FMutex::LockSlow((FMutex *)local_178);
      }
      if ((*(longlong *)pFVar23 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar10 = local_168;
      lVar16 = *(longlong *)pFVar23;
      if (((local_168->Args).ContentHandle.Handle.Object == (FOnDemandInternalContentHandle *)0x0)
         && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x44d,L""), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar8 = (pFVar10->Args).ContentHandle.Handle.Object;
      pFVar1 = (ForAnyElementType *)(lVar16 + 0xe8);
      iVar21 = *(int *)(lVar16 + 0xf0);
      pFVar23 = pFVar1->Data;
      pFVar18 = pFVar23 + (longlong)iVar21 * 0x28;
      while( true ) {
        if (*(int *)(lVar16 + 0xf0) != iVar21) {
          local_1b8 = 0;
          `TCheckedPointerIterator<UE::IoStore::FOnDemandChunkEntryReferences,int,0>::operator!='::
          __l2::<lambda_1>::operator()(&local_1b8);
        }
        if (pFVar23 == pFVar18) break;
        if (*(FOnDemandInternalContentHandle **)pFVar23 == pFVar8) goto LAB_1445e9c3c;
        pFVar23 = pFVar23 + 0x28;
      }
      iVar21 = *(int *)(lVar16 + 0xf0);
      if (iVar21 == *(int *)(lVar16 + 0xf4)) {
        iVar21 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x828,pFVar1,(int *)(lVar16 + 0xf4));
      }
      *(int *)(lVar16 + 0xf0) = iVar21 + 1;
      pFVar23 = pFVar1->Data + (longlong)iVar21 * 0x28;
      DefaultConstructItems<UE::IoStore::FOnDemandChunkEntryReferences,int>(pFVar23,1);
      *(FOnDemandInternalContentHandle **)pFVar23 = pFVar8;
      TBitArray<FDefaultBitArrayAllocator>::SetNum<bool>
                ((TBitArray<FDefaultBitArrayAllocator> *)(pFVar23 + 8),*(int *)(lVar16 + 0xe0),false
                );
LAB_1445e9c3c:
      uVar14 = local_50;
      uVar20 = (ulonglong)(int)local_50;
      FVar22 = (ForElementType<int>)&local_158;
      if (local_158.SecondaryData != (ForElementType<int>)0x0) {
        FVar22 = local_158.SecondaryData;
      }
      FVar3 = (ForElementType<int>)((longlong)FVar22 + uVar20 * 4);
      while( true ) {
        if ((uint)uVar20 != uVar14) {
          local_1b7[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_1b7);
        }
        if (FVar22 == FVar3) break;
        iVar21 = *(int *)FVar22;
        if (((iVar21 < 0) || (*(int *)(pFVar23 + 0x20) <= iVar21)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar18 = pFVar23 + 8;
        if (*(FScriptContainerElement **)(pFVar23 + 0x18) != (FScriptContainerElement *)0x0) {
          pFVar18 = *(FScriptContainerElement **)(pFVar23 + 0x18);
        }
        iVar15 = iVar21;
        if (iVar21 < 0) {
          iVar15 = iVar21 + 0x1f;
        }
        *(uint *)(pFVar18 + (longlong)(iVar15 >> 5) * 4) =
             *(uint *)(pFVar18 + (longlong)(iVar15 >> 5) * 4) | 1 << ((byte)iVar21 & 0x1f);
        uVar20 = (ulonglong)local_50;
        FVar22 = (ForElementType<int>)((longlong)FVar22 + 4);
      }
      LOCK();
      aVar4 = *local_178;
      *local_178 = (atomic<unsigned_char>)((char)*local_178 + -1);
      UNLOCK();
      pFVar18 = local_1a0;
      pFVar23 = local_1a8;
      param_2 = local_170;
      iVar21 = local_1ac;
      if (((byte)aVar4 & 2) != 0) {
        FMutex::WakeWaitingThread((FMutex *)local_178);
        pFVar18 = local_1a0;
        pFVar23 = local_1a8;
        param_2 = local_170;
        iVar21 = local_1ac;
      }
    }
    iVar21 = iVar21 + 1;
    local_1ac = iVar21;
    if (local_158.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_158.SecondaryData);
    }
    pFVar23 = pFVar23 + 0x28;
    uVar20 = (ulonglong)local_188;
    pFVar18 = pFVar18 + 0x28;
  } while( true );
}

// ProcessDownloadedChunk @ 1445eb080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandContentInstaller::ProcessDownloadedChunk
          (FOnDemandContentInstaller *this,FIoHash *param_1,uint param_2,EIoErrorCode param_3,
          uint param_4,FIoBuffer *param_5)

{
  BufCore *pBVar1;
  FOnDemandIoStore *pFVar2;
  IOnDemandInstallCache *pIVar3;
  IErrorDetails *pIVar4;
  IErrorDetails IVar5;
  longlong lVar6;
  FChunkHttpRequestHandle *pFVar7;
  FChunkHttpRequestHandle *pFVar8;
  code *pcVar9;
  FOnDemandContentInstaller *pFVar10;
  uint uVar11;
  longlong *plVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  FBlake3Hash *pFVar16;
  FError *pFVar17;
  TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_> TVar18;
  longlong lVar19;
  FText *this_00;
  FString *pFVar20;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar21;
  TStringBuilderBase<wchar_t> *this_01;
  undefined1 *puVar22;
  char cVar23;
  wchar_t *pwVar24;
  bool bVar25;
  undefined1 auStack_468 [32];
  FScriptContainerElement *local_448;
  char local_438;
  TValueOrError<void,UE::UnifiedError::FError> local_430;
  undefined8 local_418;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TStack_410;
  FError local_408;
  EIoErrorCode local_3f8;
  uint local_3f4;
  TMultiMap<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest,1>_>
  *local_3f0;
  FIoHash *pFStack_3e8;
  int local_3e0;
  int iStack_3dc;
  FError local_3d8;
  undefined1 local_3c8;
  FDynamicErrorDetails *local_3c0;
  FDynamicErrorDetails *local_3b8;
  FOnDemandContentInstaller *local_3b0;
  FError local_3a8;
  char local_398;
  undefined8 local_390;
  longlong *local_388;
  char local_380;
  TBaseKeyIterator<0> local_378;
  undefined1 local_360 [4];
  undefined1 local_35c [4];
  undefined1 local_358 [4];
  undefined1 local_354 [4];
  undefined1 local_350 [4];
  undefined1 local_34c [4];
  undefined8 local_348;
  undefined8 local_340;
  FIoHash *local_338;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  FIoHash *local_328;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  FIoHash *local_318;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  TArrayView<unsigned_char_const_,int> local_308 [2];
  TMemoryView<void_const_> local_2e8;
  TArrayView<unsigned_char_const_,int> local_2d8;
  TArrayView<unsigned_char_const_,int> local_2c8;
  FText local_2b8;
  longlong local_2a8;
  uchar auStack_2a0 [4];
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined8 uStack_294;
  undefined4 uStack_28c;
  longlong local_274;
  longlong lStack_26c;
  int local_264;
  TStringBuilderBase<wchar_t> local_258;
  wchar_t local_238 [64];
  TStringBuilderBase<wchar_t> local_1b8;
  wchar_t local_198 [64];
  TStringBuilderBase<wchar_t> local_118;
  wchar_t local_f8 [64];
  FBlake3Hash local_78;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_468;
  bVar25 = CpuChannel->Enabled < 0;
  local_3f8 = param_3;
  local_3f4 = param_2;
  local_3b0 = this;
  if (bVar25) {
    local_438 = '\0';
  }
  else {
    local_438 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1116,"FOnDemandContentInstaller::ProcessDownloadedChunk",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandContentInstaller.cpp"
               ,0x45c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1116);
  }
  local_430.Error.bIsSet = false;
  if (param_4 - 200 < 100) {
    pBVar1 = (param_5->CorePtr).Reference;
    TStack_410.Reference =
         (IErrorDetails *)(ulonglong)CONCAT14(pBVar1->DataSizeHigh,pBVar1->DataSizeLow);
    if (TStack_410.Reference == (IErrorDetails *)0x0) goto LAB_1445eb4b7;
    local_418 = pBVar1->DataPtr;
    local_2e8.Data = local_418;
    local_2e8.Size = (ulong64)TStack_410.Reference;
    pFVar16 = FBlake3::HashBuffer(&local_78,&local_2e8);
    local_274 = *(longlong *)pFVar16->Hash;
    lStack_26c = *(longlong *)(pFVar16->Hash + 8);
    iVar15 = *(int *)(pFVar16->Hash + 0x10);
    local_264 = iVar15;
    if (((*(longlong *)param_1->Hash == local_274) &&
        (*(longlong *)(param_1->Hash + 8) == lStack_26c)) &&
       (*(int *)(param_1->Hash + 0x10) == iVar15)) {
      pFVar2 = this->IoStore;
      if (((pFVar2->InstallCache).Object == (IOnDemandInstallCache *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pIVar3 = (pFVar2->InstallCache).Object;
      pFVar17 = (FError *)(**(code **)((longlong)*pIVar3 + 0x78))(pIVar3,&local_390,param_5,param_1)
      ;
      TVar21.Reference = local_430.Error.TypedValue.ErrorDetails.Reference;
      if (pFVar17 != (FError *)&local_430) {
        if ((char)pFVar17[1].ErrorCode == '\0') {
          if (local_430.Error.bIsSet != false) {
            local_430.Error.TypedValue.ErrorCode = 0;
            local_430.Error.TypedValue.ModuleId = 0;
            if (local_430.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
              local_430.Error.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
              (**(code **)((longlong)*TVar21.Reference + 0x10))();
              if (local_430.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
                (**(code **)((longlong)*local_430.Error.TypedValue.ErrorDetails.Reference + 0x10))()
                ;
              }
            }
            local_430.Error.bIsSet = false;
          }
        }
        else {
          if ((local_430.Error.bIsSet != false) &&
             (local_430.Error.TypedValue.ErrorCode = 0, local_430.Error.TypedValue.ModuleId = 0,
             local_430.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
            local_430.Error.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
            (**(code **)((longlong)*TVar21.Reference + 0x10))();
            if (local_430.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
              (**(code **)((longlong)*local_430.Error.TypedValue.ErrorDetails.Reference + 0x10))();
            }
          }
          UnifiedError::FError::FError((FError *)&local_430,pFVar17);
          local_430.Error.bIsSet = true;
        }
      }
      plVar12 = local_388;
      if ((local_380 != '\0') && (local_390 = 0, local_388 != (longlong *)0x0)) {
        local_388 = (longlong *)0x0;
        (**(code **)(*plVar12 + 0x10))();
        if (local_388 != (longlong *)0x0) {
          (**(code **)(*local_388 + 0x10))();
        }
      }
      CVars::EnableConcurentInstallRequests();
      goto LAB_1445eb5f7;
    }
    local_2a8._0_1_ = FIoChunkId::InvalidChunkId.Id[0];
    local_2a8._1_1_ = FIoChunkId::InvalidChunkId.Id[1];
    local_2a8._2_1_ = FIoChunkId::InvalidChunkId.Id[2];
    local_2a8._3_1_ = FIoChunkId::InvalidChunkId.Id[3];
    local_2a8._4_1_ = FIoChunkId::InvalidChunkId.Id[4];
    local_2a8._5_1_ = FIoChunkId::InvalidChunkId.Id[5];
    local_2a8._6_1_ = FIoChunkId::InvalidChunkId.Id[6];
    local_2a8._7_1_ = FIoChunkId::InvalidChunkId.Id[7];
    uStack_294 = *(undefined8 *)(param_1->Hash + 8);
    auStack_2a0[0] = FIoChunkId::InvalidChunkId.Id[8];
    auStack_2a0[1] = FIoChunkId::InvalidChunkId.Id[9];
    auStack_2a0[2] = FIoChunkId::InvalidChunkId.Id[10];
    auStack_2a0[3] = FIoChunkId::InvalidChunkId.Id[0xb];
    uStack_28c = *(undefined4 *)(param_1->Hash + 0x10);
    lVar6 = *(longlong *)pFVar16->Hash;
    lVar19 = *(longlong *)(pFVar16->Hash + 8);
    uStack_29c = (undefined4)*(undefined8 *)param_1->Hash;
    uStack_298 = (undefined4)((ulonglong)*(undefined8 *)param_1->Hash >> 0x20);
    TVar18 = UnifiedError::IoStoreOnDemand::ChunkHashError::GetStaticErrorDetails();
    pIVar4 = (IErrorDetails *)(TVar18.Reference)->_padding_;
    if (pIVar4 == (IErrorDetails *)0x0) {
      iVar14 = UnifiedError::IoStoreOnDemand::ChunkHashError::GetErrorCodeId();
      local_408.ModuleId = UnifiedError::IoStoreOnDemand::GetStaticModuleId();
      local_408.ErrorDetails.Reference = (IErrorDetails *)0x0;
      local_408.ErrorCode = iVar14;
    }
    else {
      (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_360);
      iVar14 = UnifiedError::IoStoreOnDemand::ChunkHashError::GetErrorCodeId();
      local_408.ModuleId = UnifiedError::IoStoreOnDemand::GetStaticModuleId();
      local_408.ErrorCode = iVar14;
      local_408.ErrorDetails.Reference = pIVar4;
      (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_35c);
      (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
    }
    local_3c0 = ::operator_new(0x58);
    if (local_3c0 == (FDynamicErrorDetails *)0x0) {
      local_3c0 = (FDynamicErrorDetails *)0x0;
    }
    else {
      local_348 = 0;
      UnifiedError::FDynamicErrorDetails::FDynamicErrorDetails
                (local_3c0,(IErrorDetails *)&local_348);
      *(undefined1 *)((longlong)&local_3c0[2]._padding_ + 4) = 5;
      local_3c0->_padding_ =
           (longlong)
           &UnifiedError::
            TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FChunkHashMismatchErrorContext>::
            _vftable__for__UE__UnifiedError__IErrorDetails__;
      local_3c0[1]._padding_ = local_2a8;
      local_3c0[1]._padding_ = CONCAT44(uStack_29c,auStack_2a0);
      local_3c0->_padding_ =
           (longlong)
           &UnifiedError::
            TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FChunkHashMismatchErrorContext>::
            _vftable__for__FRefCountBase__;
      *(undefined4 *)&local_3c0[1]._padding_ = uStack_298;
      *(undefined4 *)((longlong)&local_3c0[1]._padding_ + 4) = (undefined4)uStack_294;
      *(undefined4 *)&local_3c0[1].InnerErrorDetails.Reference = uStack_294._4_4_;
      *(undefined4 *)((longlong)&local_3c0[1].InnerErrorDetails.Reference + 4) = uStack_28c;
      local_3c0[2]._padding_ = lVar6;
      local_3c0[2]._padding_ = lVar19;
      *(int *)&local_3c0[2]._padding_ = iVar15;
      (**(code **)(local_3c0->_padding_ + 8))(local_3c0,local_358);
    }
    UnifiedError::FError::PushErrorDetails(&local_408,(IErrorDetails *)&local_3c0);
    UnifiedError::FError::FError(&local_3d8,&local_408);
    TVar21.Reference = local_430.Error.TypedValue.ErrorDetails.Reference;
    local_3c8 = 1;
    if ((local_430.Error.bIsSet != false) &&
       (local_430.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
      local_430.Error.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
      (**(code **)((longlong)*TVar21.Reference + 0x10))();
      if (local_430.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
        (**(code **)((longlong)*local_430.Error.TypedValue.ErrorDetails.Reference + 0x10))();
      }
    }
    TVar21.Reference = local_3d8.ErrorDetails.Reference;
    local_430.Error.TypedValue.ErrorCode = local_3d8.ErrorCode;
    local_430.Error.TypedValue.ModuleId = local_3d8.ModuleId;
    local_430.Error.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
    if (local_3d8.ErrorDetails.Reference != (IErrorDetails *)0x0) {
      local_430.Error.TypedValue.ErrorDetails.Reference = local_3d8.ErrorDetails.Reference;
      (**(code **)((longlong)*local_3d8.ErrorDetails.Reference + 8))
                (local_3d8.ErrorDetails.Reference,local_354);
      IVar5 = *local_3d8.ErrorDetails.Reference;
      local_3d8.ErrorDetails.Reference = (IErrorDetails *)0x0;
      (**(code **)((longlong)IVar5 + 0x10))(TVar21.Reference);
    }
    TVar21.Reference = local_408.ErrorDetails.Reference;
    local_3d8.ErrorCode = 0;
    local_3d8.ModuleId = 0;
    local_430.Error.bIsSet = true;
    local_408.ErrorCode = 0;
    local_408.ModuleId = 0;
    if (local_408.ErrorDetails.Reference == (IErrorDetails *)0x0) goto LAB_1445eb5f7;
    local_408.ErrorDetails.Reference = (IErrorDetails *)0x0;
    (**(code **)((longlong)*TVar21.Reference + 0x10))();
    TVar21.Reference = local_408.ErrorDetails.Reference;
  }
  else {
LAB_1445eb4b7:
    TVar18 = UnifiedError::IoStoreOnDemand::HttpError::GetStaticErrorDetails();
    pIVar4 = (IErrorDetails *)(TVar18.Reference)->_padding_;
    iVar15 = UnifiedError::IoStoreOnDemand::HttpError::GetErrorCodeId();
    local_418._4_4_ = UnifiedError::IoStoreOnDemand::GetStaticModuleId();
    TStack_410.Reference = (IErrorDetails *)0x0;
    local_418._0_4_ = iVar15;
    if (pIVar4 != (IErrorDetails *)0x0) {
      TStack_410.Reference = pIVar4;
      (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_350);
    }
    local_3b8 = ::operator_new(0x28);
    if (local_3b8 == (FDynamicErrorDetails *)0x0) {
      local_3b8 = (FDynamicErrorDetails *)0x0;
    }
    else {
      local_340 = 0;
      UnifiedError::FDynamicErrorDetails::FDynamicErrorDetails
                (local_3b8,(IErrorDetails *)&local_340);
      *(uint *)&local_3b8[1]._padding_ = param_4;
      local_3b8->_padding_ =
           (longlong)
           &UnifiedError::TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FHttpError>::
            _vftable__for__UE__UnifiedError__IErrorDetails__;
      *(undefined1 *)((longlong)&local_3b8[1]._padding_ + 4) = 5;
      local_3b8->_padding_ =
           (longlong)
           &UnifiedError::TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FHttpError>::
            _vftable__for__FRefCountBase__;
      (**(code **)(local_3b8->_padding_ + 8))(local_3b8,local_34c);
    }
    UnifiedError::FError::PushErrorDetails((FError *)&local_418,(IErrorDetails *)&local_3b8);
    UnifiedError::FError::FError(&local_3a8,(FError *)&local_418);
    TVar21.Reference = local_430.Error.TypedValue.ErrorDetails.Reference;
    local_398 = '\x01';
    if ((local_430.Error.bIsSet != false) &&
       (local_430.Error.TypedValue.ErrorCode = 0, local_430.Error.TypedValue.ModuleId = 0,
       local_430.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
      local_430.Error.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
      (**(code **)((longlong)*TVar21.Reference + 0x10))();
      if (local_430.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
        (**(code **)((longlong)*local_430.Error.TypedValue.ErrorDetails.Reference + 0x10))();
      }
    }
    UnifiedError::FError::FError((FError *)&local_430,&local_3a8);
    local_430.Error.bIsSet = true;
    if ((local_398 != '\0') &&
       (local_3a8.ErrorCode = 0, local_3a8.ModuleId = 0,
       local_3a8.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
      IVar5 = *local_3a8.ErrorDetails.Reference;
      local_3a8.ErrorDetails.Reference = (IErrorDetails *)0x0;
      (**(code **)((longlong)IVar5 + 0x10))();
    }
    TVar21.Reference = TStack_410.Reference;
    local_418 = (uchar *)0x0;
    if (TStack_410.Reference == (IErrorDetails *)0x0) goto LAB_1445eb5f7;
    TStack_410.Reference = (IErrorDetails *)0x0;
    (**(code **)((longlong)*TVar21.Reference + 0x10))();
    TVar21.Reference = TStack_410.Reference;
  }
  if (TVar21.Reference != (IErrorDetails *)0x0) {
    (**(code **)((longlong)*TVar21.Reference + 0x10))();
  }
LAB_1445eb5f7:
  uVar11 = local_3f4;
  bVar13 = local_3f8 == Cancelled;
  local_3e0 = -1;
  local_3f0 = &local_3b0->PendingChunkDownloads;
  iVar15 = *(int *)&(local_3b0->PendingChunkDownloads).field_0x48;
  if (iVar15 == 0) {
    iStack_3dc = -1;
  }
  else {
    puVar22 = *(undefined1 **)&(local_3b0->PendingChunkDownloads).field_0x40;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = &(local_3b0->PendingChunkDownloads).field_0x38;
    }
    iStack_3dc = *(int *)(puVar22 + ((longlong)iVar15 - 1U & (longlong)*(int *)param_1->Hash) * 4);
    local_3e0 = iStack_3dc;
    if (iStack_3dc != -1) {
      lVar6 = *(longlong *)&local_3f0->field_0x0;
      do {
        lVar19 = (longlong)local_3e0;
        iStack_3dc = *(int *)(lVar6 + 0x40 + lVar19 * 0x48);
        if (((*(longlong *)(lVar6 + lVar19 * 0x48) == *(longlong *)param_1->Hash) &&
            (*(longlong *)(lVar6 + 8 + lVar19 * 0x48) == *(longlong *)(param_1->Hash + 8))) &&
           (*(int *)(lVar6 + 0x10 + lVar19 * 0x48) == *(int *)(param_1->Hash + 0x10))) break;
        local_3e0 = iStack_3dc;
      } while (iStack_3dc != -1);
    }
  }
  local_378.NextIndex = iStack_3dc;
  local_378.Index = local_3e0;
  iVar15 = local_3e0;
  pFStack_3e8 = param_1;
  local_378.Set =
       (TSet<TTuple<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest>,TDefaultMapHashableKeyFuncs<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest,1>,FDefaultSetAllocator>
        *)local_3f0;
  local_378.Key = param_1;
  if (local_3e0 == -1) {
LAB_1445eb6ef:
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("bFoundRequest",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandContentInstaller.cpp"
                        ,0x4a0,L"");
    cVar23 = !bVar25;
    if (bVar13) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  else {
    while (lVar6 = *(longlong *)&(local_378.Set)->Elements + (longlong)iVar15 * 0x48,
          *(uint *)(*(longlong *)&(local_378.Set)->Elements + 0x38 + (longlong)iVar15 * 0x48) !=
          uVar11) {
      TSet<TTuple<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest>,TDefaultMapHashableKeyFuncs<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest,1>,FDefaultSetAllocator>
      ::TBaseKeyIterator<0>::operator++(&local_378);
      iVar15 = local_378.Index;
      if (local_378.Index == -1) goto LAB_1445eb6ef;
    }
    pFVar10 = local_3b0;
    if (local_3f8 == Cancelled) {
      if ((byte)LogIoStoreOnDemand._0_1_ < 6) goto LAB_1445eba70;
      local_258.Base = local_238;
      local_258.CurPos = local_238;
      uStack_310 = 0x14;
      local_2d8._12_4_ = uStack_30c;
      local_2d8.ArrayNum = 0x14;
      local_258.End = (wchar_t *)&local_1b8;
      local_258.bIsDynamic = false;
      local_258.bIsExternal = false;
      local_318 = param_1;
      local_2d8.DataPtr = param_1->Hash;
      String::BytesToHexLower(&local_2d8,&local_258);
      if (local_258.End < (TStringBuilderBase<wchar_t> *)(local_258.CurPos + 1)) {
        TStringBuilderBase<wchar_t>::Extend(&local_258,1);
      }
      *local_258.CurPos = L'\0';
      local_448 = (FScriptContainerElement *)0x15067bc88;
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
      this_01 = &local_258;
    }
    else {
      if (local_430.Error.bIsSet != false) {
        if (2 < (byte)LogIoStoreOnDemand._0_1_) {
          this_00 = UnifiedError::FError::GetErrorMessage((FError *)&local_430,&local_2b8,true);
          pFVar20 = FText::ToString(this_00);
          if ((pFVar20->Data).ArrayNum == 0) {
            pwVar24 = L"";
          }
          else {
            pwVar24 = (wchar_t *)(pFVar20->Data).AllocatorInstance.Data;
          }
          local_1b8.Base = local_198;
          local_1b8.CurPos = local_198;
          local_1b8.End = (wchar_t *)&local_118;
          uStack_330 = 0x14;
          local_2c8._12_4_ = uStack_32c;
          local_2c8.ArrayNum = 0x14;
          local_1b8.bIsDynamic = false;
          local_1b8.bIsExternal = false;
          local_338 = param_1;
          local_2c8.DataPtr = param_1->Hash;
          String::BytesToHexLower(&local_2c8,&local_1b8);
          if (local_1b8.End < (TStringBuilderBase<wchar_t> *)(local_1b8.CurPos + 1)) {
            TStringBuilderBase<wchar_t>::Extend(&local_1b8,1);
          }
          *local_1b8.CurPos = L'\0';
          local_448 = (FScriptContainerElement *)pwVar24;
          Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1b8);
          pFVar10 = local_3b0;
          if (local_2b8.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_2b8.TextData.Reference + 0x10))();
            pFVar10 = local_3b0;
          }
        }
        goto LAB_1445eba70;
      }
      if ((byte)LogIoStoreOnDemand._0_1_ < 7) goto LAB_1445eba70;
      local_118.Base = local_f8;
      local_118.CurPos = local_f8;
      uStack_320 = 0x14;
      local_308[0]._12_4_ = uStack_31c;
      local_308[0].ArrayNum = 0x14;
      local_118.End = (wchar_t *)&local_78;
      local_118.bIsDynamic = false;
      local_118.bIsExternal = false;
      local_328 = param_1;
      local_308[0].DataPtr = param_1->Hash;
      String::BytesToHexLower(local_308,&local_118);
      if (local_118.End < (FBlake3Hash *)(local_118.CurPos + 1)) {
        TStringBuilderBase<wchar_t>::Extend(&local_118,1);
      }
      *local_118.CurPos = L'\0';
      local_448 = (FScriptContainerElement *)0x15067bc40;
      Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
      this_01 = &local_118;
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(this_01);
    pFVar10 = local_3b0;
LAB_1445eba70:
    while (pFVar7 = *(FChunkHttpRequestHandle **)(lVar6 + 0x28),
          pFVar7 != (FChunkHttpRequestHandle *)0x0) {
      pFVar8 = pFVar7->Next;
      *(FChunkHttpRequestHandle **)(lVar6 + 0x28) = pFVar8;
      if (pFVar8 == (FChunkHttpRequestHandle *)0x0) {
        *(undefined8 *)(lVar6 + 0x30) = 0;
      }
      pFVar7->Next = (FChunkHttpRequestHandle *)0x0;
      OnProcessDownloadedChunkNotifyRequest(pFVar10,pFVar7,&local_430,bVar13);
    }
    TSet<TTuple<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest>,TDefaultMapHashableKeyFuncs<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest,1>,FDefaultSetAllocator>
    ::TKeyIterator::RemoveCurrent((TKeyIterator *)&local_378);
    cVar23 = local_438;
  }
  TVar21.Reference = local_430.Error.TypedValue.ErrorDetails.Reference;
  if ((local_430.Error.bIsSet != false) &&
     (local_430.Error.TypedValue.ErrorCode = 0, local_430.Error.TypedValue.ModuleId = 0,
     local_430.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
    local_430.Error.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
    (**(code **)((longlong)*TVar21.Reference + 0x10))();
    if (local_430.Error.TypedValue.ErrorDetails.Reference != (IErrorDetails *)0x0) {
      (**(code **)((longlong)*local_430.Error.TypedValue.ErrorDetails.Reference + 0x10))();
    }
  }
  if (cVar23 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ProcessInstallRequest @ 1445ec6f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandContentInstaller::ProcessInstallRequest
          (FOnDemandContentInstaller *this,FRequest *param_1)

{
  int *piVar1;
  atomic<int> *paVar2;
  FMutex *pFVar3;
  atomic<unsigned_char> aVar4;
  atomic<int> aVar5;
  uint uVar6;
  longlong *plVar7;
  IErrorDetails *pIVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  TVariant<FEmptyVariantState,UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,UE::IoStore::FOnDemandContentInstaller::FRequest::FPurge,UE::IoStore::FOnDemandContentInstaller::FRequest::FDefrag,UE::IoStore::FOnDemandContentInstaller::FRequest::FVerify,UE::IoStore::FOnDemandContentInstaller::FRequest::FFlushLastAccess>
  *pTVar11;
  undefined4 uVar12;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar13;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar14;
  FOnDemandContentInstaller *this_00;
  FRequest *pFVar15;
  TBitArray<FDefaultBitArrayAllocator> *pTVar16;
  FIoDispatcher *this_01;
  undefined8 uVar17;
  bool bVar18;
  int iVar19;
  int iVar20;
  FString *pFVar21;
  FString *pFVar22;
  FError *pFVar23;
  TWeakPtr<UE::IoStore::FOnDemandIoStore,1> *pTVar24;
  FOnDemandInternalContentHandle *pFVar25;
  wchar_t *pwVar26;
  TRefCountPtr<UE::UnifiedError::FStaticErrorDetails_const_> TVar27;
  byte bVar28;
  wchar_t *pwVar29;
  longlong lVar30;
  wchar_t *pwVar31;
  TValueOrError<void,UE::UnifiedError::FError> *pTVar32;
  TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> TVar33;
  IErrorDetails *pIVar34;
  FInstall *pFVar35;
  ForAnyElementType FVar36;
  bool bVar37;
  bool bVar38;
  undefined1 auStackY_488 [32];
  undefined1 local_438 [8];
  ForAnyElementType local_430;
  undefined8 local_428;
  FError local_420;
  FRequest *local_410;
  FOnDemandContentInstaller *local_408;
  FRequest *local_400;
  ulong64 local_3f8;
  FDynamicErrorDetails *local_3f0;
  ulong64 local_3e8;
  FError local_3e0;
  FError local_3d0;
  FError local_3c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3b0;
  undefined8 uStack_390;
  int local_388;
  undefined4 uStack_384;
  FIoStatus local_380;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_370;
  undefined1 local_350 [4];
  undefined1 local_34c [4];
  undefined1 local_348 [4];
  undefined1 local_344 [4];
  undefined1 local_340 [16];
  FIoDispatcher *local_330;
  undefined8 local_328;
  FRequest *local_320;
  FError local_318;
  char local_308;
  FError local_300;
  char local_2f0;
  FError local_2e8;
  char local_2d8;
  longlong *local_2d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2c8;
  undefined8 uStack_2a8;
  wchar_t *local_298;
  int iStack_290;
  undefined4 uStack_28c;
  code *local_288;
  FInstall **local_280;
  FInstall *local_278;
  ulong64 *local_270;
  ulong64 *local_268;
  FString local_260;
  FString local_250;
  FString local_238;
  TWeakPtr<UE::IoStore::FOnDemandIoStore,1> local_228;
  TStringView<wchar_t> local_218;
  FString local_208;
  longlong local_1f0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1e8;
  uint local_1e0;
  int iStack_1dc;
  ulonglong uStack_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FDynamicErrorDetails local_178;
  FIoChunkId local_150 [2];
  undefined1 local_138 [32];
  void *local_118;
  int local_110;
  uint local_10c;
  undefined4 local_108;
  int local_104;
  ForElementType<FSetElementId> local_f8;
  int local_f0;
  undefined1 local_e8 [32];
  void *local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_488;
  bVar37 = -1 < CpuChannel->Enabled;
  local_408 = this;
  local_400 = param_1;
  if (bVar37) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId682,"FOnDemandContentInstaller::ProcessInstallRequest",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandContentInstaller.cpp"
               ,0x2aa);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId682);
  }
  pFVar35 = (FInstall *)&param_1->Variant;
  if (((param_1->Variant).TypeIndex != '\x01') &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index == TypeIndex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                          ,0x97,L""), bVar18)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  param_1->Priority = *(int *)&(param_1->Variant).field_0x44;
  if (5 < (byte)LogIoStoreOnDemand._0_1_) {
    IoStore::LexToString(&local_238,(FOnDemandContentHandle *)&(param_1->Variant).field_0x30);
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Data.AllocatorInstance.Data);
    }
  }
  lVar30 = *(longlong *)&(param_1->Variant).field_0x30;
  if (lVar30 != 0) {
    if (((*(longlong *)(lVar30 + 8) == 0) || (*(longlong *)(lVar30 + 0x10) == 0)) ||
       (*(int *)(*(longlong *)(lVar30 + 0x10) + 8) < 1)) {
      pTVar24 = TSharedFromThis<UE::IoStore::FOnDemandIoStore,1>::AsWeak
                          ((TSharedFromThis<UE::IoStore::FOnDemandIoStore,1> *)
                           &this->IoStore->_padding_,&local_228);
      if ((*(longlong *)&(param_1->Variant).field_0x30 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar18)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar30 = *(longlong *)&(param_1->Variant).field_0x30;
      *(FOnDemandIoStore **)(lVar30 + 8) = pTVar24->Object;
      pTVar24->Object = (FOnDemandIoStore *)0x0;
      plVar7 = *(longlong **)(lVar30 + 0x10);
      *(TReferenceControllerBase<1> **)(lVar30 + 0x10) =
           (pTVar24->WeakReferenceCount).ReferenceController;
      (pTVar24->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar20 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
      if (local_228.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar2 = &(local_228.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar5 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar5 == (atomic<int>)0x1) {
          (**(code **)((local_228.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_228.WeakReferenceCount.ReferenceController,1);
        }
      }
    }
    local_298 = *(wchar_t **)
                 &((TVariant<FEmptyVariantState,UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,UE::IoStore::FOnDemandContentInstaller::FRequest::FPurge,UE::IoStore::FOnDemandContentInstaller::FRequest::FDefrag,UE::IoStore::FOnDemandContentInstaller::FRequest::FVerify,UE::IoStore::FOnDemandContentInstaller::FRequest::FFlushLastAccess>
                    *)pFVar35)->field_0x0;
    iVar20 = *(int *)&(param_1->Variant).field_0x8;
    local_e8._0_8_ = (FScriptContainerElement *)0x0;
    local_e8._8_8_ = 0;
    local_c8 = (void *)0x0;
    local_c0 = 0;
    iStack_290 = iVar20 + -1;
    if (iVar20 == 0) {
      iStack_290 = 0;
    }
    local_bc = 0x80;
    local_218._12_4_ = uStack_28c;
    local_218.Size = iStack_290;
    local_b8 = 0xffffffff;
    local_b4 = 0;
    local_a8 = (ForElementType<FSetElementId>)0x0;
    local_a0 = 0;
    local_98._0_8_ = (FScriptContainerElement *)0x0;
    local_98._8_8_ = 0;
    local_78 = (void *)0x0;
    local_70 = 0;
    local_6c = 0x80;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = (ForElementType<FSetElementId>)0x0;
    local_50 = 0;
    local_218.DataPtr = local_298;
    FOnDemandIoStore::GetContainersAndPackagesForInstall
              (this->IoStore,&local_380,&local_218,
               (TArray<FString,TSizedDefaultAllocator<32>_> *)&(param_1->Variant).field_0x10,
               (TArray<FPackageId,TSizedDefaultAllocator<32>_> *)&(param_1->Variant).field_0x20,
               (TSet<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,DefaultKeyFuncs<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,0>,FDefaultSetAllocator>
                *)local_e8,
               (TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator> *)local_98);
    if (local_380.ErrorCode == Ok) {
      FIoStatus::~FIoStatus(&local_380);
      FVar36 = CVars::IoStoreErrorOnRequest.Data.AllocatorInstance;
      if (CVars::IoStoreErrorOnRequest.Data.ArrayNum < 2) {
LAB_1445ecd39:
        FVar36.Data = CVars::IoStoreDebugRequest.Data.AllocatorInstance.Data;
        if (1 < CVars::IoStoreDebugRequest.Data.ArrayNum) {
          pFVar25 = TSharedPtr<UE::IoStore::FOnDemandInternalContentHandle,1>::operator->
                              ((TSharedPtr<UE::IoStore::FOnDemandInternalContentHandle,1> *)
                               &(param_1->Variant).field_0x30);
          pwVar26 = (pFVar25->DebugName).Chars;
          pwVar31 = L"";
          if (pwVar26 != (wchar_t *)0x0) {
            pwVar31 = pwVar26;
          }
          pwVar26 = wcsstr(pwVar31,(wchar_t *)FVar36.Data);
          if (pwVar26 == (wchar_t *)0x0) {
            pwVar31 = L"";
            pwVar26 = *(wchar_t **)&(param_1->Variant).field_0x48;
            if (CVars::IoStoreDebugRequest.Data.ArrayNum != 0) {
              pwVar31 = (wchar_t *)CVars::IoStoreDebugRequest.Data.AllocatorInstance;
            }
            pwVar29 = L"";
            if (pwVar26 != (wchar_t *)0x0) {
              pwVar29 = pwVar26;
            }
            pwVar26 = wcsstr(pwVar29,pwVar31);
            if (pwVar26 == (wchar_t *)0x0) goto LAB_1445ecdd3;
          }
          if (4 < (byte)LogIoStoreOnDemand._0_1_) {
            TSharedPtr<UE::IoStore::FOnDemandInternalContentHandle,1>::operator->
                      ((TSharedPtr<UE::IoStore::FOnDemandInternalContentHandle,1> *)
                       &(param_1->Variant).field_0x30);
            Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
          }
        }
LAB_1445ecdd3:
        if (param_1->bCancelled != false) goto LAB_1445ecdd9;
        uVar6 = *(uint *)&(param_1->Variant).field_0x40;
        local_138._0_8_ = (FScriptContainerElement *)0x0;
        local_138._8_8_ = 0;
        local_118 = (void *)0x0;
        local_110 = 0;
        local_10c = 0x80;
        local_108 = 0xffffffff;
        local_104 = 0;
        local_f8 = (ForElementType<FSetElementId>)0x0;
        local_f0 = 0;
        IoStore::Private::ResolveChunksToInstall
                  ((TSet<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,DefaultKeyFuncs<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,0>,FDefaultSetAllocator>
                    *)local_e8,
                   (TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator> *)local_98,
                   (bool)((byte)(uVar6 >> 1) & 1),(bool)((byte)(uVar6 >> 2) & 1),
                   (TArray<UE::IoStore::Private::FResolvedContainerChunks,TSizedDefaultAllocator<32>_>
                    *)&(param_1->Variant).field_0xc0,
                   (TSet<FPackageId,DefaultKeyFuncs<FPackageId,0>,FDefaultSetAllocator> *)local_138)
        ;
        if (local_138._8_4_ == local_104) {
LAB_1445ed43e:
          this_00 = local_408;
          if (param_1->bCancelled == false) {
            bVar18 = false;
            LOCK();
            bVar38 = (local_408->Mutex).State == (atomic<unsigned_char>)0x0;
            if (bVar38) {
              (local_408->Mutex).State = (atomic<unsigned_char>)0x1;
            }
            UNLOCK();
            if (!bVar38) {
              FMutex::LockSlow(&local_408->Mutex);
            }
            bVar38 = CanExecuteRequest(this_00,param_1);
            if (bVar38) {
              pFVar9 = (this_00->RunningRequests).AllocatorInstance.Data;
              local_410 = param_1;
              if (((pFVar9 <= (FScriptContainerElement *)&local_410) &&
                  ((FScriptContainerElement *)&local_410 <
                   pFVar9 + (longlong)(this_00->RunningRequests).ArrayMax * 8)) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar18)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              iVar20 = (this_00->RunningRequests).ArrayNum;
              piVar1 = &(this_00->RunningRequests).ArrayMax;
              if (iVar20 == *piVar1) {
                iVar20 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&(this_00->RunningRequests).AllocatorInstance,piVar1);
              }
              bVar18 = true;
              (this_00->RunningRequests).ArrayNum = iVar20 + 1;
              *(FRequest **)
               ((this_00->RunningRequests).AllocatorInstance.Data + (longlong)iVar20 * 8) =
                   local_410;
            }
            LOCK();
            pFVar3 = &this_00->Mutex;
            aVar4 = pFVar3->State;
            pFVar3->State = (atomic<unsigned_char>)((char)pFVar3->State + -1);
            UNLOCK();
            if (((byte)aVar4 & 2) != 0) {
              FMutex::WakeWaitingThread(&this_00->Mutex);
            }
            if (bVar18) {
              ExecuteInstallRequest(this_00,param_1);
              goto LAB_1445ed84c;
            }
            local_270 = &local_3e8;
            local_3e8 = 0;
            local_268 = &local_3f8;
            local_3f8 = 0;
            local_280 = &local_278;
            local_288 = Core::Private::Function::
                        TFunctionRefCaller<`UE::IoStore::FOnDemandContentInstaller::ProcessInstallRequest'::__l2::<lambda_1>,void,int,int,bool>
                        ::Call;
            local_278 = pFVar35;
            PinCachedChunks(this_00,pFVar35,(TFunctionRef<void___cdecl(int,int,bool)> *)&local_288);
            (pFVar35->Progress).TotalContentSize = local_3e8;
            (pFVar35->Progress).TotalInstallSize = local_3f8;
            (pFVar35->Progress).CurrentInstallSize = 0;
            if ((local_3f8 != 0) && (param_1->bCancelled == false)) {
              LOCK();
              bVar18 = (this_00->Mutex).State == (atomic<unsigned_char>)0x0;
              if (bVar18) {
                (this_00->Mutex).State = (atomic<unsigned_char>)0x1;
              }
              UNLOCK();
              if (!bVar18) {
                FMutex::LockSlow(&this_00->Mutex);
              }
              local_320 = param_1;
              TArray<UE::IoStore::FOnDemandContentInstaller::FRequest_*,TSizedDefaultAllocator<32>_>
              ::
              HeapPush<bool___cdecl(UE::IoStore::FOnDemandContentInstaller::FRequest_const_&,UE::IoStore::FOnDemandContentInstaller::FRequest_const_&)>
                        (&this_00->RequestQueue,&local_320,RequestSortPredicate);
              LOCK();
              pFVar3 = &this_00->Mutex;
              aVar4 = pFVar3->State;
              pFVar3->State = (atomic<unsigned_char>)((char)pFVar3->State + -1);
              UNLOCK();
              if (((byte)aVar4 & 2) != 0) {
                FMutex::WakeWaitingThread(&this_00->Mutex);
              }
              local_f0 = 0;
              if (local_f8 != (ForElementType<FSetElementId>)0x0) {
                FMemory::Free((void *)local_f8);
              }
              bVar18 = local_138._12_4_ != 0;
              local_138._8_8_ = (ulonglong)(uint)local_138._12_4_ << 0x20;
              if (bVar18) {
                Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,0,(ForAnyElementType *)local_138,0,(int *)(local_138 + 0xc));
              }
              local_108 = 0xffffffff;
              local_104 = 0;
              local_110 = 0;
              if (0x80 < local_10c) {
                local_10c = 0x80;
                TBitArray<FDefaultBitArrayAllocator>::Realloc
                          ((TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10),0);
              }
              if (local_118 != (void *)0x0) {
                FMemory::Free(local_118);
              }
              if ((FScriptContainerElement *)local_138._0_8_ != (FScriptContainerElement *)0x0) {
                FMemory::Free((void *)local_138._0_8_);
              }
              local_50 = 0;
              if (local_58 != (ForElementType<FSetElementId>)0x0) {
                FMemory::Free((void *)local_58);
              }
              bVar18 = local_98._12_4_ != 0;
              local_98._8_8_ = (ulonglong)(uint)local_98._12_4_ << 0x20;
              if (bVar18) {
                Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
              }
              local_68 = 0xffffffff;
              local_64 = 0;
              local_70 = 0;
              if (0x80 < local_6c) {
                local_6c = 0x80;
                TBitArray<FDefaultBitArrayAllocator>::Realloc
                          ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
              }
              if (local_78 != (void *)0x0) {
                FMemory::Free(local_78);
              }
              if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
                FMemory::Free((void *)local_98._0_8_);
              }
              local_a0 = 0;
              if (local_a8 != (ForElementType<FSetElementId>)0x0) {
                FMemory::Free((void *)local_a8);
              }
              TSparseArray<TSparseSetElement<TSharedPtr<UE::IoStore::FOnDemandContainer,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::DestroyElements((TSparseArray<TSparseSetElement<TSharedPtr<UE::IoStore::FOnDemandContainer,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                 *)local_e8,0,local_e8._8_4_);
              bVar18 = local_e8._12_4_ != 0;
              local_e8._8_8_ = (ulonglong)(uint)local_e8._12_4_ << 0x20;
              if (bVar18) {
                Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x18,8,0,(ForAnyElementType *)local_e8,0,(int *)(local_e8 + 0xc));
              }
              local_b8 = 0xffffffff;
              local_b4 = 0;
              local_c0 = 0;
              if (0x80 < local_bc) {
                local_bc = 0x80;
                TBitArray<FDefaultBitArrayAllocator>::Realloc
                          ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),0);
              }
              if (local_c8 != (void *)0x0) {
                FMemory::Free(local_c8);
              }
              if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
                FMemory::Free((void *)local_e8._0_8_);
              }
              goto LAB_1445ed8b8;
            }
          }
          CompleteInstallRequest(this_00,param_1);
        }
        else {
          local_330 = FIoDispatcher::Get();
          local_370.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10);
          local_430.Data = (FScriptContainerElement *)0x0;
          local_428 = 0;
          local_370._padding_._0_4_ = 0;
          local_370._padding_._4_4_ = 1;
          local_370.UnvisitedBitMask = 0xffffffff;
          local_370.CurrentBitIndex = 0;
          local_370.BaseBitIndex = 0;
          if (local_110 != 0) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_370);
          }
          iVar20 = local_110;
          TStack_2c8._padding_ = CONCAT44(local_370._padding_._4_4_,(undefined4)local_370._padding_)
          ;
          local_2d0 = (longlong *)local_138;
          TStack_2c8.CurrentBitIndex = local_370.CurrentBitIndex;
          TStack_2c8.UnvisitedBitMask = local_370.UnvisitedBitMask;
          uStack_390._4_4_ = local_370._28_4_;
          uStack_390._0_4_ = local_370.BaseBitIndex;
          bVar28 = (byte)local_110 & 0x1f;
          local_388 = local_138._8_4_ - local_104;
          local_3b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10);
          local_3b0._padding_ = CONCAT44(1 << bVar28,local_110 >> 5);
          local_3b0.CurrentBitIndex = local_110;
          local_3b0.UnvisitedBitMask = -1 << bVar28;
          local_3b0._24_8_ = CONCAT44(local_370.CurrentBitIndex,local_110) & 0xffffffffffffffe0;
          uStack_2a8 = CONCAT44(uStack_384,local_388);
          TStack_2c8.Array = local_370.Array;
          TStack_2c8._24_8_ = uStack_390;
          if ((local_110 < 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x7af,L""), bVar18)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          if (iVar20 != local_110) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3b0);
          }
          this_01 = local_330;
          pTVar16 = local_3b0.Array;
          pTVar11 = &param_1->Variant;
          local_1f0 = local_3b0._padding_;
          pTStack_1e8 = local_3b0.Array;
          local_1e0 = local_3b0.UnvisitedBitMask;
          iStack_1dc = local_3b0.CurrentBitIndex;
          uVar17 = _local_1e0;
          uStack_1d8 = local_3b0._24_8_;
          iStack_1dc = local_3b0.CurrentBitIndex;
          iVar20 = iStack_1dc;
          _local_1e0 = uVar17;
          while( true ) {
            plVar7 = local_2d0;
            if ((int)local_2d0[1] - *(int *)((longlong)local_2d0 + 0x34) != (int)uStack_2a8) {
              local_438[0] = 0;
              `TSparseArray<TSparseSetElement<FPackageId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_438);
            }
            param_1 = local_400;
            FVar36.Data = local_430.Data;
            if (((TStack_2c8.CurrentBitIndex == iVar20) && (TStack_2c8.Array == pTVar16)) &&
               (plVar7 == (longlong *)local_138)) break;
            CreatePackageDataChunkId
                      (local_150,
                       (FPackageId *)((longlong)TStack_2c8.CurrentBitIndex * 0x10 + *plVar7));
            bVar18 = FIoDispatcher::DoesChunkExist(this_01,local_150);
            if (!bVar18) {
              if (2 < (byte)LogIoStoreOnDemand._0_1_) {
                if ((int)local_428 == 0) {
                  IoStore::LexToString(&local_260,(FOnDemandContentHandle *)&pTVar11->field_0x30);
                  Logging::Private::BasicLog<3>
                            (&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
                  if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_260.Data.AllocatorInstance.Data);
                  }
                }
                if (2 < (byte)LogIoStoreOnDemand._0_1_) {
                  ::LexToString(&local_250,local_150);
                  Logging::Private::BasicLog<3>
                            (&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
                  if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_250.Data.AllocatorInstance.Data);
                  }
                }
              }
              if (((local_430.Data <= (FScriptContainerElement *)local_150) &&
                  ((FScriptContainerElement *)local_150 <
                   local_430.Data + (longlong)local_428._4_4_ * 0xc)) &&
                 (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar18)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              if ((int)local_428 == local_428._4_4_) {
                iVar19 = Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x10c,&local_430,(int *)((longlong)&local_428 + 4));
                local_428 = CONCAT44(local_428._4_4_,iVar19);
              }
              lVar30 = (longlong)(int)local_428;
              local_428 = CONCAT44(local_428._4_4_,(int)local_428 + 1);
              *(undefined8 *)(local_430.Data + lVar30 * 0xc) = local_150[0].Id._0_8_;
              *(undefined4 *)(local_430.Data + lVar30 * 0xc + 8) = local_150[0].Id._8_4_;
            }
            TStack_2c8.UnvisitedBitMask = TStack_2c8.UnvisitedBitMask & ~TStack_2c8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2c8);
          }
          iVar20 = (int)local_428;
          if (((int)local_428 == 0) || (((local_400->Variant).field_0x40 & 0x10) != 0)) {
            if (local_430.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_430.Data);
            }
            pFVar35 = (FInstall *)&param_1->Variant;
            goto LAB_1445ed43e;
          }
          uVar12 = local_428._4_4_;
          local_430.Data = (FScriptContainerElement *)0x0;
          local_428 = 0;
          TVar27 = UnifiedError::IoStoreOnDemand::ChunkMissingError::GetStaticErrorDetails();
          pIVar34 = (IErrorDetails *)(TVar27.Reference)->_padding_;
          if (pIVar34 == (IErrorDetails *)0x0) {
            iVar19 = UnifiedError::IoStoreOnDemand::ChunkMissingError::GetErrorCodeId();
            local_420.ModuleId = UnifiedError::IoStoreOnDemand::GetStaticModuleId();
            local_420.ErrorDetails.Reference = (IErrorDetails *)0x0;
            local_420.ErrorCode = iVar19;
          }
          else {
            (**(code **)((longlong)*pIVar34 + 8))(pIVar34,local_350);
            iVar19 = UnifiedError::IoStoreOnDemand::ChunkMissingError::GetErrorCodeId();
            local_420.ModuleId = UnifiedError::IoStoreOnDemand::GetStaticModuleId();
            local_420.ErrorCode = iVar19;
            local_420.ErrorDetails.Reference = pIVar34;
            (**(code **)((longlong)*pIVar34 + 8))(pIVar34,local_34c);
            (**(code **)((longlong)*pIVar34 + 0x10))(pIVar34);
          }
          local_3f0 = ::operator_new(0x38);
          if (local_3f0 == (FDynamicErrorDetails *)0x0) {
            local_3f0 = (FDynamicErrorDetails *)0x0;
          }
          else {
            local_328 = 0;
            UnifiedError::FDynamicErrorDetails::FDynamicErrorDetails
                      (local_3f0,(IErrorDetails *)&local_328);
            local_3f0->_padding_ =
                 (longlong)
                 &UnifiedError::
                  TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FChunkMissingErrorContext>::
                  _vftable__for__UE__UnifiedError__IErrorDetails__;
            local_3f0[1]._padding_ = 0;
            local_3f0->_padding_ =
                 (longlong)
                 &UnifiedError::
                  TErrorDetails<UE::UnifiedError::IoStoreOnDemand::FChunkMissingErrorContext>::
                  _vftable__for__FRefCountBase__;
            local_3f0[1]._padding_ = 0;
            *(undefined1 *)&local_3f0[1]._padding_ = 5;
            if (local_3f0 + 1 != &local_178) {
              local_3f0[1]._padding_ = (longlong)FVar36.Data;
              FVar36.Data = (FScriptContainerElement *)0x0;
              *(int *)&local_3f0[1]._padding_ = iVar20;
              *(undefined4 *)((longlong)&local_3f0[1]._padding_ + 4) = uVar12;
            }
            *(undefined1 *)&local_3f0[1]._padding_ = 5;
            (**(code **)(local_3f0->_padding_ + 8))(local_3f0,local_348);
          }
          UnifiedError::FError::PushErrorDetails(&local_420,(IErrorDetails *)&local_3f0);
          TVar13.Reference = local_420.ErrorDetails.Reference;
          iVar20 = local_420.ErrorCode;
          iVar19 = local_420.ModuleId;
          local_420.ErrorCode = 0;
          local_420.ModuleId = 0;
          TVar33.Reference = (IErrorDetails *)0x0;
          if ((local_420.ErrorDetails.Reference != (IErrorDetails *)0x0) &&
             ((**(code **)((longlong)*local_420.ErrorDetails.Reference + 8))
                        (local_420.ErrorDetails.Reference,local_344),
             TVar14.Reference = local_420.ErrorDetails.Reference,
             TVar33.Reference = TVar13.Reference,
             local_420.ErrorDetails.Reference != (IErrorDetails *)0x0)) {
            local_420.ErrorDetails.Reference = (IErrorDetails *)0x0;
            (**(code **)((longlong)*TVar14.Reference + 0x10))();
          }
          pFVar15 = local_400;
          pTVar32 = &local_400->Result;
          pIVar34 = TVar33.Reference;
          if ((TValueOrError<void,UE::UnifiedError::FError> *)&local_178._padding_ != pTVar32) {
            if ((local_400->Result).Error.bIsSet != false) {
              (pTVar32->Error).TypedValue.ErrorCode = 0;
              (pTVar32->Error).TypedValue.ModuleId = 0;
              pIVar8 = (local_400->Result).Error.TypedValue.ErrorDetails.Reference;
              if (pIVar8 != (IErrorDetails *)0x0) {
                (local_400->Result).Error.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
                (**(code **)((longlong)*pIVar8 + 0x10))(pIVar8);
              }
              pIVar8 = (pFVar15->Result).Error.TypedValue.ErrorDetails.Reference;
              if (pIVar8 != (IErrorDetails *)0x0) {
                (**(code **)((longlong)*pIVar8 + 0x10))(pIVar8);
              }
            }
            (pTVar32->Error).TypedValue.ErrorCode = iVar20;
            (pFVar15->Result).Error.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
            (pFVar15->Result).Error.TypedValue.ModuleId = iVar19;
            if (TVar33.Reference != (IErrorDetails *)0x0) {
              (pFVar15->Result).Error.TypedValue.ErrorDetails.Reference = TVar33.Reference;
              (**(code **)((longlong)*TVar33.Reference + 8))(TVar33.Reference,local_340);
              pIVar34 = (IErrorDetails *)0x0;
              (**(code **)((longlong)*TVar33.Reference + 0x10))(TVar33.Reference);
            }
            (pFVar15->Result).Error.bIsSet = true;
          }
          if (pIVar34 != (IErrorDetails *)0x0) {
            (**(code **)((longlong)*pIVar34 + 0x10))(pIVar34);
          }
          TVar13.Reference = local_420.ErrorDetails.Reference;
          local_420.ErrorCode = 0;
          local_420.ModuleId = 0;
          if (local_420.ErrorDetails.Reference != (IErrorDetails *)0x0) {
            local_420.ErrorDetails.Reference = (IErrorDetails *)0x0;
            (**(code **)((longlong)*TVar13.Reference + 0x10))();
            if (local_420.ErrorDetails.Reference != (IErrorDetails *)0x0) {
              (**(code **)((longlong)*local_420.ErrorDetails.Reference + 0x10))();
            }
          }
          if (FVar36.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar36.Data);
          }
          CompleteInstallRequest(local_408,local_400);
          if (local_430.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_430.Data);
          }
        }
LAB_1445ed84c:
        local_f0 = 0;
        if (local_f8 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_f8);
        }
        TSparseArray<TSparseSetElement<FPackageId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<FPackageId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<FPackageId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_138);
      }
      else {
        pFVar25 = TSharedPtr<UE::IoStore::FOnDemandInternalContentHandle,1>::operator->
                            ((TSharedPtr<UE::IoStore::FOnDemandInternalContentHandle,1> *)
                             &(param_1->Variant).field_0x30);
        pwVar26 = (pFVar25->DebugName).Chars;
        pwVar31 = L"";
        if (pwVar26 != (wchar_t *)0x0) {
          pwVar31 = pwVar26;
        }
        pwVar26 = wcsstr(pwVar31,(wchar_t *)FVar36.Data);
        if (pwVar26 == (wchar_t *)0x0) {
          pwVar31 = L"";
          pwVar26 = *(wchar_t **)&(param_1->Variant).field_0x48;
          if (CVars::IoStoreErrorOnRequest.Data.ArrayNum != 0) {
            pwVar31 = (wchar_t *)CVars::IoStoreErrorOnRequest.Data.AllocatorInstance;
          }
          pwVar29 = L"";
          if (pwVar26 != (wchar_t *)0x0) {
            pwVar29 = pwVar26;
          }
          pwVar26 = wcsstr(pwVar29,pwVar31);
          if (pwVar26 == (wchar_t *)0x0) goto LAB_1445ecd39;
        }
        ::FString::PrintfImpl(&local_208,L"Debug error requested on debug name %s");
        pFVar21 = ::FString::FString(&local_188,L"InstallArgs");
        pFVar23 = UnifiedError::Core::ArgumentError::MakeError(&local_3c0,pFVar21,&local_208);
        UnifiedError::FError::FError(&local_2e8,pFVar23);
        local_2d8 = '\x01';
        pTVar32 = &param_1->Result;
        if (&local_2e8 == (FError *)pTVar32) {
LAB_1445ecce8:
          if (local_2e8.ErrorDetails.Reference != (IErrorDetails *)0x0) {
            (**(code **)((longlong)*local_2e8.ErrorDetails.Reference + 0x10))();
          }
        }
        else {
          if ((param_1->Result).Error.bIsSet != false) {
            (pTVar32->Error).TypedValue.ErrorCode = 0;
            (pTVar32->Error).TypedValue.ModuleId = 0;
            pIVar34 = (param_1->Result).Error.TypedValue.ErrorDetails.Reference;
            if (pIVar34 != (IErrorDetails *)0x0) {
              (param_1->Result).Error.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
              (**(code **)((longlong)*pIVar34 + 0x10))();
            }
            pIVar34 = (param_1->Result).Error.TypedValue.ErrorDetails.Reference;
            if (pIVar34 != (IErrorDetails *)0x0) {
              (**(code **)((longlong)*pIVar34 + 0x10))();
            }
          }
          UnifiedError::FError::FError((FError *)pTVar32,&local_2e8);
          (param_1->Result).Error.bIsSet = true;
          if (local_2d8 != '\0') goto LAB_1445ecce8;
        }
        TVar13.Reference = local_3c0.ErrorDetails.Reference;
        local_3c0.ErrorCode = 0;
        local_3c0.ModuleId = 0;
        if (local_3c0.ErrorDetails.Reference != (IErrorDetails *)0x0) {
          local_3c0.ErrorDetails.Reference = (IErrorDetails *)0x0;
          (**(code **)((longlong)*TVar13.Reference + 0x10))();
          if (local_3c0.ErrorDetails.Reference != (IErrorDetails *)0x0) {
            (**(code **)((longlong)*local_3c0.ErrorDetails.Reference + 0x10))();
            CompleteInstallRequest(local_408,param_1);
            goto LAB_1445ed870;
          }
        }
LAB_1445ecdd9:
        CompleteInstallRequest(local_408,param_1);
      }
    }
    else {
      pFVar21 = FIoStatus::ToString(&local_380,&local_1a8);
      pFVar22 = ::FString::FString(&local_198,L"InstallArgs");
      pFVar23 = UnifiedError::Core::ArgumentError::MakeError(&local_3d0,pFVar22,pFVar21);
      UnifiedError::FError::FError(&local_300,pFVar23);
      local_2f0 = '\x01';
      pTVar32 = &param_1->Result;
      if (&local_300 == (FError *)pTVar32) {
LAB_1445ecb65:
        if (local_300.ErrorDetails.Reference != (IErrorDetails *)0x0) {
          (**(code **)((longlong)*local_300.ErrorDetails.Reference + 0x10))();
        }
      }
      else {
        if ((param_1->Result).Error.bIsSet != false) {
          (pTVar32->Error).TypedValue.ErrorCode = 0;
          (pTVar32->Error).TypedValue.ModuleId = 0;
          pIVar34 = (param_1->Result).Error.TypedValue.ErrorDetails.Reference;
          if (pIVar34 != (IErrorDetails *)0x0) {
            (param_1->Result).Error.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
            (**(code **)((longlong)*pIVar34 + 0x10))();
          }
          pIVar34 = (param_1->Result).Error.TypedValue.ErrorDetails.Reference;
          if (pIVar34 != (IErrorDetails *)0x0) {
            (**(code **)((longlong)*pIVar34 + 0x10))();
          }
        }
        UnifiedError::FError::FError((FError *)pTVar32,&local_300);
        (param_1->Result).Error.bIsSet = true;
        if (local_2f0 != '\0') goto LAB_1445ecb65;
      }
      TVar13.Reference = local_3d0.ErrorDetails.Reference;
      local_3d0.ErrorCode = 0;
      local_3d0.ModuleId = 0;
      if (local_3d0.ErrorDetails.Reference != (IErrorDetails *)0x0) {
        local_3d0.ErrorDetails.Reference = (IErrorDetails *)0x0;
        (**(code **)((longlong)*TVar13.Reference + 0x10))();
        if (local_3d0.ErrorDetails.Reference != (IErrorDetails *)0x0) {
          (**(code **)((longlong)*local_3d0.ErrorDetails.Reference + 0x10))();
        }
      }
      CompleteInstallRequest(this,param_1);
      FIoStatus::~FIoStatus(&local_380);
    }
LAB_1445ed870:
    local_50 = 0;
    if (local_58 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_58);
    }
    TSparseArray<TSparseSetElement<FPackageId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FPackageId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FPackageId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
    local_a0 = 0;
    if (local_a8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_a8);
    }
    TSparseArray<TSparseSetElement<TSharedPtr<UE::IoStore::FOnDemandContainer,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TSharedPtr<UE::IoStore::FOnDemandContainer,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TSharedPtr<UE::IoStore::FOnDemandContainer,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_e8);
    goto LAB_1445ed8b8;
  }
  pFVar21 = ::FString::FString(&local_1c8,L"Invalid content handle");
  pFVar22 = ::FString::FString(&local_1b8,L"ContentHandle");
  pFVar23 = UnifiedError::Core::ArgumentError::MakeError(&local_3e0,pFVar22,pFVar21);
  UnifiedError::FError::FError(&local_318,pFVar23);
  local_308 = '\x01';
  pTVar32 = &param_1->Result;
  if (&local_318 == (FError *)pTVar32) {
LAB_1445ec8bc:
    if (local_318.ErrorDetails.Reference != (IErrorDetails *)0x0) {
      (**(code **)((longlong)*local_318.ErrorDetails.Reference + 0x10))();
    }
  }
  else {
    if ((param_1->Result).Error.bIsSet != false) {
      (pTVar32->Error).TypedValue.ErrorCode = 0;
      (pTVar32->Error).TypedValue.ModuleId = 0;
      pIVar34 = (param_1->Result).Error.TypedValue.ErrorDetails.Reference;
      if (pIVar34 != (IErrorDetails *)0x0) {
        (param_1->Result).Error.TypedValue.ErrorDetails.Reference = (IErrorDetails *)0x0;
        (**(code **)((longlong)*pIVar34 + 0x10))();
      }
      pIVar34 = (param_1->Result).Error.TypedValue.ErrorDetails.Reference;
      if (pIVar34 != (IErrorDetails *)0x0) {
        (**(code **)((longlong)*pIVar34 + 0x10))();
      }
    }
    UnifiedError::FError::FError((FError *)pTVar32,&local_318);
    (param_1->Result).Error.bIsSet = true;
    if (local_308 != '\0') goto LAB_1445ec8bc;
  }
  TVar13.Reference = local_3e0.ErrorDetails.Reference;
  local_3e0.ErrorCode = 0;
  local_3e0.ModuleId = 0;
  if (local_3e0.ErrorDetails.Reference != (IErrorDetails *)0x0) {
    local_3e0.ErrorDetails.Reference = (IErrorDetails *)0x0;
    (**(code **)((longlong)*TVar13.Reference + 0x10))();
    if (local_3e0.ErrorDetails.Reference != (IErrorDetails *)0x0) {
      (**(code **)((longlong)*local_3e0.ErrorDetails.Reference + 0x10))();
    }
  }
  CompleteInstallRequest(this,param_1);
LAB_1445ed8b8:
  if (bVar37) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ReportAnalytics @ 1445f71e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandContentInstaller::ReportAnalytics
          (FOnDemandContentInstaller *this,
          TArray<FAnalyticsEventAttribute,TSizedDefaultAllocator<32>_> *param_1)

{
  FOnDemandContentInstallerStats::ReportAnalytics(param_1);
  return;
}

// RequestSortPredicate @ 1445f82e0

bool __cdecl
UE::IoStore::FOnDemandContentInstaller::RequestSortPredicate(FRequest *param_1,FRequest *param_2)

{
  if ((param_1->Variant).TypeIndex == (param_2->Variant).TypeIndex) {
    if (param_1->Priority != param_2->Priority) {
      return param_2->Priority <= param_1->Priority;
    }
  }
  return param_1->SeqNo < param_2->SeqNo;
}

// Shutdown @ 144600310

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall UE::IoStore::FOnDemandContentInstaller::Shutdown(FOnDemandContentInstaller *this)

{
  FMutex *pFVar1;
  int *piVar2;
  atomic<unsigned_char> aVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  uint *puVar6;
  uint *puVar7;
  code *pcVar8;
  int iVar9;
  double dVar10;
  int iVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  bool bVar16;
  undefined1 auVar17 [16];
  undefined1 local_res8 [16];
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  longlong local_78;
  FOnDemandContentInstaller *local_70;
  longlong local_68;
  
  LOCK();
  this->bShuttingDown = (atomic<bool>)0x1;
  UNLOCK();
  QueryPerformanceCounter(&local_res20);
  LOCK();
  bVar16 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar16) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar16) {
    FMutex::LockSlow(&this->Mutex);
  }
  pFVar15 = (this->RunningRequests).AllocatorInstance.Data;
  iVar11 = (this->RunningRequests).ArrayNum;
  pFVar5 = pFVar15 + (longlong)iVar11 * 8;
  while( true ) {
    if ((this->RunningRequests).ArrayNum != iVar11) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::IoStore::FOnDemandContentInstaller::FRequest_*,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar15 == pFVar5) break;
    lVar4 = *(longlong *)pFVar15;
    pFVar15 = pFVar15 + 8;
    *(undefined1 *)(lVar4 + 0x28) = 1;
  }
  LOCK();
  pFVar1 = &this->Mutex;
  aVar3 = pFVar1->State;
  pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
  UNLOCK();
  if (((byte)aVar3 & 2) != 0) {
    FMutex::WakeWaitingThread(&this->Mutex);
  }
  QueryPerformanceCounter(&local_res18);
  dVar10 = __real_4014000000000000;
  if ((double)(ulonglong)(local_res18.QuadPart - (longlong)local_res20) *
      FGenericPlatformTime::SecondsPerCycle64 <= __real_4014000000000000) {
    auVar17._8_8_ = 0;
    auVar17._0_8_ = __real_416312d010000000;
    auVar17 = roundpd(auVar17,auVar17,1);
    do {
      Tasks::FPipe::WaitUntilEmpty(&this->InstallerPipe,(FTimespan)(longlong)auVar17._0_8_);
      LOCK();
      bVar16 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
      if (bVar16) {
        (this->Mutex).State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar16) {
        FMutex::LockSlow(&this->Mutex);
      }
      iVar11 = (this->RunningRequests).ArrayNum;
      LOCK();
      pFVar1 = &this->Mutex;
      aVar3 = pFVar1->State;
      pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
      UNLOCK();
      bVar12 = (byte)aVar3 & 2;
      if (iVar11 == 0) {
        if (bVar12 != 0) {
          FMutex::WakeWaitingThread(&this->Mutex);
        }
        goto LAB_1446004d8;
      }
      if (bVar12 != 0) {
        FMutex::WakeWaitingThread(&this->Mutex);
      }
      QueryPerformanceCounter(&local_res18);
    } while ((double)(ulonglong)(local_res18.QuadPart - (longlong)local_res20) *
             FGenericPlatformTime::SecondsPerCycle64 <= dVar10);
  }
  if (2 < (byte)LogIoStoreOnDemand._0_1_) {
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
  }
LAB_1446004d8:
  LOCK();
  bVar16 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar16) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar16) {
    FMutex::LockSlow(&this->Mutex);
  }
  if ((1 < (byte)LogIoStoreOnDemand._0_1_) && ((this->RunningRequests).ArrayNum != 0)) {
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
  }
  piVar2 = &(this->RunningRequests).ArrayMax;
  (this->RunningRequests).ArrayNum = 0;
  if ((this->RunningRequests).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->RunningRequests).AllocatorInstance,0,piVar2);
  }
  LOCK();
  pFVar1 = &this->Mutex;
  aVar3 = pFVar1->State;
  pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
  UNLOCK();
  if (((byte)aVar3 & 2) != 0) {
    FMutex::WakeWaitingThread(&this->Mutex);
  }
  do {
    local_78 = 0;
    LOCK();
    bVar16 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
    if (bVar16) {
      (this->Mutex).State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar16) {
      FMutex::LockSlow(&this->Mutex);
    }
    iVar11 = (this->RequestQueue).ArrayNum;
    if (iVar11 != 0) {
      if ((iVar11 < 1) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_78 = *(longlong *)(this->RequestQueue).AllocatorInstance.Data;
      if (((this->RequestQueue).ArrayNum < 1) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar16)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar14 = (this->RequestQueue).ArrayNum;
      pFVar5 = (this->RequestQueue).AllocatorInstance.Data;
      iVar11 = iVar14 + -1;
      if (1 < iVar11) {
        iVar11 = 1;
      }
      if (iVar11 != 0) {
        memmove(pFVar5,pFVar5 + (longlong)(iVar14 - iVar11) * 8,(longlong)iVar11 << 3);
      }
      pFVar5 = (this->RequestQueue).AllocatorInstance.Data;
      iVar14 = (this->RequestQueue).ArrayNum + -1;
      (this->RequestQueue).ArrayNum = iVar14;
      iVar11 = 0;
      if (1 < iVar14) {
        do {
          iVar9 = iVar11 * 2;
          iVar13 = iVar9 + 1;
          if (iVar9 + 2 < iVar14) {
            puVar6 = *(uint **)(pFVar5 + (longlong)iVar9 * 8 + 0x10);
            puVar7 = *(uint **)(pFVar5 + (longlong)iVar13 * 8);
            if ((char)puVar7[0x50] == (char)puVar6[0x50]) {
              if (puVar7[1] == puVar6[1]) goto LAB_1446006a2;
              bVar16 = (int)puVar6[1] <= (int)puVar7[1];
            }
            else {
LAB_1446006a2:
              bVar16 = *puVar7 < *puVar6;
            }
            if (bVar16) {
              iVar13 = iVar9;
            }
            iVar13 = iVar13 + 1;
          }
          puVar6 = *(uint **)(pFVar5 + (longlong)iVar11 * 8);
          puVar7 = *(uint **)(pFVar5 + (longlong)iVar13 * 8);
          if ((char)puVar7[0x50] == (char)puVar6[0x50]) {
            if (puVar7[1] == puVar6[1]) goto LAB_1446006de;
            bVar16 = (int)puVar6[1] <= (int)puVar7[1];
          }
          else {
LAB_1446006de:
            bVar16 = *puVar7 < *puVar6;
          }
          if (!bVar16) break;
          *(uint **)(pFVar5 + (longlong)iVar11 * 8) = puVar7;
          *(uint **)(pFVar5 + (longlong)iVar13 * 8) = puVar6;
          iVar11 = iVar13;
        } while (iVar13 * 2 + 1 < iVar14);
      }
      pFVar5 = (this->RunningRequests).AllocatorInstance.Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_78) &&
          ((FScriptContainerElement *)&local_78 < pFVar5 + (longlong)*piVar2 * 8)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar16)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar11 = (this->RunningRequests).ArrayNum;
      if (iVar11 == *piVar2) {
        iVar11 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&(this->RunningRequests).AllocatorInstance,piVar2);
      }
      (this->RunningRequests).ArrayNum = iVar11 + 1;
      *(longlong *)((this->RunningRequests).AllocatorInstance.Data + (longlong)iVar11 * 8) =
           local_78;
    }
    LOCK();
    pFVar1 = &this->Mutex;
    aVar3 = pFVar1->State;
    pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
    UNLOCK();
    if (((byte)aVar3 & 2) != 0) {
      FMutex::WakeWaitingThread(&this->Mutex);
    }
    if (local_78 == 0) {
      return;
    }
    *(undefined1 *)(local_78 + 0x28) = 1;
    local_68 = local_78;
    local_70 = this;
    (*(code *)(&
              PTR_VisitApplyEncoded<0,0,_UE::IoStore::FOnDemandContentInstaller::ExecuteRequest_::__l2::FVisitor_&,TVariant<FEmptyVariantState,UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,UE::IoStore::FOnDemandContentInstaller::FRequest::FPurge,UE::IoStore::FOnDemandContentInstaller::FRequest::FDefrag,UE::IoStore::FOnDemandContentInstaller::FRequest::FVerify,UE::IoStore::FOnDemandContentInstaller::FRequest::FFlushLastAccess>_&>_150d7f340
              )[*(byte *)(local_78 + 0x140)])(&local_70);
    if (((this->RunningRequests).ArrayNum != 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("RunningRequests.IsEmpty()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandContentInstaller.cpp"
                            ,0x6bc,L""), bVar16)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  } while( true );
}

// TryCancelHttpRequestsForInstallRequest @ 144605810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandContentInstaller::TryCancelHttpRequestsForInstallRequest
          (FOnDemandContentInstaller *this,FInstall *param_1,int *param_2)

{
  FScriptContainerElement *pFVar1;
  FIoHash *pFVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 *puVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  undefined1 auStack_198 [32];
  longlong local_178;
  longlong local_170;
  undefined1 local_168 [4];
  int local_164;
  TMultiMap<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest,1>_>
  *local_160;
  FIoHash *pFStack_158;
  int local_150;
  int iStack_14c;
  int *local_148;
  TBaseKeyIterator<0> local_140;
  FIoHash *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  int *local_118;
  FOnDemandContentInstaller *local_110;
  int *local_108;
  TArrayView<unsigned_char_const_,int> local_f8;
  TStringBuilderBase<wchar_t> local_e8;
  wchar_t local_c8 [64];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_198;
  local_164 = 0;
  if (!CVars::bContentInstallerEnableHttpCancel) {
    *param_2 = 0;
    return;
  }
  pFVar15 = (param_1->HttpRequestHandles).AllocatorInstance.Data;
  iVar3 = (param_1->HttpRequestHandles).ArrayNum;
  pFVar1 = pFVar15 + (longlong)iVar3 * 0x18;
  local_148 = param_2;
LAB_144605897:
  do {
    if ((param_1->HttpRequestHandles).ArrayNum != iVar3) {
      local_168[0] = 0;
      `TCheckedPointerIterator<UE::IoStore::FOnDemandContentInstaller::FChunkHttpRequestHandle,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_168);
    }
    if (pFVar15 == pFVar1) {
      *local_148 = local_164;
      return;
    }
    uVar4 = *(uint *)(pFVar15 + 0x10);
    lVar14 = (longlong)(int)uVar4;
    iVar11 = (param_1->ResolvedChunks).ArrayNum;
    uVar10 = 0;
    if ((int)uVar4 < iVar11) {
      uVar10 = ~uVar4 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (local_178 = lVar14, local_170 = (longlong)iVar11,
       bVar9 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar5 = (param_1->ResolvedChunks).AllocatorInstance.Data;
    if ((*(longlong *)(pFVar5 + lVar14 * 0x28) == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar14 = *(longlong *)(pFVar5 + lVar14 * 0x28);
    uVar4 = *(uint *)(pFVar15 + 0x14);
    iVar11 = *(int *)(lVar14 + 0xe0);
    uVar10 = 0;
    if ((int)uVar4 < iVar11) {
      uVar10 = ~uVar4 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (local_178 = (longlong)(int)uVar4, local_170 = (longlong)iVar11,
       bVar9 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_160 = &this->PendingChunkDownloads;
    local_150 = -1;
    pFVar2 = (FIoHash *)(*(longlong *)(lVar14 + 0xd8) + (longlong)(int)uVar4 * 0x28);
    iVar11 = *(int *)&(this->PendingChunkDownloads).field_0x48;
    if (iVar11 == 0) {
      iStack_14c = -1;
    }
    else {
      puVar6 = *(undefined1 **)&(this->PendingChunkDownloads).field_0x40;
      puVar13 = &(this->PendingChunkDownloads).field_0x38;
      if (puVar6 != (undefined1 *)0x0) {
        puVar13 = puVar6;
      }
      iStack_14c = *(int *)(puVar13 + ((longlong)iVar11 - 1U & (longlong)*(int *)pFVar2->Hash) * 4);
      local_150 = iStack_14c;
      if (iStack_14c != -1) {
        lVar14 = *(longlong *)&local_160->field_0x0;
        do {
          lVar12 = (longlong)local_150;
          iStack_14c = *(int *)(lVar14 + 0x40 + lVar12 * 0x48);
          if (((*(longlong *)(lVar14 + lVar12 * 0x48) == *(longlong *)pFVar2->Hash) &&
              (*(longlong *)(lVar14 + 8 + lVar12 * 0x48) == *(longlong *)(pFVar2->Hash + 8))) &&
             (*(int *)(lVar14 + 0x10 + lVar12 * 0x48) == *(int *)(pFVar2->Hash + 0x10))) break;
          local_150 = iStack_14c;
        } while (iStack_14c != -1);
      }
    }
    local_140.NextIndex = iStack_14c;
    local_140.Index = local_150;
    iVar11 = local_150;
    pFStack_158 = pFVar2;
    local_140.Set =
         (TSet<TTuple<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest>,TDefaultMapHashableKeyFuncs<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest,1>,FDefaultSetAllocator>
          *)local_160;
    local_140.Key = pFVar2;
    if (local_150 == -1) goto LAB_144605b9b;
    do {
      lVar14 = *(longlong *)&(local_140.Set)->Elements + (longlong)iVar11 * 0x48;
      if (*(char *)(*(longlong *)&(local_140.Set)->Elements + 0x3c + (longlong)iVar11 * 0x48) ==
          '\0') {
        puVar7 = *(undefined8 **)(lVar14 + 0x28);
        goto joined_r0x000144605aaf;
      }
      TSet<TTuple<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest>,TDefaultMapHashableKeyFuncs<FIoHash,UE::IoStore::FOnDemandContentInstaller::FChunkDownloadRequest,1>,FDefaultSetAllocator>
      ::TBaseKeyIterator<0>::operator++(&local_140);
      iVar11 = local_140.Index;
    } while (local_140.Index != -1);
    pFVar15 = pFVar15 + 0x18;
  } while( true );
joined_r0x000144605aaf:
  if (puVar7 == (undefined8 *)0x0) goto LAB_144605acd;
  if ((*(char *)(puVar7[1] + 0x28) == '\0') && (*(char *)(puVar7[1] + 0x20) == '\0'))
  goto LAB_144605b9b;
  puVar7 = (undefined8 *)*puVar7;
  goto joined_r0x000144605aaf;
LAB_144605acd:
  local_118 = &local_164;
  local_108 = &local_164;
  local_110 = this;
  (*(code *)(&
            PTR_VisitApplyEncoded<0,0,UE::Core::Private::TOverload<_UE::IoStore::FOnDemandContentInstaller::TryCancelHttpRequestsForInstallRequest_::__l27::<lambda_1>,_UE::IoStore::FOnDemandContentInstaller::TryCancelHttpRequestsForInstallRequest_::__l27::<lambda_2>_>,TVariant<void_*,UE::FIoHttpRequest>_&>_150d80138
            )[*(byte *)(lVar14 + 0x20)])(&local_118,lVar14 + 0x18);
  *(undefined1 *)(lVar14 + 0x3c) = 1;
  if (5 < (byte)LogIoStoreOnDemand._0_1_) {
    local_e8.Base = local_c8;
    local_e8.CurPos = local_c8;
    local_e8.End = (wchar_t *)local_48;
    uStack_120 = 0x14;
    local_f8._12_4_ = uStack_11c;
    local_f8.ArrayNum = 0x14;
    local_e8.bIsDynamic = false;
    local_e8.bIsExternal = false;
    local_128 = pFVar2;
    local_f8.DataPtr = (uchar *)pFVar2;
    String::BytesToHexLower(&local_f8,&local_e8);
    if (local_e8.End < local_e8.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_e8,1);
    }
    *local_e8.CurPos = L'\0';
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogIoStoreOnDemand);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_e8);
  }
LAB_144605b9b:
  pFVar15 = pFVar15 + 0x18;
  goto LAB_144605897;
}

// TryExecuteNextRequest @ 1446069c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandContentInstaller::TryExecuteNextRequest(FOnDemandContentInstaller *this)

{
  int *piVar1;
  FMutex *pFVar2;
  atomic<unsigned___int64> *paVar3;
  atomic<unsigned_int> *paVar4;
  atomic<unsigned_char> aVar5;
  atomic<unsigned_int> aVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  uint *puVar11;
  uint *puVar12;
  code *pcVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  FTaskBase *this_00;
  FTaskBase *pFVar17;
  FTaskBase *this_01;
  int iVar18;
  bool bVar19;
  longlong local_38 [2];
  
  if (this->bShuttingDown != (atomic<bool>)0x0) {
    return;
  }
  this_01 = (FTaskBase *)0x0;
  do {
    local_38[0] = 0;
    LOCK();
    bVar19 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
    if (bVar19) {
      (this->Mutex).State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar19) {
      FMutex::LockSlow(&this->Mutex);
    }
    iVar8 = (this->RequestQueue).ArrayNum;
    if (iVar8 != 0) {
      if ((iVar8 < 1) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      bVar19 = CanExecuteRequest(this,*(FRequest **)(this->RequestQueue).AllocatorInstance.Data);
      if (bVar19) {
        if (((this->RequestQueue).ArrayNum < 1) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        local_38[0] = *(longlong *)(this->RequestQueue).AllocatorInstance.Data;
        if (((this->RequestQueue).ArrayNum < 1) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        iVar9 = (this->RequestQueue).ArrayNum;
        pFVar10 = (this->RequestQueue).AllocatorInstance.Data;
        iVar18 = iVar9 + -1;
        if (1 < iVar18) {
          iVar18 = 1;
        }
        if (iVar18 != 0) {
          memmove(pFVar10,pFVar10 + (longlong)(iVar9 - iVar18) * 8,(longlong)iVar18 << 3);
        }
        pFVar10 = (this->RequestQueue).AllocatorInstance.Data;
        iVar18 = (this->RequestQueue).ArrayNum + -1;
        (this->RequestQueue).ArrayNum = iVar18;
        pFVar17 = this_01;
        if (1 < iVar18) {
          do {
            iVar9 = (int)pFVar17;
            uVar14 = iVar9 * 2;
            uVar16 = uVar14 + 1;
            if ((int)(uVar14 + 2) < iVar18) {
              puVar11 = *(uint **)(pFVar10 + (longlong)(int)uVar14 * 8 + 0x10);
              puVar12 = *(uint **)(pFVar10 + (longlong)(int)uVar16 * 8);
              if ((char)puVar12[0x50] == (char)puVar11[0x50]) {
                if (puVar12[1] == puVar11[1]) goto LAB_144606b8c;
                bVar19 = (int)puVar11[1] <= (int)puVar12[1];
              }
              else {
LAB_144606b8c:
                bVar19 = *puVar12 < *puVar11;
              }
              if (bVar19) {
                uVar16 = uVar14;
              }
              uVar16 = uVar16 + 1;
            }
            puVar11 = *(uint **)(pFVar10 + (longlong)iVar9 * 8);
            puVar12 = *(uint **)(pFVar10 + (longlong)(int)uVar16 * 8);
            if ((char)puVar12[0x50] == (char)puVar11[0x50]) {
              if (puVar12[1] == puVar11[1]) goto LAB_144606bd0;
              bVar19 = (int)puVar11[1] <= (int)puVar12[1];
            }
            else {
LAB_144606bd0:
              bVar19 = *puVar12 < *puVar11;
            }
            if (!bVar19) break;
            *(uint **)(pFVar10 + (longlong)iVar9 * 8) = puVar12;
            *(uint **)(pFVar10 + (longlong)(int)uVar16 * 8) = puVar11;
            pFVar17 = (FTaskBase *)(ulonglong)uVar16;
          } while ((int)(uVar16 * 2 + 1) < iVar18);
        }
        pFVar10 = (this->RunningRequests).AllocatorInstance.Data;
        if (((pFVar10 <= (FScriptContainerElement *)local_38) &&
            ((FScriptContainerElement *)local_38 <
             pFVar10 + (longlong)(this->RunningRequests).ArrayMax * 8)) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar19)) {
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        iVar18 = (this->RunningRequests).ArrayNum;
        piVar1 = &(this->RunningRequests).ArrayMax;
        if (iVar18 == *piVar1) {
          iVar18 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&(this->RunningRequests).AllocatorInstance,piVar1);
        }
        (this->RunningRequests).ArrayNum = iVar18 + 1;
        *(longlong *)((this->RunningRequests).AllocatorInstance.Data + (longlong)iVar18 * 8) =
             local_38[0];
      }
    }
    LOCK();
    pFVar2 = &this->Mutex;
    aVar5 = pFVar2->State;
    pFVar2->State = (atomic<unsigned_char>)((char)pFVar2->State + -1);
    UNLOCK();
    if (((byte)aVar5 & 2) != 0) {
      FMutex::WakeWaitingThread(&this->Mutex);
    }
    lVar15 = local_38[0];
    if (local_38[0] == 0) {
LAB_144606da2:
      if (iVar8 != 0) {
        return;
      }
      if (CVars::bContentInstallerFlushOnIdle == false) {
        return;
      }
      LOCK();
      bVar19 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
      if (bVar19) {
        (this->Mutex).State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar19) {
        FMutex::LockSlow(&this->Mutex);
      }
      iVar8 = (this->RunningRequests).ArrayNum;
      LOCK();
      pFVar2 = &this->Mutex;
      aVar5 = pFVar2->State;
      pFVar2->State = (atomic<unsigned_char>)((char)pFVar2->State + -1);
      UNLOCK();
      if (((byte)aVar5 & 2) != 0) {
        FMutex::WakeWaitingThread(&this->Mutex);
      }
      if (iVar8 != 0) {
        return;
      }
      pFVar17 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                            *)&Tasks::Private::SmallTaskAllocator);
      if (pFVar17 != (FTaskBase *)0x0) {
        Tasks::Private::FTaskBase::FTaskBase(pFVar17,2,true);
        pFVar17->_padding_ =
             (longlong)
             &Tasks::Private::
              TExecutableTaskBase<`UE::IoStore::FOnDemandContentInstaller::TryExecuteNextRequest'::`27'::<lambda_2>,void,void>
              ::_vftable_;
        Tasks::Private::FTaskBase::Init
                  (pFVar17,L"OnDemandContentInstaller::Flush",BackgroundLow,None,None);
        pFVar17[1]._padding_ = (longlong)this;
        pFVar17->_padding_ =
             (longlong)
             &Tasks::Private::
              TExecutableTask<`UE::IoStore::FOnDemandContentInstaller::TryExecuteNextRequest'::`27'::<lambda_2>_>
              ::_vftable_;
        this_01 = pFVar17;
      }
      LOCK();
      paVar3 = &(this->InstallerPipe).TaskCount;
      *paVar3 = (atomic<unsigned___int64>)((longlong)*paVar3 + 1);
      UNLOCK();
      LOCK();
      this_01->NumLocks = (atomic<unsigned_int>)((int)this_01->NumLocks + 1);
      UNLOCK();
      this_01->Pipe = &this->InstallerPipe;
      Tasks::Private::FTaskBase::TryLaunch(this_01,0x100);
      LOCK();
      paVar4 = &this_01->RefCount;
      aVar6 = *paVar4;
      *paVar4 = (atomic<unsigned_int>)((int)*paVar4 + -1);
      UNLOCK();
      if (aVar6 != (atomic<unsigned_int>)0x1) {
        return;
      }
      (**(code **)this_01->_padding_)(this_01,1);
      return;
    }
    this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                          *)&Tasks::Private::SmallTaskAllocator);
    pFVar17 = this_01;
    if (this_00 != (FTaskBase *)0x0) {
      Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
      this_00->_padding_ =
           (longlong)
           &Tasks::Private::
            TExecutableTaskBase<`UE::IoStore::FOnDemandContentInstaller::TryExecuteNextRequest'::`7'::<lambda_1>,void,void>
            ::_vftable_;
      Tasks::Private::FTaskBase::Init
                (this_00,L"OnDemandContentInstaller::ExecuteRequest",BackgroundLow,None,None);
      this_00[1]._padding_ = (longlong)this;
      this_00[1]._padding_ = lVar15;
      this_00->_padding_ =
           (longlong)
           &Tasks::Private::
            TExecutableTask<`UE::IoStore::FOnDemandContentInstaller::TryExecuteNextRequest'::`7'::<lambda_1>_>
            ::_vftable_;
      pFVar17 = this_00;
    }
    LOCK();
    paVar3 = &(this->InstallerPipe).TaskCount;
    *paVar3 = (atomic<unsigned___int64>)((longlong)*paVar3 + 1);
    UNLOCK();
    LOCK();
    pFVar17->NumLocks = (atomic<unsigned_int>)((int)pFVar17->NumLocks + 1);
    UNLOCK();
    pFVar17->Pipe = &this->InstallerPipe;
    Tasks::Private::FTaskBase::TryLaunch(pFVar17,0x100);
    LOCK();
    paVar4 = &pFVar17->RefCount;
    aVar6 = *paVar4;
    *paVar4 = (atomic<unsigned_int>)((int)*paVar4 + -1);
    UNLOCK();
    if (aVar6 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar17->_padding_)(pFVar17,1);
    }
    bVar7 = *(byte *)(local_38[0] + 0x140);
    if ((5 < (ulonglong)bVar7) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0x12f,L""), bVar19)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    if ((*(char *)((longlong)
                   &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,FEmptyVariantState,UE::IoStore::FOnDemandContentInstaller::FRequest::FInstall,UE::IoStore::FOnDemandContentInstaller::FRequest::FPurge,UE::IoStore::FOnDemandContentInstaller::FRequest::FDefrag,UE::IoStore::FOnDemandContentInstaller::FRequest::FVerify,UE::IoStore::FOnDemandContentInstaller::FRequest::FFlushLastAccess>::IsSame(unsigned___int64)'
                    ::__l2::bIsSameType + (ulonglong)bVar7) == '\0') || (iVar8 == 0))
    goto LAB_144606da2;
  } while( true );
}

// UpdateInstallRequestPriority @ 14460bca0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandContentInstaller::UpdateInstallRequestPriority
          (FOnDemandContentInstaller *this,
          TSharedPtr<UE::IoStore::FOnDemandInternalInstallRequest,1> *param_1,int param_2)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned_int> *paVar2;
  atomic<unsigned_int> aVar3;
  FOnDemandInternalInstallRequest *pFVar4;
  FTaskBase *this_00;
  TReferenceControllerBase<1> *pTVar5;
  
  pTVar5 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar4 = param_1->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&Tasks::Private::SmallTaskAllocator);
  if (this_00 == (FTaskBase *)0x0) {
    this_00 = (FTaskBase *)0x0;
  }
  else {
    Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
    this_00->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTaskBase<`UE::IoStore::FOnDemandContentInstaller::UpdateInstallRequestPriority'::`2'::<lambda_1>,void,void>
          ::_vftable_;
    Tasks::Private::FTaskBase::Init
              (this_00,L"UpdateIoStoreOnDemandInstallRequestPriority",Default,None,None);
    this_00[1]._padding_ = (longlong)pTVar5;
    this_00->_padding_ =
         (longlong)
         &Tasks::Private::
          TExecutableTask<`UE::IoStore::FOnDemandContentInstaller::UpdateInstallRequestPriority'::`2'::<lambda_1>_>
          ::_vftable_;
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    this_00[1]._padding_ = (longlong)this;
    this_00[1]._padding_ = (longlong)pFVar4;
    *(int *)&this_00[1]._padding_ = param_2;
  }
  LOCK();
  paVar1 = &(this->InstallerPipe).TaskCount;
  *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + 1);
  UNLOCK();
  LOCK();
  this_00->NumLocks = (atomic<unsigned_int>)((int)this_00->NumLocks + 1);
  UNLOCK();
  this_00->Pipe = &this->InstallerPipe;
  Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
  LOCK();
  paVar2 = &this_00->RefCount;
  aVar3 = *paVar2;
  *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
  UNLOCK();
  if (aVar3 == (atomic<unsigned_int>)0x1) {
    (**(code **)this_00->_padding_)(this_00,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// operator() @ 1504c1ad0

bool __thiscall
`UE::IoStore::FOnDemandContentInstaller::OnProcessDownloadedChunkNotifyRequest'::__l6::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5765499935633966257>);
  if ((bVar2) &&
     (bVar2 = UE::Assert::Private::EnsureFailed
                        (&bGEnsureHasExecuted<5765499935633966257>,&::ENSURE_Static), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

