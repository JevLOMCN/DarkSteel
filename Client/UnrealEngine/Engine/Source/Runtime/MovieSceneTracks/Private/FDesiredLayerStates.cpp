// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 5

// operator() @ 146812910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
`UE::MovieScene::FDesiredLayerStates::Apply'::__l2::<lambda_1>::operator()
          (void *this,UDataLayerInstance *param_1,EDataLayerRuntimeState param_2,bool param_3)

{
  code *pcVar1;
  ForAnyElementType _Src;
  uint uVar2;
  void *_Src_00;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  UWorld *this_00;
  UWorldPartition *this_01;
  EWorldPartitionRuntimeCellState EVar7;
  longlong lVar8;
  undefined1 auStackY_2c8 [32];
  TArray<FWorldPartitionStreamingQuerySource,TSizedDefaultAllocator<32>_> local_278;
  undefined1 local_268 [16];
  double local_258;
  double dStack_250;
  double local_248;
  undefined4 local_240;
  undefined1 local_23c;
  ForAnyElementType local_238;
  undefined8 local_230;
  undefined2 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 local_208;
  undefined1 local_200 [32];
  void *local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  ForElementType<FSetElementId> local_1c0;
  int local_1b8;
  undefined1 local_1b0 [32];
  void *local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  ForElementType<FSetElementId> local_170;
  int local_168;
  void *local_160;
  undefined8 local_158;
  TVector<double>_u_0 local_148;
  undefined4 local_130;
  undefined1 local_12c;
  ForAnyElementType local_128;
  int local_120;
  int local_11c;
  undefined1 local_118;
  undefined1 local_117;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined1 local_f8;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_f0;
  TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator> local_a0;
  ForAnyElementType local_50;
  int local_48;
  int local_44 [3];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  if (param_2 == Unloaded) {
    EVar7 = Unloaded;
  }
  else if (param_2 == Loaded) {
    EVar7 = Loaded;
  }
  else {
    if (param_2 != Activated) {
      if (1 < (byte)LogMovieScene._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
      }
      return true;
    }
    EVar7 = Activated;
  }
  local_258 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_250 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_248 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_220 = 0;
  local_1d8 = ___xmm_00000000ffffffff0000008000000000;
  uStack_1d0 = _UNK_150631d98;
  local_188 = ___xmm_00000000ffffffff0000008000000000;
  uStack_180 = _UNK_150631d98;
  local_240 = 0;
  local_23c = 1;
  local_238.Data = (FScriptContainerElement *)0x0;
  local_230 = 0;
  uStack_218 = 0;
  uStack_210 = 0;
  local_208 = 0;
  local_200._0_8_ = (FScriptContainerElement *)0x0;
  local_200._8_8_ = 0;
  local_1e0 = (void *)0x0;
  local_1c0 = (ForElementType<FSetElementId>)0x0;
  local_1b8 = 0;
  local_1b0._0_8_ = (FScriptContainerElement *)0x0;
  local_1b0._8_8_ = 0;
  local_190 = (void *)0x0;
  local_170 = (ForElementType<FSetElementId>)0x0;
  local_168 = 0;
  local_160 = (void *)0x0;
  local_158 = 0;
  local_228 = 1;
  pFVar6 = (FScriptContainerElement *)(**(code **)(param_1->_padding_ + 800))(param_1,local_268);
  if (((local_238.Data <= pFVar6) && (pFVar6 < local_238.Data + (longlong)local_230._4_4_ * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  iVar5 = (int)local_230;
  if ((int)local_230 == local_230._4_4_) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&local_238,(int *)((longlong)&local_230 + 4));
  }
  local_230 = CONCAT44(local_230._4_4_,iVar5 + 1);
  *(undefined8 *)(local_238.Data + (longlong)iVar5 * 8) = *(undefined8 *)pFVar6;
  this_00 = (UWorld *)(**(code **)(param_1->_padding_ + 0x2b0))(param_1);
  this_01 = UWorld::GetWorldPartition(this_00);
  _Src.Data = local_238.Data;
  lVar8 = (longlong)(int)local_230;
  local_148._s_0.X = local_258;
  local_148._s_0.Y = dStack_250;
  local_130 = local_240;
  local_148._s_0.Z = local_248;
  local_12c = local_23c;
  local_128.Data = (FScriptContainerElement *)0x0;
  local_120 = (int)local_230;
  if ((int)local_230 == 0) {
    local_11c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,(int)local_230,0,&local_128,(int)local_230,&local_11c);
    memcpy(local_128.Data,_Src.Data,lVar8 << 3);
  }
  local_118 = (undefined1)local_228;
  local_117 = local_228._1_1_;
  local_110 = local_220;
  uStack_108 = uStack_218;
  local_f8 = local_208;
  local_100 = uStack_210;
  local_f0.Elements._0_8_ = 0;
  local_f0.Elements._8_8_ = 0;
  local_f0.Elements._32_8_ = 0;
  local_f0.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_f0.Elements._48_8_ = _UNK_150631d98;
  local_f0.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_f0.HashSize = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::operator=
            (&local_f0,(TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_200);
  local_a0.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_a0.Elements._48_8_ = _UNK_150631d98;
  local_a0.Elements._0_8_ = 0;
  local_a0.Elements._8_8_ = 0;
  local_a0.Elements._32_8_ = 0;
  local_a0.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_a0.HashSize = 0;
  TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>::operator=
            (&local_a0,
             (TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator> *)
             local_1b0);
  _Src_00 = local_160;
  lVar8 = (longlong)(int)local_158;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = (int)local_158;
  if ((int)local_158 == 0) {
    local_44[0] = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,(int)local_158,0,&local_50,(int)local_158,local_44);
    memcpy(local_50.Data,_Src_00,lVar8 * 0x48);
  }
  local_278.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_278.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x108,8,1,0,&local_278.AllocatorInstance,1,&local_278.ArrayMax);
  ConstructItems<FWorldPartitionStreamingQuerySource,FWorldPartitionStreamingQuerySource,int>
            (local_278.AllocatorInstance.Data,(FWorldPartitionStreamingQuerySource *)&local_148._s_0
             ,1);
  bVar3 = UWorldPartition::IsStreamingCompleted(this_01,EVar7,&local_278,param_3);
  DestructItems<FWorldPartitionStreamingQuerySource,int>
            ((FWorldPartitionStreamingQuerySource *)local_278.AllocatorInstance.Data,
             local_278.ArrayNum);
  if ((FWorldPartitionStreamingQuerySource *)local_278.AllocatorInstance.Data !=
      (FWorldPartitionStreamingQuerySource *)0x0) {
    FMemory::Free(local_278.AllocatorInstance.Data);
  }
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  local_a0.HashSize = 0;
  if (local_a0.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a0.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_a0.Elements);
  local_f0.HashSize = 0;
  if (local_f0.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_f0.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_f0.Elements);
  if (local_128.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data);
  }
  if (local_160 != (void *)0x0) {
    FMemory::Free(local_160);
  }
  local_168 = 0;
  if (local_170 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_170);
  }
  TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FSoftObjectPath>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_1b0,0,local_1b0._8_4_);
  iVar5 = SUB84(local_1b0._8_8_,4);
  local_1b0._8_8_ = local_1b0._8_8_ & 0xffffffff00000000;
  if (iVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_1b0,0,(int *)(local_1b0 + 0xc));
  }
  uVar2 = local_188._4_4_;
  uStack_180 = 0xffffffff;
  local_188 = (ulonglong)local_188._4_4_ << 0x20;
  if (0x80 < uVar2) {
    local_188 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_1b0 + 0x10),0);
  }
  if (local_190 != (void *)0x0) {
    FMemory::Free(local_190);
  }
  if ((FScriptContainerElement *)local_1b0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1b0._0_8_);
  }
  local_1b8 = 0;
  if (local_1c0 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1c0);
  }
  iVar5 = SUB84(local_200._8_8_,4);
  local_200._8_8_ = local_200._8_8_ & 0xffffffff00000000;
  if (iVar5 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_200,0,(int *)(local_200 + 0xc));
  }
  uVar2 = local_1d8._4_4_;
  local_1d8 = (ulonglong)local_1d8._4_4_ << 0x20;
  uStack_1d0 = 0xffffffff;
  if (0x80 < uVar2) {
    local_1d8 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_200 + 0x10),0);
  }
  if (local_1e0 != (void *)0x0) {
    FMemory::Free(local_1e0);
  }
  if ((FScriptContainerElement *)local_200._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_200._0_8_);
  }
  if (local_238.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.Data);
  }
  return bVar3;
}

// Apply @ 14681bfa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EDataLayerUpdateFlags __thiscall
UE::MovieScene::FDesiredLayerStates::Apply
          (FDesiredLayerStates *this,FPreAnimatedDataLayerStorage *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  EDataLayerUpdateFlags EVar7;
  char cVar8;
  ushort uVar9;
  int iVar10;
  longlong lVar11;
  UDataLayerInstance *pUVar12;
  UWorldPartition *this_00;
  UDataLayerManager *this_01;
  UEnum *pUVar13;
  FText *pFVar14;
  FString *pFVar15;
  undefined8 *puVar16;
  TRefCountPtr<ITextData> TVar17;
  ulonglong uVar18;
  EDataLayerRuntimeState EVar19;
  long64 lVar20;
  wchar_t *pwVar21;
  wchar_t *pwVar22;
  uint uVar23;
  undefined1 auStackY_21a8 [32];
  undefined1 local_2178 [8];
  FWeakObjectPtr local_2170;
  longlong *local_2168;
  undefined1 auStack_2160 [16];
  uint uStack_2150;
  uint uStack_214c;
  longlong local_2148;
  TSet<TTuple<TObjectKey<UDataLayerInstance>,UE::MovieScene::FDataLayerState>,TDefaultMapHashableKeyFuncs<TObjectKey<UDataLayerInstance>,UE::MovieScene::FDataLayerState,0>,FDefaultSetAllocator>
  *pTStack_2140;
  TSet<TTuple<TObjectKey<UDataLayerInstance>,UE::MovieScene::FDataLayerState>,TDefaultMapHashableKeyFuncs<TObjectKey<UDataLayerInstance>,UE::MovieScene::FDataLayerState,0>,FDefaultSetAllocator>
  *local_2138;
  char local_2130;
  char cStack_212f;
  void *local_2128 [2];
  FText local_2118;
  void *local_2108 [2];
  FText local_20f8;
  void *local_20e8 [2];
  FText local_20d8;
  void *local_20c8 [2];
  FText local_20b8;
  void *local_20a8 [2];
  FText local_2098;
  void *local_2088 [2];
  FText local_2078;
  undefined1 local_2068 [32];
  longlong local_2048;
  TSet<TTuple<TObjectKey<UDataLayerInstance>,UE::MovieScene::FDataLayerState>,TDefaultMapHashableKeyFuncs<TObjectKey<UDataLayerInstance>,UE::MovieScene::FDataLayerState,0>,FDefaultSetAllocator>
  *pTStack_2040;
  uchar local_2038 [4096];
  uchar local_1038 [4096];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_21a8;
  EVar7 = None;
  TSet<TTuple<TObjectKey<UDataLayerInstance>,UE::MovieScene::FDataLayerState>,TDefaultMapHashableKeyFuncs<TObjectKey<UDataLayerInstance>,UE::MovieScene::FDataLayerState,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_2068,
             (TSet<TTuple<TObjectKey<UDataLayerInstance>,UE::MovieScene::FDataLayerState>,TDefaultMapHashableKeyFuncs<TObjectKey<UDataLayerInstance>,UE::MovieScene::FDataLayerState,0>,FDefaultSetAllocator>
              *)this);
  local_2130 = '\0';
  cStack_212f = '\0';
  stack0xffffffffffffdea8 = local_2068._16_16_;
  local_2168 = (longlong *)local_2068._0_8_;
  auStack_2160._0_8_ = local_2068._8_8_;
  local_2148 = local_2048;
  pTStack_2140 = pTStack_2040;
  uVar18 = local_2068._24_8_ >> 0x20;
  uVar23 = local_2068._28_4_;
  local_2138 = (TSet<TTuple<TObjectKey<UDataLayerInstance>,UE::MovieScene::FDataLayerState>,TDefaultMapHashableKeyFuncs<TObjectKey<UDataLayerInstance>,UE::MovieScene::FDataLayerState,0>,FDefaultSetAllocator>
                *)this;
  if ((int)uVar23 < *(int *)(local_2068._16_8_ + 0x18)) {
    do {
      lVar3 = *local_2168;
      lVar11 = (longlong)(int)uVar18;
      iVar10 = *(int *)(lVar3 + 0x10 + lVar11 * 0x24);
      lVar1 = lVar3 + lVar11 * 0x24;
      iVar2 = *(int *)(lVar3 + 0x14 + lVar11 * 0x24);
      if (iVar2 + iVar10 + *(int *)(lVar1 + 0xc) == 0) {
        TSet<TTuple<TObjectKey<UDataLayerInstance>,UE::MovieScene::FDataLayerState>,TDefaultMapHashableKeyFuncs<TObjectKey<UDataLayerInstance>,UE::MovieScene::FDataLayerState,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_2140,(int)uVar18);
        local_2130 = '\x01';
      }
      else {
        if (iVar2 < 1) {
          if (iVar10 < 1) {
            if (*(int *)(lVar1 + 0xc) < 1) goto LAB_14681c5ae;
            lVar20 = 0;
          }
          else {
            lVar20 = 1;
          }
        }
        else {
          lVar20 = 2;
        }
        uVar4 = *(undefined8 *)(lVar3 + (longlong)(int)uVar23 * 0x24);
        local_2170.ObjectIndex = (int)uVar4;
        local_2170.ObjectSerialNumber = (int)((ulonglong)uVar4 >> 0x20);
        pUVar12 = (UDataLayerInstance *)FWeakObjectPtr::Get(&local_2170);
        if (pUVar12 == (UDataLayerInstance *)0x0) {
          bVar6 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_5079450867980041912>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneDataLayerSystem.cpp"
                             ,0x148,"DataLayer");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            EVar7 = (*pcVar5)();
            return EVar7;
          }
        }
        else {
          if (param_1 != (FPreAnimatedDataLayerStorage *)0x0) {
            FPreAnimatedDataLayerStorage::SavePreAnimatedState(param_1,pUVar12);
          }
          if (((uint)pUVar12->_padding_ >> 0x1e & 1) == 0) {
            if (((uint)pUVar12->_padding_ >> 0x1e & 1) == 0) {
              this_00 = FWorldPartitionHelpersPrivate::GetWorldPartitionFromObject
                                  ((UObject *)pUVar12);
            }
            else {
              this_00 = (UWorldPartition *)0x0;
            }
            if (this_00 == (UWorldPartition *)0x0) goto LAB_14681c13f;
            this_01 = UWorldPartition::GetDataLayerManager(this_00);
          }
          else {
LAB_14681c13f:
            this_01 = (UDataLayerManager *)0x0;
          }
          EVar19 = (EDataLayerRuntimeState)lVar20;
          bVar6 = UDataLayerManager::SetDataLayerInstanceRuntimeState(this_01,pUVar12,EVar19,false);
          if (bVar6) {
            if (EVar19 == Unloaded) {
              cVar8 = *(char *)(lVar1 + 0x18);
            }
            else {
              if (EVar19 != Activated) goto LAB_14681c5ae;
              cVar8 = *(char *)(lVar1 + 0x19);
            }
            if ((cVar8 != '\0') &&
               (bVar6 = `UE::MovieScene::FDesiredLayerStates::Apply'::__l2::<lambda_1>::operator()
                                  (local_2178,pUVar12,EVar19,true), !bVar6)) {
              if ((EVar19 != Activated) ||
                 (bVar6 = `UE::MovieScene::FDesiredLayerStates::Apply'::__l2::<lambda_1>::operator()
                                    (local_2178,pUVar12,Loaded,false), bVar6)) {
                EVar7 = EVar7 | FlushStreamingVisibility;
                if (4 < (byte)LogMovieScene._0_1_) {
                  pUVar13 = StaticEnum<enum_EDataLayerRuntimeState>();
                  pFVar14 = UEnum::GetDisplayNameTextByValue(pUVar13,&local_20b8,lVar20);
                  FText::ToString(pFVar14);
                  (**(code **)(pUVar12->_padding_ + 0x2e0))(pUVar12,local_20c8);
                  Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
                  if (local_20c8[0] != (void *)0x0) {
                    FMemory::Free(local_20c8[0]);
                  }
                  if (local_20b8.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_20b8.TextData.Reference + 0x10))();
                  }
                }
                pUVar13 = StaticEnum<enum_EDataLayerRuntimeState>();
                pFVar14 = UEnum::GetDisplayNameTextByValue(pUVar13,&local_2098,lVar20);
                FText::ToString(pFVar14);
                (**(code **)(pUVar12->_padding_ + 0x2e0))(pUVar12,local_20a8);
                FCsvProfiler::RecordEventfInternal(0,L"SeqDataLayerFlushVis-%s-%s");
                if (local_20a8[0] != (void *)0x0) {
                  FMemory::Free(local_20a8[0]);
                }
                if (local_2098.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_2098.TextData.Reference + 0x10))();
                }
                if (-1 < BookmarkChannel->Enabled) {
                  if (__BookmarkPoint361 == false) {
                    FMiscTrace::OutputBookmarkSpec
                              (&__BookmarkPoint361,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneDataLayerSystem.cpp"
                               ,0x169,L"SeqDataLayerFlushVis-%s-%s");
                    __BookmarkPoint361 = true;
                  }
                  pUVar13 = StaticEnum<enum_EDataLayerRuntimeState>();
                  pFVar14 = UEnum::GetDisplayNameTextByValue(pUVar13,&local_2078,lVar20);
                  pFVar15 = FText::ToString(pFVar14);
                  if ((pFVar15->Data).ArrayNum == 0) {
                    pwVar22 = L"";
                  }
                  else {
                    pwVar22 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
                  }
                  puVar16 = (undefined8 *)
                            (**(code **)(pUVar12->_padding_ + 0x2e0))(pUVar12,local_2088);
                  if (*(int *)(puVar16 + 1) == 0) {
                    pwVar21 = L"";
                  }
                  else {
                    pwVar21 = (wchar_t *)*puVar16;
                  }
                  uVar23 = CallstackTrace_GetCurrentId();
                  uVar9 = FFormatArgsTrace::EncodeArguments<4096,wchar_t_const_*,wchar_t_const_*>
                                    (&local_1038,pwVar21,pwVar22);
                  if (uVar9 != 0) {
                    FMiscTrace::OutputBookmarkInternal(&__BookmarkPoint361,uVar23,uVar9,local_1038);
                  }
                  TVar17.Reference = local_2078.TextData.Reference;
                  if (local_2088[0] != (void *)0x0) {
                    FMemory::Free(local_2088[0]);
                    TVar17.Reference = local_2078.TextData.Reference;
                  }
                  goto LAB_14681c5a3;
                }
              }
              else {
                EVar7 = EVar7 | FlushStreamingFull;
                if (2 < (byte)LogMovieScene._0_1_) {
                  pUVar13 = StaticEnum<enum_EDataLayerRuntimeState>();
                  pFVar14 = UEnum::GetDisplayNameTextByValue(pUVar13,&local_2118,2);
                  FText::ToString(pFVar14);
                  (**(code **)(pUVar12->_padding_ + 0x2e0))(pUVar12,local_2128);
                  Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
                  if (local_2128[0] != (void *)0x0) {
                    FMemory::Free(local_2128[0]);
                  }
                  if (local_2118.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_2118.TextData.Reference + 0x10))();
                  }
                }
                pUVar13 = StaticEnum<enum_EDataLayerRuntimeState>();
                pFVar14 = UEnum::GetDisplayNameTextByValue(pUVar13,&local_20f8,2);
                FText::ToString(pFVar14);
                (**(code **)(pUVar12->_padding_ + 0x2e0))(pUVar12,local_2108);
                FCsvProfiler::RecordEventfInternal(0,L"SeqDataLayerFlushFull-%s-%s");
                if (local_2108[0] != (void *)0x0) {
                  FMemory::Free(local_2108[0]);
                }
                if (local_20f8.TextData.Reference != (ITextData *)0x0) {
                  (**(code **)((longlong)*local_20f8.TextData.Reference + 0x10))();
                }
                if (-1 < BookmarkChannel->Enabled) {
                  if (__BookmarkPoint350 == false) {
                    FMiscTrace::OutputBookmarkSpec
                              (&__BookmarkPoint350,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneDataLayerSystem.cpp"
                               ,0x15e,L"SeqDataLayerFlushFull-%s-%s");
                    __BookmarkPoint350 = true;
                  }
                  pUVar13 = StaticEnum<enum_EDataLayerRuntimeState>();
                  pFVar14 = UEnum::GetDisplayNameTextByValue(pUVar13,&local_20d8,2);
                  pFVar15 = FText::ToString(pFVar14);
                  if ((pFVar15->Data).ArrayNum == 0) {
                    pwVar22 = L"";
                  }
                  else {
                    pwVar22 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
                  }
                  puVar16 = (undefined8 *)
                            (**(code **)(pUVar12->_padding_ + 0x2e0))(pUVar12,local_20e8);
                  if (*(int *)(puVar16 + 1) == 0) {
                    pwVar21 = L"";
                  }
                  else {
                    pwVar21 = (wchar_t *)*puVar16;
                  }
                  uVar23 = CallstackTrace_GetCurrentId();
                  uVar9 = FFormatArgsTrace::EncodeArguments<4096,wchar_t_const_*,wchar_t_const_*>
                                    (&local_2038,pwVar21,pwVar22);
                  if (uVar9 != 0) {
                    FMiscTrace::OutputBookmarkInternal(&__BookmarkPoint350,uVar23,uVar9,local_2038);
                  }
                  TVar17.Reference = local_20d8.TextData.Reference;
                  if (local_20e8[0] != (void *)0x0) {
                    FMemory::Free(local_20e8[0]);
                    TVar17.Reference = local_20d8.TextData.Reference;
                  }
LAB_14681c5a3:
                  if (TVar17.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*TVar17.Reference + 0x10))();
                  }
                }
              }
            }
          }
        }
      }
LAB_14681c5ae:
      uStack_2150 = uStack_2150 & ~auStack_2160._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_2160);
      uVar18 = (ulonglong)uStack_214c;
      uVar23 = uStack_214c;
    } while ((int)uStack_214c < *(int *)(auStack_2160._8_8_ + 0x18));
    if ((local_2130 != '\0') && (cStack_212f != '\0')) {
      uVar23 = *(int *)&(local_2138->Elements).field_0x8 -
               *(int *)&(local_2138->Elements).field_0x34;
      if (uVar23 < 4) {
        iVar10 = 1;
      }
      else {
        uVar18 = (ulonglong)((uVar23 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar10 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar23) && (local_2138->HashSize < iVar10)) || (iVar10 < local_2138->HashSize))
      {
        local_2138->HashSize = iVar10;
        TSet<TTuple<TObjectKey<UDataLayerInstance>,UE::MovieScene::FDataLayerState>,TDefaultMapHashableKeyFuncs<TObjectKey<UDataLayerInstance>,UE::MovieScene::FDataLayerState,0>,FDefaultSetAllocator>
        ::Rehash(local_2138);
      }
    }
  }
  return EVar7;
}

// ApplyNewState @ 14681d0d0

void __thiscall
UE::MovieScene::FDesiredLayerStates::ApplyNewState
          (FDesiredLayerStates *this,UDataLayerInstance *param_1,short param_2,
          EDataLayerRuntimeState param_3,bool param_4)

{
  short *psVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  short *psVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short *psVar10;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  int local_res18;
  UDataLayerInstance *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  psVar10 = (short *)0x0;
  psVar5 = psVar10;
  iVar9 = 0;
  if (param_1 != (UDataLayerInstance *)0x0) {
    if (GC::GIsIncrementalReachabilityPending) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = (FWeakObjectPtr)param_1;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    psVar5 = (short *)((ulonglong)local_res8 >> 0x20);
    iVar9 = local_res8.ObjectIndex;
  }
  iVar8 = (int)psVar5;
  uVar3 = iVar9 - iVar8 ^ (uint)((ulonglong)psVar5 >> 0xd);
  uVar2 = (-0x61c88647 - uVar3) - iVar8 ^ uVar3 << 8;
  uVar6 = (iVar8 - uVar2) - uVar3 ^ uVar2 >> 0xd;
  uVar3 = (uVar3 - uVar6) - uVar2 ^ uVar6 >> 0xc;
  uVar2 = (uVar2 - uVar3) - uVar6 ^ uVar3 << 0x10;
  uVar6 = (uVar6 - uVar2) - uVar3 ^ uVar2 >> 5;
  uVar3 = (uVar3 - uVar6) - uVar2 ^ uVar6 >> 3;
  uVar2 = (uVar2 - uVar3) - uVar6 ^ uVar3 << 10;
  if (*(int *)&(this->StatesByInstance).field_0x8 != *(int *)&(this->StatesByInstance).field_0x34) {
    puVar4 = *(undefined1 **)&(this->StatesByInstance).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->StatesByInstance).field_0x38;
    }
    iVar7 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->StatesByInstance).field_0x48 - 1U &
                              ((uVar6 - uVar2) - uVar3 ^ uVar2 >> 0xf)) * 4);
    if (iVar7 != -1) {
      do {
        psVar5 = (short *)(*(longlong *)&this->StatesByInstance + (longlong)iVar7 * 0x24);
        if ((*(int *)(*(longlong *)&this->StatesByInstance + (longlong)iVar7 * 0x24) == iVar9) &&
           (*(int *)(psVar5 + 2) == iVar8)) {
          if (iVar7 != -1) goto LAB_14681d21c;
          break;
        }
        iVar7 = *(int *)(psVar5 + 0xe);
      } while (iVar7 != -1);
    }
  }
  psVar5 = psVar10;
LAB_14681d21c:
  psVar1 = psVar5 + 4;
  if (psVar5 == (short *)0x0) {
    psVar1 = psVar10;
  }
  if (psVar1 == (short *)0x0) {
    local_48 = 0;
    local_38 = 0;
    local_40 = 0;
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    if (param_1 != (UDataLayerInstance *)0x0) {
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)param_1);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_58 = param_1;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_58);
      local_res10 = local_res8;
    }
    local_58 = (UDataLayerInstance *)&local_res10;
    local_50 = &local_48;
    TSet<TTuple<TObjectKey<UDataLayerInstance>,UE::MovieScene::FDataLayerState>,TDefaultMapHashableKeyFuncs<TObjectKey<UDataLayerInstance>,UE::MovieScene::FDataLayerState,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TObjectKey<UDataLayerInstance>_&&,UE::MovieScene::FDataLayerState_&&>_>
              ((TSet<TTuple<TObjectKey<UDataLayerInstance>,UE::MovieScene::FDataLayerState>,TDefaultMapHashableKeyFuncs<TObjectKey<UDataLayerInstance>,UE::MovieScene::FDataLayerState,0>,FDefaultSetAllocator>
                *)this,(TPairInitializer<TObjectKey<UDataLayerInstance>_&&,UE::MovieScene::FDataLayerState_&&>
                        *)&local_res18,(bool *)&local_58);
    psVar1 = (short *)(*(longlong *)&this->StatesByInstance + (longlong)local_res18 * 0x24 + 8);
  }
  if (*psVar1 < param_2) {
    psVar1[2] = 0;
    psVar1[3] = 0;
    psVar1[4] = 0;
    psVar1[5] = 0;
    psVar1[6] = 0;
    psVar1[7] = 0;
    psVar1[8] = 0;
    *psVar1 = param_2;
  }
  else if (param_2 != *psVar1) {
    return;
  }
  if (param_3 == Unloaded) {
    *(int *)(psVar1 + 2) = *(int *)(psVar1 + 2) + 1;
    *(byte *)(psVar1 + 8) = *(byte *)(psVar1 + 8) | param_4;
  }
  else if (param_3 == Loaded) {
    *(int *)(psVar1 + 4) = *(int *)(psVar1 + 4) + 1;
  }
  else if (param_3 == Activated) {
    *(int *)(psVar1 + 6) = *(int *)(psVar1 + 6) + 1;
    *(byte *)((longlong)psVar1 + 0x11) = *(byte *)((longlong)psVar1 + 0x11) | param_4;
  }
  return;
}

// IsEmpty @ 14683eff0

bool __thiscall UE::MovieScene::FDesiredLayerStates::IsEmpty(FDesiredLayerStates *this)

{
  return *(int *)&(this->StatesByInstance).field_0x8 == *(int *)&(this->StatesByInstance).field_0x34
  ;
}

// Reset @ 146860280

void __thiscall UE::MovieScene::FDesiredLayerStates::Reset(FDesiredLayerStates *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->StatesByInstance).field_0x28;
  puVar1 = &(this->StatesByInstance).field_0x10;
  iVar12 = 0;
  uVar7 = 1;
  iVar8 = iVar12;
  iVar14 = iVar12;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->StatesByInstance).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    iVar14 = 0;
    iVar12 = 0;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14686031d;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar8 = local_res10 + -1 + iVar14;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14686031d:
  uVar11 = *(uint *)&(this->StatesByInstance).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar12);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->StatesByInstance).field_0x8 -
                       *(int *)&(this->StatesByInstance).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->StatesByInstance).field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(this->StatesByInstance).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_146860420;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_146860420:
  while( true ) {
    if (*(int *)&(this->StatesByInstance).field_0x8 - *(int *)&(this->StatesByInstance).field_0x34
        != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<TObjectKey<UDataLayerInstance>,UE::MovieScene::FDataLayerState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar9 = (longlong)TStack_60.CurrentBitIndex;
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar4 = *(longlong *)&this->StatesByInstance;
    *(undefined2 *)(lVar4 + 8 + lVar9 * 0x24) = 0;
    *(undefined8 *)(lVar4 + 0xc + lVar9 * 0x24) = 0;
    *(undefined4 *)(lVar4 + 0x14 + lVar9 * 0x24) = 0;
    *(undefined2 *)(lVar4 + 0x18 + lVar9 * 0x24) = 0;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

