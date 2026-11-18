// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SequencerScripting
// Functions: 51

// AddKeyInChannel @ 14c676c40

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneScriptingActorReferenceKey * __cdecl
TMovieSceneScriptingChannel<FMovieSceneActorReferenceData,UMovieSceneScriptingActorReferenceKey,FMovieSceneActorReferenceKey>
::AddKeyInChannel(TMovieSceneChannelHandle<FMovieSceneActorReferenceData> *param_1,
                 TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
                 TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3,FFrameNumber param_4,
                 FMovieSceneActorReferenceKey *param_5,float param_6,EMovieSceneTimeUnit param_7,
                 EMovieSceneKeyInterpolation param_8)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  FFrameRate FVar4;
  bool bVar5;
  int iVar6;
  FKeyHandle FVar7;
  FMovieSceneActorReferenceData *pFVar8;
  UObject *pUVar9;
  UMovieSceneScriptingActorReferenceKey *pUVar10;
  FFrameRate FVar11;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  int local_84;
  float local_80;
  int local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  TMovieSceneChannelData<FMovieSceneActorReferenceKey> local_60;
  undefined1 local_40 [24];
  
  local_res10 = param_2.WeakPtr;
  local_res18[0] = param_3.WeakPtr;
  pFVar8 = (FMovieSceneActorReferenceData *)
           FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  if (pFVar8 == (FMovieSceneActorReferenceData *)0x0) {
    local_70 = 0;
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to add key.",Error,
               (FName)0x0);
    plVar2 = *(longlong **)&param_1->field_0x8;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
    return (UMovieSceneScriptingActorReferenceKey *)0x0;
  }
  pUVar9 = GetTransientPackageAsObject();
  pUVar10 = NewObject<UMovieSceneScriptingActorReferenceKey>(pUVar9);
  if (param_7 == DisplayRate) {
    FWeakObjectPtr::Get(&local_res10);
    UMovieSceneSequenceExtensions::GetTickResolution((UMovieSceneSequence *)local_40);
    FWeakObjectPtr::Get(&local_res10);
    FVar11 = UMovieSceneSequenceExtensions::GetDisplayRate((UMovieSceneSequence *)(local_40 + 8));
    uStack_74 = 0;
    FVar4.Denominator = 0;
    FVar4.Numerator = param_4.Value;
    local_78 = param_4.Value;
    ConvertFrameTime((FFrameTime)&local_84,FVar4,*(FFrameRate *)FVar11);
    param_4.Value = local_84;
    if (__real_3f000000 <= local_80) {
      param_4.Value = local_84 + 1;
    }
  }
  bVar5 = FWeakObjectPtr::IsValid(local_res18);
  if (bVar5) {
    FWeakObjectPtr::Get(local_res18);
  }
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_60,(FMovieSceneChannel *)pFVar8,&pFVar8->KeyTimes,
             (FKeyHandleLookupTable *)&pFVar8->KeyHandles);
  local_60.Values = &pFVar8->KeyValues;
  if ((local_60._padding_ == 0) ||
     (local_60.Values == (TArray<FMovieSceneActorReferenceKey,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pUVar10 = (UMovieSceneScriptingActorReferenceKey *)(*pcVar3)();
      return pUVar10;
    }
  }
  iVar6 = FMovieSceneChannelData::FindKey
                    ((FMovieSceneChannelData *)&local_60,param_4,(FFrameNumber)0x0);
  FKeyHandle::Invalid();
  if (iVar6 == -1) {
    TMovieSceneChannelData<FMovieSceneActorReferenceKey>::AddKey(&local_60,param_4,param_5);
    FVar7 = FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)&local_60,(int)local_64);
    FVar7.Index = *(uint *)CONCAT44(extraout_var_00,FVar7.Index);
  }
  else {
    FVar7 = FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)&local_60,(int)local_68);
    FVar7.Index = *(uint *)CONCAT44(extraout_var,FVar7.Index);
    UE::MovieScene::AssignValue<FMovieSceneActorReferenceData,FMovieSceneActorReferenceKey_&>
              (pFVar8,FVar7,param_5);
  }
  *(uint *)&pUVar10->field_0x28 = FVar7.Index;
  TMovieSceneChannelHandle<FMovieSceneChannel>::operator=
            ((TMovieSceneChannelHandle<FMovieSceneChannel> *)&pUVar10->field_0x40,
             (TMovieSceneChannelHandle<FMovieSceneChannel> *)param_1);
  *(int *)&pUVar10->field_0x34 = local_res18[0].ObjectIndex;
  *(int *)&pUVar10->field_0x38 = local_res18[0].ObjectSerialNumber;
  *(int *)&pUVar10->field_0x2c = local_res10.ObjectIndex;
  *(int *)&pUVar10->field_0x30 = local_res10.ObjectSerialNumber;
  plVar2 = *(longlong **)&param_1->field_0x8;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)(*plVar2 + 8))(plVar2,1);
    }
  }
  return pUVar10;
}

// EvaluateKeysInChannel @ 14c677000

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<bool,TSizedDefaultAllocator<32>_> * __cdecl
TMovieSceneScriptingChannel<FMovieSceneBoolChannel,UMovieSceneScriptingBoolKey,bool>::
EvaluateKeysInChannel
          (TArray<bool,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TMovieSceneChannelHandle<FMovieSceneBoolChannel> *param_1,
          TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
          FSequencerScriptingRange *param_3,FFrameRate param_4)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  FFrameRate FVar6;
  FFrameRate FVar7;
  float fVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FMovieSceneChannel *pFVar12;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar13;
  FFrameTime FVar14;
  uint uVar15;
  FMovieSceneChannel *pFVar16;
  wchar_t *pwVar17;
  TEnumAsByte<ERangeBoundTypes::Type> TVar18;
  TEnumAsByte<ERangeBoundTypes::Type> TVar19;
  longlong lVar20;
  uint uVar21;
  longlong lVar22;
  float fVar23;
  undefined1 auVar24 [16];
  float fVar25;
  FWeakObjectPtr local_res18;
  float fStack_d4;
  undefined1 local_d0 [16];
  longlong local_c0;
  uint local_b8;
  undefined4 uStack_b4;
  uint local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  longlong local_a0;
  longlong local_98;
  TRange<FFrameNumber> local_90;
  undefined1 local_80 [8];
  undefined4 local_78 [2];
  undefined1 local_70 [56];
  
  lVar22 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res18 = param_2.WeakPtr;
  pFVar12 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  if (pFVar12 == (FMovieSceneChannel *)0x0) {
    local_98 = 0;
    pwVar17 = L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to evaluate keys.";
  }
  else {
    FWeakObjectPtr::Get(&local_res18);
    UMovieSceneSequenceExtensions::GetTickResolution((UMovieSceneSequence *)local_d0);
    FSequencerScriptingRange::ToNative(param_3,&local_90,(FFrameRate)local_d0._0_8_);
    TVar19 = local_90.LowerBound.Type.Value;
    if (TVar19.Value != '\x02') {
      TVar18 = local_90.UpperBound.Type.Value;
      if (TVar18.Value != '\x02') {
        local_c0 = 1;
        fVar25 = 0.0;
        ConvertFrameTime((FFrameTime)local_80,(FFrameRate)0x1,param_4);
        if (TVar19.Value == '\x02') {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InLowerBound.IsOpen()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                             ,0x2c,L"");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            pTVar13 = (TArray<bool,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar13;
          }
        }
        lVar20 = lVar22;
        if (TVar19.Value == '\0') {
          lVar20 = 4;
        }
        iVar11 = *(int *)((longlong)
                          &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteInclusiveLower(TRangeBound<FFrameNumber>_const&___ptr64)'
                           ::__l2::Offsets + lVar20);
        if (TVar19.Value == '\x02') {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L"");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            pTVar13 = (TArray<bool,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar13;
          }
        }
        local_d0[8] = local_90.UpperBound.Type.Value;
        local_d0._9_3_ = local_90.UpperBound._1_3_;
        local_d0._12_4_ = local_90.UpperBound.Value.Value;
        if (TVar18.Value == '\x02') {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InUpperBound.IsOpen()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                             ,0x44,L"");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            pTVar13 = (TArray<bool,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar13;
          }
        }
        if (TVar18.Value == '\x01') {
          lVar22 = 4;
        }
        iVar2 = *(int *)((longlong)
                         &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteExclusiveUpper(TRangeBound<FFrameNumber>_const&___ptr64)'
                          ::__l2::Offsets + lVar22);
        if (TVar18.Value == '\x02') {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L"");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            pTVar13 = (TArray<bool,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar13;
          }
        }
        fVar8 = __real_3f000000;
        uVar10 = iVar11 + local_90.LowerBound.Value.Value.Value;
        uVar21 = local_d0._12_4_ + iVar2;
        uStack_b4 = 0;
        local_d0._8_8_ = ZEXT48(uVar21);
        local_b8 = uVar21;
        while( true ) {
          FVar6.Denominator = (int)fVar25;
          FVar6.Numerator = uVar10;
          if (((int)uVar21 <= (int)uVar10) && ((uVar10 != uVar21 || (0.0 <= fVar25)))) break;
          FVar14 = ConvertFrameTime((FFrameTime)local_70,FVar6,(FFrameRate)local_d0._0_8_);
          local_b0 = *(uint *)FVar14;
          if (fVar8 < *(float *)((longlong)FVar14 + 4) || fVar8 == *(float *)((longlong)FVar14 + 4))
          {
            local_b0 = local_b0 + 1;
          }
          uStack_ac = 0;
          FVar7.Denominator = 0;
          FVar7.Numerator = local_b0;
          ConvertFrameTime((FFrameTime)local_78,FVar7,param_4);
          pcVar5 = *(code **)(pFVar12->_padding_ + 0xa0);
          iVar11 = __return_storage_ptr__->ArrayNum;
          if (iVar11 == __return_storage_ptr__->ArrayMax) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x101,&__return_storage_ptr__->AllocatorInstance,
                                &__return_storage_ptr__->ArrayMax);
          }
          pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
          __return_storage_ptr__->ArrayNum = iVar11 + 1;
          uStack_a4 = 0;
          pFVar3[iVar11] = (FScriptContainerElement)0x0;
          local_a8 = local_78[0];
          pFVar16 = pFVar12;
          (*pcVar5)(pFVar12,local_78[0]);
          fStack_d4 = local_80._4_4_;
          fVar25 = fVar25 + fStack_d4;
          uVar10 = ((int)ROUND((fVar25 + fVar25) - fVar8) >> 1) + uVar10 + local_80._0_4_;
          iVar11 = (int)fVar25;
          fVar23 = fVar25;
          if ((iVar11 != -0x80000000) && ((float)iVar11 != fVar25)) {
            auVar24._4_4_ = fVar25;
            auVar24._0_4_ = fVar25;
            auVar24._8_8_ = 0;
            uVar15 = movmskps((int)pFVar16,auVar24);
            fVar23 = (float)(int)(iVar11 - (uVar15 & 1));
          }
          fVar25 = fVar25 - fVar23;
        }
        goto LAB_14c677371;
      }
    }
    local_a0 = 0;
    pwVar17 = L"Unbounded range passed to evaluate keys.";
  }
  FFrame::KismetExecutionMessage(pwVar17,Error,(FName)0x0);
LAB_14c677371:
  plVar4 = *(longlong **)&param_1->field_0x8;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar11 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar11 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return __return_storage_ptr__;
}

// EvaluateKeysInChannel @ 14c677400

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<double,TSizedDefaultAllocator<32>_> * __cdecl
TMovieSceneScriptingChannel<FMovieSceneDoubleChannel,UMovieSceneScriptingDoubleKey,double>::
EvaluateKeysInChannel
          (TArray<double,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TMovieSceneChannelHandle<FMovieSceneDoubleChannel> *param_1,
          TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
          FSequencerScriptingRange *param_3,FFrameRate param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  FFrameRate FVar6;
  FFrameRate FVar7;
  float fVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FMovieSceneDoubleChannel *this;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar12;
  FFrameTime FVar13;
  uint uVar14;
  FMovieSceneDoubleChannel *pFVar15;
  wchar_t *pwVar16;
  TEnumAsByte<ERangeBoundTypes::Type> TVar17;
  TEnumAsByte<ERangeBoundTypes::Type> TVar18;
  longlong lVar19;
  uint uVar20;
  longlong lVar21;
  float fVar22;
  undefined1 auVar23 [16];
  float fVar24;
  FWeakObjectPtr local_res18;
  float fStack_d4;
  undefined1 local_d0 [16];
  longlong local_c0;
  uint local_b8;
  undefined4 uStack_b4;
  uint local_b0;
  undefined4 uStack_ac;
  uint local_a8;
  undefined4 uStack_a4;
  longlong local_a0;
  longlong local_98;
  TRange<FFrameNumber> local_90;
  undefined1 local_80 [8];
  uint local_78 [2];
  undefined1 local_70 [56];
  
  lVar21 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res18 = param_2.WeakPtr;
  this = (FMovieSceneDoubleChannel *)
         FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  if (this == (FMovieSceneDoubleChannel *)0x0) {
    local_98 = 0;
    pwVar16 = L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to evaluate keys.";
  }
  else {
    FWeakObjectPtr::Get(&local_res18);
    UMovieSceneSequenceExtensions::GetTickResolution((UMovieSceneSequence *)local_d0);
    FSequencerScriptingRange::ToNative(param_3,&local_90,(FFrameRate)local_d0._0_8_);
    TVar18 = local_90.LowerBound.Type.Value;
    if (TVar18.Value != '\x02') {
      TVar17 = local_90.UpperBound.Type.Value;
      if (TVar17.Value != '\x02') {
        local_c0 = 1;
        fVar24 = 0.0;
        ConvertFrameTime((FFrameTime)local_80,(FFrameRate)0x1,param_4);
        if (TVar18.Value == '\x02') {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InLowerBound.IsOpen()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                             ,0x2c,L"");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            pTVar12 = (TArray<double,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar12;
          }
        }
        lVar19 = lVar21;
        if (TVar18.Value == '\0') {
          lVar19 = 4;
        }
        iVar11 = *(int *)((longlong)
                          &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteInclusiveLower(TRangeBound<FFrameNumber>_const&___ptr64)'
                           ::__l2::Offsets + lVar19);
        if (TVar18.Value == '\x02') {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L"");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            pTVar12 = (TArray<double,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar12;
          }
        }
        local_d0[8] = local_90.UpperBound.Type.Value;
        local_d0._9_3_ = local_90.UpperBound._1_3_;
        local_d0._12_4_ = local_90.UpperBound.Value.Value;
        if (TVar17.Value == '\x02') {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InUpperBound.IsOpen()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                             ,0x44,L"");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            pTVar12 = (TArray<double,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar12;
          }
        }
        if (TVar17.Value == '\x01') {
          lVar21 = 4;
        }
        iVar3 = *(int *)((longlong)
                         &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteExclusiveUpper(TRangeBound<FFrameNumber>_const&___ptr64)'
                          ::__l2::Offsets + lVar21);
        if (TVar17.Value == '\x02') {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L"");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            pTVar12 = (TArray<double,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar12;
          }
        }
        fVar8 = __real_3f000000;
        uVar10 = iVar11 + local_90.LowerBound.Value.Value.Value;
        uVar20 = local_d0._12_4_ + iVar3;
        uStack_b4 = 0;
        local_d0._8_8_ = ZEXT48(uVar20);
        local_b8 = uVar20;
        while( true ) {
          FVar6.Denominator = (int)fVar24;
          FVar6.Numerator = uVar10;
          if (((int)uVar20 <= (int)uVar10) && ((uVar10 != uVar20 || (0.0 <= fVar24)))) break;
          FVar13 = ConvertFrameTime((FFrameTime)local_70,FVar6,(FFrameRate)local_d0._0_8_);
          local_b0 = *(uint *)FVar13;
          if (fVar8 < *(float *)((longlong)FVar13 + 4) || fVar8 == *(float *)((longlong)FVar13 + 4))
          {
            local_b0 = local_b0 + 1;
          }
          uStack_ac = 0;
          FVar7.Denominator = 0;
          FVar7.Numerator = local_b0;
          ConvertFrameTime((FFrameTime)local_78,FVar7,param_4);
          iVar11 = __return_storage_ptr__->ArrayNum;
          if (iVar11 == __return_storage_ptr__->ArrayMax) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&__return_storage_ptr__->AllocatorInstance,
                                &__return_storage_ptr__->ArrayMax);
          }
          uStack_a4 = 0;
          __return_storage_ptr__->ArrayNum = iVar11 + 1;
          pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar11 * 8;
          *(double *)pFVar2 = 0.0;
          local_a8 = local_78[0];
          FVar13.SubFrame = 0.0;
          FVar13.FrameNumber.Value = local_78[0];
          pFVar15 = this;
          FMovieSceneDoubleChannel::Evaluate(this,FVar13,(double *)pFVar2);
          fStack_d4 = local_80._4_4_;
          fVar24 = fVar24 + fStack_d4;
          uVar10 = ((int)ROUND((fVar24 + fVar24) - fVar8) >> 1) + uVar10 + local_80._0_4_;
          iVar11 = (int)fVar24;
          fVar22 = fVar24;
          if ((iVar11 != -0x80000000) && ((float)iVar11 != fVar24)) {
            auVar23._4_4_ = fVar24;
            auVar23._0_4_ = fVar24;
            auVar23._8_8_ = 0;
            uVar14 = movmskps((int)pFVar15,auVar23);
            fVar22 = (float)(int)(iVar11 - (uVar14 & 1));
          }
          fVar24 = fVar24 - fVar22;
        }
        goto LAB_14c67776d;
      }
    }
    local_a0 = 0;
    pwVar16 = L"Unbounded range passed to evaluate keys.";
  }
  FFrame::KismetExecutionMessage(pwVar16,Error,(FName)0x0);
LAB_14c67776d:
  plVar4 = *(longlong **)&param_1->field_0x8;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar11 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar11 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return __return_storage_ptr__;
}

