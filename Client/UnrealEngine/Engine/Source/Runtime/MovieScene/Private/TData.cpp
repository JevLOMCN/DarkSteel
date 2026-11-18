// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// AddTo @ 1462a3370

void __thiscall
TBlendableToken<int>::TData<int>::AddTo
          (TData<int> *this,TMaskedBlendable<double,1> *param_1,float param_2,
          EMovieSceneBlendType param_3,int param_4,TMovieSceneInitialValueStore<int> *param_5)

{
  int iVar1;
  
  iVar1 = -1;
  if (param_4 != -1) {
    iVar1 = param_4;
  }
  UE::MovieScene::BlendValue<double,int,int,1>(param_1,this->Data,0,param_2,param_3,iVar1,param_5);
  return;
}

