// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolMenus
// Functions: 1

// PopDescription @ 142c65460

void __thiscall FAutomationSpecBase::PopDescription(FAutomationSpecBase *this,FString *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *_Dst;
  
  iVar5 = (this->Description).ArrayNum;
  uVar6 = iVar5 - 1;
  uVar4 = 0;
  if ((int)uVar6 < iVar5) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  _Dst = (this->Description).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x10;
  if (*(void **)_Dst != (void *)0x0) {
    FMemory::Free(*(void **)_Dst);
  }
  iVar5 = (this->Description).ArrayNum + ~uVar6;
  if (iVar5 != 0) {
    memmove(_Dst,_Dst + 0x10,(longlong)iVar5 << 4);
  }
  piVar1 = &(this->Description).ArrayNum;
  *piVar1 = *piVar1 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,&(this->Description).AllocatorInstance,(this->Description).ArrayNum,
             &(this->Description).ArrayMax);
  return;
}

