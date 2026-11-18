// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesia
// Functions: 9

// StaticClass @ 14d814000

UClass * __cdecl UMeterAnalyzer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeterAnalyzer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"MeterAnalyzer",
               &Z_Registration_Info_UClass_UMeterAnalyzer.InnerSingleton,
               StaticRegisterNativesUMeterAnalyzer,0x188,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeterAnalyzer>,InternalVTableHelperCtorCaller<UMeterAnalyzer>,
               local_res8,UAudioAnalyzer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeterAnalyzer.InnerSingleton;
}

// UMeterAnalyzer @ 14d81b930

UMeterAnalyzer * __thiscall
UMeterAnalyzer::UMeterAnalyzer(UMeterAnalyzer *this,FVTableHelper *param_1)

{
  UAudioAnalyzer::UAudioAnalyzer((UAudioAnalyzer *)this,param_1);
  this->_padding_ = (longlong)&___7UMeterAnalyzer__6B_;
  (this->Settings).field0_0x0.DebugPtr = (UMeterSettings *)0x0;
  *(undefined8 *)&this->OnOverallMeterResults = 0;
  *(undefined8 *)&(this->OnOverallMeterResults).field_0x8 = 0;
  *(undefined8 *)&(this->OnOverallMeterResults).field_0x10 = 0;
  *(undefined8 *)&this->OnOverallMeterResultsNative = 0;
  *(undefined8 *)&(this->OnOverallMeterResultsNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnOverallMeterResultsNative).field_0x10 = 0;
  *(undefined8 *)&this->OnPerChannelMeterResults = 0;
  *(undefined8 *)&(this->OnPerChannelMeterResults).field_0x8 = 0;
  *(undefined8 *)&(this->OnPerChannelMeterResults).field_0x10 = 0;
  *(undefined8 *)&this->OnPerChannelMeterResultsNative = 0;
  *(undefined8 *)&(this->OnPerChannelMeterResultsNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnPerChannelMeterResultsNative).field_0x10 = 0;
  *(undefined8 *)&this->OnLatestOverallMeterResults = 0;
  *(undefined8 *)&(this->OnLatestOverallMeterResults).field_0x8 = 0;
  *(undefined8 *)&(this->OnLatestOverallMeterResults).field_0x10 = 0;
  *(undefined8 *)&this->OnLatestOverallMeterResultsNative = 0;
  *(undefined8 *)&(this->OnLatestOverallMeterResultsNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnLatestOverallMeterResultsNative).field_0x10 = 0;
  *(undefined8 *)&this->OnLatestPerChannelMeterResults = 0;
  *(undefined8 *)&(this->OnLatestPerChannelMeterResults).field_0x8 = 0;
  *(undefined8 *)&(this->OnLatestPerChannelMeterResults).field_0x10 = 0;
  *(undefined8 *)&this->OnLatestPerChannelMeterResultsNative = 0;
  *(undefined8 *)&(this->OnLatestPerChannelMeterResultsNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnLatestPerChannelMeterResultsNative).field_0x10 = 0;
  *(undefined8 *)&(this->OnOverallMeterResultsNative).field_0x18 = 2;
  *(undefined8 *)&(this->OnPerChannelMeterResultsNative).field_0x18 = 2;
  *(undefined8 *)&(this->OnLatestOverallMeterResultsNative).field_0x18 = 2;
  *(undefined8 *)&(this->OnLatestPerChannelMeterResultsNative).field_0x18 = 2;
  return this;
}

// UMeterAnalyzer @ 14d81ba40

UMeterAnalyzer * __thiscall UMeterAnalyzer::UMeterAnalyzer(UMeterAnalyzer *this)

