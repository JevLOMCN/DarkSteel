// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 3

// ~FMovieGraphPostRenderSettings @ 14dcb23f0

void __thiscall
FMovieGraphPostRenderSettings::~FMovieGraphPostRenderSettings(FMovieGraphPostRenderSettings *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->PostRenderMP4PlayOptions).AdditionalCommandLineArguments.Data.AllocatorInstance.
           Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PostRenderMP4PlayOptions).PlayerExecutable.FilePath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PostRenderAvidDNxHRPlayOptions).AdditionalCommandLineArguments.Data.
           AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PostRenderAvidDNxHRPlayOptions).PlayerExecutable.FilePath.Data.AllocatorInstance.
           Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PostRenderAppleProResPlayOptions).AdditionalCommandLineArguments.Data.
           AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PostRenderAppleProResPlayOptions).PlayerExecutable.FilePath.Data.AllocatorInstance
           .Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = (void *)(this->PostRenderImageSequencePlayOptions)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  pvVar2 = (void *)(this->PostRenderImageSequencePlayOptions)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  DestructItems<FString,int>
            ((FString *)(this->OutputTypePriorityOrder).AllocatorInstance.Data,
             (this->OutputTypePriorityOrder).ArrayNum);
  pFVar1 = (this->OutputTypePriorityOrder).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// StaticStruct @ 14dd5efb0

UScriptStruct * __cdecl FMovieGraphPostRenderSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieGraphPostRenderSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UScriptStruct_FMovieGraphPostRenderSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieGraphPostRenderSettings,(UObject *)pUVar1,
                         L"MovieGraphPostRenderSettings");
  }
  return Z_Registration_Info_UScriptStruct_FMovieGraphPostRenderSettings.OuterSingleton;
}

// FMovieGraphPostRenderSettings @ 14dd69e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FMovieGraphPostRenderSettings * __thiscall
FMovieGraphPostRenderSettings::FMovieGraphPostRenderSettings(FMovieGraphPostRenderSettings *this)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined1 auStackY_c8 [32];
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStackY_c8;
  ::FString::FString(&local_88,L"EXR");
  ::FString::FString(&local_78,L"PNG");
  ::FString::FString(&local_68,L"JPEG");
  ::FString::FString(&local_58,L"MP4");
  ::FString::FString(&local_48,L"BMP");
  ::FString::FString(&local_38,L"MOV");
  ::FString::FString(&local_28,L"MXF");
  lVar3 = 7;
  (this->OutputTypePriorityOrder).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputTypePriorityOrder).ArrayNum = 7;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,7,0,(ForAnyElementType *)this,7,&(this->OutputTypePriorityOrder).ArrayMax);
  ConstructItems<FString,FString,int>
            ((this->OutputTypePriorityOrder).AllocatorInstance.Data,&local_88,7);
  puVar2 = local_18;
  do {
    puVar1 = puVar2 + -2;
    puVar2 = puVar2 + -2;
    lVar3 = lVar3 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar3 != 0);
  this->OutputTypePlayback = UsePriorityOrder;
  *(undefined1 *)&(this->PostRenderImageSequencePlayOptions)._padding_ = 0;
  (this->PostRenderImageSequencePlayOptions)._padding_ = 0;
  (this->PostRenderImageSequencePlayOptions)._padding_ = 0;
  (this->PostRenderImageSequencePlayOptions)._padding_ = 0;
  (this->PostRenderImageSequencePlayOptions)._padding_ = 0;
  *(undefined2 *)&(this->PostRenderImageSequencePlayOptions)._padding_ = 0;
  (this->PostRenderImageSequencePlayOptions).FrameRangeNotation = HashWithStartEndFrame;
  (this->PostRenderImageSequencePlayOptions).PlaybackRange = FirstFrameOnly;
  (this->PostRenderAppleProResPlayOptions).PlaybackMethod = OperatingSystem;
  (this->PostRenderAppleProResPlayOptions).PlayerExecutable.FilePath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PostRenderAppleProResPlayOptions).PlayerExecutable.FilePath.Data.ArrayNum = 0;
  (this->PostRenderAppleProResPlayOptions).PlayerExecutable.FilePath.Data.ArrayMax = 0;
  (this->PostRenderAppleProResPlayOptions).AdditionalCommandLineArguments.Data.AllocatorInstance.
  Data = (FScriptContainerElement *)0x0;
  (this->PostRenderAppleProResPlayOptions).AdditionalCommandLineArguments.Data.ArrayNum = 0;
  (this->PostRenderAppleProResPlayOptions).AdditionalCommandLineArguments.Data.ArrayMax = 0;
  (this->PostRenderAppleProResPlayOptions).JobPlayback = FirstJobOnly;
  (this->PostRenderAppleProResPlayOptions).RenderLayerPlayback = FirstRenderLayerOnly;
  (this->PostRenderAvidDNxHRPlayOptions).PlaybackMethod = OperatingSystem;
  (this->PostRenderAvidDNxHRPlayOptions).PlayerExecutable.FilePath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PostRenderAvidDNxHRPlayOptions).PlayerExecutable.FilePath.Data.ArrayNum = 0;
  (this->PostRenderAvidDNxHRPlayOptions).PlayerExecutable.FilePath.Data.ArrayMax = 0;
  (this->PostRenderAvidDNxHRPlayOptions).AdditionalCommandLineArguments.Data.AllocatorInstance.Data
       = (FScriptContainerElement *)0x0;
  (this->PostRenderAvidDNxHRPlayOptions).AdditionalCommandLineArguments.Data.ArrayNum = 0;
  (this->PostRenderAvidDNxHRPlayOptions).AdditionalCommandLineArguments.Data.ArrayMax = 0;
  (this->PostRenderAvidDNxHRPlayOptions).JobPlayback = FirstJobOnly;
  (this->PostRenderAvidDNxHRPlayOptions).RenderLayerPlayback = FirstRenderLayerOnly;
  (this->PostRenderMP4PlayOptions).PlaybackMethod = OperatingSystem;
  (this->PostRenderMP4PlayOptions).PlayerExecutable.FilePath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PostRenderMP4PlayOptions).PlayerExecutable.FilePath.Data.ArrayNum = 0;
  (this->PostRenderMP4PlayOptions).PlayerExecutable.FilePath.Data.ArrayMax = 0;
  (this->PostRenderMP4PlayOptions).AdditionalCommandLineArguments.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PostRenderMP4PlayOptions).AdditionalCommandLineArguments.Data.ArrayNum = 0;
  (this->PostRenderMP4PlayOptions).AdditionalCommandLineArguments.Data.ArrayMax = 0;
  (this->PostRenderMP4PlayOptions).JobPlayback = FirstJobOnly;
  (this->PostRenderMP4PlayOptions).RenderLayerPlayback = FirstRenderLayerOnly;
  return this;
}

