// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 76

// StaticClass @ 14dcf51f0

UClass * __cdecl UMoviePipelineBlueprintLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineBlueprintLibrary",
               &Z_Registration_Info_UClass_UMoviePipelineBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUMoviePipelineBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UMoviePipelineBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineBlueprintLibrary.InnerSingleton;
}

// UMoviePipelineBlueprintLibrary @ 14dd0c720

UMoviePipelineBlueprintLibrary * __thiscall
UMoviePipelineBlueprintLibrary::UMoviePipelineBlueprintLibrary
          (UMoviePipelineBlueprintLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMoviePipelineBlueprintLibrary__6B_;
  return this;
}

// UMoviePipelineBlueprintLibrary @ 14dd0c750

UMoviePipelineBlueprintLibrary * __thiscall
UMoviePipelineBlueprintLibrary::UMoviePipelineBlueprintLibrary
          (UMoviePipelineBlueprintLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMoviePipelineBlueprintLibrary__6B_;
  return this;
}

// ~UMoviePipelineBlueprintLibrary @ 14dd0e360

void __thiscall
UMoviePipelineBlueprintLibrary::~UMoviePipelineBlueprintLibrary
          (UMoviePipelineBlueprintLibrary *this)

{
  *(undefined ***)this = &___7UMoviePipelineBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// DuplicateSequence @ 14dd1b140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UMovieSceneSequence * __cdecl
UMoviePipelineBlueprintLibrary::DuplicateSequence(UObject *param_1,UMovieSceneSequence *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UMovieSceneSubSection *this;
  FName FVar4;
  UMovieSceneSequence *pUVar5;
  UClass *pUVar6;
  UMovieScene *pUVar7;
  UMovieSceneTrack *pUVar8;
  TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *pTVar9;
  UMovieSceneSequence *pUVar10;
  FString *pFVar11;
  ulonglong uVar12;
  ForAnyElementType FVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined1 local_128 [8];
  FString local_120;
  TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> local_110;
  undefined1 local_100 [40];
  undefined8 local_d8;
  TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_a8;
  void *local_68;
  undefined4 local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_158;
  if (param_2 == (UMovieSceneSequence *)0x0) {
    pUVar5 = (UMovieSceneSequence *)0x0;
  }
  else {
    FObjectDuplicationParameters::FObjectDuplicationParameters
              ((FObjectDuplicationParameters *)(local_100 + 0x18),(UObject *)param_2,param_1);
    local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FVar4 = (FName)Z_Construct_UClass_UMovieSceneSequence_NoRegister();
    local_138 = 0;
    FVar4 = MakeUniqueObjectName((UObject *)local_100,(UClass *)param_1,FVar4,None);
    local_d8 = *(undefined8 *)FVar4;
    pUVar5 = (UMovieSceneSequence *)
             StaticDuplicateObjectEx((FObjectDuplicationParameters *)(local_100 + 0x18));
    if (pUVar5 == (UMovieSceneSequence *)0x0) {
      pFVar11 = GetTypeName<UMovieSceneSequence>((FString *)local_100);
      if ((pFVar11->Data).ArrayNum == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar14);
    }
    pUVar6 = Z_Construct_UClass_UMovieSceneSequence_NoRegister();
    iVar2 = (int)pUVar6->_padding_;
    if ((*(int *)(pUVar5->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar6->_padding_)) {
      pFVar11 = GetTypeName<UMovieSceneSequence>((FString *)local_100);
      pwVar14 = L"";
      if ((pFVar11->Data).ArrayNum == 0) {
        pwVar15 = L"";
      }
      else {
        pwVar15 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
      pFVar11 = GetFullNameForCastLogError<UObject>(&local_120,(UObject *)pUVar5);
      if ((pFVar11->Data).ArrayNum != 0) {
        pwVar14 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar14,pwVar15);
    }
    local_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_110.ArrayNum = 0;
    local_110.ArrayMax = 0;
    pUVar7 = (UMovieScene *)(**(code **)(pUVar5->_padding_ + 0x2f8))(pUVar5);
    local_120.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)Z_Construct_UClass_UMovieSceneCinematicShotTrack_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UClass *)local_120.Data.AllocatorInstance.Data != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_120.Data.AllocatorInstance.Data);
    }
    pUVar8 = UMovieScene::FindTrack(pUVar7,(TSubclassOf<UMovieSceneTrack>)&local_120);
    if (pUVar8 != (UMovieSceneTrack *)0x0) {
      pUVar6 = Z_Construct_UClass_UMovieSceneCinematicShotTrack_NoRegister();
      iVar2 = (int)pUVar6->_padding_;
      if ((iVar2 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar6->_padding_)) {
        pTVar9 = (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)
                 (**(code **)(pUVar8->_padding_ + 0x360))(pUVar8);
        TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_>::
        Append<UMovieSceneSection_*,TSizedDefaultAllocator<32>_>(&local_110,pTVar9);
      }
    }
    pUVar7 = (UMovieScene *)(**(code **)(pUVar5->_padding_ + 0x2f8))(pUVar5);
    local_120.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)Z_Construct_UClass_UMovieSceneSubTrack_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UClass *)local_120.Data.AllocatorInstance.Data != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_120.Data.AllocatorInstance.Data);
    }
    pUVar8 = UMovieScene::FindTrack(pUVar7,(TSubclassOf<UMovieSceneTrack>)&local_120);
    if (pUVar8 != (UMovieSceneTrack *)0x0) {
      pUVar6 = Z_Construct_UClass_UMovieSceneSubTrack_NoRegister();
      iVar2 = (int)pUVar6->_padding_;
      if ((iVar2 <= *(int *)(pUVar8->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar6->_padding_)) {
        pTVar9 = (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)
                 (**(code **)(pUVar8->_padding_ + 0x360))(pUVar8);
        TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_>::
        Append<UMovieSceneSection_*,TSizedDefaultAllocator<32>_>(&local_110,pTVar9);
      }
    }
    iVar2 = local_110.ArrayNum;
    uVar12 = (ulonglong)local_110.ArrayNum;
    pFVar1 = local_110.AllocatorInstance.Data + uVar12 * 8;
    FVar13.Data = local_110.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar12 != iVar2) {
        `TCheckedPointerIterator<UMovieSceneSection_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_128);
      }
      if (FVar13.Data == pFVar1) break;
      this = *(UMovieSceneSubSection **)FVar13.Data;
      if (this == (UMovieSceneSubSection *)0x0) {
        pFVar11 = GetTypeName<UMovieSceneSubSection>((FString *)local_100);
        if ((pFVar11->Data).ArrayNum == 0) {
          pwVar14 = L"";
        }
        else {
          pwVar14 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar14);
      }
      pUVar6 = Z_Construct_UClass_UMovieSceneSubSection_NoRegister();
      iVar3 = (int)pUVar6->_padding_;
      if ((*(int *)(this->_padding_ + 0x38) < iVar3) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar3 * 8)
          != &pUVar6->_padding_)) {
        pFVar11 = GetTypeName<UMovieSceneSubSection>((FString *)local_100);
        pwVar14 = L"";
        if ((pFVar11->Data).ArrayNum == 0) {
          pwVar15 = L"";
        }
        else {
          pwVar15 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
        }
        pFVar11 = GetFullNameForCastLogError<UMovieSceneSection>
                            (&local_120,(UMovieSceneSection *)this);
        if ((pFVar11->Data).ArrayNum != 0) {
          pwVar14 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar14,pwVar15);
      }
      pUVar10 = UMovieSceneSubSection::GetSequence(this);
      pUVar10 = DuplicateSequence(param_1,pUVar10);
      UMovieSceneSubSection::SetSequence(this,pUVar10);
      uVar12 = local_110._8_8_ & 0xffffffff;
      FVar13.Data = FVar13.Data + 8;
    }
    if (local_110.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.AllocatorInstance.Data);
    }
    local_60 = 0;
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
    TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_a8);
  }
  return pUVar5;
}

// FindOrGetDefaultSettingForShot @ 14dd1fa70

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UMoviePipelineSetting * __cdecl
UMoviePipelineBlueprintLibrary::FindOrGetDefaultSettingForShot
          (TSubclassOf<UMoviePipelineSetting> param_1,UMoviePipelinePrimaryConfig *param_2,
          UMoviePipelineExecutorShot *param_3)

{
  int iVar1;
  UMoviePipelineConfigBase *this;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  UMoviePipelineSetting *pUVar5;
  UClass *pUVar6;
  UObject *local_res18 [2];
  
  if ((param_3 != (UMoviePipelineExecutorShot *)0x0) &&
     (this = (UMoviePipelineConfigBase *)(param_3->ShotOverrideConfig).field0_0x0.DebugPtr,
     this != (UMoviePipelineConfigBase *)0x0)) {
    local_res18[0] = *(UObject **)param_1.Class.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res18[0] != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res18[0]);
    }
    pUVar5 = UMoviePipelineConfigBase::FindSettingByClass
                       (this,(TSubclassOf<UMoviePipelineSetting>)local_res18,false,false);
    if (pUVar5 != (UMoviePipelineSetting *)0x0) {
      cVar4 = (**(code **)(pUVar5->_padding_ + 0x328))();
      if (cVar4 != '\0') {
        return pUVar5;
      }
      lVar2 = *(longlong *)param_1.Class.field0_0x0;
      if ((lVar2 != 0) &&
         (pUVar6 = Z_Construct_UClass_UMoviePipelineSetting_NoRegister(), pUVar6 != (UClass *)0x0))
      {
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(lVar2 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          pUVar5 = UClass::GetDefaultObject<UMoviePipelineSetting>
                             (*(UClass **)param_1.Class.field0_0x0);
          return pUVar5;
        }
      }
      pUVar5 = UClass::GetDefaultObject<UMoviePipelineSetting>((UClass *)0x0);
      return pUVar5;
    }
  }
  if (param_2 != (UMoviePipelinePrimaryConfig *)0x0) {
    local_res18[0] = *(UObject **)param_1.Class.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(local_res18[0]);
    }
    pUVar5 = UMoviePipelineConfigBase::FindSettingByClass
                       ((UMoviePipelineConfigBase *)param_2,
                        (TSubclassOf<UMoviePipelineSetting>)local_res18,false,false);
    if ((pUVar5 != (UMoviePipelineSetting *)0x0) &&
       (cVar4 = (**(code **)(pUVar5->_padding_ + 0x328))(), cVar4 != '\0')) {
      return pUVar5;
    }
  }
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if ((lVar2 != 0) &&
     (pUVar6 = Z_Construct_UClass_UMoviePipelineSetting_NoRegister(), pUVar6 != (UClass *)0x0)) {
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar6 = *(UClass **)param_1.Class.field0_0x0;
      goto LAB_14dd1fbdc;
    }
  }
  pUVar6 = (UClass *)0x0;
LAB_14dd1fbdc:
  pUVar5 = UClass::GetDefaultObject<UMoviePipelineSetting>(pUVar6);
  return pUVar5;
}

// GetBackbufferResolution @ 14dd23c50

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TIntPoint<int> __cdecl
UMoviePipelineBlueprintLibrary::GetBackbufferResolution
          (UMoviePipelinePrimaryConfig *param_1,UMoviePipelineExecutorShot *param_2,float param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UMoviePipelineSetting *pUVar4;
  UClass *pUVar5;
  TIntPoint<int> TVar6;
  int iVar7;
  UMoviePipelineExecutorShot *in_R8;
  float fVar8;
  float fVar9;
  longlong local_res10;
  int local_18;
  int local_14;
  UClass *local_10;
  
  if ((param_2 == (UMoviePipelineExecutorShot *)0x0) || (in_R8 == (UMoviePipelineExecutorShot *)0x0)
     ) {
    param_1->_padding_ = 0;
    return (TIntPoint<int>)(TIntPoint<int>_u_0)param_1;
  }
  GetOverscannedResolution((UMoviePipelinePrimaryConfig *)&stack0xffffffffffffffe8,param_2,param_3);
  local_10 = Z_Construct_UClass_UMoviePipelineHighResSetting_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_10);
  }
  pUVar4 = FindOrGetDefaultSettingForShot
                     ((TSubclassOf<UMoviePipelineSetting>)&stack0xfffffffffffffff0,
                      (UMoviePipelinePrimaryConfig *)param_2,in_R8);
  if (pUVar4 != (UMoviePipelineSetting *)0x0) {
    pUVar5 = Z_Construct_UClass_UMoviePipelineHighResSetting_NoRegister();
    iVar3 = (int)pUVar5->_padding_;
    if ((iVar3 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar5->_padding_)) goto LAB_14dd23d07;
  }
  pUVar4 = (UMoviePipelineSetting *)0x0;
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("HighResSettings",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineBlueprintLibrary.cpp"
                     ,0x3ba,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar6.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar1)();
    return (TIntPoint<int>)TVar6.field0_0x0;
  }
LAB_14dd23d07:
  fVar9 = (float)(int)pUVar4[1]._padding_;
  fVar8 = __real_3f800000 / fVar9;
  iVar7 = -((int)ROUND(__real_bf000000 - (fVar8 + fVar8) * (float)local_18) >> 1);
  fVar8 = (float)iVar7;
  iVar3 = -((int)ROUND(__real_bf000000 - ((float)local_14 + (float)local_14) / fVar9) >> 1);
  local_res10 = CONCAT44(iVar3 + ((int)ROUND(__real_bf000000 -
                                             (float)iVar3 * __real_40000000 *
                                             *(float *)&pUVar4[1]._padding_) >> 1) * -2,
                         iVar7 + ((int)ROUND(__real_bf000000 -
                                             (fVar8 + fVar8) * *(float *)&pUVar4[1]._padding_) >> 1)
                                 * -2);
  param_1->_padding_ = local_res10;
  return (TIntPoint<int>)(TIntPoint<int>_u_0)param_1;
}

// GetCompletionPercentage @ 14dd23ff0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

float __cdecl UMoviePipelineBlueprintLibrary::GetCompletionPercentage(UMoviePipeline *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  float fVar6;
  undefined1 local_res8 [8];
  
  if (param_1 == (UMoviePipeline *)0x0) {
    return 0.0;
  }
  pFVar4 = (param_1->ActiveShotList).AllocatorInstance.Data;
  iVar2 = (param_1->ActiveShotList).ArrayNum;
  iVar5 = 0;
  iVar3 = (param_1->CachedOutputState).OutputFrameNumber;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((param_1->ActiveShotList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UMoviePipelineExecutorShot_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    iVar5 = iVar5 + *(int *)(*(longlong *)pFVar4 + 0x144);
    pFVar4 = pFVar4 + 8;
  }
  fVar6 = (float)iVar3 / (float)iVar5;
  if (__real_3f800000 <= fVar6) {
    fVar6 = __real_3f800000;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  return fVar6;
}

// GetCurrentAperture @ 14dd245a0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __cdecl UMoviePipelineBlueprintLibrary::GetCurrentAperture(UMoviePipeline *param_1)

{
  int iVar1;
  APlayerCameraManager *this;
  FScriptContainerElement *pFVar2;
  UWorld *this_00;
  APlayerController *pAVar3;
  AActor *pAVar4;
  UClass *pUVar5;
  
  this_00 = (UWorld *)(**(code **)(param_1->_padding_ + 0x180))();
  if (this_00 != (UWorld *)0x0) {
    pAVar3 = UWorld::GetFirstPlayerController(this_00);
    this = (pAVar3->PlayerCameraManager).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this == (APlayerCameraManager *)0x0) {
        return 0.0;
      }
    }
    else {
      if (this == (APlayerCameraManager *)0x0) {
        return 0.0;
      }
      UE::GC::MarkAsReachable((UObject *)this);
    }
    pAVar4 = APlayerCameraManager::GetViewTarget(this);
    if (pAVar4 != (AActor *)0x0) {
      pUVar5 = Z_Construct_UClass_ACineCameraActor_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if (((iVar1 <= *(int *)(pAVar4->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pAVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
           &pUVar5->_padding_)) &&
         (pFVar2 = pAVar4[3].InstanceComponents.AllocatorInstance.Data,
         pFVar2 != (FScriptContainerElement *)0x0)) {
        return *(float *)(pFVar2 + 0xb50);
      }
    }
  }
  return 0.0;
}

// GetCurrentExecutorShot @ 14dd24640

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UMoviePipelineExecutorShot * __cdecl
UMoviePipelineBlueprintLibrary::GetCurrentExecutorShot(UMoviePipeline *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UMoviePipelineExecutorShot *pUVar4;
  
  if (param_1 != (UMoviePipeline *)0x0) {
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

// GetCurrentFocalLength @ 14dd246d0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __cdecl UMoviePipelineBlueprintLibrary::GetCurrentFocalLength(UMoviePipeline *param_1)

{
  int iVar1;
  APlayerCameraManager *this;
  FScriptContainerElement *pFVar2;
  UWorld *this_00;
  APlayerController *pAVar3;
  AActor *pAVar4;
  UClass *pUVar5;
  
  this_00 = (UWorld *)(**(code **)(param_1->_padding_ + 0x180))();
  if (this_00 != (UWorld *)0x0) {
    pAVar3 = UWorld::GetFirstPlayerController(this_00);
    this = (pAVar3->PlayerCameraManager).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this == (APlayerCameraManager *)0x0) {
        return __real_bf800000;
      }
    }
    else {
      if (this == (APlayerCameraManager *)0x0) {
        return __real_bf800000;
      }
      UE::GC::MarkAsReachable((UObject *)this);
    }
    pAVar4 = APlayerCameraManager::GetViewTarget(this);
    if (pAVar4 != (AActor *)0x0) {
      pUVar5 = Z_Construct_UClass_ACineCameraActor_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if (((iVar1 <= *(int *)(pAVar4->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pAVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
           &pUVar5->_padding_)) &&
         (pFVar2 = pAVar4[3].InstanceComponents.AllocatorInstance.Data,
         pFVar2 != (FScriptContainerElement *)0x0)) {
        return *(float *)(pFVar2 + 0xb4c);
      }
    }
  }
  return __real_bf800000;
}

// GetCurrentFocusDistance @ 14dd24780

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __cdecl UMoviePipelineBlueprintLibrary::GetCurrentFocusDistance(UMoviePipeline *param_1)

{
  int iVar1;
  APlayerCameraManager *this;
  FScriptContainerElement *pFVar2;
  UWorld *this_00;
  APlayerController *pAVar3;
  AActor *pAVar4;
  UClass *pUVar5;
  
  this_00 = (UWorld *)(**(code **)(param_1->_padding_ + 0x180))();
  if (this_00 != (UWorld *)0x0) {
    pAVar3 = UWorld::GetFirstPlayerController(this_00);
    this = (pAVar3->PlayerCameraManager).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this == (APlayerCameraManager *)0x0) {
        return __real_bf800000;
      }
    }
    else {
      if (this == (APlayerCameraManager *)0x0) {
        return __real_bf800000;
      }
      UE::GC::MarkAsReachable((UObject *)this);
    }
    pAVar4 = APlayerCameraManager::GetViewTarget(this);
    if (pAVar4 != (AActor *)0x0) {
      pUVar5 = Z_Construct_UClass_ACineCameraActor_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if (((iVar1 <= *(int *)(pAVar4->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pAVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
           &pUVar5->_padding_)) &&
         (pFVar2 = pAVar4[3].InstanceComponents.AllocatorInstance.Data,
         pFVar2 != (FScriptContainerElement *)0x0)) {
        return *(float *)(pFVar2 + 0xb54);
      }
    }
  }
  return __real_bf800000;
}

// GetCurrentSegmentName @ 14dd24830

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UMoviePipelineBlueprintLibrary::GetCurrentSegmentName
          (UMoviePipeline *param_1,FText *param_2,FText *param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FText *pFVar5;
  FText local_38;
  FText local_28;
  
  if (param_1 != (UMoviePipeline *)0x0) {
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

// GetCurrentSegmentState @ 14dd24980

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

EMovieRenderShotState __cdecl
UMoviePipelineBlueprintLibrary::GetCurrentSegmentState(UMoviePipeline *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  EMovieRenderShotState EVar4;
  
  if (param_1 != (UMoviePipeline *)0x0) {
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

// GetCurrentSegmentWorkMetrics @ 14dd24a10

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMoviePipelineSegmentWorkMetrics * __cdecl
UMoviePipelineBlueprintLibrary::GetCurrentSegmentWorkMetrics
          (FMoviePipelineSegmentWorkMetrics *__return_storage_ptr__,UMoviePipeline *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FMoviePipelineSegmentWorkMetrics *pFVar5;
  
  if (param_1 != (UMoviePipeline *)0x0) {
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

// GetCurrentSequence @ 14dd24b10

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

ULevelSequence * __cdecl UMoviePipelineBlueprintLibrary::GetCurrentSequence(UMoviePipeline *param_1)

{
  if (param_1 != (UMoviePipeline *)0x0) {
    return (param_1->TargetSequence).field0_0x0.DebugPtr;
  }
  return (ULevelSequence *)0x0;
}

// GetCurrentShotFrameNumber @ 14dd24b30

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FFrameNumber __cdecl
UMoviePipelineBlueprintLibrary::GetCurrentShotFrameNumber(UMoviePipeline *param_1)

{
  longlong in_RDX;
  FTimecode local_28;
  
  if (in_RDX != 0) {
    UMoviePipelinePrimaryConfig::GetEffectiveFrameRate
              (*(UMoviePipelinePrimaryConfig **)(*(longlong *)(in_RDX + 0x330) + 0x100),
               (ULevelSequence *)&stack0x00000010);
    local_28._0_8_ = *(undefined8 *)(in_RDX + 0x1fc);
    local_28._8_8_ = *(undefined8 *)(in_RDX + 0x204);
    local_28._16_8_ = *(undefined8 *)(in_RDX + 0x20c);
    FTimecode::ToFrameNumber(&local_28,(FFrameRate *)param_1);
    return (FFrameNumber)(int)param_1;
  }
  *(undefined4 *)&param_1->_padding_ = 0xffffffff;
  return (FFrameNumber)(int)param_1;
}

// GetCurrentShotTimecode @ 14dd24bc0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FTimecode * __cdecl
UMoviePipelineBlueprintLibrary::GetCurrentShotTimecode
          (FTimecode *__return_storage_ptr__,UMoviePipeline *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  bool bVar5;
  undefined3 uVar6;
  
  if (param_1 != (UMoviePipeline *)0x0) {
    iVar1 = (param_1->CachedOutputState).CurrentShotSourceTimeCode.Minutes;
    iVar2 = (param_1->CachedOutputState).CurrentShotSourceTimeCode.Seconds;
    iVar3 = (param_1->CachedOutputState).CurrentShotSourceTimeCode.Frames;
    fVar4 = (param_1->CachedOutputState).CurrentShotSourceTimeCode.Subframe;
    bVar5 = (param_1->CachedOutputState).CurrentShotSourceTimeCode.bDropFrameFormat;
    uVar6 = *(undefined3 *)&(param_1->CachedOutputState).CurrentShotSourceTimeCode.field_0x15;
    __return_storage_ptr__->Hours = (param_1->CachedOutputState).CurrentShotSourceTimeCode.Hours;
    __return_storage_ptr__->Minutes = iVar1;
    __return_storage_ptr__->Seconds = iVar2;
    __return_storage_ptr__->Frames = iVar3;
    __return_storage_ptr__->Subframe = fVar4;
    __return_storage_ptr__->bDropFrameFormat = bVar5;
    *(undefined3 *)&__return_storage_ptr__->field_0x15 = uVar6;
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

// GetCurrentVersionNumber @ 14dd24c00

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __cdecl UMoviePipelineBlueprintLibrary::GetCurrentVersionNumber(UMoviePipeline *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  if (param_1 == (UMoviePipeline *)0x0) {
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

// GetDesiredOutputResolution @ 14dd24e30

TIntPoint<int> __cdecl
UMoviePipelineBlueprintLibrary::GetDesiredOutputResolution(UMoviePipelinePrimaryConfig *param_1)

{
  code *pcVar1;
  bool bVar2;
  UMoviePipelineOutputSetting *pUVar3;
  TIntPoint<int> TVar4;
  UMoviePipelineConfigBase *in_RDX;
  
  if (in_RDX == (UMoviePipelineConfigBase *)0x0) {
    param_1->_padding_ = 0;
    return (TIntPoint<int>)(TIntPoint<int>_u_0)param_1;
  }
  pUVar3 = UMoviePipelineConfigBase::FindSetting<UMoviePipelineOutputSetting>(in_RDX,false);
  if (pUVar3 == (UMoviePipelineOutputSetting *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputSetting",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineBlueprintLibrary.cpp"
                       ,0x39d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar4.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar1)();
      return (TIntPoint<int>)TVar4.field0_0x0;
    }
  }
  param_1->_padding_ = (longlong)(pUVar3->OutputResolution).field0_0x0;
  return (TIntPoint<int>)(TIntPoint<int>_u_0)param_1;
}

// GetEffectiveOutputResolution @ 14dd250f0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TIntPoint<int> __cdecl
UMoviePipelineBlueprintLibrary::GetEffectiveOutputResolution
          (UMoviePipelinePrimaryConfig *param_1,UMoviePipelineExecutorShot *param_2,float param_3)

{
  GetOverscannedResolution(param_1,param_2,param_3);
  return (TIntPoint<int>)(TIntPoint<int>_u_0)param_1;
}

// GetEstimatedTimeRemaining @ 14dd254f0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __cdecl
UMoviePipelineBlueprintLibrary::GetEstimatedTimeRemaining
          (UMoviePipeline *param_1,FTimespan *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FDateTime FVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  undefined1 local_res8 [8];
  
  if (param_1 != (UMoviePipeline *)0x0) {
    iVar2 = (param_1->CachedOutputState).OutputFrameNumber;
    iVar7 = 0;
    pFVar6 = (param_1->ActiveShotList).AllocatorInstance.Data;
    iVar3 = (param_1->ActiveShotList).ArrayNum;
    pFVar1 = pFVar6 + (longlong)iVar3 * 8;
    while( true ) {
      if ((param_1->ActiveShotList).ArrayNum != iVar3) {
        `TCheckedPointerIterator<UMoviePipelineExecutorShot_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar6 == pFVar1) break;
      iVar7 = iVar7 + *(int *)(*(longlong *)pFVar6 + 0x144);
      pFVar6 = pFVar6 + 8;
    }
    if ((0 < iVar2) && (0 < iVar7)) {
      FVar4 = FDateTime::UtcNow();
      lVar5 = *(longlong *)FVar4.Ticks - (param_1->InitializationTime).Ticks;
      param_2->Ticks = (longlong)((float)lVar5 / ((float)iVar2 / (float)iVar7)) - lVar5;
      return true;
    }
  }
  param_2->Ticks = 0;
  return false;
}

// GetJobAuthor @ 14dd27fd0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FText * __cdecl
UMoviePipelineBlueprintLibrary::GetJobAuthor(FText *__return_storage_ptr__,UMoviePipeline *param_1)

