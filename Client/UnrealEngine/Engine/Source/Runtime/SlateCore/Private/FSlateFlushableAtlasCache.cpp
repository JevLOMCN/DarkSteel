// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 5

// ~FSlateFlushableAtlasCache @ 142479640

void __thiscall
FSlateFlushableAtlasCache::~FSlateFlushableAtlasCache(FSlateFlushableAtlasCache *this)

{
  this->_padding_ = (longlong)&___7FSlateFlushableAtlasCache__6B_;
  return;
}

// FSlateFlushableAtlasCache @ 1425bda20

FSlateFlushableAtlasCache * __thiscall
FSlateFlushableAtlasCache::FSlateFlushableAtlasCache
          (FSlateFlushableAtlasCache *this,FAtlasFlushParams *param_1)

{
  FAtlasFlushParams *pFVar1;
  code *pcVar2;
  bool bVar3;
  FSlateFlushableAtlasCache *pFVar4;
  
  this->FlushParams = param_1;
  this->_padding_ = (longlong)&___7FSlateFlushableAtlasCache__6B_;
  if (param_1 == (FAtlasFlushParams *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("FlushParams",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Textures\\TextureAtlas.cpp"
                       ,0x189,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FSlateFlushableAtlasCache *)(*pcVar2)();
      return pFVar4;
    }
  }
  pFVar1 = this->FlushParams;
  this->CurrentMaxGrayscaleAtlasPagesBeforeFlushRequest =
       pFVar1->InitialMaxAtlasPagesBeforeFlushRequest;
  this->CurrentMaxColorAtlasPagesBeforeFlushRequest = pFVar1->InitialMaxAtlasPagesBeforeFlushRequest
  ;
  this->CurrentMaxMsdfAtlasPagesBeforeFlushRequest = pFVar1->InitialMaxAtlasPagesBeforeFlushRequest;
  this->CurrentMaxNonAtlasedTexturesBeforeFlushRequest =
       pFVar1->InitialMaxNonAtlasPagesBeforeFlushRequest;
  return this;
}

// ResetFlushCounters @ 1425f9420

void __thiscall FSlateFlushableAtlasCache::ResetFlushCounters(FSlateFlushableAtlasCache *this)

{
  FAtlasFlushParams *pFVar1;
  
  pFVar1 = this->FlushParams;
  this->CurrentMaxGrayscaleAtlasPagesBeforeFlushRequest =
       pFVar1->InitialMaxAtlasPagesBeforeFlushRequest;
  this->CurrentMaxColorAtlasPagesBeforeFlushRequest = pFVar1->InitialMaxAtlasPagesBeforeFlushRequest
  ;
  this->CurrentMaxMsdfAtlasPagesBeforeFlushRequest = pFVar1->InitialMaxAtlasPagesBeforeFlushRequest;
  this->CurrentMaxNonAtlasedTexturesBeforeFlushRequest =
       pFVar1->InitialMaxNonAtlasPagesBeforeFlushRequest;
  this->FrameCounterLastFlushRequest = GFrameCounter;
  return;
}

// UpdateFlushCounters @ 142604e40

void __thiscall
FSlateFlushableAtlasCache::UpdateFlushCounters
          (FSlateFlushableAtlasCache *this,int param_1,int param_2,int param_3,int param_4)

{
  FAtlasFlushParams *pFVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  
  bVar2 = UpdateInternal(this,param_1,&this->CurrentMaxGrayscaleAtlasPagesBeforeFlushRequest,
                         this->FlushParams->InitialMaxAtlasPagesBeforeFlushRequest,
                         this->FlushParams->GrowAtlasFrameWindow);
  bVar3 = UpdateInternal(this,param_2,&this->CurrentMaxColorAtlasPagesBeforeFlushRequest,
                         this->FlushParams->InitialMaxAtlasPagesBeforeFlushRequest,
                         this->FlushParams->GrowAtlasFrameWindow);
  bVar4 = UpdateInternal(this,param_3,&this->CurrentMaxMsdfAtlasPagesBeforeFlushRequest,
                         this->FlushParams->InitialMaxAtlasPagesBeforeFlushRequest,
                         this->FlushParams->GrowAtlasFrameWindow);
  bVar5 = UpdateInternal(this,param_4,&this->CurrentMaxNonAtlasedTexturesBeforeFlushRequest,
                         this->FlushParams->InitialMaxNonAtlasPagesBeforeFlushRequest,
                         this->FlushParams->GrowNonAtlasFrameWindow);
  if (bVar5 || (bVar4 || (bVar3 || bVar2))) {
    pFVar1 = this->FlushParams;
    this->CurrentMaxGrayscaleAtlasPagesBeforeFlushRequest =
         pFVar1->InitialMaxAtlasPagesBeforeFlushRequest;
    this->CurrentMaxColorAtlasPagesBeforeFlushRequest =
         pFVar1->InitialMaxAtlasPagesBeforeFlushRequest;
    this->CurrentMaxMsdfAtlasPagesBeforeFlushRequest =
         pFVar1->InitialMaxAtlasPagesBeforeFlushRequest;
    this->CurrentMaxNonAtlasedTexturesBeforeFlushRequest =
         pFVar1->InitialMaxNonAtlasPagesBeforeFlushRequest;
    this->FrameCounterLastFlushRequest = GFrameCounter;
  }
  return;
}

// UpdateInternal @ 142604f40

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FSlateFlushableAtlasCache::UpdateInternal
          (FSlateFlushableAtlasCache *this,int param_1,int *param_2,int param_3,int param_4)

{
  code *pcVar1;
  FString local_18;
  
  if (*param_2 < param_1) {
    if (param_3 < param_1) {
      if ((ulonglong)(longlong)param_4 < GFrameCounter - this->FrameCounterLastFlushRequest) {
        pcVar1 = *(code **)(this->_padding_ + 8);
        ::FString::PrintfImpl
                  (&local_18,
                   L"Large atlases out of space; %d/%d Textures; frames since last flush: %llu");
        (*pcVar1)(this,&local_18);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
        return true;
      }
      *param_2 = param_1;
      if (2 < (byte)LogSlate._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
        return false;
      }
    }
    else {
      *param_2 = param_3;
    }
  }
  return false;
}

