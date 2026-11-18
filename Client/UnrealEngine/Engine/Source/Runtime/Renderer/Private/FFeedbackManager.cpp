// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// FFeedbackManager @ 1450368d0

FFeedbackManager * __thiscall Nanite::FFeedbackManager::FFeedbackManager(FFeedbackManager *this)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FDelegateHandle FVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<GPUMessage::FHandler,1> local_res8;
  
  pTVar2 = (TReferenceControllerBase<1> *)0x0;
  (this->StatusFeedbackSocket).MessageId.Index = 0xffffffff;
  (this->ScreenMessageDelegate).ID = 0;
  (this->NodeState).LatestOverflowTime = -1.7976931348623157e+308;
  (this->NodeState).LatestOverflowPeak = 0;
  (this->NodeState).HighWaterMark = 0;
  (this->CandidateClusterState).LatestOverflowTime = -1.7976931348623157e+308;
  (this->CandidateClusterState).LatestOverflowPeak = 0;
  (this->CandidateClusterState).HighWaterMark = 0;
  (this->VisibleClusterState).LatestOverflowTime = -1.7976931348623157e+308;
  (this->VisibleClusterState).LatestOverflowPeak = 0;
  (this->VisibleClusterState).HighWaterMark = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->DelgateCallbackCS,4000);
  *(undefined8 *)&this->MaterialWarningItems = 0;
  *(undefined8 *)&(this->MaterialWarningItems).field_0x8 = 0;
  *(undefined8 *)&(this->MaterialWarningItems).field_0x20 = 0;
  *(undefined4 *)&(this->MaterialWarningItems).field_0x28 = 0;
  *(undefined4 *)&(this->MaterialWarningItems).field_0x2c = 0x80;
  *(undefined4 *)&(this->MaterialWarningItems).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MaterialWarningItems).field_0x34 = 0;
  *(undefined8 *)&(this->MaterialWarningItems).field_0x40 = 0;
  *(undefined4 *)&(this->MaterialWarningItems).field_0x48 = 0;
  pTVar1 = ::operator_new(0x18);
  pTVar4 = pTVar2;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    pTVar1[1]._padding_ = (longlong)this;
    *(wchar_t **)&pTVar1->SharedReferenceCount = L"Nanite.StatusFeedback";
    pTVar1->_padding_ =
         (longlong)
         &GPUMessage::TLambdaHandler<`Nanite::FFeedbackManager::FFeedbackManager'::`2'::<lambda_1>_>
          ::_vftable_;
    pTVar4 = pTVar1;
  }
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    pTVar1->SharedReferenceCount = (atomic<int>)0x1;
    pTVar1->_padding_ =
         (longlong)
         &SharedPointerInternals::
          TReferenceControllerWithDeleter<GPUMessage::TLambdaHandler<`Nanite::FFeedbackManager::FFeedbackManager'::`2'::<lambda_1>_>,SharedPointerInternals::DefaultDeleter<GPUMessage::TLambdaHandler<`Nanite::FFeedbackManager::FFeedbackManager'::`2'::<lambda_1>_>_>,1>
          ::_vftable_;
    pTVar1->WeakReferenceCount = (atomic<int>)0x1;
    pTVar1[1]._padding_ = (longlong)pTVar4;
    pTVar2 = pTVar1;
  }
  GPUMessage::RegisterHandler(&local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  GPUMessage::FSocket::Reset(&this->StatusFeedbackSocket);
  (this->StatusFeedbackSocket).MessageId.Index = (uint)local_res8.Object;
  local_res8.Object = (FHandler *)CONCAT44(local_res8.Object._4_4_,0xffffffff);
  GPUMessage::FSocket::Reset((FSocket *)&local_res8);
  local_res8.Object = (FHandler *)this;
  FVar3 = TMulticastDelegateRegistration<void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy>
          ::AddLambda<_Nanite::FFeedbackManager::FFeedbackManager_::__l2::<lambda_2>_>
                    (&FCoreDelegates::OnGetOnScreenMessages,
                     (<lambda_2> *)&local_res8.SharedReferenceCount);
                    /* WARNING: Load size is inaccurate */
  (this->ScreenMessageDelegate).ID = *FVar3.ID;
  return this;
}

// ~FFeedbackManager @ 1450382e0

void __thiscall Nanite::FFeedbackManager::~FFeedbackManager(FFeedbackManager *this)

{
  void *pvVar1;
  
  TMulticastDelegateRegistration<void___cdecl(TMultiMap<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>_&),FDefaultDelegateUserPolicy>
  ::Remove(&FCoreDelegates::OnGetOnScreenMessages,(FDelegateHandle)(this->ScreenMessageDelegate).ID)
  ;
  *(undefined4 *)&(this->MaterialWarningItems).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MaterialWarningItems).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,Nanite::FFeedbackManager::FMaterialWarningItem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,Nanite::FFeedbackManager::FMaterialWarningItem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,Nanite::FFeedbackManager::FMaterialWarningItem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MaterialWarningItems);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->DelgateCallbackCS);
  GPUMessage::FSocket::Reset(&this->StatusFeedbackSocket);
  return;
}

// operator() @ 14503b6e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`Nanite::FFeedbackManager::FFeedbackManager'::__l2::<lambda_1>::operator()
          (void *this,FReader *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_58 [3];
  
  uVar11 = GNaniteMaxNodes & 0xfffffff0;
  uVar6 = GNaniteMaxCandidateClusters & 0xffffffc0;
  if (0x1000000 < GNaniteMaxVisibleClusters) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("GNaniteMaxVisibleClusters <= (16 * 1024 * 1024)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteShared.cpp"
                       ,0x180,L"r.Nanite.MaxVisibleClusters must be <= MAX_CLUSTERS");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar4 = GNaniteMaxVisibleClusters;
  uVar8 = param_1->ReadOffset;
  uVar9 = (ulonglong)uVar8;
  uVar1 = param_1->PayloadSize;
  uVar7 = 0;
  if (uVar8 < uVar1) {
    uVar12 = param_1->PayloadData[uVar9];
    uVar9 = (ulonglong)(uVar8 + 1);
    param_1->ReadOffset = uVar8 + 1;
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6452879395177627563>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GPUMessaging.h"
                       ,0x55,"ReadOffset < PayloadSize");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar12 = 0;
  }
  uVar8 = (uint)uVar9;
  if (uVar8 < uVar1) {
    uVar8 = uVar8 + 1;
    param_1->ReadOffset = uVar8;
    uVar10 = param_1->PayloadData[uVar9];
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6452879395177627563>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GPUMessaging.h"
                       ,0x55,"ReadOffset < PayloadSize");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar10 = 0;
  }
  if (uVar8 < uVar1) {
    uVar7 = param_1->PayloadData[uVar8];
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6452879395177627563>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GPUMessaging.h"
                       ,0x55,"ReadOffset < PayloadSize");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)this;
  if (uVar11 < uVar12) {
    QueryPerformanceCounter(&local_res18);
    uVar11 = *(uint *)(lVar2 + 0x1c);
    uVar8 = uVar12;
    if (uVar12 < uVar11) {
      uVar8 = *(uint *)(lVar2 + 0x1c);
    }
    dVar13 = (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    *(uint *)(lVar2 + 0x18) = uVar12;
    *(uint *)(lVar2 + 0x1c) = uVar8;
    *(double *)(lVar2 + 0x10) = dVar13 + __real_4170000000000000;
    if ((uVar11 < uVar12) && (2 < (byte)LogRenderer._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
    }
  }
  else {
    if (uVar12 < *(uint *)(lVar2 + 0x1c)) {
      uVar12 = *(uint *)(lVar2 + 0x1c);
    }
    *(uint *)(lVar2 + 0x1c) = uVar12;
  }
  lVar2 = *(longlong *)this;
  if (uVar6 < uVar10) {
    QueryPerformanceCounter(&local_res20);
    uVar6 = *(uint *)(lVar2 + 0x2c);
    uVar11 = uVar10;
    if (uVar10 < uVar6) {
      uVar11 = *(uint *)(lVar2 + 0x2c);
    }
    dVar13 = (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    *(uint *)(lVar2 + 0x28) = uVar10;
    *(uint *)(lVar2 + 0x2c) = uVar11;
    *(double *)(lVar2 + 0x20) = dVar13 + __real_4170000000000000;
    if ((uVar6 < uVar10) && (2 < (byte)LogRenderer._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
    }
  }
  else {
    if (uVar10 < *(uint *)(lVar2 + 0x2c)) {
      uVar10 = *(uint *)(lVar2 + 0x2c);
    }
    *(uint *)(lVar2 + 0x2c) = uVar10;
  }
  lVar2 = *(longlong *)this;
  if ((uint)iVar4 < uVar7) {
    QueryPerformanceCounter(local_58);
    uVar6 = *(uint *)(lVar2 + 0x3c);
    uVar11 = uVar7;
    if (uVar7 < uVar6) {
      uVar11 = *(uint *)(lVar2 + 0x3c);
    }
    dVar13 = (double)local_58[0].QuadPart * FGenericPlatformTime::SecondsPerCycle;
    *(uint *)(lVar2 + 0x38) = uVar7;
    *(uint *)(lVar2 + 0x3c) = uVar11;
    *(double *)(lVar2 + 0x30) = dVar13 + __real_4170000000000000;
    if ((uVar6 < uVar7) && (2 < (byte)LogRenderer._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
    }
  }
  else {
    if (uVar7 < *(uint *)(lVar2 + 0x3c)) {
      uVar7 = *(uint *)(lVar2 + 0x3c);
    }
    *(uint *)(lVar2 + 0x3c) = uVar7;
  }
  return;
}

// operator() @ 14503d3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
`Nanite::FFeedbackManager::FFeedbackManager'::__l2::<lambda_2>::operator()
          (void *this,
          TMultiMap<FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
          *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  longlong lVar2;
  code *pcVar3;
  <lambda_1> <Var4;
  double dVar5;
  TConsoleVariableData<int> *pTVar6;
  longlong *plVar7;
  TMultiMap<FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
  *this_00;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  uint uVar11;
  FText *pFVar12;
  FTextFormat *pFVar13;
  ulonglong uVar14;
  TSet<TTuple<FString,Nanite::FFeedbackManager::FMaterialWarningItem>,TDefaultMapHashableKeyFuncs<FString,Nanite::FFeedbackManager::FMaterialWarningItem,0>,FDefaultSetAllocator>
  *pTVar15;
  longlong lVar16;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  uint uVar21;
  uint uVar22;
  undefined1 auStackY_248 [32];
  EOnScreenMessageSeverity local_218 [8];
  int local_210;
  LARGE_INTEGER local_208;
  longlong *local_200;
  TMultiMap<FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
  *local_1f8;
  longlong *local_1f0;
  longlong *local_1e8;
  uint uStack_1e0;
  uint uStack_1dc;
  TBitArray<FDefaultBitArrayAllocator> *local_1d8;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  uint local_1c8;
  undefined4 uStack_1c4;
  int iStack_1c0;
  undefined4 uStack_1bc;
  longlong *local_1b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1b0;
  undefined8 uStack_190;
  FString local_188;
  FText local_178;
  FText local_168;
  FText local_158;
  FText local_148;
  FText local_138;
  FText local_128;
  FText local_118;
  FTextFormat local_108;
  FTextFormat local_f8;
  FTextFormat local_e8 [2];
  undefined4 local_bc;
  undefined1 local_b8 [72];
  undefined4 local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_248;
  uVar17 = GNaniteMaxNodes & 0xfffffff0;
  uVar21 = GNaniteMaxCandidateClusters & 0xffffffc0;
  local_1f8 = param_1;
  local_1f0 = this;
  if ((0x1000000 < GNaniteMaxVisibleClusters) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("GNaniteMaxVisibleClusters <= (16 * 1024 * 1024)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteShared.cpp"
                          ,0x180,L"r.Nanite.MaxVisibleClusters must be <= MAX_CLUSTERS"), bVar10)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar18 = GNaniteMaxVisibleClusters;
  QueryPerformanceCounter(&local_208);
  dVar5 = __real_4014000000000000;
  lVar16 = *(longlong *)this;
  <Var4.CurrentTime =
       (double)local_208.QuadPart * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
  if (<Var4.CurrentTime - *(double *)(lVar16 + 0x10) < __real_4014000000000000) {
    uVar11 = *(uint *)(lVar16 + 0x1c);
    uVar22 = *(uint *)(lVar16 + 0x18);
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_168,L"NaniteFeedbackStatus",L"NaniteNodeOverflow",
                         L"Nanite node buffer overflow detected: {0} / {1}. High-water mark is {2}. Increase r.Nanite.MaxNodes to prevent potential visual artifacts."
                        );
    pFVar13 = FTextFormat::FTextFormat(&local_108,pFVar12,Default);
    pFVar12 = FText::Format<unsigned_int,unsigned_int,unsigned_int>
                        (&local_178,pFVar13,uVar22,uVar17,uVar11);
    local_218[0] = Warning;
    TMapBase<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
    ::Emplace<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>(param_1,local_218,pFVar12);
    if (local_178.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
    }
    if (local_168.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
    }
  }
  lVar16 = *(longlong *)this;
  if (<Var4.CurrentTime - *(double *)(lVar16 + 0x20) < dVar5) {
    uVar17 = *(uint *)(lVar16 + 0x2c);
    uVar11 = *(uint *)(lVar16 + 0x28);
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_148,L"NaniteFeedbackStatus",L"NaniteCandidateClusterOverflow",
                         L"Nanite candidate cluster buffer overflow detected: {0} / {1}. High-water mark is {2}. Increase r.Nanite.MaxCandidateClusters to prevent potential visual artifacts."
                        );
    pFVar13 = FTextFormat::FTextFormat(&local_f8,pFVar12,Default);
    pFVar12 = FText::Format<unsigned_int,unsigned_int,unsigned_int>
                        (&local_158,pFVar13,uVar11,uVar21,uVar17);
    local_218[1] = 1;
    TMapBase<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
    ::Emplace<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>(param_1,local_218 + 1,pFVar12);
    if (local_158.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_158.TextData.Reference + 0x10))();
    }
    if (local_148.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
    }
  }
  lVar16 = *(longlong *)this;
  if (<Var4.CurrentTime - *(double *)(lVar16 + 0x30) < dVar5) {
    uVar17 = *(uint *)(lVar16 + 0x3c);
    uVar21 = *(uint *)(lVar16 + 0x38);
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_128,L"NaniteFeedbackStatus",L"NaniteVisibleClusterOverflow",
                         L"Nanite visible cluster buffer overflow detected: {0} / {1}. High-water mark is {2}. Increase r.Nanite.MaxVisibleClusters to prevent potential visual artifacts."
                        );
    pFVar13 = FTextFormat::FTextFormat(local_e8,pFVar12,Default);
    pFVar12 = FText::Format<unsigned_int,unsigned_int,unsigned_int>
                        (&local_138,pFVar13,uVar21,iVar18,uVar17);
    local_218[2] = 1;
    TMapBase<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
    ::Emplace<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>(param_1,local_218 + 2,pFVar12);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    if (local_128.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
    }
  }
  pTVar6 = CVarEmitMaterialPerformanceWarnings.Ref;
  bVar10 = IsInParallelGameThread();
  uVar17 = 0;
  uVar19 = 0;
  if (bVar10) {
LAB_14503d64b:
    uVar14 = uVar19;
  }
  else {
    bVar10 = IsInGameThread();
    uVar14 = 4;
    if (bVar10) goto LAB_14503d64b;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)this + 0x40);
  if (*(int *)((longlong)pTVar6->ShadowedValue + uVar14) == 0) {
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) goto LAB_14503da26;
    EnterCriticalSection(lpCriticalSection);
    lVar16 = *(longlong *)this;
    pTVar15 = (TSet<TTuple<FString,Nanite::FFeedbackManager::FMaterialWarningItem>,TDefaultMapHashableKeyFuncs<FString,Nanite::FFeedbackManager::FMaterialWarningItem,0>,FDefaultSetAllocator>
               *)(lVar16 + 0x68);
    bVar10 = 1 < *(int *)(lVar16 + 0xb0);
    if (!bVar10) {
      TSet<TTuple<FString,Nanite::FFeedbackManager::FMaterialWarningItem>,TDefaultMapHashableKeyFuncs<FString,Nanite::FFeedbackManager::FMaterialWarningItem,0>,FDefaultSetAllocator>
      ::UnhashElements(pTVar15);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,Nanite::FFeedbackManager::FMaterialWarningItem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,Nanite::FFeedbackManager::FMaterialWarningItem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)pTVar15,0,*(int *)(lVar16 + 0x70));
    *(undefined4 *)(lVar16 + 0x70) = 0;
    if (*(int *)(lVar16 + 0x74) != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,0,(ForAnyElementType *)pTVar15,0,(int *)(lVar16 + 0x74));
    }
    *(undefined4 *)(lVar16 + 0x98) = 0xffffffff;
    *(undefined4 *)(lVar16 + 0x9c) = 0;
    *(undefined4 *)(lVar16 + 0x90) = 0;
    if ((*(int *)(lVar16 + 0x94) < 0) || (0x80 < *(int *)(lVar16 + 0x94))) {
      *(undefined4 *)(lVar16 + 0x94) = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(lVar16 + 0x78),0);
    }
    if (bVar10) {
      *(undefined4 *)(lVar16 + 0xb0) = 1;
      TSet<TTuple<FString,Nanite::FFeedbackManager::FMaterialWarningItem>,TDefaultMapHashableKeyFuncs<FString,Nanite::FFeedbackManager::FMaterialWarningItem,0>,FDefaultSetAllocator>
      ::Rehash(pTVar15);
    }
  }
  else {
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
LAB_14503da26:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    lVar16 = *(longlong *)this;
    uStack_1dc = 1;
    pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar16 + 0x78);
    uVar21 = *(uint *)(lVar16 + 0x90);
    local_200 = (longlong *)(lVar16 + 0x68);
    uStack_1cc = uVar17;
    uStack_1e0 = uVar17;
    if (uVar21 != 0) {
      pTVar20 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar16 + 0x88);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar16 + 0x88) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar20 = pTVar1;
      }
      uVar11 = *(uint *)(pTVar20->AllocatorInstance).InlineData;
      uStack_1e0 = 0;
      while (uVar11 == 0) {
        iVar18 = (int)uVar19;
        uVar17 = uVar17 + 0x20;
        uStack_1e0 = iVar18 + 1;
        uVar19 = (ulonglong)uStack_1e0;
        uStack_1cc = uVar21;
        if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_1e0)
        goto LAB_14503d700;
        uVar11 = *(uint *)((pTVar20->AllocatorInstance).InlineData + (longlong)iVar18 * 4 + 4);
      }
      uStack_1dc = -uVar11 & uVar11;
      uVar19 = (ulonglong)uStack_1dc * 2 + 1;
      lVar2 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      local_210 = (int)lVar2;
      uStack_1cc = (uVar17 - 1) + local_210;
      if ((int)uVar21 < (int)uStack_1cc) {
        uStack_1cc = uVar21;
      }
    }
LAB_14503d700:
    uStack_1c4 = local_bc;
    iStack_1c0 = *(int *)(lVar16 + 0x70) - *(int *)(lVar16 + 0x9c);
    uVar11 = *(uint *)(lVar16 + 0x90);
    uStack_1d0 = 0xffffffff;
    uVar22 = uVar11 & 0xffffffe0;
    TStack_1b0._padding_ = CONCAT44(uStack_1dc,uStack_1e0);
    TStack_1b0.CurrentBitIndex = uStack_1cc;
    TStack_1b0.UnvisitedBitMask = 0xffffffff;
    iVar18 = (int)uVar11 >> 5;
    TStack_1b0._28_4_ = local_bc;
    TStack_1b0.BaseBitIndex = uVar17;
    uStack_190 = CONCAT44(uStack_1bc,iStack_1c0);
    local_1e8 = local_200;
    local_1d8 = pTVar1;
    local_1c8 = uVar17;
    local_1b8 = local_200;
    TStack_1b0.Array = pTVar1;
    if ((((int)uVar11 < 0) || ((int)uVar21 < (int)uVar11)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this_00 = local_1f8;
    plVar7 = local_200;
    dVar5 = __real_4004000000000000;
    uVar17 = *(uint *)(lVar16 + 0x90);
    if (uVar11 != uVar17) {
      pTVar20 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar16 + 0x88);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar16 + 0x88) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar20 = pTVar1;
      }
      uVar21 = -1 << ((byte)uVar11 & 0x1f) &
               *(uint *)((pTVar20->AllocatorInstance).InlineData + (longlong)iVar18 * 4);
      while (uVar21 == 0) {
        lVar16 = (longlong)iVar18;
        uVar22 = uVar22 + 0x20;
        iVar18 = iVar18 + 1;
        uVar11 = uVar17;
        if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
        goto LAB_14503d820;
        uVar21 = *(uint *)((pTVar20->AllocatorInstance).InlineData + lVar16 * 4 + 4);
      }
      uVar19 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
      lVar16 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      uVar11 = (int)lVar16 + -1 + uVar22;
      if ((int)uVar17 < (int)uVar11) {
        uVar11 = uVar17;
      }
    }
LAB_14503d820:
    while( true ) {
      plVar9 = local_1b8;
      if ((int)local_1b8[1] - *(int *)((longlong)local_1b8 + 0x34) != (int)uStack_190) {
        `TSparseArray<TSparseSetElement<TTuple<FString,Nanite::FFeedbackManager::FMaterialWarningItem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_218 + 4);
      }
      plVar8 = local_1f0;
      if (((TStack_1b0.CurrentBitIndex == uVar11) && (TStack_1b0.Array == pTVar1)) &&
         (plVar9 == plVar7)) break;
      if (<Var4.CurrentTime -
          *(double *)(*plVar9 + 0x10 + (longlong)TStack_1b0.CurrentBitIndex * 0x28) < dVar5) {
        ::FString::PrintfImpl
                  (&local_188,
                   L"Performance Warning: Programmable Nanite material \'%s\' uses PDO or is Masked!"
                  );
        pFVar12 = FText::FromString(&local_118,&local_188);
        local_218[3] = 1;
        TMapBase<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_FCoreDelegates::EOnScreenMessageSeverity,FText,1>_>
        ::Emplace<enum_FCoreDelegates::EOnScreenMessageSeverity,FText>
                  (this_00,local_218 + 3,pFVar12);
        if (local_118.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
        }
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
      }
      TStack_1b0.UnvisitedBitMask = TStack_1b0.UnvisitedBitMask & ~TStack_1b0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1b0);
    }
    pTVar15 = (TSet<TTuple<FString,Nanite::FFeedbackManager::FMaterialWarningItem>,TDefaultMapHashableKeyFuncs<FString,Nanite::FFeedbackManager::FMaterialWarningItem,0>,FDefaultSetAllocator>
               *)TMapBase<FString,Nanite::FFeedbackManager::FMaterialWarningItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,Nanite::FFeedbackManager::FMaterialWarningItem,0>_>
                 ::
                 FilterByPredicate<__Nanite::FFeedbackManager::FFeedbackManager_::__l2::<lambda_2>::operator()_::__l14::<lambda_1>_>
                           ((TMapBase<FString,Nanite::FFeedbackManager::FMaterialWarningItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,Nanite::FFeedbackManager::FMaterialWarningItem,0>_>
                             *)(*local_1f0 + 0x68),
                            (TMap<FString,Nanite::FFeedbackManager::FMaterialWarningItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,Nanite::FFeedbackManager::FMaterialWarningItem,0>_>
                             *)local_b8,<Var4);
    if ((TSet<TTuple<FString,Nanite::FFeedbackManager::FMaterialWarningItem>,TDefaultMapHashableKeyFuncs<FString,Nanite::FFeedbackManager::FMaterialWarningItem,0>,FDefaultSetAllocator>
         *)(*plVar8 + 0x68) != pTVar15) {
      TSet<TTuple<FString,Nanite::FFeedbackManager::FMaterialWarningItem>,TDefaultMapHashableKeyFuncs<FString,Nanite::FFeedbackManager::FMaterialWarningItem,0>,FDefaultSetAllocator>
      ::
      Move<TSet<TTuple<FString,Nanite::FFeedbackManager::FMaterialWarningItem>,TDefaultMapHashableKeyFuncs<FString,Nanite::FFeedbackManager::FMaterialWarningItem,0>,FDefaultSetAllocator>_>
                ((TSet<TTuple<FString,Nanite::FFeedbackManager::FMaterialWarningItem>,TDefaultMapHashableKeyFuncs<FString,Nanite::FFeedbackManager::FMaterialWarningItem,0>,FDefaultSetAllocator>
                  *)(*plVar8 + 0x68),pTVar15);
    }
    local_70 = 0;
    if ((void *)local_b8._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_b8._64_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,Nanite::FFeedbackManager::FMaterialWarningItem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,Nanite::FFeedbackManager::FMaterialWarningItem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,Nanite::FFeedbackManager::FMaterialWarningItem>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_b8);
  }
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// ReportMaterialPerformanceWarning @ 145075460

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Nanite::FFeedbackManager::ReportMaterialPerformanceWarning(FFeedbackManager *this,FString *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TMap<FString,Nanite::FFeedbackManager::FMaterialWarningItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,Nanite::FFeedbackManager::FMaterialWarningItem,0>_>
  *this_00;
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  wchar_t *pwVar5;
  FMaterialWarningItem *pFVar6;
  double dVar7;
  LARGE_INTEGER local_res8;
  
  lpCriticalSection = &this->DelgateCallbackCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar2 = (param_1->Data).ArrayNum;
  this_00 = &this->MaterialWarningItems;
  iVar4 = iVar2 + -1;
  if (iVar2 == 0) {
    pwVar5 = L"";
    iVar4 = 0;
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  iVar4 = TSet<TTuple<FString,Nanite::FFeedbackManager::FMaterialWarningItem>,TDefaultMapHashableKeyFuncs<FString,Nanite::FFeedbackManager::FMaterialWarningItem,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,Nanite::FFeedbackManager::FMaterialWarningItem>,TDefaultMapHashableKeyFuncs<FString,Nanite::FFeedbackManager::FMaterialWarningItem,0>,FDefaultSetAllocator>
                      *)this_00,uVar3,param_1);
  if ((iVar4 == -1) ||
     (lVar1 = *(longlong *)&this_00->field_0x0 + (longlong)iVar4 * 0x28, lVar1 == 0)) {
    pFVar6 = TMapBase<FString,Nanite::FFeedbackManager::FMaterialWarningItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,Nanite::FFeedbackManager::FMaterialWarningItem,0>_>
             ::EmplaceByHash<FString_const_&>
                       ((TMapBase<FString,Nanite::FFeedbackManager::FMaterialWarningItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,Nanite::FFeedbackManager::FMaterialWarningItem,0>_>
                         *)this_00,uVar3,param_1);
  }
  else {
    pFVar6 = (FMaterialWarningItem *)(lVar1 + 0x10);
  }
  QueryPerformanceCounter(&local_res8);
  dVar7 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  pFVar6->LastTimeSeen = dVar7;
  if (dVar7 - pFVar6->LastTimeLogged <= __real_4014000000000000) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  else {
    pFVar6->LastTimeLogged = dVar7;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (4 < (byte)LogRenderer._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
      return;
    }
  }
  return;
}

