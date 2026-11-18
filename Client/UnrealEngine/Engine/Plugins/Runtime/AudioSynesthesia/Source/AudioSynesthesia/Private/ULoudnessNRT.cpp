// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesia
// Functions: 16

// StaticClass @ 14d812130

UClass * __cdecl ULoudnessNRT::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULoudnessNRT.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"LoudnessNRT",
               &Z_Registration_Info_UClass_ULoudnessNRT.InnerSingleton,
               StaticRegisterNativesULoudnessNRT,0x80,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<ULoudnessNRT>,InternalVTableHelperCtorCaller<ULoudnessNRT>,
               local_res8,UAudioSynesthesiaNRT::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULoudnessNRT.InnerSingleton;
}

// ULoudnessNRT @ 14d81b780

ULoudnessNRT * __thiscall ULoudnessNRT::ULoudnessNRT(ULoudnessNRT *this,FVTableHelper *param_1)

{
  UAudioAnalyzerNRT::UAudioAnalyzerNRT((UAudioAnalyzerNRT *)this,param_1);
  this->_padding_ = (longlong)&___7ULoudnessNRT__6B_;
  (this->Settings).field0_0x0.DebugPtr = (ULoudnessNRTSettings *)0x0;
  return this;
}

// ULoudnessNRT @ 14d81b7b0

ULoudnessNRT * __thiscall ULoudnessNRT::ULoudnessNRT(ULoudnessNRT *this)

{
  FName FVar1;
  FObjectInitializer *pFVar2;
  FName *pFVar3;
  UClass *pUVar4;
  ULoudnessNRTSettings *pUVar5;
  FName local_res8;
  
  pFVar2 = FObjectInitializer::Get();
  UAudioAnalyzerNRT::UAudioAnalyzerNRT((UAudioAnalyzerNRT *)this,pFVar2);
  this->_padding_ = (longlong)&___7ULoudnessNRT__6B_;
  (this->Settings).field0_0x0.DebugPtr = (ULoudnessNRTSettings *)0x0;
  pFVar3 = ::FName::FName(&local_res8,L"DefaultLoudnessNRTSettings");
  FVar1 = *pFVar3;
  pUVar4 = ULoudnessNRTSettings::StaticClass();
  pUVar5 = (ULoudnessNRTSettings *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (ULoudnessNRTSettings *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->Settings).field0_0x0.DebugPtr = pUVar5;
  return this;
}

// ~ULoudnessNRT @ 14d81c5f0

void __thiscall ULoudnessNRT::~ULoudnessNRT(ULoudnessNRT *this)

{
  this->_padding_ = (longlong)&___7UAudioSynesthesiaNRT__6B_;
  UAudioAnalyzerNRT::~UAudioAnalyzerNRT((UAudioAnalyzerNRT *)this);
  return;
}

// GetAnalyzerNRTFactoryName @ 14d8219e0

FName __thiscall ULoudnessNRT::GetAnalyzerNRTFactoryName(ULoudnessNRT *this)

{
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::FactoryName,L"LoudnessNRTFactory");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RDX = ::FactoryName;
  return in_RDX;
}

// GetChannelLoudnessAtTime @ 14d822230

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ULoudnessNRT::GetChannelLoudnessAtTime(ULoudnessNRT *this,float param_1,int param_2,float *param_3)

