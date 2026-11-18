// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 4

// Cleanup @ 146821250

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
`UMovieSceneMaterialParameterCollectionSystem::OnRun'::__l2::FAddMPCMutation::Cleanup
          (void *this,UMovieSceneEntitySystemLinker *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  FTokenizedMessage *pFVar3;
  code *pcVar4;
  longlong *plVar5;
  bool bVar6;
  FText *pFVar7;
  FMessageLog *this_00;
  TSharedRef<FTokenizedMessage,1> *pTVar8;
  TSharedRef<FTextToken,1> *pTVar9;
  UMovieSceneSequence *pUVar10;
  TSharedRef<FUObjectToken,1> *pTVar11;
  FTextFormat *pFVar12;
  longlong lVar13;
  int iVar14;
  undefined8 *puVar15;
  uint uVar16;
  undefined8 *puVar17;
  uint uVar18;
  int iVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  TBitArray<FDefaultBitArrayAllocator> *pTVar21;
  longlong *plVar22;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  int local_res20;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_2c8
  ;
  FString local_2b8;
  longlong *local_2a8;
  int iStack_2a0;
  uint uStack_29c;
  TBitArray<FDefaultBitArrayAllocator> *local_298;
  undefined4 uStack_290;
  int iStack_28c;
  int local_288;
  int iStack_284;
  int iStack_280;
  undefined4 uStack_27c;
  int local_278;
  TBitArray<FDefaultBitArrayAllocator> *local_270;
  FName local_268;
  longlong *local_260;
  TSharedRef<IMessageToken,1> local_258;
  TSharedRef<IMessageToken,1> local_248;
  TSharedRef<IMessageToken,1> local_238;
  TSharedRef<IMessageToken,1> local_228;
  TSharedRef<IMessageToken,1> local_218;
  longlong *local_208;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_200;
  undefined8 uStack_1e0;
  FString local_1d8;
  FFormatArgumentValue local_1c8;
  FText local_1a8;
  FText local_198;
  TSharedRef<FTokenizedMessage,1> local_188;
  TSharedRef<FUObjectToken,1> local_178;
  FText local_168;
  TSharedRef<FTokenizedMessage,1> local_158;
  TSharedRef<FTextToken,1> local_148;
  FText local_138;
  TSharedRef<FTokenizedMessage,1> local_128;
  TSharedRef<FUObjectToken,1> local_118;
  FText local_108;
  TSharedRef<FTokenizedMessage,1> local_f8;
  TSharedRef<FTextToken,1> local_e8;
  FText local_d8;
  TSharedRef<FTokenizedMessage,1> local_c8;
  FText local_b8;
  FText local_a8;
  TSharedRef<FTokenizedMessage,1> local_98;
  TSharedRef<FTextToken,1> local_88;
  FTextFormat local_78;
  FMessageLog local_68;
  
  iVar19 = *(int *)((longlong)this + 0x48);
  pTVar21 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x30);
  plVar22 = (longlong *)((longlong)this + 0x20);
  iStack_2a0 = 0;
  uStack_29c = 1;
  local_288 = 0;
  iStack_28c = 0;
  if (iVar19 != 0) {
    pTVar20 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x40);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x40) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar20 = pTVar21;
    }
    uVar18 = *(uint *)(pTVar20->AllocatorInstance).InlineData;
    local_288 = 0;
    while (uVar18 == 0) {
      lVar13 = (longlong)iStack_2a0;
      local_288 = local_288 + 0x20;
      iStack_2a0 = iStack_2a0 + 1;
      iStack_28c = iVar19;
      if ((int)(iVar19 + -1 + (iVar19 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_2a0) goto LAB_146821301;
      uVar18 = *(uint *)((pTVar20->AllocatorInstance).InlineData + lVar13 * 4 + 4);
    }
    uStack_29c = -uVar18 & uVar18;
    uVar1 = (ulonglong)uStack_29c * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res20 = (int)lVar13;
    iStack_28c = local_288 + -1 + local_res20;
    if (iVar19 < iStack_28c) {
      iStack_28c = iVar19;
    }
  }
LAB_146821301:
  uVar18 = *(uint *)((longlong)this + 0x48);
  uVar16 = uVar18 & 0xffffffe0;
  iStack_280 = *(int *)((longlong)this + 0x28) - *(int *)((longlong)this + 0x54);
  uStack_290 = 0xffffffff;
  TStack_200._padding_ = CONCAT44(uStack_29c,iStack_2a0);
  TStack_200.CurrentBitIndex = iStack_28c;
  TStack_200.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar18 >> 5;
  TStack_200._28_4_ = iStack_28c;
  TStack_200.BaseBitIndex = local_288;
  uStack_1e0 = CONCAT44(uStack_27c,iStack_280);
  local_2a8 = plVar22;
  local_298 = pTVar21;
  iStack_284 = iStack_28c;
  local_270 = pTVar21;
  local_260 = plVar22;
  local_208 = plVar22;
  TStack_200.Array = pTVar21;
  if ((((int)uVar18 < 0) || (iVar19 < (int)uVar18)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar2 = *(uint *)((longlong)this + 0x48);
  if (uVar18 != uVar2) {
    pTVar20 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x40);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x40) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar20 = pTVar21;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) &
             *(uint *)((pTVar20->AllocatorInstance).InlineData + (longlong)iVar14 * 4);
    while (uVar18 == 0) {
      lVar13 = (longlong)iVar14;
      uVar16 = uVar16 + 0x20;
      iVar14 = iVar14 + 1;
      uVar18 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_146821410;
      uVar18 = *(uint *)((pTVar20->AllocatorInstance).InlineData + lVar13 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_278 = (int)lVar13;
    uVar18 = local_278 + -1 + uVar16;
    if ((int)uVar2 < (int)uVar18) {
      uVar18 = uVar2;
    }
  }
LAB_146821410:
  while( true ) {
    plVar5 = local_208;
    if ((int)local_208[1] - *(int *)((longlong)local_208 + 0x34) != (int)uStack_1e0) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TTuple<UMaterialParameterCollectionInstance_*,TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1>_>,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_200.CurrentBitIndex == uVar18) && (TStack_200.Array == pTVar21)) &&
       (plVar5 == plVar22)) {
      return;
    }
    bVar6 = true;
    plVar22 = (longlong *)((longlong)TStack_200.CurrentBitIndex * 0x30 + *plVar5);
    local_2c8.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2c8.Pairs.ArrayNum = 0;
    local_2c8.Pairs.ArrayMax = 0;
    local_2b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    lVar13 = plVar22[4];
    puVar15 = (undefined8 *)plVar22[3];
    puVar17 = puVar15 + (longlong)(int)lVar13 * 2;
    local_2b8.Data.ArrayNum = 0;
    local_2b8.Data.ArrayMax = 0;
    while( true ) {
      if ((int)plVar22[4] != (int)lVar13) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (puVar15 == puVar17) break;
      if (bVar6) {
        bVar6 = false;
      }
      else {
        ::FString::AppendChars(&local_2b8,L", ",2);
      }
      iVar19 = *(int *)(puVar15 + 1) + -1;
      if (*(int *)(puVar15 + 1) == 0) {
        iVar19 = 0;
      }
      ::FString::AppendChars(&local_2b8,(wchar_t *)*puVar15,iVar19);
      puVar15 = puVar15 + 2;
    }
    pFVar7 = FText::FromString(&local_a8,&local_2b8);
    local_1c8.Type = Text;
    FText::FText((FText *)&local_1c8.TextValue,pFVar7);
    pTVar21 = local_270;
    if ((local_1c8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0xbd,
                           L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                          ), bVar6)) break;
    ::FString::FString(&local_1d8,L"ParamNames");
    TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
    Emplace<FString,FFormatArgumentValue>(&local_2c8,&local_1d8,&local_1c8);
    if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
    if (local_1c8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)
                   *(ITextData *)local_1c8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10
                  ))();
    }
    if (local_a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
    }
    if (local_2b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.Data.AllocatorInstance.Data);
    }
    ::FName::FName(&local_268,"PIE");
    this_00 = FMessageLog::FMessageLog(&local_68,&local_268);
    pFVar7 = FText::FText(&local_b8);
    pTVar8 = FMessageLog::Warning(this_00,&local_c8,pFVar7);
    pFVar3 = pTVar8->Object;
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_d8,L"MaterialParameterCollectionTrack",L"InvalidParameterText",
                        L"Invalid parameter name or type applied in sequence");
    pTVar9 = FTextToken::Create(&local_e8,pFVar7,true);
    local_218.Object = (IMessageToken *)pTVar9->Object;
    local_218.SharedReferenceCount.ReferenceController =
         (pTVar9->SharedReferenceCount).ReferenceController;
    if (local_218.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_218.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_218.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8 = FTokenizedMessage::AddToken(pFVar3,&local_f8,&local_218);
    pFVar3 = pTVar8->Object;
    pFVar7 = FText::FText(&local_108);
    pUVar10 = UE::MovieScene::FSharedPlaybackState::GetSequence
                        ((FSharedPlaybackState *)plVar22[1],&MovieSceneSequenceID::Root);
    pTVar11 = FUObjectToken::Create(&local_118,(UObject *)pUVar10,pFVar7);
    local_228.Object = (IMessageToken *)pTVar11->Object;
    local_228.SharedReferenceCount.ReferenceController =
         (pTVar11->SharedReferenceCount).ReferenceController;
    if (local_228.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_228.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_228.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8 = FTokenizedMessage::AddToken(pFVar3,&local_128,&local_228);
    pFVar3 = pTVar8->Object;
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_138,L"MaterialParameterCollectionTrack",L"OnText",L"on");
    pTVar9 = FTextToken::Create(&local_148,pFVar7,true);
    local_238.Object = (IMessageToken *)pTVar9->Object;
    local_238.SharedReferenceCount.ReferenceController =
         (pTVar9->SharedReferenceCount).ReferenceController;
    if (local_238.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_238.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_238.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8 = FTokenizedMessage::AddToken(pFVar3,&local_158,&local_238);
    pFVar3 = pTVar8->Object;
    pFVar7 = FText::FText(&local_168);
    pTVar11 = FUObjectToken::Create(&local_178,(UObject *)*plVar22,pFVar7);
    local_248.Object = (IMessageToken *)pTVar11->Object;
    local_248.SharedReferenceCount.ReferenceController =
         (pTVar11->SharedReferenceCount).ReferenceController;
    if (local_248.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_248.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_248.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar8 = FTokenizedMessage::AddToken(pFVar3,&local_188,&local_248);
    pFVar3 = pTVar8->Object;
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_198,L"MaterialParameterCollectionTrack",L"InvalidParameterFormatText"
                        ,L"with the following invalid parameters: {ParamNames}.");
    pFVar12 = FTextFormat::FTextFormat(&local_78,pFVar7,Default);
    pFVar7 = FText::Format(&local_1a8,pFVar12,&local_2c8);
    pTVar9 = FTextToken::Create(&local_88,pFVar7,true);
    local_258.Object = (IMessageToken *)pTVar9->Object;
    local_258.SharedReferenceCount.ReferenceController =
         (pTVar9->SharedReferenceCount).ReferenceController;
    if (local_258.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_258.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_258.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FTokenizedMessage::AddToken(pFVar3,&local_98,&local_258);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_98.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_258.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_88.SharedReferenceCount.ReferenceController);
    if (local_1a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1a8.TextData.Reference + 0x10))();
    }
    if (local_198.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_188.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_248.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_178.SharedReferenceCount.ReferenceController);
    if (local_168.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_168.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_238.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.SharedReferenceCount.ReferenceController);
    if (local_138.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_128.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_228.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_118.SharedReferenceCount.ReferenceController);
    if (local_108.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_218.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e8.SharedReferenceCount.ReferenceController);
    if (local_d8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.SharedReferenceCount.ReferenceController);
    if (local_b8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_b8.TextData.Reference + 0x10))();
    }
    FMessageLog::~FMessageLog(&local_68);
    *(undefined1 *)(*plVar22 + 0x28) = 1;
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>
              ((TTuple<FString,FFormatArgumentValue> *)local_2c8.Pairs.AllocatorInstance.Data,
               local_2c8.Pairs.ArrayNum);
    if ((TTuple<FString,FFormatArgumentValue> *)local_2c8.Pairs.AllocatorInstance.Data !=
        (TTuple<FString,FFormatArgumentValue> *)0x0) {
      FMemory::Free(local_2c8.Pairs.AllocatorInstance.Data);
    }
    TStack_200.UnvisitedBitMask = TStack_200.UnvisitedBitMask & ~TStack_200._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_200);
    plVar22 = local_260;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// CreateMutation @ 1468245d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UMovieSceneMaterialParameterCollectionSystem::OnRun'::__l2::FAddMPCMutation::CreateMutation
          (void *this,FEntityManager *param_1,FComponentMask *param_2)

{
  UE::MovieScene::FComponentMask::Set
            (param_2,(FComponentTypeID)*(ushort *)(*(longlong *)((longlong)this + 0x18) + 0x306));
  return;
}

// InitializeAllocation @ 14683ae10

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
`UMovieSceneMaterialParameterCollectionSystem::OnRun'::__l2::FAddMPCMutation::InitializeAllocation
          (void *this,FEntityAllocation *param_1,FComponentMask *param_2)

