// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 73

// StaticClass @ 14dc69a70

UClass * __cdecl UMovieGraphBlueprintLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphBlueprintLibrary",
               &Z_Registration_Info_UClass_UMovieGraphBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUMovieGraphBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UMovieGraphBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphBlueprintLibrary.InnerSingleton;
}

// UMovieGraphBlueprintLibrary @ 14dc729b0

UMovieGraphBlueprintLibrary * __thiscall
UMovieGraphBlueprintLibrary::UMovieGraphBlueprintLibrary
          (UMovieGraphBlueprintLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMovieGraphBlueprintLibrary__6B_;
  return this;
}

// UMovieGraphBlueprintLibrary @ 14dc729e0

UMovieGraphBlueprintLibrary * __thiscall
UMovieGraphBlueprintLibrary::UMovieGraphBlueprintLibrary
          (UMovieGraphBlueprintLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMovieGraphBlueprintLibrary__6B_;
  return this;
}

// ~UMovieGraphBlueprintLibrary @ 14dc743b0

void __thiscall
UMovieGraphBlueprintLibrary::~UMovieGraphBlueprintLibrary(UMovieGraphBlueprintLibrary *this)

{
  *(undefined ***)this = &___7UMovieGraphBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 14dc76170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
`UMovieGraphBlueprintLibrary::ResolveVersionNumber'::__l2::<lambda_1>::operator()
          (void *this,FString *param_1)

{
  void *pvVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  FString *pFVar7;
  IFileManager *pIVar8;
  ForAnyElementType _Str;
  wchar_t *pwVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  undefined1 auStackY_1b8 [32];
  FString local_178;
  FString local_168;
  undefined1 local_158 [8];
  FString local_150;
  FString local_140;
  FString local_130;
  undefined1 local_120 [16];
  undefined4 local_110;
  FString local_108;
  FRegexMatcher local_f8;
  undefined1 local_d8 [64];
  void *local_98;
  undefined4 local_90;
  undefined1 local_88 [64];
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  lVar10 = *(longlong *)this;
  local_110 = 0;
  iVar4 = *(int *)(lVar10 + 0xb8) + -1;
  if (*(int *)(lVar10 + 0xb8) == 0) {
    iVar4 = 0;
  }
  iVar12 = 0;
  if (iVar4 < 1) {
    iVar4 = (param_1->Data).ArrayNum;
    lVar10 = *(longlong *)((longlong)this + 8);
    iVar5 = iVar4 + -1;
    if (iVar4 == 0) {
      iVar5 = iVar12;
    }
    if ((*(int *)(lVar10 + 0xc0) != 0) || (iVar4 = 2, iVar5 == -1)) {
      iVar4 = 1;
    }
    local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar6 = *(int *)(lVar10 + 0xc0);
    pvVar1 = *(void **)(lVar10 + 0xb8);
    local_178.Data.ArrayNum = iVar6;
    if ((iVar6 == 0) && (iVar5 + iVar4 == 0)) {
      local_178.Data.ArrayNum = 0;
      local_178.Data.ArrayMax = 0;
    }
    else {
      uVar14 = iVar6 + iVar5 + iVar4;
      if ((int)uVar14 < iVar6) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar14,0,(ForAnyElementType *)&local_178,iVar6,&local_178.Data.ArrayMax);
      if (iVar6 != 0) {
        memcpy(local_178.Data.AllocatorInstance.Data,pvVar1,(longlong)iVar6 * 2);
      }
    }
    ::FString::PathAppend(&local_178,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar5);
    pFVar7 = &local_178;
    bVar2 = false;
    bVar3 = true;
    local_130.Data.AllocatorInstance.Data = local_178.Data.AllocatorInstance.Data;
  }
  else {
    local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar4 = *(int *)(lVar10 + 0xb8);
    pvVar1 = *(void **)(lVar10 + 0xb0);
    local_168.Data.ArrayNum = iVar4;
    if (iVar4 == 0) {
      local_168.Data.ArrayMax = 0;
      pFVar7 = &local_168;
      bVar2 = true;
      bVar3 = false;
      local_130.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar4,0,(ForAnyElementType *)&local_168,iVar4,&local_168.Data.ArrayMax);
      memcpy(local_168.Data.AllocatorInstance.Data,pvVar1,(longlong)iVar4 * 2);
      pFVar7 = &local_168;
      bVar2 = true;
      bVar3 = false;
      local_130.Data.AllocatorInstance.Data = local_168.Data.AllocatorInstance.Data;
    }
  }
  (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130.Data.ArrayNum = (pFVar7->Data).ArrayNum;
  local_130.Data.ArrayMax = (pFVar7->Data).ArrayMax;
  (pFVar7->Data).ArrayNum = 0;
  (pFVar7->Data).ArrayMax = 0;
  if (bVar3) {
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar2) && (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  local_d8._0_8_ = 0;
  local_d8._8_8_ = 0;
  local_d8._32_8_ = 0;
  local_d8._40_4_ = 0;
  local_d8._44_4_ = 0x80;
  local_d8._48_4_ = 0xffffffff;
  local_d8._52_4_ = 0;
  local_98 = (void *)0x0;
  local_90 = 0;
  local_88._0_8_ = 0;
  local_88._8_8_ = 0;
  local_88._32_8_ = 0;
  local_88._40_4_ = 0;
  local_88._44_4_ = 0x80;
  local_88._48_4_ = 0xffffffff;
  local_88._52_4_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  ::`anonymous_namespace'::ResolveFormatArgumentsHelper
            (&local_150,&local_130,*(FMovieGraphFilenameResolveParams **)this,true,
             (FMovieGraphResolveArgs *)local_d8);
  pFVar7 = FPaths::ConvertRelativePathToFull((FString *)local_120,&local_150);
  if (&local_150 != pFVar7) {
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
    local_150.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_150.Data.ArrayNum = (pFVar7->Data).ArrayNum;
    local_150.Data.ArrayMax = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
  }
  if ((FScriptContainerElement *)local_120._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_120._0_8_);
  }
  FPaths::NormalizeFilename(&local_150);
  iVar4 = ::FString::Find(&local_150,L"{version}",9,IgnoreCase,FromStart,-1);
  if (iVar4 != -1) {
    iVar4 = ::FString::Find(&local_150,L"{version}",9,IgnoreCase,FromStart,-1);
    if (-1 < iVar4) {
      iVar5 = ::FString::Find(&local_150,L"/",1,IgnoreCase,FromEnd,iVar4);
      iVar4 = local_150.Data.ArrayNum + -1;
      if (local_150.Data.ArrayNum == 0) {
        iVar4 = iVar12;
      }
      iVar6 = iVar4;
      if (iVar5 + 1 < iVar4) {
        iVar6 = iVar5 + 1;
      }
      iVar5 = iVar12;
      if (0 < iVar6) {
        iVar5 = iVar6;
      }
      ::FString::RemoveAt(&local_150,iVar5,iVar4 - iVar5,Default);
      ::FString::FString(&local_140,L"v([0-9]{3})");
      FRegexPattern::FRegexPattern((FRegexPattern *)local_120,&local_140,None);
      if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data.AllocatorInstance.Data);
      }
      iVar4 = local_150.Data.ArrayNum;
      FVar11.Data = local_150.Data.AllocatorInstance.Data;
      lVar10 = (longlong)local_150.Data.ArrayNum;
      local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_168.Data.ArrayNum = local_150.Data.ArrayNum;
      uVar14 = (5 - (uint)(local_150.Data.ArrayNum != 0)) + local_150.Data.ArrayNum;
      if ((int)uVar14 < local_150.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar14,0,(ForAnyElementType *)&local_168,local_150.Data.ArrayNum,
                 &local_168.Data.ArrayMax);
      if (iVar4 != 0) {
        memcpy(local_168.Data.AllocatorInstance.Data,FVar11.Data,lVar10 * 2);
      }
      ::FString::PathAppend(&local_168,L"*.*",3);
      local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_178.Data.ArrayNum = 0;
      local_178.Data.ArrayMax = 0;
      pIVar8 = IFileManager::Get();
      FVar11.Data = (FScriptContainerElement *)L"";
      if (local_168.Data.ArrayNum != 0) {
        FVar11.Data = local_168.Data.AllocatorInstance.Data;
      }
      (**(code **)((longlong)*pIVar8 + 0x80))(pIVar8,&local_178,FVar11.Data,1);
      iVar4 = local_178.Data.ArrayNum;
      pFVar13 = local_178.Data.AllocatorInstance.Data + (longlong)local_178.Data.ArrayNum * 0x10;
      FVar11.Data = local_178.Data.AllocatorInstance.Data;
      while( true ) {
        if (local_178.Data.ArrayNum != iVar4) {
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_158);
        }
        if (FVar11.Data == pFVar13) break;
        if (*(int *)(FVar11.Data + 8) == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = *(wchar_t **)FVar11.Data;
        }
        ::FString::FString(&local_108,pwVar9);
        FRegexMatcher::FRegexMatcher(&local_f8,(FRegexPattern *)local_120,&local_108);
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        bVar3 = FRegexMatcher::FindNext(&local_f8);
        if (bVar3) {
          FRegexMatcher::GetCaptureGroup(&local_f8,&local_140,0);
          iVar5 = local_140.Data.ArrayNum;
          iVar6 = iVar5 + -1;
          if (iVar5 == 0) {
            iVar6 = iVar12;
          }
          if (0 < iVar6) {
            ::FString::RemoveAt(&local_140,0,1,Default);
            iVar5 = local_140.Data.ArrayNum;
          }
          _Str.Data = (FScriptContainerElement *)L"";
          if (iVar5 != 0) {
            _Str.Data = local_140.Data.AllocatorInstance.Data;
          }
          iVar5 = _wtoi((wchar_t *)_Str.Data);
          if (**(int **)((longlong)this + 0x10) < iVar5) {
            **(int **)((longlong)this + 0x10) = iVar5;
          }
          if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_140.Data.AllocatorInstance.Data);
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_f8.Implementation.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_f8.Pattern.Implementation.SharedReferenceCount.ReferenceController);
        FVar11.Data = FVar11.Data + 0x10;
      }
      DestructItems<FString,int>
                ((FString *)local_178.Data.AllocatorInstance.Data,local_178.Data.ArrayNum);
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_120._8_8_);
    }
  }
  if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Data.AllocatorInstance.Data);
  }
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  local_90 = 0;
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_d8);
  if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data.AllocatorInstance.Data);
  }
  return;
}

// GetBackbufferResolution @ 14dc7ed50

/* WARNING: Enum "Type": Some values do not have unique names */

TIntPoint<int> __cdecl
UMovieGraphBlueprintLibrary::GetBackbufferResolution
          (UMovieGraphEvaluatedConfig *param_1,float param_2,float param_3)

{
  UMovieGraphCameraSettingNode *pUVar1;
  UMovieGraphEvaluatedConfig *in_RDX;
  FName FVar2;
  float extraout_XMM0_Da;
  float fVar3;
  longlong local_res10;
  longlong local_28;
  
  if (in_RDX == (UMovieGraphEvaluatedConfig *)0x0) {
    local_res10 = 0;
    FFrame::KismetExecutionMessage(L"InEvaluatedGraph cannot be null.",Error,(FName)0x0);
    local_28 = 0;
  }
  else {
    GetDesiredOutputResolution((UMovieGraphEvaluatedConfig *)&local_res10,param_2);
    FVar2 = UMovieGraphNode::GlobalsPinName;
    pUVar1 = UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphCameraSettingNode>
                       (in_RDX,UMovieGraphNode::GlobalsPinName,false,false);
    fVar3 = extraout_XMM0_Da;
    if ((pUVar1 != (UMovieGraphCameraSettingNode *)0x0) &&
       (pUVar1->bOverride_OverscanPercentage != '\0')) {
      fVar3 = 0.0;
    }
    UE::MoviePipeline::ScaleResolutionByOverscan(fVar3,(TIntPoint<int> *)FVar2);
  }
  param_1->_padding_ = local_28;
  return (TIntPoint<int>)(TIntPoint<int>_u_0)param_1;
}