{
  FName FVar1;
  FObjectInitializer *pFVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UMeterSettings *pUVar5;
  FName local_res8;
  
  pFVar2 = FObjectInitializer::Get();
  UAudioAnalyzer::UAudioAnalyzer((UAudioAnalyzer *)this,pFVar2);
  this->_padding_ = (longlong)&___7UMeterAnalyzer__6B_;
  *(undefined8 *)&(this->OnOverallMeterResultsNative).field_0x18 = 2;
  (this->Settings).field0_0x0.DebugPtr = (UMeterSettings *)0x0;
  *(undefined8 *)&this->OnOverallMeterResults = 0;
  *(undefined8 *)&(this->OnOverallMeterResults).field_0x8 = 0;
  *(undefined8 *)&(this->OnOverallMeterResults).field_0x10 = 0;
  *(undefined8 *)&this->OnOverallMeterResultsNative = 0;
  *(undefined8 *)&(this->OnOverallMeterResultsNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnOverallMeterResultsNative).field_0x10 = 0;
  *(undefined8 *)&this->OnPerChannelMeterResults = 0;
  *(undefined8 *)&(this->OnPerChannelMeterResults).field_0x8 = 0;
  *(undefined8 *)&(this->OnPerChannelMeterResults).field_0x10 = 0;
  *(undefined8 *)&this->OnPerChannelMeterResultsNative = 0;
  *(undefined8 *)&(this->OnPerChannelMeterResultsNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnPerChannelMeterResultsNative).field_0x10 = 0;
  *(undefined8 *)&this->OnLatestOverallMeterResults = 0;
  *(undefined8 *)&(this->OnLatestOverallMeterResults).field_0x8 = 0;
  *(undefined8 *)&(this->OnLatestOverallMeterResults).field_0x10 = 0;
  *(undefined8 *)&this->OnLatestOverallMeterResultsNative = 0;
  *(undefined8 *)&(this->OnLatestOverallMeterResultsNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnLatestOverallMeterResultsNative).field_0x10 = 0;
  *(undefined8 *)&this->OnLatestPerChannelMeterResults = 0;
  *(undefined8 *)&(this->OnLatestPerChannelMeterResults).field_0x8 = 0;
  *(undefined8 *)&(this->OnLatestPerChannelMeterResults).field_0x10 = 0;
  *(undefined8 *)&this->OnLatestPerChannelMeterResultsNative = 0;
  *(undefined8 *)&(this->OnLatestPerChannelMeterResultsNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnLatestPerChannelMeterResultsNative).field_0x10 = 0;
  *(undefined8 *)&(this->OnPerChannelMeterResultsNative).field_0x18 = 2;
  *(undefined8 *)&(this->OnLatestOverallMeterResultsNative).field_0x18 = 2;
  *(undefined8 *)&(this->OnLatestPerChannelMeterResultsNative).field_0x18 = 2;
  pFVar3 = ::FName::FName(&local_res8,L"DefaultMeterSettings");
  FVar1 = *pFVar3;
  pUVar4 = UMeterSettings::StaticClass();
  pUVar5 = (UMeterSettings *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UMeterSettings *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->Settings).field0_0x0.DebugPtr = pUVar5;
  return this;
}

// ~UMeterAnalyzer @ 14d81c650

void __thiscall UMeterAnalyzer::~UMeterAnalyzer(UMeterAnalyzer *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMeterAnalyzer__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnLatestPerChannelMeterResultsNative).field_0x8,
             *(int *)&(this->OnLatestPerChannelMeterResultsNative).field_0x10);
  pvVar1 = *(void **)&(this->OnLatestPerChannelMeterResultsNative).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLatestPerChannelMeterResultsNative);
  pvVar1 = *(void **)&(this->OnLatestPerChannelMeterResults).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLatestPerChannelMeterResults);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnLatestOverallMeterResultsNative).field_0x8,
             *(int *)&(this->OnLatestOverallMeterResultsNative).field_0x10);
  pvVar1 = *(void **)&(this->OnLatestOverallMeterResultsNative).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLatestOverallMeterResultsNative);
  pvVar1 = *(void **)&(this->OnLatestOverallMeterResults).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLatestOverallMeterResults);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPerChannelMeterResultsNative).field_0x8,
             *(int *)&(this->OnPerChannelMeterResultsNative).field_0x10);
  pvVar1 = *(void **)&(this->OnPerChannelMeterResultsNative).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPerChannelMeterResultsNative);
  pvVar1 = *(void **)&(this->OnPerChannelMeterResults).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPerChannelMeterResults);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnOverallMeterResultsNative).field_0x8,
             *(int *)&(this->OnOverallMeterResultsNative).field_0x10);
  pvVar1 = *(void **)&(this->OnOverallMeterResultsNative).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnOverallMeterResultsNative);
  pvVar1 = *(void **)&(this->OnOverallMeterResults).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnOverallMeterResults);
  UAudioAnalyzer::~UAudioAnalyzer((UAudioAnalyzer *)this);
  return;
}

