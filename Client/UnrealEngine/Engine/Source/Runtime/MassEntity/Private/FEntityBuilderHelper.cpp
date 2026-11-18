// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 6

// AppendFromEntity<FMassConstSharedFragment> @ 1471bf0e0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Mass::Private::FEntityBuilderHelper::AppendFromEntity<FMassConstSharedFragment>
          (FEntityBuilder *param_1,FMassEntityHandle param_2,
          FMassArchetypeCompositionDescriptor *param_3)

{
  TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *pTVar1;
  int iVar2;
  TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *pTVar9;
  UStruct *pUVar10;
  UClass *pUVar11;
  int iVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  int iVar16;
  
  pTVar1 = &param_3->ConstSharedFragments;
  FMassArchetypeSharedFragmentValues::Reset(&param_1->CachedSharedFragmentValues);
  iVar2 = *(int *)&(param_3->ConstSharedFragments).field_0x18;
  iVar12 = 0;
  iVar16 = 0;
  uVar15 = 1;
  if (iVar2 < 1) {
LAB_1471bf17f:
    if (iVar2 <= iVar16) goto LAB_1471bf2b6;
  }
  else {
    pTVar3 = *(TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
               **)&(param_3->ConstSharedFragments).field_0x10;
    pTVar9 = pTVar3;
    if (pTVar3 == (TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                   *)0x0) {
      pTVar9 = pTVar1;
    }
    if ((*(byte *)pTVar9 & 1) == 0) {
      do {
        uVar13 = uVar15 * 2;
        iVar16 = iVar16 + 1;
        iVar6 = iVar12 + 1;
        uVar15 = 1;
        if (uVar13 != 0) {
          iVar6 = iVar12;
          uVar15 = uVar13;
        }
        iVar12 = iVar6;
        if (iVar2 <= iVar16) goto LAB_1471bf2b6;
        pTVar9 = pTVar1;
        if (pTVar3 != (TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                       *)0x0) {
          pTVar9 = pTVar3;
        }
      } while ((*(uint *)(&pTVar9->field_0x0 + (longlong)iVar12 * 4) & uVar15) == 0);
      goto LAB_1471bf17f;
    }
  }
  do {
    pUVar10 = FStructTracker::GetStructType
                        (&FMassConstSharedFragmentBitSetStructTrackerWrapper::StructTracker,iVar16);
    if (pUVar10 == (UStruct *)0x0) {
LAB_1471bf2dd:
                    /* WARNING: Subroutine does not return */
      Core::Private::ReportNotNullPtr();
    }
    pUVar11 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar2 = (int)pUVar11->_padding_;
    if ((*(int *)(pUVar10->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar11->_padding_)) goto LAB_1471bf2dd;
    pFVar4 = (param_1->ConstSharedFragments).AllocatorInstance.Data;
    iVar2 = (param_1->ConstSharedFragments).ArrayNum;
    for (pFVar14 = pFVar4; pFVar14 != pFVar4 + (longlong)iVar2 * 0x10; pFVar14 = pFVar14 + 0x10) {
      if (pUVar10 == *(UStruct **)pFVar14) {
        uVar13 = (uint)((longlong)pFVar14 - (longlong)pFVar4 >> 4);
        if (uVar13 != 0xffffffff) {
          uVar8 = 0;
          if ((int)uVar13 < iVar2) {
            uVar8 = ~uVar13 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                    (&param_1->ConstSharedFragments,uVar13);
        }
        break;
      }
    }
    iVar2 = *(int *)&(param_3->ConstSharedFragments).field_0x18;
    do {
      uVar13 = uVar15 * 2;
      iVar16 = iVar16 + 1;
      iVar6 = iVar12 + 1;
      uVar15 = 1;
      if (uVar13 != 0) {
        iVar6 = iVar12;
        uVar15 = uVar13;
      }
      iVar12 = iVar6;
      if (iVar2 <= iVar16) goto LAB_1471bf2b6;
      pTVar3 = *(TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                 **)&(param_3->ConstSharedFragments).field_0x10;
      pTVar9 = pTVar1;
      if (pTVar3 != (TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                     *)0x0) {
        pTVar9 = pTVar3;
      }
    } while ((*(uint *)(&pTVar9->field_0x0 + (longlong)iVar12 * 4) & uVar15) == 0);
  } while (iVar16 < iVar2);
LAB_1471bf2b6:
  CopyFromEntity<FMassConstSharedFragment>(param_1,param_2,param_3);
  return;
}

// AppendFromEntity<FMassFragment> @ 1471bf300

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Mass::Private::FEntityBuilderHelper::AppendFromEntity<FMassFragment>
          (FEntityBuilder *param_1,FMassEntityHandle param_2,
          FMassArchetypeCompositionDescriptor *param_3)

{
  int iVar1;
  FMassArchetypeCompositionDescriptor *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  FMassArchetypeCompositionDescriptor *pFVar8;
  UStruct *pUVar9;
  UClass *pUVar10;
  int iVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  int iVar15;
  
  iVar1 = *(int *)&(param_3->Fragments).field_0x18;
  iVar11 = 0;
  iVar15 = 0;
  uVar14 = 1;
  if (iVar1 < 1) {
LAB_1471bf38a:
    if (iVar1 <= iVar15) goto LAB_1471bf4c5;
  }
  else {
    pFVar2 = *(FMassArchetypeCompositionDescriptor **)&(param_3->Fragments).field_0x10;
    pFVar8 = param_3;
    if (pFVar2 != (FMassArchetypeCompositionDescriptor *)0x0) {
      pFVar8 = pFVar2;
    }
    if ((*(byte *)&pFVar8->Fragments & 1) == 0) {
      do {
        uVar12 = uVar14 * 2;
        iVar15 = iVar15 + 1;
        iVar5 = iVar11 + 1;
        uVar14 = 1;
        if (uVar12 != 0) {
          iVar5 = iVar11;
          uVar14 = uVar12;
        }
        iVar11 = iVar5;
        if (iVar1 <= iVar15) goto LAB_1471bf4c5;
        pFVar8 = param_3;
        if (pFVar2 != (FMassArchetypeCompositionDescriptor *)0x0) {
          pFVar8 = pFVar2;
        }
      } while ((*(uint *)(&(pFVar8->Fragments).field_0x0 + (longlong)iVar11 * 4) & uVar14) == 0);
      goto LAB_1471bf38a;
    }
  }
  do {
    pUVar9 = FStructTracker::GetStructType
                       (&FMassFragmentBitSetStructTrackerWrapper::StructTracker,iVar15);
    if (pUVar9 == (UStruct *)0x0) {
LAB_1471bf4e9:
                    /* WARNING: Subroutine does not return */
      Core::Private::ReportNotNullPtr();
    }
    pUVar10 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar10->_padding_;
    if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar10->_padding_)) goto LAB_1471bf4e9;
    pFVar3 = (param_1->Fragments).AllocatorInstance.Data;
    iVar1 = (param_1->Fragments).ArrayNum;
    for (pFVar13 = pFVar3; pFVar13 != pFVar3 + (longlong)iVar1 * 0x10; pFVar13 = pFVar13 + 0x10) {
      if (pUVar9 == *(UStruct **)pFVar13) {
        uVar12 = (uint)((longlong)pFVar13 - (longlong)pFVar3 >> 4);
        if (uVar12 != 0xffffffff) {
          uVar7 = 0;
          if ((int)uVar12 < iVar1) {
            uVar7 = ~uVar12 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                    (&param_1->Fragments,uVar12);
        }
        break;
      }
    }
    iVar1 = *(int *)&(param_3->Fragments).field_0x18;
    do {
      uVar12 = uVar14 * 2;
      iVar15 = iVar15 + 1;
      iVar5 = iVar11 + 1;
      uVar14 = 1;
      if (uVar12 != 0) {
        iVar5 = iVar11;
        uVar14 = uVar12;
      }
      iVar11 = iVar5;
      if (iVar1 <= iVar15) goto LAB_1471bf4c5;
      pFVar2 = *(FMassArchetypeCompositionDescriptor **)&(param_3->Fragments).field_0x10;
      pFVar8 = param_3;
      if (pFVar2 != (FMassArchetypeCompositionDescriptor *)0x0) {
        pFVar8 = pFVar2;
      }
    } while ((*(uint *)(&(pFVar8->Fragments).field_0x0 + (longlong)iVar11 * 4) & uVar14) == 0);
  } while (iVar15 < iVar1);
LAB_1471bf4c5:
  CopyFromEntity<FMassFragment>(param_1,param_2,param_3);
  return;
}

// AppendFromEntity<FMassSharedFragment> @ 1471bf510

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Mass::Private::FEntityBuilderHelper::AppendFromEntity<FMassSharedFragment>
          (FEntityBuilder *param_1,FMassEntityHandle param_2,
          FMassArchetypeCompositionDescriptor *param_3)

{
  TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *pTVar1;
  int iVar2;
  TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *pTVar9;
  UStruct *pUVar10;
  UClass *pUVar11;
  int iVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  int iVar16;
  
  pTVar1 = &param_3->SharedFragments;
  FMassArchetypeSharedFragmentValues::Reset(&param_1->CachedSharedFragmentValues);
  iVar2 = *(int *)&(param_3->SharedFragments).field_0x18;
  iVar12 = 0;
  iVar16 = 0;
  uVar15 = 1;
  if (iVar2 < 1) {
LAB_1471bf5ac:
    if (iVar2 <= iVar16) goto LAB_1471bf6e6;
  }
  else {
    pTVar3 = *(TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
               **)&(param_3->SharedFragments).field_0x10;
    pTVar9 = pTVar3;
    if (pTVar3 == (TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                   *)0x0) {
      pTVar9 = pTVar1;
    }
    if ((*(byte *)pTVar9 & 1) == 0) {
      do {
        uVar13 = uVar15 * 2;
        iVar16 = iVar16 + 1;
        iVar6 = iVar12 + 1;
        uVar15 = 1;
        if (uVar13 != 0) {
          iVar6 = iVar12;
          uVar15 = uVar13;
        }
        iVar12 = iVar6;
        if (iVar2 <= iVar16) goto LAB_1471bf6e6;
        pTVar9 = pTVar1;
        if (pTVar3 != (TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                       *)0x0) {
          pTVar9 = pTVar3;
        }
      } while ((*(uint *)(&pTVar9->field_0x0 + (longlong)iVar12 * 4) & uVar15) == 0);
      goto LAB_1471bf5ac;
    }
  }
  do {
    pUVar10 = FStructTracker::GetStructType
                        (&FMassSharedFragmentBitSetStructTrackerWrapper::StructTracker,iVar16);
    if (pUVar10 == (UStruct *)0x0) {
LAB_1471bf70d:
                    /* WARNING: Subroutine does not return */
      Core::Private::ReportNotNullPtr();
    }
    pUVar11 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar2 = (int)pUVar11->_padding_;
    if ((*(int *)(pUVar10->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar11->_padding_)) goto LAB_1471bf70d;
    pFVar4 = (param_1->SharedFragments).AllocatorInstance.Data;
    iVar2 = (param_1->SharedFragments).ArrayNum;
    for (pFVar14 = pFVar4; pFVar14 != pFVar4 + (longlong)iVar2 * 0x10; pFVar14 = pFVar14 + 0x10) {
      if (pUVar10 == *(UStruct **)pFVar14) {
        uVar13 = (uint)((longlong)pFVar14 - (longlong)pFVar4 >> 4);
        if (uVar13 != 0xffffffff) {
          uVar8 = 0;
          if ((int)uVar13 < iVar2) {
            uVar8 = ~uVar13 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          TArray<FInstancedStruct,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                    (&param_1->SharedFragments,uVar13);
        }
        break;
      }
    }
    iVar2 = *(int *)&(param_3->SharedFragments).field_0x18;
    do {
      uVar13 = uVar15 * 2;
      iVar16 = iVar16 + 1;
      iVar6 = iVar12 + 1;
      uVar15 = 1;
      if (uVar13 != 0) {
        iVar6 = iVar12;
        uVar15 = uVar13;
      }
      iVar12 = iVar6;
      if (iVar2 <= iVar16) goto LAB_1471bf6e6;
      pTVar3 = *(TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                 **)&(param_3->SharedFragments).field_0x10;
      pTVar9 = pTVar1;
      if (pTVar3 != (TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                     *)0x0) {
        pTVar9 = pTVar3;
      }
    } while ((*(uint *)(&pTVar9->field_0x0 + (longlong)iVar12 * 4) & uVar15) == 0);
  } while (iVar16 < iVar2);
LAB_1471bf6e6:
  CopyFromEntity<FMassSharedFragment>(param_1,param_2,param_3);
  return;
}

// CopyFromEntity<FMassConstSharedFragment> @ 1471c18d0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Mass::Private::FEntityBuilderHelper::CopyFromEntity<FMassConstSharedFragment>
          (FEntityBuilder *param_1,FMassEntityHandle param_2,
          FMassArchetypeCompositionDescriptor *param_3)

{
  int *piVar1;
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *pTVar2;
  TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *this;
  TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *pTVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *pTVar8;
  UScriptStruct *pUVar9;
  UClass *pUVar10;
  uint uVar11;
  int iVar12;
  FConstStructView local_58;
  FConstStructView local_48;
  
  pTVar2 = &param_1->ConstSharedFragments;
  this = &param_3->ConstSharedFragments;
  FMassArchetypeSharedFragmentValues::Reset(&param_1->CachedSharedFragmentValues);
  iVar7 = (param_1->ConstSharedFragments).ArrayNum;
  iVar6 = TBitArray<FDefaultBitArrayAllocator>::CountSetBits
                    ((TBitArray<FDefaultBitArrayAllocator> *)this,0,-1);
  uVar11 = iVar6 + iVar7;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &(param_1->ConstSharedFragments).ArrayMax;
  if ((param_1->ConstSharedFragments).ArrayMax < (int)uVar11) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar11,&pTVar2->AllocatorInstance,iVar7,piVar1);
  }
  iVar7 = *(int *)&(param_3->ConstSharedFragments).field_0x18;
  iVar12 = 0;
  uVar11 = 1;
  iVar6 = iVar12;
  if (0 < iVar7) {
    pTVar3 = *(TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
               **)&(param_3->ConstSharedFragments).field_0x10;
    pTVar8 = pTVar3;
    if (pTVar3 == (TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                   *)0x0) {
      pTVar8 = this;
    }
    if ((pTVar8->field_0x0 & 1) != 0) goto LAB_1471c19d0;
    do {
      uVar4 = uVar11 * 2;
      iVar6 = iVar6 + 1;
      iVar5 = iVar12 + 1;
      uVar11 = 1;
      if (uVar4 != 0) {
        iVar5 = iVar12;
        uVar11 = uVar4;
      }
      iVar12 = iVar5;
      if (iVar7 <= iVar6) {
        return;
      }
      pTVar8 = this;
      if (pTVar3 != (TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                     *)0x0) {
        pTVar8 = pTVar3;
      }
    } while ((*(uint *)(&pTVar8->field_0x0 + (longlong)iVar12 * 4) & uVar11) == 0);
  }
  if (iVar7 <= iVar6) {
    return;
  }
LAB_1471c19d0:
  while (pUVar9 = (UScriptStruct *)
                  FStructTracker::GetStructType
                            (&FMassConstSharedFragmentBitSetStructTrackerWrapper::StructTracker,
                             iVar6), pUVar9 != (UScriptStruct *)0x0) {
    pUVar10 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar7 = (int)pUVar10->_padding_;
    if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar7) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar7 * 8)
        != &pUVar10->_padding_)) break;
    FMassEntityManager::GetConstSharedFragmentDataStruct
              ((param_1->EntityManager).Object,&local_58,param_2,pUVar9);
    iVar7 = (param_1->ConstSharedFragments).ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,piVar1);
    }
    (param_1->ConstSharedFragments).ArrayNum = iVar7 + 1;
    local_48.ScriptStruct = local_58.ScriptStruct;
    local_48.StructMemory = local_58.StructMemory;
    FInstancedStruct::FInstancedStruct
              ((FInstancedStruct *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x10),
               &local_48);
    iVar7 = *(int *)&(param_3->ConstSharedFragments).field_0x18;
    do {
      uVar4 = uVar11 * 2;
      iVar6 = iVar6 + 1;
      iVar5 = iVar12 + 1;
      uVar11 = 1;
      if (uVar4 != 0) {
        iVar5 = iVar12;
        uVar11 = uVar4;
      }
      iVar12 = iVar5;
      if (iVar7 <= iVar6) {
        return;
      }
      pTVar3 = *(TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                 **)&(param_3->ConstSharedFragments).field_0x10;
      pTVar8 = this;
      if (pTVar3 != (TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                     *)0x0) {
        pTVar8 = pTVar3;
      }
    } while ((*(uint *)(&pTVar8->field_0x0 + (longlong)iVar12 * 4) & uVar11) == 0);
    if (iVar7 <= iVar6) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// CopyFromEntity<FMassFragment> @ 1471c1b00

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Mass::Private::FEntityBuilderHelper::CopyFromEntity<FMassFragment>
          (FEntityBuilder *param_1,FMassEntityHandle param_2,
          FMassArchetypeCompositionDescriptor *param_3)