{
  code *pcVar1;
  bool bVar2;
  TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_> *pTVar3;
  TArrayView<Audio::FLoudnessDatum_const_,int> *pTVar4;
  float fVar5;
  TSharedPtr<Audio::FLoudnessNRTResult_const_,1> local_48;
  TArrayView<Audio::FLoudnessDatum_const_,int> local_38;
  TArrayView<Audio::FLoudnessDatum_const_,int> local_28 [2];
  
  *param_3 = 0.0;
  UAudioAnalyzerNRT::GetResult<Audio::FLoudnessNRTResult>((UAudioAnalyzerNRT *)this,&local_48);
  if (local_48.Object != (FLoudnessNRTResult *)0x0) {
    if (local_48.Object == (FLoudnessNRTResult *)0x0) {
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
    bVar2 = Audio::FLoudnessNRTResult::IsSortedChronologically(local_48.Object);
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("LoudnessResult->IsSortedChronologically()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesia\\Private\\LoudnessNRT.cpp"
                         ,0x7a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (local_48.Object == (FLoudnessNRTResult *)0x0) {
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
    bVar2 = Audio::FLoudnessNRTResult::ContainsChannel(local_48.Object,param_2);
    if (bVar2) {
      if (local_48.Object == (FLoudnessNRTResult *)0x0) {
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
      pTVar3 = Audio::FLoudnessNRTResult::GetChannelLoudnessArray(local_48.Object,param_2);
      pTVar4 = TArrayView<Audio::FLoudnessDatum_const_,int>::
               TArrayView<Audio::FLoudnessDatum_const_,int><TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_>_const_&,TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_>_>
                         (local_28,pTVar3);
      local_38.DataPtr = pTVar4->DataPtr;
      local_38.ArrayNum = pTVar4->ArrayNum;
      local_38._12_4_ = *(undefined4 *)&pTVar4->field_0xc;
      fVar5 = LoudnessNRTPrivate::InterpolateLoudness(&local_38,param_1);
      *param_3 = fVar5;
    }
    else if (2 < (byte)LogAudioSynesthesia._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioSynesthesia);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  return;
}

// GetLoudnessAtTime @ 14d822740

void __thiscall ULoudnessNRT::GetLoudnessAtTime(ULoudnessNRT *this,float param_1,float *param_2)

{
  GetChannelLoudnessAtTime(this,param_1,Audio::FLoudnessNRTResult::ChannelIndexOverall,param_2);
  return;
}

// GetNormalizedChannelLoudnessAtTime @ 14d823030

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ULoudnessNRT::GetNormalizedChannelLoudnessAtTime
          (ULoudnessNRT *this,float param_1,int param_2,float *param_3)

{
  code *pcVar1;
  bool bVar2;
  TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_> *pTVar3;
  TArrayView<Audio::FLoudnessDatum_const_,int> *pTVar4;
  float fVar5;
  float fVar6;
  TSharedPtr<Audio::FLoudnessNRTResult_const_,1> local_48;
  TArrayView<Audio::FLoudnessDatum_const_,int> local_38;
  TArrayView<Audio::FLoudnessDatum_const_,int> local_28 [2];
  
  *param_3 = 0.0;
  UAudioAnalyzerNRT::GetResult<Audio::FLoudnessNRTResult>((UAudioAnalyzerNRT *)this,&local_48);
  if (local_48.Object != (FLoudnessNRTResult *)0x0) {
    if (local_48.Object == (FLoudnessNRTResult *)0x0) {
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
    bVar2 = Audio::FLoudnessNRTResult::IsSortedChronologically(local_48.Object);
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("LoudnessResult->IsSortedChronologically()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesia\\Private\\LoudnessNRT.cpp"
                         ,0x96,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (local_48.Object == (FLoudnessNRTResult *)0x0) {
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
    bVar2 = Audio::FLoudnessNRTResult::ContainsChannel(local_48.Object,param_2);
    if (bVar2) {
      if (local_48.Object == (FLoudnessNRTResult *)0x0) {
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
      pTVar3 = Audio::FLoudnessNRTResult::GetChannelLoudnessArray(local_48.Object,param_2);
      pTVar4 = TArrayView<Audio::FLoudnessDatum_const_,int>::
               TArrayView<Audio::FLoudnessDatum_const_,int><TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_>_const_&,TArray<Audio::FLoudnessDatum,TSizedDefaultAllocator<32>_>_>
                         (local_28,pTVar3);
      local_38.DataPtr = pTVar4->DataPtr;
      local_38.ArrayNum = pTVar4->ArrayNum;
      local_38._12_4_ = *(undefined4 *)&pTVar4->field_0xc;
      fVar5 = LoudnessNRTPrivate::InterpolateLoudness(&local_38,param_1);
      *param_3 = fVar5;
      *param_3 = fVar5 - ((this->Settings).field0_0x0.DebugPtr)->NoiseFloorDb;
      if (local_48.Object == (FLoudnessNRTResult *)0x0) {
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
      fVar5 = Audio::FLoudnessNRTResult::GetChannelLoudnessRange
                        (local_48.Object,param_2,
                         ((this->Settings).field0_0x0.DebugPtr)->NoiseFloorDb);
      if (fVar5 <= __real_322bcc77) {
        fVar5 = __real_322bcc77;
      }
      fVar6 = *param_3 / fVar5;
      if (__real_3f800000 <= *param_3 / fVar5) {
        fVar6 = __real_3f800000;
      }
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      *param_3 = fVar6;
    }
    else if (2 < (byte)LogAudioSynesthesia._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioSynesthesia);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  return;
}

// GetNormalizedLoudnessAtTime @ 14d823470

void __thiscall
ULoudnessNRT::GetNormalizedLoudnessAtTime(ULoudnessNRT *this,float param_1,float *param_2)

{
  GetNormalizedChannelLoudnessAtTime
            (this,param_1,Audio::FLoudnessNRTResult::ChannelIndexOverall,param_2);
  return;
}

// GetPrivateStaticClass @ 14d823e20

UClass * __cdecl ULoudnessNRT::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULoudnessNRT.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"LoudnessNRT",
               &Z_Registration_Info_UClass_ULoudnessNRT.InnerSingleton,
               StaticRegisterNativesULoudnessNRT,0x80,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<ULoudnessNRT>,InternalVTableHelperCtorCaller<ULoudnessNRT>,
               local_res8,UAudioSynesthesiaNRT::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULoudnessNRT.InnerSingleton;
}

// GetSettings @ 14d8254b0

TUniquePtr<Audio::IAnalyzerNRTSettings,TDefaultDelete<Audio::IAnalyzerNRTSettings>_> __thiscall
ULoudnessNRT::GetSettings(ULoudnessNRT *this,float param_1,int param_2)

{
  ULoudnessNRTSettings *pUVar1;
  IAnalyzerNRTSettings IVar2;
  IAnalyzerNRTSettings IVar3;
  undefined8 *puVar4;
  IAnalyzerNRTSettings *in_RDX;
  IAnalyzerNRTSettings local_18 [2];
  
  *in_RDX = (IAnalyzerNRTSettings)0x0;
  pUVar1 = (this->Settings).field0_0x0.DebugPtr;
  if (pUVar1 != (ULoudnessNRTSettings *)0x0) {
    IVar3 = (IAnalyzerNRTSettings)::operator_new(0x28);
    if (IVar3 == (IAnalyzerNRTSettings)0x0) {
      IVar3 = (IAnalyzerNRTSettings)0x0;
    }
    else {
      *(undefined4 *)((longlong)IVar3 + 8) = 0x2000;
      *(undefined2 *)((longlong)IVar3 + 0xc) = 0x303;
      *(undefined4 *)((longlong)IVar3 + 0x10) = 0x41a00000;
      *(undefined4 *)((longlong)IVar3 + 0x14) = 0x461c4000;
      *(undefined4 *)((longlong)IVar3 + 0x18) = 0xffffffff;
      *(undefined1 *)((longlong)IVar3 + 0x1c) = 0;
      *(undefined ***)IVar3 = &___7FLoudnessNRTSettings_Audio__6B_;
      *(undefined4 *)((longlong)IVar3 + 0x20) = 0x3c23d70a;
    }
    *(float *)((longlong)IVar3 + 0x20) = pUVar1->AnalysisPeriod;
    *(float *)((longlong)IVar3 + 0x10) = pUVar1->MinimumFrequency;
    *(float *)((longlong)IVar3 + 0x14) = pUVar1->MaximumFrequency;
    *(undefined1 *)((longlong)IVar3 + 0xc) = 3;
    *(undefined1 *)((longlong)IVar3 + 0x1c) = 0;
    switch(pUVar1->CurveType) {
    case A:
      *(undefined1 *)((longlong)IVar3 + 0xd) = 0;
      break;
    case B:
      *(undefined1 *)((longlong)IVar3 + 0xd) = 1;
      break;
    case C:
      *(undefined1 *)((longlong)IVar3 + 0xd) = 2;
      break;
    case D:
      *(undefined1 *)((longlong)IVar3 + 0xd) = 3;
      break;
    case K:
      *(undefined1 *)((longlong)IVar3 + 0xd) = 4;
      break;
    default:
      *(undefined1 *)((longlong)IVar3 + 0xd) = 5;
    }
    if (in_RDX == local_18) {
      if (IVar3 == (IAnalyzerNRTSettings)0x0) {
        return (TUniquePtr<Audio::IAnalyzerNRTSettings,TDefaultDelete<Audio::IAnalyzerNRTSettings>_>
               )in_RDX;
      }
      puVar4 = *(undefined8 **)IVar3;
    }
    else {
      IVar2 = *in_RDX;
      *in_RDX = IVar3;
      if (IVar2 == (IAnalyzerNRTSettings)0x0) {
        return (TUniquePtr<Audio::IAnalyzerNRTSettings,TDefaultDelete<Audio::IAnalyzerNRTSettings>_>
               )in_RDX;
      }
      puVar4 = *(undefined8 **)IVar2;
      IVar3 = IVar2;
    }
    (*(code *)*puVar4)(IVar3,1);
  }
  return (TUniquePtr<Audio::IAnalyzerNRTSettings,TDefaultDelete<Audio::IAnalyzerNRTSettings>_>)
         in_RDX;
}

// StaticRegisterNativesULoudnessNRT @ 14d827320

void __cdecl ULoudnessNRT::StaticRegisterNativesULoudnessNRT(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_ULoudnessNRT_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetChannelLoudnessAtTime @ 14d828690

void __cdecl
ULoudnessNRT::execGetChannelLoudnessAtTime(UObject *param_1,FFrame *param_2,void *param_3)

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
  GetChannelLoudnessAtTime((ULoudnessNRT *)param_1,local_18[0],local_res20[0],pfVar2);
  return;
}

// execGetLoudnessAtTime @ 14d828d90

void __cdecl ULoudnessNRT::execGetLoudnessAtTime(UObject *param_1,FFrame *param_2,void *param_3)

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
            ((ULoudnessNRT *)param_1,local_res20[0],Audio::FLoudnessNRTResult::ChannelIndexOverall,
             pfVar2);
  return;
}

// execGetNormalizedChannelLoudnessAtTime @ 14d8292d0

void __cdecl
ULoudnessNRT::execGetNormalizedChannelLoudnessAtTime(UObject *param_1,FFrame *param_2,void *param_3)

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
  GetNormalizedChannelLoudnessAtTime((ULoudnessNRT *)param_1,local_18[0],local_res20[0],pfVar2);
  return;
}

// execGetNormalizedLoudnessAtTime @ 14d8295f0

void __cdecl
ULoudnessNRT::execGetNormalizedLoudnessAtTime(UObject *param_1,FFrame *param_2,void *param_3)

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
  GetNormalizedChannelLoudnessAtTime
            ((ULoudnessNRT *)param_1,local_res20[0],Audio::FLoudnessNRTResult::ChannelIndexOverall,
             pfVar2);
  return;
}

