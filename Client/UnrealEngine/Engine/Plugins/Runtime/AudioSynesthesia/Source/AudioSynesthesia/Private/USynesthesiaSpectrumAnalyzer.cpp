// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesia
// Functions: 13

// StaticClass @ 14d814840

UClass * __cdecl USynesthesiaSpectrumAnalyzer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USynesthesiaSpectrumAnalyzer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"SynesthesiaSpectrumAnalyzer",
               &Z_Registration_Info_UClass_USynesthesiaSpectrumAnalyzer.InnerSingleton,
               StaticRegisterNativesUSynesthesiaSpectrumAnalyzer,0x118,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USynesthesiaSpectrumAnalyzer>,
               InternalVTableHelperCtorCaller<USynesthesiaSpectrumAnalyzer>,local_res8,
               UAudioAnalyzer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USynesthesiaSpectrumAnalyzer.InnerSingleton;
}

// USynesthesiaSpectrumAnalyzer @ 14d81bda0

USynesthesiaSpectrumAnalyzer * __thiscall
USynesthesiaSpectrumAnalyzer::USynesthesiaSpectrumAnalyzer
          (USynesthesiaSpectrumAnalyzer *this,FVTableHelper *param_1)

{
  UAudioAnalyzer::UAudioAnalyzer((UAudioAnalyzer *)this,param_1);
  this->_padding_ = (longlong)&___7USynesthesiaSpectrumAnalyzer__6B_;
  (this->Settings).field0_0x0.DebugPtr = (USynesthesiaSpectrumAnalysisSettings *)0x0;
  *(undefined8 *)&this->OnSpectrumResults = 0;
  *(undefined8 *)&(this->OnSpectrumResults).field_0x8 = 0;
  *(undefined8 *)&(this->OnSpectrumResults).field_0x10 = 0;
  *(undefined8 *)&this->OnSpectrumResultsNative = 0;
  *(undefined8 *)&(this->OnSpectrumResultsNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnSpectrumResultsNative).field_0x10 = 0;
  *(undefined8 *)&this->OnLatestSpectrumResults = 0;
  *(undefined8 *)&(this->OnLatestSpectrumResults).field_0x8 = 0;
  *(undefined8 *)&(this->OnLatestSpectrumResults).field_0x10 = 0;
  *(undefined8 *)&this->OnLatestSpectrumResultsNative = 0;
  *(undefined8 *)&(this->OnLatestSpectrumResultsNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnLatestSpectrumResultsNative).field_0x10 = 0;
  *(undefined8 *)&(this->OnSpectrumResultsNative).field_0x18 = 2;
  *(undefined8 *)&(this->OnLatestSpectrumResultsNative).field_0x18 = 2;
  return this;
}

// USynesthesiaSpectrumAnalyzer @ 14d81be40

USynesthesiaSpectrumAnalyzer * __thiscall
USynesthesiaSpectrumAnalyzer::USynesthesiaSpectrumAnalyzer(USynesthesiaSpectrumAnalyzer *this)

