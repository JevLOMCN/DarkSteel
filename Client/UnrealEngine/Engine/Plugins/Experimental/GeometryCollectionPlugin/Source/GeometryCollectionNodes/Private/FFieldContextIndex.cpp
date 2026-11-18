// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 1

// ContiguousIndices @ 14e93ece0

void __cdecl
FFieldContextIndex::ContiguousIndices
          (TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *param_1,int param_2,bool param_3)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  if (param_3) {
    piVar1 = &param_1->ArrayNum;
    iVar5 = *piVar1;
    if (iVar5 < param_2) {
      iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,4,param_2 - iVar5,&param_1->AllocatorInstance,piVar1,&param_1->ArrayMax);
      DefaultConstructItems<FFieldContextIndex,int>
                ((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8,param_2 - iVar5);
    }
    else {
      if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
      }
      if (param_2 < iVar5) {
        uVar7 = iVar5 - param_2;
        if (((int)(uVar7 | param_2) < 0) &&
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
        if (uVar7 != 0) {
          _Dst = (param_1->AllocatorInstance).Data + (longlong)param_2 * 8;
          iVar5 = (*piVar1 - uVar7) - param_2;
          if (iVar5 != 0) {
            memmove(_Dst,_Dst + (longlong)(int)uVar7 * 8,(longlong)iVar5 << 3);
          }
          *piVar1 = *piVar1 - uVar7;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,&param_1->AllocatorInstance,*piVar1,&param_1->ArrayMax);
        }
      }
    }
    iVar5 = *piVar1;
    uVar7 = 0;
    if (0 < iVar5) {
      lVar8 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar7 < iVar5) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(uint *)((param_1->AllocatorInstance).Data + lVar8 + 4) = uVar7;
        uVar6 = 0;
        if ((int)uVar7 < *piVar1) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(uint *)((param_1->AllocatorInstance).Data + lVar8) = uVar7;
        uVar7 = uVar7 + 1;
        iVar5 = *piVar1;
        lVar8 = lVar8 + 8;
      } while ((int)uVar7 < iVar5);
    }
  }
  return;
}

