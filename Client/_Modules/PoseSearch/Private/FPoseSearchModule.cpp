// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 3

// StartupModule @ 14a90cf00

void __thiscall FPoseSearchModule::StartupModule(FPoseSearchModule *this)

{
  code *pcVar1;
  IModularFeatures *pIVar2;
  FName FVar3;
  FPoseSearchModule *pFVar4;
  
  pIVar2 = IModularFeatures::Get();
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x28);
  FVar3 = UE::Anim::IPoseSearchProvider::GetModularFeatureName();
  pFVar4 = (FPoseSearchModule *)&this->RewindDebuggerPoseSearchRuntime;
  if (this == (FPoseSearchModule *)0x0) {
    pFVar4 = (FPoseSearchModule *)0x0;
  }
  (*pcVar1)(pIVar2,*(undefined8 *)FVar3,pFVar4);
  pIVar2 = IModularFeatures::Get();
  pFVar4 = this + 1;
  if (&this->RewindDebuggerPoseSearchRuntime == (FRewindDebuggerPoseSearchRuntime *)0x0) {
    pFVar4 = (FPoseSearchModule *)0x0;
  }
  (**(code **)((longlong)*pIVar2 + 0x28))
            (pIVar2,IRewindDebuggerRuntimeExtension::ModularFeatureName,pFVar4);
  UE::Anim::AttributeTypes::RegisterType<FPoseHistoryAnimationAttribute>();
  return;
}

// ShutdownModule @ 14a90cf90

void __thiscall FPoseSearchModule::ShutdownModule(FPoseSearchModule *this)

{
  code *pcVar1;
  IModularFeatures *pIVar2;
  FName FVar3;
  FPoseSearchModule *pFVar4;
  
  pIVar2 = IModularFeatures::Get();
  pcVar1 = *(code **)((longlong)*pIVar2 + 0x30);
  FVar3 = UE::Anim::IPoseSearchProvider::GetModularFeatureName();
  pFVar4 = (FPoseSearchModule *)&this->RewindDebuggerPoseSearchRuntime;
  if (this == (FPoseSearchModule *)0x0) {
    pFVar4 = (FPoseSearchModule *)0x0;
  }
  (*pcVar1)(pIVar2,*(undefined8 *)FVar3,pFVar4);
  pIVar2 = IModularFeatures::Get();
  pFVar4 = this + 1;
  if (&this->RewindDebuggerPoseSearchRuntime == (FRewindDebuggerPoseSearchRuntime *)0x0) {
    pFVar4 = (FPoseSearchModule *)0x0;
  }
  (**(code **)((longlong)*pIVar2 + 0x30))
            (pIVar2,IRewindDebuggerRuntimeExtension::ModularFeatureName,pFVar4);
  UE::Anim::AttributeTypes::UnregisterType<FPoseHistoryAnimationAttribute>();
  return;
}

// Search @ 14a90d020

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FSearchResult * __thiscall
FPoseSearchModule::Search
          (FPoseSearchModule *this,FSearchResult *__return_storage_ptr__,
          FAnimationBaseContext *param_1,TArrayView<UObject_const_*,int> *param_2,
          FSearchPlayingAsset *param_3,FSearchFutureAsset *param_4)