{
  FName FVar1;
  FObjectInitializer *pFVar2;
  FName *pFVar3;
  UClass *pUVar4;
  USynesthesiaSpectrumAnalysisSettings *pUVar5;
  FName local_res8;
  
  pFVar2 = FObjectInitializer::Get();
  UAudioAnalyzer::UAudioAnalyzer((UAudioAnalyzer *)this,pFVar2);
  this->_padding_ = (longlong)&___7USynesthesiaSpectrumAnalyzer__6B_;
  *(undefined8 *)&(this->OnSpectrumResultsNative).field_0x18 = 2;
  (this->Settings).field0_0x0.DebugPtr = (USynesthesiaSpectrumAnalysisSettings *)0x0;
  *(undefined8 *)&this->OnSpectrumResults = 0;
  *(undefined8 *)&(this->OnSpectrumResults).field_0x8 = 0;
  *(undefined8 *)&(this->OnSpectrumResults).field_0x10 = 0;
  *(undefined8 *)&this->OnSpectrumResultsNative = 0;
  *(undefined8 *)&(this->OnSpectrumResultsNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnSpectrumResultsNative).field_0x10 = 0;
  *(undefined8 *)&this->OnLatestSpectrumResults = 0;
  *(undefined8 *)&(this->OnLatestSpectrumResults).field_0x8 = 0;
  *(undefined8 *)&(this->OnLatestSpectrumResults).field_0x10 = 0;
  *(undefined8 *)&this->OnLatestSpectrumResultsNative = 0;
  *(undefined8 *)&(this->OnLatestSpectrumResultsNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnLatestSpectrumResultsNative).field_0x10 = 0;
  *(undefined8 *)&(this->OnLatestSpectrumResultsNative).field_0x18 = 2;
  pFVar3 = ::FName::FName(&local_res8,L"DefaultSynesthesiaSpectrumSettings");
  FVar1 = *pFVar3;
  pUVar4 = USynesthesiaSpectrumAnalysisSettings::StaticClass();
  pUVar5 = (USynesthesiaSpectrumAnalysisSettings *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (USynesthesiaSpectrumAnalysisSettings *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->Settings).field0_0x0.DebugPtr = pUVar5;
  return this;
}

// ~USynesthesiaSpectrumAnalyzer @ 14d81c830

void __thiscall
USynesthesiaSpectrumAnalyzer::~USynesthesiaSpectrumAnalyzer(USynesthesiaSpectrumAnalyzer *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7USynesthesiaSpectrumAnalyzer__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnLatestSpectrumResultsNative).field_0x8,
             *(int *)&(this->OnLatestSpectrumResultsNative).field_0x10);
  pvVar1 = *(void **)&(this->OnLatestSpectrumResultsNative).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLatestSpectrumResultsNative);
  pvVar1 = *(void **)&(this->OnLatestSpectrumResults).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLatestSpectrumResults);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSpectrumResultsNative).field_0x8,
             *(int *)&(this->OnSpectrumResultsNative).field_0x10);
  pvVar1 = *(void **)&(this->OnSpectrumResultsNative).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSpectrumResultsNative);
  pvVar1 = *(void **)&(this->OnSpectrumResults).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSpectrumResults);
  UAudioAnalyzer::~UAudioAnalyzer((UAudioAnalyzer *)this);
  return;
}

// BroadcastResults @ 14d81fc80

