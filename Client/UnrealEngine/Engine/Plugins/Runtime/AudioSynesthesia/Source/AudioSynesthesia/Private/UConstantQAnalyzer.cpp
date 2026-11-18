// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesia
// Functions: 13

// StaticClass @ 14d813140

UClass * __cdecl UConstantQAnalyzer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UConstantQAnalyzer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"ConstantQAnalyzer",
               &Z_Registration_Info_UClass_UConstantQAnalyzer.InnerSingleton,
               StaticRegisterNativesUConstantQAnalyzer,0x118,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UConstantQAnalyzer>,
               InternalVTableHelperCtorCaller<UConstantQAnalyzer>,local_res8,
               UAudioAnalyzer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UConstantQAnalyzer.InnerSingleton;
}

// UConstantQAnalyzer @ 14d81ae50

UConstantQAnalyzer * __thiscall
UConstantQAnalyzer::UConstantQAnalyzer(UConstantQAnalyzer *this,FVTableHelper *param_1)

{
  UAudioAnalyzer::UAudioAnalyzer((UAudioAnalyzer *)this,param_1);
  this->_padding_ = (longlong)&___7UConstantQAnalyzer__6B_;
  (this->Settings).field0_0x0.DebugPtr = (UConstantQSettings *)0x0;
  *(undefined8 *)&this->OnConstantQResults = 0;
  *(undefined8 *)&(this->OnConstantQResults).field_0x8 = 0;
  *(undefined8 *)&(this->OnConstantQResults).field_0x10 = 0;
  *(undefined8 *)&this->OnConstantQResultsNative = 0;
  *(undefined8 *)&(this->OnConstantQResultsNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnConstantQResultsNative).field_0x10 = 0;
  *(undefined8 *)&this->OnLatestConstantQResults = 0;
  *(undefined8 *)&(this->OnLatestConstantQResults).field_0x8 = 0;
  *(undefined8 *)&(this->OnLatestConstantQResults).field_0x10 = 0;
  *(undefined8 *)&this->OnLatestConstantQResultsNative = 0;
  *(undefined8 *)&(this->OnLatestConstantQResultsNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnLatestConstantQResultsNative).field_0x10 = 0;
  *(undefined8 *)&(this->OnConstantQResultsNative).field_0x18 = 2;
  *(undefined8 *)&(this->OnLatestConstantQResultsNative).field_0x18 = 2;
  return this;
}

// UConstantQAnalyzer @ 14d81aef0

UConstantQAnalyzer * __thiscall UConstantQAnalyzer::UConstantQAnalyzer(UConstantQAnalyzer *this)

{
  FName FVar1;
  FObjectInitializer *pFVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UConstantQSettings *pUVar5;
  FName local_res8;
  
  pFVar2 = FObjectInitializer::Get();
  UAudioAnalyzer::UAudioAnalyzer((UAudioAnalyzer *)this,pFVar2);
  this->_padding_ = (longlong)&___7UConstantQAnalyzer__6B_;
  *(undefined8 *)&(this->OnConstantQResultsNative).field_0x18 = 2;
  (this->Settings).field0_0x0.DebugPtr = (UConstantQSettings *)0x0;
  *(undefined8 *)&this->OnConstantQResults = 0;
  *(undefined8 *)&(this->OnConstantQResults).field_0x8 = 0;
  *(undefined8 *)&(this->OnConstantQResults).field_0x10 = 0;
  *(undefined8 *)&this->OnConstantQResultsNative = 0;
  *(undefined8 *)&(this->OnConstantQResultsNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnConstantQResultsNative).field_0x10 = 0;
  *(undefined8 *)&this->OnLatestConstantQResults = 0;
  *(undefined8 *)&(this->OnLatestConstantQResults).field_0x8 = 0;
  *(undefined8 *)&(this->OnLatestConstantQResults).field_0x10 = 0;
  *(undefined8 *)&this->OnLatestConstantQResultsNative = 0;
  *(undefined8 *)&(this->OnLatestConstantQResultsNative).field_0x8 = 0;
  *(undefined8 *)&(this->OnLatestConstantQResultsNative).field_0x10 = 0;
  *(undefined8 *)&(this->OnLatestConstantQResultsNative).field_0x18 = 2;
  pFVar3 = ::FName::FName(&local_res8,L"DefaultConstantQSettings");
  FVar1 = *pFVar3;
  pUVar4 = UConstantQSettings::StaticClass();
  pUVar5 = (UConstantQSettings *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UConstantQSettings *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->Settings).field0_0x0.DebugPtr = pUVar5;
  return this;
}

