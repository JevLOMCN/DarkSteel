// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 10

// FMovieSceneEvaluationTemplate @ 1460938c0

FMovieSceneEvaluationTemplate * __thiscall
FMovieSceneEvaluationTemplate::FMovieSceneEvaluationTemplate
          (FMovieSceneEvaluationTemplate *this,FMovieSceneEvaluationTemplate *param_1)

{
  TMap<FGuid,FMovieSceneTrackIdentifier,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneTrackIdentifier,0>_>
  *pTVar1;
  TMap<FGuid,FMovieSceneFrameRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneFrameRange,0>_>
  *pTVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  *(undefined8 *)&this->Tracks = 0;
  *(undefined8 *)&(this->Tracks).field_0x8 = 0;
  *(undefined8 *)&(this->Tracks).field_0x20 = 0;
  *(undefined4 *)&(this->Tracks).field_0x28 = 0;
  *(undefined4 *)&(this->Tracks).field_0x2c = 0x80;
  *(undefined4 *)&(this->Tracks).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Tracks).field_0x34 = 0;
  *(undefined8 *)&(this->Tracks).field_0x40 = 0;
  *(undefined4 *)&(this->Tracks).field_0x48 = 0;
  TSet<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>,TDefaultMapHashableKeyFuncs<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>,TDefaultMapHashableKeyFuncs<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>,TDefaultMapHashableKeyFuncs<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,0>,FDefaultSetAllocator>
              *)this,(TSet<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>,TDefaultMapHashableKeyFuncs<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,0>,FDefaultSetAllocator>
                      *)param_1);
  *(undefined8 *)&(this->StaleTracks).field_0x0 = 0;
  *(undefined8 *)&(this->StaleTracks).field_0x8 = 0;
  *(undefined8 *)&(this->StaleTracks).field_0x20 = 0;
  *(undefined4 *)&(this->StaleTracks).field_0x28 = 0;
  *(undefined4 *)&(this->StaleTracks).field_0x2c = 0x80;
  *(undefined4 *)&(this->StaleTracks).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StaleTracks).field_0x34 = 0;
  *(undefined8 *)&(this->StaleTracks).field_0x40 = 0;
  *(undefined4 *)&(this->StaleTracks).field_0x48 = 0;
  TSet<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>,TDefaultMapHashableKeyFuncs<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>,TDefaultMapHashableKeyFuncs<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>,TDefaultMapHashableKeyFuncs<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,0>,FDefaultSetAllocator>
              *)&this->StaleTracks,
             (TSet<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>,TDefaultMapHashableKeyFuncs<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,0>,FDefaultSetAllocator>
              *)&param_1->StaleTracks);
  uVar3 = (param_1->SequenceSignature).B;
  uVar4 = (param_1->SequenceSignature).C;
  uVar5 = (param_1->SequenceSignature).D;
  pTVar1 = &(this->TemplateLedger).TrackSignatureToTrackIdentifier;
  (this->SequenceSignature).A = (param_1->SequenceSignature).A;
  (this->SequenceSignature).B = uVar3;
  (this->SequenceSignature).C = uVar4;
  (this->SequenceSignature).D = uVar5;
  (this->TemplateSerialNumber).Value = 0;
  (this->TemplateLedger).LastTrackIdentifier.Value =
       (param_1->TemplateLedger).LastTrackIdentifier.Value;
  *(undefined8 *)&pTVar1->field_0x0 = 0;
  *(undefined8 *)&(this->TemplateLedger).TrackSignatureToTrackIdentifier.field_0x8 = 0;
  *(undefined8 *)&(this->TemplateLedger).TrackSignatureToTrackIdentifier.field_0x20 = 0;
  *(undefined4 *)&(this->TemplateLedger).TrackSignatureToTrackIdentifier.field_0x28 = 0;
  *(undefined4 *)&(this->TemplateLedger).TrackSignatureToTrackIdentifier.field_0x2c = 0x80;
  *(undefined4 *)&(this->TemplateLedger).TrackSignatureToTrackIdentifier.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TemplateLedger).TrackSignatureToTrackIdentifier.field_0x34 = 0;
  *(undefined8 *)&(this->TemplateLedger).TrackSignatureToTrackIdentifier.field_0x40 = 0;
  *(undefined4 *)&(this->TemplateLedger).TrackSignatureToTrackIdentifier.field_0x48 = 0;
  TSet<TTuple<FGuid,FMovieSceneTrackIdentifier>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneTrackIdentifier,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<FGuid,FMovieSceneTrackIdentifier>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneTrackIdentifier,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FGuid,FMovieSceneTrackIdentifier>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneTrackIdentifier,0>,FDefaultSetAllocator>
              *)pTVar1,
             (TSet<TTuple<FGuid,FMovieSceneTrackIdentifier>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneTrackIdentifier,0>,FDefaultSetAllocator>
              *)&(param_1->TemplateLedger).TrackSignatureToTrackIdentifier);
  pTVar2 = &(this->TemplateLedger).SubSectionRanges;
  *(undefined8 *)&pTVar2->field_0x0 = 0;
  *(undefined8 *)&(this->TemplateLedger).SubSectionRanges.field_0x8 = 0;
  *(undefined8 *)&(this->TemplateLedger).SubSectionRanges.field_0x20 = 0;
  *(undefined4 *)&(this->TemplateLedger).SubSectionRanges.field_0x28 = 0;
  *(undefined4 *)&(this->TemplateLedger).SubSectionRanges.field_0x2c = 0x80;
  *(undefined4 *)&(this->TemplateLedger).SubSectionRanges.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TemplateLedger).SubSectionRanges.field_0x34 = 0;
  *(undefined8 *)&(this->TemplateLedger).SubSectionRanges.field_0x40 = 0;
  *(undefined4 *)&(this->TemplateLedger).SubSectionRanges.field_0x48 = 0;
  TSet<TTuple<FGuid,FMovieSceneFrameRange>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneFrameRange,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<FGuid,FMovieSceneFrameRange>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneFrameRange,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FGuid,FMovieSceneFrameRange>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneFrameRange,0>,FDefaultSetAllocator>
              *)pTVar2,
             (TSet<TTuple<FGuid,FMovieSceneFrameRange>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneFrameRange,0>,FDefaultSetAllocator>
              *)&(param_1->TemplateLedger).SubSectionRanges);
  return this;
}

