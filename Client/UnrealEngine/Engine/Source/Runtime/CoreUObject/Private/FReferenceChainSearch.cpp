// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 19

// FReferenceChainSearch @ 1421b26c0

/* WARNING: Enum "Type": Some values do not have unique names */

FReferenceChainSearch * __thiscall
FReferenceChainSearch::FReferenceChainSearch
          (FReferenceChainSearch *this,UObject *param_1,EReferenceChainSearchMode param_2,
          Type param_3)

{
  UObject *local_res10 [3];
  TArrayView<UObject_*_const,int> local_18;
  
  local_18.ArrayNum = 1;
  local_18.DataPtr = local_res10;
  local_res10[0] = param_1;
  FReferenceChainSearch(this,&local_18,param_2,param_3);
  return this;
}

// FReferenceChainSearch @ 1421b2710

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FReferenceChainSearch * __thiscall
FReferenceChainSearch::FReferenceChainSearch
          (FReferenceChainSearch *this,TArrayView<UObject_*_const,int> *param_1,
          EReferenceChainSearchMode param_2,Type param_3)

{
  TMap<UObject_const_*,FGCObjectInfo_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,FGCObjectInfo_*,0>_>
  *pTVar1;
  UObject **ppUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  FThreadHeartBeat *pFVar8;
  FGameThreadHitchHeartBeatThreaded *this_00;
  FReferenceChainSearch *pFVar9;
  UObject **ppUVar10;
  undefined1 local_res18 [8];
  char local_res20;
  FGCObjectInfo *local_108;
  TArray<UE::ReferenceChainSearch::FGraphPath,TSizedDefaultAllocator<32>_> local_100;
  FPolicyUObjectHeap local_f0;
  FGraph local_d8;
  UObject **local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  code *local_98;
  undefined1 *local_90;
  TArrayView<UObject_const_*_const,int> local_88;
  TArrayView<UObject_*_const,int> local_78;
  FPolicyUObjectHeap local_68;
  
  (this->SuspendHeartBeat).bSuspendedAllThreads = false;
  (this->SuspendHeartBeat).bSuspended = false;
  pFVar8 = FThreadHeartBeat::GetNoInit();
  if (pFVar8 != (FThreadHeartBeat *)0x0) {
    (this->SuspendHeartBeat).bSuspended = true;
    FThreadHeartBeat::SuspendHeartBeat(pFVar8,(this->SuspendHeartBeat).bSuspendedAllThreads);
  }
  this_00 = FGameThreadHitchHeartBeatThreaded::Get();
  FGameThreadHitchHeartBeatThreaded::SuspendHeartBeat(this_00);
  (this->ObjectInfosToFindReferencesTo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar1 = &this->ObjectToInfoMap;
  (this->ObjectInfosToFindReferencesTo).ArrayNum = 0;
  (this->ObjectInfosToFindReferencesTo).ArrayMax = 0;
  this->SearchMode = param_2;
  (this->ReferenceChains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferenceChains).ArrayNum = 0;
  (this->ReferenceChains).ArrayMax = 0;
  *(undefined8 *)&this->AllNodes = 0;
  *(undefined8 *)&(this->AllNodes).field_0x8 = 0;
  *(undefined8 *)&(this->AllNodes).field_0x20 = 0;
  *(undefined4 *)&(this->AllNodes).field_0x28 = 0;
  *(undefined4 *)&(this->AllNodes).field_0x2c = 0x80;
  *(undefined4 *)&(this->AllNodes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AllNodes).field_0x34 = 0;
  *(undefined8 *)&(this->AllNodes).field_0x40 = 0;
  *(undefined4 *)&(this->AllNodes).field_0x48 = 0;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->ObjectToInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->ObjectToInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->ObjectToInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->ObjectToInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ObjectToInfoMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ObjectToInfoMap).field_0x34 = 0;
  *(undefined8 *)&(this->ObjectToInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->ObjectToInfoMap).field_0x48 = 0;
  this->VerbosityForPrint = param_3;
  local_res20 = '\0';
  pFVar8 = FThreadHeartBeat::GetNoInit();
  if (pFVar8 != (FThreadHeartBeat *)0x0) {
    local_res20 = '\x01';
    FThreadHeartBeat::SuspendHeartBeat(pFVar8,false);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&GUObjectArray.ObjObjectsCritical);
  ppUVar10 = param_1->DataPtr;
  ppUVar2 = ppUVar10 + param_1->ArrayNum;
  while( true ) {
    if (ppUVar10 == ppUVar2) {
      local_f0.AllNodes = &this->AllNodes;
      local_d8.Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_d8.Buffer.ArrayNum = 0;
      bVar6 = (byte)(param_2 >> 7);
      local_f0.bGCOnly = (bool)(bVar6 & 1);
      local_d8.EdgeLists.ArrayNum = 0;
      local_d8.EdgeLists.ArrayMax = 0;
      local_a8 = param_1->DataPtr;
      iStack_a0 = param_1->ArrayNum;
      local_88._12_4_ = uStack_9c;
      local_88.ArrayNum = iStack_a0;
      local_d8.Buffer.ArrayMax = 0;
      local_d8.EdgeLists.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68._16_8_ = CONCAT71(local_f0._17_7_,bVar6) & 0xffffffffffffff01;
      local_f0.ObjectToInfoMap = pTVar1;
      local_88.DataPtr = local_a8;
      local_68.ObjectToInfoMap = pTVar1;
      local_68.AllNodes = local_f0.AllNodes;
      UE::ReferenceChainSearch::PerformInitialGatherFromLiveUObjectHeap
                (&local_68,&local_88,this->SearchMode,&local_d8);
      local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_100.ArrayNum = 0;
      local_100.ArrayMax = 0;
      local_78.DataPtr = param_1->DataPtr;
      local_78.ArrayNum = param_1->ArrayNum;
      local_78._12_4_ = *(undefined4 *)&param_1->field_0xc;
      UE::ReferenceChainSearch::PerformSearch<UE::ReferenceChainSearch::FPolicyUObjectHeap>
                (&local_f0,&local_78,&local_d8,param_2,&local_100);
      UE::ReferenceChainSearch::PopulateReferenceInfo<UE::ReferenceChainSearch::FPolicyUObjectHeap>
                (&local_f0,&local_d8,param_2,&local_100,&this->ReferenceChains);
      if ((param_2 & (PrintAllResults|PrintResults)) != Default) {
        local_90 = local_res18;
        local_98 = UE::Core::Private::Function::
                   TFunctionRefCaller<`FReferenceChainSearch::PrintResults'::__l2::<lambda_1>,bool,FReferenceChainSearch::FCallbackParams_&>
                   ::Call;
        PrintResults(this,(TFunctionRef<bool___cdecl(FReferenceChainSearch::FCallbackParams_&)> *)
                          &local_98,(bool)((byte)(param_2 >> 0x11) & 1),(UObject *)0x0,
                     this->VerbosityForPrint);
      }
      if (3 < (byte)LogReferenceChain._0_1_) {
        GetAllocatedSize(this);
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogReferenceChain);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&GUObjectArray.ObjObjectsCritical);
      DestructItems<UE::ReferenceChainSearch::FGraphPath,int>
                ((FGraphPath *)local_100.AllocatorInstance.Data,local_100.ArrayNum);
      if ((FGraphPath *)local_100.AllocatorInstance.Data != (FGraphPath *)0x0) {
        FMemory::Free(local_100.AllocatorInstance.Data);
      }
      if (local_d8.EdgeLists.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.EdgeLists.AllocatorInstance.Data);
      }
      if (local_d8.Buffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Buffer.AllocatorInstance.Data);
      }
      if ((local_res20 != '\0') &&
         (pFVar8 = FThreadHeartBeat::GetNoInit(), pFVar8 != (FThreadHeartBeat *)0x0)) {
        FThreadHeartBeat::ResumeHeartBeat(pFVar8,false);
      }
      return this;
    }
    local_108 = FGCObjectInfo::FindOrAddInfoHelper(*ppUVar10,pTVar1);
    pFVar3 = (this->ObjectInfosToFindReferencesTo).AllocatorInstance.Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_108) &&
        ((FScriptContainerElement *)&local_108 <
         pFVar3 + (longlong)(this->ObjectInfosToFindReferencesTo).ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) break;
    iVar7 = (this->ObjectInfosToFindReferencesTo).ArrayNum;
    if (iVar7 == (this->ObjectInfosToFindReferencesTo).ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->ObjectInfosToFindReferencesTo).AllocatorInstance,
                         &(this->ObjectInfosToFindReferencesTo).ArrayMax);
    }
    ppUVar10 = ppUVar10 + 1;
    (this->ObjectInfosToFindReferencesTo).ArrayNum = iVar7 + 1;
    *(FGCObjectInfo **)
     ((this->ObjectInfosToFindReferencesTo).AllocatorInstance.Data + (longlong)iVar7 * 8) =
         local_108;
  }
  pcVar4 = (code *)swi(3);
  pFVar9 = (FReferenceChainSearch *)(*pcVar4)();
  return pFVar9;
}

// FReferenceChainSearch @ 1421b2ae0

/* WARNING: Enum "Type": Some values do not have unique names */

FReferenceChainSearch * __thiscall
FReferenceChainSearch::FReferenceChainSearch
          (FReferenceChainSearch *this,EReferenceChainSearchMode param_1)

{
  FThreadHeartBeat *this_00;
  FGameThreadHitchHeartBeatThreaded *this_01;
  
  (this->SuspendHeartBeat).bSuspendedAllThreads = false;
  (this->SuspendHeartBeat).bSuspended = false;
  this_00 = FThreadHeartBeat::GetNoInit();
  if (this_00 != (FThreadHeartBeat *)0x0) {
    (this->SuspendHeartBeat).bSuspended = true;
    FThreadHeartBeat::SuspendHeartBeat(this_00,(this->SuspendHeartBeat).bSuspendedAllThreads);
  }
  this_01 = FGameThreadHitchHeartBeatThreaded::Get();
  FGameThreadHitchHeartBeatThreaded::SuspendHeartBeat(this_01);
  this->SearchMode = param_1;
  (this->ObjectInfosToFindReferencesTo).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectInfosToFindReferencesTo).ArrayNum = 0;
  (this->ObjectInfosToFindReferencesTo).ArrayMax = 0;
  (this->ReferenceChains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferenceChains).ArrayNum = 0;
  (this->ReferenceChains).ArrayMax = 0;
  *(undefined8 *)&this->AllNodes = 0;
  *(undefined8 *)&(this->AllNodes).field_0x8 = 0;
  *(undefined8 *)&(this->AllNodes).field_0x20 = 0;
  *(undefined4 *)&(this->AllNodes).field_0x28 = 0;
  *(undefined4 *)&(this->AllNodes).field_0x2c = 0x80;
  *(undefined4 *)&(this->AllNodes).field_0x34 = 0;
  *(undefined4 *)&(this->AllNodes).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AllNodes).field_0x40 = 0;
  *(undefined4 *)&(this->AllNodes).field_0x48 = 0;
  *(undefined8 *)&this->ObjectToInfoMap = 0;
  *(undefined8 *)&(this->ObjectToInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->ObjectToInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->ObjectToInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->ObjectToInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ObjectToInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->ObjectToInfoMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ObjectToInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->ObjectToInfoMap).field_0x48 = 0;
  this->VerbosityForPrint = Log;
  return this;
}

// ~FReferenceChainSearch @ 1421b63d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FReferenceChainSearch::~FReferenceChainSearch(FReferenceChainSearch *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  FGameThreadHitchHeartBeatThreaded *this_00;
  FThreadHeartBeat *this_01;
  
  Cleanup(this);
  *(undefined4 *)&(this->ObjectToInfoMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ObjectToInfoMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_const_*,FGCObjectInfo_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_const_*,FGCObjectInfo_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_const_*,FGCObjectInfo_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ObjectToInfoMap);
  *(undefined4 *)&(this->AllNodes).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AllNodes).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGCObjectInfo_*,FReferenceChainSearch::FGraphNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGCObjectInfo_*,FReferenceChainSearch::FGraphNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGCObjectInfo_*,FReferenceChainSearch::FGraphNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AllNodes);
  pFVar2 = (this->ReferenceChains).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ObjectInfosToFindReferencesTo).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this_00 = FGameThreadHitchHeartBeatThreaded::Get();
  FGameThreadHitchHeartBeatThreaded::ResumeHeartBeat(this_00);
  if ((this->SuspendHeartBeat).bSuspended != false) {
    this_01 = FThreadHeartBeat::GetNoInit();
    if (this_01 != (FThreadHeartBeat *)0x0) {
      FThreadHeartBeat::ResumeHeartBeat(this_01,(this->SuspendHeartBeat).bSuspendedAllThreads);
    }
  }
  return;
}

// operator() @ 1421b9c90

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FReferenceChainSearch::PrintResults'::__l17::<lambda_1>::operator()
          (void *this,FGCObjectInfo *param_1)

{
  ForAnyElementType FVar1;
  FString local_28;
  FString local_18;
  
  if ((param_1->InternalFlags &
      (RootSet|AsyncLoadingPhase2|Async|Native|AsyncLoadingPhase1|LoaderImport)) == Borrowed) {
    if (param_1->RefCount == 0) {
      FGCObjectInfo::GetFullName(param_1,&local_28);
      FReferenceChainSearch::GetObjectFlags(&local_18,param_1);
      FOutputDevice::CategorizedLogfImpl
                ((FOutputDevice *)GWarn,(FName *)&LogReferenceChain.field_0x4,*(Type *)this,
                 L"%s%s is not currently reachable. Try using GC history to debug transient leaks with \'gc.historysize 1\'"
                );
    }
    else {
      FGCObjectInfo::GetFullName(param_1,&local_28);
      FReferenceChainSearch::GetObjectFlags(&local_18,param_1);
      FOutputDevice::CategorizedLogfImpl
                ((FOutputDevice *)GWarn,(FName *)&LogReferenceChain.field_0x4,*(Type *)this,
                 L"%s%s is not currently reachable but it does have %d refcount set.");
    }
    FVar1.Data = local_28.Data.AllocatorInstance.Data;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      FVar1.Data = local_28.Data.AllocatorInstance.Data;
    }
  }
  else {
    FGCObjectInfo::GetFullName(param_1,&local_18);
    FReferenceChainSearch::GetObjectFlags(&local_28,param_1);
    FOutputDevice::CategorizedLogfImpl
              ((FOutputDevice *)GWarn,(FName *)&LogReferenceChain.field_0x4,*(Type *)this,
               L"%s%s is not currently reachable but it does have some of EInternalObjectFlags_RootFlags set."
              );
    FVar1.Data = local_18.Data.AllocatorInstance.Data;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      FVar1.Data = local_18.Data.AllocatorInstance.Data;
    }
  }
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  return;
}

// Cleanup @ 1421c17f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FReferenceChainSearch::Cleanup(FReferenceChainSearch *this)

{
  int *piVar1;
  TMap<UObject_const_*,FGCObjectInfo_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,FGCObjectInfo_*,0>_>
  *pTVar2;
  void *pvVar3;
  code *pcVar4;
  TMap<UObject_const_*,FGCObjectInfo_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,FGCObjectInfo_*,0>_>
  *pTVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar18;
  uint uVar19;
  int iVar20;
  uint *puVar21;
  ulonglong uVar22;
  undefined1 *puVar23;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  undefined4 uStack_fc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  TMap<UObject_const_*,FGCObjectInfo_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,FGCObjectInfo_*,0>_>
  *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  undefined4 local_74;
  undefined4 local_54;
  ulonglong uVar17;
  
  uVar17 = 0;
  piVar1 = &(this->ObjectInfosToFindReferencesTo).ArrayMax;
  (this->ObjectInfosToFindReferencesTo).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ObjectInfosToFindReferencesTo).AllocatorInstance,0,piVar1);
  }
  uVar13 = uVar17;
  uVar22 = uVar17;
  if (0 < (this->ReferenceChains).ArrayNum) {
    do {
      uVar19 = (uint)uVar13;
      uVar9 = 0;
      if ((int)uVar19 < (this->ReferenceChains).ArrayNum) {
        uVar9 = ~uVar19 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pvVar3 = *(void **)((this->ReferenceChains).AllocatorInstance.Data + uVar22);
      if (pvVar3 != (void *)0x0) {
        if (*(void **)((longlong)pvVar3 + 0x18) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)pvVar3 + 0x18));
        }
        if (*(void **)((longlong)pvVar3 + 8) != (void *)0x0) {
          FMemory::Free(*(void **)((longlong)pvVar3 + 8));
        }
        ::operator_delete(pvVar3,0x28);
      }
      uVar13 = (ulonglong)(uVar19 + 1);
      uVar22 = uVar22 + 8;
    } while ((int)(uVar19 + 1) < (this->ReferenceChains).ArrayNum);
  }
  piVar1 = &(this->ReferenceChains).ArrayMax;
  (this->ReferenceChains).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ReferenceChains).AllocatorInstance,0,piVar1);
  }
  uVar9 = *(uint *)&(this->AllNodes).field_0x28;
  TStack_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->AllNodes).field_0x10;
  uVar7 = 1;
  uVar19 = 0;
  uVar15 = uVar19;
  if (uVar9 != 0) {
    puVar21 = *(uint **)&(this->AllNodes).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)TStack_e8.Array;
    }
    uVar15 = *puVar21;
    uVar13 = uVar17;
    uVar19 = 0;
    while (uVar15 == 0) {
      iVar12 = (int)uVar17;
      uVar19 = (int)uVar13 + 0x20;
      uVar13 = (ulonglong)uVar19;
      uVar15 = iVar12 + 1;
      uVar17 = (ulonglong)uVar15;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar15)
      goto LAB_1421c1992;
      uVar15 = puVar21[(longlong)iVar12 + 1];
    }
    uVar7 = -uVar15 & uVar15;
    uVar13 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18 = (int)lVar11;
    uVar15 = (uVar19 - 1) + local_res18;
    if ((int)uVar9 < (int)uVar15) {
LAB_1421c1992:
      uVar15 = uVar9;
    }
  }
  puVar23 = &(this->AllNodes).field_0x10;
  uVar8 = *(uint *)&(this->AllNodes).field_0x28;
  uVar14 = uVar8 & 0xffffffe0;
  TStack_e8._padding_ = CONCAT44(uVar7,(int)uVar17);
  TStack_e8.CurrentBitIndex = uVar15;
  TStack_e8.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar8 >> 5;
  TStack_e8._28_4_ = local_74;
  TStack_e8.BaseBitIndex = uVar19;
  uStack_c8 = CONCAT44(uStack_fc,
                       *(int *)&(this->AllNodes).field_0x8 - *(int *)&(this->AllNodes).field_0x34);
  if ((((int)uVar8 < 0) || ((int)uVar9 < (int)uVar8)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar9 = *(uint *)&(this->AllNodes).field_0x28;
  if (uVar8 != uVar9) {
    puVar18 = *(undefined1 **)&(this->AllNodes).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar23;
    }
    uVar19 = -1 << ((byte)uVar8 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar12 * 4);
    while (uVar19 == 0) {
      lVar11 = (longlong)iVar12;
      uVar14 = uVar14 + 0x20;
      iVar12 = iVar12 + 1;
      uVar8 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1421c1ab0;
      uVar19 = *(uint *)(puVar18 + lVar11 * 4 + 4);
    }
    uVar17 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    uVar8 = local_res20 + -1 + uVar14;
    if ((int)uVar9 < (int)uVar8) {
      uVar8 = uVar9;
    }
  }
LAB_1421c1ab0:
  while( true ) {
    if (*(int *)&(this->AllNodes).field_0x8 - *(int *)&(this->AllNodes).field_0x34 != (int)uStack_c8
       ) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FGCObjectInfo_*,FReferenceChainSearch::FGraphNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_e8.CurrentBitIndex == uVar8) &&
       (TStack_e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar23)) break;
    pvVar3 = *(void **)(*(longlong *)&this->AllNodes + 8 +
                       (longlong)TStack_e8.CurrentBitIndex * 0x18);
    if (pvVar3 != (void *)0x0) {
      *(undefined4 *)((longlong)pvVar3 + 0xa8) = 0;
      if (*(void **)((longlong)pvVar3 + 0xa0) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar3 + 0xa0));
      }
      TSparseArray<TSparseSetElement<FReferenceChainSearch::FGraphNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FReferenceChainSearch::FGraphNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FReferenceChainSearch::FGraphNode_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)((longlong)pvVar3 + 0x60));
      *(undefined4 *)((longlong)pvVar3 + 0x58) = 0;
      if (*(void **)((longlong)pvVar3 + 0x50) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)pvVar3 + 0x50));
      }
      TSparseArray<TSparseSetElement<FReferenceChainSearch::TReferenceInfo<FReferenceChainSearch::FGraphNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FReferenceChainSearch::TReferenceInfo<FReferenceChainSearch::FGraphNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FReferenceChainSearch::TReferenceInfo<FReferenceChainSearch::FGraphNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)((longlong)pvVar3 + 0x10));
      ::operator_delete(pvVar3,0xb8);
    }
    TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
  }
  bVar6 = 1 < *(int *)&(this->AllNodes).field_0x48;
  if (!bVar6) {
    TSet<TTuple<FGCObjectInfo_*,FReferenceChainSearch::FGraphNode_*>,TDefaultMapHashableKeyFuncs<FGCObjectInfo_*,FReferenceChainSearch::FGraphNode_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FGCObjectInfo_*,FReferenceChainSearch::FGraphNode_*>,TDefaultMapHashableKeyFuncs<FGCObjectInfo_*,FReferenceChainSearch::FGraphNode_*,0>,FDefaultSetAllocator>
                      *)&this->AllNodes);
  }
  puVar23 = &(this->AllNodes).field_0xc;
  *(undefined4 *)&(this->AllNodes).field_0x8 = 0;
  if (*(int *)puVar23 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&this->AllNodes,0,(int *)puVar23);
  }
  *(undefined4 *)&(this->AllNodes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AllNodes).field_0x34 = 0;
  iVar12 = *(int *)&(this->AllNodes).field_0x2c;
  *(undefined4 *)&(this->AllNodes).field_0x28 = 0;
  if ((iVar12 < 0) || (0x80 < iVar12)) {
    *(undefined4 *)&(this->AllNodes).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->AllNodes).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->AllNodes).field_0x48 = 1;
    TSet<TTuple<FGCObjectInfo_*,FReferenceChainSearch::FGraphNode_*>,TDefaultMapHashableKeyFuncs<FGCObjectInfo_*,FReferenceChainSearch::FGraphNode_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FGCObjectInfo_*,FReferenceChainSearch::FGraphNode_*>,TDefaultMapHashableKeyFuncs<FGCObjectInfo_*,FReferenceChainSearch::FGraphNode_*,0>,FDefaultSetAllocator>
              *)&this->AllNodes);
  }
  TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ObjectToInfoMap).field_0x10;
  iVar16 = 0;
  iVar12 = *(int *)&(this->ObjectToInfoMap).field_0x28;
  pTVar2 = &this->ObjectToInfoMap;
  iVar20 = 0;
  uVar9 = 1;
  iVar10 = 0;
  if (iVar12 != 0) {
    puVar21 = *(uint **)&(this->ObjectToInfoMap).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)TStack_b8.Array;
    }
    uVar19 = *puVar21;
    while (uVar19 == 0) {
      lVar11 = (longlong)iVar16;
      iVar20 = iVar20 + 0x20;
      iVar16 = iVar16 + 1;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_1421c1c86;
      uVar19 = puVar21[lVar11 + 1];
    }
    uVar9 = -uVar19 & uVar19;
    uVar17 = (ulonglong)uVar9 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar10 = iVar20 + -1 + (int)lVar11;
    if (iVar12 < iVar10) {
LAB_1421c1c86:
      iVar10 = iVar12;
    }
  }
  puVar23 = &(this->ObjectToInfoMap).field_0x10;
  uVar19 = *(uint *)&(this->ObjectToInfoMap).field_0x28;
  uVar15 = uVar19 & 0xffffffe0;
  TStack_b8.CurrentBitIndex = iVar10;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  TStack_b8._padding_ = CONCAT44(uVar9,iVar16);
  iVar16 = (int)uVar19 >> 5;
  TStack_b8._28_4_ = local_54;
  TStack_b8.BaseBitIndex = iVar20;
  uStack_98 = CONCAT44(uStack_fc,
                       *(int *)&(this->ObjectToInfoMap).field_0x8 -
                       *(int *)&(this->ObjectToInfoMap).field_0x34);
  local_c0 = pTVar2;
  if ((((int)uVar19 < 0) || (iVar12 < (int)uVar19)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar9 = *(uint *)&(this->ObjectToInfoMap).field_0x28;
  if (uVar19 != uVar9) {
    puVar18 = *(undefined1 **)&(this->ObjectToInfoMap).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar23;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar16 * 4);
    while (uVar19 == 0) {
      lVar11 = (longlong)iVar16;
      uVar15 = uVar15 + 0x20;
      iVar16 = iVar16 + 1;
      uVar19 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_1421c1da0;
      uVar19 = *(uint *)(puVar18 + lVar11 * 4 + 4);
    }
    uVar17 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar19 = (int)lVar11 + -1 + uVar15;
    if ((int)uVar9 < (int)uVar19) {
      uVar19 = uVar9;
    }
  }
LAB_1421c1da0:
  while( true ) {
    pTVar5 = local_c0;
    if (*(int *)&local_c0->field_0x8 - *(int *)&local_c0->field_0x34 != (int)uStack_98) {
      `TSparseArray<TSparseSetElement<TTuple<UObject_const_*,FGCObjectInfo_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_b8.CurrentBitIndex == uVar19) &&
        (TStack_b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar23)) && (pTVar5 == pTVar2))
    break;
    ::operator_delete(*(void **)(*(longlong *)pTVar5 + 8 +
                                (longlong)TStack_b8.CurrentBitIndex * 0x18),0x30);
    TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
  }
  pTVar2 = &this->ObjectToInfoMap;
  bVar6 = 1 < *(int *)&(this->ObjectToInfoMap).field_0x48;
  if (!bVar6) {
    TSet<TTuple<UObject_const_*,FGCObjectInfo_*>,TDefaultMapHashableKeyFuncs<UObject_const_*,FGCObjectInfo_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UObject_const_*,FGCObjectInfo_*>,TDefaultMapHashableKeyFuncs<UObject_const_*,FGCObjectInfo_*,0>,FDefaultSetAllocator>
                      *)pTVar2);
  }
  puVar23 = &(this->ObjectToInfoMap).field_0xc;
  *(undefined4 *)&(this->ObjectToInfoMap).field_0x8 = 0;
  if (*(int *)puVar23 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)pTVar2,0,(int *)puVar23);
  }
  *(undefined4 *)&(this->ObjectToInfoMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ObjectToInfoMap).field_0x34 = 0;
  iVar12 = *(int *)&(this->ObjectToInfoMap).field_0x2c;
  *(undefined4 *)&(this->ObjectToInfoMap).field_0x28 = 0;
  if ((iVar12 < 0) || (0x80 < iVar12)) {
    *(undefined4 *)&(this->ObjectToInfoMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ObjectToInfoMap).field_0x10,0);
  }
  if (bVar6) {
    *(undefined4 *)&(this->ObjectToInfoMap).field_0x48 = 1;
    TSet<TTuple<UObject_const_*,FGCObjectInfo_*>,TDefaultMapHashableKeyFuncs<UObject_const_*,FGCObjectInfo_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UObject_const_*,FGCObjectInfo_*>,TDefaultMapHashableKeyFuncs<UObject_const_*,FGCObjectInfo_*,0>,FDefaultSetAllocator>
              *)pTVar2);
  }
  return;
}