// GetKeysInChannel @ 14c677b80

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> * __cdecl
TMovieSceneScriptingChannel<FMovieSceneActorReferenceData,UMovieSceneScriptingActorReferenceKey,FMovieSceneActorReferenceKey>
::GetKeysInChannel(TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_>
                   *__return_storage_ptr__,
                  TMovieSceneChannelHandle<FMovieSceneActorReferenceData> *param_1,
                  TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
                  TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FMovieSceneChannel *pFVar7;
  UObject *pUVar8;
  UMovieSceneScriptingActorReferenceKey *pUVar9;
  TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *pTVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  UMovieSceneScriptingActorReferenceKey *local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  undefined1 local_50 [4];
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  
  uVar12 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar7 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  if (pFVar7 == (FMovieSceneChannel *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get keys.",Error,
               (FName)0x0);
  }
  else {
    local_60 = (void *)0x0;
    local_58 = 0;
    local_70 = (void *)0x0;
    local_68 = 0;
    local_50[0] = 2;
    local_4c = 0;
    local_48 = 2;
    local_44 = 0;
    (**(code **)(pFVar7->_padding_ + 8))(pFVar7,local_50,&local_60,&local_70);
    uVar14 = uVar12;
    if (0 < (int)local_58) {
      do {
        pUVar8 = GetTransientPackageAsObject();
        pUVar9 = NewObject<UMovieSceneScriptingActorReferenceKey>(pUVar8);
        uVar13 = (uint)uVar14;
        uVar11 = 0;
        if ((int)uVar13 < (int)local_68) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar10;
        }
        *(undefined4 *)&pUVar9->field_0x28 = *(undefined4 *)((longlong)local_70 + uVar12);
        TMovieSceneChannelHandle<FMovieSceneChannel>::operator=
                  ((TMovieSceneChannelHandle<FMovieSceneChannel> *)&pUVar9->field_0x40,
                   (TMovieSceneChannelHandle<FMovieSceneChannel> *)param_1);
        *(int *)&pUVar9->field_0x2c = param_2.WeakPtr.ObjectIndex;
        *(int *)&pUVar9->field_0x30 = param_2.WeakPtr.ObjectSerialNumber;
        *(int *)&pUVar9->field_0x34 = param_3.WeakPtr.ObjectIndex;
        *(int *)&pUVar9->field_0x38 = param_3.WeakPtr.ObjectSerialNumber;
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
        local_78 = pUVar9;
        if (((pFVar2 <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 <
             pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar10;
        }
        iVar6 = __return_storage_ptr__->ArrayNum;
        if (iVar6 == __return_storage_ptr__->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        uVar14 = (ulonglong)(uVar13 + 1);
        __return_storage_ptr__->ArrayNum = iVar6 + 1;
        uVar12 = uVar12 + 4;
        *(UMovieSceneScriptingActorReferenceKey **)
         ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_78;
      } while ((int)(uVar13 + 1) < (int)local_58);
    }
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
    }
    if (local_60 != (void *)0x0) {
      FMemory::Free(local_60);
    }
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return __return_storage_ptr__;
}

// GetKeysInChannel @ 14c677df0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> * __cdecl
TMovieSceneScriptingChannel<FMovieSceneBoolChannel,UMovieSceneScriptingBoolKey,bool>::
GetKeysInChannel(TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_>
                 *__return_storage_ptr__,TMovieSceneChannelHandle<FMovieSceneBoolChannel> *param_1,
                TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
                TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FMovieSceneChannel *pFVar7;
  UObject *pUVar8;
  UMovieSceneScriptingBoolKey *pUVar9;
  TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *pTVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  UMovieSceneScriptingBoolKey *local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  undefined1 local_50 [4];
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  
  uVar12 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar7 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  if (pFVar7 == (FMovieSceneChannel *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get keys.",Error,
               (FName)0x0);
  }
  else {
    local_60 = (void *)0x0;
    local_58 = 0;
    local_70 = (void *)0x0;
    local_68 = 0;
    local_50[0] = 2;
    local_4c = 0;
    local_48 = 2;
    local_44 = 0;
    (**(code **)(pFVar7->_padding_ + 8))(pFVar7,local_50,&local_60,&local_70);
    uVar14 = uVar12;
    if (0 < (int)local_58) {
      do {
        pUVar8 = GetTransientPackageAsObject();
        pUVar9 = NewObject<UMovieSceneScriptingBoolKey>(pUVar8);
        uVar13 = (uint)uVar14;
        uVar11 = 0;
        if ((int)uVar13 < (int)local_68) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar10;
        }
        *(undefined4 *)&pUVar9->field_0x28 = *(undefined4 *)((longlong)local_70 + uVar12);
        TMovieSceneChannelHandle<FMovieSceneChannel>::operator=
                  ((TMovieSceneChannelHandle<FMovieSceneChannel> *)&pUVar9->field_0x40,
                   (TMovieSceneChannelHandle<FMovieSceneChannel> *)param_1);
        *(int *)&pUVar9->field_0x2c = param_2.WeakPtr.ObjectIndex;
        *(int *)&pUVar9->field_0x30 = param_2.WeakPtr.ObjectSerialNumber;
        *(int *)&pUVar9->field_0x34 = param_3.WeakPtr.ObjectIndex;
        *(int *)&pUVar9->field_0x38 = param_3.WeakPtr.ObjectSerialNumber;
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
        local_78 = pUVar9;
        if (((pFVar2 <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 <
             pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar10;
        }
        iVar6 = __return_storage_ptr__->ArrayNum;
        if (iVar6 == __return_storage_ptr__->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        uVar14 = (ulonglong)(uVar13 + 1);
        __return_storage_ptr__->ArrayNum = iVar6 + 1;
        uVar12 = uVar12 + 4;
        *(UMovieSceneScriptingBoolKey **)
         ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_78;
      } while ((int)(uVar13 + 1) < (int)local_58);
    }
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
    }
    if (local_60 != (void *)0x0) {
      FMemory::Free(local_60);
    }
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return __return_storage_ptr__;
}

// GetKeysInChannel @ 14c678060

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> * __cdecl
TMovieSceneScriptingChannel<FMovieSceneByteChannel,UMovieSceneScriptingByteKey,unsigned_char>::
GetKeysInChannel(TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_>
                 *__return_storage_ptr__,TMovieSceneChannelHandle<FMovieSceneByteChannel> *param_1,
                TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
                TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FMovieSceneChannel *pFVar7;
  UObject *pUVar8;
  UMovieSceneScriptingByteKey *pUVar9;
  TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *pTVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  UMovieSceneScriptingByteKey *local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  undefined1 local_50 [4];
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  
  uVar12 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar7 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  if (pFVar7 == (FMovieSceneChannel *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get keys.",Error,
               (FName)0x0);
  }
  else {
    local_60 = (void *)0x0;
    local_58 = 0;
    local_70 = (void *)0x0;
    local_68 = 0;
    local_50[0] = 2;
    local_4c = 0;
    local_48 = 2;
    local_44 = 0;
    (**(code **)(pFVar7->_padding_ + 8))(pFVar7,local_50,&local_60,&local_70);
    uVar14 = uVar12;
    if (0 < (int)local_58) {
      do {
        pUVar8 = GetTransientPackageAsObject();
        pUVar9 = NewObject<UMovieSceneScriptingByteKey>(pUVar8);
        uVar13 = (uint)uVar14;
        uVar11 = 0;
        if ((int)uVar13 < (int)local_68) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar10;
        }
        *(undefined4 *)&pUVar9->field_0x28 = *(undefined4 *)((longlong)local_70 + uVar12);
        TMovieSceneChannelHandle<FMovieSceneChannel>::operator=
                  ((TMovieSceneChannelHandle<FMovieSceneChannel> *)&pUVar9->field_0x40,
                   (TMovieSceneChannelHandle<FMovieSceneChannel> *)param_1);
        *(int *)&pUVar9->field_0x2c = param_2.WeakPtr.ObjectIndex;
        *(int *)&pUVar9->field_0x30 = param_2.WeakPtr.ObjectSerialNumber;
        *(int *)&pUVar9->field_0x34 = param_3.WeakPtr.ObjectIndex;
        *(int *)&pUVar9->field_0x38 = param_3.WeakPtr.ObjectSerialNumber;
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
        local_78 = pUVar9;
        if (((pFVar2 <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 <
             pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar10;
        }
        iVar6 = __return_storage_ptr__->ArrayNum;
        if (iVar6 == __return_storage_ptr__->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        uVar14 = (ulonglong)(uVar13 + 1);
        __return_storage_ptr__->ArrayNum = iVar6 + 1;
        uVar12 = uVar12 + 4;
        *(UMovieSceneScriptingByteKey **)
         ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_78;
      } while ((int)(uVar13 + 1) < (int)local_58);
    }
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
    }
    if (local_60 != (void *)0x0) {
      FMemory::Free(local_60);
    }
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return __return_storage_ptr__;
}

// GetKeysInChannel @ 14c6782d0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> * __cdecl
TMovieSceneScriptingChannel<FMovieSceneDoubleChannel,UMovieSceneScriptingDoubleKey,double>::
GetKeysInChannel(TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_>
                 *__return_storage_ptr__,TMovieSceneChannelHandle<FMovieSceneDoubleChannel> *param_1
                ,TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
                TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FMovieSceneChannel *pFVar7;
  UObject *pUVar8;
  UMovieSceneScriptingDoubleKey *pUVar9;
  TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *pTVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  UMovieSceneScriptingDoubleKey *local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  undefined1 local_50 [4];
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  
  uVar12 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar7 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  if (pFVar7 == (FMovieSceneChannel *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get keys.",Error,
               (FName)0x0);
  }
  else {
    local_60 = (void *)0x0;
    local_58 = 0;
    local_70 = (void *)0x0;
    local_68 = 0;
    local_50[0] = 2;
    local_4c = 0;
    local_48 = 2;
    local_44 = 0;
    (**(code **)(pFVar7->_padding_ + 8))(pFVar7,local_50,&local_60,&local_70);
    uVar14 = uVar12;
    if (0 < (int)local_58) {
      do {
        pUVar8 = GetTransientPackageAsObject();
        pUVar9 = NewObject<UMovieSceneScriptingDoubleKey>(pUVar8);
        uVar13 = (uint)uVar14;
        uVar11 = 0;
        if ((int)uVar13 < (int)local_68) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar10;
        }
        *(undefined4 *)&pUVar9->field_0x28 = *(undefined4 *)((longlong)local_70 + uVar12);
        TMovieSceneChannelHandle<FMovieSceneChannel>::operator=
                  ((TMovieSceneChannelHandle<FMovieSceneChannel> *)&pUVar9->field_0x40,
                   (TMovieSceneChannelHandle<FMovieSceneChannel> *)param_1);
        *(int *)&pUVar9->field_0x2c = param_2.WeakPtr.ObjectIndex;
        *(int *)&pUVar9->field_0x30 = param_2.WeakPtr.ObjectSerialNumber;
        *(int *)&pUVar9->field_0x34 = param_3.WeakPtr.ObjectIndex;
        *(int *)&pUVar9->field_0x38 = param_3.WeakPtr.ObjectSerialNumber;
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
        local_78 = pUVar9;
        if (((pFVar2 <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 <
             pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar10;
        }
        iVar6 = __return_storage_ptr__->ArrayNum;
        if (iVar6 == __return_storage_ptr__->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        uVar14 = (ulonglong)(uVar13 + 1);
        __return_storage_ptr__->ArrayNum = iVar6 + 1;
        uVar12 = uVar12 + 4;
        *(UMovieSceneScriptingDoubleKey **)
         ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_78;
      } while ((int)(uVar13 + 1) < (int)local_58);
    }
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
    }
    if (local_60 != (void *)0x0) {
      FMemory::Free(local_60);
    }
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return __return_storage_ptr__;
}

// GetKeysInChannelByIndex @ 14c678540

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> * __cdecl
TMovieSceneScriptingChannel<FMovieSceneActorReferenceData,UMovieSceneScriptingActorReferenceKey,FMovieSceneActorReferenceKey>
::GetKeysInChannelByIndex
          (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TMovieSceneChannelHandle<FMovieSceneActorReferenceData> *param_1,
          TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
          TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FMovieSceneChannel *pFVar9;
  UObject *pUVar10;
  UMovieSceneScriptingActorReferenceKey *pUVar11;
  TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *pTVar12;
  uint uVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [8];
  TMovieSceneChannelHandle<FMovieSceneActorReferenceData> *local_res10;
  UMovieSceneScriptingActorReferenceKey *local_90;
  undefined8 local_88;
  undefined8 local_80;
  FScriptContainerElement *local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  undefined1 local_50 [4];
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res10 = param_1;
  pFVar9 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  if (pFVar9 == (FMovieSceneChannel *)0x0) {
    local_80 = 0;
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get keys.",Error,
               (FName)0x0);
  }
  else {
    local_60 = (void *)0x0;
    local_58 = 0;
    local_70 = (void *)0x0;
    local_68 = 0;
    local_50[0] = 2;
    local_4c = 0;
    local_48 = 2;
    local_44 = 0;
    (**(code **)(pFVar9->_padding_ + 8))(pFVar9,local_50,&local_60,&local_70);
    uVar2 = param_4->ArrayNum;
    uVar14 = (ulonglong)(int)uVar2;
    pFVar15 = (param_4->AllocatorInstance).Data;
    local_78 = pFVar15 + uVar14 * 4;
    while( true ) {
      pFVar4 = local_78;
      if (param_4->ArrayNum != (int)uVar14) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar15 == pFVar4) break;
      uVar3 = *(uint *)pFVar15;
      if (((int)uVar3 < 0) || ((int)local_58 <= (int)uVar3)) {
        local_88 = 0;
        FFrame::KismetExecutionMessage
                  (L"Invalid index for MovieSceneScriptingChannel, failed to get keys by index.",
                   Error,(FName)0x0);
        pFVar15 = pFVar15 + 4;
        uVar14 = (ulonglong)uVar2;
      }
      else {
        pUVar10 = GetTransientPackageAsObject();
        pUVar11 = NewObject<UMovieSceneScriptingActorReferenceKey>(pUVar10);
        uVar13 = 0;
        if ((int)uVar3 < (int)local_68) {
          uVar13 = ~uVar3 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar12 = (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar12;
        }
        *(undefined4 *)&pUVar11->field_0x28 =
             *(undefined4 *)((longlong)local_70 + (longlong)(int)uVar3 * 4);
        TMovieSceneChannelHandle<FMovieSceneChannel>::operator=
                  ((TMovieSceneChannelHandle<FMovieSceneChannel> *)&pUVar11->field_0x40,
                   (TMovieSceneChannelHandle<FMovieSceneChannel> *)local_res10);
        *(int *)&pUVar11->field_0x2c = param_2.WeakPtr.ObjectIndex;
        *(int *)&pUVar11->field_0x30 = param_2.WeakPtr.ObjectSerialNumber;
        *(int *)&pUVar11->field_0x34 = param_3.WeakPtr.ObjectIndex;
        *(int *)&pUVar11->field_0x38 = param_3.WeakPtr.ObjectSerialNumber;
        pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
        local_90 = pUVar11;
        if (((pFVar4 <= (FScriptContainerElement *)&local_90) &&
            ((FScriptContainerElement *)&local_90 <
             pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar12 = (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar12;
        }
        iVar8 = __return_storage_ptr__->ArrayNum;
        if (iVar8 == __return_storage_ptr__->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar8 + 1;
        pFVar15 = pFVar15 + 4;
        *(UMovieSceneScriptingActorReferenceKey **)
         ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_90;
        uVar14 = (ulonglong)uVar2;
      }
    }
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
    }
    param_1 = local_res10;
    if (local_60 != (void *)0x0) {
      FMemory::Free(local_60);
      param_1 = local_res10;
    }
  }
  plVar5 = *(longlong **)&param_1->field_0x8;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return __return_storage_ptr__;
}

// GetKeysInChannelByIndex @ 14c678810

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> * __cdecl
TMovieSceneScriptingChannel<FMovieSceneBoolChannel,UMovieSceneScriptingBoolKey,bool>::
GetKeysInChannelByIndex
          (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TMovieSceneChannelHandle<FMovieSceneBoolChannel> *param_1,
          TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
          TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FMovieSceneChannel *pFVar9;
  UObject *pUVar10;
  UMovieSceneScriptingBoolKey *pUVar11;
  TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *pTVar12;
  uint uVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [8];
  TMovieSceneChannelHandle<FMovieSceneBoolChannel> *local_res10;
  UMovieSceneScriptingBoolKey *local_90;
  undefined8 local_88;
  undefined8 local_80;
  FScriptContainerElement *local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  undefined1 local_50 [4];
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res10 = param_1;
  pFVar9 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  if (pFVar9 == (FMovieSceneChannel *)0x0) {
    local_80 = 0;
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get keys.",Error,
               (FName)0x0);
  }
  else {
    local_60 = (void *)0x0;
    local_58 = 0;
    local_70 = (void *)0x0;
    local_68 = 0;
    local_50[0] = 2;
    local_4c = 0;
    local_48 = 2;
    local_44 = 0;
    (**(code **)(pFVar9->_padding_ + 8))(pFVar9,local_50,&local_60,&local_70);
    uVar2 = param_4->ArrayNum;
    uVar14 = (ulonglong)(int)uVar2;
    pFVar15 = (param_4->AllocatorInstance).Data;
    local_78 = pFVar15 + uVar14 * 4;
    while( true ) {
      pFVar4 = local_78;
      if (param_4->ArrayNum != (int)uVar14) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar15 == pFVar4) break;
      uVar3 = *(uint *)pFVar15;
      if (((int)uVar3 < 0) || ((int)local_58 <= (int)uVar3)) {
        local_88 = 0;
        FFrame::KismetExecutionMessage
                  (L"Invalid index for MovieSceneScriptingChannel, failed to get keys by index.",
                   Error,(FName)0x0);
        pFVar15 = pFVar15 + 4;
        uVar14 = (ulonglong)uVar2;
      }
      else {
        pUVar10 = GetTransientPackageAsObject();
        pUVar11 = NewObject<UMovieSceneScriptingBoolKey>(pUVar10);
        uVar13 = 0;
        if ((int)uVar3 < (int)local_68) {
          uVar13 = ~uVar3 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar12 = (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar12;
        }
        *(undefined4 *)&pUVar11->field_0x28 =
             *(undefined4 *)((longlong)local_70 + (longlong)(int)uVar3 * 4);
        TMovieSceneChannelHandle<FMovieSceneChannel>::operator=
                  ((TMovieSceneChannelHandle<FMovieSceneChannel> *)&pUVar11->field_0x40,
                   (TMovieSceneChannelHandle<FMovieSceneChannel> *)local_res10);
        *(int *)&pUVar11->field_0x2c = param_2.WeakPtr.ObjectIndex;
        *(int *)&pUVar11->field_0x30 = param_2.WeakPtr.ObjectSerialNumber;
        *(int *)&pUVar11->field_0x34 = param_3.WeakPtr.ObjectIndex;
        *(int *)&pUVar11->field_0x38 = param_3.WeakPtr.ObjectSerialNumber;
        pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
        local_90 = pUVar11;
        if (((pFVar4 <= (FScriptContainerElement *)&local_90) &&
            ((FScriptContainerElement *)&local_90 <
             pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar12 = (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar12;
        }
        iVar8 = __return_storage_ptr__->ArrayNum;
        if (iVar8 == __return_storage_ptr__->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar8 + 1;
        pFVar15 = pFVar15 + 4;
        *(UMovieSceneScriptingBoolKey **)
         ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_90;
        uVar14 = (ulonglong)uVar2;
      }
    }
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
    }
    param_1 = local_res10;
    if (local_60 != (void *)0x0) {
      FMemory::Free(local_60);
      param_1 = local_res10;
    }
  }
  plVar5 = *(longlong **)&param_1->field_0x8;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return __return_storage_ptr__;
}

// GetKeysInChannelByIndex @ 14c678ae0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> * __cdecl
TMovieSceneScriptingChannel<FMovieSceneByteChannel,UMovieSceneScriptingByteKey,unsigned_char>::
GetKeysInChannelByIndex
          (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TMovieSceneChannelHandle<FMovieSceneByteChannel> *param_1,
          TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
          TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FMovieSceneChannel *pFVar9;
  UObject *pUVar10;
  UMovieSceneScriptingByteKey *pUVar11;
  TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *pTVar12;
  uint uVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [8];
  TMovieSceneChannelHandle<FMovieSceneByteChannel> *local_res10;
  UMovieSceneScriptingByteKey *local_90;
  undefined8 local_88;
  undefined8 local_80;
  FScriptContainerElement *local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  undefined1 local_50 [4];
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res10 = param_1;
  pFVar9 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  if (pFVar9 == (FMovieSceneChannel *)0x0) {
    local_80 = 0;
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get keys.",Error,
               (FName)0x0);
  }
  else {
    local_60 = (void *)0x0;
    local_58 = 0;
    local_70 = (void *)0x0;
    local_68 = 0;
    local_50[0] = 2;
    local_4c = 0;
    local_48 = 2;
    local_44 = 0;
    (**(code **)(pFVar9->_padding_ + 8))(pFVar9,local_50,&local_60,&local_70);
    uVar2 = param_4->ArrayNum;
    uVar14 = (ulonglong)(int)uVar2;
    pFVar15 = (param_4->AllocatorInstance).Data;
    local_78 = pFVar15 + uVar14 * 4;
    while( true ) {
      pFVar4 = local_78;
      if (param_4->ArrayNum != (int)uVar14) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar15 == pFVar4) break;
      uVar3 = *(uint *)pFVar15;
      if (((int)uVar3 < 0) || ((int)local_58 <= (int)uVar3)) {
        local_88 = 0;
        FFrame::KismetExecutionMessage
                  (L"Invalid index for MovieSceneScriptingChannel, failed to get keys by index.",
                   Error,(FName)0x0);
        pFVar15 = pFVar15 + 4;
        uVar14 = (ulonglong)uVar2;
      }
      else {
        pUVar10 = GetTransientPackageAsObject();
        pUVar11 = NewObject<UMovieSceneScriptingByteKey>(pUVar10);
        uVar13 = 0;
        if ((int)uVar3 < (int)local_68) {
          uVar13 = ~uVar3 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar12 = (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar12;
        }
        *(undefined4 *)&pUVar11->field_0x28 =
             *(undefined4 *)((longlong)local_70 + (longlong)(int)uVar3 * 4);
        TMovieSceneChannelHandle<FMovieSceneChannel>::operator=
                  ((TMovieSceneChannelHandle<FMovieSceneChannel> *)&pUVar11->field_0x40,
                   (TMovieSceneChannelHandle<FMovieSceneChannel> *)local_res10);
        *(int *)&pUVar11->field_0x2c = param_2.WeakPtr.ObjectIndex;
        *(int *)&pUVar11->field_0x30 = param_2.WeakPtr.ObjectSerialNumber;
        *(int *)&pUVar11->field_0x34 = param_3.WeakPtr.ObjectIndex;
        *(int *)&pUVar11->field_0x38 = param_3.WeakPtr.ObjectSerialNumber;
        pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
        local_90 = pUVar11;
        if (((pFVar4 <= (FScriptContainerElement *)&local_90) &&
            ((FScriptContainerElement *)&local_90 <
             pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar12 = (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar12;
        }
        iVar8 = __return_storage_ptr__->ArrayNum;
        if (iVar8 == __return_storage_ptr__->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar8 + 1;
        pFVar15 = pFVar15 + 4;
        *(UMovieSceneScriptingByteKey **)
         ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_90;
        uVar14 = (ulonglong)uVar2;
      }
    }
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
    }
    param_1 = local_res10;
    if (local_60 != (void *)0x0) {
      FMemory::Free(local_60);
      param_1 = local_res10;
    }
  }
  plVar5 = *(longlong **)&param_1->field_0x8;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return __return_storage_ptr__;
}

// GetKeysInChannelByIndex @ 14c678db0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> * __cdecl
TMovieSceneScriptingChannel<FMovieSceneDoubleChannel,UMovieSceneScriptingDoubleKey,double>::
GetKeysInChannelByIndex
          (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TMovieSceneChannelHandle<FMovieSceneDoubleChannel> *param_1,
          TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
          TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FMovieSceneChannel *pFVar9;
  UObject *pUVar10;
  UMovieSceneScriptingDoubleKey *pUVar11;
  TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *pTVar12;
  uint uVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [8];
  TMovieSceneChannelHandle<FMovieSceneDoubleChannel> *local_res10;
  UMovieSceneScriptingDoubleKey *local_90;
  undefined8 local_88;
  undefined8 local_80;
  FScriptContainerElement *local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  undefined1 local_50 [4];
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res10 = param_1;
  pFVar9 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  if (pFVar9 == (FMovieSceneChannel *)0x0) {
    local_80 = 0;
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get keys.",Error,
               (FName)0x0);
  }
  else {
    local_60 = (void *)0x0;
    local_58 = 0;
    local_70 = (void *)0x0;
    local_68 = 0;
    local_50[0] = 2;
    local_4c = 0;
    local_48 = 2;
    local_44 = 0;
    (**(code **)(pFVar9->_padding_ + 8))(pFVar9,local_50,&local_60,&local_70);
    uVar2 = param_4->ArrayNum;
    uVar14 = (ulonglong)(int)uVar2;
    pFVar15 = (param_4->AllocatorInstance).Data;
    local_78 = pFVar15 + uVar14 * 4;
    while( true ) {
      pFVar4 = local_78;
      if (param_4->ArrayNum != (int)uVar14) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar15 == pFVar4) break;
      uVar3 = *(uint *)pFVar15;
      if (((int)uVar3 < 0) || ((int)local_58 <= (int)uVar3)) {
        local_88 = 0;
        FFrame::KismetExecutionMessage
                  (L"Invalid index for MovieSceneScriptingChannel, failed to get keys by index.",
                   Error,(FName)0x0);
        pFVar15 = pFVar15 + 4;
        uVar14 = (ulonglong)uVar2;
      }
      else {
        pUVar10 = GetTransientPackageAsObject();
        pUVar11 = NewObject<UMovieSceneScriptingDoubleKey>(pUVar10);
        uVar13 = 0;
        if ((int)uVar3 < (int)local_68) {
          uVar13 = ~uVar3 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar12 = (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar12;
        }
        *(undefined4 *)&pUVar11->field_0x28 =
             *(undefined4 *)((longlong)local_70 + (longlong)(int)uVar3 * 4);
        TMovieSceneChannelHandle<FMovieSceneChannel>::operator=
                  ((TMovieSceneChannelHandle<FMovieSceneChannel> *)&pUVar11->field_0x40,
                   (TMovieSceneChannelHandle<FMovieSceneChannel> *)local_res10);
        *(int *)&pUVar11->field_0x2c = param_2.WeakPtr.ObjectIndex;
        *(int *)&pUVar11->field_0x30 = param_2.WeakPtr.ObjectSerialNumber;
        *(int *)&pUVar11->field_0x34 = param_3.WeakPtr.ObjectIndex;
        *(int *)&pUVar11->field_0x38 = param_3.WeakPtr.ObjectSerialNumber;
        pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
        local_90 = pUVar11;
        if (((pFVar4 <= (FScriptContainerElement *)&local_90) &&
            ((FScriptContainerElement *)&local_90 <
             pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar12 = (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar12;
        }
        iVar8 = __return_storage_ptr__->ArrayNum;
        if (iVar8 == __return_storage_ptr__->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar8 + 1;
        pFVar15 = pFVar15 + 4;
        *(UMovieSceneScriptingDoubleKey **)
         ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_90;
        uVar14 = (ulonglong)uVar2;
      }
    }
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
    }
    param_1 = local_res10;
    if (local_60 != (void *)0x0) {
      FMemory::Free(local_60);
      param_1 = local_res10;
    }
  }
  plVar5 = *(longlong **)&param_1->field_0x8;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return __return_storage_ptr__;
}

// TransformKeysInChannel @ 14c67abc0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
TMovieSceneScriptingChannel<FMovieSceneActorReferenceData,UMovieSceneScriptingActorReferenceKey,FMovieSceneActorReferenceKey>
::TransformKeysInChannel
          (TMovieSceneChannelHandle<FMovieSceneActorReferenceData> *param_1,
          TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
          TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3,FFrameNumber param_4,
          double param_5,FFrameNumber param_6,FSequencerScriptingRange *param_7,
          EMovieSceneTimeUnit param_8)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  FFrameRate FVar5;
  FFrameRate FVar6;
  TRangeBound<FFrameNumber> TVar7;
  TRangeBound<FFrameNumber> TVar8;
  FFrameNumber FVar9;
  bool bVar10;
  FFrameNumber *pFVar11;
  TRange<FFrameNumber> *pTVar12;
  FMovieSceneChannel *pFVar13;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  TRange<FFrameNumber> local_c8;
  int local_b8;
  float local_b4;
  int local_b0;
  float local_ac;
  UMovieSceneSequence local_a8;
  TRange<FFrameNumber> local_38;
  
  local_res10 = param_2.WeakPtr;
  local_res18 = param_3.WeakPtr;
  FWeakObjectPtr::Get(&local_res10);
  UMovieSceneSequenceExtensions::GetTickResolution((UMovieSceneSequence *)&local_a8._padding_);
  FSequencerScriptingRange::ToNative(param_7,&local_c8,(FFrameRate)local_a8._padding_);
  if ((local_c8.LowerBound.Type.Value.Value != '\x02') && (local_c8.UpperBound.Type.Value != '\x02')
     ) {
    FVar9.Value = local_c8.UpperBound.Value.Value;
    if ((local_c8.LowerBound.Type.Value.Value == '\x02') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type != ERangeBoundTypes::Open",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                            ,99,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (local_c8.LowerBound.Value.Value <= FVar9.Value) {
      pFVar11 = TRangeBound<FFrameNumber>::GetValue(&local_c8.UpperBound);
      iVar2 = pFVar11->Value;
      pFVar11 = TRangeBound<FFrameNumber>::GetValue(&local_c8.LowerBound);
      if ((pFVar11->Value != iVar2) ||
         ((local_c8.LowerBound.Type.Value != '\0' && (local_c8.UpperBound.Type.Value != '\0'))))
      goto LAB_14c67acbc;
    }
    local_a8._padding_._4_4_ = 0;
    local_a8._padding_._0_4_ = CONCAT31(local_a8._padding_._1_3_,2);
    local_c8.LowerBound.Value.Value = 0;
    local_c8.LowerBound._0_4_ = (uint)local_a8._padding_;
    local_a8._padding_._4_4_ = 0;
    local_a8._padding_._0_4_ = CONCAT31(local_a8._padding_._1_3_,2);
    local_c8.UpperBound.Value.Value = 0;
    local_c8.UpperBound._0_4_ = (uint)local_a8._padding_;
  }
LAB_14c67acbc:
  if (param_8 == DisplayRate) {
    FWeakObjectPtr::Get(&local_res10);
    UMovieSceneSequenceExtensions::GetDisplayRate(&local_a8);
    FWeakObjectPtr::Get(&local_res10);
    UMovieSceneSequenceExtensions::GetTickResolution((UMovieSceneSequence *)&local_a8._padding_);
    local_a8._padding_._4_4_ = 0;
    FVar5.Denominator = 0;
    FVar5.Numerator = param_4.Value;
    local_a8._padding_._0_4_ = param_4.Value;
    ConvertFrameTime((FFrameTime)&local_b8,FVar5,(FFrameRate)local_a8._padding_);
    param_4.Value = local_b8;
    if (__real_3f000000 <= local_b4) {
      param_4.Value = local_b8 + 1;
    }
    local_a8._padding_._0_4_ = param_6.Value;
    local_a8._padding_._4_4_ = 0;
    FVar6.Denominator = 0;
    FVar6.Numerator = param_6.Value;
    ConvertFrameTime((FFrameTime)&local_b0,FVar6,(FFrameRate)local_a8._padding_);
    param_6.Value = local_b0;
    if (__real_3f000000 <= local_ac) {
      param_6.Value = local_b0 + 1;
    }
    (param_7->InternalRate).Numerator = (undefined4)local_a8._padding_;
    (param_7->InternalRate).Denominator = local_a8._padding_._4_4_;
    pTVar12 = FSequencerScriptingRange::ToNative(param_7,&local_38,(FFrameRate)local_a8._padding_);
    local_c8.LowerBound = pTVar12->LowerBound;
    local_c8.UpperBound = pTVar12->UpperBound;
  }
  bVar10 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar10) {
    FWeakObjectPtr::Get(&local_res18);
  }
  pFVar13 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  TVar8 = local_c8.UpperBound;
  TVar7 = local_c8.LowerBound;
  if (pFVar13 == (FMovieSceneChannel *)0x0) {
    local_a8._padding_ = 0;
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to transform keys in channel."
               ,Error,(FName)0x0);
  }
  else {
    local_a8._padding_ =
         (longlong)
         &
         ___7FTransformRetiming___TMovieSceneScriptingChannel_UFMovieSceneActorReferenceData__VUMovieSceneScriptingActorReferenceKey__UFMovieSceneActorReferenceKey____6B_
    ;
    local_a8._padding_ = (longlong)param_5;
    local_a8._padding_._4_1_ = local_c8.LowerBound.Type.Value;
    local_a8._padding_._5_3_ = local_c8.LowerBound._1_3_;
    local_a8.CompiledData.field0_0x0._0_4_ = local_c8.LowerBound.Value.Value;
    local_a8.CompiledData.field0_0x0._4_4_ = local_c8.UpperBound._0_4_;
    local_a8.DefaultCompletionMode = (undefined1)local_c8.UpperBound.Value.Value;
    local_a8.bParentContextsAreSignificant = (bool)local_c8.UpperBound.Value.Value._1_1_;
    local_a8.bPlayableDirectly = (bool)local_c8.UpperBound.Value.Value._2_1_;
    local_a8.SequenceFlags = local_c8.UpperBound.Value.Value._3_1_;
    local_c8.LowerBound = TVar7;
    local_c8.UpperBound = TVar8;
    local_a8._padding_._0_4_ = param_4.Value;
    local_a8._padding_._0_4_ = param_6.Value;
    (**(code **)(pFVar13->_padding_ + 0x40))(pFVar13,&local_a8._padding_);
    local_a8._padding_ = (longlong)&___7IRetimingInterface_MovieScene_UE__6B_;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}

// TransformKeysInChannel @ 14c67ae30

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
TMovieSceneScriptingChannel<FMovieSceneBoolChannel,UMovieSceneScriptingBoolKey,bool>::
TransformKeysInChannel
          (TMovieSceneChannelHandle<FMovieSceneBoolChannel> *param_1,
          TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
          TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3,FFrameNumber param_4,
          double param_5,FFrameNumber param_6,FSequencerScriptingRange *param_7,
          EMovieSceneTimeUnit param_8)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  FFrameRate FVar5;
  FFrameRate FVar6;
  TRangeBound<FFrameNumber> TVar7;
  TRangeBound<FFrameNumber> TVar8;
  FFrameNumber FVar9;
  bool bVar10;
  FFrameNumber *pFVar11;
  TRange<FFrameNumber> *pTVar12;
  FMovieSceneChannel *pFVar13;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  TRange<FFrameNumber> local_c8;
  int local_b8;
  float local_b4;
  int local_b0;
  float local_ac;
  UMovieSceneSequence local_a8;
  TRange<FFrameNumber> local_38;
  
  local_res10 = param_2.WeakPtr;
  local_res18 = param_3.WeakPtr;
  FWeakObjectPtr::Get(&local_res10);
  UMovieSceneSequenceExtensions::GetTickResolution((UMovieSceneSequence *)&local_a8._padding_);
  FSequencerScriptingRange::ToNative(param_7,&local_c8,(FFrameRate)local_a8._padding_);
  if ((local_c8.LowerBound.Type.Value.Value != '\x02') && (local_c8.UpperBound.Type.Value != '\x02')
     ) {
    FVar9.Value = local_c8.UpperBound.Value.Value;
    if ((local_c8.LowerBound.Type.Value.Value == '\x02') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type != ERangeBoundTypes::Open",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                            ,99,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (local_c8.LowerBound.Value.Value <= FVar9.Value) {
      pFVar11 = TRangeBound<FFrameNumber>::GetValue(&local_c8.UpperBound);
      iVar2 = pFVar11->Value;
      pFVar11 = TRangeBound<FFrameNumber>::GetValue(&local_c8.LowerBound);
      if ((pFVar11->Value != iVar2) ||
         ((local_c8.LowerBound.Type.Value != '\0' && (local_c8.UpperBound.Type.Value != '\0'))))
      goto LAB_14c67af2c;
    }
    local_a8._padding_._4_4_ = 0;
    local_a8._padding_._0_4_ = CONCAT31(local_a8._padding_._1_3_,2);
    local_c8.LowerBound.Value.Value = 0;
    local_c8.LowerBound._0_4_ = (uint)local_a8._padding_;
    local_a8._padding_._4_4_ = 0;
    local_a8._padding_._0_4_ = CONCAT31(local_a8._padding_._1_3_,2);
    local_c8.UpperBound.Value.Value = 0;
    local_c8.UpperBound._0_4_ = (uint)local_a8._padding_;
  }
LAB_14c67af2c:
  if (param_8 == DisplayRate) {
    FWeakObjectPtr::Get(&local_res10);
    UMovieSceneSequenceExtensions::GetDisplayRate(&local_a8);
    FWeakObjectPtr::Get(&local_res10);
    UMovieSceneSequenceExtensions::GetTickResolution((UMovieSceneSequence *)&local_a8._padding_);
    local_a8._padding_._4_4_ = 0;
    FVar5.Denominator = 0;
    FVar5.Numerator = param_4.Value;
    local_a8._padding_._0_4_ = param_4.Value;
    ConvertFrameTime((FFrameTime)&local_b8,FVar5,(FFrameRate)local_a8._padding_);
    param_4.Value = local_b8;
    if (__real_3f000000 <= local_b4) {
      param_4.Value = local_b8 + 1;
    }
    local_a8._padding_._0_4_ = param_6.Value;
    local_a8._padding_._4_4_ = 0;
    FVar6.Denominator = 0;
    FVar6.Numerator = param_6.Value;
    ConvertFrameTime((FFrameTime)&local_b0,FVar6,(FFrameRate)local_a8._padding_);
    param_6.Value = local_b0;
    if (__real_3f000000 <= local_ac) {
      param_6.Value = local_b0 + 1;
    }
    (param_7->InternalRate).Numerator = (undefined4)local_a8._padding_;
    (param_7->InternalRate).Denominator = local_a8._padding_._4_4_;
    pTVar12 = FSequencerScriptingRange::ToNative(param_7,&local_38,(FFrameRate)local_a8._padding_);
    local_c8.LowerBound = pTVar12->LowerBound;
    local_c8.UpperBound = pTVar12->UpperBound;
  }
  bVar10 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar10) {
    FWeakObjectPtr::Get(&local_res18);
  }
  pFVar13 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  TVar8 = local_c8.UpperBound;
  TVar7 = local_c8.LowerBound;
  if (pFVar13 == (FMovieSceneChannel *)0x0) {
    local_a8._padding_ = 0;
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to transform keys in channel."
               ,Error,(FName)0x0);
  }
  else {
    local_a8._padding_ =
         (longlong)
         &
         ___7FTransformRetiming___TMovieSceneScriptingChannel_UFMovieSceneBoolChannel__VUMovieSceneScriptingBoolKey___N__6B_
    ;
    local_a8._padding_ = (longlong)param_5;
    local_a8._padding_._4_1_ = local_c8.LowerBound.Type.Value;
    local_a8._padding_._5_3_ = local_c8.LowerBound._1_3_;
    local_a8.CompiledData.field0_0x0._0_4_ = local_c8.LowerBound.Value.Value;
    local_a8.CompiledData.field0_0x0._4_4_ = local_c8.UpperBound._0_4_;
    local_a8.DefaultCompletionMode = (undefined1)local_c8.UpperBound.Value.Value;
    local_a8.bParentContextsAreSignificant = (bool)local_c8.UpperBound.Value.Value._1_1_;
    local_a8.bPlayableDirectly = (bool)local_c8.UpperBound.Value.Value._2_1_;
    local_a8.SequenceFlags = local_c8.UpperBound.Value.Value._3_1_;
    local_c8.LowerBound = TVar7;
    local_c8.UpperBound = TVar8;
    local_a8._padding_._0_4_ = param_4.Value;
    local_a8._padding_._0_4_ = param_6.Value;
    (**(code **)(pFVar13->_padding_ + 0x40))(pFVar13,&local_a8._padding_);
    local_a8._padding_ = (longlong)&___7IRetimingInterface_MovieScene_UE__6B_;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}

// TransformKeysInChannel @ 14c67b0a0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
TMovieSceneScriptingChannel<FMovieSceneByteChannel,UMovieSceneScriptingByteKey,unsigned_char>::
TransformKeysInChannel
          (TMovieSceneChannelHandle<FMovieSceneByteChannel> *param_1,
          TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
          TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3,FFrameNumber param_4,
          double param_5,FFrameNumber param_6,FSequencerScriptingRange *param_7,
          EMovieSceneTimeUnit param_8)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  FFrameRate FVar5;
  FFrameRate FVar6;
  TRangeBound<FFrameNumber> TVar7;
  TRangeBound<FFrameNumber> TVar8;
  FFrameNumber FVar9;
  bool bVar10;
  FFrameNumber *pFVar11;
  TRange<FFrameNumber> *pTVar12;
  FMovieSceneChannel *pFVar13;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  TRange<FFrameNumber> local_c8;
  int local_b8;
  float local_b4;
  int local_b0;
  float local_ac;
  UMovieSceneSequence local_a8;
  TRange<FFrameNumber> local_38;
  
  local_res10 = param_2.WeakPtr;
  local_res18 = param_3.WeakPtr;
  FWeakObjectPtr::Get(&local_res10);
  UMovieSceneSequenceExtensions::GetTickResolution((UMovieSceneSequence *)&local_a8._padding_);
  FSequencerScriptingRange::ToNative(param_7,&local_c8,(FFrameRate)local_a8._padding_);
  if ((local_c8.LowerBound.Type.Value.Value != '\x02') && (local_c8.UpperBound.Type.Value != '\x02')
     ) {
    FVar9.Value = local_c8.UpperBound.Value.Value;
    if ((local_c8.LowerBound.Type.Value.Value == '\x02') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type != ERangeBoundTypes::Open",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                            ,99,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (local_c8.LowerBound.Value.Value <= FVar9.Value) {
      pFVar11 = TRangeBound<FFrameNumber>::GetValue(&local_c8.UpperBound);
      iVar2 = pFVar11->Value;
      pFVar11 = TRangeBound<FFrameNumber>::GetValue(&local_c8.LowerBound);
      if ((pFVar11->Value != iVar2) ||
         ((local_c8.LowerBound.Type.Value != '\0' && (local_c8.UpperBound.Type.Value != '\0'))))
      goto LAB_14c67b19c;
    }
    local_a8._padding_._4_4_ = 0;
    local_a8._padding_._0_4_ = CONCAT31(local_a8._padding_._1_3_,2);
    local_c8.LowerBound.Value.Value = 0;
    local_c8.LowerBound._0_4_ = (uint)local_a8._padding_;
    local_a8._padding_._4_4_ = 0;
    local_a8._padding_._0_4_ = CONCAT31(local_a8._padding_._1_3_,2);
    local_c8.UpperBound.Value.Value = 0;
    local_c8.UpperBound._0_4_ = (uint)local_a8._padding_;
  }
LAB_14c67b19c:
  if (param_8 == DisplayRate) {
    FWeakObjectPtr::Get(&local_res10);
    UMovieSceneSequenceExtensions::GetDisplayRate(&local_a8);
    FWeakObjectPtr::Get(&local_res10);
    UMovieSceneSequenceExtensions::GetTickResolution((UMovieSceneSequence *)&local_a8._padding_);
    local_a8._padding_._4_4_ = 0;
    FVar5.Denominator = 0;
    FVar5.Numerator = param_4.Value;
    local_a8._padding_._0_4_ = param_4.Value;
    ConvertFrameTime((FFrameTime)&local_b8,FVar5,(FFrameRate)local_a8._padding_);
    param_4.Value = local_b8;
    if (__real_3f000000 <= local_b4) {
      param_4.Value = local_b8 + 1;
    }
    local_a8._padding_._0_4_ = param_6.Value;
    local_a8._padding_._4_4_ = 0;
    FVar6.Denominator = 0;
    FVar6.Numerator = param_6.Value;
    ConvertFrameTime((FFrameTime)&local_b0,FVar6,(FFrameRate)local_a8._padding_);
    param_6.Value = local_b0;
    if (__real_3f000000 <= local_ac) {
      param_6.Value = local_b0 + 1;
    }
    (param_7->InternalRate).Numerator = (undefined4)local_a8._padding_;
    (param_7->InternalRate).Denominator = local_a8._padding_._4_4_;
    pTVar12 = FSequencerScriptingRange::ToNative(param_7,&local_38,(FFrameRate)local_a8._padding_);
    local_c8.LowerBound = pTVar12->LowerBound;
    local_c8.UpperBound = pTVar12->UpperBound;
  }
  bVar10 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar10) {
    FWeakObjectPtr::Get(&local_res18);
  }
  pFVar13 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  TVar8 = local_c8.UpperBound;
  TVar7 = local_c8.LowerBound;
  if (pFVar13 == (FMovieSceneChannel *)0x0) {
    local_a8._padding_ = 0;
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to transform keys in channel."
               ,Error,(FName)0x0);
  }
  else {
    local_a8._padding_ =
         (longlong)
         &
         ___7FTransformRetiming___TMovieSceneScriptingChannel_UFMovieSceneByteChannel__VUMovieSceneScriptingByteKey__E__6B_
    ;
    local_a8._padding_ = (longlong)param_5;
    local_a8._padding_._4_1_ = local_c8.LowerBound.Type.Value;
    local_a8._padding_._5_3_ = local_c8.LowerBound._1_3_;
    local_a8.CompiledData.field0_0x0._0_4_ = local_c8.LowerBound.Value.Value;
    local_a8.CompiledData.field0_0x0._4_4_ = local_c8.UpperBound._0_4_;
    local_a8.DefaultCompletionMode = (undefined1)local_c8.UpperBound.Value.Value;
    local_a8.bParentContextsAreSignificant = (bool)local_c8.UpperBound.Value.Value._1_1_;
    local_a8.bPlayableDirectly = (bool)local_c8.UpperBound.Value.Value._2_1_;
    local_a8.SequenceFlags = local_c8.UpperBound.Value.Value._3_1_;
    local_c8.LowerBound = TVar7;
    local_c8.UpperBound = TVar8;
    local_a8._padding_._0_4_ = param_4.Value;
    local_a8._padding_._0_4_ = param_6.Value;
    (**(code **)(pFVar13->_padding_ + 0x40))(pFVar13,&local_a8._padding_);
    local_a8._padding_ = (longlong)&___7IRetimingInterface_MovieScene_UE__6B_;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}

// TransformKeysInChannel @ 14c67b310

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
TMovieSceneScriptingChannel<FMovieSceneDoubleChannel,UMovieSceneScriptingDoubleKey,double>::
TransformKeysInChannel
          (TMovieSceneChannelHandle<FMovieSceneDoubleChannel> *param_1,
          TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
          TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3,FFrameNumber param_4,
          double param_5,FFrameNumber param_6,FSequencerScriptingRange *param_7,
          EMovieSceneTimeUnit param_8)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  FFrameRate FVar5;
  FFrameRate FVar6;
  TRangeBound<FFrameNumber> TVar7;
  TRangeBound<FFrameNumber> TVar8;
  FFrameNumber FVar9;
  bool bVar10;
  FFrameNumber *pFVar11;
  TRange<FFrameNumber> *pTVar12;
  FMovieSceneChannel *pFVar13;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  TRange<FFrameNumber> local_c8;
  int local_b8;
  float local_b4;
  int local_b0;
  float local_ac;
  UMovieSceneSequence local_a8;
  TRange<FFrameNumber> local_38;
  
  local_res10 = param_2.WeakPtr;
  local_res18 = param_3.WeakPtr;
  FWeakObjectPtr::Get(&local_res10);
  UMovieSceneSequenceExtensions::GetTickResolution((UMovieSceneSequence *)&local_a8._padding_);
  FSequencerScriptingRange::ToNative(param_7,&local_c8,(FFrameRate)local_a8._padding_);
  if ((local_c8.LowerBound.Type.Value.Value != '\x02') && (local_c8.UpperBound.Type.Value != '\x02')
     ) {
    FVar9.Value = local_c8.UpperBound.Value.Value;
    if ((local_c8.LowerBound.Type.Value.Value == '\x02') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type != ERangeBoundTypes::Open",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                            ,99,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (local_c8.LowerBound.Value.Value <= FVar9.Value) {
      pFVar11 = TRangeBound<FFrameNumber>::GetValue(&local_c8.UpperBound);
      iVar2 = pFVar11->Value;
      pFVar11 = TRangeBound<FFrameNumber>::GetValue(&local_c8.LowerBound);
      if ((pFVar11->Value != iVar2) ||
         ((local_c8.LowerBound.Type.Value != '\0' && (local_c8.UpperBound.Type.Value != '\0'))))
      goto LAB_14c67b40c;
    }
    local_a8._padding_._4_4_ = 0;
    local_a8._padding_._0_4_ = CONCAT31(local_a8._padding_._1_3_,2);
    local_c8.LowerBound.Value.Value = 0;
    local_c8.LowerBound._0_4_ = (uint)local_a8._padding_;
    local_a8._padding_._4_4_ = 0;
    local_a8._padding_._0_4_ = CONCAT31(local_a8._padding_._1_3_,2);
    local_c8.UpperBound.Value.Value = 0;
    local_c8.UpperBound._0_4_ = (uint)local_a8._padding_;
  }
LAB_14c67b40c:
  if (param_8 == DisplayRate) {
    FWeakObjectPtr::Get(&local_res10);
    UMovieSceneSequenceExtensions::GetDisplayRate(&local_a8);
    FWeakObjectPtr::Get(&local_res10);
    UMovieSceneSequenceExtensions::GetTickResolution((UMovieSceneSequence *)&local_a8._padding_);
    local_a8._padding_._4_4_ = 0;
    FVar5.Denominator = 0;
    FVar5.Numerator = param_4.Value;
    local_a8._padding_._0_4_ = param_4.Value;
    ConvertFrameTime((FFrameTime)&local_b8,FVar5,(FFrameRate)local_a8._padding_);
    param_4.Value = local_b8;
    if (__real_3f000000 <= local_b4) {
      param_4.Value = local_b8 + 1;
    }
    local_a8._padding_._0_4_ = param_6.Value;
    local_a8._padding_._4_4_ = 0;
    FVar6.Denominator = 0;
    FVar6.Numerator = param_6.Value;
    ConvertFrameTime((FFrameTime)&local_b0,FVar6,(FFrameRate)local_a8._padding_);
    param_6.Value = local_b0;
    if (__real_3f000000 <= local_ac) {
      param_6.Value = local_b0 + 1;
    }
    (param_7->InternalRate).Numerator = (undefined4)local_a8._padding_;
    (param_7->InternalRate).Denominator = local_a8._padding_._4_4_;
    pTVar12 = FSequencerScriptingRange::ToNative(param_7,&local_38,(FFrameRate)local_a8._padding_);
    local_c8.LowerBound = pTVar12->LowerBound;
    local_c8.UpperBound = pTVar12->UpperBound;
  }
  bVar10 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar10) {
    FWeakObjectPtr::Get(&local_res18);
  }
  pFVar13 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  TVar8 = local_c8.UpperBound;
  TVar7 = local_c8.LowerBound;
  if (pFVar13 == (FMovieSceneChannel *)0x0) {
    local_a8._padding_ = 0;
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to transform keys in channel."
               ,Error,(FName)0x0);
  }
  else {
    local_a8._padding_ =
         (longlong)
         &
         ___7FTransformRetiming___TMovieSceneScriptingChannel_UFMovieSceneDoubleChannel__VUMovieSceneScriptingDoubleKey__N__6B_
    ;
    local_a8._padding_ = (longlong)param_5;
    local_a8._padding_._4_1_ = local_c8.LowerBound.Type.Value;
    local_a8._padding_._5_3_ = local_c8.LowerBound._1_3_;
    local_a8.CompiledData.field0_0x0._0_4_ = local_c8.LowerBound.Value.Value;
    local_a8.CompiledData.field0_0x0._4_4_ = local_c8.UpperBound._0_4_;
    local_a8.DefaultCompletionMode = (undefined1)local_c8.UpperBound.Value.Value;
    local_a8.bParentContextsAreSignificant = (bool)local_c8.UpperBound.Value.Value._1_1_;
    local_a8.bPlayableDirectly = (bool)local_c8.UpperBound.Value.Value._2_1_;
    local_a8.SequenceFlags = local_c8.UpperBound.Value.Value._3_1_;
    local_c8.LowerBound = TVar7;
    local_c8.UpperBound = TVar8;
    local_a8._padding_._0_4_ = param_4.Value;
    local_a8._padding_._0_4_ = param_6.Value;
    (**(code **)(pFVar13->_padding_ + 0x40))(pFVar13,&local_a8._padding_);
    local_a8._padding_ = (longlong)&___7IRetimingInterface_MovieScene_UE__6B_;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}

// AddKeyInChannel @ 14c6854b0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneScriptingEventKey * __cdecl
TMovieSceneScriptingChannel<FMovieSceneEventChannel,UMovieSceneScriptingEventKey,FMovieSceneEvent>::
AddKeyInChannel(TMovieSceneChannelHandle<FMovieSceneEventChannel> *param_1,
               TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
               TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3,FFrameNumber param_4,
               FMovieSceneEvent *param_5,float param_6,EMovieSceneTimeUnit param_7,
               EMovieSceneKeyInterpolation param_8)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  FFrameRate FVar4;
  bool bVar5;
  int iVar6;
  FKeyHandle FVar7;
  FMovieSceneEventChannel *pFVar8;
  UObject *pUVar9;
  UMovieSceneScriptingEventKey *pUVar10;
  FFrameRate FVar11;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  int local_84;
  float local_80;
  int local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  TMovieSceneChannelData<FMovieSceneEvent> local_60;
  undefined1 local_40 [24];
  
  local_res10 = param_2.WeakPtr;
  local_res18[0] = param_3.WeakPtr;
  pFVar8 = (FMovieSceneEventChannel *)
           FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  if (pFVar8 == (FMovieSceneEventChannel *)0x0) {
    local_70 = 0;
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to add key.",Error,
               (FName)0x0);
    plVar2 = *(longlong **)&param_1->field_0x8;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
    return (UMovieSceneScriptingEventKey *)0x0;
  }
  pUVar9 = GetTransientPackageAsObject();
  pUVar10 = NewObject<UMovieSceneScriptingEventKey>(pUVar9);
  if (param_7 == DisplayRate) {
    FWeakObjectPtr::Get(&local_res10);
    UMovieSceneSequenceExtensions::GetTickResolution((UMovieSceneSequence *)local_40);
    FWeakObjectPtr::Get(&local_res10);
    FVar11 = UMovieSceneSequenceExtensions::GetDisplayRate((UMovieSceneSequence *)(local_40 + 8));
    uStack_74 = 0;
    FVar4.Denominator = 0;
    FVar4.Numerator = param_4.Value;
    local_78 = param_4.Value;
    ConvertFrameTime((FFrameTime)&local_84,FVar4,*(FFrameRate *)FVar11);
    param_4.Value = local_84;
    if (__real_3f000000 <= local_80) {
      param_4.Value = local_84 + 1;
    }
  }
  bVar5 = FWeakObjectPtr::IsValid(local_res18);
  if (bVar5) {
    FWeakObjectPtr::Get(local_res18);
  }
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_60,(FMovieSceneChannel *)pFVar8,&pFVar8->KeyTimes,
             (FKeyHandleLookupTable *)&pFVar8->KeyHandles);
  local_60.Values = &pFVar8->KeyValues;
  if ((local_60._padding_ == 0) ||
     (local_60.Values == (TArray<FMovieSceneEvent,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pUVar10 = (UMovieSceneScriptingEventKey *)(*pcVar3)();
      return pUVar10;
    }
  }
  iVar6 = FMovieSceneChannelData::FindKey
                    ((FMovieSceneChannelData *)&local_60,param_4,(FFrameNumber)0x0);
  FKeyHandle::Invalid();
  if (iVar6 == -1) {
    TMovieSceneChannelData<FMovieSceneEvent>::AddKey(&local_60,param_4,param_5);
    FVar7 = FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)&local_60,(int)local_64);
    FVar7.Index = *(uint *)CONCAT44(extraout_var_00,FVar7.Index);
  }
  else {
    FVar7 = FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)&local_60,(int)local_68);
    FVar7.Index = *(uint *)CONCAT44(extraout_var,FVar7.Index);
    UE::MovieScene::AssignValue<FMovieSceneEventChannel,FMovieSceneEvent_&>(pFVar8,FVar7,param_5);
  }
  *(uint *)&pUVar10->field_0x28 = FVar7.Index;
  TMovieSceneChannelHandle<FMovieSceneChannel>::operator=
            ((TMovieSceneChannelHandle<FMovieSceneChannel> *)&pUVar10->field_0x40,
             (TMovieSceneChannelHandle<FMovieSceneChannel> *)param_1);
  *(int *)&pUVar10->field_0x34 = local_res18[0].ObjectIndex;
  *(int *)&pUVar10->field_0x38 = local_res18[0].ObjectSerialNumber;
  *(int *)&pUVar10->field_0x2c = local_res10.ObjectIndex;
  *(int *)&pUVar10->field_0x30 = local_res10.ObjectSerialNumber;
  plVar2 = *(longlong **)&param_1->field_0x8;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)(*plVar2 + 8))(plVar2,1);
    }
  }
  return pUVar10;
}

