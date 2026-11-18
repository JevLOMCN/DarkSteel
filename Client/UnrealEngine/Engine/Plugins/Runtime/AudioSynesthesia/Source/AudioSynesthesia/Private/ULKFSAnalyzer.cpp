// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesia
// Functions: 9

// StaticClass @ 14d813b10

UClass * __cdecl ULKFSAnalyzer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULKFSAnalyzer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"LKFSAnalyzer",
               &Z_Registration_Info_UClass_ULKFSAnalyzer.InnerSingleton,
               StaticRegisterNativesULKFSAnalyzer,0x188,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<ULKFSAnalyzer>,InternalVTableHelperCtorCaller<ULKFSAnalyzer>,
               local_res8,UAudioAnalyzer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULKFSAnalyzer.InnerSingleton;
}

// ULKFSAnalyzer @ 14d81b1d0

ULKFSAnalyzer * __thiscall ULKFSAnalyzer::ULKFSAnalyzer(ULKFSAnalyzer *this,FVTableHelper *param_1)

{
  UAudioAnalyzer::UAudioAnalyzer((UAudioAnalyzer *)this,param_1);
  this->_padding_ = (longlong)&___7ULKFSAnalyzer__6B_;
  (this->Settings).field0_0x0.DebugPtr = (ULKFSSettings *)0x0;
  *(undefined8 *)&this->OnOverallLKFSResults = 0;
  *(undefined8 *)&(this->OnOverallLKFSResults).field_0x8 = 0;
  *(undefined8 *)&(this->OnOverallLKFSResults).field_0x10 = 0;
  *(undefined8 *)&this->OnOverallLKFSResultsNative = 0;
  *(undefined8 *)&(this->OnOverallLKFSResultsNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnOverallLKFSResultsNative).field_0x10 = 0;
  *(undefined8 *)&this->OnPerChannelLKFSResults = 0;
  *(undefined8 *)&(this->OnPerChannelLKFSResults).field_0x8 = 0;
  *(undefined8 *)&(this->OnPerChannelLKFSResults).field_0x10 = 0;
  *(undefined8 *)&this->OnPerChannelLKFSResultsNative = 0;
  *(undefined8 *)&(this->OnPerChannelLKFSResultsNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnPerChannelLKFSResultsNative).field_0x10 = 0;
  *(undefined8 *)&this->OnLatestOverallLKFSResults = 0;
  *(undefined8 *)&(this->OnLatestOverallLKFSResults).field_0x8 = 0;
  *(undefined8 *)&(this->OnLatestOverallLKFSResults).field_0x10 = 0;
  *(undefined8 *)&this->OnLatestOverallLKFSResultsNative = 0;
  *(undefined8 *)&(this->OnLatestOverallLKFSResultsNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnLatestOverallLKFSResultsNative).field_0x10 = 0;
  *(undefined8 *)&this->OnLatestPerChannelLKFSResults = 0;
  *(undefined8 *)&(this->OnLatestPerChannelLKFSResults).field_0x8 = 0;
  *(undefined8 *)&(this->OnLatestPerChannelLKFSResults).field_0x10 = 0;
  *(undefined8 *)&this->OnLatestPerChannelLKFSResultsNative = 0;
  *(undefined8 *)&(this->OnLatestPerChannelLKFSResultsNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnLatestPerChannelLKFSResultsNative).field_0x10 = 0;
  *(undefined8 *)&(this->OnOverallLKFSResultsNative).field_0x18 = 2;
  *(undefined8 *)&(this->OnPerChannelLKFSResultsNative).field_0x18 = 2;
  *(undefined8 *)&(this->OnLatestOverallLKFSResultsNative).field_0x18 = 2;
  *(undefined8 *)&(this->OnLatestPerChannelLKFSResultsNative).field_0x18 = 2;
  return this;
}

// ULKFSAnalyzer @ 14d81b2e0

ULKFSAnalyzer * __thiscall ULKFSAnalyzer::ULKFSAnalyzer(ULKFSAnalyzer *this)

