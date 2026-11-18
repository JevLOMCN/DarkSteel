// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// FindMirroredItems @ 14a40ae30

bool __thiscall
UE::AIE::FMirrorCalculator::FindMirroredItems
          (FMirrorCalculator *this,TArray<UE::AIE::FMirrorItem,TSizedDefaultAllocator<32>_> *param_1
          ,FMirrorItemResults *param_2,TEnumAsByte<EAxis::Type> param_3,double param_4,
          double param_5)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  ForAnyElementType FVar17;
  uint uVar18;
  double dVar19;
  double dVar20;
  undefined1 local_res20 [8];
  uint local_108;
  undefined1 local_104 [4];
  uint local_100 [2];
  ForAnyElementType local_f8;
  uint local_f0;
  uint uStack_ec;
  ForAnyElementType local_e8;
  uint local_e0;
  uint uStack_dc;
  undefined1 local_d8 [4];
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  longlong local_c0;
  FScriptContainerElement *local_b8;
  int local_b0;
  undefined1 local_ac [8];
  int local_a4;
  int local_a0 [2];
  FScriptContainerElement *local_98;
  uint *local_90;
  uint *local_88;
  uint *local_80;
  uint *local_78;
  
  uVar7 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar6 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_d4 = 1;
  local_d0 = 2;
  if (param_3.Value == '\x02') {
    local_d0 = 2;
    local_c0 = 1;
  }
  else {
    local_c0 = 0;
    if (param_3.Value != '\x03') goto LAB_14a40aeae;
    local_d0 = 1;
    local_c0 = 2;
  }
  local_d4 = 0;
