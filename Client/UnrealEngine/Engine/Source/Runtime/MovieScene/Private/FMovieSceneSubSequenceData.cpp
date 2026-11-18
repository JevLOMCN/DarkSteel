// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 12

// StaticStruct @ 1461684d0

UScriptStruct * __cdecl FMovieSceneSubSequenceData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSubSequenceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneSubSequenceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSubSequenceData,(UObject *)pUVar1,
                         L"MovieSceneSubSequenceData");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneSubSequenceData.OuterSingleton;
}

// FMovieSceneSubSequenceData @ 146180510

FMovieSceneSubSequenceData * __thiscall
FMovieSceneSubSequenceData::FMovieSceneSubSequenceData
          (FMovieSceneSubSequenceData *this,FMovieSceneSubSequenceData *param_1)

{
  undefined1 *puVar1;
  FName FVar2;
  TRangeBound<FFrameNumber> TVar3;
  undefined8 uVar4;
  FFrameNumber FVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  FVar2 = (param_1->Sequence).AssetPath.AssetName;
  (this->Sequence).AssetPath.PackageName = (param_1->Sequence).AssetPath.PackageName;
  (this->Sequence).AssetPath.AssetName = FVar2;
  (this->Sequence).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sequence).SubPathString.Data.AllocatorInstance.Data =
       (param_1->Sequence).SubPathString.Data.AllocatorInstance.Data;
  (param_1->Sequence).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sequence).SubPathString.Data.ArrayNum = (param_1->Sequence).SubPathString.Data.ArrayNum;
  (this->Sequence).SubPathString.Data.ArrayMax = (param_1->Sequence).SubPathString.Data.ArrayMax;
  (param_1->Sequence).SubPathString.Data.ArrayNum = 0;
  (param_1->Sequence).SubPathString.Data.ArrayMax = 0;
  FVar5.Value = (param_1->OuterToInnerTransform).LinearTransform.Offset.FrameNumber.Value;
  (this->OuterToInnerTransform).LinearTransform.TimeScale =
       (param_1->OuterToInnerTransform).LinearTransform.TimeScale;
  (this->OuterToInnerTransform).LinearTransform.Offset.FrameNumber = (FFrameNumber)FVar5.Value;
  (this->OuterToInnerTransform).LinearTransform.Offset.SubFrame =
       (param_1->OuterToInnerTransform).LinearTransform.Offset.SubFrame;
  (this->OuterToInnerTransform).NestedTransforms.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->OuterToInnerTransform).NestedTransforms.AllocatorInstance.Data =
       (param_1->OuterToInnerTransform).NestedTransforms.AllocatorInstance.Data;
  (param_1->OuterToInnerTransform).NestedTransforms.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->OuterToInnerTransform).NestedTransforms.ArrayNum =
       (param_1->OuterToInnerTransform).NestedTransforms.ArrayNum;
  (this->OuterToInnerTransform).NestedTransforms.ArrayMax =
       (param_1->OuterToInnerTransform).NestedTransforms.ArrayMax;
  (param_1->OuterToInnerTransform).NestedTransforms.ArrayNum = 0;
  (param_1->OuterToInnerTransform).NestedTransforms.ArrayMax = 0;
  FVar5.Value = (param_1->RootToSequenceTransform).LinearTransform.Offset.FrameNumber.Value;
  (this->RootToSequenceTransform).LinearTransform.TimeScale =
       (param_1->RootToSequenceTransform).LinearTransform.TimeScale;
  (this->RootToSequenceTransform).LinearTransform.Offset.FrameNumber = (FFrameNumber)FVar5.Value;
  (this->RootToSequenceTransform).LinearTransform.Offset.SubFrame =
       (param_1->RootToSequenceTransform).LinearTransform.Offset.SubFrame;
  (this->RootToSequenceTransform).NestedTransforms.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RootToSequenceTransform).NestedTransforms.AllocatorInstance.Data =
       (param_1->RootToSequenceTransform).NestedTransforms.AllocatorInstance.Data;
  (param_1->RootToSequenceTransform).NestedTransforms.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RootToSequenceTransform).NestedTransforms.ArrayNum =
       (param_1->RootToSequenceTransform).NestedTransforms.ArrayNum;
  (this->RootToSequenceTransform).NestedTransforms.ArrayMax =
       (param_1->RootToSequenceTransform).NestedTransforms.ArrayMax;
  (param_1->RootToSequenceTransform).NestedTransforms.ArrayNum = 0;
  (param_1->RootToSequenceTransform).NestedTransforms.ArrayMax = 0;
  this->TickResolution = param_1->TickResolution;
  (this->DeterministicSequenceID).Value = (param_1->DeterministicSequenceID).Value;
  TVar3 = (param_1->PlayRange).Value.UpperBound;
  (this->PlayRange).Value.LowerBound = (param_1->PlayRange).Value.LowerBound;
  (this->PlayRange).Value.UpperBound = TVar3;
  TVar3 = (param_1->ParentPlayRange).Value.UpperBound;
  (this->ParentPlayRange).Value.LowerBound = (param_1->ParentPlayRange).Value.LowerBound;
  (this->ParentPlayRange).Value.UpperBound = TVar3;
  TVar3 = (param_1->PreRollRange).Value.UpperBound;
  (this->PreRollRange).Value.LowerBound = (param_1->PreRollRange).Value.LowerBound;
  (this->PreRollRange).Value.UpperBound = TVar3;
  TVar3 = (param_1->PostRollRange).Value.UpperBound;
  (this->PostRollRange).Value.LowerBound = (param_1->PostRollRange).Value.LowerBound;
  (this->PostRollRange).Value.UpperBound = TVar3;
  this->HierarchicalBias = param_1->HierarchicalBias;
  this->AccumulatedFlags = param_1->AccumulatedFlags;
  this->bCanLoop = param_1->bCanLoop;
  puVar1 = &(this->InstanceData).field_0x10;
  *puVar1 = *puVar1 & 0xfe;
  puVar1 = &(this->InstanceData).field_0x10;
  *puVar1 = *puVar1 | 2;
  TInlineValue<FMovieSceneSequenceInstanceData,16,8>::operator=
            ((TInlineValue<FMovieSceneSequenceInstanceData,16,8> *)&this->InstanceData,
             (TInlineValue<FMovieSceneSequenceInstanceData,16,8> *)&param_1->InstanceData);
  this->SectionPath = param_1->SectionPath;
  *(undefined8 *)&(this->WeakCondition).SoftObjectPtr =
       *(undefined8 *)&(param_1->WeakCondition).SoftObjectPtr;
  uVar4 = *(undefined8 *)&(param_1->WeakCondition).SoftObjectPtr.field_0x10;
  *(undefined8 *)&(this->WeakCondition).SoftObjectPtr.field_0x8 =
       *(undefined8 *)&(param_1->WeakCondition).SoftObjectPtr.field_0x8;
  *(undefined8 *)&(this->WeakCondition).SoftObjectPtr.field_0x10 = uVar4;
  *(undefined8 *)&(this->WeakCondition).SoftObjectPtr.field_0x18 = 0;
  *(undefined8 *)&(this->WeakCondition).SoftObjectPtr.field_0x18 =
       *(undefined8 *)&(param_1->WeakCondition).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(param_1->WeakCondition).SoftObjectPtr.field_0x18 = 0;
  *(undefined4 *)&(this->WeakCondition).SoftObjectPtr.field_0x20 =
       *(undefined4 *)&(param_1->WeakCondition).SoftObjectPtr.field_0x20;
  *(undefined4 *)&(this->WeakCondition).SoftObjectPtr.field_0x24 =
       *(undefined4 *)&(param_1->WeakCondition).SoftObjectPtr.field_0x24;
  *(undefined8 *)&(param_1->WeakCondition).SoftObjectPtr.field_0x20 = 0;
  (this->CachedSequence).WeakPtr = (param_1->CachedSequence).WeakPtr;
  uVar6 = (param_1->SubSectionSignature).B;
  uVar7 = (param_1->SubSectionSignature).C;
  uVar8 = (param_1->SubSectionSignature).D;
  (this->SubSectionSignature).A = (param_1->SubSectionSignature).A;
  (this->SubSectionSignature).B = uVar6;
  (this->SubSectionSignature).C = uVar7;
  (this->SubSectionSignature).D = uVar8;
  return this;
}

