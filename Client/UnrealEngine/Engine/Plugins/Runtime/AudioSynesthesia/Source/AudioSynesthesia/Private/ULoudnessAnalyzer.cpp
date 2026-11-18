// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesia
// Functions: 9

// StaticClass @ 14d814140

UClass * __cdecl ULoudnessAnalyzer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULoudnessAnalyzer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"LoudnessAnalyzer",
               &Z_Registration_Info_UClass_ULoudnessAnalyzer.InnerSingleton,
               StaticRegisterNativesULoudnessAnalyzer,0x108,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULoudnessAnalyzer>,
               InternalVTableHelperCtorCaller<ULoudnessAnalyzer>,local_res8,
               UAudioAnalyzer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULoudnessAnalyzer.InnerSingleton;
}

// ULoudnessAnalyzer @ 14d81b600

ULoudnessAnalyzer * __thiscall
ULoudnessAnalyzer::ULoudnessAnalyzer(ULoudnessAnalyzer *this,FVTableHelper *param_1)

{
  UAudioAnalyzer::UAudioAnalyzer((UAudioAnalyzer *)this,param_1);
  this->_padding_ = (longlong)&___7ULoudnessAnalyzer__6B_;
  (this->Settings).field0_0x0.DebugPtr = (ULoudnessSettings *)0x0;
  *(undefined8 *)&this->OnOverallLoudnessResults = 0;
  *(undefined8 *)&(this->OnOverallLoudnessResults).field_0x8 = 0;
  *(undefined8 *)&(this->OnOverallLoudnessResults).field_0x10 = 0;
  *(undefined8 *)&this->OnPerChannelLoudnessResults = 0;
  *(undefined8 *)&(this->OnPerChannelLoudnessResults).field_0x8 = 0;
  *(undefined8 *)&(this->OnPerChannelLoudnessResults).field_0x10 = 0;
  *(undefined8 *)&this->OnLatestOverallLoudnessResults = 0;
  *(undefined8 *)&(this->OnLatestOverallLoudnessResults).field_0x8 = 0;
  *(undefined8 *)&(this->OnLatestOverallLoudnessResults).field_0x10 = 0;
  *(undefined8 *)&this->OnLatestPerChannelLoudnessResults = 0;
  *(undefined8 *)&(this->OnLatestPerChannelLoudnessResults).field_0x8 = 0;
  *(undefined8 *)&(this->OnLatestPerChannelLoudnessResults).field_0x10 = 0;
  return this;
}

// ULoudnessAnalyzer @ 14d81b690

ULoudnessAnalyzer * __thiscall ULoudnessAnalyzer::ULoudnessAnalyzer(ULoudnessAnalyzer *this)

{
  FName FVar1;
  FObjectInitializer *pFVar2;
  FName *pFVar3;
  UClass *pUVar4;
  ULoudnessSettings *pUVar5;
  FName local_res8;
  
  pFVar2 = FObjectInitializer::Get();
  UAudioAnalyzer::UAudioAnalyzer((UAudioAnalyzer *)this,pFVar2);
  this->_padding_ = (longlong)&___7ULoudnessAnalyzer__6B_;
  (this->Settings).field0_0x0.DebugPtr = (ULoudnessSettings *)0x0;
  *(undefined8 *)&this->OnOverallLoudnessResults = 0;
  *(undefined8 *)&(this->OnOverallLoudnessResults).field_0x8 = 0;
  *(undefined8 *)&(this->OnOverallLoudnessResults).field_0x10 = 0;
  *(undefined8 *)&this->OnPerChannelLoudnessResults = 0;
  *(undefined8 *)&(this->OnPerChannelLoudnessResults).field_0x8 = 0;
  *(undefined8 *)&(this->OnPerChannelLoudnessResults).field_0x10 = 0;
  *(undefined8 *)&this->OnLatestOverallLoudnessResults = 0;
  *(undefined8 *)&(this->OnLatestOverallLoudnessResults).field_0x8 = 0;
  *(undefined8 *)&(this->OnLatestOverallLoudnessResults).field_0x10 = 0;
  *(undefined8 *)&this->OnLatestPerChannelLoudnessResults = 0;
  *(undefined8 *)&(this->OnLatestPerChannelLoudnessResults).field_0x8 = 0;
  *(undefined8 *)&(this->OnLatestPerChannelLoudnessResults).field_0x10 = 0;
  pFVar3 = ::FName::FName(&local_res8,L"DefaultLoudnessSettings");
  FVar1 = *pFVar3;
  pUVar4 = ULoudnessSettings::StaticClass();
  pUVar5 = (ULoudnessSettings *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (ULoudnessSettings *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->Settings).field0_0x0.DebugPtr = pUVar5;
  return this;
}

// ~ULoudnessAnalyzer @ 14d81c540

void __thiscall ULoudnessAnalyzer::~ULoudnessAnalyzer(ULoudnessAnalyzer *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7ULoudnessAnalyzer__6B_;
  pvVar1 = *(void **)&(this->OnLatestPerChannelLoudnessResults).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLatestPerChannelLoudnessResults);
  pvVar1 = *(void **)&(this->OnLatestOverallLoudnessResults).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLatestOverallLoudnessResults);
  pvVar1 = *(void **)&(this->OnPerChannelLoudnessResults).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPerChannelLoudnessResults);
  pvVar1 = *(void **)&(this->OnOverallLoudnessResults).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnOverallLoudnessResults);
  UAudioAnalyzer::~UAudioAnalyzer((UAudioAnalyzer *)this);
  return;
}