LAB_14a40aeae:
  lVar12 = local_c0;
  iVar14 = param_1->ArrayNum;
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = 0;
  uStack_dc = 0;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = 0;
  uStack_ec = 0;
  local_108 = 0;
  if (0 < iVar14) {
    do {
      uVar15 = local_108;
      uVar10 = 0;
      if ((int)local_108 < iVar14) {
        uVar10 = ~local_108 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      dVar20 = *(double *)
                ((param_1->AllocatorInstance).Data +
                lVar12 * 8 + (longlong)(int)uVar15 * 0x28 + 0x10);
      dVar19 = dVar20 - param_4;
      if (param_5 < (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) & uVar7,
                                     SUB84(dVar19,0) & uVar6)) {
        if (param_4 <= dVar20) {
          if (((local_f8.Data <= (FScriptContainerElement *)&local_108) &&
              ((FScriptContainerElement *)&local_108 < local_f8.Data + (longlong)(int)uStack_ec * 4)
              ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar8)) {
            pcVar5 = (code *)swi(3);
            uVar9 = (*pcVar5)();
            return (bool)uVar9;
          }
          if (local_f0 == uStack_ec) {
            local_f0 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_f8,(int *)&uStack_ec);
          }
          FVar17.Data = local_f8.Data;
          uVar15 = local_f0;
          local_f0 = local_f0 + 1;
        }
        else {
          if (((local_e8.Data <= (FScriptContainerElement *)&local_108) &&
              ((FScriptContainerElement *)&local_108 < local_e8.Data + (longlong)(int)uStack_dc * 4)
              ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar8)) {
            pcVar5 = (code *)swi(3);
            uVar9 = (*pcVar5)();
            return (bool)uVar9;
          }
          if (local_e0 == uStack_dc) {
            local_e0 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_e8,(int *)&uStack_dc);
          }
          FVar17.Data = local_e8.Data;
          uVar15 = local_e0;
          local_e0 = local_e0 + 1;
        }
        *(uint *)(FVar17.Data + (longlong)(int)uVar15 * 4) = local_108;
      }
      else {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&param_2->ExactlyOnAxis,&local_b0,(bool *)&local_108);
      }
      iVar14 = param_1->ArrayNum;
      local_108 = local_108 + 1;
    } while ((int)local_108 < iVar14);
  }
  uVar13 = (ulonglong)(int)local_e0;
  local_c8 = local_e0;
  local_98 = local_e8.Data + uVar13 * 4;
  FVar17.Data = local_e8.Data;
  do {
    pFVar1 = local_98;
    local_b8 = FVar17.Data;
    if (local_e0 != (uint)uVar13) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    uVar15 = local_f0;
    if (FVar17.Data == pFVar1) {
      pFVar1 = local_f8.Data + (longlong)(int)local_f0 * 4;
      FVar17.Data = local_f8.Data;
      while( true ) {
        if (local_f0 != uVar15) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_d8);
        }
        if (FVar17.Data == pFVar1) break;
        local_c4 = *(uint *)FVar17.Data;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&param_2->NotOnAxis,local_a0,(bool *)&local_c4);
        FVar17.Data = FVar17.Data + 4;
      }
      iVar14 = *(int *)&(param_2->MirroredItems).field_0x8;
      iVar2 = *(int *)&(param_2->MirroredItems).field_0x34;
      if (local_f8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data);
      }
      if (local_e8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data);
      }
      return 0 < iVar14 - iVar2;
    }
    uVar15 = *(uint *)FVar17.Data;
    uVar10 = 0;
    if ((int)uVar15 < param_1->ArrayNum) {
      uVar10 = ~uVar15 >> 0x1f;
    }
    local_cc = uVar15;
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    uVar10 = local_f0;
    pFVar3 = (param_1->AllocatorInstance).Data;
    pFVar1 = local_f8.Data + (longlong)(int)local_f0 * 4;
    FVar17.Data = local_f8.Data;
    while( true ) {
      if (local_f0 != uVar10) {
        local_104[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_104);
      }
      if (FVar17.Data == pFVar1) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&param_2->NotOnAxis,&local_a4,(bool *)&local_cc);
        goto LAB_14a40b3ed;
      }
      uVar18 = *(uint *)FVar17.Data;
      uVar11 = 0;
      if ((int)uVar18 < param_1->ArrayNum) {
        uVar11 = ~uVar18 >> 0x1f;
      }
      local_100[0] = uVar18;
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return (bool)uVar9;
      }
      pFVar4 = (param_1->AllocatorInstance).Data;
      dVar20 = (param_4 - *(double *)(pFVar3 + local_c0 * 8 + (longlong)(int)uVar15 * 0x28 + 0x10))
               - (*(double *)(pFVar4 + local_c0 * 8 + (longlong)(int)uVar18 * 0x28 + 0x10) - param_4
                 );
      if ((((double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) & uVar7,SUB84(dVar20,0) & uVar6) <=
            param_5) &&
          ((double)CONCAT44((uint)((ulonglong)
                                   (*(double *)
                                     (pFVar3 + (ulonglong)local_d4 * 8 +
                                               (longlong)(int)uVar15 * 0x28 + 0x10) -
                                   *(double *)
                                    (pFVar4 + (ulonglong)local_d4 * 8 +
                                              (longlong)(int)uVar18 * 0x28 + 0x10)) >> 0x20) & uVar7
                            ,SUB84(*(double *)
                                    (pFVar3 + (ulonglong)local_d4 * 8 +
                                              (longlong)(int)uVar15 * 0x28 + 0x10) -
                                   *(double *)
                                    (pFVar4 + (ulonglong)local_d4 * 8 +
                                              (longlong)(int)uVar18 * 0x28 + 0x10),0) & uVar6) <=
           param_5)) &&
         ((double)CONCAT44((uint)((ulonglong)
                                  (*(double *)
                                    (pFVar3 + (ulonglong)local_d0 * 8 +
                                              (longlong)(int)uVar15 * 0x28 + 0x10) -
                                  *(double *)
                                   (pFVar4 + (ulonglong)local_d0 * 8 +
                                             (longlong)(int)uVar18 * 0x28 + 0x10)) >> 0x20) & uVar7,
                           SUB84(*(double *)
                                  (pFVar3 + (ulonglong)local_d0 * 8 +
                                            (longlong)(int)uVar15 * 0x28 + 0x10) -
                                 *(double *)
                                  (pFVar4 + (ulonglong)local_d0 * 8 +
                                            (longlong)(int)uVar18 * 0x28 + 0x10),0) & uVar6) <=
          param_5)) break;
      FVar17.Data = FVar17.Data + 4;
    }
    local_90 = &local_cc;
    local_88 = local_100;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,int_const_&>_>
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               param_2,(TPairInitializer<int_const_&,int_const_&> *)local_ac,(bool *)&local_90);
    local_80 = local_100;
    local_78 = &local_cc;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_const_&,int_const_&>_>
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               param_2,(TPairInitializer<int_const_&,int_const_&> *)(local_ac + 4),(bool *)&local_80
              );
    if (((local_f8.Data <= (FScriptContainerElement *)local_100) &&
        ((FScriptContainerElement *)local_100 < local_f8.Data + (longlong)(int)uStack_ec * 4)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    FVar17.Data = local_f8.Data;
    lVar12 = (longlong)(int)local_f0;
    if (local_f0 == 0) {
LAB_14a40b3ed:
      uVar13 = (ulonglong)local_c8;
      FVar17.Data = local_b8 + 4;
    }
    else {
      uVar18 = 0;
      lVar16 = 0;
      bVar8 = *(uint *)local_f8.Data != local_100[0];
      uVar15 = local_100[0];
      uVar10 = 0;
      do {
        uVar11 = uVar10;
        do {
          lVar16 = lVar16 + 1;
          uVar11 = uVar11 + 1;
          if (lVar12 <= lVar16) break;
        } while (bVar8 == (*(uint *)(FVar17.Data + lVar16 * 4) != uVar15));
        if (bVar8 != false) {
          if (uVar18 != uVar10) {
            memmove(FVar17.Data + (longlong)(int)uVar18 * 4,FVar17.Data + (longlong)(int)uVar10 * 4,
                    (longlong)(int)(uVar11 - uVar10) << 2);
            uVar15 = local_100[0];
          }
          uVar18 = uVar18 + (uVar11 - uVar10);
        }
        bVar8 = (bool)(bVar8 ^ 1);
        uVar10 = uVar11;
      } while (lVar16 < lVar12);
      FVar17.Data = local_b8 + 4;
      uVar13 = (ulonglong)local_c8;
      local_f0 = uVar18;
    }
  } while( true );
}