{
  atomic<int> *paVar1;
  ForAnyElementType *pFVar2;
  atomic<int> aVar3;
  EComponentHeaderLockMode EVar4;
  TReferenceControllerBase<1> *pTVar5;
  ulonglong uVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FComponentHeader *pFVar10;
  UObject *pUVar11;
  UMaterialParameterCollectionInstance *pUVar12;
  FCollectionScalarParameter *pFVar13;
  longlong *plVar14;
  FScriptContainerElement *pFVar15;
  FCollectionVectorParameter *pFVar16;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar17;
  uint uVar18;
  uint uVar19;
  TReferenceControllerBase<1> *pTVar20;
  longlong lVar21;
  FScriptContainerElement *pFVar22;
  FComponentHeader *pFVar23;
  FComponentHeader *pFVar24;
  FComponentHeader *pFVar25;
  ulonglong uVar26;
  EComponentHeaderLockMode EVar27;
  EComponentHeaderLockMode EVar28;
  uchar *puVar29;
  FComponentHeader *pFVar30;
  EComponentHeaderLockMode EVar31;
  int local_res10 [2];
  longlong local_178;
  FWeakObjectPtr local_168;
  UMaterialParameterCollection *local_160;
  FComponentHeader *local_158;
  FComponentHeader *local_150;
  EComponentHeaderLockMode local_148;
  EComponentHeaderLockMode local_144;
  FComponentHeader *local_140;
  FComponentHeader *local_138;
  FComponentHeader *local_130;
  FComponentHeader *local_128;
  undefined8 local_120;
  FComponentHeader *local_118;
  FComponentHeader *local_110;
  undefined8 local_108;
  FComponentHeader *local_100;
  FComponentHeader *local_f8;
  undefined8 local_f0;
  FComponentHeader *local_e8;
  UMaterialParameterCollectionInstance *local_e0;
  ulonglong local_d8;
  TReferenceControllerBase<1> *local_d0;
  UMaterialParameterCollectionInstance *local_c8;
  ulonglong local_c0;
  TReferenceControllerBase<1> *local_b8;
  uchar *local_b0;
  uchar *local_a8;
  uchar *local_a0;
  UMaterialParameterCollectionInstance *local_98;
  UWorld *local_90;
  UMaterialParameterCollectionInstance **local_88;
  FName local_80;
  FName local_78;
  ulonglong local_70;
  UMaterialParameterCollection **local_68;
  UWorld **local_60;
  FString local_58;
  FString local_48;
  
  local_130 = param_1->ComponentHeaders;
  pFVar30 = (FComponentHeader *)0x0;
  EVar27 = LockFree;
  pFVar23 = local_130 + param_1->NumComponents;
  for (; local_130 != pFVar23; local_130 = local_130 + 1) {
    pFVar24 = local_130;
    if ((local_130->ComponentType).Value ==
        *(ushort *)(*(longlong *)((longlong)this + 0x18) + 0x306)) goto LAB_14683aeb1;
  }
  local_130 = (FComponentHeader *)0x0;
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  pFVar24 = pFVar30;
  if (bVar8) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_14683aeb1:
  local_144 = param_1->LockMode;
  if (local_144 == Mutex) {
    AcquireSRWLockExclusive((PSRWLOCK)&pFVar24->ReadWriteLock);
  }
  LOCK();
  paVar1 = &pFVar24->ScheduledAccessCount;
  aVar3 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if ((aVar3 != (atomic<int>)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("PreviousAccessCount == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                         ,0x487,
                         L"Component header is still in use when it is being opened for write!"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_b0 = pFVar24->Components;
  local_138 = param_1->ComponentHeaders;
  pFVar23 = local_138 + param_1->NumComponents;
  for (; local_138 != pFVar23; local_138 = local_138 + 1) {
    pFVar24 = local_138;
    if ((local_138->ComponentType).Value ==
        *(ushort *)(*(longlong *)((longlong)this + 0x18) + 0x308)) goto LAB_14683af68;
  }
  local_138 = (FComponentHeader *)0x0;
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  pFVar24 = pFVar30;
  if (bVar8) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_14683af68:
  local_148 = param_1->LockMode;
  if (local_148 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar24->ReadWriteLock);
  }
  LOCK();
  pFVar24->ScheduledAccessCount = (atomic<int>)((int)pFVar24->ScheduledAccessCount + 1);
  UNLOCK();
  local_a8 = pFVar24->Components;
  local_140 = param_1->ComponentHeaders;
  pFVar23 = local_140 + param_1->NumComponents;
  for (; local_140 != pFVar23; local_140 = local_140 + 1) {
    pFVar24 = local_140;
    if ((local_140->ComponentType).Value == *(ushort *)(*(longlong *)((longlong)this + 0x10) + 0x5e)
       ) goto LAB_14683aff0;
  }
  local_140 = (FComponentHeader *)0x0;
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("Header",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                     ,0x2cd,L"");
  pFVar24 = pFVar30;
  if (bVar8) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_14683aff0:
  EVar4 = param_1->LockMode;
  if (EVar4 == Mutex) {
    AcquireSRWLockShared((PSRWLOCK)&pFVar24->ReadWriteLock);
  }
  LOCK();
  pFVar24->ScheduledAccessCount = (atomic<int>)((int)pFVar24->ScheduledAccessCount + 1);
  UNLOCK();
  local_a0 = pFVar24->Components;
  pFVar23 = param_1->ComponentHeaders;
  pFVar24 = pFVar23 + param_1->NumComponents;
  for (; pFVar23 != pFVar24; pFVar23 = pFVar23 + 1) {
    if ((pFVar23->ComponentType).Value == *(ushort *)(*(longlong *)((longlong)this + 0x18) + 0x22e))
    {
      EVar31 = param_1->LockMode;
      if (EVar31 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar23->ReadWriteLock);
      }
      LOCK();
      pFVar23->ScheduledAccessCount = (atomic<int>)((int)pFVar23->ScheduledAccessCount + 1);
      UNLOCK();
      local_158 = (FComponentHeader *)pFVar23->Components;
      local_120 = CONCAT44(local_120._4_4_,EVar31);
      local_128 = pFVar23;
      goto LAB_14683b05c;
    }
  }
  local_120 = 0;
  local_128 = (FComponentHeader *)0x0;
  EVar31 = LockFree;
  local_158 = pFVar30;
LAB_14683b05c:
  pFVar24 = local_128;
  pFVar23 = param_1->ComponentHeaders;
  pFVar25 = pFVar23 + param_1->NumComponents;
  for (; local_118 = local_158, pFVar23 != pFVar25; pFVar23 = pFVar23 + 1) {
    if ((pFVar23->ComponentType).Value == *(ushort *)(*(longlong *)((longlong)this + 0x18) + 0x232))
    {
      EVar28 = param_1->LockMode;
      if (EVar28 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar23->ReadWriteLock);
      }
      LOCK();
      pFVar23->ScheduledAccessCount = (atomic<int>)((int)pFVar23->ScheduledAccessCount + 1);
      UNLOCK();
      local_150 = (FComponentHeader *)pFVar23->Components;
      local_108 = CONCAT44(local_108._4_4_,EVar28);
      local_110 = pFVar23;
      goto LAB_14683b0b4;
    }
  }
  local_108 = 0;
  local_110 = (FComponentHeader *)0x0;
  local_150 = pFVar30;
  EVar28 = EVar27;
LAB_14683b0b4:
  pFVar25 = local_110;
  pFVar23 = param_1->ComponentHeaders;
  pFVar10 = pFVar23 + param_1->NumComponents;
  for (; local_100 = local_150, pFVar23 != pFVar10; pFVar23 = pFVar23 + 1) {
    if ((pFVar23->ComponentType).Value == *(ushort *)(*(longlong *)((longlong)this + 0x18) + 0x234))
    {
      EVar27 = param_1->LockMode;
      if (EVar27 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar23->ReadWriteLock);
      }
      LOCK();
      pFVar23->ScheduledAccessCount = (atomic<int>)((int)pFVar23->ScheduledAccessCount + 1);
      UNLOCK();
      pFVar10 = (FComponentHeader *)pFVar23->Components;
      local_f0 = CONCAT44(local_f0._4_4_,EVar27);
      goto LAB_14683b100;
    }
  }
  local_f0 = 0;
  pFVar10 = pFVar30;
  pFVar23 = pFVar30;