{
  FString *pFVar1;
  FString local_18;
  
  if (param_1 == (UMoviePipeline *)0x0) {
    FText::FText(__return_storage_ptr__);
  }
  else {
    pFVar1 = UE::MoviePipeline::GetJobAuthor(&local_18,(param_1->CurrentJob).field0_0x0.DebugPtr);
    FText::FromString(__return_storage_ptr__,pFVar1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetJobInitializationTime @ 14dd28030

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FDateTime __cdecl UMoviePipelineBlueprintLibrary::GetJobInitializationTime(UMoviePipeline *param_1)

{
  longlong in_RDX;
  
  if (in_RDX != 0) {
    param_1->_padding_ = *(longlong *)(in_RDX + 0xf0);
    return (FDateTime)(long64)param_1;
  }
  param_1->_padding_ = 0;
  return (FDateTime)(long64)param_1;
}

// GetJobName @ 14dd28060

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FText * __cdecl
UMoviePipelineBlueprintLibrary::GetJobName(FText *__return_storage_ptr__,UMoviePipeline *param_1)

{
  if (param_1 != (UMoviePipeline *)0x0) {
    FText::FromString(__return_storage_ptr__,&((param_1->CurrentJob).field0_0x0.DebugPtr)->JobName);
    return __return_storage_ptr__;
  }
  FText::FText(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetMapPackageName @ 14dd280c0

FString * __cdecl
UMoviePipelineBlueprintLibrary::GetMapPackageName
          (FString *__return_storage_ptr__,UMoviePipelineExecutorJob *param_1)

{
  FString *pFVar1;
  bool bVar2;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UMoviePipelineExecutorJob *)0x0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  local_res10 = (param_1->Map).AssetPath.PackageName;
  bVar2 = local_res10 != (FName)0x0;
  if (bVar2) {
    pFVar1 = ::FName::ToString(&local_res10,&local_18);
  }
  else {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar1 = &local_28;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar1->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar1->Data).ArrayMax;
  (pFVar1->Data).ArrayNum = 0;
  (pFVar1->Data).ArrayMax = 0;
  if (bVar2) {
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetMoviePipelineEngineChangelistLabel @ 14dd29000

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FText * __cdecl
UMoviePipelineBlueprintLibrary::GetMoviePipelineEngineChangelistLabel
          (FText *__return_storage_ptr__,UMoviePipeline *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  IModularFeatures *pIVar4;
  longlong lVar5;
  FEngineVersion *this;
  longlong *plVar6;
  undefined1 local_res18 [16];
  FText local_28;
  FString local_18;
  
  pIVar4 = IModularFeatures::Get();
  iVar2 = (**(code **)((longlong)*pIVar4 + 0x18))
                    (pIVar4,IMoviePipelineBurnInExtension::ModularFeatureName);
  if (0 < iVar2) {
    pIVar4 = IModularFeatures::Get();
    lVar5 = (**(code **)((longlong)*pIVar4 + 0x20))
                      (pIVar4,IMoviePipelineBurnInExtension::ModularFeatureName,0);
    plVar6 = (longlong *)(lVar5 + -8);
    if (lVar5 == 0) {
      plVar6 = (longlong *)0x0;
    }
    (**(code **)(*plVar6 + 8))(plVar6,&local_28);
    bVar1 = FText::IsEmpty(&local_28);
    if (!bVar1) {
      (__return_storage_ptr__->TextData).Reference = local_28.TextData.Reference;
      if (local_28.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_28.TextData.Reference + 8))
                  (local_28.TextData.Reference,local_res18);
      }
      __return_storage_ptr__->Flags = local_28.Flags;
      if (local_28.TextData.Reference == (ITextData *)0x0) {
        return __return_storage_ptr__;
      }
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
      return __return_storage_ptr__;
    }
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
  }
  this = FEngineVersion::Current();
  FEngineVersion::ToString(this,&local_18,Branch);
  iVar2 = ::FString::Find(&local_18,L"-",1,IgnoreCase,FromStart,-1);
  iVar3 = ::FString::Find(&local_18,L"+",1,IgnoreCase,FromStart,-1);
  if ((iVar2 < 1) || (iVar3 < 1)) {
    FText::FText(__return_storage_ptr__);
  }
  else {
    ::FString::Mid(&local_18,(FString *)&local_28,iVar2 + 1,(iVar3 - iVar2) + -1);
    FText::FromString(__return_storage_ptr__,(FString *)&local_28);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_28.TextData.Reference);
    }
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetOverallOutputFrames @ 14dd2b5f0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UMoviePipelineBlueprintLibrary::GetOverallOutputFrames
          (UMoviePipeline *param_1,int *param_2,int *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  *param_2 = 0;
  *param_3 = 0;
  if (param_1 != (UMoviePipeline *)0x0) {
    *param_2 = (param_1->CachedOutputState).OutputFrameNumber;
    pFVar3 = (param_1->ActiveShotList).AllocatorInstance.Data;
    iVar2 = (param_1->ActiveShotList).ArrayNum;
    pFVar1 = pFVar3 + (longlong)iVar2 * 8;
    while( true ) {
      if ((param_1->ActiveShotList).ArrayNum != iVar2) {
        `TCheckedPointerIterator<UMoviePipelineExecutorShot_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar3 == pFVar1) break;
      *param_3 = *param_3 + *(int *)(*(longlong *)pFVar3 + 0x144);
      pFVar3 = pFVar3 + 8;
    }
  }
  return;
}

// GetOverallSegmentCounts @ 14dd2b680

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UMoviePipelineBlueprintLibrary::GetOverallSegmentCounts
          (UMoviePipeline *param_1,int *param_2,int *param_3)

{
  *param_2 = param_1->CurrentShotIndex;
  *param_3 = (param_1->ActiveShotList).ArrayNum;
  return;
}

// GetOverscanCropRectangle @ 14dd2bca0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TIntRect<int> * __cdecl
UMoviePipelineBlueprintLibrary::GetOverscanCropRectangle
          (TIntRect<int> *__return_storage_ptr__,UMoviePipelinePrimaryConfig *param_1,
          UMoviePipelineExecutorShot *param_2,float param_3)

{
  TIntPoint<int>_u_0_s_0 TVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  UMoviePipelineOutputSetting *pUVar6;
  TIntRect<int> *pTVar7;
  TIntPoint<int>_u_0 TVar8;
  TIntPoint<int>_u_0 TVar9;
  int iVar10;
  int iVar11;
  float in_XMM2_Da;
  longlong local_res10;
  int iStack_34;
  
  if ((param_1 != (UMoviePipelinePrimaryConfig *)0x0) &&
     (param_2 != (UMoviePipelineExecutorShot *)0x0)) {
    pUVar6 = UMoviePipelineConfigBase::FindSetting<UMoviePipelineOutputSetting>
                       ((UMoviePipelineConfigBase *)param_1,false);
    if (pUVar6 == (UMoviePipelineOutputSetting *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutputSetting",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineBlueprintLibrary.cpp"
                         ,0x39d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TIntRect<int> *)(*pcVar2)();
        return pTVar7;
      }
    }
    TVar1 = (pUVar6->OutputResolution).field0_0x0._s_0;
    GetOverscannedResolution
              ((UMoviePipelinePrimaryConfig *)&stack0x00000010,(UMoviePipelineExecutorShot *)param_1
               ,in_XMM2_Da);
    iVar11 = TVar1.X;
    iVar4 = ((int)local_res10 - iVar11) / 2;
    iStack_34 = (int)((ulonglong)local_res10 >> 0x20);
    iVar10 = TVar1.Y;
    iVar5 = (iStack_34 - iVar10) / 2;
    TVar8._s_0.Y = iVar5;
    TVar8._s_0.X = iVar4;
    (__return_storage_ptr__->field0_0x0)._s_0.Min.field0_0x0 = TVar8;
    TVar9._s_0.Y = iVar10 + iVar5;
    TVar9._s_0.X = iVar11 + iVar4;
    (__return_storage_ptr__->field0_0x0)._s_0.Max.field0_0x0 = TVar9;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (__return_storage_ptr__->field0_0x0)._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  return __return_storage_ptr__;
}

// GetOverscannedResolution @ 14dd2bdb0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

TIntPoint<int> __cdecl
UMoviePipelineBlueprintLibrary::GetOverscannedResolution
          (UMoviePipelinePrimaryConfig *param_1,UMoviePipelineExecutorShot *param_2,float param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UMoviePipelineOutputSetting *pUVar4;
  TIntPoint<int> TVar5;
  UMoviePipelineSetting *pUVar6;
  UClass *pUVar7;
  char *pcVar8;
  UMoviePipelineExecutorShot *in_R8;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar9;
  UClass *local_res10;
  
  if ((param_2 == (UMoviePipelineExecutorShot *)0x0) || (in_R8 == (UMoviePipelineExecutorShot *)0x0)
     ) {
    param_1->_padding_ = 0;
    return (TIntPoint<int>)(TIntPoint<int>_u_0)param_1;
  }
  pUVar4 = UMoviePipelineConfigBase::FindSetting<UMoviePipelineOutputSetting>
                     ((UMoviePipelineConfigBase *)param_2,false);
  if ((pUVar4 == (UMoviePipelineOutputSetting *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutputSetting",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineBlueprintLibrary.cpp"
                         ,0x39d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    TVar5.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar2)();
    return (TIntPoint<int>)TVar5.field0_0x0;
  }
  local_res10 = UMoviePipelineCameraSetting::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  pUVar6 = FindOrGetDefaultSettingForShot
                     ((TSubclassOf<UMoviePipelineSetting>)&local_res10,
                      (UMoviePipelinePrimaryConfig *)param_2,in_R8);
  if (pUVar6 != (UMoviePipelineSetting *)0x0) {
    pUVar7 = UMoviePipelineCameraSetting::StaticClass();
    pcVar8 = (char *)pUVar6->_padding_;
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= (((TIntPoint<int> *)((longlong)pcVar8 + 0x38))->field0_0x0)._s_0.X) &&
       (fVar9 = extraout_XMM0_Da,
       (longlong *)
       *(undefined1 **)
        ((longlong)*(TIntPoint<int>_u_0 *)((longlong)pcVar8 + 0x30) + (longlong)iVar1 * 8) ==
       &pUVar7->_padding_)) goto LAB_14dd2beb0;
  }
  pcVar8 = 
  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineBlueprintLibrary.cpp"
  ;
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("CameraSettings",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineBlueprintLibrary.cpp"
                     ,0x3ab,L"");
  fVar9 = extraout_XMM0_Da_00;
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    TVar5.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar2)();
    return (TIntPoint<int>)TVar5.field0_0x0;
  }
LAB_14dd2beb0:
  UE::MoviePipeline::ScaleResolutionByOverscan(fVar9,(TIntPoint<int> *)pcVar8);
  return (TIntPoint<int>)(TIntPoint<int>_u_0)param_1;
}

// GetPipelineState @ 14dd2c150

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

EMovieRenderPipelineState __cdecl
UMoviePipelineBlueprintLibrary::GetPipelineState(UMoviePipeline *param_1)

{
  EMovieRenderPipelineState EVar1;
  
  if (param_1 != (UMoviePipeline *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014dd2c158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    EVar1 = (**(code **)(param_1->_padding_ + 0x2c8))();
    return EVar1;
  }
  return Uninitialized;
}

// GetPrivateStaticClass @ 14dd2dcb0

UClass * __cdecl UMoviePipelineBlueprintLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineBlueprintLibrary",
               &Z_Registration_Info_UClass_UMoviePipelineBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUMoviePipelineBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UMoviePipelineBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineBlueprintLibrary.InnerSingleton;
}

// GetRootFrameNumber @ 14dd2f690

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FFrameNumber __cdecl UMoviePipelineBlueprintLibrary::GetRootFrameNumber(UMoviePipeline *param_1)

{
  longlong lVar1;
  longlong in_RDX;
  FTimecode local_28;
  
  if ((in_RDX != 0) && (*(longlong **)(in_RDX + 0xb8) != (longlong *)0x0)) {
    lVar1 = (**(code **)(**(longlong **)(in_RDX + 0xb8) + 0x2f8))();
    if (lVar1 != 0) {
      UMoviePipelinePrimaryConfig::GetEffectiveFrameRate
                (*(UMoviePipelinePrimaryConfig **)(*(longlong *)(in_RDX + 0x330) + 0x100),
                 (ULevelSequence *)&stack0x00000010);
      local_28._0_8_ = *(undefined8 *)(in_RDX + 0x170);
      local_28._8_8_ = *(undefined8 *)(in_RDX + 0x178);
      local_28._16_8_ = *(undefined8 *)(in_RDX + 0x180);
      FTimecode::ToFrameNumber(&local_28,(FFrameRate *)param_1);
      return (FFrameNumber)(int)param_1;
    }
  }
  *(undefined4 *)&param_1->_padding_ = 0xffffffff;
  return (FFrameNumber)(int)param_1;
}

// GetRootTimecode @ 14dd2f740

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FTimecode * __cdecl
UMoviePipelineBlueprintLibrary::GetRootTimecode
          (FTimecode *__return_storage_ptr__,UMoviePipeline *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  bool bVar5;
  undefined3 uVar6;
  
  if (param_1 != (UMoviePipeline *)0x0) {
    iVar1 = (param_1->CachedOutputState).SourceTimeCode.Minutes;
    iVar2 = (param_1->CachedOutputState).SourceTimeCode.Seconds;
    iVar3 = (param_1->CachedOutputState).SourceTimeCode.Frames;
    fVar4 = (param_1->CachedOutputState).SourceTimeCode.Subframe;
    bVar5 = (param_1->CachedOutputState).SourceTimeCode.bDropFrameFormat;
    uVar6 = *(undefined3 *)&(param_1->CachedOutputState).SourceTimeCode.field_0x15;
    __return_storage_ptr__->Hours = (param_1->CachedOutputState).SourceTimeCode.Hours;
    __return_storage_ptr__->Minutes = iVar1;
    __return_storage_ptr__->Seconds = iVar2;
    __return_storage_ptr__->Frames = iVar3;
    __return_storage_ptr__->Subframe = fVar4;
    __return_storage_ptr__->bDropFrameFormat = bVar5;
    *(undefined3 *)&__return_storage_ptr__->field_0x15 = uVar6;
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

// LoadManifestFileFromString @ 14dd35d70

UMoviePipelineQueue * __cdecl
UMoviePipelineBlueprintLibrary::LoadManifestFileFromString(FString *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  bool bVar2;
  FString *pFVar3;
  UPackage *pUVar4;
  UClass *pUVar5;
  UMoviePipelineQueue *pUVar6;
  UClass *pUVar7;
  ForAnyElementType FVar8;
  longlong lVar9;
  UMoviePipelineQueue *pUVar10;
  ForAnyElementType local_88;
  int local_80;
  int local_7c;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  TStringView<wchar_t> local_38;
  FScriptContainerElement *local_28;
  int local_20;
  
  ::FString::FString(&local_48,L"QueueManifest");
  ::FString::FString(&local_58,L"/Engine/MovieRenderPipeline/Editor/Transient");
  pFVar3 = FPackageName::GetLongPackagePath((FString *)&local_38,&local_58);
  ::FString::ConcatFC(&local_78,pFVar3,L"/");
  ::FString::ConcatFF(&local_68,&local_78,&local_48);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_38.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.DataPtr);
  }
  local_80 = (param_1->Data).ArrayNum;
  lVar9 = (longlong)local_80;
  pUVar10 = (UMoviePipelineQueue *)0x0;
  _Src = (param_1->Data).AllocatorInstance.Data;
  local_88.Data = (FScriptContainerElement *)0x0;
  if (local_80 == 0) {
    local_7c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_80,0,&local_88,local_80,&local_7c);
    memcpy(local_88.Data,_Src,lVar9 * 2);
  }
  bVar2 = FPaths::IsRelative(param_1);
  if (bVar2) {
    pFVar3 = FPaths::ProjectSavedDir();
    local_38.DataPtr = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    iVar1 = (pFVar3->Data).ArrayNum;
    local_38.Size = iVar1 + -1;
    if (iVar1 == 0) {
      local_38.Size = 0;
    }
    local_28 = (param_1->Data).AllocatorInstance.Data;
    iVar1 = (param_1->Data).ArrayNum;
    local_20 = iVar1 + -1;
    if (iVar1 == 0) {
      local_20 = 0;
    }
    FPaths::CombineInternal(&local_78,&local_38,2);
    if (local_88.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data);
    }
    local_88.Data = local_78.Data.AllocatorInstance.Data;
    local_80 = local_78.Data.ArrayNum;
    local_7c = local_78.Data.ArrayMax;
  }
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar8.Data = local_68.Data.AllocatorInstance.Data;
  }
  pUVar4 = CreatePackage((wchar_t *)FVar8.Data);
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_80 != 0) {
    FVar8.Data = local_88.Data;
  }
  pUVar4 = LoadPackage(pUVar4,(wchar_t *)FVar8.Data,0,(FArchive *)0x0,
                       (FLinkerInstancingContext *)0x0);
  if (pUVar4 != (UPackage *)0x0) {
    pUVar5 = Z_Construct_UClass_UMoviePipelineQueue_NoRegister();
    pUVar6 = (UMoviePipelineQueue *)FindObjectWithOuter((UObjectBase *)pUVar4,pUVar5,(FName)0x0);
    if (pUVar6 != (UMoviePipelineQueue *)0x0) {
      pUVar7 = Z_Construct_UClass_UMoviePipelineQueue_NoRegister();
      pUVar5 = (((TNonAccessTrackedObjectPtr<UClass> *)&pUVar6->_padding_)->ObjectPtr).field0_0x0.
               DebugPtr;
      iVar1 = (int)pUVar7->_padding_;
      if ((iVar1 <= (int)pUVar5->_padding_) &&
         (pUVar10 = (UMoviePipelineQueue *)0x0,
         (longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) == &pUVar7->_padding_
         )) {
        pUVar10 = pUVar6;
      }
    }
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return pUVar10;
}

// ResolveFilenameFormatArguments @ 14dd3ddf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014dd3e2b6) */
/* WARNING: Removing unreachable block (ram,0x00014dd3e2c6) */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMoviePipelineBlueprintLibrary::ResolveFilenameFormatArguments
          (FString *param_1,FMoviePipelineFilenameResolveParams *param_2,FString *param_3,
          FMoviePipelineFormatArgs *param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  uint uVar4;
  UMoviePipelineExecutorJob *pUVar5;
  UMoviePipelineExecutorShot *pUVar6;
  UMoviePipelineShotConfig *pUVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  void *_Src;
  code *pcVar10;
  bool bVar11;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *pTVar12;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *pTVar13;
  FMoviePipelineFormatArgs *pFVar14;
  bool bVar15;
  char cVar16;
  UMoviePipelineOutputSetting *pUVar17;
  ForAnyElementType FVar18;
  FString *pFVar19;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar20;
  int iVar21;
  FScriptContainerElement *pFVar22;
  int iVar23;
  int iVar24;
  longlong lVar25;
  longlong lVar26;
  uint uVar27;
  longlong *plVar28;
  undefined1 *puVar29;
  uint *puVar30;
  uint uVar31;
  FMoviePipelineFormatArgs *this;
  undefined1 auStackY_4a8 [32];
  undefined1 local_468;
  undefined1 local_467;
  undefined1 local_466 [6];
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_460;
  FString local_450;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_440;
  ForAnyElementType local_430;
  int local_428;
  int local_424;
  FMoviePipelineFilenameResolveParams *local_420;
  TPairInitializer<FString_&&,FString_&&> local_418;
  int iStack_408;
  uint uStack_404;
  undefined1 *local_400;
  undefined4 uStack_3f8;
  int iStack_3f4;
  int local_3f0;
  undefined4 uStack_3ec;
  int iStack_3e8;
  undefined4 uStack_3e4;
  FString local_3e0;
  FString local_3d0;
  FString local_3c0;
  FString local_3b0;
  FString local_3a0;
  FString local_390;
  FString local_380;
  undefined8 local_370;
  FMoviePipelineFormatArgs *local_368;
  FString *local_360;
  FString local_358;
  FString local_348;
  FString local_338;
  FString local_328;
  FString local_318;
  void *local_308;
  undefined8 local_300;
  longlong *local_2f8;
  int local_2f0;
  FString local_2e8;
  FString *local_2d8;
  UMoviePipelineOutputSetting *local_2d0;
  TPairInitializer<FString_const_&,FStringFormatArg_&&> local_2c8;
  TPairInitializer<FString_&&,FStringFormatArg_&&> local_2b8;
  FString local_2a8;
  FString local_298;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_288;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_278;
  FString local_268;
  FString local_258;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_248;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_240;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_238;
  undefined8 uStack_218;
  FMoviePipelineFormatArgs *local_210;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_208;
  undefined8 uStack_1e8;
  FString local_1e0;
  longlong local_1d0;
  FStringFormatArg *local_1c8;
  FString *local_1c0;
  FStringFormatArg *local_1b8;
  FString local_1b0;
  FString local_1a0;
  FString *local_190;
  void **local_188;
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  FStringFormatArg local_140;
  FStringFormatArg local_120;
  FString local_100 [2];
  undefined4 local_d4;
  undefined4 local_b4;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  local_a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  FVar18.Data = (FScriptContainerElement *)0x0;
  local_418.Key._0_4_ = 0;
  pUVar5 = (param_2->Job).field0_0x0.DebugPtr;
  local_420 = param_2;
  local_368 = param_4;
  local_360 = param_3;
  local_2d8 = param_1;
  if (pUVar5 == (UMoviePipelineExecutorJob *)0x0) {
    local_370 = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot resolve Filename Format Arguments without a Job to pull settings from.",
               Error,(FName)0x0);
    return;
  }
  pUVar17 = UMoviePipelineConfigBase::FindSetting<UMoviePipelineOutputSetting>
                      ((UMoviePipelineConfigBase *)(pUVar5->Configuration).field0_0x0.DebugPtr,false
                      );
  local_2d0 = pUVar17;
  if ((pUVar17 == (UMoviePipelineOutputSetting *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("OutputSetting",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineBlueprintLibrary.cpp"
                          ,0x411,L""), bVar15)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 = (param_2->Job).field0_0x0.DebugPtr, pUVar5 != (UMoviePipelineExecutorJob *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (param_4->InJob).field0_0x0 = (param_2->Job).field0_0x0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&param_4->FileMetadata,
              (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&param_2->FileMetadata);
  UMoviePipelinePrimaryConfig::GetFormatArguments
            ((((param_2->Job).field0_0x0.DebugPtr)->Configuration).field0_0x0.DebugPtr,param_4,true)
  ;
  iVar23 = param_2->AdditionalFrameNumberOffset + pUVar17->FrameNumberOffset;
  UE::MoviePipeline::GetPaddingFormatString
            (&local_318,pUVar17->ZeroPadFrameNumbers,param_2->FrameNumber + iVar23);
  UE::MoviePipeline::GetPaddingFormatString
            (&local_328,pUVar17->ZeroPadFrameNumbers,param_2->FrameNumberShot + iVar23);
  UE::MoviePipeline::GetPaddingFormatString
            (&local_348,pUVar17->ZeroPadFrameNumbers,param_2->FrameNumberRel + iVar23);
  UE::MoviePipeline::GetPaddingFormatString
            (&local_358,pUVar17->ZeroPadFrameNumbers,param_2->FrameNumberShotRel + iVar23);
  iVar23 = 0;
  if (param_2->bForceRelativeFrameNumbers != false) {
    iVar24 = local_348.Data.ArrayNum + -1;
    if (local_348.Data.ArrayNum == 0) {
      iVar24 = 0;
    }
    ::FString::AssignRange(&local_318,(wchar_t *)local_348.Data.AllocatorInstance.Data,iVar24);
    iVar24 = local_358.Data.ArrayNum + -1;
    if (local_358.Data.ArrayNum == 0) {
      iVar24 = iVar23;
    }
    ::FString::AssignRange(&local_328,(wchar_t *)local_358.Data.AllocatorInstance.Data,iVar24);
  }
  pUVar6 = (param_2->ShotOverride).field0_0x0.DebugPtr;
  if (pUVar6 == (UMoviePipelineExecutorShot *)0x0) {
    local_2a8.Data.ArrayNum = 0;
    local_2a8.Data.ArrayMax = 0;
    pFVar19 = &local_2a8;
    bVar11 = true;
    bVar15 = false;
  }
  else {
    iVar24 = param_2->CameraIndex;
    if ((iVar24 < 0) || ((pUVar6->SidecarCameras).ArrayNum <= iVar24)) {
      pFVar22 = (FScriptContainerElement *)&pUVar6->InnerName;
    }
    else {
      if ((iVar24 < 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar22 = (pUVar6->SidecarCameras).AllocatorInstance.Data + ((longlong)iVar24 * 5 + 3) * 8;
    }
    ::FString::FString(&local_298,(FString *)pFVar22);
    pFVar19 = &local_298;
    bVar11 = false;
    bVar15 = true;
    FVar18.Data = local_298.Data.AllocatorInstance.Data;
  }
  (pFVar19->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_460.ArrayNum = (pFVar19->Data).ArrayNum;
  local_460.ArrayMax = (pFVar19->Data).ArrayMax;
  (pFVar19->Data).ArrayNum = 0;
  (pFVar19->Data).ArrayMax = 0;
  local_460.AllocatorInstance.Data = FVar18.Data;
  if ((bVar11) && (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
  }
  if ((bVar15) && (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_298.Data.AllocatorInstance.Data);
  }
  bVar11 = false;
  bVar15 = false;
  iVar24 = local_460.ArrayNum + -1;
  if (local_460.ArrayNum == 0) {
    iVar24 = iVar23;
  }
  if (iVar24 < 1) {
    bVar15 = true;
    pTVar20 = &::FString::FString(&local_180,L"NoCamera")->Data;
    if (&local_460 != pTVar20) goto LAB_14dd3e128;
  }
  else {
    bVar11 = true;
    local_288.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
              (&local_288,(wchar_t *)local_460.AllocatorInstance.Data,local_460.ArrayNum,0);
    pTVar20 = &local_288;
LAB_14dd3e128:
    if (local_460.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_460.AllocatorInstance.Data);
    }
    local_460.AllocatorInstance.Data =
         (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar20->AllocatorInstance)->
         AllocatorInstance).Data;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar20->AllocatorInstance)->AllocatorInstance
    ).Data = (FScriptContainerElement *)0x0;
    local_460.ArrayNum = pTVar20->ArrayNum;
    local_460.ArrayMax = pTVar20->ArrayMax;
    pTVar20->ArrayNum = 0;
    pTVar20->ArrayMax = 0;
  }
  if ((bVar15) && (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_180.Data.AllocatorInstance.Data);
  }
  if ((bVar11) && (local_288.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_288.AllocatorInstance.Data);
  }
  iVar24 = (param_2->CameraNameOverride).Data.ArrayNum;
  iVar21 = iVar24 + -1;
  if (iVar24 == 0) {
    iVar21 = iVar23;
  }
  if (0 < iVar21) {
    ::FString::operator=((FString *)&local_460,&param_2->CameraNameOverride);
  }
  pUVar6 = (param_2->ShotOverride).field0_0x0.DebugPtr;
  bVar15 = pUVar6 == (UMoviePipelineExecutorShot *)0x0;
  if (bVar15) {
    local_338.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_338.Data.ArrayNum = 0;
    local_338.Data.ArrayMax = 0;
    pFVar19 = &local_338;
  }
  else {
    pFVar19 = ::FString::FString(&local_170,&pUVar6->OuterName);
  }
  local_440.AllocatorInstance.Data = (pFVar19->Data).AllocatorInstance.Data;
  (pFVar19->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_440.ArrayNum = (pFVar19->Data).ArrayNum;
  local_440.ArrayMax = (pFVar19->Data).ArrayMax;
  (pFVar19->Data).ArrayNum = 0;
  (pFVar19->Data).ArrayMax = 0;
  if ((bVar15) && (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_338.Data.AllocatorInstance.Data);
  }
  if ((!bVar15) && (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  bVar15 = false;
  iVar24 = local_440.ArrayNum + -1;
  if (local_440.ArrayNum == 0) {
    iVar24 = iVar23;
  }
  if (iVar24 < 1) {
    pTVar20 = &::FString::FString(&local_160,L"NoShot")->Data;
    if (&local_440 == pTVar20) goto LAB_14dd3e2b2;
  }
  else {
    bVar15 = true;
    local_278.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
              (&local_278,(wchar_t *)local_440.AllocatorInstance.Data,local_440.ArrayNum,0);
    pTVar20 = &local_278;
  }
  if (local_440.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_440.AllocatorInstance.Data);
  }
  local_440.AllocatorInstance.Data =
       (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar20->AllocatorInstance)->
       AllocatorInstance).Data;
  (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pTVar20->AllocatorInstance)->AllocatorInstance).
  Data = (FScriptContainerElement *)0x0;
  local_440.ArrayNum = pTVar20->ArrayNum;
  local_440.ArrayMax = pTVar20->ArrayMax;
  pTVar20->ArrayNum = 0;
  pTVar20->ArrayMax = 0;
LAB_14dd3e2b2:
  if ((bVar15) && (local_278.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_278.AllocatorInstance.Data);
  }
  iVar24 = (param_2->ShotNameOverride).Data.ArrayNum;
  iVar21 = iVar24 + -1;
  if (iVar24 == 0) {
    iVar21 = iVar23;
  }
  if (0 < iVar21) {
    ::FString::operator=((FString *)&local_440,&param_2->ShotNameOverride);
  }
  pFVar19 = ::FString::FString(local_100,(FString *)&local_440);
  FVar18.Data = local_460.AllocatorInstance.Data;
  lVar25 = (longlong)local_460.ArrayNum;
  local_380.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_380.Data.ArrayNum = local_460.ArrayNum;
  if (local_460.ArrayNum == 0) {
    local_380.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_460.ArrayNum,0,(ForAnyElementType *)&local_380,local_460.ArrayNum,
               &local_380.Data.ArrayMax);
    memcpy(local_380.Data.AllocatorInstance.Data,FVar18.Data,lVar25 * 2);
  }
  FVar18.Data = local_358.Data.AllocatorInstance.Data;
  local_3e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_358.Data.ArrayNum == 0) {
    local_3e0.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_358.Data.ArrayNum,0,(ForAnyElementType *)&local_3e0,local_358.Data.ArrayNum
               ,&local_3e0.Data.ArrayMax);
    memcpy(local_3e0.Data.AllocatorInstance.Data,FVar18.Data,(longlong)local_358.Data.ArrayNum * 2);
  }
  FVar18.Data = local_348.Data.AllocatorInstance.Data;
  local_3d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_348.Data.ArrayNum == 0) {
    local_3d0.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_348.Data.ArrayNum,0,(ForAnyElementType *)&local_3d0,local_348.Data.ArrayNum
               ,&local_3d0.Data.ArrayMax);
    memcpy(local_3d0.Data.AllocatorInstance.Data,FVar18.Data,(longlong)local_348.Data.ArrayNum * 2);
  }
  FVar18.Data = local_328.Data.AllocatorInstance.Data;
  local_3c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_328.Data.ArrayNum == 0) {
    local_3c0.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_328.Data.ArrayNum,0,(ForAnyElementType *)&local_3c0,local_328.Data.ArrayNum
               ,&local_3c0.Data.ArrayMax);
    memcpy(local_3c0.Data.AllocatorInstance.Data,FVar18.Data,(longlong)local_328.Data.ArrayNum * 2);
  }
  FVar18.Data = local_318.Data.AllocatorInstance.Data;
  local_3b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_318.Data.ArrayNum == 0) {
    local_3b0.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_318.Data.ArrayNum,0,(ForAnyElementType *)&local_3b0,local_318.Data.ArrayNum
               ,&local_3b0.Data.ArrayMax);
    memcpy(local_3b0.Data.AllocatorInstance.Data,FVar18.Data,(longlong)local_318.Data.ArrayNum * 2);
  }
  MoviePipeline::GetOutputStateFormatArgs
            (&param_4->FilenameArguments,&param_4->FileMetadata,&local_3b0,&local_3c0,&local_3d0,
             &local_3e0,&local_380,pFVar19);
  if (local_440.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_440.AllocatorInstance.Data);
  }
  if (local_460.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_460.AllocatorInstance.Data);
  }
  if (local_358.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_358.Data.AllocatorInstance.Data);
  }
  if (local_348.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.Data.AllocatorInstance.Data);
  }
  if (local_328.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_328.Data.AllocatorInstance.Data);
  }
  if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_318.Data.AllocatorInstance.Data);
  }
  UE::MoviePipeline::GetSharedFormatArguments
            (&param_4->FilenameArguments,&param_4->FileMetadata,&param_2->InitializationTime,
             param_2->InitializationVersion,(param_2->Job).field0_0x0.DebugPtr,
             &param_2->InitializationTimeOffset);
  local_308 = (void *)0x0;
  local_300 = 0;
  ::FString::FString(&local_1e0,L"file_dup");
  local_190 = &local_1e0;
  local_188 = &local_308;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
            ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              *)param_4,&local_418,(bool *)&local_190);
  if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
  }
  if (local_308 != (void *)0x0) {
    FMemory::Free(local_308);
  }
  pUVar6 = (param_2->ShotOverride).field0_0x0.DebugPtr;
  if ((pUVar6 != (UMoviePipelineExecutorShot *)0x0) &&
     (pUVar7 = (pUVar6->ShotOverrideConfig).field0_0x0.DebugPtr,
     pUVar7 != (UMoviePipelineShotConfig *)0x0)) {
    (**(code **)(*(longlong *)pUVar7 + 0x2c0))(pUVar7,&local_2f8);
    iVar23 = local_2f0;
    plVar1 = local_2f8 + local_2f0;
    plVar28 = local_2f8;
    while( true ) {
      if (local_2f0 != iVar23) {
        local_468 = 0;
        `TCheckedPointerIterator<UMoviePipelineSetting_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_468);
      }
      if (plVar28 == plVar1) break;
      plVar8 = (longlong *)*plVar28;
      if (plVar8 == (longlong *)0x0) {
        if ((byte)LogMovieRenderPipeline._0_1_ < 2) goto LAB_14dd3e6f3;
        local_2b8._4_8_ = *(undefined8 *)&pUVar7->field_0x18;
        ::FName::ToString((FName *)((longlong)&local_2b8.Key + 4),&local_268);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline)
        ;
        if (local_268.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
        goto LAB_14dd3e6f3;
        FMemory::Free(local_268.Data.AllocatorInstance.Data);
        plVar28 = plVar28 + 1;
      }
      else {
        cVar16 = (**(code **)(*plVar8 + 0x328))(plVar8);
        if (cVar16 != '\0') {
          (**(code **)(*plVar8 + 0x310))(plVar8,param_4);
        }
LAB_14dd3e6f3:
        plVar28 = plVar28 + 1;
      }
    }
    param_2 = local_420;
    if (local_2f8 != (longlong *)0x0) {
      FMemory::Free(local_2f8);
      param_2 = local_420;
    }
  }
  iVar23 = *(int *)&(param_2->FileNameFormatOverrides).field_0x28;
  puVar3 = &(param_2->FileNameFormatOverrides).field_0x10;
  iStack_408 = 0;
  local_418.Value = (FString *)&param_2->FileNameFormatOverrides;
  local_3f0 = 0;
  uStack_404 = 1;
  iStack_3f4 = 0;
  if (iVar23 != 0) {
    puVar30 = *(uint **)&(param_2->FileNameFormatOverrides).field_0x20;
    if (puVar30 == (uint *)0x0) {
      puVar30 = (uint *)puVar3;
    }
    uVar27 = *puVar30;
    while (uVar27 == 0) {
      lVar25 = (longlong)iStack_408;
      local_3f0 = local_3f0 + 0x20;
      iStack_408 = iStack_408 + 1;
      iStack_3f4 = iVar23;
      if ((int)(iVar23 + -1 + (iVar23 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_408) goto LAB_14dd3e7a0;
      uVar27 = puVar30[lVar25 + 1];
    }
    uStack_404 = -uVar27 & uVar27;
    uVar2 = (ulonglong)uStack_404 * 2 + 1;
    lVar25 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_2c8.Key._4_4_ = (int)lVar25;
    iStack_3f4 = local_2c8.Key._4_4_ + -1 + local_3f0;
    if (iVar23 < iStack_3f4) {
      iStack_3f4 = iVar23;
    }
  }
LAB_14dd3e7a0:
  uVar27 = *(uint *)&(local_420->FileNameFormatOverrides).field_0x28;
  uStack_3ec = local_d4;
  uVar31 = uVar27 & 0xffffffe0;
  iStack_3e8 = *(int *)&(local_420->FileNameFormatOverrides).field_0x8 -
               *(int *)&(local_420->FileNameFormatOverrides).field_0x34;
  TStack_238._padding_ = CONCAT44(uStack_404,iStack_408);
  uStack_3f8 = 0xffffffff;
  TStack_238.CurrentBitIndex = iStack_3f4;
  TStack_238.UnvisitedBitMask = 0xffffffff;
  iVar24 = (int)uVar27 >> 5;
  TStack_238._28_4_ = local_d4;
  TStack_238.BaseBitIndex = local_3f0;
  uStack_218 = CONCAT44(uStack_3e4,iStack_3e8);
  local_400 = puVar3;
  local_248 = (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
               *)local_418.Value;
  local_240 = (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
               *)local_418.Value;
  TStack_238.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar27 < 0) || (iVar23 < (int)uVar27)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar15)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pTVar12 = local_248;
  this = local_368;
  uVar4 = *(uint *)&(param_2->FileNameFormatOverrides).field_0x28;
  if (uVar27 != uVar4) {
    puVar9 = *(undefined1 **)&(param_2->FileNameFormatOverrides).field_0x20;
    puVar29 = puVar3;
    if (puVar9 != (undefined1 *)0x0) {
      puVar29 = puVar9;
    }
    uVar27 = -1 << ((byte)uVar27 & 0x1f) & *(uint *)(puVar29 + (longlong)iVar24 * 4);
    while (uVar27 == 0) {
      lVar25 = (longlong)iVar24;
      uVar31 = uVar31 + 0x20;
      iVar24 = iVar24 + 1;
      uVar27 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24) goto LAB_14dd3e8c0;
      uVar27 = *(uint *)(puVar29 + lVar25 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
    lVar25 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_2c8.Value._0_4_ = (int)lVar25;
    uVar27 = (int)local_2c8.Value + -1 + uVar31;
    if ((int)uVar4 < (int)uVar27) {
      uVar27 = uVar4;
    }
  }
LAB_14dd3e8c0:
  while( true ) {
    pTVar13 = local_240;
    if (*(int *)&local_240->field_0x8 - *(int *)&local_240->field_0x34 != (int)uStack_218) {
      local_467 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_467);
    }
    if (((TStack_238.CurrentBitIndex == uVar27) &&
        (TStack_238.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) &&
       (pTVar13 == pTVar12)) break;
    pFVar19 = (FString *)(*(longlong *)pTVar13 + (longlong)TStack_238.CurrentBitIndex * 0x28);
    TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
    Emplace<FString_const_&,FString_const_&>
              ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                *)this,pFVar19,pFVar19 + 1);
    TStack_238.UnvisitedBitMask = TStack_238.UnvisitedBitMask & ~TStack_238._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_238);
  }
  iStack_408 = 0;
  local_a8.Elements._44_4_ = 0x80;
  puVar3 = &(this->FilenameArguments).field_0x10;
  local_a8.Elements._0_8_ = 0;
  local_a8.Elements._8_8_ = 0;
  local_a8.Elements._32_8_ = 0;
  uStack_404 = 1;
  local_a8.Elements._40_4_ = 0;
  local_a8.Elements._52_4_ = 0;
  local_a8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_a8.HashSize = 0;
  local_a8.Elements._48_4_ = 0xffffffff;
  iVar23 = *(int *)&(this->FilenameArguments).field_0x28;
  iStack_3f4 = iStack_408;
  local_3f0 = iStack_408;
  if (iVar23 != 0) {
    puVar30 = *(uint **)&(this->FilenameArguments).field_0x20;
    if (puVar30 == (uint *)0x0) {
      puVar30 = (uint *)puVar3;
    }
    uVar27 = *puVar30;
    while (uVar27 == 0) {
      lVar25 = (longlong)iStack_408;
      local_3f0 = local_3f0 + 0x20;
      iStack_408 = iStack_408 + 1;
      iStack_3f4 = iVar23;
      if ((int)(iVar23 + -1 + (iVar23 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_408) goto LAB_14dd3e9f1;
      uVar27 = puVar30[lVar25 + 1];
    }
    uStack_404 = -uVar27 & uVar27;
    uVar2 = (ulonglong)uStack_404 * 2 + 1;
    lVar25 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_2c8.Value._4_4_ = (int)lVar25;
    iStack_3f4 = local_3f0 + -1 + local_2c8.Value._4_4_;
    if (iVar23 < iStack_3f4) {
      iStack_3f4 = iVar23;
    }
  }
LAB_14dd3e9f1:
  uVar27 = *(uint *)&(this->FilenameArguments).field_0x28;
  uStack_3ec = local_b4;
  iStack_3e8 = *(int *)&(this->FilenameArguments).field_0x8 -
               *(int *)&(this->FilenameArguments).field_0x34;
  uVar31 = uVar27 & 0xffffffe0;
  uStack_3f8 = 0xffffffff;
  local_418.Value = (FString *)this;
  TStack_208._padding_ = CONCAT44(uStack_404,iStack_408);
  TStack_208.CurrentBitIndex = iStack_3f4;
  TStack_208.UnvisitedBitMask = 0xffffffff;
  local_210 = this;
  iVar24 = (int)uVar27 >> 5;
  TStack_208._28_4_ = local_b4;
  TStack_208.BaseBitIndex = local_3f0;
  uStack_1e8 = CONCAT44(uStack_3e4,iStack_3e8);
  local_400 = puVar3;
  TStack_208.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar27 < 0) || (iVar23 < (int)uVar27)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar15)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar4 = *(uint *)&(this->FilenameArguments).field_0x28;
  if (uVar27 != uVar4) {
    puVar9 = *(undefined1 **)&(this->FilenameArguments).field_0x20;
    puVar29 = puVar3;
    if (puVar9 != (undefined1 *)0x0) {
      puVar29 = puVar9;
    }
    uVar27 = -1 << ((byte)uVar27 & 0x1f) & *(uint *)(puVar29 + (longlong)iVar24 * 4);
    while (uVar27 == 0) {
      lVar25 = (longlong)iVar24;
      uVar31 = uVar31 + 0x20;
      iVar24 = iVar24 + 1;
      uVar27 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24) goto LAB_14dd3eb00;
      uVar27 = *(uint *)(puVar29 + lVar25 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar27 & uVar27) * 2 + 1;
    lVar25 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    uVar27 = (int)lVar25 + -1 + uVar31;
    if ((int)uVar4 < (int)uVar27) {
      uVar27 = uVar4;
    }
  }
LAB_14dd3eb00:
  while( true ) {
    pFVar14 = local_210;
    if (*(int *)&(local_210->FilenameArguments).field_0x8 -
        *(int *)&(local_210->FilenameArguments).field_0x34 != (int)uStack_1e8) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_466);
    }
    if (((TStack_208.CurrentBitIndex == uVar27) &&
        (TStack_208.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) && (pFVar14 == this))
    break;
    local_3a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    lVar25 = *(longlong *)&pFVar14->FilenameArguments;
    local_3a0.Data.ArrayNum = *(int *)(lVar25 + 0x18 + (longlong)TStack_208.CurrentBitIndex * 0x28);
    lVar26 = (longlong)local_3a0.Data.ArrayNum;
    lVar25 = lVar25 + (longlong)TStack_208.CurrentBitIndex * 0x28;
    _Src = *(void **)(lVar25 + 0x10);
    if (local_3a0.Data.ArrayNum == 0) {
      local_3a0.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_3a0.Data.ArrayNum,0,(ForAnyElementType *)&local_3a0,
                 local_3a0.Data.ArrayNum,&local_3a0.Data.ArrayMax);
      memcpy(local_3a0.Data.AllocatorInstance.Data,_Src,lVar26 * 2);
    }
    FStringFormatArg::FStringFormatArg(&local_140,&local_3a0);
    local_1c8 = &local_140;
    local_1d0 = lVar25;
    TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FStringFormatArg_&&>_>
              (&local_a8,&local_2c8,(bool *)&local_1d0);
    if (local_140.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.StringValue.Data.AllocatorInstance.Data);
    }
    TStack_208.UnvisitedBitMask = TStack_208.UnvisitedBitMask & ~TStack_208._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_208);
    this = local_368;
  }
  iVar24 = (local_420->FileNameOverride).Data.ArrayNum;
  iVar23 = iVar24 + -1;
  if (iVar24 == 0) {
    iVar23 = 0;
  }
  local_430.Data = (FScriptContainerElement *)0x0;
  pFVar19 = local_2d8;
  if (0 < iVar23) {
    pFVar19 = &local_420->FileNameOverride;
  }
  local_428 = (pFVar19->Data).ArrayNum;
  lVar25 = (longlong)local_428;
  pFVar22 = (pFVar19->Data).AllocatorInstance.Data;
  if (local_428 == 0) {
    local_424 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_428,0,&local_430,local_428,&local_424);
    memcpy(local_430.Data,pFVar22,lVar25 * 2);
  }
  FVar18.Data = (FScriptContainerElement *)L"";
  if (local_428 != 0) {
    FVar18.Data = local_430.Data;
  }
  ::FString::FormatImpl
            (&local_2e8,(wchar_t *)FVar18.Data,
             (TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
              *)&local_a8);
  FPaths::NormalizeFilename(&local_2e8);
  ::FString::RemoveFromEnd(&local_2e8,L".",1,IgnoreCase);
  ::FString::FormatImpl
            (&local_258,L".{ext}",
             (TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
              *)&local_a8);
  ::FString::ConcatFF(&local_450,&local_2e8,&local_258);
  pUVar17 = local_2d0;
  FVar18.Data = (FScriptContainerElement *)L"";
  if (local_450.Data.ArrayNum != 0) {
    FVar18.Data = local_450.Data.AllocatorInstance.Data;
  }
  bVar15 = UE::MoviePipeline::CanWriteToFile
                     ((wchar_t *)FVar18.Data,local_2d0->bOverrideExistingOutput);
  if (!bVar15) {
    local_1c0 = &local_1b0;
    local_1b8 = &local_120;
    do {
      ::FString::PrintfImpl(&local_150,L"_(%d)");
      FStringFormatArg::FStringFormatArg(&local_120,&local_150);
      ::FString::FString(&local_1b0,L"file_dup");
      TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_&&>_>
                (&local_a8,&local_2b8,(bool *)&local_1c0);
      if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
      }
      if (local_120.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_120.StringValue.Data.AllocatorInstance.Data);
      }
      FVar18.Data = (FScriptContainerElement *)L"";
      if (local_428 != 0) {
        FVar18.Data = local_430.Data;
      }
      ::FString::FormatImpl
                (&local_1a0,(wchar_t *)FVar18.Data,
                 (TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
                  *)&local_a8);
      ::FString::ConcatFF(&local_390,&local_1a0,&local_258);
      if (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_450.Data.AllocatorInstance.Data);
      }
      local_450.Data.AllocatorInstance.Data = local_390.Data.AllocatorInstance.Data;
      local_390.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_450.Data.ArrayNum = local_390.Data.ArrayNum;
      local_450.Data.ArrayMax = local_390.Data.ArrayMax;
      local_390.Data.ArrayNum = 0;
      local_390.Data.ArrayMax = 0;
      if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
      }
      FVar18.Data = (FScriptContainerElement *)L"";
      if (local_450.Data.ArrayNum != 0) {
        FVar18.Data = local_450.Data.AllocatorInstance.Data;
      }
      bVar15 = UE::MoviePipeline::CanWriteToFile
                         ((wchar_t *)FVar18.Data,pUVar17->bOverrideExistingOutput);
    } while (!bVar15);
  }
  iVar23 = local_450.Data.ArrayNum + -1;
  if (local_450.Data.ArrayNum == 0) {
    iVar23 = 0;
  }
  ::FString::AssignRange(local_360,(wchar_t *)local_450.Data.AllocatorInstance.Data,iVar23);
  if (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_450.Data.AllocatorInstance.Data);
  }
  if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.Data.AllocatorInstance.Data);
  }
  if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
  }
  if (local_430.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_430.Data);
  }
  local_a8.HashSize = 0;
  if (local_a8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_a8.Elements);
  return;
}