void __thiscall USynesthesiaSpectrumAnalyzer::BroadcastResults(USynesthesiaSpectrumAnalyzer *this)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FSynesthesiaSpectrumResult *this_00;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  TArray<Audio::FSynesthesiaSpectrumEntry,TSizedDefaultAllocator<32>_> *pTVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  int local_res10;
  TArray<FSynesthesiaSpectrumResults,TSizedDefaultAllocator<32>_> local_f8;
  int local_e8 [2];
  ForAnyElementType local_e0;
  undefined8 local_d8;
  int local_d0 [2];
  undefined4 local_c8;
  TArray<float,TSizedDefaultAllocator<32>_> local_c0;
  FDestructionSentinel local_b0;
  FDestructionSentinel local_98;
  FReadAccessScope local_80;
  FReadAccessScope local_68;
  
  this_00 = (FSynesthesiaSpectrumResult *)this->_padding_;
  this->_padding_ = 0;
  if (this_00 == (FSynesthesiaSpectrumResult *)0x0) {
    return;
  }
  iVar12 = Audio::FSynesthesiaSpectrumResult::GetNumChannels(this_00);
  if (iVar12 < 1) goto LAB_14d82019e;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnSpectrumResults,
             &local_80);
  iVar3 = *(int *)&(this->OnSpectrumResults).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_80);
  if ((0 < iVar3) ||
     (bVar8 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &this->OnSpectrumResultsNative), bVar8)) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnLatestSpectrumResults,&local_68);
  iVar3 = *(int *)&(this->OnLatestSpectrumResults).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_68);
  if (iVar3 < 1) {
    bVar9 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &this->OnLatestSpectrumResultsNative);
    bVar10 = false;
    if (bVar9) goto LAB_14d81fd4c;
  }
  else {
LAB_14d81fd4c:
    bVar10 = true;
  }
  if ((bVar8) || (bVar10)) {
    local_res10 = 0;
    do {
      pTVar13 = Audio::FSynesthesiaSpectrumResult::GetChannelSpectrumArray(this_00,local_res10);
      if (0 < pTVar13->ArrayNum) {
        ConvertToBlueprintResults(&local_f8,(this->Settings).field0_0x0.DebugPtr,pTVar13);
        if ((local_f8.ArrayNum < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Results.Num() > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesia\\Private\\SynesthesiaSpectrumAnalysis.cpp"
                               ,0xa3,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_e0.Data = (FScriptContainerElement *)0x0;
        local_d8 = 0;
        local_e8[0] = local_res10;
        DestructItems<FSynesthesiaSpectrumResults,int>((FSynesthesiaSpectrumResults *)0x0,0);
        iVar3 = local_f8.ArrayNum;
        FVar7.Data = local_f8.AllocatorInstance.Data;
        local_d8 = CONCAT44(local_d8._4_4_,local_f8.ArrayNum);
        if ((local_f8.ArrayNum == 0) && (local_d8._4_4_ == 0)) {
          local_d8 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,local_f8.ArrayNum,local_d8._4_4_,&local_e0,local_f8.ArrayNum,
                     (int *)((longlong)&local_d8 + 4));
          ConstructItems<FSynesthesiaSpectrumResults,FSynesthesiaSpectrumResults,int>
                    (local_e0.Data,(FSynesthesiaSpectrumResults *)FVar7.Data,iVar3);
        }
        TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnSpectrumResults,
                   local_e8);
        DestructItems<FSynesthesiaSpectrumResults,int>
                  ((FSynesthesiaSpectrumResults *)local_e0.Data,(int)local_d8);
        if ((FSynesthesiaSpectrumResults *)local_e0.Data != (FSynesthesiaSpectrumResults *)0x0) {
          FMemory::Free(local_e0.Data);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->OnSpectrumResultsNative,(FWriteAccessScope *)&local_b0);
        puVar1 = &(this->OnSpectrumResultsNative).field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + 1;
        bVar8 = false;
        uVar15 = *(int *)&(this->OnSpectrumResultsNative).field_0x10 - 1;
        if (-1 < (int)uVar15) {
          lVar14 = (longlong)(int)uVar15 << 4;
          bVar8 = false;
          do {
            uVar16 = 0;
            if ((int)uVar15 < *(int *)&(this->OnSpectrumResultsNative).field_0x10) {
              uVar16 = ~uVar15 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar4 = *(longlong *)&(this->OnSpectrumResultsNative).field_0x8;
            if (((*(int *)(lVar14 + 8 + lVar4) == 0) ||
                (plVar5 = *(longlong **)(lVar14 + lVar4), plVar5 == (longlong *)0x0)) ||
               (cVar11 = (**(code **)(*plVar5 + 0x68))(plVar5,this,local_res10,&local_f8),
               cVar11 == '\0')) {
              bVar8 = true;
            }
            lVar14 = lVar14 + -0x10;
            uVar15 = uVar15 - 1;
          } while (-1 < (int)uVar15);
        }
        puVar1 = &(this->OnSpectrumResultsNative).field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        if (bVar8) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &this->OnSpectrumResultsNative,false);
        }
        if (local_b0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
        }
        uVar16 = local_f8.ArrayNum - 1;
        uVar15 = 0;
        if ((int)uVar16 < local_f8.ArrayNum) {
          uVar15 = ~uVar16 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c0.ArrayNum = 0;
        local_c0.ArrayMax = 0;
        lVar14 = (longlong)(int)uVar16 * 3 + 1;
        local_c8 = *(undefined4 *)(local_f8.AllocatorInstance.Data + lVar14 * 8 + -8);
        local_d0[0] = local_res10;
        TArray<float,TSizedDefaultAllocator<32>_>::operator=
                  (&local_c0,
                   (TArray<float,TSizedDefaultAllocator<32>_> *)
                   (local_f8.AllocatorInstance.Data + lVar14 * 8));
        TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                   &this->OnLatestSpectrumResults,local_d0);
        if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.AllocatorInstance.Data);
        }
        uVar16 = local_f8.ArrayNum - 1;
        uVar15 = 0;
        if ((int)uVar16 < local_f8.ArrayNum) {
          uVar15 = ~uVar16 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar2 = local_f8.AllocatorInstance.Data + (longlong)(int)uVar16 * 0x18;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->OnLatestSpectrumResultsNative,(FWriteAccessScope *)&local_98);
        puVar1 = &(this->OnLatestSpectrumResultsNative).field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + 1;
        bVar8 = false;
        uVar15 = *(int *)&(this->OnLatestSpectrumResultsNative).field_0x10 - 1;
        if (-1 < (int)uVar15) {
          lVar14 = (longlong)(int)uVar15 << 4;
          do {
            uVar16 = 0;
            if ((int)uVar15 < *(int *)&(this->OnLatestSpectrumResultsNative).field_0x10) {
              uVar16 = ~uVar15 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar4 = *(longlong *)&(this->OnLatestSpectrumResultsNative).field_0x8;
            if (((*(int *)(lVar4 + 8 + lVar14) == 0) ||
                (plVar5 = *(longlong **)(lVar4 + lVar14), plVar5 == (longlong *)0x0)) ||
               (cVar11 = (**(code **)(*plVar5 + 0x68))(plVar5,this,local_res10,pFVar2),
               cVar11 == '\0')) {
              bVar8 = true;
            }
            lVar14 = lVar14 + -0x10;
            uVar15 = uVar15 - 1;
          } while (-1 < (int)uVar15);
        }
        puVar1 = &(this->OnLatestSpectrumResultsNative).field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        if (bVar8) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &this->OnLatestSpectrumResultsNative,false);
        }
        if (local_98.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
        }
        DestructItems<FSynesthesiaSpectrumResults,int>
                  ((FSynesthesiaSpectrumResults *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum)
        ;
        if ((FSynesthesiaSpectrumResults *)local_f8.AllocatorInstance.Data !=
            (FSynesthesiaSpectrumResults *)0x0) {
          FMemory::Free(local_f8.AllocatorInstance.Data);
        }
      }
      local_res10 = local_res10 + 1;
    } while (local_res10 < iVar12);
  }