// FMovieSceneEvaluationTemplate @ 1460939e0

FMovieSceneEvaluationTemplate * __thiscall
FMovieSceneEvaluationTemplate::FMovieSceneEvaluationTemplate(FMovieSceneEvaluationTemplate *this)

{
  *(undefined8 *)&this->Tracks = 0;
  *(undefined8 *)&(this->Tracks).field_0x8 = 0;
  *(undefined8 *)&(this->Tracks).field_0x20 = 0;
  *(undefined4 *)&(this->Tracks).field_0x28 = 0;
  *(undefined4 *)&(this->Tracks).field_0x2c = 0x80;
  *(undefined4 *)&(this->Tracks).field_0x34 = 0;
  *(undefined4 *)&(this->Tracks).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Tracks).field_0x40 = 0;
  *(undefined4 *)&(this->Tracks).field_0x48 = 0;
  *(undefined8 *)&this->StaleTracks = 0;
  *(undefined8 *)&(this->StaleTracks).field_0x8 = 0;
  *(undefined8 *)&(this->StaleTracks).field_0x20 = 0;
  *(undefined4 *)&(this->StaleTracks).field_0x28 = 0;
  *(undefined4 *)&(this->StaleTracks).field_0x2c = 0x80;
  *(undefined4 *)&(this->StaleTracks).field_0x34 = 0;
  *(undefined4 *)&(this->StaleTracks).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->StaleTracks).field_0x40 = 0;
  *(undefined4 *)&(this->StaleTracks).field_0x48 = 0;
  (this->SequenceSignature).A = 0;
  (this->SequenceSignature).B = 0;
  (this->SequenceSignature).C = 0;
  (this->SequenceSignature).D = 0;
  (this->TemplateSerialNumber).Value = 0;
  *(undefined8 *)&(this->TemplateLedger).TrackSignatureToTrackIdentifier = 0;
  *(undefined8 *)&(this->TemplateLedger).TrackSignatureToTrackIdentifier.field_0x8 = 0;
  *(undefined8 *)&(this->TemplateLedger).TrackSignatureToTrackIdentifier.field_0x20 = 0;
  (this->TemplateLedger).LastTrackIdentifier.Value = 0xffffffff;
  *(undefined4 *)&(this->TemplateLedger).TrackSignatureToTrackIdentifier.field_0x28 = 0;
  *(undefined4 *)&(this->TemplateLedger).TrackSignatureToTrackIdentifier.field_0x2c = 0x80;
  *(undefined4 *)&(this->TemplateLedger).TrackSignatureToTrackIdentifier.field_0x34 = 0;
  *(undefined4 *)&(this->TemplateLedger).TrackSignatureToTrackIdentifier.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TemplateLedger).TrackSignatureToTrackIdentifier.field_0x40 = 0;
  *(undefined4 *)&(this->TemplateLedger).TrackSignatureToTrackIdentifier.field_0x48 = 0;
  *(undefined8 *)&(this->TemplateLedger).SubSectionRanges = 0;
  *(undefined8 *)&(this->TemplateLedger).SubSectionRanges.field_0x8 = 0;
  *(undefined8 *)&(this->TemplateLedger).SubSectionRanges.field_0x20 = 0;
  *(undefined4 *)&(this->TemplateLedger).SubSectionRanges.field_0x28 = 0;
  *(undefined4 *)&(this->TemplateLedger).SubSectionRanges.field_0x2c = 0x80;
  *(undefined4 *)&(this->TemplateLedger).SubSectionRanges.field_0x34 = 0;
  *(undefined4 *)&(this->TemplateLedger).SubSectionRanges.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TemplateLedger).SubSectionRanges.field_0x40 = 0;
  *(undefined4 *)&(this->TemplateLedger).SubSectionRanges.field_0x48 = 0;
  return this;
}