// DumpChain @ 1421c64a0

/* WARNING: Removing unreachable block (ram,0x0001421c68e8) */
/* WARNING: Removing unreachable block (ram,0x0001421c6927) */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FReferenceChainSearch::DumpChain
          (FReferenceChain *param_1,
          TFunctionRef<bool___cdecl(FReferenceChainSearch::FCallbackParams_&)> *param_2,
          TMap<unsigned___int64,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FString,0>_>
          *param_3,FOutputDevice *param_4,Type param_5)

{
  EReferenceType EVar1;
  int iVar2;
  FGCObjectInfo *this;
  longlong *plVar3;
  FField *this_00;
  FScriptContainerElement *_Src;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  TReferenceInfo<FReferenceChainSearch::FGraphNode> *pTVar8;
  FGraphNode *pFVar9;
  UClass *pUVar10;
  UClass *pUVar11;
  wchar_t *pwVar12;
  UObject *pUVar13;
  ForAnyElementType FVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  FGCObjectInfo *this_01;
  ForAnyElementType FVar18;
  FString local_258;
  FString local_248;
  TArray<FProperty_*,TSizedDefaultAllocator<32>_> local_238;
  FString local_220;
  longlong local_210;
  FString local_208;
  FString local_1f8;
  FGCObjectInfo *local_1e8;
  FGCObjectInfo *local_1e0;
  TReferenceInfo<FReferenceChainSearch::FGraphNode> *local_1d8;
  int local_1d0;
  FOutputDevice *local_1c8;
  FName local_1c0;
  FName local_1b8;
  FName local_1b0;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FScriptContainerElement *local_168;
  int iStack_160;
  undefined4 uStack_15c;
  FGCObjectInfo *local_158;
  undefined8 local_150;
  undefined8 local_148;
  int local_140;
  FOutputDevice *local_138;
  FString local_130;
  FString local_120;
  TStringView<wchar_t> local_108;
  void *local_f8 [2];
  TStringView<wchar_t> local_e8;
  TStringView<wchar_t> local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  iVar17 = (param_1->Nodes).ArrayNum;
  if (iVar17 != 0) {
    iVar15 = iVar17 + -1;
    pTVar8 = FReferenceChain::GetReferenceInfo(param_1,iVar15);
    pFVar9 = FReferenceChain::GetNode(param_1,iVar15);
    local_140 = (param_1->Nodes).ArrayNum - iVar15;
    this_01 = pFVar9->ObjectInfo;
    local_150 = 0;
    local_148 = 0;
    if (0xff < local_140) {
      local_140 = 0xff;
    }
    local_158 = this_01;
    local_138 = param_4;
    FGCObjectInfo::GetFullName(this_01,&local_120);
    GetObjectFlags(&local_130,this_01);
    if (((local_140 < 0) || (0xff < local_140)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumSpaces >= 0 && NumSpaces <= TCStringSpcHelper<T>::MAX_SPACES",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                           ,0x272,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FOutputDevice::LogfImpl(param_4,param_5,L"%s%s %s");
    if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data.AllocatorInstance.Data);
    }
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
    cVar6 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_158);
    iVar17 = iVar17 + -2;
    if (-1 < iVar17) {
      lVar16 = (longlong)iVar17;
      do {
        local_210 = lVar16;
        if (cVar6 == '\0') break;
        if (((param_1->Nodes).ArrayNum <= iVar17) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_1d0 = ((param_1->Nodes).ArrayNum - iVar17) + -1;
        this = *(FGCObjectInfo **)
                (*(longlong *)((param_1->Nodes).AllocatorInstance.Data + lVar16 * 8) + 8);
        if (0xff < local_1d0) {
          local_1d0 = 0xff;
        }
        local_1e8 = this;
        local_1e0 = this_01;
        local_1d8 = pTVar8;
        local_1c8 = param_4;
        if (pTVar8 == (TReferenceInfo<FReferenceChainSearch::FGraphNode> *)0x0) {
LAB_1421c6fcd:
          FGCObjectInfo::GetFullName(this,&local_58);
          GetObjectFlags(&local_68,this);
          if (((local_1d0 < 0) || (0xff < local_1d0)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("NumSpaces >= 0 && NumSpaces <= TCStringSpcHelper<T>::MAX_SPACES",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                                 ,0x272,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FOutputDevice::LogfImpl(param_4,param_5,L"%s-> %s = %s %s");
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
        }
        else {
          EVar1 = pTVar8->Type;
          if (EVar1 == Property) {
            pUVar10 = (UClass *)FGCObjectInfo::TryResolveObject(this_01->Class);
            if (pUVar10 == (UClass *)0x0) {
LAB_1421c68a4:
              pUVar10 = (UClass *)0x0;
              local_238.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_238.ArrayNum = 0;
              local_238.ArrayMax = 0;
LAB_1421c68b4:
              iVar15 = (pTVar8->ReferencerName).Data.ArrayNum;
              local_248.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_e8 = ClassPropertyName;
              local_248.Data.ArrayNum = 0;
              local_248.Data.ArrayMax = 0;
              if (((iVar15 == 0) || (iVar15 != 6)) ||
                 (iVar15 = FGenericPlatformStricmp::Strnicmp
                                     (ClassPropertyName.DataPtr,
                                      (wchar_t *)
                                      (pTVar8->ReferencerName).Data.AllocatorInstance.Data,5),
                 iVar15 != 0)) {
                iVar15 = (pTVar8->ReferencerName).Data.ArrayNum;
                local_d8 = OuterPropertyName;
                if (((iVar15 != 0) && (iVar15 == 6)) &&
                   (iVar15 = FGenericPlatformStricmp::Strnicmp
                                       (OuterPropertyName.DataPtr,
                                        (wchar_t *)
                                        (pTVar8->ReferencerName).Data.AllocatorInstance.Data,5),
                   iVar15 == 0)) goto LAB_1421c6941;
                if (pUVar10 == (UClass *)0x0) {
                  if ((this_01->Class == (FGCObjectInfo *)0x0) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Class",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\GCObjectInfo.h"
                                         ,0x7c,L""), bVar5)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  ::FName::ToString(&this_01->Class->Name,&local_220);
                  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_248.Data.AllocatorInstance.Data);
                  }
                  local_248.Data.AllocatorInstance.Data = local_220.Data.AllocatorInstance.Data;
                  local_248.Data.ArrayNum = local_220.Data.ArrayNum;
                  local_248.Data.ArrayMax = local_220.Data.ArrayMax;
                  local_220.Data.ArrayNum = 0;
                  local_220.Data.ArrayMax = 0;
                  local_220.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                }
                else {
                  pwVar12 = (wchar_t *)(**(code **)(pUVar10->_padding_ + 0x318))(pUVar10);
                  ::FString::operator=(&local_248,pwVar12);
                  local_1b8 = (FName)pUVar10->_padding_;
                  ::FName::ToString(&local_1b8,&local_198);
                  if (local_198.Data.ArrayNum == 0) {
                    iVar15 = 0;
                  }
                  else {
                    iVar15 = local_198.Data.ArrayNum + -1;
                  }
                  ::FString::AppendChars
                            (&local_248,(wchar_t *)local_198.Data.AllocatorInstance.Data,iVar15);
                  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_198.Data.AllocatorInstance.Data);
                  }
                }
              }
              else {
LAB_1421c6941:
                ::FString::operator=(&local_248,L"UObject");
              }
              ::FString::PrintfImpl(&local_1f8,L"UObject* %s::%s");
              FVar18.Data = local_1f8.Data.AllocatorInstance.Data;
              local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_1f8.Data.ArrayNum = 0;
              local_1f8.Data.ArrayMax = 0;
              FVar14.Data = local_248.Data.AllocatorInstance.Data;
            }
            else {
              pUVar11 = Z_Construct_UClass_UClass_NoRegister();
              iVar15 = (int)pUVar11->_padding_;
              if ((*(int *)(pUVar10->_padding_ + 0x38) < iVar15) ||
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar15 * 8)
                  != &pUVar11->_padding_)) goto LAB_1421c68a4;
              local_168 = (pTVar8->ReferencerName).Data.AllocatorInstance.Data;
              iVar15 = (pTVar8->ReferencerName).Data.ArrayNum;
              local_238.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_238.ArrayNum = 0;
              local_238.ArrayMax = 0;
              iStack_160 = iVar15 + -1;
              if (iVar15 == 0) {
                iStack_160 = 0;
              }
              local_108._12_4_ = uStack_15c;
              local_108.Size = iStack_160;
              local_108.DataPtr = (wchar_t *)local_168;
              bVar5 = UE::GC::FPropertyStack::ConvertPathToProperties(pUVar10,&local_108,&local_238)
              ;
              if (!bVar5) goto LAB_1421c68b4;
              uVar7 = 0;
              if ((int)(local_238.ArrayNum - 1U) < local_238.ArrayNum) {
                uVar7 = ~(local_238.ArrayNum - 1U) >> 0x1f;
              }
              if (uVar7 == 0) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar5) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
              }
              plVar3 = *(longlong **)
                        (local_238.AllocatorInstance.Data + (longlong)(local_238.ArrayNum + -1) * 8)
              ;
              if ((local_238.ArrayNum < 1) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              this_00 = *(FField **)local_238.AllocatorInstance.Data;
              pUVar10 = FField::GetOwnerClass(this_00);
              local_1c0 = (FName)pUVar10->_padding_;
              ::FName::ToString(&local_1c0,&local_1a8);
              pUVar10 = FField::GetOwnerClass(this_00);
              (**(code **)(pUVar10->_padding_ + 0x318))(pUVar10);
              (**(code **)(*plVar3 + 0x68))(plVar3,local_f8,0,0);
              ::FString::PrintfImpl(&local_208,L"%s %s%s::%s");
              FVar18.Data = local_208.Data.AllocatorInstance.Data;
              local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_208.Data.ArrayNum = 0;
              local_208.Data.ArrayMax = 0;
              FVar14.Data = local_1a8.Data.AllocatorInstance.Data;
              if (local_f8[0] != (void *)0x0) {
                FMemory::Free(local_f8[0]);
                FVar14.Data = local_1a8.Data.AllocatorInstance.Data;
              }
            }
            if (FVar14.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FVar14.Data);
            }
            FGCObjectInfo::GetFullName(this,&local_b8);
            GetObjectFlags(&local_c8,this);
            if (((local_1d0 < 0) || (0xff < local_1d0)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("NumSpaces >= 0 && NumSpaces <= TCStringSpcHelper<T>::MAX_SPACES"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                                   ,0x272,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            FOutputDevice::LogfImpl(param_4,param_5,L"%s-> %s = %s %s");
            if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c8.Data.AllocatorInstance.Data);
            }
            if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b8.Data.AllocatorInstance.Data);
            }
            if (local_238.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_238.AllocatorInstance.Data);
            }
            if (FVar18.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FVar18.Data);
            }
          }
          else if (EVar1 == AddReferencedObjects) {
            local_258.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_258.Data.ArrayNum = 0;
            local_258.Data.ArrayMax = 0;
            if ((pTVar8->ReferencerName).Data.ArrayNum < 2) {
              pUVar13 = FGCObjectInfo::TryResolveObject(this_01->Class);
              iVar15 = 0;
              if (pUVar13 != (UObject *)0x0) {
                pUVar10 = Z_Construct_UClass_UClass_NoRegister();
                iVar2 = (int)pUVar10->_padding_;
                if ((iVar2 <= *(int *)(*(longlong *)&pUVar13->field_0x10 + 0x38)) &&
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(*(longlong *)&pUVar13->field_0x10 + 0x30) + (longlong)iVar2 * 8)
                    == &pUVar10->_padding_)) {
                  pwVar12 = (wchar_t *)(**(code **)(*(longlong *)pUVar13 + 0x318))(pUVar13);
                  ::FString::operator=(&local_258,pwVar12);
                  local_1b0.ComparisonIndex.Value = *(uint *)&pUVar13->field_0x18;
                  local_1b0.Number = *(uint *)&pUVar13->field_0x1c;
                  ::FName::ToString(&local_1b0,&local_188);
                  if (local_188.Data.ArrayNum != 0) {
                    iVar15 = local_188.Data.ArrayNum + -1;
                  }
                  ::FString::AppendChars
                            (&local_258,(wchar_t *)local_188.Data.AllocatorInstance.Data,iVar15);
                  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_188.Data.AllocatorInstance.Data);
                  }
                  goto LAB_1421c6dba;
                }
              }
              if ((this_01->Class == (FGCObjectInfo *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Class",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\GCObjectInfo.h"
                                     ,0x7c,L""), bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              ::FName::ToString(&this_01->Class->Name,&local_178);
              if (local_178.Data.ArrayNum != 0) {
                iVar15 = local_178.Data.ArrayNum + -1;
              }
              ::FString::AppendChars
                        (&local_258,(wchar_t *)local_178.Data.AllocatorInstance.Data,iVar15);
              if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_178.Data.AllocatorInstance.Data);
              }
            }
            else if (&local_258 != &pTVar8->ReferencerName) {
              uVar7 = (pTVar8->ReferencerName).Data.ArrayNum;
              _Src = (pTVar8->ReferencerName).Data.AllocatorInstance.Data;
              local_258.Data.ArrayMax = 0;
              local_258.Data.ArrayNum = uVar7;
              if (uVar7 != 0) {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,uVar7,0,(ForAnyElementType *)&local_258,uVar7,
                           &local_258.Data.ArrayMax);
                memcpy(local_258.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar7 * 2);
              }
            }