// BroadcastResults @ 14d81f390

void __thiscall UMeterAnalyzer::BroadcastResults(UMeterAnalyzer *this)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  FMeterResult *this_00;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  TArray<Audio::FMeterEntry,TSizedDefaultAllocator<32>_> *pTVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this_01;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *this_02;
  TArray<FMeterResults,TSizedDefaultAllocator<32>_> local_198;
  TArray<FMeterResults,TSizedDefaultAllocator<32>_> local_188;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *local_178;
  ForAnyElementType local_170;
  int local_168;
  int local_164;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *local_160;
  int local_158 [2];
  ForAnyElementType local_150;
  int local_148;
  int local_144;
  FDestructionSentinel local_140;
  FDestructionSentinel local_128;
  FDestructionSentinel local_110;
  int local_f8;
  undefined8 local_f4;
  undefined8 uStack_ec;
  undefined4 local_e4;
  FDestructionSentinel local_e0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  FReadAccessScope local_b0;
  FReadAccessScope local_98;
  FReadAccessScope local_80;
  FReadAccessScope local_68;
  
  this_00 = (FMeterResult *)this->_padding_;
  this->_padding_ = 0;
  if (this_00 == (FMeterResult *)0x0) {
    return;
  }
  iVar11 = Audio::FMeterResult::GetNumChannels(this_00);
  if (iVar11 < 1) goto LAB_14d81fc5b;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnOverallMeterResults,
             &local_b0);
  iVar17 = *(int *)&(this->OnOverallMeterResults).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_b0);
  if ((0 < iVar17) ||
     (bVar7 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &this->OnOverallMeterResultsNative), bVar7)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnLatestOverallMeterResults,&local_98);
  iVar17 = *(int *)&(this->OnLatestOverallMeterResults).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_98);
  if (iVar17 < 1) {
    bVar8 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &this->OnLatestOverallMeterResultsNative);
    bVar9 = false;
    if (bVar8) goto LAB_14d81f47a;
  }
  else {
LAB_14d81f47a:
    bVar9 = true;
  }
  if (((bVar7) || (bVar9)) &&
     (pTVar12 = Audio::FMeterResult::GetMeterArray(this_00), 0 < pTVar12->ArrayNum)) {
    ConvertToBlueprintResults(&local_188,(this->Settings).field0_0x0.DebugPtr,pTVar12);
    iVar17 = local_188.ArrayNum;
    if (iVar17 < 1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Results.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesia\\Private\\Meter.cpp"
                         ,0x71,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar17 = local_188.ArrayNum;
    }
    FVar6.Data = local_188.AllocatorInstance.Data;
    local_170.Data = (FScriptContainerElement *)0x0;
    local_164 = 0;
    local_168 = iVar17;
    if (iVar17 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,iVar17,0,&local_170,iVar17,&local_164);
      memcpy(local_170.Data,FVar6.Data,(longlong)iVar17 * 0x14);
    }
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnOverallMeterResults,
               &local_170);
    if (local_170.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnOverallMeterResultsNative,(FWriteAccessScope *)&local_140);
    puVar1 = &(this->OnOverallMeterResultsNative).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar7 = false;
    uVar14 = *(int *)&(this->OnOverallMeterResultsNative).field_0x10 - 1;
    if (-1 < (int)uVar14) {
      lVar13 = (longlong)(int)uVar14 << 4;
      bVar7 = false;
      do {
        uVar15 = 0;
        if ((int)uVar14 < *(int *)&(this->OnOverallMeterResultsNative).field_0x10) {
          uVar15 = ~uVar14 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar3 = *(longlong *)&(this->OnOverallMeterResultsNative).field_0x8;
        if (((*(int *)(lVar3 + 8 + lVar13) == 0) ||
            (plVar4 = *(longlong **)(lVar3 + lVar13), plVar4 == (longlong *)0x0)) ||
           (cVar10 = (**(code **)(*plVar4 + 0x68))(plVar4,this,&local_188), cVar10 == '\0')) {
          bVar7 = true;
        }
        lVar13 = lVar13 + -0x10;
        uVar14 = uVar14 - 1;
      } while (-1 < (int)uVar14);
    }
    puVar1 = &(this->OnOverallMeterResultsNative).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar7) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this->OnOverallMeterResultsNative,false);
    }
    if (local_140.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_140.Accessor,&local_140);
    }
    uVar15 = local_188.ArrayNum - 1;
    uVar14 = 0;
    if ((int)uVar15 < local_188.ArrayNum) {
      uVar14 = ~uVar15 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar13 = (longlong)(int)uVar15;
    local_c8 = *(undefined8 *)(local_188.AllocatorInstance.Data + lVar13 * 0x14);
    uStack_c0 = *(undefined8 *)(local_188.AllocatorInstance.Data + lVar13 * 0x14 + 8);
    pFVar2 = local_188.AllocatorInstance.Data + lVar13 * 0x14;
    local_b8 = *(undefined4 *)(local_188.AllocatorInstance.Data + lVar13 * 0x14 + 0x10);
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->OnLatestOverallMeterResults,&local_c8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnLatestOverallMeterResultsNative,(FWriteAccessScope *)&local_128);
    puVar1 = &(this->OnLatestOverallMeterResultsNative).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar7 = false;
    uVar14 = *(int *)&(this->OnLatestOverallMeterResultsNative).field_0x10 - 1;
    if (-1 < (int)uVar14) {
      lVar13 = (longlong)(int)uVar14 << 4;
      bVar7 = false;
      do {
        uVar15 = 0;
        if ((int)uVar14 < *(int *)&(this->OnLatestOverallMeterResultsNative).field_0x10) {
          uVar15 = ~uVar14 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar3 = *(longlong *)&(this->OnLatestOverallMeterResultsNative).field_0x8;
        if (((*(int *)(lVar3 + 8 + lVar13) == 0) ||
            (plVar4 = *(longlong **)(lVar3 + lVar13), plVar4 == (longlong *)0x0)) ||
           (cVar10 = (**(code **)(*plVar4 + 0x68))(plVar4,this,pFVar2), cVar10 == '\0')) {
          bVar7 = true;
        }
        lVar13 = lVar13 + -0x10;
        uVar14 = uVar14 - 1;
      } while (-1 < (int)uVar14);
    }
    puVar1 = &(this->OnLatestOverallMeterResultsNative).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar7) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this->OnLatestOverallMeterResultsNative,false);
    }
    if (local_128.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_128.Accessor,&local_128);
    }
    if (local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.AllocatorInstance.Data);
    }
  }
  this_01 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnPerChannelMeterResults;
  local_160 = this_01;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_01,&local_80);
  iVar17 = *(int *)&(this->OnPerChannelMeterResults).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_80);
  if ((0 < iVar17) ||
     (bVar7 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &this->OnPerChannelMeterResultsNative), bVar7)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  this_02 = (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
            &this->OnLatestPerChannelMeterResults;
  local_178 = this_02;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_02,&local_68);
  iVar17 = *(int *)&(this->OnLatestPerChannelMeterResults).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_68);
  if (iVar17 < 1) {
    bVar8 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &this->OnLatestPerChannelMeterResultsNative);
    bVar9 = false;
    if (bVar8) goto LAB_14d81f84a;
  }
  else {
LAB_14d81f84a:
    bVar9 = true;
  }
  if ((bVar7) || (bVar9)) {
    iVar17 = 0;
    do {
      pTVar12 = Audio::FMeterResult::GetChannelMeterArray(this_00,iVar17);
      if (0 < pTVar12->ArrayNum) {
        ConvertToBlueprintResults(&local_198,(this->Settings).field0_0x0.DebugPtr,pTVar12);
        iVar16 = local_198.ArrayNum;
        if (iVar16 < 1) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Results.Num() > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesia\\Private\\Meter.cpp"
                             ,0x88,L"");
          if (bVar7) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar16 = local_198.ArrayNum;
        }
        FVar6.Data = local_198.AllocatorInstance.Data;
        local_150.Data = (FScriptContainerElement *)0x0;
        local_144 = 0;
        local_158[0] = iVar17;
        local_148 = iVar16;
        if (iVar16 != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x14,4,iVar16,0,&local_150,iVar16,&local_144);
          memcpy(local_150.Data,FVar6.Data,(longlong)iVar16 * 0x14);
        }
        TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                  (this_01,local_158);
        if (local_150.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.Data);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->OnPerChannelMeterResultsNative,(FWriteAccessScope *)&local_110);
        puVar1 = &(this->OnPerChannelMeterResultsNative).field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + 1;
        bVar7 = false;
        uVar14 = *(int *)&(this->OnPerChannelMeterResultsNative).field_0x10 - 1;
        if (-1 < (int)uVar14) {
          lVar13 = (longlong)(int)uVar14 << 4;
          bVar7 = false;
          do {
            uVar15 = 0;
            if ((int)uVar14 < *(int *)&(this->OnPerChannelMeterResultsNative).field_0x10) {
              uVar15 = ~uVar14 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar3 = *(longlong *)&(this->OnPerChannelMeterResultsNative).field_0x8;
            if (((*(int *)(lVar3 + 8 + lVar13) == 0) ||
                (plVar4 = *(longlong **)(lVar3 + lVar13), plVar4 == (longlong *)0x0)) ||
               (cVar10 = (**(code **)(*plVar4 + 0x68))(plVar4,this,iVar17), cVar10 == '\0')) {
              bVar7 = true;
            }
            lVar13 = lVar13 + -0x10;
            uVar14 = uVar14 - 1;
            this_02 = local_178;
          } while (-1 < (int)uVar14);
        }
        puVar1 = &(this->OnPerChannelMeterResultsNative).field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        if (bVar7) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &this->OnPerChannelMeterResultsNative,false);
        }
        if (local_110.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_110.Accessor,&local_110);
        }
        uVar15 = local_198.ArrayNum - 1;
        uVar14 = 0;
        if ((int)uVar15 < local_198.ArrayNum) {
          uVar14 = ~uVar15 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_f4 = *(undefined8 *)(local_198.AllocatorInstance.Data + (longlong)(int)uVar15 * 0x14);
        uStack_ec = *(undefined8 *)
                     (local_198.AllocatorInstance.Data + (longlong)(int)uVar15 * 0x14 + 8);
        local_e4 = *(undefined4 *)
                    (local_198.AllocatorInstance.Data + (longlong)(int)uVar15 * 0x14 + 0x10);
        local_f8 = iVar17;
        TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                  (this_02,&local_f8);
        uVar15 = local_198.ArrayNum - 1;
        uVar14 = 0;
        if ((int)uVar15 < local_198.ArrayNum) {
          uVar14 = ~uVar15 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->OnLatestPerChannelMeterResultsNative,(FWriteAccessScope *)&local_e0);
        puVar1 = &(this->OnLatestPerChannelMeterResultsNative).field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + 1;
        bVar7 = false;
        uVar14 = *(int *)&(this->OnLatestPerChannelMeterResultsNative).field_0x10 - 1;
        if (-1 < (int)uVar14) {
          lVar13 = (longlong)(int)uVar14 << 4;
          bVar7 = false;
          do {
            uVar15 = 0;
            if ((int)uVar14 < *(int *)&(this->OnLatestPerChannelMeterResultsNative).field_0x10) {
              uVar15 = ~uVar14 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar3 = *(longlong *)&(this->OnLatestPerChannelMeterResultsNative).field_0x8;
            if (((*(int *)(lVar3 + 8 + lVar13) == 0) ||
                (plVar4 = *(longlong **)(lVar3 + lVar13), plVar4 == (longlong *)0x0)) ||
               (cVar10 = (**(code **)(*plVar4 + 0x68))(plVar4,this,iVar17), cVar10 == '\0')) {
              bVar7 = true;
            }
            lVar13 = lVar13 + -0x10;
            uVar14 = uVar14 - 1;
          } while (-1 < (int)uVar14);
        }
        puVar1 = &(this->OnLatestPerChannelMeterResultsNative).field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        if (bVar7) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &this->OnLatestPerChannelMeterResultsNative,false);
        }
        if (local_e0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_e0.Accessor,&local_e0);
        }
        this_01 = local_160;
        this_02 = local_178;
        if (local_198.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.AllocatorInstance.Data);
          this_01 = local_160;
          this_02 = local_178;
        }
      }
      iVar17 = iVar17 + 1;
    } while (iVar17 < iVar11);
  }
