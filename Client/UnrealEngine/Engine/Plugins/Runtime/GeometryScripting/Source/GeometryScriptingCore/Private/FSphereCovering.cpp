// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryScriptingCore
// Functions: 1

// AppendSpheres @ 14cdc1030

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FSphereCovering::AppendSpheres
          (FSphereCovering *this,TArrayView<UE::Math::TSphere<double>_const_,int> *param_1)

{
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  undefined8 *puVar3;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  longlong local_res18;
  
  iVar6 = param_1->ArrayNum;
  local_res18 = (longlong)iVar6;
  pTVar1 = &this->Radius;
  uVar7 = (this->Position).ArrayNum;
  uVar19 = (ulonglong)(int)uVar7;
  uVar15 = iVar6 + uVar7;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->Position,uVar15,Default);
  iVar14 = (this->Radius).ArrayNum;
  piVar2 = &(this->Radius).ArrayNum;
  if (iVar14 < (int)uVar15) {
    iVar13 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,8,uVar15 - iVar14,&pTVar1->AllocatorInstance,piVar2,
                        &(this->Radius).ArrayMax);
    memset((pTVar1->AllocatorInstance).Data + (longlong)iVar13 * 8,0,
           (longlong)(int)(uVar15 - iVar14) << 3);
  }
  else {
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
    }
    if ((int)uVar15 < iVar14) {
      uVar18 = iVar14 - uVar15;
      if (((int)(uVar18 | uVar15) < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (uVar18 != 0) {
        pFVar4 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar15 * 8;
        iVar14 = (*piVar2 - uVar18) - uVar15;
        if (iVar14 != 0) {
          memmove(pFVar4,pFVar4 + (longlong)(int)uVar18 * 8,(longlong)iVar14 << 3);
        }
        *piVar2 = *piVar2 - uVar18;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar1->AllocatorInstance,*piVar2,&(this->Radius).ArrayMax);
      }
    }
  }
  uVar15 = 0;
  if (0 < iVar6) {
    lVar16 = 0;
    lVar17 = uVar19 * 0x18;
    lVar21 = uVar19 * 8;
    do {
      uVar18 = 0;
      if ((int)uVar15 < param_1->ArrayNum) {
        uVar18 = ~uVar15 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar20 = uVar15 + (int)uVar19;
      puVar3 = (undefined8 *)((longlong)&(param_1->DataPtr->Center).field0_0x0 + lVar16);
      uVar10 = *puVar3;
      uVar11 = puVar3[1];
      uVar5 = *(undefined8 *)((longlong)&(param_1->DataPtr->Center).field0_0x0 + lVar16 + 0x10);
      uVar18 = 0;
      if ((int)uVar20 < (this->Position).ArrayNum) {
        uVar18 = ~uVar20 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar6 = param_1->ArrayNum;
      pFVar8 = (this->Position).AllocatorInstance.Data;
      pFVar4 = pFVar8 + lVar17;
      *(undefined8 *)pFVar4 = uVar10;
      *(undefined8 *)(pFVar4 + 8) = uVar11;
      *(undefined8 *)(pFVar8 + lVar17 + 0x10) = uVar5;
      uVar18 = 0;
      if ((int)uVar15 < iVar6) {
        uVar18 = ~uVar15 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar5 = *(undefined8 *)((longlong)&param_1->DataPtr->W + lVar16);
      uVar18 = 0;
      if ((int)uVar20 < *piVar2) {
        uVar18 = ~uVar20 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar15 = uVar15 + 1;
      uVar19 = (ulonglong)uVar7;
      lVar17 = lVar17 + 0x18;
      lVar16 = lVar16 + 0x20;
      *(undefined8 *)((this->Radius).AllocatorInstance.Data + lVar21) = uVar5;
      lVar21 = lVar21 + 8;
      local_res18 = local_res18 + -1;
    } while (local_res18 != 0);
  }
  return;
}

