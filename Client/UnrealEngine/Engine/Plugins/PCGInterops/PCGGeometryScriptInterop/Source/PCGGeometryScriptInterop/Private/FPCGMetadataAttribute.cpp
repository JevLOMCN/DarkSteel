// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCGGeometryScriptInterop
// Functions: 1

// AddValue @ 14cee8420

int __thiscall
FPCGMetadataAttribute<FSoftObjectPath>::AddValue
          (FPCGMetadataAttribute<FSoftObjectPath> *this,FSoftObjectPath *param_1)

{
  int *piVar1;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> *pTVar2;
  FSoftObjectPath *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  iVar6 = FindValue<FSoftObjectPath,0>(this,param_1);
  if (iVar6 == -2) {
    AcquireSRWLockExclusive((PSRWLOCK)&this->ValueLock);
    pTVar2 = &this->Values;
    pFVar3 = (FSoftObjectPath *)(pTVar2->AllocatorInstance).Data;
    if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (this->Values).ArrayMax)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
    }
    iVar6 = (this->Values).ArrayNum;
    piVar1 = &(this->Values).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->Values).ArrayNum = iVar6 + 1;
    FSoftObjectPath::FSoftObjectPath
              ((FSoftObjectPath *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x20),
               param_1);
    iVar6 = this->ValueKeyOffset + iVar6;
    ReleaseSRWLockExclusive((PSRWLOCK)&this->ValueLock);
  }
  return iVar6;
}