LAB_1421c6dba:
            FGCObjectInfo::GetFullName(this,&local_98);
            GetObjectFlags(&local_a8,this);
            if (((local_1d0 < 0) || (0xff < local_1d0)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("NumSpaces >= 0 && NumSpaces <= TCStringSpcHelper<T>::MAX_SPACES"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                                   ,0x272,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            FOutputDevice::LogfImpl(param_4,param_5,L"%s-> %s::AddReferencedObjects(%s %s)");
            if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_a8.Data.AllocatorInstance.Data);
            }
            if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_98.Data.AllocatorInstance.Data);
            }
            iVar15 = (pTVar8->StackFrames).ArrayNum;
            if (iVar15 != 0) {
              ConvertStackFramesToCallstack
                        ((ulong64 *)(pTVar8->StackFrames).AllocatorInstance.Data,iVar15,local_1d0,
                         param_4,param_3,param_5);
            }
            if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_258.Data.AllocatorInstance.Data);
            }
          }
          else {
            if (EVar1 != OuterChain) goto LAB_1421c6fcd;
            FGCObjectInfo::GetFullName(this,&local_78);
            GetObjectFlags(&local_88,this);
            if (((local_1d0 < 0) || (0xff < local_1d0)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("NumSpaces >= 0 && NumSpaces <= TCStringSpcHelper<T>::MAX_SPACES"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\CString.h"
                                   ,0x272,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            FOutputDevice::LogfImpl(param_4,param_5,L"%s-> %s = %s %s");
            if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.Data.AllocatorInstance.Data);
            }
            if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data.AllocatorInstance.Data);
            }
          }
        }
        cVar6 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_1e8);
        if (((param_1->ReferenceInfos).ArrayNum <= iVar17) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pTVar8 = *(TReferenceInfo<FReferenceChainSearch::FGraphNode> **)
                  ((param_1->ReferenceInfos).AllocatorInstance.Data + local_210 * 8);
        lVar16 = local_210 + -1;
        iVar17 = iVar17 + -1;
        this_01 = this;
        local_210 = lVar16;
      } while (-1 < iVar17);
    }
    FOutputDevice::LogfImpl(param_4,param_5,L"  ");
  }
  return;
}

