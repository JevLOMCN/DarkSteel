// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 1

// Add @ 14d7940b0

void __thiscall TRangeSet<float>::Add(TRangeSet<float> *this,TRange<float> *param_1)

{
  uchar uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  TRangeBound<float> TVar5;
  TRangeBound<float> TVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  TRangeBound<float> TVar10;
  TRangeBound<float> *pTVar11;
  TRange<float> *pTVar12;
  int *piVar13;
  uint uVar14;
  longlong lVar15;
  TRangeBound<float> local_res8;
  TRangeBound<float> local_res10;
  TRangeBound<float> local_res18;
  TRangeBound<float> local_res20;
  
  iVar9 = (this->Ranges).ArrayNum;
  uVar14 = 0;
  if (0 < iVar9) {
    lVar15 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar14 < iVar9) {
        uVar8 = ~uVar14 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar12 = (TRange<float> *)((this->Ranges).AllocatorInstance.Data + lVar15);
      bVar7 = TRange<float>::IsEmpty(pTVar12);
      if ((bVar7) || (bVar7 = TRange<float>::IsEmpty(param_1), bVar7)) {
LAB_14d7941b5:
        bVar7 = TRange<float>::Overlaps(pTVar12,param_1);
        if (bVar7) goto LAB_14d7941c8;
      }
      else {
        if (((pTVar12->UpperBound).Type.Value == '\x02') ||
           (((param_1->LowerBound).Type.Value == '\x02' ||
            ((pTVar12->UpperBound).Value != (param_1->LowerBound).Value)))) {
          if (((param_1->UpperBound).Type.Value != '\x02') &&
             (((pTVar12->LowerBound).Type.Value != '\x02' &&
              ((param_1->UpperBound).Value == (pTVar12->LowerBound).Value)))) {
            uVar1 = (param_1->UpperBound).Type.Value;
            if (uVar1 == '\x01') {
              bVar7 = (pTVar12->LowerBound).Type.Value == '\0';
            }
            else {
              if (uVar1 != '\0') goto LAB_14d7941b5;
              bVar7 = (pTVar12->LowerBound).Type.Value == '\x01';
            }
LAB_14d7941b3:
            if (bVar7) goto LAB_14d7941c8;
          }
          goto LAB_14d7941b5;
        }
        uVar1 = (pTVar12->UpperBound).Type.Value;
        if (uVar1 == '\x01') {
          bVar7 = (param_1->LowerBound).Type.Value == '\0';
          goto LAB_14d7941b3;
        }
        if ((uVar1 != '\0') || ((param_1->LowerBound).Type.Value != '\x01')) goto LAB_14d7941b5;
LAB_14d7941c8:
        local_res8 = pTVar12->UpperBound;
        local_res10 = param_1->UpperBound;
        TVar6 = local_res10;
        TVar5 = local_res8;
        if (local_res8.Type.Value.Value == '\x02') {
          pTVar11 = &local_res8;
        }
        else if (local_res10.Type.Value.Value == '\x02') {
          pTVar11 = &local_res10;
        }
        else if (local_res8.Value <= local_res10.Value) {
          if (local_res10.Value <= local_res8.Value) {
            pTVar11 = &local_res8;
            if (local_res8.Type.Value.Value != '\x01') {
              pTVar11 = &local_res10;
            }
          }
          else {
            pTVar11 = &local_res10;
          }
        }
        else {
          pTVar11 = &local_res8;
        }
        local_res18 = pTVar12->LowerBound;
        local_res20 = param_1->LowerBound;
        TVar10 = local_res18;
        if ((local_res18.Type.Value.Value != '\x02') &&
           (TVar10 = local_res20, local_res20.Type.Value.Value != '\x02')) {
          TVar10 = local_res18;
          if ((local_res20.Value <= local_res18.Value) &&
             ((TVar10 = local_res20, local_res18.Value <= local_res20.Value &&
              (local_res18.Type.Value.Value == '\x01')))) {
            TVar10 = local_res18;
          }
        }
        iVar9 = (this->Ranges).ArrayNum;
        lVar15 = lVar15 + -0x10;
        param_1->LowerBound = TVar10;
        param_1->UpperBound = *pTVar11;
        uVar8 = 0;
        if ((int)uVar14 < iVar9) {
          uVar8 = ~uVar14 >> 0x1f;
        }
        local_res8 = TVar5;
        local_res10 = TVar6;
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar2 = (this->Ranges).ArrayNum;
        pFVar3 = (this->Ranges).AllocatorInstance.Data;
        iVar9 = ~uVar14 + iVar2;
        if (1 < iVar9) {
          iVar9 = 1;
        }
        if (iVar9 != 0) {
          memmove(pFVar3 + (longlong)(int)uVar14 * 0x10,pFVar3 + (longlong)(iVar2 - iVar9) * 0x10,
                  (longlong)iVar9 << 4);
        }
        piVar13 = &(this->Ranges).ArrayNum;
        *piVar13 = *piVar13 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,(ForAnyElementType *)this,(this->Ranges).ArrayNum,&(this->Ranges).ArrayMax
                  );
        uVar14 = uVar14 - 1;
      }
      iVar9 = (this->Ranges).ArrayNum;
      uVar14 = uVar14 + 1;
      lVar15 = lVar15 + 0x10;
    } while ((int)uVar14 < iVar9);
  }
  piVar13 = &(this->Ranges).ArrayMax;
  pTVar12 = (TRange<float> *)(this->Ranges).AllocatorInstance.Data;
  if (((pTVar12 <= param_1) && (param_1 < pTVar12 + *piVar13)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar9 = (this->Ranges).ArrayNum;
  if (iVar9 == *piVar13) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,(ForAnyElementType *)this,piVar13);
    (this->Ranges).ArrayNum = iVar9;
  }
  TVar5 = param_1->LowerBound;
  TVar6 = param_1->UpperBound;
  (this->Ranges).ArrayNum = iVar9 + 1;
  pTVar11 = (TRangeBound<float> *)((this->Ranges).AllocatorInstance.Data + (longlong)iVar9 * 0x10);
  *pTVar11 = TVar5;
  pTVar11[1] = TVar6;
  return;
}

