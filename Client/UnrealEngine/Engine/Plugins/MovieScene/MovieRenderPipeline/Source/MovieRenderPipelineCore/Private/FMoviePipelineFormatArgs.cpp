// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 3

// StaticStruct @ 14dd5e710

UScriptStruct * __cdecl FMoviePipelineFormatArgs::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMoviePipelineFormatArgs.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UScriptStruct_FMoviePipelineFormatArgs.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMoviePipelineFormatArgs,(UObject *)pUVar1,
                         L"MoviePipelineFormatArgs");
  }
  return Z_Registration_Info_UScriptStruct_FMoviePipelineFormatArgs.OuterSingleton;
}

// FMoviePipelineFormatArgs @ 14dd6a250

FMoviePipelineFormatArgs * __thiscall
FMoviePipelineFormatArgs::FMoviePipelineFormatArgs
          (FMoviePipelineFormatArgs *this,FMoviePipelineFormatArgs *param_1)

{
  UMoviePipelineExecutorJob *pUVar1;
  
  *(undefined8 *)&this->FilenameArguments = 0;
  *(undefined8 *)&(this->FilenameArguments).field_0x8 = 0;
  *(undefined8 *)&(this->FilenameArguments).field_0x20 = 0;
  *(undefined4 *)&(this->FilenameArguments).field_0x28 = 0;
  *(undefined4 *)&(this->FilenameArguments).field_0x2c = 0x80;
  *(undefined4 *)&(this->FilenameArguments).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FilenameArguments).field_0x34 = 0;
  *(undefined8 *)&(this->FilenameArguments).field_0x40 = 0;
  *(undefined4 *)&(this->FilenameArguments).field_0x48 = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)this,(TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                       *)param_1);
  *(undefined8 *)&(this->FileMetadata).field_0x0 = 0;
  *(undefined8 *)&(this->FileMetadata).field_0x8 = 0;
  *(undefined8 *)&(this->FileMetadata).field_0x20 = 0;
  *(undefined4 *)&(this->FileMetadata).field_0x28 = 0;
  *(undefined4 *)&(this->FileMetadata).field_0x2c = 0x80;
  *(undefined4 *)&(this->FileMetadata).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FileMetadata).field_0x34 = 0;
  *(undefined8 *)&(this->FileMetadata).field_0x40 = 0;
  *(undefined4 *)&(this->FileMetadata).field_0x48 = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&this->FileMetadata,
              (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&param_1->FileMetadata);
  pUVar1 = (param_1->InJob).field0_0x0.DebugPtr;
  (this->InJob).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UMoviePipelineExecutorJob *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return this;
}

// ~FMoviePipelineFormatArgs @ 14dd6bd00

void __thiscall FMoviePipelineFormatArgs::~FMoviePipelineFormatArgs(FMoviePipelineFormatArgs *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->FileMetadata).field_0x48 = 0;
  pvVar1 = *(void **)&(this->FileMetadata).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FileMetadata);
  *(undefined4 *)&(this->FilenameArguments).field_0x48 = 0;
  pvVar1 = *(void **)&(this->FilenameArguments).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

