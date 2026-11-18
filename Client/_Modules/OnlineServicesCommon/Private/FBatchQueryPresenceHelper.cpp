// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 4

// FBatchQueryPresenceHelper @ 14ee0c7c0

FBatchQueryPresenceHelper * __thiscall
UE::Online::FBatchQueryPresenceHelper::FBatchQueryPresenceHelper
          (FBatchQueryPresenceHelper *this,
          TSharedPtr<UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>,1> *param_1,
          TSharedPtr<UE::Online::IPresence,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FEvent *pFVar4;
  FBatchQueryPresenceHelper *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  TOptional<UE::Online::FOnlineError> local_48;
  
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  (this->Result).Presences.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Result).Presences.ArrayNum = 0;
  (this->Result).Presences.ArrayMax = 0;
  (this->Op).Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  (this->Op).WeakReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
    UNLOCK();
  }
  (this->Presence).Object = param_2->Object;
  pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
  (this->Presence).SharedReferenceCount.ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.bIsSet = false;
  Errors::Success(&this->ErrorState,&local_48);
  if (local_48.bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.TypedValue.Inner.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.TypedValue.Details.SharedReferenceCount.ReferenceController);
  }
  this->NumPresencesRemaining = 0;
  pTVar3 = ::operator_new(0xc0);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    (this->Promise).State.Object = (TFutureState<UE::Online::FBatchQueryPresenceHelperResult> *)0x10
    ;
    (this->Promise).State.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TFutureState_UFBatchQueryPresenceHelperResult_Online_UE_____00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[4]._padding_ = 0;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[5]._padding_ = 0;
    pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[6]._padding_ = 0;
    pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[7]._padding_ = 0;
    pTVar3[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[7].WeakReferenceCount = (atomic<int>)0x0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar3 + 1),4000);
    pTVar3[4]._padding_ = 0;
    pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
    pFVar4 = FGenericPlatformProcess::GetSynchEventFromPool(true);
    pTVar3[7]._padding_ = (longlong)pFVar4;
    *(undefined1 *)&pTVar3[7].SharedReferenceCount = 0;
    if ((TFutureState<UE::Online::FBatchQueryPresenceHelperResult> *)(pTVar3 + 1) ==
        (TFutureState<UE::Online::FBatchQueryPresenceHelperResult> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FBatchQueryPresenceHelper *)(*pcVar1)();
        return pFVar5;
      }
    }
    (this->Promise).State.Object =
         (TFutureState<UE::Online::FBatchQueryPresenceHelperResult> *)(pTVar3 + 1);
    (this->Promise).State.SharedReferenceCount.ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    pTVar6 = pTVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  (this->Promise).bFutureRetrieved = false;
  if (param_1->Object == (TOnlineAsyncOp<UE::Online::FBatchQueryPresence> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FBatchQueryPresenceHelper *)(*pcVar1)();
      return pFVar5;
    }
  }
  this->NumPresencesRemaining =
       (((param_1->Object->SharedState).Object)->Params).TargetAccountIds.ArrayNum;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FBatchQueryPresenceHelper @ 14ee246b0

void __thiscall
UE::Online::FBatchQueryPresenceHelper::~FBatchQueryPresenceHelper(FBatchQueryPresenceHelper *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TFutureState<UE::Online::FBatchQueryPresenceHelperResult> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  
  pTVar3 = (this->Promise).State.Object;
  if ((pTVar3 != (TFutureState<UE::Online::FBatchQueryPresenceHelperResult> *)0x0) &&
     (pTVar3->field_0x68 == '\0')) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Promise).State.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ErrorState).Inner.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ErrorState).Details.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Presence).SharedReferenceCount.ReferenceController);
  pTVar4 = (this->Op).WeakReferenceCount.ReferenceController;
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
  DestructItems<TSharedRef<UE::Online::FUserPresence_const_,1>,int>
            ((TSharedRef<UE::Online::FUserPresence_const_,1> *)
             (this->Result).Presences.AllocatorInstance.Data,(this->Result).Presences.ArrayNum);
  pFVar5 = (this->Result).Presences.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
    return;
  }
  return;
}

// operator() @ 14ee2df70

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00015309c4cc) overlaps instruction at (ram,0x00015309c4cb)
    */