// GetCompletionPercentage @ 14dc7f400

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __cdecl UMovieGraphBlueprintLibrary::GetCompletionPercentage(UMovieGraphPipeline *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UMovieGraphTimeStepBase *pUVar3;
  int *piVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  undefined1 local_res8 [8];
  undefined1 local_98 [128];
  
  if (param_1 != (UMovieGraphPipeline *)0x0) {
    iVar7 = 0;
    iVar6 = 0;
    pUVar3 = UMovieGraphPipeline::GetTimeStepInstance(param_1);
    if (pUVar3 != (UMovieGraphTimeStepBase *)0x0) {
      pUVar3 = UMovieGraphPipeline::GetTimeStepInstance(param_1);
      piVar4 = (int *)(**(code **)(*(longlong *)pUVar3 + 0x2c8))(pUVar3,local_98);
      pFVar5 = (param_1->ActiveShotList).AllocatorInstance.Data;
      iVar2 = (param_1->ActiveShotList).ArrayNum;
      iVar7 = *piVar4;
      pFVar1 = pFVar5 + (longlong)iVar2 * 8;
      while( true ) {
        if ((param_1->ActiveShotList).ArrayNum != iVar2) {
          `TCheckedPointerIterator<TObjectPtr<UMoviePipelineExecutorShot>_const_,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(local_res8);
        }
        if (pFVar5 == pFVar1) break;
        iVar6 = iVar6 + *(int *)(*(longlong *)pFVar5 + 0x144);
        pFVar5 = pFVar5 + 8;
      }
    }
    fVar8 = (float)iVar7 / (float)iVar6;
    if (__real_3f800000 <= (float)iVar7 / (float)iVar6) {
      fVar8 = __real_3f800000;
    }
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    return fVar8;
  }
  return 0.0;
}

// GetCurrentAperture @ 14dc7f560

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __cdecl
UMovieGraphBlueprintLibrary::GetCurrentAperture(UMovieGraphPipeline *param_1,int param_2)

{
  UWorld *pUVar1;
  UCineCameraComponent *pUVar2;
  
  if (param_2 == -1) {
    pUVar1 = (UWorld *)(**(code **)(param_1->_padding_ + 0x180))();
    pUVar2 = UMoviePipelineBlueprintLibrary::Utility_GetCurrentCineCamera(pUVar1);
  }
  else {
    pUVar2 = GetCurrentCineCamera(param_1,param_2);
  }
  if (pUVar2 != (UCineCameraComponent *)0x0) {
    return pUVar2->CurrentAperture;
  }
  return 0.0;
}

// GetCurrentCineCamera @ 14dc7f5b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UCineCameraComponent * __cdecl
UMovieGraphBlueprintLibrary::GetCurrentCineCamera(UMovieGraphPipeline *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  UMovieGraphDataSourceBase *pUVar3;
  code *pcVar4;
  bool bVar5;
  UWorld *pUVar6;
  UCineCameraComponent *pUVar7;
  UObject *pUVar8;
  UClass *pUVar9;
  FMinimalCameraInfo *local_18;
  int local_10;
  
  if (param_2 == -1) {
    pUVar6 = (UWorld *)(**(code **)(param_1->_padding_ + 0x180))();
    pUVar7 = UMoviePipelineBlueprintLibrary::Utility_GetCurrentCineCamera(pUVar6);
    return pUVar7;
  }
  if (param_1 != (UMovieGraphPipeline *)0x0) {
    iVar1 = param_1->CurrentShotIndex;
    if (((-1 < iVar1) && (iVar1 < (param_1->ActiveShotList).ArrayNum)) &&
       (lVar2 = *(longlong *)
                 ((param_1->ActiveShotList).AllocatorInstance.Data + (longlong)iVar1 * 8),
       lVar2 != 0)) {
      pUVar3 = (param_1->GraphDataSourceInstance).field0_0x0.DebugPtr;
      (**(code **)(*(longlong *)pUVar3 + 0x330))(pUVar3,&local_18,lVar2,(uint)param_2 >> 0x1f ^ 1);
      if ((param_2 < 0) || (local_10 <= param_2)) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1571528361807707227>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphBlueprintLibrary.cpp"
                           ,0x3a5,"MinimalCameraInfos.IsValidIndex(InCameraIndex)");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pUVar7 = (UCineCameraComponent *)(*pcVar4)();
          return pUVar7;
        }
        pUVar7 = (UCineCameraComponent *)0x0;
LAB_14dc7f6db:
        DestructItems<UE::MovieGraph::FMinimalCameraInfo,int>(local_18,local_10);
        if (local_18 != (FMinimalCameraInfo *)0x0) {
          FMemory::Free(local_18);
        }
        return pUVar7;
      }
      pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_18 + param_2));
      if (pUVar8 != (UObject *)0x0) {
        pUVar9 = Z_Construct_UClass_ACineCameraActor_NoRegister();
        iVar1 = (int)pUVar9->_padding_;
        if ((iVar1 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar9->_padding_)) {
          pUVar7 = *(UCineCameraComponent **)&pUVar8[0x45].field_0x10;
          goto LAB_14dc7f6db;
        }
      }
      DestructItems<UE::MovieGraph::FMinimalCameraInfo,int>(local_18,local_10);
      if (local_18 != (FMinimalCameraInfo *)0x0) {
        FMemory::Free(local_18);
      }
    }
  }
  return (UCineCameraComponent *)0x0;
}

// GetCurrentExecutorShot @ 14dc7f710

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UMoviePipelineExecutorShot * __cdecl
UMovieGraphBlueprintLibrary::GetCurrentExecutorShot(UMovieGraphPipeline *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UMoviePipelineExecutorShot *pUVar4;
  
  if (param_1 != (UMovieGraphPipeline *)0x0) {
    iVar1 = param_1->CurrentShotIndex;
    if ((-1 < iVar1) && (iVar1 < (param_1->ActiveShotList).ArrayNum)) {
      if (iVar1 < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pUVar4 = (UMoviePipelineExecutorShot *)(*pcVar2)();
          return pUVar4;
        }
      }
      return *(UMoviePipelineExecutorShot **)
              ((param_1->ActiveShotList).AllocatorInstance.Data + (longlong)iVar1 * 8);
    }
  }
  return (UMoviePipelineExecutorShot *)0x0;
}

// GetCurrentFocalLength @ 14dc7f7a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __cdecl
UMovieGraphBlueprintLibrary::GetCurrentFocalLength(UMovieGraphPipeline *param_1,int param_2)

{
  UWorld *pUVar1;
  UCineCameraComponent *pUVar2;
  
  if (param_2 == -1) {
    pUVar1 = (UWorld *)(**(code **)(param_1->_padding_ + 0x180))();
    pUVar2 = UMoviePipelineBlueprintLibrary::Utility_GetCurrentCineCamera(pUVar1);
  }
  else {
    pUVar2 = GetCurrentCineCamera(param_1,param_2);
  }
  if (pUVar2 != (UCineCameraComponent *)0x0) {
    return pUVar2->CurrentFocalLength;
  }
  return __real_bf800000;
}

// GetCurrentFocusDistance @ 14dc7f7f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __cdecl
UMovieGraphBlueprintLibrary::GetCurrentFocusDistance(UMovieGraphPipeline *param_1,int param_2)

{
  UWorld *pUVar1;
  UCineCameraComponent *pUVar2;
  
  if (param_2 == -1) {
    pUVar1 = (UWorld *)(**(code **)(param_1->_padding_ + 0x180))();
    pUVar2 = UMoviePipelineBlueprintLibrary::Utility_GetCurrentCineCamera(pUVar1);
  }
  else {
    pUVar2 = GetCurrentCineCamera(param_1,param_2);
  }
  if (pUVar2 != (UCineCameraComponent *)0x0) {
    return pUVar2->CurrentFocusDistance;
  }
  return __real_bf800000;
}

// GetCurrentSegmentName @ 14dc7f840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UMovieGraphBlueprintLibrary::GetCurrentSegmentName
          (UMovieGraphPipeline *param_1,FText *param_2,FText *param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FText *pFVar5;
  FText local_38;
  FText local_28;
  
  if (param_1 != (UMovieGraphPipeline *)0x0) {
    uVar1 = param_1->CurrentShotIndex;
    if ((int)uVar1 < (param_1->ActiveShotList).ArrayNum) {
      if (((int)uVar1 < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar5 = FText::FromString(&local_38,
                                 (FString *)
                                 (*(longlong *)
                                   ((param_1->ActiveShotList).AllocatorInstance.Data +
                                   (longlong)(int)uVar1 * 8) + 0x30));
      FText::operator=(param_2,pFVar5);
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      }
      uVar4 = 0;
      if ((int)uVar1 < (param_1->ActiveShotList).ArrayNum) {
        uVar4 = ~uVar1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar5 = FText::FromString(&local_28,
                                 (FString *)
                                 (*(longlong *)
                                   ((param_1->ActiveShotList).AllocatorInstance.Data +
                                   (longlong)(int)uVar1 * 8) + 0x40));
      FText::operator=(param_3,pFVar5);
      if (local_28.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
      }
    }
  }
  return;
}

// GetCurrentSegmentState @ 14dc7f990

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EMovieRenderShotState __cdecl
UMovieGraphBlueprintLibrary::GetCurrentSegmentState(UMovieGraphPipeline *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  EMovieRenderShotState EVar4;
  
  if (param_1 != (UMovieGraphPipeline *)0x0) {
    iVar1 = param_1->CurrentShotIndex;
    if (iVar1 < (param_1->ActiveShotList).ArrayNum) {
      if (iVar1 < 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          EVar4 = (*pcVar2)();
          return EVar4;
        }
      }
      return *(EMovieRenderShotState *)
              (*(longlong *)((param_1->ActiveShotList).AllocatorInstance.Data + (longlong)iVar1 * 8)
              + 0xcc);
    }
  }
  return Uninitialized;
}

// GetCurrentSegmentWorkMetrics @ 14dc7fa20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FMoviePipelineSegmentWorkMetrics * __cdecl
UMovieGraphBlueprintLibrary::GetCurrentSegmentWorkMetrics
          (FMoviePipelineSegmentWorkMetrics *__return_storage_ptr__,UMovieGraphPipeline *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FMoviePipelineSegmentWorkMetrics *pFVar5;
  
  if (param_1 != (UMovieGraphPipeline *)0x0) {
    iVar1 = param_1->CurrentShotIndex;
    if (iVar1 < (param_1->ActiveShotList).ArrayNum) {
      if (iVar1 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar5 = (FMoviePipelineSegmentWorkMetrics *)(*pcVar3)();
          return pFVar5;
        }
      }
      lVar2 = *(longlong *)((param_1->ActiveShotList).AllocatorInstance.Data + (longlong)iVar1 * 8);
      ::FString::FString(&__return_storage_ptr__->SegmentName,(FString *)(lVar2 + 0x130));
      __return_storage_ptr__->OutputFrameIndex = *(int *)(lVar2 + 0x140);
      __return_storage_ptr__->TotalOutputFrameCount = *(int *)(lVar2 + 0x144);
      __return_storage_ptr__->OutputSubSampleIndex = *(int *)(lVar2 + 0x148);
      __return_storage_ptr__->TotalSubSampleCount = *(int *)(lVar2 + 0x14c);
      __return_storage_ptr__->EngineWarmUpFrameIndex = *(int *)(lVar2 + 0x150);
      __return_storage_ptr__->TotalEngineWarmUpFrameCount = *(int *)(lVar2 + 0x154);
      return __return_storage_ptr__;
    }
  }
  (__return_storage_ptr__->SegmentName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->SegmentName).Data.ArrayNum = 0;
  (__return_storage_ptr__->SegmentName).Data.ArrayMax = 0;
  __return_storage_ptr__->OutputFrameIndex = -1;
  __return_storage_ptr__->TotalOutputFrameCount = -1;
  __return_storage_ptr__->OutputSubSampleIndex = -1;
  __return_storage_ptr__->TotalSubSampleCount = -1;
  __return_storage_ptr__->EngineWarmUpFrameIndex = -1;
  __return_storage_ptr__->TotalEngineWarmUpFrameCount = -1;
  return __return_storage_ptr__;
}

// GetCurrentShotFrameNumber @ 14dc7fb20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FFrameNumber __cdecl
UMovieGraphBlueprintLibrary::GetCurrentShotFrameNumber(UMovieGraphPipeline *param_1)

{
  UMovieGraphTimeStepBase *pUVar1;
  longlong lVar2;
  UMovieGraphPipeline *in_RDX;
  undefined1 local_88 [128];
  
  if (in_RDX != (UMovieGraphPipeline *)0x0) {
    pUVar1 = UMovieGraphPipeline::GetTimeStepInstance(in_RDX);
    lVar2 = (**(code **)(*(longlong *)pUVar1 + 0x2c8))(pUVar1,local_88);
    *(undefined4 *)&param_1->_padding_ = *(undefined4 *)(lVar2 + 0x7c);
    return (FFrameNumber)(int)param_1;
  }
  *(undefined4 *)&param_1->_padding_ = 0xffffffff;
  return (FFrameNumber)(int)param_1;
}

// GetCurrentShotTimecode @ 14dc7fb80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTimecode * __cdecl
UMovieGraphBlueprintLibrary::GetCurrentShotTimecode
          (FTimecode *__return_storage_ptr__,UMovieGraphPipeline *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  UMovieGraphTimeStepBase *pUVar4;
  longlong lVar5;
  undefined1 local_88 [128];
  
  if (param_1 != (UMovieGraphPipeline *)0x0) {
    pUVar4 = UMovieGraphPipeline::GetTimeStepInstance(param_1);
    lVar5 = (**(code **)(*(longlong *)pUVar4 + 0x2c8))(pUVar4,local_88);
    uVar2 = *(undefined8 *)(lVar5 + 100);
    uVar3 = *(undefined8 *)(lVar5 + 0x6c);
    uVar1 = *(undefined8 *)(lVar5 + 0x74);
    __return_storage_ptr__->Hours = (int)uVar2;
    __return_storage_ptr__->Minutes = (int)((ulonglong)uVar2 >> 0x20);
    __return_storage_ptr__->Seconds = (int)uVar3;
    __return_storage_ptr__->Frames = (int)((ulonglong)uVar3 >> 0x20);
    __return_storage_ptr__->Subframe = (float)(int)uVar1;
    __return_storage_ptr__->bDropFrameFormat = (bool)(char)((ulonglong)uVar1 >> 0x20);
    *(int3 *)&__return_storage_ptr__->field_0x15 = (int3)((ulonglong)uVar1 >> 0x28);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Hours = 0;
  __return_storage_ptr__->Minutes = 0;
  __return_storage_ptr__->Seconds = 0;
  __return_storage_ptr__->Frames = 0;
  __return_storage_ptr__->Subframe = 0.0;
  __return_storage_ptr__->bDropFrameFormat = false;
  return __return_storage_ptr__;
}

// GetCurrentVersionNumber @ 14dc7fbf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __cdecl UMovieGraphBlueprintLibrary::GetCurrentVersionNumber(UMovieGraphPipeline *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  if (param_1 == (UMovieGraphPipeline *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Cannot get version number from null pipeline!",Error,(FName)0x0);
    return 0;
  }
  uVar1 = param_1->CurrentShotIndex;
  if ((-1 < (int)uVar1) && ((int)uVar1 < (param_1->ActiveShotList).ArrayNum)) {
    uVar5 = 0;
    if ((int)uVar1 < (param_1->ActiveShotList).ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    return *(int *)(*(longlong *)
                     ((param_1->ActiveShotList).AllocatorInstance.Data + (longlong)(int)uVar1 * 8) +
                   0x164);
  }
  FFrame::KismetExecutionMessage
            (L"No shot is currently active to get the version number from.",Error,(FName)0x0);
  return 0;
}

// GetDesiredOutputResolution @ 14dc7fcd0

/* WARNING: Enum "Type": Some values do not have unique names */

TIntPoint<int> __cdecl
UMovieGraphBlueprintLibrary::GetDesiredOutputResolution
          (UMovieGraphEvaluatedConfig *param_1,float param_2)

{
  FString *pFVar1;
  code *pcVar2;
  bool bVar3;
  EMovieGraphAspectRatioAdaptBehavior EVar4;
  UMovieGraphGlobalOutputSettingNode *pUVar5;
  TIntPoint<int> TVar6;
  FMovieGraphNamedResolution *pFVar7;
  UMovieGraphEvaluatedConfig *in_RDX;
  float in_XMM2_Da;
  float fVar8;
  TIntPoint<int>_u_0_s_0 local_res10;
  TIntPoint<int>_u_0_s_0 local_60;
  FString local_58;
  FMovieGraphNamedResolution local_48;
  
  if (in_RDX == (UMovieGraphEvaluatedConfig *)0x0) {
    FFrame::KismetExecutionMessage(L"InEvaluatedGraph cannot be null.",Error,(FName)0x0);
    param_1->_padding_ = 0;
  }
  else {
    pUVar5 = UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphGlobalOutputSettingNode>
                       (in_RDX,UMovieGraphNode::GlobalsPinName,true,false);
    if (pUVar5 == (UMovieGraphGlobalOutputSettingNode *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1571528361807707591>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphBlueprintLibrary.cpp"
                         ,0x239,"OutputSetting");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar6.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar2)();
        return (TIntPoint<int>)TVar6.field0_0x0;
      }
      param_1->_padding_ = 0;
    }
    else {
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      bVar3 = IsNamedResolutionValid(&(pUVar5->OutputResolution).ProfileName);
      if (bVar3) {
        pFVar7 = NamedResolutionFromProfile(&local_48,&(pUVar5->OutputResolution).ProfileName);
        pFVar1 = &pFVar7->Description;
        local_60 = (pFVar7->Resolution).field0_0x0._s_0;
        if (&local_58 != pFVar1) {
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.Data.AllocatorInstance.Data);
          }
          local_58.Data.AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
          (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_58.Data.ArrayNum = (pFVar7->Description).Data.ArrayNum;
          local_58.Data.ArrayMax = (pFVar7->Description).Data.ArrayMax;
          (pFVar7->Description).Data.ArrayNum = 0;
          (pFVar7->Description).Data.ArrayMax = 0;
        }
        if (local_48.Description.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Description.Data.AllocatorInstance.Data);
        }
      }
      else {
        local_60 = (pUVar5->OutputResolution).Resolution.field0_0x0._s_0;
        ::FString::operator=(&local_58,&(pUVar5->OutputResolution).Description);
      }
      EVar4 = pUVar5->AdaptResolution;
      if (EVar4 == Disabled) {
        param_1->_padding_ = (longlong)local_60;
      }
      else {
        fVar8 = (float)local_60.X;
        if ((float)((uint)in_XMM2_Da & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
          in_XMM2_Da = fVar8 / (float)local_60.Y;
        }
        if (EVar4 == Automatic) {
          EVar4 = (in_XMM2_Da <= fVar8 / (float)local_60.Y) + ScaleToWidth;
        }
        if (EVar4 == ScaleToWidth) {
          local_res10.Y = (int)ROUND((fVar8 + fVar8) / in_XMM2_Da + __real_3f000000) >> 1;
          local_res10.X = local_60.X;
        }
        else if (EVar4 == ScaleToHeight) {
          local_res10.Y = local_60.Y;
          local_res10.X =
               (int)ROUND((in_XMM2_Da + in_XMM2_Da) * (float)local_60.Y + __real_3f000000) >> 1;
        }
        else {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphBlueprintLibrary.cpp"
                             ,0x277,L"");
          local_res10 = local_60;
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            TVar6.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar2)();
            return (TIntPoint<int>)TVar6.field0_0x0;
          }
        }
        param_1->_padding_ = (longlong)local_res10;
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
  }
  return (TIntPoint<int>)(TIntPoint<int>_u_0)param_1;
}

// GetEffectiveFrameRate @ 14dc801b0

FFrameRate __cdecl
UMovieGraphBlueprintLibrary::GetEffectiveFrameRate
          (UMovieGraphGlobalOutputSettingNode *param_1,FFrameRate *param_2)

{
  longlong *in_R8;
  
  if ((param_2 != (FFrameRate *)0x0) && ((param_2[0x16].Numerator & 8) != 0)) {
    param_1->_padding_ = *(longlong *)&param_2[0x1d].Denominator;
    return (FFrameRate)param_1;
  }
  param_1->_padding_ = *in_R8;
  return (FFrameRate)param_1;
}

// GetEffectiveOutputResolution @ 14dc801e0

/* WARNING: Enum "Type": Some values do not have unique names */

TIntPoint<int> __cdecl
UMovieGraphBlueprintLibrary::GetEffectiveOutputResolution
          (UMovieGraphEvaluatedConfig *param_1,float param_2)

{
  UMovieGraphEvaluatedConfig *in_RDX;
  FName FVar1;
  float extraout_XMM0_Da;
  longlong local_res8;
  
  if (in_RDX != (UMovieGraphEvaluatedConfig *)0x0) {
    GetDesiredOutputResolution((UMovieGraphEvaluatedConfig *)&local_res8,param_2);
    FVar1 = UMovieGraphNode::GlobalsPinName;
    UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphCameraSettingNode>
              (in_RDX,UMovieGraphNode::GlobalsPinName,false,false);
    UE::MoviePipeline::ScaleResolutionByOverscan(extraout_XMM0_Da,(TIntPoint<int> *)FVar1);
    return (TIntPoint<int>)(TIntPoint<int>_u_0)param_1;
  }
  local_res8 = 0;
  FFrame::KismetExecutionMessage(L"InEvaluatedGraph cannot be null.",Error,(FName)0x0);
  param_1->_padding_ = 0;
  return (TIntPoint<int>)(TIntPoint<int>_u_0)param_1;
}

// GetEstimatedTimeRemaining @ 14dc802b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UMovieGraphBlueprintLibrary::GetEstimatedTimeRemaining
          (UMovieGraphPipeline *param_1,FTimespan *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UMovieGraphTimeStepBase *pUVar4;
  int *piVar5;
  FDateTime FVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  undefined1 local_res8 [8];
  undefined1 local_a8 [128];
  
  if (param_1 != (UMovieGraphPipeline *)0x0) {
    iVar9 = 0;
    pUVar4 = UMovieGraphPipeline::GetTimeStepInstance(param_1);
    if (pUVar4 != (UMovieGraphTimeStepBase *)0x0) {
      pUVar4 = UMovieGraphPipeline::GetTimeStepInstance(param_1);
      piVar5 = (int *)(**(code **)(*(longlong *)pUVar4 + 0x2c8))(pUVar4,local_a8);
      pFVar8 = (param_1->ActiveShotList).AllocatorInstance.Data;
      iVar2 = (param_1->ActiveShotList).ArrayNum;
      iVar3 = *piVar5;
      pFVar1 = pFVar8 + (longlong)iVar2 * 8;
      while( true ) {
        if ((param_1->ActiveShotList).ArrayNum != iVar2) {
          `TCheckedPointerIterator<TObjectPtr<UMoviePipelineExecutorShot>_const_,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(local_res8);
        }
        if (pFVar8 == pFVar1) break;
        iVar9 = iVar9 + *(int *)(*(longlong *)pFVar8 + 0x144);
        pFVar8 = pFVar8 + 8;
      }
      if ((0 < iVar3) && (0 < iVar9)) {
        FVar6 = FDateTime::UtcNow();
        lVar7 = *(longlong *)FVar6.Ticks - (param_1->GraphInitializationTime).Ticks;
        param_2->Ticks = (longlong)((float)lVar7 / ((float)iVar3 / (float)iVar9)) - lVar7;
        return true;
      }
    }
  }
  param_2->Ticks = 0;
  return false;
}

