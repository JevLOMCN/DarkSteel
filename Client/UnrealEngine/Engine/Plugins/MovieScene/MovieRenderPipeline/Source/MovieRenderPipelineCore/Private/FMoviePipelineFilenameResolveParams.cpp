// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 4

// FMoviePipelineFilenameResolveParams @ 14dd09c20

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMoviePipelineFilenameResolveParams * __thiscall
FMoviePipelineFilenameResolveParams::FMoviePipelineFilenameResolveParams
          (FMoviePipelineFilenameResolveParams *this,FMoviePipelineFilenameResolveParams *param_1)

{
  UMoviePipelineExecutorJob *pUVar1;
  UMoviePipelineExecutorShot *pUVar2;
  
  this->FrameNumber = param_1->FrameNumber;
  this->FrameNumberShot = param_1->FrameNumberShot;
  this->FrameNumberRel = param_1->FrameNumberRel;
  this->FrameNumberShotRel = param_1->FrameNumberShotRel;
  ::FString::FString(&this->CameraNameOverride,&param_1->CameraNameOverride);
  ::FString::FString(&this->ShotNameOverride,&param_1->ShotNameOverride);
  this->ZeroPadFrameNumberCount = param_1->ZeroPadFrameNumberCount;
  this->bForceRelativeFrameNumbers = param_1->bForceRelativeFrameNumbers;
  ::FString::FString(&this->FileNameOverride,&param_1->FileNameOverride);
  *(undefined8 *)&(this->FileNameFormatOverrides).field_0x0 = 0;
  *(undefined8 *)&(this->FileNameFormatOverrides).field_0x8 = 0;
  *(undefined8 *)&(this->FileNameFormatOverrides).field_0x20 = 0;
  *(undefined4 *)&(this->FileNameFormatOverrides).field_0x28 = 0;
  *(undefined4 *)&(this->FileNameFormatOverrides).field_0x2c = 0x80;
  *(undefined4 *)&(this->FileNameFormatOverrides).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FileNameFormatOverrides).field_0x34 = 0;
  *(undefined8 *)&(this->FileNameFormatOverrides).field_0x40 = 0;
  *(undefined4 *)&(this->FileNameFormatOverrides).field_0x48 = 0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&this->FileNameFormatOverrides,
              (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&param_1->FileNameFormatOverrides);
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
  (this->InitializationTime).Ticks = (param_1->InitializationTime).Ticks;
  (this->InitializationTimeOffset).Ticks = (param_1->InitializationTimeOffset).Ticks;
  this->InitializationVersion = param_1->InitializationVersion;
  pUVar1 = (param_1->Job).field0_0x0.DebugPtr;
  (this->Job).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UMoviePipelineExecutorJob *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->CameraIndex = param_1->CameraIndex;
  pUVar2 = (param_1->ShotOverride).field0_0x0.DebugPtr;
  (this->ShotOverride).field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 != (UMoviePipelineExecutorShot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  this->AdditionalFrameNumberOffset = param_1->AdditionalFrameNumberOffset;
  return this;
}

// ~FMoviePipelineFilenameResolveParams @ 14dd0d3d0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
FMoviePipelineFilenameResolveParams::~FMoviePipelineFilenameResolveParams
          (FMoviePipelineFilenameResolveParams *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
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
  *(undefined4 *)&(this->FileNameFormatOverrides).field_0x48 = 0;
  pvVar1 = *(void **)&(this->FileNameFormatOverrides).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FileNameFormatOverrides);
  pFVar2 = (this->FileNameOverride).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ShotNameOverride).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->CameraNameOverride).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// StaticStruct @ 14dd5e9d0

UScriptStruct * __cdecl FMoviePipelineFilenameResolveParams::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMoviePipelineFilenameResolveParams.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UScriptStruct_FMoviePipelineFilenameResolveParams.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMoviePipelineFilenameResolveParams,
                         (UObject *)pUVar1,L"MoviePipelineFilenameResolveParams");
  }
  return Z_Registration_Info_UScriptStruct_FMoviePipelineFilenameResolveParams.OuterSingleton;
}

// FMoviePipelineFilenameResolveParams @ 14dd6a170

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMoviePipelineFilenameResolveParams * __thiscall
FMoviePipelineFilenameResolveParams::FMoviePipelineFilenameResolveParams
          (FMoviePipelineFilenameResolveParams *this)

{
  (this->CameraNameOverride).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CameraNameOverride).Data.ArrayNum = 0;
  (this->CameraNameOverride).Data.ArrayMax = 0;
  (this->ShotNameOverride).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShotNameOverride).Data.ArrayNum = 0;
  (this->ShotNameOverride).Data.ArrayMax = 0;
  (this->FileNameOverride).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FileNameOverride).Data.ArrayNum = 0;
  (this->FileNameOverride).Data.ArrayMax = 0;
  *(undefined8 *)&this->FileNameFormatOverrides = 0;
  *(undefined8 *)&(this->FileNameFormatOverrides).field_0x8 = 0;
  *(undefined8 *)&(this->FileNameFormatOverrides).field_0x20 = 0;
  this->FrameNumber = 0;
  this->FrameNumberShot = 0;
  this->FrameNumberRel = 0;
  this->FrameNumberShotRel = 0;
  this->ZeroPadFrameNumberCount = 0;
  this->bForceRelativeFrameNumbers = false;
  *(undefined4 *)&(this->FileNameFormatOverrides).field_0x28 = 0;
  *(undefined4 *)&(this->FileNameFormatOverrides).field_0x2c = 0x80;
  *(undefined4 *)&(this->FileNameFormatOverrides).field_0x34 = 0;
  *(undefined4 *)&(this->FileNameFormatOverrides).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->FileNameFormatOverrides).field_0x40 = 0;
  *(undefined4 *)&(this->FileNameFormatOverrides).field_0x48 = 0;
  *(undefined8 *)&this->FileMetadata = 0;
  *(undefined8 *)&(this->FileMetadata).field_0x8 = 0;
  *(undefined8 *)&(this->FileMetadata).field_0x20 = 0;
  *(undefined4 *)&(this->FileMetadata).field_0x28 = 0;
  *(undefined4 *)&(this->FileMetadata).field_0x2c = 0x80;
  *(undefined4 *)&(this->FileMetadata).field_0x34 = 0;
  *(undefined4 *)&(this->FileMetadata).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->FileMetadata).field_0x40 = 0;
  *(undefined4 *)&(this->FileMetadata).field_0x48 = 0;
  (this->InitializationTime).Ticks = 0;
  (this->InitializationTimeOffset).Ticks = 0;
  this->InitializationVersion = 0;
  (this->Job).field0_0x0.DebugPtr = (UMoviePipelineExecutorJob *)0x0;
  (this->ShotOverride).field0_0x0.DebugPtr = (UMoviePipelineExecutorShot *)0x0;
  this->AdditionalFrameNumberOffset = 0;
  this->CameraIndex = -1;
  return this;
}

