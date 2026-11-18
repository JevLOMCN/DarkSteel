// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsControl
// Functions: 11

// AddBodyModifier @ 14d9c5910

void __thiscall
FPhysicsControlNameRecords::AddBodyModifier
          (FPhysicsControlNameRecords *this,FName param_1,FName param_2)

{
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  FName FVar1;
  uint uVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined1 *puVar4;
  FName *pFVar5;
  undefined1 *puVar6;
  uint uVar7;
  FName local_res8;
  FName local_res10;
  FName local_res18 [2];
  
  this_00 = &this->BodyModifierSets;
  local_res10 = param_1;
  local_res18[0] = param_2;
  uVar2 = ::GetTypeHash(param_2.ComparisonIndex.Value);
  puVar6 = &(this->BodyModifierSets).field_0x40;
  uVar2 = uVar2 + param_2.Number;
  if (*(int *)&(this->BodyModifierSets).field_0x8 != *(int *)&(this->BodyModifierSets).field_0x34) {
    puVar4 = *(undefined1 **)puVar6;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->BodyModifierSets).field_0x38;
    }
    uVar7 = *(uint *)(puVar4 + (ulonglong)
                               (*(int *)&(this->BodyModifierSets).field_0x48 - 1U & uVar2) * 4);
    if (uVar7 != 0xffffffff) {
      do {
        pFVar5 = (FName *)((longlong)(int)uVar7 * 0x20 + *(longlong *)this_00);
        if (*pFVar5 == local_res18[0]) {
          if ((uVar7 != 0xffffffff) && (pFVar5 != (FName *)0x0)) {
            pTVar3 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar5 + 1);
            goto LAB_14d9c59b3;
          }
          break;
        }
        uVar7 = pFVar5[3].ComparisonIndex.Value;
      } while (uVar7 != 0xffffffff);
    }
  }
  pTVar3 = TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
           ::EmplaceByHash<FName_const_&>
                     ((TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                       *)this_00,uVar2,local_res18);
LAB_14d9c59b3:
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>(pTVar3,&local_res10);
  ::FName::FName(&local_res8,L"All");
  FVar1 = local_res8;
  uVar2 = ::GetTypeHash(local_res8.ComparisonIndex.Value);
  uVar2 = uVar2 + FVar1.Number;
  if (*(int *)&(this->BodyModifierSets).field_0x8 != *(int *)&(this->BodyModifierSets).field_0x34) {
    puVar6 = *(undefined1 **)puVar6;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->BodyModifierSets).field_0x38;
    }
    uVar7 = *(uint *)(puVar6 + (ulonglong)
                               (*(int *)&(this->BodyModifierSets).field_0x48 - 1U & uVar2) * 4);
    if (uVar7 != 0xffffffff) {
      do {
        pFVar5 = (FName *)((longlong)(int)uVar7 * 0x20 + *(longlong *)this_00);
        if (*pFVar5 == local_res8) {
          if (pFVar5 != (FName *)0x0) {
            pTVar3 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar5 + 1);
            goto LAB_14d9c5a49;
          }
          break;
        }
        uVar7 = pFVar5[3].ComparisonIndex.Value;
      } while (uVar7 != 0xffffffff);
    }
  }
  pTVar3 = TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
           ::EmplaceByHash<FName>
                     ((TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                       *)this_00,uVar2,&local_res8);
LAB_14d9c5a49:
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>(pTVar3,&local_res10);
  return;
}

// AddBodyModifier @ 14d9c5a90

void __thiscall
FPhysicsControlNameRecords::AddBodyModifier
          (FPhysicsControlNameRecords *this,FName param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2)

