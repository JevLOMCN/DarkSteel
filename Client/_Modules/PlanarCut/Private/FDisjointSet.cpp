// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PlanarCut
// Functions: 1

// Init @ 14c9d38d0

void __thiscall FDisjointSet::Init(FDisjointSet *this,uint param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  piVar1 = &(this->Parents).ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < (int)param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,param_1 - iVar4,(ForAnyElementType *)this,piVar1,&(this->Parents).ArrayMax);
  }
  else {
    if ((int)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)param_1);
    }
    if ((int)param_1 < iVar4) {
      uVar6 = iVar4 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->Parents).AllocatorInstance.Data + (longlong)(int)param_1 * 4;
        iVar4 = (*piVar1 - uVar6) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 4,(longlong)iVar4 << 2);
        }
        *piVar1 = *piVar1 - uVar6;
      }
    }
  }
  uVar6 = 0;
  if (param_1 != 0) {
    do {
      uVar5 = 0;
      if ((int)uVar6 < *piVar1) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(uint *)((this->Parents).AllocatorInstance.Data + (longlong)(int)uVar6 * 4) = uVar6;
      uVar6 = uVar6 + 1;
    } while (uVar6 < param_1);
  }
  return;
}