{
  int *piVar1;
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *pTVar2;
  FMassArchetypeCompositionDescriptor *pFVar3;
  uint uVar4;
  uchar *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  FMassArchetypeCompositionDescriptor *pFVar9;
  UScriptStruct *pUVar10;
  UClass *pUVar11;
  FStructView *pFVar12;
  uint uVar13;
  int iVar14;
  FConstStructView local_68;
  FStructView local_58 [2];
  
  pTVar2 = &param_1->Fragments;
  iVar8 = (param_1->Fragments).ArrayNum;
  iVar7 = TBitArray<FDefaultBitArrayAllocator>::CountSetBits
                    ((TBitArray<FDefaultBitArrayAllocator> *)param_3,0,-1);
  uVar13 = iVar7 + iVar8;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  piVar1 = &(param_1->Fragments).ArrayMax;
  if ((param_1->Fragments).ArrayMax < (int)uVar13) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar13,&pTVar2->AllocatorInstance,iVar8,piVar1);
  }
  iVar8 = *(int *)&(param_3->Fragments).field_0x18;
  iVar14 = 0;
  uVar13 = 1;
  iVar7 = iVar14;
  if (0 < iVar8) {
    pFVar3 = *(FMassArchetypeCompositionDescriptor **)&(param_3->Fragments).field_0x10;
    pFVar9 = param_3;
    if (pFVar3 != (FMassArchetypeCompositionDescriptor *)0x0) {
      pFVar9 = pFVar3;
    }
    if ((*(byte *)&pFVar9->Fragments & 1) != 0) goto LAB_1471c1bf0;
    do {
      uVar4 = uVar13 * 2;
      iVar7 = iVar7 + 1;
      iVar6 = iVar14 + 1;
      uVar13 = 1;
      if (uVar4 != 0) {
        iVar6 = iVar14;
        uVar13 = uVar4;
      }
      iVar14 = iVar6;
      if (iVar8 <= iVar7) {
        return;
      }
      pFVar9 = param_3;
      if (pFVar3 != (FMassArchetypeCompositionDescriptor *)0x0) {
        pFVar9 = pFVar3;
      }
    } while ((*(uint *)(&(pFVar9->Fragments).field_0x0 + (longlong)iVar14 * 4) & uVar13) == 0);
  }
  if (iVar8 <= iVar7) {
    return;
  }
