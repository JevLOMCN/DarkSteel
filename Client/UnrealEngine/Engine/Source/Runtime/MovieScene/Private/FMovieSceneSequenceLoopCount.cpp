// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// StaticStruct @ 146055580

UScriptStruct * __cdecl FMovieSceneSequenceLoopCount::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSequenceLoopCount.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneSequenceLoopCount.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequenceLoopCount,(UObject *)pUVar1,
                         L"MovieSceneSequenceLoopCount");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneSequenceLoopCount.OuterSingleton;
}

// SerializeFromMismatchedTag @ 146234350

bool __thiscall
FMovieSceneSequenceLoopCount::SerializeFromMismatchedTag
          (FMovieSceneSequenceLoopCount *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  FName FVar1;
  FArchive *this_00;
  int *piVar2;
  FNameEntryId FVar3;
  undefined4 extraout_var;
  FName FVar4;
  undefined1 local_res10 [8];
  
  FVar1 = param_1->Type;
  FVar3 = FNameEntryId::FromValidEName((EName)local_res10);
  FVar4.Number = 0;
  FVar4.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar3.Value);
  if (FVar1 != FVar4) {
    return false;
  }
  this_00 = *(FArchive **)(*(longlong *)param_2 + 8);
  piVar2 = (int *)**(undefined8 **)&this_00->field_0x8;
  if (piVar2 + 1 <= (int *)(*(undefined8 **)&this_00->field_0x8)[1]) {
    this->Value = *piVar2;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
    return true;
  }
  if ((this_00->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)this_00 + 0x188))(this_00,this,4);
    return true;
  }
  FArchive::SerializeByteOrderSwapped(this_00,(uint *)this);
  return true;
}