// ResolveVersionNumber @ 14dd3ef40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

int __cdecl
UMoviePipelineBlueprintLibrary::ResolveVersionNumber
          (FMoviePipelineFilenameResolveParams *param_1,bool param_2)

{
  UMoviePipelineExecutorJob *pUVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  UMoviePipelineOutputSetting *pUVar8;
  FString *pFVar9;
  IFileManager *pIVar10;
  FScriptContainerElement *pFVar11;
  wchar_t *pwVar12;
  longlong lVar13;
  FString *pFVar14;
  uint uVar15;
  undefined1 auStackY_208 [32];
  FString local_1c8;
  undefined1 local_1b8 [12];
  int iStack_1ac;
  undefined1 local_1a8 [8];
  TPairInitializer<FString_&&,FString_&&> local_1a0;
  FString local_190;
  undefined1 local_180 [16];
  FString local_170;
  FRegexMatcher local_160;
  undefined1 local_138 [32];
  void *local_118;
  undefined4 local_110;
  uint local_10c;
  undefined4 local_108;
  undefined4 local_104;
  void *local_f8;
  undefined4 local_f0;
  undefined1 local_e8 [32];
  void *local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  void *local_a8;
  undefined4 local_a0;
  TObjectPtr<UMoviePipelineExecutorJob>_u_0 local_98;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_1a0.Key = (FString *)((ulonglong)local_1a0.Key & 0xffffffff00000000);
  pUVar1 = (param_1->Job).field0_0x0.DebugPtr;
  if (pUVar1 == (UMoviePipelineExecutorJob *)0x0) {
    local_1a0.Key = (FString *)0x0;
    FFrame::KismetExecutionMessage
              (L"Cannot resolve Version Number without a Job to pull settings from.",Error,
               (FName)0x0);
    FMoviePipelineFilenameResolveParams::~FMoviePipelineFilenameResolveParams(param_1);
    iVar4 = -1;
  }
  else {
    pUVar8 = UMoviePipelineConfigBase::FindSetting<UMoviePipelineOutputSetting>
                       ((UMoviePipelineConfigBase *)(pUVar1->Configuration).field0_0x0.DebugPtr,
                        false);
    if (pUVar8->bAutoVersion == false) {
      iVar4 = pUVar8->VersionNumber;
      FMoviePipelineFilenameResolveParams::~FMoviePipelineFilenameResolveParams(param_1);
    }
    else {
      iVar4 = (param_1->FileNameOverride).Data.ArrayNum;
      iVar5 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar5 = 0;
      }
      bVar3 = iVar5 < 1;
      if (bVar3) {
        pFVar9 = ::operator/(&local_190,&(pUVar8->OutputDirectory).Path,&pUVar8->FileNameFormat);
      }
      else {
        pFVar9 = ::FString::FString((FString *)local_180,&param_1->FileNameOverride);
      }
      local_170.Data.AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
      (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_170.Data.ArrayNum = (pFVar9->Data).ArrayNum;
      local_170.Data.ArrayMax = (pFVar9->Data).ArrayMax;
      (pFVar9->Data).ArrayNum = 0;
      (pFVar9->Data).ArrayMax = 0;
      if ((bVar3) && (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_190.Data.AllocatorInstance.Data);
      }
      if ((!bVar3) && ((FScriptContainerElement *)local_180._0_8_ != (FScriptContainerElement *)0x0)
         ) {
        FMemory::Free((void *)local_180._0_8_);
      }
      local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c8.Data.ArrayNum = 0;
      local_1c8.Data.ArrayMax = 0;
      local_138._0_8_ = (FScriptContainerElement *)0x0;
      local_138._8_8_ = 0;
      local_118 = (void *)0x0;
      local_110 = 0;
      local_10c = 0x80;
      local_108 = 0xffffffff;
      local_104 = 0;
      local_f8 = (void *)0x0;
      local_f0 = 0;
      local_e8._0_8_ = (FScriptContainerElement *)0x0;
      local_e8._8_8_ = 0;
      local_c8 = (void *)0x0;
      local_c0 = 0;
      local_bc = 0x80;
      local_b8 = 0xffffffff;
      local_b4 = 0;
      local_a8 = (void *)0x0;
      local_a0 = 0;
      local_98.DebugPtr = (UMoviePipelineExecutorJob *)0x0;
      local_88._0_8_ = (FScriptContainerElement *)0x0;
      local_88._8_8_ = 0;
      local_68 = (void *)0x0;
      local_60 = 0;
      local_5c = 0x80;
      local_58 = 0xffffffff;
      local_54 = 0;
      local_48 = (void *)0x0;
      local_40 = 0;
      ::FString::FString(&local_190,L"{version}");
      ::FString::FString((FString *)local_180,L"version");
      local_1b8._0_8_ = local_180;
      unique0x00009c00 = &local_190;
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_&&,FString_&&>_>
                ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                  *)&param_1->FileNameFormatOverrides,&local_1a0,(bool *)local_1b8);
      if ((FScriptContainerElement *)local_180._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_180._0_8_);
      }
      if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.Data.AllocatorInstance.Data);
      }
      ResolveFilenameFormatArguments
                (&local_170,param_1,&local_1c8,(FMoviePipelineFormatArgs *)local_138);
      pFVar9 = FPaths::ConvertRelativePathToFull(&local_190,&local_1c8);
      if (&local_1c8 != pFVar9) {
        if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
        }
        local_1c8.Data.AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
        (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1c8.Data.ArrayNum = (pFVar9->Data).ArrayNum;
        local_1c8.Data.ArrayMax = (pFVar9->Data).ArrayMax;
        (pFVar9->Data).ArrayNum = 0;
        (pFVar9->Data).ArrayMax = 0;
      }
      if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.Data.AllocatorInstance.Data);
      }
      FPaths::NormalizeFilename(&local_1c8);
      iVar4 = ::FString::Find(&local_1c8,L"{version}",9,IgnoreCase,FromStart,-1);
      if (iVar4 == -1) {
        if (local_48 != (void *)0x0) {
          FMemory::Free(local_48);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_88,0,local_88._8_4_);
        iVar4 = SUB84(local_88._8_8_,4);
        local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
        if (iVar4 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
        }
        local_58 = 0xffffffff;
        local_54 = 0;
        local_60 = 0;
        if (0x80 < local_5c) {
          local_5c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
        }
        if (local_68 != (void *)0x0) {
          FMemory::Free(local_68);
        }
        if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_88._0_8_);
        }
        local_a0 = 0;
        if (local_a8 != (void *)0x0) {
          FMemory::Free(local_a8);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_e8,0,local_e8._8_4_);
        iVar4 = SUB84(local_e8._8_8_,4);
        local_e8._8_8_ = local_e8._8_8_ & 0xffffffff00000000;
        if (iVar4 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,0,(ForAnyElementType *)local_e8,0,(int *)(local_e8 + 0xc));
        }
        local_b8 = 0xffffffff;
        local_b4 = 0;
        local_c0 = 0;
        if (0x80 < local_bc) {
          local_bc = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),0);
        }
        if (local_c8 != (void *)0x0) {
          FMemory::Free(local_c8);
        }
        if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_e8._0_8_);
        }
        local_f0 = 0;
        if (local_f8 != (void *)0x0) {
          FMemory::Free(local_f8);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_138,0,local_138._8_4_);
        iVar4 = SUB84(local_138._8_8_,4);
        local_138._8_8_ = local_138._8_8_ & 0xffffffff00000000;
        if (iVar4 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,0,(ForAnyElementType *)local_138,0,(int *)(local_138 + 0xc));
        }
        local_108 = 0xffffffff;
        local_104 = 0;
        local_110 = 0;
        if (0x80 < local_10c) {
          local_10c = 0x80;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_138 + 0x10),0);
        }
        if (local_118 != (void *)0x0) {
          FMemory::Free(local_118);
        }
        if ((FScriptContainerElement *)local_138._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_138._0_8_);
        }
        if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
        }
        if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_170.Data.AllocatorInstance.Data);
        }
        FMoviePipelineFilenameResolveParams::~FMoviePipelineFilenameResolveParams(param_1);
        iVar4 = 0;
      }
      else {
        iVar4 = 0;
        iVar5 = ::FString::Find(&local_1c8,L"{version}",9,IgnoreCase,FromStart,-1);
        if (-1 < iVar5) {
          iVar6 = ::FString::Find(&local_1c8,L"/",1,IgnoreCase,FromEnd,iVar5);
          iVar5 = local_1c8.Data.ArrayNum + -1;
          if (local_1c8.Data.ArrayNum == 0) {
            iVar5 = iVar4;
          }
          iVar7 = iVar5;
          if (iVar6 + 1 < iVar5) {
            iVar7 = iVar6 + 1;
          }
          if (0 < iVar7) {
            iVar4 = iVar7;
          }
          ::FString::RemoveAt(&local_1c8,iVar4,iVar5 - iVar4,Default);
          ::FString::FString(&local_190,L"v([0-9]{3})");
          FRegexPattern::FRegexPattern((FRegexPattern *)local_180,&local_190,None);
          if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_190.Data.AllocatorInstance.Data);
          }
          local_1a0.Key = (FString *)0x0;
          local_1a0.Value = (FString *)0x0;
          pIVar10 = IFileManager::Get();
          _Src.Data = local_1c8.Data.AllocatorInstance.Data;
          iVar4 = local_1c8.Data.ArrayNum;
          lVar13 = (longlong)local_1c8.Data.ArrayNum;
          local_1b8._0_8_ = (FScriptContainerElement *)0x0;
          stack0xfffffffffffffe50 = (FString *)CONCAT44(iStack_1ac,local_1c8.Data.ArrayNum);
          pcVar2 = *(code **)((longlong)*pIVar10 + 0x80);
          uVar15 = (5 - (uint)(local_1c8.Data.ArrayNum != 0)) + local_1c8.Data.ArrayNum;
          if ((int)uVar15 < local_1c8.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
          }
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,uVar15,0,(ForAnyElementType *)local_1b8,local_1c8.Data.ArrayNum,&iStack_1ac
                    );
          if (iVar4 != 0) {
            memcpy((void *)local_1b8._0_8_,_Src.Data,lVar13 * 2);
          }
          ::FString::PathAppend((FString *)local_1b8,L"*.*",3);
          pFVar11 = (FScriptContainerElement *)L"";
          if (local_1b8._8_4_ != 0) {
            pFVar11 = (FScriptContainerElement *)local_1b8._0_8_;
          }
          (*pcVar2)(pIVar10,&local_1a0,pFVar11,1);
          if ((FScriptContainerElement *)local_1b8._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_1b8._0_8_);
          }
          iVar5 = (int)local_1a0.Value;
          pFVar14 = local_1a0.Key + (int)local_1a0.Value;
          pFVar9 = local_1a0.Key;
          iVar4 = 0;
          while( true ) {
            if ((int)local_1a0.Value != iVar5) {
              `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_1a8);
            }
            if (pFVar9 == pFVar14) break;
            if ((pFVar9->Data).ArrayNum == 0) {
              pwVar12 = L"";
            }
            else {
              pwVar12 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
            }
            ::FString::FString(&local_190,pwVar12);
            FRegexMatcher::FRegexMatcher(&local_160,(FRegexPattern *)local_180,&local_190);
            if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_190.Data.AllocatorInstance.Data);
            }
            bVar3 = FRegexMatcher::FindNext(&local_160);
            if (bVar3) {
              FRegexMatcher::GetCaptureGroup(&local_160,(FString *)local_1b8,0);
              iVar6 = (int)stack0xfffffffffffffe50;
              iVar7 = iVar6 + -1;
              if (iVar6 == 0) {
                iVar7 = 0;
              }
              if (0 < iVar7) {
                ::FString::RemoveAt((FString *)local_1b8,0,1,Default);
                iVar6 = (int)stack0xfffffffffffffe50;
              }
              pFVar11 = (FScriptContainerElement *)L"";
              if (iVar6 != 0) {
                pFVar11 = (FScriptContainerElement *)local_1b8._0_8_;
              }
              iVar6 = _wtoi((wchar_t *)pFVar11);
              if (iVar4 < iVar6) {
                iVar4 = iVar6;
              }
              if ((FScriptContainerElement *)local_1b8._0_8_ != (FScriptContainerElement *)0x0) {
                FMemory::Free((void *)local_1b8._0_8_);
              }
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_160.Implementation.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_160.Pattern.Implementation.SharedReferenceCount.ReferenceController);
            pFVar9 = pFVar9 + 1;
          }
          DestructItems<FString,int>(local_1a0.Key,(int)local_1a0.Value);
          if (local_1a0.Key != (FString *)0x0) {
            FMemory::Free(local_1a0.Key);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)local_180._8_8_);
        }
        if (local_48 != (void *)0x0) {
          FMemory::Free(local_48);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_88);
        local_a0 = 0;
        if (local_a8 != (void *)0x0) {
          FMemory::Free(local_a8);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_e8);
        local_f0 = 0;
        if (local_f8 != (void *)0x0) {
          FMemory::Free(local_f8);
        }
        TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_138);
        if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
        }
        if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_170.Data.AllocatorInstance.Data);
        }
        FMoviePipelineFilenameResolveParams::~FMoviePipelineFilenameResolveParams(param_1);
        iVar4 = iVar4 + (uint)param_2;
      }
    }
  }
  return iVar4;
}

// StaticRegisterNativesUMoviePipelineBlueprintLibrary @ 14dd45560

void __cdecl
UMoviePipelineBlueprintLibrary::StaticRegisterNativesUMoviePipelineBlueprintLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x22;
  local_18.DataPtr = Z_Construct_UClass_UMoviePipelineBlueprintLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateJobShotListFromSequence @ 14dd48740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UMoviePipelineBlueprintLibrary::UpdateJobShotListFromSequence
          (ULevelSequence *param_1,UMoviePipelineExecutorJob *param_2,bool *param_3)

{
  FGuid *pFVar1;
  TArray<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FMoviePipelineSidecarCamera,TSizedDefaultAllocator<32>_> *pTVar3;
  int *piVar4;
  TArray<TObjectPtr<UMoviePipelineExecutorShot>,TSizedDefaultAllocator<32>_> *pTVar5;
  FName *pFVar6;
  undefined8 uVar7;
  uchar uVar8;
  undefined1 uVar9;
  int iVar10;
  TObjectPtr<UObject>_u_0 TVar11;
  FObjectPtr_u_0 FVar12;
  FMoviePipelineSidecarCamera *pFVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  FFrameRate FVar20;
  FFrameTime FVar21;
  FFrameTime FVar22;
  FFrameTime FVar23;
  TRangeBound<FFrameNumber> TVar24;
  TRangeBound<FFrameNumber> TVar25;
  FMovieSceneEvaluationTreeNodeHandle FVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  FFrameRate FVar34;
  FFrameRate FVar35;
  FWeakObjectPtr FVar36;
  UMoviePipelineExecutorJob *pUVar37;
  TMovieSceneEvaluationTree<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_> *pTVar38;
  FMovieSceneEvaluationTreeNode *pFVar39;
  FGuid FVar40;
  bool bVar41;
  bool bVar42;
  char cVar43;
  int iVar44;
  int iVar45;
  uint uVar46;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> *pTVar47;
  TArrayView<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_const_,int> *pTVar48;
  TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short> *pTVar49;
  longlong lVar50;
  FFrameNumber *pFVar51;
  UClass *pUVar52;
  TReferenceControllerBase<1> *pTVar53;
  TReferenceControllerBase<1> *pTVar54;
  UObject *pUVar55;
  UMovieSceneSequence *pUVar56;
  UMovieScene *pUVar57;
  FMovieScenePossessable *pFVar58;
  FMovieSceneBinding *pFVar59;
  longlong *plVar60;
  UObject *pUVar61;
  FMovieSceneSubSequenceData *pFVar62;
  FObjectPtr_u_0 *pFVar63;
  TSharedRef<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *pTVar64;
  TTuple<FString,FString> *pTVar65;
  UMoviePipelineExecutorShot *pUVar66;
  FObjectPtr_u_0 *pFVar67;
  ulonglong uVar68;
  longlong lVar69;
  longlong *plVar70;
  ForAnyElementType FVar71;
  TEnumAsByte<ERangeBoundTypes::Type> TVar72;
  uint uVar73;
  TRangeBound<FFrameNumber> TVar74;
  FName *pFVar75;
  FObjectPtr_u_0 *pFVar76;
  char cVar77;
  FScriptContainerElement *pFVar78;
  TRange<FFrameNumber> *this;
  longlong *plVar79;
  atomic<int> *paVar80;
  FObjectPtr_u_0 *pFVar81;
  ulonglong uVar82;
  TMovieSceneEvaluationTree<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_> *pTVar83;
  FWeakObjectPtr *this_00;
  ForAnyElementType FVar84;
  FCameraCutSubSectionHierarchyNode *pFVar85;
  short sVar86;
  FScriptContainerElement *pFVar87;
  TRangeBound<FFrameNumber> TVar88;
  FSharedReferencer<1> FVar89;
  TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short> TVar90;
  undefined1 auStackY_a88 [32];
  ForAnyElementType local_a30;
  undefined8 local_a28;
  UMoviePipelineExecutorShot *local_a20;
  undefined1 local_a18;
  undefined1 local_a17;
  undefined1 local_a16;
  undefined1 local_a15;
  undefined1 local_a14;
  undefined1 local_a13;
  undefined1 local_a12;
  undefined1 local_a11;
  undefined1 local_a10 [8];
  FObjectPtr_u_0 *local_a08;
  uint local_a00;
  char local_9fc;
  undefined1 local_9fb;
  ForAnyElementType local_9f8;
  undefined8 local_9f0;
  ForAnyElementType local_9e8;
  int local_9e0;
  int local_9dc;
  TArray<FString,TSizedDefaultAllocator<32>_> local_9d8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_9c8;
  FSequenceVisitParams local_9b8;
  TRange<FFrameTime> local_9b0;
  undefined1 local_998;
  undefined8 local_988;
  undefined8 uStack_980;
  FGuid local_978;
  FObjectPtr_u_0 local_968;
  FObjectPtr_u_0 FStack_960;
  int local_958;
  int local_954;
  undefined8 local_950;
  FObjectPtr_u_0 FStack_948;
  undefined8 local_940;
  FObjectPtr_u_0 FStack_938;
  uint local_930;
  uint local_92c;
  UObject *local_928;
  FObjectPtr_u_0 *local_920;
  FWeakObjectPtr local_918;
  uint local_910;
  uint local_90c;
  FObjectPtr_u_0 *local_908;
  uint local_900;
  FObjectPtr_u_0 local_8f8;
  FObjectPtr_u_0 FStack_8f0;
  undefined8 local_8e8;
  FGuid local_8d8;
  FString local_8c8;
  UMoviePipelineExecutorJob *local_8b8;
  undefined8 local_8b0;
  TRangeBound<FFrameNumber> local_8a8;
  uint local_8a0;
  undefined4 uStack_89c;
  uint local_898;
  undefined4 uStack_894;
  uint local_890;
  undefined4 uStack_88c;
  uint local_888;
  undefined4 uStack_884;
  FCameraCutSubSectionHierarchyNode *local_880;
  FWeakObjectPtr *local_878;
  uint local_870;
  undefined4 uStack_86c;
  uint local_868;
  undefined4 uStack_864;
  uint local_860;
  undefined4 uStack_85c;
  uint local_858;
  undefined4 uStack_854;
  uint local_850;
  undefined4 uStack_84c;
  uint local_848;
  undefined4 uStack_844;
  ULevelSequence *local_840;
  uint local_838;
  undefined4 uStack_834;
  FGuid local_830;
  TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_> local_820;
  FObjectPtr_u_0 local_808;
  FObjectPtr_u_0 FStack_800;
  uint local_7f8;
  undefined4 uStack_7f4;
  TMovieSceneEvaluationTreeDataIterator<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>
  local_7f0;
  FGuid local_7d8;
  undefined4 local_7c8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_7c0;
  FObjectPtr_u_0 local_7a8;
  FObjectPtr_u_0 FStack_7a0;
  TRangeBound<FFrameNumber> local_798;
  int local_790;
  FMoviePipelineSidecarCamera *local_788;
  undefined8 local_780;
  void *local_778;
  undefined8 uStack_770;
  void *local_768;
  undefined8 uStack_760;
  undefined8 local_758;
  TReferenceControllerBase<1> *pTStack_750;
  undefined1 local_748;
  undefined4 local_744;
  undefined1 local_740;
  undefined4 local_73c;
  undefined8 local_738;
  undefined4 local_730;
  FMovieSceneNestedSequenceTransform *local_728;
  undefined8 local_720;
  FName local_718;
  FSharedReferencer<1> FStack_710;
  bool local_708;
  undefined8 local_704;
  TIntPoint<int>_u_0 TStack_6fc;
  FFrameRate local_6f4;
  FFrameRate FStack_6ec;
  int local_6e4;
  int iStack_6e0;
  EMovieRenderShotState local_6dc;
  int local_6d8;
  FFrameNumber FStack_6d4;
  float local_6d0;
  FFrameNumber FStack_6cc;
  float local_6c8;
  FFrameNumber FStack_6c4;
  float local_6c0;
  FMovieSceneSequenceTransform local_6b8;
  undefined4 local_698;
  FFrameNumber FStack_694;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  undefined4 local_688;
  FFrameNumber FStack_684;
  undefined4 uStack_680;
  FFrameNumber FStack_67c;
  FMoviePipelineSegmentWorkMetrics local_678;
  bool local_650;
  undefined8 local_64c;
  int local_644;
  FMovieSceneTransformBreadcrumbs local_640;
  FMovieSceneTransformBreadcrumbs local_628;
  FMovieSceneSequenceTransform local_610;
  FString local_5f0;
  FString local_5e0;
  FString local_5d0;
  FString local_5c0;
  FString local_5b0;
  undefined8 local_5a0;
  bool *local_598;
  UObject *local_590;
  TRangeBound<FFrameNumber> *local_588 [2];
  FObjectPtr_u_0 local_578;
  FObjectPtr_u_0 FStack_570;
  FObjectPtr_u_0 local_568;
  UObject *pUStack_560;
  undefined8 local_558;
  TReferenceControllerBase<1> *pTStack_550;
  FCameraCutSubSectionHierarchyNode *local_548;
  TReferenceControllerBase<1> *pTStack_540;
  FString local_538;
  code *local_528;
  TRangeBound<FFrameNumber> **local_520;
  FObjectPtr_u_0 local_518;
  FObjectPtr_u_0 FStack_510;
  TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> local_508;
  TObjectPtr<UObject>_u_0 local_4f8;
  TReferenceControllerBase<1> *local_4f0;
  TObjectPtr<UObject>_u_0 local_4e8;
  TReferenceControllerBase<1> *local_4e0;
  TSharedRef<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> local_4d8;
  TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> local_4c8;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> local_4b8 [2];
  FTransformTimeParams local_498 [2];
  undefined2 local_467;
  FTransformTimeParams local_458;
  FObjectPtr_u_0 local_440;
  FObjectPtr_u_0 FStack_438;
  FEvaluationTreeEntryHandle local_430;
  int iStack_42c;
  TSharedRef<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> local_420;
  undefined1 local_410 [8];
  undefined1 local_408 [8];
  TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short> local_400;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_3e8;
  FMovieSceneInverseSequenceTransform local_3d8;
  void *local_3b8 [2];
  void *local_3a8;
  void *local_398 [2];
  void *local_388;
  ISequenceVisitor local_378;
  TMovieSceneEvaluationTree<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_> local_370;
  TMovieSceneEvaluationTree<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_> local_310;
  TArrayView<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_const_,int> local_2a8;
  TArrayView<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_const_,int> local_298;
  TArrayView<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_const_,int> local_288;
  TArrayView<FMovieSceneEvaluationTreeNode_const_,int> local_278;
  TArrayView<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_const_,int> local_268;
  TArrayView<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_const_,int> local_258;
  TArrayView<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_const_,int> local_248;
  undefined1 local_238 [128];
  undefined1 local_1b8 [56];
  void *local_180;
  void *local_170;
  ForAnyElementType local_160;
  undefined8 local_158;
  ForAnyElementType local_150;
  undefined8 local_148;
  FMovieSceneTimeTransform local_140;
  ForAnyElementType local_130;
  undefined8 local_128;
  TMapBase<FMovieSceneSequenceID,FMovieSceneSubSequenceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSubSequenceData,0>_>
  local_120;
  undefined1 local_d0 [64];
  void *local_90;
  undefined4 local_88;
  EMovieSceneServerClientMask local_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_a88;
  bVar31 = false;
  bVar30 = false;
  bVar29 = false;
  bVar28 = false;
  local_8b8 = param_2;
  local_840 = param_1;
  local_598 = param_3;
  if ((param_1 == (ULevelSequence *)0x0) || (param_2 == (UMoviePipelineExecutorJob *)0x0)) {
    local_a18 = 0;
    bVar41 = `UMoviePipelineBlueprintLibrary::UpdateJobShotListFromSequence'::__l3::<lambda_1>::
             operator()(&local_a18);
    if (!bVar41) {
      return;
    }
  }
  local_9b8.bVisitObjectBindings = false;
  local_9b8.bVisitTracks = false;
  local_9b8.bVisitSections = false;
  local_9b8.bVisitDisabledSections = false;
  local_9b8.bVisitSubSequences = true;
  local_9b8.bVisitDisabledSubSequences = false;
  local_9b8.bVisitRootTracks = true;
  local_378 = (ISequenceVisitor)
              &`UMoviePipelineBlueprintLibrary::UpdateJobShotListFromSequence'::`2'::
               FSequenceRangeVisitor::_vftable_;
  TMovieSceneEvaluationTree<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>::
  TMovieSceneEvaluationTree<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>(&local_370);
  TMovieSceneEvaluationTree<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>::
  TMovieSceneEvaluationTree<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>(&local_310);
  UE::MovieScene::VisitSequence((UMovieSceneSequence *)param_1,&local_9b8,&local_378);
  local_a30.Data = (FScriptContainerElement *)0x0;
  local_a28 = 0;
  pTVar47 = FMovieSceneEvaluationTree::GetChildren
                      ((FMovieSceneEvaluationTree *)&local_370,&local_278,
                       (FMovieSceneEvaluationTreeNode *)&local_370);
  if ((pTVar47->ArrayNum == 0) &&
     (pTVar48 = TMovieSceneEvaluationTree<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>
                ::GetDataForSingleNode
                          (&local_370,&local_288,(FMovieSceneEvaluationTreeNode *)&local_370),
     pTVar48->ArrayNum == 0)) {
    bVar41 = true;
  }
  else {
    bVar41 = false;
  }
  pTVar83 = &local_310;
  if (!bVar41) {
    pTVar83 = &local_370;
  }
  FMovieSceneEvaluationTreeRangeIterator::FMovieSceneEvaluationTreeRangeIterator
            ((FMovieSceneEvaluationTreeRangeIterator *)&local_440,
             (FMovieSceneEvaluationTree *)pTVar83);
  while( true ) {
    TVar88.Type.Value = '\0';
    TVar88._1_3_ = 0;
    TVar88.Value.Value = 0;
    FVar26.Index = iStack_42c;
    FVar26.ChildrenHandle.EntryIndex = local_430.EntryIndex;
    if ((local_430.EntryIndex == -1) && (iStack_42c != 0)) break;
    TMovieSceneEvaluationTreeDataIterator<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>
    ::
    TMovieSceneEvaluationTreeDataIterator<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>
              (&local_7f0,pTVar83,FVar26);
    pFVar39 = local_7f0.CurrentNode;
    pTVar38 = local_7f0.Tree;
    if (((local_7f0.CurrentNode != (FMovieSceneEvaluationTreeNode *)0x0) &&
        (pTVar48 = TMovieSceneEvaluationTree<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>
                   ::GetDataForSingleNode(local_7f0.Tree,&local_298,local_7f0.CurrentNode),
        iVar44 = local_7f0.DataIndex, -1 < local_7f0.DataIndex)) &&
       (local_7f0.DataIndex < pTVar48->ArrayNum)) {
      pTVar48 = TMovieSceneEvaluationTree<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>
                ::GetDataForSingleNode(pTVar38,&local_2a8,pFVar39);
      pTVar49 = TArrayView<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_const_,int>::
                operator[](pTVar48,iVar44);
      TVar90 = *pTVar49;
      local_400 = TVar90;
      TMovieSceneEvaluationTreeDataIterator<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>
      ::operator++(&local_7f0);
      sVar86 = TVar90._12_2_;
      while (((pFVar39 = local_7f0.CurrentNode, pTVar38 = local_7f0.Tree,
              local_7f0.CurrentNode != (FMovieSceneEvaluationTreeNode *)0x0 &&
              (pTVar48 = TMovieSceneEvaluationTree<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>
                         ::GetDataForSingleNode(local_7f0.Tree,&local_248,local_7f0.CurrentNode),
              iVar44 = local_7f0.DataIndex, -1 < local_7f0.DataIndex)) &&
             (local_7f0.DataIndex < pTVar48->ArrayNum))) {
        pTVar48 = TMovieSceneEvaluationTree<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>
                  ::GetDataForSingleNode(pTVar38,&local_258,pFVar39);
        pTVar49 = TArrayView<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_const_,int>::
                  operator[](pTVar48,iVar44);
        if (sVar86 < *(short *)&pTVar49->field_0xc) {
          pTVar48 = TMovieSceneEvaluationTree<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>
                    ::GetDataForSingleNode(pTVar38,&local_268,pFVar39);
          pTVar49 = TArrayView<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_const_,int>
                    ::operator[](pTVar48,iVar44);
          TVar90 = *pTVar49;
          sVar86 = TVar90._12_2_;
          local_400 = TVar90;
        }
        TMovieSceneEvaluationTreeDataIterator<TTuple<UMovieSceneSection_*,FMovieSceneSequenceID,short>_>
        ::operator++(&local_7f0);
      }
      lVar50 = (**(code **)(param_1->_padding_ + 0x2f8))(param_1);
      local_950 = *(FObjectPtr_u_0 *)(lVar50 + 0x128);
      FStack_948 = *(FObjectPtr_u_0 *)(lVar50 + 0x130);
      local_940 = local_440;
      FStack_938 = FStack_438;
      bVar41 = TRange<FFrameNumber>::IsEmpty((TRange<FFrameNumber> *)&local_940);
      if (bVar41) {
        local_898 = local_898 & 0xffffff00;
        uStack_894 = 0;
        FStack_960._4_4_ = 0;
        FStack_960._0_4_ = local_898;
        local_8a0 = local_8a0 & 0xffffff00;
        uStack_89c = 0;
        local_968._4_4_ = 0;
        local_968._0_4_ = local_8a0;
      }
      else {
        bVar41 = TRange<FFrameNumber>::IsEmpty((TRange<FFrameNumber> *)&local_950);
        if (bVar41) {
          local_888 = local_888 & 0xffffff00;
          uStack_884 = 0;
          FStack_960._4_4_ = 0;
          FStack_960._0_4_ = local_888;
          local_890 = local_890 & 0xffffff00;
          uStack_88c = 0;
          local_968._4_4_ = 0;
          local_968._0_4_ = local_890;
        }
        else {
          if (FStack_938._0_1_ == '\x02') {
            pFVar67 = &FStack_948;
          }
          else if (FStack_948._0_1_ == '\x02') {
            pFVar67 = &FStack_938;
          }
          else if ((int)FStack_938._4_4_ < (int)FStack_948._4_4_) {
            pFVar67 = &FStack_938;
          }
          else if ((int)FStack_948._4_4_ < (int)FStack_938._4_4_) {
            pFVar67 = &FStack_948;
          }
          else {
            pFVar67 = &FStack_938;
            if (FStack_938._0_1_ != '\0') {
              pFVar67 = &FStack_948;
            }
          }
          local_968 = local_950;
          if (((char)local_940 != '\x02') && (local_968 = local_940, (char)local_950 != '\x02')) {
            if ((local_940._4_4_ <= local_950._4_4_) &&
               ((local_968 = local_950, local_950._4_4_ <= local_940._4_4_ &&
                (local_968 = local_950, (char)local_940 == '\0')))) {
              local_968 = local_940;
            }
          }
          FStack_960 = *pFVar67;
        }
      }
      if ((local_968._0_1_ == '\x02') || (FStack_960._0_1_ == '\x02')) {
LAB_14dd48b57:
        TVar74 = TVar90._0_8_;
        local_7a8 = local_968;
        FStack_7a0 = FStack_960;
        if (TVar74 == (TRangeBound<FFrameNumber>)0x0) {
LAB_14dd48b8f:
          local_798 = TVar88;
        }
        else {
          pUVar52 = Z_Construct_UClass_UMovieSceneCameraCutSection_NoRegister();
          iVar44 = (int)pUVar52->_padding_;
          if ((*(int *)(*(longlong *)((longlong)TVar74 + 0x10) + 0x38) < iVar44) ||
             (local_798 = TVar74,
             (longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)((longlong)TVar74 + 0x10) + 0x30) + (longlong)iVar44 * 8)
             != &pUVar52->_padding_)) goto LAB_14dd48b8f;
        }
        local_790 = TVar90._8_4_;
        local_788 = (FMoviePipelineSidecarCamera *)0x0;
        local_780 = 0;
        local_758 = 0;
        pTStack_750 = (TReferenceControllerBase<1> *)0x0;
        local_748 = 2;
        local_744 = 0;
        local_740 = 2;
        local_73c = 0;
        local_738 = 0x3f800000;
        local_730 = 0;
        local_728 = (FMovieSceneNestedSequenceTransform *)0x0;
        local_720 = 0;
        local_778 = (void *)0x0;
        uStack_770 = 0;
        local_768 = (void *)0x0;
        uStack_760 = 0;
        iVar44 = 0;
        if ((uint)local_a28 == 0) {
LAB_14dd48d87:
          if ((local_a30.Data <= &local_7a8) &&
             (&local_7a8 < (FObjectPtr_u_0 *)(local_a30.Data + (longlong)local_a28._4_4_ * 0x90))) {
            bVar41 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar41) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            iVar44 = (uint)local_a28;
          }
          if (iVar44 == local_a28._4_4_) {
            iVar44 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x890,&local_a30,(int *)((longlong)&local_a28 + 4));
          }
          local_a28 = CONCAT44(local_a28._4_4_,iVar44 + 1);
          `UMoviePipelineBlueprintLibrary::UpdateJobShotListFromSequence'::__l6::FLinearizedEntity::
          FLinearizedEntity(local_a30.Data + (longlong)iVar44 * 0x90,(FLinearizedEntity *)&local_7a8
                           );
        }
        else {
          uVar73 = 0;
          if ((int)((uint)local_a28 - 1) < (int)(uint)local_a28) {
            uVar73 = ~((uint)local_a28 - 1) >> 0x1f;
          }
          if (uVar73 == 0) {
            bVar41 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar41) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
          }
          this = (TRange<FFrameNumber> *)
                 (local_a30.Data + (longlong)(int)((uint)local_a28 + -1) * 0x90);
          bVar41 = *(int *)&this[1].UpperBound != local_790;
          if ((this[1].LowerBound == local_798) &&
             (this[1].LowerBound != (TRangeBound<FFrameNumber>)0x0)) {
            bVar27 = true;
          }
          else {
            bVar27 = false;
          }
          bVar42 = TRange<FFrameNumber>::IsEmpty(this);
          if ((bVar42) ||
             (bVar42 = TRange<FFrameNumber>::IsEmpty((TRange<FFrameNumber> *)&local_7a8), bVar42)) {
LAB_14dd48d83:
            iVar44 = (uint)local_a28;
            goto LAB_14dd48d87;
          }
          if (((this->UpperBound).Type.Value == '\x02') || (local_7a8._0_1_ == '\x02')) {
LAB_14dd48d43:
            if ((FStack_7a0._0_1_ != '\x02') && ((this->LowerBound).Type.Value != '\x02')) {
              pFVar51 = TRangeBound<FFrameNumber>::GetValue((TRangeBound<FFrameNumber> *)this);
              iVar44 = pFVar51->Value;
              pFVar51 = TRangeBound<FFrameNumber>::GetValue
                                  ((TRangeBound<FFrameNumber> *)&FStack_7a0);
              if (pFVar51->Value == iVar44) {
                if (FStack_7a0._0_1_ == '\x01') {
                  if ((this->LowerBound).Type.Value == '\0') goto LAB_14dd48ee7;
                }
                else if (FStack_7a0._0_1_ == '\0') {
                  uVar9 = (this->LowerBound).Type.Value;
                  goto LAB_14dd48ee1;
                }
              }
            }
            goto LAB_14dd48d83;
          }
          pFVar51 = TRangeBound<FFrameNumber>::GetValue((TRangeBound<FFrameNumber> *)&local_7a8);
          iVar44 = pFVar51->Value;
          pFVar51 = TRangeBound<FFrameNumber>::GetValue(&this->UpperBound);
          if (pFVar51->Value != iVar44) goto LAB_14dd48d43;
          uVar8 = (this->UpperBound).Type.Value;
          if ((uVar8 != '\x01') || (local_7a8._0_1_ != '\0')) {
            uVar9 = local_7a8._0_1_;
            if (uVar8 != '\0') goto LAB_14dd48d83;
LAB_14dd48ee1:
            if (uVar9 != '\x01') goto LAB_14dd48d83;
          }
LAB_14dd48ee7:
          if ((bVar41) || (!bVar27)) goto LAB_14dd48d83;
          this->UpperBound = (TRangeBound<FFrameNumber>)FStack_7a0;
        }
        DestructItems<FMovieSceneNestedSequenceTransform,int>(local_728,(int)local_720);
        if (local_728 != (FMovieSceneNestedSequenceTransform *)0x0) {
          FMemory::Free(local_728);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_750);
        if (local_768 != (void *)0x0) {
          FMemory::Free(local_768);
        }
        if (local_778 != (void *)0x0) {
          FMemory::Free(local_778);
        }
        DestructItems<FMoviePipelineSidecarCamera,int>(local_788,(int)local_780);
        if (local_788 != (FMoviePipelineSidecarCamera *)0x0) {
          FMemory::Free(local_788);
        }
      }
      else {
        pFVar51 = TRangeBound<FFrameNumber>::GetValue((TRangeBound<FFrameNumber> *)&FStack_960);
        iVar44 = pFVar51->Value;
        pFVar51 = TRangeBound<FFrameNumber>::GetValue((TRangeBound<FFrameNumber> *)&local_968);
        if (pFVar51->Value <= iVar44) {
          pFVar51 = TRangeBound<FFrameNumber>::GetValue((TRangeBound<FFrameNumber> *)&FStack_960);
          iVar44 = pFVar51->Value;
          pFVar51 = TRangeBound<FFrameNumber>::GetValue((TRangeBound<FFrameNumber> *)&local_968);
          if ((pFVar51->Value != iVar44) ||
             ((local_968._0_1_ != '\0' && (FStack_960._0_1_ != '\0')))) goto LAB_14dd48b57;
        }
      }
    }
    FMovieSceneEvaluationTreeRangeIterator::Iter
              ((FMovieSceneEvaluationTreeRangeIterator *)&local_440,true);
  }
  local_1b8._0_4_ = 0xffffffff;
  local_1b8._8_8_ = (FScriptContainerElement *)0x0;
  local_1b8._16_4_ = 0;
  local_1b8._20_4_ = 0;
  FMovieSceneEvaluationTree::FMovieSceneEvaluationTree
            ((FMovieSceneEvaluationTree *)(local_1b8 + 0x18));
  local_120.Pairs.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_120.Pairs.Elements._48_8_ = _UNK_150631d98;
  local_d0._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_d0._48_8_ = _UNK_150631d98;
  local_160.Data = (FScriptContainerElement *)0x0;
  local_158._0_4_ = 0;
  local_158._4_4_ = 0;
  local_150.Data = (FScriptContainerElement *)0x0;
  local_148._0_4_ = 0;
  local_148._4_4_ = 0;
  local_140.TimeScale = 1.0;
  local_140.Offset.FrameNumber.Value = 0;
  local_140.Offset.SubFrame = 0.0;
  local_130.Data = (FScriptContainerElement *)0x0;
  local_128._0_4_ = 0;
  local_128._4_4_ = 0;
  local_120.Pairs.Elements._0_8_ = 0;
  local_120.Pairs.Elements._8_8_ = 0;
  local_120.Pairs.Elements._32_8_ = 0;
  local_120.Pairs.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_120.Pairs.HashSize = 0;
  local_d0._0_8_ = 0;
  local_d0._8_8_ = 0;
  local_d0._32_8_ = 0;
  local_90 = (void *)0x0;
  local_88 = 0;
  local_80 = All;
  UMovieSceneCompiledDataManager::CompileHierarchy
            ((UMovieSceneSequence *)param_1,(FMovieSceneSequenceHierarchy *)local_1b8,All);
  uVar82 = (ulonglong)(int)(uint)local_a28;
  local_a00 = (uint)local_a28;
  pFVar67 = (FObjectPtr_u_0 *)(local_a30.Data + 0x70);
  local_908 = (FObjectPtr_u_0 *)(local_a30.Data + uVar82 * 0x90);
  uVar68 = uVar82;
  FVar84.Data = local_a30.Data;
  while( true ) {
    pFVar81 = local_908;
    pTVar54 = (TReferenceControllerBase<1> *)0x0;
    local_a08 = (FObjectPtr_u_0 *)FVar84.Data;
    local_920 = pFVar67;
    if ((int)uVar68 != (int)uVar82) {
      local_a17 = 0;
      `TCheckedPointerIterator<`UMoviePipelineBlueprintLibrary::UpdateJobShotListFromSequence'::__l6::FLinearizedEntity,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_a17);
      uVar68 = local_a28 & 0xffffffff;
    }
    if ((FObjectPtr_u_0 *)FVar84.Data == pFVar81) break;
    pTVar53 = ::operator_new(0xa8);
    if (pTVar53 != (TReferenceControllerBase<1> *)0x0) {
      pTVar53->SharedReferenceCount = (atomic<int>)0x1;
      pTVar53->WeakReferenceCount = (atomic<int>)0x1;
      pTVar53->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFCameraCutSubSectionHierarchyNode_MoviePipeline___00_SharedPointerInternals__6B_
      ;
      pTVar53[1]._padding_ = 0;
      pTVar53[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar53[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar53[2]._padding_ = 0;
      pTVar53[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar53[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar53[3]._padding_ = 0;
      *(undefined1 *)&pTVar53[3].SharedReferenceCount = 2;
      pTVar53[3].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined1 *)&pTVar53[4]._padding_ = 2;
      *(undefined8 *)((longlong)&pTVar53[4]._padding_ + 4) = 0;
      *(undefined1 *)&pTVar53[4].WeakReferenceCount = 2;
      *(undefined4 *)&pTVar53[5]._padding_ = 0;
      *(undefined1 *)((longlong)&pTVar53[5]._padding_ + 4) = 2;
      pTVar53[5].SharedReferenceCount = (atomic<int>)0x0;
      *(undefined1 *)&pTVar53[5].WeakReferenceCount = 2;
      *(undefined4 *)&pTVar53[6]._padding_ = 0;
      *(undefined1 *)((longlong)&pTVar53[6]._padding_ + 4) = 2;
      pTVar53[6].SharedReferenceCount = (atomic<int>)0x0;
      pTVar53[7]._padding_ = 0;
      pTVar53[7].SharedReferenceCount = (atomic<int>)0x0;
      pTVar53[7].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined4 *)((longlong)&pTVar53[8]._padding_ + 4) = 0xffffffff;
      *(undefined2 *)&pTVar53[6].WeakReferenceCount = 0;
      pTVar53[6].WeakReferenceCount.field_0x2 = 0;
      *(undefined1 *)&pTVar53[8]._padding_ = 1;
      pTVar53[8].SharedReferenceCount = (atomic<int>)0x0;
      pTVar53[8].WeakReferenceCount = (atomic<int>)0x0;
      pTVar53[9]._padding_ = 0;
      pTVar53[9].SharedReferenceCount = (atomic<int>)0x0;
      pTVar53[9].WeakReferenceCount = (atomic<int>)0x0;
      pTVar53[10]._padding_ = 0;
      pTVar54 = pTVar53;
    }
    TSharedRef<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>::
    TSharedRef<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>
              (&local_4d8,(FCameraCutSubSectionHierarchyNode *)(pTVar54 + 1),pTVar54);
    FVar89.ReferenceController = local_4d8.SharedReferenceCount.ReferenceController;
    pFVar85 = local_4d8.Object;
    local_880 = local_4d8.Object;
    local_928 = (UObject *)local_4d8.SharedReferenceCount.ReferenceController;
    if ((UObject *)local_4d8.SharedReferenceCount.ReferenceController != (UObject *)0x0) {
      LOCK();
      (local_4d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_4d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4d8.SharedReferenceCount.ReferenceController);
    pUVar55 = ((FObjectPtr_u_0 *)((longlong)FVar84.Data + 0x10))->Handle;
    if ((pFVar85 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
       (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar41)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    local_590 = pUVar55;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar55 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar55);
    }
    FWeakObjectPtr::operator=(&(pFVar85->CameraCutSection).WeakPtr,(FObjectPtr)&local_590);
    local_4c8.Object = pFVar85;
    local_4c8.SharedReferenceCount.ReferenceController = FVar89.ReferenceController;
    if ((UObject *)FVar89.ReferenceController != (UObject *)0x0) {
      LOCK();
      (FVar89.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar89.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    MoviePipeline::BuildSectionHierarchyRecursive
              ((FMovieSceneSequenceHierarchy *)local_1b8,(UMovieSceneSequence *)local_840,
               (FMovieSceneSequenceID)*(uint *)((longlong)FVar84.Data + 0x18),
               (FMovieSceneSequenceID)0xffffffff,&local_4c8);
    if ((pFVar85 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
       (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar41)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    bVar41 = FWeakObjectPtr::IsValid(&(pFVar85->CameraCutSection).WeakPtr);
    if (bVar41) {
      if ((pFVar85 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar41)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      this_00 = &(pFVar85->MovieScene).WeakPtr;
      local_878 = this_00;
      bVar41 = FWeakObjectPtr::IsValid(this_00);
      pFVar67 = local_920;
      if (bVar41) {
        if ((pFVar85 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
           (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar41)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        pUVar55 = FWeakObjectPtr::Get(this_00);
        pUVar52 = Z_Construct_UClass_UMovieSceneSequence_NoRegister();
        pUVar56 = (UMovieSceneSequence *)
                  UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)pUVar55,pUVar52);
        MovieSceneHelpers::CreateTransientSharedPlaybackState
                  (local_4b8,(UObject *)GWorld.World,pUVar56);
        local_958 = -1;
        if ((pFVar85 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
           (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar41)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        pUVar55 = FWeakObjectPtr::Get(&(pFVar85->CameraCutSection).WeakPtr);
        iVar44 = 0;
        pFVar87 = *(FScriptContainerElement **)&pUVar55[7].field_0x14;
        uVar7 = *(undefined8 *)&pUVar55[7].field_0x1c;
        local_8e8 = *(undefined8 *)&pUVar55[7].field_0x24;
        FStack_8f0._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_90c = FStack_8f0._4_4_;
        FStack_8f0._0_4_ = (undefined4)uVar7;
        local_930 = FStack_8f0._0_4_;
        local_8f8._4_4_ = (undefined4)((ulonglong)pFVar87 >> 0x20);
        local_910 = local_8f8._4_4_;
        local_8f8._0_4_ = SUB84(pFVar87,0);
        local_92c = local_8f8._0_4_;
        local_8f8 = (FObjectPtr_u_0)pFVar87;
        FStack_8f0 = (FObjectPtr_u_0)uVar7;
        while( true ) {
          local_954 = iVar44;
          if ((pFVar85 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
             (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar41)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          pUVar57 = (UMovieScene *)FWeakObjectPtr::Get(this_00);
          iVar45 = UMovieScene::GetPossessableCount(pUVar57);
          if (iVar45 <= iVar44) break;
          if ((pFVar85 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
             (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar41)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          pUVar57 = (UMovieScene *)FWeakObjectPtr::Get(this_00);
          pFVar58 = UMovieScene::GetPossessable(pUVar57,iVar44);
          uVar73 = 0;
          local_830 = (FGuid)ZEXT816(0);
          pFVar75 = (FName *)(pFVar58->Tags).AllocatorInstance.Data;
          pFVar6 = pFVar75 + (pFVar58->Tags).ArrayNum;
          for (; uVar46 = uVar73, pFVar75 != pFVar6; pFVar75 = pFVar75 + 1) {
            bVar41 = ::FName::Equals(*pFVar75,L"Camera");
            if (bVar41) {
              local_830 = pFVar58->Guid;
              uVar73 = (pFVar58->Guid).C;
              uVar46 = local_830.A;
              break;
            }
          }
          FVar84.Data = (FScriptContainerElement *)local_a08;
          if (((local_830.B != 0 || local_830.D != 0) || uVar73 != 0) || uVar46 != 0) {
            local_8d8.A = (pFVar58->Guid).A;
            local_8d8.B = (pFVar58->Guid).B;
            local_8d8.C = (pFVar58->Guid).C;
            local_8d8.D = (pFVar58->Guid).D;
            local_7c8 = *(undefined4 *)(local_a08 + 3);
            local_978 = pFVar58->ParentGuid;
            local_7c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            cVar77 = '\x01';
            local_7c0.ArrayNum = 0;
            local_7c0.ArrayMax = 0;
            local_9f8.Data = (FScriptContainerElement *)0x0;
            local_9f0 = 0;
            local_7d8 = local_830;
            iVar44 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x410,&local_9f8,(int *)((longlong)&local_9f0 + 4));
            local_9f0 = CONCAT44(local_9f0._4_4_,iVar44 + 1);
            *(undefined8 *)(local_9f8.Data + (longlong)iVar44 * 0x10) = local_8d8._0_8_;
            *(undefined8 *)(local_9f8.Data + (longlong)iVar44 * 0x10 + 8) = local_8d8._8_8_;
            if (((local_978.D == 0 && local_978.C == 0) && local_978.B == 0) && local_978.A == 0) {
LAB_14dd498e4:
              if ((FGuid *)local_9f8.Data !=
                  (FGuid *)(local_9f8.Data + (longlong)(int)local_9f0 * 0x10)) {
                pFVar87 = local_9f8.Data + 8;
                do {
                  if (((local_90c == *(uint *)(pFVar87 + 4) && local_910 == *(uint *)(pFVar87 + -4))
                      && local_92c == ((FGuid *)(pFVar87 + -8))->A) && local_930 == *(uint *)pFVar87
                     ) {
                    local_958 = *(int *)((longlong)FVar84.Data + 0x28);
                    break;
                  }
                  pFVar1 = (FGuid *)(pFVar87 + 8);
                  pFVar87 = pFVar87 + 0x10;
                } while (pFVar1 != (FGuid *)(local_9f8.Data + (longlong)(int)local_9f0 * 0x10));
              }
              if (((((FObjectPtr_u_0 *)((longlong)FVar84.Data + 0x20))->Handle <=
                    (UObject *)&local_7d8) &&
                  ((UObject *)&local_7d8 <
                   ((FObjectPtr_u_0 *)((longlong)FVar84.Data + 0x20))->Handle +
                   *(int *)((longlong)FVar84.Data + 0x2c))) &&
                 (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar41)) {
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              iVar44 = *(int *)((longlong)FVar84.Data + 0x28);
              if (iVar44 == *(int *)((longlong)FVar84.Data + 0x2c)) {
                iVar44 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x828,(ForAnyElementType *)((longlong)FVar84.Data + 0x20),
                                    (int *)((longlong)FVar84.Data + 0x2c));
              }
              FVar40 = local_7d8;
              *(int *)((longlong)FVar84.Data + 0x28) = iVar44 + 1;
              pUVar61 = ((FObjectPtr_u_0 *)((longlong)FVar84.Data + 0x20))->Handle;
              pUVar55 = pUVar61 + iVar44;
              *(uint *)&pUVar55->field_0x0 = local_7d8.A;
              *(uint *)&pUVar55->field_0x4 = local_7d8.B;
              *(uint *)&pUVar55->field_0x8 = local_7d8.C;
              *(uint *)&pUVar55->field_0xc = local_7d8.D;
              *(undefined4 *)&pUVar61[iVar44].field_0x10 = local_7c8;
              local_7d8 = FVar40;
              ::FString::FString((FString *)&pUVar61[iVar44].field_0x18,(FString *)&local_7c0);
            }
            else {
              do {
                if ((pFVar85 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
                   (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar41)) {
                  pcVar14 = (code *)swi(3);
                  (*pcVar14)();
                  return;
                }
                pUVar57 = (UMovieScene *)FWeakObjectPtr::Get(this_00);
                pFVar58 = UMovieScene::FindPossessable(pUVar57,&local_978);
                if (pFVar58 == (FMovieScenePossessable *)0x0) {
                  if (1 < (byte)LogMovieRenderPipeline._0_1_) {
                    local_8c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_8c8.Data.ArrayNum = 0;
                    local_8c8.Data.ArrayMax = 0;
                    FGuid::AppendString(&local_978,&local_8c8,Digits);
                    UE::Logging::Private::BasicLog<2>
                              (&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
                    if (local_8c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_8c8.Data.AllocatorInstance.Data);
                    }
                  }
                  break;
                }
                local_8d8.A = local_978.A;
                local_8d8.B = local_978.B;
                local_8d8.C = local_978.C;
                local_8d8.D = local_978.D;
                local_978 = pFVar58->ParentGuid;
                if (&local_7c0 != &(pFVar58->Name).Data) {
                  TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
                            (&local_7c0,(wchar_t *)(pFVar58->Name).Data.AllocatorInstance.Data,
                             (pFVar58->Name).Data.ArrayNum,local_7c0.ArrayMax);
                }
                if (((local_9f8.Data <= &local_8d8) &&
                    (&local_8d8 < (FGuid *)(local_9f8.Data + (longlong)local_9f0._4_4_ * 0x10))) &&
                   (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar41)) {
                  pcVar14 = (code *)swi(3);
                  (*pcVar14)();
                  return;
                }
                iVar44 = (int)local_9f0;
                if ((int)local_9f0 == local_9f0._4_4_) {
                  iVar44 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x410,&local_9f8,(int *)((longlong)&local_9f0 + 4));
                }
                local_9f0 = CONCAT44(local_9f0._4_4_,iVar44 + 1);
                *(undefined8 *)(local_9f8.Data + (longlong)iVar44 * 0x10) = local_8d8._0_8_;
                *(undefined8 *)(local_9f8.Data + (longlong)iVar44 * 0x10 + 8) = local_8d8._8_8_;
                if (local_4b8[0].SharedReferenceCount.ReferenceController !=
                    (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  (local_4b8[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                       (atomic<int>)
                       ((int)(local_4b8[0].SharedReferenceCount.ReferenceController)->
                             SharedReferenceCount + 1);
                  UNLOCK();
                }
                if ((pFVar85 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
                   (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar41)) {
                  pcVar14 = (code *)swi(3);
                  (*pcVar14)();
                  return;
                }
                pUVar55 = FWeakObjectPtr::Get(this_00);
                pUVar52 = Z_Construct_UClass_UMovieSceneSequence_NoRegister();
                pUVar56 = (UMovieSceneSequence *)
                          UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)pUVar55,pUVar52);
                bVar41 = MovieSceneHelpers::IsBoundToAnySpawnable(pUVar56,&pFVar58->Guid,&local_3e8)
                ;
                if (bVar41) {
                  if ((pFVar85 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
                     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar41)) {
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                  pUVar57 = (UMovieScene *)FWeakObjectPtr::Get(this_00);
                  pFVar59 = UMovieScene::FindBinding(pUVar57,&pFVar58->Guid);
                  if (pFVar59 != (FMovieSceneBinding *)0x0) {
                    local_820.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    TArray<UMovieSceneTrack_*,TSizedDefaultAllocator<32>_>::
                    CopyToEmpty<UMovieSceneTrack_*,int>
                              (&local_820,
                               (UMovieSceneTrack **)(pFVar59->Tracks).AllocatorInstance.Data,
                               (pFVar59->Tracks).ArrayNum,0);
                    uVar68 = (ulonglong)local_820.ArrayNum;
                    local_900 = local_820.ArrayNum;
                    local_8f8.Handle = (UObject *)(local_820.AllocatorInstance.Data + uVar68 * 8);
                    FVar84.Data = local_820.AllocatorInstance.Data;
                    while( true ) {
                      FVar12 = local_8f8;
                      if (local_820.ArrayNum != (uint)uVar68) {
                        local_a16 = 0;
                        `TCheckedPointerIterator<UMovieSceneTrack_*_const,int,0>::operator!='::__l2
                        ::<lambda_1>::operator()(&local_a16);
                      }
                      if ((FObjectPtr_u_0)FVar84.Data == FVar12) break;
                      plVar70 = *(longlong **)FVar84.Data;
                      if (plVar70 != (longlong *)0x0) {
                        pUVar52 = Z_Construct_UClass_UMovieSceneSpawnTrack_NoRegister();
                        iVar44 = (int)pUVar52->_padding_;
                        if ((iVar44 <= *(int *)(plVar70[2] + 0x38)) &&
                           ((longlong *)
                            *(undefined1 **)
                             (*(longlong *)(plVar70[2] + 0x30) + (longlong)iVar44 * 8) ==
                            &pUVar52->_padding_)) {
                          plVar60 = (longlong *)(**(code **)(*plVar70 + 0x360))(plVar70);
                          plVar79 = (longlong *)*plVar60;
                          lVar50 = plVar60[1];
                          plVar70 = plVar79 + (int)lVar50;
                          while( true ) {
                            if ((int)plVar60[1] != (int)lVar50) {
                              local_a15 = 0;
                              `TCheckedPointerIterator<UMovieSceneSection_*_const,int,0>::
                              operator!='::__l2::<lambda_1>::operator()(&local_a15);
                            }
                            if (plVar79 == plVar70) break;
                            lVar69 = *plVar79;
                            if (lVar69 == 0) {
LAB_14dd49820:
                              plVar79 = plVar79 + 1;
                            }
                            else {
                              pUVar52 = Z_Construct_UClass_UMovieSceneSpawnSection_NoRegister();
                              iVar44 = (int)pUVar52->_padding_;
                              if ((*(int *)(*(longlong *)(lVar69 + 0x10) + 0x38) < iVar44) ||
                                 ((longlong *)
                                  *(undefined1 **)
                                   (*(longlong *)(*(longlong *)(lVar69 + 0x10) + 0x30) +
                                   (longlong)iVar44 * 8) != &pUVar52->_padding_))
                              goto LAB_14dd49820;
                              cVar77 = '\x01';
                              local_998 = 1;
                              if (*(char *)(lVar69 + 0x199) == '\0') {
                                local_9fb = 0;
                                goto LAB_14dd49820;
                              }
                              cVar77 = *(char *)(lVar69 + 0x198);
                              plVar79 = plVar79 + 1;
                              local_9fb = 1;
                              local_9fc = cVar77;
                            }
                          }
                        }
                      }
                      uVar68 = (ulonglong)local_900;
                      FVar84.Data = FVar84.Data + 8;
                    }
                    this_00 = local_878;
                    pFVar85 = local_880;
                    if (local_820.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_820.AllocatorInstance.Data);
                      this_00 = local_878;
                      pFVar85 = local_880;
                    }
                  }
                }
              } while (((local_978.D != 0 || local_978.C != 0) || local_978.B != 0) ||
                       local_978.A != 0);
              FVar84.Data = (FScriptContainerElement *)local_a08;
              if (cVar77 != '\0') goto LAB_14dd498e4;
            }
            if ((FGuid *)local_9f8.Data != (FGuid *)0x0) {
              FMemory::Free(local_9f8.Data);
            }
            if (local_7c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_7c0.AllocatorInstance.Data);
            }
          }
          iVar44 = local_954 + 1;
        }
        iVar44 = local_958;
        if (local_958 == -1) {
          if ((pFVar85 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
             (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar41)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          pUVar55 = FWeakObjectPtr::Get(&(pFVar85->CameraCutSection).WeakPtr);
          if (((*(int *)&pUVar55[7].field_0x20 != 0 || *(int *)&pUVar55[7].field_0x1c != 0) ||
              *(int *)&pUVar55[7].field_0x18 != 0) || *(int *)&pUVar55[7].field_0x14 != 0) {
            iVar44 = *(int *)((longlong)FVar84.Data + 0x28);
            if (iVar44 == *(int *)((longlong)FVar84.Data + 0x2c)) {
              iVar44 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x828,(ForAnyElementType *)((longlong)FVar84.Data + 0x20),
                                  (int *)((longlong)FVar84.Data + 0x2c));
            }
            *(int *)((longlong)FVar84.Data + 0x28) = iVar44 + 1;
            pUVar55 = ((FObjectPtr_u_0 *)((longlong)FVar84.Data + 0x20))->Handle + iVar44;
            DefaultConstructItems<FMoviePipelineSidecarCamera,int>(pUVar55,1);
            if ((pFVar85 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
               (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar41)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pUVar61 = FWeakObjectPtr::Get(&(pFVar85->CameraCutSection).WeakPtr);
            uVar7 = *(undefined8 *)&pUVar61[7].field_0x1c;
            *(undefined8 *)pUVar55 = *(undefined8 *)&pUVar61[7].field_0x14;
            *(undefined8 *)&pUVar55->field_0x8 = uVar7;
            if ((pFVar85 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
               (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar41)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            pUVar61 = FWeakObjectPtr::Get(&(pFVar85->CameraCutSection).WeakPtr);
            *(undefined4 *)&pUVar55->field_0x10 = *(undefined4 *)&pUVar61[7].field_0x24;
            ::FString::operator=((FString *)&pUVar55->field_0x18,L"main_camera");
            iVar44 = *(int *)((longlong)FVar84.Data + 0x28) + -1;
            goto LAB_14dd49b57;
          }
        }
        else {
LAB_14dd49b57:
          if (-1 < iVar44) {
            if (((*(int *)((longlong)FVar84.Data + 0x28) <= iVar44) ||
                (*(int *)((longlong)FVar84.Data + 0x28) < 1)) &&
               (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0xce7,L""), bVar41)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            if (iVar44 != 0) {
              pUVar55 = ((FObjectPtr_u_0 *)((longlong)FVar84.Data + 0x20))->Handle;
              uVar15 = *(undefined8 *)&pUVar55->field_0x8;
              uVar16 = *(undefined8 *)(pUVar55 + iVar44);
              uVar17 = *(undefined8 *)&pUVar55[iVar44].field_0x8;
              uVar18 = *(undefined8 *)&pUVar55[iVar44].field_0x10;
              uVar19 = *(undefined8 *)(&pUVar55[iVar44].field_0x10 + 8);
              uVar7 = *(undefined8 *)&pUVar55[iVar44].field_0x20;
              *(undefined8 *)(pUVar55 + iVar44) = *(undefined8 *)pUVar55;
              *(undefined8 *)&pUVar55[iVar44].field_0x8 = uVar15;
              uVar15 = *(undefined8 *)&pUVar55->field_0x18;
              *(undefined8 *)&pUVar55[iVar44].field_0x10 = *(undefined8 *)&pUVar55->field_0x10;
              *(undefined8 *)(&pUVar55[iVar44].field_0x10 + 8) = uVar15;
              *(undefined8 *)&pUVar55[iVar44].field_0x20 = *(undefined8 *)&pUVar55->field_0x20;
              *(undefined8 *)pUVar55 = uVar16;
              *(undefined8 *)&pUVar55->field_0x8 = uVar17;
              *(undefined8 *)&pUVar55->field_0x10 = uVar18;
              *(undefined8 *)&pUVar55->field_0x18 = uVar19;
              *(undefined8 *)&pUVar55->field_0x20 = uVar7;
            }
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_4b8[0].SharedReferenceCount.ReferenceController);
        pFVar67 = local_920;
        FVar89.ReferenceController = (TReferenceControllerBase<1> *)local_928;
      }
    }
    iVar44 = *(int *)((longlong)FVar84.Data + 4);
    local_988 = *(UObject **)FVar84.Data;
    local_8f8 = *(FObjectPtr_u_0 *)FVar84.Data;
    iVar45 = *(int *)((longlong)FVar84.Data + 0xc);
    uStack_980 = *(FObjectPtr_u_0 *)((longlong)FVar84.Data + 8);
    FStack_8f0 = *(FObjectPtr_u_0 *)((longlong)FVar84.Data + 8);
    if ((*(int *)((longlong)FVar84.Data + 0x18) != 0) &&
       (pFVar62 = TMapBase<FMovieSceneSequenceID,FMovieSceneSubSequenceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneSequenceID,FMovieSceneSubSequenceData,0>_>
                  ::Find(&local_120,(FMovieSceneSequenceID *)((longlong)FVar84.Data + 0x18)),
       pFVar62 != (FMovieSceneSubSequenceData *)0x0)) {
      pTVar2 = &(pFVar62->RootToSequenceTransform).NestedTransforms;
      *pFVar67 = *(FObjectPtr_u_0 *)&(pFVar62->RootToSequenceTransform).LinearTransform;
      pFVar81 = pFVar67 + 2;
      *(float *)(pFVar67 + 1) = (pFVar62->RootToSequenceTransform).LinearTransform.Offset.SubFrame;
      if (pFVar81 != (FObjectPtr_u_0 *)pTVar2) {
        DestructItems<FMovieSceneNestedSequenceTransform,int>
                  ((FMovieSceneNestedSequenceTransform *)pFVar81->Handle,*(int *)(pFVar67 + 3));
        TArray<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_>::
        CopyToEmpty<FMovieSceneNestedSequenceTransform,int>
                  ((TArray<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_> *)pFVar81
                   ,(FMovieSceneNestedSequenceTransform *)(pTVar2->AllocatorInstance).Data,
                   (pFVar62->RootToSequenceTransform).NestedTransforms.ArrayNum,
                   *(int *)((longlong)pFVar67 + 0x1c));
      }
    }
    if ((pFVar85 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
       (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar41)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    bVar41 = FWeakObjectPtr::IsValid(&(pFVar85->CameraCutSection).WeakPtr);
    FVar12 = local_8f8;
    cVar77 = local_8f8._0_1_;
    if (bVar41) {
      if ((pFVar85 == (FCameraCutSubSectionHierarchyNode *)0x0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar41)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      pUVar55 = FWeakObjectPtr::Get(&(pFVar85->CameraCutSection).WeakPtr);
      pFVar81 = (FObjectPtr_u_0 *)((longlong)FVar84.Data + 0x70);
      local_988 = *(FObjectPtr_u_0 *)&pUVar55[4].field_0x10;
      uStack_980 = *(FObjectPtr_u_0 *)&pUVar55[4].field_0x18;
      FMovieSceneSequenceTransform::Inverse((FMovieSceneSequenceTransform *)pFVar81,&local_3d8);
      INSERT(local_498[0]._16_1_,'\0',0,1);
      lVar50 = 0;
      local_640.Breadcrumbs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_498[0].Breadcrumbs = (FMovieSceneTransformBreadcrumbs *)0x0;
      local_498[0].CycleCount = (TOptional<int> *)0x0;
      local_640.Breadcrumbs.ArrayNum = 0;
      local_640.Breadcrumbs.ArrayMax = 0;
      local_640.Mode = Sparse;
      local_628.Breadcrumbs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_628.Breadcrumbs.ArrayNum = 0;
      local_628.Breadcrumbs.ArrayMax = 0;
      local_628.Mode = Sparse;
      UE::MovieScene::FTransformTimeParams::HarvestBreadcrumbs(local_498,&local_640);
      if ((cVar77 == '\x02') &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("!InLowerBound.IsOpen()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                              ,0x2c,L""), bVar41)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      if (cVar77 == '\0') {
        lVar50 = 4;
      }
      iVar10 = *(int *)((longlong)
                        &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteInclusiveLower(TRangeBound<FFrameNumber>_const&___ptr64)'
                         ::__l2::Offsets + lVar50);
      if ((cVar77 == '\x02') &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L""), bVar41)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      uStack_86c = 0;
      local_870 = iVar44 + iVar10;
      FMovieSceneSequenceTransform::TransformTime
                ((FMovieSceneSequenceTransform *)pFVar81,(FFrameTime)local_410,
                 (FTransformTimeParams *)(ulonglong)local_870);
      local_458.bIgnoreClamps = '\0';
      local_458.Breadcrumbs = (FMovieSceneTransformBreadcrumbs *)0x0;
      local_458.CycleCount = (TOptional<int> *)0x0;
      UE::MovieScene::FTransformTimeParams::HarvestBreadcrumbs(&local_458,&local_628);
      cVar43 = FStack_8f0._0_1_;
      if ((cVar43 == '\x02') &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("!InUpperBound.IsOpen()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                              ,0x44,L""), bVar41)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      uVar73 = 0;
      if (cVar43 == '\x01') {
        uVar73 = 4;
      }
      iVar44 = *(int *)((longlong)
                        &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteExclusiveUpper(TRangeBound<FFrameNumber>_const&___ptr64)'
                         ::__l2::Offsets + (ulonglong)uVar73);
      if ((cVar43 == '\x02') &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L""), bVar41)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      uStack_864 = 0;
      local_868 = iVar45 + iVar44;
      FMovieSceneSequenceTransform::TransformTime
                ((FMovieSceneSequenceTransform *)pFVar81,(FFrameTime)local_408,
                 (FTransformTimeParams *)(ulonglong)local_868);
      local_9b0.LowerBound.Type.Value = '\x02';
      local_9b0.LowerBound.Value.FrameNumber.Value = 0;
      local_9b0.LowerBound.Value.SubFrame = 0.0;
      local_520 = local_588;
      local_528 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UMoviePipelineBlueprintLibrary::UpdateJobShotListFromSequence'::__l109::<lambda_2>,bool,TRange<FFrameTime>_>
                  ::Call;
      local_9b0.UpperBound.Type.Value = '\x02';
      local_9b0.UpperBound.Value.FrameNumber.Value = 0;
      local_9b0.UpperBound.Value.SubFrame = 0.0;
      cVar43 = (char)local_988;
      local_588[0] = (TRangeBound<FFrameNumber> *)&local_988;
      if (cVar43 != '\x02') {
        if (cVar43 != '\x01') {
          pFVar51 = TRangeBound<FFrameNumber>::GetValue((TRangeBound<FFrameNumber> *)&local_988);
          local_9b0.LowerBound.Value.FrameNumber.Value = pFVar51->Value;
          local_9b0.LowerBound._1_2_ = local_467;
        }
        else {
          pFVar51 = TRangeBound<FFrameNumber>::GetValue((TRangeBound<FFrameNumber> *)&local_988);
          local_9b0.LowerBound.Value.FrameNumber.Value = pFVar51->Value;
          local_9b0.LowerBound._1_2_ = local_4b8[1].Object._1_2_;
        }
        local_9b0.LowerBound.Type.Value = cVar43 == '\x01';
        local_9b0.LowerBound.Value.SubFrame = 0.0;
      }
      cVar43 = (char)uStack_980;
      if (cVar43 != '\x02') {
        if (cVar43 != '\x01') {
          pFVar51 = TRangeBound<FFrameNumber>::GetValue((TRangeBound<FFrameNumber> *)&uStack_980);
          local_9b0.UpperBound.Value.FrameNumber.Value = pFVar51->Value;
          local_9b0.UpperBound._1_2_ = local_498[1].CycleCount._5_2_;
        }
        else {
          pFVar51 = TRangeBound<FFrameNumber>::GetValue((TRangeBound<FFrameNumber> *)&uStack_980);
          local_9b0.UpperBound.Value.FrameNumber.Value = pFVar51->Value;
          local_9b0.UpperBound._1_2_ = local_498[1].Breadcrumbs._1_2_;
        }
        local_9b0.UpperBound.Type.Value = cVar43 == '\x01';
        local_9b0.UpperBound.Value.SubFrame = 0.0;
      }
      FMovieSceneInverseSequenceTransform::TransformFiniteRangeWithinRange
                (&local_3d8,&local_9b0,(TFunctionRef<bool___cdecl(TRange<FFrameTime>)> *)&local_528,
                 &local_640,&local_628);
      if (local_628.Breadcrumbs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_628.Breadcrumbs.AllocatorInstance.Data);
      }
      if (local_640.Breadcrumbs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_640.Breadcrumbs.AllocatorInstance.Data);
      }
      FVar84.Data = (FScriptContainerElement *)local_a08;
      FVar89.ReferenceController = (TReferenceControllerBase<1> *)local_928;
      if (local_3d8.NestedTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3d8.NestedTransforms.AllocatorInstance.Data);
        FVar84.Data = (FScriptContainerElement *)local_a08;
        FVar89.ReferenceController = (TReferenceControllerBase<1> *)local_928;
      }
    }
    local_860 = local_860 & 0xffffff00;
    uStack_85c = 0;
    local_578._4_4_ = 0;
    local_578._0_4_ = local_860;
    local_858 = local_858 & 0xffffff00;
    uStack_854 = 0;
    FStack_570._4_4_ = 0;
    FStack_570._0_4_ = local_858;
    if ((cVar77 != '\x02') && ((char)local_988 != '\x02')) {
      local_518 = local_988;
      FStack_510 = FVar12;
      local_578 = local_988;
      FStack_570 = FVar12;
    }
    if (((char)local_988 == '\x01') && (uStack_980._0_1_ == '\x01')) {
      if (local_988._4_4_ == uStack_980._4_4_) {
        local_850 = local_850 & 0xffffff00;
        uStack_84c = 0;
        local_988._4_4_ = 0;
        local_988._0_4_ = local_850;
        local_848 = local_848 & 0xffffff00;
        uStack_844 = 0;
        uStack_980._4_4_ = 0;
        uStack_980._0_4_ = local_848;
        local_808 = local_988;
        FStack_800 = uStack_980;
      }
    }
    *(FObjectPtr_u_0 *)((longlong)FVar84.Data + 0x60) = local_578;
    *(FObjectPtr_u_0 *)((longlong)FVar84.Data + 0x68) = FStack_570;
    if ((UObject *)FVar89.ReferenceController != (UObject *)0x0) {
      LOCK();
      *(int *)&((UObject *)FVar89.ReferenceController)->field_0x8 =
           *(int *)&((UObject *)FVar89.ReferenceController)->field_0x8 + 1;
      UNLOCK();
    }
    local_568 = *(FObjectPtr_u_0 *)((longlong)FVar84.Data + 0x50);
    pUStack_560 = ((FObjectPtr_u_0 *)((longlong)FVar84.Data + 0x58))->Handle;
    ((FObjectPtr_u_0 *)((longlong)FVar84.Data + 0x50))->Handle = (UObject *)pFVar85;
    ((FObjectPtr_u_0 *)((longlong)FVar84.Data + 0x58))->Handle =
         (UObject *)FVar89.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pUStack_560);
    param_1 = local_840;
    if ((UObject *)FVar89.ReferenceController != (UObject *)0x0) {
      LOCK();
      *(int *)&((UObject *)FVar89.ReferenceController)->field_0x8 =
           *(int *)&((UObject *)FVar89.ReferenceController)->field_0x8 + 1;
      UNLOCK();
    }
    local_508.Object = pFVar85;
    local_508.SharedReferenceCount.ReferenceController = FVar89.ReferenceController;
    pFVar63 = (FObjectPtr_u_0 *)
              MoviePipeline::GetNameForShot
                        ((TTuple<FString,FString> *)local_3b8,
                         (FMovieSceneSequenceHierarchy *)local_1b8,(UMovieSceneSequence *)local_840,
                         &local_508);
    pFVar81 = (FObjectPtr_u_0 *)((longlong)FVar84.Data + 0x30);
    if (pFVar81 != pFVar63) {
      if (pFVar81->Handle != (UObject *)0x0) {
        FMemory::Free(pFVar81->Handle);
      }
      pFVar81->Handle = (UObject *)*(UObject **)pFVar63;
      pFVar63->Handle = (UObject *)0x0;
      *(undefined4 *)((longlong)FVar84.Data + 0x38) = *(undefined4 *)(pFVar63 + 1);
      *(undefined4 *)((longlong)FVar84.Data + 0x3c) = *(undefined4 *)((longlong)pFVar63 + 0xc);
      pFVar63[1].Handle = (UObject *)0x0;
    }
    pFVar76 = pFVar63 + 2;
    pFVar81 = (FObjectPtr_u_0 *)((longlong)FVar84.Data + 0x40);
    if (pFVar81 != pFVar76) {
      if (pFVar81->Handle != (UObject *)0x0) {
        FMemory::Free(pFVar81->Handle);
      }
      pFVar81->Handle = (UObject *)*(UObject **)pFVar76;
      pFVar76->Handle = (UObject *)0x0;
      *(undefined4 *)((longlong)FVar84.Data + 0x48) = *(undefined4 *)(pFVar63 + 3);
      *(undefined4 *)((longlong)FVar84.Data + 0x4c) = *(undefined4 *)((longlong)pFVar63 + 0x1c);
      pFVar63[3].Handle = (UObject *)0x0;
    }
    if (local_3a8 != (void *)0x0) {
      FMemory::Free(local_3a8);
    }
    if (local_3b8[0] != (void *)0x0) {
      FMemory::Free(local_3b8[0]);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar89.ReferenceController);
    uVar68 = local_a28 & 0xffffffff;
    FVar84.Data = FVar84.Data + 0x90;
    pFVar67 = pFVar67 + 0x12;
    uVar82 = (ulonglong)local_a00;
  }
  if ((int)uVar68 == 0) {
    iVar44 = 0;
    if (local_a28._4_4_ == 0) {
      iVar44 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x890,&local_a30,(int *)((longlong)&local_a28 + 4));
    }
    local_a28 = CONCAT44(local_a28._4_4_,iVar44 + 1);
    pFVar87 = local_a30.Data + (longlong)iVar44 * 0x90;
    DefaultConstructItems<_UMoviePipelineBlueprintLibrary::UpdateJobShotListFromSequence_::__l6::FLinearizedEntity,int>
              (pFVar87,1);
    lVar50 = (**(code **)(param_1->_padding_ + 0x2f8))(param_1);
    uVar7 = *(undefined8 *)(lVar50 + 0x128);
    uVar15 = *(undefined8 *)(lVar50 + 0x130);
    *(undefined8 *)(pFVar87 + 0x10) = 0;
    *(undefined4 *)(pFVar87 + 0x18) = 0;
    *(undefined8 *)pFVar87 = uVar7;
    *(undefined8 *)(pFVar87 + 8) = uVar15;
    pTVar64 = MakeShared<MoviePipeline::FCameraCutSubSectionHierarchyNode,1>(&local_420);
    pTVar54 = (pTVar64->SharedReferenceCount).ReferenceController;
    TVar11.ObjectPtr.field0_0x0 = (FObjectPtr)pTVar64->Object;
    if (pTVar54 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar54->SharedReferenceCount = (atomic<int>)((int)pTVar54->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_420.SharedReferenceCount.ReferenceController);
    local_918.ObjectIndex = 0;
    local_918.ObjectSerialNumber = 0;
    local_5a0 = 0;
    FWeakObjectPtr::operator=(&local_918,(FObjectPtr)&local_5a0);
    FVar36 = local_918;
    if (((FCameraCutSubSectionHierarchyNode *)TVar11.DebugPtr ==
         (FCameraCutSubSectionHierarchyNode *)0x0) &&
       (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar41)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    ((TWeakObjectPtr<UMovieSceneCameraCutSection,FWeakObjectPtr> *)&(TVar11.DebugPtr)->field_0x20)->
    WeakPtr = FVar36;
    if (pTVar54 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar54->SharedReferenceCount = (atomic<int>)((int)pTVar54->SharedReferenceCount + 1);
      UNLOCK();
    }
    paVar80 = &pTVar54->SharedReferenceCount;
    local_4e8.ObjectPtr.field0_0x0 = TVar11.ObjectPtr.field0_0x0;
    local_4e0 = pTVar54;
    MoviePipeline::BuildSectionHierarchyRecursive
              ((FMovieSceneSequenceHierarchy *)local_1b8,(UMovieSceneSequence *)param_1,
               (FMovieSceneSequenceID)0x0,(FMovieSceneSequenceID)0xffffffff,
               (TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *)
               &local_4e8.ObjectPtr);
    local_838 = local_838 & 0xffffff00;
    uStack_834 = 0;
    local_808._4_4_ = 0;
    local_808._0_4_ = local_838;
    local_7f8 = local_7f8 & 0xffffff00;
    uStack_7f4 = 0;
    FStack_800._4_4_ = 0;
    FStack_800._0_4_ = local_7f8;
    *(FObjectPtr_u_0 *)(pFVar87 + 0x60) = local_808;
    *(FObjectPtr_u_0 *)(pFVar87 + 0x68) = FStack_800;
    if (pTVar54 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar80 = (atomic<int>)((int)*paVar80 + 1);
      UNLOCK();
    }
    local_558 = *(undefined8 *)(pFVar87 + 0x50);
    pTStack_550 = *(TReferenceControllerBase<1> **)(pFVar87 + 0x58);
    ((TObjectPtr<UObject>_u_0 *)(pFVar87 + 0x50))->DebugPtr = (UObject *)TVar11;
    *(TReferenceControllerBase<1> **)(pFVar87 + 0x58) = pTVar54;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_550)
    ;
    if (pTVar54 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar80 = (atomic<int>)((int)*paVar80 + 1);
      UNLOCK();
    }
    local_4f8.ObjectPtr.field0_0x0 = TVar11.ObjectPtr.field0_0x0;
    local_4f0 = pTVar54;
    pTVar65 = MoviePipeline::GetNameForShot
                        ((TTuple<FString,FString> *)local_398,
                         (FMovieSceneSequenceHierarchy *)local_1b8,(UMovieSceneSequence *)param_1,
                         (TSharedPtr<MoviePipeline::FCameraCutSubSectionHierarchyNode,1> *)
                         &local_4f8.ObjectPtr);
    TTuple<FString,FString>::operator=((TTuple<FString,FString> *)(pFVar87 + 0x30),pTVar65);
    if (local_388 != (void *)0x0) {
      FMemory::Free(local_388);
    }
    if (local_398[0] != (void *)0x0) {
      FMemory::Free(local_398[0]);
    }
    local_610.LinearTransform.TimeScale = 1.0;
    local_610.LinearTransform.Offset.FrameNumber.Value = 0;
    local_610.NestedTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_610.NestedTransforms.ArrayNum = 0;
    local_610.NestedTransforms.ArrayMax = 0;
    local_610.LinearTransform.Offset.SubFrame = 0.0;
    FMovieSceneSequenceTransform::operator=
              ((FMovieSceneSequenceTransform *)(pFVar87 + 0x70),&local_610);
    FVar84.Data = local_610.NestedTransforms.AllocatorInstance.Data;
    DestructItems<FMovieSceneNestedSequenceTransform,int>
              ((FMovieSceneNestedSequenceTransform *)
               local_610.NestedTransforms.AllocatorInstance.Data,local_610.NestedTransforms.ArrayNum
              );
    if ((FMovieSceneNestedSequenceTransform *)FVar84.Data !=
        (FMovieSceneNestedSequenceTransform *)0x0) {
      FMemory::Free(FVar84.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar54);
    uVar68 = local_a28 & 0xffffffff;
  }
  lVar50 = 0;
  iVar44 = (int)uVar68;
  local_9c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_9c8.ArrayNum = 0;
  local_9c8.ArrayMax = 0;
  pFVar67 = (FObjectPtr_u_0 *)(local_a30.Data + 0x40);
  pFVar81 = (FObjectPtr_u_0 *)(local_a30.Data + (longlong)iVar44 * 0x90);
  while( true ) {
    if ((int)uVar68 != iVar44) {
      local_a14 = 0;
      `TCheckedPointerIterator<`UMoviePipelineBlueprintLibrary::UpdateJobShotListFromSequence'::__l6::FLinearizedEntity,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_a14);
    }
    if (pFVar67 + -8 == pFVar81) break;
    if (((local_9c8.AllocatorInstance.Data <= pFVar67) &&
        (pFVar67 < (FObjectPtr_u_0 *)
                   (local_9c8.AllocatorInstance.Data + (longlong)local_9c8.ArrayMax * 0x10))) &&
       (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar41)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    if (local_9c8.ArrayNum == local_9c8.ArrayMax) {
      local_9c8.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x810,&local_9c8.AllocatorInstance,&local_9c8.ArrayMax);
    }
    lVar69 = (longlong)local_9c8.ArrayNum;
    local_9c8.ArrayNum = local_9c8.ArrayNum + 1;
    ::FString::FString((FString *)(local_9c8.AllocatorInstance.Data + lVar69 * 0x10),
                       (FString *)pFVar67);
    uVar68 = local_a28 & 0xffffffff;
    pFVar67 = pFVar67 + 0x12;
  }
  UE::MoviePipeline::DeduplicateNameArray(&local_9c8);
  uVar73 = 0;
  if (0 < (int)(uint)local_a28) {
    do {
      uVar46 = 0;
      if ((int)uVar73 < local_9c8.ArrayNum) {
        uVar46 = ~uVar73 >> 0x1f;
      }
      iVar44 = (uint)local_a28;
      if (uVar46 == 0) {
        bVar41 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar41) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        iVar44 = (uint)local_a28;
      }
      FVar84.Data = local_9c8.AllocatorInstance.Data;
      uVar46 = 0;
      if ((int)uVar73 < iVar44) {
        uVar46 = ~uVar73 >> 0x1f;
      }
      if ((uVar46 == 0) &&
         (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar41)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      iVar45 = *(int *)(FVar84.Data + lVar50 + 8);
      iVar44 = iVar45 + -1;
      if (iVar45 == 0) {
        iVar44 = 0;
      }
      ::FString::AssignRange
                ((FString *)(local_a30.Data + (longlong)(int)uVar73 * 0x90 + 0x40),
                 *(wchar_t **)(FVar84.Data + lVar50),iVar44);
      uVar73 = uVar73 + 1;
      lVar50 = lVar50 + 0x10;
    } while ((int)uVar73 < (int)(uint)local_a28);
  }
  DestructItems<FString,int>((FString *)local_9c8.AllocatorInstance.Data,local_9c8.ArrayNum);
  if ((FObjectPtr_u_0 *)local_9c8.AllocatorInstance.Data != (FObjectPtr_u_0 *)0x0) {
    FMemory::Free(local_9c8.AllocatorInstance.Data);
  }
  uVar68 = (ulonglong)(int)(uint)local_a28;
  local_a00 = (uint)local_a28;
  pFVar67 = (FObjectPtr_u_0 *)(local_a30.Data + 0x28);
  pFVar81 = (FObjectPtr_u_0 *)(local_a30.Data + uVar68 * 0x90);
  while( true ) {
    uVar73 = 0;
    if ((uint)local_a28 != (int)uVar68) {
      local_a13 = 0;
      `TCheckedPointerIterator<`UMoviePipelineBlueprintLibrary::UpdateJobShotListFromSequence'::__l6::FLinearizedEntity,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_a13);
    }
    FVar35 = _UNK_152cfeae8;
    FVar34 = ___xmm_000000010000ea60000000010000ea60;
    uVar17 = _UNK_15076cb68;
    uVar16 = ___xmm_ffffffffffffffff0000000000000000;
    uVar15 = _UNK_15060db28;
    uVar7 = ___xmm_ffffffffffffffffffffffffffffffff;
    if (pFVar67 + -5 == pFVar81) break;
    pUVar55 = pFVar67[-1].Handle;
    iVar44 = *(int *)pFVar67;
    local_9d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_9d8.ArrayNum = 0;
    local_9d8.ArrayMax = 0;
    pFVar87 = (FScriptContainerElement *)&pUVar55->field_0x18;
    uVar46 = uVar73;
    while( true ) {
      if (*(int *)pFVar67 != iVar44) {
        local_a12 = 0;
        `TCheckedPointerIterator<FMoviePipelineSidecarCamera,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_a12);
        uVar46 = local_9d8.ArrayNum;
      }
      if ((UObject *)(pFVar87 + -0x18) == pUVar55 + iVar44) break;
      if ((local_9d8.AllocatorInstance.Data <= pFVar87) &&
         (pFVar87 < local_9d8.AllocatorInstance.Data + (longlong)local_9d8.ArrayMax * 0x10)) {
        bVar41 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar41) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        uVar46 = local_9d8.ArrayNum;
      }
      if (uVar46 == local_9d8.ArrayMax) {
        uVar46 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_9d8.AllocatorInstance,&local_9d8.ArrayMax);
      }
      local_9d8.ArrayNum = uVar46 + 1;
      ::FString::FString((FString *)
                         (local_9d8.AllocatorInstance.Data + (longlong)(int)uVar46 * 0x10),
                         (FString *)pFVar87);
      pFVar87 = pFVar87 + 0x28;
      uVar46 = local_9d8.ArrayNum;
    }
    UE::MoviePipeline::DeduplicateNameArray(&local_9d8);
    if (0 < *(int *)pFVar67) {
      lVar50 = 0;
      do {
        uVar46 = 0;
        if ((int)uVar73 < local_9d8.ArrayNum) {
          uVar46 = ~uVar73 >> 0x1f;
        }
        if ((uVar46 == 0) &&
           (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar41)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        FVar84.Data = local_9d8.AllocatorInstance.Data;
        uVar46 = 0;
        if ((int)uVar73 < *(int *)pFVar67) {
          uVar46 = ~uVar73 >> 0x1f;
        }
        if ((uVar46 == 0) &&
           (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar41)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        iVar45 = *(int *)(FVar84.Data + lVar50 + 8);
        iVar44 = iVar45 + -1;
        if (iVar45 == 0) {
          iVar44 = 0;
        }
        ::FString::AssignRange
                  ((FString *)&pFVar67[-1].Handle[(int)uVar73].field_0x18,
                   *(wchar_t **)(FVar84.Data + lVar50),iVar44);
        uVar73 = uVar73 + 1;
        lVar50 = lVar50 + 0x10;
      } while ((int)uVar73 < *(int *)pFVar67);
      uVar68 = (ulonglong)local_a00;
    }
    DestructItems<FString,int>((FString *)local_9d8.AllocatorInstance.Data,local_9d8.ArrayNum);
    if (local_9d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9d8.AllocatorInstance.Data);
    }
    pFVar67 = pFVar67 + 0x12;
  }
  uVar68 = (ulonglong)(int)(uint)local_a28;
  local_a08 = (FObjectPtr_u_0 *)(local_a30.Data + 0x30);
  local_9e8.Data = (FScriptContainerElement *)0x0;
  local_908 = (FObjectPtr_u_0 *)(local_a30.Data + uVar68 * 0x90);
  local_9e0 = 0;
  local_9dc = 0;
  local_a00 = (uint)local_a28;
  FVar84.Data = local_a30.Data;