// AddKeyInChannel @ 14c6856f0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneScriptingIntegerKey * __cdecl
TMovieSceneScriptingChannel<FMovieSceneIntegerChannel,UMovieSceneScriptingIntegerKey,int>::
AddKeyInChannel(TMovieSceneChannelHandle<FMovieSceneIntegerChannel> *param_1,
               TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
               TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3,FFrameNumber param_4,
               int *param_5,float param_6,EMovieSceneTimeUnit param_7,
               EMovieSceneKeyInterpolation param_8)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  FFrameRate FVar4;
  bool bVar5;
  int iVar6;
  FKeyHandle FVar7;
  FMovieSceneIntegerChannel *pFVar8;
  UObject *pUVar9;
  UMovieSceneScriptingIntegerKey *pUVar10;
  FFrameRate FVar11;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  int local_84;
  float local_80;
  int local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  TMovieSceneChannelData<int> local_60;
  undefined1 local_40 [24];
  
  local_res10 = param_2.WeakPtr;
  local_res18[0] = param_3.WeakPtr;
  pFVar8 = (FMovieSceneIntegerChannel *)
           FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  if (pFVar8 == (FMovieSceneIntegerChannel *)0x0) {
    local_70 = 0;
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to add key.",Error,
               (FName)0x0);
    plVar2 = *(longlong **)&param_1->field_0x8;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
    return (UMovieSceneScriptingIntegerKey *)0x0;
  }
  pUVar9 = GetTransientPackageAsObject();
  pUVar10 = NewObject<UMovieSceneScriptingIntegerKey>(pUVar9);
  if (param_7 == DisplayRate) {
    FWeakObjectPtr::Get(&local_res10);
    UMovieSceneSequenceExtensions::GetTickResolution((UMovieSceneSequence *)local_40);
    FWeakObjectPtr::Get(&local_res10);
    FVar11 = UMovieSceneSequenceExtensions::GetDisplayRate((UMovieSceneSequence *)(local_40 + 8));
    uStack_74 = 0;
    FVar4.Denominator = 0;
    FVar4.Numerator = param_4.Value;
    local_78 = param_4.Value;
    ConvertFrameTime((FFrameTime)&local_84,FVar4,*(FFrameRate *)FVar11);
    param_4.Value = local_84;
    if (__real_3f000000 <= local_80) {
      param_4.Value = local_84 + 1;
    }
  }
  bVar5 = FWeakObjectPtr::IsValid(local_res18);
  if (bVar5) {
    FWeakObjectPtr::Get(local_res18);
  }
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_60,(FMovieSceneChannel *)pFVar8,&pFVar8->Times,
             (FKeyHandleLookupTable *)&pFVar8->KeyHandles);
  local_60.Values = &pFVar8->Values;
  if ((local_60._padding_ == 0) ||
     (local_60.Values == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pUVar10 = (UMovieSceneScriptingIntegerKey *)(*pcVar3)();
      return pUVar10;
    }
  }
  iVar6 = FMovieSceneChannelData::FindKey
                    ((FMovieSceneChannelData *)&local_60,param_4,(FFrameNumber)0x0);
  FKeyHandle::Invalid();
  if (iVar6 == -1) {
    TMovieSceneChannelData<int>::AddKey(&local_60,param_4,*param_5);
    FVar7 = FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)&local_60,(int)local_64);
    FVar7.Index = *(uint *)CONCAT44(extraout_var_00,FVar7.Index);
  }
  else {
    FVar7 = FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)&local_60,(int)local_68);
    FVar7.Index = *(uint *)CONCAT44(extraout_var,FVar7.Index);
    UE::MovieScene::AssignValue<FMovieSceneIntegerChannel,int_&>(pFVar8,FVar7,param_5);
  }
  *(uint *)&pUVar10->field_0x28 = FVar7.Index;
  TMovieSceneChannelHandle<FMovieSceneChannel>::operator=
            ((TMovieSceneChannelHandle<FMovieSceneChannel> *)&pUVar10->field_0x40,
             (TMovieSceneChannelHandle<FMovieSceneChannel> *)param_1);
  *(int *)&pUVar10->field_0x34 = local_res18[0].ObjectIndex;
  *(int *)&pUVar10->field_0x38 = local_res18[0].ObjectSerialNumber;
  *(int *)&pUVar10->field_0x2c = local_res10.ObjectIndex;
  *(int *)&pUVar10->field_0x30 = local_res10.ObjectSerialNumber;
  plVar2 = *(longlong **)&param_1->field_0x8;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)(*plVar2 + 8))(plVar2,1);
    }
  }
  return pUVar10;
}

// AddKeyInChannel @ 14c685930

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneScriptingObjectPathKey * __cdecl
TMovieSceneScriptingChannel<FMovieSceneObjectPathChannel,UMovieSceneScriptingObjectPathKey,FMovieSceneObjectPathChannelKeyValue>
::AddKeyInChannel(TMovieSceneChannelHandle<FMovieSceneObjectPathChannel> *param_1,
                 TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
                 TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3,FFrameNumber param_4,
                 FMovieSceneObjectPathChannelKeyValue *param_5,float param_6,
                 EMovieSceneTimeUnit param_7,EMovieSceneKeyInterpolation param_8)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  FFrameRate FVar4;
  bool bVar5;
  int iVar6;
  FKeyHandle FVar7;
  FMovieSceneObjectPathChannel *pFVar8;
  UObject *pUVar9;
  UMovieSceneScriptingObjectPathKey *pUVar10;
  FFrameRate FVar11;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  int local_84;
  float local_80;
  int local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue> local_60;
  undefined1 local_40 [24];
  
  local_res10 = param_2.WeakPtr;
  local_res18[0] = param_3.WeakPtr;
  pFVar8 = (FMovieSceneObjectPathChannel *)
           FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  if (pFVar8 == (FMovieSceneObjectPathChannel *)0x0) {
    local_70 = 0;
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to add key.",Error,
               (FName)0x0);
    plVar2 = *(longlong **)&param_1->field_0x8;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
    return (UMovieSceneScriptingObjectPathKey *)0x0;
  }
  pUVar9 = GetTransientPackageAsObject();
  pUVar10 = NewObject<UMovieSceneScriptingObjectPathKey>(pUVar9);
  if (param_7 == DisplayRate) {
    FWeakObjectPtr::Get(&local_res10);
    UMovieSceneSequenceExtensions::GetTickResolution((UMovieSceneSequence *)local_40);
    FWeakObjectPtr::Get(&local_res10);
    FVar11 = UMovieSceneSequenceExtensions::GetDisplayRate((UMovieSceneSequence *)(local_40 + 8));
    uStack_74 = 0;
    FVar4.Denominator = 0;
    FVar4.Numerator = param_4.Value;
    local_78 = param_4.Value;
    ConvertFrameTime((FFrameTime)&local_84,FVar4,*(FFrameRate *)FVar11);
    param_4.Value = local_84;
    if (__real_3f000000 <= local_80) {
      param_4.Value = local_84 + 1;
    }
  }
  bVar5 = FWeakObjectPtr::IsValid(local_res18);
  if (bVar5) {
    FWeakObjectPtr::Get(local_res18);
  }
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_60,(FMovieSceneChannel *)pFVar8,&pFVar8->Times,
             (FKeyHandleLookupTable *)&pFVar8->KeyHandles);
  local_60.Values = &pFVar8->Values;
  if ((local_60._padding_ == 0) ||
     (local_60.Values ==
      (TArray<FMovieSceneObjectPathChannelKeyValue,TSizedDefaultAllocator<32>_> *)0x0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pUVar10 = (UMovieSceneScriptingObjectPathKey *)(*pcVar3)();
      return pUVar10;
    }
  }
  iVar6 = FMovieSceneChannelData::FindKey
                    ((FMovieSceneChannelData *)&local_60,param_4,(FFrameNumber)0x0);
  FKeyHandle::Invalid();
  if (iVar6 == -1) {
    TMovieSceneChannelData<FMovieSceneObjectPathChannelKeyValue>::AddKey(&local_60,param_4,param_5);
    FVar7 = FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)&local_60,(int)local_64);
    FVar7.Index = *(uint *)CONCAT44(extraout_var_00,FVar7.Index);
  }
  else {
    FVar7 = FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)&local_60,(int)local_68);
    FVar7.Index = *(uint *)CONCAT44(extraout_var,FVar7.Index);
    UE::MovieScene::AssignValue<FMovieSceneObjectPathChannel,FMovieSceneObjectPathChannelKeyValue_&>
              (pFVar8,FVar7,param_5);
  }
  *(uint *)&pUVar10->field_0x28 = FVar7.Index;
  TMovieSceneChannelHandle<FMovieSceneChannel>::operator=
            ((TMovieSceneChannelHandle<FMovieSceneChannel> *)&pUVar10->field_0x40,
             (TMovieSceneChannelHandle<FMovieSceneChannel> *)param_1);
  *(int *)&pUVar10->field_0x34 = local_res18[0].ObjectIndex;
  *(int *)&pUVar10->field_0x38 = local_res18[0].ObjectSerialNumber;
  *(int *)&pUVar10->field_0x2c = local_res10.ObjectIndex;
  *(int *)&pUVar10->field_0x30 = local_res10.ObjectSerialNumber;
  plVar2 = *(longlong **)&param_1->field_0x8;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)(*plVar2 + 8))(plVar2,1);
    }
  }
  return pUVar10;
}

// EvaluateKeysInChannel @ 14c686010

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<double,TSizedDefaultAllocator<32>_> * __cdecl
TMovieSceneScriptingChannel<FMovieSceneDoubleChannel,UMovieSceneScriptingDoubleAsFloatKey,double>::
EvaluateKeysInChannel
          (TArray<double,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TMovieSceneChannelHandle<FMovieSceneDoubleChannel> *param_1,
          TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
          FSequencerScriptingRange *param_3,FFrameRate param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  FFrameRate FVar6;
  FFrameRate FVar7;
  float fVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FMovieSceneDoubleChannel *this;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar12;
  FFrameTime FVar13;
  uint uVar14;
  FMovieSceneDoubleChannel *pFVar15;
  wchar_t *pwVar16;
  TEnumAsByte<ERangeBoundTypes::Type> TVar17;
  TEnumAsByte<ERangeBoundTypes::Type> TVar18;
  longlong lVar19;
  uint uVar20;
  longlong lVar21;
  float fVar22;
  undefined1 auVar23 [16];
  float fVar24;
  FWeakObjectPtr local_res18;
  float fStack_d4;
  undefined1 local_d0 [16];
  longlong local_c0;
  uint local_b8;
  undefined4 uStack_b4;
  uint local_b0;
  undefined4 uStack_ac;
  uint local_a8;
  undefined4 uStack_a4;
  longlong local_a0;
  longlong local_98;
  TRange<FFrameNumber> local_90;
  undefined1 local_80 [8];
  uint local_78 [2];
  undefined1 local_70 [56];
  
  lVar21 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res18 = param_2.WeakPtr;
  this = (FMovieSceneDoubleChannel *)
         FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  if (this == (FMovieSceneDoubleChannel *)0x0) {
    local_98 = 0;
    pwVar16 = L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to evaluate keys.";
  }
  else {
    FWeakObjectPtr::Get(&local_res18);
    UMovieSceneSequenceExtensions::GetTickResolution((UMovieSceneSequence *)local_d0);
    FSequencerScriptingRange::ToNative(param_3,&local_90,(FFrameRate)local_d0._0_8_);
    TVar18 = local_90.LowerBound.Type.Value;
    if (TVar18.Value != '\x02') {
      TVar17 = local_90.UpperBound.Type.Value;
      if (TVar17.Value != '\x02') {
        local_c0 = 1;
        fVar24 = 0.0;
        ConvertFrameTime((FFrameTime)local_80,(FFrameRate)0x1,param_4);
        if (TVar18.Value == '\x02') {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InLowerBound.IsOpen()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                             ,0x2c,L"");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            pTVar12 = (TArray<double,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar12;
          }
        }
        lVar19 = lVar21;
        if (TVar18.Value == '\0') {
          lVar19 = 4;
        }
        iVar11 = *(int *)((longlong)
                          &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteInclusiveLower(TRangeBound<FFrameNumber>_const&___ptr64)'
                           ::__l2::Offsets + lVar19);
        if (TVar18.Value == '\x02') {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L"");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            pTVar12 = (TArray<double,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar12;
          }
        }
        local_d0[8] = local_90.UpperBound.Type.Value;
        local_d0._9_3_ = local_90.UpperBound._1_3_;
        local_d0._12_4_ = local_90.UpperBound.Value.Value;
        if (TVar17.Value == '\x02') {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InUpperBound.IsOpen()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                             ,0x44,L"");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            pTVar12 = (TArray<double,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar12;
          }
        }
        if (TVar17.Value == '\x01') {
          lVar21 = 4;
        }
        iVar3 = *(int *)((longlong)
                         &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteExclusiveUpper(TRangeBound<FFrameNumber>_const&___ptr64)'
                          ::__l2::Offsets + lVar21);
        if (TVar17.Value == '\x02') {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L"");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            pTVar12 = (TArray<double,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar12;
          }
        }
        fVar8 = __real_3f000000;
        uVar10 = iVar11 + local_90.LowerBound.Value.Value.Value;
        uVar20 = local_d0._12_4_ + iVar3;
        uStack_b4 = 0;
        local_d0._8_8_ = ZEXT48(uVar20);
        local_b8 = uVar20;
        while( true ) {
          FVar6.Denominator = (int)fVar24;
          FVar6.Numerator = uVar10;
          if (((int)uVar20 <= (int)uVar10) && ((uVar10 != uVar20 || (0.0 <= fVar24)))) break;
          FVar13 = ConvertFrameTime((FFrameTime)local_70,FVar6,(FFrameRate)local_d0._0_8_);
          local_b0 = *(uint *)FVar13;
          if (fVar8 < *(float *)((longlong)FVar13 + 4) || fVar8 == *(float *)((longlong)FVar13 + 4))
          {
            local_b0 = local_b0 + 1;
          }
          uStack_ac = 0;
          FVar7.Denominator = 0;
          FVar7.Numerator = local_b0;
          ConvertFrameTime((FFrameTime)local_78,FVar7,param_4);
          iVar11 = __return_storage_ptr__->ArrayNum;
          if (iVar11 == __return_storage_ptr__->ArrayMax) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&__return_storage_ptr__->AllocatorInstance,
                                &__return_storage_ptr__->ArrayMax);
          }
          uStack_a4 = 0;
          __return_storage_ptr__->ArrayNum = iVar11 + 1;
          pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar11 * 8;
          *(double *)pFVar2 = 0.0;
          local_a8 = local_78[0];
          FVar13.SubFrame = 0.0;
          FVar13.FrameNumber.Value = local_78[0];
          pFVar15 = this;
          FMovieSceneDoubleChannel::Evaluate(this,FVar13,(double *)pFVar2);
          fStack_d4 = local_80._4_4_;
          fVar24 = fVar24 + fStack_d4;
          uVar10 = ((int)ROUND((fVar24 + fVar24) - fVar8) >> 1) + uVar10 + local_80._0_4_;
          iVar11 = (int)fVar24;
          fVar22 = fVar24;
          if ((iVar11 != -0x80000000) && ((float)iVar11 != fVar24)) {
            auVar23._4_4_ = fVar24;
            auVar23._0_4_ = fVar24;
            auVar23._8_8_ = 0;
            uVar14 = movmskps((int)pFVar15,auVar23);
            fVar22 = (float)(int)(iVar11 - (uVar14 & 1));
          }
          fVar24 = fVar24 - fVar22;
        }
        goto LAB_14c68637d;
      }
    }
    local_a0 = 0;
    pwVar16 = L"Unbounded range passed to evaluate keys.";
  }
  FFrame::KismetExecutionMessage(pwVar16,Error,(FName)0x0);