LAB_1471c1bf0:
  while (pUVar10 = (UScriptStruct *)
                   FStructTracker::GetStructType
                             (&FMassFragmentBitSetStructTrackerWrapper::StructTracker,iVar7),
        pUVar10 != (UScriptStruct *)0x0) {
    pUVar11 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar8 = (int)pUVar11->_padding_;
    if ((*(int *)(pUVar10->_padding_ + 0x38) < iVar8) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar8 * 8)
        != &pUVar11->_padding_)) break;
    pFVar12 = FMassEntityManager::GetFragmentDataStruct
                        ((param_1->EntityManager).Object,local_58,param_2,pUVar10);
    pUVar10 = pFVar12->ScriptStruct;
    puVar5 = pFVar12->StructMemory;
    iVar8 = (param_1->Fragments).ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,piVar1);
    }
    (param_1->Fragments).ArrayNum = iVar8 + 1;
    local_68.ScriptStruct = pUVar10;
    local_68.StructMemory = puVar5;
    FInstancedStruct::FInstancedStruct
              ((FInstancedStruct *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x10),
               &local_68);
    iVar8 = *(int *)&(param_3->Fragments).field_0x18;
    do {
      uVar4 = uVar13 * 2;
      iVar7 = iVar7 + 1;
      iVar6 = iVar14 + 1;
      uVar13 = 1;
      if (uVar4 != 0) {
        iVar6 = iVar14;
        uVar13 = uVar4;
      }
      iVar14 = iVar6;
      if (iVar8 <= iVar7) {
        return;
      }
      pFVar3 = *(FMassArchetypeCompositionDescriptor **)&(param_3->Fragments).field_0x10;
      pFVar9 = param_3;
      if (pFVar3 != (FMassArchetypeCompositionDescriptor *)0x0) {
        pFVar9 = pFVar3;
      }
    } while ((*(uint *)(&(pFVar9->Fragments).field_0x0 + (longlong)iVar14 * 4) & uVar13) == 0);
    if (iVar8 <= iVar7) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// CopyFromEntity<FMassSharedFragment> @ 1471c1d20

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __cdecl
UE::Mass::Private::FEntityBuilderHelper::CopyFromEntity<FMassSharedFragment>
          (FEntityBuilder *param_1,FMassEntityHandle param_2,
          FMassArchetypeCompositionDescriptor *param_3)

