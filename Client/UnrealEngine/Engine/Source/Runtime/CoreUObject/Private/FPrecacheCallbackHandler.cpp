// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 7

// operator() @ 141ed7820

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FPrecacheCallbackHandler::FPrecacheCallbackHandler'::__l2::<lambda_1>::operator()
          (void *this,bool param_1,IAsyncReadRequest *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FPrecacheCallbackHandler *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  IAsyncReadRequest *local_18 [2];
  
  this_00 = *(FPrecacheCallbackHandler **)this;
  local_18[0] = param_2;
  if (param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bWasCanceled",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                       ,0x5fc,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lpCriticalSection = &this_00->IncomingLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar2 = (this_00->Incoming).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this_00->Incoming).ArrayMax * 8))
    {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (this_00->Incoming).ArrayNum;
    piVar1 = &(this_00->Incoming).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this_00->Incoming).AllocatorInstance,piVar1);
    }
    (this_00->Incoming).ArrayNum = iVar5 + 1;
    *(IAsyncReadRequest **)((this_00->Incoming).AllocatorInstance.Data + (longlong)iVar5 * 8) =
         local_18[0];
    if (this_00->bFireIncomingEvent == false) {
      if ((this_00->Incoming).ArrayNum == GMaxIncomingRequestsToStall) {
        if (4 < (byte)LogStreaming._0_1_) {
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_void___cdecl_FPrecacheCallbackHandler::RequestComplete(bool,IAsyncReadRequest*___ptr64)___ptr64'
                      ::__l18::LOG_Static,(FLogCategoryBase *)&LogStreaming);
        }
        FPrecacheCallbackHandler::UpdatePlatformFilePrecacheThrottling(this_00,false);
      }
    }
    else {
      this_00->bFireIncomingEvent = false;
      (**(code **)(this_00->PermanentIncomingEvent->_padding_ + 0x10))();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// CheckThottleIOState @ 141ee0350

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPrecacheCallbackHandler::CheckThottleIOState(FPrecacheCallbackHandler *this,bool param_1)

{
  if (((longlong)GMaxReadyRequestsToStallMB * 0x900000) / 10 < this->UnprocessedMemUsed) {
    if ((longlong)GMaxReadyRequestsToStallMB * 0x100000 < this->UnprocessedMemUsed) {
      if ((this->bStalledOnMemory == false) && (this->bPrecacheRequestsEnabled != false)) {
        if (4 < (byte)LogStreaming._0_1_) {
          UE::Logging::Private::BasicLog<5>
                    (&`public:_void___cdecl_FPrecacheCallbackHandler::CheckThottleIOState(bool)___ptr64'
                      ::__l40::LOG_Static,(FLogCategoryBase *)&LogStreaming);
        }
        UpdatePlatformFilePrecacheThrottling(this,false);
        this->bPrecacheRequestsEnabled = false;
      }
      this->bStalledOnMemory = true;
    }
  }
  else {
    if ((this->bStalledOnMemory != false) && (this->bPrecacheRequestsEnabled == false)) {
      if (4 < (byte)LogStreaming._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  (&`public:_void___cdecl_FPrecacheCallbackHandler::CheckThottleIOState(bool)___ptr64'
                    ::__l12::LOG_Static,(FLogCategoryBase *)&LogStreaming);
      }
      UpdatePlatformFilePrecacheThrottling(this,true);
      param_1 = false;
      this->bPrecacheRequestsEnabled = true;
    }
    this->bStalledOnMemory = false;
  }
  if ((this->bPrecacheRequestsEnabled != false) && (param_1 != false)) {
    if (4 < (byte)LogStreaming._0_1_) {
      UE::Logging::Private::BasicLog<5>
                (&`public:_void___cdecl_FPrecacheCallbackHandler::CheckThottleIOState(bool)___ptr64'
                  ::__l61::LOG_Static,(FLogCategoryBase *)&LogStreaming);
    }
    UpdatePlatformFilePrecacheThrottling(this,true);
  }
  return;
}

// ProcessIncoming @ 141f067e0

bool __thiscall FPrecacheCallbackHandler::ProcessIncoming(FPrecacheCallbackHandler *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  TMap<IAsyncReadRequest_*,FWeakAsyncPackagePtr,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>_>
  *this_00;
  TArray<IAsyncReadRequest_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FName *pFVar4;
  IAsyncReadRequest *pIVar5;
  undefined1 *puVar6;
  FScriptContainerElement *pFVar7;
  FName FVar8;
  ForElementType<FSetElementId> FVar9;
  code *pcVar10;
  bool bVar11;
  undefined1 uVar12;
  uint uVar13;
  int iVar14;
  TTuple<FName,FAsyncPackage_*> *pTVar15;
  TTuple<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest> *pTVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  undefined1 *puVar19;
  ForElementType<FSetElementId> FVar20;
  longlong lVar21;
  uint *puVar22;
  FAsyncPackage *this_01;
  FName *pFVar23;
  IAsyncReadRequest *local_88 [2];
  FWeakAsyncPackagePtr local_78;
  FName local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  int iStack_4c;
  FScriptContainerElement *local_48;
  undefined8 uStack_40;
  
  lpCriticalSection = &this->IncomingLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_48 = (this->Incoming).AllocatorInstance.Data;
  uStack_40._0_4_ = (this->Incoming).ArrayNum;
  uStack_40._4_4_ = (this->Incoming).ArrayMax;
  (this->Incoming).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Incoming).ArrayNum = 0;
  (this->Incoming).ArrayMax = 0;
  local_58 = *(undefined4 *)&(this->IncomingSummaries).AllocatorInstance.Data;
  uStack_54 = *(undefined4 *)((longlong)&(this->IncomingSummaries).AllocatorInstance.Data + 4);
  iStack_50 = (this->IncomingSummaries).ArrayNum;
  iStack_4c = (this->IncomingSummaries).ArrayMax;
  (this->IncomingSummaries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncomingSummaries).ArrayNum = 0;
  (this->IncomingSummaries).ArrayMax = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar3 = local_48 + (longlong)(int)uStack_40 * 8;
  for (pFVar18 = local_48; pFVar18 != pFVar3; pFVar18 = pFVar18 + 8) {
    pIVar5 = *(IAsyncReadRequest **)pFVar18;
    if ((pIVar5 == (IAsyncReadRequest *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Req",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                            ,0x624,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      uVar12 = (*pcVar10)();
      return (bool)uVar12;
    }
    this_00 = &this->WaitingPackages;
    uVar17 = ((uint)((ulonglong)pIVar5 >> 0x14) & 0xffff ^ (uint)((ulonglong)pIVar5 >> 4)) *
             -0x7a143595;
    uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
    if (*(int *)&(this->WaitingPackages).field_0x8 != *(int *)&(this->WaitingPackages).field_0x34) {
      puVar6 = *(undefined1 **)&(this->WaitingPackages).field_0x40;
      puVar19 = &(this->WaitingPackages).field_0x38;
      if (puVar6 != (undefined1 *)0x0) {
        puVar19 = puVar6;
      }
      uVar17 = *(uint *)(puVar19 +
                        (ulonglong)
                        (*(int *)&(this->WaitingPackages).field_0x48 - 1U &
                        (uVar17 >> 0x10 ^ uVar17)) * 4);
      if (uVar17 != 0xffffffff) {
        do {
          if (*(IAsyncReadRequest **)
               ((longlong)(int)uVar17 * 0x20 + *(longlong *)&this_00->field_0x0) == pIVar5) {
            if (uVar17 == 0xffffffff) goto LAB_141f0693f;
            goto LAB_141f06965;
          }
          uVar17 = *(uint *)((longlong)(int)uVar17 * 0x20 + 0x18 + *(longlong *)&this_00->field_0x0)
          ;
        } while (uVar17 != 0xffffffff);
      }
    }
    uVar17 = 0xffffffff;
LAB_141f0693f:
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("PairId.IsValidId()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                        ,0x556,L"");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      uVar12 = (*pcVar10)();
      return (bool)uVar12;
    }
LAB_141f06965:
    lVar21 = (longlong)(int)uVar17 * 0x20;
    local_68 = *(FName *)(lVar21 + 8 + *(longlong *)&this_00->field_0x0);
    iVar14 = *(int *)(lVar21 + 0x10 + *(longlong *)&this_00->field_0x0);
    if (((int)uVar17 < 0) || (*(int *)&(this->WaitingPackages).field_0x28 <= (int)uVar17)) {
LAB_141f069e0:
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Elements.IsValidIndex(ElementIndex)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                          ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
      if (bVar11) {
        pcVar10 = (code *)swi(3);
        uVar12 = (*pcVar10)();
        return (bool)uVar12;
      }
    }
    else {
      if ((*(int *)&(this->WaitingPackages).field_0x28 <= (int)uVar17) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5c6,L""), bVar11)) {
        pcVar10 = (code *)swi(3);
        uVar12 = (*pcVar10)();
        return (bool)uVar12;
      }
      puVar6 = *(undefined1 **)&(this->WaitingPackages).field_0x20;
      puVar19 = &(this->WaitingPackages).field_0x10;
      if (puVar6 != (undefined1 *)0x0) {
        puVar19 = puVar6;
      }
      uVar13 = uVar17;
      if ((int)uVar17 < 0) {
        uVar13 = uVar17 + 0x1f;
      }
      if ((*(uint *)(puVar19 + (longlong)((int)uVar13 >> 5) * 4) >> (uVar17 & 0x1f) & 1) == 0)
      goto LAB_141f069e0;
    }
    puVar6 = *(undefined1 **)&(this->WaitingPackages).field_0x40;
    lVar21 = *(longlong *)&this_00->field_0x0 + lVar21;
    puVar19 = &(this->WaitingPackages).field_0x38;
    if (puVar6 != (undefined1 *)0x0) {
      puVar19 = puVar6;
    }
    puVar22 = (uint *)(puVar19 + (longlong)*(int *)(lVar21 + 0x1c) * 4);
    while( true ) {
      uVar13 = *puVar22;
      if ((uVar13 == 0xffffffff) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("NextElementIndex != INDEX_NONE",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                              ,0x2b5,L"Corrupt hash"), bVar11)) {
        pcVar10 = (code *)swi(3);
        uVar12 = (*pcVar10)();
        return (bool)uVar12;
      }
      if (uVar13 == uVar17) break;
      puVar22 = (uint *)(*(longlong *)&this_00->field_0x0 + 0x18 + (longlong)(int)uVar13 * 0x20);
    }
    *puVar22 = *(uint *)(lVar21 + 0x18);
    TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized
              ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)this_00,uVar17,1);
    if ((FAsyncLoadingThread::Instance == (FAsyncLoadingThread *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Instance",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoadingThread.h"
                            ,0x178,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      uVar12 = (*pcVar10)();
      return (bool)uVar12;
    }
    if ((((local_68 == (FName)0x0) || (iVar14 == 0)) ||
        (pTVar15 = TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
                           *)&FAsyncLoadingThread::Instance->AsyncPackageNameLookup,local_68),
        pTVar15 == (TTuple<FName,FAsyncPackage_*> *)0x0)) ||
       ((this_01 = *(FAsyncPackage **)&pTVar15->field_0x8, this_01 == (FAsyncPackage *)0x0 ||
        (this_01->SerialNumber != iVar14)))) {
      this_01 = (FAsyncPackage *)0x0;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Pkg",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                          ,0x627,L"");
      if (bVar11) {
        pcVar10 = (code *)swi(3);
        uVar12 = (*pcVar10)();
        return (bool)uVar12;
      }
    }
    pTVar2 = &this_01->ReadyPrecacheRequests;
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    local_88[0] = pIVar5;
    if (((pFVar7 <= (FScriptContainerElement *)local_88) &&
        ((FScriptContainerElement *)local_88 <
         pFVar7 + (longlong)(this_01->ReadyPrecacheRequests).ArrayMax * 8)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar10 = (code *)swi(3);
      uVar12 = (*pcVar10)();
      return (bool)uVar12;
    }
    iVar14 = (this_01->ReadyPrecacheRequests).ArrayNum;
    piVar1 = &(this_01->ReadyPrecacheRequests).ArrayMax;
    if (iVar14 == *piVar1) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this_01->ReadyPrecacheRequests).ArrayNum = iVar14 + 1;
    *(IAsyncReadRequest **)((pTVar2->AllocatorInstance).Data + (longlong)iVar14 * 8) = local_88[0];
    pTVar16 = TSet<TTuple<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest,0>,FDefaultSetAllocator>
                      *)&this_01->PrecacheRequests,local_88[0]);
    if ((pTVar16 == (TTuple<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest> *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Pair != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                            ,0x288,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      uVar12 = (*pcVar10)();
      return (bool)uVar12;
    }
    lVar21 = *(longlong *)&pTVar16->field_0x10;
    FAsyncPackage::ConditionalQueueProcessImportsAndExports(this_01,false);
    this->UnprocessedMemUsed = this->UnprocessedMemUsed + lVar21;
  }
  pFVar23 = (FName *)CONCAT44(uStack_54,local_58);
  pFVar4 = (FName *)((longlong)pFVar23 + (longlong)iStack_50 * 0xc);
  while (pFVar23 != pFVar4) {
    if ((FAsyncLoadingThread::Instance == (FAsyncLoadingThread *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Instance",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoadingThread.h"
                            ,0x178,L""), bVar11)) {
      pcVar10 = (code *)swi(3);
      uVar12 = (*pcVar10)();
      return (bool)uVar12;
    }
    local_78.PackageName = *pFVar23;
    local_78.SerialNumber = pFVar23[1].ComparisonIndex.Value;
    FAsyncLoadingThread::QueueEvent_FinishLinker(FAsyncLoadingThread::Instance,&local_78,0x7fffffff)
    ;
    FVar8 = *pFVar23;
    uVar17 = ::GetTypeHash(FVar8.ComparisonIndex.Value);
    if (*(int *)&(this->WaitingSummaries).Elements.field_0x8 !=
        *(int *)&(this->WaitingSummaries).Elements.field_0x34) {
      FVar9 = (this->WaitingSummaries).Hash.SecondaryData;
      FVar20 = (ForElementType<FSetElementId>)&(this->WaitingSummaries).Hash;
      if (FVar9 != (ForElementType<FSetElementId>)0x0) {
        FVar20 = FVar9;
      }
      iVar14 = *(int *)((longlong)FVar20 +
                       (ulonglong)((this->WaitingSummaries).HashSize - 1U & uVar17 + FVar8.Number) *
                       4);
      if (iVar14 != -1) {
        lVar21 = *(longlong *)&(this->WaitingSummaries).Elements;
        do {
          if (*(uint *)(lVar21 + 8 + (longlong)iVar14 * 0x14) == pFVar23[1].ComparisonIndex.Value)
          goto LAB_141f06d5d;
          iVar14 = *(int *)(lVar21 + 0xc + (longlong)iVar14 * 0x14);
        } while (iVar14 != -1);
      }
    }
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("WaitingSummaries.Contains(Sum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                        ,0x62e,L"");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      uVar12 = (*pcVar10)();
      return (bool)uVar12;
    }
LAB_141f06d5d:
    if (*(int *)&(this->WaitingSummaries).Elements.field_0x8 ==
        *(int *)&(this->WaitingSummaries).Elements.field_0x34) {
LAB_141f06ded:
      pFVar23 = (FName *)&pFVar23[1].Number;
    }
    else {
      FVar8 = *pFVar23;
      uVar17 = ::GetTypeHash(FVar8.ComparisonIndex.Value);
      FVar9 = (this->WaitingSummaries).Hash.SecondaryData;
      FVar20 = (ForElementType<FSetElementId>)&(this->WaitingSummaries).Hash;
      if (FVar9 != (ForElementType<FSetElementId>)0x0) {
        FVar20 = FVar9;
      }
      iVar14 = *(int *)((longlong)FVar20 +
                       ((longlong)(this->WaitingSummaries).HashSize - 1U &
                       (longlong)(int)(uVar17 + FVar8.Number)) * 4);
      if (iVar14 == -1) goto LAB_141f06ded;
      lVar21 = *(longlong *)&(this->WaitingSummaries).Elements;
      do {
        if (*(uint *)(lVar21 + 8 + (longlong)iVar14 * 0x14) == pFVar23[1].ComparisonIndex.Value) {
          TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>::
          RemoveByIndex(&this->WaitingSummaries,iVar14);
          goto LAB_141f06ded;
        }
        iVar14 = *(int *)(lVar21 + 0xc + (longlong)iVar14 * 0x14);
      } while (iVar14 != -1);
      pFVar23 = (FName *)&pFVar23[1].Number;
    }
  }
  if ((int)uStack_40 == 0) {
    if (iStack_50 == 0) {
      bVar11 = false;
      goto LAB_141f06e2d;
    }
  }
  else {
    CheckThottleIOState(this,GMaxIncomingRequestsToStall <= (int)uStack_40);
  }
  bVar11 = true;
LAB_141f06e2d:
  if ((void *)CONCAT44(uStack_54,local_58) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(uStack_54,local_58));
  }
  if (local_48 != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48);
  }
  return bVar11;
}

// RegisterNewSummaryRequest @ 141f0a5b0

void __thiscall
FPrecacheCallbackHandler::RegisterNewSummaryRequest
          (FPrecacheCallbackHandler *this,FAsyncPackage *param_1)

{
  FWeakAsyncPackagePtr local_res8 [2];
  FName local_18;
  int local_10;
  
  local_18.ComparisonIndex.Value = 0;
  local_18.Number = 0;
  local_10 = 0;
  if (param_1 != (FAsyncPackage *)0x0) {
    local_18 = (param_1->Desc).Name;
    local_10 = param_1->SerialNumber;
  }
  TSet<FWeakAsyncPackagePtr,DefaultKeyFuncs<FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>::
  Emplace<FWeakAsyncPackagePtr>(&this->WaitingSummaries,local_res8,(bool *)&local_18);
  return;
}

// SummaryComplete @ 141f14b00

void __thiscall
FPrecacheCallbackHandler::SummaryComplete
          (FPrecacheCallbackHandler *this,FWeakAsyncPackagePtr *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FWeakAsyncPackagePtr *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  lpCriticalSection = &this->IncomingLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar2 = (FWeakAsyncPackagePtr *)(this->IncomingSummaries).AllocatorInstance.Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->IncomingSummaries).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->IncomingSummaries).ArrayNum;
  piVar1 = &(this->IncomingSummaries).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&(this->IncomingSummaries).AllocatorInstance,piVar1);
  }
  (this->IncomingSummaries).ArrayNum = iVar6 + 1;
  pFVar3 = (this->IncomingSummaries).AllocatorInstance.Data;
  *(FName *)(pFVar3 + (longlong)iVar6 * 0xc) = param_1->PackageName;
  *(int *)(pFVar3 + (longlong)iVar6 * 0xc + 8) = param_1->SerialNumber;
  if (this->bFireIncomingEvent != false) {
    this->bFireIncomingEvent = false;
    (**(code **)(this->PermanentIncomingEvent->_padding_ + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x000141f14bfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// UpdatePlatformFilePrecacheThrottling @ 141f193d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FPrecacheCallbackHandler::UpdatePlatformFilePrecacheThrottling
          (FPrecacheCallbackHandler *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  size_t sVar5;
  ulonglong uVar6;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  wchar_t *_Str;
  ulonglong _Size;
  ulonglong uVar11;
  undefined1 auStack_1068 [32];
  undefined4 local_1048;
  undefined4 uStack_1044;
  undefined8 uStack_103e;
  undefined1 local_1036 [4094];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1068;
  _Str = L"Disabled";
  if (param_1) {
    _Str = L"Enabled";
  }
  FCsvProfiler::RecordEventfInternal(_GCsvCategory_FileIO.Index,L"Precache %s");
  if (-1 < BookmarkChannel->Enabled) {
    if (`public:_void___cdecl_FPrecacheCallbackHandler::UpdatePlatformFilePrecacheThrottling(bool)___ptr64'
        ::__l5::__BookmarkPoint1696 == false) {
      FMiscTrace::OutputBookmarkSpec
                (&`public:_void___cdecl_FPrecacheCallbackHandler::UpdatePlatformFilePrecacheThrottling(bool)___ptr64'
                  ::__l5::__BookmarkPoint1696,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                 ,0x6a0,L"FileIO/Precache %s");
      `public:_void___cdecl_FPrecacheCallbackHandler::UpdatePlatformFilePrecacheThrottling(bool)___ptr64'
      ::__l5::__BookmarkPoint1696 = true;
    }
    uVar3 = CallstackTrace_GetCurrentId();
    sVar5 = wcslen(_Str);
    uVar4 = (int)sVar5 * 2 + 2;
    uVar6 = (ulonglong)uVar4;
    uVar8 = uVar4;
    if (0xffff < (int)uVar4) {
      uVar8 = 0xffff;
    }
    uVar11 = (longlong)(int)uVar8 + 2;
    if (uVar11 < 0x1001) {
      uStack_103e._6_2_ = 0xc201;
      if (0xffff < (int)uVar4) {
        uVar6 = 0xffff;
      }
      _Size = uVar6 & 0xffff;
      memcpy(local_1036,_Str,_Size);
      if ((short)uVar6 == -1) {
        local_1048 = 0x2e002e;
        uStack_1044 = 0x2e;
        *(undefined8 *)((longlong)&uStack_103e + (_Size - ((uint)_Size & 1))) = 0x2e002e002e;
      }
      if ((_Size + 2 != uVar11) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("PayloadBufferPtr - Buffer == FormatArgsSize",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\ProfilingDebugging\\FormatArgsTrace.h"
                             ,0x44,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((ushort)uVar11 != 0) {
        FMiscTrace::OutputBookmarkInternal
                  (&`public:_void___cdecl_FPrecacheCallbackHandler::UpdatePlatformFilePrecacheThrottling(bool)___ptr64'
                    ::__l5::__BookmarkPoint1696,uVar3,(ushort)uVar11,
                   (uchar *)((longlong)&uStack_103e + 6));
      }
    }
  }
  iVar10 = 0;
  if (!param_1) {
    iVar9 = 5;
    if (GAsyncLoadingPrecachePriority + 1 < 5) {
      iVar9 = GAsyncLoadingPrecachePriority + 1;
    }
    if (0 < iVar9) {
      iVar10 = iVar9;
    }
  }
  this_00 = FPlatformFileManager::Get();
  pIVar7 = FPlatformFileManager::GetPlatformFile(this_00);
  (**(code **)((longlong)*pIVar7 + 0x1a0))(pIVar7,iVar10);
  return;
}

// WaitForIO @ 141f195f0

bool __thiscall FPrecacheCallbackHandler::WaitForIO(FPrecacheCallbackHandler *this,float param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  FEvent *pFVar5;
  ulonglong uVar6;
  int iVar7;
  
  if (((*(int *)&(this->WaitingPackages).field_0x8 == *(int *)&(this->WaitingPackages).field_0x34)
      && (*(int *)&(this->WaitingSummaries).Elements.field_0x8 ==
          *(int *)&(this->WaitingSummaries).Elements.field_0x34)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("AnyIOOutstanding()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0x63f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if ((param_1 < 0.0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SecondsToWait >= 0.0f",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                         ,0x640,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  lpCriticalSection = &this->IncomingLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (((this->Incoming).ArrayNum == 0) && ((this->IncomingSummaries).ArrayNum == 0)) {
    if (this->PermanentIncomingEvent == (FEvent *)0x0) {
      pFVar5 = FGenericPlatformProcess::GetSynchEventFromPool(false);
      this->PermanentIncomingEvent = pFVar5;
    }
    this->bFireIncomingEvent = true;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar5 = this->PermanentIncomingEvent;
    if (param_1 == 0.0) {
      (**(code **)(pFVar5->_padding_ + 0x20))(pFVar5,0xffffffff,0);
      if (this->bFireIncomingEvent == false) {
        return true;
      }
      iVar7 = 0x650;
    }
    else {
      uVar6 = 1;
      if (1 < (uint)(longlong)(param_1 * __real_447a0000)) {
        uVar6 = (longlong)(param_1 * __real_447a0000) & 0xffffffff;
      }
      cVar4 = (**(code **)(pFVar5->_padding_ + 0x20))(pFVar5,uVar6,0);
      if (cVar4 == '\0') {
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        if (this->bFireIncomingEvent == false) {
          (**(code **)(this->PermanentIncomingEvent->_padding_ + 0x18))();
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          return true;
        }
        this->bFireIncomingEvent = false;
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        return false;
      }
      if (this->bFireIncomingEvent == false) {
        return true;
      }
      iVar7 = 0x656;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bFireIncomingEvent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\Serialization\\AsyncLoading.cpp"
                       ,iVar7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  else {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return true;
}