{
  TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  int iVar1;
  FName FVar2;
  uint uVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar4;
  FName *pFVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  FName *pFVar8;
  FName *pFVar9;
  uint uVar10;
  FName local_res8;
  FName local_res10;
  
  pFVar9 = (FName *)(param_2->AllocatorInstance).Data;
  this_00 = &this->BodyModifierSets;
  iVar1 = param_2->ArrayNum;
  pFVar8 = pFVar9 + iVar1;
  local_res10 = param_1;
  while( true ) {
    if (param_2->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (pFVar9 == pFVar8) break;
    FVar2 = *pFVar9;
    local_res8 = FVar2;
    uVar3 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
    uVar3 = uVar3 + FVar2.Number;
    if (*(int *)&(this->BodyModifierSets).field_0x8 != *(int *)&(this->BodyModifierSets).field_0x34)
    {
      puVar7 = *(undefined1 **)&(this->BodyModifierSets).field_0x40;
      puVar6 = &(this->BodyModifierSets).field_0x38;
      if (puVar7 != (undefined1 *)0x0) {
        puVar6 = puVar7;
      }
      uVar10 = *(uint *)(puVar6 + (ulonglong)
                                  (*(int *)&(this->BodyModifierSets).field_0x48 - 1U & uVar3) * 4);
      if (uVar10 != 0xffffffff) {
        do {
          pFVar5 = (FName *)((longlong)(int)uVar10 * 0x20 + *(longlong *)this_00);
          if (*pFVar5 == local_res8) {
            if (pFVar5 != (FName *)0x0) {
              pTVar4 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar5 + 1);
              goto LAB_14d9c5b59;
            }
            break;
          }
          uVar10 = pFVar5[3].ComparisonIndex.Value;
        } while (uVar10 != 0xffffffff);
      }
    }
    pTVar4 = TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
             ::EmplaceByHash<FName_const_&>
                       ((TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                         *)this_00,uVar3,&local_res8);
LAB_14d9c5b59:
    TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>(pTVar4,&local_res10);
    pFVar9 = pFVar9 + 1;
  }
  ::FName::FName(&local_res8,L"All");
  FVar2 = local_res8;
  uVar3 = ::GetTypeHash(local_res8.ComparisonIndex.Value);
  uVar3 = uVar3 + FVar2.Number;
  if (*(int *)&(this->BodyModifierSets).field_0x8 != *(int *)&(this->BodyModifierSets).field_0x34) {
    puVar7 = *(undefined1 **)&(this->BodyModifierSets).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->BodyModifierSets).field_0x38;
    }
    uVar10 = *(uint *)(puVar7 + (ulonglong)
                                (*(int *)&(this->BodyModifierSets).field_0x48 - 1U & uVar3) * 4);
    if (uVar10 != 0xffffffff) {
      do {
        pFVar8 = (FName *)((longlong)(int)uVar10 * 0x20 + *(longlong *)this_00);
        if (*pFVar8 == local_res8) {
          if (pFVar8 != (FName *)0x0) {
            pTVar4 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar8 + 1);
            goto LAB_14d9c5bf9;
          }
          break;
        }
        uVar10 = pFVar8[3].ComparisonIndex.Value;
      } while (uVar10 != 0xffffffff);
    }
  }
  pTVar4 = TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
           ::EmplaceByHash<FName>
                     ((TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                       *)this_00,uVar3,&local_res8);
LAB_14d9c5bf9:
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>(pTVar4,&local_res10);
  return;
}

// AddBodyModifiers @ 14d9c5c90

void __thiscall
FPhysicsControlNameRecords::AddBodyModifiers
          (FPhysicsControlNameRecords *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1,
          FName param_2)

{
  FName *pFVar1;
  FName local_res8;
  
  AddUniqueNamesToSet(param_1,param_2,&this->BodyModifierSets);
  pFVar1 = ::FName::FName(&local_res8,L"All");
  AddUniqueNamesToSet(param_1,*pFVar1,&this->BodyModifierSets);
  return;
}

// AddControl @ 14d9c5d80

void __thiscall
FPhysicsControlNameRecords::AddControl(FPhysicsControlNameRecords *this,FName param_1,FName param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  FName FVar3;
  uint uVar4;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined1 *puVar6;
  FName *pFVar7;
  undefined1 *puVar8;
  uint uVar9;
  FName local_res8;
  FName local_res10;
  FName local_res18 [2];
  
  local_res10 = param_1;
  local_res18[0] = param_2;
  uVar4 = ::GetTypeHash(param_2.ComparisonIndex.Value);
  puVar1 = &(this->ControlSets).field_0x38;
  puVar8 = &(this->ControlSets).field_0x40;
  puVar2 = &(this->ControlSets).field_0x48;
  uVar4 = uVar4 + param_2.Number;
  if (*(int *)&(this->ControlSets).field_0x8 != *(int *)&(this->ControlSets).field_0x34) {
    puVar6 = *(undefined1 **)puVar8;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = puVar1;
    }
    uVar9 = *(uint *)(puVar6 + (ulonglong)(*(int *)puVar2 - 1U & uVar4) * 4);
    if (uVar9 != 0xffffffff) {
      do {
        pFVar7 = (FName *)((longlong)(int)uVar9 * 0x20 + *(longlong *)&this->ControlSets);
        if (*pFVar7 == local_res18[0]) {
          if ((uVar9 != 0xffffffff) && (pFVar7 != (FName *)0x0)) {
            pTVar5 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar7 + 1);
            goto LAB_14d9c5e2f;
          }
          break;
        }
        uVar9 = pFVar7[3].ComparisonIndex.Value;
      } while (uVar9 != 0xffffffff);
    }
  }
  pTVar5 = TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
           ::EmplaceByHash<FName_const_&>
                     ((TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                       *)this,uVar4,local_res18);
