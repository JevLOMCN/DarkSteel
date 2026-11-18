// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// ~FFindFilesVisitor @ 141620b10

void __thiscall FFindFilesVisitor::~FFindFilesVisitor(FFindFilesVisitor *this)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->FoundFilesLock);
  if (BVar2 == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->FoundFilesLock);
  }
  this->_padding_ = (longlong)&___7FDirectoryVisitor_IPlatformFile__6B_;
  return;
}

// Visit @ 141669310

bool __thiscall FFindFilesVisitor::Visit(FFindFilesVisitor *this,wchar_t *param_1,bool param_2)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  size_t sVar3;
  FScriptContainerElement *pFVar4;
  FString local_18;
  
  if (param_2) {
    return true;
  }
  iVar2 = this->FileExtensionLen;
  if (0 < iVar2) {
    sVar3 = wcslen(param_1);
    if ((int)sVar3 < iVar2) {
      return true;
    }
    iVar2 = wcscmp(param_1 + ((int)sVar3 - iVar2),this->FileExtension);
    if (iVar2 != 0) {
      return true;
    }
  }
  ::FString::FString(&local_18,param_1);
  AcquireSRWLockExclusive((PSRWLOCK)&this->FoundFilesLock);
  pTVar1 = this->FoundFiles;
  iVar2 = pTVar1->ArrayNum;
  if (iVar2 == pTVar1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar1->AllocatorInstance,&pTVar1->ArrayMax);
  }
  pTVar1->ArrayNum = iVar2 + 1;
  pFVar4 = (pTVar1->AllocatorInstance).Data + (longlong)iVar2 * 0x10;
  *(undefined8 *)pFVar4 = 0;
  *(FScriptContainerElement **)pFVar4 = local_18.Data.AllocatorInstance.Data;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar4 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar4 + 0xc) = local_18.Data.ArrayMax;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)&this->FoundFilesLock);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return true;
}