// BroadcastResults @ 14d81ef60

void __thiscall ULoudnessAnalyzer::BroadcastResults(ULoudnessAnalyzer *this)

{
  int iVar1;
  int iVar2;
  FLoudnessResult *this_00;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  int iVar5;
  uint uVar6;
  TArray<Audio::FLoudnessEntry,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ForAnyElementType local_118;
  int local_10c;
  int local_108 [2];
  ForAnyElementType local_100;
  int local_f8;
  int local_f4;
  TArray<FLoudnessResults,TSizedDefaultAllocator<32>_> local_f0;
  TArray<FLoudnessResults,TSizedDefaultAllocator<32>_> local_e0;
  int local_d0;
  undefined8 local_cc;
  undefined8 uStack_c4;
  undefined8 local_b8;
  undefined8 uStack_b0;
  FReadAccessScope local_a8;
  FReadAccessScope local_90;
  FReadAccessScope local_78;
  FReadAccessScope local_60;
  
  this_00 = (FLoudnessResult *)this->_padding_;
  this->_padding_ = 0;
  iVar5 = Audio::FLoudnessResult::GetNumChannels(this_00);
  if (0 < iVar5) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnOverallLoudnessResults,&local_a8);
    iVar1 = *(int *)&(this->OnOverallLoudnessResults).field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnLatestOverallLoudnessResults,&local_90);
    iVar2 = *(int *)&(this->OnLatestOverallLoudnessResults).field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_90);
    if (((0 < iVar1) || (0 < iVar2)) &&
       (pTVar7 = Audio::FLoudnessResult::GetLoudnessArray(this_00), 0 < pTVar7->ArrayNum)) {
      ConvertToBlueprintResults(&local_f0,(this->Settings).field0_0x0.DebugPtr,pTVar7);
      if ((local_f0.ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Results.Num() > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesia\\Private\\Loudness.cpp"
                             ,0x7e,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (0 < iVar1) {
        local_118.Data = (FScriptContainerElement *)0x0;
        local_10c = 0;
        if ((local_f0.ArrayNum != 0) &&
           (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,local_f0.ArrayNum,0,&local_118,local_f0.ArrayNum,&local_10c),
           local_f0.ArrayNum != 0)) {
          memcpy(local_118.Data,local_f0.AllocatorInstance.Data,(longlong)local_f0.ArrayNum << 4);
        }
        TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                   &this->OnOverallLoudnessResults,&local_118);
        if (local_118.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data);
        }
      }
      if (0 < iVar2) {
        uVar9 = local_f0.ArrayNum - 1;
        uVar6 = 0;
        if ((int)uVar9 < local_f0.ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_b8 = *(undefined8 *)(local_f0.AllocatorInstance.Data + (longlong)(int)uVar9 * 0x10);
        uStack_b0 = *(undefined8 *)
                     (local_f0.AllocatorInstance.Data + (longlong)(int)uVar9 * 0x10 + 8);
        TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                   &this->OnLatestOverallLoudnessResults,&local_b8);
      }
      if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.AllocatorInstance.Data);
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnPerChannelLoudnessResults,&local_78);
    iVar1 = *(int *)&(this->OnPerChannelLoudnessResults).field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_78);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnLatestPerChannelLoudnessResults,&local_60);
    iVar2 = *(int *)&(this->OnLatestPerChannelLoudnessResults).field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_60);
    if ((0 < iVar1) || (0 < iVar2)) {
      iVar10 = 0;
      do {
        pTVar7 = Audio::FLoudnessResult::GetChannelLoudnessArray(this_00,iVar10);
        if (0 < pTVar7->ArrayNum) {
          ConvertToBlueprintResults(&local_e0,(this->Settings).field0_0x0.DebugPtr,pTVar7);
          iVar8 = local_e0.ArrayNum;
          if ((iVar8 < 1) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Results.Num() > 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesia\\Private\\Loudness.cpp"
                                 ,0x97,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          _Src.Data = local_e0.AllocatorInstance.Data;
          if (0 < iVar1) {
            local_100.Data = (FScriptContainerElement *)0x0;
            local_f4 = 0;
            local_108[0] = iVar10;
            local_f8 = iVar8;
            if ((iVar8 != 0) &&
               (UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10,4,iVar8,0,&local_100,iVar8,&local_f4), iVar8 != 0)) {
              memcpy(local_100.Data,_Src.Data,(longlong)iVar8 << 4);
            }
            TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                      ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                       &this->OnPerChannelLoudnessResults,local_108);
            if (local_100.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_100.Data);
            }
          }
          if (0 < iVar2) {
            uVar9 = iVar8 - 1;
            uVar6 = 0;
            if ((int)uVar9 < iVar8) {
              uVar6 = ~uVar9 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            local_cc = *(undefined8 *)(_Src.Data + (longlong)(int)uVar9 * 0x10);
            uStack_c4 = *(undefined8 *)(_Src.Data + (longlong)(int)uVar9 * 0x10 + 8);
            local_d0 = iVar10;
            TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                      ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                       &this->OnLatestPerChannelLoudnessResults,&local_d0);
          }
          if (_Src.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(_Src.Data);
          }
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar5);
    }
  }
  if (this_00 != (FLoudnessResult *)0x0) {
    (**(code **)this_00->_padding_)(this_00,1);
  }
  return;
}

