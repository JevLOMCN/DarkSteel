// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// StaticStruct @ 14658b920

UScriptStruct * __cdecl FMovieSceneEventPtrs::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEventPtrs.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneEventPtrs.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEventPtrs,(UObject *)pUVar1,
                         L"MovieSceneEventPtrs");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneEventPtrs.OuterSingleton;
}

// FMovieSceneEventPtrs @ 14675fd00

FMovieSceneEventPtrs * __thiscall
FMovieSceneEventPtrs::FMovieSceneEventPtrs(FMovieSceneEventPtrs *this,FMovieSceneEventPtrs *param_1)

{
  UFunction *pUVar1;
  FFieldClass *pFVar2;
  
  pUVar1 = (param_1->Function).field0_0x0.DebugPtr;
  (this->Function).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UFunction *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(undefined8 *)&this->BoundObjectProperty = 0;
  *(undefined8 *)&(this->BoundObjectProperty).field_0x8 = 0;
  *(undefined8 *)&(this->BoundObjectProperty).field_0x10 = 0;
  *(undefined8 *)&(this->BoundObjectProperty).field_0x18 = 0;
  pFVar2 = FProperty::StaticClass();
  FFieldPath::GetTyped((FFieldPath *)&param_1->BoundObjectProperty,pFVar2,(UStruct *)0x0);
  *(undefined8 *)&this->BoundObjectProperty = *(undefined8 *)&param_1->BoundObjectProperty;
  *(undefined8 *)&(this->BoundObjectProperty).field_0x8 =
       *(undefined8 *)&(param_1->BoundObjectProperty).field_0x8;
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)&(this->BoundObjectProperty).field_0x10,
             (TArray<FName,TSizedDefaultAllocator<32>_> *)&(param_1->BoundObjectProperty).field_0x10
            );
  return this;
}