LAB_14dd4a910:
  pFVar67 = local_908;
  if ((uint)local_a28 != (int)uVar68) {
    local_a11 = 0;
    `TCheckedPointerIterator<`UMoviePipelineBlueprintLibrary::UpdateJobShotListFromSequence'::__l6::FLinearizedEntity,int,0>
    ::operator!='::__l2::<lambda_1>::operator()(&local_a11);
  }
  pUVar37 = local_8b8;
  iVar44 = local_9e0;
  pTVar5 = &local_8b8->ShotInfo;
  if ((FObjectPtr_u_0 *)FVar84.Data == pFVar67) {
    iVar45 = (local_8b8->ShotInfo).ArrayNum;
    if ((iVar45 != local_9e0) ||
       ((iVar45 != 0 &&
        (iVar45 = memcmp((pTVar5->AllocatorInstance).Data,local_9e8.Data,(longlong)iVar45 << 3),
        iVar45 != 0)))) {
      piVar4 = &(pUVar37->ShotInfo).ArrayMax;
      if (*piVar4 < 0) {
        (pUVar37->ShotInfo).ArrayNum = 0;
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&pTVar5->AllocatorInstance,0,piVar4);
        iVar44 = local_9e0;
      }
      FVar84.Data = local_9e8.Data;
      (pUVar37->ShotInfo).ArrayNum = iVar44;
      if ((iVar44 == 0) && (*piVar4 == 0)) {
        *piVar4 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar44,*piVar4,&(pUVar37->ShotInfo).AllocatorInstance,iVar44,piVar4);
        ConstructItems<TObjectPtr<UMoviePipelineExecutorShot>,UMoviePipelineExecutorShot_*,int>
                  ((pUVar37->ShotInfo).AllocatorInstance.Data,
                   (UMoviePipelineExecutorShot **)FVar84.Data,iVar44);
      }
      *local_598 = true;
    }
    if (local_9e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9e8.Data);
    }
    local_88 = 0;
    if (local_90 != (void *)0x0) {
      FMemory::Free(local_90);
    }
    TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_d0);
    local_120.Pairs.HashSize = 0;
    if (local_120.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_120.Pairs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_120);
    DestructItems<FMovieSceneNestedSequenceTransform,int>
              ((FMovieSceneNestedSequenceTransform *)local_130.Data,(int)local_128);
    if ((FMovieSceneNestedSequenceTransform *)local_130.Data !=
        (FMovieSceneNestedSequenceTransform *)0x0) {
      FMemory::Free(local_130.Data);
    }
    DestructItems<FMovieSceneSubSequenceTreeEntry,int>
              ((FMovieSceneSubSequenceTreeEntry *)local_150.Data,(int)local_148);
    if ((FMovieSceneSubSequenceTreeEntry *)local_150.Data != (FMovieSceneSubSequenceTreeEntry *)0x0)
    {
      FMemory::Free(local_150.Data);
    }
    if (local_160.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data);
    }
    if (local_170 != (void *)0x0) {
      FMemory::Free(local_170);
    }
    if (local_180 != (void *)0x0) {
      FMemory::Free(local_180);
    }
    if ((FScriptContainerElement *)local_1b8._8_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_1b8._8_8_);
    }
    DestructItems<_UMoviePipelineBlueprintLibrary::UpdateJobShotListFromSequence_::__l6::FLinearizedEntity,int>
              ((FLinearizedEntity *)local_a30.Data,(uint)local_a28);
    if ((FObjectPtr_u_0 *)local_a30.Data != (FObjectPtr_u_0 *)0x0) {
      FMemory::Free(local_a30.Data);
    }
    if (local_310.Data.Items.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_310.Data.Items.AllocatorInstance.Data);
    }
    if (local_310.Data.Entries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_310.Data.Entries.AllocatorInstance.Data);
    }
    if ((void *)local_310._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_310._padding_);
    }
    if ((void *)local_310._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_310._padding_);
    }
    if (local_370.Data.Items.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_370.Data.Items.AllocatorInstance.Data);
    }
    if (local_370.Data.Entries.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_370.Data.Entries.AllocatorInstance.Data);
    }
    if ((void *)local_370._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_370._padding_);
    }
    if ((void *)local_370._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_370._padding_);
    return;
  }
  pFVar78 = (pTVar5->AllocatorInstance).Data;
  iVar44 = (local_8b8->ShotInfo).ArrayNum;
  local_a20 = (UMoviePipelineExecutorShot *)0x0;
  pFVar87 = pFVar78 + (longlong)iVar44 * 8;