{
  TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *this;
  int *piVar1;
  TArray<FInstancedStruct,TSizedDefaultAllocator<32>_> *pTVar2;
  TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *pTVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *pTVar8;
  UScriptStruct *pUVar9;
  UClass *pUVar10;
  uint uVar11;
  int iVar12;
  FConstStructView local_58;
  FConstStructView local_48;
  
  pTVar2 = &param_1->SharedFragments;
  this = &param_3->SharedFragments;
  FMassArchetypeSharedFragmentValues::Reset(&param_1->CachedSharedFragmentValues);
  iVar7 = (param_1->SharedFragments).ArrayNum;
  iVar6 = TBitArray<FDefaultBitArrayAllocator>::CountSetBits
                    ((TBitArray<FDefaultBitArrayAllocator> *)this,0,-1);
  uVar11 = iVar6 + iVar7;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &(param_1->SharedFragments).ArrayMax;
  if ((param_1->SharedFragments).ArrayMax < (int)uVar11) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar11,&pTVar2->AllocatorInstance,iVar7,piVar1);
  }
  iVar7 = *(int *)&(param_3->SharedFragments).field_0x18;
  iVar12 = 0;
  uVar11 = 1;
  iVar6 = iVar12;
  if (0 < iVar7) {
    pTVar3 = *(TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
               **)&(param_3->SharedFragments).field_0x10;
    pTVar8 = pTVar3;
    if (pTVar3 == (TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                   *)0x0) {
      pTVar8 = this;
    }
    if ((pTVar8->field_0x0 & 1) != 0) goto LAB_1471c1e20;
    do {
      uVar4 = uVar11 * 2;
      iVar6 = iVar6 + 1;
      iVar5 = iVar12 + 1;
      uVar11 = 1;
      if (uVar4 != 0) {
        iVar5 = iVar12;
        uVar11 = uVar4;
      }
      iVar12 = iVar5;
      if (iVar7 <= iVar6) {
        return;
      }
      pTVar8 = this;
      if (pTVar3 != (TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                     *)0x0) {
        pTVar8 = pTVar3;
      }
    } while ((*(uint *)(&pTVar8->field_0x0 + (longlong)iVar12 * 4) & uVar11) == 0);
  }
  if (iVar7 <= iVar6) {
    return;
  }
