// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesia
// Functions: 12

// StaticClass @ 14d813a10

UClass * __cdecl UOnsetNRT::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOnsetNRT.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"OnsetNRT",
               &Z_Registration_Info_UClass_UOnsetNRT.InnerSingleton,StaticRegisterNativesUOnsetNRT,
               0x80,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UOnsetNRT>,
               InternalVTableHelperCtorCaller<UOnsetNRT>,local_res8,
               UAudioSynesthesiaNRT::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOnsetNRT.InnerSingleton;
}

// UOnsetNRT @ 14d81bc00

UOnsetNRT * __thiscall UOnsetNRT::UOnsetNRT(UOnsetNRT *this,FVTableHelper *param_1)

{
  UAudioAnalyzerNRT::UAudioAnalyzerNRT((UAudioAnalyzerNRT *)this,param_1);
  this->_padding_ = (longlong)&___7UOnsetNRT__6B_;
  (this->Settings).field0_0x0.DebugPtr = (UOnsetNRTSettings *)0x0;
  return this;
}

// UOnsetNRT @ 14d81bc30

UOnsetNRT * __thiscall UOnsetNRT::UOnsetNRT(UOnsetNRT *this)

{
  FName FVar1;
  FObjectInitializer *pFVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UOnsetNRTSettings *pUVar5;
  FName local_res8;
  
  pFVar2 = FObjectInitializer::Get();
  UAudioAnalyzerNRT::UAudioAnalyzerNRT((UAudioAnalyzerNRT *)this,pFVar2);
  this->_padding_ = (longlong)&___7UOnsetNRT__6B_;
  (this->Settings).field0_0x0.DebugPtr = (UOnsetNRTSettings *)0x0;
  pFVar3 = ::FName::FName(&local_res8,L"DefaultOnsetNRTSettings");
  FVar1 = *pFVar3;
  pUVar4 = UOnsetNRTSettings::StaticClass();
  pUVar5 = (UOnsetNRTSettings *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UOnsetNRTSettings *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->Settings).field0_0x0.DebugPtr = pUVar5;
  return this;
}

// ~UOnsetNRT @ 14d81c7d0

void __thiscall UOnsetNRT::~UOnsetNRT(UOnsetNRT *this)

{
  this->_padding_ = (longlong)&___7UAudioSynesthesiaNRT__6B_;
  UAudioAnalyzerNRT::~UAudioAnalyzerNRT((UAudioAnalyzerNRT *)this);
  return;
}

// GetAnalyzerNRTFactoryName @ 14d821a60

FName __thiscall UOnsetNRT::GetAnalyzerNRTFactoryName(UOnsetNRT *this)

{
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::FactoryName,L"OnsetNRTFactory");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RDX = ::FactoryName;
  return in_RDX;
}

