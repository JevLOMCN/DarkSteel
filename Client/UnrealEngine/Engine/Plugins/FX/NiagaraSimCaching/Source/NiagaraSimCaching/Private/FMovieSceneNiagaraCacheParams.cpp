// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraSimCaching
// Functions: 6

// StaticStruct @ 14ea20b10

UScriptStruct * __cdecl FMovieSceneNiagaraCacheParams::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraCacheParams.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NiagaraSimCaching();
    Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraCacheParams.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneNiagaraCacheParams,(UObject *)pUVar1,
                         L"MovieSceneNiagaraCacheParams");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneNiagaraCacheParams.OuterSingleton;
}

// FMovieSceneNiagaraCacheParams @ 14ea22640

FMovieSceneNiagaraCacheParams * __thiscall
FMovieSceneNiagaraCacheParams::FMovieSceneNiagaraCacheParams
          (FMovieSceneNiagaraCacheParams *this,FMovieSceneNiagaraCacheParams *param_1)

{
  UNiagaraSimCache *pUVar1;
  longlong lVar2;
  longlong lVar3;
  
  this->_padding_ = (longlong)&___7FMovieSceneBaseCacheParams__6B_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  lVar2 = this->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  lVar3 = param_1->_padding_;
  this->_padding_ = (longlong)&___7FMovieSceneNiagaraCacheParams__6B_;
  *(uint *)&this->_padding_ = (uint)this->_padding_ ^ ((uint)lVar2 ^ (uint)lVar3) & 1;
  FNiagaraSimCacheCreateParameters::FNiagaraSimCacheCreateParameters
            (&this->CacheParameters,&param_1->CacheParameters);
  pUVar1 = (param_1->SimCache).field0_0x0.DebugPtr;
  (this->SimCache).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UNiagaraSimCache *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  this->bLockCacheToReadOnly = param_1->bLockCacheToReadOnly;
  this->bOverrideQualityLevel = param_1->bOverrideQualityLevel;
  this->RecordQualityLevel = param_1->RecordQualityLevel;
  this->CacheReplayPlayMode = param_1->CacheReplayPlayMode;
  this->SectionStretchMode = param_1->SectionStretchMode;
  return this;
}

// FMovieSceneNiagaraCacheParams @ 14ea22710

FMovieSceneNiagaraCacheParams * __thiscall
FMovieSceneNiagaraCacheParams::FMovieSceneNiagaraCacheParams(FMovieSceneNiagaraCacheParams *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  FMovieSceneBaseCacheParams::FMovieSceneBaseCacheParams((FMovieSceneBaseCacheParams *)this);
  this->bLockCacheToReadOnly = false;
  this->bOverrideQualityLevel = false;
  this->RecordQualityLevel = Cinematic;
  this->CacheReplayPlayMode = DisplayCacheOnly;
  this->_padding_ = (longlong)&___7FMovieSceneNiagaraCacheParams__6B_;
  (this->CacheParameters).AttributeCaptureMode = All;
  this->SectionStretchMode = TimeDilate;
  puVar2 = &(this->CacheParameters).field_0x4;
  (this->CacheParameters).bAllowRebasing = 1;
  (this->CacheParameters).bIncludeDebugData = 0;
  (this->CacheParameters).bAllowSerializeLargeCache = 1;
  (this->CacheParameters).bAllowVelocityExtrapolation = 0;
  (this->CacheParameters).bInterpolateAllTypes = 1;
  (this->CacheParameters).bAllowInterpolation = 0;
  (this->CacheParameters).bAllowDataInterfaceCaching = 1;
  (this->CacheParameters).RebaseIncludeAttributes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CacheParameters).RebaseIncludeAttributes.ArrayNum = 0;
  (this->CacheParameters).RebaseIncludeAttributes.ArrayMax = 0;
  (this->CacheParameters).RebaseExcludeAttributes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CacheParameters).RebaseExcludeAttributes.ArrayNum = 0;
  (this->CacheParameters).RebaseExcludeAttributes.ArrayMax = 0;
  (this->CacheParameters).InterpolationIncludeAttributes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CacheParameters).InterpolationIncludeAttributes.ArrayNum = 0;
  (this->CacheParameters).InterpolationIncludeAttributes.ArrayMax = 0;
  (this->CacheParameters).InterpolationExcludeAttributes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CacheParameters).InterpolationExcludeAttributes.ArrayNum = 0;
  (this->CacheParameters).InterpolationExcludeAttributes.ArrayMax = 0;
  (this->CacheParameters).ExplicitCaptureAttributes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CacheParameters).ExplicitCaptureAttributes.ArrayNum = 0;
  (this->CacheParameters).ExplicitCaptureAttributes.ArrayMax = 0;
  (this->SimCache).field0_0x0.DebugPtr = (UNiagaraSimCache *)0x0;
  return this;
}