// GetJobAuthor @ 14dc80730

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FText * __cdecl
UMovieGraphBlueprintLibrary::GetJobAuthor
          (FText *__return_storage_ptr__,UMovieGraphPipeline *param_1)

{
  FString *pFVar1;
  FText *pFVar2;
  FText local_38;
  FString local_28;
  FText local_18;
  
  if (param_1 == (UMovieGraphPipeline *)0x0) {
    pFVar2 = FText::FText(&local_18);
    FText::FText(__return_storage_ptr__,pFVar2);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  else {
    pFVar1 = UE::MoviePipeline::GetJobAuthor
                       (&local_28,(param_1->CurrentJobDuplicate).field0_0x0.DebugPtr);
    pFVar2 = FText::FromString(&local_38,pFVar1);
    FText::FText(__return_storage_ptr__,pFVar2);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetJobInitializationTime @ 14dc807d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FDateTime __cdecl
UMovieGraphBlueprintLibrary::GetJobInitializationTime(UMovieGraphPipeline *param_1)

{
  longlong in_RDX;
  
  if (in_RDX != 0) {
    param_1->_padding_ = *(longlong *)(in_RDX + 0x1d8);
    return (FDateTime)(long64)param_1;
  }
  param_1->_padding_ = 0;
  return (FDateTime)(long64)param_1;
}

// GetJobName @ 14dc80800

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FText * __cdecl
UMovieGraphBlueprintLibrary::GetJobName(FText *__return_storage_ptr__,UMovieGraphPipeline *param_1)

{
  FText *pFVar1;
  FText local_28;
  FText local_18;
  
  if (param_1 == (UMovieGraphPipeline *)0x0) {
    pFVar1 = FText::FText(&local_18);
    FText::FText(__return_storage_ptr__,pFVar1);
    local_28.TextData.Reference = local_18.TextData.Reference;
  }
  else {
    pFVar1 = FText::FromString(&local_28,
                               &((param_1->CurrentJobDuplicate).field0_0x0.DebugPtr)->JobName);
    FText::FText(__return_storage_ptr__,pFVar1);
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetOverallOutputFrames @ 14dc81430

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UMovieGraphBlueprintLibrary::GetOverallOutputFrames
          (UMovieGraphPipeline *param_1,int *param_2,int *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UMovieGraphTimeStepBase *pUVar3;
  int *piVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  undefined1 local_98 [128];
  
  *param_2 = 0;
  *param_3 = 0;
  if ((param_1 != (UMovieGraphPipeline *)0x0) &&
     (pUVar3 = UMovieGraphPipeline::GetTimeStepInstance(param_1),
     pUVar3 != (UMovieGraphTimeStepBase *)0x0)) {
    pUVar3 = UMovieGraphPipeline::GetTimeStepInstance(param_1);
    piVar4 = (int *)(**(code **)(*(longlong *)pUVar3 + 0x2c8))(pUVar3,local_98);
    *param_2 = *piVar4;
    pFVar5 = (param_1->ActiveShotList).AllocatorInstance.Data;
    iVar2 = (param_1->ActiveShotList).ArrayNum;
    pFVar1 = pFVar5 + (longlong)iVar2 * 8;
    while( true ) {
      if ((param_1->ActiveShotList).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UMoviePipelineExecutorShot>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar5 == pFVar1) break;
      *param_3 = *param_3 + *(int *)(*(longlong *)pFVar5 + 0x144);
      pFVar5 = pFVar5 + 8;
    }
  }
  return;
}

// GetOverallSegmentCounts @ 14dc81500

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UMovieGraphBlueprintLibrary::GetOverallSegmentCounts
          (UMovieGraphPipeline *param_1,int *param_2,int *param_3)

{
  *param_2 = param_1->CurrentShotIndex;
  *param_3 = (param_1->ActiveShotList).ArrayNum;
  return;
}

// GetOverscanCropRectangle @ 14dc81520

/* WARNING: Enum "Type": Some values do not have unique names */

TIntRect<int> * __cdecl
UMovieGraphBlueprintLibrary::GetOverscanCropRectangle
          (TIntRect<int> *__return_storage_ptr__,UMovieGraphEvaluatedConfig *param_1,float param_2,
          float param_3)

{
  int iVar1;
  int iVar2;
  UMovieGraphCameraSettingNode *pUVar3;
  FName FVar4;
  TIntPoint<int>_u_0 TVar5;
  TIntPoint<int>_u_0 TVar6;
  float extraout_XMM0_Da;
  float fVar7;
  float in_XMM1_Da;
  UMovieGraphEvaluatedConfig *local_res10;
  int iStackX_14;
  undefined1 local_38 [48];
  
  if (param_1 == (UMovieGraphEvaluatedConfig *)0x0) {
    local_res10 = param_1;
    FFrame::KismetExecutionMessage(L"InEvaluatedGraph cannot be null.",Error,(FName)0x0);
    (__return_storage_ptr__->field0_0x0)._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
    (__return_storage_ptr__->field0_0x0)._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  }
  else {
    GetDesiredOutputResolution((UMovieGraphEvaluatedConfig *)&stack0x00000010,in_XMM1_Da);
    GetDesiredOutputResolution((UMovieGraphEvaluatedConfig *)local_38,in_XMM1_Da);
    FVar4 = UMovieGraphNode::GlobalsPinName;
    pUVar3 = UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphCameraSettingNode>
                       (param_1,UMovieGraphNode::GlobalsPinName,false,false);
    fVar7 = extraout_XMM0_Da;
    if ((pUVar3 != (UMovieGraphCameraSettingNode *)0x0) &&
       (pUVar3->bOverride_OverscanPercentage != '\0')) {
      fVar7 = 0.0;
    }
    UE::MoviePipeline::ScaleResolutionByOverscan(fVar7,(TIntPoint<int> *)FVar4);
    iVar1 = ((int)local_38._8_8_ - (int)local_res10) / 2;
    iVar2 = (local_38._12_4_ - iStackX_14) / 2;
    TVar6._s_0.Y = iVar2;
    TVar6._s_0.X = iVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Min.field0_0x0 = TVar6;
    TVar5._s_0.Y = iVar2 + iStackX_14;
    TVar5._s_0.X = (int)local_res10 + iVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Max.field0_0x0 = TVar5;
  }
  return __return_storage_ptr__;
}

// GetOverscannedResolution @ 14dc81640

/* WARNING: Enum "Type": Some values do not have unique names */

TIntPoint<int> __cdecl
UMovieGraphBlueprintLibrary::GetOverscannedResolution
          (UMovieGraphEvaluatedConfig *param_1,float param_2,float param_3)

{
  UMovieGraphCameraSettingNode *pUVar1;
  UMovieGraphEvaluatedConfig *in_RDX;
  FName FVar2;
  float extraout_XMM0_Da;
  float fVar3;
  longlong local_res10;
  
  if (in_RDX == (UMovieGraphEvaluatedConfig *)0x0) {
    local_res10 = 0;
    FFrame::KismetExecutionMessage(L"InEvaluatedGraph cannot be null.",Error,(FName)0x0);
    param_1->_padding_ = 0;
    return (TIntPoint<int>)(TIntPoint<int>_u_0)param_1;
  }
  GetDesiredOutputResolution((UMovieGraphEvaluatedConfig *)&local_res10,param_2);
  FVar2 = UMovieGraphNode::GlobalsPinName;
  pUVar1 = UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphCameraSettingNode>
                     (in_RDX,UMovieGraphNode::GlobalsPinName,false,false);
  fVar3 = extraout_XMM0_Da;
  if ((pUVar1 != (UMovieGraphCameraSettingNode *)0x0) &&
     (pUVar1->bOverride_OverscanPercentage != '\0')) {
    fVar3 = 0.0;
  }
  UE::MoviePipeline::ScaleResolutionByOverscan(fVar3,(TIntPoint<int> *)FVar2);
  return (TIntPoint<int>)(TIntPoint<int>_u_0)param_1;
}

// GetPipelineState @ 14dc81740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EMovieRenderPipelineState __cdecl
UMovieGraphBlueprintLibrary::GetPipelineState(UMovieGraphPipeline *param_1)

{
  EMovieRenderPipelineState EVar1;
  
  if (param_1 != (UMovieGraphPipeline *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014dc81748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EVar1 = (**(code **)(param_1->_padding_ + 0x2c8))();
    return EVar1;
  }
  return Uninitialized;
}

// GetPrivateStaticClass @ 14dc81840

UClass * __cdecl UMovieGraphBlueprintLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieGraphBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MovieGraphBlueprintLibrary",
               &Z_Registration_Info_UClass_UMovieGraphBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUMovieGraphBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieGraphBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UMovieGraphBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieGraphBlueprintLibrary.InnerSingleton;
}

// GetRootFrameNumber @ 14dc82b70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FFrameNumber __cdecl UMovieGraphBlueprintLibrary::GetRootFrameNumber(UMovieGraphPipeline *param_1)

{
  UMovieGraphTimeStepBase *pUVar1;
  longlong lVar2;
  UMovieGraphPipeline *in_RDX;
  undefined1 local_88 [128];
  
  if (in_RDX != (UMovieGraphPipeline *)0x0) {
    pUVar1 = UMovieGraphPipeline::GetTimeStepInstance(in_RDX);
    lVar2 = (**(code **)(*(longlong *)pUVar1 + 0x2c8))(pUVar1,local_88);
    *(undefined4 *)&param_1->_padding_ = *(undefined4 *)(lVar2 + 0x60);
    return (FFrameNumber)(int)param_1;
  }
  *(undefined4 *)&param_1->_padding_ = 0xffffffff;
  return (FFrameNumber)(int)param_1;
}

// GetRootTimecode @ 14dc82bd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTimecode * __cdecl
UMovieGraphBlueprintLibrary::GetRootTimecode
          (FTimecode *__return_storage_ptr__,UMovieGraphPipeline *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  UMovieGraphTimeStepBase *pUVar4;
  longlong lVar5;
  undefined1 local_88 [128];
  
  if (param_1 != (UMovieGraphPipeline *)0x0) {
    pUVar4 = UMovieGraphPipeline::GetTimeStepInstance(param_1);
    lVar5 = (**(code **)(*(longlong *)pUVar4 + 0x2c8))(pUVar4,local_88);
    uVar2 = *(undefined8 *)(lVar5 + 0x48);
    uVar3 = *(undefined8 *)(lVar5 + 0x50);
    uVar1 = *(undefined8 *)(lVar5 + 0x58);
    __return_storage_ptr__->Hours = (int)uVar2;
    __return_storage_ptr__->Minutes = (int)((ulonglong)uVar2 >> 0x20);
    __return_storage_ptr__->Seconds = (int)uVar3;
    __return_storage_ptr__->Frames = (int)((ulonglong)uVar3 >> 0x20);
    __return_storage_ptr__->Subframe = (float)(int)uVar1;
    __return_storage_ptr__->bDropFrameFormat = (bool)(char)((ulonglong)uVar1 >> 0x20);
    *(int3 *)&__return_storage_ptr__->field_0x15 = (int3)((ulonglong)uVar1 >> 0x28);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Hours = 0;
  __return_storage_ptr__->Minutes = 0;
  __return_storage_ptr__->Seconds = 0;
  __return_storage_ptr__->Frames = 0;
  __return_storage_ptr__->Subframe = 0.0;
  __return_storage_ptr__->bDropFrameFormat = false;
  return __return_storage_ptr__;
}

// IsNamedResolutionValid @ 14dc84400

bool __cdecl UMovieGraphBlueprintLibrary::IsNamedResolutionValid(FName *param_1)

{
  UMovieGraphProjectSettings *this;
  UClass *this_00;
  FMovieGraphNamedResolution *pFVar1;
  
  this_00 = Z_Construct_UClass_UMovieGraphProjectSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  this = (UMovieGraphProjectSettings *)(this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  if (this != (UMovieGraphProjectSettings *)0x0) {
    pFVar1 = UMovieGraphProjectSettings::FindNamedResolutionForOption(this,param_1);
    return pFVar1 != (FMovieGraphNamedResolution *)0x0;
  }
  return false;
}

// NamedResolutionFromProfile @ 14dc84fd0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieGraphNamedResolution * __cdecl
UMovieGraphBlueprintLibrary::NamedResolutionFromProfile
          (FMovieGraphNamedResolution *__return_storage_ptr__,FName *param_1)

{
  UMovieGraphProjectSettings *this;
  UClass *this_00;
  FMovieGraphNamedResolution *pFVar1;
  ForAnyElementType FVar2;
  FString local_28;
  FString local_18;
  
  this_00 = Z_Construct_UClass_UMovieGraphProjectSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  this = (UMovieGraphProjectSettings *)(this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  if ((this != (UMovieGraphProjectSettings *)0x0) &&
     (pFVar1 = UMovieGraphProjectSettings::FindNamedResolutionForOption(this,param_1),
     pFVar1 != (FMovieGraphNamedResolution *)0x0)) {
    __return_storage_ptr__->ProfileName = pFVar1->ProfileName;
    (__return_storage_ptr__->Resolution).field0_0x0 = (pFVar1->Resolution).field0_0x0;
    ::FString::FString(&__return_storage_ptr__->Description,&pFVar1->Description);
    return __return_storage_ptr__;
  }
  ::FName::ToString(param_1,&local_18);
  ::FString::PrintfImpl
            (&local_28,
             L"%hs: Could not find named resolution with profile name %s in Project Settings.");
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar2.Data = local_28.Data.AllocatorInstance.Data;
  }
  FFrame::KismetExecutionMessage((wchar_t *)FVar2.Data,Error,(FName)0x0);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  (__return_storage_ptr__->ProfileName).ComparisonIndex = 0;
  (__return_storage_ptr__->ProfileName).Number = 0;
  (__return_storage_ptr__->Resolution).field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (__return_storage_ptr__->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->Description).Data.ArrayNum = 0;
  (__return_storage_ptr__->Description).Data.ArrayMax = 0;
  __return_storage_ptr__->ProfileName = FMovieGraphNamedResolution::DefaultResolutionName;
  (__return_storage_ptr__->Resolution).field0_0x0._s_0 =
       (TIntPoint<int>_u_0_s_0)FMovieGraphNamedResolution::DefaultResolution.field0_0x0;
  return __return_storage_ptr__;
}

// NamedResolutionFromSize @ 14dc850f0

FMovieGraphNamedResolution * __cdecl
UMovieGraphBlueprintLibrary::NamedResolutionFromSize
          (FMovieGraphNamedResolution *__return_storage_ptr__,int param_1,int param_2)

{
  TIntPoint<int>_u_0 TVar1;
  
  __return_storage_ptr__->ProfileName = FMovieGraphNamedResolution::CustomEntryName;
  TVar1._s_0.Y = param_2;
  TVar1._s_0.X = param_1;
  (__return_storage_ptr__->Resolution).field0_0x0 = TVar1;
  (__return_storage_ptr__->Description).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (__return_storage_ptr__->Description).Data.ArrayNum = 0;
  (__return_storage_ptr__->Description).Data.ArrayMax = 0;
  return __return_storage_ptr__;
}

// ResolveFilenameFormatArguments @ 14dc869c0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FString * __cdecl
UMovieGraphBlueprintLibrary::ResolveFilenameFormatArguments
          (FString *__return_storage_ptr__,FString *param_1,
          FMovieGraphFilenameResolveParams *param_2,FMovieGraphResolveArgs *param_3)

{
  ::`anonymous_namespace'::ResolveFormatArgumentsHelper
            (__return_storage_ptr__,param_1,param_2,true,param_3);
  return __return_storage_ptr__;
}

// ResolveFormatArguments @ 14dc869f0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FString * __cdecl
UMovieGraphBlueprintLibrary::ResolveFormatArguments
          (FString *__return_storage_ptr__,FString *param_1,
          FMovieGraphFilenameResolveParams *param_2,FMovieGraphResolveArgs *param_3)

{
  ::`anonymous_namespace'::ResolveFormatArgumentsHelper
            (__return_storage_ptr__,param_1,param_2,false,param_3);
  return __return_storage_ptr__;
}

// ResolveVersionNumber @ 14dc888a0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl
UMovieGraphBlueprintLibrary::ResolveVersionNumber
          (FMovieGraphFilenameResolveParams *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  UMovieGraphEvaluatedConfig *pUVar2;
  FName FVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  UMovieGraphGlobalOutputSettingNode *pUVar9;
  UClass *pUVar10;
  TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> *pTVar11;
  ulonglong uVar12;
  FScriptContainerElement *_Src;
  ForAnyElementType FVar13;
  FString local_c0;
  undefined1 local_b0 [4];
  int local_ac;
  TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> local_a8;
  undefined8 local_98;
  TPairInitializer<FString_&&,FString_&&> local_90;
  FString *local_80;
  FString local_78;
  FString local_68;
  FMovieGraphFilenameResolveParams *local_58;
  UMovieGraphGlobalOutputSettingNode *local_50;
  int *local_48;
  TArray<UMovieGraphSettingNode_*,TSizedDefaultAllocator<32>_> local_40;
  
  pUVar2 = (param_1->EvaluatedConfig).field0_0x0.DebugPtr;
  if (pUVar2 == (UMovieGraphEvaluatedConfig *)0x0) {
    local_98 = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot resolve version number without a valid evaluated graph to pull settings from."
               ,Error,(FName)0x0);
    FMovieGraphFilenameResolveParams::~FMovieGraphFilenameResolveParams(param_1);
    return -1;
  }
  pUVar9 = UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphGlobalOutputSettingNode>
                     (pUVar2,UMovieGraphNode::GlobalsPinName,true,true);
  if ((pUVar9->VersioningSettings).bAutoVersioning == false) {
    iVar7 = (pUVar9->VersioningSettings).VersionNumber;
  }
  else {
    ::FString::FString(&local_68,L"{version}");
    ::FString::FString(&local_78,L"version");
    local_90.Value = &local_78;
    local_80 = &local_68;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)&param_1->FileNameFormatOverrides,&local_90,(bool *)&local_90.Value);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    pUVar2 = (param_1->EvaluatedConfig).field0_0x0.DebugPtr;
    FVar3 = (param_1->RenderDataIdentifier).RootBranchName;
    pUVar10 = Z_Construct_UClass_UMovieGraphCommandLineEncoderNode_NoRegister();
    UMovieGraphEvaluatedConfig::GetSettingsForBranch(pUVar2,&local_a8,pUVar10,FVar3,false,false);
    pUVar2 = (param_1->EvaluatedConfig).field0_0x0.DebugPtr;
    FVar3 = (param_1->RenderDataIdentifier).RootBranchName;
    pUVar10 = Z_Construct_UClass_UMovieGraphFileOutputNode_NoRegister();
    pTVar11 = UMovieGraphEvaluatedConfig::GetSettingsForBranch
                        (pUVar2,&local_40,pUVar10,FVar3,false,false);
    if (&local_a8 == pTVar11) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x986,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
    }
    iVar7 = pTVar11->ArrayNum;
    if (iVar7 != 0) {
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar7,&local_a8.AllocatorInstance,&local_a8.ArrayNum,&local_a8.ArrayMax
                        );
      memmove(local_a8.AllocatorInstance.Data + (longlong)iVar8 * 8,
              (pTVar11->AllocatorInstance).Data,(longlong)iVar7 << 3);
      pTVar11->ArrayNum = 0;
    }
    if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.AllocatorInstance.Data);
    }
    iVar7 = local_a8.ArrayNum;
    uVar12 = (ulonglong)local_a8.ArrayNum;
    local_48 = &local_ac;
    local_ac = -1;
    pFVar1 = local_a8.AllocatorInstance.Data + uVar12 * 8;
    FVar13.Data = local_a8.AllocatorInstance.Data;
    local_58 = param_1;
    local_50 = pUVar9;
    while( true ) {
      if ((uint)uVar12 != iVar7) {
        `TCheckedPointerIterator<UMovieGraphSettingNode_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_b0);
      }
      if (FVar13.Data == pFVar1) break;
      lVar4 = *(longlong *)FVar13.Data;
      local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c0.Data.ArrayNum = 0;
      local_c0.Data.ArrayMax = 0;
      if (lVar4 != 0) {
        pUVar10 = Z_Construct_UClass_UMovieGraphFileOutputNode_NoRegister();
        iVar8 = (int)pUVar10->_padding_;
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar8) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar8 * 8) !=
            &pUVar10->_padding_)) {
          if (lVar4 != 0) {
            pUVar10 = Z_Construct_UClass_UMovieGraphCommandLineEncoderNode_NoRegister();
            iVar8 = (int)pUVar10->_padding_;
            if (((iVar8 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
                ((longlong *)
                 *(undefined1 **)
                  (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar8 * 8) ==
                 &pUVar10->_padding_)) && (&local_c0 != (FString *)(lVar4 + 0xc0))) {
              iVar8 = *(int *)(lVar4 + 200);
              _Src = (((FString *)(lVar4 + 0xc0))->Data).AllocatorInstance.Data;
              local_c0.Data.ArrayNum = iVar8;
              if ((iVar8 == 0) && (local_c0.Data.ArrayMax == 0)) goto LAB_14dc88bdc;
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar8,local_c0.Data.ArrayMax,(ForAnyElementType *)&local_c0,iVar8,
                         &local_c0.Data.ArrayMax);
              if (iVar8 != 0) goto LAB_14dc88c0a;
            }
          }
        }
        else if (&local_c0 != (FString *)(lVar4 + 0xb8)) {
          iVar8 = *(int *)(lVar4 + 0xc0);
          _Src = (((FString *)(lVar4 + 0xb8))->Data).AllocatorInstance.Data;
          local_c0.Data.ArrayNum = iVar8;
          if (iVar8 == 0) {
            if (local_c0.Data.ArrayMax == 0) {
LAB_14dc88bdc:
              local_c0.Data._8_8_ = local_c0.Data._8_8_ & 0xffffffff;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,0,local_c0.Data.ArrayMax,(ForAnyElementType *)&local_c0,0,
                         &local_c0.Data.ArrayMax);
            }
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar8,local_c0.Data.ArrayMax,(ForAnyElementType *)&local_c0,iVar8,
                       &local_c0.Data.ArrayMax);
LAB_14dc88c0a:
            memcpy(local_c0.Data.AllocatorInstance.Data,_Src,(longlong)iVar8 * 2);
          }
        }
      }
      `UMovieGraphBlueprintLibrary::ResolveVersionNumber'::__l2::<lambda_1>::operator()
                (&local_58,&local_c0);
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
      }
      uVar12 = (ulonglong)(uint)local_a8.ArrayNum;
      FVar13.Data = FVar13.Data + 8;
    }
    iVar7 = (uint)param_2 + local_ac;
    if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.AllocatorInstance.Data);
    }
  }
  FMovieGraphFilenameResolveParams::~FMovieGraphFilenameResolveParams(param_1);
  return iVar7;
}