LAB_14c68637d:
  plVar4 = *(longlong **)&param_1->field_0x8;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar11 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar11 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return __return_storage_ptr__;
}

// EvaluateKeysInChannel @ 14c686410

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<float,TSizedDefaultAllocator<32>_> * __cdecl
TMovieSceneScriptingChannel<FMovieSceneFloatChannel,UMovieSceneScriptingActualFloatKey,float>::
EvaluateKeysInChannel
          (TArray<float,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TMovieSceneChannelHandle<FMovieSceneFloatChannel> *param_1,
          TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
          FSequencerScriptingRange *param_3,FFrameRate param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  FFrameRate FVar6;
  FFrameRate FVar7;
  float fVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FMovieSceneFloatChannel *this;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar12;
  FFrameTime FVar13;
  uint uVar14;
  FMovieSceneFloatChannel *pFVar15;
  wchar_t *pwVar16;
  TEnumAsByte<ERangeBoundTypes::Type> TVar17;
  TEnumAsByte<ERangeBoundTypes::Type> TVar18;
  longlong lVar19;
  uint uVar20;
  longlong lVar21;
  float fVar22;
  undefined1 auVar23 [16];
  float fVar24;
  FWeakObjectPtr local_res18;
  float fStack_d4;
  undefined1 local_d0 [16];
  longlong local_c0;
  uint local_b8;
  undefined4 uStack_b4;
  uint local_b0;
  undefined4 uStack_ac;
  uint local_a8;
  undefined4 uStack_a4;
  longlong local_a0;
  longlong local_98;
  TRange<FFrameNumber> local_90;
  undefined1 local_80 [8];
  uint local_78 [2];
  undefined1 local_70 [56];
  
  lVar21 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res18 = param_2.WeakPtr;
  this = (FMovieSceneFloatChannel *)
         FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  if (this == (FMovieSceneFloatChannel *)0x0) {
    local_98 = 0;
    pwVar16 = L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to evaluate keys.";
  }
  else {
    FWeakObjectPtr::Get(&local_res18);
    UMovieSceneSequenceExtensions::GetTickResolution((UMovieSceneSequence *)local_d0);
    FSequencerScriptingRange::ToNative(param_3,&local_90,(FFrameRate)local_d0._0_8_);
    TVar18 = local_90.LowerBound.Type.Value;
    if (TVar18.Value != '\x02') {
      TVar17 = local_90.UpperBound.Type.Value;
      if (TVar17.Value != '\x02') {
        local_c0 = 1;
        fVar24 = 0.0;
        ConvertFrameTime((FFrameTime)local_80,(FFrameRate)0x1,param_4);
        if (TVar18.Value == '\x02') {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InLowerBound.IsOpen()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                             ,0x2c,L"");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            pTVar12 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar12;
          }
        }
        lVar19 = lVar21;
        if (TVar18.Value == '\0') {
          lVar19 = 4;
        }
        iVar11 = *(int *)((longlong)
                          &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteInclusiveLower(TRangeBound<FFrameNumber>_const&___ptr64)'
                           ::__l2::Offsets + lVar19);
        if (TVar18.Value == '\x02') {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L"");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            pTVar12 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar12;
          }
        }
        local_d0[8] = local_90.UpperBound.Type.Value;
        local_d0._9_3_ = local_90.UpperBound._1_3_;
        local_d0._12_4_ = local_90.UpperBound.Value.Value;
        if (TVar17.Value == '\x02') {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InUpperBound.IsOpen()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                             ,0x44,L"");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            pTVar12 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar12;
          }
        }
        if (TVar17.Value == '\x01') {
          lVar21 = 4;
        }
        iVar3 = *(int *)((longlong)
                         &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteExclusiveUpper(TRangeBound<FFrameNumber>_const&___ptr64)'
                          ::__l2::Offsets + lVar21);
        if (TVar17.Value == '\x02') {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L"");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            pTVar12 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
            return pTVar12;
          }
        }
        fVar8 = __real_3f000000;
        uVar10 = iVar11 + local_90.LowerBound.Value.Value.Value;
        uVar20 = local_d0._12_4_ + iVar3;
        uStack_b4 = 0;
        local_d0._8_8_ = ZEXT48(uVar20);
        local_b8 = uVar20;
        while( true ) {
          FVar6.Denominator = (int)fVar24;
          FVar6.Numerator = uVar10;
          if (((int)uVar20 <= (int)uVar10) && ((uVar10 != uVar20 || (0.0 <= fVar24)))) break;
          FVar13 = ConvertFrameTime((FFrameTime)local_70,FVar6,(FFrameRate)local_d0._0_8_);
          local_b0 = *(uint *)FVar13;
          if (fVar8 < *(float *)((longlong)FVar13 + 4) || fVar8 == *(float *)((longlong)FVar13 + 4))
          {
            local_b0 = local_b0 + 1;
          }
          uStack_ac = 0;
          FVar7.Denominator = 0;
          FVar7.Numerator = local_b0;
          ConvertFrameTime((FFrameTime)local_78,FVar7,param_4);
          iVar11 = __return_storage_ptr__->ArrayNum;
          if (iVar11 == __return_storage_ptr__->ArrayMax) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&__return_storage_ptr__->AllocatorInstance,
                                &__return_storage_ptr__->ArrayMax);
          }
          uStack_a4 = 0;
          __return_storage_ptr__->ArrayNum = iVar11 + 1;
          pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar11 * 4;
          *(float *)pFVar2 = 0.0;
          local_a8 = local_78[0];
          FVar13.SubFrame = 0.0;
          FVar13.FrameNumber.Value = local_78[0];
          pFVar15 = this;
          FMovieSceneFloatChannel::Evaluate(this,FVar13,(float *)pFVar2);
          fStack_d4 = local_80._4_4_;
          fVar24 = fVar24 + fStack_d4;
          uVar10 = ((int)ROUND((fVar24 + fVar24) - fVar8) >> 1) + uVar10 + local_80._0_4_;
          iVar11 = (int)fVar24;
          fVar22 = fVar24;
          if ((iVar11 != -0x80000000) && ((float)iVar11 != fVar24)) {
            auVar23._4_4_ = fVar24;
            auVar23._0_4_ = fVar24;
            auVar23._8_8_ = 0;
            uVar14 = movmskps((int)pFVar15,auVar23);
            fVar22 = (float)(int)(iVar11 - (uVar14 & 1));
          }
          fVar24 = fVar24 - fVar22;
        }
        goto LAB_14c68677d;
      }
    }
    local_a0 = 0;
    pwVar16 = L"Unbounded range passed to evaluate keys.";
  }
  FFrame::KismetExecutionMessage(pwVar16,Error,(FName)0x0);
LAB_14c68677d:
  plVar4 = *(longlong **)&param_1->field_0x8;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar11 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar11 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return __return_storage_ptr__;
}

// EvaluateKeysInChannel @ 14c686810

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TArray<int,TSizedDefaultAllocator<32>_> * __cdecl
TMovieSceneScriptingChannel<FMovieSceneIntegerChannel,UMovieSceneScriptingIntegerKey,int>::
EvaluateKeysInChannel
          (TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TMovieSceneChannelHandle<FMovieSceneIntegerChannel> *param_1,
          TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
          FSequencerScriptingRange *param_3,FFrameRate param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  FFrameRate FVar5;
  float fVar6;
  float fVar7;
  FFrameRate FVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar12;
  FFrameTime FVar13;
  int iVar14;
  wchar_t *pwVar15;
  TEnumAsByte<ERangeBoundTypes::Type> TVar16;
  uint uVar17;
  longlong lVar18;
  TEnumAsByte<ERangeBoundTypes::Type> TVar19;
  longlong lVar20;
  uint uVar21;
  float fVar22;
  undefined1 auVar23 [16];
  float fVar24;
  FWeakObjectPtr local_res18;
  FFrameRate local_f8;
  undefined1 local_f0 [16];
  longlong local_e0;
  uint local_d8;
  undefined4 uStack_d4;
  uint local_d0;
  undefined4 uStack_cc;
  uint local_c8;
  undefined4 uStack_c4;
  long64 local_c0 [3];
  TRange<FFrameNumber> local_a8;
  uint local_98 [2];
  TObjectPtr<UMovieSceneCompiledData>_u_0 local_90;
  undefined1 local_88 [80];
  
  lVar18 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res18 = param_2.WeakPtr;
  local_90.DebugPtr =
       (UMovieSceneCompiledData *)FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1)
  ;
  if (local_90.DebugPtr == (UMovieSceneCompiledData *)0x0) {
    local_c0[2] = 0;
    pwVar15 = L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to evaluate keys.";
  }
  else {
    FWeakObjectPtr::Get(&local_res18);
    UMovieSceneSequenceExtensions::GetTickResolution((UMovieSceneSequence *)local_f0);
    FSequencerScriptingRange::ToNative(param_3,&local_a8,(FFrameRate)local_f0._0_8_);
    TVar19 = local_a8.LowerBound.Type.Value;
    if (TVar19.Value != '\x02') {
      TVar16 = local_a8.UpperBound.Type.Value;
      if (TVar16.Value != '\x02') {
        local_e0 = 1;
        fVar24 = 0.0;
        ConvertFrameTime((FFrameTime)&local_f8,(FFrameRate)0x1,param_4);
        if (TVar19.Value == '\x02') {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InLowerBound.IsOpen()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                             ,0x2c,L"");
          if (bVar9) {
            pcVar4 = (code *)swi(3);
            pTVar12 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar12;
          }
        }
        lVar20 = lVar18;
        if (TVar19.Value == '\0') {
          lVar20 = 4;
        }
        iVar10 = *(int *)((longlong)
                          &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteInclusiveLower(TRangeBound<FFrameNumber>_const&___ptr64)'
                           ::__l2::Offsets + lVar20);
        if (TVar19.Value == '\x02') {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L"");
          if (bVar9) {
            pcVar4 = (code *)swi(3);
            pTVar12 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar12;
          }
        }
        local_f0[8] = local_a8.UpperBound.Type.Value;
        local_f0._9_3_ = local_a8.UpperBound._1_3_;
        local_f0._12_4_ = local_a8.UpperBound.Value.Value;
        if (TVar16.Value == '\x02') {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InUpperBound.IsOpen()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                             ,0x44,L"");
          if (bVar9) {
            pcVar4 = (code *)swi(3);
            pTVar12 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar12;
          }
        }
        if (TVar16.Value == '\x01') {
          lVar18 = 4;
        }
        iVar14 = *(int *)((longlong)
                          &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteExclusiveUpper(TRangeBound<FFrameNumber>_const&___ptr64)'
                           ::__l2::Offsets + lVar18);
        if (TVar16.Value == '\x02') {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L"");
          if (bVar9) {
            pcVar4 = (code *)swi(3);
            pTVar12 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
            return pTVar12;
          }
        }
        FVar8 = local_f8;
        fVar7 = __real_40000000;
        fVar6 = __real_3f000000;
        uVar21 = local_f0._12_4_ + iVar14;
        uVar17 = local_a8.LowerBound.Value.Value.Value + iVar10;
        uStack_d4 = 0;
        local_f0._8_8_ = ZEXT48(uVar21);
        local_d8 = uVar21;
        while( true ) {
          local_f8.Denominator = (int)fVar24;
          local_f8.Numerator = uVar17;
          if (((int)uVar21 <= (int)uVar17) && ((uVar17 != uVar21 || (0.0 <= fVar24)))) break;
          FVar13 = ConvertFrameTime((FFrameTime)local_88,local_f8,(FFrameRate)local_f0._0_8_);
          local_d0 = *(uint *)FVar13;
          if (fVar6 < *(float *)((longlong)FVar13 + 4) || fVar6 == *(float *)((longlong)FVar13 + 4))
          {
            local_d0 = local_d0 + 1;
          }
          uStack_cc = 0;
          FVar5.Denominator = 0;
          FVar5.Numerator = local_d0;
          ConvertFrameTime((FFrameTime)local_98,FVar5,param_4);
          iVar10 = __return_storage_ptr__->ArrayNum;
          if (iVar10 == __return_storage_ptr__->ArrayMax) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&__return_storage_ptr__->AllocatorInstance,
                                &__return_storage_ptr__->ArrayMax);
          }
          pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
          __return_storage_ptr__->ArrayNum = iVar10 + 1;
          uStack_c4 = 0;
          *(undefined4 *)(pFVar2 + (longlong)iVar10 * 4) = 0;
          local_c8 = local_98[0];
          FVar13.SubFrame = 0.0;
          FVar13.FrameNumber.Value = local_98[0];
          local_c0[0] = 0;
          bVar9 = FMovieSceneIntegerChannel::Evaluate
                            ((FMovieSceneIntegerChannel *)local_90.DebugPtr,FVar13,local_c0);
          if (bVar9) {
            *(undefined4 *)(pFVar2 + (longlong)iVar10 * 4) = (undefined4)local_c0[0];
          }
          local_f8.Denominator = FVar8.Denominator;
          fVar24 = fVar24 + (float)local_f8.Denominator;
          iVar10 = ((int)ROUND(fVar24 * fVar7 - fVar6) >> 1) + FVar8.Numerator;
          uVar17 = uVar17 + iVar10;
          iVar14 = (int)fVar24;
          fVar22 = fVar24;
          if ((iVar14 != -0x80000000) && ((float)iVar14 != fVar24)) {
            auVar23._4_4_ = fVar24;
            auVar23._0_4_ = fVar24;
            auVar23._8_8_ = 0;
            uVar11 = movmskps(iVar10,auVar23);
            fVar22 = (float)(int)(iVar14 - (uVar11 & 1));
          }
          fVar24 = fVar24 - fVar22;
        }
        goto LAB_14c686b7d;
      }
    }
    local_c0[1] = 0;
    pwVar15 = L"Unbounded range passed to evaluate keys.";
  }
  FFrame::KismetExecutionMessage(pwVar15,Error,(FName)0x0);
LAB_14c686b7d:
  plVar3 = *(longlong **)&param_1->field_0x8;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar10 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return __return_storage_ptr__;
}

