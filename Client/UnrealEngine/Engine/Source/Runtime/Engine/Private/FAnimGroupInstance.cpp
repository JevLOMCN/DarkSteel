// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 1473ca700

UScriptStruct * __cdecl FAnimGroupInstance::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimGroupInstance.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimGroupInstance.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimGroupInstance,(UObject *)pUVar1,
                         L"AnimGroupInstance");
  }
  return Z_Registration_Info_UScriptStruct_FAnimGroupInstance.OuterSingleton;
}

// Finalize @ 1473fc830

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FAnimGroupInstance::Finalize(FAnimGroupInstance *this,FAnimGroupInstance *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  if (((param_1 == (FAnimGroupInstance *)0x0) ||
      (param_1->GroupLeaderIndex != this->GroupLeaderIndex)) ||
     ((0.0 < param_1->MontageLeaderWeight && (this->MontageLeaderWeight == 0.0)))) {
    if (4 < (byte)LogAnimMarkerSync._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogAnimMarkerSync);
    }
    iVar5 = (this->ActivePlayers).ArrayNum;
    uVar6 = this->GroupLeaderIndex + 1;
    if ((int)uVar6 < iVar5) {
      lVar7 = (longlong)(int)uVar6 * 0x78;
      do {
        uVar4 = 0;
        if ((int)uVar6 < iVar5) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar6 = uVar6 + 1;
        puVar1 = *(undefined4 **)((this->ActivePlayers).AllocatorInstance.Data + lVar7 + 0x68);
        lVar7 = lVar7 + 0x78;
        *puVar1 = 0xfffffffe;
        puVar1[2] = 0xfffffffe;
        iVar5 = (this->ActivePlayers).ArrayNum;
      } while ((int)uVar6 < iVar5);
    }
  }
  return;
}

// Prepare @ 14740dc70

