// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// StaticStruct @ 14a382fc0

UScriptStruct * __cdecl FMovieSceneControlRigSpaceBaseKey::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneControlRigSpaceBaseKey.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FMovieSceneControlRigSpaceBaseKey.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneControlRigSpaceBaseKey,
                         (UObject *)pUVar1,L"MovieSceneControlRigSpaceBaseKey");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneControlRigSpaceBaseKey.OuterSingleton;
}

// GetName @ 14a416710

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FName __thiscall FMovieSceneControlRigSpaceBaseKey::GetName(FMovieSceneControlRigSpaceBaseKey *this)

{
  EMovieSceneControlRigSpaceType EVar1;
  FName in_RDX;
  
  EVar1 = this->SpaceType;
  if (EVar1 == Parent) {
    ::FName::FName((FName *)in_RDX,L"Parent");
    return in_RDX;
  }
  if (EVar1 != World) {
    if (EVar1 != ControlRig) {
      *(undefined8 *)in_RDX = 0;
      return in_RDX;
    }
    *(FName *)in_RDX = (this->ControlRigElement).Name;
    return in_RDX;
  }
  ::FName::FName((FName *)in_RDX,L"World");
  return in_RDX;
}