// FindAndPrintStaleReferencesToObject @ 1421ca780

FString * __cdecl
FReferenceChainSearch::FindAndPrintStaleReferencesToObject
          (FString *__return_storage_ptr__,UObject *param_1,EPrintStaleReferencesOptions param_2)

{
  code *pcVar1;
  bool bVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar3;
  FString *pFVar4;
  UObject *local_res10 [3];
  TArray<FString,TSizedDefaultAllocator<32>_> local_38;
  UObject **local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  TArrayView<UObject_*_const,int> local_18;
  
  local_28 = local_res10;
  uStack_20 = 1;
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = 1;
  local_res10[0] = param_1;
  local_18.DataPtr = local_28;
  pTVar3 = FindAndPrintStaleReferencesToObjects(&local_38,&local_18,param_2);
  if (pTVar3->ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
  }
  ::FString::FString(__return_storage_ptr__,(FString *)(pTVar3->AllocatorInstance).Data);
  DestructItems<FString,int>((FString *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FindAndPrintStaleReferencesToObjects @ 1421ca840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __cdecl
FReferenceChainSearch::FindAndPrintStaleReferencesToObjects
          (TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArrayView<UObject_*_const,int> *param_1,EPrintStaleReferencesOptions param_2)

{
  UObject **ppUVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ForAnyElementType _Src;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar15;
  FUObjectItem *pFVar16;
  FThreadHeartBeat *pFVar17;
  FGameThreadHitchHeartBeatThreaded *pFVar18;
  FString *pFVar19;
  FGCHistory *this;
  FGCSnapshot *pFVar20;
  FOutputDeviceRedirector *this_00;
  EPrintStaleReferencesOptions EVar21;
  UObject **ppUVar22;
  FScriptContainerElement *pFVar23;
  TArrayView<UObject_*_const,int> *pTVar24;
  UObject **ppUVar25;
  longlong lVar26;
  EReferenceChainSearchMode EVar27;
  Type TVar28;
  undefined1 auStackY_4e8 [32];
  undefined1 local_498;
  undefined1 local_497 [7];
  FString local_490;
  FGCObjectInfo *local_480;
  UObjectBaseUtility *local_478;
  FString local_470;
  FGCObjectInfo *local_460;
  EPrintStaleReferencesOptions local_458;
  EPrintStaleReferencesOptions local_454;
  TArrayView<UObject_*_const,int> *local_450;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_448;
  FString local_440;
  FString local_430;
  FString local_420;
  FString local_410;
  FString local_400;
  UObject *local_3f0;
  UObject *local_3e8;
  UObject **local_3e0;
  FName local_3d8;
  UObject **local_3d0;
  code *local_3c8;
  UObject ***local_3c0;
  undefined1 *local_3b8;
  UObjectBaseUtility *local_3b0;
  code *local_3a8;
  undefined1 **local_3a0;
  code *local_398;
  UObject ***local_390;
  undefined1 *local_388;
  UObjectBaseUtility *local_380;
  code *local_378;
  undefined1 **local_370;
  UObject **local_368;
  FGCObjectInfo **local_360;
  FGCObjectInfo **local_358;
  UObject **local_350;
  FGCObjectInfo **local_348;
  FGCObjectInfo **local_340;
  UObjectBaseUtility **local_338;
  FString *local_330;
  FString *local_328;
  FString local_320;
  TArrayView<UObject_*_const,int> local_308;
  FString local_2f8;
  FString local_2e8;
  FString local_2d8;
  FString local_2c8;
  FString local_2b8;
  FString local_2a8;
  TArrayView<UObject_*_const,int> local_298;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FString local_218;
  undefined1 local_208 [48];
  undefined1 local_1d8 [64];
  void *local_198;
  undefined4 local_190;
  undefined1 local_188 [64];
  void *local_148;
  undefined4 local_140;
  Type local_138;
  undefined1 local_128 [112];
  void *local_b8;
  undefined4 local_b0;
  TSparseArray<TSparseSetElement<TTuple<UObject_const_*,FGCObjectInfo_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_a8;
  void *local_68;
  undefined4 local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4e8;
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  bVar13 = false;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_454 = None;
  local_458 = param_2;
  local_450 = param_1;
  local_448 = __return_storage_ptr__;
  if ((param_1->ArrayNum < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ObjectsToFindReferencesTo.Num() > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ReferenceChainSearch.cpp"
                          ,0x777,L"ObjectsToFindReferencesTo cannot be empty"), bVar11)) {
    pcVar3 = (code *)swi(3);
    pTVar15 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
    return pTVar15;
  }
  ppUVar25 = param_1->DataPtr;
  bVar11 = false;
  ppUVar1 = ppUVar25 + param_1->ArrayNum;
  for (; ppUVar25 != ppUVar1; ppUVar25 = ppUVar25 + 1) {
    pUVar2 = *ppUVar25;
    if ((pUVar2 == (UObject *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Obj",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ReferenceChainSearch.cpp"
                            ,0x77b,L"Object to find references to cannot be null"), bVar12)) {
      pcVar3 = (code *)swi(3);
      pTVar15 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar15;
    }
    if (bVar11) {
LAB_1421ca968:
      bVar11 = true;
    }
    else {
      iVar14 = *(int *)&pUVar2->field_0xc;
      if ((iVar14 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                              ,0x443,L""), bVar11)) {
        pcVar3 = (code *)swi(3);
        pTVar15 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar15;
      }
      if (iVar14 < GUObjectArray.ObjObjects.NumElements) {
        pFVar16 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar14);
      }
      else {
        pFVar16 = (FUObjectItem *)0x0;
      }
      if (((uint)((ulonglong)(pFVar16->field0_0x0).FlagsAndRefCount >> 0x35) & 1) != 0)
      goto LAB_1421ca968;
      bVar11 = false;
    }
    param_1 = local_450;
  }
  switch(param_2 & VerbosityMask) {
  case None:
    TVar28 = NoLogging;
    break;
  case Log:
    TVar28 = Log;
    break;
  case Display:
    TVar28 = Display;
    break;
  case Warning:
    TVar28 = Warning;
    break;
  default:
    TVar28 = Error;
  }
  if (4 < (byte)LogLoad._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLoad);
  }
  ppUVar25 = param_1->DataPtr;
  ppUVar1 = ppUVar25 + local_450->ArrayNum;
  local_3e0 = ppUVar25;
  local_3d0 = ppUVar1;
  EVar21 = local_458;
  pTVar24 = local_450;
  for (ppUVar22 = ppUVar25; local_458 = EVar21, local_450 = pTVar24, ppUVar22 != ppUVar1;
      ppUVar22 = ppUVar22 + 1) {
    if (4 < (byte)LogLoad._0_1_) {
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)*ppUVar22,&local_320,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLoad);
      if (local_320.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_320.Data.AllocatorInstance.Data);
      }
    }
    EVar21 = local_458;
    pTVar24 = local_450;
  }
  if ((EVar21 >> 9 & 1) == 0) {
    EVar27 = GCOnly|Shortest;
    if (bVar11) {
      EVar27 = GCOnly|ShortestToGarbage;
    }
  }
  else {
    EVar27 = GCOnly|Minimal;
  }
  local_308.DataPtr = pTVar24->DataPtr;
  local_308.ArrayNum = pTVar24->ArrayNum;
  local_308._12_4_ = *(undefined4 *)&pTVar24->field_0xc;
  FReferenceChainSearch((FReferenceChainSearch *)local_128,&local_308,EVar27,Log);
  local_208[0] = false;
  local_208[1] = false;
  pFVar17 = FThreadHeartBeat::GetNoInit();
  if (pFVar17 != (FThreadHeartBeat *)0x0) {
    local_208[1] = true;
    FThreadHeartBeat::SuspendHeartBeat(pFVar17,(bool)local_208[0]);
  }
  pFVar18 = FGameThreadHitchHeartBeatThreaded::Get();
  FGameThreadHitchHeartBeatThreaded::SuspendHeartBeat(pFVar18);
  local_208._24_4_ = ShortestToGarbage;
  local_208._8_8_ = (FScriptContainerElement *)0x0;
  local_208._16_4_ = 0;
  local_208._20_4_ = 0;
  local_208._32_8_ = (FScriptContainerElement *)0x0;
  local_208._40_4_ = 0;
  local_208._44_4_ = 0;
  local_1d8._0_8_ = 0;
  local_1d8._8_8_ = 0;
  local_1d8._32_8_ = 0;
  local_1d8._40_4_ = 0;
  local_1d8._44_4_ = 0x80;
  local_1d8._48_4_ = 0xffffffff;
  local_1d8._52_4_ = 0;
  local_198 = (void *)0x0;
  local_190 = 0;
  local_188._0_8_ = 0;
  local_188._8_8_ = 0;
  local_188._32_8_ = 0;
  local_188._40_4_ = 0;
  local_188._44_4_ = 0x80;
  local_188._48_4_ = 0xffffffff;
  local_188._52_4_ = 0;
  local_148 = (void *)0x0;
  local_140 = 0;
  local_138 = Log;
  if (ppUVar25 != ppUVar1) {
    local_454 = EVar21 & Ensure;
    do {
      local_478 = (UObjectBaseUtility *)*ppUVar25;
      local_480 = (FGCObjectInfo *)0x0;
      local_460 = (FGCObjectInfo *)0x0;
      local_3f0 = (UObject *)local_478;
      if (TVar28 != NoLogging) {
        UObjectBaseUtility::GetFullName(local_478,&local_2f8,(UObject *)0x0,None);
        FMsg::LogfImpl("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ReferenceChainSearch.cpp"
                       ,0x73f,(FName *)&LogLoad.field_0x4,TVar28,
                       L"Printing reference chains leading to %s: ");
        if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
        }
      }
      local_368 = &local_3f0;
      local_360 = &local_480;
      local_3c8 = UE::Core::Private::Function::
                  TFunctionRefCaller<`PrintStaleReferenceChainsAndFindReferencingObjects'::__l2::<lambda_1>,bool,FReferenceChainSearch::FCallbackParams_&>
                  ::Call;
      local_358 = &local_460;
      local_3c0 = &local_368;
      iVar14 = PrintResults((FReferenceChainSearch *)local_128,
                            (TFunctionRef<bool___cdecl(FReferenceChainSearch::FCallbackParams_&)> *)
                            &local_3c8,false,local_3f0,TVar28);
      bVar11 = iVar14 != 0;
      local_490.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_490.Data.ArrayNum = 0;
      local_490.Data.ArrayMax = 0;
      local_470.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_470.Data.ArrayNum = 0;
      local_470.Data.ArrayMax = 0;
      if (iVar14 == 0) {
        this = FGCHistory::Get();
        pFVar20 = FGCHistory::GetSnapshot(this,0);
        if (pFVar20 == (FGCSnapshot *)0x0) goto LAB_1421cb248;
        if (4 < (byte)LogLoad._0_1_) {
          UObjectBaseUtility::GetFullName(local_478,&local_2a8,(UObject *)0x0,None);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogLoad);
          if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
          }
        }
        local_298.DataPtr = pTVar24->DataPtr;
        local_298.ArrayNum = pTVar24->ArrayNum;
        local_298._12_4_ = *(undefined4 *)&pTVar24->field_0xc;
        PerformSearchFromGCSnapshot((FReferenceChainSearch *)local_208,&local_298,pFVar20);
        local_3e8 = (UObject *)local_478;
        local_480 = (FGCObjectInfo *)0x0;
        local_460 = (FGCObjectInfo *)0x0;
        if (TVar28 != NoLogging) {
          UObjectBaseUtility::GetFullName(local_478,&local_288,(UObject *)0x0,None);
          FMsg::LogfImpl("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ReferenceChainSearch.cpp"
                         ,0x73f,(FName *)&LogLoad.field_0x4,TVar28,
                         L"Printing reference chains leading to %s: ");
          if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_288.Data.AllocatorInstance.Data);
          }
        }
        local_348 = &local_480;
        local_398 = UE::Core::Private::Function::
                    TFunctionRefCaller<`PrintStaleReferenceChainsAndFindReferencingObjects'::__l2::<lambda_1>,bool,FReferenceChainSearch::FCallbackParams_&>
                    ::Call;
        local_340 = &local_460;
        local_390 = &local_350;
        local_350 = &local_3e8;
        iVar14 = PrintResults((FReferenceChainSearch *)local_208,
                              (TFunctionRef<bool___cdecl(FReferenceChainSearch::FCallbackParams_&)>
                               *)&local_398,false,local_3e8,TVar28);
        bVar11 = iVar14 != 0;
        if (iVar14 == 0) goto LAB_1421cb248;
        local_388 = local_497;
        local_497[0] = 0;
        local_380 = local_478;
        local_370 = &local_388;
        local_378 = UE::Core::Private::Function::
                    TFunctionRefCaller<`GetPathToStaleObjectReferencer'::__l2::<lambda_1>,bool,FReferenceChainSearch::FCallbackParams_&>
                    ::Call;
        GetRootPath((FReferenceChainSearch *)local_208,&local_420,
                    (TFunctionRef<bool___cdecl(FReferenceChainSearch::FCallbackParams_&)> *)
                    &local_378,(UObject *)0x0);
        if (local_490.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_490.Data.AllocatorInstance.Data);
        }
        local_490.Data.AllocatorInstance.Data = local_420.Data.AllocatorInstance.Data;
        local_490.Data.ArrayNum = local_420.Data.ArrayNum;
        local_490.Data.ArrayMax = local_420.Data.ArrayMax;
        local_420.Data.ArrayNum = 0;
        local_420.Data.ArrayMax = 0;
        local_420.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_480 == (FGCObjectInfo *)0x0) {
          bVar6 = true;
          pFVar19 = UObjectBaseUtility::GetFullName(local_478,&local_278,(UObject *)0x0,None);
        }
        else {
          bVar7 = true;
          pFVar19 = FGCObjectInfo::GetFullName(local_480,&local_268);
        }
        pFVar23 = (pFVar19->Data).AllocatorInstance.Data;
        (pFVar19->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar19->Data).ArrayNum = 0;
        (pFVar19->Data).ArrayMax = 0;
        if ((bVar6) &&
           (bVar6 = false, local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_278.Data.AllocatorInstance.Data);
        }
        if ((bVar7) &&
           (bVar7 = false, local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_268.Data.AllocatorInstance.Data);
        }
        if (local_460 == (FGCObjectInfo *)0x0) {
          if ((local_480 == (FGCObjectInfo *)0x0) ||
             (((local_480->InternalFlags &
               (RootSet|AsyncLoadingPhase2|Async|Native|AsyncLoadingPhase1|LoaderImport)) ==
               Borrowed && (local_480->RefCount == 0)))) {
            UObjectBaseUtility::GetPathName(local_478,&local_258,(UObject *)0x0);
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("OutReferencingObject || HasGarbageCollectionKeepFlags(OutGarbageObject ? OutGarbageObject : OutReferencingObject)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ReferenceChainSearch.cpp"
                                ,0x7ce,
                                L"No object referencing %s found even though we have a valid reference chain"
                               );
            if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_258.Data.AllocatorInstance.Data);
            }
            if (bVar11) {
              pcVar3 = (code *)swi(3);
              pTVar15 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
              return pTVar15;
            }
            if (local_460 != (FGCObjectInfo *)0x0) goto LAB_1421cb1ae;
          }
        }
        else {
LAB_1421cb1ae:
          bVar8 = true;
          FGCObjectInfo::GetFullName(local_460,&local_248);
        }
        ::FString::PrintfImpl(&local_410,L"Garbage object %s was previously being referenced by %s")
        ;
        if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_470.Data.AllocatorInstance.Data);
        }
        local_470.Data.AllocatorInstance.Data = local_410.Data.AllocatorInstance.Data;
        uVar10._0_4_ = local_410.Data.ArrayNum;
        uVar10._4_4_ = local_410.Data.ArrayMax;
        local_470.Data.ArrayNum = local_410.Data.ArrayNum;
        local_470.Data.ArrayMax = local_410.Data.ArrayMax;
        local_410.Data.ArrayNum = 0;
        local_410.Data.ArrayMax = 0;
        local_410.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        uVar9 = uVar10;
        if ((bVar8) &&
           (bVar8 = false, uVar9 = local_470.Data._8_8_,
           local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          local_470.Data._8_8_ = uVar10;
          FMemory::Free(local_248.Data.AllocatorInstance.Data);
          uVar9 = local_470.Data._8_8_;
        }
        local_470.Data._8_8_ = uVar9;
        if (pFVar23 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar23);
        }
      }
      else {
        local_3b8 = &local_498;
        local_498 = 0;
        local_3b0 = local_478;
        local_3a0 = &local_3b8;
        local_3a8 = UE::Core::Private::Function::
                    TFunctionRefCaller<`GetPathToStaleObjectReferencer'::__l2::<lambda_1>,bool,FReferenceChainSearch::FCallbackParams_&>
                    ::Call;
        GetRootPath((FReferenceChainSearch *)local_128,&local_440,
                    (TFunctionRef<bool___cdecl(FReferenceChainSearch::FCallbackParams_&)> *)
                    &local_3a8,(UObject *)0x0);
        if (local_490.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_490.Data.AllocatorInstance.Data);
        }
        local_490.Data.AllocatorInstance.Data = local_440.Data.AllocatorInstance.Data;
        local_490.Data.ArrayNum = local_440.Data.ArrayNum;
        local_490.Data.ArrayMax = local_440.Data.ArrayMax;
        local_440.Data.ArrayNum = 0;
        local_440.Data.ArrayMax = 0;
        local_440.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_480 == (FGCObjectInfo *)0x0) {
          bVar13 = true;
          pFVar19 = UObjectBaseUtility::GetFullName(local_478,&local_2e8,(UObject *)0x0,None);
        }
        else {
          bVar4 = true;
          pFVar19 = FGCObjectInfo::GetFullName(local_480,&local_2d8);
        }
        pFVar23 = (pFVar19->Data).AllocatorInstance.Data;
        (pFVar19->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar19->Data).ArrayNum = 0;
        (pFVar19->Data).ArrayMax = 0;
        if ((bVar13) &&
           (bVar13 = false, local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
           ) {
          FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
        }
        if ((bVar4) &&
           (bVar4 = false, local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
        }
        if (local_460 == (FGCObjectInfo *)0x0) {
          if ((local_480 == (FGCObjectInfo *)0x0) ||
             (((local_480->InternalFlags &
               (RootSet|AsyncLoadingPhase2|Async|Native|AsyncLoadingPhase1|LoaderImport)) ==
               Borrowed && (local_480->RefCount == 0)))) {
            UObjectBaseUtility::GetPathName(local_478,&local_2c8,(UObject *)0x0);
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("OutReferencingObject || HasGarbageCollectionKeepFlags(OutGarbageObject ? OutGarbageObject : OutReferencingObject)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ReferenceChainSearch.cpp"
                                ,0x7b8,
                                L"No object referencing %s found even though we have a valid reference chain"
                               );
            if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
            }
            if (bVar12) {
              pcVar3 = (code *)swi(3);
              pTVar15 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
              return pTVar15;
            }
            if (local_460 != (FGCObjectInfo *)0x0) goto LAB_1421cae37;
          }
        }
        else {
LAB_1421cae37:
          bVar5 = true;
          FGCObjectInfo::GetFullName(local_460,&local_2b8);
        }
        ::FString::PrintfImpl(&local_430,L"Object %s is being referenced by %s");
        if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_470.Data.AllocatorInstance.Data);
        }
        local_470.Data.AllocatorInstance.Data = local_430.Data.AllocatorInstance.Data;
        uVar9._0_4_ = local_430.Data.ArrayNum;
        uVar9._4_4_ = local_430.Data.ArrayMax;
        local_470.Data.ArrayNum = local_430.Data.ArrayNum;
        local_470.Data.ArrayMax = local_430.Data.ArrayMax;
        local_430.Data.ArrayNum = 0;
        local_430.Data.ArrayMax = 0;
        local_430.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        uVar10 = uVar9;
        if ((bVar5) &&
           (bVar5 = false, uVar10 = local_470.Data._8_8_,
           local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          local_470.Data._8_8_ = uVar9;
          FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
          uVar10 = local_470.Data._8_8_;
        }
        local_470.Data._8_8_ = uVar10;
        if (pFVar23 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar23);
        }
