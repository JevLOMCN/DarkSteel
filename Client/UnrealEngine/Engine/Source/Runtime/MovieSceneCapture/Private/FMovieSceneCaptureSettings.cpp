// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneCapture
// Functions: 2

// StaticStruct @ 146bd2970

UScriptStruct * __cdecl FMovieSceneCaptureSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneCaptureSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieSceneCapture();
    Z_Registration_Info_UScriptStruct_FMovieSceneCaptureSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneCaptureSettings,(UObject *)pUVar1,
                         L"MovieSceneCaptureSettings");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneCaptureSettings.OuterSingleton;
}

// FMovieSceneCaptureSettings @ 146bd7e70

FMovieSceneCaptureSettings * __thiscall
FMovieSceneCaptureSettings::FMovieSceneCaptureSettings(FMovieSceneCaptureSettings *this)

{
  FScriptContainerElement *pFVar1;
  FMovieSceneCaptureSettings *pFVar2;
  FString local_28;
  
  (this->FrameRate).Numerator = 60000;
  (this->OutputDirectory).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputDirectory).Path.Data.ArrayNum = 0;
  (this->OutputDirectory).Path.Data.ArrayMax = 0;
  (this->GameModeOverride).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->OutputFormat).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputFormat).Data.ArrayNum = 0;
  (this->OutputFormat).Data.ArrayMax = 0;
  (this->MovieExtension).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MovieExtension).Data.ArrayNum = 0;
  (this->MovieExtension).Data.ArrayMax = 0;
  (this->FrameRate).Denominator = 1;
  (this->CustomFrameRate).Numerator = 60000;
  (this->CustomFrameRate).Denominator = 1;
  (this->Resolution).ResX = 0x500;
  (this->Resolution).ResY = 0x2d0;
  pFVar2 = (FMovieSceneCaptureSettings *)FPaths::VideoCaptureDir(&local_28);
  if (this != pFVar2) {
    pFVar1 = (this->OutputDirectory).Path.Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->OutputDirectory).Path.Data.AllocatorInstance.Data =
         (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar2->OutputDirectory)->
         AllocatorInstance).Data;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar2->OutputDirectory)->AllocatorInstance).
    Data = (FScriptContainerElement *)0x0;
    (this->OutputDirectory).Path.Data.ArrayNum =
         ((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar2->OutputDirectory)->ArrayNum;
    (this->OutputDirectory).Path.Data.ArrayMax =
         ((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar2->OutputDirectory)->ArrayMax;
    (pFVar2->OutputDirectory).Path.Data.ArrayNum = 0;
    (pFVar2->OutputDirectory).Path.Data.ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  FPaths::MakePlatformFilename((FString *)this);
  this->bOverwriteExisting = false;
  this->bUseRelativeFrameNumbers = false;
  this->HandleFrames = 0;
  (this->GameModeOverride).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  ::FString::operator=(&this->OutputFormat,L"{world}");
  (this->CustomFrameRate).Numerator = 0x18;
  (this->CustomFrameRate).Denominator = 1;
  (this->FrameRate).Numerator = 0x18;
  (this->FrameRate).Denominator = 1;
  this->bUseCustomFrameRate = false;
  this->ZeroPadFrameNumbers = '\x04';
  this->bEnableTextureStreaming = false;
  this->bCinematicEngineScalability = true;
  this->bCinematicMode = true;
  this->bAllowMovement = false;
  this->bAllowTurning = false;
  this->bShowPlayer = false;
  this->bShowHUD = false;
  this->bUsePathTracer = false;
  this->PathTracerSamplePerPixel = 0x10;
  ::FString::operator=(&this->MovieExtension,L".avi");
  return this;
}