LAB_14dd4a951:
  do {
    if ((pUVar37->ShotInfo).ArrayNum != iVar44) {
      local_a10[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UMoviePipelineExecutorShot>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_a10);
    }
    pUVar66 = local_a20;
    if (pFVar78 == pFVar87) break;
    pUVar66 = *(UMoviePipelineExecutorShot **)pFVar78;
    if (pUVar66 == (UMoviePipelineExecutorShot *)0x0) {
      if (2 < (byte)LogMovieRenderPipeline._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline)
        ;
        pFVar78 = pFVar78 + 8;
        goto LAB_14dd4a951;
      }
    }
    else {
      iVar45 = (pUVar66->InnerName).Data.ArrayNum;
      if (iVar45 == *(int *)((longlong)FVar84.Data + 0x38)) {
        if (1 < iVar45) {
          iVar45 = FGenericPlatformStricmp::Stricmp
                             ((wchar_t *)(pUVar66->InnerName).Data.AllocatorInstance.Data,
                              (wchar_t *)((FObjectPtr_u_0 *)((longlong)FVar84.Data + 0x30))->Handle)
          ;
          bVar41 = iVar45 == 0;
          goto LAB_14dd4a9be;
        }
      }
      else {
        bVar41 = iVar45 + *(int *)((longlong)FVar84.Data + 0x38) == 1;
LAB_14dd4a9be:
        if (!bVar41) goto LAB_14dd4a9f1;
      }
      iVar45 = (pUVar66->OuterName).Data.ArrayNum;
      if (iVar45 == *(int *)((longlong)FVar84.Data + 0x48)) {
        if (iVar45 < 2) break;
        iVar45 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)(pUVar66->OuterName).Data.AllocatorInstance.Data,
                            (wchar_t *)((FObjectPtr_u_0 *)((longlong)FVar84.Data + 0x40))->Handle);
        bVar41 = iVar45 == 0;
      }
      else {
        bVar41 = iVar45 + *(int *)((longlong)FVar84.Data + 0x48) == 1;
      }
      if (bVar41) break;
    }