LAB_14683b100:
  local_70 = (ulonglong)param_1->Size;
  local_f8 = pFVar23;
  local_e8 = pFVar10;
  if (local_70 != 0) {
    local_178 = 0;
    puVar29 = local_b0;
    do {
      puVar29[0] = '\0';
      puVar29[1] = '\0';
      puVar29[2] = '\0';
      puVar29[3] = '\0';
      puVar29[4] = '\0';
      puVar29[5] = '\0';
      puVar29[6] = '\0';
      puVar29[7] = '\0';
      puVar29[8] = '\0';
      puVar29[9] = '\0';
      puVar29[10] = '\0';
      puVar29[0xb] = '\0';
      puVar29[0xc] = '\0';
      puVar29[0xd] = '\0';
      puVar29[0xe] = '\0';
      puVar29[0xf] = '\0';
      local_160 = (UMaterialParameterCollection *)
                  FWeakObjectPtr::Get((FWeakObjectPtr *)(local_a8 + local_178 * 8));
      lVar21 = *(longlong *)(*(longlong *)((longlong)this + 8) + 8);
      pTVar5 = *(TReferenceControllerBase<1> **)
                ((ulonglong)*(ushort *)(local_a0 + local_178 * 4) * 0x140 + 0x120 + lVar21);
      uVar6 = *(ulonglong *)
               ((ulonglong)*(ushort *)(local_a0 + local_178 * 4) * 0x140 + 0x118 + lVar21);
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)(uVar6 + 0x18));
      local_90 = UEngine::GetWorldFromContextObject(GEngine,pUVar11,LogAndReturnNull);
      if ((local_90 != (UWorld *)0x0) && (local_160 != (UMaterialParameterCollection *)0x0)) {
        pUVar12 = UWorld::GetParameterCollectionInstance(local_90,local_160);
        pFVar23 = pFVar30;
        pFVar24 = pFVar30;
        if (pUVar12 != (UMaterialParameterCollectionInstance *)0x0) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar12);
          }
          local_168.ObjectIndex = 0;
          local_168.ObjectSerialNumber = 0;
          local_98 = pUVar12;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar12);
          }
          FWeakObjectPtr::operator=(&local_168,(FObjectPtr)&local_98);
          pFVar23 = (FComponentHeader *)((ulonglong)local_168 >> 0x20);
          pFVar24 = (FComponentHeader *)((ulonglong)local_168 & 0xffffffff);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar12 != (UMaterialParameterCollectionInstance *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar12);
        }
        uVar26 = (longlong)pFVar23 << 0x20 | (ulonglong)pFVar24;
        if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
           (pUVar12 == (UMaterialParameterCollectionInstance *)0x0)) {
          *(UMaterialParameterCollectionInstance **)puVar29 = pUVar12;
          *(ulonglong *)(puVar29 + 8) = uVar26;
          if (pUVar12 == (UMaterialParameterCollectionInstance *)0x0) {
            local_68 = &local_160;
            local_60 = &local_90;
            bVar8 = ``UMovieSceneMaterialParameterCollectionSystem::OnRun'::__l2::FAddMPCMutation::
                    InitializeAllocation'::__l8::<lambda_1>::operator()(&local_68);
            if (!bVar8) goto LAB_14683b74f;
          }
        }
        else {
          UE::GC::MarkAsReachable((UObject *)pUVar12);
          *(UMaterialParameterCollectionInstance **)puVar29 = pUVar12;
          *(ulonglong *)(puVar29 + 8) = uVar26;
        }
        if (local_158 == (FComponentHeader *)0x0) {
          if ((local_150 != (FComponentHeader *)0x0) || (pFVar10 != (FComponentHeader *)0x0)) {
            pFVar23 = pFVar10;
            if (local_150 != (FComponentHeader *)0x0) {
              pFVar23 = local_150;
            }
            local_78 = *(FName *)(&pFVar23->_padding_ + local_178);
            pFVar16 = UMaterialParameterCollection::GetVectorParameterByName(local_160,local_78);
            if ((pFVar16 == (FCollectionVectorParameter *)0x0) &&
               (pUVar12->bLoggedMissingParameterWarning == false)) {
              if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
                UNLOCK();
              }
              uVar18 = ((uint)((ulonglong)pUVar12 >> 0x14) & 0xffff ^
                       (uint)((ulonglong)pUVar12 >> 4)) * -0x7a143595;
              uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
              uVar18 = uVar18 >> 0x10 ^ uVar18;
              uVar19 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
              uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
              local_c8 = pUVar12;
              local_c0 = uVar6;
              local_b8 = pTVar5;
              pTVar17 = TMapBase<TTuple<UMaterialParameterCollectionInstance_*,TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1>_>,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UMaterialParameterCollectionInstance_*,TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1>_>,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                        ::
                        FindOrAddImpl<TTuple<UMaterialParameterCollectionInstance_*,TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1>_>_>
                                  ((TMapBase<TTuple<UMaterialParameterCollectionInstance_*,TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1>_>,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UMaterialParameterCollectionInstance_*,TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1>_>,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                                    *)((longlong)this + 0x20),
                                   (uVar18 >> 2) +
                                   (uVar19 >> 0x10 ^ uVar19) + uVar18 * 0x40 + -0x61c88647 ^ uVar18,
                                   (TTuple<UMaterialParameterCollectionInstance_*,TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1>_>
                                    *)&local_c8);
              pFVar22 = (FScriptContainerElement *)::FName::ToString(&local_78,&local_48);
              pFVar15 = (pTVar17->AllocatorInstance).Data;
              if (((pFVar15 <= pFVar22) && (pFVar22 < pFVar15 + (longlong)pTVar17->ArrayMax * 0x10))
                 && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              iVar9 = pTVar17->ArrayNum;
              if (iVar9 == pTVar17->ArrayMax) {
                iVar9 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&pTVar17->AllocatorInstance,&pTVar17->ArrayMax);
              }
              pTVar17->ArrayNum = iVar9 + 1;
              pFVar15 = (pTVar17->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
              *(undefined8 *)pFVar15 = 0;
              *(undefined8 *)pFVar15 = *(undefined8 *)&pFVar22->field_0x0;
              *(undefined8 *)&pFVar22->field_0x0 = 0;
              *(undefined4 *)(pFVar15 + 8) = *(undefined4 *)(pFVar22 + 8);
              *(undefined4 *)(pFVar15 + 0xc) = *(undefined4 *)(pFVar22 + 0xc);
              *(undefined8 *)(pFVar22 + 8) = 0;
              pTVar20 = local_b8;
              if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_48.Data.AllocatorInstance.Data);
                pTVar20 = local_b8;
              }
              goto LAB_14683b74a;
            }
          }
        }
        else {
          local_80 = *(FName *)(&local_158->_padding_ + local_178);
          pFVar13 = UMaterialParameterCollection::GetScalarParameterByName(local_160,local_80);
          if ((pFVar13 == (FCollectionScalarParameter *)0x0) &&
             (pUVar12->bLoggedMissingParameterWarning == false)) {
            if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
              UNLOCK();
            }
            uVar18 = ((uint)((ulonglong)pUVar12 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar12 >> 4))
                     * -0x7a143595;
            uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
            uVar18 = uVar18 >> 0x10 ^ uVar18;
            uVar19 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
            uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
            uVar18 = (uVar18 >> 2) + 0x9e3779b9 + (uVar19 >> 0x10 ^ uVar19) + uVar18 * 0x40 ^ uVar18
            ;
            local_e0 = pUVar12;
            local_d8 = uVar6;
            local_d0 = pTVar5;
            if (*(int *)((longlong)this + 0x28) != *(int *)((longlong)this + 0x54)) {
              lVar21 = (longlong)this + 0x58;
              if (*(longlong *)((longlong)this + 0x60) != 0) {
                lVar21 = *(longlong *)((longlong)this + 0x60);
              }
              iVar9 = *(int *)(lVar21 + (ulonglong)(*(int *)((longlong)this + 0x68) - 1U & uVar18) *
                                        4);
              if (iVar9 != -1) {
                do {
                  plVar14 = (longlong *)
                            ((longlong)iVar9 * 0x30 + *(longlong *)((longlong)this + 0x20));
                  if (((UMaterialParameterCollectionInstance *)*plVar14 == pUVar12) &&
                     (plVar14[1] == uVar6)) {
                    if ((iVar9 != -1) && (plVar14 != (longlong *)0x0)) goto LAB_14683b487;
                    break;
                  }
                  iVar9 = (int)plVar14[5];
                } while (iVar9 != -1);
              }
            }
            local_88 = &local_e0;
            TSet<TTuple<TTuple<UMaterialParameterCollectionInstance_*,TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1>_>,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TTuple<UMaterialParameterCollectionInstance_*,TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1>_>,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::
            EmplaceByHash<TKeyInitializer<TTuple<UMaterialParameterCollectionInstance_*,TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1>_>_&&>_>
                      ((TSet<TTuple<TTuple<UMaterialParameterCollectionInstance_*,TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1>_>,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TTuple<UMaterialParameterCollectionInstance_*,TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1>_>,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        *)((longlong)this + 0x20),(uint)local_res10,
                       (TKeyInitializer<TTuple<UMaterialParameterCollectionInstance_*,TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1>_>_&&>
                        *)(ulonglong)uVar18,(bool *)&local_88);
            plVar14 = (longlong *)
                      ((longlong)local_res10[0] * 0x30 + *(longlong *)((longlong)this + 0x20));
LAB_14683b487:
            pFVar2 = (ForAnyElementType *)(plVar14 + 3);
            pFVar15 = (FScriptContainerElement *)::FName::ToString(&local_80,&local_58);
            if (((pFVar2->Data <= pFVar15) &&
                (pFVar15 < pFVar2->Data + (longlong)*(int *)((longlong)plVar14 + 0x24) * 0x10)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar9 = (int)plVar14[4];
            if (iVar9 == *(int *)((longlong)plVar14 + 0x24)) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,pFVar2,(int *)((longlong)plVar14 + 0x24));
            }
            *(int *)(plVar14 + 4) = iVar9 + 1;
            pFVar22 = pFVar2->Data + (longlong)iVar9 * 0x10;
            *(undefined8 *)pFVar22 = 0;
            *(undefined8 *)pFVar22 = *(undefined8 *)pFVar15;
            *(undefined8 *)pFVar15 = 0;
            *(undefined4 *)(pFVar22 + 8) = *(undefined4 *)(pFVar15 + 8);
            *(undefined4 *)(pFVar22 + 0xc) = *(undefined4 *)(pFVar15 + 0xc);
            *(undefined8 *)(pFVar15 + 8) = 0;
            pTVar20 = local_d0;
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
              pTVar20 = local_d0;
            }