// StaticRegisterNativesUMovieGraphBlueprintLibrary @ 14dc89ae0

void __cdecl UMovieGraphBlueprintLibrary::StaticRegisterNativesUMovieGraphBlueprintLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x21;
  local_18.DataPtr = Z_Construct_UClass_UMovieGraphBlueprintLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetBackbufferResolution @ 14dc90be0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieGraphBlueprintLibrary::execGetBackbufferResolution
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FString *pFVar1;
  FField **ppFVar2;
  FProperty *pFVar3;
  code *pcVar4;
  UMovieGraphEvaluatedConfig *this;
  bool bVar5;
  EMovieGraphAspectRatioAdaptBehavior EVar6;
  UMovieGraphGlobalOutputSettingNode *pUVar7;
  FMovieGraphNamedResolution *pFVar8;
  FName FVar9;
  float extraout_XMM0_Da;
  float fVar10;
  float local_res10 [2];
  undefined4 local_res18 [2];
  UMovieGraphEvaluatedConfig *local_res20;
  undefined8 local_a0;
  TIntPoint<int>_u_0_s_0 local_90;
  FString local_88;
  FMovieGraphNamedResolution local_78 [2];
  
  local_res20 = (UMovieGraphEvaluatedConfig *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  this = local_res20;
  fVar10 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (UMovieGraphEvaluatedConfig *)0x0) {
    FFrame::KismetExecutionMessage(L"InEvaluatedGraph cannot be null.",Error,(FName)0x0);
    *(undefined8 *)param_3 = 0;
  }
  else {
    pUVar7 = UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphGlobalOutputSettingNode>
                       (local_res20,UMovieGraphNode::GlobalsPinName,true,false);
    if (pUVar7 == (UMovieGraphGlobalOutputSettingNode *)0x0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1571528361807707591>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphBlueprintLibrary.cpp"
                         ,0x239,"OutputSetting");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
      bVar5 = IsNamedResolutionValid(&(pUVar7->OutputResolution).ProfileName);
      if (bVar5) {
        pFVar8 = NamedResolutionFromProfile(local_78,&(pUVar7->OutputResolution).ProfileName);
        pFVar1 = &pFVar8->Description;
        local_90 = (pFVar8->Resolution).field0_0x0._s_0;
        if (&local_88 != pFVar1) {
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
          local_88.Data.AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
          (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_88.Data.ArrayNum = (pFVar8->Description).Data.ArrayNum;
          local_88.Data.ArrayMax = (pFVar8->Description).Data.ArrayMax;
          (pFVar8->Description).Data.ArrayNum = 0;
          (pFVar8->Description).Data.ArrayMax = 0;
        }
        if (local_78[0].Description.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78[0].Description.Data.AllocatorInstance.Data);
        }
      }
      else {
        local_90 = (pUVar7->OutputResolution).Resolution.field0_0x0._s_0;
        ::FString::operator=(&local_88,&(pUVar7->OutputResolution).Description);
      }
      EVar6 = pUVar7->AdaptResolution;
      if (EVar6 != Disabled) {
        if ((float)((uint)fVar10 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
          fVar10 = (float)local_90.X / (float)local_90.Y;
        }
        if (EVar6 == Automatic) {
          EVar6 = (fVar10 <= (float)local_90.X / (float)local_90.Y) + ScaleToWidth;
        }
        if (((EVar6 != ScaleToWidth) && (EVar6 != ScaleToHeight)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphBlueprintLibrary.cpp"
                               ,0x277,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
    FVar9 = UMovieGraphNode::GlobalsPinName;
    UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphCameraSettingNode>
              (this,UMovieGraphNode::GlobalsPinName,false,false);
    UE::MoviePipeline::ScaleResolutionByOverscan(extraout_XMM0_Da,(TIntPoint<int> *)FVar9);
    *(undefined8 *)param_3 = local_a0;
  }
  return;
}

// execGetCompletionPercentage @ 14dc91240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UMovieGraphBlueprintLibrary::execGetCompletionPercentage
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FProperty *pFVar3;
  UMovieGraphPipeline *this;
  UMovieGraphTimeStepBase *pUVar4;
  int *piVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  undefined1 local_res10 [8];
  UMovieGraphPipeline *local_res18;
  undefined1 local_a8 [128];
  
  iVar8 = 0;
  local_res18 = (UMovieGraphPipeline *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  this = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18 != (UMovieGraphPipeline *)0x0) {
    pUVar4 = UMovieGraphPipeline::GetTimeStepInstance(local_res18);
    iVar7 = iVar8;
    if (pUVar4 != (UMovieGraphTimeStepBase *)0x0) {
      pUVar4 = UMovieGraphPipeline::GetTimeStepInstance(this);
      piVar5 = (int *)(**(code **)(*(longlong *)pUVar4 + 0x2c8))(pUVar4,local_a8);
      pFVar6 = (this->ActiveShotList).AllocatorInstance.Data;
      iVar2 = (this->ActiveShotList).ArrayNum;
      iVar7 = *piVar5;
      pFVar1 = pFVar6 + (longlong)iVar2 * 8;
      iVar8 = 0;
      while( true ) {
        if ((this->ActiveShotList).ArrayNum != iVar2) {
          `TCheckedPointerIterator<TObjectPtr<UMoviePipelineExecutorShot>_const_,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(local_res10);
        }
        if (pFVar6 == pFVar1) break;
        iVar8 = iVar8 + *(int *)(*(longlong *)pFVar6 + 0x144);
        pFVar6 = pFVar6 + 8;
      }
    }
    fVar9 = (float)iVar7 / (float)iVar8;
    if (__real_3f800000 <= (float)iVar7 / (float)iVar8) {
      fVar9 = __real_3f800000;
    }
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    *(float *)param_3 = fVar9;
    return;
  }
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetCurrentAperture @ 14dc913b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UMovieGraphBlueprintLibrary::execGetCurrentAperture(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  FProperty *pFVar3;
  code *pcVar4;
  bool bVar5;
  UWorld *pUVar6;
  UCineCameraComponent *pUVar7;
  UObject *pUVar8;
  UClass *pUVar9;
  longlong lVar10;
  float fVar11;
  int local_res10 [2];
  longlong *local_res18;
  FMinimalCameraInfo *local_28;
  int local_20;
  
  local_res18 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar10 = (longlong)local_res10[0];
  if (local_res10[0] == -1) {
    pUVar6 = (UWorld *)(**(code **)(*local_res18 + 0x180))(local_res18);
    pUVar7 = UMoviePipelineBlueprintLibrary::Utility_GetCurrentCineCamera(pUVar6);
    if (pUVar7 != (UCineCameraComponent *)0x0) {
      fVar11 = pUVar7->CurrentAperture;
      goto LAB_14dc915ba;
    }
  }
  else if (local_res18 != (longlong *)0x0) {
    iVar1 = (int)local_res18[0x37];
    if (((-1 < iVar1) && (iVar1 < (int)local_res18[0x28])) &&
       (*(longlong *)(local_res18[0x27] + (longlong)iVar1 * 8) != 0)) {
      (**(code **)(*(longlong *)local_res18[0x18] + 0x330))();
      if ((iVar2 < 0) || (local_20 <= iVar2)) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1571528361807707227>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphBlueprintLibrary.cpp"
                           ,0x3a5,"MinimalCameraInfos.IsValidIndex(InCameraIndex)");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_28 + lVar10));
        if (pUVar8 != (UObject *)0x0) {
          pUVar9 = Z_Construct_UClass_ACineCameraActor_NoRegister();
          iVar2 = (int)pUVar9->_padding_;
          if ((iVar2 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
              &pUVar9->_padding_)) {
            lVar10 = *(longlong *)&pUVar8[0x45].field_0x10;
            DestructItems<UE::MovieGraph::FMinimalCameraInfo,int>(local_28,local_20);
            if (local_28 != (FMinimalCameraInfo *)0x0) {
              FMemory::Free(local_28);
            }
            if (lVar10 != 0) {
              fVar11 = *(float *)(lVar10 + 0xb50);
              goto LAB_14dc915ba;
            }
            goto LAB_14dc915b7;
          }
        }
      }
      DestructItems<UE::MovieGraph::FMinimalCameraInfo,int>(local_28,local_20);
      if (local_28 != (FMinimalCameraInfo *)0x0) {
        FMemory::Free(local_28);
      }
    }
  }
LAB_14dc915b7:
  fVar11 = 0.0;
LAB_14dc915ba:
  *(float *)param_3 = fVar11;
  return;
}

// execGetCurrentCineCamera @ 14dc915e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UMovieGraphBlueprintLibrary::execGetCurrentCineCamera
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  FProperty *pFVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  UWorld *pUVar7;
  UCineCameraComponent *pUVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  longlong lVar11;
  int local_res10 [2];
  longlong *local_res18;
  FMinimalCameraInfo *local_28;
  int local_20;
  
  local_res18 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar11 = (longlong)local_res10[0];
  if (local_res10[0] == -1) {
    pUVar7 = (UWorld *)(**(code **)(*local_res18 + 0x180))(local_res18);
    pUVar8 = UMoviePipelineBlueprintLibrary::Utility_GetCurrentCineCamera(pUVar7);
    if (pUVar8 != (UCineCameraComponent *)0x0) {
      *(UCineCameraComponent **)param_3 = pUVar8;
      return;
    }
  }
  else if (local_res18 != (longlong *)0x0) {
    iVar1 = (int)local_res18[0x37];
    if (((-1 < iVar1) && (iVar1 < (int)local_res18[0x28])) &&
       (*(longlong *)(local_res18[0x27] + (longlong)iVar1 * 8) != 0)) {
      (**(code **)(*(longlong *)local_res18[0x18] + 0x330))();
      if ((iVar2 < 0) || (local_20 <= iVar2)) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1571528361807707227>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphBlueprintLibrary.cpp"
                           ,0x3a5,"MinimalCameraInfos.IsValidIndex(InCameraIndex)");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_28 + lVar11));
        if (pUVar9 != (UObject *)0x0) {
          pUVar10 = Z_Construct_UClass_ACineCameraActor_NoRegister();
          iVar2 = (int)pUVar10->_padding_;
          if ((iVar2 <= *(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
              &pUVar10->_padding_)) {
            uVar4 = *(undefined8 *)&pUVar9[0x45].field_0x10;
            DestructItems<UE::MovieGraph::FMinimalCameraInfo,int>(local_28,local_20);
            if (local_28 != (FMinimalCameraInfo *)0x0) {
              FMemory::Free(local_28);
            }
            *(undefined8 *)param_3 = uVar4;
            return;
          }
        }
      }
      DestructItems<UE::MovieGraph::FMinimalCameraInfo,int>(local_28,local_20);
      if (local_28 != (FMinimalCameraInfo *)0x0) {
        FMemory::Free(local_28);
      }
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetCurrentExecutorShot @ 14dc91800

void __cdecl
UMovieGraphBlueprintLibrary::execGetCurrentExecutorShot
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  longlong local_res10;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  lVar4 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != 0) {
    iVar1 = *(int *)(local_res10 + 0x1b8);
    if ((-1 < iVar1) && (iVar1 < *(int *)(local_res10 + 0x140))) {
      if (iVar1 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(undefined8 *)param_3 = *(undefined8 *)(*(longlong *)(lVar4 + 0x138) + (longlong)iVar1 * 8);
      return;
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetCurrentFocalLength @ 14dc91900

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UMovieGraphBlueprintLibrary::execGetCurrentFocalLength
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  FProperty *pFVar3;
  code *pcVar4;
  bool bVar5;
  UWorld *pUVar6;
  UCineCameraComponent *pUVar7;
  UObject *pUVar8;
  UClass *pUVar9;
  longlong lVar10;
  float fVar11;
  int local_res10 [2];
  longlong *local_res18;
  FMinimalCameraInfo *local_28;
  int local_20;
  
  local_res18 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar10 = (longlong)local_res10[0];
  if (local_res10[0] == -1) {
    pUVar6 = (UWorld *)(**(code **)(*local_res18 + 0x180))(local_res18);
    pUVar7 = UMoviePipelineBlueprintLibrary::Utility_GetCurrentCineCamera(pUVar6);
    fVar11 = __real_bf800000;
    if (pUVar7 != (UCineCameraComponent *)0x0) {
      fVar11 = pUVar7->CurrentFocalLength;
    }
  }
  else {
    fVar11 = __real_bf800000;
    if (local_res18 != (longlong *)0x0) {
      iVar1 = (int)local_res18[0x37];
      if (((-1 < iVar1) && (iVar1 < (int)local_res18[0x28])) &&
         (*(longlong *)(local_res18[0x27] + (longlong)iVar1 * 8) != 0)) {
        (**(code **)(*(longlong *)local_res18[0x18] + 0x330))();
        if ((iVar2 < 0) || (local_20 <= iVar2)) {
          bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_1571528361807707227>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphBlueprintLibrary.cpp"
                             ,0x3a5,"MinimalCameraInfos.IsValidIndex(InCameraIndex)");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        else {
          pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_28 + lVar10));
          if (pUVar8 != (UObject *)0x0) {
            pUVar9 = Z_Construct_UClass_ACineCameraActor_NoRegister();
            iVar2 = (int)pUVar9->_padding_;
            if ((iVar2 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
                &pUVar9->_padding_)) {
              lVar10 = *(longlong *)&pUVar8[0x45].field_0x10;
              DestructItems<UE::MovieGraph::FMinimalCameraInfo,int>(local_28,local_20);
              if (local_28 != (FMinimalCameraInfo *)0x0) {
                FMemory::Free(local_28);
              }
              fVar11 = __real_bf800000;
              if (lVar10 != 0) {
                fVar11 = *(float *)(lVar10 + 0xb4c);
              }
              goto LAB_14dc91b0f;
            }
          }
        }
        DestructItems<UE::MovieGraph::FMinimalCameraInfo,int>(local_28,local_20);
        fVar11 = __real_bf800000;
        if (local_28 != (FMinimalCameraInfo *)0x0) {
          FMemory::Free(local_28);
          fVar11 = __real_bf800000;
        }
      }
    }
  }
LAB_14dc91b0f:
  *(float *)param_3 = fVar11;
  return;
}

// execGetCurrentFocusDistance @ 14dc91b30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UMovieGraphBlueprintLibrary::execGetCurrentFocusDistance
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  FProperty *pFVar3;
  code *pcVar4;
  bool bVar5;
  UWorld *pUVar6;
  UCineCameraComponent *pUVar7;
  UObject *pUVar8;
  UClass *pUVar9;
  longlong lVar10;
  float fVar11;
  int local_res10 [2];
  longlong *local_res18;
  FMinimalCameraInfo *local_28;
  int local_20;
  
  local_res18 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  iVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar10 = (longlong)local_res10[0];
  if (local_res10[0] == -1) {
    pUVar6 = (UWorld *)(**(code **)(*local_res18 + 0x180))(local_res18);
    pUVar7 = UMoviePipelineBlueprintLibrary::Utility_GetCurrentCineCamera(pUVar6);
    fVar11 = __real_bf800000;
    if (pUVar7 != (UCineCameraComponent *)0x0) {
      fVar11 = pUVar7->CurrentFocusDistance;
    }
  }
  else {
    fVar11 = __real_bf800000;
    if (local_res18 != (longlong *)0x0) {
      iVar1 = (int)local_res18[0x37];
      if (((-1 < iVar1) && (iVar1 < (int)local_res18[0x28])) &&
         (*(longlong *)(local_res18[0x27] + (longlong)iVar1 * 8) != 0)) {
        (**(code **)(*(longlong *)local_res18[0x18] + 0x330))();
        if ((iVar2 < 0) || (local_20 <= iVar2)) {
          bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_1571528361807707227>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphBlueprintLibrary.cpp"
                             ,0x3a5,"MinimalCameraInfos.IsValidIndex(InCameraIndex)");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        else {
          pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_28 + lVar10));
          if (pUVar8 != (UObject *)0x0) {
            pUVar9 = Z_Construct_UClass_ACineCameraActor_NoRegister();
            iVar2 = (int)pUVar9->_padding_;
            if ((iVar2 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
                &pUVar9->_padding_)) {
              lVar10 = *(longlong *)&pUVar8[0x45].field_0x10;
              DestructItems<UE::MovieGraph::FMinimalCameraInfo,int>(local_28,local_20);
              if (local_28 != (FMinimalCameraInfo *)0x0) {
                FMemory::Free(local_28);
              }
              fVar11 = __real_bf800000;
              if (lVar10 != 0) {
                fVar11 = *(float *)(lVar10 + 0xb54);
              }
              goto LAB_14dc91d3f;
            }
          }
        }
        DestructItems<UE::MovieGraph::FMinimalCameraInfo,int>(local_28,local_20);
        fVar11 = __real_bf800000;
        if (local_28 != (FMinimalCameraInfo *)0x0) {
          FMemory::Free(local_28);
          fVar11 = __real_bf800000;
        }
      }
    }
  }
LAB_14dc91d3f:
  *(float *)param_3 = fVar11;
  return;
}

// execGetCurrentSegmentName @ 14dc91d60

void __cdecl
UMovieGraphBlueprintLibrary::execGetCurrentSegmentName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  uint uVar2;
  FProperty *pFVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  FText *pFVar7;
  FText *pFVar8;
  uint uVar9;
  FText *this;
  longlong local_res10;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FText::FText(&local_58);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pFVar8 = &local_58;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar8 = (FText *)param_2->MostRecentPropertyAddress;
  }
  FText::FText(&local_68);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  lVar5 = local_res10;
  this = &local_68;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    this = (FText *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != 0) {
    uVar2 = *(uint *)(local_res10 + 0x1b8);
    if ((int)uVar2 < *(int *)(local_res10 + 0x140)) {
      if (((int)uVar2 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar7 = FText::FromString(&local_48,
                                 (FString *)
                                 (*(longlong *)
                                   (*(longlong *)(lVar5 + 0x138) + (longlong)(int)uVar2 * 8) + 0x30)
                                );
      FText::operator=(pFVar8,pFVar7);
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
      uVar9 = 0;
      if ((int)uVar2 < *(int *)(lVar5 + 0x140)) {
        uVar9 = ~uVar2 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar8 = FText::FromString(&local_38,
                                 (FString *)
                                 (*(longlong *)
                                   (*(longlong *)(lVar5 + 0x138) + (longlong)(int)uVar2 * 8) + 0x40)
                                );
      FText::operator=(this,pFVar8);
      if (local_38.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
      }
    }
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  return;
}

// execGetCurrentSegmentState @ 14dc92000

void __cdecl
UMovieGraphBlueprintLibrary::execGetCurrentSegmentState
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  longlong local_res10;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  lVar4 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != 0) {
    iVar1 = *(int *)(local_res10 + 0x1b8);
    if (iVar1 < *(int *)(local_res10 + 0x140)) {
      if (iVar1 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(undefined1 *)param_3 =
           *(undefined1 *)(*(longlong *)(*(longlong *)(lVar4 + 0x138) + (longlong)iVar1 * 8) + 0xcc)
      ;
      return;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetCurrentSegmentWorkMetrics @ 14dc92100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UMovieGraphBlueprintLibrary::execGetCurrentSegmentWorkMetrics
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  longlong local_res10;
  FString local_38;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  lVar3 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != 0) {
    iVar1 = *(int *)(local_res10 + 0x1b8);
    if (iVar1 < *(int *)(local_res10 + 0x140)) {
      if (iVar1 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x138) + (longlong)iVar1 * 8);
      ::FString::FString(&local_38,(FString *)(lVar3 + 0x130));
      uStack_28 = *(undefined4 *)(lVar3 + 0x140);
      uStack_24 = *(undefined4 *)(lVar3 + 0x144);
      local_20 = *(undefined4 *)(lVar3 + 0x148);
      uStack_1c = *(undefined4 *)(lVar3 + 0x14c);
      uStack_18 = *(undefined4 *)(lVar3 + 0x150);
      uStack_14 = *(undefined4 *)(lVar3 + 0x154);
      goto LAB_14dc92288;
    }
  }
  local_38.Data.ArrayMax = _UNK_15076cb64;
  local_38.Data.ArrayNum = ___xmm_ffffffffffffffff0000000000000000;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uStack_28 = _UNK_15076cb68;
  uStack_24 = _UNK_15076cb6c;
  local_20 = ___xmm_ffffffffffffffffffffffffffffffff;
  uStack_1c = _UNK_15060db24;
  uStack_18 = _UNK_15060db28;
  uStack_14 = _UNK_15060db2c;
LAB_14dc92288:
  if (param_3 != &local_38) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_38.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_38.Data.ArrayNum;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 0xc) = local_38.Data.ArrayMax;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
  }
  *(undefined4 *)((longlong)param_3 + 0x24) = uStack_14;
  *(undefined4 *)((longlong)param_3 + 0x10) = uStack_28;
  *(undefined4 *)((longlong)param_3 + 0x14) = uStack_24;
  *(undefined4 *)((longlong)param_3 + 0x18) = local_20;
  *(undefined4 *)((longlong)param_3 + 0x1c) = uStack_1c;
  *(undefined4 *)((longlong)param_3 + 0x20) = uStack_18;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetCurrentShotFrameNumber @ 14dc92320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UMovieGraphBlueprintLibrary::execGetCurrentShotFrameNumber
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieGraphTimeStepBase *pUVar2;
  longlong lVar3;
  UMovieGraphPipeline *local_res10;
  undefined1 local_88 [128];
  
  local_res10 = (UMovieGraphPipeline *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UMovieGraphPipeline *)0x0) {
    *(undefined4 *)param_3 = 0xffffffff;
  }
  else {
    pUVar2 = UMovieGraphPipeline::GetTimeStepInstance(local_res10);
    lVar3 = (**(code **)(*(longlong *)pUVar2 + 0x2c8))(pUVar2,local_88);
    *(undefined4 *)param_3 = *(undefined4 *)(lVar3 + 0x7c);
  }
  return;
}

// execGetCurrentShotTimecode @ 14dc923f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UMovieGraphBlueprintLibrary::execGetCurrentShotTimecode
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieGraphTimeStepBase *pUVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  UMovieGraphPipeline *local_res10;
  uint uStack_94;
  undefined1 local_90 [136];
  
  local_res10 = (UMovieGraphPipeline *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UMovieGraphPipeline *)0x0) {
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uStack_94 = uStack_94 & 0xffffff00;
    lVar3 = (ulonglong)uStack_94 << 0x20;
  }
  else {
    pUVar2 = UMovieGraphPipeline::GetTimeStepInstance(local_res10);
    lVar3 = (**(code **)(*(longlong *)pUVar2 + 0x2c8))(pUVar2,local_90);
    uVar4 = *(undefined4 *)(lVar3 + 100);
    uVar5 = *(undefined4 *)(lVar3 + 0x68);
    uVar6 = *(undefined4 *)(lVar3 + 0x6c);
    uVar7 = *(undefined4 *)(lVar3 + 0x70);
    lVar3 = *(longlong *)(lVar3 + 0x74);
  }
  *(undefined4 *)param_3 = uVar4;
  *(undefined4 *)((longlong)param_3 + 4) = uVar5;
  *(undefined4 *)((longlong)param_3 + 8) = uVar6;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar7;
  *(longlong *)((longlong)param_3 + 0x10) = lVar3;
  return;
}

// execGetCurrentVersionNumber @ 14dc924d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieGraphBlueprintLibrary::execGetCurrentVersionNumber
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  uint uVar1;
  FProperty *pFVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  wchar_t *pwVar6;
  uint uVar7;
  longlong local_res10 [3];
  
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  lVar4 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] == 0) {
    local_res10[1] = 0;
    pwVar6 = L"Cannot get version number from null pipeline!";
  }
  else {
    uVar1 = *(uint *)(local_res10[0] + 0x1b8);
    if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(local_res10[0] + 0x140))) {
      uVar7 = 0;
      if ((int)uVar1 < *(int *)(local_res10[0] + 0x140)) {
        uVar7 = ~uVar1 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      *(undefined4 *)param_3 =
           *(undefined4 *)
            (*(longlong *)(*(longlong *)(lVar4 + 0x138) + (longlong)(int)uVar1 * 8) + 0x164);
      return;
    }
    local_res10[2] = 0;
    pwVar6 = L"No shot is currently active to get the version number from.";
  }
  FFrame::KismetExecutionMessage(pwVar6,Error,(FName)0x0);
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetDesiredOutputResolution @ 14dc92600

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieGraphBlueprintLibrary::execGetDesiredOutputResolution
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FString *pFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  EMovieGraphAspectRatioAdaptBehavior EVar5;
  UMovieGraphGlobalOutputSettingNode *pUVar6;
  FMovieGraphNamedResolution *pFVar7;
  float fVar8;
  float fVar9;
  float local_res10 [2];
  UMovieGraphEvaluatedConfig *local_res18;
  TIntPoint<int>_u_0_s_0 local_res20;
  TIntPoint<int>_u_0_s_0 local_78;
  FString local_70;
  FMovieGraphNamedResolution local_60;
  
  local_res18 = (UMovieGraphEvaluatedConfig *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  fVar9 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18 == (UMovieGraphEvaluatedConfig *)0x0) {
    FFrame::KismetExecutionMessage(L"InEvaluatedGraph cannot be null.",Error,(FName)0x0);
    *(undefined8 *)param_3 = 0;
  }
  else {
    pUVar6 = UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphGlobalOutputSettingNode>
                       (local_res18,UMovieGraphNode::GlobalsPinName,true,false);
    if (pUVar6 == (UMovieGraphGlobalOutputSettingNode *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1571528361807707591>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphBlueprintLibrary.cpp"
                         ,0x239,"OutputSetting");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined8 *)param_3 = 0;
    }
    else {
      local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_70.Data.ArrayNum = 0;
      local_70.Data.ArrayMax = 0;
      bVar4 = IsNamedResolutionValid(&(pUVar6->OutputResolution).ProfileName);
      if (bVar4) {
        pFVar7 = NamedResolutionFromProfile(&local_60,&(pUVar6->OutputResolution).ProfileName);
        pFVar1 = &pFVar7->Description;
        local_78 = (pFVar7->Resolution).field0_0x0._s_0;
        if (&local_70 != pFVar1) {
          if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70.Data.AllocatorInstance.Data);
          }
          local_70.Data.AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
          (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_70.Data.ArrayNum = (pFVar7->Description).Data.ArrayNum;
          local_70.Data.ArrayMax = (pFVar7->Description).Data.ArrayMax;
          (pFVar7->Description).Data.ArrayNum = 0;
          (pFVar7->Description).Data.ArrayMax = 0;
        }
        if (local_60.Description.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Description.Data.AllocatorInstance.Data);
        }
      }
      else {
        local_78 = (pUVar6->OutputResolution).Resolution.field0_0x0._s_0;
        ::FString::operator=(&local_70,&(pUVar6->OutputResolution).Description);
      }
      EVar5 = pUVar6->AdaptResolution;
      if (EVar5 == Disabled) {
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        *(TIntPoint<int>_u_0_s_0 *)param_3 = local_78;
      }
      else {
        fVar8 = (float)local_78.X;
        if ((float)((uint)fVar9 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
          fVar9 = fVar8 / (float)local_78.Y;
        }
        if (EVar5 == Automatic) {
          EVar5 = (fVar9 <= fVar8 / (float)local_78.Y) + ScaleToWidth;
        }
        if (EVar5 == ScaleToWidth) {
          local_res20.Y = (int)ROUND((fVar8 + fVar8) / fVar9 + __real_3f000000) >> 1;
          local_res20.X = local_78.X;
        }
        else if (EVar5 == ScaleToHeight) {
          local_res20.Y = local_78.Y;
          local_res20.X = (int)ROUND((fVar9 + fVar9) * (float)local_78.Y + __real_3f000000) >> 1;
        }
        else {
          local_res20 = local_78;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphBlueprintLibrary.cpp"
                             ,0x277,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
        *(TIntPoint<int>_u_0_s_0 *)param_3 = local_res20;
      }
    }
  }
  return;
}

// execGetEffectiveFrameRate @ 14dc92a70

void __cdecl
UMovieGraphBlueprintLibrary::execGetEffectiveFrameRate
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar local_res10 [8];
  longlong local_res18;
  
  local_res18 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = '`';
  local_res10[1] = 0xea;
  local_res10[2] = '\0';
  local_res10[3] = '\0';
  local_res10[4] = '\x01';
  local_res10[5] = '\0';
  local_res10[6] = '\0';
  local_res10[7] = '\0';
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
  puVar2 = local_res10;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res18 != 0) && ((*(byte *)(local_res18 + 0xb0) & 8) != 0)) {
    *(undefined8 *)param_3 = *(undefined8 *)(local_res18 + 0xec);
    return;
  }
  *(undefined8 *)param_3 = *(undefined8 *)puVar2;
  return;
}

// execGetEffectiveOutputResolution @ 14dc92b80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieGraphBlueprintLibrary::execGetEffectiveOutputResolution
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FString *pFVar1;
  FProperty *pFVar2;
  code *pcVar3;
  UMovieGraphEvaluatedConfig *this;
  bool bVar4;
  EMovieGraphAspectRatioAdaptBehavior EVar5;
  UMovieGraphGlobalOutputSettingNode *pUVar6;
  FMovieGraphNamedResolution *pFVar7;
  FName FVar8;
  float extraout_XMM0_Da;
  float fVar9;
  float fVar10;
  undefined4 local_res10 [2];
  UMovieGraphEvaluatedConfig *local_res18;
  TIntPoint<int>_u_0_s_0 local_res20;
  undefined8 local_98;
  TIntPoint<int>_u_0_s_0 local_88;
  FString local_80;
  FMovieGraphNamedResolution local_70 [2];
  
  local_res18 = (UMovieGraphEvaluatedConfig *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  this = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18 == (UMovieGraphEvaluatedConfig *)0x0) {
    FFrame::KismetExecutionMessage(L"InEvaluatedGraph cannot be null.",Error,(FName)0x0);
    *(undefined8 *)param_3 = 0;
  }
  else {
    pUVar6 = UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphGlobalOutputSettingNode>
                       (local_res18,UMovieGraphNode::GlobalsPinName,true,false);
    if (pUVar6 == (UMovieGraphGlobalOutputSettingNode *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1571528361807707591>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphBlueprintLibrary.cpp"
                         ,0x239,"OutputSetting");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_80.Data.ArrayNum = 0;
      local_80.Data.ArrayMax = 0;
      bVar4 = IsNamedResolutionValid(&(pUVar6->OutputResolution).ProfileName);
      if (bVar4) {
        pFVar7 = NamedResolutionFromProfile(local_70,&(pUVar6->OutputResolution).ProfileName);
        pFVar1 = &pFVar7->Description;
        local_88 = (pFVar7->Resolution).field0_0x0._s_0;
        if (&local_80 != pFVar1) {
          if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80.Data.AllocatorInstance.Data);
          }
          local_80.Data.AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
          (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_80.Data.ArrayNum = (pFVar7->Description).Data.ArrayNum;
          local_80.Data.ArrayMax = (pFVar7->Description).Data.ArrayMax;
          (pFVar7->Description).Data.ArrayNum = 0;
          (pFVar7->Description).Data.ArrayMax = 0;
        }
        if (local_70[0].Description.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70[0].Description.Data.AllocatorInstance.Data);
        }
      }
      else {
        local_88 = (pUVar6->OutputResolution).Resolution.field0_0x0._s_0;
        ::FString::operator=(&local_80,&(pUVar6->OutputResolution).Description);
      }
      EVar5 = pUVar6->AdaptResolution;
      if (EVar5 != Disabled) {
        fVar10 = (float)local_88.X;
        if (EVar5 == Automatic) {
          EVar5 = ScaleToHeight;
        }
        fVar9 = fVar10 / (float)local_88.Y;
        if (EVar5 == ScaleToWidth) {
          local_res20.Y = (int)ROUND((fVar10 + fVar10) / fVar9 + __real_3f000000) >> 1;
          local_res20.X = local_88.X;
        }
        else if (EVar5 == ScaleToHeight) {
          local_res20.Y = local_88.Y;
          local_res20.X = (int)ROUND((fVar9 + fVar9) * (float)local_88.Y + __real_3f000000) >> 1;
        }
        else {
          local_res20 = local_88;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphBlueprintLibrary.cpp"
                             ,0x277,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
      }
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
    }
    FVar8 = UMovieGraphNode::GlobalsPinName;
    UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphCameraSettingNode>
              (this,UMovieGraphNode::GlobalsPinName,false,false);
    UE::MoviePipeline::ScaleResolutionByOverscan(extraout_XMM0_Da,(TIntPoint<int> *)FVar8);
    *(undefined8 *)param_3 = local_98;
  }
  return;
}

// execGetEstimatedTimeRemaining @ 14dc92ec0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UMovieGraphBlueprintLibrary::execGetEstimatedTimeRemaining
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FProperty *pFVar4;
  UMovieGraphPipeline *this;
  UMovieGraphTimeStepBase *pUVar5;
  int *piVar6;
  FDateTime FVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  longlong *plVar11;
  undefined1 local_res10 [8];
  longlong local_res18;
  UMovieGraphPipeline *local_res20;
  undefined1 local_b8 [128];
  
  iVar10 = 0;
  local_res20 = (UMovieGraphPipeline *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  this = local_res20;
  plVar11 = &local_res18;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar11 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (UMovieGraphPipeline *)0x0) {
    *plVar11 = 0;
    *(undefined1 *)param_3 = 0;
    return;
  }
  pUVar5 = UMovieGraphPipeline::GetTimeStepInstance(local_res20);
  if (pUVar5 != (UMovieGraphTimeStepBase *)0x0) {
    pUVar5 = UMovieGraphPipeline::GetTimeStepInstance(this);
    piVar6 = (int *)(**(code **)(*(longlong *)pUVar5 + 0x2c8))(pUVar5,local_b8);
    pFVar9 = (this->ActiveShotList).AllocatorInstance.Data;
    iVar2 = (this->ActiveShotList).ArrayNum;
    iVar3 = *piVar6;
    pFVar1 = pFVar9 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->ActiveShotList).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UMoviePipelineExecutorShot>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar9 == pFVar1) break;
      iVar10 = iVar10 + *(int *)(*(longlong *)pFVar9 + 0x144);
      pFVar9 = pFVar9 + 8;
    }
    if ((0 < iVar3) && (0 < iVar10)) {
      FVar7 = FDateTime::UtcNow();
      lVar8 = *(longlong *)FVar7.Ticks - (this->GraphInitializationTime).Ticks;
      *plVar11 = (longlong)((float)lVar8 / ((float)iVar3 / (float)iVar10)) - lVar8;
      *(undefined1 *)param_3 = 1;
      return;
    }
  }
  *plVar11 = 0;
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetJobAuthor @ 14dc932d0