// ~FMovieSceneNiagaraCacheParams @ 14ea22a20

void __thiscall
FMovieSceneNiagaraCacheParams::~FMovieSceneNiagaraCacheParams(FMovieSceneNiagaraCacheParams *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FMovieSceneNiagaraCacheParams__6B_;
  pFVar1 = (this->CacheParameters).ExplicitCaptureAttributes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CacheParameters).InterpolationExcludeAttributes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CacheParameters).InterpolationIncludeAttributes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CacheParameters).RebaseExcludeAttributes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CacheParameters).RebaseIncludeAttributes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FMovieSceneBaseCacheParams__6B_;
  return;
}

// operator= @ 14ea22b90

FMovieSceneNiagaraCacheParams * __thiscall
FMovieSceneNiagaraCacheParams::operator=
          (FMovieSceneNiagaraCacheParams *this,FMovieSceneNiagaraCacheParams *param_1)

{
  UNiagaraSimCache *pUVar1;
  longlong lVar2;
  uint uVar3;
  
  lVar2 = this->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(uint *)&this->_padding_ = (uint)this->_padding_ ^ ((uint)lVar2 ^ (uint)param_1->_padding_) & 1;
  (this->CacheParameters).AttributeCaptureMode = (param_1->CacheParameters).AttributeCaptureMode;
  uVar3 = ((this->CacheParameters).bAllowRebasing ^ (param_1->CacheParameters).bAllowRebasing) & 1 ^
          *(uint *)&(this->CacheParameters).field_0x4;
  *(uint *)&(this->CacheParameters).field_0x4 = uVar3;
  uVar3 = (uVar3 ^ *(uint *)&(param_1->CacheParameters).field_0x4) & 2 ^ uVar3;
  *(uint *)&(this->CacheParameters).field_0x4 = uVar3;
  uVar3 = (uVar3 ^ *(uint *)&(param_1->CacheParameters).field_0x4) & 4 ^ uVar3;
  *(uint *)&(this->CacheParameters).field_0x4 = uVar3;
  uVar3 = (uVar3 ^ *(uint *)&(param_1->CacheParameters).field_0x4) & 8 ^ uVar3;
  *(uint *)&(this->CacheParameters).field_0x4 = uVar3;
  uVar3 = (uVar3 ^ *(uint *)&(param_1->CacheParameters).field_0x4) & 0x10 ^ uVar3;
  *(uint *)&(this->CacheParameters).field_0x4 = uVar3;
  uVar3 = (uVar3 ^ *(uint *)&(param_1->CacheParameters).field_0x4) & 0x20 ^ uVar3;
  *(uint *)&(this->CacheParameters).field_0x4 = uVar3;
  *(uint *)&(this->CacheParameters).field_0x4 =
       (uVar3 ^ *(uint *)&(param_1->CacheParameters).field_0x4) & 0x40 ^ uVar3;
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&(this->CacheParameters).RebaseIncludeAttributes,
             &(param_1->CacheParameters).RebaseIncludeAttributes);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&(this->CacheParameters).RebaseExcludeAttributes,
             &(param_1->CacheParameters).RebaseExcludeAttributes);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&(this->CacheParameters).InterpolationIncludeAttributes,
             &(param_1->CacheParameters).InterpolationIncludeAttributes);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&(this->CacheParameters).InterpolationExcludeAttributes,
             &(param_1->CacheParameters).InterpolationExcludeAttributes);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&(this->CacheParameters).ExplicitCaptureAttributes,
             &(param_1->CacheParameters).ExplicitCaptureAttributes);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->SimCache).field0_0x0.DebugPtr, pUVar1 != (UNiagaraSimCache *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->SimCache).field0_0x0 = (param_1->SimCache).field0_0x0;
  this->bLockCacheToReadOnly = param_1->bLockCacheToReadOnly;
  this->bOverrideQualityLevel = param_1->bOverrideQualityLevel;
  this->RecordQualityLevel = param_1->RecordQualityLevel;
  this->CacheReplayPlayMode = param_1->CacheReplayPlayMode;
  this->SectionStretchMode = param_1->SectionStretchMode;
  return this;
}

// GetSequenceLength @ 14ea23cd0

float __thiscall
FMovieSceneNiagaraCacheParams::GetSequenceLength(FMovieSceneNiagaraCacheParams *this)

{
  UNiagaraSimCache *pUVar1;
  
  pUVar1 = (this->SimCache).field0_0x0.DebugPtr;
  if (pUVar1 != (UNiagaraSimCache *)0x0) {
    return pUVar1->DurationSeconds;
  }
  return 0.0;
}