// FMovieSceneSubSequenceData @ 1461806d0

FMovieSceneSubSequenceData * __thiscall
FMovieSceneSubSequenceData::FMovieSceneSubSequenceData
          (FMovieSceneSubSequenceData *this,FMovieSceneSubSequenceData *param_1)

{
  TRangeBound<FFrameNumber> TVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  FSoftObjectPath::FSoftObjectPath(&this->Sequence,&param_1->Sequence);
  FMovieSceneSequenceTransform::FMovieSceneSequenceTransform
            (&this->OuterToInnerTransform,&param_1->OuterToInnerTransform);
  FMovieSceneSequenceTransform::FMovieSceneSequenceTransform
            (&this->RootToSequenceTransform,&param_1->RootToSequenceTransform);
  this->TickResolution = param_1->TickResolution;
  (this->DeterministicSequenceID).Value = (param_1->DeterministicSequenceID).Value;
  TVar1 = (param_1->PlayRange).Value.UpperBound;
  (this->PlayRange).Value.LowerBound = (param_1->PlayRange).Value.LowerBound;
  (this->PlayRange).Value.UpperBound = TVar1;
  TVar1 = (param_1->ParentPlayRange).Value.UpperBound;
  (this->ParentPlayRange).Value.LowerBound = (param_1->ParentPlayRange).Value.LowerBound;
  (this->ParentPlayRange).Value.UpperBound = TVar1;
  TVar1 = (param_1->PreRollRange).Value.UpperBound;
  (this->PreRollRange).Value.LowerBound = (param_1->PreRollRange).Value.LowerBound;
  (this->PreRollRange).Value.UpperBound = TVar1;
  TVar1 = (param_1->PostRollRange).Value.UpperBound;
  (this->PostRollRange).Value.LowerBound = (param_1->PostRollRange).Value.LowerBound;
  (this->PostRollRange).Value.UpperBound = TVar1;
  this->HierarchicalBias = param_1->HierarchicalBias;
  this->AccumulatedFlags = param_1->AccumulatedFlags;
  this->bCanLoop = param_1->bCanLoop;
  FMovieSceneSequenceInstanceDataPtr::FMovieSceneSequenceInstanceDataPtr
            (&this->InstanceData,&param_1->InstanceData);
  this->SectionPath = param_1->SectionPath;
  *(undefined8 *)&(this->WeakCondition).SoftObjectPtr =
       *(undefined8 *)&(param_1->WeakCondition).SoftObjectPtr;
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)&(this->WeakCondition).SoftObjectPtr.field_0x8,
             (FSoftObjectPath *)&(param_1->WeakCondition).SoftObjectPtr.field_0x8);
  (this->CachedSequence).WeakPtr = (param_1->CachedSequence).WeakPtr;
  uVar2 = (param_1->SubSectionSignature).B;
  uVar3 = (param_1->SubSectionSignature).C;
  uVar4 = (param_1->SubSectionSignature).D;
  (this->SubSectionSignature).A = (param_1->SubSectionSignature).A;
  (this->SubSectionSignature).B = uVar2;
  (this->SubSectionSignature).C = uVar3;
  (this->SubSectionSignature).D = uVar4;
  return this;
}

// FMovieSceneSubSequenceData @ 1461807e0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieSceneSubSequenceData * __thiscall
FMovieSceneSubSequenceData::FMovieSceneSubSequenceData
          (FMovieSceneSubSequenceData *this,UMovieSceneSubSection *param_1)

