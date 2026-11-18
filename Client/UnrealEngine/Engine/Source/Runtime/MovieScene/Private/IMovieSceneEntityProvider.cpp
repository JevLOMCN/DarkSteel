// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// ~IMovieSceneEntityProvider @ 146098140

void __thiscall
IMovieSceneEntityProvider::~IMovieSceneEntityProvider(IMovieSceneEntityProvider *this)

{
  *this = (IMovieSceneEntityProvider)&___7IMovieSceneEntityProvider__6B_;
  return;
}

// ImportEntity @ 1460d1db0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
IMovieSceneEntityProvider::ImportEntity
          (IMovieSceneEntityProvider *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001460d1db3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 0x10))();
  return;
}

// InterrogateEntity @ 1460d6e20

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
IMovieSceneEntityProvider::InterrogateEntity
          (IMovieSceneEntityProvider *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001460d6e23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 0x18))();
  return;
}

// InterrogateEntityImpl @ 1460d6e30

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
IMovieSceneEntityProvider::InterrogateEntityImpl
          (IMovieSceneEntityProvider *this,UMovieSceneEntitySystemLinker *param_1,
          FEntityImportParams *param_2,FImportedEntity *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001460d6e33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this + 0x10))();
  return;
}

// PopulateEvaluationFieldImpl @ 1460de830

bool __thiscall
IMovieSceneEntityProvider::PopulateEvaluationFieldImpl
          (IMovieSceneEntityProvider *this,TRange<FFrameNumber> *param_1,
          FMovieSceneEvaluationFieldEntityMetaData *param_2,
          FMovieSceneEntityComponentFieldBuilder *param_3)

{
  return false;
}

// _getUObject @ 146100810

UObject * __thiscall IMovieSceneEntityProvider::_getUObject(IMovieSceneEntityProvider *this)

{
  return (UObject *)0x0;
}

