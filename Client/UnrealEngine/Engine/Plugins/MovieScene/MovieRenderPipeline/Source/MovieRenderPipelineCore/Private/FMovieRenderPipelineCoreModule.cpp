// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 12

// StartupModule @ 14dd5fb80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMovieRenderPipelineCoreModule::StartupModule(FMovieRenderPipelineCoreModule *this)

{
  bool bVar1;
  
  bVar1 = IsTryingToRenderMovieFromCommandLine
                    (this,&this->SequenceAssetValue,&this->SettingsAssetValue,
                     &this->MoviePipelineLocalExecutorClassType,&this->MoviePipelineClassType);
  if (bVar1) {
    if (4 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>::
    AddRaw<FMovieRenderPipelineCoreModule>
              ((TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy> *)
               &FCoreUObjectDelegates::PostLoadMapWithWorld,
               (FMovieRenderPipelineCoreModule *)&stack0x00000008,(pmf_d2cc599c)this);
  }
  return;
}

// ShutdownModule @ 14dd5fbf0

void __thiscall FMovieRenderPipelineCoreModule::ShutdownModule(FMovieRenderPipelineCoreModule *this)

{
  return;
}

// InitializeCommandLineMovieRender @ 14dd8f5e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FMovieRenderPipelineCoreModule::InitializeCommandLineMovieRender
          (FMovieRenderPipelineCoreModule *this)

{
  FScriptContainerElement *_Src;
  FName this_00;
  UMoviePipelineQueue *pUVar1;
  uchar uVar2;
  bool bVar3;
  FUObjectItem *this_01;
  longlong lVar4;
  FName local_res8;
  UMoviePipelineQueue *local_res10;
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  FString local_48;
  
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_res10 = (UMoviePipelineQueue *)0x0;
  uVar2 = ParseMovieRenderData
                    (this,&this->SequenceAssetValue,&this->SettingsAssetValue,
                     &this->MoviePipelineLocalExecutorClassType,&this->MoviePipelineClassType,
                     &local_res10,(UMoviePipelineExecutorBase **)&local_res8);
  this_00 = local_res8;
  if ((local_res8 == (FName)0x0) &&
     (bVar3 = `FMovieRenderPipelineCoreModule::InitializeCommandLineMovieRender'::__l3::<lambda_1>::
              operator()(&local_res8), !bVar3)) {
    FWindowsPlatformMisc::RequestExitWithStatus(false,uVar2,(wchar_t *)0x0);
    return;
  }
  if (4 < (byte)LogMovieRenderPipeline._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
  }
  pUVar1 = local_res10;
  if (local_res10 == (UMoviePipelineQueue *)0x0) {
    if ((byte)LogMovieRenderPipeline._0_1_ < 5) goto LAB_14dd8f7ae;
    local_res8 = *(FName *)(*(longlong *)((longlong)this_00 + 0x10) + 0x18);
    ::FName::ToString(&local_res8,&local_48);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
  }
  else {
    if ((byte)LogMovieRenderPipeline._0_1_ < 5) goto LAB_14dd8f7ae;
    local_res8 = *(FName *)(*(longlong *)((longlong)this_00 + 0x10) + 0x18);
    ::FName::ToString(&local_res8,&local_48);
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50 = (pUVar1->Jobs).ArrayNum;
    lVar4 = (longlong)local_50;
    _Src = (pUVar1->Jobs).AllocatorInstance.Data;
    if (local_50 == 0) {
      local_4c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_50,0,&local_58,local_50,&local_4c);
      memcpy(local_58.Data,_Src,lVar4 << 3);
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
LAB_14dd8f7ae:
  this_01 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)this_00 + 0xc));
  FUObjectItem::SetRootFlags(this_01,RootSet);
  TMulticastDelegateRegistration<void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
  ::AddRaw<FMovieRenderPipelineCoreModule>
            ((TMulticastDelegateRegistration<void___cdecl(UMoviePipelineExecutorBase_*,bool),FDefaultDelegateUserPolicy>
              *)((longlong)this_00 + 0x40),(FMovieRenderPipelineCoreModule *)&local_res8,
             (pmf_7a984bd0)this);
  TMulticastDelegateRegistration<void___cdecl(UMoviePipelineExecutorBase_*,UMoviePipeline_*,bool,FText),FDefaultDelegateUserPolicy>
  ::AddRaw<FMovieRenderPipelineCoreModule>
            ((TMulticastDelegateRegistration<void___cdecl(UMoviePipelineExecutorBase_*,UMoviePipeline_*,bool,FText),FDefaultDelegateUserPolicy>
              *)((longlong)this_00 + 0x78),(FMovieRenderPipelineCoreModule *)&local_res8,
             (pmf_67e9bf41)this);
  UMoviePipelineExecutorBase::Execute((UMoviePipelineExecutorBase *)this_00,pUVar1);
  return;
}

// IsTryingToRenderMovieFromCommandLine @ 14dd900d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMovieRenderPipelineCoreModule::IsTryingToRenderMovieFromCommandLine
          (FMovieRenderPipelineCoreModule *this,FString *param_1,FString *param_2,FString *param_3,
          FString *param_4)

{
  int iVar1;
  wchar_t *pwVar2;
  int iVar3;
  int iVar4;
  FString local_28;
  FString local_18;
  
  pwVar2 = FCommandLine::Get();
  FParse::Value(pwVar2,L"-LevelSequence=",param_1,true,(wchar_t **)0x0);
  pwVar2 = FCommandLine::Get();
  FParse::Value(pwVar2,L"-MoviePipelineConfig=",param_2,true,(wchar_t **)0x0);
  pwVar2 = FCommandLine::Get();
  FParse::Value(pwVar2,L"-MoviePipelineLocalExecutorClass=",param_3,true,(wchar_t **)0x0);
  pwVar2 = FCommandLine::Get();
  FParse::Value(pwVar2,L"-MoviePipelineClass=",param_4,true,(wchar_t **)0x0);
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = 0;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = iVar3;
  }
  if (iVar4 < 1) {
    iVar1 = (param_2->Data).ArrayNum;
    iVar4 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar4 = iVar3;
    }
    if (iVar4 < 1) {
      iVar1 = (param_3->Data).ArrayNum;
      iVar4 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar4 = iVar3;
      }
      if (iVar4 < 1) {
        iVar1 = (param_4->Data).ArrayNum;
        iVar4 = iVar1 + -1;
        if (iVar1 == 0) {
          iVar4 = iVar3;
        }
        if (iVar4 < 1) {
          return false;
        }
      }
    }
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  pwVar2 = FCommandLine::Get();
  FParse::Value(pwVar2,L"-MovieSceneCaptureType=",&local_18,true,(wchar_t **)0x0);
  if (local_18.Data.ArrayNum < 2) {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    pwVar2 = FCommandLine::Get();
    FParse::Value(pwVar2,L"-MovieSceneCaptureManifest=",&local_28,true,(wchar_t **)0x0);
    if (local_28.Data.ArrayNum < 2) {
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return true;
      }
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return true;
    }
    if (2 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  else if (2 < (byte)LogMovieRenderPipeline._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// OnCommandLineMovieRenderCompleted @ 14dd90680

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FMovieRenderPipelineCoreModule::OnCommandLineMovieRenderCompleted
          (FMovieRenderPipelineCoreModule *this,UMoviePipelineExecutorBase *param_1,bool param_2)

{
  FUObjectItem *this_00;
  
  if (param_1 != (UMoviePipelineExecutorBase *)0x0) {
    this_00 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)((longlong)&param_1->_padding_ + 4));
    FUObjectItem::ClearRootFlags(this_00,RootSet);
  }
  FWindowsPlatformMisc::RequestExitWithStatus(false,'\0',(wchar_t *)0x0);
  return;
}

// OnCommandLineMovieRenderErrored @ 14dd906c0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieRenderPipelineCoreModule::OnCommandLineMovieRenderErrored
          (FMovieRenderPipelineCoreModule *this,UMoviePipelineExecutorBase *param_1,
          UMoviePipeline *param_2,bool param_3,FText *param_4)

{
  ITextData *pIVar1;
  
  if (1 < (byte)LogMovieRenderPipeline._0_1_) {
    FText::ToString(param_4);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
  }
  pIVar1 = (param_4->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014dd90711. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x10))();
    return;
  }
  return;
}

// OnMapLoadFinished @ 14dd91660

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FMovieRenderPipelineCoreModule::OnMapLoadFinished
          (FMovieRenderPipelineCoreModule *this,UWorld *param_1)

{
  code *pcVar1;
  bool bVar2;
  FTimerManager *this_00;
  undefined8 *puVar3;
  ulong64 uVar4;
  FDelegateAllocation local_28;
  undefined1 local_18;
  FDelegateAllocation *local_10;
  
  if (param_1 != (UWorld *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FCoreUObjectDelegates::PostLoadMapWithWorld,this);
    this_00 = UWorld::GetTimerManager(param_1);
    local_28.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_28.DelegateSize = 0;
    local_18 = 0;
    local_10 = &local_28;
    puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_28);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__PEAVUWorld____6B_
      ;
      puVar3[1] = param_1;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseRawMethodDelegateInstance__0A_VFMovieRenderPipelineCoreModule____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy__PEAVUWorld____6B_
      ;
      puVar3[4] = QueueInitialize;
      puVar3[3] = this;
      if ((this == (FMovieRenderPipelineCoreModule *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InUserObject != nullptr && MethodPtr != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                             ,0x1d8,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FTimerManager::SetTimerForNextTick
              (this_00,(TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> *)
                       &stack0x00000010);
    if (local_28.DelegateSize != 0) {
      if (local_28.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        return;
      }
      (*(code *)**(undefined8 **)local_28.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_28,0,0,0x10);
      local_28.DelegateSize = 0;
    }
    if (local_28.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_28.DelegateAllocator);
    }
  }
  return;
}

// ParseMovieRenderData @ 14dd95360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

uchar __thiscall
FMovieRenderPipelineCoreModule::ParseMovieRenderData
          (FMovieRenderPipelineCoreModule *this,FString *param_1,FString *param_2,FString *param_3,
          FString *param_4,UMoviePipelineQueue **param_5,UMoviePipelineExecutorBase **param_6)

{
  UMoviePipelinePrimaryConfig *pUVar1;
  longlong lVar2;
  UMoviePipelineExecutorBase **ppUVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  UClass *pUVar9;
  FString *pFVar10;
  UMoviePipelineQueue *pUVar11;
  UObject *pUVar12;
  UMoviePipelineExecutorJob *pUVar13;
  UWorld *pUVar14;
  wchar_t *pwVar15;
  size_t sVar16;
  UPackage *pUVar17;
  UMoviePipelineExecutorBase *pUVar18;
  longlong *plVar19;
  uchar uVar20;
  int iVar21;
  undefined1 auStackY_1f8 [32];
  FString local_1b8;
  TStringView<wchar_t> local_1a8;
  undefined1 local_198 [16];
  TStringView<wchar_t> local_188;
  FSoftObjectPath local_178;
  FSoftObjectPath local_158;
  FString local_138;
  FString local_128;
  UMoviePipelineExecutorBase **local_118;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_1a8.DataPtr = (wchar_t *)param_5;
  local_118 = param_6;
  ::FString::FString(&local_e0,
                     L"Level Sequence/Queue Asset should be specified in the format \'-LevelSequence=\"/Game/MySequences/MySequence.MySequence\""
                    );
  ::FString::FString(&local_f0,
                     L"Pipeline Config Asset should be specified in the format \'-MoviePipelineConfig=\"/Game/MyRenderSettings/MyHighQualitySetting.MyHighQualitySetting\"\'"
                    );
  ::FString::FString(&local_100,
                     L"Movie Pipeline Class should be specified in the format \'-MoviePipelineClass=\"/Script/ModuleName.ClassNameNoUPrefix\"\'"
                    );
  ::FString::FString(&local_110,
                     L"Pipeline Executor Class should be specified in the format \'-MoviePipelineLocalExecutorClass=\"/Script/ModuleName.ClassNameNoUPrefix\"\'"
                    );
  FVar4.Data = local_110.Data.AllocatorInstance.Data;
  *param_5 = (UMoviePipelineQueue *)0x0;
  *param_6 = (UMoviePipelineExecutorBase *)0x0;
  local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.Data.ArrayNum = local_110.Data.ArrayNum;
  if (local_110.Data.ArrayNum == 0) {
    local_138.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_110.Data.ArrayNum,0,(ForAnyElementType *)&local_138,local_110.Data.ArrayNum
               ,&local_138.Data.ArrayMax);
    memcpy(local_138.Data.AllocatorInstance.Data,FVar4.Data,(longlong)local_110.Data.ArrayNum * 2);
  }
  pUVar6 = GetLocalExecutorClass(&this->MoviePipelineLocalExecutorClassType,&local_138);
  FVar4.Data = local_100.Data.AllocatorInstance.Data;
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.Data.ArrayNum = local_100.Data.ArrayNum;
  if (local_100.Data.ArrayNum == 0) {
    local_128.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_100.Data.ArrayNum,0,(ForAnyElementType *)&local_128,local_100.Data.ArrayNum
               ,&local_128.Data.ArrayMax);
    memcpy(local_128.Data.AllocatorInstance.Data,FVar4.Data,(longlong)local_100.Data.ArrayNum * 2);
  }
  pUVar7 = GetMoviePipelineClass(&this->MoviePipelineClassType,&local_128);
  if (((pUVar7 == (UClass *)0x0) || (pUVar6 == (UClass *)0x0)) &&
     (bVar5 = `FMovieRenderPipelineCoreModule::ParseMovieRenderData'::__l3::<lambda_1>::operator()
                        (local_198), !bVar5)) {
    uVar20 = '\x01';
    goto LAB_14dd95afc;
  }
  iVar21 = (param_1->Data).ArrayNum;
  if ((iVar21 != 0) && (iVar21 = iVar21 + -1, 0 < iVar21)) {
    local_1b8.Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
    local_1b8.Data.ArrayNum = iVar21;
    local_188.Size = iVar21;
    local_188._12_4_ = local_1b8.Data.ArrayMax;
    local_178.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_178.AssetPath.PackageName.Number = 0;
    local_178.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_178.AssetPath.AssetName.Number = 0;
    local_178.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_178.SubPathString.Data.ArrayNum = 0;
    local_178.SubPathString.Data.ArrayMax = 0;
    local_188.DataPtr = (wchar_t *)local_1b8.Data.AllocatorInstance.Data;
    FSoftObjectPath::SetPath(&local_178,&local_188);
    pUVar8 = FSoftObjectPath::TryLoad(&local_178,(FUObjectSerializeContext *)0x0);
    if (pUVar8 != (UObject *)0x0) {
      pUVar9 = Z_Construct_UClass_ULevelSequence_NoRegister();
      iVar21 = (int)pUVar9->_padding_;
      if ((iVar21 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar21 * 8) ==
          &pUVar9->_padding_)) {
        if (local_178.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.SubPathString.Data.AllocatorInstance.Data);
        }
        goto LAB_14dd9557e;
      }
    }
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    if (2 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
    if (local_178.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.SubPathString.Data.AllocatorInstance.Data);
    }
    uVar20 = '\x02';
    goto LAB_14dd95afc;
  }