/* WARNING: Removing unreachable block (ram,0x00015309c609) */
/* WARNING: Removing unreachable block (ram,0x00015309c459) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UE::Online::FBatchQueryPresenceHelper::GetPromise'::__l9::<lambda_1>::operator()
          (void *this,TOnlineResult<UE::Online::FQueryPresence> *param_1)

{
  byte bVar1;
  char *pcVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  ForAnyElementType *pFVar7;
  longlong lVar8;
  IOnlineErrorDetails *pIVar9;
  TReferenceControllerBase<1> *pTVar10;
  FOnlineError *pFVar11;
  undefined8 *puVar12;
  void *pvVar13;
  longlong lVar14;
  void *pvVar15;
  void *pvVar16;
  void *pvVar17;
  undefined8 uVar18;
  FFutureState *this_00;
  code *pcVar19;
  TReferenceControllerBase<1> *pTVar20;
  uint uVar21;
  bool bVar22;
  char cVar23;
  byte bVar24;
  int iVar25;
  uint uVar26;
  byte bVar34;
  FScriptContainerElement *pFVar27;
  FOnlineError *pFVar28;
  uint *puVar29;
  byte *pbVar30;
  int *piVar31;
  byte *pbVar32;
  undefined1 *puVar35;
  char cVar36;
  undefined2 uVar37;
  char cVar39;
  char *pcVar38;
  byte bVar40;
  char *unaff_RBX;
  undefined1 *puVar41;
  undefined1 *puVar42;
  undefined1 *puVar43;
  char *unaff_RBP;
  undefined4 *unaff_RSI;
  undefined1 *puVar44;
  undefined1 *unaff_RDI;
  int *in_R8;
  wchar_t *in_R9;
  longlong in_R10;
  longlong unaff_R15;
  longlong in_FS_OFFSET;
  bool bVar45;
  byte bVar2;
  longlong *plVar33;
  
  bVar24 = param_1->field_0x30;
  pcVar38 = (char *)param_1;
  if (1 < (ulonglong)bVar24) {
    in_R9 = L"";
    in_R8 = (int *)0x12f;
    pcVar38 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h";
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                        ,0x12f,L"");
    if (bVar22) {
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::FQueryPresence::Result,UE::Online::FQueryPresence::Result,UE::Online::FOnlineError>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + (ulonglong)bVar24) == '\0') {
    pFVar28 = UE::Online::TResult<UE::Online::FQueryPresence::Result,UE::Online::FOnlineError>::
              GetErrorValue((TResult<UE::Online::FQueryPresence::Result,UE::Online::FOnlineError> *)
                            param_1);
    lVar8 = *(longlong *)this;
    pIVar9 = (pFVar28->Details).Object;
    pTVar10 = (pFVar28->Details).SharedReferenceCount.ReferenceController;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar20 = *(TReferenceControllerBase<1> **)(lVar8 + 0x38);
    *(IOnlineErrorDetails **)(lVar8 + 0x30) = pIVar9;
    *(TReferenceControllerBase<1> **)(lVar8 + 0x38) = pTVar10;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
    pTVar10 = (pFVar28->Inner).SharedReferenceCount.ReferenceController;
    pFVar11 = (pFVar28->Inner).Object;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar20 = *(TReferenceControllerBase<1> **)(lVar8 + 0x48);
    *(FOnlineError **)(lVar8 + 0x40) = pFVar11;
    *(TReferenceControllerBase<1> **)(lVar8 + 0x48) = pTVar10;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
    *(ulong64 *)(lVar8 + 0x50) = pFVar28->ErrorCode;
  }
  else {
    pFVar7 = *(ForAnyElementType **)this;
    pFVar27 = (FScriptContainerElement *)
              UE::Online::TResult<UE::Online::FQueryPresence::Result,UE::Online::FOnlineError>::
              GetOkValue((TResult<UE::Online::FQueryPresence::Result,UE::Online::FOnlineError> *)
                         param_1);
    if ((pFVar7->Data <= pFVar27) &&
       (pFVar27 < pFVar7->Data + (longlong)*(int *)((longlong)&pFVar7[1].Data + 4) * 0x10)) {
      in_R9 = 
      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
      ;
      bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar22) {
        pcVar19 = (code *)swi(3);
        (*pcVar19)();
        return;
      }
    }
    iVar25 = *(int *)&pFVar7[1].Data;
    in_R8 = (int *)((longlong)&pFVar7[1].Data + 4);
    if (iVar25 == *in_R8) {
      iVar25 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,pFVar7,in_R8);
    }
    *(int *)&pFVar7[1].Data = iVar25 + 1;
    pcVar38 = (char *)(pFVar7->Data + (longlong)iVar25 * 0x10);
    *(undefined8 *)pcVar38 = *(undefined8 *)pFVar27;
    lVar8 = *(longlong *)(pFVar27 + 8);
    *(longlong *)&((TOnlineResult<UE::Online::FQueryPresence> *)pcVar38)->field_0x8 = lVar8;
    if (lVar8 != 0) {
      LOCK();
      *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
      UNLOCK();
    }
  }
  lVar8 = *(longlong *)this;
  piVar31 = (int *)(lVar8 + 0x58);
  *piVar31 = *piVar31 + -1;
  if (*(int *)(lVar8 + 0x58) < 1) {
    puVar12 = *(undefined8 **)this;
    pvVar13 = (void *)*puVar12;
    *puVar12 = 0;
    lVar5 = *(long *)(puVar12 + 1);
    lVar6 = *(long *)((longlong)puVar12 + 0xc);
    puVar12[1] = 0;
    lVar8 = *(longlong *)this;
    lVar14 = *(longlong *)(lVar8 + 0x48);
    pvVar15 = *(void **)(lVar8 + 0x30);
    pvVar16 = *(void **)(lVar8 + 0x38);
    pvVar17 = *(void **)(lVar8 + 0x40);
    *(undefined8 *)(lVar8 + 0x38) = 0;
    *(undefined8 *)(lVar8 + 0x30) = 0;
    *(undefined8 *)(lVar8 + 0x48) = 0;
    *(undefined8 *)(lVar8 + 0x40) = 0;
    uVar18 = *(undefined8 *)(lVar8 + 0x50);
    if (puVar12[0xc] == 0) {
      in_R9 = L"";
      in_R8 = (int *)0x283;
      bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("State.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x283,L"");
      if (bVar22) {
        pcVar19 = (code *)swi(3);
        (*pcVar19)();
        return;
      }
      if (puVar12[0xc] == 0) {
        in_R9 = L"";
        in_R8 = (int *)0x458;
        bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar22) {
          pcVar19 = (code *)swi(3);
          (*pcVar19)();
          return;
        }
      }
    }
    this_00 = (FFutureState *)puVar12[0xc];
    if (this_00->bComplete != (TAtomic<bool>)0x0) {
      in_R9 = L"";
      in_R8 = (int *)0xcd;
      bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("!IsComplete()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0xcd,L"");
      if (bVar22) {
        pcVar19 = (code *)swi(3);
        (*pcVar19)();
        return;
      }
    }
    this_00[1].Mutex.CriticalSection.Opaque1[0] = pvVar13;
    this_00[1].Mutex.CriticalSection.Opaque2[0] = lVar5;
    this_00[1].Mutex.CriticalSection.Opaque2[1] = lVar6;
    this_00[1]._padding_ = lVar14;
    *(undefined8 *)&this_00[1].CompletionCallback = uVar18;
    this_00[1].Mutex.CriticalSection.Opaque3[0] = pvVar15;
    this_00[1].Mutex.CriticalSection.Opaque3[1] = pvVar16;
    this_00[1].Mutex.CriticalSection.Opaque3[2] = pvVar17;
    FFutureState::MarkComplete(this_00);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    pcVar38 = (char *)0x0;
    DestructItems<TSharedRef<UE::Online::FUserPresence_const_,1>,int>
              ((TSharedRef<UE::Online::FUserPresence_const_,1> *)0x0,0);
  }
  bVar24 = param_1->field_0x30;
  puVar35 = &param_1->field_0x8;
  if (1 < (ulonglong)bVar24) {
    in_R9 = L"";
    in_R8 = (int *)0xd4;
    pcVar38 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h";
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                        ,0xd4,L"");
    if (bVar22) {
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
  }
  puVar29 = (uint *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FQueryPresence::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[bVar24];
  uVar37 = SUB82(pcVar38,0);
  bVar34 = (byte)((ulonglong)puVar29 >> 8);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar24) {
  case 0:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&param_1->field_0x10);
    return;
  default:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&param_1->field_0x20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&param_1->field_0x10);
    return;
  case 2:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&param_1->field_0x10);
    return;
  case 4:
    return;
  case 6:
    DestructItems<TSharedRef<UE::Online::ISession_const_,1>,int>
              (*(TSharedRef<UE::Online::ISession_const_,1> **)puVar35,*(int *)&param_1->field_0x10);
    if (*(void **)puVar35 == (void *)0x0) {
      return;
    }
    FMemory::Free(*(void **)puVar35);
    return;
  case 8:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&param_1->field_0x10);
    return;
  case 10:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&param_1->field_0x10);
    return;
  case 0xc:
    return;
  case 0xe:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&param_1->field_0x10);
    return;
  case 0x10:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&param_1->field_0x10);
    return;
  case 0x12:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&param_1->field_0x10);
    return;
  case 0x14:
    return;
  case 0x16:
    return;
  case 0x18:
    return;
  case 0x1a:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)&param_1->field_0x10);
    return;
  case 0x1c:
    DestructItems<TSharedRef<UE::Online::ISessionInvite_const_,1>,int>
              (*(TSharedRef<UE::Online::ISessionInvite_const_,1> **)puVar35,
               *(int *)&param_1->field_0x10);
    if (*(void **)puVar35 == (void *)0x0) {
      return;
    }
    FMemory::Free(*(void **)puVar35);
    return;
  case 0x1e:
    return;
  case 0x20:
    return;
  case 0x22:
    bVar34 = bVar34 & 0x70;
    DAT_1730aa81b = DAT_1730aa81b + bVar34;
    *unaff_RBX = *unaff_RBX + bVar34;
    uVar4 = in(uVar37);
    *unaff_RDI = uVar4;
    *unaff_RBP = *unaff_RBP + bVar34;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x23:
    break;
  }
  if (*(byte *)(unaff_R15 + 0x6f + in_R10 * 2) <= (byte)unaff_RBX) {
LAB_15309c4c6_3:
    cVar23 = (char)puVar29;
    *(byte *)puVar29 = (byte)*puVar29 + cVar23;
    *(byte *)puVar29 = (byte)*puVar29 + cVar23;
    *(byte *)puVar29 = (byte)*puVar29 + cVar23;
    unaff_RBP[0x78] = unaff_RBP[0x78] + cVar23;
    pcVar38 = (char *)(ulonglong)*(uint *)((longlong)unaff_RSI + 0xff00000075);
    out(*(undefined1 *)unaff_RSI,uVar37);
    out(*(undefined1 *)(ulonglong)*(uint *)(puVar35 + (longlong)unaff_RBP * 2 + 0x6f),uVar37);
    cVar23 = (char)*(uint *)((longlong)unaff_RSI + 0xff00000075);
    *pcVar38 = *pcVar38 + cVar23;
    *pcVar38 = *pcVar38 + cVar23;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  out(*(undefined1 *)unaff_RSI,uVar37);
  uVar26 = *(uint *)(unaff_RDI + 0x70);
  puVar35 = (undefined1 *)(ulonglong)uVar26;
  bVar24 = (byte)puVar29;
  *(byte *)puVar29 = (byte)*puVar29 + bVar24;
  uVar21 = *puVar29;
  *(byte *)puVar29 = (byte)*puVar29 + bVar24;
  if (-1 < (char)(byte)*puVar29) {
    puVar29 = (uint *)(ulonglong)*(uint *)((longlong)unaff_RSI + 0x76);
    unaff_RSI = (undefined4 *)((longlong)unaff_RSI + 1);
    goto LAB_15309c4c6_3;
  }
  cVar36 = (char)pcVar38;
  *(byte *)((longlong)puVar29 + 1) =
       (*(byte *)((longlong)puVar29 + 1) - cVar36) - CARRY1((byte)uVar21,bVar24);
  *(byte *)puVar29 = (byte)*puVar29 + bVar24;
  pbVar32 = puVar35 + -6;
  bVar40 = *pbVar32;
  *pbVar32 = *pbVar32 + bVar24;
  *(byte *)((longlong)puVar29 + 1) =
       (*(byte *)((longlong)puVar29 + 1) - cVar36) - CARRY1(bVar40,bVar24);
  *(byte *)puVar29 = (byte)*puVar29 + bVar24;
  pbVar32 = puVar35 + -6;
  bVar40 = *pbVar32;
  *pbVar32 = *pbVar32 + bVar24;
  *(byte *)((longlong)puVar29 + 1) =
       (*(byte *)((longlong)puVar29 + 1) - cVar36) - CARRY1(bVar40,bVar24);
  *(byte *)puVar29 = (byte)*puVar29 + bVar24;
  *pcVar38 = *pcVar38 + bVar34;
  *(char *)in_R9 = (char)*in_R9 + -8;
  uVar21 = *puVar29;
  puVar29 = (uint *)(ulonglong)uVar21;
  cVar39 = (char)((ulonglong)pcVar38 >> 8);
  *pcVar38 = *pcVar38 + cVar39;
  out(*(undefined4 *)((longlong)unaff_RSI + 1),uVar37);
  *pcVar38 = *pcVar38 + cVar39;
  *(char *)puVar29 = (char)*puVar29 + (char)uVar21;
  *(char *)in_R9 = (char)*in_R9 + -0x10;
  piVar31 = (int *)(ulonglong)*puVar29;
  bVar40 = (byte)((ulonglong)unaff_RBX >> 8);
  *(byte *)piVar31 = (char)*piVar31 + bVar40;
  iVar25 = *piVar31;
  *unaff_RBP = *unaff_RBP + (char)((uint)(iVar25 * 0x790072) >> 8);
  uVar21 = *(uint *)(ulonglong)(uint)(iVar25 * 0x790072);
  puVar29 = (uint *)(ulonglong)uVar21;
  pcVar3 = (char *)((longlong)unaff_RSI + 9);
  out(*(undefined4 *)((longlong)unaff_RSI + 5),uVar37);
  *pcVar3 = *pcVar3 + (char)(uVar26 >> 8);
  unaff_RBX[in_FS_OFFSET] = unaff_RBX[in_FS_OFFSET] + cVar39;
  cVar23 = (char)uVar21;
  *(char *)puVar29 = (char)*puVar29 + cVar23;
  *(char *)puVar29 = (char)*puVar29 + cVar23;
  *(char *)in_R9 = (char)*in_R9 + -0x20;
  piVar31 = (int *)(ulonglong)*puVar29;
  *(byte *)piVar31 = (char)*piVar31 + bVar40;
  uVar26 = *(int *)(ulonglong)(uint)(*piVar31 * 0x610072) * 0x6e006f;
  *(char *)(ulonglong)uVar26 = *(char *)(ulonglong)uVar26 + (char)uVar26;
  uVar26 = in(0x4e);
  pbVar30 = (byte *)(ulonglong)uVar26;
  *(uint *)pbVar30 = *(int *)pbVar30 + uVar26;
  bVar24 = *pbVar30;
  bVar34 = (byte)uVar26;
  *pbVar30 = *pbVar30 + bVar34;
  pbVar30[1] = (pbVar30[1] - cVar36) - CARRY1(bVar24,bVar34);
  *pbVar30 = *pbVar30 + bVar34;
  pbVar32 = puVar35 + -6;
  bVar24 = *pbVar32;
  *pbVar32 = *pbVar32 + bVar34;
  pbVar30[1] = (pbVar30[1] - cVar36) - CARRY1(bVar24,bVar34);
  *pbVar30 = *pbVar30 + bVar34;
  pbVar32 = puVar35 + -6;
  bVar24 = *pbVar32;
  *pbVar32 = *pbVar32 + bVar34;
  pbVar30[1] = (pbVar30[1] - cVar36) - CARRY1(bVar24,bVar34);
  *pbVar30 = *pbVar30 + bVar34;
  pbVar32 = puVar35 + -6;
  bVar24 = *pbVar32;
  *pbVar32 = *pbVar32 + bVar34;
  pbVar30[1] = (pbVar30[1] - cVar36) - CARRY1(bVar24,bVar34);
  *pbVar30 = *pbVar30 + bVar34;
  pbVar30[0x49] = pbVar30[0x49] + (char)(uVar26 >> 8);
  uVar26 = in(0x4e);
  pbVar30 = (byte *)(ulonglong)uVar26;
  *(uint *)pbVar30 = *(int *)pbVar30 + uVar26;
  bVar24 = *pbVar30;
  bVar34 = (byte)uVar26;
  *pbVar30 = *pbVar30 + bVar34;
  pbVar30[1] = (pbVar30[1] - cVar36) - CARRY1(bVar24,bVar34);
  *pbVar30 = *pbVar30 + bVar34;
  cVar23 = (char)(uVar26 >> 8);
  pbVar30[0x14ee549] = pbVar30[0x14ee549] + cVar23;
  *pbVar30 = *pbVar30 + bVar34;
  pbVar30[0x14ef312] = pbVar30[0x14ef312] + bVar34;
  *pbVar30 = *pbVar30 + bVar34;
  *pbVar30 = *pbVar30 + bVar34;
  *pbVar30 = *pbVar30 + bVar34;
  *pbVar30 = *pbVar30 + bVar34;
  *pbVar30 = *pbVar30 + bVar34;
  pbVar32 = (byte *)(unaff_RBX + 0x3a);
  bVar22 = CARRY1(*pbVar32,bVar34);
  *pbVar32 = *pbVar32 + bVar34;
  puVar41 = &DAT_450064f8;
  puVar43 = (undefined1 *)((longlong)unaff_RSI + 0xd);
  out(*(undefined4 *)pcVar3,uVar37);
  _DAT_450064f8 = unaff_RDI;
  if (bVar22) {
    puVar44 = (undefined1 *)((longlong)unaff_RSI + 0xe);
    out(*puVar43,uVar37);
    puVar35 = (undefined1 *)(ulonglong)*(uint *)(unaff_RDI + 0x70);
    puVar41 = &DAT_450064f0;
    puVar42 = &DAT_450064f0;
    puVar43 = puVar44;
    _DAT_450064f0 = puVar35;
    if (*pbVar32 != 0) {
      bVar22 = CARRY1(*pbVar30,bVar34);
      *pbVar30 = *pbVar30 + bVar34;
      goto LAB_15309c6e0;
    }
  }
  puVar42 = puVar41;
  puVar44 = puVar43;
  if (*pbVar32 == 0) {
    *(undefined8 *)(puVar41 + -8) = 0x49000000;
    out(*puVar43,uVar37);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_15309c6e0:
  pbVar30[1] = (pbVar30[1] - cVar36) - bVar22;
  *pbVar30 = *pbVar30 + bVar34;
  pbVar30[0x4f] = pbVar30[0x4f] + cVar23;
  uVar26 = in(0x4e);
  pbVar30 = (byte *)(ulonglong)uVar26;
  *(uint *)pbVar30 = *(int *)pbVar30 + uVar26;
  bVar24 = *pbVar30;
  bVar34 = (byte)uVar26;
  *pbVar30 = *pbVar30 + bVar34;
  pbVar30[1] = (pbVar30[1] - cVar36) - CARRY1(bVar24,bVar34);
  *pbVar30 = *pbVar30 + bVar34;
  pbVar32 = puVar35 + -6;
  bVar24 = *pbVar32;
  *pbVar32 = *pbVar32 + bVar34;
  pbVar30[1] = (pbVar30[1] - cVar36) - CARRY1(bVar24,bVar34);
  *pbVar30 = *pbVar30 + bVar34;
  pbVar32 = puVar35 + -6;
  bVar24 = *pbVar32;
  *pbVar32 = *pbVar32 + bVar34;
  pbVar30[1] = (pbVar30[1] - cVar36) - CARRY1(bVar24,bVar34);
  *pbVar30 = *pbVar30 + bVar34;
  pbVar32 = puVar35 + -6;
  bVar24 = *pbVar32;
  *pbVar32 = *pbVar32 + bVar34;
  pbVar30[1] = (pbVar30[1] - cVar36) - CARRY1(bVar24,bVar34);
  *pbVar30 = *pbVar30 + bVar34;
  *pbVar30 = *pbVar30 + (char)(uVar26 >> 8);
  pbVar30 = (byte *)in(0x4e);
  *(int *)pbVar30 = *(int *)pbVar30 + (int)pbVar30;
  bVar24 = *pbVar30;
  bVar34 = (byte)pbVar30;
  *pbVar30 = *pbVar30 + bVar34;
  pbVar30[1] = (pbVar30[1] - cVar36) - CARRY1(bVar24,bVar34);
  *pbVar30 = *pbVar30 + bVar34;
  pbVar32 = puVar35 + -6;
  bVar24 = *pbVar32;
  *pbVar32 = *pbVar32 + bVar34;
  pbVar30[1] = (pbVar30[1] - cVar36) - CARRY1(bVar24,bVar34);
  *pbVar30 = *pbVar30 + bVar34;
  pbVar32 = puVar35 + -6;
  bVar24 = *pbVar32;
  *pbVar32 = *pbVar32 + bVar34;
  pbVar30[1] = (pbVar30[1] - cVar36) - CARRY1(bVar24,bVar34);
  *pbVar30 = *pbVar30 + bVar34;
  pbVar32 = puVar35 + -6;
  bVar24 = *pbVar32;
  *pbVar32 = *pbVar32 + bVar34;
  pbVar30[1] = (pbVar30[1] - cVar36) - CARRY1(bVar24,bVar34);
  *pbVar30 = *pbVar30 + bVar34;
  *pbVar30 = *pbVar30 + cVar36;
  do {
    piVar31 = (int *)in(0x4e);
    *piVar31 = *piVar31 + (int)piVar31;
    bVar45 = SCARRY1((char)*piVar31,(char)piVar31);
    *(char *)piVar31 = (char)*piVar31 + (char)piVar31;
    bVar22 = (char)*piVar31 < '\0';
    pbVar32 = (byte *)CONCAT71((int7)((ulonglong)piVar31 >> 8),DAT_a0000000014eee7a);
code_r0x00015309c749:
  } while (bVar45 == bVar22);
  *(longlong *)pbVar32 = *(longlong *)pbVar32 + (longlong)in_R8;
  cVar23 = (char)pbVar32;
  *pbVar32 = *pbVar32 + cVar23;
  *pbVar32 = *pbVar32 + cVar23;
  pbVar32[0x14eee7e] = pbVar32[0x14eee7e] + cVar39;
  *pbVar32 = *pbVar32 + cVar23;
  pbVar32 = (byte *)in(0x4e);
  puVar35 = puVar42;
  do {
    iVar25 = (int)pbVar32;
    *(int *)pbVar32 = *(int *)pbVar32 + iVar25;
    bVar24 = *pbVar32;
    bVar34 = (byte)pbVar32;
    *pbVar32 = *pbVar32 + bVar34;
    if (SCARRY1(bVar24,bVar34)) {
      *(longlong *)pbVar32 = *(longlong *)pbVar32 + (longlong)in_R8;
      *pbVar32 = *pbVar32 + bVar34;
      unaff_RBX[-0x12] = unaff_RBX[-0x12] + cVar36;
      *(longlong *)pbVar32 = *(longlong *)pbVar32 + (longlong)in_R8;
      *pbVar32 = *pbVar32 + bVar34;
      puVar44[(ulonglong)(uint)((int)unaff_RBP + (int)puVar44) * 8 + 0x4e] =
           puVar44[(ulonglong)(uint)((int)unaff_RBP + (int)puVar44) * 8 + 0x4e] + (byte)unaff_RBX;
      *(int *)pbVar32 = *(int *)pbVar32 + iVar25;
      *pbVar32 = *pbVar32 + bVar34;
      *(byte **)(puVar35 + -8) = pbVar32;
LAB_15309c7fc:
      *(int *)pbVar32 = *(int *)pbVar32 + iVar25;
      *pbVar32 = *pbVar32 + bVar34;
      pbVar32[0x5c] = pbVar32[0x5c] + cVar39;
      out(uVar37,bVar34);
      *(longlong *)pbVar32 = *(longlong *)pbVar32 + (longlong)in_R8;
      *pbVar32 = *pbVar32 + bVar34;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    out(uVar37,bVar34);
    puVar43 = puVar35;
    do {
      *(longlong *)pbVar32 = *(longlong *)pbVar32 + (longlong)in_R8;
      *pbVar32 = *pbVar32 + bVar34;
      *(int *)pbVar32 = *(int *)pbVar32 + iVar25;
      bVar1 = *pbVar32;
      bVar45 = SCARRY1(*pbVar32,bVar34);
      *pbVar32 = *pbVar32 + bVar34;
      bVar2 = *pbVar32;
      bVar24 = *pbVar32;
      puVar42 = puVar43 + -8;
      puVar35 = puVar43 + -8;
      *(byte **)(puVar43 + -8) = pbVar32;
      if ((char)bVar2 < '\0') {
        *(longlong *)pbVar32 = *(longlong *)pbVar32 + (longlong)in_R8;
        bVar24 = *pbVar32;
        *pbVar32 = *pbVar32 + bVar34;
        if (!SCARRY1(bVar24,bVar34)) {
          out(uVar37,bVar34);
          *(longlong *)pbVar32 = *(longlong *)pbVar32 + (longlong)in_R8;
          bVar24 = *pbVar32;
          *pbVar32 = *pbVar32 + bVar34;
          if (SCARRY1(bVar24,bVar34)) {
            *pbVar32 = *pbVar32 + bVar34;
            pbVar32[2] = pbVar32[2] + cVar39;
            out(uVar37,bVar34);
            *(longlong *)pbVar32 = *(longlong *)pbVar32 + (longlong)in_R8;
            *pbVar32 = *pbVar32 + bVar34;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          uVar26 = in(0x4e);
          pbVar32 = (byte *)(ulonglong)uVar26;
          *(uint *)pbVar32 = *(int *)pbVar32 + uVar26;
          bVar24 = *pbVar32;
          bVar34 = (byte)uVar26;
          *pbVar32 = *pbVar32 + bVar34;
          bVar24 = bVar34 << 1 | CARRY1(bVar24,bVar34);
          plVar33 = (longlong *)(ulonglong)CONCAT31((int3)(uVar26 >> 8),bVar24);
          out(uVar37,bVar24);
          *plVar33 = *plVar33 + (longlong)in_R8;
          *(byte *)plVar33 = (char)*plVar33 + bVar24;
          ((TOnlineResult<UE::Online::FQueryPresence> *)((longlong)pcVar38 + 0x14ee8))->field_0x2 =
               ((TOnlineResult<UE::Online::FQueryPresence> *)((longlong)pcVar38 + 0x14ee8))->
               field_0x2 ^ bVar40;
          *(byte *)plVar33 = (char)*plVar33 + bVar24;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        goto LAB_15309c7fc;
      }
      puVar43 = puVar43 + -8;
    } while (CARRY1(bVar1,bVar34) || bVar24 == 0);
    bVar22 = false;
    if (bVar24 == 0 || bVar45) goto code_r0x00015309c749;
    *(longlong *)pbVar32 = *(longlong *)pbVar32 + (longlong)in_R8;
    *pbVar32 = *pbVar32 + bVar34;
    puVar43 = &((TOnlineResult<UE::Online::FQueryPresence> *)((longlong)pcVar38 + -0x38))->
               field_0x1d;
    *puVar43 = (byte)*puVar43 >> 6 | *puVar43 << 2;
  } while( true );
}

// GetPromise @ 14eee3e80

/* WARNING: Type propagation algorithm not settling */