void __cdecl
UMovieGraphBlueprintLibrary::execGetJobAuthor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString *pFVar2;
  FText *pFVar3;
  longlong local_res10;
  FText local_48;
  FText local_38;
  FString local_28;
  FText local_18;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == 0) {
    pFVar3 = FText::FText(&local_18);
    FText::FText(&local_48,pFVar3);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  else {
    pFVar2 = UE::MoviePipeline::GetJobAuthor
                       (&local_28,*(UMoviePipelineExecutorJob **)(local_res10 + 0xe0));
    pFVar3 = FText::FromString(&local_38,pFVar2);
    FText::FText(&local_48,pFVar3);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  FText::operator=(param_3,&local_48);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  return;
}

// execGetJobInitializationTime @ 14dc933f0

void __cdecl
UMovieGraphBlueprintLibrary::execGetJobInitializationTime
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong local_res10 [3];
  
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] != 0) {
    *(undefined8 *)param_3 = *(undefined8 *)(local_res10[0] + 0x1d8);
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetJobName @ 14dc93490

void __cdecl
UMovieGraphBlueprintLibrary::execGetJobName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FText *pFVar2;
  longlong local_res10;
  FText local_38;
  FText local_28;
  FText local_18;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == 0) {
    pFVar2 = FText::FText(&local_18);
    FText::FText(&local_38,pFVar2);
    local_28.TextData.Reference = local_18.TextData.Reference;
  }
  else {
    pFVar2 = FText::FromString(&local_28,(FString *)(*(longlong *)(local_res10 + 0xe0) + 0x28));
    FText::FText(&local_38,pFVar2);
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  FText::operator=(param_3,&local_38);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return;
}