// ~FMovieSceneEvaluationTemplate @ 146097b40

void __thiscall
FMovieSceneEvaluationTemplate::~FMovieSceneEvaluationTemplate(FMovieSceneEvaluationTemplate *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->TemplateLedger).SubSectionRanges.field_0x48 = 0;
  pvVar1 = *(void **)&(this->TemplateLedger).SubSectionRanges.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneFrameRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneFrameRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneFrameRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->TemplateLedger).SubSectionRanges);
  *(undefined4 *)&(this->TemplateLedger).TrackSignatureToTrackIdentifier.field_0x48 = 0;
  pvVar1 = *(void **)&(this->TemplateLedger).TrackSignatureToTrackIdentifier.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneTrackIdentifier>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneTrackIdentifier>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneTrackIdentifier>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->TemplateLedger).TrackSignatureToTrackIdentifier);
  *(undefined4 *)&(this->StaleTracks).field_0x48 = 0;
  pvVar1 = *(void **)&(this->StaleTracks).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StaleTracks);
  *(undefined4 *)&(this->Tracks).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Tracks).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// StaticStruct @ 146163230

UScriptStruct * __cdecl FMovieSceneEvaluationTemplate::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationTemplate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvaluationTemplate,(UObject *)pUVar1,
                         L"MovieSceneEvaluationTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneEvaluationTemplate.OuterSingleton;
}

// AddTrack @ 146191490

FMovieSceneTrackIdentifier __thiscall
FMovieSceneEvaluationTemplate::AddTrack
          (FMovieSceneEvaluationTemplate *this,FGuid *param_1,FMovieSceneEvaluationTrack *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong64 uVar5;
  FMovieSceneEvaluationTrack *in_R9;
  uint local_res8 [2];
  TPairInitializer<FMovieSceneTrackIdentifier_const_&,FMovieSceneEvaluationTrack_&&> local_res10;
  FGuid *local_38 [2];
  FMovieSceneEvaluationTrack *local_28;
  uint *local_20;
  
  (this->TemplateLedger).LastTrackIdentifier.Value =
       (this->TemplateLedger).LastTrackIdentifier.Value + 1;
  param_1->A = (this->TemplateLedger).LastTrackIdentifier.Value;
  FMovieSceneEvaluationTrack::SetupOverrides(in_R9);
  local_38[0] = param_1;
  TSet<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>,TDefaultMapHashableKeyFuncs<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FMovieSceneTrackIdentifier_const_&,FMovieSceneEvaluationTrack_&&>_>
            ((TSet<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>,TDefaultMapHashableKeyFuncs<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,0>,FDefaultSetAllocator>
              *)this,&local_res10,(bool *)local_38);
  local_res8[0] = param_1->A;
  uVar5 = CityHash64((char *)param_2,0x10);
  iVar3 = TSet<TTuple<FGuid,FMovieSceneTrackIdentifier>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneTrackIdentifier,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FMovieSceneTrackIdentifier>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneTrackIdentifier,0>,FDefaultSetAllocator>
                      *)&(this->TemplateLedger).TrackSignatureToTrackIdentifier,(uint)uVar5,
                     &param_2->ObjectBindingID);
  if (iVar3 != -1) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_790865893381898220>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieSceneEvaluationTemplate.cpp"
                       ,0x14,"!TrackSignatureToTrackIdentifier.Contains(InSignature)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (FMovieSceneTrackIdentifier)uVar4;
    }
  }
  local_20 = local_res8;
  local_28 = param_2;
  TSet<TTuple<FGuid,FMovieSceneTrackIdentifier>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneTrackIdentifier,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FGuid_const_&,FMovieSceneTrackIdentifier_const_&>_>
            ((TSet<TTuple<FGuid,FMovieSceneTrackIdentifier>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneTrackIdentifier,0>,FDefaultSetAllocator>
              *)&(this->TemplateLedger).TrackSignatureToTrackIdentifier,
             (TPairInitializer<FGuid_const_&,FMovieSceneTrackIdentifier_const_&> *)
             &local_res10.Value,(bool *)&local_28);
  return (FMovieSceneTrackIdentifier)(uint)param_1;
}

// GetStaleTracks @ 1461b41c0

TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,0>_>
* __thiscall FMovieSceneEvaluationTemplate::GetStaleTracks(FMovieSceneEvaluationTemplate *this)

{
  return &this->StaleTracks;
}

// GetTracks @ 1461b4690

TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,0>_>
* __thiscall FMovieSceneEvaluationTemplate::GetTracks(FMovieSceneEvaluationTemplate *this)

{
  return &this->Tracks;
}

