// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaUtils
// Functions: 2

// StaticStruct @ 146bf0340

UScriptStruct * __cdecl FMediaPlayerOptions::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMediaPlayerOptions.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_MediaUtils();
    Z_Registration_Info_UScriptStruct_FMediaPlayerOptions.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMediaPlayerOptions,(UObject *)pUVar1,
                         L"MediaPlayerOptions");
  }
  return Z_Registration_Info_UScriptStruct_FMediaPlayerOptions.OuterSingleton;
}

// ~FMediaPlayerOptions @ 146bf3950

void __thiscall FMediaPlayerOptions::~FMediaPlayerOptions(FMediaPlayerOptions *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->InternalCustomOptions).field_0x48 = 0;
  pvVar1 = *(void **)&(this->InternalCustomOptions).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InternalCustomOptions);
  pFVar2 = (this->TracksByLanguage).Caption.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TracksByLanguage).Subtitle.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TracksByLanguage).Audio.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TracksByLanguage).Video.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