// ~UConstantQAnalyzer @ 14d81c250

void __thiscall UConstantQAnalyzer::~UConstantQAnalyzer(UConstantQAnalyzer *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UConstantQAnalyzer__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnLatestConstantQResultsNative).field_0x8,
             *(int *)&(this->OnLatestConstantQResultsNative).field_0x10);
  pvVar1 = *(void **)&(this->OnLatestConstantQResultsNative).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLatestConstantQResultsNative);
  pvVar1 = *(void **)&(this->OnLatestConstantQResults).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLatestConstantQResults);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnConstantQResultsNative).field_0x8,
             *(int *)&(this->OnConstantQResultsNative).field_0x10);
  pvVar1 = *(void **)&(this->OnConstantQResultsNative).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnConstantQResultsNative);
  pvVar1 = *(void **)&(this->OnConstantQResults).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnConstantQResults);
  UAudioAnalyzer::~UAudioAnalyzer((UAudioAnalyzer *)this);
  return;
}

// BroadcastResults @ 14d81e1a0

void __thiscall UConstantQAnalyzer::BroadcastResults(UConstantQAnalyzer *this)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FConstantQResult *this_00;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_> *pTVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  int local_res10;
  TArray<FConstantQResults,TSizedDefaultAllocator<32>_> local_f8;
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
  
  this_00 = (FConstantQResult *)this->_padding_;
  this->_padding_ = 0;
  if (this_00 == (FConstantQResult *)0x0) {
    return;
  }
  iVar12 = Audio::FConstantQResult::GetNumChannels(this_00);
  if (iVar12 < 1) goto LAB_14d81e6d5;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnConstantQResults,
             &local_80);
  iVar3 = *(int *)&(this->OnConstantQResults).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_80);
  if ((0 < iVar3) ||
     (bVar8 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &this->OnConstantQResultsNative), bVar8)) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnLatestConstantQResults,&local_68);
  iVar3 = *(int *)&(this->OnLatestConstantQResults).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_68);
  if (iVar3 < 1) {
    bVar9 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &this->OnLatestConstantQResultsNative);
    bVar10 = false;
    if (bVar9) goto LAB_14d81e26c;
  }
  else {
LAB_14d81e26c:
    bVar10 = true;
  }
  if ((bVar8) || (bVar10)) {
    local_res10 = 0;
    do {
      pTVar13 = Audio::FConstantQResult::GetFramesForChannel(this_00,local_res10);
      if (0 < pTVar13->ArrayNum) {
        ConvertToBlueprintResults(&local_f8,(this->Settings).field0_0x0.DebugPtr,pTVar13);
        if ((local_f8.ArrayNum < 1) &&
           (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_1198951055665135428>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesia\\Private\\ConstantQ.cpp"
                               ,0xbc,"Results.Num() > 0"), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_e0.Data = (FScriptContainerElement *)0x0;
        local_d8 = 0;
        local_e8[0] = local_res10;
        DestructItems<FConstantQResults,int>((FConstantQResults *)0x0,0);
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
          ConstructItems<FConstantQResults,FConstantQResults,int>
                    (local_e0.Data,(FConstantQResults *)FVar7.Data,iVar3);
        }
        TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnConstantQResults
                   ,local_e8);
        DestructItems<FConstantQResults,int>((FConstantQResults *)local_e0.Data,(int)local_d8);
        if ((FConstantQResults *)local_e0.Data != (FConstantQResults *)0x0) {
          FMemory::Free(local_e0.Data);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->OnConstantQResultsNative,(FWriteAccessScope *)&local_b0);
        puVar1 = &(this->OnConstantQResultsNative).field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + 1;
        bVar8 = false;
        uVar15 = *(int *)&(this->OnConstantQResultsNative).field_0x10 - 1;
        if (-1 < (int)uVar15) {
          lVar14 = (longlong)(int)uVar15 << 4;
          bVar8 = false;
          do {
            uVar16 = 0;
            if ((int)uVar15 < *(int *)&(this->OnConstantQResultsNative).field_0x10) {
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
            lVar4 = *(longlong *)&(this->OnConstantQResultsNative).field_0x8;
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
        puVar1 = &(this->OnConstantQResultsNative).field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        if (bVar8) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &this->OnConstantQResultsNative,false);
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
                   &this->OnLatestConstantQResults,local_d0);
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
                   &this->OnLatestConstantQResultsNative,(FWriteAccessScope *)&local_98);
        puVar1 = &(this->OnLatestConstantQResultsNative).field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + 1;
        bVar8 = false;
        uVar15 = *(int *)&(this->OnLatestConstantQResultsNative).field_0x10 - 1;
        if (-1 < (int)uVar15) {
          lVar14 = (longlong)(int)uVar15 << 4;
          do {
            uVar16 = 0;
            if ((int)uVar15 < *(int *)&(this->OnLatestConstantQResultsNative).field_0x10) {
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
            lVar4 = *(longlong *)&(this->OnLatestConstantQResultsNative).field_0x8;
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
        puVar1 = &(this->OnLatestConstantQResultsNative).field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        if (bVar8) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &this->OnLatestConstantQResultsNative,false);
        }
        if (local_98.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
        }
        DestructItems<FConstantQResults,int>
                  ((FConstantQResults *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
        if ((FConstantQResults *)local_f8.AllocatorInstance.Data != (FConstantQResults *)0x0) {
          FMemory::Free(local_f8.AllocatorInstance.Data);
        }
      }
      local_res10 = local_res10 + 1;
    } while (local_res10 < iVar12);
  }
LAB_14d81e6d5:
  (**(code **)this_00->_padding_)(this_00,1);
  return;
}

// GetAnalyzerFactoryName @ 14d821660

FName __thiscall UConstantQAnalyzer::GetAnalyzerFactoryName(UConstantQAnalyzer *this)

{
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::FactoryName,L"ConstantQFactory");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RDX = ::FactoryName;
  return in_RDX;
}

