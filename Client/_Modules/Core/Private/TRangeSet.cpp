// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// Add @ 141bf59a0

void __thiscall TRangeSet<int>::Add(TRangeSet<int> *this,TRange<int> *param_1)

{
  uchar uVar1;
  int iVar2;
  TRangeBound<int> TVar3;
  TRangeBound<int> TVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  TRangeBound<int> TVar10;
  TRangeBound<int> *pTVar11;
  TRange<int> *pTVar12;
  int *piVar13;
  uint uVar14;
  longlong lVar15;
  TRangeBound<int> local_res8;
  TRangeBound<int> local_res10;
  
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
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar12 = (TRange<int> *)((this->Ranges).AllocatorInstance.Data + lVar15);
      bVar7 = TRange<int>::IsEmpty(pTVar12);
      if ((bVar7) || (bVar7 = TRange<int>::IsEmpty(param_1), bVar7)) {
LAB_141bf5a9f:
        bVar7 = TRange<int>::Overlaps(pTVar12,param_1);
        if (bVar7) goto LAB_141bf5ab2;
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
              if (uVar1 != '\0') goto LAB_141bf5a9f;
              bVar7 = (pTVar12->LowerBound).Type.Value == '\x01';
            }
LAB_141bf5a9d:
            if (bVar7) goto LAB_141bf5ab2;
          }
          goto LAB_141bf5a9f;
        }
        uVar1 = (pTVar12->UpperBound).Type.Value;
        if (uVar1 == '\x01') {
          bVar7 = (param_1->LowerBound).Type.Value == '\0';
          goto LAB_141bf5a9d;
        }
        if ((uVar1 != '\0') || ((param_1->LowerBound).Type.Value != '\x01')) goto LAB_141bf5a9f;
