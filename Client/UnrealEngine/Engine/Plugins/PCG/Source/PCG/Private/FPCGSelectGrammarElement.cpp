// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// operator() @ 1499ccab0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FPCGSelectGrammarElement::ExecuteInternal'::__l62::<lambda_2>::operator()
          (void *this,TArrayView<FName,int> *param_1,int param_2,int param_3)

{
  FName *pFVar1;
  FName FVar2;
  longlong *plVar3;
  IPCGAttributeAccessor *this_00;
  IPCGAttributeAccessorKeys *pIVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *pTVar9;
  ForElementType<FPCGSelectGrammarCriterion> FVar10;
  ForElementType<FString> FVar11;
  longlong *plVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStackY_10d8 [32];
  undefined4 uStack_107c;
  TArrayView<FString_const_,int> local_1078;
  TArray<FString,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> local_1068;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_10d8;
  uVar14 = 0;
  local_1068.AllocatorInstance.SecondaryData = (ForElementType<FString>)0x0;
  local_1068.ArrayNum = 0;
  local_1068.ArrayMax = 0x100;
  TArray<FString,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::SetNum
            (&local_1068,param_3,Default);
  uVar15 = uVar14;
  uVar16 = uVar14;
  if (0 < param_3) {
    do {
      uVar13 = (uint)uVar14;
      uVar7 = 0;
      if ((int)uVar13 < param_1->ArrayNum) {
        uVar7 = ~uVar13 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar2 = param_1->DataPtr[uVar16];
      plVar3 = *(longlong **)((longlong)this + 0x10);
      pFVar1 = param_1->DataPtr + uVar16;
      uVar7 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
      if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
        plVar12 = plVar3 + 7;
        if ((longlong *)plVar3[8] != (longlong *)0x0) {
          plVar12 = (longlong *)plVar3[8];
        }
        iVar8 = *(int *)((longlong)plVar12 +
                        (ulonglong)((int)plVar3[9] - 1U & FVar2.Number + uVar7) * 4);
        if (iVar8 != -1) {
          do {
            if (*(FName *)((longlong)iVar8 * 800 + *plVar3) == FVar2) {
              pTVar9 = TMapBase<FName,TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
                       ::FindChecked(*(TMapBase<FName,TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
                                       **)((longlong)this + 0x10),*pFVar1);
              if (pTVar9->ArrayNum != 0) {
                FVar10 = (ForElementType<FPCGSelectGrammarCriterion>)
                         TMapBase<FName,TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
                         ::FindChecked(*(TMapBase<FName,TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
                                         **)((longlong)this + 0x10),*pFVar1);
                if ((*(int *)((longlong)FVar10 + 0x308) < 1) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                if (*(ForElementType<FPCGSelectGrammarCriterion> *)((longlong)FVar10 + 0x300) !=
                    (ForElementType<FPCGSelectGrammarCriterion>)0x0) {
                  FVar10 = *(ForElementType<FPCGSelectGrammarCriterion> *)((longlong)FVar10 + 0x300)
                  ;
                }
                uVar7 = 0;
                if ((int)uVar13 < local_1068.ArrayNum) {
                  uVar7 = ~uVar13 >> 0x1f;
                }
                if ((uVar7 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                FVar11 = (ForElementType<FString>)&local_1068;
                if (local_1068.AllocatorInstance.SecondaryData != (ForElementType<FString>)0x0) {
                  FVar11 = local_1068.AllocatorInstance.SecondaryData;
                }
                uVar7 = *(int *)((longlong)FVar10 + 0x28) - 1;
                if (*(int *)((longlong)FVar10 + 0x28) == 0) {
                  uVar7 = 0;
                }
                ::FString::AssignRange
                          ((FString *)((longlong)FVar11 + uVar15),
                           *(wchar_t **)((longlong)FVar10 + 0x20),uVar7);
              }
              break;
            }
            iVar8 = *(int *)((longlong)iVar8 * 800 + 0x318 + *plVar3);
          } while (iVar8 != -1);
        }
      }
      uVar14 = (ulonglong)(uVar13 + 1);
      uVar16 = uVar16 + 1;
      uVar15 = uVar15 + 0x10;
    } while ((longlong)uVar16 < (longlong)param_3);
  }
  iVar8 = local_1068.ArrayNum;
  this_00 = (IPCGAttributeAccessor *)**(undefined8 **)this;
  pIVar4 = (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 8);
  FVar11 = (ForElementType<FString>)&local_1068;
  if (local_1068.AllocatorInstance.SecondaryData != (ForElementType<FString>)0x0) {
    FVar11 = local_1068.AllocatorInstance.SecondaryData;
  }
  if ((local_1068.ArrayNum < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_1078._12_4_ = uStack_107c;
  local_1078.ArrayNum = iVar8;
  local_1078.DataPtr = (FString *)FVar11;
  IPCGAttributeAccessor::SetRange<FString>(this_00,&local_1078,param_2,pIVar4,StrictType);
  FVar11 = (ForElementType<FString>)&local_1068;
  if (local_1068.AllocatorInstance.SecondaryData != (ForElementType<FString>)0x0) {
    FVar11 = local_1068.AllocatorInstance.SecondaryData;
  }
  DestructItems<FString,int>((FString *)FVar11,local_1068.ArrayNum);
  if (local_1068.AllocatorInstance.SecondaryData != (ForElementType<FString>)0x0) {
    FMemory::Free((void *)local_1068.AllocatorInstance.SecondaryData);
  }
  return;
}

// operator() @ 1499cce50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FPCGSelectGrammarElement::ExecuteInternal'::__l62::<lambda_3>::operator()
          (void *this,TArrayView<FName,int> *param_1,TArrayView<double,int> *param_2,int param_3,
          int param_4)

{
  int *piVar1;
  ushort uVar2;
  uint uVar3;
  longlong *plVar4;
  _func___cdecl_bool_double_ptr_double_ptr *p_Var5;
  _func___cdecl_bool_double_ptr_double_ptr_double_ptr *p_Var6;
  FScriptContainerElement *pFVar7;
  IPCGAttributeAccessor *this_00;
  IPCGAttributeAccessorKeys *pIVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *pTVar14;
  ForElementType<FPCGSelectGrammarCriterion> FVar15;
  uint *puVar16;
  FString *pFVar17;
  ForElementType<FString> FVar18;
  longlong *plVar19;
  int iVar20;
  longlong lVar21;
  FName _Src;
  FName *pFVar22;
  FName *pFVar23;
  FString *pFVar24;
  ForElementType<FPCGSelectGrammarCriterion> FVar25;
  uint uVar26;
  undefined1 auStackY_1128 [32];
  undefined1 local_10e7 [3];
  uint local_10e4;
  longlong local_10e0;
  longlong local_10d8;
  undefined8 *local_10d0;
  longlong local_10c8;
  TArrayView<double,int> *local_10c0;
  int local_10b8;
  TArrayView<FName,int> *local_10b0;
  FName *local_10a8;
  ForElementType<FString> local_1098;
  int iStack_1090;
  undefined4 uStack_108c;
  FString local_1088;
  TArrayView<FString_const_,int> local_1078;
  TArray<FString,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> local_1068;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1128;
  local_1068.AllocatorInstance.SecondaryData = (ForElementType<FString>)0x0;
  local_1068.ArrayNum = 0;
  local_1068.ArrayMax = 0x100;
  local_10d0 = this;
  local_10c0 = param_2;
  local_10b8 = param_3;
  local_10b0 = param_1;
  TArray<FString,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_>::SetNum
            (&local_1068,param_4,Default);
  local_10e4 = 0;
  if (param_4 < 1) {
LAB_1499cd4fa:
    iVar20 = local_1068.ArrayNum;
    this_00 = (IPCGAttributeAccessor *)**(undefined8 **)this;
    pIVar8 = (IPCGAttributeAccessorKeys *)**(undefined8 **)((longlong)this + 8);
    local_1098 = (ForElementType<FString>)&local_1068;
    if (local_1068.AllocatorInstance.SecondaryData != (ForElementType<FString>)0x0) {
      local_1098 = local_1068.AllocatorInstance.SecondaryData;
    }
    if ((local_1068.ArrayNum < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iStack_1090 = iVar20;
    local_1078._12_4_ = uStack_108c;
    local_1078.ArrayNum = iVar20;
    local_1078.DataPtr = (FString *)local_1098;
    IPCGAttributeAccessor::SetRange<FString>(this_00,&local_1078,param_3,pIVar8,StrictType);
    FVar18 = (ForElementType<FString>)&local_1068;
    if (local_1068.AllocatorInstance.SecondaryData != (ForElementType<FString>)0x0) {
      FVar18 = local_1068.AllocatorInstance.SecondaryData;
    }
    DestructItems<FString,int>((FString *)FVar18,local_1068.ArrayNum);
    if (local_1068.AllocatorInstance.SecondaryData != (ForElementType<FString>)0x0) {
      FMemory::Free((void *)local_1068.AllocatorInstance.SecondaryData);
    }
    return;
  }
  local_10d8 = 0;
  local_10e0 = 0;
  local_10c8 = 0;
LAB_1499ccf22:
  lVar21 = local_10c8;
  bVar11 = false;
  uVar26 = ~local_10e4 >> 0x1f;
  uVar12 = 0;
  if ((int)local_10e4 < param_1->ArrayNum) {
    uVar12 = uVar26;
  }
  if ((uVar12 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  plVar4 = *(longlong **)((longlong)this + 0x10);
  local_10a8 = (FName *)((longlong)&(param_1->DataPtr->ComparisonIndex).Value + lVar21);
  lVar21 = *(longlong *)((longlong)&(param_1->DataPtr->ComparisonIndex).Value + lVar21);
  uVar12 = ::GetTypeHash((FNameEntryId)(uint)lVar21);
  pFVar23 = local_10a8;
  if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
    plVar19 = plVar4 + 7;
    if ((longlong *)plVar4[8] != (longlong *)0x0) {
      plVar19 = (longlong *)plVar4[8];
    }
    iVar20 = *(int *)((longlong)plVar19 +
                     (ulonglong)((int)plVar4[9] - 1U & (int)((ulonglong)lVar21 >> 0x20) + uVar12) *
                     4);
    if (iVar20 != -1) {
      do {
        if (*(longlong *)((longlong)iVar20 * 800 + *plVar4) == lVar21) {
          pTVar14 = TMapBase<FName,TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
                    ::FindChecked(*(TMapBase<FName,TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
                                    **)((longlong)this + 0x10),*local_10a8);
          if (pTVar14->ArrayNum != 0) {
            FVar15 = (ForElementType<FPCGSelectGrammarCriterion>)
                     TMapBase<FName,TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
                     ::FindChecked(*(TMapBase<FName,TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
                                     **)((longlong)this + 0x10),*pFVar23);
            piVar1 = (int *)((longlong)FVar15 + 0x308);
            iVar20 = *piVar1;
            if (*(ForElementType<FPCGSelectGrammarCriterion> *)((longlong)FVar15 + 0x300) !=
                (ForElementType<FPCGSelectGrammarCriterion>)0x0) {
              FVar15 = *(ForElementType<FPCGSelectGrammarCriterion> *)((longlong)FVar15 + 0x300);
            }
            pFVar22 = (FName *)((longlong)FVar15 + 0x10);
            FVar25 = (ForElementType<FPCGSelectGrammarCriterion>)
                     ((longlong)iVar20 * 0x30 + (longlong)FVar15);
            goto LAB_1499cd054;
          }
          break;
        }
        iVar20 = *(int *)((longlong)iVar20 * 800 + 0x318 + *plVar4);
      } while (iVar20 != -1);
    }
  }
  goto LAB_1499cd4ae;
LAB_1499cd054:
  if (*piVar1 != iVar20) {
    local_10e7[0] = 0;
    `TCheckedPointerIterator<FPCGSelectGrammarCriterion_const_,int,0>::operator!='::__l2::<lambda_1>
    ::operator()(local_10e7);
  }
  uVar12 = local_10e4;
  if (FVar15 == FVar25) goto LAB_1499cd399;
  if ((*pFVar23 != *(FName *)FVar15) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Key == Criterion.Key",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Grammar\\PCGSelectGrammar.cpp"
                          ,0x14b,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar2 = (ushort)pFVar22[-1].ComparisonIndex.Value;
  if (uVar2 < 0x41) {
    if ((5 < (ushort)(uVar2 - 0x21)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("CompIndex < std::size(PCGSelectGrammar::BinaryCompare<double>)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Grammar\\PCGSelectGrammar.cpp"
                            ,0x153,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    p_Var5 = PCGSelectGrammar::BinaryCompare<double>[(ushort)(uVar2 - 0x21)];
    uVar12 = 0;
    if ((int)local_10e4 < local_10c0->ArrayNum) {
      uVar12 = uVar26;
    }
    if ((uVar12 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    bVar10 = (*p_Var5)((double *)(local_10c8 + (longlong)local_10c0->DataPtr),(double *)pFVar22);
    uVar12 = local_10e4;
    if (bVar10) goto code_r0x0001499cd155;
  }
  else {
    if ((1 < (ushort)(uVar2 - 0x41)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("CompIndex < std::size(PCGSelectGrammar::TernaryCompare<double>)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Grammar\\PCGSelectGrammar.cpp"
                            ,0x15e,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    p_Var6 = PCGSelectGrammar::TernaryCompare<double>[(ushort)(uVar2 - 0x41)];
    uVar12 = 0;
    if ((int)local_10e4 < local_10c0->ArrayNum) {
      uVar12 = uVar26;
    }
    if ((uVar12 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    bVar10 = (*p_Var6)((double *)(local_10c8 + (longlong)local_10c0->DataPtr),(double *)pFVar22,
                       (double *)(pFVar22 + 1));
    uVar12 = local_10e4;
    if (bVar10) {
      uVar13 = 0;
      if ((int)local_10e4 < local_1068.ArrayNum) {
        uVar13 = uVar26;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar18 = (ForElementType<FString>)&local_1068;
      if (local_1068.AllocatorInstance.SecondaryData != (ForElementType<FString>)0x0) {
        FVar18 = local_1068.AllocatorInstance.SecondaryData;
      }
      pFVar23 = (FName *)((longlong)FVar18 + local_10e0);
      bVar11 = true;
      if (pFVar23 == (FName *)((longlong)FVar15 + 0x20)) goto LAB_1499cd399;
      uVar3 = (((FName *)((longlong)FVar15 + 0x28))->ComparisonIndex).Value;
      lVar21 = (longlong)(int)uVar3;
      puVar16 = &pFVar23[1].Number;
      _Src = *(FName *)((longlong)FVar15 + 0x20);
      uVar13 = *puVar16;
      pFVar23[1].ComparisonIndex.Value = uVar3;
      if ((uVar3 != 0) || (uVar13 != 0)) goto LAB_1499cd2b2;
      *puVar16 = 0;
      bVar11 = true;
      goto LAB_1499cd399;
    }
  }
  FVar15 = (ForElementType<FPCGSelectGrammarCriterion>)((longlong)FVar15 + 0x30);
  pFVar22 = pFVar22 + 6;
  pFVar23 = local_10a8;
  goto LAB_1499cd054;
code_r0x0001499cd155:
  uVar13 = 0;
  if ((int)local_10e4 < local_1068.ArrayNum) {
    uVar13 = uVar26;
  }
  if ((uVar13 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FVar18 = (ForElementType<FString>)&local_1068;
  if (local_1068.AllocatorInstance.SecondaryData != (ForElementType<FString>)0x0) {
    FVar18 = local_1068.AllocatorInstance.SecondaryData;
  }
  pFVar23 = (FName *)((longlong)FVar18 + local_10e0);
  bVar11 = true;
  if (pFVar23 != (FName *)((longlong)FVar15 + 0x20)) {
    uVar3 = (((FName *)((longlong)FVar15 + 0x28))->ComparisonIndex).Value;
    lVar21 = (longlong)(int)uVar3;
    puVar16 = &pFVar23[1].Number;
    _Src = *(FName *)((longlong)FVar15 + 0x20);
    uVar13 = *puVar16;
    pFVar23[1].ComparisonIndex.Value = uVar3;
    if ((uVar3 == 0) && (uVar13 == 0)) {
      *puVar16 = 0;
      bVar11 = true;
    }
    else {
LAB_1499cd2b2:
      iVar20 = (int)lVar21;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar20,uVar13,(ForAnyElementType *)pFVar23,iVar20,(int *)puVar16);
      bVar11 = true;
      if (iVar20 != 0) {
        memcpy((void *)*pFVar23,(void *)_Src,lVar21 * 2);
      }
    }
  }
LAB_1499cd399:
  param_1 = local_10b0;
  lVar21 = local_10e0;
  this = local_10d0;
  if ((*(char *)(local_10d0 + 3) != '\0') && (!bVar11)) {
    uVar13 = 0;
    if ((int)uVar12 < local_10b0->ArrayNum) {
      uVar13 = uVar26;
    }
    if ((uVar13 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar17 = ::FName::ToString((FName *)((longlong)&(param_1->DataPtr->ComparisonIndex).Value +
                                         local_10c8),&local_1088);
    uVar13 = 0;
    if ((int)uVar12 < local_1068.ArrayNum) {
      uVar13 = uVar26;
    }
    if ((uVar13 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    FVar18 = (ForElementType<FString>)&local_1068;
    if (local_1068.AllocatorInstance.SecondaryData != (ForElementType<FString>)0x0) {
      FVar18 = local_1068.AllocatorInstance.SecondaryData;
    }
    pFVar24 = (FString *)((longlong)FVar18 + lVar21);
    if (pFVar24 != pFVar17) {
      pFVar7 = (pFVar24->Data).AllocatorInstance.Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      (pFVar24->Data).AllocatorInstance.Data = (pFVar17->Data).AllocatorInstance.Data;
      (pFVar17->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar24->Data).ArrayNum = (pFVar17->Data).ArrayNum;
      (pFVar24->Data).ArrayMax = (pFVar17->Data).ArrayMax;
      (pFVar17->Data).ArrayNum = 0;
      (pFVar17->Data).ArrayMax = 0;
    }
    this = local_10d0;
    if (local_1088.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1088.Data.AllocatorInstance.Data);
      this = local_10d0;
    }
  }
LAB_1499cd4ae:
  local_10e4 = local_10e4 + 1;
  local_10d8 = local_10d8 + 1;
  local_10e0 = local_10e0 + 0x10;
  local_10c8 = local_10c8 + 8;
  param_3 = local_10b8;
  if (param_4 <= (int)local_10e4) goto LAB_1499cd4fa;
  goto LAB_1499ccf22;
}

// ExecuteInternal @ 1499eb4f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

bool __thiscall
FPCGSelectGrammarElement::ExecuteInternal(FPCGSelectGrammarElement *this,FPCGContext *param_1)

{
  FPCGSelectGrammarCriterion *pFVar1;
  int *piVar2;
  undefined1 auVar3 [16];
  EPCGSelectGrammarComparator EVar4;
  UPCGNode *this_00;
  ITextData *pIVar5;
  code *pcVar6;
  uint uVar7;
  FPCGMetadataDomainID FVar8;
  undefined8 uVar9;
  FObjectPtr_u_0 FVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 uVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  UClass *pUVar17;
  UPCGSettings *pUVar18;
  TObjectPtr<UPCGSettings>_u_0 TVar19;
  UPCGParamData *pUVar20;
  FPCGSelectGrammarCriteriaAttributeNames *pFVar21;
  FName *pFVar22;
  TArray<FPCGSelectGrammarCriterion,TSizedDefaultAllocator<32>_> *pTVar23;
  FText *pFVar24;
  FText *pFVar25;
  FText *pFVar26;
  FTextFormat *pFVar27;
  ForElementType<FPCGSelectGrammarCriterion> FVar28;
  longlong lVar29;
  UPCGData *pUVar30;
  FPCGTaggedData *pFVar31;
  ForAnyElementType FVar32;
  FPCGMetadataDomain *this_01;
  UPCGMetadata *pUVar33;
  FString *pFVar34;
  byte bVar35;
  FPCGSelectGrammarCriterion *pFVar36;
  ulonglong uVar37;
  ForElementType<FSetElementId> FVar38;
  FName FVar39;
  wchar_t *pwVar40;
  int iVar41;
  int iVar42;
  FScriptContainerElement *pFVar43;
  FPCGDataCollection *pFVar44;
  wchar_t *pwVar45;
  uint *puVar46;
  undefined4 uVar47;
  FPCGContext *pFVar48;
  FObjectPtr_u_0 *pFVar49;
  uint uVar50;
  FPCGSelectGrammarCriterion *pFVar51;
  FName FVar52;
  FObjectPtr_u_0 *pFVar53;
  int iVar54;
  TObjectPtr<UPCGMetadata>_u_0 *pTVar55;
  bool bVar56;
  undefined1 auStackY_1238 [32];
  <lambda_1> local_11f7;
  undefined1 local_11f6;
  undefined1 local_11f5;
  undefined1 local_11f4;
  undefined1 local_11f3;
  undefined1 local_11f2 [2];
  uint local_11f0;
  TArray<FPCGSelectGrammarCriterion,TSizedDefaultAllocator<32>_> local_11e8;
  FPCGContext *local_11d8;
  FObjectPtr_u_0 *local_11d0;
  TObjectPtr<UPCGSettings>_u_0 local_11c8;
  FPCGDataCollection *local_11c0;
  undefined1 local_11b8 [16];
  undefined1 local_11a8 [16];
  FObjectPtr_u_0 *local_1198;
  uint local_1190;
  TObjectPtr<UPCGSettings>_u_0 local_1188;
  TObjectPtr<UPCGMetadata>_u_0 local_1180;
  TObjectPtr<UPCGMetadata>_u_0 local_1178;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_1170;
  FObjectPtr_u_0 local_1160;
  undefined1 local_1158 [32];
  uint local_1138;
  ForAnyElementType local_1130;
  uint local_1128;
  int local_1124;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_1120;
  FPCGSelectGrammarCriterion *local_1110;
  TObjectPtr<UPCGMetadata>_u_0 local_1108;
  FString local_1100;
  FPCGAttributePropertySelector local_10e8;
  undefined1 local_10a8 [8];
  undefined1 local_10a0 [8];
  undefined1 local_1098 [12];
  FName local_108c;
  IPCGAttributeAccessor *local_1080;
  TArray<FPCGSelectGrammarCriterion,TSizedDefaultAllocator<32>_> local_1078;
  FName local_1068;
  FName local_1060;
  TPairInitializer<FName_&&,TTuple<FName,bool>_&&> local_1058;
  undefined8 local_1048;
  undefined1 local_1040;
  FName local_103c;
  undefined1 local_1034;
  FName local_1030;
  undefined1 local_1028;
  int local_1024;
  int local_1020;
  undefined8 local_101c;
  undefined1 local_1014;
  FName local_1010;
  TArrayView<FName,int> local_1008;
  IPCGAttributeAccessor **local_ff8;
  int iStack_ff0;
  undefined4 uStack_fec;
  longlong *local_fe8;
  int iStack_fe0;
  uint uStack_fdc;
  TBitArray<FDefaultBitArrayAllocator> *local_fd8;
  undefined4 uStack_fd0;
  uint uStack_fcc;
  int local_fc8;
  undefined4 uStack_fc4;
  int iStack_fc0;
  undefined4 uStack_fbc;
  longlong *local_fb8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_fb0;
  undefined8 uStack_f90;
  FPCGAttributePropertySelector local_f88;
  undefined8 *local_f48;
  FName *local_f40;
  FPCGSelectGrammarCriterion *local_f38;
  FPCGSelectGrammarCriterion *local_f30;
  FTextFormat local_f28;
  FText local_f18;
  IPCGAttributeAccessor *local_f08;
  IPCGAttributeAccessor *pIStack_f00;
  IPCGAttributeAccessorKeys *local_ef8;
  TObjectPtr<UPCGMetadata>_u_0 TStack_ef0;
  FScriptContainerElement *local_ee8;
  uint uStack_ee0;
  undefined4 uStack_edc;
  FName *local_ed8;
  FName *local_ed0;
  FName *local_ec8;
  undefined8 *local_ec0;
  FName *local_eb8;
  undefined1 *local_eb0;
  FName *local_ea8;
  undefined8 *local_ea0;
  FName local_e98;
  FPCGMetadataDomainID local_e90;
  FPCGAttributePropertySelector local_e78;
  <lambda_3> local_e38;
  undefined8 *local_e18;
  undefined1 *local_e10;
  undefined1 *local_e08;
  undefined1 local_e00;
  FFormatArgumentValue local_df8;
  FName local_dd8;
  FText local_dd0;
  FText local_dc0;
  FText local_db0;
  TArrayView<FName,int> local_d98;
  TArrayView<IPCGAttributeAccessor_const_*_const,int> local_d88;
  TArrayView<IPCGAttributeAccessorKeys_const_*_const,int> local_d78;
  FName local_d60;
  FName local_d58;
  FName local_d50;
  FName local_d48;
  FPCGSelectGrammarCriteriaAttributeNames local_d40;
  FPCGSelectGrammarCriteriaAttributeNames local_d18;
  undefined1 local_cf0 [16];
  FName local_ce0;
  FName FStack_cd8;
  FName local_cd0;
  FText local_cc8;
  FText local_cb8;
  FTextFormat local_ca8;
  FText local_c98;
  FTextFormat local_c88;
  FString local_c78;
  FString local_c68;
  FString local_c58;
  undefined4 local_c3c;
  undefined4 local_c1c;
  undefined1 local_c18 [32];
  uint *local_bf8;
  uint local_bf0;
  undefined4 local_bec;
  undefined4 local_be8;
  int local_be4;
  undefined1 local_be0 [8];
  ForElementType<FSetElementId> local_bd8;
  int local_bd0;
  TSet<TTuple<FName,TTuple<FName,bool>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<FName,bool>,0>,FDefaultSetAllocator>
  local_bc8;
  FPCGSelectGrammarCriterion local_b78 [16];
  FPCGSelectGrammarCriterion *local_878;
  int local_870;
  undefined4 local_86c;
  ForElementType<FName> local_868;
  int local_60 [2];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1238;
  local_1190 = 0;
  bVar56 = -1 < CpuChannel->Enabled;
  local_11d8 = param_1;
  if (bVar56) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId151,"FPCGSelectGrammarElement::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Grammar\\PCGSelectGrammar.cpp"
               ,0x97);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId151);
  }
  if ((param_1->SettingsWithOverride).field0_0x0.DebugPtr == (UPCGSettings *)0x0) {
    this_00 = param_1->Node;
    if ((this_00 == (UPCGNode *)0x0) ||
       (pUVar18 = UPCGNode::GetSettings(this_00), pUVar18 == (UPCGSettings *)0x0)) {
      pFVar31 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
                FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSelectGrammarSettings>_::__l2::<lambda_1>_>
                          (&(param_1->InputData).TaggedData,local_11f7);
      if (pFVar31 != (FPCGTaggedData *)0x0) {
        TVar19.DebugPtr = (UPCGSettings *)Cast<UPCGSelectGrammarSettings_const_>(&pFVar31->Data);
        local_11c8.DebugPtr = TVar19.DebugPtr;
        goto LAB_1499eb651;
      }
    }
    else {
      pUVar18 = UPCGNode::GetSettings(this_00);
      TVar19.DebugPtr = FPCGDataCollection::GetSettings(&param_1->InputData,pUVar18);
      if ((UPCGSelectGrammarSettings *)TVar19.DebugPtr != (UPCGSelectGrammarSettings *)0x0) {
        local_11c8.DebugPtr = TVar19.DebugPtr;
        pUVar17 = UPCGSelectGrammarSettings::StaticClass();
        iVar41 = (int)pUVar17->_padding_;
        if ((iVar41 <= *(int *)((TVar19.DebugPtr)->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar19.DebugPtr)->_padding_ + 0x30) + (longlong)iVar41 * 8) ==
            &pUVar17->_padding_)) goto LAB_1499eb651;
      }
    }
    local_11c8.DebugPtr = (UPCGSettings *)0x0;
    TVar19.DebugPtr = (UPCGSettings *)0x0;
  }
  else {
    pUVar17 = UPCGSelectGrammarSettings::StaticClass();
    bVar12 = FObjectPtr::IsA((FObjectPtr *)&param_1->SettingsWithOverride,pUVar17);
    if (bVar12) {
      TVar19 = (TObjectPtr<UPCGSettings>_u_0)(param_1->SettingsWithOverride).field0_0x0.DebugPtr;
      local_11c8 = TVar19;
    }
    else {
      local_11c8.DebugPtr = (UPCGSettings *)0x0;
      TVar19.DebugPtr = (UPCGSettings *)0x0;
    }
  }
LAB_1499eb651:
  pFVar44 = &param_1->InputData;
  if (((UPCGSelectGrammarSettings *)TVar19.DebugPtr == (UPCGSelectGrammarSettings *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Grammar\\PCGSelectGrammar.cpp"
                          ,0x9a,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    uVar13 = (*pcVar6)();
    return (bool)uVar13;
  }
  FPCGDataCollection::GetInputsByPin
            (pFVar44,(TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(local_1158 + 0x18),
             &PCGPinConstants::DefaultInputLabel);
  FPCGDataCollection::GetInputsByPin
            (pFVar44,&local_1120,&PCGSelectGrammar::Constants::CriteriaDataPinLabel);
  if (local_1138 == 0) goto LAB_1499ecd3c;
  if (*(char *)(TVar19.DebugPtr[1].CacheLock.CriticalSection.Opaque3 + 1) == '\0') {
    iVar41 = *(int *)&TVar19.DebugPtr[1].CachedOverridableParams.AllocatorInstance.Data;
    bVar14 = false;
    bVar12 = true;
    pFVar51 = TVar19.DebugPtr[1].CacheLock.CriticalSection.Opaque3[2];
    local_1188.DebugPtr = (UPCGSettings *)0x0;
    local_1180._0_4_ = iVar41;
    if (iVar41 == 0) {
      local_1180._4_4_ = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar41,0,(ForAnyElementType *)&local_1188.ObjectPtr,iVar41,
                 (int *)((longlong)&local_1180.ObjectPtr.field0_0x0 + 4));
      ConstructItems<FPCGSelectGrammarCriterion,FPCGSelectGrammarCriterion,int>
                (local_1188.DebugPtr,pFVar51,iVar41);
    }
    pTVar55 = &local_1180;
    TVar19 = local_1188;
    uVar47 = local_1108._0_4_;
  }
  else {
    bVar14 = true;
    bVar12 = false;
    local_1110 = (FPCGSelectGrammarCriterion *)0x0;
    local_1108.DebugPtr = (UPCGMetadata *)0x0;
    pTVar55 = &local_1108;
    TVar19.DebugPtr = (UPCGSettings *)0x0;
    uVar47 = 0;
  }
  pFVar51 = local_1110;
  iVar41 = *(int *)pTVar55;
  local_11e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_11e8.ArrayNum = iVar41;
  if (iVar41 == 0) {
    local_11e8.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar41,0,&local_11e8.AllocatorInstance,iVar41,&local_11e8.ArrayMax);
    ConstructItems<FPCGSelectGrammarCriterion,FPCGSelectGrammarCriterion,int>
              (local_11e8.AllocatorInstance.Data,(FPCGSelectGrammarCriterion *)TVar19.DebugPtr,
               iVar41);
  }
  iVar41 = 0;
  if ((bVar12) &&
     (DestructItems<FPCGSelectGrammarCriterion,int>
                ((FPCGSelectGrammarCriterion *)local_1188.DebugPtr,local_1180._0_4_),
     (UPCGSelectGrammarSettings *)local_1188.DebugPtr != (UPCGSelectGrammarSettings *)0x0)) {
    FMemory::Free(local_1188.DebugPtr);
  }
  if ((bVar14) &&
     (DestructItems<FPCGSelectGrammarCriterion,int>(pFVar51,uVar47),
     pFVar51 != (FPCGSelectGrammarCriterion *)0x0)) {
    FMemory::Free(pFVar51);
  }
  TVar19 = local_11c8;
  pFVar48 = local_11d8;
  if ((*(char *)(local_11c8.DebugPtr[1].CacheLock.CriticalSection.Opaque3 + 1) == '\0') ||
     (local_1120.ArrayNum == 0)) {
LAB_1499ebc79:
    iVar16 = local_11e8.ArrayNum;
    if (local_11e8.ArrayNum == 0) {
      FPCGDataCollection::operator=(&pFVar48->OutputData,pFVar44);
    }
    else {
      pFVar51 = (FPCGSelectGrammarCriterion *)
                (local_11e8.AllocatorInstance.Data + (longlong)local_11e8.ArrayNum * 0x30);
      FVar32.Data = local_11e8.AllocatorInstance.Data;
LAB_1499ebcc2:
      if (local_11e8.ArrayNum != iVar16) {
        local_11f6 = 0;
        `TCheckedPointerIterator<FPCGSelectGrammarCriterion,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_11f6);
      }
      iVar54 = local_11e8.ArrayNum;
      if ((FPCGSelectGrammarCriterion *)FVar32.Data == pFVar51) {
        bVar12 = iVar41 == local_11e8.ArrayNum;
        local_bec = 0x80;
        local_be8 = 0xffffffff;
        iVar41 = 0;
        pFVar43 = local_11e8.AllocatorInstance.Data + 0x2c;
        pFVar51 = (FPCGSelectGrammarCriterion *)
                  (local_11e8.AllocatorInstance.Data + (longlong)local_11e8.ArrayNum * 0x30);
        local_c18._0_8_ = 0;
        local_c18._8_8_ = 0;
        local_bf8 = (uint *)0x0;
        local_bf0 = 0;
        local_be4 = 0;
        local_bd8 = (ForElementType<FSetElementId>)0x0;
        local_bd0 = 0;
        while( true ) {
          if (local_11e8.ArrayNum != iVar54) {
            local_11f5 = 0;
            `TCheckedPointerIterator<FPCGSelectGrammarCriterion,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&local_11f5);
          }
          uVar15 = local_bf0;
          pFVar1 = (FPCGSelectGrammarCriterion *)(pFVar43 + -0x2c);
          if (pFVar1 == pFVar51) break;
          FVar39 = pFVar1->Key;
          uVar15 = ::GetTypeHash(FVar39.ComparisonIndex.Value);
          if (local_c18._8_4_ != local_be4) {
            FVar38 = (ForElementType<FSetElementId>)local_be0;
            if (local_bd8 != (ForElementType<FSetElementId>)0x0) {
              FVar38 = local_bd8;
            }
            for (iVar16 = *(int *)((longlong)FVar38 +
                                  (ulonglong)(local_bd0 - 1U & FVar39.Number + uVar15) * 4);
                iVar16 != -1; iVar16 = *(int *)((longlong)iVar16 * 800 + 0x318 + local_c18._0_8_)) {
              if (*(FName *)((longlong)iVar16 * 800 + local_c18._0_8_) == FVar39) {
                if (iVar16 != -1) goto LAB_1499ebf41;
                break;
              }
            }
          }
          local_f30 = local_b78;
          local_878 = (FPCGSelectGrammarCriterion *)0x0;
          local_870 = 0;
          local_86c = 0x10;
          local_f38 = pFVar1;
          TSet<TTuple<FName,TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<FName_&,TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_&&>_>
                    ((TSet<TTuple<FName,TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
                      *)local_c18,
                     (TPairInitializer<FName_&,TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_&&>
                      *)local_1098,(bool *)&local_f38);
          pFVar36 = local_b78;
          if (local_878 != (FPCGSelectGrammarCriterion *)0x0) {
            pFVar36 = local_878;
          }
          DestructItems<FPCGSelectGrammarCriterion,int>(pFVar36,local_870);
          if (local_878 != (FPCGSelectGrammarCriterion *)0x0) {
            FMemory::Free(local_878);
          }
LAB_1499ebf41:
          FVar28 = (ForElementType<FPCGSelectGrammarCriterion>)
                   TMapBase<FName,TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
                   ::FindChecked((TMapBase<FName,TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
                                  *)local_c18,pFVar1->Key);
          iVar16 = *(int *)((longlong)FVar28 + 0x308);
          if (iVar16 == *(int *)((longlong)FVar28 + 0x30c)) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGSelectGrammarCriterion>_>
                               (0x830,(ForElementType<FPCGSelectGrammarCriterion> *)FVar28,
                                (int *)((longlong)FVar28 + 0x30c));
          }
          lVar29 = (longlong)iVar16;
          *(int *)((longlong)FVar28 + 0x308) = iVar16 + 1;
          if (*(ForElementType<FPCGSelectGrammarCriterion> *)((longlong)FVar28 + 0x300) !=
              (ForElementType<FPCGSelectGrammarCriterion>)0x0) {
            FVar28 = *(ForElementType<FPCGSelectGrammarCriterion> *)((longlong)FVar28 + 0x300);
          }
          *(FName *)((longlong)FVar28 + lVar29 * 0x30) = pFVar1->Key;
          *(undefined2 *)((longlong)FVar28 + 8 + lVar29 * 0x30) = *(undefined2 *)(pFVar43 + -0x24);
          *(undefined8 *)((longlong)FVar28 + 0x10 + lVar29 * 0x30) =
               *(undefined8 *)(pFVar43 + -0x1c);
          *(undefined8 *)((longlong)FVar28 + 0x18 + lVar29 * 0x30) =
               *(undefined8 *)(pFVar43 + -0x14);
          *(undefined8 *)((longlong)FVar28 + 0x20 + lVar29 * 0x30) = 0;
          *(undefined8 *)((longlong)FVar28 + 0x20 + lVar29 * 0x30) = *(undefined8 *)(pFVar43 + -0xc)
          ;
          *(undefined8 *)(pFVar43 + -0xc) = 0;
          *(undefined4 *)((longlong)FVar28 + 0x28 + lVar29 * 0x30) =
               *(undefined4 *)&pFVar43[-4].field_0x0;
          *(undefined4 *)((longlong)FVar28 + 0x2c + lVar29 * 0x30) = *(undefined4 *)pFVar43;
          *(undefined8 *)(pFVar43 + -4) = 0;
          pFVar43 = pFVar43 + 0x30;
        }
        uStack_fdc = 1;
        local_fc8 = 0;
        uStack_fcc = 0;
        iStack_fe0 = iVar41;
        if (local_bf0 != 0) {
          puVar46 = (uint *)(local_c18 + 0x10);
          if (local_bf8 != (uint *)0x0) {
            puVar46 = local_bf8;
          }
          uVar50 = *puVar46;
          local_fc8 = iVar41;
          while (uVar50 == 0) {
            iVar41 = iVar41 + 1;
            local_fc8 = local_fc8 + 0x20;
            uStack_fcc = local_bf0;
            iStack_fe0 = iVar41;
            if ((int)((local_bf0 - 1) + ((int)(local_bf0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar41)
            goto LAB_1499ec073;
            uVar50 = puVar46[iVar41];
          }
          uStack_fdc = ~(uVar50 - 1) & uVar50;
          uVar37 = (ulonglong)uStack_fdc * 2 + 1;
          lVar29 = 0x3f;
          if (uVar37 != 0) {
            for (; uVar37 >> lVar29 == 0; lVar29 = lVar29 + -1) {
            }
          }
          local_1020 = (int)lVar29;
          uStack_fcc = local_1020 + -1 + local_fc8;
          iStack_fe0 = iVar41;
          if ((int)local_bf0 < (int)uStack_fcc) {
            uStack_fcc = local_bf0;
          }
        }
LAB_1499ec073:
        local_fe8 = (longlong *)local_c18;
        uStack_fc4 = local_c1c;
        local_fd8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_c18 + 0x10);
        uVar50 = local_bf0 & 0xffffffe0;
        iStack_fc0 = local_c18._8_4_ - local_be4;
        uStack_fd0 = 0xffffffff;
        TStack_fb0.CurrentBitIndex = uStack_fcc;
        TStack_fb0.UnvisitedBitMask = 0xffffffff;
        TStack_fb0._padding_ = CONCAT44(uStack_fdc,iStack_fe0);
        iVar41 = (int)local_bf0 >> 5;
        TStack_fb0._28_4_ = local_c1c;
        TStack_fb0.BaseBitIndex = local_fc8;
        uStack_f90 = CONCAT44(uStack_fbc,iStack_fc0);
        bVar35 = (byte)local_bf0;
        local_11f0 = local_bf0;
        local_fb8 = local_fe8;
        TStack_fb0.Array = local_fd8;
        if (((int)local_bf0 < 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar14)) {
          pcVar6 = (code *)swi(3);
          uVar13 = (*pcVar6)();
          return (bool)uVar13;
        }
        uVar7 = local_11f0;
        if (uVar15 != local_bf0) {
          puVar46 = (uint *)(local_c18 + 0x10);
          if (local_bf8 != (uint *)0x0) {
            puVar46 = local_bf8;
          }
          uVar15 = -1 << (bVar35 & 0x1f) & puVar46[iVar41];
          while (uVar15 == 0) {
            iVar41 = iVar41 + 1;
            uVar50 = uVar50 + 0x20;
            if ((int)(((int)(local_bf0 - 1) >> 0x1f & 0x1fU) + (local_bf0 - 1)) >> 5 < iVar41) {
              local_11f0 = local_bf0;
              uVar7 = local_bf0;
              goto LAB_1499ec1d0;
            }
            uVar15 = puVar46[iVar41];
          }
          uVar37 = (ulonglong)(~(uVar15 - 1) & uVar15) * 2 + 1;
          lVar29 = 0x3f;
          if (uVar37 != 0) {
            for (; uVar37 >> lVar29 == 0; lVar29 = lVar29 + -1) {
            }
          }
          local_1024 = (int)lVar29;
          local_11f0 = local_1024 + -1 + uVar50;
          uVar7 = local_11f0;
          if ((int)local_bf0 < (int)local_11f0) {
            local_11f0 = local_bf0;
            uVar7 = local_bf0;
          }
        }
LAB_1499ec1d0:
        while( true ) {
          plVar11 = local_fb8;
          if ((int)local_fb8[1] - *(int *)((longlong)local_fb8 + 0x34) != (int)uStack_f90) {
            local_11f4 = 0;
            `TSparseArray<TSparseSetElement<TTuple<FName,TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_11f4);
          }
          if (((TStack_fb0.CurrentBitIndex == uVar7) &&
              (TStack_fb0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_c18 + 0x10))) &&
             (plVar11 == (longlong *)local_c18)) break;
          iVar41 = 0;
          pFVar22 = (FName *)((longlong)TStack_fb0.CurrentBitIndex * 800 + *plVar11);
          uVar15 = pFVar22[0x62].ComparisonIndex.Value;
          FVar39 = (FName)(pFVar22 + 1);
          if (pFVar22[0x61] != (FName)0x0) {
            FVar39 = pFVar22[0x61];
          }
          FVar52 = (FName)((longlong)(int)uVar15 * 0x30 + (longlong)FVar39);
          while( true ) {
            if (pFVar22[0x62].ComparisonIndex.Value != uVar15) {
              local_11f3 = 0;
              `TCheckedPointerIterator<FPCGSelectGrammarCriterion_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(&local_11f3);
            }
            if (FVar39 == FVar52) break;
            if ((short)(((FName *)((longlong)FVar39 + 8))->ComparisonIndex).Value == 0x21) {
              iVar41 = iVar41 + 1;
            }
            FVar39 = (FName)((longlong)FVar39 + 0x30);
          }
          if (1 < iVar41) {
            pFVar24 = FText::FromName(&local_c98,pFVar22);
            pFVar25 = FText::AsLocalizable_Advanced_LocText
                                (&local_db0,L"PCGSelectGrammarElement",L"MultipleSelectSameCriteria"
                                 ,
                                 L"Multiple \'Select\' comparators found on the criteria with same key: {0}"
                                );
            pFVar27 = FTextFormat::FTextFormat(&local_c88,pFVar25,Default);
            local_df8.Type = Text;
            FText::FText((FText *)&local_df8.TextValue,pFVar24);
            if ((local_df8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0)
               && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsSet()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                       ,0xbd,
                                       L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                      ), bVar14)) {
              pcVar6 = (code *)swi(3);
              uVar13 = (*pcVar6)();
              return (bool)uVar13;
            }
            local_1170.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1170.ArrayNum = 1;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,0,&local_1170.AllocatorInstance,1,&local_1170.ArrayMax);
            ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                      (local_1170.AllocatorInstance.Data,&local_df8,1);
            local_f28.TextFormatData.Object = (pFVar27->TextFormatData).Object;
            local_f28.TextFormatData.SharedReferenceCount.ReferenceController =
                 (pFVar27->TextFormatData).SharedReferenceCount.ReferenceController;
            if (local_f28.TextFormatData.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_f28.TextFormatData.SharedReferenceCount.ReferenceController)->
              SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_f28.TextFormatData.SharedReferenceCount.ReferenceController)->
                         SharedReferenceCount + 1);
              UNLOCK();
            }
            FText::Format(&local_f18,&local_f28,&local_1170);
            DestructItems<FFormatArgumentValue,int>
                      ((FFormatArgumentValue *)local_1170.AllocatorInstance.Data,local_1170.ArrayNum
                      );
            if ((FFormatArgumentValue *)local_1170.AllocatorInstance.Data !=
                (FFormatArgumentValue *)0x0) {
              FMemory::Free(local_1170.AllocatorInstance.Data);
            }
            if (local_df8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)
                           *(ITextData *)
                            local_df8.TextValue.field0_0x0.TypedValue.TextData.Reference + 0x10))();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((pFVar27->TextFormatData).SharedReferenceCount.ReferenceController);
            pIVar5 = (pFVar24->TextData).Reference;
            if (pIVar5 != (ITextData *)0x0) {
              (**(code **)((longlong)*pIVar5 + 0x10))();
            }
            PCGLog::LogWarningOnGraph(&local_f18,local_11d8);
            if (local_f18.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_f18.TextData.Reference + 0x10))();
            }
            if (local_db0.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_db0.TextData.Reference + 0x10))();
            }
          }
          TStack_fb0.UnvisitedBitMask = TStack_fb0.UnvisitedBitMask & ~TStack_fb0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_fb0);
        }
        uVar37 = (ulonglong)(int)local_1138;
        local_11c0 = &local_11d8->OutputData;
        local_1190 = local_1138;
        local_11d0 = (FObjectPtr_u_0 *)(local_1158._24_8_ + uVar37 * 0xf * 8);
        pFVar44 = local_11c0;
        pFVar48 = local_11d8;
        pFVar49 = (FObjectPtr_u_0 *)local_1158._24_8_;
        pFVar53 = local_11d0;
        do {
          while( true ) {
            local_1198 = pFVar49;
            if (local_1138 != (uint)uVar37) {
              local_11f2[0] = 0;
              `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_11f2);
            }
            if (pFVar49 == pFVar53) {
              local_bd0 = 0;
              if (local_bd8 != (ForElementType<FSetElementId>)0x0) {
                FMemory::Free((void *)local_bd8);
              }
              TSparseArray<TSparseSetElement<TTuple<FName,TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)local_c18);
              goto LAB_1499ecd1f;
            }
            local_1160 = (FObjectPtr_u_0)pFVar49->Handle;
            if (UE::GC::GIsIncrementalReachabilityPending == false) break;
            if ((UPCGData *)local_1160.Handle != (UPCGData *)0x0) {
              UE::GC::MarkAsReachable(local_1160.Handle);
              break;
            }
LAB_1499ec971:
            uVar37 = (ulonglong)local_1190;
            pFVar49 = pFVar49 + 0xf;
          }
          if ((UPCGData *)local_1160.Handle == (UPCGData *)0x0) goto LAB_1499ec971;
          pUVar17 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
          bVar14 = FObjectPtr::IsA((FObjectPtr *)&local_1160,pUVar17);
          FVar10 = local_1160;
          if (((!bVar14) || (pFVar53 = local_11d0, (UPCGData *)local_1160.Handle == (UPCGData *)0x0)
              ) || (iVar41 = (**(code **)(*(longlong *)local_1160.Handle + 0x488))
                                       (local_1160.Handle), pFVar53 = local_11d0, iVar41 == 0))
          goto LAB_1499ec971;
          pUVar30 = (UPCGData *)
                    (**(code **)(*(longlong *)FVar10.Handle + 0x310))(FVar10.Handle,pFVar48,1);
          if (pUVar30 == (UPCGData *)0x0) {
            pFVar34 = GetTypeName<UPCGBasePointData>(&local_c78);
            if ((pFVar34->Data).ArrayNum == 0) {
              pwVar45 = L"";
            }
            else {
              pwVar45 = (wchar_t *)(pFVar34->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(L"nullptr",pwVar45);
          }
          pUVar17 = Z_Construct_UClass_UPCGBasePointData_NoRegister();
          iVar41 = (int)pUVar17->_padding_;
          if ((*(int *)(pUVar30->_padding_ + 0x38) < iVar41) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar30->_padding_ + 0x30) + (longlong)iVar41 * 8) !=
              &pUVar17->_padding_)) {
            pFVar34 = GetTypeName<UPCGBasePointData>(&local_c58);
            pwVar45 = L"";
            if ((pFVar34->Data).ArrayNum == 0) {
              pwVar40 = L"";
            }
            else {
              pwVar40 = (wchar_t *)(pFVar34->Data).AllocatorInstance.Data;
            }
            pFVar34 = GetFullNameForCastLogError<UPCGData>(&local_c68,pUVar30);
            if ((pFVar34->Data).ArrayNum != 0) {
              pwVar45 = (wchar_t *)(pFVar34->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(pwVar45,pwVar40);
          }
          if (((pUVar30->Metadata).field0_0x0.DebugPtr == (UPCGMetadata *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("OutputPointData->Metadata",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Grammar\\PCGSelectGrammar.cpp"
                                  ,0x10e,L""), bVar14)) {
            pcVar6 = (code *)swi(3);
            uVar13 = (*pcVar6)();
            return (bool)uVar13;
          }
          iVar41 = (pFVar44->TaggedData).ArrayNum;
          piVar2 = &(pFVar44->TaggedData).ArrayMax;
          if (iVar41 == *piVar2) {
            iVar41 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x878,(ForAnyElementType *)pFVar44,piVar2);
          }
          (pFVar44->TaggedData).ArrayNum = iVar41 + 1;
          pFVar31 = FPCGTaggedData::FPCGTaggedData
                              ((FPCGTaggedData *)
                               ((pFVar44->TaggedData).AllocatorInstance.Data +
                               (longlong)iVar41 * 0x78),(FPCGTaggedData *)pFVar49);
          FPCGDataPtrWrapper::operator=(&pFVar31->Data,pUVar30);
          TVar19 = local_11c8;
          FPCGAttributePropertyInputSelector::CopyAndFixLast
                    ((FPCGAttributePropertyInputSelector *)&local_11c8.DebugPtr[1]._padding_,
                     (FPCGAttributePropertyInputSelector *)&local_10e8,(UPCGData *)FVar10.Handle);
          PCGAttributeAccessorHelpers::CreateConstAccessor
                    ((UPCGData *)local_11b8,(FPCGAttributePropertySelector *)FVar10.Handle,
                     SUB81(&local_10e8,0));
          PCGAttributeAccessorHelpers::CreateConstKeys
                    ((UPCGData *)(local_11b8 + 8),(FPCGAttributePropertySelector *)FVar10.Handle);
          if (((IPCGAttributeAccessor *)local_11b8._0_8_ == (IPCGAttributeAccessor *)0x0) ||
             ((IPCGAttributeAccessorKeys *)local_11b8._8_8_ == (IPCGAttributeAccessorKeys *)0x0)) {
            PCGLog::Metadata::LogFailToCreateAccessorError(&local_10e8,pFVar48);
          }
          else {
            FPCGAttributePropertyOutputSelector::CopyAndFixSource
                      ((FPCGAttributePropertyOutputSelector *)&TVar19.DebugPtr[2]._padding_,
                       (FPCGAttributePropertyOutputSelector *)&local_f88,
                       (FPCGAttributePropertyInputSelector *)&local_10e8,(UPCGData *)0x0);
            FVar8 = PCGMetadataDomainID::Default;
            pUVar33 = (pUVar30->Metadata).field0_0x0.DebugPtr;
            FVar32.Data = (FScriptContainerElement *)0x0;
            local_1100.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1100.Data.ArrayNum = 0;
            local_1100.Data.ArrayMax = 0;
            local_e98 = FPCGAttributePropertySelector::GetName(&local_f88);
            local_e98 = *(FName *)local_e98;
            local_e90 = FVar8;
            this_01 = UPCGMetadata::FindOrCreateMetadataDomain(pUVar33,&local_e90);
            if (this_01 == (FPCGMetadataDomain *)0x0) {
              pUVar33 = (UPCGMetadata *)0x0;
            }
            else {
              pUVar33 = (UPCGMetadata *)
                        FPCGMetadataDomain::FindOrCreateAttribute<FString>
                                  (this_01,local_e98,&local_1100,false,true,true);
              FVar32.Data = local_1100.Data.AllocatorInstance.Data;
            }
            if (FVar32.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FVar32.Data);
            }
            PCGAttributeAccessorHelpers::CreateAccessor
                      ((FPCGMetadataAttributeBase *)(local_11a8 + 8),pUVar33,
                       SUB81((pUVar30->Metadata).field0_0x0,0));
            PCGAttributeAccessorHelpers::CreateKeys
                      ((UPCGData *)local_11a8,(FPCGAttributePropertySelector *)pUVar30);
            uVar9 = local_11b8._8_8_;
            pFVar48 = local_11d8;
            if (((undefined8 *)local_11a8._8_8_ != (undefined8 *)0x0) &&
               ((undefined8 *)local_11a8._0_8_ != (undefined8 *)0x0)) {
              local_e18 = (undefined8 *)(local_11a8 + 8);
              local_e38.WriteGrammarAccessor =
                   (TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> *)
                   (local_11a8 + 8);
              local_e10 = local_11a8;
              local_e08 = local_c18;
              local_e38.OutputKeys =
                   (TUniquePtr<IPCGAttributeAccessorKeys,TDefaultDelete<IPCGAttributeAccessorKeys>_>
                    *)local_11a8;
              local_e38.bPassThroughKey =
                   SUB41(local_11c8.DebugPtr[1].CachedOverridableParams.ArrayNum,0);
              local_e38.CriteriaMap =
                   (TMap<FName,TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FPCGSelectGrammarCriterion,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,0>_>
                    *)local_c18;
              local_e00 = local_e38.bPassThroughKey;
              if (bVar12) {
                local_1080 = (IPCGAttributeAccessor *)local_11b8._0_8_;
                iVar41 = (**(code **)(*(longlong *)local_11b8._8_8_ + 0x10))(local_11b8._8_8_);
                pFVar49 = local_1198;
                if (iVar41 != 0) {
                  local_60[1] = 0x100;
                  iVar54 = 0;
                  local_868.SecondaryData = (ForElementType<FName>)0x0;
                  local_60[0] = 0;
                  UE::Core::Private::
                  ReallocGrow<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                            (8,4,0x100,&local_868,local_60,local_60 + 1);
                  local_11f0 = (int)(iVar41 + 0xff + (iVar41 + 0xff >> 0x1f & 0xffU)) >> 8;
                  iVar16 = iVar54;
                  if (0 < (int)local_11f0) {
                    do {
                      iVar42 = 0x100;
                      if (iVar41 < 0x100) {
                        iVar42 = iVar41;
                      }
                      local_1008.DataPtr = (FName *)&local_868;
                      if (local_868.SecondaryData != (ForElementType<FName>)0x0) {
                        local_1008.DataPtr = (FName *)local_868.SecondaryData;
                      }
                      local_1008.ArrayNum = iVar42;
                      if ((iVar42 < 0) &&
                         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                             ("ArrayNum >= 0",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                              ,0xfe,L""), bVar14)) {
                        pcVar6 = (code *)swi(3);
                        uVar13 = (*pcVar6)();
                        return (bool)uVar13;
                      }
                      local_d98._12_4_ = local_1008._12_4_;
                      local_d98.ArrayNum = local_1008.ArrayNum;
                      local_d98.DataPtr = local_1008.DataPtr;
                      bVar14 = IPCGAttributeAccessor::GetRange<FName>
                                         (local_1080,&local_d98,iVar54,
                                          (IPCGAttributeAccessorKeys *)uVar9,StrictType);
                      if (!bVar14) break;
                      `FPCGSelectGrammarElement::ExecuteInternal'::__l62::<lambda_2>::operator()
                                (&local_e18,&local_1008,iVar54,iVar42);
                      iVar16 = iVar16 + 1;
                      iVar54 = iVar54 + 0x100;
                      iVar41 = iVar41 + -0x100;
                    } while (iVar16 < (int)local_11f0);
                  }
                  pFVar49 = local_1198;
                  if (local_868.SecondaryData != (ForElementType<FName>)0x0) {
                    FMemory::Free((void *)local_868.SecondaryData);
                    pFVar49 = local_1198;
                  }
                }
              }
              else {
                FPCGAttributePropertyInputSelector::CopyAndFixLast
                          ((FPCGAttributePropertyInputSelector *)&local_11c8.DebugPtr[1].Seed,
                           (FPCGAttributePropertyInputSelector *)&local_e78,
                           (UPCGData *)FVar10.Handle);
                PCGAttributeAccessorHelpers::CreateConstAccessor
                          ((UPCGData *)local_1158,(FPCGAttributePropertySelector *)FVar10.Handle,
                           SUB81(&local_e78,0));
                PCGAttributeAccessorHelpers::CreateConstKeys
                          ((UPCGData *)&local_1178.ObjectPtr,
                           (FPCGAttributePropertySelector *)FVar10.Handle);
                pFVar48 = local_11d8;
                if (((IPCGAttributeAccessor *)local_1158._0_8_ == (IPCGAttributeAccessor *)0x0) ||
                   ((FPCGCrc)local_1178.DebugPtr == (FPCGCrc)0x0)) {
                  PCGLog::Metadata::LogFailToCreateAccessorError(&local_e78,local_11d8);
                  if ((FPCGCrc)local_1178.DebugPtr != (FPCGCrc)0x0) {
                    (**(code **)(local_1178.DebugPtr)->_padding_)(local_1178.DebugPtr,1);
                  }
                  if ((IPCGAttributeAccessor *)local_1158._0_8_ != (IPCGAttributeAccessor *)0x0) {
                    (**(code **)*(longlong *)local_1158._0_8_)(local_1158._0_8_,1);
                  }
                  DestructItems<FString,int>
                            ((FString *)local_e78.ExtraNames.AllocatorInstance.Data,
                             local_e78.ExtraNames.ArrayNum);
                  if (local_e78.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                  {
                    FMemory::Free(local_e78.ExtraNames.AllocatorInstance.Data);
                  }
                  goto LAB_1499ecc28;
                }
                pIStack_f00 = (IPCGAttributeAccessor *)local_1158._0_8_;
                local_f08 = (IPCGAttributeAccessor *)local_11b8._0_8_;
                local_1158._8_8_ = (IPCGAttributeAccessor **)0x0;
                local_1158._16_4_ = 2;
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,2,0,(ForAnyElementType *)(local_1158 + 8),2,
                           (int *)(local_1158 + 0x14));
                *(IPCGAttributeAccessor **)local_1158._8_8_ = local_f08;
                *(IPCGAttributeAccessor **)(local_1158._8_8_ + 8) = pIStack_f00;
                local_ef8 = (IPCGAttributeAccessorKeys *)local_11b8._8_8_;
                TStack_ef0.DebugPtr = local_1178.DebugPtr;
                local_1130.Data = (FScriptContainerElement *)0x0;
                local_1128 = 2;
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,2,0,&local_1130,2,&local_1124);
                uVar47 = local_1158._16_4_;
                uVar9 = local_1158._8_8_;
                *(IPCGAttributeAccessorKeys **)local_1130.Data = local_ef8;
                ((TObjectPtr<UPCGMetadata>_u_0 *)(local_1130.Data + 8))->DebugPtr =
                     (UPCGMetadata *)TStack_ef0;
                if (((int)local_1158._16_4_ < 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("InCount >= 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0xeb,L""), bVar14)) {
                  pcVar6 = (code *)swi(3);
                  uVar13 = (*pcVar6)();
                  return (bool)uVar13;
                }
                uVar15 = local_1128;
                iStack_ff0 = uVar47;
                local_ff8 = (IPCGAttributeAccessor **)uVar9;
                uStack_fec = local_c3c;
                local_ee8 = local_1130.Data;
                if (((int)local_1128 < 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("InCount >= 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0xeb,L""), bVar14)) {
                  pcVar6 = (code *)swi(3);
                  uVar13 = (*pcVar6)();
                  return (bool)uVar13;
                }
                local_d88._12_4_ = uStack_fec;
                local_d88.ArrayNum = iStack_ff0;
                uStack_ee0 = uVar15;
                local_d78._12_4_ = uStack_edc;
                local_d78.ArrayNum = uVar15;
                local_d88.DataPtr = local_ff8;
                local_d78.DataPtr = (IPCGAttributeAccessorKeys **)local_ee8;
                PCGMetadataElementCommon::
                ApplyOnMultiAccessorsRange<FName,double,_FPCGSelectGrammarElement::ExecuteInternal_::__l62::<lambda_3>_&>
                          (&local_d78,&local_d88,&local_e38,StrictType,0x100,-1);
                if (local_1130.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1130.Data);
                }
                if ((IPCGAttributeAccessor **)local_1158._8_8_ != (IPCGAttributeAccessor **)0x0) {
                  FMemory::Free((void *)local_1158._8_8_);
                }
                if ((FPCGCrc)local_1178.DebugPtr != (FPCGCrc)0x0) {
                  (**(code **)(local_1178.DebugPtr)->_padding_)(local_1178.DebugPtr,1);
                }
                if ((IPCGAttributeAccessor *)local_1158._0_8_ != (IPCGAttributeAccessor *)0x0) {
                  (**(code **)*(longlong *)local_1158._0_8_)(local_1158._0_8_,1);
                }
                DestructItems<FString,int>
                          ((FString *)local_e78.ExtraNames.AllocatorInstance.Data,
                           local_e78.ExtraNames.ArrayNum);
                if (local_e78.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_e78.ExtraNames.AllocatorInstance.Data);
                }
              }
              if ((undefined8 *)local_11a8._0_8_ != (undefined8 *)0x0) {
                (*(code *)**(undefined8 **)local_11a8._0_8_)(local_11a8._0_8_,1);
              }
              if ((undefined8 *)local_11a8._8_8_ != (undefined8 *)0x0) {
                (*(code *)**(undefined8 **)local_11a8._8_8_)(local_11a8._8_8_,1);
              }
              DestructItems<FString,int>
                        ((FString *)local_f88.ExtraNames.AllocatorInstance.Data,
                         local_f88.ExtraNames.ArrayNum);
              if (local_f88.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_f88.ExtraNames.AllocatorInstance.Data);
              }
              if ((IPCGAttributeAccessorKeys *)local_11b8._8_8_ != (IPCGAttributeAccessorKeys *)0x0)
              {
                (**(code **)*(longlong *)local_11b8._8_8_)(local_11b8._8_8_,1);
              }
              if ((IPCGAttributeAccessor *)local_11b8._0_8_ != (IPCGAttributeAccessor *)0x0) {
                (**(code **)*(longlong *)local_11b8._0_8_)(local_11b8._0_8_,1);
              }
              DestructItems<FString,int>
                        ((FString *)local_10e8.ExtraNames.AllocatorInstance.Data,
                         local_10e8.ExtraNames.ArrayNum);
              pFVar44 = local_11c0;
              pFVar48 = local_11d8;
              pFVar53 = local_11d0;
              if (local_10e8.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_10e8.ExtraNames.AllocatorInstance.Data);
                pFVar44 = local_11c0;
                pFVar48 = local_11d8;
                pFVar53 = local_11d0;
              }
              goto LAB_1499ec971;
            }
            PCGLog::Metadata::LogFailToCreateAccessorError(&local_f88,local_11d8);
LAB_1499ecc28:
            if ((undefined8 *)local_11a8._0_8_ != (undefined8 *)0x0) {
              (*(code *)**(undefined8 **)local_11a8._0_8_)(local_11a8._0_8_,1);
            }
            if ((undefined8 *)local_11a8._8_8_ != (undefined8 *)0x0) {
              (*(code *)**(undefined8 **)local_11a8._8_8_)(local_11a8._8_8_,1);
            }
            DestructItems<FString,int>
                      ((FString *)local_f88.ExtraNames.AllocatorInstance.Data,
                       local_f88.ExtraNames.ArrayNum);
            if (local_f88.ExtraNames.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_f88.ExtraNames.AllocatorInstance.Data);
            }
          }
          if ((IPCGAttributeAccessorKeys *)local_11b8._8_8_ != (IPCGAttributeAccessorKeys *)0x0) {
            (**(code **)*(longlong *)local_11b8._8_8_)(local_11b8._8_8_,1);
          }
          if ((IPCGAttributeAccessor *)local_11b8._0_8_ != (IPCGAttributeAccessor *)0x0) {
            (**(code **)*(longlong *)local_11b8._0_8_)(local_11b8._0_8_,1);
          }
          DestructItems<FString,int>
                    ((FString *)local_10e8.ExtraNames.AllocatorInstance.Data,
                     local_10e8.ExtraNames.ArrayNum);
          pFVar44 = local_11c0;
          pFVar53 = local_11d0;
          if (local_10e8.ExtraNames.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
          goto LAB_1499ec971;
          FMemory::Free(local_10e8.ExtraNames.AllocatorInstance.Data);
          uVar37 = (ulonglong)local_1190;
          pFVar49 = pFVar49 + 0xf;
          pFVar44 = local_11c0;
          pFVar53 = local_11d0;
        } while( true );
      }
      EVar4 = ((FPCGSelectGrammarCriterion *)FVar32.Data)->Comparator;
      if (EVar4 == Select) {
        iVar41 = iVar41 + 1;
LAB_1499ebdb3:
        FVar32.Data = FVar32.Data + 0x30;
        goto LAB_1499ebcc2;
      }
      if (((EVar4 != RangeExclusive) && (EVar4 != RangeInclusive)) ||
         (((FPCGSelectGrammarCriterion *)FVar32.Data)->FirstValue <=
          ((FPCGSelectGrammarCriterion *)FVar32.Data)->SecondValue)) goto LAB_1499ebdb3;
      pFVar24 = FText::FromString(&local_cc8,&((FPCGSelectGrammarCriterion *)FVar32.Data)->Grammar);
      pFVar25 = FText::FromName(&local_cb8,(FName *)FVar32.Data);
      pFVar26 = FText::AsLocalizable_Advanced_LocText
                          (&local_dc0,L"PCGSelectGrammarElement",L"InvalidCriteriaRange",
                           L"Criteria range is inverted for criterion with Key->Grammar: \'{0}\'->\'{1}\'"
                          );
      pFVar27 = FTextFormat::FTextFormat(&local_ca8,pFVar26,Default);
      pFVar24 = FText::Format<FText,FText>(&local_dd0,pFVar27,pFVar25,pFVar24);
      PCGLog::LogErrorOnGraph(pFVar24,pFVar48);
      if (local_dd0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_dd0.TextData.Reference + 0x10))();
      }
      if (local_dc0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_dc0.TextData.Reference + 0x10))();
      }
    }
  }
  else {
    if (local_1120.ArrayNum != 1) {
      PCGLog::InputOutput::LogFirstInputOnlyWarning
                (PCGSelectGrammar::Constants::CriteriaDataPinLabel,local_11d8);
    }
    if ((local_1120.ArrayNum < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar6 = (code *)swi(3);
      uVar13 = (*pcVar6)();
      return (bool)uVar13;
    }
    pUVar20 = Cast<UPCGParamData>((FPCGDataPtrWrapper *)local_1120.AllocatorInstance.Data);
    if (pUVar20 != (UPCGParamData *)0x0) {
      if ((pUVar20->_padding_ == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("CriteriaParamData->Metadata",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\Grammar\\PCGSelectGrammar.cpp"
                              ,0xaf,L""), bVar12)) {
        pcVar6 = (code *)swi(3);
        uVar13 = (*pcVar6)();
        return (bool)uVar13;
      }
      if (*(char *)((longlong)&TVar19.DebugPtr[1].CachedOverridableParams.ArrayNum + 1) == '\0') {
        local_d18.KeyAttributeName.ComparisonIndex.Value = 0;
        local_d18.KeyAttributeName.Number = 0;
        local_d18.ComparatorAttributeName.ComparisonIndex.Value = 0;
        local_d18.ComparatorAttributeName.Number = 0;
        local_d18.GrammarAttributeName.ComparisonIndex.Value = 0;
        local_d18.GrammarAttributeName.Number = 0;
        local_d18.FirstValueAttributeName.ComparisonIndex.Value = 0;
        local_d18.FirstValueAttributeName.Number = 0;
        local_d18.SecondValueAttributeName.ComparisonIndex.Value = 0;
        local_d18.SecondValueAttributeName.Number = 0;
        pFVar21 = FPCGSelectGrammarCriteriaAttributeNames::FPCGSelectGrammarCriteriaAttributeNames
                            (&local_d18);
      }
      else {
        pFVar21 = &local_d40;
        local_d40.KeyAttributeName = *(FName *)&TVar19.DebugPtr[1].CachedOverridableParams.ArrayMax;
        local_d40.ComparatorAttributeName =
             *(FName *)((longlong)&TVar19.DebugPtr[1].OverriddenSettingsPropertyBag.field0_0x0 + 4);
        local_d40.GrammarAttributeName = *(FName *)((longlong)&TVar19.DebugPtr[2]._padding_ + 4);
        local_d40.FirstValueAttributeName = *(FName *)&TVar19.DebugPtr[1].bPrintShaderDebugValues;
        local_d40.SecondValueAttributeName = *(FName *)&TVar19.DebugPtr[1].field_0xc4;
      }
      auVar3._0_4_ = (pFVar21->KeyAttributeName).ComparisonIndex;
      auVar3._4_4_ = (pFVar21->KeyAttributeName).Number;
      auVar3._8_4_ = (pFVar21->ComparatorAttributeName).ComparisonIndex;
      auVar3._12_4_ = (pFVar21->ComparatorAttributeName).Number;
      FVar39 = pFVar21->FirstValueAttributeName;
      FVar52 = pFVar21->SecondValueAttributeName;
      local_cd0 = pFVar21->GrammarAttributeName;
      local_bc8.Elements._0_8_ = 0;
      local_bc8.Elements._8_8_ = 0;
      local_bc8.Elements._32_8_ = 0;
      local_bc8.Elements._40_4_ = 0;
      local_bc8.Elements._44_4_ = 0x80;
      local_bc8.Elements._48_4_ = 0xffffffff;
      local_bc8.Elements._52_4_ = 0;
      local_bc8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_bc8.HashSize = 0;
      local_1014 = 1;
      local_101c = auVar3._0_8_;
      local_cf0 = auVar3;
      local_ce0 = FVar39;
      FStack_cd8 = FVar52;
      pFVar22 = ::FName::FName(&local_d48,3,L"Key",FNAME_Add);
      local_1068 = *pFVar22;
      local_ec8 = &local_1068;
      local_ec0 = &local_101c;
      TSet<TTuple<FName,TTuple<FName,bool>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<FName,bool>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_&&,TTuple<FName,bool>_&&>_>
                (&local_bc8,(TPairInitializer<FName_&&,TTuple<FName,bool>_&&> *)local_10a8,
                 (bool *)&local_ec8);
      local_1058.Value._4_1_ = 1;
      local_1058._4_8_ = FVar39;
      pFVar22 = ::FName::FName(&local_d50,10,L"FirstValue",FNAME_Add);
      local_1060 = *pFVar22;
      local_eb8 = &local_1060;
      local_eb0 = (undefined1 *)((longlong)&local_1058.Key + 4);
      TSet<TTuple<FName,TTuple<FName,bool>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<FName,bool>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_&&,TTuple<FName,bool>_&&>_>
                (&local_bc8,(TPairInitializer<FName_&&,TTuple<FName,bool>_&&> *)(local_10a8 + 4),
                 (bool *)&local_eb8);
      local_1040 = 1;
      local_1048 = auVar3._8_8_;
      pFVar22 = ::FName::FName(&local_d58,10,L"Comparator",FNAME_Add);
      local_1010 = *pFVar22;
      local_ea8 = &local_1010;
      local_ea0 = &local_1048;
      TSet<TTuple<FName,TTuple<FName,bool>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<FName,bool>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_&&,TTuple<FName,bool>_&&>_>
                (&local_bc8,(TPairInitializer<FName_&&,TTuple<FName,bool>_&&> *)local_10a0,
                 (bool *)&local_ea8);
      local_1034 = 1;
      local_103c = FVar52;
      pFVar22 = ::FName::FName(&local_dd8,0xb,L"SecondValue",FNAME_Add);
      local_1098._4_8_ = *pFVar22;
      local_f48 = (undefined8 *)(local_1098 + 4);
      local_f40 = &local_103c;
      TSet<TTuple<FName,TTuple<FName,bool>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<FName,bool>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_&&,TTuple<FName,bool>_&&>_>
                (&local_bc8,&local_1058,(bool *)&local_f48);
      local_1030 = local_cd0;
      local_1028 = 1;
      pFVar22 = ::FName::FName(&local_d60,7,L"Grammar",FNAME_Add);
      local_108c = *pFVar22;
      local_ed8 = &local_108c;
      local_ed0 = &local_1030;
      TSet<TTuple<FName,TTuple<FName,bool>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<FName,bool>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_&&,TTuple<FName,bool>_&&>_>
                (&local_bc8,(TPairInitializer<FName_&&,TTuple<FName,bool>_&&> *)(local_10a0 + 4),
                 (bool *)&local_ed8);
      pTVar23 = PCGPropertyHelpers::ExtractAttributeSetAsArrayOfStructs<FPCGSelectGrammarCriterion>
                          (&local_1078,pUVar20,
                           (TMap<FName,TTuple<FName,bool>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TTuple<FName,bool>,0>_>
                            *)&local_bc8,pFVar48);
      if (&local_11e8 != pTVar23) {
        DestructItems<FPCGSelectGrammarCriterion,int>
                  ((FPCGSelectGrammarCriterion *)local_11e8.AllocatorInstance.Data,
                   local_11e8.ArrayNum);
        if ((FPCGSelectGrammarCriterion *)local_11e8.AllocatorInstance.Data !=
            (FPCGSelectGrammarCriterion *)0x0) {
          FMemory::Free(local_11e8.AllocatorInstance.Data);
        }
        local_11e8.AllocatorInstance.Data = (pTVar23->AllocatorInstance).Data;
        (pTVar23->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        local_11e8.ArrayNum = pTVar23->ArrayNum;
        local_11e8.ArrayMax = pTVar23->ArrayMax;
        pTVar23->ArrayNum = 0;
        pTVar23->ArrayMax = 0;
      }
      DestructItems<FPCGSelectGrammarCriterion,int>
                ((FPCGSelectGrammarCriterion *)local_1078.AllocatorInstance.Data,local_1078.ArrayNum
                );
      if ((FPCGSelectGrammarCriterion *)local_1078.AllocatorInstance.Data !=
          (FPCGSelectGrammarCriterion *)0x0) {
        FMemory::Free(local_1078.AllocatorInstance.Data);
      }
      local_bc8.HashSize = 0;
      if (local_bc8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_bc8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,TTuple<FName,bool>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,TTuple<FName,bool>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_bc8.Elements);
      goto LAB_1499ebc79;
    }
    PCGLog::InputOutput::LogTypedDataNotFoundWarning
              (Param,PCGSelectGrammar::Constants::CriteriaDataPinLabel,pFVar48);
  }
LAB_1499ecd1f:
  DestructItems<FPCGSelectGrammarCriterion,int>
            ((FPCGSelectGrammarCriterion *)local_11e8.AllocatorInstance.Data,local_11e8.ArrayNum);
  if ((FPCGSelectGrammarCriterion *)local_11e8.AllocatorInstance.Data !=
      (FPCGSelectGrammarCriterion *)0x0) {
    FMemory::Free(local_11e8.AllocatorInstance.Data);
  }
LAB_1499ecd3c:
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_1120.AllocatorInstance.Data,local_1120.ArrayNum);
  if ((FPCGTaggedData *)local_1120.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_1120.AllocatorInstance.Data);
  }
  DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_1158._24_8_,local_1138);
  if ((FObjectPtr_u_0 *)local_1158._24_8_ != (FObjectPtr_u_0 *)0x0) {
    FMemory::Free((void *)local_1158._24_8_);
  }
  if (bVar56) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// SupportsBasePointDataInputs @ 149a10280

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGSelectGrammarElement::SupportsBasePointDataInputs
          (FPCGSelectGrammarElement *this,FPCGContext *param_1)

{
  return true;
}