// GetKeysInChannel @ 14c687500

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> * __cdecl
TMovieSceneScriptingChannel<FMovieSceneDoubleChannel,UMovieSceneScriptingDoubleAsFloatKey,double>::
GetKeysInChannel(TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_>
                 *__return_storage_ptr__,TMovieSceneChannelHandle<FMovieSceneDoubleChannel> *param_1
                ,TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
                TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FMovieSceneChannel *pFVar7;
  UObject *pUVar8;
  UMovieSceneScriptingDoubleAsFloatKey *pUVar9;
  TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *pTVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  UMovieSceneScriptingDoubleAsFloatKey *local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  undefined1 local_50 [4];
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  
  uVar12 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar7 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  if (pFVar7 == (FMovieSceneChannel *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get keys.",Error,
               (FName)0x0);
  }
  else {
    local_60 = (void *)0x0;
    local_58 = 0;
    local_70 = (void *)0x0;
    local_68 = 0;
    local_50[0] = 2;
    local_4c = 0;
    local_48 = 2;
    local_44 = 0;
    (**(code **)(pFVar7->_padding_ + 8))(pFVar7,local_50,&local_60,&local_70);
    uVar14 = uVar12;
    if (0 < (int)local_58) {
      do {
        pUVar8 = GetTransientPackageAsObject();
        pUVar9 = NewObject<UMovieSceneScriptingDoubleAsFloatKey>(pUVar8);
        uVar13 = (uint)uVar14;
        uVar11 = 0;
        if ((int)uVar13 < (int)local_68) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar10;
        }
        *(undefined4 *)&pUVar9->field_0x28 = *(undefined4 *)((longlong)local_70 + uVar12);
        TMovieSceneChannelHandle<FMovieSceneChannel>::operator=
                  ((TMovieSceneChannelHandle<FMovieSceneChannel> *)&pUVar9->field_0x40,
                   (TMovieSceneChannelHandle<FMovieSceneChannel> *)param_1);
        *(int *)&pUVar9->field_0x2c = param_2.WeakPtr.ObjectIndex;
        *(int *)&pUVar9->field_0x30 = param_2.WeakPtr.ObjectSerialNumber;
        *(int *)&pUVar9->field_0x34 = param_3.WeakPtr.ObjectIndex;
        *(int *)&pUVar9->field_0x38 = param_3.WeakPtr.ObjectSerialNumber;
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
        local_78 = pUVar9;
        if (((pFVar2 <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 <
             pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar10;
        }
        iVar6 = __return_storage_ptr__->ArrayNum;
        if (iVar6 == __return_storage_ptr__->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        uVar14 = (ulonglong)(uVar13 + 1);
        __return_storage_ptr__->ArrayNum = iVar6 + 1;
        uVar12 = uVar12 + 4;
        *(UMovieSceneScriptingDoubleAsFloatKey **)
         ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_78;
      } while ((int)(uVar13 + 1) < (int)local_58);
    }
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
    }
    if (local_60 != (void *)0x0) {
      FMemory::Free(local_60);
    }
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return __return_storage_ptr__;
}

// GetKeysInChannel @ 14c687770

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> * __cdecl
TMovieSceneScriptingChannel<FMovieSceneEventChannel,UMovieSceneScriptingEventKey,FMovieSceneEvent>::
GetKeysInChannel(TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_>
                 *__return_storage_ptr__,TMovieSceneChannelHandle<FMovieSceneEventChannel> *param_1,
                TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
                TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FMovieSceneChannel *pFVar7;
  UObject *pUVar8;
  UMovieSceneScriptingEventKey *pUVar9;
  TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *pTVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  UMovieSceneScriptingEventKey *local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  undefined1 local_50 [4];
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  
  uVar12 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar7 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  if (pFVar7 == (FMovieSceneChannel *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get keys.",Error,
               (FName)0x0);
  }
  else {
    local_60 = (void *)0x0;
    local_58 = 0;
    local_70 = (void *)0x0;
    local_68 = 0;
    local_50[0] = 2;
    local_4c = 0;
    local_48 = 2;
    local_44 = 0;
    (**(code **)(pFVar7->_padding_ + 8))(pFVar7,local_50,&local_60,&local_70);
    uVar14 = uVar12;
    if (0 < (int)local_58) {
      do {
        pUVar8 = GetTransientPackageAsObject();
        pUVar9 = NewObject<UMovieSceneScriptingEventKey>(pUVar8);
        uVar13 = (uint)uVar14;
        uVar11 = 0;
        if ((int)uVar13 < (int)local_68) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar10;
        }
        *(undefined4 *)&pUVar9->field_0x28 = *(undefined4 *)((longlong)local_70 + uVar12);
        TMovieSceneChannelHandle<FMovieSceneChannel>::operator=
                  ((TMovieSceneChannelHandle<FMovieSceneChannel> *)&pUVar9->field_0x40,
                   (TMovieSceneChannelHandle<FMovieSceneChannel> *)param_1);
        *(int *)&pUVar9->field_0x2c = param_2.WeakPtr.ObjectIndex;
        *(int *)&pUVar9->field_0x30 = param_2.WeakPtr.ObjectSerialNumber;
        *(int *)&pUVar9->field_0x34 = param_3.WeakPtr.ObjectIndex;
        *(int *)&pUVar9->field_0x38 = param_3.WeakPtr.ObjectSerialNumber;
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
        local_78 = pUVar9;
        if (((pFVar2 <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 <
             pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar10;
        }
        iVar6 = __return_storage_ptr__->ArrayNum;
        if (iVar6 == __return_storage_ptr__->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        uVar14 = (ulonglong)(uVar13 + 1);
        __return_storage_ptr__->ArrayNum = iVar6 + 1;
        uVar12 = uVar12 + 4;
        *(UMovieSceneScriptingEventKey **)
         ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_78;
      } while ((int)(uVar13 + 1) < (int)local_58);
    }
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
    }
    if (local_60 != (void *)0x0) {
      FMemory::Free(local_60);
    }
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return __return_storage_ptr__;
}

// GetKeysInChannel @ 14c6879e0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> * __cdecl
TMovieSceneScriptingChannel<FMovieSceneFloatChannel,UMovieSceneScriptingActualFloatKey,float>::
GetKeysInChannel(TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_>
                 *__return_storage_ptr__,TMovieSceneChannelHandle<FMovieSceneFloatChannel> *param_1,
                TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
                TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FMovieSceneChannel *pFVar7;
  UObject *pUVar8;
  UMovieSceneScriptingActualFloatKey *pUVar9;
  TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *pTVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  UMovieSceneScriptingActualFloatKey *local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  undefined1 local_50 [4];
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  
  uVar12 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar7 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  if (pFVar7 == (FMovieSceneChannel *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get keys.",Error,
               (FName)0x0);
  }
  else {
    local_60 = (void *)0x0;
    local_58 = 0;
    local_70 = (void *)0x0;
    local_68 = 0;
    local_50[0] = 2;
    local_4c = 0;
    local_48 = 2;
    local_44 = 0;
    (**(code **)(pFVar7->_padding_ + 8))(pFVar7,local_50,&local_60,&local_70);
    uVar14 = uVar12;
    if (0 < (int)local_58) {
      do {
        pUVar8 = GetTransientPackageAsObject();
        pUVar9 = NewObject<UMovieSceneScriptingActualFloatKey>(pUVar8);
        uVar13 = (uint)uVar14;
        uVar11 = 0;
        if ((int)uVar13 < (int)local_68) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar10;
        }
        *(undefined4 *)&pUVar9->field_0x28 = *(undefined4 *)((longlong)local_70 + uVar12);
        TMovieSceneChannelHandle<FMovieSceneChannel>::operator=
                  ((TMovieSceneChannelHandle<FMovieSceneChannel> *)&pUVar9->field_0x40,
                   (TMovieSceneChannelHandle<FMovieSceneChannel> *)param_1);
        *(int *)&pUVar9->field_0x2c = param_2.WeakPtr.ObjectIndex;
        *(int *)&pUVar9->field_0x30 = param_2.WeakPtr.ObjectSerialNumber;
        *(int *)&pUVar9->field_0x34 = param_3.WeakPtr.ObjectIndex;
        *(int *)&pUVar9->field_0x38 = param_3.WeakPtr.ObjectSerialNumber;
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
        local_78 = pUVar9;
        if (((pFVar2 <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 <
             pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar10;
        }
        iVar6 = __return_storage_ptr__->ArrayNum;
        if (iVar6 == __return_storage_ptr__->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        uVar14 = (ulonglong)(uVar13 + 1);
        __return_storage_ptr__->ArrayNum = iVar6 + 1;
        uVar12 = uVar12 + 4;
        *(UMovieSceneScriptingActualFloatKey **)
         ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_78;
      } while ((int)(uVar13 + 1) < (int)local_58);
    }
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
    }
    if (local_60 != (void *)0x0) {
      FMemory::Free(local_60);
    }
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return __return_storage_ptr__;
}

// GetKeysInChannel @ 14c687c50

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> * __cdecl
TMovieSceneScriptingChannel<FMovieSceneIntegerChannel,UMovieSceneScriptingIntegerKey,int>::
GetKeysInChannel(TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_>
                 *__return_storage_ptr__,
                TMovieSceneChannelHandle<FMovieSceneIntegerChannel> *param_1,
                TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
                TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FMovieSceneChannel *pFVar7;
  UObject *pUVar8;
  UMovieSceneScriptingIntegerKey *pUVar9;
  TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *pTVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  UMovieSceneScriptingIntegerKey *local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  undefined1 local_50 [4];
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  
  uVar12 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar7 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  if (pFVar7 == (FMovieSceneChannel *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get keys.",Error,
               (FName)0x0);
  }
  else {
    local_60 = (void *)0x0;
    local_58 = 0;
    local_70 = (void *)0x0;
    local_68 = 0;
    local_50[0] = 2;
    local_4c = 0;
    local_48 = 2;
    local_44 = 0;
    (**(code **)(pFVar7->_padding_ + 8))(pFVar7,local_50,&local_60,&local_70);
    uVar14 = uVar12;
    if (0 < (int)local_58) {
      do {
        pUVar8 = GetTransientPackageAsObject();
        pUVar9 = NewObject<UMovieSceneScriptingIntegerKey>(pUVar8);
        uVar13 = (uint)uVar14;
        uVar11 = 0;
        if ((int)uVar13 < (int)local_68) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar10;
        }
        *(undefined4 *)&pUVar9->field_0x28 = *(undefined4 *)((longlong)local_70 + uVar12);
        TMovieSceneChannelHandle<FMovieSceneChannel>::operator=
                  ((TMovieSceneChannelHandle<FMovieSceneChannel> *)&pUVar9->field_0x40,
                   (TMovieSceneChannelHandle<FMovieSceneChannel> *)param_1);
        *(int *)&pUVar9->field_0x2c = param_2.WeakPtr.ObjectIndex;
        *(int *)&pUVar9->field_0x30 = param_2.WeakPtr.ObjectSerialNumber;
        *(int *)&pUVar9->field_0x34 = param_3.WeakPtr.ObjectIndex;
        *(int *)&pUVar9->field_0x38 = param_3.WeakPtr.ObjectSerialNumber;
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
        local_78 = pUVar9;
        if (((pFVar2 <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 <
             pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar10;
        }
        iVar6 = __return_storage_ptr__->ArrayNum;
        if (iVar6 == __return_storage_ptr__->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        uVar14 = (ulonglong)(uVar13 + 1);
        __return_storage_ptr__->ArrayNum = iVar6 + 1;
        uVar12 = uVar12 + 4;
        *(UMovieSceneScriptingIntegerKey **)
         ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_78;
      } while ((int)(uVar13 + 1) < (int)local_58);
    }
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
    }
    if (local_60 != (void *)0x0) {
      FMemory::Free(local_60);
    }
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return __return_storage_ptr__;
}

// GetKeysInChannel @ 14c687ec0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> * __cdecl
TMovieSceneScriptingChannel<FMovieSceneObjectPathChannel,UMovieSceneScriptingObjectPathKey,FMovieSceneObjectPathChannelKeyValue>
::GetKeysInChannel(TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_>
                   *__return_storage_ptr__,
                  TMovieSceneChannelHandle<FMovieSceneObjectPathChannel> *param_1,
                  TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
                  TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FMovieSceneChannel *pFVar7;
  UObject *pUVar8;
  UMovieSceneScriptingObjectPathKey *pUVar9;
  TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *pTVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  UMovieSceneScriptingObjectPathKey *local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  undefined1 local_50 [4];
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  
  uVar12 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar7 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  if (pFVar7 == (FMovieSceneChannel *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get keys.",Error,
               (FName)0x0);
  }
  else {
    local_60 = (void *)0x0;
    local_58 = 0;
    local_70 = (void *)0x0;
    local_68 = 0;
    local_50[0] = 2;
    local_4c = 0;
    local_48 = 2;
    local_44 = 0;
    (**(code **)(pFVar7->_padding_ + 8))(pFVar7,local_50,&local_60,&local_70);
    uVar14 = uVar12;
    if (0 < (int)local_58) {
      do {
        pUVar8 = GetTransientPackageAsObject();
        pUVar9 = NewObject<UMovieSceneScriptingObjectPathKey>(pUVar8);
        uVar13 = (uint)uVar14;
        uVar11 = 0;
        if ((int)uVar13 < (int)local_68) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar10;
        }
        *(undefined4 *)&pUVar9->field_0x28 = *(undefined4 *)((longlong)local_70 + uVar12);
        TMovieSceneChannelHandle<FMovieSceneChannel>::operator=
                  ((TMovieSceneChannelHandle<FMovieSceneChannel> *)&pUVar9->field_0x40,
                   (TMovieSceneChannelHandle<FMovieSceneChannel> *)param_1);
        *(int *)&pUVar9->field_0x2c = param_2.WeakPtr.ObjectIndex;
        *(int *)&pUVar9->field_0x30 = param_2.WeakPtr.ObjectSerialNumber;
        *(int *)&pUVar9->field_0x34 = param_3.WeakPtr.ObjectIndex;
        *(int *)&pUVar9->field_0x38 = param_3.WeakPtr.ObjectSerialNumber;
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
        local_78 = pUVar9;
        if (((pFVar2 <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 <
             pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar10;
        }
        iVar6 = __return_storage_ptr__->ArrayNum;
        if (iVar6 == __return_storage_ptr__->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        uVar14 = (ulonglong)(uVar13 + 1);
        __return_storage_ptr__->ArrayNum = iVar6 + 1;
        uVar12 = uVar12 + 4;
        *(UMovieSceneScriptingObjectPathKey **)
         ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_78;
      } while ((int)(uVar13 + 1) < (int)local_58);
    }
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
    }
    if (local_60 != (void *)0x0) {
      FMemory::Free(local_60);
    }
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return __return_storage_ptr__;
}

// GetKeysInChannelByIndex @ 14c688130

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> * __cdecl
TMovieSceneScriptingChannel<FMovieSceneDoubleChannel,UMovieSceneScriptingDoubleAsFloatKey,double>::
GetKeysInChannelByIndex
          (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TMovieSceneChannelHandle<FMovieSceneDoubleChannel> *param_1,
          TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
          TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FMovieSceneChannel *pFVar9;
  UObject *pUVar10;
  UMovieSceneScriptingDoubleAsFloatKey *pUVar11;
  TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *pTVar12;
  uint uVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [8];
  TMovieSceneChannelHandle<FMovieSceneDoubleChannel> *local_res10;
  UMovieSceneScriptingDoubleAsFloatKey *local_90;
  undefined8 local_88;
  undefined8 local_80;
  FScriptContainerElement *local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  undefined1 local_50 [4];
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res10 = param_1;
  pFVar9 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  if (pFVar9 == (FMovieSceneChannel *)0x0) {
    local_80 = 0;
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get keys.",Error,
               (FName)0x0);
  }
  else {
    local_60 = (void *)0x0;
    local_58 = 0;
    local_70 = (void *)0x0;
    local_68 = 0;
    local_50[0] = 2;
    local_4c = 0;
    local_48 = 2;
    local_44 = 0;
    (**(code **)(pFVar9->_padding_ + 8))(pFVar9,local_50,&local_60,&local_70);
    uVar2 = param_4->ArrayNum;
    uVar14 = (ulonglong)(int)uVar2;
    pFVar15 = (param_4->AllocatorInstance).Data;
    local_78 = pFVar15 + uVar14 * 4;
    while( true ) {
      pFVar4 = local_78;
      if (param_4->ArrayNum != (int)uVar14) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar15 == pFVar4) break;
      uVar3 = *(uint *)pFVar15;
      if (((int)uVar3 < 0) || ((int)local_58 <= (int)uVar3)) {
        local_88 = 0;
        FFrame::KismetExecutionMessage
                  (L"Invalid index for MovieSceneScriptingChannel, failed to get keys by index.",
                   Error,(FName)0x0);
        pFVar15 = pFVar15 + 4;
        uVar14 = (ulonglong)uVar2;
      }
      else {
        pUVar10 = GetTransientPackageAsObject();
        pUVar11 = NewObject<UMovieSceneScriptingDoubleAsFloatKey>(pUVar10);
        uVar13 = 0;
        if ((int)uVar3 < (int)local_68) {
          uVar13 = ~uVar3 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar12 = (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar12;
        }
        *(undefined4 *)&pUVar11->field_0x28 =
             *(undefined4 *)((longlong)local_70 + (longlong)(int)uVar3 * 4);
        TMovieSceneChannelHandle<FMovieSceneChannel>::operator=
                  ((TMovieSceneChannelHandle<FMovieSceneChannel> *)&pUVar11->field_0x40,
                   (TMovieSceneChannelHandle<FMovieSceneChannel> *)local_res10);
        *(int *)&pUVar11->field_0x2c = param_2.WeakPtr.ObjectIndex;
        *(int *)&pUVar11->field_0x30 = param_2.WeakPtr.ObjectSerialNumber;
        *(int *)&pUVar11->field_0x34 = param_3.WeakPtr.ObjectIndex;
        *(int *)&pUVar11->field_0x38 = param_3.WeakPtr.ObjectSerialNumber;
        pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
        local_90 = pUVar11;
        if (((pFVar4 <= (FScriptContainerElement *)&local_90) &&
            ((FScriptContainerElement *)&local_90 <
             pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar12 = (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar12;
        }
        iVar8 = __return_storage_ptr__->ArrayNum;
        if (iVar8 == __return_storage_ptr__->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar8 + 1;
        pFVar15 = pFVar15 + 4;
        *(UMovieSceneScriptingDoubleAsFloatKey **)
         ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_90;
        uVar14 = (ulonglong)uVar2;
      }
    }
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
    }
    param_1 = local_res10;
    if (local_60 != (void *)0x0) {
      FMemory::Free(local_60);
      param_1 = local_res10;
    }
  }
  plVar5 = *(longlong **)&param_1->field_0x8;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return __return_storage_ptr__;
}

// GetKeysInChannelByIndex @ 14c688400

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> * __cdecl
TMovieSceneScriptingChannel<FMovieSceneEventChannel,UMovieSceneScriptingEventKey,FMovieSceneEvent>::
GetKeysInChannelByIndex
          (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TMovieSceneChannelHandle<FMovieSceneEventChannel> *param_1,
          TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
          TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FMovieSceneChannel *pFVar9;
  UObject *pUVar10;
  UMovieSceneScriptingEventKey *pUVar11;
  TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *pTVar12;
  uint uVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [8];
  TMovieSceneChannelHandle<FMovieSceneEventChannel> *local_res10;
  UMovieSceneScriptingEventKey *local_90;
  undefined8 local_88;
  undefined8 local_80;
  FScriptContainerElement *local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  undefined1 local_50 [4];
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res10 = param_1;
  pFVar9 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  if (pFVar9 == (FMovieSceneChannel *)0x0) {
    local_80 = 0;
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get keys.",Error,
               (FName)0x0);
  }
  else {
    local_60 = (void *)0x0;
    local_58 = 0;
    local_70 = (void *)0x0;
    local_68 = 0;
    local_50[0] = 2;
    local_4c = 0;
    local_48 = 2;
    local_44 = 0;
    (**(code **)(pFVar9->_padding_ + 8))(pFVar9,local_50,&local_60,&local_70);
    uVar2 = param_4->ArrayNum;
    uVar14 = (ulonglong)(int)uVar2;
    pFVar15 = (param_4->AllocatorInstance).Data;
    local_78 = pFVar15 + uVar14 * 4;
    while( true ) {
      pFVar4 = local_78;
      if (param_4->ArrayNum != (int)uVar14) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar15 == pFVar4) break;
      uVar3 = *(uint *)pFVar15;
      if (((int)uVar3 < 0) || ((int)local_58 <= (int)uVar3)) {
        local_88 = 0;
        FFrame::KismetExecutionMessage
                  (L"Invalid index for MovieSceneScriptingChannel, failed to get keys by index.",
                   Error,(FName)0x0);
        pFVar15 = pFVar15 + 4;
        uVar14 = (ulonglong)uVar2;
      }
      else {
        pUVar10 = GetTransientPackageAsObject();
        pUVar11 = NewObject<UMovieSceneScriptingEventKey>(pUVar10);
        uVar13 = 0;
        if ((int)uVar3 < (int)local_68) {
          uVar13 = ~uVar3 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar12 = (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar12;
        }
        *(undefined4 *)&pUVar11->field_0x28 =
             *(undefined4 *)((longlong)local_70 + (longlong)(int)uVar3 * 4);
        TMovieSceneChannelHandle<FMovieSceneChannel>::operator=
                  ((TMovieSceneChannelHandle<FMovieSceneChannel> *)&pUVar11->field_0x40,
                   (TMovieSceneChannelHandle<FMovieSceneChannel> *)local_res10);
        *(int *)&pUVar11->field_0x2c = param_2.WeakPtr.ObjectIndex;
        *(int *)&pUVar11->field_0x30 = param_2.WeakPtr.ObjectSerialNumber;
        *(int *)&pUVar11->field_0x34 = param_3.WeakPtr.ObjectIndex;
        *(int *)&pUVar11->field_0x38 = param_3.WeakPtr.ObjectSerialNumber;
        pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
        local_90 = pUVar11;
        if (((pFVar4 <= (FScriptContainerElement *)&local_90) &&
            ((FScriptContainerElement *)&local_90 <
             pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar12 = (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar12;
        }
        iVar8 = __return_storage_ptr__->ArrayNum;
        if (iVar8 == __return_storage_ptr__->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar8 + 1;
        pFVar15 = pFVar15 + 4;
        *(UMovieSceneScriptingEventKey **)
         ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_90;
        uVar14 = (ulonglong)uVar2;
      }
    }
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
    }
    param_1 = local_res10;
    if (local_60 != (void *)0x0) {
      FMemory::Free(local_60);
      param_1 = local_res10;
    }
  }
  plVar5 = *(longlong **)&param_1->field_0x8;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return __return_storage_ptr__;
}

// GetKeysInChannelByIndex @ 14c6886d0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> * __cdecl
TMovieSceneScriptingChannel<FMovieSceneFloatChannel,UMovieSceneScriptingActualFloatKey,float>::
GetKeysInChannelByIndex
          (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TMovieSceneChannelHandle<FMovieSceneFloatChannel> *param_1,
          TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
          TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FMovieSceneChannel *pFVar9;
  UObject *pUVar10;
  UMovieSceneScriptingActualFloatKey *pUVar11;
  TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *pTVar12;
  uint uVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [8];
  TMovieSceneChannelHandle<FMovieSceneFloatChannel> *local_res10;
  UMovieSceneScriptingActualFloatKey *local_90;
  undefined8 local_88;
  undefined8 local_80;
  FScriptContainerElement *local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  undefined1 local_50 [4];
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res10 = param_1;
  pFVar9 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  if (pFVar9 == (FMovieSceneChannel *)0x0) {
    local_80 = 0;
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get keys.",Error,
               (FName)0x0);
  }
  else {
    local_60 = (void *)0x0;
    local_58 = 0;
    local_70 = (void *)0x0;
    local_68 = 0;
    local_50[0] = 2;
    local_4c = 0;
    local_48 = 2;
    local_44 = 0;
    (**(code **)(pFVar9->_padding_ + 8))(pFVar9,local_50,&local_60,&local_70);
    uVar2 = param_4->ArrayNum;
    uVar14 = (ulonglong)(int)uVar2;
    pFVar15 = (param_4->AllocatorInstance).Data;
    local_78 = pFVar15 + uVar14 * 4;
    while( true ) {
      pFVar4 = local_78;
      if (param_4->ArrayNum != (int)uVar14) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar15 == pFVar4) break;
      uVar3 = *(uint *)pFVar15;
      if (((int)uVar3 < 0) || ((int)local_58 <= (int)uVar3)) {
        local_88 = 0;
        FFrame::KismetExecutionMessage
                  (L"Invalid index for MovieSceneScriptingChannel, failed to get keys by index.",
                   Error,(FName)0x0);
        pFVar15 = pFVar15 + 4;
        uVar14 = (ulonglong)uVar2;
      }
      else {
        pUVar10 = GetTransientPackageAsObject();
        pUVar11 = NewObject<UMovieSceneScriptingActualFloatKey>(pUVar10);
        uVar13 = 0;
        if ((int)uVar3 < (int)local_68) {
          uVar13 = ~uVar3 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar12 = (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar12;
        }
        *(undefined4 *)&pUVar11->field_0x28 =
             *(undefined4 *)((longlong)local_70 + (longlong)(int)uVar3 * 4);
        TMovieSceneChannelHandle<FMovieSceneChannel>::operator=
                  ((TMovieSceneChannelHandle<FMovieSceneChannel> *)&pUVar11->field_0x40,
                   (TMovieSceneChannelHandle<FMovieSceneChannel> *)local_res10);
        *(int *)&pUVar11->field_0x2c = param_2.WeakPtr.ObjectIndex;
        *(int *)&pUVar11->field_0x30 = param_2.WeakPtr.ObjectSerialNumber;
        *(int *)&pUVar11->field_0x34 = param_3.WeakPtr.ObjectIndex;
        *(int *)&pUVar11->field_0x38 = param_3.WeakPtr.ObjectSerialNumber;
        pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
        local_90 = pUVar11;
        if (((pFVar4 <= (FScriptContainerElement *)&local_90) &&
            ((FScriptContainerElement *)&local_90 <
             pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar12 = (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar12;
        }
        iVar8 = __return_storage_ptr__->ArrayNum;
        if (iVar8 == __return_storage_ptr__->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar8 + 1;
        pFVar15 = pFVar15 + 4;
        *(UMovieSceneScriptingActualFloatKey **)
         ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_90;
        uVar14 = (ulonglong)uVar2;
      }
    }
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
    }
    param_1 = local_res10;
    if (local_60 != (void *)0x0) {
      FMemory::Free(local_60);
      param_1 = local_res10;
    }
  }
  plVar5 = *(longlong **)&param_1->field_0x8;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return __return_storage_ptr__;
}

// GetKeysInChannelByIndex @ 14c6889a0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> * __cdecl
TMovieSceneScriptingChannel<FMovieSceneIntegerChannel,UMovieSceneScriptingIntegerKey,int>::
GetKeysInChannelByIndex
          (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TMovieSceneChannelHandle<FMovieSceneIntegerChannel> *param_1,
          TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
          TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FMovieSceneChannel *pFVar9;
  UObject *pUVar10;
  UMovieSceneScriptingIntegerKey *pUVar11;
  TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *pTVar12;
  uint uVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [8];
  TMovieSceneChannelHandle<FMovieSceneIntegerChannel> *local_res10;
  UMovieSceneScriptingIntegerKey *local_90;
  undefined8 local_88;
  undefined8 local_80;
  FScriptContainerElement *local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  undefined1 local_50 [4];
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res10 = param_1;
  pFVar9 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  if (pFVar9 == (FMovieSceneChannel *)0x0) {
    local_80 = 0;
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get keys.",Error,
               (FName)0x0);
  }
  else {
    local_60 = (void *)0x0;
    local_58 = 0;
    local_70 = (void *)0x0;
    local_68 = 0;
    local_50[0] = 2;
    local_4c = 0;
    local_48 = 2;
    local_44 = 0;
    (**(code **)(pFVar9->_padding_ + 8))(pFVar9,local_50,&local_60,&local_70);
    uVar2 = param_4->ArrayNum;
    uVar14 = (ulonglong)(int)uVar2;
    pFVar15 = (param_4->AllocatorInstance).Data;
    local_78 = pFVar15 + uVar14 * 4;
    while( true ) {
      pFVar4 = local_78;
      if (param_4->ArrayNum != (int)uVar14) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar15 == pFVar4) break;
      uVar3 = *(uint *)pFVar15;
      if (((int)uVar3 < 0) || ((int)local_58 <= (int)uVar3)) {
        local_88 = 0;
        FFrame::KismetExecutionMessage
                  (L"Invalid index for MovieSceneScriptingChannel, failed to get keys by index.",
                   Error,(FName)0x0);
        pFVar15 = pFVar15 + 4;
        uVar14 = (ulonglong)uVar2;
      }
      else {
        pUVar10 = GetTransientPackageAsObject();
        pUVar11 = NewObject<UMovieSceneScriptingIntegerKey>(pUVar10);
        uVar13 = 0;
        if ((int)uVar3 < (int)local_68) {
          uVar13 = ~uVar3 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar12 = (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar12;
        }
        *(undefined4 *)&pUVar11->field_0x28 =
             *(undefined4 *)((longlong)local_70 + (longlong)(int)uVar3 * 4);
        TMovieSceneChannelHandle<FMovieSceneChannel>::operator=
                  ((TMovieSceneChannelHandle<FMovieSceneChannel> *)&pUVar11->field_0x40,
                   (TMovieSceneChannelHandle<FMovieSceneChannel> *)local_res10);
        *(int *)&pUVar11->field_0x2c = param_2.WeakPtr.ObjectIndex;
        *(int *)&pUVar11->field_0x30 = param_2.WeakPtr.ObjectSerialNumber;
        *(int *)&pUVar11->field_0x34 = param_3.WeakPtr.ObjectIndex;
        *(int *)&pUVar11->field_0x38 = param_3.WeakPtr.ObjectSerialNumber;
        pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
        local_90 = pUVar11;
        if (((pFVar4 <= (FScriptContainerElement *)&local_90) &&
            ((FScriptContainerElement *)&local_90 <
             pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar12 = (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar12;
        }
        iVar8 = __return_storage_ptr__->ArrayNum;
        if (iVar8 == __return_storage_ptr__->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar8 + 1;
        pFVar15 = pFVar15 + 4;
        *(UMovieSceneScriptingIntegerKey **)
         ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_90;
        uVar14 = (ulonglong)uVar2;
      }
    }
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
    }
    param_1 = local_res10;
    if (local_60 != (void *)0x0) {
      FMemory::Free(local_60);
      param_1 = local_res10;
    }
  }
  plVar5 = *(longlong **)&param_1->field_0x8;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return __return_storage_ptr__;
}

// GetKeysInChannelByIndex @ 14c688c70

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> * __cdecl
TMovieSceneScriptingChannel<FMovieSceneObjectPathChannel,UMovieSceneScriptingObjectPathKey,FMovieSceneObjectPathChannelKeyValue>
::GetKeysInChannelByIndex
          (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TMovieSceneChannelHandle<FMovieSceneObjectPathChannel> *param_1,
          TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
          TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FMovieSceneChannel *pFVar9;
  UObject *pUVar10;
  UMovieSceneScriptingObjectPathKey *pUVar11;
  TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *pTVar12;
  uint uVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [8];
  TMovieSceneChannelHandle<FMovieSceneObjectPathChannel> *local_res10;
  UMovieSceneScriptingObjectPathKey *local_90;
  undefined8 local_88;
  undefined8 local_80;
  FScriptContainerElement *local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  undefined1 local_50 [4];
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res10 = param_1;
  pFVar9 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  if (pFVar9 == (FMovieSceneChannel *)0x0) {
    local_80 = 0;
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get keys.",Error,
               (FName)0x0);
  }
  else {
    local_60 = (void *)0x0;
    local_58 = 0;
    local_70 = (void *)0x0;
    local_68 = 0;
    local_50[0] = 2;
    local_4c = 0;
    local_48 = 2;
    local_44 = 0;
    (**(code **)(pFVar9->_padding_ + 8))(pFVar9,local_50,&local_60,&local_70);
    uVar2 = param_4->ArrayNum;
    uVar14 = (ulonglong)(int)uVar2;
    pFVar15 = (param_4->AllocatorInstance).Data;
    local_78 = pFVar15 + uVar14 * 4;
    while( true ) {
      pFVar4 = local_78;
      if (param_4->ArrayNum != (int)uVar14) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar15 == pFVar4) break;
      uVar3 = *(uint *)pFVar15;
      if (((int)uVar3 < 0) || ((int)local_58 <= (int)uVar3)) {
        local_88 = 0;
        FFrame::KismetExecutionMessage
                  (L"Invalid index for MovieSceneScriptingChannel, failed to get keys by index.",
                   Error,(FName)0x0);
        pFVar15 = pFVar15 + 4;
        uVar14 = (ulonglong)uVar2;
      }
      else {
        pUVar10 = GetTransientPackageAsObject();
        pUVar11 = NewObject<UMovieSceneScriptingObjectPathKey>(pUVar10);
        uVar13 = 0;
        if ((int)uVar3 < (int)local_68) {
          uVar13 = ~uVar3 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar12 = (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar12;
        }
        *(undefined4 *)&pUVar11->field_0x28 =
             *(undefined4 *)((longlong)local_70 + (longlong)(int)uVar3 * 4);
        TMovieSceneChannelHandle<FMovieSceneChannel>::operator=
                  ((TMovieSceneChannelHandle<FMovieSceneChannel> *)&pUVar11->field_0x40,
                   (TMovieSceneChannelHandle<FMovieSceneChannel> *)local_res10);
        *(int *)&pUVar11->field_0x2c = param_2.WeakPtr.ObjectIndex;
        *(int *)&pUVar11->field_0x30 = param_2.WeakPtr.ObjectSerialNumber;
        *(int *)&pUVar11->field_0x34 = param_3.WeakPtr.ObjectIndex;
        *(int *)&pUVar11->field_0x38 = param_3.WeakPtr.ObjectSerialNumber;
        pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
        local_90 = pUVar11;
        if (((pFVar4 <= (FScriptContainerElement *)&local_90) &&
            ((FScriptContainerElement *)&local_90 <
             pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar12 = (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar12;
        }
        iVar8 = __return_storage_ptr__->ArrayNum;
        if (iVar8 == __return_storage_ptr__->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar8 + 1;
        pFVar15 = pFVar15 + 4;
        *(UMovieSceneScriptingObjectPathKey **)
         ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_90;
        uVar14 = (ulonglong)uVar2;
      }
    }
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
    }
    param_1 = local_res10;
    if (local_60 != (void *)0x0) {
      FMemory::Free(local_60);
      param_1 = local_res10;
    }
  }
  plVar5 = *(longlong **)&param_1->field_0x8;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return __return_storage_ptr__;
}

// TransformKeysInChannel @ 14c68c6a0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
TMovieSceneScriptingChannel<FMovieSceneDoubleChannel,UMovieSceneScriptingDoubleAsFloatKey,double>::
TransformKeysInChannel
          (TMovieSceneChannelHandle<FMovieSceneDoubleChannel> *param_1,
          TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
          TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3,FFrameNumber param_4,
          double param_5,FFrameNumber param_6,FSequencerScriptingRange *param_7,
          EMovieSceneTimeUnit param_8)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  FFrameRate FVar5;
  FFrameRate FVar6;
  TRangeBound<FFrameNumber> TVar7;
  TRangeBound<FFrameNumber> TVar8;
  FFrameNumber FVar9;
  bool bVar10;
  FFrameNumber *pFVar11;
  TRange<FFrameNumber> *pTVar12;
  FMovieSceneChannel *pFVar13;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  TRange<FFrameNumber> local_c8;
  int local_b8;
  float local_b4;
  int local_b0;
  float local_ac;
  UMovieSceneSequence local_a8;
  TRange<FFrameNumber> local_38;
  
  local_res10 = param_2.WeakPtr;
  local_res18 = param_3.WeakPtr;
  FWeakObjectPtr::Get(&local_res10);
  UMovieSceneSequenceExtensions::GetTickResolution((UMovieSceneSequence *)&local_a8._padding_);
  FSequencerScriptingRange::ToNative(param_7,&local_c8,(FFrameRate)local_a8._padding_);
  if ((local_c8.LowerBound.Type.Value.Value != '\x02') && (local_c8.UpperBound.Type.Value != '\x02')
     ) {
    FVar9.Value = local_c8.UpperBound.Value.Value;
    if ((local_c8.LowerBound.Type.Value.Value == '\x02') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type != ERangeBoundTypes::Open",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                            ,99,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (local_c8.LowerBound.Value.Value <= FVar9.Value) {
      pFVar11 = TRangeBound<FFrameNumber>::GetValue(&local_c8.UpperBound);
      iVar2 = pFVar11->Value;
      pFVar11 = TRangeBound<FFrameNumber>::GetValue(&local_c8.LowerBound);
      if ((pFVar11->Value != iVar2) ||
         ((local_c8.LowerBound.Type.Value != '\0' && (local_c8.UpperBound.Type.Value != '\0'))))
      goto LAB_14c68c79c;
    }
    local_a8._padding_._4_4_ = 0;
    local_a8._padding_._0_4_ = CONCAT31(local_a8._padding_._1_3_,2);
    local_c8.LowerBound.Value.Value = 0;
    local_c8.LowerBound._0_4_ = (uint)local_a8._padding_;
    local_a8._padding_._4_4_ = 0;
    local_a8._padding_._0_4_ = CONCAT31(local_a8._padding_._1_3_,2);
    local_c8.UpperBound.Value.Value = 0;
    local_c8.UpperBound._0_4_ = (uint)local_a8._padding_;
  }
LAB_14c68c79c:
  if (param_8 == DisplayRate) {
    FWeakObjectPtr::Get(&local_res10);
    UMovieSceneSequenceExtensions::GetDisplayRate(&local_a8);
    FWeakObjectPtr::Get(&local_res10);
    UMovieSceneSequenceExtensions::GetTickResolution((UMovieSceneSequence *)&local_a8._padding_);
    local_a8._padding_._4_4_ = 0;
    FVar5.Denominator = 0;
    FVar5.Numerator = param_4.Value;
    local_a8._padding_._0_4_ = param_4.Value;
    ConvertFrameTime((FFrameTime)&local_b8,FVar5,(FFrameRate)local_a8._padding_);
    param_4.Value = local_b8;
    if (__real_3f000000 <= local_b4) {
      param_4.Value = local_b8 + 1;
    }
    local_a8._padding_._0_4_ = param_6.Value;
    local_a8._padding_._4_4_ = 0;
    FVar6.Denominator = 0;
    FVar6.Numerator = param_6.Value;
    ConvertFrameTime((FFrameTime)&local_b0,FVar6,(FFrameRate)local_a8._padding_);
    param_6.Value = local_b0;
    if (__real_3f000000 <= local_ac) {
      param_6.Value = local_b0 + 1;
    }
    (param_7->InternalRate).Numerator = (undefined4)local_a8._padding_;
    (param_7->InternalRate).Denominator = local_a8._padding_._4_4_;
    pTVar12 = FSequencerScriptingRange::ToNative(param_7,&local_38,(FFrameRate)local_a8._padding_);
    local_c8.LowerBound = pTVar12->LowerBound;
    local_c8.UpperBound = pTVar12->UpperBound;
  }
  bVar10 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar10) {
    FWeakObjectPtr::Get(&local_res18);
  }
  pFVar13 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  TVar8 = local_c8.UpperBound;
  TVar7 = local_c8.LowerBound;
  if (pFVar13 == (FMovieSceneChannel *)0x0) {
    local_a8._padding_ = 0;
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to transform keys in channel."
               ,Error,(FName)0x0);
  }
  else {
    local_a8._padding_ =
         (longlong)
         &
         ___7FTransformRetiming___TMovieSceneScriptingChannel_UFMovieSceneDoubleChannel__VUMovieSceneScriptingDoubleAsFloatKey__N__6B_
    ;
    local_a8._padding_ = (longlong)param_5;
    local_a8._padding_._4_1_ = local_c8.LowerBound.Type.Value;
    local_a8._padding_._5_3_ = local_c8.LowerBound._1_3_;
    local_a8.CompiledData.field0_0x0._0_4_ = local_c8.LowerBound.Value.Value;
    local_a8.CompiledData.field0_0x0._4_4_ = local_c8.UpperBound._0_4_;
    local_a8.DefaultCompletionMode = (undefined1)local_c8.UpperBound.Value.Value;
    local_a8.bParentContextsAreSignificant = (bool)local_c8.UpperBound.Value.Value._1_1_;
    local_a8.bPlayableDirectly = (bool)local_c8.UpperBound.Value.Value._2_1_;
    local_a8.SequenceFlags = local_c8.UpperBound.Value.Value._3_1_;
    local_c8.LowerBound = TVar7;
    local_c8.UpperBound = TVar8;
    local_a8._padding_._0_4_ = param_4.Value;
    local_a8._padding_._0_4_ = param_6.Value;
    (**(code **)(pFVar13->_padding_ + 0x40))(pFVar13,&local_a8._padding_);
    local_a8._padding_ = (longlong)&___7IRetimingInterface_MovieScene_UE__6B_;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}

// TransformKeysInChannel @ 14c68c910

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
TMovieSceneScriptingChannel<FMovieSceneEventChannel,UMovieSceneScriptingEventKey,FMovieSceneEvent>::
TransformKeysInChannel
          (TMovieSceneChannelHandle<FMovieSceneEventChannel> *param_1,
          TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
          TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3,FFrameNumber param_4,
          double param_5,FFrameNumber param_6,FSequencerScriptingRange *param_7,
          EMovieSceneTimeUnit param_8)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  FFrameRate FVar5;
  FFrameRate FVar6;
  TRangeBound<FFrameNumber> TVar7;
  TRangeBound<FFrameNumber> TVar8;
  FFrameNumber FVar9;
  bool bVar10;
  FFrameNumber *pFVar11;
  TRange<FFrameNumber> *pTVar12;
  FMovieSceneChannel *pFVar13;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  TRange<FFrameNumber> local_c8;
  int local_b8;
  float local_b4;
  int local_b0;
  float local_ac;
  UMovieSceneSequence local_a8;
  TRange<FFrameNumber> local_38;
  
  local_res10 = param_2.WeakPtr;
  local_res18 = param_3.WeakPtr;
  FWeakObjectPtr::Get(&local_res10);
  UMovieSceneSequenceExtensions::GetTickResolution((UMovieSceneSequence *)&local_a8._padding_);
  FSequencerScriptingRange::ToNative(param_7,&local_c8,(FFrameRate)local_a8._padding_);
  if ((local_c8.LowerBound.Type.Value.Value != '\x02') && (local_c8.UpperBound.Type.Value != '\x02')
     ) {
    FVar9.Value = local_c8.UpperBound.Value.Value;
    if ((local_c8.LowerBound.Type.Value.Value == '\x02') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type != ERangeBoundTypes::Open",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                            ,99,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (local_c8.LowerBound.Value.Value <= FVar9.Value) {
      pFVar11 = TRangeBound<FFrameNumber>::GetValue(&local_c8.UpperBound);
      iVar2 = pFVar11->Value;
      pFVar11 = TRangeBound<FFrameNumber>::GetValue(&local_c8.LowerBound);
      if ((pFVar11->Value != iVar2) ||
         ((local_c8.LowerBound.Type.Value != '\0' && (local_c8.UpperBound.Type.Value != '\0'))))
      goto LAB_14c68ca0c;
    }
    local_a8._padding_._4_4_ = 0;
    local_a8._padding_._0_4_ = CONCAT31(local_a8._padding_._1_3_,2);
    local_c8.LowerBound.Value.Value = 0;
    local_c8.LowerBound._0_4_ = (uint)local_a8._padding_;
    local_a8._padding_._4_4_ = 0;
    local_a8._padding_._0_4_ = CONCAT31(local_a8._padding_._1_3_,2);
    local_c8.UpperBound.Value.Value = 0;
    local_c8.UpperBound._0_4_ = (uint)local_a8._padding_;
  }
LAB_14c68ca0c:
  if (param_8 == DisplayRate) {
    FWeakObjectPtr::Get(&local_res10);
    UMovieSceneSequenceExtensions::GetDisplayRate(&local_a8);
    FWeakObjectPtr::Get(&local_res10);
    UMovieSceneSequenceExtensions::GetTickResolution((UMovieSceneSequence *)&local_a8._padding_);
    local_a8._padding_._4_4_ = 0;
    FVar5.Denominator = 0;
    FVar5.Numerator = param_4.Value;
    local_a8._padding_._0_4_ = param_4.Value;
    ConvertFrameTime((FFrameTime)&local_b8,FVar5,(FFrameRate)local_a8._padding_);
    param_4.Value = local_b8;
    if (__real_3f000000 <= local_b4) {
      param_4.Value = local_b8 + 1;
    }
    local_a8._padding_._0_4_ = param_6.Value;
    local_a8._padding_._4_4_ = 0;
    FVar6.Denominator = 0;
    FVar6.Numerator = param_6.Value;
    ConvertFrameTime((FFrameTime)&local_b0,FVar6,(FFrameRate)local_a8._padding_);
    param_6.Value = local_b0;
    if (__real_3f000000 <= local_ac) {
      param_6.Value = local_b0 + 1;
    }
    (param_7->InternalRate).Numerator = (undefined4)local_a8._padding_;
    (param_7->InternalRate).Denominator = local_a8._padding_._4_4_;
    pTVar12 = FSequencerScriptingRange::ToNative(param_7,&local_38,(FFrameRate)local_a8._padding_);
    local_c8.LowerBound = pTVar12->LowerBound;
    local_c8.UpperBound = pTVar12->UpperBound;
  }
  bVar10 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar10) {
    FWeakObjectPtr::Get(&local_res18);
  }
  pFVar13 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  TVar8 = local_c8.UpperBound;
  TVar7 = local_c8.LowerBound;
  if (pFVar13 == (FMovieSceneChannel *)0x0) {
    local_a8._padding_ = 0;
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to transform keys in channel."
               ,Error,(FName)0x0);
  }
  else {
    local_a8._padding_ =
         (longlong)
         &
         ___7FTransformRetiming___TMovieSceneScriptingChannel_UFMovieSceneEventChannel__VUMovieSceneScriptingEventKey__UFMovieSceneEvent____6B_
    ;
    local_a8._padding_ = (longlong)param_5;
    local_a8._padding_._4_1_ = local_c8.LowerBound.Type.Value;
    local_a8._padding_._5_3_ = local_c8.LowerBound._1_3_;
    local_a8.CompiledData.field0_0x0._0_4_ = local_c8.LowerBound.Value.Value;
    local_a8.CompiledData.field0_0x0._4_4_ = local_c8.UpperBound._0_4_;
    local_a8.DefaultCompletionMode = (undefined1)local_c8.UpperBound.Value.Value;
    local_a8.bParentContextsAreSignificant = (bool)local_c8.UpperBound.Value.Value._1_1_;
    local_a8.bPlayableDirectly = (bool)local_c8.UpperBound.Value.Value._2_1_;
    local_a8.SequenceFlags = local_c8.UpperBound.Value.Value._3_1_;
    local_c8.LowerBound = TVar7;
    local_c8.UpperBound = TVar8;
    local_a8._padding_._0_4_ = param_4.Value;
    local_a8._padding_._0_4_ = param_6.Value;
    (**(code **)(pFVar13->_padding_ + 0x40))(pFVar13,&local_a8._padding_);
    local_a8._padding_ = (longlong)&___7IRetimingInterface_MovieScene_UE__6B_;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}

// TransformKeysInChannel @ 14c68cb80

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
TMovieSceneScriptingChannel<FMovieSceneFloatChannel,UMovieSceneScriptingActualFloatKey,float>::
TransformKeysInChannel
          (TMovieSceneChannelHandle<FMovieSceneFloatChannel> *param_1,
          TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
          TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3,FFrameNumber param_4,
          double param_5,FFrameNumber param_6,FSequencerScriptingRange *param_7,
          EMovieSceneTimeUnit param_8)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  FFrameRate FVar5;
  FFrameRate FVar6;
  TRangeBound<FFrameNumber> TVar7;
  TRangeBound<FFrameNumber> TVar8;
  FFrameNumber FVar9;
  bool bVar10;
  FFrameNumber *pFVar11;
  TRange<FFrameNumber> *pTVar12;
  FMovieSceneChannel *pFVar13;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  TRange<FFrameNumber> local_c8;
  int local_b8;
  float local_b4;
  int local_b0;
  float local_ac;
  UMovieSceneSequence local_a8;
  TRange<FFrameNumber> local_38;
  
  local_res10 = param_2.WeakPtr;
  local_res18 = param_3.WeakPtr;
  FWeakObjectPtr::Get(&local_res10);
  UMovieSceneSequenceExtensions::GetTickResolution((UMovieSceneSequence *)&local_a8._padding_);
  FSequencerScriptingRange::ToNative(param_7,&local_c8,(FFrameRate)local_a8._padding_);
  if ((local_c8.LowerBound.Type.Value.Value != '\x02') && (local_c8.UpperBound.Type.Value != '\x02')
     ) {
    FVar9.Value = local_c8.UpperBound.Value.Value;
    if ((local_c8.LowerBound.Type.Value.Value == '\x02') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type != ERangeBoundTypes::Open",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                            ,99,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (local_c8.LowerBound.Value.Value <= FVar9.Value) {
      pFVar11 = TRangeBound<FFrameNumber>::GetValue(&local_c8.UpperBound);
      iVar2 = pFVar11->Value;
      pFVar11 = TRangeBound<FFrameNumber>::GetValue(&local_c8.LowerBound);
      if ((pFVar11->Value != iVar2) ||
         ((local_c8.LowerBound.Type.Value != '\0' && (local_c8.UpperBound.Type.Value != '\0'))))
      goto LAB_14c68cc7c;
    }
    local_a8._padding_._4_4_ = 0;
    local_a8._padding_._0_4_ = CONCAT31(local_a8._padding_._1_3_,2);
    local_c8.LowerBound.Value.Value = 0;
    local_c8.LowerBound._0_4_ = (uint)local_a8._padding_;
    local_a8._padding_._4_4_ = 0;
    local_a8._padding_._0_4_ = CONCAT31(local_a8._padding_._1_3_,2);
    local_c8.UpperBound.Value.Value = 0;
    local_c8.UpperBound._0_4_ = (uint)local_a8._padding_;
  }
LAB_14c68cc7c:
  if (param_8 == DisplayRate) {
    FWeakObjectPtr::Get(&local_res10);
    UMovieSceneSequenceExtensions::GetDisplayRate(&local_a8);
    FWeakObjectPtr::Get(&local_res10);
    UMovieSceneSequenceExtensions::GetTickResolution((UMovieSceneSequence *)&local_a8._padding_);
    local_a8._padding_._4_4_ = 0;
    FVar5.Denominator = 0;
    FVar5.Numerator = param_4.Value;
    local_a8._padding_._0_4_ = param_4.Value;
    ConvertFrameTime((FFrameTime)&local_b8,FVar5,(FFrameRate)local_a8._padding_);
    param_4.Value = local_b8;
    if (__real_3f000000 <= local_b4) {
      param_4.Value = local_b8 + 1;
    }
    local_a8._padding_._0_4_ = param_6.Value;
    local_a8._padding_._4_4_ = 0;
    FVar6.Denominator = 0;
    FVar6.Numerator = param_6.Value;
    ConvertFrameTime((FFrameTime)&local_b0,FVar6,(FFrameRate)local_a8._padding_);
    param_6.Value = local_b0;
    if (__real_3f000000 <= local_ac) {
      param_6.Value = local_b0 + 1;
    }
    (param_7->InternalRate).Numerator = (undefined4)local_a8._padding_;
    (param_7->InternalRate).Denominator = local_a8._padding_._4_4_;
    pTVar12 = FSequencerScriptingRange::ToNative(param_7,&local_38,(FFrameRate)local_a8._padding_);
    local_c8.LowerBound = pTVar12->LowerBound;
    local_c8.UpperBound = pTVar12->UpperBound;
  }
  bVar10 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar10) {
    FWeakObjectPtr::Get(&local_res18);
  }
  pFVar13 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  TVar8 = local_c8.UpperBound;
  TVar7 = local_c8.LowerBound;
  if (pFVar13 == (FMovieSceneChannel *)0x0) {
    local_a8._padding_ = 0;
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to transform keys in channel."
               ,Error,(FName)0x0);
  }
  else {
    local_a8._padding_ =
         (longlong)
         &
         ___7FTransformRetiming___TMovieSceneScriptingChannel_UFMovieSceneFloatChannel__VUMovieSceneScriptingActualFloatKey__M__6B_
    ;
    local_a8._padding_ = (longlong)param_5;
    local_a8._padding_._4_1_ = local_c8.LowerBound.Type.Value;
    local_a8._padding_._5_3_ = local_c8.LowerBound._1_3_;
    local_a8.CompiledData.field0_0x0._0_4_ = local_c8.LowerBound.Value.Value;
    local_a8.CompiledData.field0_0x0._4_4_ = local_c8.UpperBound._0_4_;
    local_a8.DefaultCompletionMode = (undefined1)local_c8.UpperBound.Value.Value;
    local_a8.bParentContextsAreSignificant = (bool)local_c8.UpperBound.Value.Value._1_1_;
    local_a8.bPlayableDirectly = (bool)local_c8.UpperBound.Value.Value._2_1_;
    local_a8.SequenceFlags = local_c8.UpperBound.Value.Value._3_1_;
    local_c8.LowerBound = TVar7;
    local_c8.UpperBound = TVar8;
    local_a8._padding_._0_4_ = param_4.Value;
    local_a8._padding_._0_4_ = param_6.Value;
    (**(code **)(pFVar13->_padding_ + 0x40))(pFVar13,&local_a8._padding_);
    local_a8._padding_ = (longlong)&___7IRetimingInterface_MovieScene_UE__6B_;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}

// TransformKeysInChannel @ 14c68cdf0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
TMovieSceneScriptingChannel<FMovieSceneIntegerChannel,UMovieSceneScriptingIntegerKey,int>::
TransformKeysInChannel
          (TMovieSceneChannelHandle<FMovieSceneIntegerChannel> *param_1,
          TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
          TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3,FFrameNumber param_4,
          double param_5,FFrameNumber param_6,FSequencerScriptingRange *param_7,
          EMovieSceneTimeUnit param_8)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  FFrameRate FVar5;
  FFrameRate FVar6;
  TRangeBound<FFrameNumber> TVar7;
  TRangeBound<FFrameNumber> TVar8;
  FFrameNumber FVar9;
  bool bVar10;
  FFrameNumber *pFVar11;
  TRange<FFrameNumber> *pTVar12;
  FMovieSceneChannel *pFVar13;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  TRange<FFrameNumber> local_c8;
  int local_b8;
  float local_b4;
  int local_b0;
  float local_ac;
  UMovieSceneSequence local_a8;
  TRange<FFrameNumber> local_38;
  
  local_res10 = param_2.WeakPtr;
  local_res18 = param_3.WeakPtr;
  FWeakObjectPtr::Get(&local_res10);
  UMovieSceneSequenceExtensions::GetTickResolution((UMovieSceneSequence *)&local_a8._padding_);
  FSequencerScriptingRange::ToNative(param_7,&local_c8,(FFrameRate)local_a8._padding_);
  if ((local_c8.LowerBound.Type.Value.Value != '\x02') && (local_c8.UpperBound.Type.Value != '\x02')
     ) {
    FVar9.Value = local_c8.UpperBound.Value.Value;
    if ((local_c8.LowerBound.Type.Value.Value == '\x02') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type != ERangeBoundTypes::Open",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                            ,99,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (local_c8.LowerBound.Value.Value <= FVar9.Value) {
      pFVar11 = TRangeBound<FFrameNumber>::GetValue(&local_c8.UpperBound);
      iVar2 = pFVar11->Value;
      pFVar11 = TRangeBound<FFrameNumber>::GetValue(&local_c8.LowerBound);
      if ((pFVar11->Value != iVar2) ||
         ((local_c8.LowerBound.Type.Value != '\0' && (local_c8.UpperBound.Type.Value != '\0'))))
      goto LAB_14c68ceec;
    }
    local_a8._padding_._4_4_ = 0;
    local_a8._padding_._0_4_ = CONCAT31(local_a8._padding_._1_3_,2);
    local_c8.LowerBound.Value.Value = 0;
    local_c8.LowerBound._0_4_ = (uint)local_a8._padding_;
    local_a8._padding_._4_4_ = 0;
    local_a8._padding_._0_4_ = CONCAT31(local_a8._padding_._1_3_,2);
    local_c8.UpperBound.Value.Value = 0;
    local_c8.UpperBound._0_4_ = (uint)local_a8._padding_;
  }
LAB_14c68ceec:
  if (param_8 == DisplayRate) {
    FWeakObjectPtr::Get(&local_res10);
    UMovieSceneSequenceExtensions::GetDisplayRate(&local_a8);
    FWeakObjectPtr::Get(&local_res10);
    UMovieSceneSequenceExtensions::GetTickResolution((UMovieSceneSequence *)&local_a8._padding_);
    local_a8._padding_._4_4_ = 0;
    FVar5.Denominator = 0;
    FVar5.Numerator = param_4.Value;
    local_a8._padding_._0_4_ = param_4.Value;
    ConvertFrameTime((FFrameTime)&local_b8,FVar5,(FFrameRate)local_a8._padding_);
    param_4.Value = local_b8;
    if (__real_3f000000 <= local_b4) {
      param_4.Value = local_b8 + 1;
    }
    local_a8._padding_._0_4_ = param_6.Value;
    local_a8._padding_._4_4_ = 0;
    FVar6.Denominator = 0;
    FVar6.Numerator = param_6.Value;
    ConvertFrameTime((FFrameTime)&local_b0,FVar6,(FFrameRate)local_a8._padding_);
    param_6.Value = local_b0;
    if (__real_3f000000 <= local_ac) {
      param_6.Value = local_b0 + 1;
    }
    (param_7->InternalRate).Numerator = (undefined4)local_a8._padding_;
    (param_7->InternalRate).Denominator = local_a8._padding_._4_4_;
    pTVar12 = FSequencerScriptingRange::ToNative(param_7,&local_38,(FFrameRate)local_a8._padding_);
    local_c8.LowerBound = pTVar12->LowerBound;
    local_c8.UpperBound = pTVar12->UpperBound;
  }
  bVar10 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar10) {
    FWeakObjectPtr::Get(&local_res18);
  }
  pFVar13 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  TVar8 = local_c8.UpperBound;
  TVar7 = local_c8.LowerBound;
  if (pFVar13 == (FMovieSceneChannel *)0x0) {
    local_a8._padding_ = 0;
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to transform keys in channel."
               ,Error,(FName)0x0);
  }
  else {
    local_a8._padding_ =
         (longlong)
         &
         ___7FTransformRetiming___TMovieSceneScriptingChannel_UFMovieSceneIntegerChannel__VUMovieSceneScriptingIntegerKey__H__6B_
    ;
    local_a8._padding_ = (longlong)param_5;
    local_a8._padding_._4_1_ = local_c8.LowerBound.Type.Value;
    local_a8._padding_._5_3_ = local_c8.LowerBound._1_3_;
    local_a8.CompiledData.field0_0x0._0_4_ = local_c8.LowerBound.Value.Value;
    local_a8.CompiledData.field0_0x0._4_4_ = local_c8.UpperBound._0_4_;
    local_a8.DefaultCompletionMode = (undefined1)local_c8.UpperBound.Value.Value;
    local_a8.bParentContextsAreSignificant = (bool)local_c8.UpperBound.Value.Value._1_1_;
    local_a8.bPlayableDirectly = (bool)local_c8.UpperBound.Value.Value._2_1_;
    local_a8.SequenceFlags = local_c8.UpperBound.Value.Value._3_1_;
    local_c8.LowerBound = TVar7;
    local_c8.UpperBound = TVar8;
    local_a8._padding_._0_4_ = param_4.Value;
    local_a8._padding_._0_4_ = param_6.Value;
    (**(code **)(pFVar13->_padding_ + 0x40))(pFVar13,&local_a8._padding_);
    local_a8._padding_ = (longlong)&___7IRetimingInterface_MovieScene_UE__6B_;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}

// TransformKeysInChannel @ 14c68d060

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
TMovieSceneScriptingChannel<FMovieSceneObjectPathChannel,UMovieSceneScriptingObjectPathKey,FMovieSceneObjectPathChannelKeyValue>
::TransformKeysInChannel
          (TMovieSceneChannelHandle<FMovieSceneObjectPathChannel> *param_1,
          TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
          TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3,FFrameNumber param_4,
          double param_5,FFrameNumber param_6,FSequencerScriptingRange *param_7,
          EMovieSceneTimeUnit param_8)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  FFrameRate FVar5;
  FFrameRate FVar6;
  TRangeBound<FFrameNumber> TVar7;
  TRangeBound<FFrameNumber> TVar8;
  FFrameNumber FVar9;
  bool bVar10;
  FFrameNumber *pFVar11;
  TRange<FFrameNumber> *pTVar12;
  FMovieSceneChannel *pFVar13;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  TRange<FFrameNumber> local_c8;
  int local_b8;
  float local_b4;
  int local_b0;
  float local_ac;
  UMovieSceneSequence local_a8;
  TRange<FFrameNumber> local_38;
  
  local_res10 = param_2.WeakPtr;
  local_res18 = param_3.WeakPtr;
  FWeakObjectPtr::Get(&local_res10);
  UMovieSceneSequenceExtensions::GetTickResolution((UMovieSceneSequence *)&local_a8._padding_);
  FSequencerScriptingRange::ToNative(param_7,&local_c8,(FFrameRate)local_a8._padding_);
  if ((local_c8.LowerBound.Type.Value.Value != '\x02') && (local_c8.UpperBound.Type.Value != '\x02')
     ) {
    FVar9.Value = local_c8.UpperBound.Value.Value;
    if ((local_c8.LowerBound.Type.Value.Value == '\x02') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type != ERangeBoundTypes::Open",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                            ,99,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (local_c8.LowerBound.Value.Value <= FVar9.Value) {
      pFVar11 = TRangeBound<FFrameNumber>::GetValue(&local_c8.UpperBound);
      iVar2 = pFVar11->Value;
      pFVar11 = TRangeBound<FFrameNumber>::GetValue(&local_c8.LowerBound);
      if ((pFVar11->Value != iVar2) ||
         ((local_c8.LowerBound.Type.Value != '\0' && (local_c8.UpperBound.Type.Value != '\0'))))
      goto LAB_14c68d15c;
    }
    local_a8._padding_._4_4_ = 0;
    local_a8._padding_._0_4_ = CONCAT31(local_a8._padding_._1_3_,2);
    local_c8.LowerBound.Value.Value = 0;
    local_c8.LowerBound._0_4_ = (uint)local_a8._padding_;
    local_a8._padding_._4_4_ = 0;
    local_a8._padding_._0_4_ = CONCAT31(local_a8._padding_._1_3_,2);
    local_c8.UpperBound.Value.Value = 0;
    local_c8.UpperBound._0_4_ = (uint)local_a8._padding_;
  }
LAB_14c68d15c:
  if (param_8 == DisplayRate) {
    FWeakObjectPtr::Get(&local_res10);
    UMovieSceneSequenceExtensions::GetDisplayRate(&local_a8);
    FWeakObjectPtr::Get(&local_res10);
    UMovieSceneSequenceExtensions::GetTickResolution((UMovieSceneSequence *)&local_a8._padding_);
    local_a8._padding_._4_4_ = 0;
    FVar5.Denominator = 0;
    FVar5.Numerator = param_4.Value;
    local_a8._padding_._0_4_ = param_4.Value;
    ConvertFrameTime((FFrameTime)&local_b8,FVar5,(FFrameRate)local_a8._padding_);
    param_4.Value = local_b8;
    if (__real_3f000000 <= local_b4) {
      param_4.Value = local_b8 + 1;
    }
    local_a8._padding_._0_4_ = param_6.Value;
    local_a8._padding_._4_4_ = 0;
    FVar6.Denominator = 0;
    FVar6.Numerator = param_6.Value;
    ConvertFrameTime((FFrameTime)&local_b0,FVar6,(FFrameRate)local_a8._padding_);
    param_6.Value = local_b0;
    if (__real_3f000000 <= local_ac) {
      param_6.Value = local_b0 + 1;
    }
    (param_7->InternalRate).Numerator = (undefined4)local_a8._padding_;
    (param_7->InternalRate).Denominator = local_a8._padding_._4_4_;
    pTVar12 = FSequencerScriptingRange::ToNative(param_7,&local_38,(FFrameRate)local_a8._padding_);
    local_c8.LowerBound = pTVar12->LowerBound;
    local_c8.UpperBound = pTVar12->UpperBound;
  }
  bVar10 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar10) {
    FWeakObjectPtr::Get(&local_res18);
  }
  pFVar13 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  TVar8 = local_c8.UpperBound;
  TVar7 = local_c8.LowerBound;
  if (pFVar13 == (FMovieSceneChannel *)0x0) {
    local_a8._padding_ = 0;
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to transform keys in channel."
               ,Error,(FName)0x0);
  }
  else {
    local_a8._padding_ =
         (longlong)
         &
         ___7FTransformRetiming___TMovieSceneScriptingChannel_UFMovieSceneObjectPathChannel__VUMovieSceneScriptingObjectPathKey__UFMovieSceneObjectPathChannelKeyValue____6B_
    ;
    local_a8._padding_ = (longlong)param_5;
    local_a8._padding_._4_1_ = local_c8.LowerBound.Type.Value;
    local_a8._padding_._5_3_ = local_c8.LowerBound._1_3_;
    local_a8.CompiledData.field0_0x0._0_4_ = local_c8.LowerBound.Value.Value;
    local_a8.CompiledData.field0_0x0._4_4_ = local_c8.UpperBound._0_4_;
    local_a8.DefaultCompletionMode = (undefined1)local_c8.UpperBound.Value.Value;
    local_a8.bParentContextsAreSignificant = (bool)local_c8.UpperBound.Value.Value._1_1_;
    local_a8.bPlayableDirectly = (bool)local_c8.UpperBound.Value.Value._2_1_;
    local_a8.SequenceFlags = local_c8.UpperBound.Value.Value._3_1_;
    local_c8.LowerBound = TVar7;
    local_c8.UpperBound = TVar8;
    local_a8._padding_._0_4_ = param_4.Value;
    local_a8._padding_._0_4_ = param_6.Value;
    (**(code **)(pFVar13->_padding_ + 0x40))(pFVar13,&local_a8._padding_);
    local_a8._padding_ = (longlong)&___7IRetimingInterface_MovieScene_UE__6B_;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}

// AddKeyInChannel @ 14c699b10

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneScriptingParticleKey * __cdecl
TMovieSceneScriptingChannel<FMovieSceneParticleChannel,UMovieSceneScriptingParticleKey,unsigned_char>
::AddKeyInChannel(TMovieSceneChannelHandle<FMovieSceneParticleChannel> *param_1,
                 TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
                 TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3,FFrameNumber param_4,
                 uchar *param_5,float param_6,EMovieSceneTimeUnit param_7,
                 EMovieSceneKeyInterpolation param_8)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  FFrameRate FVar4;
  bool bVar5;
  int iVar6;
  FKeyHandle FVar7;
  FMovieSceneParticleChannel *pFVar8;
  UObject *pUVar9;
  UMovieSceneScriptingParticleKey *pUVar10;
  longlong lVar11;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FFrameRate FVar12;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  int local_94;
  float local_90;
  undefined8 local_8c;
  undefined8 local_84;
  int local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  TMovieSceneChannelData<unsigned_char> local_60;
  
  local_res10 = param_2.WeakPtr;
  local_res18[0] = param_3.WeakPtr;
  pFVar8 = (FMovieSceneParticleChannel *)
           FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  if (pFVar8 == (FMovieSceneParticleChannel *)0x0) {
    local_70 = 0;
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to add key.",Error,
               (FName)0x0);
    plVar2 = *(longlong **)&param_1->field_0x8;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
    return (UMovieSceneScriptingParticleKey *)0x0;
  }
  pUVar9 = GetTransientPackageAsObject();
  pUVar10 = NewObject<UMovieSceneScriptingParticleKey>(pUVar9);
  if (param_7 == DisplayRate) {
    pUVar9 = FWeakObjectPtr::Get(&local_res10);
    if (pUVar9 == (UObject *)0x0) {
      local_8c = 0;
      FFrame::KismetExecutionMessage
                (L"Cannot call GetTickResolution on a null sequence",Error,(FName)0x0);
    }
    else {
      (**(code **)(*(longlong *)pUVar9 + 0x2f8))(pUVar9);
    }
    FVar12.Numerator = 60000;
    FVar12.Denominator = 1;
    pUVar9 = FWeakObjectPtr::Get(&local_res10);
    if (pUVar9 == (UObject *)0x0) {
      local_84 = 0;
      FFrame::KismetExecutionMessage
                (L"Cannot call GetDisplayRate on a null sequence",Error,(FName)0x0);
    }
    else {
      lVar11 = (**(code **)(*(longlong *)pUVar9 + 0x2f8))(pUVar9);
      if (lVar11 != 0) {
        FVar12 = *(FFrameRate *)(lVar11 + 0x140);
      }
    }
    uStack_74 = 0;
    FVar4.Denominator = 0;
    FVar4.Numerator = param_4.Value;
    local_78 = param_4.Value;
    ConvertFrameTime((FFrameTime)&local_94,FVar4,FVar12);
    param_4.Value = local_94;
    if (__real_3f000000 <= local_90) {
      param_4.Value = local_94 + 1;
    }
  }
  bVar5 = FWeakObjectPtr::IsValid(local_res18);
  if (bVar5) {
    FWeakObjectPtr::Get(local_res18);
  }
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_60,(FMovieSceneChannel *)pFVar8,
             (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&pFVar8->field_0x70,
             (FKeyHandleLookupTable *)&pFVar8->field_0xa0);
  local_60.Values = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&pFVar8->field_0x88;
  if (((local_60._padding_ == 0) ||
      (local_60.Values == (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pUVar10 = (UMovieSceneScriptingParticleKey *)(*pcVar3)();
    return pUVar10;
  }
  iVar6 = FMovieSceneChannelData::FindKey
                    ((FMovieSceneChannelData *)&local_60,param_4,(FFrameNumber)0x0);
  FKeyHandle::Invalid();
  if (iVar6 == -1) {
    TMovieSceneChannelData<unsigned_char>::AddKey(&local_60,param_4,*param_5);
    FVar7 = FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)&local_60,(int)local_64);
    FVar7.Index = *(uint *)CONCAT44(extraout_var_00,FVar7.Index);
  }
  else {
    FVar7 = FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)&local_60,(int)local_68);
    FVar7.Index = *(uint *)CONCAT44(extraout_var,FVar7.Index);
    UE::MovieScene::AssignValue<FMovieSceneParticleChannel,unsigned_char_&>(pFVar8,FVar7,param_5);
  }
  *(uint *)&pUVar10->field_0x28 = FVar7.Index;
  TMovieSceneChannelHandle<FMovieSceneChannel>::operator=
            ((TMovieSceneChannelHandle<FMovieSceneChannel> *)&pUVar10->field_0x40,
             (TMovieSceneChannelHandle<FMovieSceneChannel> *)param_1);
  *(int *)&pUVar10->field_0x34 = local_res18[0].ObjectIndex;
  *(int *)&pUVar10->field_0x38 = local_res18[0].ObjectSerialNumber;
  *(int *)&pUVar10->field_0x2c = local_res10.ObjectIndex;
  *(int *)&pUVar10->field_0x30 = local_res10.ObjectSerialNumber;
  plVar2 = *(longlong **)&param_1->field_0x8;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)(*plVar2 + 8))(plVar2,1);
    }
  }
  return pUVar10;
}

// AddKeyInChannel @ 14c699dd0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneScriptingStringKey * __cdecl
TMovieSceneScriptingChannel<FMovieSceneStringChannel,UMovieSceneScriptingStringKey,FString>::
AddKeyInChannel(TMovieSceneChannelHandle<FMovieSceneStringChannel> *param_1,
               TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
               TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3,FFrameNumber param_4,
               FString *param_5,float param_6,EMovieSceneTimeUnit param_7,
               EMovieSceneKeyInterpolation param_8)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  FFrameRate FVar4;
  bool bVar5;
  int iVar6;
  FKeyHandle FVar7;
  FMovieSceneStringChannel *pFVar8;
  UObject *pUVar9;
  UMovieSceneScriptingStringKey *pUVar10;
  longlong lVar11;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FFrameRate FVar12;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  int local_94;
  float local_90;
  undefined8 local_8c;
  undefined8 local_84;
  int local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  TMovieSceneChannelData<FString> local_60;
  
  local_res10 = param_2.WeakPtr;
  local_res18[0] = param_3.WeakPtr;
  pFVar8 = (FMovieSceneStringChannel *)
           FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  if (pFVar8 == (FMovieSceneStringChannel *)0x0) {
    local_70 = 0;
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to add key.",Error,
               (FName)0x0);
    plVar2 = *(longlong **)&param_1->field_0x8;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
    return (UMovieSceneScriptingStringKey *)0x0;
  }
  pUVar9 = GetTransientPackageAsObject();
  pUVar10 = NewObject<UMovieSceneScriptingStringKey>(pUVar9);
  if (param_7 == DisplayRate) {
    pUVar9 = FWeakObjectPtr::Get(&local_res10);
    if (pUVar9 == (UObject *)0x0) {
      local_8c = 0;
      FFrame::KismetExecutionMessage
                (L"Cannot call GetTickResolution on a null sequence",Error,(FName)0x0);
    }
    else {
      (**(code **)(*(longlong *)pUVar9 + 0x2f8))(pUVar9);
    }
    FVar12.Numerator = 60000;
    FVar12.Denominator = 1;
    pUVar9 = FWeakObjectPtr::Get(&local_res10);
    if (pUVar9 == (UObject *)0x0) {
      local_84 = 0;
      FFrame::KismetExecutionMessage
                (L"Cannot call GetDisplayRate on a null sequence",Error,(FName)0x0);
    }
    else {
      lVar11 = (**(code **)(*(longlong *)pUVar9 + 0x2f8))(pUVar9);
      if (lVar11 != 0) {
        FVar12 = *(FFrameRate *)(lVar11 + 0x140);
      }
    }
    uStack_74 = 0;
    FVar4.Denominator = 0;
    FVar4.Numerator = param_4.Value;
    local_78 = param_4.Value;
    ConvertFrameTime((FFrameTime)&local_94,FVar4,FVar12);
    param_4.Value = local_94;
    if (__real_3f000000 <= local_90) {
      param_4.Value = local_94 + 1;
    }
  }
  bVar5 = FWeakObjectPtr::IsValid(local_res18);
  if (bVar5) {
    FWeakObjectPtr::Get(local_res18);
  }
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_60,(FMovieSceneChannel *)pFVar8,&pFVar8->Times,
             (FKeyHandleLookupTable *)&pFVar8->KeyHandles);
  local_60.Values = &pFVar8->Values;
  if (((local_60._padding_ == 0) ||
      (local_60.Values == (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pUVar10 = (UMovieSceneScriptingStringKey *)(*pcVar3)();
    return pUVar10;
  }
  iVar6 = FMovieSceneChannelData::FindKey
                    ((FMovieSceneChannelData *)&local_60,param_4,(FFrameNumber)0x0);
  FKeyHandle::Invalid();
  if (iVar6 == -1) {
    TMovieSceneChannelData<FString>::AddKey(&local_60,param_4,param_5);
    FVar7 = FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)&local_60,(int)local_64);
    FVar7.Index = *(uint *)CONCAT44(extraout_var_00,FVar7.Index);
  }
  else {
    FVar7 = FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)&local_60,(int)local_68);
    FVar7.Index = *(uint *)CONCAT44(extraout_var,FVar7.Index);
    UE::MovieScene::AssignValue<FMovieSceneStringChannel,FString_&>(pFVar8,FVar7,param_5);
  }
  *(uint *)&pUVar10->field_0x28 = FVar7.Index;
  TMovieSceneChannelHandle<FMovieSceneChannel>::operator=
            ((TMovieSceneChannelHandle<FMovieSceneChannel> *)&pUVar10->field_0x40,
             (TMovieSceneChannelHandle<FMovieSceneChannel> *)param_1);
  *(int *)&pUVar10->field_0x34 = local_res18[0].ObjectIndex;
  *(int *)&pUVar10->field_0x38 = local_res18[0].ObjectSerialNumber;
  *(int *)&pUVar10->field_0x2c = local_res10.ObjectIndex;
  *(int *)&pUVar10->field_0x30 = local_res10.ObjectSerialNumber;
  plVar2 = *(longlong **)&param_1->field_0x8;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)(*plVar2 + 8))(plVar2,1);
    }
  }
  return pUVar10;
}

