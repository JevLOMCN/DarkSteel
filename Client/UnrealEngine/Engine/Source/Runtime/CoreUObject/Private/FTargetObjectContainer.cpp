// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// GetRefCountPtr @ 141f36130

int * __thiscall
FFindReferencersArchive::FTargetObjectContainer::GetRefCountPtr
          (FTargetObjectContainer *this,UObject *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  if ((this->bFrozen == false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("bFrozen",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\Serialization\\FindReferencersArchive.h"
                         ,0xb3,L"Container has not been frozen and cannot be searched yet"), bVar4))
  {
    pcVar2 = (code *)swi(3);
    piVar7 = (int *)(*pcVar2)();
    return piVar7;
  }
  uVar10 = (this->TargetObjects).ArrayNum;
  pFVar1 = (this->TargetObjects).AllocatorInstance.Data;
  uVar8 = 0;
  uVar9 = uVar10;
  if (0 < (int)uVar10) {
    do {
      iVar6 = (uVar9 >> 1) + uVar8;
      if (*(UObject **)(pFVar1 + (longlong)iVar6 * 8) < param_1) {
        uVar8 = iVar6 + (uVar9 & 1);
      }
      uVar3 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar3 != 0);
  }
  if ((((int)uVar10 <= (int)uVar8) || (param_1 < *(UObject **)(pFVar1 + (longlong)(int)uVar8 * 8)))
     || (uVar8 == 0xffffffff)) {
    return (int *)0x0;
  }
  iVar6 = (this->RefCounts).ArrayNum;
  if (iVar6 <= (int)uVar8) {
    uVar10 = uVar8 + 1;
    if (iVar6 < (int)uVar10) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,uVar10 - iVar6,&(this->RefCounts).AllocatorInstance,
                         &(this->RefCounts).ArrayNum,&(this->RefCounts).ArrayMax);
      memset((this->RefCounts).AllocatorInstance.Data + (longlong)iVar5 * 4,0,
             (longlong)(int)(uVar10 - iVar6) << 2);
    }
    else {
      if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
      }
      if ((int)uVar10 < iVar6) {
        uVar9 = iVar6 - uVar10;
        if (((int)(uVar9 | uVar10) < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          piVar7 = (int *)(*pcVar2)();
          return piVar7;
        }
        if (uVar9 != 0) {
          pFVar1 = (this->RefCounts).AllocatorInstance.Data + (longlong)(int)uVar10 * 4;
          iVar6 = ((this->RefCounts).ArrayNum - uVar9) - uVar10;
          if (iVar6 != 0) {
            memmove(pFVar1,pFVar1 + (longlong)(int)uVar9 * 4,(longlong)iVar6 << 2);
          }
          piVar7 = &(this->RefCounts).ArrayNum;
          *piVar7 = *piVar7 - uVar9;
        }
      }
    }
  }
  uVar10 = 0;
  if ((int)uVar8 < (this->RefCounts).ArrayNum) {
    uVar10 = ~uVar8 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    piVar7 = (int *)(*pcVar2)();
    return piVar7;
  }
  return (int *)((this->RefCounts).AllocatorInstance.Data + (longlong)(int)uVar8 * 4);
}