LAB_14683b74a:
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar20);
          }
        }
      }
LAB_14683b74f:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      puVar29 = puVar29 + 0x10;
      local_178 = local_178 + 1;
    } while (local_178 < (longlong)local_70);
    pFVar25 = local_110;
    pFVar24 = local_128;
    EVar27 = (EComponentHeaderLockMode)local_f0;
    EVar28 = (EComponentHeaderLockMode)local_108;
    EVar31 = (EComponentHeaderLockMode)local_120;
  }
  if (local_f8 != (FComponentHeader *)0x0) {
    LOCK();
    local_f8->ScheduledAccessCount = (atomic<int>)((int)local_f8->ScheduledAccessCount + -1);
    UNLOCK();
    if (EVar27 == Mutex) {
      ReleaseSRWLockShared((PSRWLOCK)&local_f8->ReadWriteLock);
    }
  }
  if (pFVar25 != (FComponentHeader *)0x0) {
    LOCK();
    pFVar25->ScheduledAccessCount = (atomic<int>)((int)pFVar25->ScheduledAccessCount + -1);
    UNLOCK();
    if (EVar28 == Mutex) {
      ReleaseSRWLockShared((PSRWLOCK)&pFVar25->ReadWriteLock);
    }
  }
  if (pFVar24 != (FComponentHeader *)0x0) {
    LOCK();
    pFVar24->ScheduledAccessCount = (atomic<int>)((int)pFVar24->ScheduledAccessCount + -1);
    UNLOCK();
    if (EVar31 == Mutex) {
      ReleaseSRWLockShared((PSRWLOCK)&pFVar24->ReadWriteLock);
    }
  }
  LOCK();
  local_140->ScheduledAccessCount = (atomic<int>)((int)local_140->ScheduledAccessCount + -1);
  UNLOCK();
  if (EVar4 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&local_140->ReadWriteLock);
  }
  LOCK();
  local_138->ScheduledAccessCount = (atomic<int>)((int)local_138->ScheduledAccessCount + -1);
  UNLOCK();
  if (local_148 == Mutex) {
    ReleaseSRWLockShared((PSRWLOCK)&local_138->ReadWriteLock);
  }
  if ((FComponentHeader *)local_130->SerialNumber != (FComponentHeader *)0x0) {
    pFVar30 = (FComponentHeader *)local_130->SerialNumber;
  }
  local_130->SerialNumber = (ulong64)pFVar30;
  LOCK();
  local_130->ScheduledAccessCount = (atomic<int>)((int)local_130->ScheduledAccessCount + -1);
  UNLOCK();
  if (local_144 == Mutex) {
    ReleaseSRWLockExclusive((PSRWLOCK)&local_130->ReadWriteLock);
  }
  return;
}

// operator() @ 1504f4980

bool __thiscall
``UMovieSceneMaterialParameterCollectionSystem::OnRun'::__l2::FAddMPCMutation::InitializeAllocation'
::__l8::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_38;
  FString local_28;
  
  bVar3 = false;
  bVar2 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<805191597883916505>);
  if (bVar4) {
    local_res10 = *(FName *)(**(longlong **)((longlong)this + 8) + 0x18);
    ::FName::ToString(&local_res10,&local_28);
    local_res18[0] = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(local_res18,&local_38);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<805191597883916505>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504f4a3f;
    }
  }
  bVar4 = false;
LAB_1504f4a3f:
  if ((bVar2) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