// GetChannelOnsetsBetweenTimes @ 14d8223c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UOnsetNRT::GetChannelOnsetsBetweenTimes
          (UOnsetNRT *this,float param_1,float param_2,int param_3,
          TArray<float,TSizedDefaultAllocator<32>_> *param_4,
          TArray<float,TSizedDefaultAllocator<32>_> *param_5)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<Audio::FOnsetNRTResult_const_,1> local_38 [3];
  
  param_4->ArrayNum = 0;
  if (param_4->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
  }
  param_5->ArrayNum = 0;
  if (param_5->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_5->AllocatorInstance,0,&param_5->ArrayMax);
  }
  UAudioAnalyzerNRT::GetResult<Audio::FOnsetNRTResult>((UAudioAnalyzerNRT *)this,local_38);
  if (local_38[0].Object != (FOnsetNRTResult *)0x0) {
    if (local_38[0].Object == (FOnsetNRTResult *)0x0) {
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
    bVar2 = Audio::FOnsetNRTResult::ContainsChannel(local_38[0].Object,param_3);
    if (bVar2) {
      if (local_38[0].Object == (FOnsetNRTResult *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      ::`anonymous_namespace'::AddOnsetsInRange
                (local_38[0].Object,param_1,param_2,param_3,param_4,param_5);
    }
    else if (2 < (byte)LogAudioSynesthesia._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioSynesthesia);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38[0].SharedReferenceCount.ReferenceController);
  return;
}

// GetNormalizedChannelOnsetsBetweenTimes @ 14d823250

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UOnsetNRT::GetNormalizedChannelOnsetsBetweenTimes
          (UOnsetNRT *this,float param_1,float param_2,int param_3,
          TArray<float,TSizedDefaultAllocator<32>_> *param_4,
          TArray<float,TSizedDefaultAllocator<32>_> *param_5)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar5;
  bool bVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_48 [4];
  float local_44;
  TSharedPtr<Audio::FOnsetNRTResult_const_,1> local_40 [3];
  
  pTVar4 = param_4;
  param_4->ArrayNum = 0;
  if (param_4->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
  }
  pTVar5 = param_5;
  param_5->ArrayNum = 0;
  if (param_5->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_5->AllocatorInstance,0,&param_5->ArrayMax);
  }
  UAudioAnalyzerNRT::GetResult<Audio::FOnsetNRTResult>((UAudioAnalyzerNRT *)this,local_40);
  if (local_40[0].Object != (FOnsetNRTResult *)0x0) {
    if (local_40[0].Object == (FOnsetNRTResult *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    bVar6 = Audio::FOnsetNRTResult::ContainsChannel(local_40[0].Object,param_3);
    if (bVar6) {
      if (local_40[0].Object == (FOnsetNRTResult *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      ::`anonymous_namespace'::AddOnsetsInRange
                (local_40[0].Object,param_1,param_2,param_3,pTVar4,pTVar5);
      if (local_40[0].Object == (FOnsetNRTResult *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      Audio::FOnsetNRTResult::GetChannelOnsetInterval(local_40[0].Object,(int)local_48);
      if (0.0 < local_44) {
        pFVar7 = (pTVar5->AllocatorInstance).Data;
        iVar2 = pTVar5->ArrayNum;
        pFVar1 = pFVar7 + (longlong)iVar2 * 4;
        while( true ) {
          if (pTVar5->ArrayNum != iVar2) {
            `TCheckedPointerIterator<float,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&param_4);
          }
          if (pFVar7 == pFVar1) break;
          *(float *)pFVar7 = *(float *)pFVar7 / local_44;
          pFVar7 = pFVar7 + 4;
        }
      }
    }
    else if (2 < (byte)LogAudioSynesthesia._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioSynesthesia);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40[0].SharedReferenceCount.ReferenceController);
  return;
}

// GetPrivateStaticClass @ 14d8241e0

UClass * __cdecl UOnsetNRT::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOnsetNRT.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"OnsetNRT",
               &Z_Registration_Info_UClass_UOnsetNRT.InnerSingleton,StaticRegisterNativesUOnsetNRT,
               0x80,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UOnsetNRT>,
               InternalVTableHelperCtorCaller<UOnsetNRT>,local_res8,
               UAudioSynesthesiaNRT::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOnsetNRT.InnerSingleton;
}

// GetSettings @ 14d825a40

TUniquePtr<Audio::IAnalyzerNRTSettings,TDefaultDelete<Audio::IAnalyzerNRTSettings>_> __thiscall
UOnsetNRT::GetSettings(UOnsetNRT *this,float param_1,int param_2)

{
  UOnsetNRTSettings *this_00;
  IAnalyzerNRTSettings IVar1;
  TUniquePtr<Audio::IAnalyzerNRTSettings,TDefaultDelete<Audio::IAnalyzerNRTSettings>_> TVar2;
  IAnalyzerNRTSettings *in_RDX;
  undefined8 *local_res8;
  
  *in_RDX = (IAnalyzerNRTSettings)0x0;
  this_00 = (this->Settings).field0_0x0.DebugPtr;
  if (this_00 != (UOnsetNRTSettings *)0x0) {
    TVar2 = UOnsetNRTSettings::GetSettings(this_00,param_1,param_2);
    if (in_RDX != TVar2.Ptr) {
      IVar1 = *in_RDX;
      *in_RDX = *TVar2.Ptr;
      *TVar2.Ptr = (IAnalyzerNRTSettings)0x0;
      if (IVar1 != (IAnalyzerNRTSettings)0x0) {
        (*(code *)**(undefined8 **)IVar1)(IVar1,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
  }
  return (TUniquePtr<Audio::IAnalyzerNRTSettings,TDefaultDelete<Audio::IAnalyzerNRTSettings>_>)
         in_RDX;
}

// StaticRegisterNativesUOnsetNRT @ 14d8273a0

void __cdecl UOnsetNRT::StaticRegisterNativesUOnsetNRT(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UOnsetNRT_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetChannelOnsetsBetweenTimes @ 14d8287c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UOnsetNRT::execGetChannelOnsetsBetweenTimes(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar8;
  int local_res10 [2];
  float local_res20 [2];
  float local_88 [2];
  TArray<float,TSizedDefaultAllocator<32>_> local_80;
  TArray<float,TSizedDefaultAllocator<32>_> local_70;
  TSharedPtr<Audio::FOnsetNRTResult_const_,1> local_60 [3];
  
  local_88[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_88);
  }
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
  local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.ArrayNum = 0;
  local_70.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  pTVar7 = &local_70;
  if ((TArray<float,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar7 = (TArray<float,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  fVar5 = local_88[0];
  fVar4 = local_res20[0];
  iVar3 = local_res10[0];
  pTVar8 = &local_80;
  if ((TArray<float,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar8 = (TArray<float,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar7->ArrayNum = 0;
  if (pTVar7->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar7->AllocatorInstance,0,&pTVar7->ArrayMax);
  }
  pTVar8->ArrayNum = 0;
  if (pTVar8->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar8->AllocatorInstance,0,&pTVar8->ArrayMax);
  }
  UAudioAnalyzerNRT::GetResult<Audio::FOnsetNRTResult>((UAudioAnalyzerNRT *)param_1,local_60);
  if (local_60[0].Object != (FOnsetNRTResult *)0x0) {
    if (local_60[0].Object == (FOnsetNRTResult *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    bVar6 = Audio::FOnsetNRTResult::ContainsChannel(local_60[0].Object,iVar3);
    if (bVar6) {
      if (local_60[0].Object == (FOnsetNRTResult *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L"");
        if (bVar6) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      ::`anonymous_namespace'::AddOnsetsInRange(local_60[0].Object,fVar5,fVar4,iVar3,pTVar7,pTVar8);
    }
    else if (2 < (byte)LogAudioSynesthesia._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioSynesthesia);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60[0].SharedReferenceCount.ReferenceController);
  if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.AllocatorInstance.Data);
  }
  if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.AllocatorInstance.Data);
  }
  return;
}

// execGetNormalizedChannelOnsetsBetweenTimes @ 14d829400

void __cdecl
UOnsetNRT::execGetNormalizedChannelOnsetsBetweenTimes
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  int local_res10 [2];
  float local_res20 [2];
  float local_48 [2];
  TArray<float,TSizedDefaultAllocator<32>_> local_40;
  TArray<float,TSizedDefaultAllocator<32>_> local_30;
  
  local_48[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
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
  local_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.ArrayNum = 0;
  local_30.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_30);
  }
  local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ArrayNum = 0;
  local_40.ArrayMax = 0;
  pTVar3 = &local_30;
  if ((TArray<float,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<float,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  pTVar2 = &local_40;
  if ((TArray<float,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<float,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetNormalizedChannelOnsetsBetweenTimes
            ((UOnsetNRT *)param_1,local_48[0],local_res20[0],local_res10[0],pTVar3,pTVar2);
  if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  return;
}