LAB_1421cb248:
        if (!bVar11) {
          if (local_480 == (FGCObjectInfo *)0x0) {
            ::FString::operator=
                      (&local_470,
                       L"However it\'s not referenced by any object. It may have a flag set that\'s preventing it from being destroyed (see log for details)"
                      );
          }
          else {
            FGCObjectInfo::GetFullName(local_480,&local_238);
            ::FString::PrintfImpl
                      (&local_400,
                       L"Garbage object %s is not referenced so it may have a flag set that\'s preventing it from being destroyed (see log for details)"
                      );
            if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_470.Data.AllocatorInstance.Data);
            }
            local_470.Data.AllocatorInstance.Data = local_400.Data.AllocatorInstance.Data;
            local_470.Data.ArrayNum = local_400.Data.ArrayNum;
            local_470.Data.ArrayMax = local_400.Data.ArrayMax;
            local_400.Data.ArrayNum = 0;
            local_400.Data.ArrayMax = 0;
            local_400.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_238.Data.AllocatorInstance.Data);
            }
            pFVar19 = FGCObjectInfo::GetFullName(local_480,&local_228);
            if (&local_490 != pFVar19) {
              if (local_490.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_490.Data.AllocatorInstance.Data);
              }
              local_490.Data.AllocatorInstance.Data = (pFVar19->Data).AllocatorInstance.Data;
              (pFVar19->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_490.Data.ArrayNum = (pFVar19->Data).ArrayNum;
              local_490.Data.ArrayMax = (pFVar19->Data).ArrayMax;
              (pFVar19->Data).ArrayNum = 0;
              (pFVar19->Data).ArrayMax = 0;
            }
            if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_228.Data.AllocatorInstance.Data);
            }
          }
        }
      }
      pTVar15 = local_448;
      pFVar23 = (local_448->AllocatorInstance).Data;
      if (((pFVar23 <= (FScriptContainerElement *)&local_490) &&
          ((FScriptContainerElement *)&local_490 < pFVar23 + (longlong)local_448->ArrayMax * 0x10))
         && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar11)) {
        pcVar3 = (code *)swi(3);
        pTVar15 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar15;
      }
      iVar14 = pTVar15->ArrayNum;
      if (iVar14 == pTVar15->ArrayMax) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar15->AllocatorInstance,&pTVar15->ArrayMax);
      }
      _Src.Data = local_490.Data.AllocatorInstance.Data;
      pTVar15->ArrayNum = iVar14 + 1;
      pFVar23 = (pTVar15->AllocatorInstance).Data + (longlong)iVar14 * 0x10;
      *(undefined8 *)&pFVar23->field_0x0 = 0;
      lVar26 = (longlong)local_490.Data.ArrayNum;
      *(int *)&pFVar23[8].field_0x0 = local_490.Data.ArrayNum;
      if (local_490.Data.ArrayNum == 0) {
        *(int *)(pFVar23 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_490.Data.ArrayNum,0,(ForAnyElementType *)pFVar23,
                   local_490.Data.ArrayNum,(int *)(pFVar23 + 0xc));
        memcpy(*(void **)&pFVar23->field_0x0,_Src.Data,lVar26 * 2);
      }
      if (local_454 == None) {
        this_00 = GetGlobalLogSingleton();
        UObjectBaseUtility::GetFullName(local_478,&local_218,(UObject *)0x0,None);
        ::FName::FName(&local_3d8,L"LogLoad");
        FOutputDevice::CategorizedLogfImpl
                  ((FOutputDevice *)this_00,&local_3d8,TVar28,
                   L"Old %s not cleaned up by GC! %s:\r\n%s");
        if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_218.Data.AllocatorInstance.Data);
        }
      }
      else {
        local_338 = &local_478;
        local_330 = &local_470;
        local_328 = &local_490;
        `FReferenceChainSearch::FindAndPrintStaleReferencesToObjects'[::F]::<lambda_1>::operator()
                  (&local_338);
      }
      if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_470.Data.AllocatorInstance.Data);
      }
      if (local_490.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_490.Data.AllocatorInstance.Data);
      }
      ppUVar25 = local_3e0 + 1;
      pTVar24 = local_450;
      EVar21 = local_458;
      local_3e0 = ppUVar25;
    } while (ppUVar25 != local_3d0);
  }
  pTVar15 = local_448;
  if (((byte)EVar21 & 5) == 5) {
    if (((local_448->ArrayNum != 0) && (local_448->ArrayNum < 1)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar3 = (code *)swi(3);
      pTVar15 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar15;
    }
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogLoad);
  }
  Cleanup((FReferenceChainSearch *)local_208);
  local_140 = 0;
  if (local_148 != (void *)0x0) {
    FMemory::Free(local_148);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_const_*,FGCObjectInfo_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_const_*,FGCObjectInfo_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObject_const_*,FGCObjectInfo_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_188);
  local_190 = 0;
  if (local_198 != (void *)0x0) {
    FMemory::Free(local_198);
  }
  TSparseArray<TSparseSetElement<TTuple<FGCObjectInfo_*,FReferenceChainSearch::FGraphNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGCObjectInfo_*,FReferenceChainSearch::FGraphNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGCObjectInfo_*,FReferenceChainSearch::FGraphNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_1d8);
  if ((FScriptContainerElement *)local_208._32_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_208._32_8_);
  }
  if ((FScriptContainerElement *)local_208._8_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_208._8_8_);
  }
  pFVar18 = FGameThreadHitchHeartBeatThreaded::Get();
  FGameThreadHitchHeartBeatThreaded::ResumeHeartBeat(pFVar18);
  if (((bool)local_208[1] != false) &&
     (pFVar17 = FThreadHeartBeat::GetNoInit(), pFVar17 != (FThreadHeartBeat *)0x0)) {
    FThreadHeartBeat::ResumeHeartBeat(pFVar17,(bool)local_208[0]);
  }
  Cleanup((FReferenceChainSearch *)local_128);
  local_60 = 0;
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  TSparseArray<TSparseSetElement<TTuple<UObject_const_*,FGCObjectInfo_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObject_const_*,FGCObjectInfo_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_a8);
  local_b0 = 0;
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  TSparseArray<TSparseSetElement<TTuple<FGCObjectInfo_*,FReferenceChainSearch::FGraphNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGCObjectInfo_*,FReferenceChainSearch::FGraphNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGCObjectInfo_*,FReferenceChainSearch::FGraphNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_128 + 0x30));
  if ((FScriptContainerElement *)local_128._32_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_128._32_8_);
  }
  if ((FScriptContainerElement *)local_128._8_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_128._8_8_);
  }
  pFVar18 = FGameThreadHitchHeartBeatThreaded::Get();
  FGameThreadHitchHeartBeatThreaded::ResumeHeartBeat(pFVar18);
  if (((bool)local_128[1] != false) &&
     (pFVar17 = FThreadHeartBeat::GetNoInit(), pFVar17 != (FThreadHeartBeat *)0x0)) {
    FThreadHeartBeat::ResumeHeartBeat(pFVar17,(bool)local_128[0]);
  }
  return pTVar15;
}

// GetAllocatedSize @ 1421ceb40

/* WARNING: Enum "Type": Some values do not have unique names */

long64 __thiscall FReferenceChainSearch::GetAllocatedSize(FReferenceChainSearch *this)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  long64 lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  undefined1 *puVar20;
  uint *puVar21;
  int iVar22;
  uint uVar23;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  pFVar15 = (this->ReferenceChains).AllocatorInstance.Data;
  iVar16 = (this->ReferenceChains).ArrayNum;
  lVar18 = (longlong)(this->ReferenceChains).ArrayMax << 3;
  pFVar2 = pFVar15 + (longlong)iVar16 * 8;
  while( true ) {
    if ((this->ReferenceChains).ArrayNum != iVar16) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FReferenceChainSearch::FReferenceChain_*_const,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar15 == pFVar2) break;
    lVar11 = *(longlong *)pFVar15;
    pFVar15 = pFVar15 + 8;
    lVar18 = lVar18 + ((longlong)*(int *)(lVar11 + 0x24) + (longlong)*(int *)(lVar11 + 0x14)) * 8;
  }
  uVar8 = *(uint *)&(this->AllNodes).field_0x48;
  iVar16 = 0;
  lVar17 = 0;
  lVar11 = lVar17;
  if (1 < uVar8) {
    lVar11 = (longlong)(int)uVar8 << 2;
  }
  puVar1 = &(this->AllNodes).field_0x10;
  iVar22 = *(int *)&(this->AllNodes).field_0x8 - *(int *)&(this->AllNodes).field_0x34;
  uVar8 = 1;
  iVar4 = *(int *)&(this->AllNodes).field_0x28;
  lVar18 = lVar18 + (ulonglong)((*(int *)&(this->AllNodes).field_0x2c + 0x1fU >> 5) << 2) + lVar11 +
                    ((longlong)*(int *)&(this->AllNodes).field_0xc + (longlong)iVar22 * 2) * 0x18;
  iVar12 = 0;
  iVar19 = iVar16;
  iVar9 = iVar16;
  if (iVar4 != 0) {
    puVar21 = *(uint **)&(this->AllNodes).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar23 = *puVar21;
    while (uVar23 == 0) {
      lVar11 = (longlong)iVar19;
      iVar16 = iVar16 + 0x20;
      iVar19 = iVar19 + 1;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) {
        iVar12 = *(int *)&(this->AllNodes).field_0x28;
        iVar9 = iVar4;
        goto LAB_1421cec75;
      }
      uVar23 = puVar21[lVar11 + 1];
    }
    iVar12 = *(int *)&(this->AllNodes).field_0x28;
    uVar8 = -uVar23 & uVar23;
    uVar3 = (ulonglong)uVar8 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    iVar9 = iVar16 + -1 + local_res20;
    if (iVar12 < iVar9) {
      iVar9 = iVar4;
    }
  }
LAB_1421cec75:
  uVar23 = *(uint *)&(this->AllNodes).field_0x28;
  TStack_70._padding_ = CONCAT44(uVar8,iVar19);
  uVar8 = uVar23 & 0xffffffe0;
  TStack_70.CurrentBitIndex = iVar9;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  TStack_70._28_4_ = iVar9;
  TStack_70.BaseBitIndex = iVar16;
  uStack_50 = CONCAT44(uStack_7c,iVar22);
  iVar16 = (int)uVar23 >> 5;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar23 < 0) || (iVar12 < (int)uVar23)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    lVar10 = (*pcVar6)();
    return lVar10;
  }
  uVar5 = *(uint *)&(this->AllNodes).field_0x28;
  if (uVar23 != uVar5) {
    puVar20 = *(undefined1 **)&(this->AllNodes).field_0x20;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = &(this->AllNodes).field_0x10;
    }
    uVar23 = -1 << ((byte)uVar23 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
    while (uVar23 == 0) {
      lVar11 = (longlong)iVar16;
      uVar8 = uVar8 + 0x20;
      iVar16 = iVar16 + 1;
      uVar23 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_1421ced80;
      uVar23 = *(uint *)(puVar20 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar23 = (int)lVar11 + -1 + uVar8;
    if ((int)uVar5 < (int)uVar23) {
      uVar23 = uVar5;
    }
  }
LAB_1421ced80:
  while( true ) {
    if (*(int *)&(this->AllNodes).field_0x8 - *(int *)&(this->AllNodes).field_0x34 != (int)uStack_50
       ) {
      `TSparseArray<TSparseSetElement<TTuple<FGCObjectInfo_*,FReferenceChainSearch::FGraphNode_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_70.CurrentBitIndex == uVar23) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar11 = *(longlong *)
              (*(longlong *)&this->AllNodes + 8 + (longlong)TStack_70.CurrentBitIndex * 0x18);
    lVar13 = lVar17;
    if (1 < *(uint *)(lVar11 + 0x58)) {
      lVar13 = (longlong)(int)*(uint *)(lVar11 + 0x58) << 2;
    }
    lVar14 = lVar17;
    if (1 < *(uint *)(lVar11 + 0xa8)) {
      lVar14 = (longlong)(int)*(uint *)(lVar11 + 0xa8) << 2;
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    lVar18 = lVar18 + (longlong)*(int *)(lVar11 + 0x6c) * 0x10 +
                      (ulonglong)((*(int *)(lVar11 + 0x8c) + 0x1fU >> 5) << 2) + lVar14 +
                      (longlong)*(int *)(lVar11 + 0x1c) * 0x38 +
                      lVar13 + (ulonglong)((*(int *)(lVar11 + 0x3c) + 0x1fU >> 5) << 2);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  uVar8 = *(uint *)&(this->ObjectToInfoMap).field_0x48;
  if (1 < uVar8) {
    lVar17 = (longlong)(int)uVar8 << 2;
  }
  return lVar17 + (ulonglong)((*(int *)&(this->ObjectToInfoMap).field_0x2c + 0x1fU >> 5) << 2) +
         (longlong)*(int *)&(this->ObjectToInfoMap).field_0xc * 0x18 + lVar18;
}

