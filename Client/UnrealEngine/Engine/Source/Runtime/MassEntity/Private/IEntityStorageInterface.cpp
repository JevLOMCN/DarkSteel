// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 2

// ~IEntityStorageInterface @ 1471e0c20

void __thiscall
UE::Mass::IEntityStorageInterface::~IEntityStorageInterface(IEntityStorageInterface *this)

{
  return;
}

// Acquire @ 1471eaf60

int __thiscall
UE::Mass::IEntityStorageInterface::Acquire
          (IEntityStorageInterface *this,int param_1,
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *local_28;
  int iStack_20;
  
  if (param_1 == 0) {
    return 0;
  }
  piVar1 = &param_2->ArrayNum;
  uVar9 = *piVar1;
  iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,param_1,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  memset((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8,0,(longlong)param_1 << 3);
  pcVar2 = *(code **)((longlong)*this + 0x78);
  uVar6 = 0;
  if ((int)uVar9 < *piVar1) {
    uVar6 = ~uVar9 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  pFVar3 = (param_2->AllocatorInstance).Data;
  if (param_1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  iStack_20 = param_1;
  local_28 = pFVar3 + (longlong)(int)uVar9 * 8;
  iVar5 = (*pcVar2)(this,&local_28);
  if (iVar5 < param_1) {
    uVar9 = uVar9 + iVar5;
    uVar8 = param_1 - iVar5;
    uVar6 = 0;
    if ((int)(uVar9 + uVar8) <= *piVar1) {
      uVar6 = ~(uVar9 | uVar8) >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        iVar5 = (*pcVar2)();
        return iVar5;
      }
    }
    if (uVar8 != 0) {
      pFVar3 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 8;
      iVar7 = (*piVar1 - uVar9) - uVar8;
      if (iVar7 != 0) {
        memmove(pFVar3,pFVar3 + (longlong)(int)uVar8 * 8,(longlong)iVar7 << 3);
      }
      *piVar1 = *piVar1 - uVar8;
    }
  }
  return iVar5;
}

