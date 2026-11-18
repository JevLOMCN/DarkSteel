// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FractureEngine
// Functions: 6

// operator() @ 14e803f50

bool __thiscall
`FFractureEngineBoneSelection::Sanitize'::__l5::<lambda_2>::operator()(void *this,int param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  FManagedArrayCollection *this_00;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  FName *pFVar9;
  TManagedArray<int> *pTVar10;
  uint *puVar11;
  uint uVar12;
  uint *local_res8;
  uint local_res10 [2];
  FName local_res18 [2];
  
  if ((param_1 < 0) ||
     (iVar7 = (**(code **)(*(longlong *)(**(longlong **)this + 0x110) + 0x60))(),
     FVar4 = FTransformCollection::TransformGroup, iVar7 <= param_1)) {
    return true;
  }
  puVar2 = *(undefined8 **)this;
  this_00 = (FManagedArrayCollection *)*puVar2;
  local_res10[0] = param_1;
  pFVar9 = ::FName::FName(local_res18,"Parent");
  pTVar10 = FManagedArrayCollection::GetAttribute<int>(this_00,*pFVar9,FVar4);
  if (((int)local_res10[0] < 0) ||
     (iVar7 = (**(code **)(*(longlong *)pTVar10 + 0x60))(pTVar10), uVar12 = local_res10[0],
     iVar7 <= (int)local_res10[0])) {
    local_res8 = local_res10;
    bVar5 = HasSelectedAncestor'::__l3::<lambda_1>::operator()(&local_res8);
    uVar12 = local_res10[0];
    if (!bVar5) {
      return false;
    }
  }
  while( true ) {
    uVar8 = 0;
    if ((int)uVar12 < *(int *)&pTVar10->field_0x18) {
      uVar8 = ~uVar12 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    if (*(int *)((longlong)(int)uVar12 * 4 + *(longlong *)&pTVar10->field_0x10) == -1) {
      return false;
    }
    uVar8 = 0;
    if ((int)uVar12 < *(int *)&pTVar10->field_0x18) {
      uVar8 = ~uVar12 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) break;
    uVar12 = *(uint *)((longlong)(int)uVar12 * 4 + *(longlong *)&pTVar10->field_0x10);
    puVar11 = (uint *)puVar2[1];
    puVar1 = puVar11 + *(int *)(puVar2 + 2);
    for (; puVar11 != puVar1; puVar11 = puVar11 + 1) {
      if (*puVar11 == uVar12) {
        return true;
      }
    }
  }
  pcVar3 = (code *)swi(3);
  uVar6 = (*pcVar3)();
  return (bool)uVar6;
}

// ConvertSelectionToClusterNodes @ 14e80b7f0

void __thiscall
FFractureEngineBoneSelection::ConvertSelectionToClusterNodes(FFractureEngineBoneSelection *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FGeometryCollection *pFVar4;
  code *pcVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res10 [8];
  int local_res18 [2];
  TArray<int,TSizedDefaultAllocator<32>_> *local_res20;
  TArray<int,TSizedDefaultAllocator<32>_> local_58;
  
  pFVar4 = this->GeometryCollection;
  Sanitize(this,true);
  iVar9 = (this->SelectedBones).ArrayNum;
  piVar1 = &(this->SelectedBones).ArrayNum;
  pFVar12 = (this->SelectedBones).AllocatorInstance.Data;
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar2 = pFVar12 + (longlong)iVar9 * 4;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  local_res20 = &this->SelectedBones;
  do {
    if (*piVar1 != iVar9) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    pTVar6 = local_res20;
    if (pFVar12 == pFVar2) {
      if ((local_res20 == &local_58) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar11 = (longlong)local_58.ArrayNum;
      if (local_58.ArrayNum != 0) {
        iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,local_58.ArrayNum,&pTVar6->AllocatorInstance,piVar1,&pTVar6->ArrayMax
                          );
        memcpy((pTVar6->AllocatorInstance).Data + (longlong)iVar9 * 4,
               local_58.AllocatorInstance.Data,lVar11 << 2);
      }
      Sanitize(this,true);
      if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      return;
    }
    uVar3 = *(uint *)pFVar12;
    lVar11 = (longlong)(int)uVar3;
    local_res18[0] = (int)FManagedArrayCollection::Invalid;
    uVar10 = ~uVar3 >> 0x1f;
    uVar8 = 0;
    if ((int)uVar3 < *(int *)&(pFVar4->SimulationType).field_0x18) {
      uVar8 = uVar10;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (*(int *)(*(longlong *)&(pFVar4->SimulationType).field_0x10 + lVar11 * 4) == 1) {
      uVar8 = 0;
      if ((int)uVar3 < (int)pFVar4->_padding_) {
        uVar8 = uVar10;
      }
joined_r0x00014e80b9b9:
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_res18[0] = *(int *)(pFVar4->_padding_ + lVar11 * 4);
    }
    else {
      uVar8 = 0;
      if ((int)uVar3 < *(int *)&(pFVar4->SimulationType).field_0x18) {
        uVar8 = uVar10;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(int *)(*(longlong *)&(pFVar4->SimulationType).field_0x10 + lVar11 * 4) == 0) {
        uVar8 = 0;
        if ((int)uVar3 < (int)pFVar4->_padding_) {
          uVar8 = uVar10;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar3 = *(uint *)(pFVar4->_padding_ + lVar11 * 4);
        lVar11 = (longlong)(int)uVar3;
        uVar8 = 0;
        if ((int)uVar3 < (int)pFVar4->_padding_) {
          uVar8 = ~uVar3 >> 0x1f;
        }
        goto joined_r0x00014e80b9b9;
      }
    }
    if (local_res18[0] != FManagedArrayCollection::Invalid) {
      TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>(&local_58,local_res18);
    }
    pFVar12 = pFVar12 + 4;
  } while( true );
}

// HasSelectedAncestor @ 14e815260

bool __thiscall
FFractureEngineBoneSelection::HasSelectedAncestor(FFractureEngineBoneSelection *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  FGeometryCollection *this_00;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  FName *pFVar8;
  TManagedArray<int> *pTVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  uint *local_res8;
  uint local_res10 [2];
  FName local_res18 [2];
  
  FVar3 = FTransformCollection::TransformGroup;
  this_00 = this->GeometryCollection;
  local_res10[0] = param_1;
  pFVar8 = ::FName::FName(local_res18,"Parent");
  pTVar9 = FManagedArrayCollection::GetAttribute<int>
                     ((FManagedArrayCollection *)this_00,*pFVar8,FVar3);
  if (((int)local_res10[0] < 0) ||
     (iVar6 = (**(code **)(*(longlong *)pTVar9 + 0x60))(pTVar9), uVar11 = local_res10[0],
     iVar6 <= (int)local_res10[0])) {
    local_res8 = local_res10;
    bVar4 = `FFractureEngineBoneSelection::HasSelectedAncestor'::__l3::<lambda_1>::operator()
                      (&local_res8);
    uVar11 = local_res10[0];
    if (!bVar4) {
      return false;
    }
  }
  while( true ) {
    uVar7 = 0;
    if ((int)uVar11 < *(int *)&pTVar9->field_0x18) {
      uVar7 = ~uVar11 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    if (*(int *)((longlong)(int)uVar11 * 4 + *(longlong *)&pTVar9->field_0x10) == -1) {
      return false;
    }
    uVar7 = 0;
    if ((int)uVar11 < *(int *)&pTVar9->field_0x18) {
      uVar7 = ~uVar11 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    uVar11 = *(uint *)((longlong)(int)uVar11 * 4 + *(longlong *)&pTVar9->field_0x10);
    pFVar10 = (this->SelectedBones).AllocatorInstance.Data;
    pFVar1 = pFVar10 + (longlong)(this->SelectedBones).ArrayNum * 4;
    for (; pFVar10 != pFVar1; pFVar10 = pFVar10 + 4) {
      if (*(uint *)pFVar10 == uVar11) {
        return true;
      }
    }
  }
  pcVar2 = (code *)swi(3);
  uVar5 = (*pcVar2)();
  return (bool)uVar5;
}

// IsValidBone @ 14e815d30

bool __thiscall
FFractureEngineBoneSelection::IsValidBone(FFractureEngineBoneSelection *this,int param_1)

{
  int iVar1;
  
  if (-1 < param_1) {
    iVar1 = (**(code **)(this->GeometryCollection->_padding_ + 0x60))();
    if (param_1 < iVar1) {
      return true;
    }
  }
  return false;
}

// Sanitize @ 14e819b00

void __thiscall
FFractureEngineBoneSelection::Sanitize(FFractureEngineBoneSelection *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  undefined1 local_res18 [8];
  int local_res20;
  uint local_58;
  FFractureEngineBoneSelection *local_50 [2];
  
  local_res20 = FManagedArrayCollection::NumElements
                          ((FManagedArrayCollection *)this->GeometryCollection,
                           FTransformCollection::TransformGroup);
  iVar11 = (this->SelectedBones).ArrayNum;
  lVar6 = (longlong)iVar11;
  uVar8 = 0;
  iVar9 = 0;
  if (iVar11 == 0) goto LAB_14e819c69;
  pFVar1 = (this->SelectedBones).AllocatorInstance.Data;
  local_58 = 0;
  uVar7 = uVar8;
  uVar16 = uVar8;
  if (*(int *)pFVar1 == -1) {
LAB_14e819b93:
    bVar14 = 0;
    uVar10 = uVar8;
  }
  else {
    if (local_res20 <= *(int *)pFVar1) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2180697871345517148>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Fracture\\Source\\FractureEngine\\Private\\FractureEngineClustering.cpp"
                         ,0x25c,"Index < NumTransforms");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      goto LAB_14e819b93;
    }
    bVar14 = 1;
    uVar10 = uVar8;
  }
  do {
    iVar9 = (int)uVar10;
    uVar7 = uVar7 + 1;
    uVar10 = (ulonglong)(iVar9 + 1);
    iVar11 = local_res20;
    if ((longlong)uVar7 < lVar6) {
      do {
        iVar17 = local_res20;
        bVar4 = 0;
        if (*(int *)(pFVar1 + uVar7 * 4) != -1) {
          if (*(int *)(pFVar1 + uVar7 * 4) < iVar11) {
            iVar17 = iVar11;
            bVar4 = 1;
          }
          else {
            bVar3 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<2180697871345517148>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Fracture\\Source\\FractureEngine\\Private\\FractureEngineClustering.cpp"
                               ,0x25c,"Index < NumTransforms");
            iVar17 = local_res20;
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
        }
        if (bVar14 != bVar4) break;
        uVar10 = (ulonglong)((int)uVar10 + 1);
        uVar7 = uVar7 + 1;
        iVar11 = iVar17;
      } while ((longlong)uVar7 < lVar6);
      uVar16 = (ulonglong)local_58;
    }
    iVar11 = (int)uVar10 - iVar9;
    if (bVar14 != 0) {
      iVar17 = (int)uVar16;
      if (iVar17 != iVar9) {
        memmove(pFVar1 + (longlong)iVar17 * 4,pFVar1 + (longlong)iVar9 * 4,(longlong)iVar11 << 2);
      }
      local_58 = iVar17 + iVar11;
      uVar16 = (ulonglong)local_58;
    }
    bVar14 = bVar14 ^ 1;
  } while ((longlong)uVar7 < lVar6);
  iVar9 = (int)uVar16;
  (this->SelectedBones).ArrayNum = iVar9;
