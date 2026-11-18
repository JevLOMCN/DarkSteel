// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 3

// FMovieSceneDynamicBinding @ 14617eb20

FMovieSceneDynamicBinding * __thiscall
FMovieSceneDynamicBinding::FMovieSceneDynamicBinding
          (FMovieSceneDynamicBinding *this,FMovieSceneDynamicBinding *param_1)

{
  UFunction *pUVar1;
  FFieldClass *pFVar2;
  
  pUVar1 = (param_1->Function).field0_0x0.DebugPtr;
  (this->Function).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UFunction *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  *(undefined8 *)&this->ResolveParamsProperty = 0;
  *(undefined8 *)&(this->ResolveParamsProperty).field_0x8 = 0;
  *(undefined8 *)&(this->ResolveParamsProperty).field_0x10 = 0;
  *(undefined8 *)&(this->ResolveParamsProperty).field_0x18 = 0;
  pFVar2 = FProperty::StaticClass();
  FFieldPath::GetTyped((FFieldPath *)&param_1->ResolveParamsProperty,pFVar2,(UStruct *)0x0);
  *(undefined8 *)&this->ResolveParamsProperty = *(undefined8 *)&param_1->ResolveParamsProperty;
  *(undefined8 *)&(this->ResolveParamsProperty).field_0x8 =
       *(undefined8 *)&(param_1->ResolveParamsProperty).field_0x8;
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)&(this->ResolveParamsProperty).field_0x10,
             (TArray<FName,TSizedDefaultAllocator<32>_> *)
             &(param_1->ResolveParamsProperty).field_0x10);
  return this;
}

// operator= @ 1461866d0

FMovieSceneDynamicBinding * __thiscall
FMovieSceneDynamicBinding::operator=
          (FMovieSceneDynamicBinding *this,FMovieSceneDynamicBinding *param_1)

{
  UFunction *pUVar1;
  FFieldClass *pFVar2;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_1->Function).field0_0x0.DebugPtr, pUVar1 != (UFunction *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Function).field0_0x0 = (param_1->Function).field0_0x0;
  pFVar2 = FProperty::StaticClass();
  FFieldPath::GetTyped((FFieldPath *)&param_1->ResolveParamsProperty,pFVar2,(UStruct *)0x0);
  *(undefined8 *)&this->ResolveParamsProperty = *(undefined8 *)&param_1->ResolveParamsProperty;
  *(undefined8 *)&(this->ResolveParamsProperty).field_0x8 =
       *(undefined8 *)&(param_1->ResolveParamsProperty).field_0x8;
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)&(this->ResolveParamsProperty).field_0x10,
             (TArray<FName,TSizedDefaultAllocator<32>_> *)
             &(param_1->ResolveParamsProperty).field_0x10);
  return this;
}

// StaticStruct @ 1461e8bd0

UScriptStruct * __cdecl FMovieSceneDynamicBinding::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneDynamicBinding.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneDynamicBinding.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneDynamicBinding,(UObject *)pUVar1,
                         L"MovieSceneDynamicBinding");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneDynamicBinding.OuterSingleton;
}

