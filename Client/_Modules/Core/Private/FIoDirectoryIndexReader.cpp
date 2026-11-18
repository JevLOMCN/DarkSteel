// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 12

// FIoDirectoryIndexReader @ 141734ac0

FIoDirectoryIndexReader * __thiscall
FIoDirectoryIndexReader::FIoDirectoryIndexReader(FIoDirectoryIndexReader *this)

{
  FIoDirectoryIndexReaderImpl *pFVar1;
  
  pFVar1 = ::operator_new(0x40);
  if (pFVar1 != (FIoDirectoryIndexReaderImpl *)0x0) {
    (pFVar1->DirectoryIndex).MountPoint.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
    ;
    (pFVar1->DirectoryIndex).MountPoint.Data.ArrayNum = 0;
    (pFVar1->DirectoryIndex).MountPoint.Data.ArrayMax = 0;
    (pFVar1->DirectoryIndex).DirectoryEntries.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (pFVar1->DirectoryIndex).DirectoryEntries.ArrayNum = 0;
    (pFVar1->DirectoryIndex).DirectoryEntries.ArrayMax = 0;
    (pFVar1->DirectoryIndex).FileEntries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->DirectoryIndex).FileEntries.ArrayNum = 0;
    (pFVar1->DirectoryIndex).FileEntries.ArrayMax = 0;
    (pFVar1->DirectoryIndex).StringTable.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->DirectoryIndex).StringTable.ArrayNum = 0;
    (pFVar1->DirectoryIndex).StringTable.ArrayMax = 0;
    this->Impl = pFVar1;
    return this;
  }
  this->Impl = (FIoDirectoryIndexReaderImpl *)0x0;
  return this;
}

// ~FIoDirectoryIndexReader @ 141739250

void __thiscall FIoDirectoryIndexReader::~FIoDirectoryIndexReader(FIoDirectoryIndexReader *this)

{
  FIoDirectoryIndexReaderImpl *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = this->Impl;
  if (pFVar1 != (FIoDirectoryIndexReaderImpl *)0x0) {
    DestructItems<FString,int>
              ((FString *)(pFVar1->DirectoryIndex).StringTable.AllocatorInstance.Data,
               (pFVar1->DirectoryIndex).StringTable.ArrayNum);
    pFVar2 = (pFVar1->DirectoryIndex).StringTable.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->DirectoryIndex).FileEntries.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->DirectoryIndex).DirectoryEntries.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->DirectoryIndex).MountPoint.Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x40);
    return;
  }
  return;
}

// GetChildDirectory @ 14175bb30

FIoDirectoryIndexHandle __thiscall
FIoDirectoryIndexReader::GetChildDirectory
          (FIoDirectoryIndexReader *this,FIoDirectoryIndexHandle param_1)

{
  FIoDirectoryIndexEntry *pFVar1;
  undefined4 in_register_00000014;
  FIoDirectoryIndexHandle in_R8D;
  
  if ((in_R8D.Handle != 0xffffffff) && (0 < (this->Impl->DirectoryIndex).DirectoryEntries.ArrayNum))
  {
    pFVar1 = FIoDirectoryIndexReaderImpl::GetDirectoryEntry(this->Impl,in_R8D);
    *(uint *)CONCAT44(in_register_00000014,param_1.Handle) = pFVar1->FirstChildEntry;
    return (FIoDirectoryIndexHandle)param_1.Handle;
  }
  *(uint *)CONCAT44(in_register_00000014,param_1.Handle) = 0xffffffff;
  return (FIoDirectoryIndexHandle)param_1.Handle;
}

// GetDirectoryName @ 14175c5b0

TStringView<wchar_t> * __thiscall
FIoDirectoryIndexReader::GetDirectoryName
          (FIoDirectoryIndexReader *this,TStringView<wchar_t> *__return_storage_ptr__,
          FIoDirectoryIndexHandle param_1)

