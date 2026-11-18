// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// Close @ 14192d310

bool __thiscall FPreloadableArchiveProxy::Close(FPreloadableArchiveProxy *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->Archive).Object == (FPreloadableArchive *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  bVar2 = FPreloadableArchive::Close((this->Archive).Object);
  return bVar2;
}

// GetArchiveName @ 141945660

FString * __thiscall
FPreloadableArchiveProxy::GetArchiveName
          (FPreloadableArchiveProxy *this,FString *__return_storage_ptr__)

{
  FPreloadableArchive *pFVar1;
  FArchive *pFVar2;
  code *pcVar3;
  bool bVar4;
  FString *pFVar5;
  
  if ((this->Archive).Object == (FPreloadableArchive *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar3)();
      return pFVar5;
    }
  }
  pFVar1 = (this->Archive).Object;
  if (1 < (pFVar1->ArchiveName).Data.ArrayNum) {
    ::FString::FString(__return_storage_ptr__,&pFVar1->ArchiveName);
    return __return_storage_ptr__;
  }
  pFVar2 = (pFVar1->SynchronousArchive).Ptr;
  if (pFVar2 != (FArchive *)0x0) {
    (**(code **)(*(longlong *)pFVar2 + 0x18))(pFVar2,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,L"FPreloadableArchive");
  return __return_storage_ptr__;
}

// Seek @ 1419693e0

void __thiscall FPreloadableArchiveProxy::Seek(FPreloadableArchiveProxy *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->Archive).Object == (FPreloadableArchive *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FPreloadableArchive::Seek((this->Archive).Object,param_1);
  return;
}

// Serialize @ 141969800

void __thiscall
FPreloadableArchiveProxy::Serialize(FPreloadableArchiveProxy *this,void *param_1,long64 param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->Archive).Object == (FPreloadableArchive *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FPreloadableArchive::Serialize((this->Archive).Object,param_1,param_2);
  return;
}

// Tell @ 14196f5d0

long64 __thiscall FPreloadableArchiveProxy::Tell(FPreloadableArchiveProxy *this)

{
  code *pcVar1;
  bool bVar2;
  long64 lVar3;
  
  if ((this->Archive).Object != (FPreloadableArchive *)0x0) {
    return ((this->Archive).Object)->Pos;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    lVar3 = (*pcVar1)();
    return lVar3;
  }
  return ((this->Archive).Object)->Pos;
}

// TotalSize @ 141973270

long64 __thiscall FPreloadableArchiveProxy::TotalSize(FPreloadableArchiveProxy *this)

{
  code *pcVar1;
  bool bVar2;
  long64 lVar3;
  
  if ((this->Archive).Object != (FPreloadableArchive *)0x0) {
    return ((this->Archive).Object)->Size;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    lVar3 = (*pcVar1)();
    return lVar3;
  }
  return ((this->Archive).Object)->Size;
}

