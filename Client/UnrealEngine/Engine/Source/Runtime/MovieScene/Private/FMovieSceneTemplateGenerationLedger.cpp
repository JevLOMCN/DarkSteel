// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 4

// operator= @ 14609aba0

FMovieSceneTemplateGenerationLedger * __thiscall
FMovieSceneTemplateGenerationLedger::operator=
          (FMovieSceneTemplateGenerationLedger *this,FMovieSceneTemplateGenerationLedger *param_1)

{
  TMap<FGuid,FMovieSceneTrackIdentifier,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneTrackIdentifier,0>_>
  *this_00;
  undefined1 *puVar1;
  undefined1 *puVar2;
  TMap<FGuid,FMovieSceneFrameRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneFrameRange,0>_>
  *this_01;
  int iVar3;
  
  this_00 = &this->TrackSignatureToTrackIdentifier;
  (this->LastTrackIdentifier).Value = (param_1->LastTrackIdentifier).Value;
  if (this_00 != &param_1->TrackSignatureToTrackIdentifier) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->TrackSignatureToTrackIdentifier).field_0x38,
               (int *)&(this->TrackSignatureToTrackIdentifier).field_0x48,
               (ForElementType<FSetElementId> *)
               &(param_1->TrackSignatureToTrackIdentifier).field_0x38,
               *(int *)&(param_1->TrackSignatureToTrackIdentifier).field_0x48);
    iVar3 = *(int *)&(param_1->TrackSignatureToTrackIdentifier).field_0x8;
    TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneTrackIdentifier>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneTrackIdentifier>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_00,iVar3);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,iVar3,(ForAnyElementType *)this_00,
               (int *)&(this->TrackSignatureToTrackIdentifier).field_0x8,
               (int *)&(this->TrackSignatureToTrackIdentifier).field_0xc);
    puVar1 = &(param_1->TrackSignatureToTrackIdentifier).field_0x10;
    puVar2 = &(this->TrackSignatureToTrackIdentifier).field_0x10;
    *(undefined4 *)&(this->TrackSignatureToTrackIdentifier).field_0x30 =
         *(undefined4 *)&(param_1->TrackSignatureToTrackIdentifier).field_0x30;
    *(undefined4 *)&(this->TrackSignatureToTrackIdentifier).field_0x34 =
         *(undefined4 *)&(param_1->TrackSignatureToTrackIdentifier).field_0x34;
    if (puVar2 != puVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)puVar2,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
    }
    if (iVar3 != 0) {
      memcpy(*(void **)this_00,*(void **)&param_1->TrackSignatureToTrackIdentifier,
             (longlong)iVar3 * 0x1c);
    }
  }
  this_01 = &this->SubSectionRanges;
  if (this_01 != &param_1->SubSectionRanges) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->SubSectionRanges).field_0x38,
               (int *)&(this->SubSectionRanges).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->SubSectionRanges).field_0x38,
               *(int *)&(param_1->SubSectionRanges).field_0x48);
    iVar3 = *(int *)&(param_1->SubSectionRanges).field_0x8;
    TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneFrameRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<FGuid,FMovieSceneFrameRange>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_01,iVar3);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,4,iVar3,(ForAnyElementType *)this_01,(int *)&(this->SubSectionRanges).field_0x8,
               (int *)&(this->SubSectionRanges).field_0xc);
    puVar1 = &(param_1->SubSectionRanges).field_0x10;
    puVar2 = &(this->SubSectionRanges).field_0x10;
    *(undefined4 *)&(this->SubSectionRanges).field_0x30 =
         *(undefined4 *)&(param_1->SubSectionRanges).field_0x30;
    *(undefined4 *)&(this->SubSectionRanges).field_0x34 =
         *(undefined4 *)&(param_1->SubSectionRanges).field_0x34;
    if (puVar2 != puVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)puVar2,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
    }
    if (iVar3 != 0) {
      memcpy(*(void **)this_01,*(void **)&param_1->SubSectionRanges,(longlong)iVar3 * 0x28);
    }
  }
  return this;
}

// StaticStruct @ 146166370

UScriptStruct * __cdecl FMovieSceneTemplateGenerationLedger::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTemplateGenerationLedger.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneTemplateGenerationLedger.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTemplateGenerationLedger,
                         (UObject *)pUVar1,L"MovieSceneTemplateGenerationLedger");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneTemplateGenerationLedger.OuterSingleton;
}

// AddTrack @ 146191580

void __thiscall
FMovieSceneTemplateGenerationLedger::AddTrack
          (FMovieSceneTemplateGenerationLedger *this,FGuid *param_1,
          FMovieSceneTrackIdentifier param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ulong64 uVar4;
  uint local_res18 [4];
  FGuid *local_18;
  uint *local_10;
  
  local_res18[0] = param_2.Value;
  uVar4 = CityHash64((char *)param_1,0x10);
  iVar3 = TSet<TTuple<FGuid,FMovieSceneTrackIdentifier>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneTrackIdentifier,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FMovieSceneTrackIdentifier>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneTrackIdentifier,0>,FDefaultSetAllocator>
                      *)&this->TrackSignatureToTrackIdentifier,(uint)uVar4,param_1);
  if (iVar3 != -1) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_790865893381898220>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieSceneEvaluationTemplate.cpp"
                       ,0x14,"!TrackSignatureToTrackIdentifier.Contains(InSignature)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_10 = local_res18;
  local_18 = param_1;
  TSet<TTuple<FGuid,FMovieSceneTrackIdentifier>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneTrackIdentifier,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FGuid_const_&,FMovieSceneTrackIdentifier_const_&>_>
            ((TSet<TTuple<FGuid,FMovieSceneTrackIdentifier>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneTrackIdentifier,0>,FDefaultSetAllocator>
              *)&this->TrackSignatureToTrackIdentifier,
             (TPairInitializer<FGuid_const_&,FMovieSceneTrackIdentifier_const_&> *)&stack0x00000008,
             (bool *)&local_18);
  return;
}

// FindTrackIdentifier @ 1461a9e30

FMovieSceneTrackIdentifier __thiscall
FMovieSceneTemplateGenerationLedger::FindTrackIdentifier
          (FMovieSceneTemplateGenerationLedger *this,FGuid *param_1)

{
  int iVar1;
  ulong64 uVar2;
  longlong lVar3;
  FGuid *in_R8;
  
  uVar2 = CityHash64((char *)in_R8,0x10);
  iVar1 = TSet<TTuple<FGuid,FMovieSceneTrackIdentifier>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneTrackIdentifier,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,FMovieSceneTrackIdentifier>,TDefaultMapHashableKeyFuncs<FGuid,FMovieSceneTrackIdentifier,0>,FDefaultSetAllocator>
                      *)&this->TrackSignatureToTrackIdentifier,(uint)uVar2,in_R8);
  if ((iVar1 != -1) &&
     (lVar3 = (longlong)iVar1 * 0x1c +
              *(longlong *)&(this->TrackSignatureToTrackIdentifier).field_0x0, lVar3 != 0)) {
    param_1->A = *(uint *)(lVar3 + 0x10);
    return (FMovieSceneTrackIdentifier)(uint)param_1;
  }
  param_1->A = 0xffffffff;
  return (FMovieSceneTrackIdentifier)(uint)param_1;
}

