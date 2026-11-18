// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 11

// FOnDemandPackageStoreBackend @ 1445a6040

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

FOnDemandPackageStoreBackend * __thiscall
UE::IoStore::FOnDemandPackageStoreBackend::FOnDemandPackageStoreBackend
          (FOnDemandPackageStoreBackend *this,TWeakPtr<UE::IoStore::FOnDemandIoStore,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->_padding_ = (longlong)&___7FOnDemandPackageStoreBackend_IoStore_UE__6B_;
  (this->OnDemandIoStore).Object = param_1->Object;
  (this->OnDemandIoStore).WeakReferenceCount.ReferenceController =
       (param_1->WeakReferenceCount).ReferenceController;
  (param_1->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FOnDemandIoStore *)0x0;
  (this->Containers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Containers).ArrayNum = 0;
  (this->Containers).ArrayMax = 0;
  this->Mutex = (atomic<unsigned_char>)0x0;
  this->NeedsUpdateMode = (atomic<UE::IoStore::EOnDemandPackageStoreUpdateMode>)0x1;
  pTVar3 = (param_1->WeakReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  return this;
}

// ~FOnDemandPackageStoreBackend @ 1445a9700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandPackageStoreBackend::~FOnDemandPackageStoreBackend
          (FOnDemandPackageStoreBackend *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FScriptContainerElement *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  this->_padding_ = (longlong)&___7FOnDemandPackageStoreBackend_IoStore_UE__6B_;
  DestructItems<UE::IoStore::FOnDemandPackageStoreBackend::FContainer,int>
            ((FContainer *)(this->Containers).AllocatorInstance.Data,(this->Containers).ArrayNum);
  pFVar3 = (this->Containers).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pTVar4 = (this->OnDemandIoStore).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  this->_padding_ = (longlong)&___7IPackageStoreBackend__6B_;
  return;
}

// BeginRead @ 1445b4800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001445b4b49) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandPackageStoreBackend::BeginRead(FOnDemandPackageStoreBackend *this)

{
  FMutex *pFVar1;
  atomic<UE::IoStore::EOnDemandPackageStoreUpdateMode> aVar2;
  atomic<unsigned_char> aVar3;
  int iVar4;
  code *pcVar5;
  atomic<int> aVar6;
  atomic<int> aVar7;
  int iVar8;
  FScriptContainerElement *_Dst;
  char cVar9;
  FScriptContainerElement *pFVar10;
  FOnDemandIoStore *this_00;
  FScriptContainerElement *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  bool bVar13;
  undefined1 auStackY_d8 [32];
  undefined1 local_88;
  char local_87;
  TArray<TBitArray<FDefaultBitArrayAllocator>,TSizedDefaultAllocator<32>_> local_80;
  TArray<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,TSizedDefaultAllocator<32>_> local_70;
  TReferenceControllerBase<1> *local_60;
  TBitArray<FDefaultBitArrayAllocator> local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  bVar13 = CpuChannel->Enabled < 0;
  if (bVar13) {
    local_87 = '\0';
  }
  else {
    local_87 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId107,"FOnDemandPackageStoreBackend::BeginRead",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandPackageStoreBackend.cpp"
               ,0x6b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId107);
  }
  cVar9 = !bVar13;
  this_00 = (FOnDemandIoStore *)0x0;
  LOCK();
  aVar2 = this->NeedsUpdateMode;
  this->NeedsUpdateMode = (atomic<UE::IoStore::EOnDemandPackageStoreUpdateMode>)0x0;
  UNLOCK();
  if (aVar2 == (atomic<UE::IoStore::EOnDemandPackageStoreUpdateMode>)0x0) {
    pFVar1 = &this->Mutex;
    LOCK();
    bVar13 = pFVar1->State == (atomic<unsigned_char>)0x0;
    if (bVar13) {
      pFVar1->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar13) {
      FMutex::LockSlow(pFVar1);
    }
  }
  else {
    local_60 = (this->OnDemandIoStore).WeakReferenceCount.ReferenceController;
    local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_80.ArrayNum = 0;
    local_80.ArrayMax = 0;
    if (local_60 != (TReferenceControllerBase<1> *)0x0) {
      aVar6 = local_60->SharedReferenceCount;
      do {
        if (aVar6 == (atomic<int>)0x0) {
          local_60 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_1445b48f6;
        }
        LOCK();
        aVar7 = local_60->SharedReferenceCount;
        bVar13 = aVar6 == aVar7;
        if (bVar13) {
          local_60->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
          aVar7 = aVar6;
        }
        UNLOCK();
        aVar6 = aVar7;
      } while (!bVar13);
      this_00 = (this->OnDemandIoStore).Object;
    }
LAB_1445b48f6:
    pTVar12 = local_60;
    if (aVar2 == (atomic<UE::IoStore::EOnDemandPackageStoreUpdateMode>)0x1) {
      local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_70.ArrayNum = 0;
      local_70.ArrayMax = 0;
      if (this_00 != (FOnDemandIoStore *)0x0) {
        FOnDemandIoStore::GetReferencedContent(this_00,&local_70,&local_80,true);
      }
      pFVar1 = &this->Mutex;
      LOCK();
      bVar13 = pFVar1->State == (atomic<unsigned_char>)0x0;
      if (bVar13) {
        pFVar1->State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar13) {
        FMutex::LockSlow(pFVar1);
      }
      UpdateLookupTables(this,&local_70,&local_80);
      DestructItems<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,int>
                ((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)local_70.AllocatorInstance.Data,
                 local_70.ArrayNum);
      if ((TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)local_70.AllocatorInstance.Data !=
          (TSharedPtr<UE::IoStore::FOnDemandContainer,1> *)0x0) {
        FMemory::Free(local_70.AllocatorInstance.Data);
      }
    }
    else {
      if ((aVar2 != (atomic<UE::IoStore::EOnDemandPackageStoreUpdateMode>)0x2) &&
         (bVar13 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<2627176369057955973>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandPackageStoreBackend.cpp"
                              ,0x85,
                              "LocalNeedsUpdate == EOnDemandPackageStoreUpdateMode::ReferencedPackages"
                             ), bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (this_00 != (FOnDemandIoStore *)0x0) {
        iVar4 = (this->Containers).ArrayNum;
        pFVar11 = (this->Containers).AllocatorInstance.Data;
        pFVar10 = pFVar11 + (longlong)iVar4 * 0x150;
        while( true ) {
          if ((this->Containers).ArrayNum != iVar4) {
            local_88 = 0;
            `TCheckedPointerIterator<UE::IoStore::FOnDemandPackageStoreBackend::FContainer,int,0>::
            operator!='::__l2::<lambda_1>::operator()(&local_88);
          }
          pTVar12 = local_60;
          cVar9 = local_87;
          if (pFVar11 == pFVar10) break;
          pFVar1 = &this_00->ContainerMutex;
          LOCK();
          bVar13 = pFVar1->State == (atomic<unsigned_char>)0x0;
          if (bVar13) {
            pFVar1->State = (atomic<unsigned_char>)0x1;
          }
          UNLOCK();
          if (!bVar13) {
            FMutex::LockSlow(pFVar1);
          }
          if ((*(longlong *)pFVar11 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar13)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FOnDemandContainer::GetReferencedChunkEntries(*(FOnDemandContainer **)pFVar11,&local_58);
          LOCK();
          aVar3 = pFVar1->State;
          pFVar1->State = (atomic<unsigned_char>)((char)pFVar1->State + -1);
          UNLOCK();
          if (((byte)aVar3 & 2) != 0) {
            FMutex::WakeWaitingThread(pFVar1);
          }
          if (((local_80.AllocatorInstance.Data <= &local_58) &&
              (&local_58 <
               (TBitArray<FDefaultBitArrayAllocator> *)
               (local_80.AllocatorInstance.Data + (longlong)local_80.ArrayMax * 0x20))) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar8 = local_80.ArrayNum;
          if (local_80.ArrayNum == local_80.ArrayMax) {
            iVar8 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,&local_80.AllocatorInstance,&local_80.ArrayMax);
          }
          _Dst = local_80.AllocatorInstance.Data + (longlong)iVar8 * 0x20;
          local_80.ArrayNum = iVar8 + 1;
          *(undefined8 *)(_Dst + 0x10) = 0;
          if (local_58.AllocatorInstance.SecondaryData == (ForElementType<unsigned_int>)0x0) {
            memmove(_Dst,&local_58,0x10);
          }
          if (*(void **)(_Dst + 0x10) != (void *)0x0) {
            FMemory::Free(*(void **)(_Dst + 0x10));
          }
          *(ForElementType<unsigned_int> *)(_Dst + 0x10) = local_58.AllocatorInstance.SecondaryData;
          local_58.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
          *(int *)(_Dst + 0x18) = local_58.NumBits;
          *(int *)(_Dst + 0x1c) = local_58.MaxBits;
          local_58.NumBits = 0;
          local_58.MaxBits = 0;
          pFVar11 = pFVar11 + 0x150;
        }
      }
      pFVar1 = &this->Mutex;
      LOCK();
      bVar13 = pFVar1->State == (atomic<unsigned_char>)0x0;
      if (bVar13) {
        pFVar1->State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar13) {
        FMutex::LockSlow(pFVar1);
      }
      UpdateReferencedPackages(this,&local_80);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    DestructItems<TBitArray<FDefaultBitArrayAllocator>,int>
              ((TBitArray<FDefaultBitArrayAllocator> *)local_80.AllocatorInstance.Data,
               local_80.ArrayNum);
    if ((TBitArray<FDefaultBitArrayAllocator> *)local_80.AllocatorInstance.Data !=
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      FMemory::Free(local_80.AllocatorInstance.Data);
    }
  }
  if (cVar9 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// EndRead @ 1445c9cd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandPackageStoreBackend::EndRead(FOnDemandPackageStoreBackend *this)

{
  atomic<unsigned_char> aVar1;
  atomic<unsigned_char> *apaStackX_8 [4];
  
  apaStackX_8[0] = &(this->Mutex).State;
  LOCK();
  aVar1 = ((FMutex *)apaStackX_8[0])->State;
  ((FMutex *)apaStackX_8[0])->State =
       (atomic<unsigned_char>)((char)((FMutex *)apaStackX_8[0])->State + -1);
  UNLOCK();
  if (((byte)aVar1 & 2) == 0) {
    return;
  }
  ParkingLot::Private::WakeOne
            (apaStackX_8[0],
             TFunctionWithContext<unsigned___int64___cdecl(UE::ParkingLot::FWakeState)>::
             Call<_UE::TIntrusiveMutex<UE::FMutex::FParams>::WakeWaitingThread_::__l2::<lambda_1>_>,
             apaStackX_8);
  return;
}

// GetPackageRedirectInfo @ 1445d6940

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

bool __thiscall
UE::IoStore::FOnDemandPackageStoreBackend::GetPackageRedirectInfo
          (FOnDemandPackageStoreBackend *this,FPackageId param_1,FName *param_2,FPackageId *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  FPackageLocalizationManager *this_00;
  ulong64 *puVar4;
  longlong lVar5;
  FName *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  longlong local_48;
  FName local_40;
  
  pFVar8 = (this->Containers).AllocatorInstance.Data;
  iVar2 = (this->Containers).ArrayNum;
  pFVar10 = pFVar8 + (longlong)iVar2 * 0x150;
  pFVar9 = pFVar8 + 0xa0;
LAB_1445d6980:
  if ((this->Containers).ArrayNum != iVar2) {
    `TCheckedPointerIterator<UE::IoStore::FOnDemandPackageStoreBackend::FContainer,int,0>::
    operator!='::__l2::<lambda_1>::operator()(local_res8);
  }
  if (pFVar8 == pFVar10) {
    return false;
  }
  if (*(int *)(pFVar9 + 0x18) != *(int *)(pFVar9 + 0x44)) {
    pFVar7 = *(FScriptContainerElement **)(pFVar9 + 0x50);
    if (pFVar7 == (FScriptContainerElement *)0x0) {
      pFVar7 = pFVar9 + 0x48;
    }
    iVar3 = *(int *)(pFVar7 + ((ulonglong)(*(int *)(pFVar9 + 0x58) - 1) & param_1.Id & 0xffffffff) *
                              4);
    if (iVar3 != -1) {
      do {
        puVar4 = (ulong64 *)((longlong)iVar3 * 0x20 + *(longlong *)(pFVar9 + 0x10));
        if (*puVar4 == param_1.Id) {
          pFVar6 = (FName *)(puVar4 + 1);
          if (puVar4 == (ulong64 *)0x0) {
            pFVar6 = (FName *)0x0;
          }
          if (pFVar6 != (FName *)0x0) {
            *param_2 = *pFVar6;
            param_3->Id = (ulong64)pFVar6[1];
            return true;
          }
          break;
        }
        iVar3 = (int)puVar4[3];
      } while (iVar3 != -1);
    }
  }
  if (*(int *)(pFVar9 + -0x38) != *(int *)(pFVar9 + -0xc)) {
    pFVar7 = *(FScriptContainerElement **)pFVar9;
    if (pFVar7 == (FScriptContainerElement *)0x0) {
      pFVar7 = pFVar9 + -8;
    }
    iVar3 = *(int *)(pFVar7 + ((ulonglong)(*(int *)(pFVar9 + 8) - 1) & param_1.Id & 0xffffffff) * 4)
    ;
    if (iVar3 == -1) goto LAB_1445d6afd;
    do {
      lVar1 = *(longlong *)(pFVar9 + -0x40) + (longlong)iVar3 * 0x18;
      if (*(ulong64 *)(*(longlong *)(pFVar9 + -0x40) + (longlong)iVar3 * 0x18) == param_1.Id) {
        pFVar6 = (FName *)(lVar1 + 8);
        if (lVar1 == 0) {
          pFVar6 = (FName *)0x0;
        }
        if (pFVar6 == (FName *)0x0) goto LAB_1445d6afd;
        this_00 = FPackageLocalizationManager::Get();
        FPackageLocalizationManager::FindLocalizedPackageName(this_00,(FName)&local_48);
        if ((local_48 == 0) ||
           (FPackageId::FromName(&local_40), *(int *)(pFVar9 + -0x88) == *(int *)(pFVar9 + -0x5c)))
        goto LAB_1445d6afd;
        pFVar7 = *(FScriptContainerElement **)(pFVar9 + -0x50);
        if (pFVar7 == (FScriptContainerElement *)0x0) {
          pFVar7 = pFVar9 + -0x58;
        }
        iVar3 = *(int *)(pFVar7 + ((ulonglong)(*(int *)(pFVar9 + -0x48) - 1) &
                                  (ulonglong)local_40 & 0xffffffff) * 4);
        if (iVar3 == -1) goto LAB_1445d6afd;
        goto LAB_1445d6ae0;
      }
      iVar3 = *(int *)(lVar1 + 0x10);
    } while (iVar3 != -1);
    pFVar8 = pFVar8 + 0x150;
    pFVar9 = pFVar9 + 0x150;
    goto LAB_1445d6980;
  }
LAB_1445d6afd:
  pFVar8 = pFVar8 + 0x150;
  pFVar9 = pFVar9 + 0x150;
  goto LAB_1445d6980;
  while (iVar3 = *(int *)(lVar1 + 0x10), iVar3 != -1) {
LAB_1445d6ae0:
    lVar1 = *(longlong *)(pFVar9 + -0x90) + (longlong)iVar3 * 0x18;
    if (*(FName *)(*(longlong *)(pFVar9 + -0x90) + (longlong)iVar3 * 0x18) == local_40) {
      lVar5 = lVar1 + 8;
      if (lVar1 == 0) {
        lVar5 = 0;
      }
      if (lVar5 != 0) {
        *param_2 = *pFVar6;
        param_3->Id = (ulong64)local_40;
        return true;
      }
      break;
    }
  }
  goto LAB_1445d6afd;
}

// GetPackageStoreEntry @ 1445d6b80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

EPackageStoreEntryStatus __thiscall
UE::IoStore::FOnDemandPackageStoreBackend::GetPackageStoreEntry
          (FOnDemandPackageStoreBackend *this,FPackageId param_1,FName param_2,
          FPackageStoreEntry *param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  EPackageStoreEntryStatus EVar7;
  FScriptContainerElement *pFVar8;
  int *piVar9;
  uint *puVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  undefined4 uStack_2c;
  
  pFVar12 = (this->Containers).AllocatorInstance.Data;
  iVar2 = (this->Containers).ArrayNum;
  pFVar13 = pFVar12 + (longlong)iVar2 * 0x150;
  pFVar11 = pFVar12 + 0x44;
LAB_1445d6bc0:
  do {
    if ((this->Containers).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::IoStore::FOnDemandPackageStoreBackend::FContainer,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar12 == pFVar13) {
      return Missing;
    }
    if (*(int *)(pFVar11 + -0x2c) != *(int *)pFVar11) {
      pFVar8 = *(FScriptContainerElement **)(pFVar11 + 0xc);
      if (pFVar8 == (FScriptContainerElement *)0x0) {
        pFVar8 = pFVar11 + 4;
      }
      iVar6 = *(int *)(pFVar8 + ((ulonglong)(*(int *)(pFVar11 + 0x14) - 1) & param_1.Id & 0xffffffff
                                ) * 4);
      if (iVar6 != -1) {
        do {
          lVar1 = *(longlong *)(pFVar11 + -0x34) + (longlong)iVar6 * 0x18;
          if (*(ulong64 *)(*(longlong *)(pFVar11 + -0x34) + (longlong)iVar6 * 0x18) == param_1.Id) {
            puVar10 = (uint *)(lVar1 + 8);
            if (lVar1 == 0) {
              puVar10 = (uint *)0x0;
            }
            if (puVar10 != (uint *)0x0) {
              if ((*(longlong *)pFVar12 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar5)) {
                pcVar4 = (code *)swi(3);
                EVar7 = (*pcVar4)();
                return EVar7;
              }
              lVar1 = *(longlong *)pFVar12;
              if ((*(longlong *)(lVar1 + 0x20) == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x44d,L""), bVar5)) {
                pcVar4 = (code *)swi(3);
                EVar7 = (*pcVar4)();
                return EVar7;
              }
              piVar9 = (int *)(*(longlong *)(*(longlong *)(lVar1 + 0x20) + 0x18) +
                              (ulonglong)(*puVar10 & 0x7fffffff) * 0x10);
              uVar3 = piVar9[1];
              iVar2 = *piVar9;
              if ((iVar2 < 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ArrayNum >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xfe,L""), bVar5)) {
                pcVar4 = (code *)swi(3);
                EVar7 = (*pcVar4)();
                return EVar7;
              }
              (param_3->ImportedPackageIds).DataPtr =
                   (FPackageId *)((ulonglong)uVar3 + (longlong)piVar9);
              *(ulonglong *)&(param_3->ImportedPackageIds).ArrayNum = CONCAT44(uStack_2c,iVar2);
              uVar3 = piVar9[3];
              iVar2 = piVar9[2];
              if ((iVar2 < 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ArrayNum >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xfe,L""), bVar5)) {
                pcVar4 = (code *)swi(3);
                EVar7 = (*pcVar4)();
                return EVar7;
              }
              (param_3->ShaderMapHashes).DataPtr =
                   (FSHAHash *)((ulonglong)uVar3 + (longlong)(piVar9 + 2));
              *(ulonglong *)&(param_3->ShaderMapHashes).ArrayNum = CONCAT44(uStack_2c,iVar2);
              if (-1 < (int)*puVar10) {
                return NotInstalled;
              }
              return Ok;
            }
            goto LAB_1445d6c49;
          }
          iVar6 = *(int *)(lVar1 + 0x10);
        } while (iVar6 != -1);
        pFVar12 = pFVar12 + 0x150;
        pFVar11 = pFVar11 + 0x150;
        goto LAB_1445d6bc0;
      }
    }
LAB_1445d6c49:
    pFVar12 = pFVar12 + 0x150;
    pFVar11 = pFVar11 + 0x150;
  } while( true );
}

// GetSoftReferences @ 1445d7d30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

TArrayView<unsigned_int_const_,int> * __thiscall
UE::IoStore::FOnDemandPackageStoreBackend::GetSoftReferences
          (FOnDemandPackageStoreBackend *this,
          TArrayView<unsigned_int_const_,int> *__return_storage_ptr__,FPackageId param_1,
          TArrayView<FPackageId_const_,int> *param_2)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  FPackageId *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArrayView<unsigned_int_const_,int> *pTVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  undefined4 uStack_3c;
  
  pFVar12 = (this->Containers).AllocatorInstance.Data;
  iVar2 = (this->Containers).ArrayNum;
  pFVar11 = pFVar12 + (longlong)iVar2 * 0x150;
  pFVar10 = pFVar12 + 0x134;
  do {
    while( true ) {
      if ((this->Containers).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<UE::IoStore::FOnDemandPackageStoreBackend::FContainer,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar12 == pFVar11) {
        __return_storage_ptr__->DataPtr = (uint *)0x0;
        __return_storage_ptr__->ArrayNum = 0;
        return __return_storage_ptr__;
      }
      if (*(int *)(pFVar10 + -0x2c) != *(int *)pFVar10) break;
LAB_1445d7df6:
      pFVar12 = pFVar12 + 0x150;
      pFVar10 = pFVar10 + 0x150;
    }
    pFVar9 = *(FScriptContainerElement **)(pFVar10 + 0xc);
    if (*(FScriptContainerElement **)(pFVar10 + 0xc) == (FScriptContainerElement *)0x0) {
      pFVar9 = pFVar10 + 4;
    }
    iVar7 = *(int *)(pFVar9 + ((ulonglong)(*(int *)(pFVar10 + 0x14) - 1) & param_1.Id & 0xffffffff)
                              * 4);
    if (iVar7 == -1) goto LAB_1445d7df6;
    do {
      lVar1 = *(longlong *)(pFVar10 + -0x34) + (longlong)iVar7 * 0x18;
      if (*(ulong64 *)(*(longlong *)(pFVar10 + -0x34) + (longlong)iVar7 * 0x18) == param_1.Id) {
        if ((lVar1 != 0) && (piVar3 = *(int **)(lVar1 + 8), piVar3 != (int *)0x0)) {
          if ((*(longlong *)pFVar12 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar8 = (TArrayView<unsigned_int_const_,int> *)(*pcVar5)();
            return pTVar8;
          }
          lVar1 = *(longlong *)pFVar12;
          if ((*(longlong *)(lVar1 + 0x20) == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar8 = (TArrayView<unsigned_int_const_,int> *)(*pcVar5)();
            return pTVar8;
          }
          lVar1 = *(longlong *)(lVar1 + 0x20);
          pFVar4 = *(FPackageId **)(lVar1 + 0x88);
          iVar2 = *(int *)(lVar1 + 0x90);
          if ((iVar2 < 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar8 = (TArrayView<unsigned_int_const_,int> *)(*pcVar5)();
            return pTVar8;
          }
          param_2->DataPtr = pFVar4;
          *(ulonglong *)&param_2->ArrayNum = CONCAT44(uStack_3c,iVar2);
          __return_storage_ptr__->DataPtr = (uint *)((ulonglong)(uint)piVar3[1] + (longlong)piVar3);
          iVar2 = *piVar3;
          __return_storage_ptr__->ArrayNum = iVar2;
          if (-1 < iVar2) {
            return __return_storage_ptr__;
          }
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L"");
          if (!bVar6) {
            return __return_storage_ptr__;
          }
          pcVar5 = (code *)swi(3);
          pTVar8 = (TArrayView<unsigned_int_const_,int> *)(*pcVar5)();
          return pTVar8;
        }
        goto LAB_1445d7df6;
      }
      iVar7 = *(int *)(lVar1 + 0x10);
    } while (iVar7 != -1);
    pFVar12 = pFVar12 + 0x150;
    pFVar10 = pFVar10 + 0x150;
  } while( true );
}

// NeedsUpdate @ 1445e2980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandPackageStoreBackend::NeedsUpdate
          (FOnDemandPackageStoreBackend *this,EOnDemandPackageStoreUpdateMode param_1)

{
  if (param_1 != Full) {
    if (param_1 == ReferencedPackages) {
      LOCK();
      if (this->NeedsUpdateMode == (atomic<UE::IoStore::EOnDemandPackageStoreUpdateMode>)0x0) {
        this->NeedsUpdateMode = (atomic<UE::IoStore::EOnDemandPackageStoreUpdateMode>)0x2;
      }
      UNLOCK();
    }
    return;
  }
  LOCK();
  this->NeedsUpdateMode = (atomic<UE::IoStore::EOnDemandPackageStoreUpdateMode>)0x1;
  UNLOCK();
  return;
}

// OnMounted @ 1445e5900

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandPackageStoreBackend::OnMounted
          (FOnDemandPackageStoreBackend *this,
          TSharedRef<FPackageStoreBackendContext_const_,1> *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// UpdateLookupTables @ 14460c0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandPackageStoreBackend::UpdateLookupTables
          (FOnDemandPackageStoreBackend *this,
          TArray<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,TSizedDefaultAllocator<32>_> *param_1
          ,TArray<TBitArray<FDefaultBitArrayAllocator>,TSizedDefaultAllocator<32>_> *param_2)

{
  longlong lVar1;
  code *pcVar2;
  uint uVar3;
  FName FVar4;
  TArray<TBitArray<FDefaultBitArrayAllocator>,TSizedDefaultAllocator<32>_> *pTVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  FIoChunkId *pFVar12;
  FName *pFVar13;
  TTuple<FName,FPackageId> *pTVar14;
  int *piVar15;
  FPackageId *pFVar16;
  FPackageId *pFVar17;
  uint uVar18;
  uint uVar19;
  TArray<UE::IoStore::FOnDemandPackageStoreBackend::FContainer,TSizedDefaultAllocator<32>_> *pTVar20
  ;
  FScriptContainerElement *pFVar21;
  FScriptContainerElement *pFVar22;
  longlong lVar23;
  uint uVar24;
  int *piVar25;
  undefined1 auStackY_168 [32];
  undefined1 local_138;
  undefined1 local_137;
  undefined1 local_136 [2];
  uint local_134;
  int local_130;
  uint local_12c;
  uint local_128;
  FScriptContainerElement *local_120;
  uint local_118;
  uint local_114;
  int *local_110;
  longlong local_108;
  FPackageId local_100;
  FScriptContainerElement *local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  uint local_e8;
  int local_e4;
  longlong local_e0;
  int *local_d8;
  longlong local_d0;
  uint local_c8;
  uint uStack_c4;
  undefined1 local_c0 [8];
  TArray<TBitArray<FDefaultBitArrayAllocator>,TSizedDefaultAllocator<32>_> *local_b8;
  int *local_b0;
  longlong local_a8;
  TArray<UE::IoStore::FOnDemandPackageStoreBackend::FContainer,TSizedDefaultAllocator<32>_>
  *local_a0;
  int *local_98;
  TArray<TSharedPtr<UE::IoStore::FOnDemandContainer,1>,TSizedDefaultAllocator<32>_> *local_90;
  FScriptContainerElement *local_88;
  FPackageId *local_80;
  uint *local_78;
  FPackageId *local_70;
  int **local_68;
  longlong local_60;
  TReferenceControllerBase<1> *pTStack_58;
  FIoChunkId local_50;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_b8 = param_2;
  local_90 = param_1;
  if ((((byte)(this->Mutex).State & 1) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex.IsLocked()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandPackageStoreBackend.cpp"
                         ,0xe5,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pTVar20 = &this->Containers;
  uVar19 = param_1->ArrayNum;
  local_a0 = pTVar20;
  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
  }
  DestructItems<UE::IoStore::FOnDemandPackageStoreBackend::FContainer,int>
            ((FContainer *)(pTVar20->AllocatorInstance).Data,(this->Containers).ArrayNum);
  piVar15 = &(this->Containers).ArrayMax;
  (this->Containers).ArrayNum = 0;
  local_98 = piVar15;
  if (*piVar15 != uVar19) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x150,8,uVar19,&pTVar20->AllocatorInstance,0,piVar15);
  }
  local_114 = param_1->ArrayNum;
  uVar11 = (ulonglong)(int)local_114;
  pFVar21 = (param_1->AllocatorInstance).Data;
  local_88 = pFVar21 + uVar11 * 0x10;
  local_134 = 0;
  local_108 = 0;
  do {
    pFVar22 = local_88;
    local_120 = pFVar21;
    if (param_1->ArrayNum != (int)uVar11) {
      local_138 = 0;
      `TCheckedPointerIterator<TSharedPtr<UE::IoStore::FOnDemandContainer,1>_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_138);
    }
    if (pFVar21 == pFVar22) {
      return;
    }
    iVar7 = pTVar20->ArrayNum;
    if (iVar7 == *piVar15) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x150,8,&pTVar20->AllocatorInstance,piVar15);
    }
    pTVar20->ArrayNum = iVar7 + 1;
    pFVar22 = (pTVar20->AllocatorInstance).Data + (longlong)iVar7 * 0x150;
    local_f8 = pFVar22;
    DefaultConstructItems<UE::IoStore::FOnDemandPackageStoreBackend::FContainer,int>(pFVar22,1);
    lVar23 = *(longlong *)(pFVar21 + 8);
    lVar1 = *(longlong *)pFVar21;
    if (lVar23 != 0) {
      LOCK();
      *(int *)(lVar23 + 8) = *(int *)(lVar23 + 8) + 1;
      UNLOCK();
    }
    local_60 = *(longlong *)pFVar22;
    pTStack_58 = *(TReferenceControllerBase<1> **)(pFVar22 + 8);
    *(longlong *)pFVar22 = lVar1;
    *(longlong *)(pFVar22 + 8) = lVar23;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_58);
    if ((*(longlong *)pFVar21 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar23 = *(longlong *)pFVar21;
    if ((*(longlong *)(lVar23 + 0x20) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar23 = *(longlong *)(lVar23 + 0x20);
    local_d0 = lVar23;
    TSet<TTuple<FPackageId,UE::IoStore::FOnDemandPackageStoreBackend::FOnDemandPackageStoreEntry>,TDefaultMapHashableKeyFuncs<FPackageId,UE::IoStore::FOnDemandPackageStoreBackend::FOnDemandPackageStoreEntry,0>,FDefaultSetAllocator>
    ::Reserve((TSet<TTuple<FPackageId,UE::IoStore::FOnDemandPackageStoreBackend::FOnDemandPackageStoreEntry>,TDefaultMapHashableKeyFuncs<FPackageId,UE::IoStore::FOnDemandPackageStoreBackend::FOnDemandPackageStoreEntry,0>,FDefaultSetAllocator>
               *)(pFVar22 + 0x10),*(int *)(lVar23 + 0x10));
    iVar7 = *(int *)(lVar23 + 0x10);
    lVar1 = *(longlong *)(lVar23 + 0x18);
    local_e0 = lVar1;
    if ((iVar7 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    piVar15 = (int *)0x0;
    local_d8 = (int *)0x0;
    local_130 = 0;
    if (*(char *)(lVar23 + 0xa8) != '\0') {
      local_130 = *(int *)(lVar23 + 0x10);
      piVar15 = *(int **)(lVar23 + 0x98);
      local_d8 = piVar15;
      if ((local_130 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      TSet<TTuple<FPackageId,FFilePackageStoreEntrySoftReferences_const_*>,TDefaultMapHashableKeyFuncs<FPackageId,FFilePackageStoreEntrySoftReferences_const_*,0>,FDefaultSetAllocator>
      ::Reserve((TSet<TTuple<FPackageId,FFilePackageStoreEntrySoftReferences_const_*>,TDefaultMapHashableKeyFuncs<FPackageId,FFilePackageStoreEntrySoftReferences_const_*,0>,FDefaultSetAllocator>
                 *)(pFVar22 + 0x100),*(int *)(lVar23 + 0x10));
      pFVar21 = local_120;
    }
    local_a8 = (longlong)iVar7 * 0x10 + lVar1;
    local_12c = 0;
    if (lVar1 != local_a8) {
      local_128 = ~local_134 >> 0x1f;
      piVar25 = piVar15;
      do {
        uVar18 = local_128;
        uVar19 = local_12c;
        local_118 = ~local_12c >> 0x1f;
        uVar8 = 0;
        if ((int)local_12c < *(int *)(lVar23 + 0x10)) {
          uVar8 = local_118;
        }
        local_110 = piVar15;
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_100.Id = *(ulong64 *)
                        ((*(longlong *)(lVar23 + 8) - (longlong)piVar25) + (longlong)piVar15);
        CreatePackageDataChunkId(&local_50,&local_100);
        if ((*(longlong *)pFVar21 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar23 = *(longlong *)pFVar21;
        iVar7 = 0;
        uVar8 = *(uint *)(lVar23 + 0xd0);
        lVar1 = *(longlong *)(lVar23 + 200);
        uVar24 = uVar8;
        if (0 < (int)uVar8) {
          do {
            iVar10 = (uVar24 >> 1) + iVar7;
            iVar9 = memcmp((void *)(lVar1 + (longlong)iVar10 * 0xc),&local_50,0xc);
            if (iVar9 < 0) {
              iVar7 = iVar10 + (uVar24 & 1);
            }
            uVar3 = uVar24 >> 1;
            uVar19 = local_12c;
            uVar18 = local_128;
            uVar24 = uVar24 >> 1;
          } while (uVar3 != 0);
        }
        if (((iVar7 < (int)uVar8) &&
            (pFVar12 = TArrayView<FIoChunkId,int>::operator[]
                                 ((TArrayView<FIoChunkId,int> *)(lVar23 + 200),iVar7),
            *(longlong *)pFVar12->Id == local_50.Id._0_8_)) &&
           (*(int *)(pFVar12->Id + 8) == local_50.Id._8_4_)) {
          if (iVar7 == -1) goto LAB_14460c49d;
        }
        else {
          iVar7 = -1;
LAB_14460c49d:
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("PkgChunkIdx != INDEX_NONE",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandPackageStoreBackend.cpp"
                             ,0x104,L"");
          if (bVar6) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        pTVar5 = local_b8;
        uVar8 = 0;
        if ((int)local_134 < local_b8->ArrayNum) {
          uVar8 = uVar18;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar21 = (pTVar5->AllocatorInstance).Data + local_108;
        if (((iVar7 < 0) || (*(int *)(pFVar21 + 0x18) <= iVar7)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar22 = local_f8;
        if (*(FScriptContainerElement **)(pFVar21 + 0x10) != (FScriptContainerElement *)0x0) {
          pFVar21 = *(FScriptContainerElement **)(pFVar21 + 0x10);
        }
        iVar10 = iVar7;
        if (iVar7 < 0) {
          iVar10 = iVar7 + 0x1f;
        }
        local_e8 = -(uint)((1 << ((byte)iVar7 & 0x1f) &
                           *(uint *)(pFVar21 + (longlong)(iVar10 >> 5) * 4)) != 0) & 0x80000000 |
                   uVar19 & 0x7fffffff;
        local_80 = &local_100;
        local_78 = &local_e8;
        local_e4 = iVar7;
        TSet<TTuple<FPackageId,UE::IoStore::FOnDemandPackageStoreBackend::FOnDemandPackageStoreEntry>,TDefaultMapHashableKeyFuncs<FPackageId,UE::IoStore::FOnDemandPackageStoreBackend::FOnDemandPackageStoreEntry,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FPackageId_const_&,UE::IoStore::FOnDemandPackageStoreBackend::FOnDemandPackageStoreEntry_&&>_>
                  ((TSet<TTuple<FPackageId,UE::IoStore::FOnDemandPackageStoreBackend::FOnDemandPackageStoreEntry>,TDefaultMapHashableKeyFuncs<FPackageId,UE::IoStore::FOnDemandPackageStoreBackend::FOnDemandPackageStoreEntry,0>,FDefaultSetAllocator>
                    *)(local_f8 + 0x10),
                   (TPairInitializer<FPackageId_const_&,UE::IoStore::FOnDemandPackageStoreBackend::FOnDemandPackageStoreEntry_&&>
                    *)local_c0,(bool *)&local_80);
        if (local_130 != 0) {
          uVar18 = 0;
          if ((int)uVar19 < local_130) {
            uVar18 = local_118;
          }
          if ((uVar18 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          piVar15 = local_110;
          local_110 = piVar15;
          if (*local_110 != 0) {
            local_70 = &local_100;
            local_b0 = local_110;
            local_68 = &local_b0;
            TSet<TTuple<FPackageId,FFilePackageStoreEntrySoftReferences_const_*>,TDefaultMapHashableKeyFuncs<FPackageId,FFilePackageStoreEntrySoftReferences_const_*,0>,FDefaultSetAllocator>
            ::
            Emplace<TPairInitializer<FPackageId_const_&,FFilePackageStoreEntrySoftReferences_const_*_&&>_>
                      ((TSet<TTuple<FPackageId,FFilePackageStoreEntrySoftReferences_const_*>,TDefaultMapHashableKeyFuncs<FPackageId,FFilePackageStoreEntrySoftReferences_const_*,0>,FDefaultSetAllocator>
                        *)(pFVar22 + 0x100),
                       (TPairInitializer<FPackageId_const_&,FFilePackageStoreEntrySoftReferences_const_*_&&>
                        *)(local_c0 + 4),(bool *)&local_70);
            local_110 = piVar15;
          }
        }
        local_12c = uVar19 + 1;
        local_e0 = local_e0 + 0x10;
        piVar15 = local_110 + 2;
        lVar23 = local_d0;
        pFVar21 = local_120;
        piVar25 = local_d8;
        local_110 = piVar15;
      } while (local_e0 != local_a8);
    }
    TSet<TTuple<FPackageId,UE::IoStore::FOnDemandPackageStoreBackend::FOnDemandPackageStoreEntry>,TDefaultMapHashableKeyFuncs<FPackageId,UE::IoStore::FOnDemandPackageStoreBackend::FOnDemandPackageStoreEntry,0>,FDefaultSetAllocator>
    ::Shrink((TSet<TTuple<FPackageId,UE::IoStore::FOnDemandPackageStoreBackend::FOnDemandPackageStoreEntry>,TDefaultMapHashableKeyFuncs<FPackageId,UE::IoStore::FOnDemandPackageStoreBackend::FOnDemandPackageStoreEntry,0>,FDefaultSetAllocator>
              *)(pFVar22 + 0x10));
    TSet<TTuple<FPackageId,FFilePackageStoreEntrySoftReferences_const_*>,TDefaultMapHashableKeyFuncs<FPackageId,FFilePackageStoreEntrySoftReferences_const_*,0>,FDefaultSetAllocator>
    ::Shrink((TSet<TTuple<FPackageId,FFilePackageStoreEntrySoftReferences_const_*>,TDefaultMapHashableKeyFuncs<FPackageId,FFilePackageStoreEntrySoftReferences_const_*,0>,FDefaultSetAllocator>
              *)(pFVar22 + 0x100));
    iVar7 = *(int *)(lVar23 + 0x60);
    pFVar16 = *(FPackageId **)(lVar23 + 0x58);
    pFVar17 = pFVar16 + (longlong)iVar7 * 2;
    while( true ) {
      if (*(int *)(lVar23 + 0x60) != iVar7) {
        local_137 = 0;
        `TCheckedPointerIterator<FIoContainerHeaderLocalizedPackage_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(&local_137);
      }
      if (pFVar16 == pFVar17) break;
      pFVar13 = TMapBase<FPackageId,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FName,0>_>
                ::FindOrAddImpl<FPackageId_const_&>
                          ((TMapBase<FPackageId,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,FName,0>_>
                            *)(pFVar22 + 0x60),(uint)pFVar16->Id,pFVar16);
      if (*pFVar13 == (FName)0x0) {
        uVar19 = (uint)pFVar16[1].Id & 0x3fffffff;
        if ((*(int *)(lVar23 + 0x50) <= (int)uVar19) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_c8 = *(uint *)(*(longlong *)(lVar23 + 0x48) + (ulonglong)uVar19 * 4);
        uStack_c4 = *(uint *)((longlong)&pFVar16[1].Id + 4);
        FVar4.Number = uStack_c4;
        FVar4.ComparisonIndex.Value = local_c8;
        *pFVar13 = FVar4;
      }
      pFVar16 = pFVar16 + 2;
    }
    TSet<TTuple<FPackageId,FName>,TDefaultMapHashableKeyFuncs<FPackageId,FName,0>,FDefaultSetAllocator>
    ::Shrink((TSet<TTuple<FPackageId,FName>,TDefaultMapHashableKeyFuncs<FPackageId,FName,0>,FDefaultSetAllocator>
              *)(pFVar22 + 0x60));
    pFVar21 = local_f8;
    iVar7 = *(int *)(lVar23 + 0x70);
    pFVar17 = *(FPackageId **)(lVar23 + 0x68);
    pFVar16 = pFVar17 + (longlong)iVar7 * 3;
    while( true ) {
      if (*(int *)(lVar23 + 0x70) != iVar7) {
        local_136[0] = 0;
        `TCheckedPointerIterator<FIoContainerHeaderPackageRedirect_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_136);
      }
      if (pFVar17 == pFVar16) break;
      pTVar14 = TMapBase<FPackageId,TTuple<FName,FPackageId>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,TTuple<FName,FPackageId>,0>_>
                ::FindOrAddImpl<FPackageId_const_&>
                          ((TMapBase<FPackageId,TTuple<FName,FPackageId>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPackageId,TTuple<FName,FPackageId>,0>_>
                            *)(pFVar21 + 0xb0),(uint)pFVar17->Id,pFVar17);
      if (*(longlong *)pTVar14 == 0) {
        uVar19 = (uint)pFVar17[2].Id & 0x3fffffff;
        if ((*(int *)(lVar23 + 0x50) <= (int)uVar19) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_f0 = *(undefined4 *)(*(longlong *)(lVar23 + 0x48) + (ulonglong)uVar19 * 4);
        uStack_ec = *(undefined4 *)((longlong)&pFVar17[2].Id + 4);
        *(ulonglong *)pTVar14 = CONCAT44(uStack_ec,local_f0);
        *(ulong64 *)&pTVar14->field_0x8 = pFVar17[1].Id;
      }
      pFVar17 = pFVar17 + 3;
    }
    TSet<TTuple<FPackageId,TTuple<FName,FPackageId>_>,TDefaultMapHashableKeyFuncs<FPackageId,TTuple<FName,FPackageId>,0>,FDefaultSetAllocator>
    ::Shrink((TSet<TTuple<FPackageId,TTuple<FName,FPackageId>_>,TDefaultMapHashableKeyFuncs<FPackageId,TTuple<FName,FPackageId>,0>,FDefaultSetAllocator>
              *)(pFVar21 + 0xb0));
    local_134 = local_134 + 1;
    local_108 = local_108 + 0x20;
    pFVar21 = local_120 + 0x10;
    uVar11 = (ulonglong)local_114;
    piVar15 = local_98;
    pTVar20 = local_a0;
    param_1 = local_90;
  } while( true );
}

// UpdateReferencedPackages @ 14460c9d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EOnDemandContainerFlags": Some values do not have unique names */

void __thiscall
UE::IoStore::FOnDemandPackageStoreBackend::UpdateReferencedPackages
          (FOnDemandPackageStoreBackend *this,
          TArray<TBitArray<FDefaultBitArrayAllocator>,TSizedDefaultAllocator<32>_> *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  uint *puVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  byte bVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_1b8;
  undefined1 local_1b7;
  undefined1 local_1b6 [2];
  uint local_1b4;
  uint local_1b0;
  FScriptContainerElement *local_1a8;
  int iStack_1a0;
  uint uStack_19c;
  TBitArray<FDefaultBitArrayAllocator> *local_198;
  undefined4 uStack_190;
  uint uStack_18c;
  int local_188;
  undefined4 uStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  FScriptContainerElement *local_178;
  FScriptContainerElement *local_170;
  longlong local_168;
  FScriptContainerElement *local_160;
  FScriptContainerElement *local_158;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  FScriptContainerElement *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  FScriptContainerElement *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  FScriptContainerElement *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  undefined4 local_8c;
  undefined4 local_6c;
  undefined4 local_4c;
  
  if ((((byte)(this->Mutex).State & 1) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex.IsLocked()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandPackageStoreBackend.cpp"
                         ,0x13b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_1b0 = (this->Containers).ArrayNum;
  uVar7 = (ulonglong)(int)local_1b0;
  pFVar10 = (this->Containers).AllocatorInstance.Data;
  local_158 = pFVar10 + uVar7 * 0x150;
  if (param_1->ArrayNum == 0) {
    pFVar12 = pFVar10 + 0x30;
    while( true ) {
      pFVar14 = local_158;
      local_178 = pFVar10;
      if ((this->Containers).ArrayNum != (int)uVar7) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<UE::IoStore::FOnDemandPackageStoreBackend::FContainer,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (pFVar10 == pFVar14) break;
      uVar11 = *(uint *)(pFVar12 + 8);
      iStack_1a0 = 0;
      local_188 = 0;
      uStack_19c = 1;
      uStack_18c = 0;
      if (uVar11 != 0) {
        pFVar10 = *(FScriptContainerElement **)pFVar12;
        if (pFVar10 == (FScriptContainerElement *)0x0) {
          pFVar10 = pFVar12 + -0x10;
        }
        uVar15 = *(uint *)pFVar10;
        while (uVar15 == 0) {
          lVar8 = (longlong)iStack_1a0;
          local_188 = local_188 + 0x20;
          iStack_1a0 = iStack_1a0 + 1;
          uStack_18c = uVar11;
          if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_1a0)
          goto LAB_14460cb0d;
          uVar15 = *(uint *)(pFVar10 + (lVar8 + 1) * 4);
        }
        uStack_19c = -uVar15 & uVar15;
        uVar7 = (ulonglong)uStack_19c * 2 + 1;
        lVar8 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        local_150 = (int)lVar8;
        uStack_18c = local_188 + -1 + local_150;
        if ((int)uVar11 < (int)uStack_18c) {
          uStack_18c = uVar11;
        }
      }
LAB_14460cb0d:
      pFVar10 = pFVar12 + -0x20;
      pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar12 + -0x10);
      uStack_184 = local_8c;
      iStack_180 = *(int *)(pFVar12 + -0x18) - *(int *)(pFVar12 + 0x14);
      uVar15 = uVar11 & 0xffffffe0;
      TStack_130._padding_ = CONCAT44(uStack_19c,iStack_1a0);
      uStack_190 = 0xffffffff;
      TStack_130.CurrentBitIndex = uStack_18c;
      TStack_130.UnvisitedBitMask = 0xffffffff;
      TStack_130._28_4_ = local_8c;
      TStack_130.BaseBitIndex = local_188;
      uStack_110 = CONCAT44(uStack_17c,iStack_180);
      iVar9 = (int)uVar11 >> 5;
      local_1a8 = pFVar10;
      local_198 = pTVar1;
      local_138 = pFVar10;
      TStack_130.Array = pTVar1;
      if (((int)uVar11 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar3 = *(uint *)(pFVar12 + 8);
      if (uVar11 != uVar3) {
        pTVar13 = pTVar1;
        if (*(TBitArray<FDefaultBitArrayAllocator> **)pFVar12 !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar13 = *(TBitArray<FDefaultBitArrayAllocator> **)pFVar12;
        }
        uVar11 = -1 << ((byte)uVar11 & 0x1f) &
                 *(uint *)((pTVar13->AllocatorInstance).InlineData + (longlong)iVar9 * 4);
        while (uVar11 == 0) {
          lVar8 = (longlong)iVar9;
          uVar15 = uVar15 + 0x20;
          iVar9 = iVar9 + 1;
          uVar11 = uVar3;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
          goto LAB_14460cc20;
          uVar11 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar8 * 4 + 4);
        }
        uVar7 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
        lVar8 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        local_14c = (int)lVar8;
        uVar11 = local_14c + -1 + uVar15;
        if ((int)uVar3 < (int)uVar11) {
          uVar11 = uVar3;
        }
      }
LAB_14460cc20:
      while( true ) {
        pFVar14 = local_138;
        if (*(int *)(local_138 + 8) - *(int *)(local_138 + 0x34) != (int)uStack_110) {
          local_res20[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<FPackageId,UE::IoStore::FOnDemandPackageStoreBackend::FOnDemandPackageStoreEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (((TStack_130.CurrentBitIndex == uVar11) && (TStack_130.Array == pTVar1)) &&
           (pFVar14 == pFVar10)) break;
        puVar2 = (uint *)(*(longlong *)pFVar14 + 8 + (longlong)TStack_130.CurrentBitIndex * 0x18);
        *puVar2 = *puVar2 & 0x7fffffff;
        TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
      }
      pFVar10 = local_178 + 0x150;
      pFVar12 = pFVar12 + 0x150;
      uVar7 = (ulonglong)local_1b0;
    }
  }
  else {
    local_1b4 = 0;
    pFVar12 = pFVar10 + 0x30;
    lVar8 = 0;
    pFVar14 = pFVar10 + 0x20;
    while( true ) {
      pFVar16 = local_158;
      local_178 = pFVar10;
      local_170 = pFVar12;
      local_168 = lVar8;
      local_160 = pFVar14;
      if ((this->Containers).ArrayNum != (int)uVar7) {
        local_1b8 = 0;
        `TCheckedPointerIterator<UE::IoStore::FOnDemandPackageStoreBackend::FContainer,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_1b8);
      }
      if (pFVar10 == pFVar16) break;
      uVar11 = 0;
      if ((int)local_1b4 < param_1->ArrayNum) {
        uVar11 = ~local_1b4 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar16 = (param_1->AllocatorInstance).Data + lVar8;
      if (*(int *)(pFVar16 + 0x18) == 0) {
        uVar11 = *(uint *)(pFVar12 + 8);
        iStack_1a0 = 0;
        local_188 = 0;
        uStack_19c = 1;
        uStack_18c = 0;
        if (uVar11 != 0) {
          if (*(FScriptContainerElement **)pFVar12 != (FScriptContainerElement *)0x0) {
            pFVar14 = *(FScriptContainerElement **)pFVar12;
          }
          uVar15 = *(uint *)pFVar14;
          while (uVar15 == 0) {
            lVar8 = (longlong)iStack_1a0;
            local_188 = local_188 + 0x20;
            iStack_1a0 = iStack_1a0 + 1;
            uStack_18c = uVar11;
            if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_1a0)
            goto LAB_14460cdbf;
            uVar15 = *(uint *)(pFVar14 + (lVar8 + 1) * 4);
          }
          uStack_19c = -uVar15 & uVar15;
          uVar7 = (ulonglong)uStack_19c * 2 + 1;
          lVar8 = 0x3f;
          if (uVar7 != 0) {
            for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
            }
          }
          local_148 = (int)lVar8;
          uStack_18c = local_188 + -1 + local_148;
          if ((int)uVar11 < (int)uStack_18c) {
            uStack_18c = uVar11;
          }
        }
LAB_14460cdbf:
        pFVar10 = pFVar12 + -0x20;
        pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar12 + -0x10);
        uStack_184 = local_6c;
        iStack_180 = *(int *)(pFVar12 + -0x18) - *(int *)(pFVar12 + 0x14);
        uVar15 = uVar11 & 0xffffffe0;
        TStack_100._padding_ = CONCAT44(uStack_19c,iStack_1a0);
        uStack_190 = 0xffffffff;
        TStack_100.CurrentBitIndex = uStack_18c;
        TStack_100.UnvisitedBitMask = 0xffffffff;
        TStack_100._28_4_ = local_6c;
        TStack_100.BaseBitIndex = local_188;
        uStack_e0 = CONCAT44(uStack_17c,iStack_180);
        iVar9 = (int)uVar11 >> 5;
        local_1a8 = pFVar10;
        local_198 = pTVar1;
        local_108 = pFVar10;
        TStack_100.Array = pTVar1;
        if (((int)uVar11 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar3 = *(uint *)(local_170 + 8);
        if (uVar11 != uVar3) {
          pTVar13 = pTVar1;
          if (*(TBitArray<FDefaultBitArrayAllocator> **)local_170 !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar13 = *(TBitArray<FDefaultBitArrayAllocator> **)local_170;
          }
          uVar11 = -1 << ((byte)uVar11 & 0x1f) &
                   *(uint *)((pTVar13->AllocatorInstance).InlineData + (longlong)iVar9 * 4);
          while (uVar11 == 0) {
            lVar8 = (longlong)iVar9;
            uVar15 = uVar15 + 0x20;
            iVar9 = iVar9 + 1;
            uVar11 = uVar3;
            if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
            goto LAB_14460ced0;
            uVar11 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar8 * 4 + 4);
          }
          uVar7 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
          lVar8 = 0x3f;
          if (uVar7 != 0) {
            for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
            }
          }
          local_144 = (int)lVar8;
          uVar11 = local_144 + -1 + uVar15;
          if ((int)uVar3 < (int)uVar11) {
            uVar11 = uVar3;
          }
        }
LAB_14460ced0:
        while( true ) {
          pFVar12 = local_108;
          if (*(int *)(local_108 + 8) - *(int *)(local_108 + 0x34) != (int)uStack_e0) {
            local_1b7 = 0;
            `TSparseArray<TSparseSetElement<TTuple<FPackageId,UE::IoStore::FOnDemandPackageStoreBackend::FOnDemandPackageStoreEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_1b7);
          }
          if (((TStack_100.CurrentBitIndex == uVar11) && (TStack_100.Array == pTVar1)) &&
             (pFVar12 == pFVar10)) break;
          puVar2 = (uint *)(*(longlong *)pFVar12 + 8 + (longlong)TStack_100.CurrentBitIndex * 0x18);
          *puVar2 = *puVar2 & 0x7fffffff;
          TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
        }
      }
      else {
        if ((*(longlong *)pFVar10 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(int *)(*(longlong *)pFVar10 + 0xe0) != *(int *)(pFVar16 + 0x18)) &&
           (bVar5 = Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<2627176369057956181>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\IoStore\\OnDemand\\Private\\OnDemandPackageStoreBackend.cpp"
                               ,0x155,"Container.Container->ChunkEntries.Num() == Refs.Num()"),
           bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar11 = *(uint *)(pFVar12 + 8);
        iStack_1a0 = 0;
        local_188 = 0;
        uStack_19c = 1;
        uStack_18c = 0;
        if (uVar11 != 0) {
          pFVar10 = *(FScriptContainerElement **)pFVar12;
          if (pFVar10 == (FScriptContainerElement *)0x0) {
            pFVar10 = pFVar12 + -0x10;
          }
          uVar15 = *(uint *)pFVar10;
          while (uVar15 == 0) {
            lVar8 = (longlong)iStack_1a0;
            local_188 = local_188 + 0x20;
            iStack_1a0 = iStack_1a0 + 1;
            uStack_18c = uVar11;
            if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_1a0)
            goto LAB_14460d00f;
            uVar15 = *(uint *)(pFVar10 + (lVar8 + 1) * 4);
          }
          uStack_19c = -uVar15 & uVar15;
          uVar7 = (ulonglong)uStack_19c * 2 + 1;
          lVar8 = 0x3f;
          if (uVar7 != 0) {
            for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
            }
          }
          local_140 = (int)lVar8;
          uStack_18c = local_188 + -1 + local_140;
          if ((int)uVar11 < (int)uStack_18c) {
            uStack_18c = uVar11;
          }
        }
LAB_14460d00f:
        pFVar10 = pFVar12 + -0x20;
        pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar12 + -0x10);
        uStack_184 = local_4c;
        iStack_180 = *(int *)(pFVar12 + -0x18) - *(int *)(pFVar12 + 0x14);
        uVar15 = uVar11 & 0xffffffe0;
        TStack_d0._padding_ = CONCAT44(uStack_19c,iStack_1a0);
        uStack_190 = 0xffffffff;
        TStack_d0.CurrentBitIndex = uStack_18c;
        TStack_d0.UnvisitedBitMask = 0xffffffff;
        TStack_d0._28_4_ = local_4c;
        TStack_d0.BaseBitIndex = local_188;
        uStack_b0 = CONCAT44(uStack_17c,iStack_180);
        iVar9 = (int)uVar11 >> 5;
        local_1a8 = pFVar10;
        local_198 = pTVar1;
        local_d8 = pFVar10;
        TStack_d0.Array = pTVar1;
        if (((int)uVar11 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("StartIndex >= 0 && StartIndex <= Array.Num()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x7af,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar3 = *(uint *)(local_170 + 8);
        if (uVar11 != uVar3) {
          pTVar13 = pTVar1;
          if (*(TBitArray<FDefaultBitArrayAllocator> **)local_170 !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar13 = *(TBitArray<FDefaultBitArrayAllocator> **)local_170;
          }
          uVar11 = -1 << ((byte)uVar11 & 0x1f) &
                   *(uint *)((pTVar13->AllocatorInstance).InlineData + (longlong)iVar9 * 4);
          while (uVar11 == 0) {
            lVar8 = (longlong)iVar9;
            uVar15 = uVar15 + 0x20;
            iVar9 = iVar9 + 1;
            uVar11 = uVar3;
            if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
            goto LAB_14460d120;
            uVar11 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar8 * 4 + 4);
          }
          uVar7 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
          lVar8 = 0x3f;
          if (uVar7 != 0) {
            for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
            }
          }
          local_13c = (int)lVar8;
          uVar11 = (uVar15 - 1) + local_13c;
          if ((int)uVar3 < (int)uVar11) {
            uVar11 = uVar3;
          }
        }
LAB_14460d120:
        while( true ) {
          pFVar12 = local_d8;
          if (*(int *)(local_d8 + 8) - *(int *)(local_d8 + 0x34) != (int)uStack_b0) {
            local_1b6[0] = 0;
            `TSparseArray<TSparseSetElement<TTuple<FPackageId,UE::IoStore::FOnDemandPackageStoreBackend::FOnDemandPackageStoreEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1b6);
          }
          if (((TStack_d0.CurrentBitIndex == uVar11) && (TStack_d0.Array == pTVar1)) &&
             (pFVar12 == pFVar10)) break;
          lVar8 = *(longlong *)pFVar12;
          iVar9 = *(int *)(lVar8 + 0xc + (longlong)TStack_d0.CurrentBitIndex * 0x18);
          lVar8 = lVar8 + (longlong)TStack_d0.CurrentBitIndex * 0x18;
          if (((iVar9 < 0) || (*(int *)(pFVar16 + 0x18) <= iVar9)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5c6,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar12 = pFVar16;
          if (*(FScriptContainerElement **)(pFVar16 + 0x10) != (FScriptContainerElement *)0x0) {
            pFVar12 = *(FScriptContainerElement **)(pFVar16 + 0x10);
          }
          bVar6 = (byte)iVar9;
          if (iVar9 < 0) {
            iVar9 = iVar9 + 0x1f;
          }
          *(uint *)(lVar8 + 8) =
               -(uint)((1 << (bVar6 & 0x1f) & *(uint *)(pFVar12 + (longlong)(iVar9 >> 5) * 4)) != 0)
               & 0x80000000 | *(uint *)(lVar8 + 8) & 0x7fffffff;
          TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
        }
      }
      pFVar10 = local_178 + 0x150;
      local_1b4 = local_1b4 + 1;
      lVar8 = local_168 + 0x20;
      pFVar12 = local_170 + 0x150;
      pFVar14 = local_160 + 0x150;
      uVar7 = (ulonglong)local_1b0;
    }
  }
  return;
}