{
  FName FVar1;
  FObjectInitializer *pFVar2;
  FName *pFVar3;
  UClass *pUVar4;
  ULKFSSettings *pUVar5;
  FName local_res8;
  
  pFVar2 = FObjectInitializer::Get();
  UAudioAnalyzer::UAudioAnalyzer((UAudioAnalyzer *)this,pFVar2);
  this->_padding_ = (longlong)&___7ULKFSAnalyzer__6B_;
  *(undefined8 *)&(this->OnOverallLKFSResultsNative).field_0x18 = 2;
  (this->Settings).field0_0x0.DebugPtr = (ULKFSSettings *)0x0;
  *(undefined8 *)&this->OnOverallLKFSResults = 0;
  *(undefined8 *)&(this->OnOverallLKFSResults).field_0x8 = 0;
  *(undefined8 *)&(this->OnOverallLKFSResults).field_0x10 = 0;
  *(undefined8 *)&this->OnOverallLKFSResultsNative = 0;
  *(undefined8 *)&(this->OnOverallLKFSResultsNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnOverallLKFSResultsNative).field_0x10 = 0;
  *(undefined8 *)&this->OnPerChannelLKFSResults = 0;
  *(undefined8 *)&(this->OnPerChannelLKFSResults).field_0x8 = 0;
  *(undefined8 *)&(this->OnPerChannelLKFSResults).field_0x10 = 0;
  *(undefined8 *)&this->OnPerChannelLKFSResultsNative = 0;
  *(undefined8 *)&(this->OnPerChannelLKFSResultsNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnPerChannelLKFSResultsNative).field_0x10 = 0;
  *(undefined8 *)&this->OnLatestOverallLKFSResults = 0;
  *(undefined8 *)&(this->OnLatestOverallLKFSResults).field_0x8 = 0;
  *(undefined8 *)&(this->OnLatestOverallLKFSResults).field_0x10 = 0;
  *(undefined8 *)&this->OnLatestOverallLKFSResultsNative = 0;
  *(undefined8 *)&(this->OnLatestOverallLKFSResultsNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnLatestOverallLKFSResultsNative).field_0x10 = 0;
  *(undefined8 *)&this->OnLatestPerChannelLKFSResults = 0;
  *(undefined8 *)&(this->OnLatestPerChannelLKFSResults).field_0x8 = 0;
  *(undefined8 *)&(this->OnLatestPerChannelLKFSResults).field_0x10 = 0;
  *(undefined8 *)&this->OnLatestPerChannelLKFSResultsNative = 0;
  *(undefined8 *)&(this->OnLatestPerChannelLKFSResultsNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnLatestPerChannelLKFSResultsNative).field_0x10 = 0;
  *(undefined8 *)&(this->OnPerChannelLKFSResultsNative).field_0x18 = 2;
  *(undefined8 *)&(this->OnLatestOverallLKFSResultsNative).field_0x18 = 2;
  *(undefined8 *)&(this->OnLatestPerChannelLKFSResultsNative).field_0x18 = 2;
  pFVar3 = ::FName::FName(&local_res8,L"DefaultLKFSSettings");
  FVar1 = *pFVar3;
  pUVar4 = ULKFSSettings::StaticClass();
  pUVar5 = (ULKFSSettings *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (ULKFSSettings *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->Settings).field0_0x0.DebugPtr = pUVar5;
  return this;
}

// ~ULKFSAnalyzer @ 14d81c380

void __thiscall ULKFSAnalyzer::~ULKFSAnalyzer(ULKFSAnalyzer *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7ULKFSAnalyzer__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnLatestPerChannelLKFSResultsNative).field_0x8,
             *(int *)&(this->OnLatestPerChannelLKFSResultsNative).field_0x10);
  pvVar1 = *(void **)&(this->OnLatestPerChannelLKFSResultsNative).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLatestPerChannelLKFSResultsNative);
  pvVar1 = *(void **)&(this->OnLatestPerChannelLKFSResults).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLatestPerChannelLKFSResults);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnLatestOverallLKFSResultsNative).field_0x8,
             *(int *)&(this->OnLatestOverallLKFSResultsNative).field_0x10);
  pvVar1 = *(void **)&(this->OnLatestOverallLKFSResultsNative).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLatestOverallLKFSResultsNative);
  pvVar1 = *(void **)&(this->OnLatestOverallLKFSResults).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLatestOverallLKFSResults);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPerChannelLKFSResultsNative).field_0x8,
             *(int *)&(this->OnPerChannelLKFSResultsNative).field_0x10);
  pvVar1 = *(void **)&(this->OnPerChannelLKFSResultsNative).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPerChannelLKFSResultsNative);
  pvVar1 = *(void **)&(this->OnPerChannelLKFSResults).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPerChannelLKFSResults);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnOverallLKFSResultsNative).field_0x8,
             *(int *)&(this->OnOverallLKFSResultsNative).field_0x10);
  pvVar1 = *(void **)&(this->OnOverallLKFSResultsNative).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnOverallLKFSResultsNative);
  pvVar1 = *(void **)&(this->OnOverallLKFSResults).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnOverallLKFSResults);
  UAudioAnalyzer::~UAudioAnalyzer((UAudioAnalyzer *)this);
  return;
}