// GetTracks @ 1461b46a0

TMap<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,0>_>
* __thiscall FMovieSceneEvaluationTemplate::GetTracks(FMovieSceneEvaluationTemplate *this)

{
  return &this->Tracks;
}

// RemoveStaleData @ 1461cb1e0

void __thiscall
FMovieSceneEvaluationTemplate::RemoveStaleData
          (FMovieSceneEvaluationTemplate *this,
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *param_1)

{
  TMap<FGuid,FMovieSceneFrameRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneFrameRange,0>_>
  *this_00;
  ulonglong uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  TMap<FGuid,FMovieSceneTrackIdentifier,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneTrackIdentifier,0>_>
  *pTVar5;
  TMap<FGuid,FMovieSceneFrameRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneFrameRange,0>_>
  *pTVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  ulong64 uVar10;
  uint *puVar11;
  longlong lVar12;
  longlong lVar13;
  uint *puVar14;
  undefined1 *puVar15;
  int iVar16;
  FGuid *pFVar17;
  ForAnyElementType FVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar23;
  uint uVar24;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_188 [4];
  FMovieSceneTrackIdentifier local_184;
  ForAnyElementType local_180;
  undefined8 local_178;
  ForAnyElementType local_170;
  undefined8 local_168;
  undefined1 local_160 [8];
  ulonglong local_158;
  TMap<FGuid,FMovieSceneTrackIdentifier,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneTrackIdentifier,0>_>
  *local_150;
  uint uStack_148;
  uint uStack_144;
  undefined1 *local_140;
  undefined4 uStack_138;
  uint uStack_134;
  uint local_130;
  int iStack_128;
  undefined4 uStack_124;
  int local_120;
  int local_11c;
  TPairInitializer<FMovieSceneTrackIdentifier_const_&,FMovieSceneEvaluationTrack_&&> local_118;
  TMap<FGuid,FMovieSceneFrameRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneFrameRange,0>_>
  *local_108;
  uint uStack_100;
  undefined4 uStack_fc;
  undefined1 *local_f8;
  undefined4 uStack_f0;
  uint uStack_ec;
  uint local_e8;
  uint uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  TMap<FGuid,FMovieSceneTrackIdentifier,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneTrackIdentifier,0>_>
  *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  TMap<FGuid,FMovieSceneFrameRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneFrameRange,0>_>
  *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  FMovieSceneTrackIdentifier *local_78;
  uint *local_70;
  undefined4 local_4c;
  uint *puVar22;
  
  puVar22 = (uint *)0x0;
  uVar21 = 0;
  local_150 = &(this->TemplateLedger).TrackSignatureToTrackIdentifier;
  local_180.Data = (FScriptContainerElement *)0x0;
  local_140 = &(this->TemplateLedger).TrackSignatureToTrackIdentifier.field_0x10;
  local_178 = 0;
  uVar9 = *(uint *)&(this->TemplateLedger).TrackSignatureToTrackIdentifier.field_0x28;
  local_158 = 1;
  uVar24 = 0;
  uStack_144 = 1;
  uStack_134 = uVar24;
  uStack_148 = uVar24;
  local_130 = uVar24;
  if (uVar9 != 0) {
    puVar11 = *(uint **)&(this->TemplateLedger).TrackSignatureToTrackIdentifier.field_0x20;
    if (puVar11 == (uint *)0x0) {
      puVar11 = (uint *)local_140;
    }
    uStack_144 = *puVar11;
    puVar14 = puVar22;
    puVar23 = puVar22;
    local_130 = uVar21;
    uStack_148 = uVar21;
    while (uStack_144 == 0) {
      iVar16 = (int)puVar14;
      local_130 = (int)puVar23 + 0x20;
      puVar23 = (uint *)(ulonglong)local_130;
      uStack_148 = iVar16 + 1;
      puVar14 = (uint *)(ulonglong)uStack_148;
      uStack_144 = 1;
      uStack_134 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_148)
      goto LAB_1461cb29e;
      uStack_144 = puVar11[(longlong)iVar16 + 1];
    }
    uStack_144 = -uStack_144 & uStack_144;
    uVar1 = (ulonglong)uStack_144 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_120 = (int)lVar13;
    uStack_134 = (local_130 - 1) + local_120;
    if ((int)uVar9 < (int)uStack_134) {
      uStack_134 = uVar9;
    }
  }
