// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 22

// FFileSystem @ 143223340

FFileSystem * __thiscall BuildPatchServices::FFileSystem::FFileSystem(FFileSystem *this)

{
  IFileManager *pIVar1;
  IPlatformFile *pIVar2;
  
  this->_padding_ = (longlong)&___7FFileSystem_BuildPatchServices__6B_;
  pIVar1 = IFileManager::Get();
  this->FileManager = pIVar1;
  pIVar2 = IPlatformFile::GetPlatformPhysical();
  this->PlatformFile = pIVar2;
  return this;
}

// ~FFileSystem @ 143228770

void __thiscall BuildPatchServices::FFileSystem::~FFileSystem(FFileSystem *this)

{
  this->_padding_ = (longlong)&___7IFileSystem_BuildPatchServices__6B_;
  return;
}

// CopyFile @ 143246f80

bool __thiscall
BuildPatchServices::FFileSystem::CopyFile(FFileSystem *this,wchar_t *param_1,wchar_t *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)((longlong)*this->FileManager + 0x40))();
  return iVar1 == 0;
}

// CreateFileReader @ 143248930

TUniquePtr<FArchive,TDefaultDelete<FArchive>_> __thiscall
BuildPatchServices::FFileSystem::CreateFileReader
          (FFileSystem *this,wchar_t *param_1,EReadFlags param_2)

{
  undefined8 uVar1;
  undefined4 in_register_00000084;
  undefined4 in_R9D;
  
  uVar1 = (**(code **)((longlong)*this->FileManager + 0x18))
                    (this->FileManager,CONCAT44(in_register_00000084,param_2),in_R9D);
  *(undefined8 *)param_1 = uVar1;
  return (TUniquePtr<FArchive,TDefaultDelete<FArchive>_>)(FArchive *)param_1;
}

// CreateFileWriter @ 143248960

TUniquePtr<FArchive,TDefaultDelete<FArchive>_> __thiscall
BuildPatchServices::FFileSystem::CreateFileWriter
          (FFileSystem *this,wchar_t *param_1,EWriteFlags param_2)

{
  undefined8 uVar1;
  undefined4 in_register_00000084;
  undefined4 in_R9D;
  
  uVar1 = (**(code **)((longlong)*this->FileManager + 0x20))
                    (this->FileManager,CONCAT44(in_register_00000084,param_2),in_R9D);
  *(undefined8 *)param_1 = uVar1;
  return (TUniquePtr<FArchive,TDefaultDelete<FArchive>_>)(FArchive *)param_1;
}

// DeleteFile @ 1432491b0

bool __thiscall BuildPatchServices::FFileSystem::DeleteFile(FFileSystem *this,wchar_t *param_1)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)((longlong)*this->FileManager + 0x38))(this->FileManager,param_1,0,1,1);
  return (bool)uVar1;
}

// DirectoryExists @ 14324a8a0

bool __thiscall BuildPatchServices::FFileSystem::DirectoryExists(FFileSystem *this,wchar_t *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014324a8a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->PlatformFile + 0x118))();
  return (bool)uVar1;
}

// FileExists @ 1432503b0

bool __thiscall BuildPatchServices::FFileSystem::FileExists(FFileSystem *this,wchar_t *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001432503b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->FileManager + 0x50))();
  return (bool)uVar1;
}

// FindFiles @ 1432527f0

void __thiscall
BuildPatchServices::FFileSystem::FindFiles
          (FFileSystem *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,wchar_t *param_2,
          wchar_t *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001432527f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->PlatformFile + 0x1e8))();
  return;
}

// FindFilesRecursively @ 143252810

void __thiscall
BuildPatchServices::FFileSystem::FindFilesRecursively
          (FFileSystem *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,wchar_t *param_2,
          wchar_t *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000143252817. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->PlatformFile + 0x1f0))();
  return;
}

// GetAllowedBytesToWriteThrottledStorage @ 143254230

long64 __thiscall
BuildPatchServices::FFileSystem::GetAllowedBytesToWriteThrottledStorage
          (FFileSystem *this,wchar_t *param_1)

{
  long64 lVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143254237. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar1 = (**(code **)((longlong)*this->PlatformFile + 0x240))();
  return lVar1;
}

// GetAttributes @ 1432542d0

bool __thiscall
BuildPatchServices::FFileSystem::GetAttributes
          (FFileSystem *this,wchar_t *param_1,EAttributeFlags *param_2)

{
  EAttributeFlags EVar1;
  DWORD DVar2;
  DWORD DVar3;
  EAttributeFlags EVar4;
  
  *param_2 = None;
  DVar2 = GetFileAttributesW(param_1);
  DVar3 = GetLastError();
  if (DVar2 != 0xffffffff) {
    EVar1 = *param_2;
    EVar4 = EVar1 | Exists;
    *param_2 = EVar4;
    if ((DVar2 & 1) != 0) {
      EVar4 = EVar1 | (ReadOnly|Exists);
      *param_2 = EVar4;
    }
    if ((DVar2 >> 0xb & 1) != 0) {
      *param_2 = EVar4 | Compressed;
    }
    return true;
  }
  return DVar3 - 2 < 2;
}

// GetFileSize @ 143256750

bool __thiscall
BuildPatchServices::FFileSystem::GetFileSize(FFileSystem *this,wchar_t *param_1,long64 *param_2)

{
  long64 lVar1;
  
  lVar1 = (**(code **)((longlong)*this->PlatformFile + 0x80))();
  *param_2 = lVar1;
  return (bool)((byte)((ulonglong)lVar1 >> 0x3f) ^ 1);
}

// GetTimeStamp @ 143257660