LAB_14d9c5e2f:
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>(pTVar5,&local_res10);
  ::FName::FName(&local_res8,L"All");
  FVar3 = local_res8;
  uVar4 = ::GetTypeHash(local_res8.ComparisonIndex.Value);
  uVar4 = uVar4 + FVar3.Number;
  if (*(int *)&(this->ControlSets).field_0x8 != *(int *)&(this->ControlSets).field_0x34) {
    puVar8 = *(undefined1 **)puVar8;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = puVar1;
    }
    uVar9 = *(uint *)(puVar8 + (ulonglong)(*(int *)puVar2 - 1U & uVar4) * 4);
    if (uVar9 != 0xffffffff) {
      do {
        pFVar7 = (FName *)((longlong)(int)uVar9 * 0x20 + *(longlong *)&this->ControlSets);
        if (*pFVar7 == local_res8) {
          if (pFVar7 != (FName *)0x0) {
            pTVar5 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar7 + 1);
            goto LAB_14d9c5ec9;
          }
          break;
        }
        uVar9 = pFVar7[3].ComparisonIndex.Value;
      } while (uVar9 != 0xffffffff);
    }
  }
  pTVar5 = TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
           ::EmplaceByHash<FName>
                     ((TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                       *)this,uVar4,&local_res8);
LAB_14d9c5ec9:
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>(pTVar5,&local_res10);
  return;
}

// AddControl @ 14d9c5f20

void __thiscall
FPhysicsControlNameRecords::AddControl
          (FPhysicsControlNameRecords *this,FName param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FName FVar2;
  uint uVar3;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar4;
  FName *pFVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  FName *pFVar8;
  FName *pFVar9;
  uint uVar10;
  FName local_res8;
  FName local_res10;
  
  pFVar9 = (FName *)(param_2->AllocatorInstance).Data;
  iVar1 = param_2->ArrayNum;
  pFVar8 = pFVar9 + iVar1;
  local_res10 = param_1;
  while( true ) {
    if (param_2->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res8);
    }
    if (pFVar9 == pFVar8) break;
    FVar2 = *pFVar9;
    local_res8 = FVar2;
    uVar3 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
    uVar3 = uVar3 + FVar2.Number;
    if (*(int *)&(this->ControlSets).field_0x8 != *(int *)&(this->ControlSets).field_0x34) {
      puVar7 = *(undefined1 **)&(this->ControlSets).field_0x40;
      puVar6 = &(this->ControlSets).field_0x38;
      if (puVar7 != (undefined1 *)0x0) {
        puVar6 = puVar7;
      }
      uVar10 = *(uint *)(puVar6 + (ulonglong)(*(int *)&(this->ControlSets).field_0x48 - 1U & uVar3)
                                  * 4);
      if (uVar10 != 0xffffffff) {
        do {
          pFVar5 = (FName *)((longlong)(int)uVar10 * 0x20 + *(longlong *)&this->ControlSets);
          if (*pFVar5 == local_res8) {
            if (pFVar5 != (FName *)0x0) {
              pTVar4 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar5 + 1);
              goto LAB_14d9c5fe9;
            }
            break;
          }
          uVar10 = pFVar5[3].ComparisonIndex.Value;
        } while (uVar10 != 0xffffffff);
      }
    }
    pTVar4 = TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
             ::EmplaceByHash<FName_const_&>
                       ((TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                         *)this,uVar3,&local_res8);
LAB_14d9c5fe9:
    TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>(pTVar4,&local_res10);
    pFVar9 = pFVar9 + 1;
  }
  ::FName::FName(&local_res8,L"All");
  FVar2 = local_res8;
  uVar3 = ::GetTypeHash(local_res8.ComparisonIndex.Value);
  uVar3 = uVar3 + FVar2.Number;
  if (*(int *)&(this->ControlSets).field_0x8 != *(int *)&(this->ControlSets).field_0x34) {
    puVar7 = *(undefined1 **)&(this->ControlSets).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->ControlSets).field_0x38;
    }
    uVar10 = *(uint *)(puVar7 + (ulonglong)(*(int *)&(this->ControlSets).field_0x48 - 1U & uVar3) *
                                4);
    if (uVar10 != 0xffffffff) {
      do {
        pFVar8 = (FName *)((longlong)(int)uVar10 * 0x20 + *(longlong *)&this->ControlSets);
        if (*pFVar8 == local_res8) {
          if (pFVar8 != (FName *)0x0) {
            pTVar4 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(pFVar8 + 1);
            goto LAB_14d9c6089;
          }
          break;
        }
        uVar10 = pFVar8[3].ComparisonIndex.Value;
      } while (uVar10 != 0xffffffff);
    }
  }
  pTVar4 = TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
           ::EmplaceByHash<FName>
                     ((TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                       *)this,uVar3,&local_res8);