LAB_1461cb29e:
  puVar2 = &(this->TemplateLedger).TrackSignatureToTrackIdentifier.field_0x10;
  iStack_128 = *(int *)&(this->TemplateLedger).TrackSignatureToTrackIdentifier.field_0x8 -
               *(int *)&(this->TemplateLedger).TrackSignatureToTrackIdentifier.field_0x34;
  uVar20 = *(uint *)&(this->TemplateLedger).TrackSignatureToTrackIdentifier.field_0x28;
  TStack_d0._padding_ = CONCAT44(uStack_144,uStack_148);
  uStack_138 = 0xffffffff;
  uVar19 = uVar20 & 0xffffffe0;
  TStack_d0.CurrentBitIndex = uStack_134;
  TStack_d0.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar20 >> 5;
  TStack_d0._28_4_ = local_4c;
  TStack_d0.BaseBitIndex = local_130;
  uStack_b0 = CONCAT44(uStack_124,iStack_128);
  local_d8 = local_150;
  TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_140;
  if ((((int)uVar20 < 0) || ((int)uVar9 < (int)uVar20)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar9 = *(uint *)&(this->TemplateLedger).TrackSignatureToTrackIdentifier.field_0x28;
  if (uVar20 != uVar9) {
    puVar15 = *(undefined1 **)&(this->TemplateLedger).TrackSignatureToTrackIdentifier.field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar2;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar16 * 4);
    while (uVar20 == 0) {
      lVar13 = (longlong)iVar16;
      uVar19 = uVar19 + 0x20;
      iVar16 = iVar16 + 1;
      uVar20 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_1461cb3ad;
      uVar20 = *(uint *)(puVar15 + lVar13 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_11c = (int)lVar13;
    uVar20 = local_11c + -1 + uVar19;
    if ((int)uVar9 < (int)uVar20) {
      uVar20 = uVar9;
    }
  }
LAB_1461cb3ad:
  while( true ) {
    pTVar5 = local_d8;
    if (*(int *)&local_d8->field_0x8 - *(int *)&local_d8->field_0x34 != (int)uStack_b0) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneTrackIdentifier>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_d0.CurrentBitIndex == uVar20) &&
        (TStack_d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
       (pTVar5 == &(this->TemplateLedger).TrackSignatureToTrackIdentifier)) break;
    pFVar17 = (FGuid *)(*(longlong *)pTVar5 + (longlong)TStack_d0.CurrentBitIndex * 0x1c);
    uVar10 = CityHash64((char *)pFVar17,0x10);
    iVar16 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindIndexByHash<FGuid>
                       (param_1,(uint)uVar10,pFVar17);
    if (iVar16 == -1) {
      if (((local_180.Data <= pFVar17) &&
          (pFVar17 < (FGuid *)(local_180.Data + (longlong)local_178._4_4_ * 0x10))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar16 = (int)local_178;
      if ((int)local_178 == local_178._4_4_) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,&local_180,(int *)((longlong)&local_178 + 4));
      }
      local_178 = CONCAT44(local_178._4_4_,iVar16 + 1);
      uVar4 = *(undefined8 *)&pFVar17->C;
      *(undefined8 *)(local_180.Data + (longlong)iVar16 * 0x10) = *(undefined8 *)pFVar17;
      *(undefined8 *)(local_180.Data + (longlong)iVar16 * 0x10 + 8) = uVar4;
    }
    TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
  }
  iVar16 = (int)local_178;
  pFVar17 = (FGuid *)(local_180.Data + (longlong)(int)local_178 * 0x10);
  FVar18.Data = local_180.Data;
  while( true ) {
    if ((int)local_178 != iVar16) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FGuid,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if ((FGuid *)FVar18.Data == pFVar17) break;
    uVar10 = CityHash64((char *)FVar18.Data,0x10);
    iVar8 = TSet<TTuple<FGuid,FMovieSceneTrackIdentifier>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneTrackIdentifier,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FGuid>
                      ((TSet<TTuple<FGuid,FMovieSceneTrackIdentifier>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneTrackIdentifier,0>,FDefaultSetAllocator>
                        *)&(this->TemplateLedger).TrackSignatureToTrackIdentifier,(uint)uVar10,
                       (FGuid *)FVar18.Data);
    if ((iVar8 == -1) ||
       (lVar13 = (longlong)iVar8 * 0x1c +
                 *(longlong *)&(this->TemplateLedger).TrackSignatureToTrackIdentifier, lVar13 == 0))
    {
      local_184.Value = 0xffffffff;
LAB_1461cb649:
      FVar18.Data = FVar18.Data + 0x10;
    }
    else {
      local_184.Value = *(uint *)(lVar13 + 0x10);
      if (local_184.Value == 0xffffffff) goto LAB_1461cb649;
      if (*(int *)&(this->Tracks).field_0x8 != *(int *)&(this->Tracks).field_0x34) {
        puVar2 = *(undefined1 **)&(this->Tracks).field_0x40;
        puVar15 = &(this->Tracks).field_0x38;
        if (puVar2 != (undefined1 *)0x0) {
          puVar15 = puVar2;
        }
        uVar9 = *(uint *)(puVar15 +
                         (ulonglong)(*(int *)&(this->Tracks).field_0x48 - 1U & local_184.Value) * 4)
        ;
        if (uVar9 != 0xffffffff) {
          do {
            puVar11 = (uint *)((longlong)(int)uVar9 * 0x88 + *(longlong *)&this->Tracks);
            if (*puVar11 == local_184.Value) {
              puVar14 = puVar11 + 2;
              if (puVar11 == (uint *)0x0) {
                puVar14 = puVar22;
              }
              if (puVar14 != (uint *)0x0) {
                local_78 = &local_184;
                local_70 = puVar14;
                TSet<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>,TDefaultMapHashableKeyFuncs<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,0>,FDefaultSetAllocator>
                ::
                Emplace<TPairInitializer<FMovieSceneTrackIdentifier_const_&,FMovieSceneEvaluationTrack_&&>_>
                          ((TSet<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>,TDefaultMapHashableKeyFuncs<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,0>,FDefaultSetAllocator>
                            *)&this->StaleTracks,&local_118,(bool *)&local_78);
              }
              break;
            }
            uVar9 = puVar11[0x20];
          } while (uVar9 != 0xffffffff);
        }
      }
      if (*(int *)&(this->Tracks).field_0x8 != *(int *)&(this->Tracks).field_0x34) {
        TSet<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>,TDefaultMapHashableKeyFuncs<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,0>,FDefaultSetAllocator>
        ::RemoveImpl<FMovieSceneTrackIdentifier>
                  ((TSet<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>,TDefaultMapHashableKeyFuncs<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,0>,FDefaultSetAllocator>
                    *)this,local_184.Value,&local_184);
      }
      if (*(int *)&(this->TemplateLedger).TrackSignatureToTrackIdentifier.field_0x8 ==
          *(int *)&(this->TemplateLedger).TrackSignatureToTrackIdentifier.field_0x34)
      goto LAB_1461cb649;
      uVar10 = CityHash64((char *)FVar18.Data,0x10);
      TSet<TTuple<FGuid,FMovieSceneTrackIdentifier>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneTrackIdentifier,0>,FDefaultSetAllocator>
      ::RemoveImpl<FGuid>((TSet<TTuple<FGuid,FMovieSceneTrackIdentifier>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneTrackIdentifier,0>,FDefaultSetAllocator>
                           *)&(this->TemplateLedger).TrackSignatureToTrackIdentifier,(uint)uVar10,
                          (FGuid *)FVar18.Data);
      FVar18.Data = FVar18.Data + 0x10;
    }
  }
  if ((FGuid *)local_180.Data != (FGuid *)0x0) {
    FMemory::Free(local_180.Data);
  }
  puVar2 = &(this->TemplateLedger).SubSectionRanges.field_0x10;
  local_170.Data = (FScriptContainerElement *)0x0;
  local_168 = 0;
  this_00 = &(this->TemplateLedger).SubSectionRanges;
  uVar9 = *(uint *)&(this->TemplateLedger).SubSectionRanges.field_0x28;
  uStack_ec = uVar21;
  if (uVar9 != 0) {
    puVar11 = *(uint **)&(this->TemplateLedger).SubSectionRanges.field_0x20;
    if (puVar11 == (uint *)0x0) {
      puVar11 = (uint *)puVar2;
    }
    uVar20 = *puVar11;
    puVar14 = puVar22;
    uVar24 = uVar21;
    while (uVar20 == 0) {
      iVar16 = (int)puVar14;
      uVar21 = (int)puVar22 + 0x20;
      puVar22 = (uint *)(ulonglong)uVar21;
      uVar24 = iVar16 + 1;
      puVar14 = (uint *)(ulonglong)uVar24;
      uStack_ec = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar24)
      goto LAB_1461cb6f1;
      uVar20 = puVar11[(longlong)iVar16 + 1];
    }
    local_158 = (ulonglong)(-uVar20 & uVar20);
    uVar1 = local_158 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_118.Key._4_4_ = (int)lVar13;
    uStack_ec = (uVar21 - 1) + local_118.Key._4_4_;
    if ((int)uVar9 < (int)uStack_ec) {
      uStack_ec = uVar9;
    }
  }
LAB_1461cb6f1:
  uStack_fc = (undefined4)local_158;
  uStack_e4 = uStack_134;
  iStack_e0 = *(int *)&(this->TemplateLedger).SubSectionRanges.field_0x8 -
              *(int *)&(this->TemplateLedger).SubSectionRanges.field_0x34;
  uStack_f0 = 0xffffffff;
  uVar20 = *(uint *)&(this->TemplateLedger).SubSectionRanges.field_0x28;
  TStack_a0._padding_ = CONCAT44(uStack_fc,uVar24);
  uVar19 = uVar20 & 0xffffffe0;
  TStack_a0.CurrentBitIndex = uStack_ec;
  TStack_a0.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar20 >> 5;
  TStack_a0._28_4_ = uStack_134;
  TStack_a0.BaseBitIndex = uVar21;
  uStack_80 = CONCAT44(uStack_dc,iStack_e0);
  local_108 = this_00;
  uStack_100 = uVar24;
  local_f8 = puVar2;
  local_e8 = uVar21;
  local_a8 = this_00;
  TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar20 < 0) || ((int)uVar9 < (int)uVar20)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar9 = *(uint *)&(this->TemplateLedger).SubSectionRanges.field_0x28;
  if (uVar20 != uVar9) {
    puVar15 = *(undefined1 **)&(this->TemplateLedger).SubSectionRanges.field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar2;
    }
    uVar21 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar16 * 4);
    while (uVar21 == 0) {
      lVar13 = (longlong)iVar16;
      uVar19 = uVar19 + 0x20;
      iVar16 = iVar16 + 1;
      uVar20 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_1461cb800;
      uVar21 = *(uint *)(puVar15 + lVar13 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_118.Value._0_4_ = (int)lVar13;
    uVar20 = (uVar19 - 1) + (int)local_118.Value;
    if ((int)uVar9 < (int)uVar20) {
      uVar20 = uVar9;
    }
  }
LAB_1461cb800:
  while( true ) {
    pTVar6 = local_a8;
    if (*(int *)(&local_a8->field_0x0 + 8) - *(int *)(&local_a8->field_0x0 + 0x34) != (int)uStack_80
       ) {
      local_188[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneFrameRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_188);
    }
    if (((TStack_a0.CurrentBitIndex == uVar20) &&
        (TStack_a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar6 == this_00))
    break;
    pFVar17 = (FGuid *)(*(longlong *)&pTVar6->field_0x0 + (longlong)TStack_a0.CurrentBitIndex * 0x28
                       );
    uVar10 = CityHash64((char *)pFVar17,0x10);
    iVar16 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindIndexByHash<FGuid>
                       (param_1,(uint)uVar10,pFVar17);
    if (iVar16 == -1) {
      if (((local_170.Data <= pFVar17) &&
          (pFVar17 < (FGuid *)(local_170.Data + (longlong)local_168._4_4_ * 0x20))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar16 = (int)local_168;
      if ((int)local_168 == local_168._4_4_) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x420,&local_170,(int *)((longlong)&local_168 + 4));
      }
      local_168 = CONCAT44(local_168._4_4_,iVar16 + 1);
      uVar4 = *(undefined8 *)&pFVar17->C;
      *(undefined8 *)(local_170.Data + (longlong)iVar16 * 0x20) = *(undefined8 *)pFVar17;
      *(undefined8 *)(local_170.Data + (longlong)iVar16 * 0x20 + 8) = uVar4;
      uVar4 = *(undefined8 *)&pFVar17[1].C;
      *(undefined8 *)(local_170.Data + (longlong)iVar16 * 0x20 + 0x10) =
           *(undefined8 *)(pFVar17 + 1);
      *(undefined8 *)(local_170.Data + (longlong)iVar16 * 0x20 + 0x10 + 8) = uVar4;
    }
    TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
  }
  iVar16 = (int)local_168;
  pFVar17 = (FGuid *)(local_170.Data + (longlong)(int)local_168 * 0x20);
  FVar18.Data = local_170.Data;
  do {
    while( true ) {
      if ((int)local_168 != iVar16) {
        `TCheckedPointerIterator<TTuple<FGuid,FMovieSceneFrameRange>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_160);
      }
      if ((FGuid *)FVar18.Data == pFVar17) {
        if ((FGuid *)local_170.Data != (FGuid *)0x0) {
          FMemory::Free(local_170.Data);
        }
        return;
      }
      if (*(int *)&(this->TemplateLedger).SubSectionRanges.field_0x8 !=
          *(int *)&(this->TemplateLedger).SubSectionRanges.field_0x34) break;
LAB_1461cb9fb:
      FVar18.Data = FVar18.Data + 0x20;
    }
    uVar10 = CityHash64((char *)FVar18.Data,0x10);
    puVar2 = *(undefined1 **)&(this->TemplateLedger).SubSectionRanges.field_0x40;
    puVar15 = &(this->TemplateLedger).SubSectionRanges.field_0x38;
    if (puVar2 != (undefined1 *)0x0) {
      puVar15 = puVar2;
    }
    iVar8 = *(int *)(puVar15 +
                    ((longlong)*(int *)&(this->TemplateLedger).SubSectionRanges.field_0x48 - 1U &
                    (longlong)(int)uVar10) * 4);
    if (iVar8 == -1) goto LAB_1461cb9fb;
    lVar13 = *(longlong *)&this_00->field_0x0;
    do {
      lVar12 = (longlong)iVar8;
      if (((((FGuid *)FVar18.Data)->D == *(uint *)(lVar13 + 0xc + lVar12 * 0x28) &&
           ((FGuid *)FVar18.Data)->C == *(uint *)(lVar13 + 8 + lVar12 * 0x28)) &&
          ((FGuid *)FVar18.Data)->B == *(uint *)(lVar13 + 4 + lVar12 * 0x28)) &&
          ((FGuid *)FVar18.Data)->A == *(uint *)(lVar13 + lVar12 * 0x28)) {
        TSet<TTuple<FGuid,FMovieSceneFrameRange>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneFrameRange,0>,FDefaultSetAllocator>
        ::RemoveByIndex((TSet<TTuple<FGuid,FMovieSceneFrameRange>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneFrameRange,0>,FDefaultSetAllocator>
                         *)this_00,iVar8);
        goto LAB_1461cb9fb;
      }
      iVar8 = *(int *)(lVar13 + 0x20 + lVar12 * 0x28);
    } while (iVar8 != -1);
    FVar18.Data = FVar18.Data + 0x20;
  } while( true );
}

// RemoveTrack @ 1461cba80

void __thiscall
FMovieSceneEvaluationTemplate::RemoveTrack(FMovieSceneEvaluationTemplate *this,FGuid *param_1)

{
  int iVar1;
  uint uVar2;
  ulong64 uVar3;
  uint *puVar4;
  uint *puVar5;
  undefined1 *puVar6;
  longlong lVar7;
  FMovieSceneTrackIdentifier local_res8 [2];
  FMovieSceneTrackIdentifier *local_18;
  uint *local_10;
  
  uVar3 = CityHash64((char *)param_1,0x10);
  iVar1 = TSet<TTuple<FGuid,FMovieSceneTrackIdentifier>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneTrackIdentifier,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FMovieSceneTrackIdentifier>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneTrackIdentifier,0>,FDefaultSetAllocator>
                      *)&(this->TemplateLedger).TrackSignatureToTrackIdentifier,(uint)uVar3,param_1)
  ;
  if (((iVar1 != -1) &&
      (lVar7 = (longlong)iVar1 * 0x1c +
               *(longlong *)&(this->TemplateLedger).TrackSignatureToTrackIdentifier, lVar7 != 0)) &&
     (local_res8[0].Value = *(uint *)(lVar7 + 0x10), local_res8[0].Value != 0xffffffff)) {
    if (*(int *)&(this->Tracks).field_0x8 != *(int *)&(this->Tracks).field_0x34) {
      puVar6 = *(undefined1 **)&(this->Tracks).field_0x40;
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &(this->Tracks).field_0x38;
      }
      uVar2 = *(uint *)(puVar6 + (ulonglong)
                                 (*(int *)&(this->Tracks).field_0x48 - 1U & local_res8[0].Value) * 4
                       );
      if (uVar2 != 0xffffffff) {
        do {
          puVar4 = (uint *)((longlong)(int)uVar2 * 0x88 + *(longlong *)&this->Tracks);
          if (*puVar4 == local_res8[0].Value) {
            puVar5 = puVar4 + 2;
            if (puVar4 == (uint *)0x0) {
              puVar5 = (uint *)0x0;
            }
            if (puVar5 != (uint *)0x0) {
              local_18 = local_res8;
              local_10 = puVar5;
              TSet<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>,TDefaultMapHashableKeyFuncs<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,0>,FDefaultSetAllocator>
              ::
              Emplace<TPairInitializer<FMovieSceneTrackIdentifier_const_&,FMovieSceneEvaluationTrack_&&>_>
                        ((TSet<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>,TDefaultMapHashableKeyFuncs<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,0>,FDefaultSetAllocator>
                          *)&this->StaleTracks,
                         (TPairInitializer<FMovieSceneTrackIdentifier_const_&,FMovieSceneEvaluationTrack_&&>
                          *)&stack0x00000018,(bool *)&local_18);
            }
            break;
          }
          uVar2 = puVar4[0x20];
        } while (uVar2 != 0xffffffff);
      }
    }
    if (*(int *)&(this->Tracks).field_0x8 != *(int *)&(this->Tracks).field_0x34) {
      TSet<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>,TDefaultMapHashableKeyFuncs<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,0>,FDefaultSetAllocator>
      ::RemoveImpl<FMovieSceneTrackIdentifier>
                ((TSet<TTuple<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack>,TDefaultMapHashableKeyFuncs<FMovieSceneTrackIdentifier,FMovieSceneEvaluationTrack,0>,FDefaultSetAllocator>
                  *)this,local_res8[0].Value,local_res8);
    }
    if (*(int *)&(this->TemplateLedger).TrackSignatureToTrackIdentifier.field_0x8 !=
        *(int *)&(this->TemplateLedger).TrackSignatureToTrackIdentifier.field_0x34) {
      uVar3 = CityHash64((char *)param_1,0x10);
      TSet<TTuple<FGuid,FMovieSceneTrackIdentifier>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneTrackIdentifier,0>,FDefaultSetAllocator>
      ::RemoveImpl<FGuid>((TSet<TTuple<FGuid,FMovieSceneTrackIdentifier>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneTrackIdentifier,0>,FDefaultSetAllocator>
                           *)&(this->TemplateLedger).TrackSignatureToTrackIdentifier,(uint)uVar3,
                          param_1);
      return;
    }
  }
  return;
}

