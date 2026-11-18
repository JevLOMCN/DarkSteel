// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// StaticStruct @ 1462697c0

UScriptStruct * __cdecl FTestMovieSceneStruct::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTestMovieSceneStruct.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FTestMovieSceneStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTestMovieSceneStruct,(UObject *)pUVar1,
                         L"TestMovieSceneStruct");
  }
  return Z_Registration_Info_UScriptStruct_FTestMovieSceneStruct.OuterSingleton;
}

// FTestMovieSceneStruct @ 1462997d0

FTestMovieSceneStruct * __thiscall
FTestMovieSceneStruct::FTestMovieSceneStruct
          (FTestMovieSceneStruct *this,FTestMovieSceneStruct *param_1)

{
  double dVar1;
  
  this->First = param_1->First;
  this->Second = param_1->Second;
  this->Enum = param_1->Enum;
  dVar1 = (param_1->Vector).field0_0x0._s_0.Y;
  (this->Vector).field0_0x0._s_0.X = (param_1->Vector).field0_0x0._s_0.X;
  (this->Vector).field0_0x0._s_0.Y = dVar1;
  (this->Vector).field0_0x0._s_0.Z = (param_1->Vector).field0_0x0._s_0.Z;
  (this->MultipleIntegers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MultipleIntegers).AllocatorInstance.Data =
       (param_1->MultipleIntegers).AllocatorInstance.Data;
  (param_1->MultipleIntegers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MultipleIntegers).ArrayNum = (param_1->MultipleIntegers).ArrayNum;
  (this->MultipleIntegers).ArrayMax = (param_1->MultipleIntegers).ArrayMax;
  (param_1->MultipleIntegers).ArrayNum = 0;
  (param_1->MultipleIntegers).ArrayMax = 0;
  (this->MultipleVectors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MultipleVectors).AllocatorInstance.Data = (param_1->MultipleVectors).AllocatorInstance.Data
  ;
  (param_1->MultipleVectors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MultipleVectors).ArrayNum = (param_1->MultipleVectors).ArrayNum;
  (this->MultipleVectors).ArrayMax = (param_1->MultipleVectors).ArrayMax;
  (param_1->MultipleVectors).ArrayNum = 0;
  (param_1->MultipleVectors).ArrayMax = 0;
  return this;
}

