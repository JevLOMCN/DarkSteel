// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// Create @ 1419e7820

FStatsTestReader * __cdecl
FStatsReader<`FCommandStatsFile::TestLastSaved'::__l2::FStatsTestReader>::Create(wchar_t *param_1)

{
  bool bVar1;
  FStatsReadFile *this;
  FStatsReadFile *pFVar2;
  
  this = ::operator_new(0x5c0);
  if (this == (FStatsReadFile *)0x0) {
    this = (FStatsReadFile *)0x0;
  }
  else {
    this->_padding_ = (longlong)&___7FStatsReadFile__6B_;
    FStatsThreadState::FStatsThreadState((FStatsThreadState *)&this->State,0xd);
    (this->State).MinFrameSeen = -1;
    (this->State).MaxFrameSeen = 0;
    (this->Stream).Header.Version = 0;
    (this->Stream).Header.PlatformName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Stream).Header.PlatformName.Data.ArrayNum = 0;
    (this->Stream).Header.PlatformName.Data.ArrayMax = 0;
    (this->Stream).Header.FrameTableOffset = 0;
    (this->Stream).Header.FNameTableOffset = 0;
    (this->Stream).Header.NumFNames = 0;
    (this->Stream).Header.MetadataMessagesOffset = 0;
    (this->Stream).Header.NumMetadataMessages = 0;
    (this->Stream).Header.bRawStatsFile = false;
    *(undefined8 *)&(this->Stream).FNamesIndexMap = 0;
    *(undefined8 *)&(this->Stream).FNamesIndexMap.field_0x8 = 0;
    *(undefined8 *)&(this->Stream).FNamesIndexMap.field_0x20 = 0;
    *(undefined4 *)&(this->Stream).FNamesIndexMap.field_0x28 = 0;
    *(undefined4 *)&(this->Stream).FNamesIndexMap.field_0x2c = 0x80;
    *(undefined4 *)&(this->Stream).FNamesIndexMap.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->Stream).FNamesIndexMap.field_0x34 = 0;
    *(undefined8 *)&(this->Stream).FNamesIndexMap.field_0x40 = 0;
    *(undefined4 *)&(this->Stream).FNamesIndexMap.field_0x48 = 0;
    (this->Stream).FramesInfo.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Stream).FramesInfo.ArrayNum = 0;
    (this->Stream).FramesInfo.ArrayMax = 0;
    this->Header = &(this->Stream).Header;
    (this->FileInfo).TotalPacketsSize = 0;
    (this->FileInfo).TotalStatMessagesNum = 0;
    (this->FileInfo).MaximumPacketSize = 0;
    (this->FileInfo).TotalPacketsNum = 0;
    *(undefined8 *)&this->CombinedHistory = 0;
    *(undefined8 *)&(this->CombinedHistory).field_0x8 = 0;
    *(undefined8 *)&(this->CombinedHistory).field_0x20 = 0;
    this->Reader = (FArchive *)0x0;
    this->AsyncWork = (FAsyncTask<FAsyncStatsFile> *)0x0;
    *(undefined4 *)&(this->CombinedHistory).field_0x28 = 0;
    *(undefined4 *)&(this->CombinedHistory).field_0x2c = 0x80;
    *(undefined4 *)&(this->CombinedHistory).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->CombinedHistory).field_0x34 = 0;
    *(undefined8 *)&(this->CombinedHistory).field_0x40 = 0;
    *(undefined4 *)&(this->CombinedHistory).field_0x48 = 0;
    (this->Frames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Frames).ArrayNum = 0;
    (this->Frames).ArrayMax = 0;
    *(undefined8 *)&(this->UObjectRawNames).Elements = 0;
    *(undefined8 *)&(this->UObjectRawNames).Elements.field_0x8 = 0;
    *(undefined8 *)&(this->UObjectRawNames).Elements.field_0x20 = 0;
    *(undefined4 *)&(this->UObjectRawNames).Elements.field_0x28 = 0;
    *(undefined4 *)&(this->UObjectRawNames).Elements.field_0x2c = 0x80;
    *(undefined4 *)&(this->UObjectRawNames).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->UObjectRawNames).Elements.field_0x34 = 0;
    (this->UObjectRawNames).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    (this->UObjectRawNames).HashSize = 0;
    (this->ProcessingStage).Counter = 0;
    (this->StageProgress).Counter = 0;
    this->bShouldStopProcessing = (FThreadSafeBool)0x0;
    this->LastUpdateTime = 0.0;
    ::FString::FString(&this->Filename,param_1);
    this->NumFrames = 0;
    this->_padding_ =
         (longlong)&`FCommandStatsFile::TestLastSaved'::`2'::FStatsTestReader::_vftable_;
    this->bRawStatsFile = false;
    *(undefined4 *)&(this->State)._padding_ = 0x7fffffff;
  }
  bVar1 = FStatsReadFile::PrepareLoading(this);
  if ((!bVar1) && (this != (FStatsReadFile *)0x0)) {
    if (*(code **)this->_padding_ ==
        `FCommandStatsFile::TestLastSaved'::__l2::FStatsTestReader::_scalar_deleting_destructor_) {
      FStatsReadFile::~FStatsReadFile(this);
      ::operator_delete(this,0x5c0);
    }
    else {
      (**(code **)this->_padding_)(this,1);
    }
  }
  pFVar2 = (FStatsReadFile *)0x0;
  if (bVar1) {
    pFVar2 = this;
  }
  return (FStatsTestReader *)pFVar2;
}