{
  FIoDirectoryIndexReaderImpl::GetDirectoryName(this->Impl,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetFile @ 14175cf50

FIoDirectoryIndexHandle __thiscall
FIoDirectoryIndexReader::GetFile(FIoDirectoryIndexReader *this,FIoDirectoryIndexHandle param_1)

{
  FIoDirectoryIndexEntry *pFVar1;
  undefined4 in_register_00000014;
  FIoDirectoryIndexHandle in_R8D;
  
  if ((in_R8D.Handle != 0xffffffff) && (0 < (this->Impl->DirectoryIndex).DirectoryEntries.ArrayNum))
  {
    pFVar1 = FIoDirectoryIndexReaderImpl::GetDirectoryEntry(this->Impl,in_R8D);
    *(uint *)CONCAT44(in_register_00000014,param_1.Handle) = pFVar1->FirstFileEntry;
    return (FIoDirectoryIndexHandle)param_1.Handle;
  }
  *(uint *)CONCAT44(in_register_00000014,param_1.Handle) = 0xffffffff;
  return (FIoDirectoryIndexHandle)param_1.Handle;
}

// GetFileData @ 14175cfa0

uint __thiscall
FIoDirectoryIndexReader::GetFileData(FIoDirectoryIndexReader *this,FIoDirectoryIndexHandle param_1)

{
  uint uVar1;
  
  uVar1 = FIoDirectoryIndexReaderImpl::GetFileData(this->Impl,param_1);
  return uVar1;
}

// GetFileName @ 14175d0c0

TStringView<wchar_t> * __thiscall
FIoDirectoryIndexReader::GetFileName
          (FIoDirectoryIndexReader *this,TStringView<wchar_t> *__return_storage_ptr__,
          FIoDirectoryIndexHandle param_1)

{
  FIoDirectoryIndexReaderImpl::GetFileName(this->Impl,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetMountPoint @ 14175f890

FString * __thiscall FIoDirectoryIndexReader::GetMountPoint(FIoDirectoryIndexReader *this)

{
  return (FString *)this->Impl;
}

// GetNextDirectory @ 141760640

FIoDirectoryIndexHandle __thiscall
FIoDirectoryIndexReader::GetNextDirectory
          (FIoDirectoryIndexReader *this,FIoDirectoryIndexHandle param_1)

{
  FIoDirectoryIndexEntry *pFVar1;
  undefined4 in_register_00000014;
  FIoDirectoryIndexHandle in_R8D;
  
  if ((in_R8D.Handle != 0xffffffff) && (0 < (this->Impl->DirectoryIndex).DirectoryEntries.ArrayNum))
  {
    pFVar1 = FIoDirectoryIndexReaderImpl::GetDirectoryEntry(this->Impl,in_R8D);
    *(uint *)CONCAT44(in_register_00000014,param_1.Handle) = pFVar1->NextSiblingEntry;
    return (FIoDirectoryIndexHandle)param_1.Handle;
  }
  *(uint *)CONCAT44(in_register_00000014,param_1.Handle) = 0xffffffff;
  return (FIoDirectoryIndexHandle)param_1.Handle;
}

// GetNextFile @ 141760690

FIoDirectoryIndexHandle __thiscall
FIoDirectoryIndexReader::GetNextFile(FIoDirectoryIndexReader *this,FIoDirectoryIndexHandle param_1)

{
  FIoFileIndexEntry *pFVar1;
  undefined4 in_register_00000014;
  FIoDirectoryIndexHandle in_R8D;
  
  if ((in_R8D.Handle != 0xffffffff) && (0 < (this->Impl->DirectoryIndex).DirectoryEntries.ArrayNum))
  {
    pFVar1 = FIoDirectoryIndexReaderImpl::GetFileEntry(this->Impl,in_R8D);
    *(uint *)CONCAT44(in_register_00000014,param_1.Handle) = pFVar1->NextFileEntry;
    return (FIoDirectoryIndexHandle)param_1.Handle;
  }
  *(uint *)CONCAT44(in_register_00000014,param_1.Handle) = 0xffffffff;
  return (FIoDirectoryIndexHandle)param_1.Handle;
}

// Initialize @ 141765dd0

FIoStatus * __thiscall
FIoDirectoryIndexReader::Initialize
          (FIoDirectoryIndexReader *this,FIoStatus *__return_storage_ptr__,
          TArrayView<unsigned_char_const_,int> *param_1,FAESKey *param_2)

{
  TArrayView<unsigned_char_const_,int> local_38;
  FAESKey local_28;
  
  local_28.Key._0_8_ = *(undefined8 *)param_2->Key;
  local_28.Key._8_8_ = *(undefined8 *)(param_2->Key + 8);
  local_28.Key._16_8_ = *(undefined8 *)(param_2->Key + 0x10);
  local_28.Key._24_8_ = *(undefined8 *)(param_2->Key + 0x18);
  local_38.DataPtr = param_1->DataPtr;
  local_38.ArrayNum = param_1->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  FIoDirectoryIndexReaderImpl::Initialize(this->Impl,__return_storage_ptr__,&local_38,&local_28);
  return __return_storage_ptr__;
}

// IterateDirectoryIndex @ 141767210

bool __thiscall
FIoDirectoryIndexReader::IterateDirectoryIndex
          (FIoDirectoryIndexReader *this,FIoDirectoryIndexHandle param_1,
          TStringView<wchar_t> *param_2,
          TFunctionRef<bool___cdecl(TStringView<wchar_t>,unsigned_int)> *param_3)

{
  bool bVar1;
  TFunctionRef<bool___cdecl(TStringView<wchar_t>,unsigned_int)> local_28;
  TStringView<wchar_t> local_18;
  
  local_28._0_8_ = *(undefined8 *)param_3;
  local_18.DataPtr = param_2->DataPtr;
  local_18.Size = param_2->Size;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_28._8_8_ = *(undefined8 *)&param_3->field_0x8;
  bVar1 = FIoDirectoryIndexReaderImpl::IterateDirectoryIndex(this->Impl,param_1,&local_18,&local_28)
  ;
  return bVar1;
}

