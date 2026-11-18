// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 2

// ~FIoStoreShaderCodeArchiveHeader @ 145df0e00

void __thiscall
FIoStoreShaderCodeArchiveHeader::~FIoStoreShaderCodeArchiveHeader
          (FIoStoreShaderCodeArchiveHeader *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ShaderIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ShaderGroupEntries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ShaderEntries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ShaderMapEntries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ShaderGroupIoHashes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ShaderHashes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ShaderMapHashes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// GetShaderUncompressedSize @ 145e11100

ulong64 __thiscall
FIoStoreShaderCodeArchiveHeader::GetShaderUncompressedSize
          (FIoStoreShaderCodeArchiveHeader *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulong64 uVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  
  uVar6 = 0;
  if (param_1 < (this->ShaderEntries).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return uVar5;
  }
  pFVar8 = (this->ShaderEntries).AllocatorInstance.Data;
  pFVar1 = pFVar8 + (longlong)param_1 * 8;
  uVar6 = (uint)(*(ulonglong *)(pFVar8 + (longlong)param_1 * 8) >> 4);
  if (((this->ShaderGroupEntries).ArrayNum <= (int)(uVar6 & 0x3fffffff)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return uVar5;
  }
  pFVar8 = (this->ShaderGroupEntries).AllocatorInstance.Data +
           (ulonglong)(uVar6 & 0x3fffffff) * 0x10;
  uVar6 = *(uint *)pFVar8;
  uVar7 = *(uint *)(pFVar8 + 4) + uVar6;
  while( true ) {
    if (uVar7 <= uVar6) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCodeArchive.h"
                         ,0x272,
                         L"Could not find shader index %d in its own group %llu - library is corrupted."
                        );
      if (!bVar3) {
        return 0;
      }
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
    uVar4 = 0;
    if ((int)uVar6 < (this->ShaderIndices).ArrayNum) {
      uVar4 = ~uVar6 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
    if (param_1 == *(int *)((this->ShaderIndices).AllocatorInstance.Data + (longlong)(int)uVar6 * 4)
       ) break;
    uVar6 = uVar6 + 1;
  }
  if (uVar7 - 1 <= uVar6) {
    return (ulonglong)*(uint *)(pFVar8 + 8) - (*(ulonglong *)pFVar1 >> 0x22);
  }
  uVar6 = uVar6 + 1;
  uVar7 = 0;
  if ((int)uVar6 < (this->ShaderIndices).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return uVar5;
  }
  uVar6 = *(uint *)((this->ShaderIndices).AllocatorInstance.Data + (longlong)(int)uVar6 * 4);
  uVar7 = 0;
  if ((int)uVar6 < (this->ShaderEntries).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return uVar5;
  }
  return (*(ulonglong *)((this->ShaderEntries).AllocatorInstance.Data + (longlong)(int)uVar6 * 8) >>
         0x22) - (*(ulonglong *)pFVar1 >> 0x22);
}

