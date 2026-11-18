// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 7

// StaticStruct @ 146168620

UScriptStruct * __cdecl FMovieSceneSubSequenceTreeEntry::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSubSequenceTreeEntry.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneSubSequenceTreeEntry.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSubSequenceTreeEntry,(UObject *)pUVar1
                         ,L"MovieSceneSubSequenceTreeEntry");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneSubSequenceTreeEntry.OuterSingleton;
}

// FMovieSceneSubSequenceTreeEntry @ 146181270

FMovieSceneSubSequenceTreeEntry * __thiscall
FMovieSceneSubSequenceTreeEntry::FMovieSceneSubSequenceTreeEntry
          (FMovieSceneSubSequenceTreeEntry *this,FMovieSceneSubSequenceTreeEntry *param_1)

{
  (this->SequenceID).Value = (param_1->SequenceID).Value;
  this->Flags = param_1->Flags;
  (this->RootToSequenceWarpCounter)._padding_ = 0;
  (this->RootToSequenceWarpCounter)._padding_ = (param_1->RootToSequenceWarpCounter)._padding_;
  (param_1->RootToSequenceWarpCounter)._padding_ = 0;
  *(int *)&(this->RootToSequenceWarpCounter)._padding_ =
       (int)(param_1->RootToSequenceWarpCounter)._padding_;
  *(undefined4 *)((longlong)&(this->RootToSequenceWarpCounter)._padding_ + 4) =
       *(undefined4 *)((longlong)&(param_1->RootToSequenceWarpCounter)._padding_ + 4);
  (param_1->RootToSequenceWarpCounter)._padding_ = 0;
  *(char *)&(this->RootToSequenceWarpCounter)._padding_ =
       (char)(param_1->RootToSequenceWarpCounter)._padding_;
  (this->RootToSequenceWarpCounter).WarpCounts.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RootToSequenceWarpCounter).WarpCounts.AllocatorInstance.Data =
       (param_1->RootToSequenceWarpCounter).WarpCounts.AllocatorInstance.Data;
  (param_1->RootToSequenceWarpCounter).WarpCounts.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RootToSequenceWarpCounter).WarpCounts.ArrayNum =
       (param_1->RootToSequenceWarpCounter).WarpCounts.ArrayNum;
  (this->RootToSequenceWarpCounter).WarpCounts.ArrayMax =
       (param_1->RootToSequenceWarpCounter).WarpCounts.ArrayMax;
  (param_1->RootToSequenceWarpCounter).WarpCounts.ArrayNum = 0;
  (param_1->RootToSequenceWarpCounter).WarpCounts.ArrayMax = 0;
  return this;
}

// FMovieSceneSubSequenceTreeEntry @ 1461812d0

FMovieSceneSubSequenceTreeEntry * __thiscall
FMovieSceneSubSequenceTreeEntry::FMovieSceneSubSequenceTreeEntry
          (FMovieSceneSubSequenceTreeEntry *this,FMovieSceneSubSequenceTreeEntry *param_1)

{
  (this->SequenceID).Value = (param_1->SequenceID).Value;
  this->Flags = param_1->Flags;
  FMovieSceneWarpCounter::FMovieSceneWarpCounter
            (&this->RootToSequenceWarpCounter,&param_1->RootToSequenceWarpCounter);
  return this;
}

// FMovieSceneSubSequenceTreeEntry @ 146181300

FMovieSceneSubSequenceTreeEntry * __thiscall
FMovieSceneSubSequenceTreeEntry::FMovieSceneSubSequenceTreeEntry
          (FMovieSceneSubSequenceTreeEntry *this)

{
  (this->SequenceID).Value = 0xffffffff;
  (this->RootToSequenceWarpCounter)._padding_ = 0;
  (this->RootToSequenceWarpCounter)._padding_ = 0;
  *(undefined1 *)&(this->RootToSequenceWarpCounter)._padding_ = 0;
  (this->RootToSequenceWarpCounter).WarpCounts.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RootToSequenceWarpCounter).WarpCounts.ArrayNum = 0;
  (this->RootToSequenceWarpCounter).WarpCounts.ArrayMax = 0;
  return this;
}

// ~FMovieSceneSubSequenceTreeEntry @ 146185680

void __thiscall
FMovieSceneSubSequenceTreeEntry::~FMovieSceneSubSequenceTreeEntry
          (FMovieSceneSubSequenceTreeEntry *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->RootToSequenceWarpCounter).WarpCounts.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = (void *)(this->RootToSequenceWarpCounter)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
    return;
  }
  return;
}

// operator= @ 146186c00

FMovieSceneSubSequenceTreeEntry * __thiscall
FMovieSceneSubSequenceTreeEntry::operator=
          (FMovieSceneSubSequenceTreeEntry *this,FMovieSceneSubSequenceTreeEntry *param_1)

{
  (this->SequenceID).Value = (param_1->SequenceID).Value;
  this->Flags = param_1->Flags;
  FMovieSceneWarpCounter::operator=
            (&this->RootToSequenceWarpCounter,&param_1->RootToSequenceWarpCounter);
  return this;
}

// operator= @ 146186c30

FMovieSceneSubSequenceTreeEntry * __thiscall
FMovieSceneSubSequenceTreeEntry::operator=
          (FMovieSceneSubSequenceTreeEntry *this,FMovieSceneSubSequenceTreeEntry *param_1)

{
  (this->SequenceID).Value = (param_1->SequenceID).Value;
  this->Flags = param_1->Flags;
  FMovieSceneWarpCounter::operator=
            (&this->RootToSequenceWarpCounter,&param_1->RootToSequenceWarpCounter);
  return this;
}

