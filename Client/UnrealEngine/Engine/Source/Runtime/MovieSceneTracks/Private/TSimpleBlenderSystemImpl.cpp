// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 5

// Run @ 1468676f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TSimpleBlenderSystemImpl<unsigned_char,UE::MovieScene::TSimpleBlendResultTraits<unsigned_char>_>::
Run(TSimpleBlenderSystemImpl<unsigned_char,UE::MovieScene::TSimpleBlendResultTraits<unsigned_char>_>
    *this,UMovieSceneEntitySystemLinker *param_1,TBitArray<FDefaultBitArrayAllocator> *param_2,
   FSystemTaskPrerequisites *param_3,FSystemSubsequentTasks *param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FMovieSceneBlenderSystemID FVar6;
  ECachedEntityManagerState EVar7;
  FBuiltInComponentTypes *pFVar8;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar9;
  ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> FVar10;
  FEntityManager *this_00;
  undefined1 auStackY_508 [32];
  FComponentTypeID local_4c8;
  FComponentTypeID local_4c6;
  FComponentTypeID local_4c4;
  FComponentTypeID local_4c2;
  FComponentTypeID local_4c0;
  FComponentTypeID local_4be;
  FComponentTypeID local_4bc;
  FComponentTypeID local_4ba [5];
  undefined1 local_4b0 [16];
  undefined1 local_4a0 [32];
  byte local_480;
  undefined7 uStack_47f;
  undefined4 uStack_478;
  uint uStack_474;
  uchar local_468 [8];
  TStatIdData *pTStack_460;
  byte local_458;
  uchar auStack_457 [7];
  undefined1 auStack_450 [8];
  initializer_list<UE::MovieScene::FComponentTypeID> local_448;
  initializer_list<UE::MovieScene::FComponentTypeID> local_438;
  initializer_list<UE::MovieScene::FComponentTypeID> local_428;
  initializer_list<UE::MovieScene::FComponentTypeID> local_418;
  initializer_list<UE::MovieScene::FComponentTypeID> local_408;
  TComponentTypeID<FMovieSceneBlendChannelID> local_3f8;
  TComponentTypeID<unsigned_char> TStack_3f6;
  TTypeCompatibleBytes<unsigned_int> TStack_3f4;
  undefined8 uStack_3f0;
  TStatIdData *pTStack_3e8;
  ulonglong uStack_3e0;
  undefined8 uStack_3d8;
  TComponentTypeID<FMovieSceneBlendChannelID> local_3d0;
  TComponentTypeID<unsigned_char> TStack_3ce;
  undefined4 uStack_3cc;
  undefined8 uStack_3c8;
  TStatIdData *pTStack_3c0;
  ulonglong uStack_3b8;
  undefined8 uStack_3b0;
  FComponentTypeID local_3a8;
  ushort local_3a6;
  TComponentTypeID<FMovieSceneBlendChannelID> local_3a4;
  FComponentTypeID local_3a2 [5];
  undefined1 local_398 [72];
  undefined8 uStack_350;
  undefined1 local_348 [32];
  ForAnyElementType local_328;
  undefined8 uStack_320;
  FSystemTaskPrerequisites local_318;
  undefined1 local_298 [8];
  undefined8 uStack_290;
  TStatIdData *local_288;
  ulonglong uStack_280;
  undefined8 local_278;
  FEntityComponentFilter local_270;
  int local_1c0;
  int local_1bc;
  int local_188;
  int local_184;
  undefined1 local_178 [8];
  undefined8 uStack_170;
  TStatIdData *local_168;
  ulonglong uStack_160;
  undefined8 local_158;
  FEntityComponentFilter local_150;
  int local_a0;
  int local_9c;
  int local_68;
  int local_64;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_508;
  iVar3 = param_2->NumBits;
  local_4b0._8_8_ = param_4;
  if (iVar3 != 0) {
    pFVar8 = FBuiltInComponentTypes::Get();
    this_00 = &param_1->EntityManager;
    EVar7 = FCachedEntityManagerState::Update(&this->ChannelRelevancyCache,this_00);
    if (EVar7 == Stale) {
      (this->BlendChannelResults).ArrayNum = 0;
      if ((this->BlendChannelResults).ArrayMax < 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0,&(this->BlendChannelResults).AllocatorInstance,0,
                   &(this->BlendChannelResults).ArrayMax);
      }
      local_3a8.Value = *(ushort *)&this->ResultComponentID;
      local_348._16_8_ = 0;
      local_328.Data = (FScriptContainerElement *)0x0;
      local_398[0x38] = '\0';
      local_398[0x39] = '\0';
      local_398[0x3a] = '\0';
      local_398[0x3b] = '\0';
      local_398[0x3c] = '\0';
      local_398[0x3d] = '\0';
      local_398[0x3e] = '\0';
      local_398[0x3f] = '\0';
      local_398._48_8_ = 0x18000000000;
      local_398[0] = '\0';
      local_398[1] = '\0';
      local_398[2] = '\0';
      local_398[3] = '\0';
      local_398[4] = '\0';
      local_398[5] = '\0';
      local_398[6] = '\0';
      local_398[7] = '\0';
      local_398._8_8_ = 0;
      local_348._24_8_ = 0x18000000000;
      local_398._16_8_ = 0;
      local_398._24_8_ = 0;
      uStack_320._0_4_ = 0;
      uStack_320._4_4_ = 0;
      local_398._32_8_ = 0;
      local_398._40_8_ = 0;
      local_398._64_8_ = 0;
      uStack_350 = 0;
      local_348._0_8_ = 0;
      local_348._8_8_ = 0;
      local_3a6 = (this->BlenderSystem->BlenderTypeTag).Value;
      local_3a4 = pFVar8->BlendChannelInput;
      local_448._First = &local_3a8;
      local_448._Last = local_3a2;
      FComponentMask::SetAll((FComponentMask *)local_398,&local_448);
      bVar5 = FEntityManager::Contains(this_00,(FEntityComponentFilter *)local_398);
      if (local_328.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_328.Data);
      }
      param_4 = (FSystemSubsequentTasks *)local_4b0._8_8_;
      if (bVar5) {
        TArray<UE::MovieScene::TSimpleBlendResult<unsigned_char>,TSizedDefaultAllocator<32>_>::
        SetNum(&this->BlendChannelResults,iVar3,Default);
        param_4 = (FSystemSubsequentTasks *)local_4b0._8_8_;
      }
    }
    iVar3 = (this->BlendChannelResults).ArrayNum;
    if (iVar3 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else if (0 < iVar3) {
      memset((this->BlendChannelResults).AllocatorInstance.Data,0,(longlong)iVar3 << 3);
    }
    local_4a0._24_8_ = &TStatId::TStatId_NAME_None;
    local_318.Prereqs.AllocatorInstance.SecondaryData =
         (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0;
    local_318.Prereqs.ArrayNum._0_1_ = '\0';
    local_318.Prereqs.ArrayNum._1_1_ = '\0';
    local_318.Prereqs.ArrayNum._2_1_ = '\0';
    local_318.Prereqs.ArrayNum._3_1_ = '\0';
    local_318.AllTasks.AllocatorInstance.SecondaryData =
         (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
    local_318.AllTasks.ArrayNum._0_1_ = '\0';
    local_318.AllTasks.ArrayNum._1_1_ = '\0';
    local_318.AllTasks.ArrayNum._2_1_ = '\0';
    local_318.AllTasks.ArrayNum._3_1_ = '\0';
    local_318.Prereqs.ArrayMax._0_1_ = '\x04';
    local_318.Prereqs.ArrayMax._1_1_ = '\0';
    local_318.Prereqs.ArrayMax._2_1_ = '\0';
    local_318.Prereqs.ArrayMax._3_1_ = '\0';
    local_318.AllTasks.ArrayMax._0_1_ = '\x04';
    local_318.AllTasks.ArrayMax._1_1_ = '\0';
    local_318.AllTasks.ArrayMax._2_1_ = '\0';
    local_318.AllTasks.ArrayMax._3_1_ = '\0';
    local_3f8 = pFVar8->BlendChannelInput;
    TStack_3f6 = this->ResultComponentID;
    local_4a0._16_8_ = 0;
    uStack_478 = 0x6ff;
    local_4c8.Value = (this->BlenderSystem->BlenderTypeTag).Value;
    uStack_3f0 = 0;
    pTStack_3e8 = &TStatId::TStatId_NAME_None;
    local_298._2_2_ = TStack_3f6;
    local_298._0_2_ = local_3f8;
    local_298[4] = TStack_3f4.Pad[0];
    local_298[5] = TStack_3f4.Pad[1];
    local_298[6] = TStack_3f4.Pad[2];
    local_298[7] = TStack_3f4.Pad[3];
    uStack_474 = uStack_474 & 0xffffff00;
    uStack_3e0 = CONCAT71(uStack_47f,local_480) & 0xffffffffffffffe0;
    uStack_3d8._4_4_ = uStack_474;
    uStack_3d8._0_4_ = 0x6ff;
    local_270.AllMask.Bits.NumBits = 0;
    uStack_290 = 0;
    local_270.AllMask.Bits.MaxBits = 0x180;
    local_270.NoneMask.Bits.NumBits = 0;
    local_288 = &TStatId::TStatId_NAME_None;
    local_270.NoneMask.Bits.MaxBits = 0x180;
    local_270.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_270.ComplexMasks.ArrayNum = 0;
    local_270.ComplexMasks.ArrayMax = 0;
    local_1c0 = 0;
    local_1bc = 0x180;
    local_188 = 0;
    local_184 = 0x180;
    local_480 = local_480 & 0xe0;
    uStack_280 = uStack_3e0;
    local_278 = uStack_3d8;
    AddAccessorToFilter((FComponentAccess *)local_298,&local_270);
    AddAccessorToFilter((FComponentAccess *)(local_298 + 2),&local_270);
    local_438._First = &local_4c8;
    local_438._Last = &local_4c6;
    FComponentMask::SetAll(&local_270.AllMask,&local_438);
    local_4c4.Value = (pFVar8->Tags).Ignored.Value;
    local_428._First = &local_4c4;
    local_428._Last = &local_4c2;
    FComponentMask::SetAll(&local_270.NoneMask,&local_428);
    FVar6 = UMovieSceneBlenderSystem::GetBlenderSystemID(this->BlenderSystem);
    TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<unsigned_char>_>
    ::
    Dispatch_PerEntity<UE::MovieScene::TSimpleBlenderGatherResults<unsigned_char,UE::MovieScene::TSimpleBlendResultTraits<unsigned_char>_>,FMovieSceneBlenderSystemID,TArray<UE::MovieScene::TSimpleBlendResult<unsigned_char>,TSizedDefaultAllocator<32>_>_&>
              ((TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<unsigned_char>_>
                *)local_298,(FEntityManager *)local_4b0,(FSystemTaskPrerequisites *)this_00,
               (FSystemSubsequentTasks *)param_3,(FMovieSceneBlenderSystemID *)0x0,
               (TArray<UE::MovieScene::TSimpleBlendResult<unsigned_char>,TSizedDefaultAllocator<32>_>
                *)CONCAT71(extraout_var,FVar6.Value));
    if (local_270.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_270.ComplexMasks.AllocatorInstance.Data);
    }
    if ((FBaseGraphTask *)local_4b0._0_8_ != (FBaseGraphTask *)0x0) {
      FSystemTaskPrerequisites::AddComponentTask
                (&local_318,(FComponentTypeID)0xffff,(TRefCountPtr<FBaseGraphTask> *)local_4b0);
    }
    pTStack_460 = &TStatId::TStatId_NAME_None;
    local_3d0 = pFVar8->BlendChannelOutput;
    TStack_3ce = this->ResultComponentID;
    local_468[0] = '\0';
    local_468[1] = '\0';
    local_468[2] = '\0';
    local_468[3] = '\0';
    local_468[4] = '\0';
    local_468[5] = '\0';
    local_468[6] = '\0';
    local_468[7] = '\0';
    auStack_450._0_4_ = 0x6ff;
    local_4c0.Value = (this->BlenderSystem->BlenderTypeTag).Value;
    uStack_3c8 = 0;
    pTStack_3c0 = &TStatId::TStatId_NAME_None;
    local_178._2_2_ = TStack_3ce;
    local_178._0_2_ = local_3d0;
    local_178._4_4_ = uStack_3cc;
    auStack_450._4_4_ = auStack_450._4_4_ & 0xffffff00;
    uStack_3b8 = CONCAT71(auStack_457,local_458) & 0xffffffffffffffe0;
    uStack_3b0._4_4_ = auStack_450._4_4_;
    uStack_3b0._0_4_ = 0x6ff;
    local_150.AllMask.Bits.NumBits = 0;
    uStack_170 = 0;
    local_150.AllMask.Bits.MaxBits = 0x180;
    local_150.NoneMask.Bits.NumBits = 0;
    local_168 = &TStatId::TStatId_NAME_None;
    local_150.NoneMask.Bits.MaxBits = 0x180;
    local_150.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_150.ComplexMasks.ArrayNum = 0;
    local_150.ComplexMasks.ArrayMax = 0;
    local_a0 = 0;
    local_9c = 0x180;
    local_68 = 0;
    local_64 = 0x180;
    local_458 = local_458 & 0xe0;
    uStack_160 = uStack_3b8;
    local_158 = uStack_3b0;
    AddAccessorToFilter((FComponentAccess *)local_178,&local_150);
    AddAccessorToFilter((FComponentAccess *)(local_178 + 2),&local_150);
    local_418._First = &local_4c0;
    local_418._Last = &local_4be;
    FComponentMask::SetAll(&local_150.AllMask,&local_418);
    local_4bc.Value = (pFVar8->Tags).Ignored.Value;
    local_408._First = &local_4bc;
    local_408._Last = local_4ba;
    FComponentMask::SetAll(&local_150.NoneMask,&local_408);
    FVar6 = UMovieSceneBlenderSystem::GetBlenderSystemID(this->BlenderSystem);
    TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<unsigned_char>_>
    ::
    Dispatch_PerEntity<UE::MovieScene::TSimpleBlenderCombineResults<unsigned_char,UE::MovieScene::TSimpleBlendResultTraits<unsigned_char>_>,FMovieSceneBlenderSystemID,TArray<UE::MovieScene::TSimpleBlendResult<unsigned_char>,TSizedDefaultAllocator<32>_>_&>
              ((TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<unsigned_char>_>
                *)local_178,(FEntityManager *)local_4a0,(FSystemTaskPrerequisites *)this_00,
               (FSystemSubsequentTasks *)&local_318,(FMovieSceneBlenderSystemID *)param_4,
               (TArray<UE::MovieScene::TSimpleBlendResult<unsigned_char>,TSizedDefaultAllocator<32>_>
                *)CONCAT71(extraout_var_00,FVar6.Value));
    if ((undefined8 *)local_4a0._0_8_ != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_4a0._0_8_ + 0x30);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (*(code *)**(undefined8 **)local_4a0._0_8_)(local_4a0._0_8_,1);
      }
    }
    if (local_150.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.ComplexMasks.AllocatorInstance.Data);
    }
    if ((FBaseGraphTask *)local_4b0._0_8_ != (FBaseGraphTask *)0x0) {
      LOCK();
      puVar2 = (undefined1 *)(local_4b0._0_8_ + 0x30);
      iVar3 = *(int *)puVar2;
      *(int *)puVar2 = *(int *)puVar2 + -1;
      UNLOCK();
      if ((iVar3 == 1) && ((FBaseGraphTask *)local_4b0._0_8_ != (FBaseGraphTask *)0x0)) {
        (*(code *)**(undefined8 **)local_4b0._0_8_)(local_4b0._0_8_,1);
      }
    }
    FVar9 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_318.AllTasks;
    if (local_318.AllTasks.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar9 = local_318.AllTasks.AllocatorInstance.SecondaryData;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>
              ((TRefCountPtr<FBaseGraphTask> *)FVar9,local_318.AllTasks.ArrayNum);
    if (local_318.AllTasks.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FMemory::Free((void *)local_318.AllTasks.AllocatorInstance.SecondaryData);
    }
    FVar10 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)&local_318;
    if (local_318.Prereqs.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
      FVar10 = local_318.Prereqs.AllocatorInstance.SecondaryData;
    }
    DestructItems<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite,int>
              ((FPrerequisite *)FVar10,local_318.Prereqs.ArrayNum);
    if (local_318.Prereqs.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
      FMemory::Free((void *)local_318.Prereqs.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// Run @ 146867ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TSimpleBlenderSystemImpl<unsigned_char,UE::MovieScene::FSimpleBlenderEnumResultTraits>::Run
          (TSimpleBlenderSystemImpl<unsigned_char,UE::MovieScene::FSimpleBlenderEnumResultTraits>
           *this,UMovieSceneEntitySystemLinker *param_1,
          TBitArray<FDefaultBitArrayAllocator> *param_2,FSystemTaskPrerequisites *param_3,
          FSystemSubsequentTasks *param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  FMovieSceneBlenderSystemID FVar6;
  ECachedEntityManagerState EVar7;
  FBuiltInComponentTypes *pFVar8;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar9;
  ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> FVar10;
  FEntityManager *this_00;
  undefined1 auStackY_508 [32];
  FComponentTypeID local_4c8;
  FComponentTypeID local_4c6;
  FComponentTypeID local_4c4;
  FComponentTypeID local_4c2;
  FComponentTypeID local_4c0;
  FComponentTypeID local_4be;
  FComponentTypeID local_4bc;
  FComponentTypeID local_4ba [5];
  undefined1 local_4b0 [16];
  undefined1 local_4a0 [32];
  byte local_480;
  undefined7 uStack_47f;
  undefined4 uStack_478;
  uint uStack_474;
  uchar local_468 [8];
  TStatIdData *pTStack_460;
  byte local_458;
  uchar auStack_457 [7];
  undefined1 auStack_450 [8];
  initializer_list<UE::MovieScene::FComponentTypeID> local_448;
  initializer_list<UE::MovieScene::FComponentTypeID> local_438;
  initializer_list<UE::MovieScene::FComponentTypeID> local_428;
  initializer_list<UE::MovieScene::FComponentTypeID> local_418;
  initializer_list<UE::MovieScene::FComponentTypeID> local_408;
  TComponentTypeID<FMovieSceneBlendChannelID> local_3f8;
  TComponentTypeID<unsigned_char> TStack_3f6;
  TTypeCompatibleBytes<unsigned_int> TStack_3f4;
  undefined8 uStack_3f0;
  TStatIdData *pTStack_3e8;
  ulonglong uStack_3e0;
  undefined8 uStack_3d8;
  TComponentTypeID<FMovieSceneBlendChannelID> local_3d0;
  TComponentTypeID<unsigned_char> TStack_3ce;
  undefined4 uStack_3cc;
  undefined8 uStack_3c8;
  TStatIdData *pTStack_3c0;
  ulonglong uStack_3b8;
  undefined8 uStack_3b0;
  FComponentTypeID local_3a8;
  ushort local_3a6;
  TComponentTypeID<FMovieSceneBlendChannelID> local_3a4;
  FComponentTypeID local_3a2 [5];
  undefined1 local_398 [72];
  undefined8 uStack_350;
  undefined1 local_348 [32];
  ForAnyElementType local_328;
  undefined8 uStack_320;
  FSystemTaskPrerequisites local_318;
  undefined1 local_298 [8];
  undefined8 uStack_290;
  TStatIdData *local_288;
  ulonglong uStack_280;
  undefined8 local_278;
  FEntityComponentFilter local_270;
  int local_1c0;
  int local_1bc;
  int local_188;
  int local_184;
  undefined1 local_178 [8];
  undefined8 uStack_170;
  TStatIdData *local_168;
  ulonglong uStack_160;
  undefined8 local_158;
  FEntityComponentFilter local_150;
  int local_a0;
  int local_9c;
  int local_68;
  int local_64;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_508;
  iVar3 = param_2->NumBits;
  local_4b0._8_8_ = param_4;
  if (iVar3 != 0) {
    pFVar8 = FBuiltInComponentTypes::Get();
    this_00 = &param_1->EntityManager;
    EVar7 = FCachedEntityManagerState::Update(&this->ChannelRelevancyCache,this_00);
    if (EVar7 == Stale) {
      (this->BlendChannelResults).ArrayNum = 0;
      if ((this->BlendChannelResults).ArrayMax < 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0,&(this->BlendChannelResults).AllocatorInstance,0,
                   &(this->BlendChannelResults).ArrayMax);
      }
      local_3a8.Value = *(ushort *)&this->ResultComponentID;
      local_348._16_8_ = 0;
      local_328.Data = (FScriptContainerElement *)0x0;
      local_398[0x38] = '\0';
      local_398[0x39] = '\0';
      local_398[0x3a] = '\0';
      local_398[0x3b] = '\0';
      local_398[0x3c] = '\0';
      local_398[0x3d] = '\0';
      local_398[0x3e] = '\0';
      local_398[0x3f] = '\0';
      local_398._48_8_ = 0x18000000000;
      local_398[0] = '\0';
      local_398[1] = '\0';
      local_398[2] = '\0';
      local_398[3] = '\0';
      local_398[4] = '\0';
      local_398[5] = '\0';
      local_398[6] = '\0';
      local_398[7] = '\0';
      local_398._8_8_ = 0;
      local_348._24_8_ = 0x18000000000;
      local_398._16_8_ = 0;
      local_398._24_8_ = 0;
      uStack_320._0_4_ = 0;
      uStack_320._4_4_ = 0;
      local_398._32_8_ = 0;
      local_398._40_8_ = 0;
      local_398._64_8_ = 0;
      uStack_350 = 0;
      local_348._0_8_ = 0;
      local_348._8_8_ = 0;
      local_3a6 = (this->BlenderSystem->BlenderTypeTag).Value;
      local_3a4 = pFVar8->BlendChannelInput;
      local_448._First = &local_3a8;
      local_448._Last = local_3a2;
      FComponentMask::SetAll((FComponentMask *)local_398,&local_448);
      bVar5 = FEntityManager::Contains(this_00,(FEntityComponentFilter *)local_398);
      if (local_328.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_328.Data);
      }
      param_4 = (FSystemSubsequentTasks *)local_4b0._8_8_;
      if (bVar5) {
        TArray<UE::MovieScene::TSimpleBlendResult<unsigned_char>,TSizedDefaultAllocator<32>_>::
        SetNum(&this->BlendChannelResults,iVar3,Default);
        param_4 = (FSystemSubsequentTasks *)local_4b0._8_8_;
      }
    }
    iVar3 = (this->BlendChannelResults).ArrayNum;
    if (iVar3 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else if (0 < iVar3) {
      memset((this->BlendChannelResults).AllocatorInstance.Data,0,(longlong)iVar3 << 3);
    }
    local_4a0._24_8_ = &TStatId::TStatId_NAME_None;
    local_318.Prereqs.AllocatorInstance.SecondaryData =
         (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0;
    local_318.Prereqs.ArrayNum._0_1_ = '\0';
    local_318.Prereqs.ArrayNum._1_1_ = '\0';
    local_318.Prereqs.ArrayNum._2_1_ = '\0';
    local_318.Prereqs.ArrayNum._3_1_ = '\0';
    local_318.AllTasks.AllocatorInstance.SecondaryData =
         (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
    local_318.AllTasks.ArrayNum._0_1_ = '\0';
    local_318.AllTasks.ArrayNum._1_1_ = '\0';
    local_318.AllTasks.ArrayNum._2_1_ = '\0';
    local_318.AllTasks.ArrayNum._3_1_ = '\0';
    local_318.Prereqs.ArrayMax._0_1_ = '\x04';
    local_318.Prereqs.ArrayMax._1_1_ = '\0';
    local_318.Prereqs.ArrayMax._2_1_ = '\0';
    local_318.Prereqs.ArrayMax._3_1_ = '\0';
    local_318.AllTasks.ArrayMax._0_1_ = '\x04';
    local_318.AllTasks.ArrayMax._1_1_ = '\0';
    local_318.AllTasks.ArrayMax._2_1_ = '\0';
    local_318.AllTasks.ArrayMax._3_1_ = '\0';
    local_3f8 = pFVar8->BlendChannelInput;
    TStack_3f6 = this->ResultComponentID;
    local_4a0._16_8_ = 0;
    uStack_478 = 0x6ff;
    local_4c8.Value = (this->BlenderSystem->BlenderTypeTag).Value;
    uStack_3f0 = 0;
    pTStack_3e8 = &TStatId::TStatId_NAME_None;
    local_298._2_2_ = TStack_3f6;
    local_298._0_2_ = local_3f8;
    local_298[4] = TStack_3f4.Pad[0];
    local_298[5] = TStack_3f4.Pad[1];
    local_298[6] = TStack_3f4.Pad[2];
    local_298[7] = TStack_3f4.Pad[3];
    uStack_474 = uStack_474 & 0xffffff00;
    uStack_3e0 = CONCAT71(uStack_47f,local_480) & 0xffffffffffffffe0;
    uStack_3d8._4_4_ = uStack_474;
    uStack_3d8._0_4_ = 0x6ff;
    local_270.AllMask.Bits.NumBits = 0;
    uStack_290 = 0;
    local_270.AllMask.Bits.MaxBits = 0x180;
    local_270.NoneMask.Bits.NumBits = 0;
    local_288 = &TStatId::TStatId_NAME_None;
    local_270.NoneMask.Bits.MaxBits = 0x180;
    local_270.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_270.ComplexMasks.ArrayNum = 0;
    local_270.ComplexMasks.ArrayMax = 0;
    local_1c0 = 0;
    local_1bc = 0x180;
    local_188 = 0;
    local_184 = 0x180;
    local_480 = local_480 & 0xe0;
    uStack_280 = uStack_3e0;
    local_278 = uStack_3d8;
    AddAccessorToFilter((FComponentAccess *)local_298,&local_270);
    AddAccessorToFilter((FComponentAccess *)(local_298 + 2),&local_270);
    local_438._First = &local_4c8;
    local_438._Last = &local_4c6;
    FComponentMask::SetAll(&local_270.AllMask,&local_438);
    local_4c4.Value = (pFVar8->Tags).Ignored.Value;
    local_428._First = &local_4c4;
    local_428._Last = &local_4c2;
    FComponentMask::SetAll(&local_270.NoneMask,&local_428);
    FVar6 = UMovieSceneBlenderSystem::GetBlenderSystemID(this->BlenderSystem);
    TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<unsigned_char>_>
    ::
    Dispatch_PerEntity<UE::MovieScene::TSimpleBlenderGatherResults<unsigned_char,UE::MovieScene::FSimpleBlenderEnumResultTraits>,FMovieSceneBlenderSystemID,TArray<UE::MovieScene::TSimpleBlendResult<unsigned_char>,TSizedDefaultAllocator<32>_>_&>
              ((TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<unsigned_char>_>
                *)local_298,(FEntityManager *)local_4b0,(FSystemTaskPrerequisites *)this_00,
               (FSystemSubsequentTasks *)param_3,(FMovieSceneBlenderSystemID *)0x0,
               (TArray<UE::MovieScene::TSimpleBlendResult<unsigned_char>,TSizedDefaultAllocator<32>_>
                *)CONCAT71(extraout_var,FVar6.Value));
    if (local_270.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_270.ComplexMasks.AllocatorInstance.Data);
    }
    if ((FBaseGraphTask *)local_4b0._0_8_ != (FBaseGraphTask *)0x0) {
      FSystemTaskPrerequisites::AddComponentTask
                (&local_318,(FComponentTypeID)0xffff,(TRefCountPtr<FBaseGraphTask> *)local_4b0);
    }
    pTStack_460 = &TStatId::TStatId_NAME_None;
    local_3d0 = pFVar8->BlendChannelOutput;
    TStack_3ce = this->ResultComponentID;
    local_468[0] = '\0';
    local_468[1] = '\0';
    local_468[2] = '\0';
    local_468[3] = '\0';
    local_468[4] = '\0';
    local_468[5] = '\0';
    local_468[6] = '\0';
    local_468[7] = '\0';
    auStack_450._0_4_ = 0x6ff;
    local_4c0.Value = (this->BlenderSystem->BlenderTypeTag).Value;
    uStack_3c8 = 0;
    pTStack_3c0 = &TStatId::TStatId_NAME_None;
    local_178._2_2_ = TStack_3ce;
    local_178._0_2_ = local_3d0;
    local_178._4_4_ = uStack_3cc;
    auStack_450._4_4_ = auStack_450._4_4_ & 0xffffff00;
    uStack_3b8 = CONCAT71(auStack_457,local_458) & 0xffffffffffffffe0;
    uStack_3b0._4_4_ = auStack_450._4_4_;
    uStack_3b0._0_4_ = 0x6ff;
    local_150.AllMask.Bits.NumBits = 0;
    uStack_170 = 0;
    local_150.AllMask.Bits.MaxBits = 0x180;
    local_150.NoneMask.Bits.NumBits = 0;
    local_168 = &TStatId::TStatId_NAME_None;
    local_150.NoneMask.Bits.MaxBits = 0x180;
    local_150.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_150.ComplexMasks.ArrayNum = 0;
    local_150.ComplexMasks.ArrayMax = 0;
    local_a0 = 0;
    local_9c = 0x180;
    local_68 = 0;
    local_64 = 0x180;
    local_458 = local_458 & 0xe0;
    uStack_160 = uStack_3b8;
    local_158 = uStack_3b0;
    AddAccessorToFilter((FComponentAccess *)local_178,&local_150);
    AddAccessorToFilter((FComponentAccess *)(local_178 + 2),&local_150);
    local_418._First = &local_4c0;
    local_418._Last = &local_4be;
    FComponentMask::SetAll(&local_150.AllMask,&local_418);
    local_4bc.Value = (pFVar8->Tags).Ignored.Value;
    local_408._First = &local_4bc;
    local_408._Last = local_4ba;
    FComponentMask::SetAll(&local_150.NoneMask,&local_408);
    FVar6 = UMovieSceneBlenderSystem::GetBlenderSystemID(this->BlenderSystem);
    TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<unsigned_char>_>
    ::
    Dispatch_PerEntity<UE::MovieScene::TSimpleBlenderCombineResults<unsigned_char,UE::MovieScene::FSimpleBlenderEnumResultTraits>,FMovieSceneBlenderSystemID,TArray<UE::MovieScene::TSimpleBlendResult<unsigned_char>,TSizedDefaultAllocator<32>_>_&>
              ((TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<unsigned_char>_>
                *)local_178,(FEntityManager *)local_4a0,(FSystemTaskPrerequisites *)this_00,
               (FSystemSubsequentTasks *)&local_318,(FMovieSceneBlenderSystemID *)param_4,
               (TArray<UE::MovieScene::TSimpleBlendResult<unsigned_char>,TSizedDefaultAllocator<32>_>
                *)CONCAT71(extraout_var_00,FVar6.Value));
    if ((undefined8 *)local_4a0._0_8_ != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_4a0._0_8_ + 0x30);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (*(code *)**(undefined8 **)local_4a0._0_8_)(local_4a0._0_8_,1);
      }
    }
    if (local_150.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.ComplexMasks.AllocatorInstance.Data);
    }
    if ((FBaseGraphTask *)local_4b0._0_8_ != (FBaseGraphTask *)0x0) {
      LOCK();
      puVar2 = (undefined1 *)(local_4b0._0_8_ + 0x30);
      iVar3 = *(int *)puVar2;
      *(int *)puVar2 = *(int *)puVar2 + -1;
      UNLOCK();
      if ((iVar3 == 1) && ((FBaseGraphTask *)local_4b0._0_8_ != (FBaseGraphTask *)0x0)) {
        (*(code *)**(undefined8 **)local_4b0._0_8_)(local_4b0._0_8_,1);
      }
    }
    FVar9 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_318.AllTasks;
    if (local_318.AllTasks.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar9 = local_318.AllTasks.AllocatorInstance.SecondaryData;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>
              ((TRefCountPtr<FBaseGraphTask> *)FVar9,local_318.AllTasks.ArrayNum);
    if (local_318.AllTasks.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FMemory::Free((void *)local_318.AllTasks.AllocatorInstance.SecondaryData);
    }
    FVar10 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)&local_318;
    if (local_318.Prereqs.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
      FVar10 = local_318.Prereqs.AllocatorInstance.SecondaryData;
    }
    DestructItems<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite,int>
              ((FPrerequisite *)FVar10,local_318.Prereqs.ArrayNum);
    if (local_318.Prereqs.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
      FMemory::Free((void *)local_318.Prereqs.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// Run @ 1468682d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::MovieScene::TSimpleBlenderSystemImpl<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>::Run
          (TSimpleBlenderSystemImpl<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_> *this,
          UMovieSceneEntitySystemLinker *param_1,TBitArray<FDefaultBitArrayAllocator> *param_2,
          FSystemTaskPrerequisites *param_3,FSystemSubsequentTasks *param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  FScriptContainerElement *_Dst;
  code *pcVar4;
  bool bVar5;
  FMovieSceneBlenderSystemID FVar6;
  ECachedEntityManagerState EVar7;
  FBuiltInComponentTypes *pFVar8;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar9;
  ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite> FVar10;
  FEntityManager *this_00;
  undefined1 auStackY_508 [32];
  FComponentTypeID local_4c8;
  FComponentTypeID local_4c6;
  FComponentTypeID local_4c4;
  FComponentTypeID local_4c2;
  FComponentTypeID local_4c0;
  FComponentTypeID local_4be;
  FComponentTypeID local_4bc;
  FComponentTypeID local_4ba [5];
  undefined1 local_4b0 [16];
  undefined1 local_4a0 [32];
  byte local_480;
  undefined7 uStack_47f;
  undefined4 uStack_478;
  uint uStack_474;
  uchar local_468 [8];
  TStatIdData *pTStack_460;
  byte local_458;
  uchar auStack_457 [7];
  undefined1 auStack_450 [8];
  initializer_list<UE::MovieScene::FComponentTypeID> local_448;
  initializer_list<UE::MovieScene::FComponentTypeID> local_438;
  initializer_list<UE::MovieScene::FComponentTypeID> local_428;
  initializer_list<UE::MovieScene::FComponentTypeID> local_418;
  initializer_list<UE::MovieScene::FComponentTypeID> local_408;
  TComponentTypeID<FMovieSceneBlendChannelID> local_3f8;
  TComponentTypeID<bool> TStack_3f6;
  TTypeCompatibleBytes<unsigned_int> TStack_3f4;
  undefined8 uStack_3f0;
  TStatIdData *pTStack_3e8;
  ulonglong uStack_3e0;
  undefined8 uStack_3d8;
  TComponentTypeID<FMovieSceneBlendChannelID> local_3d0;
  TComponentTypeID<bool> TStack_3ce;
  undefined4 uStack_3cc;
  undefined8 uStack_3c8;
  TStatIdData *pTStack_3c0;
  ulonglong uStack_3b8;
  undefined8 uStack_3b0;
  FComponentTypeID local_3a8;
  ushort local_3a6;
  TComponentTypeID<FMovieSceneBlendChannelID> local_3a4;
  FComponentTypeID local_3a2 [5];
  undefined1 local_398 [72];
  undefined8 uStack_350;
  undefined1 local_348 [32];
  ForAnyElementType local_328;
  undefined8 uStack_320;
  FSystemTaskPrerequisites local_318;
  undefined1 local_298 [8];
  undefined8 uStack_290;
  TStatIdData *local_288;
  ulonglong uStack_280;
  undefined8 local_278;
  FEntityComponentFilter local_270;
  int local_1c0;
  int local_1bc;
  int local_188;
  int local_184;
  undefined1 local_178 [8];
  undefined8 uStack_170;
  TStatIdData *local_168;
  ulonglong uStack_160;
  undefined8 local_158;
  FEntityComponentFilter local_150;
  int local_a0;
  int local_9c;
  int local_68;
  int local_64;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_508;
  iVar3 = param_2->NumBits;
  local_4b0._8_8_ = param_4;
  if (iVar3 != 0) {
    pFVar8 = FBuiltInComponentTypes::Get();
    this_00 = &param_1->EntityManager;
    EVar7 = FCachedEntityManagerState::Update(&this->ChannelRelevancyCache,this_00);
    if (EVar7 == Stale) {
      (this->BlendChannelResults).ArrayNum = 0;
      if ((this->BlendChannelResults).ArrayMax < 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0,&(this->BlendChannelResults).AllocatorInstance,0,
                   &(this->BlendChannelResults).ArrayMax);
      }
      local_3a8.Value = *(ushort *)&this->ResultComponentID;
      local_348._16_8_ = 0;
      local_348._24_8_ = 0x18000000000;
      local_398[0x38] = '\0';
      local_398[0x39] = '\0';
      local_398[0x3a] = '\0';
      local_398[0x3b] = '\0';
      local_398[0x3c] = '\0';
      local_398[0x3d] = '\0';
      local_398[0x3e] = '\0';
      local_398[0x3f] = '\0';
      local_398._48_8_ = 0x18000000000;
      local_398[0] = '\0';
      local_398[1] = '\0';
      local_398[2] = '\0';
      local_398[3] = '\0';
      local_398[4] = '\0';
      local_398[5] = '\0';
      local_398[6] = '\0';
      local_398[7] = '\0';
      local_398._8_8_ = 0;
      local_328.Data = (FScriptContainerElement *)0x0;
      local_398._16_8_ = 0;
      local_398._24_8_ = 0;
      uStack_320._0_4_ = 0;
      uStack_320._4_4_ = 0;
      local_398._32_8_ = 0;
      local_398._40_8_ = 0;
      local_398._64_8_ = 0;
      uStack_350 = 0;
      local_348._0_8_ = 0;
      local_348._8_8_ = 0;
      local_3a6 = (this->BlenderSystem->BlenderTypeTag).Value;
      local_3a4 = pFVar8->BlendChannelInput;
      local_448._First = &local_3a8;
      local_448._Last = local_3a2;
      FComponentMask::SetAll((FComponentMask *)local_398,&local_448);
      bVar5 = FEntityManager::Contains(this_00,(FEntityComponentFilter *)local_398);
      if (local_328.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_328.Data);
      }
      if (bVar5) {
        TArray<UE::MovieScene::TSimpleBlendResult<bool>,TSizedDefaultAllocator<32>_>::SetNum
                  (&this->BlendChannelResults,iVar3,Default);
      }
    }
    iVar3 = (this->BlendChannelResults).ArrayNum;
    _Dst = (this->BlendChannelResults).AllocatorInstance.Data;
    if (iVar3 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    memset(_Dst,0,(longlong)iVar3 << 3);
    local_318.Prereqs.ArrayMax._0_1_ = '\x04';
    local_318.Prereqs.ArrayMax._1_1_ = '\0';
    local_318.Prereqs.ArrayMax._2_1_ = '\0';
    local_318.Prereqs.ArrayMax._3_1_ = '\0';
    local_318.Prereqs.AllocatorInstance.SecondaryData =
         (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0;
    local_318.Prereqs.ArrayNum._0_1_ = '\0';
    local_318.Prereqs.ArrayNum._1_1_ = '\0';
    local_318.Prereqs.ArrayNum._2_1_ = '\0';
    local_318.Prereqs.ArrayNum._3_1_ = '\0';
    local_318.AllTasks.AllocatorInstance.SecondaryData =
         (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
    local_318.AllTasks.ArrayNum._0_1_ = '\0';
    local_318.AllTasks.ArrayNum._1_1_ = '\0';
    local_318.AllTasks.ArrayNum._2_1_ = '\0';
    local_318.AllTasks.ArrayNum._3_1_ = '\0';
    local_318.AllTasks.ArrayMax._0_1_ = '\x04';
    local_318.AllTasks.ArrayMax._1_1_ = '\0';
    local_318.AllTasks.ArrayMax._2_1_ = '\0';
    local_318.AllTasks.ArrayMax._3_1_ = '\0';
    local_3f8 = pFVar8->BlendChannelInput;
    TStack_3f6 = this->ResultComponentID;
    local_4a0._16_8_ = 0;
    local_4a0._24_8_ = &TStatId::TStatId_NAME_None;
    local_4c8.Value = (this->BlenderSystem->BlenderTypeTag).Value;
    uStack_3f0 = 0;
    pTStack_3e8 = &TStatId::TStatId_NAME_None;
    uStack_478 = 0x6ff;
    local_298._2_2_ = TStack_3f6;
    local_298._0_2_ = local_3f8;
    local_298[4] = TStack_3f4.Pad[0];
    local_298[5] = TStack_3f4.Pad[1];
    local_298[6] = TStack_3f4.Pad[2];
    local_298[7] = TStack_3f4.Pad[3];
    uStack_474 = uStack_474 & 0xffffff00;
    uStack_3e0 = CONCAT71(uStack_47f,local_480) & 0xffffffffffffffe0;
    uStack_3d8._4_4_ = uStack_474;
    uStack_3d8._0_4_ = 0x6ff;
    local_270.AllMask.Bits.NumBits = 0;
    uStack_290 = 0;
    local_270.AllMask.Bits.MaxBits = 0x180;
    local_270.NoneMask.Bits.NumBits = 0;
    local_288 = &TStatId::TStatId_NAME_None;
    local_270.NoneMask.Bits.MaxBits = 0x180;
    local_270.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_270.ComplexMasks.ArrayNum = 0;
    local_270.ComplexMasks.ArrayMax = 0;
    local_1c0 = 0;
    local_1bc = 0x180;
    local_188 = 0;
    local_184 = 0x180;
    local_480 = local_480 & 0xe0;
    uStack_280 = uStack_3e0;
    local_278 = uStack_3d8;
    AddAccessorToFilter((FComponentAccess *)local_298,&local_270);
    AddAccessorToFilter((FComponentAccess *)(local_298 + 2),&local_270);
    local_438._First = &local_4c8;
    local_438._Last = &local_4c6;
    FComponentMask::SetAll(&local_270.AllMask,&local_438);
    local_4c4.Value = (pFVar8->Tags).Ignored.Value;
    local_428._First = &local_4c4;
    local_428._Last = &local_4c2;
    FComponentMask::SetAll(&local_270.NoneMask,&local_428);
    FVar6 = UMovieSceneBlenderSystem::GetBlenderSystemID(this->BlenderSystem);
    TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<bool>_>
    ::
    Dispatch_PerEntity<UE::MovieScene::TSimpleBlenderGatherResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>,FMovieSceneBlenderSystemID,TArray<UE::MovieScene::TSimpleBlendResult<bool>,TSizedDefaultAllocator<32>_>_&>
              ((TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<bool>_>
                *)local_298,(FEntityManager *)local_4b0,(FSystemTaskPrerequisites *)this_00,
               (FSystemSubsequentTasks *)param_3,(FMovieSceneBlenderSystemID *)0x0,
               (TArray<UE::MovieScene::TSimpleBlendResult<bool>,TSizedDefaultAllocator<32>_> *)
               CONCAT71(extraout_var,FVar6.Value));
    if (local_270.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_270.ComplexMasks.AllocatorInstance.Data);
    }
    if ((FBaseGraphTask *)local_4b0._0_8_ != (FBaseGraphTask *)0x0) {
      FSystemTaskPrerequisites::AddComponentTask
                (&local_318,(FComponentTypeID)0xffff,(TRefCountPtr<FBaseGraphTask> *)local_4b0);
    }
    local_3d0 = pFVar8->BlendChannelOutput;
    TStack_3ce = this->ResultComponentID;
    local_468[0] = '\0';
    local_468[1] = '\0';
    local_468[2] = '\0';
    local_468[3] = '\0';
    local_468[4] = '\0';
    local_468[5] = '\0';
    local_468[6] = '\0';
    local_468[7] = '\0';
    pTStack_460 = &TStatId::TStatId_NAME_None;
    local_4c0.Value = (this->BlenderSystem->BlenderTypeTag).Value;
    uStack_3c8 = 0;
    pTStack_3c0 = &TStatId::TStatId_NAME_None;
    auStack_450._0_4_ = 0x6ff;
    local_178._2_2_ = TStack_3ce;
    local_178._0_2_ = local_3d0;
    local_178._4_4_ = uStack_3cc;
    auStack_450._4_4_ = auStack_450._4_4_ & 0xffffff00;
    uStack_3b8 = CONCAT71(auStack_457,local_458) & 0xffffffffffffffe0;
    uStack_3b0._4_4_ = auStack_450._4_4_;
    uStack_3b0._0_4_ = 0x6ff;
    local_150.AllMask.Bits.NumBits = 0;
    uStack_170 = 0;
    local_150.AllMask.Bits.MaxBits = 0x180;
    local_150.NoneMask.Bits.NumBits = 0;
    local_168 = &TStatId::TStatId_NAME_None;
    local_150.NoneMask.Bits.MaxBits = 0x180;
    local_150.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_150.ComplexMasks.ArrayNum = 0;
    local_150.ComplexMasks.ArrayMax = 0;
    local_a0 = 0;
    local_9c = 0x180;
    local_68 = 0;
    local_64 = 0x180;
    local_458 = local_458 & 0xe0;
    uStack_160 = uStack_3b8;
    local_158 = uStack_3b0;
    AddAccessorToFilter((FComponentAccess *)local_178,&local_150);
    AddAccessorToFilter((FComponentAccess *)(local_178 + 2),&local_150);
    local_418._First = &local_4c0;
    local_418._Last = &local_4be;
    FComponentMask::SetAll(&local_150.AllMask,&local_418);
    local_4bc.Value = (pFVar8->Tags).Ignored.Value;
    local_408._First = &local_4bc;
    local_408._Last = local_4ba;
    FComponentMask::SetAll(&local_150.NoneMask,&local_408);
    FVar6 = UMovieSceneBlenderSystem::GetBlenderSystemID(this->BlenderSystem);
    TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<bool>_>
    ::
    Dispatch_PerEntity<UE::MovieScene::TSimpleBlenderCombineResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>,FMovieSceneBlenderSystemID,TArray<UE::MovieScene::TSimpleBlendResult<bool>,TSizedDefaultAllocator<32>_>_&>
              ((TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<bool>_>
                *)local_178,(FEntityManager *)local_4a0,(FSystemTaskPrerequisites *)this_00,
               (FSystemSubsequentTasks *)&local_318,(FMovieSceneBlenderSystemID *)local_4b0._8_8_,
               (TArray<UE::MovieScene::TSimpleBlendResult<bool>,TSizedDefaultAllocator<32>_> *)
               CONCAT71(extraout_var_00,FVar6.Value));
    if ((undefined8 *)local_4a0._0_8_ != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_4a0._0_8_ + 0x30);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (*(code *)**(undefined8 **)local_4a0._0_8_)(local_4a0._0_8_,1);
      }
    }
    if (local_150.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.ComplexMasks.AllocatorInstance.Data);
    }
    if ((FBaseGraphTask *)local_4b0._0_8_ != (FBaseGraphTask *)0x0) {
      LOCK();
      puVar2 = (undefined1 *)(local_4b0._0_8_ + 0x30);
      iVar3 = *(int *)puVar2;
      *(int *)puVar2 = *(int *)puVar2 + -1;
      UNLOCK();
      if ((iVar3 == 1) && ((FBaseGraphTask *)local_4b0._0_8_ != (FBaseGraphTask *)0x0)) {
        (*(code *)**(undefined8 **)local_4b0._0_8_)(local_4b0._0_8_,1);
      }
    }
    FVar9 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_318.AllTasks;
    if (local_318.AllTasks.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar9 = local_318.AllTasks.AllocatorInstance.SecondaryData;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>
              ((TRefCountPtr<FBaseGraphTask> *)FVar9,local_318.AllTasks.ArrayNum);
    if (local_318.AllTasks.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FMemory::Free((void *)local_318.AllTasks.AllocatorInstance.SecondaryData);
    }
    FVar10 = (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)&local_318;
    if (local_318.Prereqs.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
      FVar10 = local_318.Prereqs.AllocatorInstance.SecondaryData;
    }
    DestructItems<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite,int>
              ((FPrerequisite *)FVar10,local_318.Prereqs.ArrayNum);
    if (local_318.Prereqs.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::MovieScene::FSystemTaskPrerequisites::FPrerequisite>)0x0) {
      FMemory::Free((void *)local_318.Prereqs.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// Schedule @ 14686a050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::MovieScene::TSimpleBlenderSystemImpl<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>::
Schedule(TSimpleBlenderSystemImpl<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_> *this,
        UMovieSceneEntitySystemLinker *param_1,TBitArray<FDefaultBitArrayAllocator> *param_2,
        IEntitySystemScheduler *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FMovieSceneBlenderSystemID FVar4;
  FBuiltInComponentTypes *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  TStatId this_00;
  undefined1 auStackY_508 [32];
  FComponentTypeID local_4c8;
  FComponentTypeID local_4c6;
  FComponentTypeID local_4c4;
  FComponentTypeID local_4c2;
  FComponentTypeID local_4c0;
  FComponentTypeID local_4be;
  FComponentTypeID local_4bc;
  FComponentTypeID local_4ba [3];
  FTaskID local_4b4;
  FTaskID local_4b0;
  FTaskID local_4ac;
  TStatId local_4a8;
  undefined1 local_4a0 [16];
  TSharedPtr<UE::MovieScene::ITaskContext,1> local_490;
  byte local_480;
  undefined1 local_478 [16];
  ulonglong local_468;
  undefined1 local_460 [16];
  ulonglong local_450;
  undefined8 local_440;
  TStatIdData *pTStack_438;
  byte local_430;
  undefined7 uStack_42f;
  undefined4 uStack_428;
  uint uStack_424;
  undefined8 local_418;
  TStatIdData *pTStack_410;
  byte local_408;
  undefined7 uStack_407;
  undefined4 uStack_400;
  uint uStack_3fc;
  initializer_list<UE::MovieScene::FComponentTypeID> local_3f8;
  code *local_3e8;
  undefined1 local_3e0;
  initializer_list<UE::MovieScene::FComponentTypeID> local_3d8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_3c8;
  code *local_3b8;
  undefined1 local_3b0;
  initializer_list<UE::MovieScene::FComponentTypeID> local_3a8;
  initializer_list<UE::MovieScene::FComponentTypeID> local_398;
  code *local_388;
  undefined1 local_380;
  TComponentTypeID<FMovieSceneBlendChannelID> local_378;
  TComponentTypeID<bool> TStack_376;
  TTypeCompatibleBytes<unsigned_int> TStack_374;
  undefined8 uStack_370;
  TStatIdData *pTStack_368;
  ulonglong uStack_360;
  undefined8 uStack_358;
  TComponentTypeID<FMovieSceneBlendChannelID> local_350;
  TComponentTypeID<bool> TStack_34e;
  undefined4 uStack_34c;
  undefined8 uStack_348;
  TStatIdData *pTStack_340;
  ulonglong uStack_338;
  undefined8 uStack_330;
  FComponentTypeID local_328;
  ushort local_326;
  TComponentTypeID<FMovieSceneBlendChannelID> local_324;
  FComponentTypeID local_322 [5];
  FEntityComponentFilter local_318;
  undefined1 local_298 [8];
  undefined8 uStack_290;
  TStatIdData *local_288;
  ulonglong uStack_280;
  undefined8 local_278;
  FEntityComponentFilter local_270;
  int local_1c0;
  int local_1bc;
  int local_188;
  int local_184;
  undefined1 local_178 [8];
  undefined8 uStack_170;
  TStatIdData *local_168;
  ulonglong uStack_160;
  undefined8 local_158;
  FEntityComponentFilter local_150;
  int local_a0;
  int local_9c;
  int local_68;
  int local_64;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_508;
  iVar1 = param_2->NumBits;
  if (iVar1 != 0) {
    pFVar5 = FBuiltInComponentTypes::Get();
    (this->BlendChannelResults).ArrayNum = 0;
    if ((this->BlendChannelResults).ArrayMax < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&(this->BlendChannelResults).AllocatorInstance,0,
                 &(this->BlendChannelResults).ArrayMax);
    }
    local_328.Value = *(ushort *)&this->ResultComponentID;
    local_318.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
    local_318.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
    local_318.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
    local_318.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
    local_318.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
    local_318.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
    local_318.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
    local_318.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
    local_318.NoneMask.Bits.NumBits._0_1_ = '\0';
    local_318.NoneMask.Bits.NumBits._1_1_ = '\0';
    local_318.NoneMask.Bits.NumBits._2_1_ = '\0';
    local_318.NoneMask.Bits.NumBits._3_1_ = '\0';
    local_318.NoneMask.Bits.MaxBits._0_1_ = 0x80;
    local_318.NoneMask.Bits.MaxBits._1_1_ = '\x01';
    local_318.NoneMask.Bits.MaxBits._2_1_ = '\0';
    local_318.NoneMask.Bits.MaxBits._3_1_ = '\0';
    local_318.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
    local_318.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
    local_318.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
    local_318.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
    local_318.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
    local_318.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
    local_318.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
    local_318.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
    local_318.AllMask.Bits.NumBits._0_1_ = '\0';
    local_318.AllMask.Bits.NumBits._1_1_ = '\0';
    local_318.AllMask.Bits.NumBits._2_1_ = '\0';
    local_318.AllMask.Bits.NumBits._3_1_ = '\0';
    local_318.AllMask.Bits.MaxBits._0_1_ = 0x80;
    local_318.AllMask.Bits.MaxBits._1_1_ = '\x01';
    local_318.AllMask.Bits.MaxBits._2_1_ = '\0';
    local_318.AllMask.Bits.MaxBits._3_1_ = '\0';
    local_318.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
    local_318.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
    local_318.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
    local_318.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
    local_318.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
    local_318.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
    local_318.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
    local_318.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
    local_318.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
    local_318.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
    local_318.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
    local_318.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
    local_318.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
    local_318.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
    local_318.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
    local_318.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
    local_318.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_318.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
    local_318.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
    local_318.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
    local_318.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
    local_318.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
    local_318.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
    local_318.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
    local_318.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
    local_318.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
    local_318.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
    local_318.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
    local_318.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
    local_318.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
    local_318.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
    local_318.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
    local_318.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
    local_318.ComplexMasks.ArrayNum = 0;
    local_318.ComplexMasks.ArrayMax = 0;
    local_318.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
    local_318.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
    local_318.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
    local_318.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
    local_318.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
    local_318.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
    local_318.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
    local_318.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
    local_318.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
    local_318.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
    local_318.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
    local_318.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
    local_318.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
    local_318.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
    local_318.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
    local_318.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
    local_318.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
    local_318.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
    local_318.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
    local_318.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
    local_318.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
    local_318.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
    local_318.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
    local_318.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
    local_318.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
    local_318.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
    local_318.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
    local_318.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
    local_318.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
    local_318.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
    local_318.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
    local_318.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
    local_318.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
    local_318.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
    local_318.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
    local_318.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
    local_318.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
    local_318.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
    local_318.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
    local_318.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
    local_318.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
    local_318.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
    local_318.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
    local_318.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
    local_318.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
    local_318.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
    local_318.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
    local_318.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
    local_326 = (this->BlenderSystem->BlenderTypeTag).Value;
    local_324 = pFVar5->BlendChannelInput;
    local_3f8._First = &local_328;
    local_3f8._Last = local_322;
    FComponentMask::SetAll(&local_318.AllMask,&local_3f8);
    this_00.StatIdPtr = (TStatIdData *)&param_1->EntityManager;
    local_4a8.StatIdPtr = this_00.StatIdPtr;
    bVar3 = FEntityManager::Contains((FEntityManager *)this_00.StatIdPtr,&local_318);
    if (local_318.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_318.ComplexMasks.AllocatorInstance.Data);
    }
    if (bVar3) {
      TArray<UE::MovieScene::TSimpleBlendResult<bool>,TSizedDefaultAllocator<32>_>::SetNum
                (&this->BlendChannelResults,iVar1,Default);
    }
    local_480 = local_480 & 0xe0;
    local_490.Object = (ITaskContext *)0x1513403d0;
    local_3e0 = 0;
    local_490.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)&TStatId::TStatId_NAME_None;
    local_3e8 = TMemberFunctionTaskWrapper<UE::MovieScene::TSimpleBlenderSystemImpl<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>_>
                ::Execute;
    pTVar6 = ::operator_new(0x28);
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      pTVar6 = (TReferenceControllerBase<1> *)0x0;
      local_4a0._0_8_ = ___xmm_00000000000000000000000000000010;
      local_4a0._8_8_ = _UNK_150651568;
    }
    else {
      pTVar6->SharedReferenceCount = (atomic<int>)0x1;
      pTVar6->WeakReferenceCount = (atomic<int>)0x1;
      pTVar6->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_U__TMemberFunctionTaskWrapper_V__TSimpleBlenderSystemImpl__NU__TSimpleBlendResultTraits__N_MovieScene_UE___MovieScene_UE___MovieScene_UE___00_SharedPointerInternals__6B_
      ;
      pTVar6[1]._padding_ =
           (longlong)
           &
           ___7__TMemberFunctionTaskWrapper_V__TSimpleBlenderSystemImpl__NU__TSimpleBlendResultTraits__N_MovieScene_UE___MovieScene_UE___MovieScene_UE__6B_
      ;
      pTVar6[2]._padding_ = (longlong)ZeroAccumulationBuffers;
      *(TSimpleBlenderSystemImpl<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_> **)
       &pTVar6[1].SharedReferenceCount = this;
      if (pTVar6 + 1 == (TReferenceControllerBase<1> *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      this_00.StatIdPtr = local_4a8.StatIdPtr;
      local_4a0._0_8_ = pTVar6 + 1;
      local_4a0._8_8_ = pTVar6;
    }
    IEntitySystemScheduler::AddTask
              (param_3,(FTaskParams *)&local_4b0,&local_490,
               (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                *)local_4a0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    pTStack_438 = &TStatId::TStatId_NAME_None;
    local_378 = pFVar5->BlendChannelInput;
    TStack_376 = this->ResultComponentID;
    local_440 = 0;
    uStack_428 = 0x6ff;
    local_4c8.Value = (this->BlenderSystem->BlenderTypeTag).Value;
    uStack_370 = 0;
    pTStack_368 = &TStatId::TStatId_NAME_None;
    local_298._2_2_ = TStack_376;
    local_298._0_2_ = local_378;
    local_298[4] = TStack_374.Pad[0];
    local_298[5] = TStack_374.Pad[1];
    local_298[6] = TStack_374.Pad[2];
    local_298[7] = TStack_374.Pad[3];
    uStack_424 = uStack_424 & 0xffffff00;
    uStack_360 = CONCAT71(uStack_42f,local_430) & 0xffffffffffffffe0;
    uStack_358._4_4_ = uStack_424;
    uStack_358._0_4_ = 0x6ff;
    local_270.AllMask.Bits.NumBits = 0;
    uStack_290._0_1_ = '\0';
    uStack_290._1_1_ = '\0';
    uStack_290._2_1_ = '\0';
    uStack_290._3_1_ = '\0';
    uStack_290._4_1_ = '\0';
    uStack_290._5_1_ = '\0';
    uStack_290._6_1_ = '\0';
    uStack_290._7_1_ = '\0';
    local_270.AllMask.Bits.MaxBits = 0x180;
    local_270.NoneMask.Bits.NumBits = Locked;
    local_288 = &TStatId::TStatId_NAME_None;
    local_270.NoneMask.Bits.MaxBits = 0x180;
    local_270.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_270.ComplexMasks.ArrayNum = 0;
    local_270.ComplexMasks.ArrayMax = 0;
    local_1c0 = 0;
    local_1bc = 0x180;
    local_188 = 0;
    local_184 = 0x180;
    local_430 = local_430 & 0xe0;
    uStack_280 = uStack_360;
    local_278 = uStack_358;
    AddAccessorToFilter((FComponentAccess *)local_298,&local_270);
    AddAccessorToFilter((FComponentAccess *)(local_298 + 2),&local_270);
    local_3d8._First = &local_4c8;
    local_3d8._Last = &local_4c6;
    FComponentMask::SetAll(&local_270.AllMask,&local_3d8);
    local_4c4.Value = (pFVar5->Tags).Ignored.Value;
    local_3c8._First = &local_4c4;
    local_3c8._Last = &local_4c2;
    FComponentMask::SetAll(&local_270.NoneMask,&local_3c8);
    FVar4 = UMovieSceneBlenderSystem::GetBlenderSystemID(this->BlenderSystem);
    local_3b0 = 3;
    local_468 = uStack_280 | 2;
    local_478._8_8_ = local_288;
    local_478._0_8_ =
         L"struct UE::MovieScene::TSimpleBlenderGatherResults<bool,struct UE::MovieScene::TSimpleBlendResultTraits<bool> >"
    ;
    local_3b8 = TScheduledEntityTask<UE::MovieScene::TSimpleBlenderGatherResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<bool>_>
                ::ScheduledRun_PerEntity;
    TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<bool>_>
    ::
    ScheduleImpl<UE::MovieScene::TSimpleBlenderGatherResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>,FMovieSceneBlenderSystemID,TArray<UE::MovieScene::TSimpleBlendResult<bool>,TSizedDefaultAllocator<32>_>_&>
              ((TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<bool>_>
                *)local_298,(FEntityManager *)&local_4b4,(IEntitySystemScheduler *)this_00.StatIdPtr
               ,(FTaskParams *)param_3,
               (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                *)local_478,(FMovieSceneBlenderSystemID *)&local_3b8,
               (TArray<UE::MovieScene::TSimpleBlendResult<bool>,TSizedDefaultAllocator<32>_> *)
               CONCAT71(extraout_var,FVar4.Value));
    if (local_270.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_270.ComplexMasks.AllocatorInstance.Data);
    }
    IEntitySystemScheduler::AddPrerequisite(param_3,local_4b0,local_4b4);
    pTStack_410 = &TStatId::TStatId_NAME_None;
    local_350 = pFVar5->BlendChannelOutput;
    TStack_34e = this->ResultComponentID;
    local_418 = 0;
    uStack_400 = 0x6ff;
    local_4c0.Value = (this->BlenderSystem->BlenderTypeTag).Value;
    uStack_348 = 0;
    pTStack_340 = &TStatId::TStatId_NAME_None;
    local_178._2_2_ = TStack_34e;
    local_178._0_2_ = local_350;
    local_178._4_4_ = uStack_34c;
    uStack_3fc = uStack_3fc & 0xffffff00;
    uStack_338 = CONCAT71(uStack_407,local_408) & 0xffffffffffffffe0;
    uStack_330._4_4_ = uStack_3fc;
    uStack_330._0_4_ = 0x6ff;
    local_150.AllMask.Bits.NumBits = 0;
    uStack_170 = 0;
    local_150.AllMask.Bits.MaxBits = 0x180;
    local_150.NoneMask.Bits.NumBits = 0;
    local_168 = &TStatId::TStatId_NAME_None;
    local_150.NoneMask.Bits.MaxBits = 0x180;
    local_150.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_150.ComplexMasks.ArrayNum = 0;
    local_150.ComplexMasks.ArrayMax = 0;
    local_a0 = 0;
    local_9c = 0x180;
    local_68 = 0;
    local_64 = 0x180;
    local_408 = local_408 & 0xe0;
    uStack_160 = uStack_338;
    local_158 = uStack_330;
    AddAccessorToFilter((FComponentAccess *)local_178,&local_150);
    AddAccessorToFilter((FComponentAccess *)(local_178 + 2),&local_150);
    local_3a8._First = &local_4c0;
    local_3a8._Last = &local_4be;
    FComponentMask::SetAll(&local_150.AllMask,&local_3a8);
    local_4bc.Value = (pFVar5->Tags).Ignored.Value;
    local_398._First = &local_4bc;
    local_398._Last = local_4ba;
    FComponentMask::SetAll(&local_150.NoneMask,&local_398);
    FVar4 = UMovieSceneBlenderSystem::GetBlenderSystemID(this->BlenderSystem);
    local_450 = uStack_160 & 0xfffffffffffffffd;
    local_460._8_8_ = local_168;
    local_460._0_8_ =
         L"struct UE::MovieScene::TSimpleBlenderCombineResults<bool,struct UE::MovieScene::TSimpleBlendResultTraits<bool> >"
    ;
    local_388 = TScheduledEntityTask<UE::MovieScene::TSimpleBlenderCombineResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<bool>_>
                ::ScheduledRun_PerEntity;
    local_380 = 3;
    TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<bool>_>
    ::
    ScheduleImpl<UE::MovieScene::TSimpleBlenderCombineResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>,FMovieSceneBlenderSystemID,TArray<UE::MovieScene::TSimpleBlendResult<bool>,TSizedDefaultAllocator<32>_>_&>
              ((TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<bool>_>
                *)local_178,(FEntityManager *)&local_4ac,(IEntitySystemScheduler *)this_00.StatIdPtr
               ,(FTaskParams *)param_3,
               (TVariant<void_(__cdecl*)(UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocation_const_*,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext),void_(__cdecl*)(UE::MovieScene::FEntityAllocationProxy,TArrayView<TRelativePtr<void,unsigned_int>_const_,int>,UE::MovieScene::ITaskContext_const_*,UE::MovieScene::FEntityAllocationWriteContext)>
                *)local_460,(FMovieSceneBlenderSystemID *)&local_388,
               (TArray<UE::MovieScene::TSimpleBlendResult<bool>,TSizedDefaultAllocator<32>_> *)
               CONCAT71(extraout_var_00,FVar4.Value));
    if (local_150.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.ComplexMasks.AllocatorInstance.Data);
    }
    IEntitySystemScheduler::AddPrerequisite(param_3,local_4b4,local_4ac);
  }
  return;
}

// ZeroAccumulationBuffers @ 146875180

void __thiscall
UE::MovieScene::TSimpleBlenderSystemImpl<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>::
ZeroAccumulationBuffers
          (TSimpleBlenderSystemImpl<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_> *this)

{
  int iVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  
  iVar1 = (this->BlendChannelResults).ArrayNum;
  _Dst = (this->BlendChannelResults).AllocatorInstance.Data;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  memset(_Dst,0,(longlong)iVar1 << 3);
  return;
}