LAB_14d81fc5b:
  (**(code **)this_00->_padding_)(this_00,1);
  return;
}

// GetAnalyzerFactoryName @ 14d8217e0

FName __thiscall UMeterAnalyzer::GetAnalyzerFactoryName(UMeterAnalyzer *this)

{
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::FactoryName,L"MeterFactory");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RDX = ::FactoryName;
  return in_RDX;
}

// GetPrivateStaticClass @ 14d824060

UClass * __cdecl UMeterAnalyzer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeterAnalyzer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"MeterAnalyzer",
               &Z_Registration_Info_UClass_UMeterAnalyzer.InnerSingleton,
               StaticRegisterNativesUMeterAnalyzer,0x188,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeterAnalyzer>,InternalVTableHelperCtorCaller<UMeterAnalyzer>,
               local_res8,UAudioAnalyzer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeterAnalyzer.InnerSingleton;
}

// GetSettings @ 14d825880

TUniquePtr<Audio::IAnalyzerSettings,TDefaultDelete<Audio::IAnalyzerSettings>_> __thiscall
UMeterAnalyzer::GetSettings(UMeterAnalyzer *this,int param_1,int param_2)

{
  UMeterSettings *pUVar1;
  IAnalyzerSettings IVar2;
  IAnalyzerSettings IVar3;
  undefined8 *puVar4;
  undefined4 in_register_00000014;
  IAnalyzerSettings *pIVar5;
  IAnalyzerSettings local_18 [2];
  
  pIVar5 = (IAnalyzerSettings *)CONCAT44(in_register_00000014,param_1);
  *pIVar5 = (IAnalyzerSettings)0x0;
  pUVar1 = (this->Settings).field0_0x0.DebugPtr;
  if (pUVar1 != (UMeterSettings *)0x0) {
    IVar3 = (IAnalyzerSettings)::operator_new(0x20);
    if (IVar3 == (IAnalyzerSettings)0x0) {
      IVar3 = (IAnalyzerSettings)0x0;
    }
    else {
      *(undefined4 *)((longlong)IVar3 + 8) = 1;
      *(undefined4 *)((longlong)IVar3 + 0xc) = 300;
      *(undefined4 *)((longlong)IVar3 + 0x10) = 300;
      *(undefined4 *)((longlong)IVar3 + 0x14) = 100;
      *(undefined4 *)((longlong)IVar3 + 0x18) = 0x3f800000;
      *(undefined ***)IVar3 = &___7FMeterSettings_Audio__6B_;
      *(undefined4 *)((longlong)IVar3 + 0x1c) = 0x3c23d70a;
    }
    *(float *)((longlong)IVar3 + 0x1c) = pUVar1->AnalysisPeriod;
    if (pUVar1->PeakMode == MeanSquared) {
      *(undefined4 *)((longlong)IVar3 + 8) = 0;
    }
    else if (pUVar1->PeakMode == RootMeanSquared) {
      *(undefined4 *)((longlong)IVar3 + 8) = 1;
    }
    else {
      *(undefined4 *)((longlong)IVar3 + 8) = 2;
    }
    *(int *)((longlong)IVar3 + 0xc) = pUVar1->MeterAttackTime;
    *(int *)((longlong)IVar3 + 0x10) = pUVar1->MeterReleaseTime;
    *(int *)((longlong)IVar3 + 0x14) = pUVar1->PeakHoldTime;
    *(float *)((longlong)IVar3 + 0x18) = pUVar1->ClippingThreshold;
    if (pIVar5 == local_18) {
      if (IVar3 == (IAnalyzerSettings)0x0) {
        return (TUniquePtr<Audio::IAnalyzerSettings,TDefaultDelete<Audio::IAnalyzerSettings>_>)
               pIVar5;
      }
      puVar4 = *(undefined8 **)IVar3;
    }
    else {
      IVar2 = *pIVar5;
      *pIVar5 = IVar3;
      if (IVar2 == (IAnalyzerSettings)0x0) {
        return (TUniquePtr<Audio::IAnalyzerSettings,TDefaultDelete<Audio::IAnalyzerSettings>_>)
               pIVar5;
      }
      puVar4 = *(undefined8 **)IVar2;
      IVar3 = IVar2;
    }
    (*(code *)*puVar4)(IVar3,1);
  }
  return (TUniquePtr<Audio::IAnalyzerSettings,TDefaultDelete<Audio::IAnalyzerSettings>_>)pIVar5;
}

// StaticRegisterNativesUMeterAnalyzer @ 14d827380

void __cdecl UMeterAnalyzer::StaticRegisterNativesUMeterAnalyzer(void)

{
  return;
}