bool __thiscall
BuildPatchServices::FFileSystem::GetTimeStamp(FFileSystem *this,wchar_t *param_1,FDateTime *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 local_res8 [8];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FailedLookup.Ticks = 0;
      _Init_thread_footer(&::_TSS0);
    }
  }
  plVar2 = (longlong *)
           (**(code **)((longlong)*this->PlatformFile + 0xb0))
                     (this->PlatformFile,local_res8,param_1);
  lVar1 = *plVar2;
  param_2->Ticks = lVar1;
  return lVar1 != FailedLookup.Ticks;
}

// LoadFileToString @ 143259230

bool __thiscall
BuildPatchServices::FFileSystem::LoadFileToString
          (FFileSystem *this,wchar_t *param_1,FString *param_2)

{
  bool bVar1;
  
  bVar1 = FFileHelper::LoadFileToString(param_2,param_1,None,0);
  return bVar1;
}

// MakeDirectory @ 14325b320

bool __thiscall BuildPatchServices::FFileSystem::MakeDirectory(FFileSystem *this,wchar_t *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014325b327. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->PlatformFile + 0x200))();
  return (bool)uVar1;
}

// MoveFile @ 14325c430

bool __thiscall
BuildPatchServices::FFileSystem::MoveFile(FFileSystem *this,wchar_t *param_1,wchar_t *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)((longlong)*this->FileManager + 0x48))();
  return (bool)uVar1;
}

// ParallelFindFilesRecursively @ 14325d120

void __thiscall
BuildPatchServices::FFileSystem::ParallelFindFilesRecursively
          (FFileSystem *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,wchar_t *param_2,
          wchar_t *param_3,EAsyncExecution param_4)

{
  bool bVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  int iVar4;
  FString local_68;
  FParallelDirectoryEnumerator local_58;
  
  local_58._padding_._0_1_ = 0;
  local_58._padding_ = (longlong)&___7FParallelDirectoryEnumerator_BuildPatchServices__6B_;
  local_58.PlatformFile = this->PlatformFile;
  ::FString::FString(&local_58.FileExtension,param_3);
  local_58.AsyncExecution = param_4;
  local_58.FoundFilesQueue.Head = ::operator_new(0x18);
  if (local_58.FoundFilesQueue.Head == (TNode *)0x0) {
    local_58.FoundFilesQueue.Head = (TNode *)0x0;
  }
  else {
    (local_58.FoundFilesQueue.Head)->NextNode = (TNode *)0x0;
    ((local_58.FoundFilesQueue.Head)->Item).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    ((local_58.FoundFilesQueue.Head)->Item).Data.ArrayNum = 0;
    ((local_58.FoundFilesQueue.Head)->Item).Data.ArrayMax = 0;
    (local_58.FoundFilesQueue.Head)->NextNode = (TNode *)0x0;
    ((local_58.FoundFilesQueue.Head)->Item).Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    ((local_58.FoundFilesQueue.Head)->Item).Data.ArrayNum = 0;
    ((local_58.FoundFilesQueue.Head)->Item).Data.ArrayMax = 0;
  }
  pTVar3 = (TNode *)0x0;
  local_58.FoundFilesQueue.Tail = local_58.FoundFilesQueue.Head;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TNode *)0x0) {
    pTVar2->NextNode = (TNode *)0x0;
    *(undefined8 *)&pTVar2->Item = 0;
    *(undefined8 *)&(pTVar2->Item).field_0x8 = 0;
    pTVar2->NextNode = (TNode *)0x0;
    *(undefined8 *)&pTVar2->Item = 0;
    *(undefined8 *)&(pTVar2->Item).field_0x8 = 0;
    pTVar3 = pTVar2;
  }
  iVar4 = local_58.FileExtension.Data.ArrayNum + -1;
  if (local_58.FileExtension.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  local_58.DirectoryFutures.Head = pTVar3;
  local_58.DirectoryFutures.Tail = pTVar3;
  if ((0 < iVar4) &&
     (bVar1 = ::FString::StartsWith(&local_58.FileExtension,L".",1,IgnoreCase), !bVar1)) {
    ::FString::FString(&local_68,L".");
    ::FString::InsertAt(&local_58.FileExtension,0,&local_68);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  (**(code **)((longlong)*this->PlatformFile + 0x140))(this->PlatformFile,param_2,&local_58);
  FParallelDirectoryEnumerator::GetFiles(&local_58,param_1);
  FParallelDirectoryEnumerator::~FParallelDirectoryEnumerator(&local_58);
  return;
}

// SaveStringToFile @ 143265c10

bool __thiscall
BuildPatchServices::FFileSystem::SaveStringToFile
          (FFileSystem *this,wchar_t *param_1,FString *param_2)

{
  int iVar1;
  bool bVar2;
  IFileManager *pIVar3;
  TStringView<wchar_t> local_18;
  
  pIVar3 = IFileManager::Get();
  local_18.DataPtr = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  local_18.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_18.Size = 0;
  }
  bVar2 = FFileHelper::SaveStringToFile(&local_18,param_1,AutoDetect,pIVar3,0);
  return bVar2;
}

// SetCompressed @ 143268b70

bool __thiscall
BuildPatchServices::FFileSystem::SetCompressed(FFileSystem *this,wchar_t *param_1,bool param_2)

{
  return true;
}

// SetExecutable @ 143268c00

bool __thiscall
BuildPatchServices::FFileSystem::SetExecutable(FFileSystem *this,wchar_t *param_1,bool param_2)

{
  return true;
}

// SetReadOnly @ 143268cc0

bool __thiscall
BuildPatchServices::FFileSystem::SetReadOnly(FFileSystem *this,wchar_t *param_1,bool param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143268cc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this->PlatformFile + 0xa8))();
  return (bool)uVar1;
}

