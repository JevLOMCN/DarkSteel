// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 7

// StaticClass @ 1467cef70

UClass * __cdecl UMovieScenePropertyNotificationSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScenePropertyNotificationSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScenePropertyNotificationSystem",
               &Z_Registration_Info_UClass_UMovieScenePropertyNotificationSystem.InnerSingleton,
               StaticRegisterNativesUMovieScenePropertyNotificationSystem,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScenePropertyNotificationSystem>,
               InternalVTableHelperCtorCaller<UMovieScenePropertyNotificationSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScenePropertyNotificationSystem.InnerSingleton;
}

// UMovieScenePropertyNotificationSystem @ 14680b610

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieScenePropertyNotificationSystem * __thiscall
UMovieScenePropertyNotificationSystem::UMovieScenePropertyNotificationSystem
          (UMovieScenePropertyNotificationSystem *this,FVTableHelper *param_1)

{
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  *(undefined ***)this = &___7UMovieScenePropertyNotificationSystem__6B_;
  return this;
}

// UMovieScenePropertyNotificationSystem @ 14680b640

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieScenePropertyNotificationSystem * __thiscall
UMovieScenePropertyNotificationSystem::UMovieScenePropertyNotificationSystem
          (UMovieScenePropertyNotificationSystem *this,FObjectInitializer *param_1)

{
  FMovieSceneTracksComponentTypes *pFVar1;
  
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  *(undefined ***)this = &___7UMovieScenePropertyNotificationSystem__6B_;
  pFVar1 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  *(undefined4 *)&this->field_0x38 = 2;
  this->field_0x32 = 0x20;
  *(TComponentTypeID<UE::MovieScene::FPropertyNotifyComponentData> *)&this->field_0x30 =
       pFVar1->PropertyNotify;
  return this;
}

// ~UMovieScenePropertyNotificationSystem @ 14680fc60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieScenePropertyNotificationSystem::~UMovieScenePropertyNotificationSystem
          (UMovieScenePropertyNotificationSystem *this)

{
  *(undefined ***)this = &___7UMovieScenePropertyNotificationSystem__6B_;
  UMovieSceneEntitySystem::~UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this);
  return;
}

// GetPrivateStaticClass @ 146836ae0

UClass * __cdecl UMovieScenePropertyNotificationSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScenePropertyNotificationSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieScenePropertyNotificationSystem",
               &Z_Registration_Info_UClass_UMovieScenePropertyNotificationSystem.InnerSingleton,
               StaticRegisterNativesUMovieScenePropertyNotificationSystem,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieScenePropertyNotificationSystem>,
               InternalVTableHelperCtorCaller<UMovieScenePropertyNotificationSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScenePropertyNotificationSystem.InnerSingleton;
}

