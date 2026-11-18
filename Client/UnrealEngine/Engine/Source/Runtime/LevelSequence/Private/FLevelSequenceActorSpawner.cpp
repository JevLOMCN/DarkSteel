// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LevelSequence
// Functions: 4

// CreateObjectSpawner @ 146c52040

TSharedRef<IMovieSceneObjectSpawner,1> * __cdecl
FLevelSequenceActorSpawner::CreateObjectSpawner
          (TSharedRef<IMovieSceneObjectSpawner,1> *__return_storage_ptr__)

{
  TRawPtrProxy<FLevelSequenceActorSpawner> local_res8 [4];
  
  local_res8[0].Object = ::operator_new(8);
  if (local_res8[0].Object != (FLevelSequenceActorSpawner *)0x0) {
    *local_res8[0].Object = (FLevelSequenceActorSpawner)&___7FLevelSequenceActorSpawner__6B_;
  }
  TSharedRef<IMovieSceneObjectSpawner,1>::
  TSharedRef<IMovieSceneObjectSpawner,1><FLevelSequenceActorSpawner>
            (__return_storage_ptr__,local_res8);
  return __return_storage_ptr__;
}

// DestroySpawnedObject @ 146c522c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FLevelSequenceActorSpawner::DestroySpawnedObject(FLevelSequenceActorSpawner *this,UObject *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UWorld *this_00;
  
  if (param_1 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      this_00 = AActor::GetWorld((AActor *)param_1);
      if (this_00 == (UWorld *)0x0) {
        return;
      }
      UWorld::DestroyActor(this_00,(AActor *)param_1,false,false);
      return;
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4080741611540054280>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LevelSequence\\Private\\LevelSequenceActorSpawner.cpp"
                     ,0x108,"Actor");
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// GetSupportedTemplateType @ 146c56520

UClass * __thiscall
FLevelSequenceActorSpawner::GetSupportedTemplateType(FLevelSequenceActorSpawner *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_AActor.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"Actor",&Z_Registration_Info_UClass_AActor.InnerSingleton,
               AActor::StaticRegisterNativesAActor,0x2c0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_AActor,L"Engine",InternalConstructor<AActor>,
               InternalVTableHelperCtorCaller<AActor>,aFStackX_8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AActor.InnerSingleton;
}

// SpawnObject @ 146c5b770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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

