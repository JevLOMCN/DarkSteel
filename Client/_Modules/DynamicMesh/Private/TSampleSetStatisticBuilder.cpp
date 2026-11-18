// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// TSampleSetStatisticBuilder<double> @ 14c6dd0b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TSampleSetStatisticBuilder<double> * __thiscall
UE::Geometry::TSampleSetStatisticBuilder<double>::TSampleSetStatisticBuilder<double>
          (TSampleSetStatisticBuilder<double> *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TSampleSetStatisticBuilder<double> *pTVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = _UNK_150a9e6d8;
  uStack_40 = ___xmm_ffefffffffffffff7fefffffffffffff;
  piVar1 = &(this->Statistics).ArrayMax;
  uVar12 = (ulonglong)(uint)param_1;
  (this->Statistics).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->FixedCountBuildData).ArrayNum;
  (this->Statistics).ArrayNum = 0;
  piVar3 = &(this->FixedCountBuildData).ArrayMax;
  *piVar1 = 0;
  (this->FixedCountBuildData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar3 = 0;
  this->NumStatistics = param_1;
  local_48 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum(uVar12);
  }
  (this->Statistics).ArrayNum = 0;
  if (*piVar1 != param_1) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,param_1,&(this->Statistics).AllocatorInstance,0,piVar1);
  }
  if (0 < param_1) {
    do {
      pFVar10 = (this->Statistics).AllocatorInstance.Data;
      if (((pFVar10 <= (FScriptContainerElement *)&local_48) &&
          ((FScriptContainerElement *)&local_48 < pFVar10 + (longlong)*piVar1 * 0x28)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSampleSetStatisticBuilder<double> *)(*pcVar5)();
        return pTVar8;
      }
      iVar7 = (this->Statistics).ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,&(this->Statistics).AllocatorInstance,piVar1);
      }
      lVar9 = (longlong)iVar7;
      (this->Statistics).ArrayNum = iVar7 + 1;
      pFVar10 = (this->Statistics).AllocatorInstance.Data;
      *(undefined8 *)(pFVar10 + lVar9 * 0x28) = local_48;
      *(undefined8 *)(pFVar10 + lVar9 * 0x28 + 8) = uStack_40;
      *(undefined8 *)(pFVar10 + lVar9 * 0x28 + 0x10) = uStack_38;
      *(undefined8 *)(pFVar10 + lVar9 * 0x28 + 0x10 + 8) = uStack_30;
      *(undefined8 *)(pFVar10 + lVar9 * 0x28 + 0x20) = uStack_28;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  uVar4 = this->NumStatistics;
  iVar7 = *piVar2;
  if (iVar7 < (int)uVar4) {
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar4 - iVar7,&(this->FixedCountBuildData).AllocatorInstance,piVar2,piVar3);
  }
  else {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    if ((int)uVar4 < iVar7) {
      uVar11 = iVar7 - uVar4;
      if (((int)(uVar11 | uVar4) < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSampleSetStatisticBuilder<double> *)(*pcVar5)();
        return pTVar8;
      }
      if (uVar11 != 0) {
        pFVar10 = (this->FixedCountBuildData).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x10;
        iVar7 = (*piVar2 - uVar4) - uVar11;
        if (iVar7 != 0) {
          memmove(pFVar10,pFVar10 + (longlong)(int)uVar11 * 0x10,(longlong)iVar7 << 4);
        }
        *piVar2 = *piVar2 - uVar11;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&(this->FixedCountBuildData).AllocatorInstance,*piVar2,piVar3);
      }
    }
  }
  return this;
}

