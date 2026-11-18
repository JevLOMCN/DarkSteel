// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesia
// Functions: 28

// StaticClass @ 14d812070

UClass * __cdecl ULKFSNRT::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULKFSNRT.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"LKFSNRT",
               &Z_Registration_Info_UClass_ULKFSNRT.InnerSingleton,StaticRegisterNativesULKFSNRT,
               0x80,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<ULKFSNRT>,
               InternalVTableHelperCtorCaller<ULKFSNRT>,local_res8,UAudioSynesthesiaNRT::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULKFSNRT.InnerSingleton;
}

// ULKFSNRT @ 14d81b450

ULKFSNRT * __thiscall ULKFSNRT::ULKFSNRT(ULKFSNRT *this,FVTableHelper *param_1)

{
  UAudioAnalyzerNRT::UAudioAnalyzerNRT((UAudioAnalyzerNRT *)this,param_1);
  this->_padding_ = (longlong)&___7ULKFSNRT__6B_;
  (this->Settings).field0_0x0.DebugPtr = (ULKFSNRTSettings *)0x0;
  return this;
}

// ULKFSNRT @ 14d81b480

ULKFSNRT * __thiscall ULKFSNRT::ULKFSNRT(ULKFSNRT *this)

{
  FName FVar1;
  FObjectInitializer *pFVar2;
  FName *pFVar3;
  UClass *pUVar4;
  ULKFSNRTSettings *pUVar5;
  FName local_res8;
  
  pFVar2 = FObjectInitializer::Get();
  UAudioAnalyzerNRT::UAudioAnalyzerNRT((UAudioAnalyzerNRT *)this,pFVar2);
  this->_padding_ = (longlong)&___7ULKFSNRT__6B_;
  (this->Settings).field0_0x0.DebugPtr = (ULKFSNRTSettings *)0x0;
  pFVar3 = ::FName::FName(&local_res8,L"DefaultLKFSNRTSettings");
  FVar1 = *pFVar3;
  pUVar4 = ULKFSNRTSettings::StaticClass();
  pUVar5 = (ULKFSNRTSettings *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (ULKFSNRTSettings *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->Settings).field0_0x0.DebugPtr = pUVar5;
  return this;
}

// ~ULKFSNRT @ 14d81c4e0

void __thiscall ULKFSNRT::~ULKFSNRT(ULKFSNRT *this)

{
  this->_padding_ = (longlong)&___7UAudioSynesthesiaNRT__6B_;
  UAudioAnalyzerNRT::~UAudioAnalyzerNRT((UAudioAnalyzerNRT *)this);
  return;
}

// GetAnalyzerNRTFactoryName @ 14d821960

FName __thiscall ULKFSNRT::GetAnalyzerNRTFactoryName(ULKFSNRT *this)

{
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::FactoryName,L"LKFSNRTFactory");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RDX = ::FactoryName;
  return in_RDX;
}