LAB_14dd4a9f1:
    pFVar78 = pFVar78 + 8;
  } while( true );
  local_a20 = pUVar66;
  pUVar37 = local_8b8;
  if (local_a20 == (UMoviePipelineExecutorShot *)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)local_8b8,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar52 = Z_Construct_UClass_UMoviePipelineExecutorShot_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_238,pUVar52);
    local_238._8_8_ = pUVar37;
    pUVar66 = (UMoviePipelineExecutorShot *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_238);
    if (local_238._64_8_ != 0) {
      plVar70 = (longlong *)(local_238 + 0x50);
      if ((longlong *)local_238._104_8_ != (longlong *)0x0) {
        plVar70 = (longlong *)local_238._104_8_;
      }
      (**(code **)(*plVar70 + 0x10))();
    }
    local_a20 = pUVar66;
    UObjectBase::AtomicallySetFlags((UObjectBase *)pUVar66,RF_Transactional);
    pFVar67 = local_a08;
    if (4 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    }
  }
  else {
    pFVar67 = local_a08;
    if (4 < (byte)LogMovieRenderPipeline._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
      pFVar67 = local_a08;
    }
  }
  if (((local_9e8.Data <= (FScriptContainerElement *)&local_a20) &&
      ((FScriptContainerElement *)&local_a20 < local_9e8.Data + (longlong)local_9dc * 8)) &&
     (bVar41 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar41)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  if (local_9e0 == local_9dc) {
    local_9e0 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_9e8,&local_9dc);
  }
  pUVar66 = local_a20;
  local_6e4 = 60000;
  iVar44 = local_9e0 + 1;
  iStack_6e0 = 1;
  local_6d8 = 0;
  FStack_6d4.Value = 0;
  *(UMoviePipelineExecutorShot **)(local_9e8.Data + (longlong)local_9e0 * 8) = local_a20;
  uVar33 = _UNK_15076cb68;
  uVar32 = ___xmm_ffffffffffffffff0000000000000000;
  uVar19 = _UNK_15060db28;
  uVar18 = ___xmm_ffffffffffffffffffffffffffffffff;
  local_708 = true;
  local_6dc = Uninitialized;
  local_6d0 = 0.0;
  FStack_6cc.Value = 0;
  local_6c8 = 0.0;
  FStack_6c4.Value = 0;
  local_6c0 = 0.0;
  local_6b8.LinearTransform.TimeScale = 1.0;
  local_6b8.LinearTransform.Offset.FrameNumber.Value = 0;
  local_6b8.LinearTransform.Offset.SubFrame = 0.0;
  local_6b8.NestedTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6b8.NestedTransforms.ArrayNum = 0;
  local_6b8.NestedTransforms.ArrayMax = 0;
  local_698 = CONCAT31(local_698._1_3_,2);
  FStack_694.Value = 0;
  uStack_690 = CONCAT31(uStack_690._1_3_,2);
  uStack_68c = 0;
  local_688 = CONCAT31(local_688._1_3_,2);
  FStack_684.Value = 0;
  uStack_680 = CONCAT31(uStack_680._1_3_,2);
  FStack_67c.Value = 0;
  local_678.SegmentName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_650 = false;
  local_64c = 0;
  local_644 = 0;
  local_718.ComparisonIndex.Value = 0;
  local_718.Number = 0;
  FStack_710.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_704 = 0;
  TStack_6fc = (TIntPoint<int>_u_0)0x0;
  local_6f4 = FVar34;
  FStack_6ec = FVar35;
  ___xmm_ffffffffffffffff0000000000000000 = (int)uVar16;
  _UNK_15076cb64 = SUB84(uVar16,4);
  local_678.SegmentName.Data.ArrayNum = ___xmm_ffffffffffffffff0000000000000000;
  local_678.SegmentName.Data.ArrayMax = _UNK_15076cb64;
  _UNK_15076cb68 = (int)uVar17;
  _UNK_15076cb6c = SUB84(uVar17,4);
  local_678.OutputFrameIndex = _UNK_15076cb68;
  local_678.TotalOutputFrameCount = _UNK_15076cb6c;
  ___xmm_ffffffffffffffffffffffffffffffff = (int)uVar7;
  _UNK_15060db24 = SUB84(uVar7,4);
  local_678.OutputSubSampleIndex = ___xmm_ffffffffffffffffffffffffffffffff;
  local_678.TotalSubSampleCount = _UNK_15060db24;
  _UNK_15060db28 = (int)uVar15;
  _UNK_15060db2c = SUB84(uVar15,4);
  local_678.EngineWarmUpFrameIndex = _UNK_15060db28;
  local_678.TotalEngineWarmUpFrameCount = _UNK_15060db2c;
  ___xmm_ffffffffffffffffffffffffffffffff = uVar18;
  _UNK_15060db28 = uVar19;
  ___xmm_ffffffffffffffff0000000000000000 = uVar32;
  _UNK_15076cb68 = uVar33;
  local_9e0 = iVar44;
  if (&local_a20->ShotInfo != (FMoviePipelineCameraCutInfo *)&local_718) {
    (local_a20->ShotInfo).SubSectionHierarchy.Object = (FCameraCutSubSectionHierarchyNode *)0x0;
    local_718.ComparisonIndex.Value = 0;
    local_718.Number = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(local_a20->ShotInfo).SubSectionHierarchy.SharedReferenceCount,&FStack_710);
  }
  (pUVar66->ShotInfo).NumTemporalSamples = (int)local_704;
  (pUVar66->ShotInfo).NumSpatialSamples = local_704._4_4_;
  (pUVar66->ShotInfo).NumTiles.field0_0x0 = TStack_6fc;
  (pUVar66->ShotInfo).CachedFrameRate = local_6f4;
  (pUVar66->ShotInfo).CachedTickResolution = FStack_6ec;
  FVar20.Denominator = iStack_6e0;
  FVar20.Numerator = local_6e4;
  (pUVar66->ShotInfo).CachedShotTickResolution = FVar20;
  FVar21.SubFrame = local_6d0;
  FVar21.FrameNumber.Value = FStack_6d4.Value;
  (pUVar66->ShotInfo).CurrentTimeInRoot = FVar21;
  FVar22.SubFrame = local_6c8;
  FVar22.FrameNumber.Value = FStack_6cc.Value;
  (pUVar66->ShotInfo).InitialTimeInRoot = FVar22;
  FVar23.SubFrame = local_6c0;
  FVar23.FrameNumber.Value = FStack_6c4.Value;
  (pUVar66->ShotInfo).bEmulateFirstFrameMotionBlur = local_708;
  (pUVar66->ShotInfo).State = local_6dc;
  (pUVar66->ShotInfo).InitialTimeInShot = FVar23;
  (pUVar66->ShotInfo).CurrentTickInRoot.Value = local_6d8;
  FMovieSceneSequenceTransform::operator=(&(pUVar66->ShotInfo).OuterToInnerTransform,&local_6b8);
  TVar74.Value.Value = FStack_694.Value;
  TVar74._0_4_ = local_698;
  TVar24.Value.Value = FStack_684.Value;
  TVar24._0_4_ = local_688;
  TVar25.Value.Value = FStack_67c.Value;
  TVar25._0_4_ = uStack_680;
  (pUVar66->ShotInfo).TotalOutputRangeRoot.LowerBound = TVar74;
  (pUVar66->ShotInfo).TotalOutputRangeRoot.UpperBound.Type =
       (TEnumAsByte<ERangeBoundTypes::Type>)(char)uStack_690;
  *(int3 *)&(pUVar66->ShotInfo).TotalOutputRangeRoot.UpperBound.field_0x1 =
       (int3)((uint)uStack_690 >> 8);
  (pUVar66->ShotInfo).TotalOutputRangeRoot.UpperBound.Value = (FFrameNumber)uStack_68c;
  (pUVar66->ShotInfo).WarmupRangeRoot.LowerBound = TVar24;
  (pUVar66->ShotInfo).WarmupRangeRoot.UpperBound = TVar25;
  FMoviePipelineSegmentWorkMetrics::operator=(&(pUVar66->ShotInfo).WorkMetrics,&local_678);
  (pUVar66->ShotInfo).bHasEvaluatedMotionBlurFrame = local_650;
  (pUVar66->ShotInfo).NumEngineWarmUpFramesRemaining = (int)local_64c;
  (pUVar66->ShotInfo).NumEngineCoolDownFramesRemaining = local_64c._4_4_;
  (pUVar66->ShotInfo).VersionNumber = local_644;
  if (local_678.SegmentName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_678.SegmentName.Data.AllocatorInstance.Data);
  }
  FVar71.Data = local_6b8.NestedTransforms.AllocatorInstance.Data;
  DestructItems<FMovieSceneNestedSequenceTransform,int>
            ((FMovieSceneNestedSequenceTransform *)local_6b8.NestedTransforms.AllocatorInstance.Data
             ,local_6b8.NestedTransforms.ArrayNum);
  if ((FMovieSceneNestedSequenceTransform *)FVar71.Data != (FMovieSceneNestedSequenceTransform *)0x0
     ) {
    FMemory::Free(FVar71.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_710.ReferenceController);
  iVar44 = *(int *)((longlong)FVar84.Data + 0x38) + -1;
  if (*(int *)((longlong)FVar84.Data + 0x38) == 0) {
    iVar44 = 0;
  }
  ::FString::AssignRange
            (&local_a20->InnerName,
             (wchar_t *)((FObjectPtr_u_0 *)((longlong)FVar84.Data + 0x30))->Handle,iVar44);
  iVar44 = *(int *)((longlong)FVar84.Data + 0x48) + -1;
  if (*(int *)((longlong)FVar84.Data + 0x48) == 0) {
    iVar44 = 0;
  }
  ::FString::AssignRange
            (&local_a20->OuterName,
             (wchar_t *)((FObjectPtr_u_0 *)((longlong)FVar84.Data + 0x40))->Handle,iVar44);
  FVar12 = *(FObjectPtr_u_0 *)((longlong)FVar84.Data + 0x50);
  pUVar55 = ((FObjectPtr_u_0 *)((longlong)FVar84.Data + 0x58))->Handle;
  if (pUVar55 != (UObject *)0x0) {
    LOCK();
    *(int *)&pUVar55->field_0x8 = *(int *)&pUVar55->field_0x8 + 1;
    UNLOCK();
  }
  local_548 = (local_a20->ShotInfo).SubSectionHierarchy.Object;
  pTStack_540 = (local_a20->ShotInfo).SubSectionHierarchy.SharedReferenceCount.ReferenceController;
  (local_a20->ShotInfo).SubSectionHierarchy.Object = (FCameraCutSubSectionHierarchyNode *)FVar12;
  (local_a20->ShotInfo).SubSectionHierarchy.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)pUVar55;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_540);
  pUVar66 = local_a20;
  FVar12 = *(FObjectPtr_u_0 *)((longlong)FVar84.Data + 8);
  (local_a20->ShotInfo).TotalOutputRangeRoot.LowerBound =
       (TRangeBound<FFrameNumber>)*(FObjectPtr_u_0 *)FVar84.Data;
  (local_a20->ShotInfo).TotalOutputRangeRoot.UpperBound = (TRangeBound<FFrameNumber>)FVar12;
  FVar12 = *(FObjectPtr_u_0 *)((longlong)FVar84.Data + 0x68);
  (local_a20->ShotInfo).WarmupRangeRoot.LowerBound =
       (TRangeBound<FFrameNumber>)*(FObjectPtr_u_0 *)((longlong)FVar84.Data + 0x60);
  (local_a20->ShotInfo).WarmupRangeRoot.UpperBound = (TRangeBound<FFrameNumber>)FVar12;
  *(FObjectPtr_u_0 *)&(local_a20->ShotInfo).OuterToInnerTransform.LinearTransform =
       *(FObjectPtr_u_0 *)((longlong)FVar84.Data + 0x70);
  pTVar2 = &(local_a20->ShotInfo).OuterToInnerTransform.NestedTransforms;
  (local_a20->ShotInfo).OuterToInnerTransform.LinearTransform.Offset.SubFrame =
       *(float *)((longlong)FVar84.Data + 0x78);
  if ((FObjectPtr_u_0 *)pTVar2 != (FObjectPtr_u_0 *)((longlong)FVar84.Data + 0x80)) {
    DestructItems<FMovieSceneNestedSequenceTransform,int>
              ((FMovieSceneNestedSequenceTransform *)(pTVar2->AllocatorInstance).Data,
               (local_a20->ShotInfo).OuterToInnerTransform.NestedTransforms.ArrayNum);
    iVar44 = *(int *)((longlong)FVar84.Data + 0x88);
    piVar4 = &(pUVar66->ShotInfo).OuterToInnerTransform.NestedTransforms.ArrayMax;
    pUVar55 = ((FObjectPtr_u_0 *)((longlong)FVar84.Data + 0x80))->Handle;
    iVar45 = *piVar4;
    (pUVar66->ShotInfo).OuterToInnerTransform.NestedTransforms.ArrayNum = iVar44;
    if ((iVar44 == 0) && (iVar45 == 0)) {
      *piVar4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar44,iVar45,&pTVar2->AllocatorInstance,iVar44,piVar4);
      ConstructItems<FMovieSceneNestedSequenceTransform,FMovieSceneNestedSequenceTransform,int>
                ((pTVar2->AllocatorInstance).Data,(FMovieSceneNestedSequenceTransform *)pUVar55,
                 iVar44);
    }
  }
  pUVar66 = local_a20;
  pTVar3 = &local_a20->SidecarCameras;
  if ((FObjectPtr_u_0 *)pTVar3 != (FObjectPtr_u_0 *)((longlong)FVar84.Data + 0x20)) {
    DestructItems<FMoviePipelineSidecarCamera,int>
              ((FMoviePipelineSidecarCamera *)(pTVar3->AllocatorInstance).Data,
               (local_a20->SidecarCameras).ArrayNum);
    iVar44 = *(int *)((longlong)FVar84.Data + 0x28);
    piVar4 = &(pUVar66->SidecarCameras).ArrayMax;
    pFVar13 = (FMoviePipelineSidecarCamera *)
              ((FObjectPtr_u_0 *)((longlong)FVar84.Data + 0x20))->Handle;
    (pUVar66->SidecarCameras).ArrayNum = iVar44;
    if ((iVar44 == 0) && (*piVar4 == 0)) {
      *piVar4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar44,*piVar4,&pTVar3->AllocatorInstance,iVar44,piVar4);
      ConstructItems<FMoviePipelineSidecarCamera,FMoviePipelineSidecarCamera,int>
                ((pTVar3->AllocatorInstance).Data,pFVar13,iVar44);
    }
  }
  if (4 < (byte)LogMovieRenderPipeline._0_1_) {
    local_8b0._0_1_ = (local_a20->ShotInfo).TotalOutputRangeRoot.UpperBound.Type;
    local_8b0._1_3_ =
         *(undefined3 *)&(local_a20->ShotInfo).TotalOutputRangeRoot.UpperBound.field_0x1;
    local_8b0._4_4_ = (local_a20->ShotInfo).TotalOutputRangeRoot.UpperBound.Value;
    local_8a8 = (local_a20->ShotInfo).TotalOutputRangeRoot.LowerBound;
    TVar72 = local_8a8.Type.Value;
    if ((undefined1)local_8b0 != '\x02') {
      if ((undefined1)local_8b0 == '\x01') {
        bVar31 = true;
        ::FString::PrintfImpl(&local_5c0,L"%i]");
      }
      else {
        bVar30 = true;
        ::FString::PrintfImpl(&local_5d0,L"%i)");
      }
    }
    if (TVar72.Value != '\x02') {
      if (TVar72.Value == '\x01') {
        bVar29 = true;
        ::FString::PrintfImpl(&local_5e0,L"[%i");
      }
      else {
        bVar28 = true;
        ::FString::PrintfImpl(&local_5f0,L"(%i");
      }
    }
    ::FString::PrintfImpl(&local_538,L"%s,%s");
    FVar71.Data = (FScriptContainerElement *)L"";
    if (local_538.Data.ArrayNum != 0) {
      FVar71.Data = local_538.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_5b0,(wchar_t *)FVar71.Data);
    if (local_538.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_538.Data.AllocatorInstance.Data);
    }
    if ((bVar28) &&
       (bVar28 = false, local_5f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_5f0.Data.AllocatorInstance.Data);
    }
    if ((bVar29) &&
       (bVar29 = false, local_5e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_5e0.Data.AllocatorInstance.Data);
    }
    if ((bVar30) &&
       (bVar30 = false, local_5d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_5d0.Data.AllocatorInstance.Data);
    }
    if ((bVar31) &&
       (bVar31 = false, local_5c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_5c0.Data.AllocatorInstance.Data);
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    if (local_5b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5b0.Data.AllocatorInstance.Data);
    }
  }
  FVar84.Data = FVar84.Data + 0x90;
  uVar68 = (ulonglong)local_a00;
  local_a08 = pFVar67 + 0x12;
  goto LAB_14dd4a910;
}

// Utility_GetCurrentCineCamera @ 14dd4b7f0

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
UMoviePipelineBlueprintLibrary::Utility_GetCurrentCineCamera(UWorld *param_1)

{
  int iVar1;
  APlayerCameraManager *this;
  APlayerController *pAVar2;
  AActor *pAVar3;
  UClass *pUVar4;
  
  if (param_1 != (UWorld *)0x0) {
    pAVar2 = UWorld::GetFirstPlayerController(param_1);
    this = (pAVar2->PlayerCameraManager).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this == (APlayerCameraManager *)0x0) {
        return (UCineCameraComponent *)0x0;
      }
    }
    else {
      if (this == (APlayerCameraManager *)0x0) {
        return (UCineCameraComponent *)0x0;
      }
      UE::GC::MarkAsReachable((UObject *)this);
    }
    pAVar3 = APlayerCameraManager::GetViewTarget(this);
    if (pAVar3 != (AActor *)0x0) {
      pUVar4 = Z_Construct_UClass_ACineCameraActor_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(pAVar3->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pAVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) {
        return (UCineCameraComponent *)pAVar3[3].InstanceComponents.AllocatorInstance.Data;
      }
    }
  }
  return (UCineCameraComponent *)0x0;
}

