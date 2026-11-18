// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 3

// StaticStruct @ 146164280

UScriptStruct * __cdecl FMovieSceneEditorData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEditorData.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneEditorData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEditorData,(UObject *)pUVar1,
                         L"MovieSceneEditorData");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneEditorData.OuterSingleton;
}

// FMovieSceneEditorData @ 14617ebb0

FMovieSceneEditorData * __thiscall
FMovieSceneEditorData::FMovieSceneEditorData(FMovieSceneEditorData *this)

{
  *(undefined8 *)&(this->ExpansionStates).field_0x8 = 0;
  *(undefined8 *)&this->ExpansionStates = 0;
  *(undefined8 *)&(this->ExpansionStates).field_0x20 = 0;
  *(undefined4 *)&(this->ExpansionStates).field_0x28 = 0;
  *(undefined4 *)&(this->ExpansionStates).field_0x2c = 0x80;
  *(undefined4 *)&(this->ExpansionStates).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExpansionStates).field_0x34 = 0;
  *(undefined8 *)&(this->ExpansionStates).field_0x40 = 0;
  *(undefined4 *)&(this->ExpansionStates).field_0x48 = 0;
  (this->PinnedNodes).ArrayNum = 0;
  (this->PinnedNodes).ArrayMax = 0;
  *(undefined8 *)&(this->MarkedFrames_DEPRECATED).Elements.field_0x8 = 0;
  this->ViewStart = 0.0;
  this->ViewEnd = 0.0;
  this->WorkStart = 0.0;
  this->WorkEnd = 0.0;
  (this->PinnedNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(this->MarkedFrames_DEPRECATED).Elements = 0;
  *(undefined8 *)&(this->MarkedFrames_DEPRECATED).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->MarkedFrames_DEPRECATED).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->MarkedFrames_DEPRECATED).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->MarkedFrames_DEPRECATED).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MarkedFrames_DEPRECATED).Elements.field_0x34 = 0;
  (this->MarkedFrames_DEPRECATED).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->MarkedFrames_DEPRECATED).HashSize = 0;
  *(undefined1 *)&this->WorkingRange_DEPRECATED = 2;
  *(undefined4 *)&(this->WorkingRange_DEPRECATED).field_0x4 = 0;
  (this->WorkingRange_DEPRECATED).field_0x8 = 2;
  *(undefined4 *)&(this->WorkingRange_DEPRECATED).field_0xc = 0;
  *(undefined1 *)&this->ViewRange_DEPRECATED = 2;
  *(undefined4 *)&(this->ViewRange_DEPRECATED).field_0x4 = 0;
  (this->ViewRange_DEPRECATED).field_0x8 = 2;
  *(undefined4 *)&(this->ViewRange_DEPRECATED).field_0xc = 0;
  FNavigationToolSerializedTree::FNavigationToolSerializedTree
            (&(this->NavigationToolState).SerializedTree);
  *(undefined8 *)&(this->NavigationToolState).ItemColorMap = 0;
  *(undefined8 *)&(this->NavigationToolState).ItemColorMap.field_0x8 = 0;
  *(undefined8 *)&(this->NavigationToolState).ItemColorMap.field_0x20 = 0;
  *(undefined4 *)&(this->NavigationToolState).ItemColorMap.field_0x28 = 0;
  *(undefined4 *)&(this->NavigationToolState).ItemColorMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->NavigationToolState).ItemColorMap.field_0x34 = 0;
  *(undefined4 *)&(this->NavigationToolState).ItemColorMap.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NavigationToolState).ItemColorMap.field_0x40 = 0;
  *(undefined4 *)&(this->NavigationToolState).ItemColorMap.field_0x48 = 0;
  (this->NavigationToolState).ToolViewSaveStates.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->NavigationToolState).ToolViewSaveStates.ArrayNum = 0;
  (this->NavigationToolState).ToolViewSaveStates.ArrayMax = 0;
  (this->NavigationToolState).ContextPath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->NavigationToolState).ContextPath.Data.ArrayNum = 0;
  (this->NavigationToolState).ContextPath.Data.ArrayMax = 0;
  (this->SoloNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SoloNodes).ArrayNum = 0;
  (this->SoloNodes).ArrayMax = 0;
  (this->MuteNodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MuteNodes).ArrayNum = 0;
  (this->MuteNodes).ArrayMax = 0;
  return this;
}

// ~FMovieSceneEditorData @ 146185030

void __thiscall FMovieSceneEditorData::~FMovieSceneEditorData(FMovieSceneEditorData *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  void *pvVar3;
  
  DestructItems<FString,int>
            ((FString *)(this->MuteNodes).AllocatorInstance.Data,(this->MuteNodes).ArrayNum);
  pFVar1 = (this->MuteNodes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->SoloNodes).AllocatorInstance.Data,(this->SoloNodes).ArrayNum);
  pFVar1 = (this->SoloNodes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FNavigationToolSaveState::~FNavigationToolSaveState(&this->NavigationToolState);
  (this->MarkedFrames_DEPRECATED).HashSize = 0;
  FVar2 = (this->MarkedFrames_DEPRECATED).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<FFrameNumber>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FFrameNumber>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->MarkedFrames_DEPRECATED).Elements);
  DestructItems<FString,int>
            ((FString *)(this->PinnedNodes).AllocatorInstance.Data,(this->PinnedNodes).ArrayNum);
  pFVar1 = (this->PinnedNodes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ExpansionStates).field_0x48 = 0;
  pvVar3 = *(void **)&(this->ExpansionStates).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FMovieSceneExpansionState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FMovieSceneExpansionState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FMovieSceneExpansionState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