// GetChannelLoudnessAtTime @ 14d8220a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ULKFSNRT::GetChannelLoudnessAtTime(ULKFSNRT *this,float param_1,int param_2,float *param_3)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  TSharedPtr<Audio::FLKFSNRTResult_const_,1> local_48;
  TArrayView<FLKFSNRTResults_const_,int> local_38;
  TArrayView<FLKFSNRTResults_const_,int> local_28 [2];
  
  *param_3 = 0.0;
  UAudioAnalyzerNRT::GetResult<Audio::FLKFSNRTResult>((UAudioAnalyzerNRT *)this,&local_48);
  if (local_48.Object != (FLKFSNRTResult *)0x0) {
    if (local_48.Object == (FLKFSNRTResult *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    bVar2 = Audio::FLKFSNRTResult::IsSortedChronologically(local_48.Object);
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("LoudnessResult->IsSortedChronologically()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesia\\Private\\LKFSNRT.cpp"
                         ,0x69,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (local_48.Object == (FLKFSNRTResult *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    bVar2 = Audio::FLKFSNRTResult::ContainsChannel(local_48.Object,param_2);
    if (bVar2) {
      if (local_48.Object == (FLKFSNRTResult *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      Audio::FLKFSNRTResult::GetChannelLoudnessArray(local_48.Object,&local_38,param_2);
      local_28[0].DataPtr = local_38.DataPtr;
      local_28[0].ArrayNum = local_38.ArrayNum;
      local_28[0]._12_4_ = local_38._12_4_;
      fVar3 = LKFSNRTPrivate::InterpolateLoudness(local_28,param_1);
      *param_3 = fVar3;
    }
    else if (2 < (byte)LogAudioSynesthesia._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioSynesthesia);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  return;
}

// GetGatedLoudness @ 14d822560

float __thiscall ULKFSNRT::GetGatedLoudness(ULKFSNRT *this)

{
  float fVar1;
  
  fVar1 = GetGatedLoudnessForChannel(this,Audio::FLKFSNRTResult::ChannelIndexOverall);
  return fVar1;
}

// GetGatedLoudnessForChannel @ 14d822580

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall ULKFSNRT::GetGatedLoudnessForChannel(ULKFSNRT *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FLKFSNRTAggregateStats *pFVar3;
  float fVar4;
  TSharedPtr<Audio::FLKFSNRTResult_const_,1> local_28 [2];
  
  UAudioAnalyzerNRT::GetResult<Audio::FLKFSNRTResult>((UAudioAnalyzerNRT *)this,local_28);
  fVar4 = __real_00800000;
  if (local_28[0].Object != (FLKFSNRTResult *)0x0) {
    if ((local_28[0].Object == (FLKFSNRTResult *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
    pFVar3 = Audio::FLKFSNRTResult::FindAggregateLoudnessStats(local_28[0].Object,param_1);
    if (pFVar3 == (FLKFSNRTAggregateStats *)0x0) {
      fVar4 = __real_00800000;
      if (2 < (byte)LogAudioSynesthesia._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioSynesthesia);
        fVar4 = __real_00800000;
      }
    }
    else {
      fVar4 = pFVar3->GatedLoudness;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28[0].SharedReferenceCount.ReferenceController);
  return fVar4;
}

// GetIntegratedLoudness @ 14d822640

float __thiscall ULKFSNRT::GetIntegratedLoudness(ULKFSNRT *this)

{
  float fVar1;
  
  fVar1 = GetIntegratedLoudnessForChannel(this,Audio::FLKFSNRTResult::ChannelIndexOverall);
  return fVar1;
}

// GetIntegratedLoudnessForChannel @ 14d822660

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall ULKFSNRT::GetIntegratedLoudnessForChannel(ULKFSNRT *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FLKFSNRTAggregateStats *pFVar3;
  float fVar4;
  TSharedPtr<Audio::FLKFSNRTResult_const_,1> local_28 [2];
  
  UAudioAnalyzerNRT::GetResult<Audio::FLKFSNRTResult>((UAudioAnalyzerNRT *)this,local_28);
  fVar4 = __real_00800000;
  if (local_28[0].Object != (FLKFSNRTResult *)0x0) {
    if ((local_28[0].Object == (FLKFSNRTResult *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
    pFVar3 = Audio::FLKFSNRTResult::FindAggregateLoudnessStats(local_28[0].Object,param_1);
    if (pFVar3 == (FLKFSNRTAggregateStats *)0x0) {
      fVar4 = __real_00800000;
      if (2 < (byte)LogAudioSynesthesia._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioSynesthesia);
        fVar4 = __real_00800000;
      }
    }
    else {
      fVar4 = pFVar3->IntegratedLoudness;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28[0].SharedReferenceCount.ReferenceController);
  return fVar4;
}

// GetLoudnessAtTime @ 14d822720

void __thiscall ULKFSNRT::GetLoudnessAtTime(ULKFSNRT *this,float param_1,float *param_2)

{
  GetChannelLoudnessAtTime(this,param_1,Audio::FLKFSNRTResult::ChannelIndexOverall,param_2);
  return;
}

// GetLoudnessData @ 14d822760

TArray<FLKFSNRTResults,TSizedDefaultAllocator<32>_> * __thiscall
ULKFSNRT::GetLoudnessData
          (ULKFSNRT *this,
          TArray<FLKFSNRTResults,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  GetLoudnessDataForChannel(this,__return_storage_ptr__,Audio::FLKFSNRTResult::ChannelIndexOverall);
  return __return_storage_ptr__;
}

// GetLoudnessDataAtTime @ 14d822790

FLKFSNRTResults * __thiscall
ULKFSNRT::GetLoudnessDataAtTime
          (ULKFSNRT *this,FLKFSNRTResults *__return_storage_ptr__,float param_1)

{
  GetLoudnessDataForChannelAtTime
            (this,__return_storage_ptr__,param_1,Audio::FLKFSNRTResult::ChannelIndexOverall);
  return __return_storage_ptr__;
}

// GetLoudnessDataForChannel @ 14d8227c0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FLKFSNRTResults,TSizedDefaultAllocator<32>_> * __thiscall
ULKFSNRT::GetLoudnessDataForChannel
          (ULKFSNRT *this,
          TArray<FLKFSNRTResults,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  FLKFSNRTResults *_Src;
  code *pcVar2;
  bool bVar3;
  TArray<FLKFSNRTResults,TSizedDefaultAllocator<32>_> *pTVar4;
  TArrayView<FLKFSNRTResults_const_,int> *pTVar5;
  TSharedPtr<Audio::FLKFSNRTResult_const_,1> local_28;
  TArrayView<FLKFSNRTResults_const_,int> local_18;
  
  UAudioAnalyzerNRT::GetResult<Audio::FLKFSNRTResult>((UAudioAnalyzerNRT *)this,&local_28);
  if (local_28.Object != (FLKFSNRTResult *)0x0) {
    if (local_28.Object == (FLKFSNRTResult *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TArray<FLKFSNRTResults,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar4;
      }
    }
    bVar3 = Audio::FLKFSNRTResult::IsSortedChronologically(local_28.Object);
    if (!bVar3) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("LoudnessResult->IsSortedChronologically()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesia\\Private\\LKFSNRT.cpp"
                         ,0x7d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TArray<FLKFSNRTResults,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar4;
      }
    }
    if (local_28.Object == (FLKFSNRTResult *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TArray<FLKFSNRTResults,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar4;
      }
    }
    bVar3 = Audio::FLKFSNRTResult::ContainsChannel(local_28.Object,param_1);
    if (bVar3) {
      if (local_28.Object == (FLKFSNRTResult *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pTVar4 = (TArray<FLKFSNRTResults,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar4;
        }
      }
      pTVar5 = Audio::FLKFSNRTResult::GetChannelLoudnessArray(local_28.Object,&local_18,param_1);
      (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar1 = pTVar5->ArrayNum;
      _Src = pTVar5->DataPtr;
      __return_storage_ptr__->ArrayNum = iVar1;
      if (iVar1 == 0) {
        __return_storage_ptr__->ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x14,4,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
                   &__return_storage_ptr__->ArrayMax);
        memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x14);
      }
      goto LAB_14d8228bf;
    }
    if (2 < (byte)LogAudioSynesthesia._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioSynesthesia);
    }
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
LAB_14d8228bf:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetLoudnessDataForChannelAtTime @ 14d822980

/* WARNING: Enum "Type": Some values do not have unique names */

FLKFSNRTResults * __thiscall
ULKFSNRT::GetLoudnessDataForChannelAtTime
          (ULKFSNRT *this,FLKFSNRTResults *__return_storage_ptr__,float param_1,int param_2)

{
  float fVar1;
  code *pcVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  FLKFSNRTResults *pFVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  TSharedPtr<Audio::FLKFSNRTResult_const_,1> local_58;
  TArrayView<FLKFSNRTResults_const_,int> local_48 [3];
  
  UAudioAnalyzerNRT::GetResult<Audio::FLKFSNRTResult>((UAudioAnalyzerNRT *)this,&local_58);
  if (local_58.Object != (FLKFSNRTResult *)0x0) {
    if ((local_58.Object == (FLKFSNRTResult *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FLKFSNRTResults *)(*pcVar2)();
      return pFVar9;
    }
    bVar7 = Audio::FLKFSNRTResult::IsSortedChronologically(local_58.Object);
    if ((!bVar7) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("LoudnessResult->IsSortedChronologically()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesia\\Private\\LKFSNRT.cpp"
                           ,0x95,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FLKFSNRTResults *)(*pcVar2)();
      return pFVar9;
    }
    if ((local_58.Object == (FLKFSNRTResult *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar2 = (code *)swi(3);
      pFVar9 = (FLKFSNRTResults *)(*pcVar2)();
      return pFVar9;
    }
    bVar7 = Audio::FLKFSNRTResult::ContainsChannel(local_58.Object,param_2);
    if (bVar7) {
      if ((local_58.Object == (FLKFSNRTResult *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar2 = (code *)swi(3);
        pFVar9 = (FLKFSNRTResults *)(*pcVar2)();
        return pFVar9;
      }
      Audio::FLKFSNRTResult::GetChannelLoudnessArray(local_58.Object,local_48,param_2);
      uVar10 = 0;
      uVar11 = local_48[0].ArrayNum;
      if (local_48[0].ArrayNum != 0) {
        while (uVar3 = uVar10, 0 < (int)uVar11) {
          uVar8 = (int)uVar11 / 2;
          uVar10 = uVar8 + uVar3 + (int)uVar11 % 2;
          uVar11 = uVar8;
          if (param_1 < local_48[0].DataPtr[(int)(uVar8 + uVar3)].Timestamp) {
            uVar10 = uVar3;
          }
        }
        uVar11 = local_48[0].ArrayNum - 1;
        uVar8 = 0;
        uVar10 = local_48[0].ArrayNum;
        if ((int)(uVar3 - 1) < (int)uVar11) {
          uVar10 = uVar3;
        }
        uVar12 = 0;
        if (0 < (int)(uVar10 - 1)) {
          uVar12 = uVar10 - 1;
        }
        if ((int)uVar3 < (int)uVar11) {
          uVar11 = uVar3;
        }
        uVar10 = uVar8;
        if (0 < (int)uVar11) {
          uVar10 = uVar11;
        }
        uVar11 = uVar8;
        if ((int)uVar12 < local_48[0].ArrayNum) {
          uVar11 = ~uVar12 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar2 = (code *)swi(3);
          pFVar9 = (FLKFSNRTResults *)(*pcVar2)();
          return pFVar9;
        }
        if ((int)uVar10 < local_48[0].ArrayNum) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar7)) {
          pcVar2 = (code *)swi(3);
          pFVar9 = (FLKFSNRTResults *)(*pcVar2)();
          return pFVar9;
        }
        pFVar9 = local_48[0].DataPtr + (int)uVar12;
        if ((float)((uint)(local_48[0].DataPtr[(int)uVar10].Timestamp - param_1) &
                   __xmm_7fffffff7fffffff7fffffff7fffffff) <
            (float)((uint)(local_48[0].DataPtr[(int)uVar12].Timestamp - param_1) &
                   __xmm_7fffffff7fffffff7fffffff7fffffff)) {
          pFVar9 = local_48[0].DataPtr + (int)uVar10;
        }
        if (pFVar9 != (FLKFSNRTResults *)0x0) {
          fVar4 = pFVar9->Timestamp;
          fVar5 = pFVar9->Energy;
          fVar6 = pFVar9->Loudness;
          fVar1 = pFVar9->ShortTermLoudness;
          __return_storage_ptr__->Channel = pFVar9->Channel;
          __return_storage_ptr__->Timestamp = fVar4;
          __return_storage_ptr__->Energy = fVar5;
          __return_storage_ptr__->Loudness = fVar6;
          __return_storage_ptr__->ShortTermLoudness = fVar1;
          goto LAB_14d822a8f;
        }
      }
    }
    else if (2 < (byte)LogAudioSynesthesia._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioSynesthesia);
    }
  }
  __return_storage_ptr__->Channel = 0;
  __return_storage_ptr__->Timestamp = 0.0;
  __return_storage_ptr__->Energy = 0.0;
  __return_storage_ptr__->Loudness = 0.0;
  __return_storage_ptr__->ShortTermLoudness = 0.0;
LAB_14d822a8f:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14d823b20

UClass * __cdecl ULKFSNRT::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULKFSNRT.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"LKFSNRT",
               &Z_Registration_Info_UClass_ULKFSNRT.InnerSingleton,StaticRegisterNativesULKFSNRT,
               0x80,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<ULKFSNRT>,
               InternalVTableHelperCtorCaller<ULKFSNRT>,local_res8,UAudioSynesthesiaNRT::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULKFSNRT.InnerSingleton;
}

// GetSettings @ 14d825170

TUniquePtr<Audio::IAnalyzerNRTSettings,TDefaultDelete<Audio::IAnalyzerNRTSettings>_> __thiscall
ULKFSNRT::GetSettings(ULKFSNRT *this,float param_1,int param_2)

{
  ULKFSNRTSettings *pUVar1;
  IAnalyzerNRTSettings IVar2;
  IAnalyzerNRTSettings *pIVar3;
  IAnalyzerNRTSettings *in_RDX;
  undefined8 *local_res8 [4];
  
  *in_RDX = (IAnalyzerNRTSettings)0x0;
  pUVar1 = (this->Settings).field0_0x0.DebugPtr;
  if (pUVar1 != (ULKFSNRTSettings *)0x0) {
    pIVar3 = (IAnalyzerNRTSettings *)(**(code **)(pUVar1->_padding_ + 0x2b0))(pUVar1,local_res8);
    if (in_RDX != pIVar3) {
      IVar2 = *in_RDX;
      *in_RDX = *pIVar3;
      *pIVar3 = (IAnalyzerNRTSettings)0x0;
      if (IVar2 != (IAnalyzerNRTSettings)0x0) {
        (*(code *)**(undefined8 **)IVar2)(IVar2,1);
      }
    }
    if (local_res8[0] != (undefined8 *)0x0) {
      (**(code **)*local_res8[0])(local_res8[0],1);
    }
  }
  return (TUniquePtr<Audio::IAnalyzerNRTSettings,TDefaultDelete<Audio::IAnalyzerNRTSettings>_>)
         in_RDX;
}

// StaticRegisterNativesULKFSNRT @ 14d8272b0

void __cdecl ULKFSNRT::StaticRegisterNativesULKFSNRT(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 10;
  local_18.DataPtr = Z_Construct_UClass_ULKFSNRT_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetChannelLoudnessAtTime @ 14d828560

void __cdecl ULKFSNRT::execGetChannelLoudnessAtTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float *pfVar2;
  float local_res10 [2];
  int local_res20 [2];
  float local_18 [4];
  
  local_18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pfVar2 = local_res10;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar2 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetChannelLoudnessAtTime((ULKFSNRT *)param_1,local_18[0],local_res20[0],pfVar2);
  return;
}

// execGetGatedLoudness @ 14d828ae0

void __cdecl ULKFSNRT::execGetGatedLoudness(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetGatedLoudnessForChannel((ULKFSNRT *)param_1,Audio::FLKFSNRTResult::ChannelIndexOverall)
  ;
  *(float *)param_3 = fVar1;
  return;
}

// execGetGatedLoudnessForChannel @ 14d828b20

void __cdecl
ULKFSNRT::execGetGatedLoudnessForChannel(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar2 = GetGatedLoudnessForChannel((ULKFSNRT *)param_1,local_res10[0]);
  *(float *)param_3 = fVar2;
  return;
}

// execGetIntegratedLoudness @ 14d828bc0

void __cdecl ULKFSNRT::execGetIntegratedLoudness(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetIntegratedLoudnessForChannel
                    ((ULKFSNRT *)param_1,Audio::FLKFSNRTResult::ChannelIndexOverall);
  *(float *)param_3 = fVar1;
  return;
}

// execGetIntegratedLoudnessForChannel @ 14d828c00

void __cdecl
ULKFSNRT::execGetIntegratedLoudnessForChannel(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar2 = GetIntegratedLoudnessForChannel((ULKFSNRT *)param_1,local_res10[0]);
  *(float *)param_3 = fVar2;
  return;
}

// execGetLoudnessAtTime @ 14d828ca0

void __cdecl ULKFSNRT::execGetLoudnessAtTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float *pfVar2;
  float local_res10 [2];
  float local_res20 [2];
  
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pfVar2 = local_res10;
  if ((float *)param_2->MostRecentPropertyAddress != (float *)0x0) {
    pfVar2 = (float *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetChannelLoudnessAtTime
            ((ULKFSNRT *)param_1,local_res20[0],Audio::FLKFSNRTResult::ChannelIndexOverall,pfVar2);
  return;
}

// execGetLoudnessData @ 14d828e80

void __cdecl ULKFSNRT::execGetLoudnessData(UObject *param_1,FFrame *param_2,void *param_3)

{
  TArray<FLKFSNRTResults,TSizedDefaultAllocator<32>_> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetLoudnessDataForChannel
            ((ULKFSNRT *)param_1,&local_18,Audio::FLKFSNRTResult::ChannelIndexOverall);
  if (param_3 != &local_18) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_18.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_18.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_18.ArrayMax;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetLoudnessDataAtTime @ 14d828f10

void __cdecl ULKFSNRT::execGetLoudnessDataAtTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [2];
  FLKFSNRTResults local_28;
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetLoudnessDataForChannelAtTime
            ((ULKFSNRT *)param_1,&local_28,local_res10[0],Audio::FLKFSNRTResult::ChannelIndexOverall
            );
  *(undefined8 *)param_3 = local_28._0_8_;
  *(undefined8 *)((longlong)param_3 + 8) = local_28._8_8_;
  *(float *)((longlong)param_3 + 0x10) = local_28.ShortTermLoudness;
  return;
}

// execGetLoudnessDataForChannel @ 14d828fc0

void __cdecl ULKFSNRT::execGetLoudnessDataForChannel(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FLKFSNRTResults,TSizedDefaultAllocator<32>_> *pTVar2;
  int local_res10 [2];
  TArray<FLKFSNRTResults,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = GetLoudnessDataForChannel((ULKFSNRT *)param_1,&local_18,local_res10[0]);
  if (param_3 != pTVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar2->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execGetLoudnessDataForChannelAtTime @ 14d8290a0

void __cdecl
ULKFSNRT::execGetLoudnessDataForChannelAtTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  FLKFSNRTResults *pFVar3;
  int local_res10 [2];
  float local_res18 [4];
  FLKFSNRTResults local_38;
  
  local_res18[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = GetLoudnessDataForChannelAtTime
                     ((ULKFSNRT *)param_1,&local_38,local_res18[0],local_res10[0]);
  uVar2 = *(undefined8 *)&pFVar3->Energy;
  *(undefined8 *)param_3 = *(undefined8 *)pFVar3;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  *(float *)((longlong)param_3 + 0x10) = pFVar3->ShortTermLoudness;
  return;
}