// execDuplicateSequence @ 14dd4e2c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UMoviePipelineBlueprintLibrary::execDuplicateSequence
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FProperty *pFVar4;
  UMovieSceneSubSection *this;
  UClass *pUVar5;
  FName FVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  UMovieScene *pUVar9;
  UMovieSceneTrack *pUVar10;
  TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *pTVar11;
  UMovieSceneSequence *pUVar12;
  FString *pFVar13;
  ulonglong uVar14;
  ForAnyElementType FVar15;
  wchar_t *pwVar16;
  wchar_t *pwVar17;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined1 local_138 [8];
  UClass *local_130;
  TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> local_128;
  UClass *local_118;
  UObject *local_110;
  undefined1 local_108 [16];
  FString local_f8;
  undefined1 local_e8 [128];
  void *local_68;
  undefined4 local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_168;
  pUVar7 = (UObject *)0x0;
  local_118 = (UClass *)0x0;
  local_f8.Data.AllocatorInstance.Data = param_3;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_118,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_118);
  }
  local_110 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_110,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_110);
  }
  pUVar5 = local_118;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_110 != (UObject *)0x0) {
    FObjectDuplicationParameters::FObjectDuplicationParameters
              ((FObjectDuplicationParameters *)local_e8,local_110,(UObject *)local_118);
    local_130 = (UClass *)0x0;
    FVar6 = (FName)Z_Construct_UClass_UMovieSceneSequence_NoRegister();
    local_148 = 0;
    local_e8._16_8_ = MakeUniqueObjectName((UObject *)local_108,pUVar5,FVar6,None);
    local_e8._16_8_ = *(undefined8 *)local_e8._16_8_;
    pUVar7 = StaticDuplicateObjectEx((FObjectDuplicationParameters *)local_e8);
    if (pUVar7 == (UObject *)0x0) {
      pFVar13 = GetTypeName<UMovieSceneSequence>((FString *)local_108);
      if ((pFVar13->Data).ArrayNum == 0) {
        pwVar16 = L"";
      }
      else {
        pwVar16 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar16);
    }
    pUVar8 = Z_Construct_UClass_UMovieSceneSequence_NoRegister();
    iVar2 = (int)pUVar8->_padding_;
    if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar8->_padding_)) {
      pFVar13 = GetTypeName<UMovieSceneSequence>((FString *)local_108);
      pwVar16 = L"";
      if ((pFVar13->Data).ArrayNum == 0) {
        pwVar17 = L"";
      }
      else {
        pwVar17 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
      }
      pFVar13 = GetFullNameForCastLogError<UObject>(&local_f8,pUVar7);
      if ((pFVar13->Data).ArrayNum != 0) {
        pwVar16 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar16,pwVar17);
    }
    local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.ArrayNum = 0;
    local_128.ArrayMax = 0;
    pUVar9 = (UMovieScene *)(**(code **)(*(longlong *)pUVar7 + 0x2f8))(pUVar7);
    local_130 = Z_Construct_UClass_UMovieSceneCinematicShotTrack_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_130 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_130);
    }
    pUVar10 = UMovieScene::FindTrack(pUVar9,(TSubclassOf<UMovieSceneTrack>)&local_130);
    if (pUVar10 != (UMovieSceneTrack *)0x0) {
      pUVar8 = Z_Construct_UClass_UMovieSceneCinematicShotTrack_NoRegister();
      iVar2 = (int)pUVar8->_padding_;
      if ((iVar2 <= *(int *)(pUVar10->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar8->_padding_)) {
        pTVar11 = (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)
                  (**(code **)(pUVar10->_padding_ + 0x360))(pUVar10);
        TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_>::
        Append<UMovieSceneSection_*,TSizedDefaultAllocator<32>_>(&local_128,pTVar11);
      }
    }
    pUVar9 = (UMovieScene *)(**(code **)(*(longlong *)pUVar7 + 0x2f8))(pUVar7);
    local_130 = Z_Construct_UClass_UMovieSceneSubTrack_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_130 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_130);
    }
    pUVar10 = UMovieScene::FindTrack(pUVar9,(TSubclassOf<UMovieSceneTrack>)&local_130);
    if (pUVar10 != (UMovieSceneTrack *)0x0) {
      pUVar8 = Z_Construct_UClass_UMovieSceneSubTrack_NoRegister();
      iVar2 = (int)pUVar8->_padding_;
      if ((iVar2 <= *(int *)(pUVar10->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar8->_padding_)) {
        pTVar11 = (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *)
                  (**(code **)(pUVar10->_padding_ + 0x360))(pUVar10);
        TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_>::
        Append<UMovieSceneSection_*,TSizedDefaultAllocator<32>_>(&local_128,pTVar11);
      }
    }
    iVar2 = local_128.ArrayNum;
    uVar14 = (ulonglong)local_128.ArrayNum;
    pFVar1 = local_128.AllocatorInstance.Data + uVar14 * 8;
    FVar15.Data = local_128.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar14 != iVar2) {
        `TCheckedPointerIterator<UMovieSceneSection_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_138);
      }
      if (FVar15.Data == pFVar1) break;
      this = *(UMovieSceneSubSection **)FVar15.Data;
      if (this == (UMovieSceneSubSection *)0x0) {
        pFVar13 = GetTypeName<UMovieSceneSubSection>((FString *)local_108);
        if ((pFVar13->Data).ArrayNum == 0) {
          pwVar16 = L"";
        }
        else {
          pwVar16 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar16);
      }
      pUVar8 = Z_Construct_UClass_UMovieSceneSubSection_NoRegister();
      iVar3 = (int)pUVar8->_padding_;
      if ((*(int *)(this->_padding_ + 0x38) < iVar3) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar3 * 8)
          != &pUVar8->_padding_)) {
        pFVar13 = GetTypeName<UMovieSceneSubSection>((FString *)local_108);
        pwVar16 = L"";
        if ((pFVar13->Data).ArrayNum == 0) {
          pwVar17 = L"";
        }
        else {
          pwVar17 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
        }
        pFVar13 = GetFullNameForCastLogError<UMovieSceneSection>
                            (&local_f8,(UMovieSceneSection *)this);
        if ((pFVar13->Data).ArrayNum != 0) {
          pwVar16 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar16,pwVar17);
      }
      pUVar12 = UMovieSceneSubSection::GetSequence(this);
      pUVar12 = DuplicateSequence((UObject *)pUVar5,pUVar12);
      UMovieSceneSubSection::SetSequence(this,pUVar12);
      uVar14 = local_128._8_8_ & 0xffffffff;
      FVar15.Data = FVar15.Data + 8;
    }
    if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.AllocatorInstance.Data);
    }
    local_60 = 0;
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
    TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<UObject_*,UObject_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_e8 + 0x40));
  }
  *(UObject **)local_f8.Data.AllocatorInstance.Data = pUVar7;
  return;
}

// execFindOrGetDefaultSettingForShot @ 14dd4e8d0

void __cdecl
UMoviePipelineBlueprintLibrary::execFindOrGetDefaultSettingForShot
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  UMoviePipelineConfigBase *this;
  bool bVar4;
  longlong lVar5;
  UMoviePipelineConfigBase *this_00;
  char cVar6;
  UMoviePipelineSetting *pUVar7;
  UClass *pUVar8;
  UClass *this_01;
  longlong local_res10;
  UMoviePipelineConfigBase *local_res18;
  UClass *local_res20;
  UClass *local_28 [2];
  
  local_res20 = (UClass *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = (UMoviePipelineConfigBase *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  this_01 = local_res20;
  this_00 = local_res18;
  lVar5 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  if ((lVar5 == 0) ||
     (this = *(UMoviePipelineConfigBase **)(lVar5 + 0x180), this == (UMoviePipelineConfigBase *)0x0)
     ) {
LAB_14dd4ea49:
    if (this_00 != (UMoviePipelineConfigBase *)0x0) {
      local_28[0] = this_01;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_01 != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      pUVar7 = UMoviePipelineConfigBase::FindSettingByClass
                         (this_00,(TSubclassOf<UMoviePipelineSetting>)local_28,false,false);
      if ((pUVar7 != (UMoviePipelineSetting *)0x0) &&
         (cVar6 = (**(code **)(pUVar7->_padding_ + 0x328))(pUVar7), cVar6 != '\0')) {
        *(UMoviePipelineSetting **)param_3 = pUVar7;
        return;
      }
    }
  }
  else {
    local_28[0] = this_01;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_01 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    pUVar7 = UMoviePipelineConfigBase::FindSettingByClass
                       (this,(TSubclassOf<UMoviePipelineSetting>)local_28,false,false);
    if (pUVar7 == (UMoviePipelineSetting *)0x0) goto LAB_14dd4ea49;
    cVar6 = (**(code **)(pUVar7->_padding_ + 0x328))(pUVar7);
    if (cVar6 != '\0') {
      *(UMoviePipelineSetting **)param_3 = pUVar7;
      return;
    }
  }
  if ((this_01 != (UClass *)0x0) &&
     (pUVar8 = Z_Construct_UClass_UMoviePipelineSetting_NoRegister(), pUVar8 != (UClass *)0x0)) {
    iVar2 = (int)pUVar8->_padding_;
    if (((int)this_01->_padding_ < iVar2) ||
       ((longlong *)*(undefined1 **)(this_01->_padding_ + (longlong)iVar2 * 8) != &pUVar8->_padding_
       )) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_14dd4ead8;
  }
  this_01 = (UClass *)0x0;
LAB_14dd4ead8:
  pUVar7 = UClass::GetDefaultObject<UMoviePipelineSetting>(this_01);
  *(UMoviePipelineSetting **)param_3 = pUVar7;
  return;
}

// execGetBackbufferResolution @ 14dd4ef30

void __cdecl
UMoviePipelineBlueprintLibrary::execGetBackbufferResolution
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  UMoviePipelineConfigBase *pUVar3;
  code *pcVar4;
  longlong lVar5;
  UMoviePipelineConfigBase *this;
  bool bVar6;
  char cVar7;
  int iVar8;
  UMoviePipelineOutputSetting *pUVar9;
  UClass *pUVar10;
  UMoviePipelineSetting *pUVar11;
  UClass *pUVar12;
  int iVar13;
  char *pcVar14;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar15;
  float fVar16;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  longlong local_res20;
  UMoviePipelineConfigBase *local_78;
  int local_70;
  int local_6c;
  UClass *local_68;
  UClass *local_60;
  TIntPoint<int>_u_0 local_58;
  UClass *local_50;
  UClass *local_48 [4];
  
  local_78 = (UMoviePipelineConfigBase *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  this = local_78;
  lVar5 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_78 == (UMoviePipelineConfigBase *)0x0) || (local_res20 == 0)) {
    *(undefined8 *)param_3 = 0;
    return;
  }
  pUVar9 = UMoviePipelineConfigBase::FindSetting<UMoviePipelineOutputSetting>(local_78,false);
  if ((pUVar9 == (UMoviePipelineOutputSetting *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutputSetting",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineBlueprintLibrary.cpp"
                         ,0x39d,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_58 = (pUVar9->OutputResolution).field0_0x0;
  pUVar10 = UMoviePipelineCameraSetting::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  pUVar3 = *(UMoviePipelineConfigBase **)(lVar5 + 0x180);
  if (pUVar3 == (UMoviePipelineConfigBase *)0x0) {
LAB_14dd4f12b:
    local_60 = pUVar10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    pUVar11 = UMoviePipelineConfigBase::FindSettingByClass
                        (this,(TSubclassOf<UMoviePipelineSetting>)&local_60,false,false);
    if ((pUVar11 != (UMoviePipelineSetting *)0x0) &&
       (cVar7 = (**(code **)(pUVar11->_padding_ + 0x328))(pUVar11), cVar7 != '\0'))
    goto LAB_14dd4f1af;
    if ((pUVar10 == (UClass *)0x0) ||
       (pUVar12 = Z_Construct_UClass_UMoviePipelineSetting_NoRegister(), pUVar12 == (UClass *)0x0))
    {
LAB_14dd4f19d:
      pUVar10 = (UClass *)0x0;
    }
    else {
      iVar8 = (int)pUVar12->_padding_;
      if (((int)pUVar10->_padding_ < iVar8) ||
         ((longlong *)*(undefined1 **)(pUVar10->_padding_ + (longlong)iVar8 * 8) !=
          &pUVar12->_padding_)) {
LAB_14dd4f197:
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
LAB_14dd4f199:
      if (!bVar6) goto LAB_14dd4f19d;
    }
    pUVar11 = UClass::GetDefaultObject<UMoviePipelineSetting>(pUVar10);
    if (pUVar11 != (UMoviePipelineSetting *)0x0) goto LAB_14dd4f1af;
LAB_14dd4f1d2:
    pcVar14 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineBlueprintLibrary.cpp"
    ;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CameraSettings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineBlueprintLibrary.cpp"
                       ,0x3ab,L"");
    fVar15 = extraout_XMM0_Da_00;
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    local_68 = pUVar10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    pUVar11 = UMoviePipelineConfigBase::FindSettingByClass
                        (pUVar3,(TSubclassOf<UMoviePipelineSetting>)&local_68,false,false);
    if (pUVar11 == (UMoviePipelineSetting *)0x0) goto LAB_14dd4f12b;
    cVar7 = (**(code **)(pUVar11->_padding_ + 0x328))(pUVar11);
    if (cVar7 == '\0') {
      if ((pUVar10 != (UClass *)0x0) &&
         (pUVar12 = Z_Construct_UClass_UMoviePipelineSetting_NoRegister(), pUVar12 != (UClass *)0x0)
         ) {
        iVar8 = (int)pUVar12->_padding_;
        if (((int)pUVar10->_padding_ < iVar8) ||
           ((longlong *)*(undefined1 **)(pUVar10->_padding_ + (longlong)iVar8 * 8) !=
            &pUVar12->_padding_)) goto LAB_14dd4f197;
        bVar6 = true;
        goto LAB_14dd4f199;
      }
      goto LAB_14dd4f19d;
    }
LAB_14dd4f1af:
    pUVar10 = UMoviePipelineCameraSetting::StaticClass();
    pcVar14 = (char *)pUVar11->_padding_;
    iVar8 = (int)pUVar10->_padding_;
    if (((((TIntPoint<int> *)((longlong)pcVar14 + 0x38))->field0_0x0)._s_0.X < iVar8) ||
       (fVar15 = extraout_XMM0_Da,
       (longlong *)
       *(undefined1 **)
        ((longlong)*(TIntPoint<int>_u_0 *)((longlong)pcVar14 + 0x30) + (longlong)iVar8 * 8) !=
       &pUVar10->_padding_)) goto LAB_14dd4f1d2;
  }
  UE::MoviePipeline::ScaleResolutionByOverscan(fVar15,(TIntPoint<int> *)pcVar14);
  pUVar10 = Z_Construct_UClass_UMoviePipelineHighResSetting_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  pUVar3 = *(UMoviePipelineConfigBase **)(lVar5 + 0x180);
  if (pUVar3 == (UMoviePipelineConfigBase *)0x0) {
LAB_14dd4f2cf:
    local_48[0] = pUVar10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    pUVar11 = UMoviePipelineConfigBase::FindSettingByClass
                        (this,(TSubclassOf<UMoviePipelineSetting>)local_48,false,false);
    if ((pUVar11 != (UMoviePipelineSetting *)0x0) &&
       (cVar7 = (**(code **)(pUVar11->_padding_ + 0x328))(pUVar11), cVar7 != '\0'))
    goto LAB_14dd4f353;
    if ((pUVar10 == (UClass *)0x0) ||
       (pUVar12 = Z_Construct_UClass_UMoviePipelineSetting_NoRegister(), pUVar12 == (UClass *)0x0))
    {
LAB_14dd4f341:
      pUVar10 = (UClass *)0x0;
    }
    else {
      iVar8 = (int)pUVar12->_padding_;
      if (((int)pUVar10->_padding_ < iVar8) ||
         ((longlong *)*(undefined1 **)(pUVar10->_padding_ + (longlong)iVar8 * 8) !=
          &pUVar12->_padding_)) {
LAB_14dd4f33b:
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
LAB_14dd4f33d:
      if (!bVar6) goto LAB_14dd4f341;
    }
    pUVar11 = UClass::GetDefaultObject<UMoviePipelineSetting>(pUVar10);
    if (pUVar11 != (UMoviePipelineSetting *)0x0) goto LAB_14dd4f353;
  }
  else {
    local_50 = pUVar10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar10);
    }
    pUVar11 = UMoviePipelineConfigBase::FindSettingByClass
                        (pUVar3,(TSubclassOf<UMoviePipelineSetting>)&local_50,false,false);
    if (pUVar11 == (UMoviePipelineSetting *)0x0) goto LAB_14dd4f2cf;
    cVar7 = (**(code **)(pUVar11->_padding_ + 0x328))(pUVar11);
    if (cVar7 == '\0') {
      if ((pUVar10 != (UClass *)0x0) &&
         (pUVar12 = Z_Construct_UClass_UMoviePipelineSetting_NoRegister(), pUVar12 != (UClass *)0x0)
         ) {
        iVar8 = (int)pUVar12->_padding_;
        if (((int)pUVar10->_padding_ < iVar8) ||
           ((longlong *)*(undefined1 **)(pUVar10->_padding_ + (longlong)iVar8 * 8) !=
            &pUVar12->_padding_)) goto LAB_14dd4f33b;
        bVar6 = true;
        goto LAB_14dd4f33d;
      }
      goto LAB_14dd4f341;
    }
LAB_14dd4f353:
    pUVar10 = Z_Construct_UClass_UMoviePipelineHighResSetting_NoRegister();
    iVar8 = (int)pUVar10->_padding_;
    if ((iVar8 <= *(int *)(pUVar11->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar8 * 8)
        == &pUVar10->_padding_)) goto LAB_14dd4f39e;
  }
  pUVar11 = (UMoviePipelineSetting *)0x0;
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("HighResSettings",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineBlueprintLibrary.cpp"
                     ,0x3ba,L"");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14dd4f39e:
  fVar16 = (float)(int)pUVar11[1]._padding_;
  fVar15 = __real_3f800000 / fVar16;
  iVar13 = -((int)ROUND(__real_bf000000 - (fVar15 + fVar15) * (float)local_70) >> 1);
  fVar15 = (float)iVar13;
  iVar8 = -((int)ROUND(__real_bf000000 - ((float)local_6c + (float)local_6c) / fVar16) >> 1);
  local_res18 = CONCAT44(iVar8 + ((int)ROUND(__real_bf000000 -
                                             (float)iVar8 * __real_40000000 *
                                             *(float *)&pUVar11[1]._padding_) >> 1) * -2,
                         iVar13 + ((int)ROUND(__real_bf000000 -
                                              (fVar15 + fVar15) * *(float *)&pUVar11[1]._padding_)
                                  >> 1) * -2);
  *(undefined8 *)param_3 = local_res18;
  return;
}

// execGetCompletionPercentage @ 14dd4f540

void __cdecl
UMoviePipelineBlueprintLibrary::execGetCompletionPercentage
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  FProperty *pFVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  float fVar8;
  undefined1 local_res10 [8];
  longlong local_res18;
  
  iVar7 = 0;
  local_res18 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  lVar5 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18 == 0) {
    *(undefined4 *)param_3 = 0;
    return;
  }
  plVar6 = *(longlong **)(local_res18 + 0xd8);
  iVar2 = *(int *)(local_res18 + 0xe0);
  iVar3 = *(int *)(local_res18 + 0xf8);
  plVar1 = plVar6 + iVar2;
  while( true ) {
    if (*(int *)(lVar5 + 0xe0) != iVar2) {
      `TCheckedPointerIterator<UMoviePipelineExecutorShot_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (plVar6 == plVar1) break;
    iVar7 = iVar7 + *(int *)(*plVar6 + 0x144);
    plVar6 = plVar6 + 1;
  }
  fVar8 = (float)iVar3 / (float)iVar7;
  if (__real_3f800000 <= fVar8) {
    fVar8 = __real_3f800000;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  *(float *)param_3 = fVar8;
  return;
}

// execGetCurrentAperture @ 14dd4f710

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
UMoviePipelineBlueprintLibrary::execGetCurrentAperture
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  APlayerCameraManager *this;
  FScriptContainerElement *pFVar3;
  UWorld *this_00;
  APlayerController *pAVar4;
  AActor *pAVar5;
  UClass *pUVar6;
  undefined4 uVar7;
  longlong *local_res10;
  
  local_res10 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this_00 = (UWorld *)(**(code **)(*local_res10 + 0x180))();
  if (this_00 != (UWorld *)0x0) {
    pAVar4 = UWorld::GetFirstPlayerController(this_00);
    this = (pAVar4->PlayerCameraManager).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this != (APlayerCameraManager *)0x0) goto LAB_14dd4f7b7;
    }
    else if (this != (APlayerCameraManager *)0x0) {
      UE::GC::MarkAsReachable((UObject *)this);
LAB_14dd4f7b7:
      pAVar5 = APlayerCameraManager::GetViewTarget(this);
      if (pAVar5 != (AActor *)0x0) {
        pUVar6 = Z_Construct_UClass_ACineCameraActor_NoRegister();
        iVar1 = (int)pUVar6->_padding_;
        if (((iVar1 <= *(int *)(pAVar5->_padding_ + 0x38)) &&
            ((longlong *)
             *(undefined1 **)(*(longlong *)(pAVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
             &pUVar6->_padding_)) &&
           (pFVar3 = pAVar5[3].InstanceComponents.AllocatorInstance.Data,
           pFVar3 != (FScriptContainerElement *)0x0)) {
          uVar7 = *(undefined4 *)(pFVar3 + 0xb50);
          goto LAB_14dd4f803;
        }
      }
    }
  }
  uVar7 = 0;
LAB_14dd4f803:
  *(undefined4 *)param_3 = uVar7;
  return;
}

// execGetCurrentExecutorShot @ 14dd4f820

void __cdecl
UMoviePipelineBlueprintLibrary::execGetCurrentExecutorShot
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
    iVar1 = *(int *)(local_res10 + 0xec);
    if ((-1 < iVar1) && (iVar1 < *(int *)(local_res10 + 0xe0))) {
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
      *(undefined8 *)param_3 = *(undefined8 *)(*(longlong *)(lVar4 + 0xd8) + (longlong)iVar1 * 8);
      return;
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetCurrentFocalLength @ 14dd4f920

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
UMoviePipelineBlueprintLibrary::execGetCurrentFocalLength
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  APlayerCameraManager *this;
  FScriptContainerElement *pFVar3;
  UWorld *this_00;
  APlayerController *pAVar4;
  AActor *pAVar5;
  UClass *pUVar6;
  undefined4 uVar7;
  longlong *local_res10;
  
  local_res10 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this_00 = (UWorld *)(**(code **)(*local_res10 + 0x180))();
  uVar7 = __real_bf800000;
  if (this_00 != (UWorld *)0x0) {
    pAVar4 = UWorld::GetFirstPlayerController(this_00);
    this = (pAVar4->PlayerCameraManager).field0_0x0.DebugPtr;
    uVar7 = __real_bf800000;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this == (APlayerCameraManager *)0x0) goto LAB_14dd4fa18;
    }
    else {
      if (this == (APlayerCameraManager *)0x0) goto LAB_14dd4fa18;
      UE::GC::MarkAsReachable((UObject *)this);
    }
    pAVar5 = APlayerCameraManager::GetViewTarget(this);
    uVar7 = __real_bf800000;
    if (pAVar5 != (AActor *)0x0) {
      pUVar6 = Z_Construct_UClass_ACineCameraActor_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      uVar7 = __real_bf800000;
      if (((iVar1 <= *(int *)(pAVar5->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pAVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
           &pUVar6->_padding_)) &&
         (pFVar3 = pAVar5[3].InstanceComponents.AllocatorInstance.Data,
         pFVar3 != (FScriptContainerElement *)0x0)) {
        uVar7 = *(undefined4 *)(pFVar3 + 0xb4c);
      }
    }
  }
LAB_14dd4fa18:
  *(undefined4 *)param_3 = uVar7;
  return;
}

// execGetCurrentFocusDistance @ 14dd4fa40

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
UMoviePipelineBlueprintLibrary::execGetCurrentFocusDistance
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  APlayerCameraManager *this;
  FScriptContainerElement *pFVar3;
  UWorld *this_00;
  APlayerController *pAVar4;
  AActor *pAVar5;
  UClass *pUVar6;
  undefined4 uVar7;
  longlong *local_res10;
  
  local_res10 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this_00 = (UWorld *)(**(code **)(*local_res10 + 0x180))();
  uVar7 = __real_bf800000;
  if (this_00 != (UWorld *)0x0) {
    pAVar4 = UWorld::GetFirstPlayerController(this_00);
    this = (pAVar4->PlayerCameraManager).field0_0x0.DebugPtr;
    uVar7 = __real_bf800000;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this == (APlayerCameraManager *)0x0) goto LAB_14dd4fb38;
    }
    else {
      if (this == (APlayerCameraManager *)0x0) goto LAB_14dd4fb38;
      UE::GC::MarkAsReachable((UObject *)this);
    }
    pAVar5 = APlayerCameraManager::GetViewTarget(this);
    uVar7 = __real_bf800000;
    if (pAVar5 != (AActor *)0x0) {
      pUVar6 = Z_Construct_UClass_ACineCameraActor_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      uVar7 = __real_bf800000;
      if (((iVar1 <= *(int *)(pAVar5->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(pAVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
           &pUVar6->_padding_)) &&
         (pFVar3 = pAVar5[3].InstanceComponents.AllocatorInstance.Data,
         pFVar3 != (FScriptContainerElement *)0x0)) {
        uVar7 = *(undefined4 *)(pFVar3 + 0xb54);
      }
    }
  }
LAB_14dd4fb38:
  *(undefined4 *)param_3 = uVar7;
  return;
}

// execGetCurrentSegmentName @ 14dd4fb90

void __cdecl
UMoviePipelineBlueprintLibrary::execGetCurrentSegmentName
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
    uVar2 = *(uint *)(local_res10 + 0xec);
    if ((int)uVar2 < *(int *)(local_res10 + 0xe0)) {
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
                                   (*(longlong *)(lVar5 + 0xd8) + (longlong)(int)uVar2 * 8) + 0x30))
      ;
      FText::operator=(pFVar8,pFVar7);
      if (local_48.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
      }
      uVar9 = 0;
      if ((int)uVar2 < *(int *)(lVar5 + 0xe0)) {
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
                                   (*(longlong *)(lVar5 + 0xd8) + (longlong)(int)uVar2 * 8) + 0x40))
      ;
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

// execGetCurrentSegmentState @ 14dd4fe30

void __cdecl
UMoviePipelineBlueprintLibrary::execGetCurrentSegmentState
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
    iVar1 = *(int *)(local_res10 + 0xec);
    if (iVar1 < *(int *)(local_res10 + 0xe0)) {
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
           *(undefined1 *)(*(longlong *)(*(longlong *)(lVar4 + 0xd8) + (longlong)iVar1 * 8) + 0xcc);
      return;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetCurrentSegmentWorkMetrics @ 14dd4ff30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UMoviePipelineBlueprintLibrary::execGetCurrentSegmentWorkMetrics
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  longlong local_res10;
  FMoviePipelineSegmentWorkMetrics local_38;
  
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
    iVar1 = *(int *)(local_res10 + 0xec);
    if (iVar1 < *(int *)(local_res10 + 0xe0)) {
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
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0xd8) + (longlong)iVar1 * 8);
      ::FString::FString(&local_38.SegmentName,(FString *)(lVar3 + 0x130));
      local_38._16_8_ = *(undefined8 *)(lVar3 + 0x140);
      local_38._24_8_ = *(undefined8 *)(lVar3 + 0x148);
      local_38._32_8_ = *(undefined8 *)(lVar3 + 0x150);
      goto LAB_14dd50068;
    }
  }
  local_38.SegmentName.Data.ArrayNum = ___xmm_ffffffffffffffff0000000000000000;
  local_38.SegmentName.Data.ArrayMax = _UNK_15076cb64;
  local_38.OutputFrameIndex = _UNK_15076cb68;
  local_38.TotalOutputFrameCount = _UNK_15076cb6c;
  local_38.SegmentName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.OutputSubSampleIndex = ___xmm_ffffffffffffffffffffffffffffffff;
  local_38.TotalSubSampleCount = _UNK_15060db24;
  local_38.EngineWarmUpFrameIndex = _UNK_15060db28;
  local_38.TotalEngineWarmUpFrameCount = _UNK_15060db2c;
LAB_14dd50068:
  FMoviePipelineSegmentWorkMetrics::operator=(param_3,&local_38);
  if (local_38.SegmentName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.SegmentName.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetCurrentSequence @ 14dd500a0

void __cdecl
UMoviePipelineBlueprintLibrary::execGetCurrentSequence
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
    *(undefined8 *)param_3 = *(undefined8 *)(local_res10[0] + 0xb8);
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetCurrentShotFrameNumber @ 14dd50140

void __cdecl
UMoviePipelineBlueprintLibrary::execGetCurrentShotFrameNumber
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FFrameRate FVar2;
  FFrameRate local_res10 [2];
  FTimecode local_28;
  
  local_res10[0].Numerator = 0;
  local_res10[0].Denominator = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10[0] != (FFrameRate)0x0) {
    UMoviePipelinePrimaryConfig::GetEffectiveFrameRate
              (*(UMoviePipelinePrimaryConfig **)
                (*(longlong *)((longlong)local_res10[0] + 0x330) + 0x100),
               (ULevelSequence *)(local_res10 + 1));
    local_28._0_8_ = *(undefined8 *)((longlong)FVar2 + 0x1fc);
    local_28._8_8_ = *(undefined8 *)((longlong)FVar2 + 0x204);
    local_28._16_8_ = *(undefined8 *)((longlong)FVar2 + 0x20c);
    FTimecode::ToFrameNumber(&local_28,local_res10);
    *(int *)param_3 = local_res10[0].Numerator;
    return;
  }
  *(undefined4 *)param_3 = 0xffffffff;
  return;
}

// execGetCurrentShotTimecode @ 14dd50240

void __cdecl
UMoviePipelineBlueprintLibrary::execGetCurrentShotTimecode
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong local_res10;
  uint uStack_14;
  
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
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uStack_14 = uStack_14 & 0xffffff00;
    lVar2 = (ulonglong)uStack_14 << 0x20;
  }
  else {
    uVar3 = *(undefined4 *)(local_res10 + 0x1fc);
    uVar4 = *(undefined4 *)(local_res10 + 0x200);
    uVar5 = *(undefined4 *)(local_res10 + 0x204);
    uVar6 = *(undefined4 *)(local_res10 + 0x208);
    lVar2 = *(longlong *)(local_res10 + 0x20c);
  }
  *(undefined4 *)param_3 = uVar3;
  *(undefined4 *)((longlong)param_3 + 4) = uVar4;
  *(undefined4 *)((longlong)param_3 + 8) = uVar5;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar6;
  *(longlong *)((longlong)param_3 + 0x10) = lVar2;
  return;
}

// execGetCurrentVersionNumber @ 14dd50300

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMoviePipelineBlueprintLibrary::execGetCurrentVersionNumber
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
    uVar1 = *(uint *)(local_res10[0] + 0xec);
    if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(local_res10[0] + 0xe0))) {
      uVar7 = 0;
      if ((int)uVar1 < *(int *)(local_res10[0] + 0xe0)) {
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
            (*(longlong *)(*(longlong *)(lVar4 + 0xd8) + (longlong)(int)uVar1 * 8) + 0x164);
      return;
    }
    local_res10[2] = 0;
    pwVar6 = L"No shot is currently active to get the version number from.";
  }
  FFrame::KismetExecutionMessage(pwVar6,Error,(FName)0x0);
  *(undefined4 *)param_3 = 0;
  return;
}

// execGetDesiredOutputResolution @ 14dd50430

void __cdecl
UMoviePipelineBlueprintLibrary::execGetDesiredOutputResolution
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  UMoviePipelineOutputSetting *pUVar4;
  UMoviePipelineConfigBase *local_res10 [3];
  
  local_res10[0] = (UMoviePipelineConfigBase *)0x0;
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
  if (local_res10[0] != (UMoviePipelineConfigBase *)0x0) {
    pUVar4 = UMoviePipelineConfigBase::FindSetting<UMoviePipelineOutputSetting>
                       (local_res10[0],false);
    if (pUVar4 == (UMoviePipelineOutputSetting *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutputSetting",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineBlueprintLibrary.cpp"
                         ,0x39d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(TIntPoint<int>_u_0 *)param_3 = (pUVar4->OutputResolution).field0_0x0;
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetEffectiveOutputResolution @ 14dd50500

void __cdecl
UMoviePipelineBlueprintLibrary::execGetEffectiveOutputResolution
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  UMoviePipelineConfigBase *this;
  code *pcVar4;
  longlong lVar5;
  UMoviePipelineConfigBase *this_00;
  bool bVar6;
  char cVar7;
  UMoviePipelineOutputSetting *pUVar8;
  UClass *pUVar9;
  UMoviePipelineSetting *pUVar10;
  UClass *pUVar11;
  char *pcVar12;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar13;
  undefined4 local_res10 [2];
  longlong local_res18;
  UMoviePipelineConfigBase *local_res20;
  UClass *local_58;
  UClass *local_50;
  TIntPoint<int>_u_0 local_48;
  undefined8 local_40;
  
  local_res20 = (UMoviePipelineConfigBase *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  this_00 = local_res20;
  lVar5 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res20 == (UMoviePipelineConfigBase *)0x0) || (local_res18 == 0)) {
    *(undefined8 *)param_3 = 0;
    return;
  }
  pUVar8 = UMoviePipelineConfigBase::FindSetting<UMoviePipelineOutputSetting>(local_res20,false);
  if ((pUVar8 == (UMoviePipelineOutputSetting *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutputSetting",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineBlueprintLibrary.cpp"
                         ,0x39d,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_48 = (pUVar8->OutputResolution).field0_0x0;
  pUVar9 = UMoviePipelineCameraSetting::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  this = *(UMoviePipelineConfigBase **)(lVar5 + 0x180);
  if (this == (UMoviePipelineConfigBase *)0x0) {
LAB_14dd50727:
    local_50 = pUVar9;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    pUVar10 = UMoviePipelineConfigBase::FindSettingByClass
                        (this_00,(TSubclassOf<UMoviePipelineSetting>)&local_50,false,false);
    if ((pUVar10 != (UMoviePipelineSetting *)0x0) &&
       (cVar7 = (**(code **)(pUVar10->_padding_ + 0x328))(pUVar10), cVar7 != '\0'))
    goto LAB_14dd507ad;
    if ((pUVar9 == (UClass *)0x0) ||
       (pUVar11 = Z_Construct_UClass_UMoviePipelineSetting_NoRegister(), pUVar11 == (UClass *)0x0))
    {
LAB_14dd5079b:
      pUVar9 = (UClass *)0x0;
    }
    else {
      iVar2 = (int)pUVar11->_padding_;
      if (((int)pUVar9->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar11->_padding_)) {
LAB_14dd50795:
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
LAB_14dd50797:
      if (!bVar6) goto LAB_14dd5079b;
    }
    pUVar10 = UClass::GetDefaultObject<UMoviePipelineSetting>(pUVar9);
    if (pUVar10 != (UMoviePipelineSetting *)0x0) goto LAB_14dd507ad;
  }
  else {
    local_58 = pUVar9;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    pUVar10 = UMoviePipelineConfigBase::FindSettingByClass
                        (this,(TSubclassOf<UMoviePipelineSetting>)&local_58,false,false);
    if (pUVar10 == (UMoviePipelineSetting *)0x0) goto LAB_14dd50727;
    cVar7 = (**(code **)(pUVar10->_padding_ + 0x328))(pUVar10);
    if (cVar7 == '\0') {
      if ((pUVar9 != (UClass *)0x0) &&
         (pUVar11 = Z_Construct_UClass_UMoviePipelineSetting_NoRegister(), pUVar11 != (UClass *)0x0)
         ) {
        iVar2 = (int)pUVar11->_padding_;
        if (((int)pUVar9->_padding_ < iVar2) ||
           ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar2 * 8) !=
            &pUVar11->_padding_)) goto LAB_14dd50795;
        bVar6 = true;
        goto LAB_14dd50797;
      }
      goto LAB_14dd5079b;
    }
LAB_14dd507ad:
    pUVar9 = UMoviePipelineCameraSetting::StaticClass();
    pcVar12 = (char *)pUVar10->_padding_;
    iVar2 = (int)pUVar9->_padding_;
    if ((iVar2 <= (((TIntPoint<int> *)((longlong)pcVar12 + 0x38))->field0_0x0)._s_0.X) &&
       (fVar13 = extraout_XMM0_Da,
       (longlong *)
       *(undefined1 **)
        ((longlong)*(TIntPoint<int>_u_0 *)((longlong)pcVar12 + 0x30) + (longlong)iVar2 * 8) ==
       &pUVar9->_padding_)) goto LAB_14dd507f8;
  }
  pcVar12 = 
  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineBlueprintLibrary.cpp"
  ;
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("CameraSettings",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineBlueprintLibrary.cpp"
                     ,0x3ab,L"");
  fVar13 = extraout_XMM0_Da_00;
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14dd507f8:
  UE::MoviePipeline::ScaleResolutionByOverscan(fVar13,(TIntPoint<int> *)pcVar12);
  *(undefined8 *)param_3 = local_40;
  return;
}

// execGetEstimatedTimeRemaining @ 14dd50850

void __cdecl
UMoviePipelineBlueprintLibrary::execGetEstimatedTimeRemaining
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  FProperty *pFVar4;
  FDateTime FVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 local_res10 [8];
  longlong local_res18;
  longlong local_res20;
  
  iVar8 = 0;
  local_res20 = 0;
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
  lVar6 = local_res20;
  plVar9 = &local_res18;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar9 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 == 0) {
    *plVar9 = 0;
    *(undefined1 *)param_3 = 0;
    return;
  }
  plVar7 = *(longlong **)(local_res20 + 0xd8);
  iVar2 = *(int *)(local_res20 + 0xe0);
  iVar3 = *(int *)(local_res20 + 0xf8);
  plVar1 = plVar7 + iVar2;
  while( true ) {
    if (*(int *)(lVar6 + 0xe0) != iVar2) {
      `TCheckedPointerIterator<UMoviePipelineExecutorShot_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (plVar7 == plVar1) break;
    iVar8 = iVar8 + *(int *)(*plVar7 + 0x144);
    plVar7 = plVar7 + 1;
  }
  if ((0 < iVar3) && (0 < iVar8)) {
    FVar5 = FDateTime::UtcNow();
    lVar6 = *(longlong *)FVar5.Ticks - *(longlong *)(lVar6 + 0xf0);
    *plVar9 = (longlong)((float)lVar6 / ((float)iVar3 / (float)iVar8)) - lVar6;
    *(undefined1 *)param_3 = 1;
    return;
  }
  *plVar9 = 0;
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetJobAuthor @ 14dd50ad0

void __cdecl
UMoviePipelineBlueprintLibrary::execGetJobAuthor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString *pFVar2;
  longlong local_res10;
  FText local_28;
  FString local_18;
  
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
    FText::FText(&local_28);
  }
  else {
    pFVar2 = UE::MoviePipeline::GetJobAuthor
                       (&local_18,*(UMoviePipelineExecutorJob **)(local_res10 + 0x330));
    FText::FromString(&local_28,pFVar2);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  FText::operator=(param_3,&local_28);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return;
}

// execGetJobInitializationTime @ 14dd50bb0

void __cdecl
UMoviePipelineBlueprintLibrary::execGetJobInitializationTime
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
    *(undefined8 *)param_3 = *(undefined8 *)(local_res10[0] + 0xf0);
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetJobName @ 14dd50c50

void __cdecl
UMoviePipelineBlueprintLibrary::execGetJobName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong local_res10;
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
    FText::FText(&local_18);
  }
  else {
    FText::FromString(&local_18,(FString *)(*(longlong *)(local_res10 + 0x330) + 0x28));
  }
  FText::operator=(param_3,&local_18);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execGetMapPackageName @ 14dd50d20

void __cdecl
UMoviePipelineBlueprintLibrary::execGetMapPackageName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString *pFVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  bool bVar7;
  longlong local_res10;
  FName local_res18;
  FString local_58;
  FString local_48;
  undefined1 local_38 [16];
  
  pFVar5 = (FScriptContainerElement *)0x0;
  iVar4 = 0;
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
  pFVar3 = pFVar5;
  if (local_res10 == 0) {
    iVar6 = 0;
  }
  else {
    local_res18 = *(FName *)(local_res10 + 0x58);
    bVar7 = local_res18 != (FName)0x0;
    if (bVar7) {
      pFVar2 = ::FName::ToString(&local_res18,&local_48);
      pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    }
    else {
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      pFVar2 = &local_58;
    }
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar4 = (pFVar2->Data).ArrayNum;
    iVar6 = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
    if (bVar7) {
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    if ((!bVar7) && (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (param_3 != local_38) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = pFVar3;
    *(int *)((longlong)param_3 + 8) = iVar4;
    *(int *)((longlong)param_3 + 0xc) = iVar6;
    pFVar3 = pFVar5;
  }
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// execGetMoviePipelineEngineChangelistLabel @ 14dd510a0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UMoviePipelineBlueprintLibrary::execGetMoviePipelineEngineChangelistLabel
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FText *pFVar2;
  UMoviePipeline *local_res10;
  FText local_18;
  
  local_res10 = (UMoviePipeline *)0x0;
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
  pFVar2 = GetMoviePipelineEngineChangelistLabel(&local_18,local_res10);
  FText::operator=(param_3,pFVar2);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execGetOverallOutputFrames @ 14dd51150

void __cdecl
UMoviePipelineBlueprintLibrary::execGetOverallOutputFrames
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  int iVar2;
  uchar *puVar3;
  FProperty *pFVar4;
  longlong lVar5;
  longlong *plVar6;
  int *piVar7;
  uchar *puVar8;
  undefined1 local_res10 [8];
  uchar local_res20 [8];
  int local_28 [2];
  longlong local_20;
  
  local_20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_20,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_20);
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
  local_28[0] = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  puVar8 = local_res20;
  if (puVar3 != (uchar *)0x0) {
    puVar8 = puVar3;
  }
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar4 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar4->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar4);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  lVar5 = local_20;
  piVar7 = local_28;
  if ((int *)param_2->MostRecentPropertyAddress != (int *)0x0) {
    piVar7 = (int *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar8[0] = '\0';
  puVar8[1] = '\0';
  puVar8[2] = '\0';
  puVar8[3] = '\0';
  *piVar7 = 0;
  if (lVar5 != 0) {
    *(undefined4 *)puVar8 = *(undefined4 *)(lVar5 + 0xf8);
    plVar6 = *(longlong **)(lVar5 + 0xd8);
    iVar2 = *(int *)(lVar5 + 0xe0);
    plVar1 = plVar6 + iVar2;
    while( true ) {
      if (*(int *)(lVar5 + 0xe0) != iVar2) {
        `TCheckedPointerIterator<UMoviePipelineExecutorShot_*_const,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (plVar6 == plVar1) break;
      *piVar7 = *piVar7 + *(int *)(*plVar6 + 0x144);
      plVar6 = plVar6 + 1;
    }
  }
  return;
}

// execGetOverallSegmentCounts @ 14dd512d0

void __cdecl
UMoviePipelineBlueprintLibrary::execGetOverallSegmentCounts
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
  *(undefined4 *)puVar3 = *(undefined4 *)(local_18[0] + 0xec);
  *(undefined4 *)puVar2 = *(undefined4 *)(local_18[0] + 0xe0);
  return;
}