// execGetOverallOutputFrames @ 14dc93eb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UMovieGraphBlueprintLibrary::execGetOverallOutputFrames
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uchar *puVar3;
  FProperty *pFVar4;
  UMovieGraphPipeline *this;
  UMovieGraphTimeStepBase *pUVar5;
  undefined4 *puVar6;
  FScriptContainerElement *pFVar7;
  int *piVar8;
  uchar *puVar9;
  undefined1 local_res10 [8];
  uchar local_res20 [8];
  int local_a8 [2];
  UMovieGraphPipeline *local_a0;
  undefined1 local_98 [128];
  
  local_a0 = (UMovieGraphPipeline *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  local_res20[0] = '\0';
  local_res20[1] = '\0';
  local_res20[2] = '\0';
  local_res20[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  puVar3 = param_2->MostRecentPropertyAddress;
  local_a8[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar9 = local_res20;
  if (puVar3 != (uchar *)0x0) {
    puVar9 = puVar3;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_a8,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_a8);
  }
  this = local_a0;
  piVar8 = local_a8;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar8 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar9[0] = '\0';
  puVar9[1] = '\0';
  puVar9[2] = '\0';
  puVar9[3] = '\0';
  *piVar8 = 0;
  if (this != (UMovieGraphPipeline *)0x0) {
    pUVar5 = UMovieGraphPipeline::GetTimeStepInstance(this);
    if (pUVar5 != (UMovieGraphTimeStepBase *)0x0) {
      pUVar5 = UMovieGraphPipeline::GetTimeStepInstance(this);
      puVar6 = (undefined4 *)(**(code **)(*(longlong *)pUVar5 + 0x2c8))(pUVar5,local_98);
      *(undefined4 *)puVar9 = *puVar6;
      pFVar7 = (this->ActiveShotList).AllocatorInstance.Data;
      iVar2 = (this->ActiveShotList).ArrayNum;
      pFVar1 = pFVar7 + (longlong)iVar2 * 8;
      while( true ) {
        if ((this->ActiveShotList).ArrayNum != iVar2) {
          `TCheckedPointerIterator<TObjectPtr<UMoviePipelineExecutorShot>_const_,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(local_res10);
        }
        if (pFVar7 == pFVar1) break;
        *piVar8 = *piVar8 + *(int *)(*(longlong *)pFVar7 + 0x144);
        pFVar7 = pFVar7 + 8;
      }
    }
  }
  return;
}

// execGetOverallSegmentCounts @ 14dc94070

void __cdecl
UMovieGraphBlueprintLibrary::execGetOverallSegmentCounts
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar *puVar3;
  uchar local_res10 [8];
  uchar local_res20 [8];
  longlong local_18 [2];
  
  local_18[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res10[0] = '\0';
  local_res10[1] = '\0';
  local_res10[2] = '\0';
  local_res10[3] = '\0';
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
  puVar2 = param_2->MostRecentPropertyAddress;
  local_res20[0] = '\0';
  local_res20[1] = '\0';
  local_res20[2] = '\0';
  local_res20[3] = '\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar3 = local_res10;
  if (puVar2 != (uchar *)0x0) {
    puVar3 = puVar2;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  puVar2 = local_res20;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)puVar3 = *(undefined4 *)(local_18[0] + 0x1b8);
  *(undefined4 *)puVar2 = *(undefined4 *)(local_18[0] + 0x140);
  return;
}

// execGetOverscanCropRectangle @ 14dc941b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieGraphBlueprintLibrary::execGetOverscanCropRectangle
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FString *pFVar1;
  FField **ppFVar2;
  FProperty *pFVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  UMovieGraphEvaluatedConfig *this;
  bool bVar7;
  EMovieGraphAspectRatioAdaptBehavior EVar8;
  int iVar9;
  int iVar10;
  UMovieGraphGlobalOutputSettingNode *pUVar11;
  FMovieGraphNamedResolution *pFVar12;
  FName FVar13;
  float extraout_XMM0_Da;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_res10 [2];
  undefined4 local_res18 [2];
  UMovieGraphEvaluatedConfig *local_res20;
  TIntPoint<int>_u_0_s_0 local_148;
  TIntPoint<int>_u_0_s_0 local_138;
  FString local_130;
  FName local_120;
  TIntPoint<int>_u_0_s_0 local_118;
  FString local_110;
  TIntPoint<int>_u_0_s_0 local_100;
  TIntPoint<int>_u_0_s_0 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  int iStack_dc;
  FMovieGraphNamedResolution local_c8;
  FMovieGraphNamedResolution local_a8 [3];
  
  local_138.X = 0;
  local_138.Y = 0;
  local_res20 = (UMovieGraphEvaluatedConfig *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  this = local_res20;
  fVar16 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (UMovieGraphEvaluatedConfig *)0x0) {
    local_f0 = 0;
    FFrame::KismetExecutionMessage(L"InEvaluatedGraph cannot be null.",Error,(FName)0x0);
    *(undefined8 *)param_3 = 0;
    *(undefined8 *)((longlong)param_3 + 8) = 0;
  }
  else {
    pUVar11 = UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphGlobalOutputSettingNode>
                        (local_res20,UMovieGraphNode::GlobalsPinName,true,false);
    fVar6 = __real_3f000000;
    fVar5 = __real_322bcc77;
    if (pUVar11 == (UMovieGraphGlobalOutputSettingNode *)0x0) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1571528361807707591>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphBlueprintLibrary.cpp"
                         ,0x239,"OutputSetting");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_f8.X = 0;
      local_f8.Y = 0;
    }
    else {
      local_130.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_130.Data.ArrayNum = 0;
      local_130.Data.ArrayMax = 0;
      bVar7 = IsNamedResolutionValid(&(pUVar11->OutputResolution).ProfileName);
      if (bVar7) {
        pFVar12 = NamedResolutionFromProfile(&local_c8,&(pUVar11->OutputResolution).ProfileName);
        pFVar1 = &pFVar12->Description;
        local_138 = (pFVar12->Resolution).field0_0x0._s_0;
        if (&local_130 != pFVar1) {
          if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_130.Data.AllocatorInstance.Data);
          }
          local_130.Data.AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
          (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_130.Data.ArrayNum = (pFVar12->Description).Data.ArrayNum;
          local_130.Data.ArrayMax = (pFVar12->Description).Data.ArrayMax;
          (pFVar12->Description).Data.ArrayNum = 0;
          (pFVar12->Description).Data.ArrayMax = 0;
        }
        if (local_c8.Description.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Description.Data.AllocatorInstance.Data);
        }
      }
      else {
        local_138 = (pUVar11->OutputResolution).Resolution.field0_0x0._s_0;
        ::FString::operator=(&local_130,&(pUVar11->OutputResolution).Description);
      }
      EVar8 = pUVar11->AdaptResolution;
      if (EVar8 != Disabled) {
        fVar14 = (float)local_138.X;
        fVar15 = fVar16;
        if ((float)((uint)fVar16 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar5) {
          fVar15 = fVar14 / (float)local_138.Y;
        }
        if (EVar8 == Automatic) {
          EVar8 = (fVar15 <= fVar14 / (float)local_138.Y) + ScaleToWidth;
        }
        if (EVar8 == ScaleToWidth) {
          local_148.Y = (int)ROUND((fVar14 + fVar14) / fVar15 + fVar6) >> 1;
          local_148.X = local_138.X;
          local_138 = local_148;
        }
        else if (EVar8 == ScaleToHeight) {
          local_148.Y = local_138.Y;
          local_148.X = (int)ROUND((fVar15 + fVar15) * (float)local_138.Y + fVar6) >> 1;
          local_138 = local_148;
        }
        else {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphBlueprintLibrary.cpp"
                             ,0x277,L"");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
      }
      local_f8 = local_138;
      if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Data.AllocatorInstance.Data);
      }
    }
    pUVar11 = UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphGlobalOutputSettingNode>
                        (this,UMovieGraphNode::GlobalsPinName,true,false);
    if (pUVar11 == (UMovieGraphGlobalOutputSettingNode *)0x0) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1571528361807707591>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphBlueprintLibrary.cpp"
                         ,0x239,"OutputSetting");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_100.X = 0;
      local_100.Y = 0;
    }
    else {
      local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_110.Data.ArrayNum = 0;
      local_110.Data.ArrayMax = 0;
      bVar7 = IsNamedResolutionValid(&(pUVar11->OutputResolution).ProfileName);
      if (bVar7) {
        pFVar12 = NamedResolutionFromProfile(local_a8,&(pUVar11->OutputResolution).ProfileName);
        local_120 = pFVar12->ProfileName;
        pFVar1 = &pFVar12->Description;
        local_118 = (pFVar12->Resolution).field0_0x0._s_0;
        if (&local_110 != pFVar1) {
          if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_110.Data.AllocatorInstance.Data);
          }
          local_110.Data.AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
          (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_110.Data.ArrayNum = (pFVar12->Description).Data.ArrayNum;
          local_110.Data.ArrayMax = (pFVar12->Description).Data.ArrayMax;
          (pFVar12->Description).Data.ArrayNum = 0;
          (pFVar12->Description).Data.ArrayMax = 0;
        }
        if (local_a8[0].Description.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8[0].Description.Data.AllocatorInstance.Data);
        }
      }
      else {
        local_120 = (pUVar11->OutputResolution).ProfileName;
        local_118 = (pUVar11->OutputResolution).Resolution.field0_0x0._s_0;
        ::FString::operator=(&local_110,&(pUVar11->OutputResolution).Description);
      }
      local_148 = local_118;
      EVar8 = pUVar11->AdaptResolution;
      local_100 = local_118;
      if (EVar8 != Disabled) {
        fVar15 = (float)local_118.X;
        if ((float)((uint)fVar16 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= fVar5) {
          fVar16 = fVar15 / (float)local_118.Y;
        }
        if (EVar8 == Automatic) {
          EVar8 = (fVar16 <= fVar15 / (float)local_118.Y) + ScaleToWidth;
        }
        if (EVar8 == ScaleToWidth) {
          local_148.Y = (int)ROUND((fVar15 + fVar15) / fVar16 + fVar6) >> 1;
          local_148.X = local_118.X;
        }
        else if (EVar8 == ScaleToHeight) {
          local_148.Y = local_118.Y;
          local_148.X = (int)ROUND((fVar16 + fVar16) * (float)local_118.Y + fVar6) >> 1;
        }
        else {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphBlueprintLibrary.cpp"
                             ,0x277,L"");
          if (bVar7) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        local_100 = local_148;
      }
      if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data.AllocatorInstance.Data);
      }
    }
    FVar13 = UMovieGraphNode::GlobalsPinName;
    UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphCameraSettingNode>
              (this,UMovieGraphNode::GlobalsPinName,false,false);
    UE::MoviePipeline::ScaleResolutionByOverscan(extraout_XMM0_Da,(TIntPoint<int> *)FVar13);
    iVar9 = ((int)local_e8 - local_138.X) / 2;
    iStack_dc = (int)((ulonglong)local_e8 >> 0x20);
    iVar10 = (iStack_dc - local_f8.Y) / 2;
    *(ulonglong *)((longlong)param_3 + 8) = CONCAT44(local_f8.Y + iVar10,iVar9 + local_138.X);
    *(ulonglong *)param_3 = CONCAT44(iVar10,iVar9);
  }
  return;
}

// execGetOverscannedResolution @ 14dc947e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMovieGraphBlueprintLibrary::execGetOverscannedResolution
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FString *pFVar1;
  FField **ppFVar2;
  FProperty *pFVar3;
  code *pcVar4;
  UMovieGraphEvaluatedConfig *this;
  bool bVar5;
  EMovieGraphAspectRatioAdaptBehavior EVar6;
  UMovieGraphGlobalOutputSettingNode *pUVar7;
  FMovieGraphNamedResolution *pFVar8;
  FName FVar9;
  float extraout_XMM0_Da;
  float fVar10;
  float local_res10 [2];
  undefined4 local_res18 [2];
  UMovieGraphEvaluatedConfig *local_res20;
  undefined8 local_a0;
  TIntPoint<int>_u_0_s_0 local_90;
  FString local_88;
  FMovieGraphNamedResolution local_78 [2];
  
  local_res20 = (UMovieGraphEvaluatedConfig *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  this = local_res20;
  fVar10 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == (UMovieGraphEvaluatedConfig *)0x0) {
    FFrame::KismetExecutionMessage(L"InEvaluatedGraph cannot be null.",Error,(FName)0x0);
    *(undefined8 *)param_3 = 0;
  }
  else {
    pUVar7 = UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphGlobalOutputSettingNode>
                       (local_res20,UMovieGraphNode::GlobalsPinName,true,false);
    if (pUVar7 == (UMovieGraphGlobalOutputSettingNode *)0x0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1571528361807707591>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphBlueprintLibrary.cpp"
                         ,0x239,"OutputSetting");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
      bVar5 = IsNamedResolutionValid(&(pUVar7->OutputResolution).ProfileName);
      if (bVar5) {
        pFVar8 = NamedResolutionFromProfile(local_78,&(pUVar7->OutputResolution).ProfileName);
        pFVar1 = &pFVar8->Description;
        local_90 = (pFVar8->Resolution).field0_0x0._s_0;
        if (&local_88 != pFVar1) {
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
          local_88.Data.AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
          (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_88.Data.ArrayNum = (pFVar8->Description).Data.ArrayNum;
          local_88.Data.ArrayMax = (pFVar8->Description).Data.ArrayMax;
          (pFVar8->Description).Data.ArrayNum = 0;
          (pFVar8->Description).Data.ArrayMax = 0;
        }
        if (local_78[0].Description.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78[0].Description.Data.AllocatorInstance.Data);
        }
      }
      else {
        local_90 = (pUVar7->OutputResolution).Resolution.field0_0x0._s_0;
        ::FString::operator=(&local_88,&(pUVar7->OutputResolution).Description);
      }
      EVar6 = pUVar7->AdaptResolution;
      if (EVar6 != Disabled) {
        if ((float)((uint)fVar10 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
          fVar10 = (float)local_90.X / (float)local_90.Y;
        }
        if (EVar6 == Automatic) {
          EVar6 = (fVar10 <= (float)local_90.X / (float)local_90.Y) + ScaleToWidth;
        }
        if (((EVar6 != ScaleToWidth) && (EVar6 != ScaleToHeight)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\Graph\\MovieGraphBlueprintLibrary.cpp"
                               ,0x277,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
    FVar9 = UMovieGraphNode::GlobalsPinName;
    UMovieGraphEvaluatedConfig::GetSettingForBranch<UMovieGraphCameraSettingNode>
              (this,UMovieGraphNode::GlobalsPinName,false,false);
    UE::MoviePipeline::ScaleResolutionByOverscan(extraout_XMM0_Da,(TIntPoint<int> *)FVar9);
    *(undefined8 *)param_3 = local_a0;
  }
  return;
}

// execGetPipelineState @ 14dc94b60

void __cdecl
UMovieGraphBlueprintLibrary::execGetPipelineState(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  longlong *local_res10;
  
  local_res10 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != (longlong *)0x0) {
    uVar2 = (**(code **)(*local_res10 + 0x2c8))();
    *(undefined1 *)param_3 = uVar2;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetRootFrameNumber @ 14dc94c50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UMovieGraphBlueprintLibrary::execGetRootFrameNumber(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieGraphTimeStepBase *pUVar2;
  longlong lVar3;
  UMovieGraphPipeline *local_res10;
  undefined1 local_88 [128];
  
  local_res10 = (UMovieGraphPipeline *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UMovieGraphPipeline *)0x0) {
    *(undefined4 *)param_3 = 0xffffffff;
  }
  else {
    pUVar2 = UMovieGraphPipeline::GetTimeStepInstance(local_res10);
    lVar3 = (**(code **)(*(longlong *)pUVar2 + 0x2c8))(pUVar2,local_88);
    *(undefined4 *)param_3 = *(undefined4 *)(lVar3 + 0x60);
  }
  return;
}

// execGetRootTimecode @ 14dc94d20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UMovieGraphBlueprintLibrary::execGetRootTimecode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieGraphTimeStepBase *pUVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  UMovieGraphPipeline *local_res10;
  uint uStack_94;
  undefined1 local_90 [136];
  
  local_res10 = (UMovieGraphPipeline *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UMovieGraphPipeline *)0x0) {
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uStack_94 = uStack_94 & 0xffffff00;
    lVar3 = (ulonglong)uStack_94 << 0x20;
  }
  else {
    pUVar2 = UMovieGraphPipeline::GetTimeStepInstance(local_res10);
    lVar3 = (**(code **)(*(longlong *)pUVar2 + 0x2c8))(pUVar2,local_90);
    uVar4 = *(undefined4 *)(lVar3 + 0x48);
    uVar5 = *(undefined4 *)(lVar3 + 0x4c);
    uVar6 = *(undefined4 *)(lVar3 + 0x50);
    uVar7 = *(undefined4 *)(lVar3 + 0x54);
    lVar3 = *(longlong *)(lVar3 + 0x58);
  }
  *(undefined4 *)param_3 = uVar4;
  *(undefined4 *)((longlong)param_3 + 4) = uVar5;
  *(undefined4 *)((longlong)param_3 + 8) = uVar6;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar7;
  *(longlong *)((longlong)param_3 + 0x10) = lVar3;
  return;
}

// execIsNamedResolutionValid @ 14dc95c60

void __cdecl
UMovieGraphBlueprintLibrary::execIsNamedResolutionValid
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMovieGraphProjectSettings *this;
  UClass *this_00;
  FMovieGraphNamedResolution *pFVar2;
  FName *pFVar3;
  FName local_res10;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pFVar3 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar3 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this_00 = Z_Construct_UClass_UMovieGraphProjectSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  this = (UMovieGraphProjectSettings *)(this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  if ((this != (UMovieGraphProjectSettings *)0x0) &&
     (pFVar2 = UMovieGraphProjectSettings::FindNamedResolutionForOption(this,pFVar3),
     pFVar2 != (FMovieGraphNamedResolution *)0x0)) {
    *(undefined1 *)param_3 = 1;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execNamedResolutionFromProfile @ 14dc96180

void __cdecl
UMovieGraphBlueprintLibrary::execNamedResolutionFromProfile
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FMovieGraphNamedResolution *pFVar2;
  FName *pFVar3;
  FName local_res10;
  FMovieGraphNamedResolution local_28;
  
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pFVar3 = &local_res10;
  if ((FName *)param_2->MostRecentPropertyAddress != (FName *)0x0) {
    pFVar3 = (FName *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = NamedResolutionFromProfile(&local_28,pFVar3);
  FMovieGraphNamedResolution::operator=(param_3,pFVar2);
  if (local_28.Description.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Description.Data.AllocatorInstance.Data);
  }
  return;
}

// execNamedResolutionFromSize @ 14dc96240

void __cdecl
UMovieGraphBlueprintLibrary::execNamedResolutionFromSize
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  FProperty *pFVar2;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20;
  undefined4 uStackX_24;
  undefined8 local_28 [2];
  
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res20 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar1 = (undefined8 *)((longlong)param_3 + 0x10);
  uStackX_24 = local_res18[0];
  *(FName *)param_3 = FMovieGraphNamedResolution::CustomEntryName;
  *(ulonglong *)((longlong)param_3 + 8) = CONCAT44(local_res18[0],local_res10[0]);
  if (puVar1 != local_28) {
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
    *puVar1 = 0;
    *(undefined8 *)((longlong)param_3 + 0x18) = 0;
  }
  return;
}

// execResolveFilenameFormatArguments @ 14dc96f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UMovieGraphBlueprintLibrary::execResolveFilenameFormatArguments
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FMovieGraphResolveArgs *pFVar3;
  FMovieGraphFilenameResolveParams *pFVar4;
  undefined1 auStackY_278 [32];
  FString local_248;
  FString local_238;
  undefined1 local_228 [32];
  void *local_208;
  undefined4 local_200;
  uint local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  void *local_1e8;
  undefined4 local_1e0;
  undefined1 local_1d8 [32];
  void *local_1b8;
  undefined4 local_1b0;
  uint local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  void *local_198;
  undefined4 local_190;
  FMovieGraphFilenameResolveParams local_188;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_248.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_248.Data.ArrayNum = 0;
  local_248.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_248,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_248);
  }
  FMovieGraphFilenameResolveParams::FMovieGraphFilenameResolveParams(&local_188);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_188,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_188);
  }
  local_228._0_8_ = (FScriptContainerElement *)0x0;
  local_228._8_8_ = 0;
  pFVar4 = &local_188;
  if ((FMovieGraphFilenameResolveParams *)param_2->MostRecentPropertyAddress !=
      (FMovieGraphFilenameResolveParams *)0x0) {
    pFVar4 = (FMovieGraphFilenameResolveParams *)param_2->MostRecentPropertyAddress;
  }
  local_208 = (void *)0x0;
  local_200 = 0;
  local_1fc = 0x80;
  local_1f8 = 0xffffffff;
  local_1f4 = 0;
  local_1e8 = (void *)0x0;
  local_1e0 = 0;
  local_1d8._0_8_ = (FScriptContainerElement *)0x0;
  local_1d8._8_8_ = 0;
  local_1b8 = (void *)0x0;
  local_1b0 = 0;
  local_1ac = 0x80;
  local_1a8 = 0xffffffff;
  local_1a4 = 0;
  local_198 = (void *)0x0;
  local_190 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_228,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_228);
  }
  pFVar3 = (FMovieGraphResolveArgs *)local_228;
  if ((FMovieGraphResolveArgs *)param_2->MostRecentPropertyAddress != (FMovieGraphResolveArgs *)0x0)
  {
    pFVar3 = (FMovieGraphResolveArgs *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::`anonymous_namespace'::ResolveFormatArgumentsHelper(&local_238,&local_248,pFVar4,true,pFVar3);
  if (param_3 != &local_238) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_238.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_238.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_238.Data.ArrayMax;
    local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Data.AllocatorInstance.Data);
  }
  local_190 = 0;
  if (local_198 != (void *)0x0) {
    FMemory::Free(local_198);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_1d8,0,local_1d8._8_4_);
  iVar2 = SUB84(local_1d8._8_8_,4);
  local_1d8._8_8_ = local_1d8._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_1d8,0,(int *)(local_1d8 + 0xc));
  }
  local_1a8 = 0xffffffff;
  local_1a4 = 0;
  local_1b0 = 0;
  if (0x80 < local_1ac) {
    local_1ac = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_1d8 + 0x10),0);
  }
  if (local_1b8 != (void *)0x0) {
    FMemory::Free(local_1b8);
  }
  if ((FScriptContainerElement *)local_1d8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1d8._0_8_);
  }
  local_1e0 = 0;
  if (local_1e8 != (void *)0x0) {
    FMemory::Free(local_1e8);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_228,0,local_228._8_4_);
  iVar2 = SUB84(local_228._8_8_,4);
  local_228._8_8_ = local_228._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_228,0,(int *)(local_228 + 0xc));
  }
  local_1f8 = 0xffffffff;
  local_1f4 = 0;
  local_200 = 0;
  if (0x80 < local_1fc) {
    local_1fc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_228 + 0x10),0);
  }
  if (local_208 != (void *)0x0) {
    FMemory::Free(local_208);
  }
  if ((FScriptContainerElement *)local_228._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_228._0_8_);
  }
  FMovieGraphFilenameResolveParams::~FMovieGraphFilenameResolveParams(&local_188);
  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data.AllocatorInstance.Data);
  }
  return;
}