// GetObjectFlags @ 1421cfea0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FString * __cdecl
FReferenceChainSearch::GetObjectFlags(FString *__return_storage_ptr__,FGCObjectInfo *param_1)

{
  wchar_t *pwVar1;
  int iVar2;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if (param_1->bDisregardForGC == false) {
    if ((param_1->InternalFlags &
        (Unreachable|ReachabilityFlag2|ReachabilityFlag1|ReachabilityFlag0)) != Borrowed)
    goto LAB_1421cfef7;
    iVar2 = 0x1e;
    pwVar1 = L"(Error: No reachability flag) ";
  }
  else {
    if ((UE::GC::Private::FGCFlags::ReachableObjectFlag & param_1->InternalFlags) == Borrowed)
    goto LAB_1421cfef7;
    iVar2 = 0x21;
    pwVar1 = L"(Error: Reachable but NeverGCed) ";
  }
  ::FString::AppendChars(__return_storage_ptr__,pwVar1,iVar2);
LAB_1421cfef7:
  if ((param_1->InternalFlags & UE::GC::Private::FGCFlags::MaybeUnreachableObjectFlag) != Borrowed)
  {
    ::FString::PrintfImpl(&local_18,L"(MaybeUnreachable<%d>) ");
    iVar2 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar2 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if ((param_1->InternalFlags & Unreachable) != Borrowed) {
    ::FString::AppendChars(__return_storage_ptr__,L"(Unreachable) ",0xe);
  }
  if (param_1->RefCount != 0) {
    ::FString::PrintfImpl(&local_18,L"(refcounted<%d>) ");
    iVar2 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar2 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar2);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if ((param_1->InternalFlags & RootSet) != Borrowed) {
    ::FString::AppendChars(__return_storage_ptr__,L"(root) ",7);
  }
  if ((param_1->InternalFlags & Native) != Borrowed) {
    ::FString::AppendChars(__return_storage_ptr__,L"(native) ",9);
  }
  if ((param_1->InternalFlags & Garbage) != Borrowed) {
    ::FString::AppendChars(__return_storage_ptr__,L"(Garbage) ",10);
  }
  if ((param_1->Flags & RF_Standalone) != RF_NoFlags) {
    ::FString::AppendChars(__return_storage_ptr__,L"(standalone) ",0xd);
  }
  if ((param_1->InternalFlags & Async) != Borrowed) {
    ::FString::AppendChars(__return_storage_ptr__,L"(async) ",8);
  }
  if ((param_1->InternalFlags & (AsyncLoadingPhase2|AsyncLoadingPhase1)) != Borrowed) {
    ::FString::AppendChars(__return_storage_ptr__,L"(asyncloading) ",0xf);
  }
  if ((param_1->InternalFlags & LoaderImport) != Borrowed) {
    ::FString::AppendChars(__return_storage_ptr__,L"(loaderimport) ",0xf);
  }
  if (param_1->bDisregardForGC != false) {
    ::FString::AppendChars(__return_storage_ptr__,L"(NeverGCed) ",0xc);
  }
  if ((param_1->InternalFlags & ClusterRoot) != Borrowed) {
    ::FString::AppendChars(__return_storage_ptr__,L"(ClusterRoot) ",0xe);
  }
  if (0 < param_1->ClusterRootIndex) {
    ::FString::AppendChars(__return_storage_ptr__,L"(Clustered) ",0xc);
  }
  return __return_storage_ptr__;
}

// GetRootPath @ 1421d0780

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FString * __thiscall
FReferenceChainSearch::GetRootPath
          (FReferenceChainSearch *this,FString *__return_storage_ptr__,UObject *param_1)

{
  undefined1 local_res10 [24];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FReferenceChainSearch::GetRootPath'::__l2::<lambda_1>,bool,FReferenceChainSearch::FCallbackParams_&>
             ::Call;
  GetRootPath(this,__return_storage_ptr__,
              (TFunctionRef<bool___cdecl(FReferenceChainSearch::FCallbackParams_&)> *)&local_18,
              param_1);
  return __return_storage_ptr__;
}

// GetRootPath @ 1421d07c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FString * __thiscall
FReferenceChainSearch::GetRootPath
          (FReferenceChainSearch *this,FString *__return_storage_ptr__,
          TFunctionRef<bool___cdecl(FReferenceChainSearch::FCallbackParams_&)> *param_1,
          UObject *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FString *pFVar6;
  UObject *pUVar7;
  FUObjectItem *pFVar8;
  FUObjectItem *pFVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  FReferenceChain *pFVar12;
  undefined1 auStackY_158 [32];
  FOutputDevice local_128;
  FString local_118;
  TFunctionRef<bool___cdecl(FReferenceChainSearch::FCallbackParams_&)> *local_108;
  TFunctionRef<bool___cdecl(FReferenceChainSearch::FCallbackParams_&)> local_100;
  FGCObjectInfo local_f0;
  FString local_c0;
  FString local_b0;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  iVar1 = (this->ReferenceChains).ArrayNum;
  pFVar9 = (FUObjectItem *)0x0;
  local_108 = param_1;
  if (iVar1 != 0) {
    if ((iVar1 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar3)();
      return pFVar6;
    }
    pFVar2 = (this->ReferenceChains).AllocatorInstance.Data;
    pFVar12 = *(FReferenceChain **)pFVar2;
    if (param_2 == (UObject *)0x0) {
LAB_1421d0956:
      if (pFVar12 != (FReferenceChain *)0x0) {
        ::FString::FString(&local_118,L"");
        FOutputDevice::FOutputDevice(&local_128);
        local_128._padding_ = (longlong)&___7FStringOutputDevice__6B_;
        local_128.bAutoEmitLineTerminator = true;
        local_98._0_8_ = (FScriptContainerElement *)0x0;
        local_100._0_8_ = *(undefined8 *)local_108;
        local_100._8_8_ = *(undefined8 *)&local_108->field_0x8;
        local_98._8_8_ = 0;
        local_78 = (void *)0x0;
        local_70 = 0;
        local_6c = 0x80;
        local_68 = 0xffffffff;
        local_64 = 0;
        local_58 = (void *)0x0;
        local_50 = 0;
        DumpChain(pFVar12,&local_100,
                  (TMap<unsigned___int64,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FString,0>_>
                   *)local_98,&local_128,this->VerbosityForPrint);
        (__return_storage_ptr__->Data).AllocatorInstance.Data =
             local_118.Data.AllocatorInstance.Data;
        (__return_storage_ptr__->Data).ArrayNum = local_118.Data.ArrayNum;
        (__return_storage_ptr__->Data).ArrayMax = local_118.Data.ArrayMax;
        local_118.Data.ArrayNum = 0;
        local_118.Data.ArrayMax = 0;
        local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_50 = 0;
        if (local_58 != (void *)0x0) {
          FMemory::Free(local_58);
        }
        TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_98,0,local_98._8_4_);
        iVar1 = SUB84(local_98._8_8_,4);
        local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
        if (iVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
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
        FOutputDevice::~FOutputDevice(&local_128);
        local_b0.Data.AllocatorInstance.Data = local_118.Data.AllocatorInstance.Data;
        goto LAB_1421d0bb5;
      }
    }
    else {
      iVar1 = (this->ReferenceChains).ArrayNum;
      for (pFVar11 = pFVar2; pFVar11 != pFVar2 + (longlong)iVar1 * 8; pFVar11 = pFVar11 + 8) {
        pUVar7 = FGCObjectInfo::TryResolveObject(*(FGCObjectInfo **)(**(longlong **)pFVar11 + 8));
        if (pUVar7 == param_2) {
          uVar10 = (uint)((longlong)pFVar11 - (longlong)pFVar2 >> 3);
          if (uVar10 != 0xffffffff) {
            uVar5 = 0;
            if ((int)uVar10 < (this->ReferenceChains).ArrayNum) {
              uVar5 = ~uVar10 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              pFVar6 = (FString *)(*pcVar3)();
              return pFVar6;
            }
            pFVar12 = *(FReferenceChain **)
                       ((this->ReferenceChains).AllocatorInstance.Data + (longlong)(int)uVar10 * 8);
            goto LAB_1421d0956;
          }
          break;
        }
      }
    }
  }
  if (param_2 == (UObject *)0x0) {
    ::FString::FString(__return_storage_ptr__,L"No target objects are currently reachable.");
    return __return_storage_ptr__;
  }
  local_f0.Name.ComparisonIndex.Value = *(uint *)&param_2->field_0x18;
  local_f0.Name.Number = *(uint *)&param_2->field_0x1c;
  local_f0.Flags = *(EObjectFlags *)&param_2->field_0x8;
  iVar1 = *(int *)&param_2->field_0xc;
  local_f0.Class = (FGCObjectInfo *)0x0;
  local_f0.Outer = (FGCObjectInfo *)0x0;
  if ((iVar1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x443,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FString *)(*pcVar3)();
    return pFVar6;
  }
  pFVar8 = pFVar9;
  if (iVar1 < GUObjectArray.ObjObjects.NumElements) {
    pFVar8 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar1);
  }
  iVar1 = *(int *)&param_2->field_0xc;
  local_f0.InternalFlags =
       (EInternalObjectFlags)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20);
  if ((iVar1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x443,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FString *)(*pcVar3)();
    return pFVar6;
  }
  pFVar8 = pFVar9;
  if (iVar1 < GUObjectArray.ObjObjects.NumElements) {
    pFVar8 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar1);
  }
  iVar1 = *(int *)&param_2->field_0xc;
  local_f0.ClusterRootIndex = pFVar8->ClusterRootIndex;
  local_f0.bDisregardForGC = iVar1 <= GUObjectArray.ObjLastNonGCIndex;
  if ((iVar1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x443,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FString *)(*pcVar3)();
    return pFVar6;
  }
  if (iVar1 < GUObjectArray.ObjObjects.NumElements) {
    pFVar9 = FChunkedFixedUObjectArray::operator[](&GUObjectArray.ObjObjects,iVar1);
  }
  local_f0.RefCount = *(int *)&pFVar9->field0_0x0;
  FGCObjectInfo::GetFullName(&local_f0,&local_b0);
  GetObjectFlags(&local_c0,&local_f0);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s%s is not currently reachable.");
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
LAB_1421d0bb5:
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// PerformSearchFromGCSnapshot @ 1421d8020

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FReferenceChainSearch::PerformSearchFromGCSnapshot
          (FReferenceChainSearch *this,UObject *param_1,FGCSnapshot *param_2)

