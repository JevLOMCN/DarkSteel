// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkMovieScene
// Functions: 3

// StaticStruct @ 14d097b10

UScriptStruct * __cdecl FLiveLinkPropertyData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLiveLinkPropertyData.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_LiveLinkMovieScene();
    Z_Registration_Info_UScriptStruct_FLiveLinkPropertyData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkPropertyData,(UObject *)pUVar1,
                         L"LiveLinkPropertyData");
  }
  return Z_Registration_Info_UScriptStruct_FLiveLinkPropertyData.OuterSingleton;
}

// FLiveLinkPropertyData @ 14d09df50

FLiveLinkPropertyData * __thiscall
FLiveLinkPropertyData::FLiveLinkPropertyData(FLiveLinkPropertyData *this)

{
  (this->PropertyName).ComparisonIndex = 0;
  (this->PropertyName).Number = 0;
  (this->FloatChannel).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FloatChannel).ArrayNum = 0;
  (this->FloatChannel).ArrayMax = 0;
  (this->StringChannel).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StringChannel).ArrayNum = 0;
  (this->StringChannel).ArrayMax = 0;
  (this->IntegerChannel).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IntegerChannel).ArrayNum = 0;
  (this->IntegerChannel).ArrayMax = 0;
  (this->BoolChannel).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoolChannel).ArrayNum = 0;
  (this->BoolChannel).ArrayMax = 0;
  (this->ByteChannel).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ByteChannel).ArrayNum = 0;
  (this->ByteChannel).ArrayMax = 0;
  return this;
}

// ~FLiveLinkPropertyData @ 14d09ed80

void __thiscall FLiveLinkPropertyData::~FLiveLinkPropertyData(FLiveLinkPropertyData *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FMovieSceneByteChannel,int>
            ((FMovieSceneByteChannel *)(this->ByteChannel).AllocatorInstance.Data,
             (this->ByteChannel).ArrayNum);
  pFVar1 = (this->ByteChannel).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMovieSceneBoolChannel,int>
            ((FMovieSceneBoolChannel *)(this->BoolChannel).AllocatorInstance.Data,
             (this->BoolChannel).ArrayNum);
  pFVar1 = (this->BoolChannel).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMovieSceneIntegerChannel,int>
            ((FMovieSceneIntegerChannel *)(this->IntegerChannel).AllocatorInstance.Data,
             (this->IntegerChannel).ArrayNum);
  pFVar1 = (this->IntegerChannel).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMovieSceneStringChannel,int>
            ((FMovieSceneStringChannel *)(this->StringChannel).AllocatorInstance.Data,
             (this->StringChannel).ArrayNum);
  pFVar1 = (this->StringChannel).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FMovieSceneFloatChannel,int>
            ((FMovieSceneFloatChannel *)(this->FloatChannel).AllocatorInstance.Data,
             (this->FloatChannel).ArrayNum);
  pFVar1 = (this->FloatChannel).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

