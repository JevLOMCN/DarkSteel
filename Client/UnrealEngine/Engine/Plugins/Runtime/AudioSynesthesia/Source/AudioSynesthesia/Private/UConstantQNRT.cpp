// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesia
// Functions: 12

// StaticClass @ 14d814400

UClass * __cdecl UConstantQNRT::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UConstantQNRT.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"ConstantQNRT",
               &Z_Registration_Info_UClass_UConstantQNRT.InnerSingleton,
               StaticRegisterNativesUConstantQNRT,0x80,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UConstantQNRT>,InternalVTableHelperCtorCaller<UConstantQNRT>,
               local_res8,UAudioSynesthesiaNRT::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UConstantQNRT.InnerSingleton;
}

// UConstantQNRT @ 14d81b000

UConstantQNRT * __thiscall UConstantQNRT::UConstantQNRT(UConstantQNRT *this,FVTableHelper *param_1)

{
  UAudioAnalyzerNRT::UAudioAnalyzerNRT((UAudioAnalyzerNRT *)this,param_1);
  this->_padding_ = (longlong)&___7UConstantQNRT__6B_;
  (this->Settings).field0_0x0.DebugPtr = (UConstantQNRTSettings *)0x0;
  return this;
}

// UConstantQNRT @ 14d81b030

UConstantQNRT * __thiscall UConstantQNRT::UConstantQNRT(UConstantQNRT *this)

{
  FName FVar1;
  FObjectInitializer *pFVar2;
  FName *pFVar3;
  UClass *pUVar4;
  UConstantQNRTSettings *pUVar5;
  FName local_res8;
  
  pFVar2 = FObjectInitializer::Get();
  UAudioAnalyzerNRT::UAudioAnalyzerNRT((UAudioAnalyzerNRT *)this,pFVar2);
  this->_padding_ = (longlong)&___7UConstantQNRT__6B_;
  (this->Settings).field0_0x0.DebugPtr = (UConstantQNRTSettings *)0x0;
  pFVar3 = ::FName::FName(&local_res8,L"DefaultConstantQNRTSettings");
  FVar1 = *pFVar3;
  pUVar4 = UConstantQNRTSettings::StaticClass();
  pUVar5 = (UConstantQNRTSettings *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar1,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UConstantQNRTSettings *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->Settings).field0_0x0.DebugPtr = pUVar5;
  return this;
}

// ~UConstantQNRT @ 14d81c320

void __thiscall UConstantQNRT::~UConstantQNRT(UConstantQNRT *this)

{
  this->_padding_ = (longlong)&___7UAudioSynesthesiaNRT__6B_;
  UAudioAnalyzerNRT::~UAudioAnalyzerNRT((UAudioAnalyzerNRT *)this);
  return;
}

// GetAnalyzerNRTFactoryName @ 14d8218e0

FName __thiscall UConstantQNRT::GetAnalyzerNRTFactoryName(UConstantQNRT *this)

{
  FName in_RDX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&::FactoryName,L"ConstantQNRTFactory");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *(FName *)in_RDX = ::FactoryName;
  return in_RDX;
}

