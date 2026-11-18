// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// DoTask @ 145e04540

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPreloadShaderTask::DoTask
          (FPreloadShaderTask *this,Type param_1,TRefCountPtr<FBaseGraphTask> *param_2)

{
  int *piVar1;
  FThreadSafeCounter *pFVar2;
  FScriptContainerElement *pFVar3;
  uint uVar4;
  int iVar5;
  FShaderCodeArchive *pFVar6;
  FScriptContainerElement *pFVar7;
  IMemoryReadStream *pIVar8;
  undefined8 *puVar9;
  code *pcVar10;
  bool bVar11;
  uint uVar12;
  FShaderCodeEntry *pFVar13;
  TArrayView<FShaderCodeEntry_const_,int> local_28;
  
  pFVar6 = this->Archive;
  uVar4 = this->ShaderIndex;
  local_28.DataPtr =
       (FShaderCodeEntry *)(pFVar6->SerializedShaders).ShaderEntries.AllocatorInstance.Data;
  iVar5 = (pFVar6->SerializedShaders).ShaderEntries.ArrayNum;
  if (iVar5 < 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  local_28.ArrayNum = iVar5;
  pFVar13 = TArrayView<FShaderCodeEntry_const_,int>::operator[](&local_28,uVar4);
  (**(code **)(((this->Data).Reference)->_padding_ + 0x18))();
  AcquireSRWLockExclusive((PSRWLOCK)&pFVar6->ShaderPreloadLock);
  uVar12 = 0;
  if ((int)uVar4 < (pFVar6->ShaderPreloads).ArrayNum) {
    uVar12 = ~uVar4 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pFVar7 = (pFVar6->ShaderPreloads).AllocatorInstance.Data;
  pFVar3 = pFVar7 + (longlong)(int)uVar4 * 0x18;
  pIVar8 = (this->Data).Reference;
  (**(code **)(pIVar8->_padding_ + 0x10))
            (pIVar8,*(undefined8 *)(pFVar7 + (longlong)(int)uVar4 * 0x18 + 8),0,pFVar13->Size);
  puVar9 = *(undefined8 **)pFVar3;
  if (puVar9 != (undefined8 *)0x0) {
    *(longlong *)pFVar3 = 0;
    LOCK();
    piVar1 = (int *)(puVar9 + 6);
    iVar5 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)*puVar9)(puVar9,1);
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&pFVar6->ShaderPreloadLock);
  pIVar8 = (this->Data).Reference;
  if (pIVar8 != (IMemoryReadStream *)0x0) {
    (this->Data).Reference = (IMemoryReadStream *)0x0;
    LOCK();
    pFVar2 = &pIVar8->NumRefs;
    iVar5 = pFVar2->Counter;
    pFVar2->Counter = pFVar2->Counter + -1;
    UNLOCK();
    if (iVar5 == 1) {
      (**(code **)(pIVar8->_padding_ + 0x20))(pIVar8,1);
    }
  }
  return;
}