// GetCenterFrequencies @ 14d821d00

void __thiscall
UConstantQAnalyzer::GetCenterFrequencies
          (UConstantQAnalyzer *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  UConstantQSettings *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  
  pUVar2 = (this->Settings).field0_0x0.DebugPtr;
  iVar1 = pUVar2->NumBands;
  if (iVar1 == param_1->ArrayNum) {
    fVar8 = powf(__real_40000000,__real_3f800000 / pUVar2->NumBandsPerOctave);
    fVar9 = pUVar2->StartingFrequencyHz;
    uVar7 = 0;
    if (0 < (longlong)iVar1) {
      lVar6 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar7 < param_1->ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar7 = uVar7 + 1;
        *(float *)((param_1->AllocatorInstance).Data + lVar6 * 4) = fVar9;
        lVar6 = lVar6 + 1;
        fVar9 = fVar9 * fVar8;
      } while (lVar6 < iVar1);
    }
  }
  return;
}

// GetNumCenterFrequencies @ 14d823490

int __thiscall UConstantQAnalyzer::GetNumCenterFrequencies(UConstantQAnalyzer *this)

{
  return ((this->Settings).field0_0x0.DebugPtr)->NumBands;
}

// GetPrivateStaticClass @ 14d823760

UClass * __cdecl UConstantQAnalyzer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UConstantQAnalyzer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"ConstantQAnalyzer",
               &Z_Registration_Info_UClass_UConstantQAnalyzer.InnerSingleton,
               StaticRegisterNativesUConstantQAnalyzer,0x118,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UConstantQAnalyzer>,
               InternalVTableHelperCtorCaller<UConstantQAnalyzer>,local_res8,
               UAudioAnalyzer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UConstantQAnalyzer.InnerSingleton;
}