LAB_14e819c69:
  if ((param_1) && (local_50[0] = this, iVar9 != 0)) {
    pFVar1 = (this->SelectedBones).AllocatorInstance.Data;
    bVar3 = `FFractureEngineBoneSelection::Sanitize'::__l5::<lambda_2>::operator()
                      (local_50,*(int *)pFVar1);
    lVar6 = (longlong)iVar9;
    bVar3 = !bVar3;
    uVar7 = uVar8;
    uVar16 = uVar8;
    do {
      uVar12 = (uint)uVar7;
      uVar13 = uVar12;
      do {
        uVar8 = uVar8 + 1;
        uVar13 = uVar13 + 1;
        uVar7 = (ulonglong)uVar13;
        if (lVar6 <= (longlong)uVar8) break;
        bVar5 = `FFractureEngineBoneSelection::Sanitize'::__l5::<lambda_2>::operator()
                          (local_50,*(int *)(pFVar1 + uVar8 * 4));
      } while (bVar3 == !bVar5);
      if (bVar3 != false) {
        uVar15 = (uint)uVar16;
        if (uVar15 != uVar12) {
          memmove(pFVar1 + (longlong)(int)uVar15 * 4,pFVar1 + (longlong)(int)uVar12 * 4,
                  (longlong)(int)(uVar13 - uVar12) << 2);
        }
        uVar16 = (ulonglong)(uVar15 + (uVar13 - uVar12));
      }
      iVar9 = (int)uVar16;
      bVar3 = (bool)(bVar3 ^ 1);
    } while ((longlong)uVar8 < lVar6);
    (this->SelectedBones).ArrayNum = iVar9;
  }
  AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
            ((int *)(this->SelectedBones).AllocatorInstance.Data,iVar9,(FIdentityFunctor)param_1,
             (TLess<void> *)local_res18);
  return;
}

// operator() @ 150599e10

bool __thiscall
`FFractureEngineBoneSelection::HasSelectedAncestor'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2180697871345517124>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2180697871345517124>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