LAB_1471c1e20:
  while (pUVar9 = (UScriptStruct *)
                  FStructTracker::GetStructType
                            (&FMassSharedFragmentBitSetStructTrackerWrapper::StructTracker,iVar6),
        pUVar9 != (UScriptStruct *)0x0) {
    pUVar10 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar7 = (int)pUVar10->_padding_;
    if ((*(int *)(pUVar9->_padding_ + 0x38) < iVar7) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar7 * 8)
        != &pUVar10->_padding_)) break;
    FMassEntityManager::GetSharedFragmentDataStruct
              ((param_1->EntityManager).Object,&local_58,param_2,pUVar9);
    iVar7 = (param_1->SharedFragments).ArrayNum;
    if (iVar7 == *piVar1) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,piVar1);
    }
    (param_1->SharedFragments).ArrayNum = iVar7 + 1;
    local_48.ScriptStruct = local_58.ScriptStruct;
    local_48.StructMemory = local_58.StructMemory;
    FInstancedStruct::FInstancedStruct
              ((FInstancedStruct *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x10),
               &local_48);
    iVar7 = *(int *)&(param_3->SharedFragments).field_0x18;
    do {
      uVar4 = uVar11 * 2;
      iVar6 = iVar6 + 1;
      iVar5 = iVar12 + 1;
      uVar11 = 1;
      if (uVar4 != 0) {
        iVar5 = iVar12;
        uVar11 = uVar4;
      }
      iVar12 = iVar5;
      if (iVar7 <= iVar6) {
        return;
      }
      pTVar3 = *(TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                 **)&(param_3->SharedFragments).field_0x10;
      pTVar8 = this;
      if (pTVar3 != (TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                     *)0x0) {
        pTVar8 = pTVar3;
      }
    } while ((*(uint *)(&pTVar8->field_0x0 + (longlong)iVar12 * 4) & uVar11) == 0);
    if (iVar7 <= iVar6) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

