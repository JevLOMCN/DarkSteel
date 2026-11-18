// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// Empty @ 1498b2300

void __thiscall
UE::Geometry::TDynamicVector<unsigned_int,512>::Empty
          (TDynamicVector<unsigned_int,512> *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  lVar7 = (longlong)(this->Blocks).ArrayNum;
  if (0 < lVar7) {
    lVar5 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->Blocks).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ::operator_delete(*(void **)((this->Blocks).AllocatorInstance.Data + lVar5 * 8),0x800);
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 1;
    } while (lVar5 < lVar7);
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &(this->Blocks).ArrayMax;
  (this->Blocks).ArrayNum = 0;
  if (*piVar1 != param_1) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,param_1,&(this->Blocks).AllocatorInstance,0,piVar1);
  }
  return;
}

// Empty @ 1498b23f0

void __thiscall
UE::Geometry::TDynamicVector<UE::Geometry::FSparseOctreeCell,512>::Empty
          (TDynamicVector<UE::Geometry::FSparseOctreeCell,512> *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  lVar7 = (longlong)(this->Blocks).ArrayNum;
  if (0 < lVar7) {
    lVar5 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->Blocks).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ::operator_delete(*(void **)((this->Blocks).AllocatorInstance.Data + lVar5 * 8),0x6800);
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 1;
    } while (lVar5 < lVar7);
  }
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &(this->Blocks).ArrayMax;
  (this->Blocks).ArrayNum = 0;
  if (*piVar1 != param_1) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,param_1,&(this->Blocks).AllocatorInstance,0,piVar1);
  }
  return;
}