// execResolveFormatArguments @ 14dc972a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UMovieGraphBlueprintLibrary::execResolveFormatArguments
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  FMovieGraphResolveArgs *pFVar3;
  FMovieGraphFilenameResolveParams *pFVar4;
  undefined1 auStackY_278 [32];
  FString local_248;
  FString local_238;
  undefined1 local_228 [32];
  void *local_208;
  undefined4 local_200;
  uint local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  void *local_1e8;
  undefined4 local_1e0;
  undefined1 local_1d8 [32];
  void *local_1b8;
  undefined4 local_1b0;
  uint local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  void *local_198;
  undefined4 local_190;
  FMovieGraphFilenameResolveParams local_188;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_248.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_248.Data.ArrayNum = 0;
  local_248.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_248,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_248);
  }
  FMovieGraphFilenameResolveParams::FMovieGraphFilenameResolveParams(&local_188);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_188,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_188);
  }
  local_228._0_8_ = (FScriptContainerElement *)0x0;
  local_228._8_8_ = 0;
  pFVar4 = &local_188;
  if ((FMovieGraphFilenameResolveParams *)param_2->MostRecentPropertyAddress !=
      (FMovieGraphFilenameResolveParams *)0x0) {
    pFVar4 = (FMovieGraphFilenameResolveParams *)param_2->MostRecentPropertyAddress;
  }
  local_208 = (void *)0x0;
  local_200 = 0;
  local_1fc = 0x80;
  local_1f8 = 0xffffffff;
  local_1f4 = 0;
  local_1e8 = (void *)0x0;
  local_1e0 = 0;
  local_1d8._0_8_ = (FScriptContainerElement *)0x0;
  local_1d8._8_8_ = 0;
  local_1b8 = (void *)0x0;
  local_1b0 = 0;
  local_1ac = 0x80;
  local_1a8 = 0xffffffff;
  local_1a4 = 0;
  local_198 = (void *)0x0;
  local_190 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_228,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_228);
  }
  pFVar3 = (FMovieGraphResolveArgs *)local_228;
  if ((FMovieGraphResolveArgs *)param_2->MostRecentPropertyAddress != (FMovieGraphResolveArgs *)0x0)
  {
    pFVar3 = (FMovieGraphResolveArgs *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::`anonymous_namespace'::ResolveFormatArgumentsHelper(&local_238,&local_248,pFVar4,false,pFVar3);
  if (param_3 != &local_238) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_238.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_238.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_238.Data.ArrayMax;
    local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Data.AllocatorInstance.Data);
  }
  local_190 = 0;
  if (local_198 != (void *)0x0) {
    FMemory::Free(local_198);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_1d8,0,local_1d8._8_4_);
  iVar2 = SUB84(local_1d8._8_8_,4);
  local_1d8._8_8_ = local_1d8._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_1d8,0,(int *)(local_1d8 + 0xc));
  }
  local_1a8 = 0xffffffff;
  local_1a4 = 0;
  local_1b0 = 0;
  if (0x80 < local_1ac) {
    local_1ac = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_1d8 + 0x10),0);
  }
  if (local_1b8 != (void *)0x0) {
    FMemory::Free(local_1b8);
  }
  if ((FScriptContainerElement *)local_1d8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1d8._0_8_);
  }
  local_1e0 = 0;
  if (local_1e8 != (void *)0x0) {
    FMemory::Free(local_1e8);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_228,0,local_228._8_4_);
  iVar2 = SUB84(local_228._8_8_,4);
  local_228._8_8_ = local_228._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_228,0,(int *)(local_228 + 0xc));
  }
  local_1f8 = 0xffffffff;
  local_1f4 = 0;
  local_200 = 0;
  if (0x80 < local_1fc) {
    local_1fc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_228 + 0x10),0);
  }
  if (local_208 != (void *)0x0) {
    FMemory::Free(local_208);
  }
  if ((FScriptContainerElement *)local_228._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_228._0_8_);
  }
  FMovieGraphFilenameResolveParams::~FMovieGraphFilenameResolveParams(&local_188);
  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data.AllocatorInstance.Data);
  }
  return;
}

// execResolveVersionNumber @ 14dc97600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UMovieGraphBlueprintLibrary::execResolveVersionNumber
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  bool bVar3;
  undefined1 auStack_308 [32];
  int local_2e8 [2];
  FMovieGraphFilenameResolveParams local_2e0;
  FMovieGraphFilenameResolveParams local_188;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_308;
  FMovieGraphFilenameResolveParams::FMovieGraphFilenameResolveParams(&local_188);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_188,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_188);
  }
  local_2e8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_2e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_2e8);
  }
  bVar3 = local_2e8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_2e0.RenderDataIdentifier.RootBranchName = local_188.RenderDataIdentifier.RootBranchName;
  ::FString::FString(&local_2e0.RenderDataIdentifier.LayerName,
                     &local_188.RenderDataIdentifier.LayerName);
  ::FString::FString(&local_2e0.RenderDataIdentifier.RendererName,
                     &local_188.RenderDataIdentifier.RendererName);
  ::FString::FString(&local_2e0.RenderDataIdentifier.SubResourceName,
                     &local_188.RenderDataIdentifier.SubResourceName);
  ::FString::FString(&local_2e0.RenderDataIdentifier.CameraName,
                     &local_188.RenderDataIdentifier.CameraName);
  local_2e0.RootFrameNumber = local_188.RootFrameNumber;
  local_2e0.ShotFrameNumber = local_188.ShotFrameNumber;
  local_2e0.RootFrameNumberRel = local_188.RootFrameNumberRel;
  local_2e0.ShotFrameNumberRel = local_188.ShotFrameNumberRel;
  local_2e0.FileMetadata._0_8_ = 0;
  local_2e0.FileMetadata._8_8_ = 0;
  local_2e0.FileMetadata._32_8_ = 0;
  local_2e0.FileMetadata._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_2e0.FileMetadata._48_8_ = _UNK_150631d98;
  local_2e0.FileMetadata._64_8_ = 0;
  local_2e0.FileMetadata._72_4_ = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&local_2e0.FileMetadata,
              (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&local_188.FileMetadata);
  local_2e0.Version = local_188.Version;
  local_2e0.bForceRelativeFrameNumbers = local_188.bForceRelativeFrameNumbers;
  ::FString::FString(&local_2e0.FileNameOverride,&local_188.FileNameOverride);
  local_2e0.bEnsureAbsolutePath = local_188.bEnsureAbsolutePath;
  local_2e0.InitializationTime.Ticks = local_188.InitializationTime.Ticks;
  local_2e0.InitializationTimeOffset.Ticks = local_188.InitializationTimeOffset.Ticks;
  local_2e0.ZeroPadFrameNumberCount = local_188.ZeroPadFrameNumberCount;
  local_2e0.FileNameFormatOverrides._0_8_ = 0;
  local_2e0.FileNameFormatOverrides._8_8_ = 0;
  local_2e0.FileNameFormatOverrides._32_8_ = 0;
  local_2e0.FileNameFormatOverrides._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_2e0.FileNameFormatOverrides._48_8_ = _UNK_150631d98;
  local_2e0.FileNameFormatOverrides._64_8_ = 0;
  local_2e0.FileNameFormatOverrides._72_4_ = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&local_2e0.FileNameFormatOverrides,
              (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&local_188.FileNameFormatOverrides);
  local_2e0.Job.field0_0x0.DebugPtr = local_188.Job.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_188.Job.field0_0x0.DebugPtr != (TObjectPtr<UMoviePipelineExecutorJob>_u_0)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_188.Job.field0_0x0);
  }
  local_2e0.Shot.field0_0x0.DebugPtr = local_188.Shot.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_188.Shot.field0_0x0.DebugPtr != (TObjectPtr<UMoviePipelineExecutorShot>_u_0)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_188.Shot.field0_0x0);
  }
  local_2e0.EvaluatedConfig.field0_0x0.DebugPtr = local_188.EvaluatedConfig.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_188.EvaluatedConfig.field0_0x0.DebugPtr !=
      (TObjectPtr<UMovieGraphEvaluatedConfig>_u_0)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_188.EvaluatedConfig.field0_0x0);
  }
  local_2e0.FrameNumberOffset = local_188.FrameNumberOffset;
  local_2e0.DefaultFrameRate = local_188.DefaultFrameRate;
  iVar2 = ResolveVersionNumber(&local_2e0,bVar3);
  *(int *)param_3 = iVar2;
  FMovieGraphFilenameResolveParams::~FMovieGraphFilenameResolveParams(&local_188);
  return;
}