LAB_14dd9557e:
  iVar21 = (param_2->Data).ArrayNum;
  if ((iVar21 != 0) && (0 < iVar21 + -1)) {
    pFVar10 = FPackageName::GetTextAssetPackageExtension();
    iVar21 = (pFVar10->Data).ArrayNum;
    if (iVar21 == 0) {
      pwVar15 = L"";
      iVar21 = 0;
    }
    else {
      pwVar15 = (wchar_t *)(pFVar10->Data).AllocatorInstance.Data;
      iVar21 = iVar21 + -1;
    }
    bVar5 = ::FString::EndsWith(param_2,pwVar15,iVar21,IgnoreCase);
    if (bVar5) {
      pUVar11 = UMoviePipelineBlueprintLibrary::LoadManifestFileFromString(param_2);
      *param_5 = pUVar11;
      if (pUVar11 == (UMoviePipelineQueue *)0x0) {
        UE::Logging::Private::BasicFatalLog
                  (&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
        uVar20 = '\x03';
        goto LAB_14dd95afc;
      }
    }
    else {
      local_1b8.Data.AllocatorInstance.Data = (param_2->Data).AllocatorInstance.Data;
      iVar21 = (param_2->Data).ArrayNum;
      local_178.AssetPath.PackageName.ComparisonIndex.Value = 0;
      local_178.AssetPath.PackageName.Number = 0;
      local_178.AssetPath.AssetName.ComparisonIndex.Value = 0;
      local_178.AssetPath.AssetName.Number = 0;
      local_178.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_178.SubPathString.Data.ArrayNum = 0;
      local_178.SubPathString.Data.ArrayMax = 0;
      local_188.Size = iVar21 + -1;
      if (iVar21 == 0) {
        local_188.Size = 0;
      }
      local_1b8.Data.ArrayNum = local_188.Size;
      local_188._12_4_ = local_1b8.Data.ArrayMax;
      local_188.DataPtr = (wchar_t *)local_1b8.Data.AllocatorInstance.Data;
      FSoftObjectPath::SetPath(&local_178,&local_188);
      pUVar11 = (UMoviePipelineQueue *)
                FSoftObjectPath::TryLoad(&local_178,(FUObjectSerializeContext *)0x0);
      if (pUVar11 == (UMoviePipelineQueue *)0x0) {
LAB_14dd956eb:
        pUVar8 = FSoftObjectPath::TryLoad(&local_178,(FUObjectSerializeContext *)0x0);
        param_5 = (UMoviePipelineQueue **)local_1a8.DataPtr;
        if (pUVar8 != (UObject *)0x0) {
          pUVar9 = UMoviePipelinePrimaryConfig::StaticClass();
          iVar21 = (int)pUVar9->_padding_;
          param_5 = (UMoviePipelineQueue **)local_1a8.DataPtr;
          if ((iVar21 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar21 * 8) ==
              &pUVar9->_padding_)) {
            pUVar12 = GetTransientPackageAsObject();
            FObjectInitializer::AssertIfInConstructor
                      (pUVar12,
                       L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                      );
            pUVar9 = UMoviePipelineQueue::StaticClass();
            FStaticConstructObjectParameters::FStaticConstructObjectParameters
                      ((FStaticConstructObjectParameters *)local_c8,pUVar9);
            local_c8._8_8_ = pUVar12;
            pUVar11 = (UMoviePipelineQueue *)
                      StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
            if (local_c8._64_8_ != 0) {
              plVar19 = (longlong *)(local_c8 + 0x50);
              if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
                plVar19 = (longlong *)local_c8._104_8_;
              }
              (**(code **)(*plVar19 + 0x10))();
            }
            *(UMoviePipelineQueue **)local_1a8.DataPtr = pUVar11;
            local_1b8.Data.AllocatorInstance.Data =
                 (FScriptContainerElement *)UMoviePipelineExecutorJob::StaticClass();
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               ((UClass *)local_1b8.Data.AllocatorInstance.Data != (UClass *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_1b8.Data.AllocatorInstance.Data);
            }
            pUVar13 = UMoviePipelineQueue::AllocateNewJob
                                (pUVar11,(TSubclassOf<UMoviePipelineExecutorJob>)&local_1b8);
            local_1b8.Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
            iVar21 = (param_1->Data).ArrayNum;
            local_158.AssetPath.PackageName.ComparisonIndex.Value = 0;
            local_158.AssetPath.PackageName.Number = 0;
            local_158.AssetPath.AssetName.ComparisonIndex.Value = 0;
            local_158.AssetPath.AssetName.Number = 0;
            local_158.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_188.Size = iVar21 + -1;
            local_158.SubPathString.Data.ArrayNum = 0;
            local_158.SubPathString.Data.ArrayMax = 0;
            if (iVar21 == 0) {
              local_188.Size = 0;
            }
            local_1b8.Data.ArrayNum = local_188.Size;
            local_188._12_4_ = local_1b8.Data.ArrayMax;
            local_188.DataPtr = (wchar_t *)local_1b8.Data.AllocatorInstance.Data;
            FSoftObjectPath::SetPath(&local_158,&local_188);
            FSoftObjectPath::operator=(&pUVar13->Sequence,&local_158);
            if (local_158.SubPathString.Data.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_158.SubPathString.Data.AllocatorInstance.Data);
            }
            pUVar1 = (pUVar13->Configuration).field0_0x0.DebugPtr;
            (**(code **)(pUVar1->_padding_ + 0x2b8))(pUVar1,pUVar8);
            local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            FSoftObjectPtr::operator=(&(pUVar13->PresetOrigin).SoftObjectPtr,(FObjectPtr)&local_1b8)
            ;
            pUVar14 = MoviePipeline::FindCurrentWorld();
            param_5 = (UMoviePipelineQueue **)local_1a8.DataPtr;
            if (pUVar14 != (UWorld *)0x0) {
              local_158.AssetPath.PackageName.ComparisonIndex.Value = 0;
              local_158.AssetPath.PackageName.Number = 0;
              local_158.AssetPath.AssetName.ComparisonIndex.Value = 0;
              local_158.AssetPath.AssetName.Number = 0;
              local_158.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_158.SubPathString.Data.ArrayNum = 0;
              local_158.SubPathString.Data.ArrayMax = 0;
              FSoftObjectPath::SetPath(&local_158,(UObject *)pUVar14);
              FSoftObjectPath::operator=(&pUVar13->Map,&local_158);
              param_5 = (UMoviePipelineQueue **)local_1a8.DataPtr;
              if (local_158.SubPathString.Data.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_158.SubPathString.Data.AllocatorInstance.Data);
                param_5 = (UMoviePipelineQueue **)local_1a8.DataPtr;
              }
            }
          }
        }
      }
      else {
        pUVar9 = UMoviePipelineQueue::StaticClass();
        iVar21 = (int)pUVar9->_padding_;
        if ((*(int *)(pUVar11->_padding_ + 0x38) < iVar21) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar21 * 8) !=
            &pUVar9->_padding_)) goto LAB_14dd956eb;
        *param_5 = pUVar11;
      }
      if (local_178.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.SubPathString.Data.AllocatorInstance.Data);
      }
    }
    if (*param_5 == (UMoviePipelineQueue *)0x0) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline)
      ;
      if (2 < (byte)LogMovieRenderPipeline._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline)
        ;
      }
      uVar20 = '\x03';
      goto LAB_14dd95afc;
    }
  }
  pUVar9 = UMoviePipelinePythonHostExecutor::StaticClass();
  if (pUVar6 == pUVar9) {
    pUVar6 = UMoviePipelinePythonHostExecutor::StaticClass();
    if ((pUVar6->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar6);
    }
    pUVar8 = (pUVar6->ClassDefaultObject).field0_0x0.DebugPtr;
    lVar2 = *(longlong *)&pUVar8[8].field_0x8;
    if ((lVar2 == 0) ||
       (pUVar6 = UMoviePipelinePythonHostExecutor::StaticClass(), pUVar6 == (UClass *)0x0)) {
LAB_14dd95973:
      pUVar6 = (UClass *)0x0;
    }
    else {
      iVar21 = (int)pUVar6->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar21) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar21 * 8) !=
          &pUVar6->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) goto LAB_14dd95973;
      pUVar6 = *(UClass **)&pUVar8[8].field_0x8;
      if (pUVar6 != (UClass *)0x0) goto LAB_14dd95a84;
    }
    local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.Data.ArrayNum = 0;
    local_1b8.Data.ArrayMax = 0;
    pwVar15 = FCommandLine::Get();
    FParse::Value(pwVar15,L"-ExecutorPythonClass=",&local_1b8,true,(wchar_t **)0x0);
    if ((local_1b8.Data.ArrayNum != 0) && (0 < local_1b8.Data.ArrayNum + -1)) {
      iVar21 = 0;
      local_1a8.Size = 0;
      local_1a8._12_4_ = 0;
      local_1a8.DataPtr = (wchar_t *)0x0;
      local_188.DataPtr = (wchar_t *)local_1b8.Data.AllocatorInstance.Data;
      if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        sVar16 = wcslen((wchar_t *)local_1b8.Data.AllocatorInstance.Data);
        iVar21 = (int)sVar16;
      }
      local_188.Size = iVar21;
      pUVar17 = GetTransientPackage();
      pUVar6 = Z_Construct_UClass_UMoviePipelineExecutorBase_NoRegister();
      pUVar6 = StaticLoadClass(pUVar6,(UObject *)pUVar17,&local_188,&local_1a8,0,(UPackageMap *)0x0)
      ;
      if (4 < (byte)LogMovieRenderPipeline._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)&PTR_u_Loaded_executor_152d154e0,
                   (FLogCategoryBase *)&LogMovieRenderPipeline);
      }
    }
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    if (pUVar6 == (UClass *)0x0) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline)
      ;
      uVar20 = '\x01';
      goto LAB_14dd95afc;
    }
  }