{
  TObjectPtr<UObject_const_>_u_0 TVar1;
  TObjectPtr<UObject_const_>_u_0 TVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  FPoseHistoryProvider *this_00;
  UPoseSearchDatabase *pUVar6;
  FSearchIndex *pFVar7;
  FSearchIndexAsset *pFVar8;
  FPoseSearchDatabaseAnimationAsset *pFVar9;
  UObject *pUVar10;
  FSearchResult *pFVar11;
  UPoseSearchFeatureChannel_PermutationTime *this_01;
  longlong *plVar12;
  float fVar13;
  undefined1 auStackY_2c8 [32];
  IPoseHistory *local_288;
  TObjectPtr<UObject_const_>_u_0 local_280;
  undefined4 local_278;
  float local_274;
  int local_270;
  FWeakObjectPtr local_26c;
  float local_264;
  float local_25c;
  bool local_258;
  TArrayView<UE::PoseSearch::IPoseHistory_const_*,int> local_248;
  TArrayView<FName_const_,int> local_238;
  FPoseSearchEvent local_228;
  TArrayView<UObject_const_*,int> local_208;
  UObject *local_1f8 [2];
  TArrayView<float_const_,int> local_1e8;
  TObjectPtr<UObject_const_>_u_0 local_1d8;
  float local_1d0;
  undefined1 local_1cc;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined2 local_1b0;
  undefined8 local_1a8;
  TArrayView<UObject_const_*,int> local_198;
  TArrayView<float_const_,int> local_188;
  FSearchResults_Single local_178;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  TVar1.ObjectPtr.field0_0x0 = (FObjectPtr)param_3->Asset;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1c8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_1c0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_1b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (TVar1.DebugPtr != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(TVar1.DebugPtr);
  }
  local_1d0 = param_3->AccumulatedTime;
  local_1cc = param_3->bMirrored;
  local_1b8 = (param_3->BlendParameters).field0_0x0._s_0.Z;
  local_1c8 = (param_3->BlendParameters).field0_0x0._s_0.X;
  dStack_1c0 = (param_3->BlendParameters).field0_0x0._s_0.Y;
  TVar2.ObjectPtr.field0_0x0 = (FObjectPtr)param_4->_padding_;
  local_1d8.ObjectPtr.field0_0x0 = TVar1.ObjectPtr.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar2.DebugPtr != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(TVar2.DebugPtr);
  }
  local_278 = (undefined4)param_4->_padding_;
  local_274 = param_4->IntervalTime;
  local_288 = (IPoseHistory *)0x0;
  local_280.ObjectPtr.field0_0x0 = TVar2.ObjectPtr.field0_0x0;
  this_00 = FAnimationBaseContext::GetMessage<UE::PoseSearch::FPoseHistoryProvider>(param_1);
  if (this_00 != (FPoseHistoryProvider *)0x0) {
    local_288 = UE::PoseSearch::FPoseHistoryProvider::GetPoseHistory(this_00);
  }
  __return_storage_ptr__->SelectedAsset = (UObject *)0x0;
  __return_storage_ptr__->TimeOffsetSeconds = 0.0;
  __return_storage_ptr__->Dissimilarity = 3.4028235e+38;
  __return_storage_ptr__->bIsFromContinuingPlaying = false;
  __return_storage_ptr__->bMirrored = false;
  __return_storage_ptr__->WantedPlayRate = 1.0;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->BlendParameters).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->BlendParameters).field0_0x0._s_0.Y = (double)uVar4;
  (__return_storage_ptr__->BlendParameters).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (local_288 == (IPoseHistory *)0x0) {
    if (1 < (byte)LogPoseSearch._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`public:_virtual_struct_UE::Anim::IPoseSearchProvider::FSearchResult___cdecl_FPoseSearchModule::Search(FAnimationBaseContext_const&___ptr64,TArrayView<UObject_const*___ptr64,int>,UE::Anim::IPoseSearchProvider::FSearchPlayingAsset_const&___ptr64,UE::Anim::IPoseSearchProvider::FSearchFutureAsset_const&___ptr64)const___ptr64'
                  ::__l9::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    }
  }
  else {
    local_228.bEnablePoseFilters = false;
    local_228.bUsePlayRateRangeOverride = true;
    local_228._padding_ = 0;
    local_228.EventTag.TagName.ComparisonIndex.Value = 0;
    local_228.EventTag.TagName.Number = 0;
    local_1f8[0] = param_1->AnimInstanceProxy->AnimInstanceObject;
    local_248.DataPtr = &local_288;
    local_238.DataPtr = &UE::PoseSearch::DefaultRole;
    local_208.DataPtr = local_1f8;
    local_228.TimeToEvent = 0.0;
    local_228.PlayRateRangeOverride._0_4_ = 0x3f800000;
    local_228.PlayRateRangeOverride._4_4_ = 0x3f800000;
    local_248._12_4_ = local_1e8._12_4_;
    local_248.ArrayNum = 1;
    local_238._12_4_ = local_1e8._12_4_;
    local_238.ArrayNum = 1;
    local_208.ArrayNum = 1;
    UE::PoseSearch::FSearchResults_Single::FSearchResults_Single(&local_178);
    local_198.DataPtr = param_2->DataPtr;
    local_198.ArrayNum = param_2->ArrayNum;
    local_198._12_4_ = *(undefined4 *)&param_2->field_0xc;
    UPoseSearchLibrary::MotionMatch
              (&local_208,&local_238,&local_248,&local_198,
               (FPoseSearchContinuingProperties *)&local_1d8.ObjectPtr,
               (FPoseSearchFutureProperties *)&local_280.ObjectPtr,&local_228,
               (FSearchResults *)&local_178);
    UE::Core::Private::Function::CheckCallable((void *)local_178._padding_);
    plVar12 = &local_178._padding_;
    if ((longlong *)local_178._padding_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_178._padding_;
    }
    (**(code **)(*plVar12 + 8))();
    (*(code *)local_178._padding_)(&local_270);
    UE::PoseSearch::FSearchResults::~FSearchResults((FSearchResults *)&local_178);
    if ((local_270 != -1) &&
       (bVar5 = TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UPoseSearchDatabase_const_,FWeakObjectPtr> *)&local_26c,
                           (void *)0x0), !bVar5)) {
      pUVar6 = (UPoseSearchDatabase *)FWeakObjectPtr::Get(&local_26c);
      pFVar7 = UPoseSearchDatabase::GetSearchIndex(pUVar6);
      pFVar8 = UE::PoseSearch::FSearchIndexBase::GetAssetForPose
                         ((FSearchIndexBase *)pFVar7,local_270);
      if (pFVar8 != (FSearchIndexAsset *)0x0) {
        pUVar6 = (UPoseSearchDatabase *)FWeakObjectPtr::Get(&local_26c);
        pFVar9 = UPoseSearchDatabase::GetDatabaseAnimationAsset(pUVar6,pFVar8);
        if (pFVar9 != (FPoseSearchDatabaseAnimationAsset *)0x0) {
          pUVar10 = (UObject *)(**(code **)(pFVar9->_padding_ + 8))(pFVar9);
          bVar5 = local_25c == __real_7f7fffff;
          __return_storage_ptr__->SelectedAsset = pUVar10;
          __return_storage_ptr__->Dissimilarity = local_264;
          if ((bVar5) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsAssetTimeValid(AssetTime)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchResult.h"
                                 ,0x4a,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            pFVar11 = (FSearchResult *)(*pcVar3)();
            return pFVar11;
          }
          __return_storage_ptr__->TimeOffsetSeconds = local_25c;
          __return_storage_ptr__->bIsFromContinuingPlaying = local_258;
          __return_storage_ptr__->bMirrored = pFVar8->bMirrored;
          fVar13 = pFVar8->BlendParameterY;
          (__return_storage_ptr__->BlendParameters).field0_0x0._s_0.X =
               (double)pFVar8->BlendParameterX;
          (__return_storage_ptr__->BlendParameters).field0_0x0._s_0.Y = (double)fVar13;
          (__return_storage_ptr__->BlendParameters).field0_0x0._s_0.Z = 0.0;
          __return_storage_ptr__->WantedPlayRate = 1.0;
          if ((((local_280.DebugPtr != (UObject *)0x0) && (0.0 < local_274)) &&
              (this_01 = UPoseSearchSchema::
                         FindFirstChannelOfType<UPoseSearchFeatureChannel_PermutationTime>
                                   ((pUVar6->Schema).field0_0x0.DebugPtr),
              this_01 != (UPoseSearchFeatureChannel_PermutationTime *)0x0)) &&
             (pFVar7 = UPoseSearchDatabase::GetSearchIndex(pUVar6), (int)pFVar7->_padding_ != 0)) {
            pFVar7 = UPoseSearchDatabase::GetSearchIndex(pUVar6);
            UE::PoseSearch::FSearchIndex::GetPoseValues(pFVar7,&local_188,local_270);
            local_1e8.DataPtr = local_188.DataPtr;
            local_1e8.ArrayNum = local_188.ArrayNum;
            local_1e8._12_4_ = local_188._12_4_;
            fVar13 = UPoseSearchFeatureChannel_PermutationTime::GetPermutationTime
                               (this_01,&local_1e8);
            __return_storage_ptr__->WantedPlayRate = fVar13 / local_274;
          }
        }
      }
    }
  }
  return __return_storage_ptr__;
}

