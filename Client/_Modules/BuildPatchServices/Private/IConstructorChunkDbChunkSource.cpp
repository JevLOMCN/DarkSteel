// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 3

// ~IConstructorChunkDbChunkSource @ 143289440

void __thiscall
BuildPatchServices::IConstructorChunkDbChunkSource::~IConstructorChunkDbChunkSource
          (IConstructorChunkDbChunkSource *this)

{
  *this = (IConstructorChunkDbChunkSource)&___7IConstructorChunkSource_BuildPatchServices__6B_;
  return;
}

// CreateChunkDbSource @ 1432c9ff0

IConstructorChunkDbChunkSource * __cdecl
BuildPatchServices::IConstructorChunkDbChunkSource::CreateChunkDbSource
          (FChunkDbSourceConfig *param_1,IFileSystem *param_2,
          TArray<FGuid,TSizedDefaultAllocator<32>_> *param_3,IChunkDataSerialization *param_4,
          IChunkDbChunkSourceStat *param_5)

{
  FChunkDbChunkSource *this;
  FChunkDbChunkSource *pFVar1;
  FChunkDbSourceConfig local_28;
  
  this = ::operator_new(0xf8);
  pFVar1 = (FChunkDbChunkSource *)0x0;
  if (this != (FChunkDbChunkSource *)0x0) {
    local_28.ChunkDbFiles.AllocatorInstance.Data = (param_1->ChunkDbFiles).AllocatorInstance.Data;
    (param_1->ChunkDbFiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ChunkDbFiles.ArrayNum = (param_1->ChunkDbFiles).ArrayNum;
    local_28.ChunkDbFiles.ArrayMax = (param_1->ChunkDbFiles).ArrayMax;
    (param_1->ChunkDbFiles).ArrayNum = 0;
    (param_1->ChunkDbFiles).ArrayMax = 0;
    local_28.bDeleteChunkDBAfterUse = param_1->bDeleteChunkDBAfterUse;
    pFVar1 = FChunkDbChunkSource::FChunkDbChunkSource
                       (this,&local_28,param_2,param_3,param_4,param_5);
  }
  return (IConstructorChunkDbChunkSource *)pFVar1;
}

// GetChunkDbSizesAtIndexes @ 1432d37c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong64 __cdecl
BuildPatchServices::IConstructorChunkDbChunkSource::GetChunkDbSizesAtIndexes
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,IFileSystem *param_2,
          TArray<FGuid,TSizedDefaultAllocator<32>_> *param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_5)

{
  int iVar1;
  ulong64 uVar2;
  undefined1 auStackY_c8 [32];
  TArray<BuildPatchServices::FChunkDbDataAccess,TSizedDefaultAllocator<32>_> local_98;
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_5c = 0x80;
  local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ArrayNum = 0;
  local_98.ArrayMax = 0;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  FChunkDbChunkSource::LoadChunkDbFiles
            (param_1,param_2,param_3,&local_98,
             (TMap<FGuid,BuildPatchServices::FChunkAccessLookup,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,BuildPatchServices::FChunkAccessLookup,0>_>
              *)local_88,(TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)0x0);
  uVar2 = GetChunkDbSizesAtIndexesInternal(&local_98,param_3->ArrayNum,param_4,param_5);
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  iVar1 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  DestructItems<BuildPatchServices::FChunkDbDataAccess,int>
            ((FChunkDbDataAccess *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
  if ((FChunkDbDataAccess *)local_98.AllocatorInstance.Data != (FChunkDbDataAccess *)0x0) {
    FMemory::Free(local_98.AllocatorInstance.Data);
  }
  return uVar2;
}