LAB_14dd95a84:
  local_1a8.DataPtr = (wchar_t *)0x0;
  pUVar17 = GetTransientPackage();
  pUVar18 = NewObject<UMoviePipelineExecutorBase>
                      ((UObject *)pUVar17,pUVar6,(FName)local_1a8.DataPtr,RF_NoFlags,(UObject *)0x0,
                       false,(FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  ppUVar3 = local_118;
  *local_118 = pUVar18;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (pUVar18->TargetPipelineClass).Class.field0_0x0.DebugPtr = pUVar7;
  pUVar11 = *param_5;
  if (pUVar11 != (UMoviePipelineQueue *)0x0) {
    (**(code **)(pUVar11->_padding_ + 0x170))(pUVar11,0,*ppUVar3,0);
  }
  uVar20 = '\0';
LAB_14dd95afc:
  if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data.AllocatorInstance.Data);
  }
  if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data.AllocatorInstance.Data);
  }
  if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f0.Data.AllocatorInstance.Data);
  }
  if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data.AllocatorInstance.Data);
  }
  return uVar20;
}

// QueueInitialize @ 14dd97f40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FMovieRenderPipelineCoreModule::QueueInitialize
          (FMovieRenderPipelineCoreModule *this,UWorld *param_1)

{
  code *pcVar1;
  bool bVar2;
  FTimerManager *this_00;
  undefined8 *puVar3;
  ulong64 uVar4;
  TDelegate<void___cdecl(void),FNotThreadSafeNotCheckedDelegateUserPolicy> local_res18;
  FDelegateAllocation local_28;
  undefined1 local_18;
  FDelegateAllocation *local_10;
  
  this_00 = UWorld::GetTimerManager(param_1);
  local_28.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_28.DelegateSize = 0;
  local_18 = 0;
  local_10 = &local_28;
  puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_28);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMovieRenderPipelineCoreModule____A6AXXZUFNotThreadSafeNotCheckedDelegateUserPolicy____V__6B_
    ;
    puVar3[4] = InitializeCommandLineMovieRender;
    puVar3[3] = this;
    if ((this == (FMovieRenderPipelineCoreModule *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUserObject != nullptr && MethodPtr != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                           ,0x1d8,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FTimerManager::SetTimerForNextTick(this_00,&local_res18);
  if (local_28.DelegateSize != 0) {
    if (local_28.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      return;
    }
    (*(code *)**(undefined8 **)local_28.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_28,0,0,0x10);
    local_28.DelegateSize = 0;
  }
  if (local_28.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_28.DelegateAllocator);
  }
  return;
}

// SetTickInfo @ 14dda4c60

void __cdecl FMovieRenderPipelineCoreModule::SetTickInfo(FMoviePipelineLightweightTickInfo *param_1)

{
  code *pcVar1;
  IModuleInterface IVar2;
  bool bVar3;
  FName *pFVar4;
  FModuleManager *this;
  IModuleInterface *pIVar5;
  FName local_res8;
  FName local_res10;
  FString local_18;
  
  FModuleManager::Get();
  pFVar4 = ::FName::FName(&local_res10,"MovieRenderPipelineCore");
  local_res8 = *pFVar4;
  this = FModuleManager::Get();
  bVar3 = FModuleManager::IsModuleLoaded(this,local_res8);
  if (!bVar3) {
    ::FName::ToString(&local_res8,&local_18);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ModuleManager.IsModuleLoaded(ModuleName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Modules\\ModuleManager.h"
                       ,0x15a,L"Tried to get module interface for unloaded module: \'%s\'");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pIVar5 = FModuleManager::GetModule(this,local_res8);
  IVar2 = *(IModuleInterface *)&param_1->TemporalSampleIndex;
  pIVar5[1] = *(IModuleInterface *)param_1;
  pIVar5[2] = IVar2;
  pIVar5[3] = (IModuleInterface)param_1->SequenceFPS;
  return;
}

// operator() @ 15058e970

bool __thiscall
`FMovieRenderPipelineCoreModule::InitializeCommandLineMovieRender'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3670649084621881299>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3670649084621881299>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15058e9b0

bool __thiscall
`FMovieRenderPipelineCoreModule::ParseMovieRenderData'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3670649084621881111>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3670649084621881111>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