{
  UObject *local_res10 [3];
  TArrayView<UObject_*_const,int> local_18;
  
  local_18.ArrayNum = 1;
  local_18.DataPtr = local_res10;
  local_res10[0] = param_1;
  PerformSearchFromGCSnapshot(this,&local_18,param_2);
  return;
}

// PerformSearchFromGCSnapshot @ 1421d8060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FReferenceChainSearch::PerformSearchFromGCSnapshot
          (FReferenceChainSearch *this,TArrayView<UObject_*_const,int> *param_1,FGCSnapshot *param_2
          )

{
  int *piVar1;
  UObject **ppUVar2;
  ulonglong uVar3;
  EReferenceChainSearchMode EVar4;
  UObjectBaseUtility *this_00;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  longlong *plVar7;
  code *pcVar8;
  longlong lVar9;
  TMap<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,0>_>
  *pTVar10;
  bool bVar11;
  int iVar12;
  FThreadHeartBeat *pFVar13;
  TTuple<UObject_const_*,FGCObjectInfo_*> *pTVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  UObject **ppUVar21;
  longlong lVar22;
  int iVar23;
  undefined1 *puVar24;
  uint *puVar25;
  TMap<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,0>_>
  *pTVar26;
  TBitArray<FDefaultBitArrayAllocator> *pTVar27;
  undefined1 auStackY_248 [32];
  undefined1 local_1f7;
  undefined1 local_1f6;
  undefined1 local_1f5;
  uint local_1f4;
  longlong local_1f0;
  TArray<UE::ReferenceChainSearch::FGraphPath,TSizedDefaultAllocator<32>_> local_1e8;
  int local_1d8;
  int local_1d4;
  TBitArray<FDefaultBitArrayAllocator> *local_1d0;
  TMap<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,0>_>
  *local_1c8;
  TMap<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,0>_>
  *local_1c0;
  int iStack_1b8;
  uint uStack_1b4;
  undefined1 *local_1b0;
  undefined4 uStack_1a8;
  uint uStack_1a4;
  int local_1a0;
  int iStack_198;
  undefined4 uStack_194;
  TMap<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*,0>_>
  *local_190;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_188;
  undefined8 uStack_168;
  FGraph local_160;
  FScriptContainerElement *local_138;
  int iStack_130;
  undefined4 uStack_12c;
  code *local_128;
  undefined1 *local_120;
  FString local_118;
  FString local_108;
  FString local_f8;
  TArrayView<FGCObjectInfo_*_const,int> local_e8 [2];
  undefined4 local_bc;
  undefined1 local_b8 [80];
  void *local_68;
  undefined4 local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_248;
  pFVar13 = FThreadHeartBeat::GetNoInit();
  if (pFVar13 != (FThreadHeartBeat *)0x0) {
    FThreadHeartBeat::SuspendHeartBeat(pFVar13,false);
  }
  Cleanup(this);
  UE::ReferenceChainSearch::FPolicyGCHistory::FPolicyGCHistory
            ((FPolicyGCHistory *)local_b8,param_2,&this->AllNodes);
  ppUVar21 = param_1->DataPtr;
  ppUVar2 = ppUVar21 + param_1->ArrayNum;
  iVar23 = 0;
  for (; ppUVar21 != ppUVar2; ppUVar21 = ppUVar21 + 1) {
    this_00 = (UObjectBaseUtility *)*ppUVar21;
    pTVar14 = TSet<TTuple<UObject_const_*,FGCObjectInfo_*>,TDefaultMapHashableKeyFuncs<UObject_const_*,FGCObjectInfo_*,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<UObject_const_*,FGCObjectInfo_*>,TDefaultMapHashableKeyFuncs<UObject_const_*,FGCObjectInfo_*,0>,FDefaultSetAllocator>
                      *)param_2,(UObject *)this_00);
    if (pTVar14 == (TTuple<UObject_const_*,FGCObjectInfo_*> *)0x0) {
      local_1f0 = 0;
LAB_1421d81be:
      if (2 < (byte)LogReferenceChain._0_1_) {
        UObjectBaseUtility::GetPathName(this_00,&local_118,(UObject *)0x0);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogReferenceChain);
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      local_1f0 = *(longlong *)&pTVar14->field_0x8;
      if (local_1f0 == 0) goto LAB_1421d81be;
      pFVar5 = (this->ObjectInfosToFindReferencesTo).AllocatorInstance.Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_1f0) &&
          ((FScriptContainerElement *)&local_1f0 <
           pFVar5 + (longlong)(this->ObjectInfosToFindReferencesTo).ArrayMax * 8)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar12 = (this->ObjectInfosToFindReferencesTo).ArrayNum;
      piVar1 = &(this->ObjectInfosToFindReferencesTo).ArrayMax;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&(this->ObjectInfosToFindReferencesTo).AllocatorInstance,piVar1);
      }
      (this->ObjectInfosToFindReferencesTo).ArrayNum = iVar12 + 1;
      *(longlong *)
       ((this->ObjectInfosToFindReferencesTo).AllocatorInstance.Data + (longlong)iVar12 * 8) =
           local_1f0;
    }
  }
  uVar16 = *(uint *)&(param_2->DirectReferences).field_0x28;
  pTVar26 = &param_2->DirectReferences;
  pTVar27 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_2->DirectReferences).field_0x10;
  local_1a0 = 0;
  uStack_1b4 = 1;
  uStack_1a4 = 0;
  if (uVar16 != 0) {
    puVar25 = *(uint **)&(param_2->DirectReferences).field_0x20;
    if (puVar25 == (uint *)0x0) {
      puVar25 = (uint *)pTVar27;
    }
    uVar20 = *puVar25;
    iVar23 = 0;
    while (uVar20 == 0) {
      lVar17 = (longlong)iVar23;
      local_1a0 = local_1a0 + 0x20;
      iVar23 = iVar23 + 1;
      uStack_1a4 = uVar16;
      if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23)
      goto LAB_1421d829e;
      uVar20 = puVar25[lVar17 + 1];
    }
    uStack_1b4 = -uVar20 & uVar20;
    uVar3 = (ulonglong)uStack_1b4 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_1d8 = (int)lVar17;
    uStack_1a4 = local_1a0 + -1 + local_1d8;
    if ((int)uVar16 < (int)uStack_1a4) {
      uStack_1a4 = uVar16;
    }
  }