// AddKeyInChannel @ 14c69a080

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneScriptingTextKey * __cdecl
TMovieSceneScriptingChannel<FMovieSceneTextChannel,UMovieSceneScriptingTextKey,FText>::
AddKeyInChannel(TMovieSceneChannelHandle<FMovieSceneTextChannel> *param_1,
               TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
               TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3,FFrameNumber param_4,
               FText *param_5,float param_6,EMovieSceneTimeUnit param_7,
               EMovieSceneKeyInterpolation param_8)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  FFrameRate FVar4;
  bool bVar5;
  int iVar6;
  FKeyHandle FVar7;
  FMovieSceneTextChannel *pFVar8;
  UObject *pUVar9;
  UMovieSceneScriptingTextKey *pUVar10;
  longlong lVar11;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FFrameRate FVar12;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  int local_94;
  float local_90;
  undefined8 local_8c;
  undefined8 local_84;
  int local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  TMovieSceneChannelData<FText> local_60;
  
  local_res10 = param_2.WeakPtr;
  local_res18[0] = param_3.WeakPtr;
  pFVar8 = (FMovieSceneTextChannel *)
           FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  if (pFVar8 == (FMovieSceneTextChannel *)0x0) {
    local_70 = 0;
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to add key.",Error,
               (FName)0x0);
    plVar2 = *(longlong **)&param_1->field_0x8;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
    return (UMovieSceneScriptingTextKey *)0x0;
  }
  pUVar9 = GetTransientPackageAsObject();
  pUVar10 = NewObject<UMovieSceneScriptingTextKey>(pUVar9);
  if (param_7 == DisplayRate) {
    pUVar9 = FWeakObjectPtr::Get(&local_res10);
    if (pUVar9 == (UObject *)0x0) {
      local_8c = 0;
      FFrame::KismetExecutionMessage
                (L"Cannot call GetTickResolution on a null sequence",Error,(FName)0x0);
    }
    else {
      (**(code **)(*(longlong *)pUVar9 + 0x2f8))(pUVar9);
    }
    FVar12.Numerator = 60000;
    FVar12.Denominator = 1;
    pUVar9 = FWeakObjectPtr::Get(&local_res10);
    if (pUVar9 == (UObject *)0x0) {
      local_84 = 0;
      FFrame::KismetExecutionMessage
                (L"Cannot call GetDisplayRate on a null sequence",Error,(FName)0x0);
    }
    else {
      lVar11 = (**(code **)(*(longlong *)pUVar9 + 0x2f8))(pUVar9);
      if (lVar11 != 0) {
        FVar12 = *(FFrameRate *)(lVar11 + 0x140);
      }
    }
    uStack_74 = 0;
    FVar4.Denominator = 0;
    FVar4.Numerator = param_4.Value;
    local_78 = param_4.Value;
    ConvertFrameTime((FFrameTime)&local_94,FVar4,FVar12);
    param_4.Value = local_94;
    if (__real_3f000000 <= local_90) {
      param_4.Value = local_94 + 1;
    }
  }
  bVar5 = FWeakObjectPtr::IsValid(local_res18);
  if (bVar5) {
    FWeakObjectPtr::Get(local_res18);
  }
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)&local_60,(FMovieSceneChannel *)pFVar8,&pFVar8->Times,
             (FKeyHandleLookupTable *)&pFVar8->KeyHandles);
  local_60.Values = &pFVar8->Values;
  if (((local_60._padding_ == 0) ||
      (local_60.Values == (TArray<FText,TSizedDefaultAllocator<32>_> *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pUVar10 = (UMovieSceneScriptingTextKey *)(*pcVar3)();
    return pUVar10;
  }
  iVar6 = FMovieSceneChannelData::FindKey
                    ((FMovieSceneChannelData *)&local_60,param_4,(FFrameNumber)0x0);
  FKeyHandle::Invalid();
  if (iVar6 == -1) {
    TMovieSceneChannelData<FText>::AddKey(&local_60,param_4,param_5);
    FVar7 = FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)&local_60,(int)local_64);
    FVar7.Index = *(uint *)CONCAT44(extraout_var_00,FVar7.Index);
  }
  else {
    FVar7 = FMovieSceneChannelData::GetHandle((FMovieSceneChannelData *)&local_60,(int)local_68);
    FVar7.Index = *(uint *)CONCAT44(extraout_var,FVar7.Index);
    UE::MovieScene::AssignValue<FMovieSceneTextChannel,FText_&>(pFVar8,FVar7,param_5);
  }
  *(uint *)&pUVar10->field_0x28 = FVar7.Index;
  TMovieSceneChannelHandle<FMovieSceneChannel>::operator=
            ((TMovieSceneChannelHandle<FMovieSceneChannel> *)&pUVar10->field_0x40,
             (TMovieSceneChannelHandle<FMovieSceneChannel> *)param_1);
  *(int *)&pUVar10->field_0x34 = local_res18[0].ObjectIndex;
  *(int *)&pUVar10->field_0x38 = local_res18[0].ObjectSerialNumber;
  *(int *)&pUVar10->field_0x2c = local_res10.ObjectIndex;
  *(int *)&pUVar10->field_0x30 = local_res10.ObjectSerialNumber;
  plVar2 = *(longlong **)&param_1->field_0x8;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)(*plVar2 + 8))(plVar2,1);
    }
  }
  return pUVar10;
}