LAB_14d9c6089:
  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>(pTVar4,&local_res10);
  return;
}

// AddControls @ 14d9c61d0

void __thiscall
FPhysicsControlNameRecords::AddControls
          (FPhysicsControlNameRecords *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1,
          FName param_2)

{
  FName *pFVar1;
  FName local_res8;
  
  AddUniqueNamesToSet(param_1,param_2,&this->ControlSets);
  pFVar1 = ::FName::FName(&local_res8,"All");
  AddUniqueNamesToSet(param_1,*pFVar1,&this->ControlSets);
  return;
}

// GetBodyModifierNamesInSet @ 14d9dc3b0

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
FPhysicsControlNameRecords::GetBodyModifierNamesInSet
          (FPhysicsControlNameRecords *this,FName param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                   *)&this->BodyModifierSets,param_1);
  if (pTVar1 == (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        atexit(`FPhysicsControlNameRecords::GetBodyModifierNamesInSet'::__l2::
               _dynamic_atexit_destructor_for__FailureResult__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    pTVar1 = &FailureResult;
  }
  return pTVar1;
}

// GetControlNamesInSet @ 14d9dd890

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
FPhysicsControlNameRecords::GetControlNamesInSet(FPhysicsControlNameRecords *this,FName param_1)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
           ::Find((TMapBase<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>
                   *)this,param_1);
  if (pTVar1 == (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        atexit(`FPhysicsControlNameRecords::GetControlNamesInSet'::__l2::
               _dynamic_atexit_destructor_for__FailureResult__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    pTVar1 = &FailureResult;
  }
  return pTVar1;
}

// RemoveBodyModifier @ 14d9e6fa0

void __thiscall
FPhysicsControlNameRecords::RemoveBodyModifier(FPhysicsControlNameRecords *this,FName param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  FName *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  FName local_res10;
  uint local_res18;
  int local_res20;
  undefined4 uStack_9c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  iVar3 = *(int *)&(this->BodyModifierSets).field_0x28;
  puVar1 = &(this->BodyModifierSets).field_0x10;
  iVar13 = 0;
  iVar15 = 0;
  uVar7 = 1;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->BodyModifierSets).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14d9e704e;
      uVar12 = puVar16[lVar9 + 1];
    }
    uVar7 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    iVar8 = local_res20 + -1 + iVar15;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14d9e704e:
  uVar12 = *(uint *)&(this->BodyModifierSets).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar7,iVar13);
  TStack_70.CurrentBitIndex = iVar8;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_70._28_4_ = iVar8;
  TStack_70.BaseBitIndex = iVar15;
  uStack_50 = CONCAT44(uStack_9c,
                       *(int *)&(this->BodyModifierSets).field_0x8 -
                       *(int *)&(this->BodyModifierSets).field_0x34);
  local_res10 = param_1;
  local_res18 = uVar12;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->BodyModifierSets).field_0x28;
  if (uVar12 != uVar7) {
    puVar14 = *(undefined1 **)&(this->BodyModifierSets).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar7;
      local_res18 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14d9e7150;
      uVar12 = *(uint *)(puVar14 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar12 = (int)lVar9 + -1 + uVar11;
    local_res18 = uVar12;
    if ((int)uVar7 < (int)uVar12) {
      uVar12 = uVar7;
      local_res18 = uVar7;
    }
  }
LAB_14d9e7150:
  do {
    if (*(int *)&(this->BodyModifierSets).field_0x8 - *(int *)&(this->BodyModifierSets).field_0x34
        != (int)uStack_50) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_70.CurrentBitIndex == uVar12) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return;
    }
    puVar10 = (ulonglong *)
              (*(longlong *)&this->BodyModifierSets + 8 + (longlong)TStack_70.CurrentBitIndex * 0x20
              );
    if ((((FName *)*puVar10 <= &local_res10) &&
        (&local_res10 < (FName *)*puVar10 + *(int *)((longlong)puVar10 + 0xc))) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar3 = (int)puVar10[1];
    if (iVar3 != 0) {
      pFVar4 = (FName *)*puVar10;
      iVar15 = 0;
      lVar9 = 0;
      bVar6 = *pFVar4 != local_res10;
      iVar13 = 0;
      do {
        iVar8 = iVar13;
        do {
          lVar9 = lVar9 + 1;
          iVar8 = iVar8 + 1;
          if (iVar3 <= lVar9) break;
        } while (bVar6 == (pFVar4[lVar9] != local_res10));
        if (bVar6 != false) {
          if (iVar15 != iVar13) {
            memmove(pFVar4 + iVar15,pFVar4 + iVar13,(longlong)(iVar8 - iVar13) << 3);
          }
          iVar15 = iVar15 + (iVar8 - iVar13);
        }
        bVar6 = (bool)(bVar6 ^ 1);
        iVar13 = iVar8;
      } while (lVar9 < iVar3);
      *(int *)(puVar10 + 1) = iVar15;
      uVar12 = local_res18;
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  } while( true );
}