// GetAnalyzerFactoryName @ 14d821760

FName __thiscall ULoudnessAnalyzer::GetAnalyzerFactoryName(ULoudnessAnalyzer *this)

{
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::FactoryName,L"LoudnessFactory");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RDX = ::FactoryName;
  return in_RDX;
}

// GetPrivateStaticClass @ 14d823d60

UClass * __cdecl ULoudnessAnalyzer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULoudnessAnalyzer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"LoudnessAnalyzer",
               &Z_Registration_Info_UClass_ULoudnessAnalyzer.InnerSingleton,
               StaticRegisterNativesULoudnessAnalyzer,0x108,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<ULoudnessAnalyzer>,
               InternalVTableHelperCtorCaller<ULoudnessAnalyzer>,local_res8,
               UAudioAnalyzer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULoudnessAnalyzer.InnerSingleton;
}

// GetSettings @ 14d825370

TUniquePtr<Audio::IAnalyzerSettings,TDefaultDelete<Audio::IAnalyzerSettings>_> __thiscall
ULoudnessAnalyzer::GetSettings(ULoudnessAnalyzer *this,int param_1,int param_2)

{
  ULoudnessSettings *pUVar1;
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
  if (pUVar1 != (ULoudnessSettings *)0x0) {
    IVar2 = (IAnalyzerSettings)::operator_new(0x28);
    if (IVar2 != (IAnalyzerSettings)0x0) {
      *(undefined4 *)((longlong)IVar2 + 0xc) = 0x303;
      *(undefined2 *)((longlong)IVar2 + 0x1d) = 0;
      *(undefined1 *)((longlong)IVar2 + 0x1f) = 0;
      *(undefined4 *)((longlong)IVar2 + 0x24) = 0;
      *(undefined4 *)((longlong)IVar2 + 8) = 0x2000;
      *(undefined4 *)((longlong)IVar2 + 0x10) = 0x41a00000;
      *(undefined4 *)((longlong)IVar2 + 0x14) = 0x461c4000;
      *(undefined4 *)((longlong)IVar2 + 0x18) = 0xffffffff;
      *(undefined1 *)((longlong)IVar2 + 0x1c) = 0;
      *(undefined ***)IVar2 = &___7FLoudnessSettings_Audio__6B_;
      *(undefined4 *)((longlong)IVar2 + 0x20) = 0x3c23d70a;
      IVar4 = IVar2;
    }
    *(float *)((longlong)IVar4 + 0x20) = pUVar1->AnalysisPeriod;
    *(float *)((longlong)IVar4 + 0x10) = pUVar1->MinimumFrequency;
    *(float *)((longlong)IVar4 + 0x14) = pUVar1->MaximumFrequency;
    switch(pUVar1->CurveType) {
    case A:
      *(undefined1 *)((longlong)IVar4 + 0xd) = 0;
      break;
    case B:
      *(undefined1 *)((longlong)IVar4 + 0xd) = 1;
      break;
    case C:
      *(undefined1 *)((longlong)IVar4 + 0xd) = 2;
      break;
    case D:
      *(undefined1 *)((longlong)IVar4 + 0xd) = 3;
      break;
    case K:
      *(undefined1 *)((longlong)IVar4 + 0xd) = 4;
      break;
    default:
      *(undefined1 *)((longlong)IVar4 + 0xd) = 5;
    }
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

// StaticRegisterNativesULoudnessAnalyzer @ 14d827310

void __cdecl ULoudnessAnalyzer::StaticRegisterNativesULoudnessAnalyzer(void)

{
  return;
}