// EvaluateKeysInChannel @ 14c69b150

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __cdecl
TMovieSceneScriptingChannel<FMovieSceneParticleChannel,UMovieSceneScriptingParticleKey,unsigned_char>
::EvaluateKeysInChannel
          (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TMovieSceneChannelHandle<FMovieSceneParticleChannel> *param_1,
          TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
          FSequencerScriptingRange *param_3,FFrameRate param_4)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  FFrameRate FVar4;
  FFrameRate FVar5;
  float fVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  FMovieSceneByteChannel *this;
  UObject *pUVar11;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar12;
  FFrameTime FVar13;
  FMovieSceneByteChannel *pFVar14;
  wchar_t *pwVar15;
  TEnumAsByte<ERangeBoundTypes::Type> TVar16;
  FFrameRate FVar17;
  TEnumAsByte<ERangeBoundTypes::Type> TVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  int iVar21;
  longlong lVar22;
  float fVar23;
  undefined1 auVar24 [16];
  float fVar25;
  FWeakObjectPtr local_res18;
  float fStack_e4;
  TRange<FFrameNumber> local_a0;
  TRangeBound<FFrameNumber> local_90;
  undefined1 local_88 [8];
  uint local_80 [2];
  undefined1 local_78 [64];
  
  lVar22 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res18 = param_2.WeakPtr;
  this = (FMovieSceneByteChannel *)
         FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  if (this == (FMovieSceneByteChannel *)0x0) {
    pwVar15 = L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to evaluate keys.";
  }
  else {
    pUVar11 = FWeakObjectPtr::Get(&local_res18);
    if (pUVar11 == (UObject *)0x0) {
      FFrame::KismetExecutionMessage
                (L"Cannot call GetTickResolution on a null sequence",Error,(FName)0x0);
      FVar17.Numerator = 60000;
      FVar17.Denominator = 1;
    }
    else {
      lVar19 = (**(code **)(*(longlong *)pUVar11 + 0x2f8))(pUVar11);
      if (lVar19 == 0) {
        FVar17.Numerator = 60000;
        FVar17.Denominator = 1;
      }
      else {
        FVar17 = *(FFrameRate *)(lVar19 + 0x138);
      }
    }
    FSequencerScriptingRange::ToNative(param_3,&local_a0,FVar17);
    TVar18 = local_a0.LowerBound.Type.Value;
    if ((TVar18.Value != '\x02') &&
       (TVar16 = local_a0.UpperBound.Type.Value, TVar16.Value != '\x02')) {
      fVar25 = 0.0;
      ConvertFrameTime((FFrameTime)local_88,(FFrameRate)0x1,param_4);
      if ((TVar18.Value == '\x02') &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InLowerBound.IsOpen()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                             ,0x2c,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        pTVar12 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar12;
      }
      lVar19 = lVar22;
      if (TVar18.Value == '\0') {
        lVar19 = 4;
      }
      iVar8 = *(int *)((longlong)
                       &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteInclusiveLower(TRangeBound<FFrameNumber>_const&___ptr64)'
                        ::__l2::Offsets + lVar19);
      if ((TVar18.Value == '\x02') &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        pTVar12 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar12;
      }
      local_90 = local_a0.UpperBound;
      if ((TVar16.Value == '\x02') &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InUpperBound.IsOpen()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                             ,0x44,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        pTVar12 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar12;
      }
      if (TVar16.Value == '\x01') {
        lVar22 = 4;
      }
      iVar21 = *(int *)((longlong)
                        &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteExclusiveUpper(TRangeBound<FFrameNumber>_const&___ptr64)'
                         ::__l2::Offsets + lVar22);
      if ((TVar16.Value == '\x02') &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type != ERangeBoundTypes::Open",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                             ,99,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        pTVar12 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar12;
      }
      fVar6 = __real_3f000000;
      iVar21 = local_90.Value.Value + iVar21;
      iVar8 = local_a0.LowerBound.Value.Value.Value + iVar8;
      while( true ) {
        FVar4.Denominator = (int)fVar25;
        FVar4.Numerator = iVar8;
        if ((iVar21 <= iVar8) && ((iVar8 != iVar21 || (0.0 <= fVar25)))) break;
        FVar13 = ConvertFrameTime((FFrameTime)local_78,FVar4,FVar17);
        uVar9 = *(uint *)FVar13;
        if (fVar6 < *(float *)((longlong)FVar13 + 4) || fVar6 == *(float *)((longlong)FVar13 + 4)) {
          uVar9 = uVar9 + 1;
        }
        FVar5.Denominator = 0;
        FVar5.Numerator = uVar9;
        ConvertFrameTime((FFrameTime)local_80,FVar5,param_4);
        iVar10 = __return_storage_ptr__->ArrayNum;
        if (iVar10 == __return_storage_ptr__->ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x101,&__return_storage_ptr__->AllocatorInstance,
                              &__return_storage_ptr__->ArrayMax);
        }
        pFVar20 = (__return_storage_ptr__->AllocatorInstance).Data + iVar10;
        __return_storage_ptr__->ArrayNum = iVar10 + 1;
        *pFVar20 = (FScriptContainerElement)0x0;
        FVar13.SubFrame = 0.0;
        FVar13.FrameNumber.Value = local_80[0];
        pFVar14 = this;
        FMovieSceneByteChannel::Evaluate(this,FVar13,(uchar *)pFVar20);
        fStack_e4 = local_88._4_4_;
        fVar25 = fVar25 + fStack_e4;
        iVar8 = ((int)ROUND((fVar25 + fVar25) - fVar6) >> 1) + iVar8 + local_88._0_4_;
        iVar10 = (int)fVar25;
        fVar23 = fVar25;
        if ((iVar10 != -0x80000000) && ((float)iVar10 != fVar25)) {
          auVar24._4_4_ = fVar25;
          auVar24._0_4_ = fVar25;
          auVar24._8_8_ = 0;
          uVar9 = movmskps((int)pFVar14,auVar24);
          fVar23 = (float)(int)(iVar10 - (uVar9 & 1));
        }
        fVar25 = fVar25 - fVar23;
      }
      goto LAB_14c69b532;
    }
    pwVar15 = L"Unbounded range passed to evaluate keys.";
  }
  FFrame::KismetExecutionMessage(pwVar15,Error,(FName)0x0);
LAB_14c69b532:
  plVar2 = *(longlong **)&param_1->field_0x8;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (**(code **)(*plVar2 + 8))(plVar2,1);
    }
  }
  return __return_storage_ptr__;
}

// GetDefaultFromChannel @ 14c69e5e0

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<FString> * __cdecl
TMovieSceneScriptingChannel<FMovieSceneStringChannel,UMovieSceneScriptingStringKey,FString>::
GetDefaultFromChannel
          (TOptional<FString> *__return_storage_ptr__,
          TMovieSceneChannelHandle<FMovieSceneStringChannel> *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  ForAnyElementType _Src;
  bool bVar5;
  FMovieSceneStringChannel *this;
  TOptional<FString> *pTVar6;
  longlong lVar7;
  int iVar8;
  FString local_48;
  TOptional<FString>_u_0 local_38;
  TOptional<FString>_u_0 local_28;
  
  this = (FMovieSceneStringChannel *)
         FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  if (this == (FMovieSceneStringChannel *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get default value."
               ,Error,(FName)0x0);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  else {
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    pTVar6 = FMovieSceneStringChannel::GetDefault(this,(TOptional<FString> *)&local_38.TypedValue);
    iVar2 = *(int *)((longlong)&pTVar6->field0_0x0 + 0xc);
    if ((local_38.TypedValue.Data.ArrayMax != -1) &&
       (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
    }
    if (iVar2 != -1) {
      pTVar6 = FMovieSceneStringChannel::GetDefault(this,(TOptional<FString> *)&local_28.TypedValue)
      ;
      if ((*(int *)((longlong)&pTVar6->field0_0x0 + 0xc) == -1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TOptional<FString> *)(*pcVar4)();
        return pTVar6;
      }
      iVar2 = *(int *)((longlong)&pTVar6->field0_0x0 + 8);
      iVar8 = iVar2 + -1;
      if (iVar2 == 0) {
        iVar8 = 0;
      }
      ::FString::AssignRange
                (&local_48,(wchar_t *)(pTVar6->field0_0x0).TypedValue.Data.AllocatorInstance.Data,
                 iVar8);
      if ((local_28.TypedValue.Data.ArrayMax != -1) &&
         (local_28.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free((void *)local_28.TypedValue.Data.AllocatorInstance.Data);
      }
      _Src.Data = local_48.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      piVar1 = (int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc);
      lVar7 = (longlong)local_48.Data.ArrayNum;
      *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = local_48.Data.ArrayNum;
      if (local_48.Data.ArrayNum == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)__return_storage_ptr__,
                   local_48.Data.ArrayNum,piVar1);
        memcpy((__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data,_Src.Data
               ,lVar7 * 2);
      }
      if ((*piVar1 == -1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TOptional<FString> *)(*pcVar4)();
        return pTVar6;
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      plVar3 = *(longlong **)&param_1->field_0x8;
      goto joined_r0x00014c69e7ac;
    }
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
joined_r0x00014c69e7ac:
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return __return_storage_ptr__;
}

// GetDefaultFromChannel @ 14c69e7e0

/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<FText> * __cdecl
TMovieSceneScriptingChannel<FMovieSceneTextChannel,UMovieSceneScriptingTextKey,FText>::
GetDefaultFromChannel
          (TOptional<FText> *__return_storage_ptr__,
          TMovieSceneChannelHandle<FMovieSceneTextChannel> *param_1)

{
  int *piVar1;
  int iVar2;
  ITextData *pIVar3;
  longlong *plVar4;
  code *pcVar5;
  TRefCountPtr<ITextData> TVar6;
  bool bVar7;
  FMovieSceneTextChannel *this;
  TOptional<FText> *pTVar8;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FText local_50;
  TOptional<FText>_u_0 local_40;
  TOptional<FText>_u_0 local_30;
  
  this = (FMovieSceneTextChannel *)
         FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  if (this == (FMovieSceneTextChannel *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get default value."
               ,Error,(FName)0x0);
    (__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Flags = 0;
  }
  else {
    FText::FText(&local_50);
    pTVar8 = FMovieSceneTextChannel::GetDefault(this,(TOptional<FText> *)&local_40.TypedValue);
    pIVar3 = (pTVar8->field0_0x0).TypedValue.TextData.Reference;
    if (local_40.TypedValue.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_40.TypedValue.TextData.Reference + 0x10))();
    }
    if (pIVar3 == (ITextData *)0x0) {
      (__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference = (ITextData *)0x0;
      (__return_storage_ptr__->field0_0x0).TypedValue.Flags = 0;
    }
    else {
      pTVar8 = FMovieSceneTextChannel::GetDefault(this,(TOptional<FText> *)&local_30.TypedValue);
      if (((pTVar8->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TOptional<FText> *)(*pcVar5)();
        return pTVar8;
      }
      TVar6.Reference = local_50.TextData.Reference;
      pIVar3 = *(ITextData **)&pTVar8->field0_0x0;
      if (local_50.TextData.Reference != pIVar3) {
        local_50.TextData.Reference = pIVar3;
        if (pIVar3 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res18);
        }
        if (TVar6.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar6.Reference + 0x10))(TVar6.Reference);
        }
      }
      local_50.Flags = (pTVar8->field0_0x0).TypedValue.Flags;
      if (local_30.TypedValue.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_30.TypedValue.TextData.Reference + 0x10))
                  (local_30.TypedValue.TextData.Reference);
      }
      *(ITextData **)&__return_storage_ptr__->field0_0x0 = local_50.TextData.Reference;
      if (local_50.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_50.TextData.Reference + 8))
                  (local_50.TextData.Reference,local_res20);
      }
      (__return_storage_ptr__->field0_0x0).TypedValue.Flags = local_50.Flags;
      if (((__return_storage_ptr__->field0_0x0).TypedValue.TextData.Reference == (ITextData *)0x0)
         && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0xbd,
                                L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                               ), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TOptional<FText> *)(*pcVar5)();
        return pTVar8;
      }
    }
    if (local_50.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
    }
  }
  plVar4 = *(longlong **)&param_1->field_0x8;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return __return_storage_ptr__;
}