// RemoveControl @ 14d9e75c0

void __thiscall
FPhysicsControlNameRecords::RemoveControl(FPhysicsControlNameRecords *this,FName param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  FName *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  FName local_res10;
  undefined1 local_res18 [8];
  uint local_res20;
  undefined4 uStack_9c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  iVar3 = *(int *)&(this->ControlSets).field_0x28;
  puVar1 = &(this->ControlSets).field_0x10;
  iVar13 = 0;
  iVar15 = 0;
  uVar7 = 1;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->ControlSets).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14d9e766d;
      uVar12 = puVar16[lVar9 + 1];
    }
    uVar7 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = (int)lVar9 + -1 + iVar15;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14d9e766d:
  uVar12 = *(uint *)&(this->ControlSets).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_78._padding_ = CONCAT44(uVar7,iVar13);
  TStack_78.CurrentBitIndex = iVar8;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_78._28_4_ = iVar8;
  TStack_78.BaseBitIndex = iVar15;
  uStack_58 = CONCAT44(uStack_9c,
                       *(int *)&(this->ControlSets).field_0x8 -
                       *(int *)&(this->ControlSets).field_0x34);
  local_res10 = param_1;
  local_res20 = uVar12;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->ControlSets).field_0x28;
  if (uVar12 != uVar7) {
    puVar14 = *(undefined1 **)&(this->ControlSets).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar7;
      local_res20 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14d9e7770;
      uVar12 = *(uint *)(puVar14 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar12 = (int)lVar9 + -1 + uVar11;
    local_res20 = uVar12;
    if ((int)uVar7 < (int)uVar12) {
      uVar12 = uVar7;
      local_res20 = uVar7;
    }
  }
LAB_14d9e7770:
  do {
    if (*(int *)&(this->ControlSets).field_0x8 - *(int *)&(this->ControlSets).field_0x34 !=
        (int)uStack_58) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_78.CurrentBitIndex == uVar12) &&
       (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return;
    }
    puVar10 = (ulonglong *)
              (*(longlong *)&this->ControlSets + 8 + (longlong)TStack_78.CurrentBitIndex * 0x20);
    if ((((FName *)*puVar10 <= &local_res10) &&
        (&local_res10 < (FName *)*puVar10 + *(int *)((longlong)puVar10 + 0xc))) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar3 = (int)puVar10[1];
    if (iVar3 != 0) {
      pFVar4 = (FName *)*puVar10;
      iVar15 = 0;
      lVar9 = 0;
      bVar6 = *pFVar4 != local_res10;
      iVar13 = 0;
      do {
        iVar8 = iVar13;
        do {
          lVar9 = lVar9 + 1;
          iVar8 = iVar8 + 1;
          if (iVar3 <= lVar9) break;
        } while (bVar6 == (pFVar4[lVar9] != local_res10));
        if (bVar6 != false) {
          if (iVar15 != iVar13) {
            memmove(pFVar4 + iVar15,pFVar4 + iVar13,(longlong)(iVar8 - iVar13) << 3);
          }
          iVar15 = iVar15 + (iVar8 - iVar13);
        }
        bVar6 = (bool)(bVar6 ^ 1);
        iVar13 = iVar8;
      } while (lVar9 < iVar3);
      *(int *)(puVar10 + 1) = iVar15;
      uVar12 = local_res20;
    }
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  } while( true );
}

// Reset @ 14d9e80d0

void __thiscall FPhysicsControlNameRecords::Reset(FPhysicsControlNameRecords *this)

{
  TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)this);
  TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *)&this->BodyModifierSets);
  return;
}

