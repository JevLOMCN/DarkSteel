// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// StaticStruct @ 146053df0

UScriptStruct * __cdecl FGeneratedMovieSceneKeyStruct::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGeneratedMovieSceneKeyStruct.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FGeneratedMovieSceneKeyStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGeneratedMovieSceneKeyStruct,(UObject *)pUVar1,
                         L"GeneratedMovieSceneKeyStruct");
  }
  return Z_Registration_Info_UScriptStruct_FGeneratedMovieSceneKeyStruct.OuterSingleton;
}

// ~FGeneratedMovieSceneKeyStruct @ 146059510

void __thiscall
FGeneratedMovieSceneKeyStruct::~FGeneratedMovieSceneKeyStruct(FGeneratedMovieSceneKeyStruct *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  this->_padding_ = (longlong)&___7FGeneratedMovieSceneKeyStruct__6B_;
  if (*(longlong *)&this->OnPropertyChangedEvent != 0) {
    plVar1 = *(longlong **)&(this->OnPropertyChangedEvent).field_0x28;
    plVar2 = (longlong *)&(this->OnPropertyChangedEvent).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x000146059533. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))();
    return;
  }
  return;
}