// OnRun @ 14684a450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieScenePropertyNotificationSystem::OnRun
          (UMovieScenePropertyNotificationSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  uint uVar1;
  ForAnyElementType FVar2;
  int iVar3;
  FBuiltInComponentTypes *pFVar4;
  FMovieSceneTracksComponentTypes *pFVar5;
  FScriptContainerElement *this_00;
  FEntityManager *pFVar6;
  undefined1 auStackY_3d8 [32];
  FComponentTypeID local_398;
  ushort local_396;
  FComponentTypeID local_394 [6];
  initializer_list<UE::MovieScene::FComponentTypeID> local_388;
  undefined1 local_378 [32];
  void *local_358;
  undefined8 local_350;
  undefined8 uStack_348;
  ForElementType<FSetElementId> local_338;
  int local_330;
  undefined8 local_320;
  TStatIdData *pTStack_318;
  byte local_310;
  undefined7 uStack_30f;
  undefined4 uStack_308;
  uint uStack_304;
  TComponentTypeID<UObject_*> local_300;
  TComponentTypeID<UE::MovieScene::FPropertyNotifyComponentData> TStack_2fe;
  undefined4 uStack_2fc;
  undefined8 uStack_2f8;
  TStatIdData *pTStack_2f0;
  ulonglong uStack_2e8;
  undefined8 uStack_2e0;
  FComponentTypeID local_2d8;
  TComponentTypeID<unsigned_short> local_2d6;
  TComponentTypeID<TSharedPtr<FTrackInstancePropertyBindings,1>_> local_2d4;
  FComponentTypeID local_2d2 [5];
  undefined1 local_2c8 [32];
  void *local_2a8;
  undefined4 local_2a0;
  uint local_29c;
  undefined4 local_298;
  undefined4 local_294;
  ForElementType<FSetElementId> local_288;
  int local_280;
  undefined1 local_278 [2];
  FComponentAccess aFStack_276 [3];
  undefined8 uStack_270;
  TStatIdData *local_268;
  ulonglong uStack_260;
  undefined8 local_258;
  FEntityComponentFilter local_250;
  TBitArray<TFixedAllocator<12>_> local_1d0;
  TBitArray<TFixedAllocator<12>_> local_198;
  undefined1 local_158 [24];
  ulonglong uStack_140;
  undefined8 local_138;
  TBitArray<TFixedAllocator<12>_> local_130;
  TBitArray<TFixedAllocator<12>_> local_f8;
  ForAnyElementType local_c0;
  int local_b8;
  int local_b4;
  TBitArray<TFixedAllocator<12>_> local_b0;
  TBitArray<TFixedAllocator<12>_> local_78;
  FEntityManager *local_40;
  FEntityAllocationWriteContext local_38 [2];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_3d8;
  pFVar4 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar5 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  local_29c = 0x80;
  local_2c8._0_8_ = (FScriptContainerElement *)0x0;
  local_2c8._8_8_ = 0;
  pTStack_318 = &TStatId::TStatId_NAME_None;
  local_2a8 = (void *)0x0;
  local_2a0 = 0;
  local_298 = 0xffffffff;
  local_294 = 0;
  local_288 = (ForElementType<FSetElementId>)0x0;
  local_280 = 0;
  local_300 = pFVar4->BoundObject;
  TStack_2fe = pFVar5->PropertyNotify;
  local_2d8.Value = *(ushort *)&pFVar4->CustomPropertyIndex;
  local_2d6 = pFVar4->FastPropertyOffset;
  local_2d4 = pFVar4->SlowProperty;
  local_320 = 0;
  uStack_308 = 0x6ff;
  uStack_304 = uStack_304 & 0xffffff00;
  uStack_2e8 = CONCAT71(uStack_30f,local_310) & 0xffffffffffffffe0;
  uStack_2e0._4_4_ = uStack_304;
  uStack_2e0._0_4_ = 0x6ff;
  uStack_2f8 = 0;
  pTStack_2f0 = &TStatId::TStatId_NAME_None;
  local_250.AllMask.Bits.NumBits = 0;
  aFStack_276[0].ComponentType.Value = (FComponentTypeID)(FComponentTypeID)TStack_2fe;
  local_278 = (undefined1  [2])local_300;
  unique0x100003fa = uStack_2fc;
  local_250.AllMask.Bits.MaxBits = 0x180;
  local_250.NoneMask.Bits.NumBits = 0;
  local_250.NoneMask.Bits.MaxBits = 0x180;
  uStack_270 = 0;
  local_268 = &TStatId::TStatId_NAME_None;
  local_250.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_250.ComplexMasks.ArrayNum = 0;
  local_250.ComplexMasks.ArrayMax = 0;
  local_1d0.NumBits = 0;
  local_1d0.MaxBits = 0x180;
  local_198.NumBits = 0;
  local_198.MaxBits = 0x180;
  local_310 = local_310 & 0xe0;
  uStack_260 = uStack_2e8;
  local_258 = uStack_2e0;
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)local_278,&local_250);
  UE::MovieScene::AddAccessorToFilter((FComponentAccess *)(local_278 + 2),&local_250);
  iVar3 = local_250.ComplexMasks.ArrayNum;
  if (local_250.ComplexMasks.ArrayNum == local_250.ComplexMasks.ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x43c,&local_250.ComplexMasks.AllocatorInstance,
                       &local_250.ComplexMasks.ArrayMax);
  }
  local_250.ComplexMasks.ArrayNum = iVar3 + 1;
  this_00 = local_250.ComplexMasks.AllocatorInstance.Data + (longlong)iVar3 * 0x3c;
  local_388._Last = local_2d2;
  *(int *)&this_00[0x30].field_0x0 = 0;
  *(int *)&this_00[0x34].field_0x0 = 0x180;
  this_00[0x38] = (FScriptContainerElement)0x2;
  local_388._First = &local_2d8;
  UE::MovieScene::FComponentMask::SetAll((FComponentMask *)this_00,&local_388);
  local_398.Value = (pFVar4->Tags).NeedsUnlink.Value;
  local_396 = (pFVar4->Tags).Ignored.Value;
  local_388._First = &local_398;
  local_388._Last = local_394;
  UE::MovieScene::FComponentMask::SetAll(&local_250.NoneMask,&local_388);
  local_378._0_8_ = (FScriptContainerElement *)0x0;
  local_350 = ___xmm_00000000ffffffff0000008000000000;
  uStack_348 = _UNK_150631d98;
  local_378._8_8_ = 0;
  local_358 = (void *)0x0;
  local_338 = (ForElementType<FSetElementId>)0x0;
  local_330 = 0;
  TSet<TTuple<UObject_*,UFunction_*>,DefaultKeyFuncs<TTuple<UObject_*,UFunction_*>,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<UObject_*,UFunction_*>,DefaultKeyFuncs<TTuple<UObject_*,UFunction_*>,0>,FDefaultSetAllocator>
               *)local_378,
              (TSet<TTuple<UObject_*,UFunction_*>,DefaultKeyFuncs<TTuple<UObject_*,UFunction_*>,0>,FDefaultSetAllocator>
               *)local_2c8);
  pFVar6 = (FEntityManager *)(*(longlong *)&this->field_0x28 + 0x28);
  if (local_278 != (undefined1  [2])0xffff && aFStack_276[0].ComponentType.Value != 0xffff) {
    local_158._0_8_ = _local_278;
    local_158._8_8_ = uStack_270;
    local_138 = local_258;
    local_158._16_8_ = local_268;
    uStack_140 = uStack_260;
    local_130.NumBits = 0;
    local_130.MaxBits = 0;
    TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
              ((TBitArray<TFixedAllocator<12>_> *)(local_158 + 0x28),
               (TBitArray<TFixedAllocator<12>_> *)&local_250);
    local_f8.NumBits = 0;
    local_f8.MaxBits = 0;
    TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
              ((TBitArray<TFixedAllocator<12>_> *)(local_158 + 0x60),&local_250.NoneMask.Bits);
    FVar2.Data = local_250.ComplexMasks.AllocatorInstance.Data;
    iVar3 = local_250.ComplexMasks.ArrayNum;
    local_c0.Data = (FScriptContainerElement *)0x0;
    local_b8 = local_250.ComplexMasks.ArrayNum;
    if (local_250.ComplexMasks.ArrayNum == 0) {
      local_b4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x3c,4,local_250.ComplexMasks.ArrayNum,0,(ForAnyElementType *)(local_158 + 0x98),
                 local_250.ComplexMasks.ArrayNum,(int *)(local_158 + 0xa4));
      ConstructItems<UE::MovieScene::FEntityComponentFilter::FComplexMask,UE::MovieScene::FEntityComponentFilter::FComplexMask,int>
                (local_c0.Data,(FComplexMask *)FVar2.Data,iVar3);
    }
    local_b0.NumBits = 0;
    local_b0.MaxBits = 0;
    TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
              ((TBitArray<TFixedAllocator<12>_> *)(local_158 + 0xa8),&local_1d0);
    local_78.NumBits = 0;
    local_78.MaxBits = 0;
    TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
              ((TBitArray<TFixedAllocator<12>_> *)(local_158 + 0xe0),&local_198);
    local_40 = pFVar6;
    UE::MovieScene::FEntityAllocationWriteContext::FEntityAllocationWriteContext
              ((FEntityAllocationWriteContext *)(local_158 + 0x120),pFVar6);
    UE::MovieScene::
    TEntityTaskBase<UE::MovieScene::FCallNotificationsTask,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TWriteAccess<UE::MovieScene::FPropertyNotifyComponentData>_>
    ::Run((TEntityTaskBase<UE::MovieScene::FCallNotificationsTask,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TWriteAccess<UE::MovieScene::FPropertyNotifyComponentData>_>
           *)local_158,(FCallNotificationsTask *)local_378);
    if (local_c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data);
    }
  }
  local_330 = 0;
  if (local_338 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_338);
  }
  iVar3 = SUB84(local_378._8_8_,4);
  local_378._8_8_ = local_378._8_8_ & 0xffffffff00000000;
  if (iVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_378,0,(int *)(local_378 + 0xc));
  }
  uVar1 = local_350._4_4_;
  uStack_348 = 0xffffffff;
  local_350 = (ulonglong)local_350._4_4_ << 0x20;
  if (0x80 < uVar1) {
    local_350 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_378 + 0x10),0);
  }
  if (local_358 != (void *)0x0) {
    FMemory::Free(local_358);
  }
  if ((FScriptContainerElement *)local_378._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_378._0_8_);
  }
  if ((FComplexMask *)local_250.ComplexMasks.AllocatorInstance.Data != (FComplexMask *)0x0) {
    FMemory::Free(local_250.ComplexMasks.AllocatorInstance.Data);
  }
  local_280 = 0;
  if (local_288 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_288);
  }
  iVar3 = SUB84(local_2c8._8_8_,4);
  local_2c8._8_8_ = local_2c8._8_8_ & 0xffffffff00000000;
  if (iVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_2c8,0,(int *)(local_2c8 + 0xc));
  }
  local_294 = 0;
  local_2a0 = 0;
  local_298 = 0xffffffff;
  if (0x80 < local_29c) {
    local_29c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_2c8 + 0x10),0);
  }
  if (local_2a8 != (void *)0x0) {
    FMemory::Free(local_2a8);
  }
  if ((FScriptContainerElement *)local_2c8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2c8._0_8_);
  }
  return;
}

// StaticRegisterNativesUMovieScenePropertyNotificationSystem @ 14686cc00

void __cdecl
UMovieScenePropertyNotificationSystem::StaticRegisterNativesUMovieScenePropertyNotificationSystem
          (void)

{
  return;
}