TFuture<UE::Online::FBatchQueryPresenceHelperResult> * __thiscall
UE::Online::FBatchQueryPresenceHelper::GetPromise
          (FBatchQueryPresenceHelper *this,
          TFuture<UE::Online::FBatchQueryPresenceHelperResult> *__return_storage_ptr__)

{
  IPresence *pIVar1;
  TFutureState<UE::Online::FBatchQueryPresenceHelperResult> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  atomic<int> aVar5;
  FScriptContainerElement *pFVar6;
  atomic<int> aVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  TFuture<UE::Online::FBatchQueryPresenceHelperResult> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  bool bVar15;
  undefined1 local_res8 [8];
  TFuture<UE::Online::FBatchQueryPresenceHelperResult> *local_res10;
  uint local_res18;
  TOnlineAsyncOp<UE::Online::FBatchQueryPresence> *local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_c8;
  FDelegateAllocation local_c0;
  uint local_b0;
  undefined4 uStack_ac;
  undefined1 local_a8;
  FAsyncOpSharedState *local_a0;
  FScriptContainerElement *local_98;
  FDestructionSentinel local_90;
  FDestructionSentinel local_78;
  FDelegateAllocation *local_60;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  
  pTVar12 = (this->Op).WeakReferenceCount.ReferenceController;
  local_res10 = __return_storage_ptr__;
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar12->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        pTVar12 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14eee40fc;
      }
      LOCK();
      aVar7 = pTVar12->SharedReferenceCount;
      bVar15 = aVar5 == aVar7;
      if (bVar15) {
        pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar7 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar7;
    } while (!bVar15);
    local_res20 = (this->Op).Object;
    if (local_res20 != (TOnlineAsyncOp<UE::Online::FBatchQueryPresence> *)0x0) {
      local_a0 = (local_res20->SharedState).Object;
      local_res18 = (local_a0->Params).TargetAccountIds.ArrayNum;
      uVar13 = (ulonglong)(int)local_res18;
      pFVar14 = (local_a0->Params).TargetAccountIds.AllocatorInstance.Data;
      local_98 = pFVar14 + uVar13 * 4;
      while( true ) {
        pFVar6 = local_98;
        if ((local_a0->Params).TargetAccountIds.ArrayNum != (int)uVar13) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (pFVar14 == pFVar6) break;
        _local_b0 = CONCAT44(*(undefined4 *)pFVar14,
                             (((local_res20->SharedState).Object)->Params).LocalAccountId.Value);
        local_a8 = (((local_res20->SharedState).Object)->Params).bListenToChanges;
        if (((this->Presence).Object == (IPresence *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar15)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<UE::Online::FBatchQueryPresenceHelperResult> *)(*pcVar4)();
          return pTVar11;
        }
        pIVar1 = (this->Presence).Object;
        plVar8 = (longlong *)(**(code **)*pIVar1)(pIVar1,local_58);
        if ((*plVar8 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar15)) {
          pcVar4 = (code *)swi(3);
          pTVar11 = (TFuture<UE::Online::FBatchQueryPresenceHelperResult> *)(*pcVar4)();
          return pTVar11;
        }
        plVar8 = (longlong *)*plVar8;
        local_c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
        local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_c0.DelegateSize = 0;
        pcVar4 = *(code **)(*plVar8 + 0x28);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_c8,(FWriteAccessScope *)&local_78);
        local_60 = &local_c0;
        puVar9 = Core::Private::DelegateAllocate(0x20,&local_c0);
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = &
                    ___7__TCommonDelegateInstanceState___A6AXAEBV__TOnlineResult_UFQueryPresence_Online_UE___Online_UE___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar10 = FDelegateHandle::GenerateNewID();
          puVar9[2] = uVar10;
          *puVar9 = &
                    ___7__TBaseFunctorDelegateInstance___A6AXAEBV__TOnlineResult_UFQueryPresence_Online_UE___Online_UE___ZUFDefaultDelegateUserPolicy__V<lambda_1>__8__GetPromise_FBatchQueryPresenceHelper_23_QEAA_AV__TFuture_UFBatchQueryPresenceHelperResult_Online_UE____XZ___V__6B_
          ;
          puVar9[3] = this;
        }
        if (local_78.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_78.Accessor,&local_78);
        }
        (*pcVar4)(plVar8,&local_c8);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  (&local_c8,(FWriteAccessScope *)&local_90);
        if ((local_c0.DelegateSize != 0) &&
           (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_c0,0,0,0x10);
          local_c0.DelegateSize = 0;
        }
        if (local_90.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
        }
        if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_c0.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c8.AccessDetector);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_50);
        pFVar14 = pFVar14 + 4;
        uVar13 = (ulonglong)local_res18;
      }
    }
  }
LAB_14eee40fc:
  pTVar11 = local_res10;
  if (((this->Promise).bFutureRetrieved != false) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bFutureRetrieved",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x24d,L""), bVar15)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<UE::Online::FBatchQueryPresenceHelperResult> *)(*pcVar4)();
    return pTVar11;
  }
  pTVar2 = (this->Promise).State.Object;
  (this->Promise).bFutureRetrieved = true;
  if ((pTVar2 == (TFutureState<UE::Online::FBatchQueryPresenceHelperResult> *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("State.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                          ,0x283,L""), bVar15)) {
    pcVar4 = (code *)swi(3);
    pTVar11 = (TFuture<UE::Online::FBatchQueryPresenceHelperResult> *)(*pcVar4)();
    return pTVar11;
  }
  *(TFutureState<UE::Online::FBatchQueryPresenceHelperResult> **)pTVar11 =
       (this->Promise).State.Object;
  pTVar3 = (this->Promise).State.SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)&pTVar11->field_0x8 = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  return pTVar11;
}

