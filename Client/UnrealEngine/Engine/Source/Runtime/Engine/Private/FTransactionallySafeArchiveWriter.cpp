// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// Flush @ 148032500

void __thiscall FTransactionallySafeArchiveWriter::Flush(FTransactionallySafeArchiveWriter *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bRegisteredCommitHandler == false) {
                    /* WARNING: Could not recover jumptable at 0x000148032554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(this->InnerArchive).Ptr + 0x208))();
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("AutoRTFM::IsTransactional() || AutoRTFM::IsCommittingOrAborting()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\TransactionallySafeArchiveWriter.h"
                     ,0x73,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->bFlushRequested = true;
  return;
}

// GetArchiveName @ 1480352c0

FString * __thiscall
FTransactionallySafeArchiveWriter::GetArchiveName
          (FTransactionallySafeArchiveWriter *this,FString *__return_storage_ptr__)

{
  (**(code **)(*(longlong *)(this->InnerArchive).Ptr + 0x18))();
  return __return_storage_ptr__;
}

// Seek @ 148054fa0

void __thiscall
FTransactionallySafeArchiveWriter::Seek(FTransactionallySafeArchiveWriter *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\TransactionallySafeArchiveWriter.h"
                     ,0x43,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// Serialize @ 1480570a0

void __thiscall
FTransactionallySafeArchiveWriter::Serialize
          (FTransactionallySafeArchiveWriter *this,void *param_1,long64 param_2)

{
  FArchive *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  
  if ((this->InnerArchive).Ptr == (FArchive *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InnerArchive",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\TransactionallySafeArchiveWriter.h"
                       ,0x5d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->bRegisteredCommitHandler != false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("AutoRTFM::IsTransactional() || AutoRTFM::IsCommittingOrAborting()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\TransactionallySafeArchiveWriter.h"
                       ,0x73,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = (int)param_2;
    if (param_2 != iVar5) {
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
    if ((param_1 == (void *)0x0) && (iVar5 != 0)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr != nullptr || Count == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x9c1,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar5,&(this->DeferredWrites).AllocatorInstance,
                       &(this->DeferredWrites).ArrayNum,&(this->DeferredWrites).ArrayMax);
    if (iVar5 != 0) {
      memcpy((this->DeferredWrites).AllocatorInstance.Data + iVar4,param_1,(longlong)iVar5);
    }
    return;
  }
  if ((this->DeferredWrites).ArrayNum != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DeferredWrites.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\TransactionallySafeArchiveWriter.h"
                       ,0x67,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->InnerArchive).Ptr;
                    /* WARNING: Could not recover jumptable at 0x00014805722c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,param_1,param_2);
  return;
}

// Tell @ 148065f40

long64 __thiscall FTransactionallySafeArchiveWriter::Tell(FTransactionallySafeArchiveWriter *this)

{
  code *pcVar1;
  bool bVar2;
  long64 lVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Unimplemented function called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\TransactionallySafeArchiveWriter.h"
                     ,0x48,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    lVar3 = (*pcVar1)();
    return lVar3;
  }
  return 0;
}