LAB_141bf5ab2:
        local_res8 = pTVar12->UpperBound;
        local_res10 = param_1->UpperBound;
        if (local_res8.Type.Value.Value == '\x02') {
          pTVar11 = &local_res8;
        }
        else if (local_res10.Type.Value.Value == '\x02') {
          pTVar11 = &local_res10;
        }
        else if (local_res10.Value < local_res8.Value) {
          pTVar11 = &local_res8;
        }
        else if (local_res8.Value < local_res10.Value) {
          pTVar11 = &local_res10;
        }
        else {
          pTVar11 = &local_res8;
          if (local_res8.Type.Value.Value != '\x01') {
            pTVar11 = &local_res10;
          }
        }
        TVar3 = pTVar12->LowerBound;
        TVar4 = param_1->LowerBound;
        TVar10 = TVar3;
        if ((TVar3.Type.Value.Value != '\x02') && (TVar10 = TVar4, TVar4.Type.Value.Value != '\x02')
           ) {
          TVar10 = TVar3;
          if ((TVar4.Value <= TVar3.Value) &&
             ((TVar10 = TVar4, TVar3.Value <= TVar4.Value && (TVar3.Type.Value.Value == '\x01')))) {
            TVar10 = TVar3;
          }
        }
        iVar9 = (this->Ranges).ArrayNum;
        param_1->LowerBound = TVar10;
        lVar15 = lVar15 + -0x10;
        param_1->UpperBound = *pTVar11;
        uVar8 = 0;
        if ((int)uVar14 < iVar9) {
          uVar8 = ~uVar14 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar2 = (this->Ranges).ArrayNum;
        pFVar5 = (this->Ranges).AllocatorInstance.Data;
        iVar9 = ~uVar14 + iVar2;
        if (1 < iVar9) {
          iVar9 = 1;
        }
        if (iVar9 != 0) {
          memmove(pFVar5 + (longlong)(int)uVar14 * 0x10,pFVar5 + (longlong)(iVar2 - iVar9) * 0x10,
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
  pTVar12 = (TRange<int> *)(this->Ranges).AllocatorInstance.Data;
  if (((pTVar12 <= param_1) && (param_1 < pTVar12 + *piVar13)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar9 = (this->Ranges).ArrayNum;
  if (iVar9 == *piVar13) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,(ForAnyElementType *)this,piVar13);
    (this->Ranges).ArrayNum = iVar9;
  }
  TVar3 = param_1->LowerBound;
  TVar4 = param_1->UpperBound;
  (this->Ranges).ArrayNum = iVar9 + 1;
  pTVar11 = (TRangeBound<int> *)((this->Ranges).AllocatorInstance.Data + (longlong)iVar9 * 0x10);
  *pTVar11 = TVar3;
  pTVar11[1] = TVar4;
  return;
}

// Add @ 141bf5cf0

void __thiscall TRangeSet<FTimespan>::Add(TRangeSet<FTimespan> *this,TRange<FTimespan> *param_1)

{
  int *piVar1;
  uchar uVar2;
  longlong lVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  undefined8 uVar9;
  long64 lVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  FTimespan *pFVar15;
  FTimespan *pFVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  char cVar19;
  TRange<FTimespan> *pTVar20;
  uint uVar21;
  uint uVar22;
  int *piVar23;
  longlong local_res18;
  undefined8 local_98;
  longlong lStack_90;
  undefined8 local_88;
  longlong lStack_80;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  longlong lStack_60;
  undefined8 local_58;
  long64 lStack_50;
  undefined8 local_48;
  long64 lStack_40;
  
  iVar14 = (this->Ranges).ArrayNum;
  uVar22 = 0;
  piVar23 = &(this->Ranges).ArrayNum;
  if (0 < iVar14) {
    local_res18 = 0;
    do {
      uVar21 = 0;
      if ((int)uVar22 < iVar14) {
        uVar21 = ~uVar22 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar20 = (TRange<FTimespan> *)((this->Ranges).AllocatorInstance.Data + local_res18);
      bVar12 = TRange<FTimespan>::IsEmpty(pTVar20);
      if ((bVar12) || (bVar12 = TRange<FTimespan>::IsEmpty(param_1), bVar12)) {
LAB_141bf5e42:
        bVar12 = TRange<FTimespan>::IsEmpty(pTVar20);
        uVar21 = uVar22;
        if ((!bVar12) && (bVar12 = TRange<FTimespan>::IsEmpty(param_1), !bVar12)) {
          uVar2 = (pTVar20->UpperBound).Type.Value;
          if ((uVar2 == '\x02') || ((param_1->LowerBound).Type.Value == '\x02')) {
            bVar12 = true;
          }
          if (((pTVar20->LowerBound).Type.Value == '\x02') ||
             ((param_1->UpperBound).Type.Value == '\x02')) {
            bVar11 = true;
          }
          else {
            bVar11 = false;
          }
          bVar8 = true;
          if (bVar12 == false) {
            if ((uVar2 == '\x02') &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Type != ERangeBoundTypes::Open",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                    ,99,L""), bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (((param_1->LowerBound).Type.Value == '\x02') &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Type != ERangeBoundTypes::Open",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                    ,99,L""), bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar3 = (param_1->LowerBound).Value.Ticks;
            lVar4 = (pTVar20->UpperBound).Value.Ticks;
            pFVar15 = TRangeBound<FTimespan>::GetValue(&pTVar20->UpperBound);
            pFVar16 = TRangeBound<FTimespan>::GetValue(&param_1->LowerBound);
            if (((pTVar20->UpperBound).Type.Value == '\x01') &&
               ((param_1->LowerBound).Type.Value == '\x01')) {
              bVar12 = true;
            }
            else {
              bVar12 = false;
            }
            bVar8 = lVar3 < lVar4;
            if (bVar12) {
              bVar8 = pFVar16->Ticks <= pFVar15->Ticks;
            }
          }
          bVar12 = true;
          if (!bVar11) {
            if (((pTVar20->LowerBound).Type.Value == '\x02') &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Type != ERangeBoundTypes::Open",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                    ,99,L""), bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (((param_1->UpperBound).Type.Value == '\x02') &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Type != ERangeBoundTypes::Open",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                    ,99,L""), bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar3 = (param_1->UpperBound).Value.Ticks;
            lVar4 = (pTVar20->LowerBound).Value.Ticks;
            pFVar15 = TRangeBound<FTimespan>::GetValue((TRangeBound<FTimespan> *)pTVar20);
            pFVar16 = TRangeBound<FTimespan>::GetValue(&param_1->UpperBound);
            if (((pTVar20->LowerBound).Type.Value == '\x01') &&
               ((param_1->UpperBound).Type.Value == '\x01')) {
              bVar11 = true;
            }
            else {
              bVar11 = false;
            }
            bVar12 = lVar4 < lVar3;
            if (bVar11) {
              bVar12 = pFVar15->Ticks <= pFVar16->Ticks;
            }
          }
          if ((bVar8) && (bVar12)) goto LAB_141bf6002;
        }
      }
      else {
        if (((pTVar20->UpperBound).Type.Value == '\x02') ||
           (((param_1->LowerBound).Type.Value == '\x02' ||
            ((pTVar20->UpperBound).Value.Ticks != (param_1->LowerBound).Value.Ticks)))) {
          if (((param_1->UpperBound).Type.Value != '\x02') &&
             ((pTVar20->LowerBound).Type.Value != '\x02')) {
            pFVar15 = TRangeBound<FTimespan>::GetValue(&param_1->UpperBound);
            pFVar16 = TRangeBound<FTimespan>::GetValue((TRangeBound<FTimespan> *)pTVar20);
            if (pFVar15->Ticks == pFVar16->Ticks) {
              uVar2 = (param_1->UpperBound).Type.Value;
              if (uVar2 == '\x01') {
                uVar2 = (pTVar20->LowerBound).Type.Value;
                goto joined_r0x000141bf5e23;
              }
              if (uVar2 == '\0') {
                uVar2 = (pTVar20->LowerBound).Type.Value;
                goto joined_r0x000141bf5e32;
              }
            }
          }
          goto LAB_141bf5e42;
        }
        uVar2 = (pTVar20->UpperBound).Type.Value;
        if (uVar2 != '\x01') {
          if (uVar2 == '\0') {
            uVar2 = (param_1->LowerBound).Type.Value;
joined_r0x000141bf5e32:
            if (uVar2 == '\x01') goto LAB_141bf6002;
          }
          goto LAB_141bf5e42;
        }
        uVar2 = (param_1->LowerBound).Type.Value;
joined_r0x000141bf5e23:
        if (uVar2 != '\0') goto LAB_141bf5e42;
LAB_141bf6002:
        lStack_90 = (pTVar20->UpperBound).Value.Ticks;
        lStack_80 = (param_1->UpperBound).Value.Ticks;
        local_88 = *(undefined8 *)&param_1->UpperBound;
        local_98 = *(undefined8 *)&pTVar20->UpperBound;
        cVar19 = (char)*(undefined8 *)&pTVar20->UpperBound;
        if (cVar19 == '\x02') {
          puVar18 = &local_98;
        }
        else if ((char)*(undefined8 *)&param_1->UpperBound == '\x02') {
          puVar18 = &local_88;
        }
        else if (lStack_80 < lStack_90) {
          puVar18 = &local_98;
        }
        else if (lStack_90 < lStack_80) {
          puVar18 = &local_88;
        }
        else {
          puVar18 = &local_98;
          if (cVar19 != '\x01') {
            puVar18 = &local_88;
          }
        }
        lStack_70 = (pTVar20->LowerBound).Value.Ticks;
        lStack_60 = (param_1->LowerBound).Value.Ticks;
        local_68 = *(undefined8 *)&param_1->LowerBound;
        local_78 = *(undefined8 *)&pTVar20->LowerBound;
        cVar19 = (char)*(undefined8 *)&pTVar20->LowerBound;
        if (cVar19 == '\x02') {
          puVar17 = &local_78;
        }
        else if ((char)*(undefined8 *)&param_1->LowerBound == '\x02') {
          puVar17 = &local_68;
        }
        else if (lStack_70 < lStack_60) {
          puVar17 = &local_78;
        }
        else if (lStack_60 < lStack_70) {
          puVar17 = &local_68;
        }
        else {
          puVar17 = &local_78;
          if (cVar19 != '\x01') {
            puVar17 = &local_68;
          }
        }
        local_48 = *puVar18;
        lStack_40 = puVar18[1];
        iVar14 = *piVar23;
        local_58 = *puVar17;
        lStack_50 = puVar17[1];
        uVar21 = uVar22 - 1;
        local_res18 = local_res18 + -0x20;
        *(undefined8 *)&param_1->LowerBound = local_58;
        (param_1->LowerBound).Value.Ticks = lStack_50;
        uVar13 = 0;
        if ((int)uVar22 < iVar14) {
          uVar13 = ~uVar22 >> 0x1f;
        }
        *(undefined8 *)&param_1->UpperBound = local_48;
        (param_1->UpperBound).Value.Ticks = lStack_40;
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar5 = (this->Ranges).AllocatorInstance.Data;
        iVar14 = *piVar23 + ~uVar22;
        if (1 < iVar14) {
          iVar14 = 1;
        }
        if (iVar14 != 0) {
          memmove(pFVar5 + (longlong)(int)uVar22 * 0x20,
                  pFVar5 + (longlong)(*piVar23 - iVar14) * 0x20,(longlong)iVar14 << 5);
        }
        *piVar23 = *piVar23 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,(ForAnyElementType *)this,*piVar23,&(this->Ranges).ArrayMax);
      }
      iVar14 = *piVar23;
      local_res18 = local_res18 + 0x20;
      uVar22 = uVar21 + 1;
    } while ((int)uVar22 < iVar14);
  }
  piVar23 = &(this->Ranges).ArrayNum;
  pTVar20 = (TRange<FTimespan> *)(this->Ranges).AllocatorInstance.Data;
  if (((pTVar20 <= param_1) && (param_1 < pTVar20 + (this->Ranges).ArrayMax)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar14 = *piVar23;
  piVar1 = &(this->Ranges).ArrayMax;
  if (iVar14 == *piVar1) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x820,(ForAnyElementType *)this,piVar1);
    *piVar23 = iVar14;
  }
  uVar9 = *(undefined8 *)&param_1->LowerBound;
  lVar10 = (param_1->LowerBound).Value.Ticks;
  *piVar23 = iVar14 + 1;
  pFVar6 = (this->Ranges).AllocatorInstance.Data;
  pFVar5 = pFVar6 + (longlong)iVar14 * 0x20;
  *(undefined8 *)pFVar5 = uVar9;
  *(long64 *)(pFVar5 + 8) = lVar10;
  lVar10 = (param_1->UpperBound).Value.Ticks;
  pFVar6 = pFVar6 + (longlong)iVar14 * 0x20 + 0x10;
  *(undefined8 *)pFVar6 = *(undefined8 *)&param_1->UpperBound;
  *(long64 *)(pFVar6 + 8) = lVar10;
  return;
}