LAB_14d82019e:
  (**(code **)this_00->_padding_)(this_00,1);
  return;
}

// GetAnalyzerFactoryName @ 14d821860

FName __thiscall
USynesthesiaSpectrumAnalyzer::GetAnalyzerFactoryName(USynesthesiaSpectrumAnalyzer *this)

{
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::FactoryName,L"SpectrumAnalysisFactory");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RDX = ::FactoryName;
  return in_RDX;
}

// GetCenterFrequencies @ 14d821df0

void __thiscall
USynesthesiaSpectrumAnalyzer::GetCenterFrequencies
          (USynesthesiaSpectrumAnalyzer *this,float param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar3 = GetNumCenterFrequencies(this);
  lVar7 = (longlong)iVar3;
  if (iVar3 == param_2->ArrayNum) {
    iVar3 = ::`anonymous_namespace'::BPFFTSizeEnumToInt
                      (((this->Settings).field0_0x0.DebugPtr)->FFTSize);
    if (0 < (int)lVar7) {
      lVar6 = 0;
      uVar5 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar5 < param_2->ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        *(float *)((param_2->AllocatorInstance).Data + lVar6 * 4) =
             (float)(int)uVar5 * (param_1 / (float)iVar3);
        lVar6 = lVar6 + 1;
        uVar5 = uVar5 + 1;
      } while (lVar6 < lVar7);
    }
  }
  return;
}

// GetNumCenterFrequencies @ 14d8234b0

int __thiscall
USynesthesiaSpectrumAnalyzer::GetNumCenterFrequencies(USynesthesiaSpectrumAnalyzer *this)

{
  switch(((this->Settings).field0_0x0.DebugPtr)->FFTSize) {
  default:
    return 0x101;
  case Min:
    return 0x21;
  case Small:
    return 0x81;
  case Large:
    return 0x201;
  case VeryLarge:
    return 0x401;
  case Max:
    return 0x801;
  }
}

// GetPrivateStaticClass @ 14d824420

UClass * __cdecl USynesthesiaSpectrumAnalyzer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USynesthesiaSpectrumAnalyzer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"SynesthesiaSpectrumAnalyzer",
               &Z_Registration_Info_UClass_USynesthesiaSpectrumAnalyzer.InnerSingleton,
               StaticRegisterNativesUSynesthesiaSpectrumAnalyzer,0x118,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<USynesthesiaSpectrumAnalyzer>,
               InternalVTableHelperCtorCaller<USynesthesiaSpectrumAnalyzer>,local_res8,
               UAudioAnalyzer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USynesthesiaSpectrumAnalyzer.InnerSingleton;
}

// GetSettings @ 14d826130

TUniquePtr<Audio::IAnalyzerSettings,TDefaultDelete<Audio::IAnalyzerSettings>_> __thiscall
USynesthesiaSpectrumAnalyzer::GetSettings
          (USynesthesiaSpectrumAnalyzer *this,int param_1,int param_2)

{
  EAudioSpectrumType EVar1;
  EFFTWindowType EVar2;
  USynesthesiaSpectrumAnalysisSettings *pUVar3;
  IAnalyzerSettings IVar4;
  undefined1 uVar5;
  IAnalyzerSettings IVar6;
  undefined8 *puVar7;
  undefined4 in_register_00000014;
  IAnalyzerSettings *pIVar8;
  undefined4 uVar9;
  IAnalyzerSettings local_18 [2];
  
  pIVar8 = (IAnalyzerSettings *)CONCAT44(in_register_00000014,param_1);
  *pIVar8 = (IAnalyzerSettings)0x0;
  pUVar3 = (this->Settings).field0_0x0.DebugPtr;
  if (pUVar3 == (USynesthesiaSpectrumAnalysisSettings *)0x0) {
    return (TUniquePtr<Audio::IAnalyzerSettings,TDefaultDelete<Audio::IAnalyzerSettings>_>)pIVar8;
  }
  IVar6 = (IAnalyzerSettings)::operator_new(0x18);
  uVar9 = 0x200;
  if (IVar6 == (IAnalyzerSettings)0x0) {
    IVar6 = (IAnalyzerSettings)0x0;
  }
  else {
    *(undefined4 *)((longlong)IVar6 + 0xc) = 0x10001;
    *(undefined4 *)((longlong)IVar6 + 0x14) = 0;
    *(undefined4 *)((longlong)IVar6 + 8) = 0x200;
    *(undefined ***)IVar6 = &___7FSynesthesiaSpectrumAnalysisSettings_Audio__6B_;
    *(undefined4 *)((longlong)IVar6 + 0x10) = 0x3c23d70a;
  }
  *(float *)((longlong)IVar6 + 0x10) = pUVar3->AnalysisPeriod;
  switch(pUVar3->FFTSize) {
  case Min:
    uVar9 = 0x40;
    break;
  case Small:
    uVar9 = 0x100;
    break;
  case Large:
    uVar9 = 0x400;
    break;
  case VeryLarge:
    uVar9 = 0x800;
    break;
  case Max:
    uVar9 = 0x1000;
  }
  *(undefined4 *)((longlong)IVar6 + 8) = uVar9;
  EVar1 = pUVar3->SpectrumType;
  if (EVar1 == MagnitudeSpectrum) {
    uVar5 = 0;
  }
  else if ((EVar1 == PowerSpectrum) || (EVar1 != Decibel)) {
    uVar5 = 1;
  }
  else {
    uVar5 = 2;
  }
  *(undefined1 *)((longlong)IVar6 + 0xc) = uVar5;
  EVar2 = pUVar3->WindowType;
  if (EVar2 != None) {
    if (EVar2 == Hamming) {
      uVar5 = 1;
      goto LAB_14d826227;
    }
    if (EVar2 == Hann) {
      uVar5 = 2;
      goto LAB_14d826227;
    }
    if (EVar2 == Blackman) {
      uVar5 = 3;
      goto LAB_14d826227;
    }
  }
  uVar5 = 0;
LAB_14d826227:
  *(undefined1 *)((longlong)IVar6 + 0xd) = uVar5;
  *(bool *)((longlong)IVar6 + 0xe) = pUVar3->bDownmixToMono;
  if (pIVar8 == local_18) {
    if (IVar6 == (IAnalyzerSettings)0x0) {
      return (TUniquePtr<Audio::IAnalyzerSettings,TDefaultDelete<Audio::IAnalyzerSettings>_>)pIVar8;
    }
    puVar7 = *(undefined8 **)IVar6;
  }
  else {
    IVar4 = *pIVar8;
    *pIVar8 = IVar6;
    if (IVar4 == (IAnalyzerSettings)0x0) {
      return (TUniquePtr<Audio::IAnalyzerSettings,TDefaultDelete<Audio::IAnalyzerSettings>_>)pIVar8;
    }
    puVar7 = *(undefined8 **)IVar4;
    IVar6 = IVar4;
  }
  (*(code *)*puVar7)(IVar6,1);
  return (TUniquePtr<Audio::IAnalyzerSettings,TDefaultDelete<Audio::IAnalyzerSettings>_>)pIVar8;
}

// StaticRegisterNativesUSynesthesiaSpectrumAnalyzer @ 14d827400

void __cdecl USynesthesiaSpectrumAnalyzer::StaticRegisterNativesUSynesthesiaSpectrumAnalyzer(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_USynesthesiaSpectrumAnalyzer_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetCenterFrequencies @ 14d8280e0

void __cdecl
USynesthesiaSpectrumAnalyzer::execGetCenterFrequencies
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  void **ppvVar8;
  ulonglong uVar9;
  longlong lVar10;
  float fVar11;
  float local_res10 [2];
  void *local_38;
  undefined8 local_30;
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  uVar7 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  ppvVar8 = &local_38;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar8 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar4 = GetNumCenterFrequencies((USynesthesiaSpectrumAnalyzer *)param_1);
  lVar10 = (longlong)iVar4;
  if (iVar4 == *(int *)(ppvVar8 + 1)) {
    iVar4 = ::`anonymous_namespace'::BPFFTSizeEnumToInt
                      (*(EFFTSize *)(*(longlong *)(param_1 + 4) + 0x2c));
    fVar11 = local_res10[0] / (float)iVar4;
    uVar9 = uVar7;
    if (0 < (int)lVar10) {
      do {
        uVar6 = (uint)uVar7;
        uVar5 = 0;
        if ((int)uVar6 < *(int *)(ppvVar8 + 1)) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar7 = (ulonglong)(uVar6 + 1);
        *(float *)((longlong)*ppvVar8 + uVar9 * 4) = (float)(int)uVar6 * fVar11;
        uVar9 = uVar9 + 1;
      } while ((longlong)uVar9 < lVar10);
    }
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execGetNumCenterFrequencies @ 14d829710

void __cdecl
USynesthesiaSpectrumAnalyzer::execGetNumCenterFrequencies
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = GetNumCenterFrequencies((USynesthesiaSpectrumAnalyzer *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

