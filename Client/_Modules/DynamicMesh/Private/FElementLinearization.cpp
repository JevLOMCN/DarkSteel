// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 4

// Populate<UE::Geometry::FRefCountVector::IndexEnumerable> @ 14c79b0e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FElementLinearization::Populate<UE::Geometry::FRefCountVector::IndexEnumerable>
          (FElementLinearization *this,int param_1,int param_2,IndexEnumerable param_3)

{
  short sVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&this->ToIndexMap,param_1,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&this->ToIdMap,param_2,Default);
  uVar10 = 0;
  if (0 < param_1) {
    lVar9 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar10 < (this->ToIndexMap).ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar10 = uVar10 + 1;
      *(undefined4 *)((this->ToIndexMap).AllocatorInstance.Data + lVar9) = 0xffffffff;
      lVar9 = lVar9 + 4;
    } while ((int)uVar10 < param_1);
  }
  uVar10 = 0;
  uVar11 = 0;
  uVar8 = ((param_3.Vector)->RefCounts).CurBlock * 0x200 +
          ((param_3.Vector)->RefCounts).CurBlockUsed;
  if ((uVar8 != 0) &&
     (pFVar2 = ((param_3.Vector)->RefCounts).Blocks.AllocatorInstance.Data,
     0xfffd < (ushort)(**(short **)pFVar2 - 1U))) {
    uVar11 = 1;
    bVar5 = uVar8 == 1;
    if ((int)uVar8 < 2) goto LAB_14c79b1f9;
    do {
      sVar1 = *(short *)(*(longlong *)(pFVar2 + (ulonglong)(uVar11 >> 9) * 8) +
                        (ulonglong)(uVar11 & 0x1ff) * 2);
      if ((sVar1 != 0) && (sVar1 != -1)) break;
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)uVar8);
  }
  bVar5 = uVar11 == uVar8;
LAB_14c79b1f9:
  if (!bVar5) {
    lVar9 = 0;
LAB_14c79b202:
    do {
      uVar6 = 0;
      if ((int)uVar10 < (this->ToIdMap).ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(uint *)((this->ToIdMap).AllocatorInstance.Data + lVar9) = uVar11;
      uVar6 = 0;
      if ((int)uVar11 < (this->ToIndexMap).ArrayNum) {
        uVar6 = ~uVar11 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar9 = lVar9 + 4;
      lVar7 = (longlong)(int)uVar11;
      uVar11 = uVar11 + 1;
      *(uint *)((this->ToIndexMap).AllocatorInstance.Data + lVar7 * 4) = uVar10;
      uVar10 = uVar10 + 1;
      if ((int)uVar11 < (int)uVar8) {
        pFVar2 = ((param_3.Vector)->RefCounts).Blocks.AllocatorInstance.Data;
        do {
          lVar7 = (ulonglong)(uVar11 >> 9) * 8;
          lVar4 = (ulonglong)(uVar11 & 0x1ff) * 2;
          if ((*(short *)(lVar4 + *(longlong *)(pFVar2 + lVar7)) != 0) &&
             (*(short *)(lVar4 + *(longlong *)(pFVar2 + lVar7)) != -1)) goto LAB_14c79b202;
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)uVar8);
      }
    } while (uVar11 != uVar8);
  }
  return;
}

// Empty @ 14c801470

void __thiscall UE::Geometry::FElementLinearization::Empty(FElementLinearization *this)

{
  int *piVar1;
  
  piVar1 = &(this->ToIdMap).ArrayMax;
  (this->ToIdMap).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)this,0,piVar1);
  }
  piVar1 = &(this->ToIndexMap).ArrayMax;
  (this->ToIndexMap).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->ToIndexMap).AllocatorInstance,0,piVar1);
  }
  return;
}

// GetIndex @ 14c8f48e0

int __thiscall
UE::Geometry::FElementLinearization::GetIndex(FElementLinearization *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < (this->ToIndexMap).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  return *(int *)((this->ToIndexMap).AllocatorInstance.Data + (longlong)param_1 * 4);
}

// IsValidId @ 14c902d70

bool __thiscall
UE::Geometry::FElementLinearization::IsValidId(FElementLinearization *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((-1 < param_1) && (param_1 < (this->ToIndexMap).ArrayNum)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (-1 < *(int *)((this->ToIndexMap).AllocatorInstance.Data + (longlong)param_1 * 4)) {
      return true;
    }
  }
  return false;
}