void __thiscall FAnimGroupInstance::Prepare(FAnimGroupInstance *this,FAnimGroupInstance *param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 *puVar4;
  code *pcVar5;
  bool bVar6;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  FIdentityFunctor local_res8;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_58;
  undefined1 local_57 [3];
  uint local_54;
  longlong local_50;
  
  local_res8 = SUB81(this,0);
  AlgoImpl::
  IntroSortInternal<FAnimTickRecord,int,FIdentityFunctor,TDereferenceWrapper<FAnimTickRecord,TLess<void>_>_>
            ((FAnimTickRecord *)(this->ActivePlayers).AllocatorInstance.Data,
             (this->ActivePlayers).ArrayNum,local_res8,(TLess<void> *)local_res20);
  if (((this->ActivePlayers).ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar7 = (TArray<FName,TSizedDefaultAllocator<32>_> *)
           (**(code **)(**(longlong **)(this->ActivePlayers).AllocatorInstance.Data + 0x2c8))();
  if ((pTVar7 != (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) && (pTVar7->ArrayNum != 0)) {
    this_00 = &this->ValidMarkers;
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=(this_00,pTVar7);
    if (((this->ActivePlayers).ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_54 = 0;
    (this->ActivePlayers).AllocatorInstance.Data[0x70] = (FScriptContainerElement)0x1;
    iVar10 = (this->ActivePlayers).ArrayNum;
    this->bCanUseMarkerSync = true;
    if (0 < iVar10) {
      local_50 = 0;
      do {
        lVar17 = local_50;
        uVar12 = local_54;
        uVar11 = 0;
        if ((int)local_54 < iVar10) {
          uVar11 = ~local_54 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar15 = (this->ActivePlayers).AllocatorInstance.Data + lVar17;
        if (param_1 != (FAnimGroupInstance *)0x0) {
          iVar10 = (param_1->ActivePlayers).ArrayNum;
          pFVar18 = (param_1->ActivePlayers).AllocatorInstance.Data;
          pFVar14 = pFVar18 + (longlong)iVar10 * 0x78;
          while( true ) {
            if ((param_1->ActivePlayers).ArrayNum != iVar10) {
              local_res18[0] = 0;
              `TCheckedPointerIterator<FAnimTickRecord_const_,int,0>::operator!='::__l2::<lambda_1>
              ::operator()(local_res18);
            }
            lVar17 = local_50;
            if (pFVar18 == pFVar14) {
              puVar4 = *(undefined4 **)(pFVar15 + 0x68);
              *puVar4 = 0xfffffffe;
              puVar4[2] = 0xfffffffe;
              goto LAB_14740de69;
            }
            puVar4 = *(undefined4 **)(pFVar15 + 0x68);
            if (*(undefined4 **)(pFVar18 + 0x68) == puVar4) break;
            pFVar18 = pFVar18 + 0x78;
          }
          if (*(longlong *)pFVar18 != *(longlong *)pFVar15) {
            *puVar4 = 0xfffffffe;
            puVar4[2] = 0xfffffffe;
          }
        }
LAB_14740de69:
        if ((((uVar12 != 0) && (0 < (this->ValidMarkers).ArrayNum)) &&
            (plVar8 = (longlong *)(**(code **)(**(longlong **)pFVar15 + 0x2c8))(),
            plVar8 != (longlong *)0x0)) && ((int)plVar8[1] != 0)) {
          pFVar15[0x70] = (FScriptContainerElement)0x1;
          uVar11 = (this->ValidMarkers).ArrayNum - 1;
          lVar17 = local_50;
          if (-1 < (int)uVar11) {
            lVar16 = (longlong)(int)uVar11;
            lVar19 = lVar16 * 8;
            do {
              uVar13 = ~uVar11 >> 0x1f;
              uVar12 = 0;
              if ((int)uVar11 < (this->ValidMarkers).ArrayNum) {
                uVar12 = uVar13;
              }
              if ((uVar12 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              plVar9 = (longlong *)*plVar8;
              plVar2 = plVar9 + (int)plVar8[1];
              if (plVar9 != plVar2) {
                do {
                  if (*plVar9 == *(longlong *)((this_00->AllocatorInstance).Data + lVar19))
                  goto LAB_14740dfa4;
                  plVar9 = plVar9 + 1;
                } while (plVar9 != plVar2);
              }
              uVar12 = 0;
              if ((int)uVar11 < (this->ValidMarkers).ArrayNum) {
                uVar12 = uVar13;
              }
              if ((uVar12 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              iVar3 = (this->ValidMarkers).ArrayNum;
              pFVar15 = (this_00->AllocatorInstance).Data;
              iVar10 = ~uVar11 + iVar3;
              if (1 < iVar10) {
                iVar10 = 1;
              }
              if (iVar10 != 0) {
                memmove(pFVar15 + lVar16 * 8,pFVar15 + (longlong)(iVar3 - iVar10) * 8,
                        (longlong)iVar10 << 3);
              }
              piVar1 = &(this->ValidMarkers).ArrayNum;
              *piVar1 = *piVar1 + -1;
LAB_14740dfa4:
              lVar16 = lVar16 + -1;
              lVar19 = lVar19 + -8;
              uVar11 = uVar11 - 1;
              lVar17 = local_50;
              uVar12 = local_54;
            } while (-1 < (int)uVar11);
          }
        }
        iVar10 = (this->ActivePlayers).ArrayNum;
        local_54 = uVar12 + 1;
        local_50 = lVar17 + 0x78;
      } while ((int)local_54 < iVar10);
    }
    iVar10 = (this->ValidMarkers).ArrayNum;
    this->bCanUseMarkerSync = 0 < iVar10;
    AlgoImpl::
    IntroSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,FNameLexicalLess>_>
              ((FName *)(this_00->AllocatorInstance).Data,iVar10,local_res8,
               (FNameLexicalLess *)&local_58);
    if (((param_1 == (FAnimGroupInstance *)0x0) ||
        (iVar10 = (this->ValidMarkers).ArrayNum, iVar10 != (param_1->ValidMarkers).ArrayNum)) ||
       (bVar6 = CompareItems<FName,int>
                          ((FName *)(this_00->AllocatorInstance).Data,
                           (FName *)(param_1->ValidMarkers).AllocatorInstance.Data,iVar10), !bVar6))
    {
      iVar10 = (this->ActivePlayers).ArrayNum;
      uVar12 = 0;
      if (0 < iVar10) {
        lVar17 = 0;
        do {
          uVar11 = 0;
          if ((int)uVar12 < iVar10) {
            uVar11 = ~uVar12 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar12 = uVar12 + 1;
          puVar4 = *(undefined4 **)((this->ActivePlayers).AllocatorInstance.Data + lVar17 + 0x68);
          lVar17 = lVar17 + 0x78;
          *puVar4 = 0xfffffffe;
          puVar4[2] = 0xfffffffe;
          iVar10 = (this->ActivePlayers).ArrayNum;
        } while ((int)uVar12 < iVar10);
      }
    }
    if (this->bCanUseMarkerSync != false) {
      return;
    }
  }
  this->bCanUseMarkerSync = false;
  piVar1 = &(this->ValidMarkers).ArrayMax;
  (this->ValidMarkers).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->ValidMarkers).AllocatorInstance,0,piVar1);
  }
  iVar10 = (this->ActivePlayers).ArrayNum;
  pFVar15 = (this->ActivePlayers).AllocatorInstance.Data;
  pFVar18 = pFVar15 + (longlong)iVar10 * 0x78;
  while( true ) {
    if ((this->ActivePlayers).ArrayNum != iVar10) {
      `TCheckedPointerIterator<FAnimTickRecord,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_57);
    }
    if (pFVar15 == pFVar18) break;
    puVar4 = *(undefined4 **)(pFVar15 + 0x68);
    *puVar4 = 0xfffffffe;
    puVar4[2] = 0xfffffffe;
    pFVar15[0x70] = (FScriptContainerElement)0x0;
    pFVar15 = pFVar15 + 0x78;
  }
  return;
}

// TestTickRecordForLeadership @ 147419cb0

void __thiscall
FAnimGroupInstance::TestTickRecordForLeadership(FAnimGroupInstance *this,Type param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  FAnimTickRecord *pFVar10;
  longlong lVar11;
  uint uVar12;
  
  if (((this->ActivePlayers).ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActivePlayers.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AnimationAsset.cpp"
                         ,0x26,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = (this->ActivePlayers).ArrayNum;
  uVar12 = iVar8 - 1;
  uVar7 = 0;
  if ((int)uVar12 < iVar8) {
    uVar7 = ~uVar12 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = (this->ActivePlayers).AllocatorInstance.Data;
  lVar11 = (longlong)(int)uVar12 * 0x78;
  lVar4 = *(longlong *)(pFVar3 + lVar11);
  pUVar9 = Z_Construct_UClass_UAnimMontage_NoRegister();
  iVar2 = (int)pUVar9->_padding_;
  if ((iVar2 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
      &pUVar9->_padding_)) {
    if (*(float *)(pFVar3 + lVar11 + 0x14) <= this->MontageLeaderWeight) {
      if (uVar12 != 0) {
        uVar7 = 0;
        if (iVar8 <= (this->ActivePlayers).ArrayNum) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar10 = (FAnimTickRecord *)((this->ActivePlayers).AllocatorInstance.Data + lVar11);
        DestructItems<FAnimTickRecord,int>(pFVar10,1);
        iVar8 = ((this->ActivePlayers).ArrayNum - uVar12) + -1;
        if (iVar8 != 0) {
          memmove(pFVar10,pFVar10 + 1,(longlong)iVar8 * 0x78);
        }
        piVar1 = &(this->ActivePlayers).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x78,8,(ForAnyElementType *)this,(this->ActivePlayers).ArrayNum,
                   &(this->ActivePlayers).ArrayMax);
      }
    }
    else {
      iVar8 = iVar8 + -2;
      if (-1 < iVar8) {
        if (((this->ActivePlayers).ArrayNum < (int)uVar12) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar10 = (FAnimTickRecord *)
                  ((this->ActivePlayers).AllocatorInstance.Data + (longlong)iVar8 * 0x78);
        DestructItems<FAnimTickRecord,int>(pFVar10,1);
        iVar8 = ((this->ActivePlayers).ArrayNum - iVar8) + -1;
        if (iVar8 != 0) {
          memmove(pFVar10,pFVar10 + 1,(longlong)iVar8 * 0x78);
        }
        piVar1 = &(this->ActivePlayers).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x78,8,(ForAnyElementType *)this,(this->ActivePlayers).ArrayNum,
                   &(this->ActivePlayers).ArrayMax);
      }
      if (((this->ActivePlayers).ArrayNum != 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ActivePlayers.Num() == 1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AnimationAsset.cpp"
                             ,0x3c,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this->MontageLeaderWeight = *(float *)(pFVar3 + lVar11 + 0x14);
      *(undefined4 *)(pFVar3 + lVar11 + 0x74) = 0x40400000;
    }
    if ((this->ActivePlayers).ArrayNum == 1) {
      return;
    }
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4966581824680624206>,true,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AnimationAsset.cpp"
                       ,0x4e,"ActivePlayers.Num() == 1");
    if (!bVar6) {
      return;
    }
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (param_1 == CanBeLeader) {
LAB_147419f91:
    *(undefined4 *)(pFVar3 + lVar11 + 0x74) = *(undefined4 *)(pFVar3 + lVar11 + 0x14);
  }
  else {
    if (param_1 != AlwaysLeader) {
      if (param_1 == TransitionLeader) goto LAB_147419f91;
      if (param_1 != ExclusiveAlwaysLeader) {
        return;
      }
    }
    *(undefined4 *)(pFVar3 + lVar11 + 0x74) = 0x40000000;
  }
  return;
}

