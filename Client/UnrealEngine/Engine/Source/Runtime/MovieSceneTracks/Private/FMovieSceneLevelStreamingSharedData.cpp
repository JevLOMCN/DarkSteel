// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 7

// ~FMovieSceneLevelStreamingSharedData @ 14680f330

void __thiscall
UE::MovieScene::FMovieSceneLevelStreamingSharedData::~FMovieSceneLevelStreamingSharedData
          (FMovieSceneLevelStreamingSharedData *this)

{
  ForElementType<FName> FVar1;
  void *pvVar2;
  
  FVar1 = (this->LevelsToRestore).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FName>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  *(undefined4 *)&(this->NameToLevelMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->NameToLevelMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NameToLevelMap);
  *(undefined4 *)&(this->VisibilityMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->VisibilityMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// AssignLevelVisibilityOverrides @ 14681d830

void __thiscall
UE::MovieScene::FMovieSceneLevelStreamingSharedData::AssignLevelVisibilityOverrides
          (FMovieSceneLevelStreamingSharedData *this,FInstanceHandle param_1,
          TArrayView<FName_const_,int> *param_2,ELevelVisibility param_3,int param_4,
          FMovieSceneEntityID param_5)

{
  FName FVar1;
  undefined1 *puVar2;
  code *pcVar3;
  uchar *puVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ForElementType<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest>
  *pFVar8;
  undefined1 *puVar9;
  longlong lVar10;
  ForElementType<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest>
  *pFVar11;
  FName *pFVar12;
  ForElementType<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest>
  *pFVar13;
  undefined1 local_res18 [8];
  ELevelVisibility local_res20;
  int local_68 [2];
  FName local_60;
  FName *local_58;
  FName *local_50;
  FInstanceHandle local_48;
  ushort uStack_44;
  uchar auStack_42 [2];
  int iStack_40;
  ELevelVisibility aEStack_3c [4];
  
  pFVar12 = param_2->DataPtr;
  local_50 = pFVar12 + param_2->ArrayNum;
  local_res20 = param_3;
  if (pFVar12 != local_50) {
    do {
      FVar1 = *pFVar12;
      local_60 = FVar1;
      uVar6 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
      uVar6 = uVar6 + FVar1.Number;
      if (*(int *)&(this->VisibilityMap).field_0x8 != *(int *)&(this->VisibilityMap).field_0x34) {
        puVar2 = *(undefined1 **)&(this->VisibilityMap).field_0x40;
        puVar9 = &(this->VisibilityMap).field_0x38;
        if (puVar2 != (undefined1 *)0x0) {
          puVar9 = puVar2;
        }
        iVar7 = *(int *)(puVar9 + (ulonglong)
                                  (*(int *)&(this->VisibilityMap).field_0x48 - 1U & uVar6) * 4);
        if (iVar7 != -1) {
          do {
            lVar10 = *(longlong *)&this->VisibilityMap + (longlong)iVar7 * 0x48;
            if (*(FName *)(*(longlong *)&this->VisibilityMap + (longlong)iVar7 * 0x48) == local_60)
            {
              if (lVar10 != 0) goto LAB_14681d93a;
              break;
            }
            iVar7 = *(int *)(lVar10 + 0x40);
          } while (iVar7 != -1);
        }
      }
      local_58 = &local_60;
      TSet<TTuple<FName,UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData>,TDefaultMapHashableKeyFuncs<FName,UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
                ((TSet<TTuple<FName,UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData>,TDefaultMapHashableKeyFuncs<FName,UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData,0>,FDefaultSetAllocator>
                  *)this,(uint)local_68,(TKeyInitializer<FName_const_&> *)(ulonglong)uVar6,
                 (bool *)&local_58);
      lVar10 = *(longlong *)&this->VisibilityMap + (longlong)local_68[0] * 0x48;
LAB_14681d93a:
      pFVar13 = (ForElementType<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest>
                 *)(lVar10 + 0x10);
      iVar7 = *(int *)(lVar10 + 0x38);
      pFVar11 = *(ForElementType<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest>
                  **)(lVar10 + 0x30);
      if (*(ForElementType<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest>
            **)(lVar10 + 0x30) ==
          (ForElementType<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest>
           *)0x0) {
        pFVar11 = pFVar13;
      }
      puVar4 = pFVar11->InlineData;
      while( true ) {
        if (*(int *)(lVar10 + 0x38) != iVar7) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if (pFVar11 ==
            (ForElementType<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest>
             *)(puVar4 + (longlong)iVar7 * 0x10)) goto LAB_14681d9a2;
        if (*(ushort *)(pFVar11->InlineData + 4) == param_5.Value) break;
        pFVar11 = (ForElementType<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest>
                   *)(pFVar11->InlineData + 0x10);
      }
      if (pFVar11 ==
          (ForElementType<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest>
           *)0x0) {
LAB_14681d9a2:
        pFVar11 = *(ForElementType<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest>
                    **)(lVar10 + 0x30);
        iStack_40 = param_4;
        aEStack_3c[0] = local_res20;
        pFVar8 = pFVar13;
        if (pFVar11 !=
            (ForElementType<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest>
             *)0x0) {
          pFVar8 = pFVar11;
        }
        uStack_44 = param_5.Value;
        local_48 = param_1;
        if (pFVar8 <= (ForElementType<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest>
                       *)&local_48) {
          pFVar8 = pFVar13;
          if (pFVar11 !=
              (ForElementType<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest>
               *)0x0) {
            pFVar8 = pFVar11;
          }
          if ((&local_48 <
               (FInstanceHandle *)(pFVar8->InlineData + (longlong)*(int *)(lVar10 + 0x3c) * 0x10))
             && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar7 = *(int *)(lVar10 + 0x38);
        if (iVar7 == *(int *)(lVar10 + 0x3c)) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest>_>
                            (0x410,pFVar13,(int *)(lVar10 + 0x3c));
        }
        *(int *)(lVar10 + 0x38) = iVar7 + 1;
        if (*(ForElementType<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest>
              **)(lVar10 + 0x30) !=
            (ForElementType<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest>
             *)0x0) {
          pFVar13 = *(ForElementType<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest>
                      **)(lVar10 + 0x30);
        }
        *(ulonglong *)(pFVar13->InlineData + (longlong)iVar7 * 0x10) =
             CONCAT26(auStack_42,CONCAT24(uStack_44,local_48));
        *(ulonglong *)(pFVar13->InlineData + (longlong)iVar7 * 0x10 + 8) =
             CONCAT44(aEStack_3c,iStack_40);
      }
      else {
        *(int *)(pFVar11->InlineData + 8) = param_4;
        pFVar11->InlineData[0xc] = local_res20;
      }
      pFVar12 = pFVar12 + 1;
    } while (pFVar12 != local_50);
  }
  return;
}

// Flush @ 14682e170

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
UE::MovieScene::FMovieSceneLevelStreamingSharedData::Flush
          (FMovieSceneLevelStreamingSharedData *this,UMovieSceneEntitySystemLinker *param_1)

{
  int *piVar1;
  FName *pFVar2;
  ForElementType<FName> FVar3;
  uint uVar4;
  ForElementType<FName> FVar5;
  undefined1 *puVar6;
  TReferenceControllerBase<1> *pTVar7;
  FSharedPlaybackState *pFVar8;
  code *pcVar9;
  ULevelStreaming *pUVar10;
  UWorld *pUVar11;
  FInstanceRegistry *pFVar12;
  FMovieSceneLevelStreamingSharedData *pFVar13;
  bool bVar14;
  char cVar15;
  undefined1 uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  ForElementType<FName> FVar20;
  FString *pFVar21;
  ulonglong uVar22;
  FMovieSceneAnimTypeID FVar23;
  byte bVar24;
  longlong lVar25;
  wchar_t *pwVar26;
  ForElementType<FName> FVar27;
  FName FVar28;
  uint uVar29;
  uint uVar30;
  undefined1 *puVar31;
  ForAnyElementType FVar32;
  int iVar33;
  uint *puVar34;
  int iVar35;
  FName FVar36;
  EFlushLevelStreamingType EVar37;
  FName FVar38;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *pTVar39;
  EFlushLevelStreamingType local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_198;
  undefined1 local_197;
  bool local_196;
  int local_194;
  TArray<TSharedRef<UE::MovieScene::FSharedPlaybackState,1>,TSizedDefaultAllocator<32>_> local_190;
  FName local_180;
  ForElementType<FName> local_178;
  ULevelStreaming *local_170;
  int local_168;
  uint uStack_164;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_160;
  uint local_158;
  uint uStack_154;
  uint uStack_150;
  undefined4 uStack_14c;
  FMovieSceneLevelStreamingSharedData *local_148;
  undefined8 uStack_140;
  TBitArray<FDefaultBitArrayAllocator> *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  int iStack_120;
  undefined4 uStack_11c;
  UWorld *local_118;
  IMovieScenePreAnimatedTokenProducer local_110;
  int local_108;
  int local_104;
  FName local_100;
  FInstanceRegistry *local_f8;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> local_f0;
  FMovieSceneLevelStreamingSharedData *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  FString local_b0;
  FMovieSceneLevelStreamingSharedData *local_a0;
  undefined8 uStack_98;
  TBitArray<FDefaultBitArrayAllocator> *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_54;
  
  local_118 = (UWorld *)(**(code **)(param_1->_padding_ + 0x180))(param_1);
  if (local_118 != (UWorld *)0x0) {
    local_190.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_190.ArrayNum = 0;
    local_190.ArrayMax = 0;
    if (((param_1->InstanceRegistry).Ptr == (FInstanceRegistry *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("InstanceRegistry.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                            ,0x96,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    local_f8 = (param_1->InstanceRegistry).Ptr;
    EVar37 = None;
    local_110 = (IMovieScenePreAnimatedTokenProducer)
                &___7FLevelStreamingPreAnimatedTokenProducer_MovieScene_UE__6B_;
    iVar18 = *(int *)&(this->VisibilityMap).field_0x28;
    puVar6 = &(this->VisibilityMap).field_0x10;
    iVar33 = 0;
    local_res10 = None;
    uVar17 = 1;
    local_128._0_4_ = 0;
    uStack_130._4_4_ = iVar33;
    if (iVar18 != 0) {
      puVar34 = *(uint **)&(this->VisibilityMap).field_0x20;
      if (puVar34 == (uint *)0x0) {
        puVar34 = (uint *)puVar6;
      }
      uVar4 = *puVar34;
      local_128._0_4_ = 0;
      iVar33 = 0;
      while (uVar4 == 0) {
        lVar25 = (longlong)iVar33;
        local_128._0_4_ = (int)local_128 + 0x20;
        iVar33 = iVar33 + 1;
        uStack_130._4_4_ = iVar18;
        if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar33) goto LAB_14682e2ad;
        uVar4 = puVar34[lVar25 + 1];
      }
      uVar17 = -uVar4 & uVar4;
      uVar22 = (ulonglong)uVar17 * 2 + 1;
      lVar25 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      local_108 = (int)lVar25;
      uStack_130._4_4_ = (int)local_128 + -1 + local_108;
      if (iVar18 < uStack_130._4_4_) {
        uStack_130._4_4_ = iVar18;
      }
    }
LAB_14682e2ad:
    iStack_120 = *(int *)&(this->VisibilityMap).field_0x8 -
                 *(int *)&(this->VisibilityMap).field_0x34;
    uVar4 = *(uint *)&(this->VisibilityMap).field_0x28;
    bVar24 = (byte)uVar4 & 0x1f;
    iVar35 = (int)uVar4 >> 5;
    uStack_164 = 1 << bVar24;
    uVar29 = -1 << bVar24;
    uVar30 = uVar4 & 0xffffffe0;
    uStack_140 = CONCAT44(uVar17,iVar33);
    uStack_130._0_4_ = 0xffffffff;
    local_128._4_4_ = local_54;
    TStack_d8._padding_ = uStack_140;
    uStack_b8 = CONCAT44(uStack_11c,iStack_120);
    TStack_d8.UnvisitedBitMask = 0xffffffff;
    TStack_d8.CurrentBitIndex = uStack_130._4_4_;
    TStack_d8.BaseBitIndex = (int)local_128;
    TStack_d8._28_4_ = local_54;
    local_168 = iVar35;
    pTStack_160 = (TBitArray<FDefaultBitArrayAllocator> *)puVar6;
    local_158 = uVar29;
    uStack_154 = uVar4;
    uStack_150 = uVar30;
    local_e0 = this;
    TStack_d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar6;
    if ((((int)uVar4 < 0) || (iVar18 < (int)uVar4)) &&
       (local_148 = this, local_138 = (TBitArray<FDefaultBitArrayAllocator> *)puVar6,
       bVar14 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar14)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar17 = *(uint *)&(this->VisibilityMap).field_0x28;
    if (uVar4 != uVar17) {
      puVar31 = *(undefined1 **)&(this->VisibilityMap).field_0x20;
      if (puVar31 == (undefined1 *)0x0) {
        puVar31 = puVar6;
      }
      uVar29 = uVar29 & *(uint *)(puVar31 + (longlong)iVar35 * 4);
      while (uVar29 == 0) {
        uStack_150 = uVar30 + 0x20;
        local_168 = iVar35 + 1;
        if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < local_168)
        goto LAB_14682e3e8;
        uVar29 = *(uint *)(puVar31 + (longlong)iVar35 * 4 + 4);
        local_158 = 0xffffffff;
        iVar35 = local_168;
        uVar30 = uStack_150;
      }
      uStack_164 = -uVar29 & uVar29;
      uVar22 = (ulonglong)uStack_164 * 2 + 1;
      lVar25 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      local_104 = (int)lVar25;
      uStack_154 = local_104 + -1 + uVar30;
      if ((int)uVar17 < (int)uStack_154) {
LAB_14682e3e8:
        uStack_154 = uVar17;
      }
    }
    uStack_140 = CONCAT44(uStack_164,local_168);
    uStack_130 = CONCAT44(uStack_154,local_158);
    local_128 = CONCAT44(uStack_14c,uStack_150);
    iStack_120 = *(int *)&(this->VisibilityMap).field_0x8 -
                 *(int *)&(this->VisibilityMap).field_0x34;
    local_138 = pTStack_160;
    uStack_78 = CONCAT44(uStack_11c,iStack_120);
    local_90 = pTStack_160;
    local_148 = this;
    local_a0 = this;
    uStack_98 = uStack_140;
    uStack_88 = uStack_130;
    local_80 = local_128;
    while( true ) {
      pFVar13 = local_e0;
      if (*(int *)&(local_e0->VisibilityMap).field_0x8 -
          *(int *)&(local_e0->VisibilityMap).field_0x34 != (int)uStack_b8) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FName,UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      pUVar11 = local_118;
      if (((TStack_d8.CurrentBitIndex == uStack_88._4_4_) && (TStack_d8.Array == local_90)) &&
         (pFVar13 == local_a0)) break;
      lVar25 = *(longlong *)&pFVar13->VisibilityMap;
      FVar3 = (ForElementType<FName>)(lVar25 + (longlong)TStack_d8.CurrentBitIndex * 0x48);
      local_178 = FVar3;
      if (*(int *)(lVar25 + 0x38 + (longlong)TStack_d8.CurrentBitIndex * 0x48) == 0) {
        FVar27 = (ForElementType<FName>)&this->LevelsToRestore;
        FVar5 = (this->LevelsToRestore).AllocatorInstance.SecondaryData;
        FVar20 = FVar27;
        if (FVar5 != (ForElementType<FName>)0x0) {
          FVar20 = FVar5;
        }
        if ((ulonglong)FVar20 <= (ulonglong)FVar3) {
          FVar20 = FVar27;
          if (FVar5 != (ForElementType<FName>)0x0) {
            FVar20 = FVar5;
          }
          if (((ulonglong)FVar3 <
               (ulonglong)((longlong)FVar20 + (longlong)(this->LevelsToRestore).ArrayMax * 8)) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar14)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        iVar18 = (this->LevelsToRestore).ArrayNum;
        piVar1 = &(this->LevelsToRestore).ArrayMax;
        if (iVar18 == *piVar1) {
          iVar18 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                             (0x408,(ForElementType<FName> *)FVar27,piVar1);
        }
        (this->LevelsToRestore).ArrayNum = iVar18 + 1;
        FVar5 = (this->LevelsToRestore).AllocatorInstance.SecondaryData;
        if (FVar5 != (ForElementType<FName>)0x0) {
          FVar27 = FVar5;
        }
        *(FName *)((longlong)FVar27 + (longlong)iVar18 * 8) = *(FName *)FVar3;
      }
      else {
        pFVar21 = MakeSafeLevelName(&local_b0,(FName *)FVar3,local_118);
        if ((pFVar21->Data).ArrayNum == 0) {
          pwVar26 = L"";
        }
        else {
          pwVar26 = (wchar_t *)(pFVar21->Data).AllocatorInstance.Data;
        }
        ::FName::FName(&local_100,pwVar26);
        if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data.AllocatorInstance.Data);
        }
        local_170 = GetLevel(this,local_100,pUVar11);
        if (local_170 != (ULevelStreaming *)0x0) {
          FVar38 = (FName)((longlong)FVar3 + 0x10);
          uVar17 = (((FName *)((longlong)FVar3 + 0x38))->ComparisonIndex).Value;
          pFVar2 = (FName *)((longlong)FVar3 + 0x38);
          local_194 = 0;
          FVar28 = *(FName *)((longlong)FVar3 + 0x30);
          if (*(FName *)((longlong)FVar3 + 0x30) == (FName)0x0) {
            FVar28 = FVar38;
          }
          FVar36 = (FName)((longlong)FVar28 + (longlong)(int)uVar17 * 0x10);
          iVar18 = -0x80000000;
          iVar33 = 0;
          while( true ) {
            if ((pFVar2->ComparisonIndex).Value != uVar17) {
              local_res20[0] = 0;
              `TCheckedPointerIterator<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest_const_,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(local_res20);
              iVar33 = local_194;
            }
            pUVar10 = local_170;
            FVar3 = local_178;
            if (FVar28 == FVar36) break;
            iVar35 = *(int *)((longlong)FVar28 + 8);
            iVar19 = -1;
            if (*(char *)((longlong)FVar28 + 0xc) == '\0') {
              iVar19 = 1;
            }
            if (iVar18 < iVar35) {
              FVar28 = (FName)((longlong)FVar28 + 0x10);
              iVar18 = iVar35;
              local_194 = iVar19;
              iVar33 = iVar19;
            }
            else {
              if (iVar35 == iVar18) {
                local_194 = iVar33 + iVar19;
                iVar33 = local_194;
              }
              FVar28 = (FName)((longlong)FVar28 + 0x10);
            }
          }
          EVar37 = local_res10;
          if (iVar33 == 0) {
            if ((*(char *)((longlong)local_178 + 9) != '\0') &&
               (uVar17 = (((FName *)((longlong)local_178 + 8))->ComparisonIndex).Value,
               cVar15 = (**(code **)(local_170->_padding_ + 0x2f0))(local_170),
               cVar15 != (char)uVar17)) {
              if ((*(char *)((longlong)FVar3 + 9) == '\0') &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsSet()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                      ,0x1bd,
                                      L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                     ), bVar14)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              bVar14 = SUB41((((FName *)((longlong)FVar3 + 8))->ComparisonIndex).Value,0);
              ULevelStreaming::SetShouldBeVisible(pUVar10,bVar14);
              if (local_res10 == None) {
                local_res10 = Visibility;
              }
              EVar37 = local_res10;
              if ((bVar14 != false) && ((pUVar10->LoadedLevel).field0_0x0.DebugPtr == (ULevel *)0x0)
                 ) {
                (**(code **)(pUVar10->_padding_ + 0x2d0))(pUVar10,1);
                local_res10 = Full;
                EVar37 = local_res10;
              }
            }
          }
          else {
            local_196 = 0 < iVar33;
            cVar15 = (**(code **)(local_170->_padding_ + 0x2f0))(local_170);
            if ((bool)cVar15 != 0 < iVar33) {
              if (*(char *)((longlong)FVar3 + 9) == '\0') {
                uVar16 = (**(code **)(pUVar10->_padding_ + 0x2f0))(pUVar10);
                if (&local_180 != (FName *)((longlong)FVar3 + 8)) {
                  *(undefined1 *)&(((FName *)((longlong)FVar3 + 8))->ComparisonIndex).Value = uVar16
                  ;
                  *(undefined1 *)((longlong)FVar3 + 9) = 1;
                }
              }
              if ((longlong)local_190._8_8_ < 0) {
                DestructItems<TSharedRef<UE::MovieScene::FSharedPlaybackState,1>,int>
                          ((TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *)
                           local_190.AllocatorInstance.Data,local_190.ArrayNum);
                iVar18 = local_190.ArrayMax;
                local_190._8_8_ = local_190._8_8_ & 0xffffffff00000000;
                if (iVar18 != 0) {
                  Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,0,&local_190.AllocatorInstance,0,&local_190.ArrayMax);
                }
              }
              else {
                DestructItems<TSharedRef<UE::MovieScene::FSharedPlaybackState,1>,int>
                          ((TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *)
                           local_190.AllocatorInstance.Data,local_190.ArrayNum);
                local_190._8_8_ = local_190._8_8_ & 0xffffffff00000000;
              }
              pFVar12 = local_f8;
              uVar17 = (pFVar2->ComparisonIndex).Value;
              if (*(FName *)((longlong)FVar3 + 0x30) != (FName)0x0) {
                FVar38 = *(FName *)((longlong)FVar3 + 0x30);
              }
              FVar28 = (FName)((longlong)FVar38 + (longlong)(int)uVar17 * 0x10);
              while( true ) {
                if ((pFVar2->ComparisonIndex).Value != uVar17) {
                  local_198 = 0;
                  `TCheckedPointerIterator<UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData::FVisibilityRequest_const_,int,0>
                  ::operator!='::__l2::<lambda_1>::operator()(&local_198);
                }
                pUVar10 = local_170;
                if (FVar38 == FVar28) break;
                uVar4 = *(uint *)FVar38;
                local_178._0_4_ = uVar4;
                if ((int)(uVar4 & 0xffff) < *(int *)&(pFVar12->Instances).field_0x28) {
                  if ((*(int *)&(pFVar12->Instances).field_0x28 <= (int)(uVar4 & 0xffff)) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Index>=0 && Index<NumBits",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                          ,0x5c6,L""), bVar14)) {
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                  puVar6 = *(undefined1 **)&(pFVar12->Instances).field_0x20;
                  puVar31 = &(pFVar12->Instances).field_0x10;
                  if (puVar6 != (undefined1 *)0x0) {
                    puVar31 = puVar6;
                  }
                  if ((*(uint *)(puVar31 + (ulonglong)((uVar4 & 0xffff) >> 5) * 4) >> (uVar4 & 0x1f)
                      & 1) != 0) {
                    lVar25 = *(longlong *)&pFVar12->Instances;
                    if (*(short *)((ulonglong)(uVar4 & 0xffff) * 0x140 + 0x134 + lVar25) ==
                        local_178._2_2_) {
                      local_f0.Object =
                           *(FSharedPlaybackState **)
                            ((ulonglong)*(ushort *)FVar38 * 0x140 + 0x118 + lVar25);
                      local_f0.SharedReferenceCount.ReferenceController =
                           *(TReferenceControllerBase<1> **)
                            ((ulonglong)*(ushort *)FVar38 * 0x140 + 0x120 + lVar25);
                      if (local_f0.SharedReferenceCount.ReferenceController !=
                          (TReferenceControllerBase<1> *)0x0) {
                        LOCK();
                        (local_f0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                             (atomic<int>)
                             ((int)(local_f0.SharedReferenceCount.ReferenceController)->
                                   SharedReferenceCount + 1);
                        UNLOCK();
                      }
                      TArray<TSharedRef<UE::MovieScene::FSharedPlaybackState,1>,TSizedDefaultAllocator<32>_>
                      ::AddUniqueImpl<TSharedRef<UE::MovieScene::FSharedPlaybackState,1>_const_&>
                                (&local_190,&local_f0);
                      SharedPointerInternals::TReferenceControllerBase<1>::
                      ReleaseSharedReferenceNoInline
                                (local_f0.SharedReferenceCount.ReferenceController);
                    }
                  }
                }
                FVar38 = (FName)((longlong)FVar38 + 0x10);
              }
              iVar18 = local_190.ArrayNum;
              uVar22 = (ulonglong)local_190.ArrayNum;
              pTVar39 = (TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *)
                        (local_190.AllocatorInstance.Data + uVar22 * 0x10);
              FVar32.Data = local_190.AllocatorInstance.Data;
              while( true ) {
                if ((int)uVar22 != iVar18) {
                  local_197 = 0;
                  `TCheckedPointerIterator<TSharedRef<UE::MovieScene::FSharedPlaybackState,1>,int,0>
                  ::operator!='::__l2::<lambda_1>::operator()(&local_197);
                }
                if ((TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *)FVar32.Data == pTVar39)
                break;
                pTVar7 = (((TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *)FVar32.Data)->
                         SharedReferenceCount).ReferenceController;
                pFVar8 = ((TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *)FVar32.Data)->Object
                ;
                if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar7->SharedReferenceCount =
                       (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
                  UNLOCK();
                }
                FVar23.ID = TMovieSceneAnimTypeID<UE::MovieScene::FMovieSceneLevelStreamingSharedData,0>
                            ::CachedID;
                if (TMovieSceneAnimTypeID<UE::MovieScene::FMovieSceneLevelStreamingSharedData,0>::
                    CachedID == 0) {
                  FVar23.ID = FMovieSceneAnimTypeID::Initialize
                                        (&TMovieSceneAnimTypeID<UE::MovieScene::FMovieSceneLevelStreamingSharedData,0>
                                          ::CachedID,0);
                }
                FMovieSceneInstancePreAnimatedState::SavePreAnimatedState
                          (&pFVar8->PreAnimatedState,(UObject *)pUVar10,FVar23,&local_110);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar7);
                uVar22 = local_190._8_8_ & 0xffffffff;
                FVar32.Data = FVar32.Data + 0x10;
              }
              ULevelStreaming::SetShouldBeVisible(pUVar10,local_196);
              if (local_res10 == None) {
                local_res10 = Visibility;
              }
              EVar37 = local_res10;
              if ((0 < local_194) && ((pUVar10->LoadedLevel).field0_0x0.DebugPtr == (ULevel *)0x0))
              {
                (**(code **)(pUVar10->_padding_ + 0x2d0))(pUVar10,1);
                local_res10 = Full;
                EVar37 = local_res10;
              }
            }
          }
        }
      }
      TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
    }
    if (EVar37 != None) {
      UWorld::FlushLevelStreaming(local_118,EVar37);
    }
    local_110 = (IMovieScenePreAnimatedTokenProducer)&___7IMovieScenePreAnimatedTokenProducer__6B_;
    DestructItems<TSharedRef<UE::MovieScene::FSharedPlaybackState,1>,int>
              ((TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *)
               local_190.AllocatorInstance.Data,local_190.ArrayNum);
    if ((TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *)local_190.AllocatorInstance.Data !=
        (TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *)0x0) {
      FMemory::Free(local_190.AllocatorInstance.Data);
    }
  }
  return;
}

// GetLevel @ 146834910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULevelStreaming * __thiscall
UE::MovieScene::FMovieSceneLevelStreamingSharedData::GetLevel
          (FMovieSceneLevelStreamingSharedData *this,FName param_1,UWorld *param_2)

{
  TMap<FName,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>,0>_>
  *this_00;
  longlong lVar1;
  uint uVar2;
  int iVar3;
  ULevelStreaming *pUVar4;
  FString *pFVar5;
  FName FVar6;
  FWeakObjectPtr *this_01;
  undefined1 *puVar7;
  undefined1 local_res8 [8];
  FName local_res10;
  FWeakObjectPtr local_res20;
  undefined1 local_28 [16];
  
  this_00 = &this->NameToLevelMap;
  local_res10 = param_1;
  uVar2 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->NameToLevelMap).field_0x8 != *(int *)&(this->NameToLevelMap).field_0x34) {
    puVar7 = *(undefined1 **)&(this->NameToLevelMap).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->NameToLevelMap).field_0x38;
    }
    iVar3 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->NameToLevelMap).field_0x48 - 1U &
                              param_1.Number + uVar2) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *(longlong *)&this_00->field_0x0 + (longlong)iVar3 * 0x18;
        if (*(FName *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar3 * 0x18) == param_1) {
          this_01 = (FWeakObjectPtr *)(lVar1 + 8);
          if (lVar1 == 0) {
            this_01 = (FWeakObjectPtr *)0x0;
          }
          if (this_01 != (FWeakObjectPtr *)0x0) {
            pUVar4 = (ULevelStreaming *)FWeakObjectPtr::Get(this_01);
            FVar6 = local_res10;
            if (pUVar4 != (ULevelStreaming *)0x0) {
              return pUVar4;
            }
            local_res8._0_4_ = local_res10.ComparisonIndex.Value;
            local_res8._4_4_ = local_res10.Number;
            if (*(int *)&(this->NameToLevelMap).field_0x8 !=
                *(int *)&(this->NameToLevelMap).field_0x34) {
              uVar2 = ::GetTypeHash(local_res10.ComparisonIndex.Value);
              TSet<TTuple<FName,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              ::RemoveImpl<FName>((TSet<TTuple<FName,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                                   *)this_00,FVar6.Number + uVar2,(FName *)local_res8);
            }
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  if (local_res10 != (FName)0x0) {
    pFVar5 = ::FName::ToString((FName *)(local_res8 + 8),(FString *)local_28);
    FVar6 = (FName)GetStreamingLevel(pFVar5,param_2);
    if (FVar6 != (FName)0x0) {
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)FVar6);
      }
      local_res20.ObjectIndex = 0;
      local_res20.ObjectSerialNumber = 0;
      local_res8 = (undefined1  [8])FVar6;
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)FVar6);
      }
      FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_res8);
      local_28._0_8_ = local_res8 + 8;
      local_28._8_8_ = &local_res20;
      TSet<TTuple<FName,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>_&&>_>
                ((TSet<TTuple<FName,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FName,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                  *)this_00,
                 (TPairInitializer<FName_const_&,TWeakObjectPtr<ULevelStreaming,FWeakObjectPtr>_&&>
                  *)local_res8,(bool *)local_28);
    }
    return (ULevelStreaming *)FVar6;
  }
  return (ULevelStreaming *)0x0;
}

// HasAnythingToDo @ 146839260

bool __thiscall
UE::MovieScene::FMovieSceneLevelStreamingSharedData::HasAnythingToDo
          (FMovieSceneLevelStreamingSharedData *this)

{
  return *(int *)&(this->VisibilityMap).field_0x8 != *(int *)&(this->VisibilityMap).field_0x34;
}

// RestoreLevels @ 146860e10

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
UE::MovieScene::FMovieSceneLevelStreamingSharedData::RestoreLevels
          (FMovieSceneLevelStreamingSharedData *this,UMovieSceneEntitySystemLinker *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  FName FVar4;
  ForElementType<FName> FVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  UWorld *this_00;
  FString *pFVar9;
  ULevelStreaming *this_01;
  TTuple<FName,UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData> *pTVar10;
  wchar_t *pwVar11;
  EFlushLevelStreamingType EVar12;
  ForElementType<FName> FVar14;
  bool bVar15;
  undefined1 local_res10 [8];
  FName local_res18;
  FName local_res20;
  FName local_58;
  ForElementType<FName> local_50;
  FString local_48;
  EFlushLevelStreamingType EVar13;
  
  this_00 = (UWorld *)(**(code **)(param_1->_padding_ + 0x180))();
  if (this_00 != (UWorld *)0x0) {
    EVar13 = None;
    EVar12 = None;
    iVar2 = (this->LevelsToRestore).ArrayNum;
    FVar14 = (this->LevelsToRestore).AllocatorInstance.SecondaryData;
    if (FVar14 == (ForElementType<FName>)0x0) {
      FVar14 = (ForElementType<FName>)&this->LevelsToRestore;
    }
    local_50 = (ForElementType<FName>)((longlong)FVar14 + (longlong)iVar2 * 8);
    while( true ) {
      FVar5 = local_50;
      if ((this->LevelsToRestore).ArrayNum != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (FVar14 == FVar5) break;
      local_res18 = *(FName *)FVar14;
      pFVar9 = MakeSafeLevelName(&local_48,&local_res18,this_00);
      if ((pFVar9->Data).ArrayNum == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
      }
      ::FName::FName(&local_res20,pwVar11);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      this_01 = GetLevel(this,local_res20,this_00);
      if (this_01 != (ULevelStreaming *)0x0) {
        pTVar10 = TSet<TTuple<FName,UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData>,TDefaultMapHashableKeyFuncs<FName,UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FName,UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData>,TDefaultMapHashableKeyFuncs<FName,UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData,0>,FDefaultSetAllocator>
                          *)this,local_res18);
        if ((pTVar10 ==
             (TTuple<FName,UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData> *)
             0x0) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Pair != nullptr",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                         ,0x288,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (pTVar10->field_0x9 != '\0') {
          pTVar10 = TSet<TTuple<FName,UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData>,TDefaultMapHashableKeyFuncs<FName,UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData,0>,FDefaultSetAllocator>
                    ::Find((TSet<TTuple<FName,UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData>,TDefaultMapHashableKeyFuncs<FName,UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData,0>,FDefaultSetAllocator>
                            *)this,local_res18);
          if ((pTVar10 ==
               (TTuple<FName,UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData> *
               )0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pair != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                 ,0x288,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((pTVar10->field_0x9 == '\0') &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                ), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          bVar6 = (bool)pTVar10->field_0x8;
          cVar7 = (**(code **)(this_01->_padding_ + 0x2f0))(this_01);
          if ((bool)cVar7 != bVar6) {
            ULevelStreaming::SetShouldBeVisible(this_01,bVar6);
            bVar15 = EVar12 == None;
            EVar12 = EVar13;
            if (bVar15) {
              EVar12 = Visibility;
            }
            EVar13 = EVar12;
            if ((bVar6 != false) && ((this_01->LoadedLevel).field0_0x0.DebugPtr == (ULevel *)0x0)) {
              (**(code **)(this_01->_padding_ + 0x2d0))(this_01,1);
              EVar13 = Full;
              EVar12 = Full;
            }
          }
        }
      }
      FVar4 = local_res18;
      local_58 = local_res18;
      if (*(int *)&(this->VisibilityMap).field_0x8 != *(int *)&(this->VisibilityMap).field_0x34) {
        uVar8 = ::GetTypeHash(local_res18.ComparisonIndex.Value);
        TSet<TTuple<FName,UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData>,TDefaultMapHashableKeyFuncs<FName,UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData,0>,FDefaultSetAllocator>
        ::RemoveImpl<FName>((TSet<TTuple<FName,UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData>,TDefaultMapHashableKeyFuncs<FName,UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData,0>,FDefaultSetAllocator>
                             *)this,FVar4.Number + uVar8,&local_58);
      }
      FVar14 = (ForElementType<FName>)((longlong)FVar14 + 8);
    }
    piVar1 = &(this->LevelsToRestore).ArrayMax;
    (this->LevelsToRestore).ArrayNum = 0;
    if (*piVar1 != 0) {
      Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                (8,4,0,&(this->LevelsToRestore).AllocatorInstance,0,piVar1);
    }
    if (EVar12 != None) {
      UWorld::FlushLevelStreaming(this_00,EVar12);
    }
  }
  return;
}

// UnassignLevelVisibilityOverrides @ 14686f920

void __thiscall
UE::MovieScene::FMovieSceneLevelStreamingSharedData::UnassignLevelVisibilityOverrides
          (FMovieSceneLevelStreamingSharedData *this,TArrayView<FName_const_,int> *param_1,
          FMovieSceneEntityID param_2)

{
  FName *pFVar1;
  int iVar2;
  code *pcVar3;
  TTuple<FName,UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData> *pTVar4;
  undefined1 *puVar5;
  longlong lVar6;
  ushort *puVar7;
  FName *pFVar8;
  int iVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  int iVar14;
  undefined1 *puVar15;
  bool bVar16;
  
  pFVar8 = param_1->DataPtr;
  pFVar1 = pFVar8 + param_1->ArrayNum;
  do {
    if (pFVar8 == pFVar1) {
      return;
    }
    puVar10 = (undefined1 *)0x0;
    pTVar4 = TSet<TTuple<FName,UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData>,TDefaultMapHashableKeyFuncs<FName,UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData>,TDefaultMapHashableKeyFuncs<FName,UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData,0>,FDefaultSetAllocator>
                     *)this,*pFVar8);
    puVar5 = &pTVar4->field_0x8;
    if (pTVar4 == (TTuple<FName,UE::MovieScene::FMovieSceneLevelStreamingSharedData::FVisibilityData>
                   *)0x0) {
      puVar5 = puVar10;
    }
    if (puVar5 != (undefined1 *)0x0) {
      iVar2 = *(int *)(puVar5 + 0x30);
      lVar6 = (longlong)iVar2;
      if (iVar2 != 0) {
        puVar13 = puVar5 + 8;
        if (*(undefined1 **)(puVar5 + 0x28) != (undefined1 *)0x0) {
          puVar13 = *(undefined1 **)(puVar5 + 0x28);
        }
        bVar16 = *(ushort *)(puVar13 + 4) != param_2.Value;
        puVar12 = puVar10;
        puVar15 = puVar10;
        do {
          iVar11 = (int)puVar10;
          puVar12 = puVar12 + 1;
          puVar10 = (undefined1 *)(ulonglong)(iVar11 + 1);
          if ((longlong)puVar12 < lVar6) {
            puVar7 = (ushort *)(puVar13 + (longlong)puVar12 * 0x10 + 4);
            do {
              if (bVar16 != (*puVar7 != param_2.Value)) break;
              puVar10 = (undefined1 *)(ulonglong)((int)puVar10 + 1);
              puVar12 = puVar12 + 1;
              puVar7 = puVar7 + 8;
            } while ((longlong)puVar12 < lVar6);
          }
          iVar9 = (int)puVar10 - iVar11;
          if (bVar16 != false) {
            iVar14 = (int)puVar15;
            if (iVar14 != iVar11) {
              memmove(puVar13 + (longlong)iVar14 * 0x10,puVar13 + (longlong)iVar11 * 0x10,
                      (longlong)iVar9 << 4);
            }
            puVar15 = (undefined1 *)(ulonglong)(uint)(iVar14 + iVar9);
          }
          bVar16 = (bool)(bVar16 ^ 1);
        } while ((longlong)puVar12 < lVar6);
        *(int *)(puVar5 + 0x30) = (int)puVar15;
        if ((1 < iVar2 - (int)puVar15) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("NumRemoved <= 1",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneLevelVisibilitySystem.cpp"
                                ,0x158,L""), bVar16)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    pFVar8 = pFVar8 + 1;
  } while( true );
}