// GetSettings @ 14d8244e0

TUniquePtr<Audio::IAnalyzerSettings,TDefaultDelete<Audio::IAnalyzerSettings>_> __thiscall
UConstantQAnalyzer::GetSettings(UConstantQAnalyzer *this,int param_1,int param_2)

{
  UConstantQSettings *this_00;
  IAnalyzerSettings IVar1;
  TUniquePtr<Audio::IAnalyzerSettings,TDefaultDelete<Audio::IAnalyzerSettings>_> TVar2;
  undefined4 in_register_00000014;
  IAnalyzerSettings *pIVar3;
  float in_XMM1_Da;
  undefined8 *local_res8;
  
  pIVar3 = (IAnalyzerSettings *)CONCAT44(in_register_00000014,param_1);
  *pIVar3 = (IAnalyzerSettings)0x0;
  this_00 = (this->Settings).field0_0x0.DebugPtr;
  if (this_00 != (UConstantQSettings *)0x0) {
    TVar2 = UConstantQSettings::GetSettings(this_00,in_XMM1_Da,param_2);
    if (pIVar3 != TVar2.Ptr) {
      IVar1 = *pIVar3;
      *pIVar3 = *TVar2.Ptr;
      *TVar2.Ptr = (IAnalyzerSettings)0x0;
      if (IVar1 != (IAnalyzerSettings)0x0) {
        (*(code *)**(undefined8 **)IVar1)(IVar1,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
  }
  return (TUniquePtr<Audio::IAnalyzerSettings,TDefaultDelete<Audio::IAnalyzerSettings>_>)pIVar3;
}

// StaticRegisterNativesUConstantQAnalyzer @ 14d827200

void __cdecl UConstantQAnalyzer::StaticRegisterNativesUConstantQAnalyzer(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UConstantQAnalyzer_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetCenterFrequencies @ 14d827f50

void __cdecl
UConstantQAnalyzer::execGetCenterFrequencies(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  ulonglong uVar7;
  void **ppvVar8;
  uint uVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  void *local_38;
  undefined8 local_30;
  
  uVar7 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  ppvVar8 = &local_38;
  if ((void **)param_2->MostRecentPropertyAddress != (void **)0x0) {
    ppvVar8 = (void **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar3 = *(longlong *)(param_1 + 4);
  iVar1 = *(int *)(lVar3 + 0x2c);
  if (iVar1 == *(int *)(ppvVar8 + 1)) {
    fVar11 = powf(__real_40000000,__real_3f800000 / *(float *)(lVar3 + 0x30));
    fVar12 = *(float *)(lVar3 + 0x28);
    uVar10 = uVar7;
    if (0 < (longlong)iVar1) {
      do {
        uVar9 = (uint)uVar10;
        uVar6 = 0;
        if ((int)uVar9 < *(int *)(ppvVar8 + 1)) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(float *)((longlong)*ppvVar8 + uVar7 * 4) = fVar12;
        uVar7 = uVar7 + 1;
        fVar12 = fVar12 * fVar11;
        uVar10 = (ulonglong)(uVar9 + 1);
      } while ((longlong)uVar7 < (longlong)iVar1);
    }
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// execGetNumCenterFrequencies @ 14d8296e0

void __cdecl
UConstantQAnalyzer::execGetNumCenterFrequencies(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)(*(longlong *)(param_1 + 4) + 0x2c);
  return;
}