UObject * __thiscall
FLevelSequenceActorSpawner::SpawnObject
          (FLevelSequenceActorSpawner *this,FMovieSceneSpawnable *param_1,
          FMovieSceneSequenceID *param_2,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  ULevelStreaming *this_00;
  FName FVar3;
  USceneComponent *pUVar4;
  UActorComponent *this_01;
  undefined1 *puVar5;
  code *pcVar6;
  ForElementType<unsigned_int> FVar7;
  AActor *pAVar8;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar9;
  bool bVar10;
  bool bVar11;
  ENetMode EVar12;
  UClass *pUVar13;
  UObject *pUVar14;
  UWorldProxy this_02;
  FName FVar15;
  FString *pFVar16;
  TQuat<double> *pTVar17;
  AActor *pAVar18;
  UMovieSceneEntitySystemLinker *this_03;
  UMovieSceneDeferredComponentMovementSystem *this_04;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar19;
  ulonglong uVar20;
  longlong *plVar21;
  ForAnyElementType FVar22;
  int iVar23;
  UWorld *pUVar24;
  wchar_t *pwVar25;
  uint uVar26;
  FScriptContainerElement *pFVar27;
  UWorld *pUVar28;
  wchar_t *pwVar29;
  ForElementType<unsigned_int> FVar30;
  undefined1 *puVar31;
  uint uVar32;
  uint *puVar33;
  uint uVar34;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *pTVar35;
  undefined1 auStackY_388 [32];
  uint local_354;
  undefined1 local_350;
  undefined1 local_34f;
  undefined1 local_34e [6];
  ForElementType<unsigned_int> local_348;
  UWorld *local_340;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *local_338;
  ulonglong local_330;
  FMovieSceneSequenceID *local_328;
  AActor *local_320;
  FString local_318;
  undefined8 local_308;
  undefined8 local_300;
  FName local_2f8;
  undefined8 local_2f0;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_2e8;
  uint uStack_2e0;
  uint uStack_2dc;
  undefined1 *local_2d8;
  undefined4 uStack_2d0;
  uint uStack_2cc;
  uint local_2c8;
  undefined4 uStack_2c4;
  int iStack_2c0;
  undefined4 uStack_2bc;
  int local_2b8;
  int local_2b4;
  undefined1 local_2b0 [16];
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_2a0;
  int iStack_298;
  undefined4 uStack_294;
  undefined1 *local_290;
  undefined4 uStack_288;
  int iStack_284;
  int local_280;
  uint uStack_27c;
  int iStack_278;
  undefined4 uStack_274;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_270;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_268;
  undefined8 uStack_248;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_240;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_238;
  undefined8 uStack_218;
  FSharedPlaybackState *local_210;
  TReferenceControllerBase<1> *local_208;
  TRotator<double> local_200;
  undefined1 local_1e8 [24];
  FString local_1d0;
  FString local_1c0;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  double local_198;
  double dStack_190;
  undefined8 local_188;
  FString local_180;
  FString local_170;
  TQuat<double> local_158;
  undefined4 local_11c;
  undefined1 local_118 [112];
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_388;
  pAVar18 = (AActor *)(param_1->ObjectTemplate).field0_0x0.DebugPtr;
  pUVar28 = (UWorld *)0x0;
  local_338 = param_3;
  local_328 = param_2;
  if (pAVar18 == (AActor *)0x0) {
LAB_146c5b815:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_3->SharedReferenceCount).ReferenceController);
    return (UObject *)(AActor *)0x0;
  }
  pUVar13 = Z_Construct_UClass_AActor_NoRegister();
  lVar2 = pAVar18->_padding_;
  iVar23 = (int)pUVar13->_padding_;
  if ((*(int *)(lVar2 + 0x38) < iVar23) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar23 * 8) !=
      &pUVar13->_padding_)) goto LAB_146c5b815;
  if (*(int *)(lVar2 + 0xd4) < 0) {
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4080741611540054095>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\LevelSequence\\Private\\LevelSequenceActorSpawner.cpp"
                        ,0x4f,
                        "!ObjectTemplate->GetClass()->HasAnyClassFlags(CLASS_NewerVersionExists)");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      pUVar14 = (UObject *)(*pcVar6)();
      return pUVar14;
    }
    goto LAB_146c5b815;
  }
  pUVar14 = FWeakObjectPtr::Get(&(param_3->Object->WeakPlaybackContext).WeakPtr);
  this_02.World = pUVar28;
  if (pUVar14 != (UObject *)0x0) {
    this_02.World = (UWorld *)(**(code **)(*(longlong *)pUVar14 + 0x180))();
  }
  local_2f8 = param_1->LevelName;
  local_308 = 0;
  local_330 = CONCAT44(local_330._4_4_,1);
  uVar32 = 0;
  local_340 = this_02.World;
  if (local_2f8 != (FName)0x0) {
    if ((this_02.World != (UWorld *)0x0) && ((FName)(this_02.World)->_padding_ == local_2f8))
    goto LAB_146c5ba9c;
    local_300 = 0;
    if (local_2f8 != (FName)0x0) {
      ::FName::ToString(&local_2f8,&local_318);
      bVar10 = FPackageName::IsShortPackageName(&local_318);
      if (bVar10) {
        ::FString::InsertAt(&local_318,0,L'/');
      }
      uVar34 = ((this_02.World)->StreamingLevels).ArrayNum;
      uVar20 = (ulonglong)(int)uVar34;
      pFVar27 = ((this_02.World)->StreamingLevels).AllocatorInstance.Data;
      local_348 = (ForElementType<unsigned_int>)(pFVar27 + uVar20 * 8);
      pUVar24 = pUVar28;
      do {
        if (((this_02.World)->StreamingLevels).ArrayNum != (int)uVar20) {
          local_350 = 0;
          `TCheckedPointerIterator<ULevelStreaming_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_350);
        }
        if ((ForElementType<unsigned_int>)pFVar27 == local_348) {
          if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_318.Data.AllocatorInstance.Data);
          }
          break;
        }
        this_00 = *(ULevelStreaming **)pFVar27;
        if (this_00 == (ULevelStreaming *)0x0) {
LAB_146c5b974:
          bVar10 = false;
        }
        else {
          pUVar24 = (UWorld *)&DAT_00000001;
          pFVar16 = ULevelStreaming::GetWorldAssetPackageName(this_00,(FString *)(local_1e8 + 8));
          uVar26 = local_318.Data.ArrayNum - 1;
          if (local_318.Data.ArrayNum == 0) {
            uVar26 = uVar32;
          }
          FVar22.Data = (FScriptContainerElement *)L"";
          if (local_318.Data.ArrayNum != 0) {
            FVar22.Data = local_318.Data.AllocatorInstance.Data;
          }
          bVar10 = ::FString::EndsWith(pFVar16,(wchar_t *)FVar22.Data,uVar26,(Type)local_330);
          if (!bVar10) goto LAB_146c5b974;
          bVar10 = true;
        }
        if ((pUVar24 != (UWorld *)0x0) &&
           (pUVar24 = (UWorld *)0x0,
           (TReferenceControllerBase<1> *)local_1e8._8_8_ != (TReferenceControllerBase<1> *)0x0)) {
          FMemory::Free((void *)local_1e8._8_8_);
        }
        if (bVar10) goto LAB_146c5b9ac;
        pFVar27 = pFVar27 + 8;
        uVar20 = (ulonglong)uVar34;
        this_02.World = local_340;
      } while( true );
    }
    goto LAB_146c5b9f9;
  }
  goto LAB_146c5ba5b;
LAB_146c5b9ac:
  if (local_318.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_318.Data.AllocatorInstance.Data);
  }
  this_02.World = local_340;
  if ((this_00 == (ULevelStreaming *)0x0) ||
     (pUVar24 = TSoftObjectPtr<UWorld>::Get(&this_00->WorldAsset), this_02.World = local_340,
     pUVar24 == (UWorld *)0x0)) {
LAB_146c5b9f9:
    if (2 < (byte)LogMovieScene._0_1_) {
      ::FName::ToString(&local_2f8,&local_1d0);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
      if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    this_02.World = TSoftObjectPtr<UWorld>::Get(&this_00->WorldAsset);
  }
LAB_146c5ba5b:
  if ((this_02.World == (UWorld *)0x0) &&
     (this_02.World = GWorld.World, 2 < (byte)LogMovieScene._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
    this_02 = GWorld;
  }
LAB_146c5ba9c:
  if (((param_1->bNetAddressableName == false) || (((this_02.World)->WorldType).Value == '\x02')) ||
     (EVar12 = UWorld::InternalGetNetMode(this_02.World), EVar12 == NM_Standalone)) {
    bVar10 = false;
    FVar15 = (FName)&local_2f0;
    local_2f0 = 0;
  }
  else {
    bVar10 = true;
    local_210 = local_338->Object;
    local_208 = (local_338->SharedReferenceCount).ReferenceController;
    if (local_208 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_208->SharedReferenceCount = (atomic<int>)((int)local_208->SharedReferenceCount + 1);
      UNLOCK();
    }
    FVar15 = FMovieSceneSpawnable::GetNetAddressableName
                       (param_1,(TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *)
                                local_1e8,(FMovieSceneSequenceID)(uint)&local_210);
  }
  FVar15 = *(FName *)FVar15;
  if ((FVar15 != (FName)0x0) &&
     (pUVar14 = StaticFindObjectFast
                          ((UClass *)0x0,
                           (UObject *)((this_02.World)->PersistentLevel).field0_0x0.DebugPtr,FVar15,
                           None,RF_NoFlags,Borrowed), pUVar14 != (UObject *)0x0)) {
    FVar3.ComparisonIndex.Value = *(uint *)&pUVar14->field_0x10;
    FVar3.Number = *(uint *)&pUVar14->field_0x14;
    local_328 = (FMovieSceneSequenceID *)0x0;
    MakeUniqueObjectName
              ((UObject *)local_2b0,(UClass *)((this_02.World)->PersistentLevel).field0_0x0.DebugPtr
               ,FVar3,None);
    pcVar6 = *(code **)(*(longlong *)pUVar14 + 0x170);
    pFVar16 = ::FName::ToString((FName *)local_2b0,&local_1c0);
    if ((pFVar16->Data).ArrayNum == 0) {
      pwVar29 = L"";
    }
    else {
      pwVar29 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
    }
    (*pcVar6)(pUVar14,pwVar29,0,0);
    if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
    }
  }
  FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_118);
  local_118[0x32] = local_118[0x32] | 4;
  local_118._52_4_ = RF_Transient|RF_Transactional;
  local_118[0x30] = AlwaysSpawn;
  local_118._32_8_ = ((this_02.World)->PersistentLevel).field0_0x0;
  local_a8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_a8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_a8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_a8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_a8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_a8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  pUVar4 = (pAVar18->RootComponent).field0_0x0.DebugPtr;
  local_118._0_8_ = FVar15;
  local_118._8_8_ = pAVar18;
  if (pUVar4 == (USceneComponent *)0x0) {
    local_a8.Rotation.XY.m128d_f64 = *&(param_1->SpawnTransform).Rotation.XY.m128d_f64;
    local_a8.Rotation.ZW.m128d_f64 = *&(param_1->SpawnTransform).Rotation.ZW.m128d_f64;
    local_a8.Translation.XY.m128d_f64 = *&(param_1->SpawnTransform).Translation.XY.m128d_f64;
    local_a8.Translation.ZW.m128d_f64 = *&(param_1->SpawnTransform).Translation.ZW.m128d_f64;
    local_a8.Scale3D.XY.m128d_f64 = *&(param_1->SpawnTransform).Scale3D.XY.m128d_f64;
    local_a8.Scale3D.ZW.m128d_f64[0]._0_4_ =
         *(undefined4 *)(param_1->SpawnTransform).Scale3D.ZW.m128d_f64;
    local_a8.Scale3D.ZW.m128d_f64[0]._4_4_ =
         *(undefined4 *)((longlong)(param_1->SpawnTransform).Scale3D.ZW.m128d_f64 + 4);
    local_a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
         *(undefined4 *)((param_1->SpawnTransform).Scale3D.ZW.m128d_f64 + 1);
    local_a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
         *(undefined4 *)((longlong)(param_1->SpawnTransform).Scale3D.ZW.m128d_f64 + 0xc);
  }
  else {
    local_1a0 = (pUVar4->RelativeLocation).field0_0x0._s_0.Z;
    local_1b0 = (pUVar4->RelativeLocation).field0_0x0._s_0.X;
    dStack_1a8 = (pUVar4->RelativeLocation).field0_0x0._s_0.Y;
    local_a8.Translation.XY.m128d_f64 = *(double (*) [2])&(pUVar4->RelativeLocation).field0_0x0;
    local_a8.Translation.ZW.m128d_f64[1] = 0.0;
    local_a8.Translation.ZW.m128d_f64[0] = local_1a0;
    local_200.Pitch = (pUVar4->RelativeRotation).Pitch;
    local_200.Yaw = (pUVar4->RelativeRotation).Yaw;
    local_200.Roll = (pUVar4->RelativeRotation).Roll;
    pTVar17 = UE::Math::TRotator<double>::Quaternion(&local_200,&local_158);
    local_a8.Rotation.XY.m128d_f64[0] = pTVar17->X;
    local_a8.Rotation.XY.m128d_f64[1] = pTVar17->Y;
    local_a8.Rotation.ZW.m128d_f64[0] = pTVar17->Z;
    local_a8.Rotation.ZW.m128d_f64[1] = pTVar17->W;
    local_188 = *(undefined8 *)((longlong)&(pUVar4->RelativeScale3D).field0_0x0 + 0x10);
    local_a8.Scale3D.ZW.m128d_f64[0]._0_4_ = (undefined4)local_188;
    local_a8.Scale3D.ZW.m128d_f64[0]._4_4_ = (undefined4)((ulonglong)local_188 >> 0x20);
    local_a8.Scale3D.ZW.m128d_f64[1]._0_4_ = 0;
    local_a8.Scale3D.ZW.m128d_f64[1]._4_4_ = 0;
    local_198 = (pUVar4->RelativeScale3D).field0_0x0._s_0.X;
    dStack_190 = (pUVar4->RelativeScale3D).field0_0x0._s_0.Y;
    local_a8.Scale3D.XY.m128d_f64 = *(double (*) [2])&(pUVar4->RelativeScale3D).field0_0x0;
  }
  local_320 = (AActor *)
              ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                        (&pAVar18->OwnedComponents);
  local_2d8 = &(((TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>
                  *)local_320)->Elements).field_0x10;
  uVar34 = *(uint *)&(((TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>
                        *)local_320)->Elements).field_0x28;
  uStack_2dc = (Type)local_330;
  uStack_2e0 = uVar32;
  uStack_2cc = uVar32;
  if (uVar34 != 0) {
    puVar33 = *(uint **)&(((TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>
                            *)local_320)->Elements).field_0x20;
    if (puVar33 == (uint *)0x0) {
      puVar33 = (uint *)local_2d8;
    }
    uVar26 = *puVar33;
    pUVar24 = pUVar28;
    uStack_2e0 = 0;
    uVar32 = 0;
    while (uVar26 == 0) {
      uStack_2e0 = (int)pUVar28 + 1;
      pUVar28 = (UWorld *)(ulonglong)uStack_2e0;
      uVar32 = (int)pUVar24 + 0x20;
      pUVar24 = (UWorld *)(ulonglong)uVar32;
      uStack_2cc = uVar34;
      if ((int)((uVar34 - 1) + ((int)(uVar34 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_2e0)
      goto LAB_146c5bdbf;
      uVar26 = puVar33[(int)uStack_2e0];
    }
    uStack_2dc = ~(uVar26 - 1) & uVar26;
    uVar20 = (ulonglong)uStack_2dc * 2 + 1;
    lVar2 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    local_2b8 = (int)lVar2;
    uStack_2cc = (uVar32 - 1) + local_2b8;
    if ((int)uVar34 < (int)uStack_2cc) {
      uStack_2cc = uVar34;
    }
  }
LAB_146c5bdbf:
  local_348 = (ForElementType<unsigned_int>)
              &(((TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>
                  *)local_320)->Elements).field_0x10;
  uStack_2c4 = local_11c;
  iStack_2c0 = *(int *)&(((TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>
                           *)local_320)->Elements).field_0x8 -
               *(int *)&(((TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>
                           *)local_320)->Elements).field_0x34;
  local_354 = *(uint *)&(((TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>
                           *)local_320)->Elements).field_0x28;
  TStack_268._padding_ = CONCAT44(uStack_2dc,uStack_2e0);
  uStack_2d0 = 0xffffffff;
  uVar34 = local_354 & 0xffffffe0;
  TStack_268.CurrentBitIndex = uStack_2cc;
  TStack_268.UnvisitedBitMask = 0xffffffff;
  iVar23 = (int)local_354 >> 5;
  TStack_268._28_4_ = local_11c;
  TStack_268.BaseBitIndex = uVar32;
  uStack_248 = CONCAT44(uStack_2bc,iStack_2c0);
  local_2e8 = (TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *)
              local_320;
  local_2c8 = uVar32;
  local_270 = (TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *)
              local_320;
  TStack_268.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_2d8;
  if ((((int)local_354 < 0) ||
      (*(int *)&(((TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>
                   *)local_320)->Elements).field_0x28 < (int)local_354)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    pUVar14 = (UObject *)(*pcVar6)();
    return pUVar14;
  }
  pAVar8 = local_320;
  FVar7 = local_348;
  uVar32 = *(int *)((longlong)local_348 + 0x18);
  if (local_354 != uVar32) {
    FVar30 = local_348;
    if (*(ForElementType<unsigned_int> *)((longlong)local_348 + 0x10) !=
        (ForElementType<unsigned_int>)0x0) {
      FVar30 = *(ForElementType<unsigned_int> *)((longlong)local_348 + 0x10);
    }
    uVar26 = -1 << ((byte)local_354 & 0x1f) & *(uint *)((longlong)FVar30 + (longlong)iVar23 * 4);
    while (uVar26 == 0) {
      iVar23 = iVar23 + 1;
      uVar34 = uVar34 + 0x20;
      local_354 = uVar32;
      if ((int)(((int)(uVar32 - 1) >> 0x1f & 0x1fU) + (uVar32 - 1)) >> 5 < iVar23)
      goto LAB_146c5bef0;
      uVar26 = *(uint *)((longlong)FVar30 + (longlong)iVar23 * 4);
    }
    uVar20 = (ulonglong)(~(uVar26 - 1) & uVar26) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    local_2b4 = (int)lVar2;
    local_354 = (uVar34 - 1) + local_2b4;
    if ((int)uVar32 < (int)local_354) {
      local_354 = uVar32;
    }
  }
LAB_146c5bef0:
  while( true ) {
    pTVar19 = local_270;
    if (*(int *)&(local_270->Elements).field_0x8 - *(int *)&(local_270->Elements).field_0x34 !=
        (int)uStack_248) {
      local_34f = 0;
      `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_34f);
    }
    if (((TStack_268.CurrentBitIndex == local_354) &&
        ((ForElementType<unsigned_int>)TStack_268.Array == FVar7)) && ((AActor *)pTVar19 == pAVar8))
    break;
    this_01 = *(UActorComponent **)
               (*(longlong *)&pTVar19->Elements + (longlong)TStack_268.CurrentBitIndex * 0x10);
    if (this_01 != (UActorComponent *)0x0) {
      pUVar13 = Z_Construct_UClass_UParticleSystemComponent_NoRegister();
      iVar23 = (int)pUVar13->_padding_;
      if ((iVar23 <= *(int *)(this_01->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar23 * 8) ==
          &pUVar13->_padding_)) {
        UActorComponent::SetActiveFlag(this_01,false);
        this_01->bAutoActivate = '\0';
      }
    }
    TStack_268.UnvisitedBitMask = TStack_268.UnvisitedBitMask & ~TStack_268._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_268);
  }
  pAVar18 = UWorld::SpawnActorAbsolute
                      (this_02.World,(UClass *)pAVar18->_padding_,&local_a8,
                       (FActorSpawnParameters *)local_118);
  local_320 = pAVar18;
  if (pAVar18 == (AActor *)0x0) {
    if (local_118._64_8_ != 0) {
      plVar21 = (longlong *)(local_118 + 0x50);
      if ((longlong *)local_118._104_8_ != (longlong *)0x0) {
        plVar21 = (longlong *)local_118._104_8_;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((local_338->SharedReferenceCount).ReferenceController);
    pAVar18 = (AActor *)0x0;
  }
  else {
    TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
              (&pAVar18->Tags,&SequencerActorTag);
    if (bVar10) {
      AActor::SetNetAddressable(pAVar18);
    }
    pTVar35 = local_338;
    this_03 = (UMovieSceneEntitySystemLinker *)
              FWeakObjectPtr::Get(&(local_338->Object->WeakLinker).WeakPtr);
    if (this_03 != (UMovieSceneEntitySystemLinker *)0x0) {
      local_2b0._8_8_ = Z_Construct_UClass_UMovieSceneDeferredComponentMovementSystem_NoRegister();
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UClass *)local_2b0._8_8_ != (UClass *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_2b0._8_8_);
      }
      this_04 = (UMovieSceneDeferredComponentMovementSystem *)
                UMovieSceneEntitySystemLinker::FindSystem
                          (this_03,(TSubclassOf<UMovieSceneEntitySystem>)((longlong)local_2b0 + 8));
      if (this_04 == (UMovieSceneDeferredComponentMovementSystem *)0x0) {
        this_04 = (UMovieSceneDeferredComponentMovementSystem *)0x0;
      }
      else {
        pUVar13 = Z_Construct_UClass_UMovieSceneDeferredComponentMovementSystem_NoRegister();
        iVar23 = (int)pUVar13->_padding_;
        if ((*(int *)(this_04->_padding_ + 0x38) < iVar23) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_04->_padding_ + 0x30) + (longlong)iVar23 * 8) !=
            &pUVar13->_padding_)) {
          pFVar16 = GetTypeName<UMovieSceneDeferredComponentMovementSystem>(&local_170);
          pwVar29 = L"";
          if ((pFVar16->Data).ArrayNum == 0) {
            pwVar25 = L"";
          }
          else {
            pwVar25 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
          }
          pFVar16 = GetFullNameForCastLogError<UMovieSceneEntitySystem>
                              (&local_180,(UMovieSceneEntitySystem *)this_04);
          if ((pFVar16->Data).ArrayNum != 0) {
            pwVar29 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(pwVar29,pwVar25);
        }
      }
      pTVar35 = local_338;
      if (this_04 != (UMovieSceneDeferredComponentMovementSystem *)0x0) {
        pTVar19 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                            (&pAVar18->OwnedComponents);
        local_280 = 0;
        local_290 = &(pTVar19->Elements).field_0x10;
        iVar23 = *(int *)&(pTVar19->Elements).field_0x28;
        iStack_284 = 0;
        iStack_298 = 0;
        if (iVar23 != 0) {
          puVar33 = *(uint **)&(pTVar19->Elements).field_0x20;
          if (puVar33 == (uint *)0x0) {
            puVar33 = (uint *)local_290;
          }
          uVar32 = *puVar33;
          while (uVar32 == 0) {
            iStack_298 = iStack_298 + 1;
            local_280 = local_280 + 0x20;
            iStack_284 = iVar23;
            if ((int)(iVar23 + -1 + (iVar23 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_298)
            goto LAB_146c5c131;
            uVar32 = puVar33[iStack_298];
          }
          local_330 = (ulonglong)(~(uVar32 - 1) & uVar32);
          uVar20 = local_330 * 2 + 1;
          lVar2 = 0x3f;
          if (uVar20 != 0) {
            for (; uVar20 >> lVar2 == 0; lVar2 = lVar2 + -1) {
            }
          }
          iStack_284 = local_280 + -1 + (int)lVar2;
          local_340 = (UWorld *)CONCAT44(local_340._4_4_,(int)lVar2);
          if (iVar23 < iStack_284) {
            iStack_284 = iVar23;
          }
        }
LAB_146c5c131:
        uVar32 = *(uint *)&(pTVar19->Elements).field_0x28;
        puVar1 = &(pTVar19->Elements).field_0x10;
        uStack_294 = (undefined4)local_330;
        uStack_27c = uStack_2cc;
        iStack_278 = *(int *)&(pTVar19->Elements).field_0x8 -
                     *(int *)&(pTVar19->Elements).field_0x34;
        uStack_288 = 0xffffffff;
        uVar34 = uVar32 & 0xffffffe0;
        TStack_238._padding_ = CONCAT44(uStack_294,iStack_298);
        TStack_238.CurrentBitIndex = iStack_284;
        TStack_238.UnvisitedBitMask = 0xffffffff;
        iVar23 = (int)uVar32 >> 5;
        TStack_238._28_4_ = uStack_2cc;
        TStack_238.BaseBitIndex = local_280;
        uStack_218 = CONCAT44(uStack_274,iStack_278);
        local_2a0 = pTVar19;
        local_240 = pTVar19;
        TStack_238.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_290;
        if ((((int)uVar32 < 0) || (*(int *)&(pTVar19->Elements).field_0x28 < (int)uVar32)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          pUVar14 = (UObject *)(*pcVar6)();
          return pUVar14;
        }
        uVar26 = *(uint *)&(pTVar19->Elements).field_0x28;
        if (uVar32 != uVar26) {
          puVar5 = *(undefined1 **)&(pTVar19->Elements).field_0x20;
          puVar31 = puVar1;
          if (puVar5 != (undefined1 *)0x0) {
            puVar31 = puVar5;
          }
          uVar32 = -1 << ((byte)uVar32 & 0x1f) & *(uint *)(puVar31 + (longlong)iVar23 * 4);
          while (uVar32 == 0) {
            iVar23 = iVar23 + 1;
            uVar34 = uVar34 + 0x20;
            uVar32 = uVar26;
            if ((int)(((int)(uVar26 - 1) >> 0x1f & 0x1fU) + (uVar26 - 1)) >> 5 < iVar23)
            goto LAB_146c5c230;
            uVar32 = *(uint *)(puVar31 + (longlong)iVar23 * 4);
          }
          uVar20 = (ulonglong)(~(uVar32 - 1) & uVar32) * 2 + 1;
          lVar2 = 0x3f;
          if (uVar20 != 0) {
            for (; uVar20 >> lVar2 == 0; lVar2 = lVar2 + -1) {
            }
          }
          uVar32 = (int)lVar2 + -1 + uVar34;
          if ((int)uVar26 < (int)uVar32) {
            uVar32 = uVar26;
          }
        }
LAB_146c5c230:
        while( true ) {
          pTVar9 = local_240;
          if (*(int *)&(local_240->Elements).field_0x8 - *(int *)&(local_240->Elements).field_0x34
              != (int)uStack_218) {
            `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_34e);
          }
          if (((TStack_238.CurrentBitIndex == uVar32) &&
              (TStack_238.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
             (pAVar18 = local_320, pTVar35 = local_338, pTVar9 == pTVar19)) break;
          pUVar4 = *(USceneComponent **)
                    (*(longlong *)&pTVar9->Elements + (longlong)TStack_238.CurrentBitIndex * 0x10);
          if (pUVar4 != (USceneComponent *)0x0) {
            pUVar13 = Z_Construct_UClass_USceneComponent_NoRegister();
            iVar23 = (int)pUVar13->_padding_;
            if ((iVar23 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar23 * 8) ==
                &pUVar13->_padding_)) {
              UMovieSceneDeferredComponentMovementSystem::DeferMovementUpdates(this_04,pUVar4);
            }
          }
          TStack_238.UnvisitedBitMask = TStack_238.UnvisitedBitMask & ~TStack_238._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_238);
        }
      }
    }
    AActor::FinishSpawning
              (pAVar18,&local_a8,true,(FComponentInstanceDataCache *)0x0,OverrideRootScale);
    if (local_118._64_8_ != 0) {
      plVar21 = (longlong *)(local_118 + 0x50);
      if ((longlong *)local_118._104_8_ != (longlong *)0x0) {
        plVar21 = (longlong *)local_118._104_8_;
      }
      (**(code **)(*plVar21 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar35->SharedReferenceCount).ReferenceController);
  }
  return (UObject *)pAVar18;
}

