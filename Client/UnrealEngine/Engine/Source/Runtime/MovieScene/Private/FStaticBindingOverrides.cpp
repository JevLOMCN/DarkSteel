// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 3

// AddBindingOverride @ 14618cb30

void __thiscall
UE::MovieScene::FStaticBindingOverrides::AddBindingOverride
          (FStaticBindingOverrides *this,FMovieSceneEvaluationOperand *param_1,
          FMovieSceneEvaluationOperand *param_2)

{
  TPairInitializer<FMovieSceneEvaluationOperand_const_&,FMovieSceneEvaluationOperand_const_&>
  local_res8 [2];
  FMovieSceneEvaluationOperand *local_18;
  FMovieSceneEvaluationOperand *local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  TSet<TTuple<FMovieSceneEvaluationOperand,FMovieSceneEvaluationOperand>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationOperand,FMovieSceneEvaluationOperand,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FMovieSceneEvaluationOperand_const_&,FMovieSceneEvaluationOperand_const_&>_>
            ((TSet<TTuple<FMovieSceneEvaluationOperand,FMovieSceneEvaluationOperand>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationOperand,FMovieSceneEvaluationOperand,0>,FDefaultSetAllocator>
              *)&this->BindingOverrides,local_res8,(bool *)&local_18);
  return;
}

// GetBindingOverride @ 1461b05b0

FMovieSceneEvaluationOperand * __thiscall
UE::MovieScene::FStaticBindingOverrides::GetBindingOverride
          (FStaticBindingOverrides *this,FMovieSceneEvaluationOperand *param_1)

{
  uint uVar1;
  int iVar2;
  FMovieSceneEvaluationOperand *pFVar3;
  FMovieSceneEvaluationOperand *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1);
  iVar2 = TSet<TTuple<FMovieSceneEvaluationOperand,FMovieSceneEvaluationOperand>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationOperand,FMovieSceneEvaluationOperand,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMovieSceneEvaluationOperand>
                    ((TSet<TTuple<FMovieSceneEvaluationOperand,FMovieSceneEvaluationOperand>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationOperand,FMovieSceneEvaluationOperand,0>,FDefaultSetAllocator>
                      *)&this->BindingOverrides,uVar1,param_1);
  pFVar4 = (FMovieSceneEvaluationOperand *)0x0;
  if (iVar2 != -1) {
    pFVar4 = (FMovieSceneEvaluationOperand *)
             ((longlong)iVar2 * 0x30 + *(longlong *)&(this->BindingOverrides).field_0x0);
  }
  pFVar3 = pFVar4 + 1;
  if (pFVar4 == (FMovieSceneEvaluationOperand *)0x0) {
    pFVar3 = (FMovieSceneEvaluationOperand *)0x0;
  }
  return pFVar3;
}

// RemoveBindingOverride @ 1461ca3c0

void __thiscall
UE::MovieScene::FStaticBindingOverrides::RemoveBindingOverride
          (FStaticBindingOverrides *this,FMovieSceneEvaluationOperand *param_1)

{
  uint uVar1;
  
  if (*(int *)&(this->BindingOverrides).field_0x8 != *(int *)&(this->BindingOverrides).field_0x34) {
    uVar1 = ::GetTypeHash(param_1);
    TSet<TTuple<FMovieSceneEvaluationOperand,FMovieSceneEvaluationOperand>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationOperand,FMovieSceneEvaluationOperand,0>,FDefaultSetAllocator>
    ::RemoveImpl<FMovieSceneEvaluationOperand>
              ((TSet<TTuple<FMovieSceneEvaluationOperand,FMovieSceneEvaluationOperand>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationOperand,FMovieSceneEvaluationOperand,0>,FDefaultSetAllocator>
                *)&this->BindingOverrides,uVar1,param_1);
  }
  return;
}