LAB_1421d829e:
  iStack_198 = *(int *)&(param_2->DirectReferences).field_0x8 -
               *(int *)&(param_2->DirectReferences).field_0x34;
  uVar20 = *(uint *)&(param_2->DirectReferences).field_0x28;
  uStack_1a8 = 0xffffffff;
  uVar18 = uVar20 & 0xffffffe0;
  TStack_188._padding_ = CONCAT44(uStack_1b4,iVar23);
  iVar12 = (int)uVar20 >> 5;
  TStack_188._28_4_ = local_bc;
  TStack_188.BaseBitIndex = local_1a0;
  uStack_168 = CONCAT44(uStack_194,iStack_198);
  TStack_188.UnvisitedBitMask = 0xffffffff;
  local_1f4 = uVar20;
  local_1d0 = pTVar27;
  local_1c8 = pTVar26;
  local_1c0 = pTVar26;
  iStack_1b8 = iVar23;
  local_1b0 = (undefined1 *)pTVar27;
  local_190 = pTVar26;
  TStack_188.CurrentBitIndex = uStack_1a4;
  TStack_188.Array = pTVar27;
  if (((int)uVar20 < 0) || ((int)uVar16 < (int)uVar20)) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L"");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  uVar16 = *(uint *)&(param_2->DirectReferences).field_0x28;
  if (uVar20 != uVar16) {
    puVar24 = *(undefined1 **)&(param_2->DirectReferences).field_0x20;
    if (puVar24 == (undefined1 *)0x0) {
      puVar24 = (undefined1 *)pTVar27;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar12 * 4);
    while (uVar20 == 0) {
      lVar17 = (longlong)iVar12;
      uVar18 = uVar18 + 0x20;
      iVar12 = iVar12 + 1;
      uVar20 = uVar16;
      local_1f4 = uVar16;
      if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
      goto LAB_1421d83c0;
      uVar20 = *(uint *)(puVar24 + lVar17 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_1d4 = (int)lVar17;
    uVar20 = local_1d4 + -1 + uVar18;
    local_1f4 = uVar20;
    if ((int)uVar16 < (int)uVar20) {
      uVar20 = uVar16;
      local_1f4 = uVar16;
    }
  }
LAB_1421d83c0:
  do {
    pTVar10 = local_190;
    if (*(int *)&local_190->field_0x8 - *(int *)&local_190->field_0x34 != (int)uStack_168) {
      local_1f7 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FReferenceToken,TArray<FGCDirectReference,TSizedDefaultAllocator<32>_>_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_1f7);
    }
    lVar17 = (longlong)TStack_188.CurrentBitIndex;
    if (((TStack_188.CurrentBitIndex == uVar20) && (TStack_188.Array == pTVar27)) &&
       (pTVar10 == pTVar26)) {
      local_160.Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_160.Buffer.ArrayNum = 0;
      local_160.EdgeLists.ArrayNum = 0;
      local_160.EdgeLists.ArrayMax = 0;
      local_160.Buffer.ArrayMax = 0;
      local_160.EdgeLists.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      UE::ReferenceChainSearch::PerformInitialGatherFromGCHistory
                ((FPolicyGCHistory *)local_b8,&local_160);
      local_138 = (this->ObjectInfosToFindReferencesTo).AllocatorInstance.Data;
      iStack_130 = (this->ObjectInfosToFindReferencesTo).ArrayNum;
      EVar4 = this->SearchMode;
      local_1e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1e8.ArrayNum = 0;
      local_1e8.ArrayMax = 0;
      if (iStack_130 < 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L"");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      local_e8[0]._12_4_ = uStack_12c;
      local_e8[0].ArrayNum = iStack_130;
      local_e8[0].DataPtr = (FGCObjectInfo **)local_138;
      UE::ReferenceChainSearch::PerformSearch<UE::ReferenceChainSearch::FPolicyGCHistory>
                ((FPolicyGCHistory *)local_b8,local_e8,&local_160,EVar4,&local_1e8);
      UE::ReferenceChainSearch::PopulateReferenceInfo<UE::ReferenceChainSearch::FPolicyGCHistory>
                ((FPolicyGCHistory *)local_b8,&local_160,this->SearchMode,&local_1e8,
                 &this->ReferenceChains);
      if ((this->SearchMode & (PrintAllResults|PrintResults)) != Default) {
        local_120 = &local_1f5;
        local_128 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FReferenceChainSearch::PrintResults'::__l2::<lambda_1>,bool,FReferenceChainSearch::FCallbackParams_&>
                    ::Call;
        PrintResults(this,(TFunctionRef<bool___cdecl(FReferenceChainSearch::FCallbackParams_&)> *)
                          &local_128,(bool)((byte)(this->SearchMode >> 0x11) & 1),(UObject *)0x0,
                     this->VerbosityForPrint);
      }
      DestructItems<UE::ReferenceChainSearch::FGraphPath,int>
                ((FGraphPath *)local_1e8.AllocatorInstance.Data,local_1e8.ArrayNum);
      if ((FGraphPath *)local_1e8.AllocatorInstance.Data != (FGraphPath *)0x0) {
        FMemory::Free(local_1e8.AllocatorInstance.Data);
      }
      if (local_160.EdgeLists.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_160.EdgeLists.AllocatorInstance.Data);
      }
      if (local_160.Buffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_160.Buffer.AllocatorInstance.Data);
      }
      local_60 = 0;
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      TSparseArray<TSparseSetElement<TTuple<FGCObjectInfo_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FGCObjectInfo_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FGCObjectInfo_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)(local_b8 + 0x10));
      if (pFVar13 != (FThreadHeartBeat *)0x0) {
        pFVar13 = FThreadHeartBeat::GetNoInit();
        if (pFVar13 != (FThreadHeartBeat *)0x0) {
          FThreadHeartBeat::ResumeHeartBeat(pFVar13,false);
        }
      }
      return;
    }
    lVar6 = *(longlong *)pTVar10;
    plVar7 = *(longlong **)(lVar6 + 8 + lVar17 * 0x18);
    lVar9 = plVar7[1];
    lVar22 = *plVar7;
    lVar19 = (longlong)(int)lVar9 * 0x10 + lVar22;
    while( true ) {
      if ((int)plVar7[1] != (int)lVar9) {
        local_1f6 = 0;
        `TCheckedPointerIterator<FGCDirectReference,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_1f6);
      }
      if (lVar22 == lVar19) break;
      uVar20 = *(uint *)(lVar22 + 8) & 7;
      uVar16 = *(uint *)(lVar22 + 8);
      if (uVar20 != 0) {
        uVar16 = uVar20;
      }
      if (uVar16 == 4) {
        pFVar15 = (this->ObjectInfosToFindReferencesTo).AllocatorInstance.Data;
        pFVar5 = pFVar15 + (longlong)(this->ObjectInfosToFindReferencesTo).ArrayNum * 8;
        if (pFVar15 == pFVar5) goto LAB_1421d84f2;
        do {
          if (*(ulonglong *)pFVar15 == (*(ulonglong *)(lVar22 + 8) & 0xfffffffffffffff8)) {
            if (3 < (byte)LogReferenceChain._0_1_) {
              FReferenceToken::GetDescription((FReferenceToken *)(lVar22 + 8),&local_f8);
              FReferenceToken::GetDescription((FReferenceToken *)(lVar6 + lVar17 * 0x18),&local_108)
              ;
              UE::Logging::Private::BasicLog<4>
                        (&::LOG_Static,(FLogCategoryBase *)&LogReferenceChain);
              if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_108.Data.AllocatorInstance.Data);
              }
              if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_f8.Data.AllocatorInstance.Data);
              }
            }
            goto LAB_1421d84f2;
          }
          pFVar15 = pFVar15 + 8;
        } while (pFVar15 != pFVar5);
        lVar22 = lVar22 + 0x10;
      }
      else {
LAB_1421d84f2:
        lVar22 = lVar22 + 0x10;
      }
    }
    TStack_188.UnvisitedBitMask = TStack_188.UnvisitedBitMask & ~TStack_188._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_188);
    pTVar26 = local_1c8;
    pTVar27 = local_1d0;
    uVar20 = local_1f4;
  } while( true );
}

// PrintResults @ 1421d9050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

int __thiscall
FReferenceChainSearch::PrintResults
          (FReferenceChainSearch *this,
          TFunctionRef<bool___cdecl(FReferenceChainSearch::FCallbackParams_&)> *param_1,bool param_2
          ,UObject *param_3,Type param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FReferenceChain *pFVar3;
  code *pcVar4;
  TConsoleVariableData<int> *pTVar5;
  bool bVar6;
  int iVar7;
  FThreadHeartBeat *pFVar8;
  ulonglong uVar9;
  UObject *pUVar10;
  FGCObjectInfo *pFVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  FReferenceChainSearch *pFVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 auStack_168 [32];
  char local_127 [3];
  uint local_124;
  FReferenceChainSearch *local_120;
  TFunctionRef<bool___cdecl(FReferenceChainSearch::FCallbackParams_&)> local_118;
  Type local_108 [8];
  FReferenceChainSearch *local_100;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  undefined1 local_98 [64];
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_168;
  local_127[0] = param_2;
  local_120 = this;
  pFVar8 = FThreadHeartBeat::GetNoInit();
  if (pFVar8 != (FThreadHeartBeat *)0x0) {
    FThreadHeartBeat::SuspendHeartBeat(pFVar8,false);
  }
  pTVar5 = CVarMaxReferenceChainsToPrint.Ref;
  bVar6 = IsInParallelGameThread();
  uVar16 = 0;
  if (!bVar6) {
    bVar6 = IsInGameThread();
    uVar9 = 4;
    if (!bVar6) goto LAB_1421d90cc;
  }
  uVar9 = uVar16;
LAB_1421d90cc:
  iVar7 = *(int *)((longlong)pTVar5->ShadowedValue + uVar9);
  local_124 = 0;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  pFVar13 = (local_120->ReferenceChains).AllocatorInstance.Data;
  local_98._32_8_ = 0;
  local_98._40_4_ = 0;
  local_98._52_4_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  iVar2 = (local_120->ReferenceChains).ArrayNum;
  local_98._44_4_ = 0x80;
  local_98._48_4_ = 0xffffffff;
  pFVar1 = pFVar13 + (longlong)iVar2 * 8;
  while( true ) {
    while( true ) {
      uVar15 = (uint)uVar16;
      if ((local_120->ReferenceChains).ArrayNum != iVar2) {
        local_127[1] = 0;
        `TCheckedPointerIterator<FReferenceChainSearch::FReferenceChain_*_const,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_127 + 1);
      }
      pFVar14 = local_120;
      if (pFVar13 == pFVar1) goto LAB_1421d91fe;
      pFVar3 = *(FReferenceChain **)pFVar13;
      if ((param_3 == (UObject *)0x0) ||
         (pUVar10 = FGCObjectInfo::TryResolveObject(pFVar3->TargetNode->ObjectInfo),
         pUVar10 == param_3)) break;
      uVar16 = (ulonglong)local_124;
      pFVar13 = pFVar13 + 8;
    }
    pFVar14 = local_120;
    uVar15 = local_124;
    if ((local_127[0] == '\0') && (iVar7 <= (int)local_124)) break;
    local_118._0_8_ = *(undefined8 *)param_1;
    local_118._8_8_ = *(undefined8 *)&param_1->field_0x8;
    DumpChain(pFVar3,&local_118,
              (TMap<unsigned___int64,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FString,0>_>
               *)local_98,(FOutputDevice *)GWarn,param_4);
    local_124 = local_124 + 1;
    uVar16 = (ulonglong)local_124;
    pFVar13 = pFVar13 + 8;
  }
  FOutputDevice::CategorizedLogfImpl
            ((FOutputDevice *)GWarn,(FName *)&LogReferenceChain.field_0x4,param_4,
             L"Referenced by %d more reference chain(s).");
LAB_1421d91fe:
  if (uVar15 == 0) {
    local_108[0] = param_4;
    local_100 = pFVar14;
    if (param_3 == (UObject *)0x0) {
      pFVar13 = (pFVar14->ObjectInfosToFindReferencesTo).AllocatorInstance.Data;
      iVar7 = (pFVar14->ObjectInfosToFindReferencesTo).ArrayNum;
      pFVar1 = pFVar13 + (longlong)iVar7 * 8;
      while( true ) {
        if ((pFVar14->ObjectInfosToFindReferencesTo).ArrayNum != iVar7) {
          `TCheckedPointerIterator<FGCObjectInfo_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_127);
        }
        uVar15 = local_124;
        if (pFVar13 == pFVar1) break;
        pFVar11 = *(FGCObjectInfo **)pFVar13;
        if ((pFVar11->InternalFlags &
            (RootSet|AsyncLoadingPhase2|Async|Native|AsyncLoadingPhase1|LoaderImport)) == Borrowed)
        {
          if (pFVar11->RefCount == 0) {
            FGCObjectInfo::GetFullName(pFVar11,&local_a8);
            GetObjectFlags(&local_b8,pFVar11);
            FOutputDevice::CategorizedLogfImpl
                      ((FOutputDevice *)GWarn,(FName *)&LogReferenceChain.field_0x4,param_4,
                       L"%s%s is not currently reachable. Try using GC history to debug transient leaks with \'gc.historysize 1\'"
                      );
            FVar12.Data = local_a8.Data.AllocatorInstance.Data;
            if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b8.Data.AllocatorInstance.Data);
              FVar12.Data = local_a8.Data.AllocatorInstance.Data;
            }
          }
          else {
            FGCObjectInfo::GetFullName(pFVar11,&local_c8);
            GetObjectFlags(&local_d8,pFVar11);
            FOutputDevice::CategorizedLogfImpl
                      ((FOutputDevice *)GWarn,(FName *)&LogReferenceChain.field_0x4,param_4,
                       L"%s%s is not currently reachable but it does have %d refcount set.");
            FVar12.Data = local_c8.Data.AllocatorInstance.Data;
            if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_d8.Data.AllocatorInstance.Data);
              FVar12.Data = local_c8.Data.AllocatorInstance.Data;
            }
          }
        }
        else {
          FGCObjectInfo::GetFullName(pFVar11,&local_e8);
          GetObjectFlags(&local_f8,pFVar11);
          FOutputDevice::CategorizedLogfImpl
                    ((FOutputDevice *)GWarn,(FName *)&LogReferenceChain.field_0x4,param_4,
                     L"%s%s is not currently reachable but it does have some of EInternalObjectFlags_RootFlags set."
                    );
          FVar12.Data = local_e8.Data.AllocatorInstance.Data;
          if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f8.Data.AllocatorInstance.Data);
            FVar12.Data = local_e8.Data.AllocatorInstance.Data;
          }
        }
        if (FVar12.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar12.Data);
        }
        pFVar13 = pFVar13 + 8;
        pFVar14 = local_120;
      }
    }
    else {
      pFVar11 = FGCObjectInfo::FindOrAddInfoHelper(param_3,&pFVar14->ObjectToInfoMap);
      if ((pFVar11 == (FGCObjectInfo *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ObjInfo",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\ReferenceChainSearch.cpp"
                             ,0x6e5,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      `FReferenceChainSearch::PrintResults'::__l17::<lambda_1>::operator()(local_108,pFVar11);
    }
  }
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  if ((pFVar8 != (FThreadHeartBeat *)0x0) &&
     (pFVar8 = FThreadHeartBeat::GetNoInit(), pFVar8 != (FThreadHeartBeat *)0x0)) {
    FThreadHeartBeat::ResumeHeartBeat(pFVar8,false);
  }
  return uVar15;
}

// PrintResults @ 1421d9490

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

int __thiscall
FReferenceChainSearch::PrintResults
          (FReferenceChainSearch *this,bool param_1,UObject *param_2,Type param_3)

{
  int iVar1;
  undefined1 local_28 [8];
  code *local_20;
  undefined1 *local_18;
  
  local_18 = local_28;
  local_20 = UE::Core::Private::Function::
             TFunctionRefCaller<`FReferenceChainSearch::PrintResults'::__l2::<lambda_1>,bool,FReferenceChainSearch::FCallbackParams_&>
             ::Call;
  iVar1 = PrintResults(this,(TFunctionRef<bool___cdecl(FReferenceChainSearch::FCallbackParams_&)> *)
                            &local_20,param_1,param_2,param_3);
  return iVar1;
}

// SetVerbosityForPrint @ 1421e8b20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FReferenceChainSearch::SetVerbosityForPrint(FReferenceChainSearch *this,Type param_1)

{
  this->VerbosityForPrint = param_1;
  return;
}

// operator() @ 150488030

bool __thiscall
`FReferenceChainSearch::FindAndPrintStaleReferencesToObjects'[::F]::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_28;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_2239398928841701398>);
  if (bVar2) {
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)**(undefined8 **)this,&local_28,(UObject *)0x0,None);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2239398928841701398>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504880ec;
    }
  }
  bVar2 = false;
LAB_1504880ec:
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

