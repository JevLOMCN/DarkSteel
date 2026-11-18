// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LFNRS
// Functions: 8

// AtEnd @ 146ca4340

bool __thiscall FLocalFileStreamFArchive::AtEnd(FLocalFileStreamFArchive *this)

{
  if (((longlong)(this->Buffer).ArrayNum <= this->ArchivePos) && (this->bAtEndOfReplay != false)) {
    return true;
  }
  return false;
}

// Reset @ 146cb2230

void __thiscall FLocalFileStreamFArchive::Reset(FLocalFileStreamFArchive *this)

{
  (this->Buffer).ArrayNum = 0;
  if ((this->Buffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->Buffer).AllocatorInstance,0,&(this->Buffer).ArrayMax);
  }
  this->Pos = 0;
  this->bAtEndOfReplay = false;
  this->ArchivePos = 0;
  return;
}

// Seek @ 146cb2370

void __thiscall FLocalFileStreamFArchive::Seek(FLocalFileStreamFArchive *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 <= (this->Buffer).ArrayNum) {
    this->ArchivePos = param_1;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("InPos <= Buffer.Num()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
                     ,0xba,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->ArchivePos = param_1;
  return;
}

// Serialize @ 146cb23e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLocalFileStreamFArchive::Serialize(FLocalFileStreamFArchive *this,void *param_1,long64 param_2)

{
  long64 *plVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  
  plVar1 = &this->ArchivePos;
  if ((this->_padding_ & 1) == 0) {
    if ((longlong)(this->Buffer).ArrayNum < *plVar1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArchivePos <= Buffer.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\NetworkReplayStreaming\\LocalFileNetworkReplayStreaming\\Private\\LocalFileNetworkReplayStreaming.cpp"
                         ,0x91,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    lVar5 = (*plVar1 - (longlong)(this->Buffer).ArrayNum) + param_2;
    iVar4 = (int)lVar5;
    if (lVar5 != iVar4) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (0 < iVar4) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar4,&(this->Buffer).AllocatorInstance,&(this->Buffer).ArrayNum,
                 &(this->Buffer).ArrayMax);
    }
    memcpy((this->Buffer).AllocatorInstance.Data + *plVar1,param_1,param_2);
  }
  else {
    if ((param_2 < 0) || ((longlong)(this->Buffer).ArrayNum < *plVar1 + param_2)) {
      if (1 < (byte)LogLocalFileReplay._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
      }
      FArchiveState::SetError((FArchiveState *)this);
      return;
    }
    memcpy(param_1,(this->Buffer).AllocatorInstance.Data + *plVar1,param_2);
  }
  *plVar1 = *plVar1 + param_2;
  this->Pos = (int)*plVar1;
  return;
}

// Tell @ 146cb30f0

long64 __thiscall FLocalFileStreamFArchive::Tell(FLocalFileStreamFArchive *this)

{
  return this->ArchivePos;
}

// Tell @ 146cb3100

long64 __thiscall FLocalFileStreamFArchive::Tell(FLocalFileStreamFArchive *this)

{
  return this->ArchivePos;
}

// TotalSize @ 146cb3560

long64 __thiscall FLocalFileStreamFArchive::TotalSize(FLocalFileStreamFArchive *this)

{
  return (longlong)(this->Buffer).ArrayNum;
}

// TotalSize @ 146cb3570

long64 __thiscall FLocalFileStreamFArchive::TotalSize(FLocalFileStreamFArchive *this)

{
  return (longlong)(this->Buffer).ArrayNum;
}