// GetKeysInChannel @ 14c69f190

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> * __cdecl
TMovieSceneScriptingChannel<FMovieSceneParticleChannel,UMovieSceneScriptingParticleKey,unsigned_char>
::GetKeysInChannel(TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_>
                   *__return_storage_ptr__,
                  TMovieSceneChannelHandle<FMovieSceneParticleChannel> *param_1,
                  TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
                  TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FMovieSceneChannel *pFVar7;
  UObject *pUVar8;
  UMovieSceneScriptingParticleKey *pUVar9;
  TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *pTVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  UMovieSceneScriptingParticleKey *local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  undefined1 local_50 [4];
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  
  uVar12 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar7 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  if (pFVar7 == (FMovieSceneChannel *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get keys.",Error,
               (FName)0x0);
  }
  else {
    local_60 = (void *)0x0;
    local_58 = 0;
    local_70 = (void *)0x0;
    local_68 = 0;
    local_50[0] = 2;
    local_4c = 0;
    local_48 = 2;
    local_44 = 0;
    (**(code **)(pFVar7->_padding_ + 8))(pFVar7,local_50,&local_60,&local_70);
    uVar14 = uVar12;
    if (0 < (int)local_58) {
      do {
        pUVar8 = GetTransientPackageAsObject();
        pUVar9 = NewObject<UMovieSceneScriptingParticleKey>(pUVar8);
        uVar13 = (uint)uVar14;
        uVar11 = 0;
        if ((int)uVar13 < (int)local_68) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar10;
        }
        *(undefined4 *)&pUVar9->field_0x28 = *(undefined4 *)((longlong)local_70 + uVar12);
        TMovieSceneChannelHandle<FMovieSceneChannel>::operator=
                  ((TMovieSceneChannelHandle<FMovieSceneChannel> *)&pUVar9->field_0x40,
                   (TMovieSceneChannelHandle<FMovieSceneChannel> *)param_1);
        *(int *)&pUVar9->field_0x2c = param_2.WeakPtr.ObjectIndex;
        *(int *)&pUVar9->field_0x30 = param_2.WeakPtr.ObjectSerialNumber;
        *(int *)&pUVar9->field_0x34 = param_3.WeakPtr.ObjectIndex;
        *(int *)&pUVar9->field_0x38 = param_3.WeakPtr.ObjectSerialNumber;
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
        local_78 = pUVar9;
        if (((pFVar2 <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 <
             pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar10;
        }
        iVar6 = __return_storage_ptr__->ArrayNum;
        if (iVar6 == __return_storage_ptr__->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        uVar14 = (ulonglong)(uVar13 + 1);
        __return_storage_ptr__->ArrayNum = iVar6 + 1;
        uVar12 = uVar12 + 4;
        *(UMovieSceneScriptingParticleKey **)
         ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_78;
      } while ((int)(uVar13 + 1) < (int)local_58);
    }
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
    }
    if (local_60 != (void *)0x0) {
      FMemory::Free(local_60);
    }
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return __return_storage_ptr__;
}

// GetKeysInChannel @ 14c69f400

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> * __cdecl
TMovieSceneScriptingChannel<FMovieSceneStringChannel,UMovieSceneScriptingStringKey,FString>::
GetKeysInChannel(TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_>
                 *__return_storage_ptr__,TMovieSceneChannelHandle<FMovieSceneStringChannel> *param_1
                ,TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
                TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FMovieSceneChannel *pFVar7;
  UObject *pUVar8;
  UMovieSceneScriptingStringKey *pUVar9;
  TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *pTVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  UMovieSceneScriptingStringKey *local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  undefined1 local_50 [4];
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  
  uVar12 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar7 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  if (pFVar7 == (FMovieSceneChannel *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get keys.",Error,
               (FName)0x0);
  }
  else {
    local_60 = (void *)0x0;
    local_58 = 0;
    local_70 = (void *)0x0;
    local_68 = 0;
    local_50[0] = 2;
    local_4c = 0;
    local_48 = 2;
    local_44 = 0;
    (**(code **)(pFVar7->_padding_ + 8))(pFVar7,local_50,&local_60,&local_70);
    uVar14 = uVar12;
    if (0 < (int)local_58) {
      do {
        pUVar8 = GetTransientPackageAsObject();
        pUVar9 = NewObject<UMovieSceneScriptingStringKey>(pUVar8);
        uVar13 = (uint)uVar14;
        uVar11 = 0;
        if ((int)uVar13 < (int)local_68) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar10;
        }
        *(undefined4 *)&pUVar9->field_0x28 = *(undefined4 *)((longlong)local_70 + uVar12);
        TMovieSceneChannelHandle<FMovieSceneChannel>::operator=
                  ((TMovieSceneChannelHandle<FMovieSceneChannel> *)&pUVar9->field_0x40,
                   (TMovieSceneChannelHandle<FMovieSceneChannel> *)param_1);
        *(int *)&pUVar9->field_0x2c = param_2.WeakPtr.ObjectIndex;
        *(int *)&pUVar9->field_0x30 = param_2.WeakPtr.ObjectSerialNumber;
        *(int *)&pUVar9->field_0x34 = param_3.WeakPtr.ObjectIndex;
        *(int *)&pUVar9->field_0x38 = param_3.WeakPtr.ObjectSerialNumber;
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
        local_78 = pUVar9;
        if (((pFVar2 <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 <
             pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar10;
        }
        iVar6 = __return_storage_ptr__->ArrayNum;
        if (iVar6 == __return_storage_ptr__->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        uVar14 = (ulonglong)(uVar13 + 1);
        __return_storage_ptr__->ArrayNum = iVar6 + 1;
        uVar12 = uVar12 + 4;
        *(UMovieSceneScriptingStringKey **)
         ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_78;
      } while ((int)(uVar13 + 1) < (int)local_58);
    }
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
    }
    if (local_60 != (void *)0x0) {
      FMemory::Free(local_60);
    }
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return __return_storage_ptr__;
}

// GetKeysInChannel @ 14c69f670

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> * __cdecl
TMovieSceneScriptingChannel<FMovieSceneTextChannel,UMovieSceneScriptingTextKey,FText>::
GetKeysInChannel(TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_>
                 *__return_storage_ptr__,TMovieSceneChannelHandle<FMovieSceneTextChannel> *param_1,
                TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
                TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FMovieSceneChannel *pFVar7;
  UObject *pUVar8;
  UMovieSceneScriptingTextKey *pUVar9;
  TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *pTVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  UMovieSceneScriptingTextKey *local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  undefined1 local_50 [4];
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  
  uVar12 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar7 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  if (pFVar7 == (FMovieSceneChannel *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get keys.",Error,
               (FName)0x0);
  }
  else {
    local_60 = (void *)0x0;
    local_58 = 0;
    local_70 = (void *)0x0;
    local_68 = 0;
    local_50[0] = 2;
    local_4c = 0;
    local_48 = 2;
    local_44 = 0;
    (**(code **)(pFVar7->_padding_ + 8))(pFVar7,local_50,&local_60,&local_70);
    uVar14 = uVar12;
    if (0 < (int)local_58) {
      do {
        pUVar8 = GetTransientPackageAsObject();
        pUVar9 = NewObject<UMovieSceneScriptingTextKey>(pUVar8);
        uVar13 = (uint)uVar14;
        uVar11 = 0;
        if ((int)uVar13 < (int)local_68) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar10;
        }
        *(undefined4 *)&pUVar9->field_0x28 = *(undefined4 *)((longlong)local_70 + uVar12);
        TMovieSceneChannelHandle<FMovieSceneChannel>::operator=
                  ((TMovieSceneChannelHandle<FMovieSceneChannel> *)&pUVar9->field_0x40,
                   (TMovieSceneChannelHandle<FMovieSceneChannel> *)param_1);
        *(int *)&pUVar9->field_0x2c = param_2.WeakPtr.ObjectIndex;
        *(int *)&pUVar9->field_0x30 = param_2.WeakPtr.ObjectSerialNumber;
        *(int *)&pUVar9->field_0x34 = param_3.WeakPtr.ObjectIndex;
        *(int *)&pUVar9->field_0x38 = param_3.WeakPtr.ObjectSerialNumber;
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
        local_78 = pUVar9;
        if (((pFVar2 <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 <
             pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
          return pTVar10;
        }
        iVar6 = __return_storage_ptr__->ArrayNum;
        if (iVar6 == __return_storage_ptr__->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        uVar14 = (ulonglong)(uVar13 + 1);
        __return_storage_ptr__->ArrayNum = iVar6 + 1;
        uVar12 = uVar12 + 4;
        *(UMovieSceneScriptingTextKey **)
         ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_78;
      } while ((int)(uVar13 + 1) < (int)local_58);
    }
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
    }
    if (local_60 != (void *)0x0) {
      FMemory::Free(local_60);
    }
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return __return_storage_ptr__;
}

// GetKeysInChannelByIndex @ 14c69f8e0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> * __cdecl
TMovieSceneScriptingChannel<FMovieSceneParticleChannel,UMovieSceneScriptingParticleKey,unsigned_char>
::GetKeysInChannelByIndex
          (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TMovieSceneChannelHandle<FMovieSceneParticleChannel> *param_1,
          TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
          TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FMovieSceneChannel *pFVar9;
  UObject *pUVar10;
  UMovieSceneScriptingParticleKey *pUVar11;
  TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *pTVar12;
  uint uVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [8];
  TMovieSceneChannelHandle<FMovieSceneParticleChannel> *local_res10;
  UMovieSceneScriptingParticleKey *local_90;
  undefined8 local_88;
  undefined8 local_80;
  FScriptContainerElement *local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  undefined1 local_50 [4];
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res10 = param_1;
  pFVar9 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  if (pFVar9 == (FMovieSceneChannel *)0x0) {
    local_80 = 0;
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get keys.",Error,
               (FName)0x0);
  }
  else {
    local_60 = (void *)0x0;
    local_58 = 0;
    local_70 = (void *)0x0;
    local_68 = 0;
    local_50[0] = 2;
    local_4c = 0;
    local_48 = 2;
    local_44 = 0;
    (**(code **)(pFVar9->_padding_ + 8))(pFVar9,local_50,&local_60,&local_70);
    uVar2 = param_4->ArrayNum;
    uVar14 = (ulonglong)(int)uVar2;
    pFVar15 = (param_4->AllocatorInstance).Data;
    local_78 = pFVar15 + uVar14 * 4;
    while( true ) {
      pFVar4 = local_78;
      if (param_4->ArrayNum != (int)uVar14) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar15 == pFVar4) break;
      uVar3 = *(uint *)pFVar15;
      if (((int)uVar3 < 0) || ((int)local_58 <= (int)uVar3)) {
        local_88 = 0;
        FFrame::KismetExecutionMessage
                  (L"Invalid index for MovieSceneScriptingChannel, failed to get keys by index.",
                   Error,(FName)0x0);
        pFVar15 = pFVar15 + 4;
        uVar14 = (ulonglong)uVar2;
      }
      else {
        pUVar10 = GetTransientPackageAsObject();
        pUVar11 = NewObject<UMovieSceneScriptingParticleKey>(pUVar10);
        uVar13 = 0;
        if ((int)uVar3 < (int)local_68) {
          uVar13 = ~uVar3 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar12 = (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar12;
        }
        *(undefined4 *)&pUVar11->field_0x28 =
             *(undefined4 *)((longlong)local_70 + (longlong)(int)uVar3 * 4);
        TMovieSceneChannelHandle<FMovieSceneChannel>::operator=
                  ((TMovieSceneChannelHandle<FMovieSceneChannel> *)&pUVar11->field_0x40,
                   (TMovieSceneChannelHandle<FMovieSceneChannel> *)local_res10);
        *(int *)&pUVar11->field_0x2c = param_2.WeakPtr.ObjectIndex;
        *(int *)&pUVar11->field_0x30 = param_2.WeakPtr.ObjectSerialNumber;
        *(int *)&pUVar11->field_0x34 = param_3.WeakPtr.ObjectIndex;
        *(int *)&pUVar11->field_0x38 = param_3.WeakPtr.ObjectSerialNumber;
        pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
        local_90 = pUVar11;
        if (((pFVar4 <= (FScriptContainerElement *)&local_90) &&
            ((FScriptContainerElement *)&local_90 <
             pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar12 = (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar12;
        }
        iVar8 = __return_storage_ptr__->ArrayNum;
        if (iVar8 == __return_storage_ptr__->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar8 + 1;
        pFVar15 = pFVar15 + 4;
        *(UMovieSceneScriptingParticleKey **)
         ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_90;
        uVar14 = (ulonglong)uVar2;
      }
    }
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
    }
    param_1 = local_res10;
    if (local_60 != (void *)0x0) {
      FMemory::Free(local_60);
      param_1 = local_res10;
    }
  }
  plVar5 = *(longlong **)&param_1->field_0x8;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return __return_storage_ptr__;
}

// GetKeysInChannelByIndex @ 14c69fbb0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> * __cdecl
TMovieSceneScriptingChannel<FMovieSceneStringChannel,UMovieSceneScriptingStringKey,FString>::
GetKeysInChannelByIndex
          (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TMovieSceneChannelHandle<FMovieSceneStringChannel> *param_1,
          TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
          TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FMovieSceneChannel *pFVar9;
  UObject *pUVar10;
  UMovieSceneScriptingStringKey *pUVar11;
  TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *pTVar12;
  uint uVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [8];
  TMovieSceneChannelHandle<FMovieSceneStringChannel> *local_res10;
  UMovieSceneScriptingStringKey *local_90;
  undefined8 local_88;
  undefined8 local_80;
  FScriptContainerElement *local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  undefined1 local_50 [4];
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res10 = param_1;
  pFVar9 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  if (pFVar9 == (FMovieSceneChannel *)0x0) {
    local_80 = 0;
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get keys.",Error,
               (FName)0x0);
  }
  else {
    local_60 = (void *)0x0;
    local_58 = 0;
    local_70 = (void *)0x0;
    local_68 = 0;
    local_50[0] = 2;
    local_4c = 0;
    local_48 = 2;
    local_44 = 0;
    (**(code **)(pFVar9->_padding_ + 8))(pFVar9,local_50,&local_60,&local_70);
    uVar2 = param_4->ArrayNum;
    uVar14 = (ulonglong)(int)uVar2;
    pFVar15 = (param_4->AllocatorInstance).Data;
    local_78 = pFVar15 + uVar14 * 4;
    while( true ) {
      pFVar4 = local_78;
      if (param_4->ArrayNum != (int)uVar14) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar15 == pFVar4) break;
      uVar3 = *(uint *)pFVar15;
      if (((int)uVar3 < 0) || ((int)local_58 <= (int)uVar3)) {
        local_88 = 0;
        FFrame::KismetExecutionMessage
                  (L"Invalid index for MovieSceneScriptingChannel, failed to get keys by index.",
                   Error,(FName)0x0);
        pFVar15 = pFVar15 + 4;
        uVar14 = (ulonglong)uVar2;
      }
      else {
        pUVar10 = GetTransientPackageAsObject();
        pUVar11 = NewObject<UMovieSceneScriptingStringKey>(pUVar10);
        uVar13 = 0;
        if ((int)uVar3 < (int)local_68) {
          uVar13 = ~uVar3 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar12 = (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar12;
        }
        *(undefined4 *)&pUVar11->field_0x28 =
             *(undefined4 *)((longlong)local_70 + (longlong)(int)uVar3 * 4);
        TMovieSceneChannelHandle<FMovieSceneChannel>::operator=
                  ((TMovieSceneChannelHandle<FMovieSceneChannel> *)&pUVar11->field_0x40,
                   (TMovieSceneChannelHandle<FMovieSceneChannel> *)local_res10);
        *(int *)&pUVar11->field_0x2c = param_2.WeakPtr.ObjectIndex;
        *(int *)&pUVar11->field_0x30 = param_2.WeakPtr.ObjectSerialNumber;
        *(int *)&pUVar11->field_0x34 = param_3.WeakPtr.ObjectIndex;
        *(int *)&pUVar11->field_0x38 = param_3.WeakPtr.ObjectSerialNumber;
        pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
        local_90 = pUVar11;
        if (((pFVar4 <= (FScriptContainerElement *)&local_90) &&
            ((FScriptContainerElement *)&local_90 <
             pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar12 = (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar12;
        }
        iVar8 = __return_storage_ptr__->ArrayNum;
        if (iVar8 == __return_storage_ptr__->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar8 + 1;
        pFVar15 = pFVar15 + 4;
        *(UMovieSceneScriptingStringKey **)
         ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_90;
        uVar14 = (ulonglong)uVar2;
      }
    }
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
    }
    param_1 = local_res10;
    if (local_60 != (void *)0x0) {
      FMemory::Free(local_60);
      param_1 = local_res10;
    }
  }
  plVar5 = *(longlong **)&param_1->field_0x8;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return __return_storage_ptr__;
}

// GetKeysInChannelByIndex @ 14c69fe80

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> * __cdecl
TMovieSceneScriptingChannel<FMovieSceneTextChannel,UMovieSceneScriptingTextKey,FText>::
GetKeysInChannelByIndex
          (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TMovieSceneChannelHandle<FMovieSceneTextChannel> *param_1,
          TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
          TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FMovieSceneChannel *pFVar9;
  UObject *pUVar10;
  UMovieSceneScriptingTextKey *pUVar11;
  TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *pTVar12;
  uint uVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [8];
  TMovieSceneChannelHandle<FMovieSceneTextChannel> *local_res10;
  UMovieSceneScriptingTextKey *local_90;
  undefined8 local_88;
  undefined8 local_80;
  FScriptContainerElement *local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  undefined1 local_50 [4];
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_res10 = param_1;
  pFVar9 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  if (pFVar9 == (FMovieSceneChannel *)0x0) {
    local_80 = 0;
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to get keys.",Error,
               (FName)0x0);
  }
  else {
    local_60 = (void *)0x0;
    local_58 = 0;
    local_70 = (void *)0x0;
    local_68 = 0;
    local_50[0] = 2;
    local_4c = 0;
    local_48 = 2;
    local_44 = 0;
    (**(code **)(pFVar9->_padding_ + 8))(pFVar9,local_50,&local_60,&local_70);
    uVar2 = param_4->ArrayNum;
    uVar14 = (ulonglong)(int)uVar2;
    pFVar15 = (param_4->AllocatorInstance).Data;
    local_78 = pFVar15 + uVar14 * 4;
    while( true ) {
      pFVar4 = local_78;
      if (param_4->ArrayNum != (int)uVar14) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar15 == pFVar4) break;
      uVar3 = *(uint *)pFVar15;
      if (((int)uVar3 < 0) || ((int)local_58 <= (int)uVar3)) {
        local_88 = 0;
        FFrame::KismetExecutionMessage
                  (L"Invalid index for MovieSceneScriptingChannel, failed to get keys by index.",
                   Error,(FName)0x0);
        pFVar15 = pFVar15 + 4;
        uVar14 = (ulonglong)uVar2;
      }
      else {
        pUVar10 = GetTransientPackageAsObject();
        pUVar11 = NewObject<UMovieSceneScriptingTextKey>(pUVar10);
        uVar13 = 0;
        if ((int)uVar3 < (int)local_68) {
          uVar13 = ~uVar3 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar12 = (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar12;
        }
        *(undefined4 *)&pUVar11->field_0x28 =
             *(undefined4 *)((longlong)local_70 + (longlong)(int)uVar3 * 4);
        TMovieSceneChannelHandle<FMovieSceneChannel>::operator=
                  ((TMovieSceneChannelHandle<FMovieSceneChannel> *)&pUVar11->field_0x40,
                   (TMovieSceneChannelHandle<FMovieSceneChannel> *)local_res10);
        *(int *)&pUVar11->field_0x2c = param_2.WeakPtr.ObjectIndex;
        *(int *)&pUVar11->field_0x30 = param_2.WeakPtr.ObjectSerialNumber;
        *(int *)&pUVar11->field_0x34 = param_3.WeakPtr.ObjectIndex;
        *(int *)&pUVar11->field_0x38 = param_3.WeakPtr.ObjectSerialNumber;
        pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
        local_90 = pUVar11;
        if (((pFVar4 <= (FScriptContainerElement *)&local_90) &&
            ((FScriptContainerElement *)&local_90 <
             pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          pTVar12 = (TArray<UMovieSceneScriptingKey_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)();
          return pTVar12;
        }
        iVar8 = __return_storage_ptr__->ArrayNum;
        if (iVar8 == __return_storage_ptr__->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar8 + 1;
        pFVar15 = pFVar15 + 4;
        *(UMovieSceneScriptingTextKey **)
         ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_90;
        uVar14 = (ulonglong)uVar2;
      }
    }
    if (local_70 != (void *)0x0) {
      FMemory::Free(local_70);
    }
    param_1 = local_res10;
    if (local_60 != (void *)0x0) {
      FMemory::Free(local_60);
      param_1 = local_res10;
    }
  }
  plVar5 = *(longlong **)&param_1->field_0x8;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar8 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return __return_storage_ptr__;
}

// TransformKeysInChannel @ 14c6a74d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
TMovieSceneScriptingChannel<FMovieSceneParticleChannel,UMovieSceneScriptingParticleKey,unsigned_char>
::TransformKeysInChannel
          (TMovieSceneChannelHandle<FMovieSceneParticleChannel> *param_1,
          TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
          TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3,FFrameNumber param_4,
          double param_5,FFrameNumber param_6,FSequencerScriptingRange *param_7,
          EMovieSceneTimeUnit param_8)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  FFrameRate FVar5;
  FFrameRate FVar6;
  TRangeBound<FFrameNumber> TVar7;
  TRangeBound<FFrameNumber> TVar8;
  FFrameNumber FVar9;
  bool bVar10;
  UObject *pUVar11;
  FFrameNumber *pFVar12;
  longlong lVar13;
  TRange<FFrameNumber> *pTVar14;
  FMovieSceneChannel *pFVar15;
  FFrameRate FVar16;
  FFrameRate FVar17;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  int local_d8;
  float fStack_d4;
  TRange<FFrameNumber> local_d0;
  FFrameRate local_c0;
  int local_b8;
  float local_b4;
  undefined8 local_b0;
  uint local_a8;
  undefined4 uStack_a4;
  uint local_a0;
  undefined4 uStack_9c;
  UObject *local_98;
  int local_90;
  undefined4 uStack_8c;
  int local_88;
  undefined4 uStack_84;
  FMovieSceneChannel *local_80;
  undefined **local_78;
  int local_70;
  double local_68;
  int local_60;
  TRangeBound<FFrameNumber> local_5c;
  TRangeBound<FFrameNumber> TStack_54;
  TRange<FFrameNumber> local_48;
  
  local_res10 = param_2.WeakPtr;
  local_res18[0] = param_3.WeakPtr;
  pUVar11 = FWeakObjectPtr::Get(&local_res10);
  FVar17.Numerator = 60000;
  FVar17.Denominator = 1;
  if (pUVar11 == (UObject *)0x0) {
    local_b0 = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call GetTickResolution on a null sequence",Error,(FName)0x0);
    local_d8 = 60000;
    fStack_d4 = 1.4013e-45;
    FVar17.Numerator = 60000;
    FVar17.Denominator = 1;
  }
  else {
    lVar13 = (**(code **)(*(longlong *)pUVar11 + 0x2f8))(pUVar11);
    if (lVar13 != 0) {
      FVar17 = *(FFrameRate *)(lVar13 + 0x138);
    }
  }
  FSequencerScriptingRange::ToNative(param_7,&local_d0,FVar17);
  if ((local_d0.LowerBound.Type.Value.Value != '\x02') && (local_d0.UpperBound.Type.Value != '\x02')
     ) {
    FVar9.Value = local_d0.UpperBound.Value.Value;
    if ((local_d0.LowerBound.Type.Value.Value == '\x02') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type != ERangeBoundTypes::Open",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                            ,99,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (local_d0.LowerBound.Value.Value <= FVar9.Value) {
      pFVar12 = TRangeBound<FFrameNumber>::GetValue(&local_d0.UpperBound);
      iVar2 = pFVar12->Value;
      pFVar12 = TRangeBound<FFrameNumber>::GetValue(&local_d0.LowerBound);
      if ((pFVar12->Value != iVar2) ||
         ((local_d0.LowerBound.Type.Value != '\0' && (local_d0.UpperBound.Type.Value != '\0'))))
      goto LAB_14c6a7606;
    }
    local_a8 = CONCAT31(local_a8._1_3_,2);
    uStack_a4 = 0;
    local_d0.LowerBound.Value.Value = 0;
    local_d0.LowerBound._0_4_ = local_a8;
    uStack_9c = 0;
    local_a0 = CONCAT31(local_a0._1_3_,2);
    local_d0.UpperBound.Value.Value = 0;
    local_d0.UpperBound._0_4_ = local_a0;
  }
LAB_14c6a7606:
  if (param_8 == DisplayRate) {
    pUVar11 = FWeakObjectPtr::Get(&local_res10);
    if (pUVar11 == (UObject *)0x0) {
      local_c0 = (FFrameRate)pUVar11;
      FFrame::KismetExecutionMessage
                (L"Cannot call GetDisplayRate on a null sequence",Error,(FName)0x0);
      local_c0.Numerator = 60000;
      local_c0.Denominator = 1;
      FVar16 = local_c0;
    }
    else {
      lVar13 = (**(code **)(*(longlong *)pUVar11 + 0x2f8))(pUVar11);
      if (lVar13 == 0) {
        FVar16.Numerator = 60000;
        FVar16.Denominator = 1;
      }
      else {
        FVar16 = *(FFrameRate *)(lVar13 + 0x140);
      }
    }
    pUVar11 = FWeakObjectPtr::Get(&local_res10);
    if (pUVar11 == (UObject *)0x0) {
      local_98 = pUVar11;
      FFrame::KismetExecutionMessage
                (L"Cannot call GetTickResolution on a null sequence",Error,(FName)0x0);
    }
    else {
      (**(code **)(*(longlong *)pUVar11 + 0x2f8))(pUVar11);
    }
    uStack_8c = 0;
    FVar5.Denominator = 0;
    FVar5.Numerator = param_4.Value;
    local_90 = param_4.Value;
    ConvertFrameTime((FFrameTime)&local_b8,FVar5,FVar16);
    param_4.Value = local_b8;
    if (__real_3f000000 <= local_b4) {
      param_4.Value = local_b8 + 1;
    }
    local_88 = param_6.Value;
    uStack_84 = 0;
    FVar6.Denominator = 0;
    FVar6.Numerator = param_6.Value;
    ConvertFrameTime((FFrameTime)&local_d8,FVar6,FVar16);
    param_6.Value = local_d8;
    if (__real_3f000000 <= fStack_d4) {
      param_6.Value = local_d8 + 1;
    }
    param_7->InternalRate = FVar16;
    pTVar14 = FSequencerScriptingRange::ToNative(param_7,&local_48,FVar17);
    local_d0.LowerBound = pTVar14->LowerBound;
    local_d0.UpperBound = pTVar14->UpperBound;
  }
  bVar10 = FWeakObjectPtr::IsValid(local_res18);
  if (bVar10) {
    FWeakObjectPtr::Get(local_res18);
  }
  pFVar15 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  TVar8 = local_d0.UpperBound;
  TVar7 = local_d0.LowerBound;
  if (pFVar15 == (FMovieSceneChannel *)0x0) {
    local_80 = pFVar15;
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to transform keys in channel."
               ,Error,(FName)0x0);
  }
  else {
    local_78 = &
               ___7FTransformRetiming___TMovieSceneScriptingChannel_UFMovieSceneParticleChannel__VUMovieSceneScriptingParticleKey__E__6B_
    ;
    local_68 = param_5;
    local_5c.Type.Value = local_d0.LowerBound.Type.Value;
    local_5c._1_3_ = local_d0.LowerBound._1_3_;
    local_5c.Value.Value = local_d0.LowerBound.Value.Value;
    TStack_54.Type.Value = local_d0.UpperBound.Type.Value;
    TStack_54._1_3_ = local_d0.UpperBound._1_3_;
    TStack_54.Value.Value = local_d0.UpperBound.Value.Value;
    local_d0.LowerBound = TVar7;
    local_d0.UpperBound = TVar8;
    local_70 = param_4.Value;
    local_60 = param_6.Value;
    (**(code **)(pFVar15->_padding_ + 0x40))(pFVar15,&local_78);
    local_78 = &___7IRetimingInterface_MovieScene_UE__6B_;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}

// TransformKeysInChannel @ 14c6a7820

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
TMovieSceneScriptingChannel<FMovieSceneStringChannel,UMovieSceneScriptingStringKey,FString>::
TransformKeysInChannel
          (TMovieSceneChannelHandle<FMovieSceneStringChannel> *param_1,
          TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
          TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3,FFrameNumber param_4,
          double param_5,FFrameNumber param_6,FSequencerScriptingRange *param_7,
          EMovieSceneTimeUnit param_8)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  FFrameRate FVar5;
  FFrameRate FVar6;
  TRangeBound<FFrameNumber> TVar7;
  TRangeBound<FFrameNumber> TVar8;
  FFrameNumber FVar9;
  bool bVar10;
  UObject *pUVar11;
  FFrameNumber *pFVar12;
  longlong lVar13;
  TRange<FFrameNumber> *pTVar14;
  FMovieSceneChannel *pFVar15;
  FFrameRate FVar16;
  FFrameRate FVar17;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  int local_d8;
  float fStack_d4;
  TRange<FFrameNumber> local_d0;
  FFrameRate local_c0;
  int local_b8;
  float local_b4;
  undefined8 local_b0;
  uint local_a8;
  undefined4 uStack_a4;
  uint local_a0;
  undefined4 uStack_9c;
  UObject *local_98;
  int local_90;
  undefined4 uStack_8c;
  int local_88;
  undefined4 uStack_84;
  FMovieSceneChannel *local_80;
  undefined **local_78;
  int local_70;
  double local_68;
  int local_60;
  TRangeBound<FFrameNumber> local_5c;
  TRangeBound<FFrameNumber> TStack_54;
  TRange<FFrameNumber> local_48;
  
  local_res10 = param_2.WeakPtr;
  local_res18[0] = param_3.WeakPtr;
  pUVar11 = FWeakObjectPtr::Get(&local_res10);
  FVar17.Numerator = 60000;
  FVar17.Denominator = 1;
  if (pUVar11 == (UObject *)0x0) {
    local_b0 = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call GetTickResolution on a null sequence",Error,(FName)0x0);
    local_d8 = 60000;
    fStack_d4 = 1.4013e-45;
    FVar17.Numerator = 60000;
    FVar17.Denominator = 1;
  }
  else {
    lVar13 = (**(code **)(*(longlong *)pUVar11 + 0x2f8))(pUVar11);
    if (lVar13 != 0) {
      FVar17 = *(FFrameRate *)(lVar13 + 0x138);
    }
  }
  FSequencerScriptingRange::ToNative(param_7,&local_d0,FVar17);
  if ((local_d0.LowerBound.Type.Value.Value != '\x02') && (local_d0.UpperBound.Type.Value != '\x02')
     ) {
    FVar9.Value = local_d0.UpperBound.Value.Value;
    if ((local_d0.LowerBound.Type.Value.Value == '\x02') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type != ERangeBoundTypes::Open",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                            ,99,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (local_d0.LowerBound.Value.Value <= FVar9.Value) {
      pFVar12 = TRangeBound<FFrameNumber>::GetValue(&local_d0.UpperBound);
      iVar2 = pFVar12->Value;
      pFVar12 = TRangeBound<FFrameNumber>::GetValue(&local_d0.LowerBound);
      if ((pFVar12->Value != iVar2) ||
         ((local_d0.LowerBound.Type.Value != '\0' && (local_d0.UpperBound.Type.Value != '\0'))))
      goto LAB_14c6a7956;
    }
    local_a8 = CONCAT31(local_a8._1_3_,2);
    uStack_a4 = 0;
    local_d0.LowerBound.Value.Value = 0;
    local_d0.LowerBound._0_4_ = local_a8;
    uStack_9c = 0;
    local_a0 = CONCAT31(local_a0._1_3_,2);
    local_d0.UpperBound.Value.Value = 0;
    local_d0.UpperBound._0_4_ = local_a0;
  }
LAB_14c6a7956:
  if (param_8 == DisplayRate) {
    pUVar11 = FWeakObjectPtr::Get(&local_res10);
    if (pUVar11 == (UObject *)0x0) {
      local_c0 = (FFrameRate)pUVar11;
      FFrame::KismetExecutionMessage
                (L"Cannot call GetDisplayRate on a null sequence",Error,(FName)0x0);
      local_c0.Numerator = 60000;
      local_c0.Denominator = 1;
      FVar16 = local_c0;
    }
    else {
      lVar13 = (**(code **)(*(longlong *)pUVar11 + 0x2f8))(pUVar11);
      if (lVar13 == 0) {
        FVar16.Numerator = 60000;
        FVar16.Denominator = 1;
      }
      else {
        FVar16 = *(FFrameRate *)(lVar13 + 0x140);
      }
    }
    pUVar11 = FWeakObjectPtr::Get(&local_res10);
    if (pUVar11 == (UObject *)0x0) {
      local_98 = pUVar11;
      FFrame::KismetExecutionMessage
                (L"Cannot call GetTickResolution on a null sequence",Error,(FName)0x0);
    }
    else {
      (**(code **)(*(longlong *)pUVar11 + 0x2f8))(pUVar11);
    }
    uStack_8c = 0;
    FVar5.Denominator = 0;
    FVar5.Numerator = param_4.Value;
    local_90 = param_4.Value;
    ConvertFrameTime((FFrameTime)&local_b8,FVar5,FVar16);
    param_4.Value = local_b8;
    if (__real_3f000000 <= local_b4) {
      param_4.Value = local_b8 + 1;
    }
    local_88 = param_6.Value;
    uStack_84 = 0;
    FVar6.Denominator = 0;
    FVar6.Numerator = param_6.Value;
    ConvertFrameTime((FFrameTime)&local_d8,FVar6,FVar16);
    param_6.Value = local_d8;
    if (__real_3f000000 <= fStack_d4) {
      param_6.Value = local_d8 + 1;
    }
    param_7->InternalRate = FVar16;
    pTVar14 = FSequencerScriptingRange::ToNative(param_7,&local_48,FVar17);
    local_d0.LowerBound = pTVar14->LowerBound;
    local_d0.UpperBound = pTVar14->UpperBound;
  }
  bVar10 = FWeakObjectPtr::IsValid(local_res18);
  if (bVar10) {
    FWeakObjectPtr::Get(local_res18);
  }
  pFVar15 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  TVar8 = local_d0.UpperBound;
  TVar7 = local_d0.LowerBound;
  if (pFVar15 == (FMovieSceneChannel *)0x0) {
    local_80 = pFVar15;
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to transform keys in channel."
               ,Error,(FName)0x0);
  }
  else {
    local_78 = &
               ___7FTransformRetiming___TMovieSceneScriptingChannel_UFMovieSceneStringChannel__VUMovieSceneScriptingStringKey__VFString____6B_
    ;
    local_68 = param_5;
    local_5c.Type.Value = local_d0.LowerBound.Type.Value;
    local_5c._1_3_ = local_d0.LowerBound._1_3_;
    local_5c.Value.Value = local_d0.LowerBound.Value.Value;
    TStack_54.Type.Value = local_d0.UpperBound.Type.Value;
    TStack_54._1_3_ = local_d0.UpperBound._1_3_;
    TStack_54.Value.Value = local_d0.UpperBound.Value.Value;
    local_d0.LowerBound = TVar7;
    local_d0.UpperBound = TVar8;
    local_70 = param_4.Value;
    local_60 = param_6.Value;
    (**(code **)(pFVar15->_padding_ + 0x40))(pFVar15,&local_78);
    local_78 = &___7IRetimingInterface_MovieScene_UE__6B_;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}

// TransformKeysInChannel @ 14c6a7b70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
TMovieSceneScriptingChannel<FMovieSceneTextChannel,UMovieSceneScriptingTextKey,FText>::
TransformKeysInChannel
          (TMovieSceneChannelHandle<FMovieSceneTextChannel> *param_1,
          TWeakObjectPtr<UMovieSceneSequence,FWeakObjectPtr> param_2,
          TWeakObjectPtr<UMovieSceneSection,FWeakObjectPtr> param_3,FFrameNumber param_4,
          double param_5,FFrameNumber param_6,FSequencerScriptingRange *param_7,
          EMovieSceneTimeUnit param_8)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  FFrameRate FVar5;
  FFrameRate FVar6;
  TRangeBound<FFrameNumber> TVar7;
  TRangeBound<FFrameNumber> TVar8;
  FFrameNumber FVar9;
  bool bVar10;
  UObject *pUVar11;
  FFrameNumber *pFVar12;
  longlong lVar13;
  TRange<FFrameNumber> *pTVar14;
  FMovieSceneChannel *pFVar15;
  FFrameRate FVar16;
  FFrameRate FVar17;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  int local_d8;
  float fStack_d4;
  TRange<FFrameNumber> local_d0;
  FFrameRate local_c0;
  int local_b8;
  float local_b4;
  undefined8 local_b0;
  uint local_a8;
  undefined4 uStack_a4;
  uint local_a0;
  undefined4 uStack_9c;
  UObject *local_98;
  int local_90;
  undefined4 uStack_8c;
  int local_88;
  undefined4 uStack_84;
  FMovieSceneChannel *local_80;
  undefined **local_78;
  int local_70;
  double local_68;
  int local_60;
  TRangeBound<FFrameNumber> local_5c;
  TRangeBound<FFrameNumber> TStack_54;
  TRange<FFrameNumber> local_48;
  
  local_res10 = param_2.WeakPtr;
  local_res18[0] = param_3.WeakPtr;
  pUVar11 = FWeakObjectPtr::Get(&local_res10);
  FVar17.Numerator = 60000;
  FVar17.Denominator = 1;
  if (pUVar11 == (UObject *)0x0) {
    local_b0 = 0;
    FFrame::KismetExecutionMessage
              (L"Cannot call GetTickResolution on a null sequence",Error,(FName)0x0);
    local_d8 = 60000;
    fStack_d4 = 1.4013e-45;
    FVar17.Numerator = 60000;
    FVar17.Denominator = 1;
  }
  else {
    lVar13 = (**(code **)(*(longlong *)pUVar11 + 0x2f8))(pUVar11);
    if (lVar13 != 0) {
      FVar17 = *(FFrameRate *)(lVar13 + 0x138);
    }
  }
  FSequencerScriptingRange::ToNative(param_7,&local_d0,FVar17);
  if ((local_d0.LowerBound.Type.Value.Value != '\x02') && (local_d0.UpperBound.Type.Value != '\x02')
     ) {
    FVar9.Value = local_d0.UpperBound.Value.Value;
    if ((local_d0.LowerBound.Type.Value.Value == '\x02') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Type != ERangeBoundTypes::Open",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                            ,99,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (local_d0.LowerBound.Value.Value <= FVar9.Value) {
      pFVar12 = TRangeBound<FFrameNumber>::GetValue(&local_d0.UpperBound);
      iVar2 = pFVar12->Value;
      pFVar12 = TRangeBound<FFrameNumber>::GetValue(&local_d0.LowerBound);
      if ((pFVar12->Value != iVar2) ||
         ((local_d0.LowerBound.Type.Value != '\0' && (local_d0.UpperBound.Type.Value != '\0'))))
      goto LAB_14c6a7ca6;
    }
    local_a8 = CONCAT31(local_a8._1_3_,2);
    uStack_a4 = 0;
    local_d0.LowerBound.Value.Value = 0;
    local_d0.LowerBound._0_4_ = local_a8;
    uStack_9c = 0;
    local_a0 = CONCAT31(local_a0._1_3_,2);
    local_d0.UpperBound.Value.Value = 0;
    local_d0.UpperBound._0_4_ = local_a0;
  }
LAB_14c6a7ca6:
  if (param_8 == DisplayRate) {
    pUVar11 = FWeakObjectPtr::Get(&local_res10);
    if (pUVar11 == (UObject *)0x0) {
      local_c0 = (FFrameRate)pUVar11;
      FFrame::KismetExecutionMessage
                (L"Cannot call GetDisplayRate on a null sequence",Error,(FName)0x0);
      local_c0.Numerator = 60000;
      local_c0.Denominator = 1;
      FVar16 = local_c0;
    }
    else {
      lVar13 = (**(code **)(*(longlong *)pUVar11 + 0x2f8))(pUVar11);
      if (lVar13 == 0) {
        FVar16.Numerator = 60000;
        FVar16.Denominator = 1;
      }
      else {
        FVar16 = *(FFrameRate *)(lVar13 + 0x140);
      }
    }
    pUVar11 = FWeakObjectPtr::Get(&local_res10);
    if (pUVar11 == (UObject *)0x0) {
      local_98 = pUVar11;
      FFrame::KismetExecutionMessage
                (L"Cannot call GetTickResolution on a null sequence",Error,(FName)0x0);
    }
    else {
      (**(code **)(*(longlong *)pUVar11 + 0x2f8))(pUVar11);
    }
    uStack_8c = 0;
    FVar5.Denominator = 0;
    FVar5.Numerator = param_4.Value;
    local_90 = param_4.Value;
    ConvertFrameTime((FFrameTime)&local_b8,FVar5,FVar16);
    param_4.Value = local_b8;
    if (__real_3f000000 <= local_b4) {
      param_4.Value = local_b8 + 1;
    }
    local_88 = param_6.Value;
    uStack_84 = 0;
    FVar6.Denominator = 0;
    FVar6.Numerator = param_6.Value;
    ConvertFrameTime((FFrameTime)&local_d8,FVar6,FVar16);
    param_6.Value = local_d8;
    if (__real_3f000000 <= fStack_d4) {
      param_6.Value = local_d8 + 1;
    }
    param_7->InternalRate = FVar16;
    pTVar14 = FSequencerScriptingRange::ToNative(param_7,&local_48,FVar17);
    local_d0.LowerBound = pTVar14->LowerBound;
    local_d0.UpperBound = pTVar14->UpperBound;
  }
  bVar10 = FWeakObjectPtr::IsValid(local_res18);
  if (bVar10) {
    FWeakObjectPtr::Get(local_res18);
  }
  pFVar15 = FMovieSceneChannelHandle::Get((FMovieSceneChannelHandle *)param_1);
  TVar8 = local_d0.UpperBound;
  TVar7 = local_d0.LowerBound;
  if (pFVar15 == (FMovieSceneChannel *)0x0) {
    local_80 = pFVar15;
    FFrame::KismetExecutionMessage
              (L"Invalid ChannelHandle for MovieSceneScriptingChannel, failed to transform keys in channel."
               ,Error,(FName)0x0);
  }
  else {
    local_78 = &
               ___7FTransformRetiming___TMovieSceneScriptingChannel_UFMovieSceneTextChannel__VUMovieSceneScriptingTextKey__VFText____6B_
    ;
    local_68 = param_5;
    local_5c.Type.Value = local_d0.LowerBound.Type.Value;
    local_5c._1_3_ = local_d0.LowerBound._1_3_;
    local_5c.Value.Value = local_d0.LowerBound.Value.Value;
    TStack_54.Type.Value = local_d0.UpperBound.Type.Value;
    TStack_54._1_3_ = local_d0.UpperBound._1_3_;
    TStack_54.Value.Value = local_d0.UpperBound.Value.Value;
    local_d0.LowerBound = TVar7;
    local_d0.UpperBound = TVar8;
    local_70 = param_4.Value;
    local_60 = param_6.Value;
    (**(code **)(pFVar15->_padding_ + 0x40))(pFVar15,&local_78);
    local_78 = &___7IRetimingInterface_MovieScene_UE__6B_;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  return;
}