// GetChannelConstantQAtTime @ 14d821ee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UConstantQNRT::GetChannelConstantQAtTime
          (UConstantQNRT *this,float param_1,int param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_> *pTVar3;
  TArrayView<Audio::FConstantQFrame_const_,int> *pTVar4;
  TSharedPtr<Audio::FConstantQNRTResult_const_,1> local_48;
  TArrayView<Audio::FConstantQFrame_const_,int> local_38;
  TArrayView<Audio::FConstantQFrame_const_,int> local_28 [2];
  
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
  }
  UAudioAnalyzerNRT::GetResult<Audio::FConstantQNRTResult>((UAudioAnalyzerNRT *)this,&local_48);
  if (local_48.Object != (FConstantQNRTResult *)0x0) {
    if (local_48.Object == (FConstantQNRTResult *)0x0) {
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
    bVar2 = Audio::FConstantQNRTResult::IsSortedChronologically(local_48.Object);
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ConstantQResult->IsSortedChronologically()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesia\\Private\\ConstantQNRT.cpp"
                         ,0xc4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (local_48.Object == (FConstantQNRTResult *)0x0) {
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
    bVar2 = Audio::FConstantQNRTResult::ContainsChannel(local_48.Object,param_2);
    if (bVar2) {
      if (local_48.Object == (FConstantQNRTResult *)0x0) {
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
      pTVar3 = Audio::FConstantQNRTResult::GetFramesForChannel(local_48.Object,param_2);
      pTVar4 = TArrayView<Audio::FConstantQFrame_const_,int>::
               TArrayView<Audio::FConstantQFrame_const_,int><TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>_const_&,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>_>
                         (local_28,pTVar3);
      local_38.DataPtr = pTVar4->DataPtr;
      local_38.ArrayNum = pTVar4->ArrayNum;
      local_38._12_4_ = *(undefined4 *)&pTVar4->field_0xc;
      ::`anonymous_namespace'::InterpolateSpectrumAtTimestamp(&local_38,param_1,param_3);
    }
    else if (2 < (byte)LogAudioSynesthesia._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioSynesthesia);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  return;
}

// GetNormalizedChannelConstantQAtTime @ 14d822ca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UConstantQNRT::GetNormalizedChannelConstantQAtTime
          (UConstantQNRT *this,float param_1,int param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_> *pTVar5;
  TArrayView<Audio::FConstantQFrame_const_,int> *pTVar6;
  float fVar7;
  undefined1 local_res20 [4];
  float local_res24;
  TSharedPtr<Audio::FConstantQNRTResult_const_,1> local_c8;
  FScriptContainerElement *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  FScriptContainerElement *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  FScriptContainerElement *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  TArrayView<Audio::FConstantQFrame_const_,int> local_88;
  TArrayView<float,int> local_78;
  TArrayView<float,int> local_68;
  TArrayView<float,int> local_58;
  TArrayView<Audio::FConstantQFrame_const_,int> local_48 [3];
  
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
  }
  UAudioAnalyzerNRT::GetResult<Audio::FConstantQNRTResult>((UAudioAnalyzerNRT *)this,&local_c8);
  if (local_c8.Object != (FConstantQNRTResult *)0x0) {
    if (local_c8.Object == (FConstantQNRTResult *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    bVar4 = Audio::FConstantQNRTResult::IsSortedChronologically(local_c8.Object);
    if (!bVar4) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ConstantQResult->IsSortedChronologically()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesia\\Private\\ConstantQNRT.cpp"
                         ,0xdb,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (local_c8.Object == (FConstantQNRTResult *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    bVar4 = Audio::FConstantQNRTResult::ContainsChannel(local_c8.Object,param_2);
    if (bVar4) {
      if (local_c8.Object == (FConstantQNRTResult *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pTVar5 = Audio::FConstantQNRTResult::GetFramesForChannel(local_c8.Object,param_2);
      pTVar6 = TArrayView<Audio::FConstantQFrame_const_,int>::
               TArrayView<Audio::FConstantQFrame_const_,int><TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>_const_&,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>_>
                         (local_48,pTVar5);
      local_88.DataPtr = pTVar6->DataPtr;
      local_88.ArrayNum = pTVar6->ArrayNum;
      local_88._12_4_ = *(undefined4 *)&pTVar6->field_0xc;
      ::`anonymous_namespace'::InterpolateSpectrumAtTimestamp(&local_88,param_1,param_3);
      iStack_b0 = param_3->ArrayNum;
      fVar1 = ((this->Settings).field0_0x0.DebugPtr)->NoiseFloorDb;
      local_b8 = (param_3->AllocatorInstance).Data;
      if (iStack_b0 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      local_78._12_4_ = uStack_ac;
      local_78.ArrayNum = iStack_b0;
      local_78.DataPtr = (float *)local_b8;
      Audio::ArraySubtractByConstantInPlace(&local_78,fVar1);
      if (local_c8.Object == (FConstantQNRTResult *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      Audio::FConstantQNRTResult::GetChannelConstantQInterval(local_c8.Object,(int)local_res20);
      fVar1 = __real_3f800000;
      iVar2 = param_3->ArrayNum;
      local_res24 = local_res24 - ((this->Settings).field0_0x0.DebugPtr)->NoiseFloorDb;
      if (local_res24 <= __real_322bcc77) {
        if (0 < iVar2) {
          memset((param_3->AllocatorInstance).Data,0,(longlong)iVar2 << 2);
        }
      }
      else {
        local_a8 = (param_3->AllocatorInstance).Data;
        fVar7 = __real_3f800000 / local_res24;
        if (iVar2 < 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        local_68._12_4_ = uStack_9c;
        local_68.ArrayNum = iVar2;
        local_68.DataPtr = (float *)local_a8;
        iStack_a0 = iVar2;
        Audio::ArrayMultiplyByConstantInPlace(&local_68,fVar7);
      }
      local_98 = (param_3->AllocatorInstance).Data;
      iVar2 = param_3->ArrayNum;
      if (iVar2 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      local_58._12_4_ = uStack_8c;
      local_58.ArrayNum = iVar2;
      local_58.DataPtr = (float *)local_98;
      iStack_90 = iVar2;
      Audio::ArrayClampInPlace(&local_58,0.0,fVar1);
    }
    else if (2 < (byte)LogAudioSynesthesia._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioSynesthesia);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.SharedReferenceCount.ReferenceController);
  return;
}

// GetPrivateStaticClass @ 14d823820

UClass * __cdecl UConstantQNRT::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UConstantQNRT.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioSynesthesia",L"ConstantQNRT",
               &Z_Registration_Info_UClass_UConstantQNRT.InnerSingleton,
               StaticRegisterNativesUConstantQNRT,0x80,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UConstantQNRT>,InternalVTableHelperCtorCaller<UConstantQNRT>,
               local_res8,UAudioSynesthesiaNRT::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UConstantQNRT.InnerSingleton;
}

// GetSettings @ 14d824560

TUniquePtr<Audio::IAnalyzerNRTSettings,TDefaultDelete<Audio::IAnalyzerNRTSettings>_> __thiscall
UConstantQNRT::GetSettings(UConstantQNRT *this,float param_1,int param_2)

{
  UConstantQNRTSettings *this_00;
  IAnalyzerNRTSettings IVar1;
  TUniquePtr<Audio::IAnalyzerNRTSettings,TDefaultDelete<Audio::IAnalyzerNRTSettings>_> TVar2;
  IAnalyzerNRTSettings *in_RDX;
  undefined8 *local_res8;
  
  *in_RDX = (IAnalyzerNRTSettings)0x0;
  this_00 = (this->Settings).field0_0x0.DebugPtr;
  if (this_00 != (UConstantQNRTSettings *)0x0) {
    TVar2 = UConstantQNRTSettings::GetSettings(this_00,param_1,param_2);
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

// StaticRegisterNativesUConstantQNRT @ 14d827240

void __cdecl UConstantQNRT::StaticRegisterNativesUConstantQNRT(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UConstantQNRT_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetChannelConstantQAtTime @ 14d8282b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UConstantQNRT::execGetChannelConstantQAtTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  int iVar3;
  float fVar4;
  bool bVar5;
  TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_> *pTVar6;
  TArrayView<Audio::FConstantQFrame_const_,int> *pTVar7;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar8;
  int local_res10 [4];
  float local_res20 [2];
  TSharedPtr<Audio::FConstantQNRTResult_const_,1> local_78;
  TArray<float,TSizedDefaultAllocator<32>_> local_68;
  TArrayView<Audio::FConstantQFrame_const_,int> local_58;
  TArrayView<Audio::FConstantQFrame_const_,int> local_48 [2];
  
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
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = 0;
  local_68.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  fVar4 = local_res20[0];
  iVar3 = local_res10[0];
  pTVar8 = &local_68;
  if ((TArray<float,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar8 = (TArray<float,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar8->ArrayNum = 0;
  if (pTVar8->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar8->AllocatorInstance,0,&pTVar8->ArrayMax);
  }
  UAudioAnalyzerNRT::GetResult<Audio::FConstantQNRTResult>((UAudioAnalyzerNRT *)param_1,&local_78);
  if (local_78.Object != (FConstantQNRTResult *)0x0) {
    if (local_78.Object == (FConstantQNRTResult *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    bVar5 = Audio::FConstantQNRTResult::IsSortedChronologically(local_78.Object);
    if (!bVar5) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ConstantQResult->IsSortedChronologically()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesia\\Private\\ConstantQNRT.cpp"
                         ,0xc4,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (local_78.Object == (FConstantQNRTResult *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    bVar5 = Audio::FConstantQNRTResult::ContainsChannel(local_78.Object,iVar3);
    if (bVar5) {
      if (local_78.Object == (FConstantQNRTResult *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pTVar6 = Audio::FConstantQNRTResult::GetFramesForChannel(local_78.Object,iVar3);
      pTVar7 = TArrayView<Audio::FConstantQFrame_const_,int>::
               TArrayView<Audio::FConstantQFrame_const_,int><TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>_const_&,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>_>
                         (local_48,pTVar6);
      local_58.DataPtr = pTVar7->DataPtr;
      local_58.ArrayNum = pTVar7->ArrayNum;
      local_58._12_4_ = *(undefined4 *)&pTVar7->field_0xc;
      ::`anonymous_namespace'::InterpolateSpectrumAtTimestamp(&local_58,fVar4,pTVar8);
    }
    else if (2 < (byte)LogAudioSynesthesia._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudioSynesthesia);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  return;
}

// execGetNormalizedChannelConstantQAtTime @ 14d829190

void __cdecl
UConstantQNRT::execGetNormalizedChannelConstantQAtTime
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar2;
  int local_res10 [2];
  float local_res20 [2];
  TArray<float,TSizedDefaultAllocator<32>_> local_18;
  
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
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<float,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<float,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  GetNormalizedChannelConstantQAtTime((UConstantQNRT *)param_1,local_res20[0],local_res10[0],pTVar2)
  ;
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