// execGetOverscanCropRectangle @ 14dd51410

void __cdecl
UMoviePipelineBlueprintLibrary::execGetOverscanCropRectangle
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  TIntPoint<int>_u_0_s_0 TVar3;
  UMoviePipelineConfigBase *this;
  code *pcVar4;
  longlong lVar5;
  UMoviePipelineConfigBase *this_00;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  UMoviePipelineOutputSetting *pUVar10;
  UClass *pUVar11;
  UMoviePipelineSetting *pUVar12;
  UClass *pUVar13;
  char *pcVar14;
  int iVar15;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar16;
  undefined4 local_res10 [3];
  int iStackX_1c;
  undefined8 local_res20;
  undefined8 local_88;
  longlong local_80;
  UMoviePipelineConfigBase *local_78;
  UClass *local_70;
  UClass *local_68;
  TIntPoint<int>_u_0 local_60;
  undefined8 local_58;
  TIntPoint<int>_u_0_s_0 local_50;
  
  local_78 = (UMoviePipelineConfigBase *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_80 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_80,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_80);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  this_00 = local_78;
  lVar5 = local_80;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_78 == (UMoviePipelineConfigBase *)0x0) || (local_80 == 0)) {
    *(undefined8 *)param_3 = 0;
    local_88 = 0;
    goto LAB_14dd517df;
  }
  pUVar10 = UMoviePipelineConfigBase::FindSetting<UMoviePipelineOutputSetting>(local_78,false);
  if ((pUVar10 == (UMoviePipelineOutputSetting *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutputSetting",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineBlueprintLibrary.cpp"
                         ,0x39d,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  TVar3 = (pUVar10->OutputResolution).field0_0x0._s_0;
  local_50 = TVar3;
  pUVar10 = UMoviePipelineConfigBase::FindSetting<UMoviePipelineOutputSetting>(this_00,false);
  if ((pUVar10 == (UMoviePipelineOutputSetting *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutputSetting",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineBlueprintLibrary.cpp"
                         ,0x39d,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_60 = (pUVar10->OutputResolution).field0_0x0;
  pUVar11 = UMoviePipelineCameraSetting::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  this = *(UMoviePipelineConfigBase **)(lVar5 + 0x180);
  if (this == (UMoviePipelineConfigBase *)0x0) {
LAB_14dd51662:
    local_68 = pUVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    pUVar12 = UMoviePipelineConfigBase::FindSettingByClass
                        (this_00,(TSubclassOf<UMoviePipelineSetting>)&local_68,false,false);
    if ((pUVar12 != (UMoviePipelineSetting *)0x0) &&
       (cVar7 = (**(code **)(pUVar12->_padding_ + 0x328))(pUVar12), cVar7 != '\0'))
    goto LAB_14dd516e8;
    if ((pUVar11 == (UClass *)0x0) ||
       (pUVar13 = Z_Construct_UClass_UMoviePipelineSetting_NoRegister(), pUVar13 == (UClass *)0x0))
    {
LAB_14dd516d6:
      pUVar11 = (UClass *)0x0;
    }
    else {
      iVar8 = (int)pUVar13->_padding_;
      if (((int)pUVar11->_padding_ < iVar8) ||
         ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar8 * 8) !=
          &pUVar13->_padding_)) {
LAB_14dd516d0:
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
LAB_14dd516d2:
      if (!bVar6) goto LAB_14dd516d6;
    }
    pUVar12 = UClass::GetDefaultObject<UMoviePipelineSetting>(pUVar11);
    if (pUVar12 != (UMoviePipelineSetting *)0x0) goto LAB_14dd516e8;
LAB_14dd5170b:
    pcVar14 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineBlueprintLibrary.cpp"
    ;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CameraSettings",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineBlueprintLibrary.cpp"
                       ,0x3ab,L"");
    fVar16 = extraout_XMM0_Da_00;
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    local_70 = pUVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar11);
    }
    pUVar12 = UMoviePipelineConfigBase::FindSettingByClass
                        (this,(TSubclassOf<UMoviePipelineSetting>)&local_70,false,false);
    if (pUVar12 == (UMoviePipelineSetting *)0x0) goto LAB_14dd51662;
    cVar7 = (**(code **)(pUVar12->_padding_ + 0x328))(pUVar12);
    if (cVar7 == '\0') {
      if ((pUVar11 != (UClass *)0x0) &&
         (pUVar13 = Z_Construct_UClass_UMoviePipelineSetting_NoRegister(), pUVar13 != (UClass *)0x0)
         ) {
        iVar8 = (int)pUVar13->_padding_;
        if (((int)pUVar11->_padding_ < iVar8) ||
           ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar8 * 8) !=
            &pUVar13->_padding_)) goto LAB_14dd516d0;
        bVar6 = true;
        goto LAB_14dd516d2;
      }
      goto LAB_14dd516d6;
    }
LAB_14dd516e8:
    pUVar11 = UMoviePipelineCameraSetting::StaticClass();
    pcVar14 = (char *)pUVar12->_padding_;
    iVar8 = (int)pUVar11->_padding_;
    if (((((TIntPoint<int> *)((longlong)pcVar14 + 0x38))->field0_0x0)._s_0.X < iVar8) ||
       (fVar16 = extraout_XMM0_Da,
       (longlong *)
       *(undefined1 **)
        ((longlong)*(TIntPoint<int>_u_0 *)((longlong)pcVar14 + 0x30) + (longlong)iVar8 * 8) !=
       &pUVar11->_padding_)) goto LAB_14dd5170b;
  }
  UE::MoviePipeline::ScaleResolutionByOverscan(fVar16,(TIntPoint<int> *)pcVar14);
  iVar15 = TVar3.X;
  iStackX_1c = (int)((ulonglong)local_58 >> 0x20);
  iVar8 = ((int)local_58 - iVar15) / 2;
  iVar9 = (iStackX_1c - local_50.Y) / 2;
  local_res20 = CONCAT44(iVar9,iVar8);
  local_88 = CONCAT44(iVar9 + local_50.Y,iVar8 + iVar15);
  *(undefined8 *)param_3 = local_res20;
LAB_14dd517df:
  *(undefined8 *)((longlong)param_3 + 8) = local_88;
  return;
}

// execGetOverscannedResolution @ 14dd51800

void __cdecl
UMoviePipelineBlueprintLibrary::execGetOverscannedResolution
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  UMoviePipelineConfigBase *this;
  code *pcVar4;
  longlong lVar5;
  UMoviePipelineConfigBase *this_00;
  bool bVar6;
  char cVar7;
  UMoviePipelineOutputSetting *pUVar8;
  UClass *pUVar9;
  UMoviePipelineSetting *pUVar10;
  UClass *pUVar11;
  char *pcVar12;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar13;
  undefined4 local_res10 [2];
  longlong local_res18;
  UMoviePipelineConfigBase *local_res20;
  UClass *local_48;
  UClass *local_40;
  TIntPoint<int>_u_0 local_38;
  undefined8 local_30;
  
  local_res20 = (UMoviePipelineConfigBase *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  this_00 = local_res20;
  lVar5 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res20 == (UMoviePipelineConfigBase *)0x0) || (local_res18 == 0)) {
    *(undefined8 *)param_3 = 0;
    return;
  }
  pUVar8 = UMoviePipelineConfigBase::FindSetting<UMoviePipelineOutputSetting>(local_res20,false);
  if ((pUVar8 == (UMoviePipelineOutputSetting *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutputSetting",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineBlueprintLibrary.cpp"
                         ,0x39d,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_38 = (pUVar8->OutputResolution).field0_0x0;
  pUVar9 = UMoviePipelineCameraSetting::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  this = *(UMoviePipelineConfigBase **)(lVar5 + 0x180);
  if (this == (UMoviePipelineConfigBase *)0x0) {
LAB_14dd51a1c:
    local_40 = pUVar9;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    pUVar10 = UMoviePipelineConfigBase::FindSettingByClass
                        (this_00,(TSubclassOf<UMoviePipelineSetting>)&local_40,false,false);
    if ((pUVar10 != (UMoviePipelineSetting *)0x0) &&
       (cVar7 = (**(code **)(pUVar10->_padding_ + 0x328))(pUVar10), cVar7 != '\0'))
    goto LAB_14dd51aa2;
    if ((pUVar9 == (UClass *)0x0) ||
       (pUVar11 = Z_Construct_UClass_UMoviePipelineSetting_NoRegister(), pUVar11 == (UClass *)0x0))
    {
LAB_14dd51a90:
      pUVar9 = (UClass *)0x0;
    }
    else {
      iVar2 = (int)pUVar11->_padding_;
      if (((int)pUVar9->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar11->_padding_)) {
LAB_14dd51a8a:
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
LAB_14dd51a8c:
      if (!bVar6) goto LAB_14dd51a90;
    }
    pUVar10 = UClass::GetDefaultObject<UMoviePipelineSetting>(pUVar9);
    if (pUVar10 != (UMoviePipelineSetting *)0x0) goto LAB_14dd51aa2;
  }
  else {
    local_48 = pUVar9;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    pUVar10 = UMoviePipelineConfigBase::FindSettingByClass
                        (this,(TSubclassOf<UMoviePipelineSetting>)&local_48,false,false);
    if (pUVar10 == (UMoviePipelineSetting *)0x0) goto LAB_14dd51a1c;
    cVar7 = (**(code **)(pUVar10->_padding_ + 0x328))(pUVar10);
    if (cVar7 == '\0') {
      if ((pUVar9 != (UClass *)0x0) &&
         (pUVar11 = Z_Construct_UClass_UMoviePipelineSetting_NoRegister(), pUVar11 != (UClass *)0x0)
         ) {
        iVar2 = (int)pUVar11->_padding_;
        if (((int)pUVar9->_padding_ < iVar2) ||
           ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar2 * 8) !=
            &pUVar11->_padding_)) goto LAB_14dd51a8a;
        bVar6 = true;
        goto LAB_14dd51a8c;
      }
      goto LAB_14dd51a90;
    }
LAB_14dd51aa2:
    pUVar9 = UMoviePipelineCameraSetting::StaticClass();
    pcVar12 = (char *)pUVar10->_padding_;
    iVar2 = (int)pUVar9->_padding_;
    if ((iVar2 <= (((TIntPoint<int> *)((longlong)pcVar12 + 0x38))->field0_0x0)._s_0.X) &&
       (fVar13 = extraout_XMM0_Da,
       (longlong *)
       *(undefined1 **)
        ((longlong)*(TIntPoint<int>_u_0 *)((longlong)pcVar12 + 0x30) + (longlong)iVar2 * 8) ==
       &pUVar9->_padding_)) goto LAB_14dd51aed;
  }
  pcVar12 = 
  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineBlueprintLibrary.cpp"
  ;
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("CameraSettings",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineBlueprintLibrary.cpp"
                     ,0x3ab,L"");
  fVar13 = extraout_XMM0_Da_00;
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14dd51aed:
  UE::MoviePipeline::ScaleResolutionByOverscan(fVar13,(TIntPoint<int> *)pcVar12);
  *(undefined8 *)param_3 = local_30;
  return;
}

// execGetPipelineState @ 14dd51c50

void __cdecl
UMoviePipelineBlueprintLibrary::execGetPipelineState(UObject *param_1,FFrame *param_2,void *param_3)

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

// execGetRootFrameNumber @ 14dd51d30

void __cdecl
UMoviePipelineBlueprintLibrary::execGetRootFrameNumber
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FFrameRate FVar2;
  longlong lVar3;
  FFrameRate local_res10 [2];
  FTimecode local_28;
  
  local_res10[0].Numerator = 0;
  local_res10[0].Denominator = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((local_res10[0] != (FFrameRate)0x0) &&
     (*(longlong **)((longlong)local_res10[0] + 0xb8) != (longlong *)0x0)) {
    lVar3 = (**(code **)(**(longlong **)((longlong)local_res10[0] + 0xb8) + 0x2f8))();
    if (lVar3 != 0) {
      UMoviePipelinePrimaryConfig::GetEffectiveFrameRate
                (*(UMoviePipelinePrimaryConfig **)(*(longlong *)((longlong)FVar2 + 0x330) + 0x100),
                 (ULevelSequence *)(local_res10 + 1));
      local_28._0_8_ = *(undefined8 *)((longlong)FVar2 + 0x170);
      local_28._8_8_ = *(undefined8 *)((longlong)FVar2 + 0x178);
      local_28._16_8_ = *(undefined8 *)((longlong)FVar2 + 0x180);
      FTimecode::ToFrameNumber(&local_28,local_res10);
      *(int *)param_3 = local_res10[0].Numerator;
      return;
    }
  }
  *(undefined4 *)param_3 = 0xffffffff;
  return;
}

// execGetRootTimecode @ 14dd51e40

void __cdecl
UMoviePipelineBlueprintLibrary::execGetRootTimecode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong local_res10;
  uint uStack_14;
  
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
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uStack_14 = uStack_14 & 0xffffff00;
    lVar2 = (ulonglong)uStack_14 << 0x20;
  }
  else {
    uVar3 = *(undefined4 *)(local_res10 + 0x170);
    uVar4 = *(undefined4 *)(local_res10 + 0x174);
    uVar5 = *(undefined4 *)(local_res10 + 0x178);
    uVar6 = *(undefined4 *)(local_res10 + 0x17c);
    lVar2 = *(longlong *)(local_res10 + 0x180);
  }
  *(undefined4 *)param_3 = uVar3;
  *(undefined4 *)((longlong)param_3 + 4) = uVar4;
  *(undefined4 *)((longlong)param_3 + 8) = uVar5;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar6;
  *(longlong *)((longlong)param_3 + 0x10) = lVar2;
  return;
}

// execLoadManifestFileFromString @ 14dd55b00

void __cdecl
UMoviePipelineBlueprintLibrary::execLoadManifestFileFromString
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMoviePipelineQueue *pUVar2;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = LoadManifestFileFromString(&local_18);
  *(UMoviePipelineQueue **)param_3 = pUVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execResolveFilenameFormatArguments @ 14dd56460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UMoviePipelineBlueprintLibrary::execResolveFilenameFormatArguments
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  uint uVar3;
  FMoviePipelineFilenameResolveParams *pFVar4;
  FString *pFVar5;
  FMoviePipelineFormatArgs *pFVar6;
  undefined1 auStackY_248 [32];
  FString local_218;
  FString local_208;
  undefined1 local_1f8 [32];
  void *local_1d8;
  undefined4 local_1d0;
  uint local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  void *local_1b8;
  undefined4 local_1b0;
  undefined1 local_1a8 [32];
  void *local_188;
  undefined4 local_180;
  uint local_17c;
  undefined4 local_178;
  undefined4 local_174;
  void *local_168;
  undefined4 local_160;
  TObjectPtr<UMoviePipelineExecutorJob>_u_0 local_158;
  undefined1 local_148 [72];
  undefined1 local_100 [32];
  void *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  void *local_c0;
  undefined4 local_b8;
  undefined1 local_b0 [32];
  void *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  void *local_70;
  undefined4 local_68;
  FDateTime local_60;
  FTimespan local_58;
  int local_50;
  TObjectPtr<UMoviePipelineExecutorJob>_u_0 local_48;
  int local_40;
  TObjectPtr<UMoviePipelineExecutorShot>_u_0 local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_248;
  local_208.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_208.Data.ArrayNum = 0;
  local_208.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_208,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_208);
  }
  local_148._16_8_ = (FScriptContainerElement *)0x0;
  local_148._0_4_ = 0;
  local_148._4_4_ = 0;
  local_148._8_4_ = 0;
  local_148._12_4_ = 0;
  local_d8 = ___xmm_00000000ffffffff0000008000000000;
  uStack_d0 = _UNK_150631d98;
  local_88 = ___xmm_00000000ffffffff0000008000000000;
  uStack_80 = _UNK_150631d98;
  local_148._24_4_ = 0;
  local_148._28_4_ = 0;
  local_148._32_8_ = (FScriptContainerElement *)0x0;
  local_148._40_4_ = 0;
  local_148._44_4_ = 0;
  local_148._48_4_ = 0;
  local_148[0x34] = false;
  local_148._56_8_ = (FScriptContainerElement *)0x0;
  local_148._64_4_ = 0;
  local_148._68_4_ = 0;
  local_100._0_8_ = (FScriptContainerElement *)0x0;
  local_100._8_8_ = 0;
  local_e0 = (void *)0x0;
  local_c0 = (void *)0x0;
  local_b8 = 0;
  local_b0._0_8_ = (FScriptContainerElement *)0x0;
  local_b0._8_8_ = 0;
  local_90 = (void *)0x0;
  local_70 = (void *)0x0;
  local_68 = 0;
  local_60.Ticks = 0;
  local_58.Ticks = 0;
  local_50 = 0;
  local_48.DebugPtr = (UMoviePipelineExecutorJob *)0x0;
  local_40 = -1;
  local_38.DebugPtr = (UMoviePipelineExecutorShot *)0x0;
  local_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,(FMoviePipelineFilenameResolveParams *)local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,(FMoviePipelineFilenameResolveParams *)local_148);
  }
  local_218.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_218.Data.ArrayNum = 0;
  local_218.Data.ArrayMax = 0;
  pFVar4 = (FMoviePipelineFilenameResolveParams *)local_148;
  if ((FMoviePipelineFilenameResolveParams *)param_2->MostRecentPropertyAddress !=
      (FMoviePipelineFilenameResolveParams *)0x0) {
    pFVar4 = (FMoviePipelineFilenameResolveParams *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_218,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_218);
  }
  local_1f8._0_8_ = (FScriptContainerElement *)0x0;
  local_1f8._8_8_ = 0;
  pFVar5 = &local_218;
  if ((FString *)param_2->MostRecentPropertyAddress != (FString *)0x0) {
    pFVar5 = (FString *)param_2->MostRecentPropertyAddress;
  }
  local_1d8 = (void *)0x0;
  local_1d0 = 0;
  local_1cc = 0x80;
  local_1c8 = 0xffffffff;
  local_1c4 = 0;
  local_1b8 = (void *)0x0;
  local_1b0 = 0;
  local_1a8._0_8_ = (FScriptContainerElement *)0x0;
  local_1a8._8_8_ = 0;
  local_188 = (void *)0x0;
  local_180 = 0;
  local_17c = 0x80;
  local_178 = 0xffffffff;
  local_174 = 0;
  local_168 = (void *)0x0;
  local_160 = 0;
  local_158.DebugPtr = (UMoviePipelineExecutorJob *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_1f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_1f8);
  }
  pFVar6 = (FMoviePipelineFormatArgs *)local_1f8;
  if ((FMoviePipelineFormatArgs *)param_2->MostRecentPropertyAddress !=
      (FMoviePipelineFormatArgs *)0x0) {
    pFVar6 = (FMoviePipelineFormatArgs *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ResolveFilenameFormatArguments(&local_208,pFVar4,pFVar5,pFVar6);
  local_160 = 0;
  if (local_168 != (void *)0x0) {
    FMemory::Free(local_168);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_1a8,0,local_1a8._8_4_);
  iVar2 = SUB84(local_1a8._8_8_,4);
  local_1a8._8_8_ = local_1a8._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_1a8,0,(int *)(local_1a8 + 0xc));
  }
  local_178 = 0xffffffff;
  local_174 = 0;
  local_180 = 0;
  if (0x80 < local_17c) {
    local_17c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_1a8 + 0x10),0);
  }
  if (local_188 != (void *)0x0) {
    FMemory::Free(local_188);
  }
  if ((FScriptContainerElement *)local_1a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1a8._0_8_);
  }
  local_1b0 = 0;
  if (local_1b8 != (void *)0x0) {
    FMemory::Free(local_1b8);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_1f8,0,local_1f8._8_4_);
  iVar2 = SUB84(local_1f8._8_8_,4);
  local_1f8._8_8_ = local_1f8._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_1f8,0,(int *)(local_1f8 + 0xc));
  }
  local_1c8 = 0xffffffff;
  local_1c4 = 0;
  local_1d0 = 0;
  if (0x80 < local_1cc) {
    local_1cc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_1f8 + 0x10),0);
  }
  if (local_1d8 != (void *)0x0) {
    FMemory::Free(local_1d8);
  }
  if ((FScriptContainerElement *)local_1f8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1f8._0_8_);
  }
  if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  local_68 = 0;
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_b0,0,local_b0._8_4_);
  iVar2 = SUB84(local_b0._8_8_,4);
  local_b0._8_8_ = local_b0._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_b0,0,(int *)(local_b0 + 0xc));
  }
  uVar3 = local_88._4_4_;
  uStack_80 = 0xffffffff;
  local_88 = (ulonglong)local_88._4_4_ << 0x20;
  if (0x80 < uVar3) {
    local_88 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_b0 + 0x10),0);
  }
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  if ((FScriptContainerElement *)local_b0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_b0._0_8_);
  }
  local_b8 = 0;
  if (local_c0 != (void *)0x0) {
    FMemory::Free(local_c0);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_100,0,local_100._8_4_);
  iVar2 = SUB84(local_100._8_8_,4);
  local_100._8_8_ = local_100._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_100,0,(int *)(local_100 + 0xc));
  }
  uVar3 = local_d8._4_4_;
  uStack_d0 = 0xffffffff;
  local_d8 = (ulonglong)local_d8._4_4_ << 0x20;
  if (0x80 < uVar3) {
    local_d8 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_100 + 0x10),0);
  }
  if (local_e0 != (void *)0x0) {
    FMemory::Free(local_e0);
  }
  if ((FScriptContainerElement *)local_100._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_100._0_8_);
  }
  if ((FScriptContainerElement *)local_148._56_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_148._56_8_);
  }
  if ((FScriptContainerElement *)local_148._32_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_148._32_8_);
  }
  if ((FScriptContainerElement *)local_148._16_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_148._16_8_);
  }
  if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data.AllocatorInstance.Data);
  }
  return;
}

// execResolveVersionNumber @ 14dd56a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
UMoviePipelineBlueprintLibrary::execResolveVersionNumber
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uint uVar2;
  int iVar3;
  FMoviePipelineFilenameResolveParams *pFVar4;
  bool bVar5;
  undefined1 auStackY_2a8 [32];
  int local_278 [2];
  FMoviePipelineFilenameResolveParams local_270;
  undefined1 local_148 [72];
  undefined1 local_100 [32];
  void *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  void *local_c0;
  undefined4 local_b8;
  undefined1 local_b0 [32];
  void *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  void *local_70;
  undefined4 local_68;
  FDateTime local_60;
  FTimespan local_58;
  int local_50;
  TObjectPtr<UMoviePipelineExecutorJob>_u_0 local_48;
  int local_40;
  TObjectPtr<UMoviePipelineExecutorShot>_u_0 local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  local_40 = -1;
  local_148._16_8_ = (FScriptContainerElement *)0x0;
  local_148._0_4_ = 0;
  local_148._4_4_ = 0;
  local_148._8_4_ = 0;
  local_148._12_4_ = 0;
  local_d8 = ___xmm_00000000ffffffff0000008000000000;
  uStack_d0 = _UNK_150631d98;
  local_88 = ___xmm_00000000ffffffff0000008000000000;
  uStack_80 = _UNK_150631d98;
  local_148._24_4_ = 0;
  local_148._28_4_ = 0;
  local_148._32_8_ = (FScriptContainerElement *)0x0;
  local_148._40_4_ = 0;
  local_148._44_4_ = 0;
  local_148._48_4_ = 0;
  local_148[0x34] = false;
  local_148._56_8_ = (FScriptContainerElement *)0x0;
  local_148._64_4_ = 0;
  local_148._68_4_ = 0;
  local_100._0_8_ = (FScriptContainerElement *)0x0;
  local_100._8_8_ = 0;
  local_e0 = (void *)0x0;
  local_c0 = (void *)0x0;
  local_b8 = 0;
  local_b0._0_8_ = (FScriptContainerElement *)0x0;
  local_b0._8_8_ = 0;
  local_90 = (void *)0x0;
  local_70 = (void *)0x0;
  local_68 = 0;
  local_60.Ticks = 0;
  local_58.Ticks = 0;
  local_50 = 0;
  local_48.DebugPtr = (UMoviePipelineExecutorJob *)0x0;
  local_38.DebugPtr = (UMoviePipelineExecutorShot *)0x0;
  local_30 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_148);
  }
  local_278[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_278,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_278);
  }
  bVar5 = local_278[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FMoviePipelineFilenameResolveParams::FMoviePipelineFilenameResolveParams
                     (&local_270,(FMoviePipelineFilenameResolveParams *)local_148);
  iVar3 = ResolveVersionNumber(pFVar4,bVar5);
  *(int *)param_3 = iVar3;
  local_68 = 0;
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_b0,0,local_b0._8_4_);
  iVar3 = SUB84(local_b0._8_8_,4);
  local_b0._8_8_ = local_b0._8_8_ & 0xffffffff00000000;
  if (iVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_b0,0,(int *)(local_b0 + 0xc));
  }
  uVar2 = local_88._4_4_;
  uStack_80 = 0xffffffff;
  local_88 = (ulonglong)local_88._4_4_ << 0x20;
  if (0x80 < uVar2) {
    local_88 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_b0 + 0x10),0);
  }
  if (local_90 != (void *)0x0) {
    FMemory::Free(local_90);
  }
  if ((FScriptContainerElement *)local_b0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_b0._0_8_);
  }
  local_b8 = 0;
  if (local_c0 != (void *)0x0) {
    FMemory::Free(local_c0);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_100,0,local_100._8_4_);
  iVar3 = SUB84(local_100._8_8_,4);
  local_100._8_8_ = local_100._8_8_ & 0xffffffff00000000;
  if (iVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_100,0,(int *)(local_100 + 0xc));
  }
  uVar2 = local_d8._4_4_;
  uStack_d0 = 0xffffffff;
  local_d8 = (ulonglong)local_d8._4_4_ << 0x20;
  if (0x80 < uVar2) {
    local_d8 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_100 + 0x10),0);
  }
  if (local_e0 != (void *)0x0) {
    FMemory::Free(local_e0);
  }
  if ((FScriptContainerElement *)local_100._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_100._0_8_);
  }
  if ((FScriptContainerElement *)local_148._56_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_148._56_8_);
  }
  if ((FScriptContainerElement *)local_148._32_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_148._32_8_);
  }
  if ((FScriptContainerElement *)local_148._16_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_148._16_8_);
  }
  return;
}

// execUpdateJobShotListFromSequence @ 14dd5a980

void __cdecl
UMoviePipelineBlueprintLibrary::execUpdateJobShotListFromSequence
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool *pbVar2;
  bool local_res10 [16];
  UMoviePipelineExecutorJob *local_res20;
  ULevelSequence *local_18 [2];
  
  local_18[0] = (ULevelSequence *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res20 = (UMoviePipelineExecutorJob *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = false;
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
  pbVar2 = local_res10;
  if ((bool *)param_2->MostRecentPropertyAddress != (bool *)0x0) {
    pbVar2 = (bool *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UpdateJobShotListFromSequence(local_18[0],local_res20,pbVar2);
  return;
}

// operator() @ 15058dcf0

bool __thiscall
`UMoviePipelineBlueprintLibrary::UpdateJobShotListFromSequence'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5185421485132480866>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5185421485132480866>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