{
  FMovieSceneSequenceTransform *this_00;
  TArray<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  undefined1 *this_01;
  undefined1 *puVar4;
  uchar uVar5;
  int iVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  TRangeBound<FFrameNumber> TVar10;
  TRangeBound<FFrameNumber> TVar11;
  TRangeBound<FFrameNumber> TVar12;
  TRangeBound<FFrameNumber> TVar13;
  TRangeBound<FFrameNumber> TVar14;
  TRangeBound<FFrameNumber> TVar15;
  TRangeBound<FFrameNumber> TVar16;
  TRangeBound<FFrameNumber> TVar17;
  TRangeBound<FFrameNumber> TVar18;
  TRangeBound<FFrameNumber> TVar19;
  TRangeBound<FFrameNumber> TVar20;
  bool bVar21;
  char cVar22;
  UMovieSceneSequence *pUVar23;
  TRangeBound<FFrameNumber> TVar24;
  longlong lVar25;
  FMovieSceneSubSequenceData *pFVar26;
  FMovieSceneSequenceTransform *pFVar27;
  FFrameTime FVar28;
  UClass *pUVar29;
  UMovieSceneTrack *pUVar30;
  FFrameNumber FVar31;
  TRangeBound<FFrameNumber> TVar32;
  int iVar33;
  uint uVar34;
  FMovieSceneNestedSequenceTransform *pFVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  FMovieSceneNestedSequenceTransform *pFVar38;
  undefined4 uVar39;
  undefined1 local_res8 [8];
  UMovieSceneSubSection *local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_220 [4];
  TRange<FFrameTime> local_21c;
  uint local_200;
  undefined4 uStack_1fc;
  uint local_1f8;
  undefined4 uStack_1f4;
  uint local_1f0;
  undefined4 uStack_1ec;
  uint local_1e8;
  undefined4 uStack_1e4;
  TRangeBound<FFrameNumber> local_1e0;
  TRangeBound<FFrameNumber> TStack_1d8;
  undefined4 local_1d0;
  int iStack_1cc;
  uint local_1c8;
  int iStack_1c4;
  uint local_1c0;
  undefined4 uStack_1bc;
  uint local_1b8;
  undefined4 uStack_1b4;
  uint local_1b0;
  undefined4 uStack_1ac;
  uint local_1a8;
  undefined4 uStack_1a4;
  uint local_1a0;
  undefined4 uStack_19c;
  uint local_198;
  undefined4 uStack_194;
  uint local_190;
  undefined4 uStack_18c;
  uint local_188;
  undefined4 uStack_184;
  undefined4 local_180;
  int iStack_17c;
  undefined4 local_178;
  int iStack_174;
  uint local_170;
  int iStack_16c;
  ulonglong local_168;
  ulonglong local_160;
  ulonglong local_158;
  ulonglong local_150;
  ulonglong local_148;
  ulonglong local_140;
  uint local_138;
  undefined4 uStack_134;
  uint local_130;
  undefined4 uStack_12c;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  uint local_11c;
  int iStack_118;
  undefined4 uStack_114;
  uint local_110;
  int iStack_10c;
  undefined4 uStack_108;
  uint local_104;
  int iStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  int iStack_f4;
  uint uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  int iStack_e4;
  uint uStack_e0;
  undefined4 uStack_dc;
  TRange<FFrameTime> local_d8;
  undefined4 local_c0 [2];
  undefined8 local_b8;
  UMovieSceneCondition *local_b0;
  TRangeBound<FFrameNumber> local_a8;
  FFrameTime local_a0;
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  FMovieSceneSequenceTransform local_78;
  
  local_res10 = param_1;
  pUVar23 = UMovieSceneSubSection::GetSequence(param_1);
  lVar25 = 0;
  (this->Sequence).AssetPath.PackageName.ComparisonIndex = 0;
  (this->Sequence).AssetPath.PackageName.Number = 0;
  (this->Sequence).AssetPath.AssetName.ComparisonIndex = 0;
  (this->Sequence).AssetPath.AssetName.Number = 0;
  (this->Sequence).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sequence).SubPathString.Data.ArrayNum = 0;
  (this->Sequence).SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&this->Sequence,(UObject *)pUVar23);
  this_00 = &this->OuterToInnerTransform;
  pTVar1 = &(this->RootToSequenceTransform).NestedTransforms;
  (this_00->LinearTransform).TimeScale = 1.0;
  (this_00->LinearTransform).Offset.FrameNumber = 0;
  pTVar2 = &(this->OuterToInnerTransform).NestedTransforms;
  (this->RootToSequenceTransform).NestedTransforms.ArrayMax = 0;
  piVar3 = &(this->RootToSequenceTransform).NestedTransforms.ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->OuterToInnerTransform).NestedTransforms.ArrayNum = 0;
  (this->OuterToInnerTransform).NestedTransforms.ArrayMax = 0;
  (this->OuterToInnerTransform).LinearTransform.Offset.SubFrame = 0.0;
  (this->RootToSequenceTransform).LinearTransform.TimeScale = 1.0;
  (this->RootToSequenceTransform).LinearTransform.Offset.FrameNumber = 0;
  (this->RootToSequenceTransform).LinearTransform.Offset.SubFrame = 0.0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->RootToSequenceTransform).NestedTransforms.ArrayNum = 0;
  (this->TickResolution).Numerator = 60000;
  (this->TickResolution).Denominator = 1;
  UMovieSceneSubSection::GetSequenceID(param_1);
  uVar34 = local_1c8;
  local_138 = local_138 & 0xffffff00;
  uStack_134 = 0;
  TVar24.Value.Value = 0;
  TVar24._0_4_ = local_138;
  (this->PlayRange).Value.LowerBound = TVar24;
  local_130 = local_130 & 0xffffff00;
  uStack_12c = 0;
  TVar18.Value.Value = 0;
  TVar18._0_4_ = local_130;
  (this->PlayRange).Value.UpperBound = TVar18;
  TVar32 = (TRangeBound<FFrameNumber>)param_1->_padding_;
  local_a8 = (TRangeBound<FFrameNumber>)param_1->_padding_;
  if (TVar32.Type.Value.Value == '\0') {
    iStack_1cc = TVar32.Value.Value.Value + 1;
    local_1d0 = CONCAT31(local_1d0._1_3_,1);
    TVar32.Value.Value = iStack_1cc;
    TVar32._0_4_ = local_1d0;
  }
  TVar24 = local_a8;
  if (local_a8.Type.Value.Value == '\x01') {
    iStack_1c4 = local_a8.Value.Value + 1;
    local_1c8 = local_1c8 & 0xffffff00;
    TVar24 = (TRangeBound<FFrameNumber>)(CONCAT44(iStack_1c4,uVar34) & 0xffffffffffffff00);
  }
  (this->ParentPlayRange).Value.LowerBound = TVar32;
  (this->ParentPlayRange).Value.UpperBound = TVar24;
  this_01 = &(this->WeakCondition).SoftObjectPtr.field_0x18;
  local_1c0 = local_1c0 & 0xffffff00;
  uStack_1bc = 0;
  TVar10.Value.Value = 0;
  TVar10._0_4_ = local_1c0;
  (this->PreRollRange).Value.LowerBound = TVar10;
  local_1b8 = local_1b8 & 0xffffff00;
  uStack_1b4 = 0;
  TVar11.Value.Value = 0;
  TVar11._0_4_ = local_1b8;
  (this->PreRollRange).Value.UpperBound = TVar11;
  local_1b0 = local_1b0 & 0xffffff00;
  uStack_1ac = 0;
  TVar12.Value.Value = 0;
  TVar12._0_4_ = local_1b0;
  (this->PostRollRange).Value.LowerBound = TVar12;
  local_1a8 = local_1a8 & 0xffffff00;
  uStack_1a4 = 0;
  TVar13.Value.Value = 0;
  TVar13._0_4_ = local_1a8;
  (this->PostRollRange).Value.UpperBound = TVar13;
  this->HierarchicalBias = (short)(param_1->Parameters).HierarchicalBias;
  this->AccumulatedFlags = (param_1->Parameters).Flags;
  bVar21 = (param_1->Parameters).bCanLoop;
  puVar4 = &(this->InstanceData).field_0x10;
  *puVar4 = *puVar4 & 0xfe;
  puVar4 = &(this->InstanceData).field_0x10;
  *puVar4 = *puVar4 | 2;
  this->bCanLoop = bVar21;
  (this->SectionPath).ComparisonIndex = 0;
  (this->SectionPath).Number = 0;
  *(undefined8 *)this_01 = 0;
  *(undefined8 *)&(this->WeakCondition).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->WeakCondition).SoftObjectPtr = 0;
  *(undefined8 *)&(this->WeakCondition).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->WeakCondition).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_01,0);
  (this->CachedSequence).WeakPtr = (FWeakObjectPtr)0x0;
  uVar8 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  uVar9 = *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  local_1a0 = local_1a0 & 0xffffff00;
  uStack_19c = 0;
  TVar14.Value.Value = 0;
  TVar14._0_4_ = local_1a0;
  (this->SubSectionSignature).A = (int)uVar8;
  (this->SubSectionSignature).B = (int)((ulonglong)uVar8 >> 0x20);
  (this->SubSectionSignature).C = (int)uVar9;
  (this->SubSectionSignature).D = (int)((ulonglong)uVar9 >> 0x20);
  (this->PreRollRange).Value.LowerBound = TVar14;
  local_198 = local_198 & 0xffffff00;
  uStack_194 = 0;
  TVar15.Value.Value = 0;
  TVar15._0_4_ = local_198;
  (this->PreRollRange).Value.UpperBound = TVar15;
  local_190 = local_190 & 0xffffff00;
  uStack_18c = 0;
  TVar16.Value.Value = 0;
  TVar16._0_4_ = local_190;
  (this->PostRollRange).Value.LowerBound = TVar16;
  local_188 = local_188 & 0xffffff00;
  uStack_184 = 0;
  TVar17.Value.Value = 0;
  TVar17._0_4_ = local_188;
  (this->PostRollRange).Value.UpperBound = TVar17;
  pUVar23 = GetSequence(this);
  if (((pUVar23 == (UMovieSceneSequence *)0x0) ||
      (lVar25 = (**(code **)(pUVar23->_padding_ + 0x2f8))(pUVar23), lVar25 == 0)) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("MovieScenePtr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieSceneSequenceHierarchy.cpp"
                          ,0x3b,L"Attempting to construct sub sequence data with a null sequence."),
     bVar21)) {
    pcVar7 = (code *)swi(3);
    pFVar26 = (FMovieSceneSubSequenceData *)(*pcVar7)();
    return pFVar26;
  }
  this->TickResolution = *(FFrameRate *)(lVar25 + 0x138);
  if ((((this->ParentPlayRange).Value.LowerBound.Type.Value == '\x02') ||
      ((this->ParentPlayRange).Value.UpperBound.Type.Value == '\x02')) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParentPlayRange.GetLowerBound().IsClosed() && ParentPlayRange.GetUpperBound().IsClosed()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieSceneSequenceHierarchy.cpp"
                          ,0x3f,L"Use of open (infinite) bounds with sub sections is not supported."
                         ), bVar21)) {
    pcVar7 = (code *)swi(3);
    pFVar26 = (FMovieSceneSubSequenceData *)(*pcVar7)();
    return pFVar26;
  }
  pFVar27 = UMovieSceneSubSection::OuterToInnerTransform_NoInnerTimeWarp(param_1,&local_78);
  FMovieSceneSequenceTransform::operator=(this_00,pFVar27);
  if (local_78.NestedTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.NestedTransforms.AllocatorInstance.Data);
  }
  UMovieSceneSubSection::AppendInnerTimeWarpTransform(param_1,this_00);
  FVar31.Value = (this_00->LinearTransform).Offset.FrameNumber.Value;
  (this->RootToSequenceTransform).LinearTransform.TimeScale = (this_00->LinearTransform).TimeScale;
  (this->RootToSequenceTransform).LinearTransform.Offset.FrameNumber = (FFrameNumber)FVar31.Value;
  (this->RootToSequenceTransform).LinearTransform.Offset.SubFrame =
       (this->OuterToInnerTransform).LinearTransform.Offset.SubFrame;
  if (pTVar1 != pTVar2) {
    iVar6 = (this->OuterToInnerTransform).NestedTransforms.ArrayNum;
    iVar33 = *piVar3;
    pFVar35 = (FMovieSceneNestedSequenceTransform *)(pTVar2->AllocatorInstance).Data;
    (this->RootToSequenceTransform).NestedTransforms.ArrayNum = iVar6;
    if ((iVar6 == 0) && (iVar33 == 0)) {
      *piVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,iVar6,iVar33,&pTVar1->AllocatorInstance,iVar6,
                 &(this->RootToSequenceTransform).NestedTransforms.ArrayMax);
      ConstructItems<FMovieSceneNestedSequenceTransform,FMovieSceneNestedSequenceTransform,int>
                ((pTVar1->AllocatorInstance).Data,pFVar35,iVar6);
    }
  }
  local_21c.LowerBound.Type.Value = 2;
  local_21c.LowerBound.Value.FrameNumber.Value = 0;
  local_21c.LowerBound.Value.SubFrame = 0.0;
  local_21c.UpperBound.Type.Value = 2;
  local_21c.UpperBound.Value.FrameNumber.Value = 0;
  local_21c.UpperBound.Value.SubFrame = 0.0;
  if ((this->ParentPlayRange).Value.LowerBound.Type.Value != '\x02') {
    uVar5 = (this->ParentPlayRange).Value.LowerBound.Type.Value;
    if (uVar5 == '\x01') {
      local_21c.LowerBound.Value.FrameNumber.Value =
           (this->ParentPlayRange).Value.LowerBound.Value.Value;
      uStack_120 = 0;
      local_128 = CONCAT31(local_128._1_3_,1);
      local_21c.LowerBound._0_4_ = local_128;
      iStack_124 = local_21c.LowerBound.Value.FrameNumber.Value;
    }
    else {
      if ((uVar5 == '\x02') &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L""), bVar21)) {
        pcVar7 = (code *)swi(3);
        pFVar26 = (FMovieSceneSubSequenceData *)(*pcVar7)();
        return pFVar26;
      }
      local_21c.LowerBound.Value.FrameNumber.Value =
           (this->ParentPlayRange).Value.LowerBound.Value.Value;
      uStack_114 = 0;
      local_11c = local_11c & 0xffffff00;
      local_21c.LowerBound._0_4_ = local_11c;
      iStack_118 = local_21c.LowerBound.Value.FrameNumber.Value;
    }
  }
  local_21c.LowerBound.Value.SubFrame = 0.0;
  if ((this->ParentPlayRange).Value.UpperBound.Type.Value != '\x02') {
    local_21c.UpperBound.Value.FrameNumber.Value =
         (this->ParentPlayRange).Value.UpperBound.Value.Value;
    if ((this->ParentPlayRange).Value.UpperBound.Type.Value == '\x01') {
      uStack_108 = 0;
      local_110 = CONCAT31(local_110._1_3_,1);
      local_21c.UpperBound._0_4_ = local_110;
      iStack_10c = local_21c.UpperBound.Value.FrameNumber.Value;
    }
    else {
      uStack_fc = 0;
      local_104 = local_104 & 0xffffff00;
      local_21c.UpperBound._0_4_ = local_104;
      iStack_100 = local_21c.UpperBound.Value.FrameNumber.Value;
    }
    local_21c.UpperBound.Value.SubFrame = 0.0;
  }
  FMovieSceneSequenceTransform::ComputeTraversedHull(this_00,&local_d8,&local_21c);
  uVar34 = local_170;
  local_1e0.Type.Value = 2;
  local_1e0 = (TRangeBound<FFrameNumber>)((ulonglong)local_1e0 & 0xffffffff);
  TStack_1d8.Type.Value = 2;
  TStack_1d8 = (TRangeBound<FFrameNumber>)((ulonglong)TStack_1d8 & 0xffffffff);
  if (local_d8.LowerBound.Type.Value != '\x02') {
    local_a0 = local_d8.LowerBound.Value;
    FVar31 = local_d8.LowerBound.Value.FrameNumber.Value;
    if ((local_d8.LowerBound.Type.Value == '\x01') &&
       (local_a0.SubFrame = local_d8.LowerBound.Value.SubFrame, local_a0.SubFrame == 0.0)) {
      local_180 = CONCAT31(local_180._1_3_,1);
      local_1e0.Value.Value = FVar31.Value;
      local_1e0._0_4_ = local_180;
      iStack_17c = FVar31.Value;
    }
    else {
      iStack_174 = FVar31.Value + 1;
      local_178 = CONCAT31(local_178._1_3_,1);
      local_1e0.Value.Value = iStack_174;
      local_1e0._0_4_ = local_178;
    }
  }
  if (local_d8.UpperBound.Type.Value != '\x02') {
    iStack_16c = local_d8.UpperBound.Value.FrameNumber.Value;
    local_170 = local_170 & 0xffffff00;
    TStack_1d8 = (TRangeBound<FFrameNumber>)
                 (CONCAT44(local_d8.UpperBound.Value.FrameNumber.Value,uVar34) & 0xffffffffffffff00)
    ;
  }
  (this->PlayRange).Value.LowerBound = local_1e0;
  (this->PlayRange).Value.UpperBound = TStack_1d8;
  iVar6 = (int)param_1->_padding_;
  if (0 < iVar6) {
    iVar33 = (int)((ulonglong)param_1->_padding_ >> 0x20);
    cVar22 = (char)param_1->_padding_;
    if (cVar22 != '\x01') {
      if ((cVar22 == '\x02') &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L""), bVar21)) {
        pcVar7 = (code *)swi(3);
        pFVar26 = (FMovieSceneSubSequenceData *)(*pcVar7)();
        return pFVar26;
      }
      iVar33 = iVar33 + 1;
    }
    local_200 = iVar33 - iVar6;
    uStack_1fc = 0;
    if ((this->OuterToInnerTransform).NestedTransforms.ArrayNum == 0) {
      ::operator*((FFrameTime)&local_160,(FMovieSceneTimeTransform *)(ulonglong)local_200);
      uVar37 = local_160 & 0xffffffff;
    }
    else {
      ::operator*((FFrameTime)&local_168,(FMovieSceneTimeTransform *)(ulonglong)local_200);
      iVar6 = (this->OuterToInnerTransform).NestedTransforms.ArrayNum;
      pFVar35 = (FMovieSceneNestedSequenceTransform *)(pTVar2->AllocatorInstance).Data;
      pFVar38 = pFVar35 + iVar6;
      while( true ) {
        uVar37 = local_168;
        if ((this->OuterToInnerTransform).NestedTransforms.ArrayNum != iVar6) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FMovieSceneNestedSequenceTransform_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_res8);
        }
        param_1 = local_res10;
        local_160 = uVar37;
        if (pFVar35 == pFVar38) break;
        FVar28 = FMovieSceneNestedSequenceTransform::TransformTime(pFVar35,(FFrameTime)local_98);
        pFVar35 = pFVar35 + 1;
        local_168 = *(ulonglong *)FVar28;
      }
    }
    uVar34 = (uint)((ulonglong)param_1->_padding_ >> 0x20);
    cVar22 = (char)param_1->_padding_;
    if (cVar22 != '\x01') {
      if ((cVar22 == '\x02') &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Type != ERangeBoundTypes::Open",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                              ,99,L""), bVar21)) {
        pcVar7 = (code *)swi(3);
        pFVar26 = (FMovieSceneSubSequenceData *)(*pcVar7)();
        return pFVar26;
      }
      uVar34 = uVar34 + 1;
    }
    uStack_1f4 = 0;
    local_1f8 = uVar34;
    if ((this->OuterToInnerTransform).NestedTransforms.ArrayNum == 0) {
      ::operator*((FFrameTime)&local_150,(FMovieSceneTimeTransform *)(ulonglong)uVar34);
      uVar36 = local_150 & 0xffffffff;
    }
    else {
      ::operator*((FFrameTime)&local_158,(FMovieSceneTimeTransform *)(ulonglong)uVar34);
      iVar6 = (this->OuterToInnerTransform).NestedTransforms.ArrayNum;
      pFVar35 = (FMovieSceneNestedSequenceTransform *)(pTVar2->AllocatorInstance).Data;
      pFVar38 = pFVar35 + iVar6;
      while( true ) {
        uVar36 = local_158;
        if ((this->OuterToInnerTransform).NestedTransforms.ArrayNum != iVar6) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FMovieSceneNestedSequenceTransform_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_res18);
        }
        param_1 = local_res10;
        local_150 = uVar36;
        if (pFVar35 == pFVar38) break;
        FVar28 = FMovieSceneNestedSequenceTransform::TransformTime(pFVar35,(FFrameTime)local_90);
        pFVar35 = pFVar35 + 1;
        local_158 = *(ulonglong *)FVar28;
      }
    }
    uVar34 = uStack_f0;
    local_f8 = CONCAT31(local_f8._1_3_,1);
    iStack_f4 = (int)uVar37;
    uStack_f0 = uStack_f0 & 0xffffff00;
    uStack_ec = (undefined4)uVar36;
    TVar19.Value.Value = iStack_f4;
    TVar19._0_4_ = local_f8;
    (this->PreRollRange).Value.LowerBound = TVar19;
    (this->PreRollRange).Value.UpperBound =
         (TRangeBound<FFrameNumber>)(CONCAT44(uStack_ec,uVar34) & 0xffffffffffffff00);
  }
  if (0 < *(int *)((longlong)&param_1->_padding_ + 4)) {
    cVar22 = (char)param_1->_padding_;
    uVar34 = (uint)((ulonglong)param_1->_padding_ >> 0x20);
    if (cVar22 == '\x01') {
      uVar34 = uVar34 + 1;
    }
    else if ((cVar22 == '\x02') &&
            (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar21)) {
      pcVar7 = (code *)swi(3);
      pFVar26 = (FMovieSceneSubSequenceData *)(*pcVar7)();
      return pFVar26;
    }
    uStack_1ec = 0;
    local_1f0 = uVar34;
    if ((this->OuterToInnerTransform).NestedTransforms.ArrayNum == 0) {
      ::operator*((FFrameTime)&local_140,(FMovieSceneTimeTransform *)(ulonglong)uVar34);
      uVar37 = local_140 & 0xffffffff;
    }
    else {
      ::operator*((FFrameTime)&local_148,(FMovieSceneTimeTransform *)(ulonglong)uVar34);
      iVar6 = (this->OuterToInnerTransform).NestedTransforms.ArrayNum;
      pFVar35 = (FMovieSceneNestedSequenceTransform *)
                (this->OuterToInnerTransform).NestedTransforms.AllocatorInstance.Data;
      pFVar38 = pFVar35 + iVar6;
      while( true ) {
        uVar37 = local_148;
        if ((this->OuterToInnerTransform).NestedTransforms.ArrayNum != iVar6) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FMovieSceneNestedSequenceTransform_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_res20);
        }
        local_140 = uVar37;
        if (pFVar35 == pFVar38) break;
        FVar28 = FMovieSceneNestedSequenceTransform::TransformTime(pFVar35,(FFrameTime)local_88);
        pFVar35 = pFVar35 + 1;
        local_148 = *(ulonglong *)FVar28;
      }
    }
    iVar6 = *(int *)((longlong)&param_1->_padding_ + 4);
    cVar22 = (char)param_1->_padding_;
    iVar33 = (int)((ulonglong)param_1->_padding_ >> 0x20);
    if (cVar22 == '\x01') {
      iVar33 = iVar33 + 1;
    }
    else if ((cVar22 == '\x02') &&
            (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                ("Type != ERangeBoundTypes::Open",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                 ,99,L""), bVar21)) {
      pcVar7 = (code *)swi(3);
      pFVar26 = (FMovieSceneSubSequenceData *)(*pcVar7)();
      return pFVar26;
    }
    local_1e8 = iVar33 + iVar6;
    uStack_1e4 = 0;
    if ((this->OuterToInnerTransform).NestedTransforms.ArrayNum == 0) {
      ::operator*((FFrameTime)local_c0,(FMovieSceneTimeTransform *)(ulonglong)local_1e8);
      uVar39 = local_c0[0];
    }
    else {
      ::operator*((FFrameTime)&local_b8,(FMovieSceneTimeTransform *)(ulonglong)local_1e8);
      iVar6 = (this->OuterToInnerTransform).NestedTransforms.ArrayNum;
      pFVar35 = (FMovieSceneNestedSequenceTransform *)
                (this->OuterToInnerTransform).NestedTransforms.AllocatorInstance.Data;
      pFVar38 = pFVar35 + iVar6;
      while( true ) {
        uVar39 = (undefined4)local_b8;
        if ((this->OuterToInnerTransform).NestedTransforms.ArrayNum != iVar6) {
          `TCheckedPointerIterator<FMovieSceneNestedSequenceTransform_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_220);
        }
        param_1 = local_res10;
        if (pFVar35 == pFVar38) break;
        FVar28 = FMovieSceneNestedSequenceTransform::TransformTime(pFVar35,(FFrameTime)local_80);
        pFVar35 = pFVar35 + 1;
        local_b8 = *(undefined8 *)FVar28;
      }
    }
    uVar34 = uStack_e0;
    local_e8 = CONCAT31(local_e8._1_3_,1);
    iStack_e4 = (int)uVar37;
    uStack_e0 = uStack_e0 & 0xffffff00;
    TVar20.Value.Value = iStack_e4;
    TVar20._0_4_ = local_e8;
    (this->PostRollRange).Value.LowerBound = TVar20;
    (this->PostRollRange).Value.UpperBound =
         (TRangeBound<FFrameNumber>)(CONCAT44(uVar39,uVar34) & 0xffffffffffffff00);
    uStack_dc = uVar39;
  }
  pUVar29 = Z_Construct_UClass_UMovieSceneTrack_NoRegister();
  pUVar30 = (UMovieSceneTrack *)
            UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar29);
  local_b0 = MovieSceneHelpers::GetSequenceCondition(pUVar30,(UMovieSceneSection *)param_1,true);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_b0 != (UMovieSceneCondition *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_b0);
  }
  FSoftObjectPtr::operator=(&(this->WeakCondition).SoftObjectPtr,(FObjectPtr)&local_b0);
  return this;
}

// FMovieSceneSubSequenceData @ 146181100

FMovieSceneSubSequenceData * __thiscall
FMovieSceneSubSequenceData::FMovieSceneSubSequenceData(FMovieSceneSubSequenceData *this)

{
  TRangeBound<FFrameNumber> TVar1;
  TRangeBound<FFrameNumber> TVar2;
  TRangeBound<FFrameNumber> TVar3;
  TRangeBound<FFrameNumber> TVar4;
  TRangeBound<FFrameNumber> TVar5;
  TRangeBound<FFrameNumber> TVar6;
  TRangeBound<FFrameNumber> TVar7;
  TRangeBound<FFrameNumber> TVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint local_res8;
  uint local_res10;
  
  (this->TickResolution).Numerator = 60000;
  (this->Sequence).AssetPath.PackageName.ComparisonIndex = 0;
  (this->Sequence).AssetPath.PackageName.Number = 0;
  (this->Sequence).AssetPath.AssetName.ComparisonIndex = 0;
  (this->Sequence).AssetPath.AssetName.Number = 0;
  (this->Sequence).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sequence).SubPathString.Data.ArrayNum = 0;
  (this->Sequence).SubPathString.Data.ArrayMax = 0;
  (this->OuterToInnerTransform).NestedTransforms.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->OuterToInnerTransform).NestedTransforms.ArrayNum = 0;
  (this->OuterToInnerTransform).NestedTransforms.ArrayMax = 0;
  (this->RootToSequenceTransform).NestedTransforms.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RootToSequenceTransform).NestedTransforms.ArrayNum = 0;
  (this->RootToSequenceTransform).NestedTransforms.ArrayMax = 0;
  (this->TickResolution).Denominator = 1;
  (this->DeterministicSequenceID).Value = 0xffffffff;
  (this->OuterToInnerTransform).LinearTransform.TimeScale = 1.0;
  (this->OuterToInnerTransform).LinearTransform.Offset.FrameNumber = 0;
  (this->OuterToInnerTransform).LinearTransform.Offset.SubFrame = 0.0;
  (this->RootToSequenceTransform).LinearTransform.TimeScale = 1.0;
  (this->RootToSequenceTransform).LinearTransform.Offset.FrameNumber = 0;
  (this->RootToSequenceTransform).LinearTransform.Offset.SubFrame = 0.0;
  uVar9 = local_res8 >> 8;
  local_res8 = uVar9 << 8;
  TVar1.Value.Value = 0;
  TVar1._0_4_ = local_res8;
  (this->PlayRange).Value.LowerBound = TVar1;
  uVar10 = local_res10 >> 8;
  local_res10 = uVar10 << 8;
  TVar5.Value.Value = 0;
  TVar5._0_4_ = local_res10;
  (this->PlayRange).Value.UpperBound = TVar5;
  local_res8 = uVar9 << 8;
  TVar2.Value.Value = 0;
  TVar2._0_4_ = local_res8;
  (this->ParentPlayRange).Value.LowerBound = TVar2;
  local_res10 = uVar10 << 8;
  TVar6.Value.Value = 0;
  TVar6._0_4_ = local_res10;
  (this->ParentPlayRange).Value.UpperBound = TVar6;
  local_res8 = uVar9 << 8;
  TVar3.Value.Value = 0;
  TVar3._0_4_ = local_res8;
  (this->PreRollRange).Value.LowerBound = TVar3;
  local_res10 = uVar10 << 8;
  TVar7.Value.Value = 0;
  TVar7._0_4_ = local_res10;
  (this->PreRollRange).Value.UpperBound = TVar7;
  local_res8 = uVar9 << 8;
  TVar4.Value.Value = 0;
  TVar4._0_4_ = local_res8;
  (this->PostRollRange).Value.LowerBound = TVar4;
  local_res10 = uVar10 << 8;
  TVar8.Value.Value = 0;
  TVar8._0_4_ = local_res10;
  (this->PostRollRange).Value.UpperBound = TVar8;
  puVar11 = &(this->InstanceData).field_0x10;
  *puVar11 = *puVar11 & 0xfe;
  puVar11 = &(this->InstanceData).field_0x10;
  *puVar11 = *puVar11 | 2;
  this->HierarchicalBias = 0;
  this->AccumulatedFlags = None;
  this->bCanLoop = false;
  (this->SectionPath).ComparisonIndex = 0;
  (this->SectionPath).Number = 0;
  puVar11 = &(this->WeakCondition).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->WeakCondition).SoftObjectPtr = 0;
  *(undefined8 *)puVar11 = 0;
  *(undefined8 *)&(this->WeakCondition).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->WeakCondition).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->WeakCondition).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar11,0);
  (this->CachedSequence).WeakPtr = (FWeakObjectPtr)0x0;
  (this->SubSectionSignature).A = 0;
  (this->SubSectionSignature).B = 0;
  (this->SubSectionSignature).C = 0;
  (this->SubSectionSignature).D = 0;
  return this;
}

// ~FMovieSceneSubSequenceData @ 1461855f0

void __thiscall
FMovieSceneSubSequenceData::~FMovieSceneSubSequenceData(FMovieSceneSubSequenceData *this)

{
  FMovieSceneSequenceInstanceDataPtr *pFVar1;
  byte bVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  FMovieSceneSequenceInstanceDataPtr *pFVar5;
  
  pvVar3 = *(void **)&(this->WeakCondition).SoftObjectPtr.field_0x18;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  pFVar1 = &this->InstanceData;
  bVar2 = (this->InstanceData).field_0x10;
  if ((bVar2 & 1) != 0) {
    pFVar5 = pFVar1;
    if ((bVar2 & 2) == 0) {
      pFVar5 = *(FMovieSceneSequenceInstanceDataPtr **)pFVar1;
    }
    (this->InstanceData).field_0x10 = bVar2 & 0xfe;
    (*(code *)**(undefined8 **)pFVar5)(pFVar5,0);
    if (((this->InstanceData).field_0x10 & 2) == 0) {
      FMemory::Free(*(void **)pFVar1);
    }
  }
  pFVar4 = (this->RootToSequenceTransform).NestedTransforms.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->OuterToInnerTransform).NestedTransforms.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->Sequence).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// operator= @ 146186880

FMovieSceneSubSequenceData * __thiscall
FMovieSceneSubSequenceData::operator=
          (FMovieSceneSubSequenceData *this,FMovieSceneSubSequenceData *param_1)

{
  FUtf8String *pFVar1;
  FUtf8String *pFVar2;
  FScriptContainerElement *pFVar3;
  FName FVar4;
  TRangeBound<FFrameNumber> TVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  FVar4 = (param_1->Sequence).AssetPath.AssetName;
  pFVar1 = &(param_1->Sequence).SubPathString;
  pFVar2 = &(this->Sequence).SubPathString;
  (this->Sequence).AssetPath.PackageName = (param_1->Sequence).AssetPath.PackageName;
  (this->Sequence).AssetPath.AssetName = FVar4;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Sequence).SubPathString.Data.ArrayNum = (param_1->Sequence).SubPathString.Data.ArrayNum;
    (this->Sequence).SubPathString.Data.ArrayMax = (param_1->Sequence).SubPathString.Data.ArrayMax;
    (param_1->Sequence).SubPathString.Data.ArrayNum = 0;
    (param_1->Sequence).SubPathString.Data.ArrayMax = 0;
  }
  FMovieSceneSequenceTransform::operator=
            (&this->OuterToInnerTransform,&param_1->OuterToInnerTransform);
  FMovieSceneSequenceTransform::operator=
            (&this->RootToSequenceTransform,&param_1->RootToSequenceTransform);
  this->TickResolution = param_1->TickResolution;
  (this->DeterministicSequenceID).Value = (param_1->DeterministicSequenceID).Value;
  TVar5 = (param_1->PlayRange).Value.UpperBound;
  (this->PlayRange).Value.LowerBound = (param_1->PlayRange).Value.LowerBound;
  (this->PlayRange).Value.UpperBound = TVar5;
  TVar5 = (param_1->ParentPlayRange).Value.UpperBound;
  (this->ParentPlayRange).Value.LowerBound = (param_1->ParentPlayRange).Value.LowerBound;
  (this->ParentPlayRange).Value.UpperBound = TVar5;
  TVar5 = (param_1->PreRollRange).Value.UpperBound;
  (this->PreRollRange).Value.LowerBound = (param_1->PreRollRange).Value.LowerBound;
  (this->PreRollRange).Value.UpperBound = TVar5;
  TVar5 = (param_1->PostRollRange).Value.UpperBound;
  (this->PostRollRange).Value.LowerBound = (param_1->PostRollRange).Value.LowerBound;
  (this->PostRollRange).Value.UpperBound = TVar5;
  this->HierarchicalBias = param_1->HierarchicalBias;
  this->AccumulatedFlags = param_1->AccumulatedFlags;
  this->bCanLoop = param_1->bCanLoop;
  TInlineValue<FMovieSceneSequenceInstanceData,16,8>::operator=
            ((TInlineValue<FMovieSceneSequenceInstanceData,16,8> *)&this->InstanceData,
             (TInlineValue<FMovieSceneSequenceInstanceData,16,8> *)&param_1->InstanceData);
  this->SectionPath = param_1->SectionPath;
  TPersistentObjectPtr<FSoftObjectPath>::operator=
            ((TPersistentObjectPtr<FSoftObjectPath> *)&this->WeakCondition,
             (TPersistentObjectPtr<FSoftObjectPath> *)&param_1->WeakCondition);
  (this->CachedSequence).WeakPtr = (param_1->CachedSequence).WeakPtr;
  uVar6 = (param_1->SubSectionSignature).B;
  uVar7 = (param_1->SubSectionSignature).C;
  uVar8 = (param_1->SubSectionSignature).D;
  (this->SubSectionSignature).A = (param_1->SubSectionSignature).A;
  (this->SubSectionSignature).B = uVar6;
  (this->SubSectionSignature).C = uVar7;
  (this->SubSectionSignature).D = uVar8;
  return this;
}

// operator= @ 1461869c0

FMovieSceneSubSequenceData * __thiscall
FMovieSceneSubSequenceData::operator=
          (FMovieSceneSubSequenceData *this,FMovieSceneSubSequenceData *param_1)

{
  TRangeBound<FFrameNumber> TVar1;
  FFrameNumber FVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  FSoftObjectPath::operator=(&this->Sequence,&param_1->Sequence);
  FVar2.Value = (param_1->OuterToInnerTransform).LinearTransform.Offset.FrameNumber.Value;
  (this->OuterToInnerTransform).LinearTransform.TimeScale =
       (param_1->OuterToInnerTransform).LinearTransform.TimeScale;
  (this->OuterToInnerTransform).LinearTransform.Offset.FrameNumber = (FFrameNumber)FVar2.Value;
  (this->OuterToInnerTransform).LinearTransform.Offset.SubFrame =
       (param_1->OuterToInnerTransform).LinearTransform.Offset.SubFrame;
  TArray<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_>::operator=
            (&(this->OuterToInnerTransform).NestedTransforms,
             &(param_1->OuterToInnerTransform).NestedTransforms);
  FVar2.Value = (param_1->RootToSequenceTransform).LinearTransform.Offset.FrameNumber.Value;
  (this->RootToSequenceTransform).LinearTransform.TimeScale =
       (param_1->RootToSequenceTransform).LinearTransform.TimeScale;
  (this->RootToSequenceTransform).LinearTransform.Offset.FrameNumber = (FFrameNumber)FVar2.Value;
  (this->RootToSequenceTransform).LinearTransform.Offset.SubFrame =
       (param_1->RootToSequenceTransform).LinearTransform.Offset.SubFrame;
  TArray<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_>::operator=
            (&(this->RootToSequenceTransform).NestedTransforms,
             &(param_1->RootToSequenceTransform).NestedTransforms);
  this->TickResolution = param_1->TickResolution;
  (this->DeterministicSequenceID).Value = (param_1->DeterministicSequenceID).Value;
  TVar1 = (param_1->PlayRange).Value.UpperBound;
  (this->PlayRange).Value.LowerBound = (param_1->PlayRange).Value.LowerBound;
  (this->PlayRange).Value.UpperBound = TVar1;
  TVar1 = (param_1->ParentPlayRange).Value.UpperBound;
  (this->ParentPlayRange).Value.LowerBound = (param_1->ParentPlayRange).Value.LowerBound;
  (this->ParentPlayRange).Value.UpperBound = TVar1;
  TVar1 = (param_1->PreRollRange).Value.UpperBound;
  (this->PreRollRange).Value.LowerBound = (param_1->PreRollRange).Value.LowerBound;
  (this->PreRollRange).Value.UpperBound = TVar1;
  TVar1 = (param_1->PostRollRange).Value.UpperBound;
  (this->PostRollRange).Value.LowerBound = (param_1->PostRollRange).Value.LowerBound;
  (this->PostRollRange).Value.UpperBound = TVar1;
  this->HierarchicalBias = param_1->HierarchicalBias;
  this->AccumulatedFlags = param_1->AccumulatedFlags;
  this->bCanLoop = param_1->bCanLoop;
  FMovieSceneSequenceInstanceDataPtr::operator=(&this->InstanceData,&param_1->InstanceData);
  this->SectionPath = param_1->SectionPath;
  *(undefined8 *)&(this->WeakCondition).SoftObjectPtr =
       *(undefined8 *)&(param_1->WeakCondition).SoftObjectPtr;
  FSoftObjectPath::operator=
            ((FSoftObjectPath *)&(this->WeakCondition).SoftObjectPtr.field_0x8,
             (FSoftObjectPath *)&(param_1->WeakCondition).SoftObjectPtr.field_0x8);
  (this->CachedSequence).WeakPtr = (param_1->CachedSequence).WeakPtr;
  uVar3 = (param_1->SubSectionSignature).B;
  uVar4 = (param_1->SubSectionSignature).C;
  uVar5 = (param_1->SubSectionSignature).D;
  (this->SubSectionSignature).A = (param_1->SubSectionSignature).A;
  (this->SubSectionSignature).B = uVar3;
  (this->SubSectionSignature).C = uVar4;
  (this->SubSectionSignature).D = uVar5;
  return this;
}

// GetLoadedSequence @ 1461b13a0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UMovieSceneSequence * __thiscall
FMovieSceneSubSequenceData::GetLoadedSequence(FMovieSceneSubSequenceData *this)

{
  UMovieSceneSequence *pUVar1;
  
  pUVar1 = (UMovieSceneSequence *)FWeakObjectPtr::Get(&(this->CachedSequence).WeakPtr);
  return pUVar1;
}

// GetSequence @ 1461b3800

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UMovieSceneSequence * __thiscall
FMovieSceneSubSequenceData::GetSequence(FMovieSceneSubSequenceData *this)

{
  int iVar1;
  UMovieSceneSequence *pUVar2;
  UClass *pUVar3;
  UMovieSceneSequence *local_res8;
  
  pUVar2 = (UMovieSceneSequence *)FWeakObjectPtr::Get(&(this->CachedSequence).WeakPtr);
  if (pUVar2 != (UMovieSceneSequence *)0x0) {
    return pUVar2;
  }
  pUVar2 = (UMovieSceneSequence *)FSoftObjectPath::ResolveObject(&this->Sequence);
  if (pUVar2 != (UMovieSceneSequence *)0x0) {
    pUVar3 = Z_Construct_UClass_UMovieSceneSequence_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_1461b3891;
  }
  pUVar2 = (UMovieSceneSequence *)
           FSoftObjectPath::TryLoad(&this->Sequence,(FUObjectSerializeContext *)0x0);
  if (pUVar2 != (UMovieSceneSequence *)0x0) {
    pUVar3 = Z_Construct_UClass_UMovieSceneSequence_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_1461b3891;
  }
  pUVar2 = (UMovieSceneSequence *)0x0;
LAB_1461b3891:
  local_res8 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UMovieSceneSequence *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  FWeakObjectPtr::operator=(&(this->CachedSequence).WeakPtr,(FObjectPtr)&local_res8);
  return pUVar2;
}

// IsDirty @ 1461bbaa0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __thiscall
FMovieSceneSubSequenceData::IsDirty(FMovieSceneSubSequenceData *this,UMovieSceneSubSection *param_1)

{
  int iVar1;
  FFrameTime FVar2;
  FFrameTime FVar3;
  bool bVar4;
  FMovieSceneSequenceTransform *pFVar5;
  bool bVar6;
  float fStackX_c;
  float fStackX_14;
  FMovieSceneSequenceTransform local_28;
  
  bVar4 = false;
  if ((((uint)param_1->_padding_ == (this->SubSectionSignature).D &&
       *(uint *)((longlong)&param_1->_padding_ + 4) == (this->SubSectionSignature).C) &&
      (uint)param_1->_padding_ == (this->SubSectionSignature).B) &&
      *(uint *)((longlong)&param_1->_padding_ + 4) == (this->SubSectionSignature).A) {
    pFVar5 = UMovieSceneSubSection::OuterToInnerTransform(param_1,&local_28);
    if ((this->OuterToInnerTransform).LinearTransform.TimeScale ==
        (pFVar5->LinearTransform).TimeScale) {
      FVar2 = (this->OuterToInnerTransform).LinearTransform.Offset;
      FVar3 = (pFVar5->LinearTransform).Offset;
      if (((FVar3.FrameNumber.Value.Value == FVar2.FrameNumber.Value.Value) &&
          (fStackX_c = FVar3.SubFrame, fStackX_14 = FVar2.SubFrame, fStackX_c == fStackX_14)) &&
         (iVar1 = (pFVar5->NestedTransforms).ArrayNum,
         iVar1 == (this->OuterToInnerTransform).NestedTransforms.ArrayNum)) {
        bVar4 = CompareItems<FMovieSceneNestedSequenceTransform,int>
                          ((FMovieSceneNestedSequenceTransform *)
                           (pFVar5->NestedTransforms).AllocatorInstance.Data,
                           (FMovieSceneNestedSequenceTransform *)
                           (this->OuterToInnerTransform).NestedTransforms.AllocatorInstance.Data,
                           iVar1);
        if (bVar4) {
          bVar6 = false;
          bVar4 = true;
          goto LAB_1461bbb4c;
        }
      }
    }
    bVar4 = true;
  }
  bVar6 = true;
LAB_1461bbb4c:
  if ((bVar4) &&
     (local_28.NestedTransforms.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.NestedTransforms.AllocatorInstance.Data);
  }
  return bVar6;
}

// ToSubSectionParameters @ 1461d7aa0

FMovieSceneSectionParameters * __thiscall
FMovieSceneSubSequenceData::ToSubSectionParameters
          (FMovieSceneSubSequenceData *this,FMovieSceneSectionParameters *__return_storage_ptr__)

{
  (__return_storage_ptr__->StartFrameOffset).Value = 0;
  __return_storage_ptr__->bCanLoop = false;
  __return_storage_ptr__->EndFrameOffset = 0;
  __return_storage_ptr__->FirstLoopStartFrameOffset = 0;
  FMovieSceneNumericVariant::FMovieSceneNumericVariant(&(__return_storage_ptr__->TimeScale).Variant)
  ;
  FMovieSceneTimeWarpVariant::Set(&__return_storage_ptr__->TimeScale,__real_3ff0000000000000);
  __return_storage_ptr__->Flags = None;
  __return_storage_ptr__->StartOffset_DEPRECATED = 0.0;
  __return_storage_ptr__->PrerollTime_DEPRECATED = 0.0;
  __return_storage_ptr__->PostrollTime_DEPRECATED = 0.0;
  __return_storage_ptr__->HierarchicalBias = 100;
  return __return_storage_ptr__;
}