// BroadcastResults @ 14d81e700

void __thiscall ULKFSAnalyzer::BroadcastResults(ULKFSAnalyzer *this)

{
  undefined1 *puVar1;
  int iVar2;
  FLKFSAnalyzerResult *this_00;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  FLKFSResults *pFVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  TArray<FLKFSResults,TSizedDefaultAllocator<32>_> *pTVar14;
  TArrayView<FLKFSResults_const_,int> *pTVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this_01;
  int iVar20;
  TArray<FLKFSResults,TSizedDefaultAllocator<32>_> local_1d8;
  TArray<FLKFSResults,TSizedDefaultAllocator<32>_> *local_1c8;
  int local_1c0 [2];
  TArray<FLKFSResults,TSizedDefaultAllocator<32>_> local_1b8;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *local_1a8;
  FScriptContainerElement *local_198;
  int iStack_190;
  undefined4 uStack_18c;
  FDestructionSentinel local_188;
  FDestructionSentinel local_170;
  FDestructionSentinel local_158;
  FDestructionSentinel local_140;
  int local_128;
  FScriptContainerElement *local_124;
  undefined8 uStack_11c;
  FScriptContainerElement *local_114;
  int local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_f0;
  FLKFSResults *local_e8;
  undefined8 uStack_e0;
  FScriptContainerElement *local_d8;
  undefined8 uStack_d0;
  FReadAccessScope local_c8;
  FReadAccessScope local_b0;
  FReadAccessScope local_98;
  FReadAccessScope local_80;
  TArrayView<FLKFSResults_const_,int> local_68 [2];
  
  this_00 = (FLKFSAnalyzerResult *)this->_padding_;
  bVar11 = false;
  this->_padding_ = 0;
  if (this_00 == (FLKFSAnalyzerResult *)0x0) {
    return;
  }
  iVar13 = Audio::FLKFSAnalyzerResult::GetNumChannels(this_00);
  if (iVar13 < 1) goto LAB_14d81ef3b;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnOverallLKFSResults,
             &local_c8);
  iVar2 = *(int *)&(this->OnOverallLKFSResults).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_c8);
  if ((0 < iVar2) ||
     (bVar8 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &this->OnOverallLKFSResultsNative), bVar8)) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnLatestOverallLKFSResults,&local_b0);
  iVar2 = *(int *)&(this->OnLatestOverallLKFSResults).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_b0);
  if (iVar2 < 1) {
    bVar9 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &this->OnLatestOverallLKFSResultsNative);
    bVar12 = false;
    if (bVar9) goto LAB_14d81e7d6;
  }
  else {
LAB_14d81e7d6:
    bVar12 = true;
  }
  if ((bVar8) || (bVar12)) {
    pTVar14 = Audio::FLKFSAnalyzerResult::GetLoudnessResults(this_00);
    uVar17 = pTVar14->ArrayNum;
    if (0 < (int)uVar17) {
      local_1d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1d8.ArrayNum = 0;
      local_1d8.ArrayMax = 0;
      if (&local_1d8 != pTVar14) {
        pFVar19 = (pTVar14->AllocatorInstance).Data;
        local_1d8.ArrayMax = 0;
        local_1d8.ArrayNum = uVar17;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c,4,uVar17,0,&local_1d8.AllocatorInstance,uVar17,&local_1d8.ArrayMax);
        memcpy(local_1d8.AllocatorInstance.Data,pFVar19,(longlong)(int)uVar17 * 0x1c);
      }
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnOverallLKFSResults
                 ,&local_1d8);
      if (local_1d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.AllocatorInstance.Data);
      }
      pTVar15 = TArrayView<FLKFSResults_const_,int>::
                TArrayView<FLKFSResults_const_,int><TArray<FLKFSResults,TSizedDefaultAllocator<32>_>_const_&,TArray<FLKFSResults,TSizedDefaultAllocator<32>_>_>
                          (local_68,pTVar14);
      pFVar6 = pTVar15->DataPtr;
      uVar7 = *(undefined8 *)&pTVar15->ArrayNum;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnOverallLKFSResultsNative,(FWriteAccessScope *)&local_188);
      puVar1 = &(this->OnOverallLKFSResultsNative).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      uVar17 = *(int *)&(this->OnOverallLKFSResultsNative).field_0x10 - 1;
      if (-1 < (int)uVar17) {
        lVar16 = (longlong)(int)uVar17 << 4;
        do {
          uVar18 = 0;
          if ((int)uVar17 < *(int *)&(this->OnOverallLKFSResultsNative).field_0x10) {
            uVar18 = ~uVar17 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar3 = *(longlong *)&(this->OnOverallLKFSResultsNative).field_0x8;
          if (((*(int *)(lVar16 + 8 + lVar3) == 0) ||
              (plVar4 = *(longlong **)(lVar16 + lVar3), plVar4 == (longlong *)0x0)) ||
             (local_e8 = pFVar6, uStack_e0 = uVar7,
             cVar10 = (**(code **)(*plVar4 + 0x68))(plVar4,this,&local_e8), cVar10 == '\0')) {
            bVar11 = true;
          }
          lVar16 = lVar16 + -0x10;
          uVar17 = uVar17 - 1;
        } while (-1 < (int)uVar17);
      }
      puVar1 = &(this->OnOverallLKFSResultsNative).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar11) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &this->OnOverallLKFSResultsNative,false);
      }
      if (local_188.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_188.Accessor,&local_188);
      }
      uVar18 = pTVar14->ArrayNum - 1;
      uVar17 = 0;
      if ((int)uVar18 < pTVar14->ArrayNum) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar19 = (pTVar14->AllocatorInstance).Data + (longlong)(int)uVar18 * 0x1c;
      local_108 = *(undefined8 *)pFVar19;
      uStack_100 = *(undefined8 *)(pFVar19 + 8);
      local_f0 = *(undefined4 *)(pFVar19 + 0x18);
      local_f8 = *(undefined8 *)(pFVar19 + 0x10);
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                 &this->OnLatestOverallLKFSResults,&local_108);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnLatestOverallLKFSResultsNative,(FWriteAccessScope *)&local_170);
      puVar1 = &(this->OnLatestOverallLKFSResultsNative).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar11 = false;
      uVar17 = *(int *)&(this->OnLatestOverallLKFSResultsNative).field_0x10 - 1;
      if (-1 < (int)uVar17) {
        lVar16 = (longlong)(int)uVar17 << 4;
        bVar11 = false;
        do {
          uVar18 = 0;
          if ((int)uVar17 < *(int *)&(this->OnLatestOverallLKFSResultsNative).field_0x10) {
            uVar18 = ~uVar17 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar3 = *(longlong *)&(this->OnLatestOverallLKFSResultsNative).field_0x8;
          if (((*(int *)(lVar16 + 8 + lVar3) == 0) ||
              (plVar4 = *(longlong **)(lVar16 + lVar3), plVar4 == (longlong *)0x0)) ||
             (cVar10 = (**(code **)(*plVar4 + 0x68))(plVar4,this,pFVar19), cVar10 == '\0')) {
            bVar11 = true;
          }
          lVar16 = lVar16 + -0x10;
          uVar17 = uVar17 - 1;
        } while (-1 < (int)uVar17);
      }
      puVar1 = &(this->OnLatestOverallLKFSResultsNative).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar11) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &this->OnLatestOverallLKFSResultsNative,false);
      }
      if (local_170.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
      }
    }
  }
  iVar20 = 0;
  this_01 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnPerChannelLKFSResults;
  local_1a8 = this_01;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_01,&local_98);
  iVar2 = *(int *)&(this->OnPerChannelLKFSResults).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_98);
  if ((0 < iVar2) ||
     (bVar11 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                         ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                          &this->OnPerChannelLKFSResultsNative), bVar11)) {
    bVar11 = true;
  }
  else {
    bVar11 = false;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnLatestPerChannelLKFSResults,&local_80);
  iVar2 = *(int *)&(this->OnLatestPerChannelLKFSResults).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_80);
  if (iVar2 < 1) {
    bVar12 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                       ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                        &this->OnLatestPerChannelLKFSResultsNative);
    bVar8 = false;
    if (bVar12) goto LAB_14d81eb71;
  }
  else {
LAB_14d81eb71:
    bVar8 = true;
  }
  if ((bVar11) || (bVar8)) {
    do {
      pTVar14 = Audio::FLKFSAnalyzerResult::GetChannelLoudnessResults(this_00,iVar20);
      uVar17 = pTVar14->ArrayNum;
      local_1c8 = pTVar14;
      if (0 < (int)uVar17) {
        local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1b8.ArrayNum = 0;
        local_1b8.ArrayMax = 0;
        local_1c0[0] = iVar20;
        if (&local_1b8 != pTVar14) {
          pFVar19 = (pTVar14->AllocatorInstance).Data;
          local_1b8.ArrayMax = 0;
          local_1b8.ArrayNum = uVar17;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x1c,4,uVar17,0,&local_1b8.AllocatorInstance,uVar17,&local_1b8.ArrayMax);
          memcpy(local_1b8.AllocatorInstance.Data,pFVar19,(longlong)(int)uVar17 * 0x1c);
        }
        TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                  (this_01,local_1c0);
        if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b8.AllocatorInstance.Data);
        }
        local_198 = (pTVar14->AllocatorInstance).Data;
        iVar2 = pTVar14->ArrayNum;
        if ((iVar2 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iStack_190 = iVar2;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->OnPerChannelLKFSResultsNative,(FWriteAccessScope *)&local_158);
        pFVar19 = local_198;
        puVar1 = &(this->OnPerChannelLKFSResultsNative).field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + 1;
        bVar11 = false;
        uVar17 = *(int *)&(this->OnPerChannelLKFSResultsNative).field_0x10 - 1;
        if (-1 < (int)uVar17) {
          uVar7 = CONCAT44(uStack_18c,iStack_190);
          lVar16 = (longlong)(int)uVar17 << 4;
          do {
            uVar18 = 0;
            if ((int)uVar17 < *(int *)&(this->OnPerChannelLKFSResultsNative).field_0x10) {
              uVar18 = ~uVar17 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar3 = *(longlong *)&(this->OnPerChannelLKFSResultsNative).field_0x8;
            if ((*(int *)(lVar16 + 8 + lVar3) == 0) ||
               (plVar4 = *(longlong **)(lVar16 + lVar3), plVar4 == (longlong *)0x0)) {
LAB_14d81ed23:
              bVar11 = true;
            }
            else {
              local_d8 = pFVar19;
              uStack_d0 = uVar7;
              cVar10 = (**(code **)(*plVar4 + 0x68))(plVar4,this,iVar20);
              if (cVar10 == '\0') goto LAB_14d81ed23;
            }
            lVar16 = lVar16 + -0x10;
            uVar17 = uVar17 - 1;
            pTVar14 = local_1c8;
          } while (-1 < (int)uVar17);
        }
        puVar1 = &(this->OnPerChannelLKFSResultsNative).field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        if (bVar11) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &this->OnPerChannelLKFSResultsNative,false);
        }
        if (local_158.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_158.Accessor,&local_158);
        }
        uVar18 = pTVar14->ArrayNum - 1;
        uVar17 = 0;
        if ((int)uVar18 < pTVar14->ArrayNum) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_1c8 = (TArray<FLKFSResults,TSizedDefaultAllocator<32>_> *)
                    ((pTVar14->AllocatorInstance).Data + (longlong)(int)uVar18 * 0x1c);
        local_124 = (local_1c8->AllocatorInstance).Data;
        uStack_11c._0_4_ = local_1c8->ArrayNum;
        uStack_11c._4_4_ = local_1c8->ArrayMax;
        local_114 = local_1c8[1].AllocatorInstance.Data;
        local_10c = local_1c8[1].ArrayNum;
        local_128 = iVar20;
        TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                   &this->OnLatestPerChannelLKFSResults,&local_128);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->OnLatestPerChannelLKFSResultsNative,(FWriteAccessScope *)&local_140);
        puVar1 = &(this->OnLatestPerChannelLKFSResultsNative).field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + 1;
        bVar11 = false;
        uVar17 = *(int *)&(this->OnLatestPerChannelLKFSResultsNative).field_0x10 - 1;
        if (-1 < (int)uVar17) {
          lVar16 = (longlong)(int)uVar17 << 4;
          bVar11 = false;
          do {
            uVar18 = 0;
            if ((int)uVar17 < *(int *)&(this->OnLatestPerChannelLKFSResultsNative).field_0x10) {
              uVar18 = ~uVar17 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar3 = *(longlong *)&(this->OnLatestPerChannelLKFSResultsNative).field_0x8;
            if (((*(int *)(lVar16 + 8 + lVar3) == 0) ||
                (plVar4 = *(longlong **)(lVar16 + lVar3), plVar4 == (longlong *)0x0)) ||
               (cVar10 = (**(code **)(*plVar4 + 0x68))(plVar4,this,iVar20), cVar10 == '\0')) {
              bVar11 = true;
            }
            lVar16 = lVar16 + -0x10;
            uVar17 = uVar17 - 1;
          } while (-1 < (int)uVar17);
        }
        puVar1 = &(this->OnLatestPerChannelLKFSResultsNative).field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        if (bVar11) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &this->OnLatestPerChannelLKFSResultsNative,false);
        }
        this_01 = local_1a8;
        if (local_140.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_140.Accessor,&local_140);
          this_01 = local_1a8;
        }
      }
      iVar20 = iVar20 + 1;
    } while (iVar20 < iVar13);
  }
