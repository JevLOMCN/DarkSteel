// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 3

// AddIndex @ 1424ff680

void __thiscall FHittestGrid::FCell::AddIndex(FCell *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  int local_res10 [6];
  
  pFVar6 = (this->WidgetIndexes).AllocatorInstance.Data;
  pFVar2 = pFVar6 + (longlong)(this->WidgetIndexes).ArrayNum * 4;
  do {
    local_res10[0] = param_1;
    if (pFVar6 == pFVar2) {
LAB_1424ff6d9:
      pFVar2 = (this->WidgetIndexes).AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_res10) &&
          ((FScriptContainerElement *)local_res10 <
           pFVar2 + (longlong)(this->WidgetIndexes).ArrayMax * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = (this->WidgetIndexes).ArrayNum;
      piVar1 = &(this->WidgetIndexes).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)this,piVar1);
      }
      (this->WidgetIndexes).ArrayNum = iVar5 + 1;
      *(int *)((this->WidgetIndexes).AllocatorInstance.Data + (longlong)iVar5 * 4) = local_res10[0];
      return;
    }
    if (*(int *)pFVar6 == param_1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!WidgetIndexes.Contains(WidgetIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Input\\HittestGrid.cpp"
                         ,0x91,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      goto LAB_1424ff6d9;
    }
    pFVar6 = pFVar6 + 4;
  } while( true );
}

// RemoveIndex @ 14251bdd0

void __thiscall FHittestGrid::FCell::RemoveIndex(FCell *this,int param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  
  pFVar3 = (this->WidgetIndexes).AllocatorInstance.Data;
  iVar6 = (this->WidgetIndexes).ArrayNum;
  pFVar9 = pFVar3;
  if (pFVar3 != pFVar3 + (longlong)iVar6 * 4) {
    while (*(int *)pFVar9 != param_1) {
      pFVar9 = pFVar9 + 4;
      if (pFVar9 == pFVar3 + (longlong)iVar6 * 4) {
        return;
      }
    }
    uVar8 = (uint)((longlong)pFVar9 - (longlong)pFVar3 >> 2);
    if (uVar8 != 0xffffffff) {
      uVar7 = 0;
      if ((int)(uVar8 + 1) <= iVar6) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar2 = (this->WidgetIndexes).ArrayNum;
      pFVar3 = (this->WidgetIndexes).AllocatorInstance.Data;
      iVar6 = iVar2 + ~uVar8;
      if (1 < iVar6) {
        iVar6 = 1;
      }
      if (iVar6 != 0) {
        memmove(pFVar3 + (longlong)(int)uVar8 * 4,pFVar3 + (longlong)(iVar2 - iVar6) * 4,
                (longlong)iVar6 << 2);
      }
      piVar1 = &(this->WidgetIndexes).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(ForAnyElementType *)this,(this->WidgetIndexes).ArrayNum,
                 &(this->WidgetIndexes).ArrayMax);
    }
  }
  return;
}

// Reset @ 14251cc00

void __thiscall FHittestGrid::FCell::Reset(FCell *this)

{
  (this->WidgetIndexes).ArrayNum = 0;
  if ((this->WidgetIndexes).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)this,0,&(this->WidgetIndexes).ArrayMax);
  }
  return;
}