LAB_14d81ef3b:
  (**(code **)this_00->_padding_)(this_00,1);
  return;
}

// GetAnalyzerFactoryName @ 14d8216e0

FName __thiscall ULKFSAnalyzer::GetAnalyzerFactoryName(ULKFSAnalyzer *this)

{
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::FactoryName,L"LKFSFactory");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RDX = ::FactoryName;
  return in_RDX;
}

// GetPrivateStaticClass @ 14d823a60

UClass * __cdecl ULKFSAnalyzer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULKFSAnalyzer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"LKFSAnalyzer",
               &Z_Registration_Info_UClass_ULKFSAnalyzer.InnerSingleton,
               StaticRegisterNativesULKFSAnalyzer,0x188,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<ULKFSAnalyzer>,InternalVTableHelperCtorCaller<ULKFSAnalyzer>,
               local_res8,UAudioAnalyzer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULKFSAnalyzer.InnerSingleton;
}

// GetSettings @ 14d825060

TUniquePtr<Audio::IAnalyzerSettings,TDefaultDelete<Audio::IAnalyzerSettings>_> __thiscall
ULKFSAnalyzer::GetSettings(ULKFSAnalyzer *this,int param_1,int param_2)

{
  ULKFSSettings *pUVar1;
  IAnalyzerSettings IVar2;
  undefined8 *puVar3;
  IAnalyzerSettings IVar4;
  undefined4 in_register_00000014;
  IAnalyzerSettings *pIVar5;
  IAnalyzerSettings local_18 [2];
  
  pIVar5 = (IAnalyzerSettings *)CONCAT44(in_register_00000014,param_1);
  IVar4 = (IAnalyzerSettings)0x0;
  *pIVar5 = (IAnalyzerSettings)0x0;
  pUVar1 = (this->Settings).field0_0x0.DebugPtr;
  if (pUVar1 != (ULKFSSettings *)0x0) {
    IVar2 = (IAnalyzerSettings)::operator_new(0x38);
    if (IVar2 != (IAnalyzerSettings)0x0) {
      *(undefined2 *)((longlong)IVar2 + 0xe) = 0;
      *(undefined2 *)((longlong)IVar2 + 0x1d) = 0;
      *(undefined1 *)((longlong)IVar2 + 0x1f) = 0;
      *(undefined4 *)((longlong)IVar2 + 0x34) = 0;
      *(undefined ***)IVar2 = &___7FLKFSSettings_Audio__6B_;
      *(undefined4 *)((longlong)IVar2 + 8) = 0x800;
      *(undefined2 *)((longlong)IVar2 + 0xc) = 0x403;
      *(undefined4 *)((longlong)IVar2 + 0x10) = 0x41a00000;
      *(undefined4 *)((longlong)IVar2 + 0x14) = 0x469c4000;
      *(undefined4 *)((longlong)IVar2 + 0x18) = 0xffffffff;
      *(undefined1 *)((longlong)IVar2 + 0x1c) = 1;
      *(undefined4 *)((longlong)IVar2 + 0x20) = 0x3dcccccd;
      *(undefined4 *)((longlong)IVar2 + 0x24) = 0x3ecccccd;
      *(undefined4 *)((longlong)IVar2 + 0x28) = 0x40400000;
      *(undefined4 *)((longlong)IVar2 + 0x2c) = 0x3f800000;
      *(undefined4 *)((longlong)IVar2 + 0x30) = 0x42700000;
      IVar4 = IVar2;
    }
    *(float *)((longlong)IVar4 + 0x20) = pUVar1->AnalysisPeriod;
    *(float *)((longlong)IVar4 + 0x24) = pUVar1->AnalysisWindowDuration;
    *(float *)((longlong)IVar4 + 0x28) = pUVar1->ShortTermLoudnessDuration;
    *(float *)((longlong)IVar4 + 0x2c) = pUVar1->IntegratedLoudnessAnalysisPeriod;
    *(float *)((longlong)IVar4 + 0x30) = pUVar1->IntegratedLoudnessDuration;
    if (pIVar5 == local_18) {
      if (IVar4 == (IAnalyzerSettings)0x0) {
        return (TUniquePtr<Audio::IAnalyzerSettings,TDefaultDelete<Audio::IAnalyzerSettings>_>)
               pIVar5;
      }
      puVar3 = *(undefined8 **)IVar4;
    }
    else {
      IVar2 = *pIVar5;
      *pIVar5 = IVar4;
      if (IVar2 == (IAnalyzerSettings)0x0) {
        return (TUniquePtr<Audio::IAnalyzerSettings,TDefaultDelete<Audio::IAnalyzerSettings>_>)
               pIVar5;
      }
      puVar3 = *(undefined8 **)IVar2;
      IVar4 = IVar2;
    }
    (*(code *)*puVar3)(IVar4,1);
  }
  return (TUniquePtr<Audio::IAnalyzerSettings,TDefaultDelete<Audio::IAnalyzerSettings>_>)pIVar5;
}

// StaticRegisterNativesULKFSAnalyzer @ 14d8272a0

void __cdecl ULKFSAnalyzer::StaticRegisterNativesULKFSAnalyzer(void)

{
  return;
}

