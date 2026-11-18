// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FractureEngine
// Functions: 26

// operator() @ 14e803750

bool __thiscall
`FFractureEngineSelection::SelectCluster'::__l5::<lambda_1>::operator()(void *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  lVar1 = *(longlong *)this;
  uVar5 = 0;
  if (param_1 < *(int *)(lVar1 + 0x18)) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (*(int *)(*(longlong *)(lVar1 + 0x10) + (longlong)param_1 * 4) == 1) {
    if ((**(int **)((longlong)this + 8) != -1) &&
       (lVar1 = **(longlong **)((longlong)this + 0x10), lVar1 != 0)) {
      uVar5 = 0;
      if (param_1 < *(int *)(lVar1 + 0x18)) {
        uVar5 = (uint)~param_1 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      if (*(int *)(*(longlong *)(lVar1 + 0x10) + (longlong)param_1 * 4) !=
          **(int **)((longlong)this + 8)) goto LAB_14e803830;
    }
    bVar3 = false;
  }
  else {
LAB_14e803830:
    bVar3 = true;
  }
  return bVar3;
}

// operator() @ 14e803860

bool __thiscall
`FFractureEngineSelection::SelectLeaf'::__l5::<lambda_1>::operator()(void *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  
  lVar1 = *(longlong *)this;
  uVar5 = 0;
  if (param_1 < *(int *)(lVar1 + 0x18)) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (*(int *)(*(longlong *)(lVar1 + 0x10) + (longlong)param_1 * 4) == 1) {
    if ((**(int **)((longlong)this + 8) != -1) &&
       (lVar1 = **(longlong **)((longlong)this + 0x10), lVar1 != 0)) {
      uVar5 = 0;
      if (param_1 < *(int *)(lVar1 + 0x18)) {
        uVar5 = (uint)~param_1 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      if (*(int *)(*(longlong *)(lVar1 + 0x10) + (longlong)param_1 * 4) !=
          **(int **)((longlong)this + 8)) goto LAB_14e803940;
    }
    bVar3 = false;
  }
  else {
LAB_14e803940:
    bVar3 = true;
  }
  return bVar3;
}

// GetRootBones @ 14e8142e0

void __cdecl
FFractureEngineSelection::GetRootBones
          (FManagedArrayCollection *param_1,FDataflowTransformSelection *param_2)

{
  code *pcVar1;
  FName FVar2;
  FName FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  FName *pFVar8;
  TManagedArray<int> *pTVar9;
  undefined1 *puVar10;
  longlong lVar11;
  FName local_res8;
  FName local_res18 [2];
  
  FVar2 = FTransformCollection::TransformGroup;
  uVar5 = ::GetTypeHash(FTransformCollection::TransformGroup.ComparisonIndex.Value);
  FVar3 = FTransformCollection::TransformGroup;
  if (*(int *)&(param_1->GroupInfo).field_0x8 != *(int *)&(param_1->GroupInfo).field_0x34) {
    puVar10 = *(undefined1 **)&(param_1->GroupInfo).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(param_1->GroupInfo).field_0x38;
    }
    iVar6 = *(int *)(puVar10 +
                    (ulonglong)
                    (*(int *)&(param_1->GroupInfo).field_0x48 - 1U & FVar2.Number + uVar5) * 4);
    if (iVar6 != -1) {
      while (*(FName *)(*(longlong *)&param_1->GroupInfo + (longlong)iVar6 * 0x14) != FVar2) {
        iVar6 = *(int *)(*(longlong *)&param_1->GroupInfo + 0xc + (longlong)iVar6 * 0x14);
        if (iVar6 == -1) {
          return;
        }
      }
      pFVar8 = ::FName::FName(&local_res8,"Parent");
      bVar4 = FManagedArrayCollection::HasAttribute(param_1,*pFVar8,FVar3);
      FVar2 = FTransformCollection::TransformGroup;
      if (bVar4) {
        pFVar8 = ::FName::FName(local_res18,"Parent");
        pTVar9 = FManagedArrayCollection::GetAttribute<int>(param_1,*pFVar8,FVar2);
        uVar5 = 0;
        iVar6 = (**(code **)(*(longlong *)pTVar9 + 0x60))(pTVar9);
        if (0 < iVar6) {
          lVar11 = 0;
          do {
            uVar7 = 0;
            if ((int)uVar5 < *(int *)&pTVar9->field_0x18) {
              uVar7 = ~uVar5 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            if (*(int *)(lVar11 + *(longlong *)&pTVar9->field_0x10) ==
                (int)FManagedArrayCollection::Invalid) {
              FDataflowSelection::SetSelected((FDataflowSelection *)param_2,uVar5);
            }
            uVar5 = uVar5 + 1;
            lVar11 = lVar11 + 4;
            iVar6 = (**(code **)(*(longlong *)pTVar9 + 0x60))(pTVar9);
          } while ((int)uVar5 < iVar6);
        }
      }
    }
  }
  return;
}

// GetRootBones @ 14e814470

void __cdecl
FFractureEngineSelection::GetRootBones
          (FManagedArrayCollection *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FName FVar3;
  FName FVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FName *pFVar8;
  TManagedArray<int> *pTVar9;
  undefined1 *puVar10;
  longlong lVar11;
  FName local_res8;
  FName local_res18;
  uint local_18 [4];
  
  FVar3 = FTransformCollection::TransformGroup;
  uVar6 = ::GetTypeHash(FTransformCollection::TransformGroup.ComparisonIndex.Value);
  FVar4 = FTransformCollection::TransformGroup;
  if (*(int *)&(param_1->GroupInfo).field_0x8 != *(int *)&(param_1->GroupInfo).field_0x34) {
    puVar10 = *(undefined1 **)&(param_1->GroupInfo).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(param_1->GroupInfo).field_0x38;
    }
    iVar7 = *(int *)(puVar10 +
                    (ulonglong)
                    (*(int *)&(param_1->GroupInfo).field_0x48 - 1U & FVar3.Number + uVar6) * 4);
    if (iVar7 != -1) {
      while (*(FName *)(*(longlong *)&param_1->GroupInfo + (longlong)iVar7 * 0x14) != FVar3) {
        iVar7 = *(int *)(*(longlong *)&param_1->GroupInfo + 0xc + (longlong)iVar7 * 0x14);
        if (iVar7 == -1) {
          return;
        }
      }
      pFVar8 = ::FName::FName(&local_res8,"Parent");
      bVar5 = FManagedArrayCollection::HasAttribute(param_1,*pFVar8,FVar4);
      FVar3 = FTransformCollection::TransformGroup;
      if (bVar5) {
        pFVar8 = ::FName::FName(&local_res18,"Parent");
        pTVar9 = FManagedArrayCollection::GetAttribute<int>(param_1,*pFVar8,FVar3);
        local_18[0] = 0;
        iVar7 = (**(code **)(*(longlong *)pTVar9 + 0x60))(pTVar9);
        if ((int)local_18[0] < iVar7) {
          do {
            lVar11 = (longlong)(int)local_18[0];
            uVar6 = 0;
            if ((int)local_18[0] < *(int *)&pTVar9->field_0x18) {
              uVar6 = ~local_18[0] >> 0x1f;
            }
            if (uVar6 == 0) {
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar5) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            if (*(int *)(*(longlong *)&pTVar9->field_0x10 + lVar11 * 4) ==
                (int)FManagedArrayCollection::Invalid) {
              pFVar1 = (param_2->AllocatorInstance).Data;
              if ((pFVar1 <= (FScriptContainerElement *)local_18) &&
                 ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_2->ArrayMax * 4)) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar5) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              iVar7 = param_2->ArrayNum;
              if (iVar7 == param_2->ArrayMax) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
              }
              param_2->ArrayNum = iVar7 + 1;
              *(uint *)((param_2->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_18[0];
            }
            local_18[0] = local_18[0] + 1;
            iVar7 = (**(code **)(*(longlong *)pTVar9 + 0x60))(pTVar9);
          } while ((int)local_18[0] < iVar7);
        }
      }
    }
  }
  return;
}

// IsBoneSelectionValid @ 14e815c30

bool __cdecl
FFractureEngineSelection::IsBoneSelectionValid
          (FManagedArrayCollection *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res10 [8];
  
  iVar3 = FManagedArrayCollection::NumElements(param_1,FTransformCollection::TransformGroup);
  pFVar4 = (param_2->AllocatorInstance).Data;
  iVar2 = param_2->ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_2->ArrayNum != iVar2) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar4 == pFVar1) break;
    if ((*(int *)pFVar4 < 0) || (iVar3 <= *(int *)pFVar4)) {
      return false;
    }
    pFVar4 = pFVar4 + 4;
  }
  return true;
}

// IsSelectionValid @ 14e815cb0

bool __cdecl
FFractureEngineSelection::IsSelectionValid
          (FManagedArrayCollection *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          FName param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res10 [8];
  
  iVar3 = FManagedArrayCollection::NumElements(param_1,param_3);
  pFVar4 = (param_2->AllocatorInstance).Data;
  iVar2 = param_2->ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 4;
  while( true ) {
    if (param_2->ArrayNum != iVar2) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar4 == pFVar1) break;
    if ((*(int *)pFVar4 < 0) || (iVar3 <= *(int *)pFVar4)) {
      return false;
    }
    pFVar4 = pFVar4 + 4;
  }
  return true;
}

// SelectByPercentage @ 14e819d70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FFractureEngineSelection::SelectByPercentage
          (FDataflowTransformSelection *param_1,int param_2,bool param_3,float param_4)

{
  TArray<int,TSizedDefaultAllocator<32>_> local_28 [2];
  
  local_28[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28[0].ArrayNum = 0;
  local_28[0].ArrayMax = 0;
  FDataflowSelection::AsArray((FDataflowSelection *)param_1,local_28);
  RandomShuffleArray(local_28,param_3,param_4);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum
            (local_28,(int)ROUND((float)(local_28[0].ArrayNum * param_2) * __real_3ca3d70a +
                                 __real_3f000000) >> 1,Default);
  FDataflowSelection::SetFromArray((FDataflowSelection *)param_1,local_28);
  if (local_28[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].AllocatorInstance.Data);
  }
  return;
}

// SelectByPercentage @ 14e819e20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FFractureEngineSelection::SelectByPercentage
          (TArray<int,TSizedDefaultAllocator<32>_> *param_1,int param_2,bool param_3,float param_4)

{
  RandomShuffleArray(param_1,param_3,param_4);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum
            (param_1,(int)ROUND((float)(param_2 * param_1->ArrayNum) * __real_3ca3d70a +
                                __real_3f000000) >> 1,Default);
  return;
}

// SelectBySize @ 14e819e80

void __cdecl
FFractureEngineSelection::SelectBySize
          (FGeometryCollection *param_1,FDataflowTransformSelection *param_2,float param_3,
          float param_4)

{
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  SelectBySize(param_1,&local_18,param_3,param_4);
  FDataflowSelection::SetFromArray((FDataflowSelection *)param_2,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// SelectBySize @ 14e819ed0

void __cdecl
FFractureEngineSelection::SelectBySize
          (FGeometryCollection *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          float param_3,float param_4)

{
  int *piVar1;
  float *pfVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FName FVar5;
  FName FVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FName *pFVar10;
  TManagedArray<float> *pTVar11;
  longlong *plVar12;
  longlong lVar13;
  FName local_res8;
  uint local_38 [2];
  FName local_30 [5];
  
  FVar5 = FTransformCollection::TransformGroup;
  uVar8 = ::GetTypeHash(FTransformCollection::TransformGroup.ComparisonIndex.Value);
  FVar6 = FTransformCollection::TransformGroup;
  if ((int)param_1->_padding_ != *(int *)((longlong)&param_1->_padding_ + 4)) {
    plVar12 = (longlong *)param_1->_padding_;
    if ((longlong *)param_1->_padding_ == (longlong *)0x0) {
      plVar12 = &param_1->_padding_;
    }
    iVar9 = *(int *)((longlong)plVar12 +
                    (ulonglong)((int)param_1->_padding_ - 1U & FVar5.Number + uVar8) * 4);
    if (iVar9 != -1) {
      do {
        if (*(FName *)(param_1->_padding_ + (longlong)iVar9 * 0x14) == FVar5) {
          pFVar10 = ::FName::FName(&local_res8,"Size");
          bVar7 = FManagedArrayCollection::HasAttribute
                            ((FManagedArrayCollection *)param_1,*pFVar10,FVar6);
          if (!bVar7) {
            return;
          }
          piVar1 = &param_2->ArrayMax;
          param_2->ArrayNum = 0;
          if (param_2->ArrayMax != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,0,&param_2->AllocatorInstance,0,piVar1);
          }
          FGeometryCollectionConvexUtility::SetVolumeAttributes((FManagedArrayCollection *)param_1);
          FVar5 = FTransformCollection::TransformGroup;
          pFVar10 = ::FName::FName(local_30,"Size");
          pTVar11 = FManagedArrayCollection::GetAttribute<float>
                              ((FManagedArrayCollection *)param_1,*pFVar10,FVar5);
          local_38[0] = 0;
          iVar9 = (**(code **)(*(longlong *)pTVar11 + 0x60))(pTVar11);
          if (iVar9 <= (int)local_38[0]) {
            return;
          }
          while( true ) {
            lVar13 = (longlong)(int)local_38[0];
            uVar8 = 0;
            if ((int)local_38[0] < *(int *)&pTVar11->field_0x18) {
              uVar8 = ~local_38[0] >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) break;
            pfVar2 = (float *)(*(longlong *)&pTVar11->field_0x10 + lVar13 * 4);
            if (param_3 < *pfVar2 || param_3 == *pfVar2) {
              lVar13 = (longlong)(int)local_38[0];
              uVar8 = 0;
              if ((int)local_38[0] < *(int *)&pTVar11->field_0x18) {
                uVar8 = ~local_38[0] >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if (*(float *)(*(longlong *)&pTVar11->field_0x10 + lVar13 * 4) <= param_4) {
                pFVar3 = (param_2->AllocatorInstance).Data;
                if (((pFVar3 <= (FScriptContainerElement *)local_38) &&
                    ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)*piVar1 * 4)) &&
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
                iVar9 = param_2->ArrayNum;
                if (iVar9 == *piVar1) {
                  iVar9 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x404,&param_2->AllocatorInstance,piVar1);
                }
                param_2->ArrayNum = iVar9 + 1;
                *(uint *)((param_2->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_38[0];
              }
            }
            local_38[0] = local_38[0] + 1;
            iVar9 = (**(code **)(*(longlong *)pTVar11 + 0x60))(pTVar11);
            if (iVar9 <= (int)local_38[0]) {
              return;
            }
          }
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar9 = *(int *)(param_1->_padding_ + 0xc + (longlong)iVar9 * 0x14);
      } while (iVar9 != -1);
    }
  }
  return;
}

// SelectByVolume @ 14e81a1c0

void __cdecl
FFractureEngineSelection::SelectByVolume
          (FGeometryCollection *param_1,FDataflowTransformSelection *param_2,float param_3,
          float param_4)

{
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  SelectByVolume(param_1,&local_18,param_3,param_4);
  FDataflowSelection::SetFromArray((FDataflowSelection *)param_2,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// SelectByVolume @ 14e81a210

void __cdecl
FFractureEngineSelection::SelectByVolume
          (FGeometryCollection *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          float param_3,float param_4)

{
  int *piVar1;
  float *pfVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FName FVar5;
  FName FVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FName *pFVar10;
  TManagedArray<float> *pTVar11;
  longlong *plVar12;
  longlong lVar13;
  FName local_res8;
  uint local_38 [2];
  FName local_30 [5];
  
  FVar5 = FTransformCollection::TransformGroup;
  uVar8 = ::GetTypeHash(FTransformCollection::TransformGroup.ComparisonIndex.Value);
  FVar6 = FTransformCollection::TransformGroup;
  if ((int)param_1->_padding_ != *(int *)((longlong)&param_1->_padding_ + 4)) {
    plVar12 = (longlong *)param_1->_padding_;
    if ((longlong *)param_1->_padding_ == (longlong *)0x0) {
      plVar12 = &param_1->_padding_;
    }
    iVar9 = *(int *)((longlong)plVar12 +
                    (ulonglong)((int)param_1->_padding_ - 1U & FVar5.Number + uVar8) * 4);
    if (iVar9 != -1) {
      do {
        if (*(FName *)(param_1->_padding_ + (longlong)iVar9 * 0x14) == FVar5) {
          pFVar10 = ::FName::FName(&local_res8,"Volume");
          bVar7 = FManagedArrayCollection::HasAttribute
                            ((FManagedArrayCollection *)param_1,*pFVar10,FVar6);
          if (!bVar7) {
            return;
          }
          piVar1 = &param_2->ArrayMax;
          param_2->ArrayNum = 0;
          if (param_2->ArrayMax != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,0,&param_2->AllocatorInstance,0,piVar1);
          }
          FGeometryCollectionConvexUtility::SetVolumeAttributes((FManagedArrayCollection *)param_1);
          FVar5 = FTransformCollection::TransformGroup;
          pFVar10 = ::FName::FName(local_30,"Volume");
          pTVar11 = FManagedArrayCollection::GetAttribute<float>
                              ((FManagedArrayCollection *)param_1,*pFVar10,FVar5);
          local_38[0] = 0;
          iVar9 = (**(code **)(*(longlong *)pTVar11 + 0x60))(pTVar11);
          if (iVar9 <= (int)local_38[0]) {
            return;
          }
          while( true ) {
            lVar13 = (longlong)(int)local_38[0];
            uVar8 = 0;
            if ((int)local_38[0] < *(int *)&pTVar11->field_0x18) {
              uVar8 = ~local_38[0] >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) break;
            pfVar2 = (float *)(*(longlong *)&pTVar11->field_0x10 + lVar13 * 4);
            if (param_3 < *pfVar2 || param_3 == *pfVar2) {
              lVar13 = (longlong)(int)local_38[0];
              uVar8 = 0;
              if ((int)local_38[0] < *(int *)&pTVar11->field_0x18) {
                uVar8 = ~local_38[0] >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              if (*(float *)(*(longlong *)&pTVar11->field_0x10 + lVar13 * 4) <= param_4) {
                pFVar3 = (param_2->AllocatorInstance).Data;
                if (((pFVar3 <= (FScriptContainerElement *)local_38) &&
                    ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)*piVar1 * 4)) &&
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
                iVar9 = param_2->ArrayNum;
                if (iVar9 == *piVar1) {
                  iVar9 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x404,&param_2->AllocatorInstance,piVar1);
                }
                param_2->ArrayNum = iVar9 + 1;
                *(uint *)((param_2->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_38[0];
              }
            }
            local_38[0] = local_38[0] + 1;
            iVar9 = (**(code **)(*(longlong *)pTVar11 + 0x60))(pTVar11);
            if (iVar9 <= (int)local_38[0]) {
              return;
            }
          }
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar9 = *(int *)(param_1->_padding_ + 0xc + (longlong)iVar9 * 0x14);
      } while (iVar9 != -1);
    }
  }
  return;
}

// SelectChildren @ 14e81a500

void __cdecl
FFractureEngineSelection::SelectChildren
          (FManagedArrayCollection *param_1,FDataflowTransformSelection *param_2)

{
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  FDataflowSelection::AsArray((FDataflowSelection *)param_2,&local_18);
  SelectChildren(param_1,&local_18);
  FDataflowSelection::SetFromArray((FDataflowSelection *)param_2,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// SelectChildren @ 14e81a570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FFractureEngineSelection::SelectChildren
          (FManagedArrayCollection *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  code *pcVar2;
  FName FVar3;
  FName FVar4;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FName *pFVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 *puVar13;
  int iVar14;
  uint uVar15;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar16;
  uint uVar17;
  TBitArray<FDefaultBitArrayAllocator> *pTVar18;
  FScriptContainerElement *pFVar19;
  longlong *plVar20;
  undefined1 auStack_198 [32];
  longlong local_178;
  longlong local_170;
  undefined1 local_168;
  undefined1 local_167 [3];
  uint local_164;
  undefined4 local_160;
  uint local_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *local_148;
  TArray<int,TSizedDefaultAllocator<32>_> *local_140;
  FScriptContainerElement *local_138;
  longlong *local_130;
  uint uStack_128;
  uint uStack_124;
  TBitArray<FDefaultBitArrayAllocator> *local_120;
  undefined4 uStack_118;
  int iStack_114;
  int local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  longlong *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  undefined8 uStack_d8;
  FName local_d0;
  FName local_c8 [4];
  undefined4 local_a4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  FVar3 = FTransformCollection::TransformGroup;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_198;
  local_140 = param_2;
  uVar8 = ::GetTypeHash(FTransformCollection::TransformGroup.ComparisonIndex.Value);
  FVar4 = FTransformCollection::TransformGroup;
  if (*(int *)&(param_1->GroupInfo).field_0x8 != *(int *)&(param_1->GroupInfo).field_0x34) {
    puVar13 = *(undefined1 **)&(param_1->GroupInfo).field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(param_1->GroupInfo).field_0x38;
    }
    iVar9 = *(int *)(puVar13 +
                    (ulonglong)
                    (*(int *)&(param_1->GroupInfo).field_0x48 - 1U & FVar3.Number + uVar8) * 4);
    if (iVar9 != -1) {
      do {
        if (*(FName *)(*(longlong *)&param_1->GroupInfo + (longlong)iVar9 * 0x14) == FVar3) {
          pFVar10 = ::FName::FName(&local_d0,"Children");
          bVar7 = FManagedArrayCollection::HasAttribute(param_1,*pFVar10,FVar4);
          FVar3 = FTransformCollection::TransformGroup;
          if (!bVar7) {
            return;
          }
          pFVar10 = ::FName::FName(local_c8,"Children");
          local_148 = FManagedArrayCollection::
                      GetAttribute<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                                (param_1,*pFVar10,FVar3);
          local_15c = param_2->ArrayNum;
          uVar11 = (ulonglong)(int)local_15c;
          pFVar19 = (param_2->AllocatorInstance).Data;
          local_98.Elements._0_8_ = 0;
          local_98.Elements._8_8_ = 0;
          local_138 = pFVar19 + uVar11 * 4;
          local_98.Elements._32_8_ = 0;
          local_98.Elements._40_4_ = 0;
          local_98.Elements._44_4_ = 0x80;
          local_98.Elements._48_4_ = 0xffffffff;
          local_98.Elements._52_4_ = 0;
          local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
          local_98.HashSize = 0;
          pTVar16 = local_148;
          do {
            while( true ) {
              pFVar5 = local_138;
              uVar8 = 0;
              if (param_2->ArrayNum != (int)uVar11) {
                local_168 = 0;
                `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (&local_168);
              }
              if (pFVar19 == pFVar5) {
                ConvertSelectionSetToSelectionArr(&local_98,param_2);
                local_98.HashSize = 0;
                if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FMemory::Free((void *)local_98.Hash.SecondaryData);
                }
                TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          (&local_98.Elements);
                return;
              }
              uVar17 = *(uint *)pFVar19;
              uVar15 = uVar8;
              if ((int)uVar17 < *(int *)&pTVar16->field_0x18) {
                uVar15 = ~uVar17 >> 0x1f;
              }
              local_164 = uVar17;
              if ((uVar15 == 0) &&
                 (local_178 = (longlong)(int)uVar17,
                 local_170 = (longlong)*(int *)&pTVar16->field_0x18,
                 bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              lVar12 = (longlong)(int)uVar17 * 0x50 + *(longlong *)&pTVar16->field_0x10;
              if (*(int *)(lVar12 + 8) != *(int *)(lVar12 + 0x34)) break;
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                        (&local_98,&local_158,(bool *)&local_164);
              uVar11 = (ulonglong)local_15c;
              pFVar19 = pFVar19 + 4;
            }
            uVar15 = uVar8;
            if ((int)uVar17 < *(int *)&pTVar16->field_0x18) {
              uVar15 = ~uVar17 >> 0x1f;
            }
            if (uVar15 == 0) {
              local_178 = (longlong)(int)uVar17;
              local_170 = (longlong)*(int *)&pTVar16->field_0x18;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            local_110 = 0;
            uStack_124 = 1;
            plVar20 = (longlong *)((longlong)(int)uVar17 * 0x50 + *(longlong *)&pTVar16->field_0x10)
            ;
            iVar9 = (int)plVar20[5];
            pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar20 + 2);
            iStack_114 = 0;
            if (iVar9 != 0) {
              pTVar18 = pTVar1;
              if ((TBitArray<FDefaultBitArrayAllocator> *)plVar20[4] !=
                  (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)plVar20[4];
              }
              uVar17 = *(uint *)(pTVar18->AllocatorInstance).InlineData;
              while (uVar17 == 0) {
                lVar12 = (longlong)(int)uVar8;
                local_110 = local_110 + 0x20;
                uVar8 = uVar8 + 1;
                iStack_114 = iVar9;
                if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar8)
                goto LAB_14e81a85e;
                uVar17 = *(uint *)((pTVar18->AllocatorInstance).InlineData + lVar12 * 4 + 4);
              }
              uStack_124 = -uVar17 & uVar17;
              uVar11 = (ulonglong)uStack_124 * 2 + 1;
              lVar12 = 0x3f;
              if (uVar11 != 0) {
                for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
                }
              }
              local_154 = (int)lVar12;
              iStack_114 = local_110 + -1 + local_154;
              if (iVar9 < iStack_114) {
                iStack_114 = iVar9;
              }
            }
LAB_14e81a85e:
            uVar17 = *(uint *)(plVar20 + 5);
            uStack_10c = local_a4;
            uVar15 = uVar17 & 0xffffffe0;
            iStack_108 = (int)plVar20[1] - *(int *)((longlong)plVar20 + 0x34);
            TStack_f8._padding_ = CONCAT44(uStack_124,uVar8);
            uStack_118 = 0xffffffff;
            TStack_f8.CurrentBitIndex = iStack_114;
            TStack_f8.UnvisitedBitMask = 0xffffffff;
            iVar14 = (int)uVar17 >> 5;
            TStack_f8._28_4_ = local_a4;
            TStack_f8.BaseBitIndex = local_110;
            uStack_d8 = CONCAT44(uStack_104,iStack_108);
            local_130 = plVar20;
            uStack_128 = uVar8;
            local_120 = pTVar1;
            local_100 = plVar20;
            TStack_f8.Array = pTVar1;
            if ((((int)uVar17 < 0) || (iVar9 < (int)uVar17)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x7af,L""), bVar7)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar8 = *(uint *)(plVar20 + 5);
            if (uVar17 != uVar8) {
              pTVar18 = pTVar1;
              if ((TBitArray<FDefaultBitArrayAllocator> *)plVar20[4] !=
                  (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)plVar20[4];
              }
              uVar17 = -1 << ((byte)uVar17 & 0x1f) &
                       *(uint *)((pTVar18->AllocatorInstance).InlineData + (longlong)iVar14 * 4);
              while (uVar17 == 0) {
                lVar12 = (longlong)iVar14;
                uVar15 = uVar15 + 0x20;
                iVar14 = iVar14 + 1;
                uVar17 = uVar8;
                if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
                goto LAB_14e81a970;
                uVar17 = *(uint *)((pTVar18->AllocatorInstance).InlineData + lVar12 * 4 + 4);
              }
              uVar11 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
              lVar12 = 0x3f;
              if (uVar11 != 0) {
                for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
                }
              }
              local_150 = (int)lVar12;
              uVar17 = local_150 + -1 + uVar15;
              if ((int)uVar8 < (int)uVar17) {
                uVar17 = uVar8;
              }
            }
LAB_14e81a970:
            while( true ) {
              plVar6 = local_100;
              if ((int)local_100[1] - *(int *)((longlong)local_100 + 0x34) != (int)uStack_d8) {
                local_167[0] = 0;
                `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_167);
              }
              if (((TStack_f8.CurrentBitIndex == uVar17) && (TStack_f8.Array == pTVar1)) &&
                 (plVar6 == plVar20)) break;
              local_160 = *(undefined4 *)(*plVar6 + (longlong)TStack_f8.CurrentBitIndex * 0xc);
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                        (&local_98,&local_14c,(bool *)&local_160);
              TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
            }
            pFVar19 = pFVar19 + 4;
            uVar11 = (ulonglong)local_15c;
            pTVar16 = local_148;
            param_2 = local_140;
          } while( true );
        }
        iVar9 = *(int *)(*(longlong *)&param_1->GroupInfo + 0xc + (longlong)iVar9 * 0x14);
      } while (iVar9 != -1);
    }
  }
  return;
}

// SelectCluster @ 14e81aa60

void __cdecl
FFractureEngineSelection::SelectCluster
          (FGeometryCollection *param_1,FDataflowTransformSelection *param_2)

{
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  SelectCluster(param_1,&local_18);
  FDataflowSelection::SetFromArray((FDataflowSelection *)param_2,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// SelectCluster @ 14e81aab0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FFractureEngineSelection::SelectCluster
          (FGeometryCollection *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FName FVar2;
  FName FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FName *pFVar7;
  TManagedArray<int> *pTVar8;
  longlong *plVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FName local_res8;
  TManagedArray<int> *local_res18;
  FName local_res20;
  TManagedArray<int> *local_38;
  FName *local_30;
  TManagedArray<int> **local_28;
  
  FVar2 = FTransformCollection::TransformGroup;
  uVar5 = ::GetTypeHash(FTransformCollection::TransformGroup.ComparisonIndex.Value);
  FVar3 = FTransformCollection::TransformGroup;
  if ((int)param_1->_padding_ != *(int *)((longlong)&param_1->_padding_ + 4)) {
    plVar9 = (longlong *)param_1->_padding_;
    if ((longlong *)param_1->_padding_ == (longlong *)0x0) {
      plVar9 = &param_1->_padding_;
    }
    iVar6 = *(int *)((longlong)plVar9 +
                    (ulonglong)((int)param_1->_padding_ - 1U & FVar2.Number + uVar5) * 4);
    if (iVar6 != -1) {
      while (*(FName *)(param_1->_padding_ + (longlong)iVar6 * 0x14) != FVar2) {
        iVar6 = *(int *)(param_1->_padding_ + 0xc + (longlong)iVar6 * 0x14);
        if (iVar6 == -1) {
          return;
        }
      }
      pFVar7 = ::FName::FName(&local_res8,"Level");
      bVar4 = FManagedArrayCollection::HasAttribute
                        ((FManagedArrayCollection *)param_1,*pFVar7,FVar3);
      FVar2 = FTransformCollection::TransformGroup;
      if (bVar4) {
        pFVar7 = ::FName::FName(&local_res8,"SimulationType");
        bVar4 = FManagedArrayCollection::HasAttribute
                          ((FManagedArrayCollection *)param_1,*pFVar7,FVar2);
        if (bVar4) {
          param_2->ArrayNum = 0;
          if (param_2->ArrayMax != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
          }
          local_res8.ComparisonIndex.Value = 0xffffffff;
          FGeometryCollectionClusteringUtility::GetBonesToLevel(param_1,-1,param_2,true,true);
          FVar2 = FTransformCollection::TransformGroup;
          pFVar7 = ::FName::FName(&local_res20,"SimulationType");
          pTVar8 = FManagedArrayCollection::GetAttribute<int>
                             ((FManagedArrayCollection *)param_1,*pFVar7,FVar2);
          FVar2 = FTransformCollection::TransformGroup;
          pFVar7 = ::FName::FName(&local_res20,"Level");
          local_res18 = FManagedArrayCollection::FindAttributeTyped<int>
                                  ((FManagedArrayCollection *)param_1,*pFVar7,FVar2);
          pFVar1 = (param_2->AllocatorInstance).Data;
          local_30 = &local_res8;
          local_28 = &local_res18;
          pFVar11 = pFVar1 + (longlong)param_2->ArrayNum * 4;
          pFVar10 = pFVar1;
          local_38 = pTVar8;
          while (pFVar10 != pFVar11) {
            bVar4 = `FFractureEngineSelection::SelectCluster'::__l5::<lambda_1>::operator()
                              (&local_38,*(int *)pFVar10);
            if (bVar4) {
              do {
                pFVar11 = pFVar11 + -4;
                if (pFVar10 == pFVar11) goto LAB_14e81acb3;
                bVar4 = `FFractureEngineSelection::SelectCluster'::__l5::<lambda_1>::operator()
                                  (&local_38,*(int *)pFVar11);
              } while (bVar4);
              *(int *)pFVar10 = *(int *)pFVar11;
              pFVar10 = pFVar10 + 4;
            }
            else {
              pFVar10 = pFVar10 + 4;
            }
          }
LAB_14e81acb3:
          TArray<int,TSizedDefaultAllocator<32>_>::SetNum
                    (param_2,(int)((longlong)pFVar10 - (longlong)pFVar1 >> 2),Default);
        }
      }
    }
  }
  return;
}

// SelectContact @ 14e81ace0

void __cdecl
FFractureEngineSelection::SelectContact
          (FGeometryCollection *param_1,FDataflowTransformSelection *param_2)

{
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  FDataflowSelection::AsArray((FDataflowSelection *)param_2,&local_18);
  SelectContact(param_1,&local_18);
  FDataflowSelection::SetFromArray((FDataflowSelection *)param_2,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// SelectContact @ 14e81ad50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FFractureEngineSelection::SelectContact
          (FGeometryCollection *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  FName FVar2;
  FName FVar3;
  longlong *plVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  FName *pFVar8;
  TManagedArray<int> *pTVar9;
  TManagedArray<int> *pTVar10;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  TBitArray<FDefaultBitArrayAllocator> *pTVar17;
  longlong *plVar18;
  FScriptContainerElement *pFVar19;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  longlong local_1a0;
  undefined1 local_198;
  undefined1 local_197 [3];
  uint local_194;
  uint local_190;
  FScriptContainerElement *local_188;
  int local_180;
  int local_17c;
  int local_178;
  int local_174;
  FGeometryCollectionProximityUtility local_170;
  TManagedArray<int> *local_168;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *local_160;
  TArray<int,TSizedDefaultAllocator<32>_> *local_158;
  FScriptContainerElement *local_150;
  longlong *local_148;
  int iStack_140;
  uint uStack_13c;
  TBitArray<FDefaultBitArrayAllocator> *local_138;
  undefined4 uStack_130;
  int iStack_12c;
  int local_128;
  undefined4 uStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  longlong *local_118;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_110;
  undefined8 uStack_f0;
  FName local_e8;
  FName local_e0;
  FName local_d8;
  FName local_d0;
  FName local_c8;
  FName local_c0 [4];
  undefined4 local_9c;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  FVar3 = FTransformCollection::TransformGroup;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  local_158 = param_2;
  uVar6 = ::GetTypeHash(FTransformCollection::TransformGroup.ComparisonIndex.Value);
  FVar2 = FGeometryCollection::GeometryGroup;
  if ((int)param_1->_padding_ == *(int *)((longlong)&param_1->_padding_ + 4)) {
    return;
  }
  plVar18 = (longlong *)param_1->_padding_;
  if ((longlong *)param_1->_padding_ == (longlong *)0x0) {
    plVar18 = &param_1->_padding_;
  }
  iVar14 = *(int *)((longlong)plVar18 +
                   (ulonglong)((int)param_1->_padding_ - 1U & FVar3.Number + uVar6) * 4);
  if (iVar14 == -1) {
    return;
  }
  while (*(FName *)(param_1->_padding_ + (longlong)iVar14 * 0x14) != FVar3) {
    iVar14 = *(int *)(param_1->_padding_ + 0xc + (longlong)iVar14 * 0x14);
    if (iVar14 == -1) {
      return;
    }
  }
  pFVar8 = ::FName::FName(&local_e8,"TransformIndex");
  bVar5 = FManagedArrayCollection::HasAttribute((FManagedArrayCollection *)param_1,*pFVar8,FVar2);
  FVar2 = FTransformCollection::TransformGroup;
  if (!bVar5) {
    return;
  }
  pFVar8 = ::FName::FName(&local_e0,"TransformToGeometryIndex");
  bVar5 = FManagedArrayCollection::HasAttribute((FManagedArrayCollection *)param_1,*pFVar8,FVar2);
  FVar2 = FGeometryCollection::GeometryGroup;
  if (!bVar5) {
    return;
  }
  uVar6 = ::GetTypeHash(FGeometryCollection::GeometryGroup.ComparisonIndex.Value);
  FVar3 = FGeometryCollection::GeometryGroup;
  if ((int)param_1->_padding_ == *(int *)((longlong)&param_1->_padding_ + 4)) {
    return;
  }
  plVar18 = (longlong *)param_1->_padding_;
  if ((longlong *)param_1->_padding_ == (longlong *)0x0) {
    plVar18 = &param_1->_padding_;
  }
  iVar14 = *(int *)((longlong)plVar18 +
                   (ulonglong)((int)param_1->_padding_ - 1U & uVar6 + FVar2.Number) * 4);
  if (iVar14 == -1) {
    return;
  }
  while (*(FName *)(param_1->_padding_ + (longlong)iVar14 * 0x14) != FVar2) {
    iVar14 = *(int *)(param_1->_padding_ + 0xc + (longlong)iVar14 * 0x14);
    if (iVar14 == -1) {
      return;
    }
  }
  pFVar8 = ::FName::FName(&local_d8,"Proximity");
  bVar5 = FManagedArrayCollection::HasAttribute((FManagedArrayCollection *)param_1,*pFVar8,FVar3);
  if (!bVar5) {
    return;
  }
  FGeometryCollectionProximityUtility::FGeometryCollectionProximityUtility(&local_170,param_1);
  FGeometryCollectionProximityUtility::RequireProximity(&local_170,(FConvexHulls *)0x0);
  FVar2 = FGeometryCollection::GeometryGroup;
  pFVar8 = ::FName::FName(&local_d0,"TransformIndex");
  pTVar9 = FManagedArrayCollection::GetAttribute<int>
                     ((FManagedArrayCollection *)param_1,*pFVar8,FVar2);
  FVar2 = FTransformCollection::TransformGroup;
  pFVar8 = ::FName::FName(&local_c8,"TransformToGeometryIndex");
  pTVar10 = FManagedArrayCollection::GetAttribute<int>
                      ((FManagedArrayCollection *)param_1,*pFVar8,FVar2);
  FVar2 = FGeometryCollection::GeometryGroup;
  local_168 = pTVar10;
  pFVar8 = ::FName::FName(local_c0,"Proximity");
  pTVar11 = FManagedArrayCollection::
            GetAttribute<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                      ((FManagedArrayCollection *)param_1,*pFVar8,FVar2);
  local_190 = param_2->ArrayNum;
  uVar12 = (ulonglong)(int)local_190;
  pFVar15 = (param_2->AllocatorInstance).Data;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  pFVar19 = pFVar15 + uVar12 * 4;
  local_98.Elements._32_8_ = 0;
  local_98.Elements._40_4_ = 0;
  local_98.Elements._44_4_ = 0x80;
  local_98.Elements._48_4_ = 0xffffffff;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  local_160 = pTVar11;
  local_150 = pFVar19;
  do {
    local_188 = pFVar15;
    if (param_2->ArrayNum != (int)uVar12) {
      local_198 = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_198);
    }
    if (pFVar15 == pFVar19) {
      ConvertSelectionSetToSelectionArr(&local_98,param_2);
      local_98.HashSize = 0;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98.Elements);
      return;
    }
    uVar6 = *(uint *)pFVar15;
    local_194 = uVar6;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&local_98,&local_180,(bool *)&local_194);
    uVar16 = 0;
    if ((int)uVar6 < *(int *)&pTVar10->field_0x18) {
      uVar16 = ~uVar6 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (local_1a8 = (longlong)(int)uVar6, local_1a0 = (longlong)*(int *)&pTVar10->field_0x18,
       bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar6 = *(uint *)(*(longlong *)&pTVar10->field_0x10 + (longlong)(int)uVar6 * 4);
    if (uVar6 != 0xffffffff) {
      uVar16 = 0;
      if ((int)uVar6 < *(int *)&pTVar11->field_0x18) {
        uVar16 = ~uVar6 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (local_1a8 = (longlong)(int)uVar6, local_1a0 = (longlong)*(int *)&pTVar11->field_0x18,
         bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iStack_140 = 0;
      plVar18 = (longlong *)((longlong)(int)uVar6 * 0x50 + *(longlong *)&pTVar11->field_0x10);
      local_128 = 0;
      iVar14 = (int)plVar18[5];
      local_138 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar18 + 2);
      uStack_13c = 1;
      iStack_12c = 0;
      if (iVar14 != 0) {
        pTVar17 = local_138;
        if ((TBitArray<FDefaultBitArrayAllocator> *)plVar18[4] !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)plVar18[4];
        }
        uVar6 = *(uint *)(pTVar17->AllocatorInstance).InlineData;
        while (uVar6 == 0) {
          lVar13 = (longlong)iStack_140;
          local_128 = local_128 + 0x20;
          iStack_140 = iStack_140 + 1;
          iStack_12c = iVar14;
          if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_140)
          goto LAB_14e81b15e;
          uVar6 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar13 * 4 + 4);
        }
        uStack_13c = -uVar6 & uVar6;
        uVar12 = (ulonglong)uStack_13c * 2 + 1;
        lVar13 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_17c = (int)lVar13;
        iStack_12c = local_128 + -1 + local_17c;
        if (iVar14 < iStack_12c) {
          iStack_12c = iVar14;
        }
      }
LAB_14e81b15e:
      uVar6 = *(uint *)(plVar18 + 5);
      uStack_124 = local_9c;
      iStack_120 = (int)plVar18[1] - *(int *)((longlong)plVar18 + 0x34);
      uVar16 = uVar6 & 0xffffffe0;
      TStack_110._padding_ = CONCAT44(uStack_13c,iStack_140);
      uStack_130 = 0xffffffff;
      TStack_110.CurrentBitIndex = iStack_12c;
      TStack_110.UnvisitedBitMask = 0xffffffff;
      iVar14 = (int)uVar6 >> 5;
      TStack_110._28_4_ = local_9c;
      TStack_110.BaseBitIndex = local_128;
      uStack_f0 = CONCAT44(uStack_11c,iStack_120);
      local_148 = plVar18;
      local_118 = plVar18;
      TStack_110.Array = local_138;
      if (((int)uVar6 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar7 = *(uint *)(plVar18 + 5);
      if (uVar6 != uVar7) {
        pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar18 + 2);
        if ((TBitArray<FDefaultBitArrayAllocator> *)plVar18[4] !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)plVar18[4];
        }
        uVar6 = -1 << ((byte)uVar6 & 0x1f) &
                *(uint *)((pTVar17->AllocatorInstance).InlineData + (longlong)iVar14 * 4);
        while (uVar6 == 0) {
          lVar13 = (longlong)iVar14;
          uVar16 = uVar16 + 0x20;
          iVar14 = iVar14 + 1;
          uVar6 = uVar7;
          if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
          goto LAB_14e81b260;
          uVar6 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar13 * 4 + 4);
        }
        uVar12 = (ulonglong)(-uVar6 & uVar6) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_178 = (int)lVar13;
        uVar6 = local_178 + -1 + uVar16;
        if ((int)uVar7 < (int)uVar6) {
          uVar6 = uVar7;
        }
      }
LAB_14e81b260:
      while( true ) {
        plVar4 = local_118;
        if ((int)local_118[1] - *(int *)((longlong)local_118 + 0x34) != (int)uStack_f0) {
          local_197[0] = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_197);
        }
        if (((TStack_110.CurrentBitIndex == uVar6) &&
            (TStack_110.Array == (TBitArray<FDefaultBitArrayAllocator> *)(plVar18 + 2))) &&
           (pTVar10 = local_168, pTVar11 = local_160, param_2 = local_158, pFVar19 = local_150,
           plVar4 == plVar18)) break;
        uVar16 = *(uint *)(*plVar4 + (longlong)TStack_110.CurrentBitIndex * 0xc);
        uVar7 = 0;
        if ((int)uVar16 < *(int *)&pTVar9->field_0x18) {
          uVar7 = ~uVar16 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (local_1a8 = (longlong)(int)uVar16, local_1a0 = (longlong)*(int *)&pTVar9->field_0x18,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&local_98,&local_174,
                   (bool *)(*(longlong *)&pTVar9->field_0x10 + (longlong)(int)uVar16 * 4));
        TStack_110.UnvisitedBitMask = TStack_110.UnvisitedBitMask & ~TStack_110._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_110);
      }
    }
    uVar12 = (ulonglong)local_190;
    pFVar15 = local_188 + 4;
  } while( true );
}

// SelectLeaf @ 14e81b3b0

void __cdecl
FFractureEngineSelection::SelectLeaf
          (FGeometryCollection *param_1,FDataflowTransformSelection *param_2)

{
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  SelectLeaf(param_1,&local_18);
  FDataflowSelection::SetFromArray((FDataflowSelection *)param_2,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// SelectLeaf @ 14e81b400

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FFractureEngineSelection::SelectLeaf
          (FGeometryCollection *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FName FVar2;
  FName FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FName *pFVar7;
  TManagedArray<int> *pTVar8;
  longlong *plVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FName local_res8;
  TManagedArray<int> *local_res18;
  FName local_res20;
  TManagedArray<int> *local_38;
  FName *local_30;
  TManagedArray<int> **local_28;
  
  FVar2 = FTransformCollection::TransformGroup;
  uVar5 = ::GetTypeHash(FTransformCollection::TransformGroup.ComparisonIndex.Value);
  FVar3 = FTransformCollection::TransformGroup;
  if ((int)param_1->_padding_ != *(int *)((longlong)&param_1->_padding_ + 4)) {
    plVar9 = (longlong *)param_1->_padding_;
    if ((longlong *)param_1->_padding_ == (longlong *)0x0) {
      plVar9 = &param_1->_padding_;
    }
    iVar6 = *(int *)((longlong)plVar9 +
                    (ulonglong)((int)param_1->_padding_ - 1U & FVar2.Number + uVar5) * 4);
    if (iVar6 != -1) {
      while (*(FName *)(param_1->_padding_ + (longlong)iVar6 * 0x14) != FVar2) {
        iVar6 = *(int *)(param_1->_padding_ + 0xc + (longlong)iVar6 * 0x14);
        if (iVar6 == -1) {
          return;
        }
      }
      pFVar7 = ::FName::FName(&local_res8,"Level");
      bVar4 = FManagedArrayCollection::HasAttribute
                        ((FManagedArrayCollection *)param_1,*pFVar7,FVar3);
      FVar2 = FTransformCollection::TransformGroup;
      if (bVar4) {
        pFVar7 = ::FName::FName(&local_res8,"SimulationType");
        bVar4 = FManagedArrayCollection::HasAttribute
                          ((FManagedArrayCollection *)param_1,*pFVar7,FVar2);
        if (bVar4) {
          param_2->ArrayNum = 0;
          if (param_2->ArrayMax != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
          }
          local_res8.ComparisonIndex.Value = 0xffffffff;
          FGeometryCollectionClusteringUtility::GetBonesToLevel(param_1,-1,param_2,true,true);
          FVar2 = FTransformCollection::TransformGroup;
          pFVar7 = ::FName::FName(&local_res20,"SimulationType");
          pTVar8 = FManagedArrayCollection::GetAttribute<int>
                             ((FManagedArrayCollection *)param_1,*pFVar7,FVar2);
          FVar2 = FTransformCollection::TransformGroup;
          pFVar7 = ::FName::FName(&local_res20,"Level");
          local_res18 = FManagedArrayCollection::FindAttributeTyped<int>
                                  ((FManagedArrayCollection *)param_1,*pFVar7,FVar2);
          pFVar1 = (param_2->AllocatorInstance).Data;
          local_30 = &local_res8;
          local_28 = &local_res18;
          pFVar11 = pFVar1 + (longlong)param_2->ArrayNum * 4;
          pFVar10 = pFVar1;
          local_38 = pTVar8;
          while (pFVar10 != pFVar11) {
            bVar4 = `FFractureEngineSelection::SelectLeaf'::__l5::<lambda_1>::operator()
                              (&local_38,*(int *)pFVar10);
            if (bVar4) {
              do {
                pFVar11 = pFVar11 + -4;
                if (pFVar10 == pFVar11) goto LAB_14e81b603;
                bVar4 = `FFractureEngineSelection::SelectLeaf'::__l5::<lambda_1>::operator()
                                  (&local_38,*(int *)pFVar11);
              } while (bVar4);
              *(int *)pFVar10 = *(int *)pFVar11;
              pFVar10 = pFVar10 + 4;
            }
            else {
              pFVar10 = pFVar10 + 4;
            }
          }
LAB_14e81b603:
          TArray<int,TSizedDefaultAllocator<32>_>::SetNum
                    (param_2,(int)((longlong)pFVar10 - (longlong)pFVar1 >> 2),Default);
        }
      }
    }
  }
  return;
}

// SelectLevel @ 14e81b980

void __cdecl
FFractureEngineSelection::SelectLevel
          (FManagedArrayCollection *param_1,FDataflowTransformSelection *param_2)

{
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  FDataflowSelection::AsArray((FDataflowSelection *)param_2,&local_18);
  SelectLevel(param_1,&local_18);
  FDataflowSelection::SetFromArray((FDataflowSelection *)param_2,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// SelectLevel @ 14e81b9f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FFractureEngineSelection::SelectLevel
          (FManagedArrayCollection *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  uint *puVar1;
  code *pcVar2;
  FName FVar3;
  FName FVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  FName *pFVar10;
  TManagedArray<int> *pTVar11;
  ulong64 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ForElementType<unsigned_int> FVar15;
  ForAnyElementType FVar16;
  undefined1 *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  int iVar22;
  uint *puVar23;
  uint uVar24;
  ulonglong uVar25;
  uint uVar26;
  FScriptContainerElement *pFVar27;
  undefined1 auStackY_178 [32];
  undefined1 local_148 [4];
  int local_144;
  TManagedArray<int> *local_140;
  uint local_138;
  int local_130;
  uint uStack_12c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_128;
  undefined4 local_120;
  int iStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  FManagedArrayCollection *local_110;
  FScriptContainerElement *local_108;
  undefined4 local_fc;
  int local_f8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_f0;
  FScriptContainerElement *local_e8;
  longlong *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_d8;
  FSparseArrayAllocationInfo local_b8;
  FName local_a8;
  FName local_a0;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  int local_70;
  uint local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  FVar3 = FTransformCollection::TransformGroup;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_110 = param_1;
  local_f0 = param_2;
  uVar6 = ::GetTypeHash(FTransformCollection::TransformGroup.ComparisonIndex.Value);
  FVar4 = FTransformCollection::TransformGroup;
  if (*(int *)&(param_1->GroupInfo).field_0x8 != *(int *)&(param_1->GroupInfo).field_0x34) {
    puVar17 = *(undefined1 **)&(param_1->GroupInfo).field_0x40;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = &(param_1->GroupInfo).field_0x38;
    }
    iVar7 = *(int *)(puVar17 +
                    (ulonglong)
                    (*(int *)&(param_1->GroupInfo).field_0x48 - 1U & FVar3.Number + uVar6) * 4);
    if (iVar7 != -1) {
      do {
        if (*(FName *)(*(longlong *)&param_1->GroupInfo + (longlong)iVar7 * 0x14) == FVar3) {
          pFVar10 = ::FName::FName(&local_a8,"Level");
          bVar5 = FManagedArrayCollection::HasAttribute(param_1,*pFVar10,FVar4);
          FVar3 = FTransformCollection::TransformGroup;
          if (!bVar5) {
            return;
          }
          pFVar10 = ::FName::FName(&local_a0,"Levels");
          pTVar11 = FManagedArrayCollection::GetAttribute<int>(param_1,*pFVar10,FVar3);
          local_138 = param_2->ArrayNum;
          uVar14 = (ulonglong)(int)local_138;
          pFVar21 = (param_2->AllocatorInstance).Data;
          local_98._0_8_ = (FScriptContainerElement *)0x0;
          local_98._8_8_ = 0;
          pFVar27 = pFVar21 + uVar14 * 4;
          local_78 = (ForElementType<unsigned_int>)0x0;
          local_70 = 0;
          local_6c = 0x80;
          local_68 = -1;
          local_64 = 0;
          local_58.Data = (FScriptContainerElement *)0x0;
          local_50 = 0;
          local_140 = pTVar11;
          local_e8 = pFVar27;
          do {
            uVar18 = 0;
            local_108 = pFVar21;
            if (param_2->ArrayNum != (int)uVar14) {
              local_148[0] = 0;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_148);
            }
            if (pFVar21 == pFVar27) {
              ConvertSelectionSetToSelectionArr
                        ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98,param_2);
              local_50 = 0;
              if (local_58.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_58.Data);
              }
              bVar5 = local_98._12_4_ != 0;
              local_98._8_8_ = (ulonglong)(uint)local_98._12_4_ << 0x20;
              if (bVar5) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0xc,4,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
              }
              local_64 = 0;
              local_70 = 0;
              local_68 = -1;
              if (0x80 < local_6c) {
                local_6c = 0x80;
                TBitArray<FDefaultBitArrayAllocator>::Realloc
                          ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
              }
              if (local_78 != (ForElementType<unsigned_int>)0x0) {
                FMemory::Free((void *)local_78);
              }
              if ((FScriptContainerElement *)local_98._0_8_ == (FScriptContainerElement *)0x0) {
                return;
              }
              FMemory::Free((void *)local_98._0_8_);
              return;
            }
            uVar6 = *(uint *)pFVar21;
            uVar26 = 0;
            if ((int)uVar6 < *(int *)&pTVar11->field_0x18) {
              uVar26 = ~uVar6 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar7 = *(int *)(*(longlong *)&pTVar11->field_0x10 + (longlong)(int)uVar6 * 4);
            local_144 = iVar7;
            iVar8 = FManagedArrayCollection::NumElements
                              (param_1,FTransformCollection::TransformGroup);
            uVar14 = uVar18;
            if (0 < iVar8) {
              do {
                puVar23 = (uint *)0x0;
                uVar26 = (uint)uVar18;
                uVar6 = 0;
                if ((int)uVar26 < *(int *)&pTVar11->field_0x18) {
                  uVar6 = ~uVar26 >> 0x1f;
                }
                if ((uVar6 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                if (*(int *)(*(longlong *)&pTVar11->field_0x10 + uVar14) == iVar7) {
                  if (local_64 == 0) {
                    iVar8 = UE::Core::Private::
                            ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0xc,4,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                                       (int *)(local_98 + 0xc));
                    iVar7 = local_70;
                    if (local_70 == 0) {
                      iVar22 = 0;
LAB_14e81bccc:
                      if ((int)local_6c < local_70 + 1) {
                        uVar6 = local_6c + 0x1f >> 5;
                        uVar20 = local_70 + 0x20U >> 5;
                        if (uVar20 < 5) {
                          iVar9 = 4;
                        }
                        else {
                          uVar18 = (ulonglong)uVar20;
                          if (uVar6 < 5) {
                            uVar6 = 0;
                          }
                          if (uVar6 == 0) {
                            uVar25 = 4;
                            if (4 < uVar18) {
                              uVar25 = uVar18;
                            }
                          }
                          else {
                            uVar25 = ((ulonglong)uVar20 * 3 >> 3) + 0x10 + uVar18;
                          }
                          uVar12 = FMemory::QuantizeSize(uVar25 * 4,0);
                          iVar9 = (int)(uVar12 >> 2);
                          if (iVar9 < (int)uVar20) {
                            iVar9 = 0x7fffffff;
                          }
                        }
                        local_6c = iVar9 << 5;
                        TBitArray<FDefaultBitArrayAllocator>::Realloc
                                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),
                                   local_70);
                      }
                      local_70 = local_70 + 1;
                      uVar20 = local_70 >> 0x1f & 0x1f;
                      uVar6 = local_70 + uVar20;
                      iVar9 = (uVar6 & 0x1f) - uVar20;
                      if (iVar9 != 0) {
                        FVar15 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
                        if (local_78 != (ForElementType<unsigned_int>)0x0) {
                          FVar15 = local_78;
                        }
                        puVar1 = (uint *)((longlong)FVar15 + (longlong)((int)uVar6 >> 5) * 4);
                        *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar9 & 0x1f);
                      }
                    }
                    else {
                      iVar22 = (int)(local_70 + (local_70 >> 0x1f & 0x1fU)) >> 5;
                      if (iVar22 != (int)((local_70 + -1 >> 0x1f & 0x1fU) + local_70 + -1) >> 5)
                      goto LAB_14e81bccc;
                      local_70 = local_70 + 1;
                    }
                    FVar15 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
                    if (local_78 != (ForElementType<unsigned_int>)0x0) {
                      FVar15 = local_78;
                    }
                    puVar1 = (uint *)((longlong)FVar15 + (longlong)iVar22 * 4);
                    *puVar1 = *puVar1 & ~(1 << ((byte)iVar7 & 0x1f));
                    iVar7 = local_68;
                  }
                  else {
                    local_64 = local_64 + -1;
                    iVar7 = *(int *)(local_98._0_8_ + (longlong)local_68 * 0xc + 4);
                    iVar8 = local_68;
                    if (local_64 != 0) {
                      *(undefined4 *)(local_98._0_8_ + (longlong)iVar7 * 0xc) = 0xffffffff;
                    }
                  }
                  local_68 = iVar7;
                  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                   *)local_98,&local_b8,iVar8);
                  if (local_b8.Pointer != (uint *)0x0) {
                    *(uint *)local_b8.Pointer = uVar26;
                    *(uint *)((longlong)local_b8.Pointer + 4) = 0xffffffff;
                    puVar23 = local_b8.Pointer;
                  }
                  uVar6 = *puVar23;
                  if ((local_98._8_4_ - local_64 != 1) && (local_98._8_4_ != local_64)) {
                    FVar16.Data = local_60;
                    if (local_58.Data != (FScriptContainerElement *)0x0) {
                      FVar16.Data = local_58.Data;
                    }
                    for (iVar7 = *(int *)(FVar16.Data + (ulonglong)(local_50 - 1 & uVar6) * 4);
                        iVar7 != -1; iVar7 = *(int *)(local_98._0_8_ + (longlong)iVar7 * 0xc + 4)) {
                      if (*(uint *)(local_98._0_8_ + (longlong)iVar7 * 0xc) == uVar6) {
                        if (iVar7 != -1) {
                          *(uint *)(local_98._0_8_ + (longlong)iVar7 * 0xc) = uVar6;
                          TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          ::RemoveAtUninitialized
                                    ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                      *)local_98,local_b8.Index,1);
                          pTVar11 = local_140;
                          iVar7 = local_144;
                          goto LAB_14e81c116;
                        }
                        break;
                      }
                    }
                  }
                  uVar24 = local_98._8_4_ - local_64;
                  uVar20 = 1;
                  if (3 < uVar24) {
                    uVar18 = (ulonglong)((uVar24 >> 1) + 7) * 2 + 1;
                    lVar19 = 0x3f;
                    if (uVar18 != 0) {
                      for (; uVar18 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                      }
                    }
                    local_fc = (undefined4)lVar19;
                    uVar20 = 1 << ((byte)lVar19 & 0x1f);
                  }
                  if (((int)uVar24 < 1) || ((int)uVar20 <= (int)local_50)) {
                    uVar6 = local_50 - 1 & uVar6;
                    puVar23[2] = uVar6;
                    FVar16.Data = local_60;
                    if (local_58.Data != (FScriptContainerElement *)0x0) {
                      FVar16.Data = local_58.Data;
                    }
                    uVar18 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar6;
                    puVar23[1] = *(uint *)(FVar16.Data + uVar18 * 4);
                    *(int *)(FVar16.Data + uVar18 * 4) = local_b8.Index;
                    pTVar11 = local_140;
                    iVar7 = local_144;
                  }
                  else {
                    local_50 = uVar20;
                    if (local_58.Data != (FScriptContainerElement *)0x0) {
                      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                                (&local_58,0,0,4);
                    }
                    if (uVar20 != 0) {
                      uVar6 = uVar20;
                      if (uVar20 < 2) {
                        if (local_58.Data != (FScriptContainerElement *)0x0) {
                          uVar6 = 0;
                          goto LAB_14e81bf34;
                        }
                      }
                      else {
LAB_14e81bf34:
                        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                                  (&local_58,0,uVar6,4);
                      }
                      if (0 < (int)uVar20) {
                        uVar25 = (ulonglong)uVar20;
                        uVar18 = 0;
                        do {
                          FVar16.Data = local_60;
                          if (local_58.Data != (FScriptContainerElement *)0x0) {
                            FVar16.Data = local_58.Data;
                          }
                          uVar13 = uVar18 & (longlong)(int)uVar20 - 1U;
                          uVar18 = uVar18 + 1;
                          *(undefined4 *)(FVar16.Data + uVar13 * 4) = 0xffffffff;
                          uVar25 = uVar25 - 1;
                        } while (uVar25 != 0);
                      }
                    }
                    pTVar11 = local_140;
                    iVar7 = local_144;
                    if (local_50 != 0) {
                      pTStack_128 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
                      local_130 = 0;
                      uStack_12c = 1;
                      iStack_11c = 0;
                      iStack_118 = 0;
                      if (local_70 != 0) {
                        FVar15 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
                        if (local_78 != (ForElementType<unsigned_int>)0x0) {
                          FVar15 = local_78;
                        }
                        uVar6 = *(uint *)FVar15;
                        while (uVar6 == 0) {
                          iStack_118 = iStack_118 + 0x20;
                          lVar19 = (longlong)local_130;
                          local_130 = local_130 + 1;
                          if ((int)(local_70 + -1 + (local_70 + -1 >> 0x1f & 0x1fU)) >> 5 <
                              local_130) goto LAB_14e81c042;
                          uVar6 = ((uint *)((longlong)FVar15 + 4))[lVar19];
                        }
                        uStack_12c = -uVar6 & uVar6;
                        uVar18 = (ulonglong)uStack_12c * 2 + 1;
                        lVar19 = 0x3f;
                        if (uVar18 != 0) {
                          for (; uVar18 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                          }
                        }
                        local_f8 = (int)lVar19;
                        iStack_11c = local_f8 + -1 + iStack_118;
                        if (local_70 < iStack_11c) {
LAB_14e81c042:
                          iStack_11c = local_70;
                        }
                      }
                      local_120 = 0xffffffff;
                      local_e0 = (longlong *)local_98;
                      local_d8._padding_ = CONCAT44(uStack_12c,local_130);
                      local_d8.CurrentBitIndex = iStack_11c;
                      local_d8.UnvisitedBitMask = 0xffffffff;
                      local_d8._28_4_ = uStack_114;
                      local_d8.BaseBitIndex = iStack_118;
                      local_d8.Array = pTStack_128;
                      iVar8 = iStack_11c;
                      if (iStack_11c < local_70) {
                        do {
                          uVar6 = local_50 - 1 & *(uint *)(*local_e0 + (longlong)iVar8 * 0xc);
                          lVar19 = *local_e0 + (longlong)iVar8 * 0xc;
                          *(uint *)(lVar19 + 8) = uVar6;
                          FVar16.Data = local_60;
                          if (local_58.Data != (FScriptContainerElement *)0x0) {
                            FVar16.Data = local_58.Data;
                          }
                          uVar18 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar6;
                          *(undefined4 *)(lVar19 + 4) = *(undefined4 *)(FVar16.Data + uVar18 * 4);
                          *(int *)(FVar16.Data + uVar18 * 4) = iVar8;
                          local_d8.UnvisitedBitMask =
                               local_d8.UnvisitedBitMask & ~local_d8._padding_._4_4_;
                          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                                    (&local_d8);
                          pTVar11 = local_140;
                          iVar7 = local_144;
                          iVar8 = local_d8.CurrentBitIndex;
                        } while (local_d8.CurrentBitIndex < (local_d8.Array)->NumBits);
                      }
                    }
                  }
                }
LAB_14e81c116:
                uVar18 = (ulonglong)(uVar26 + 1);
                iVar8 = FManagedArrayCollection::NumElements
                                  (local_110,FTransformCollection::TransformGroup);
                param_2 = local_f0;
                param_1 = local_110;
                uVar14 = uVar14 + 4;
                pFVar27 = local_e8;
              } while ((int)(uVar26 + 1) < iVar8);
            }
            uVar14 = (ulonglong)local_138;
            pFVar21 = local_108 + 4;
          } while( true );
        }
        iVar7 = *(int *)(*(longlong *)&param_1->GroupInfo + 0xc + (longlong)iVar7 * 0x14);
      } while (iVar7 != -1);
    }
  }
  return;
}

// SelectParent @ 14e81c230

void __cdecl
FFractureEngineSelection::SelectParent
          (FManagedArrayCollection *param_1,FDataflowTransformSelection *param_2)

{
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  FDataflowSelection::AsArray((FDataflowSelection *)param_2,&local_18);
  SelectParent(param_1,&local_18);
  FDataflowSelection::SetFromArray((FDataflowSelection *)param_2,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// SelectParent @ 14e81c2a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FFractureEngineSelection::SelectParent
          (FManagedArrayCollection *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  FName FVar2;
  FName FVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  FName *pFVar10;
  TManagedArray<int> *pTVar11;
  ulong64 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ForElementType<unsigned_int> FVar15;
  ForAnyElementType FVar16;
  undefined1 *puVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  uint *puVar21;
  uint uVar22;
  ulonglong uVar23;
  FScriptContainerElement *pFVar24;
  undefined1 auStackY_158 [32];
  undefined1 local_128 [4];
  uint local_124;
  TManagedArray<int> *local_120;
  int local_118;
  uint uStack_114;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_110;
  undefined4 local_108;
  int iStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  undefined4 local_f4;
  int local_f0;
  FScriptContainerElement *local_e8;
  longlong *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_d8;
  FSparseArrayAllocationInfo local_b8;
  FName local_a8;
  FName local_a0;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  int local_70;
  uint local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  FVar2 = FTransformCollection::TransformGroup;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  uVar6 = ::GetTypeHash(FTransformCollection::TransformGroup.ComparisonIndex.Value);
  FVar3 = FTransformCollection::TransformGroup;
  if (*(int *)&(param_1->GroupInfo).field_0x8 != *(int *)&(param_1->GroupInfo).field_0x34) {
    puVar17 = *(undefined1 **)&(param_1->GroupInfo).field_0x40;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = &(param_1->GroupInfo).field_0x38;
    }
    iVar7 = *(int *)(puVar17 +
                    (ulonglong)
                    (*(int *)&(param_1->GroupInfo).field_0x48 - 1U & FVar2.Number + uVar6) * 4);
    if (iVar7 != -1) {
      do {
        if (*(FName *)(*(longlong *)&param_1->GroupInfo + (longlong)iVar7 * 0x14) == FVar2) {
          pFVar10 = ::FName::FName(&local_a8,"Parent");
          bVar5 = FManagedArrayCollection::HasAttribute(param_1,*pFVar10,FVar3);
          FVar2 = FTransformCollection::TransformGroup;
          if (!bVar5) {
            return;
          }
          pFVar10 = ::FName::FName(&local_a0,"Parent");
          pTVar11 = FManagedArrayCollection::GetAttribute<int>(param_1,*pFVar10,FVar2);
          local_124 = param_2->ArrayNum;
          uVar14 = (ulonglong)(int)local_124;
          pFVar24 = (param_2->AllocatorInstance).Data;
          local_98._0_8_ = (FScriptContainerElement *)0x0;
          local_e8 = pFVar24 + uVar14 * 4;
          local_98._8_8_ = 0;
          local_78 = (ForElementType<unsigned_int>)0x0;
          local_70 = 0;
          local_6c = 0x80;
          local_68 = -1;
          local_64 = 0;
          local_58.Data = (FScriptContainerElement *)0x0;
          local_50 = 0;
          local_120 = pTVar11;
          goto LAB_14e81c3f2;
        }
        iVar7 = *(int *)(*(longlong *)&param_1->GroupInfo + 0xc + (longlong)iVar7 * 0x14);
      } while (iVar7 != -1);
    }
  }
  return;
LAB_14e81c3f2:
  pFVar4 = local_e8;
  if (param_2->ArrayNum != (int)uVar14) {
    local_128[0] = 0;
    `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_128);
  }
  if (pFVar24 == pFVar4) {
    ConvertSelectionSetToSelectionArr
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98,param_2);
    local_50 = 0;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
    bVar5 = local_98._12_4_ != 0;
    local_98._8_8_ = (ulonglong)(uint)local_98._12_4_ << 0x20;
    if (bVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
    }
    local_64 = 0;
    local_70 = 0;
    local_68 = -1;
    if (0x80 < local_6c) {
      local_6c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
    }
    if (local_78 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_78);
    }
    if ((FScriptContainerElement *)local_98._0_8_ == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free((void *)local_98._0_8_);
    return;
  }
  uVar6 = *(uint *)pFVar24;
  uVar19 = 0;
  if ((int)uVar6 < *(int *)&pTVar11->field_0x18) {
    uVar19 = ~uVar6 >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar6 = *(uint *)(*(longlong *)&pTVar11->field_0x10 + (longlong)(int)uVar6 * 4);
  if (uVar6 != (int)FManagedArrayCollection::Invalid) {
    if (local_64 == 0) {
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xc,4,1,(ForAnyElementType *)local_98,(int *)(local_98 + 8),
                         (int *)(local_98 + 0xc));
      iVar7 = local_70;
      if (local_70 == 0) {
        iVar20 = 0;
LAB_14e81c4f1:
        if ((int)local_6c < local_70 + 1) {
          uVar19 = local_6c + 0x1f >> 5;
          uVar22 = local_70 + 0x20U >> 5;
          if (uVar22 < 5) {
            iVar9 = 4;
          }
          else {
            uVar14 = (ulonglong)uVar22;
            if (uVar19 < 5) {
              uVar19 = 0;
            }
            if (uVar19 == 0) {
              uVar23 = 4;
              if (4 < uVar14) {
                uVar23 = uVar14;
              }
            }
            else {
              uVar23 = ((ulonglong)uVar22 * 3 >> 3) + 0x10 + uVar14;
            }
            uVar12 = FMemory::QuantizeSize(uVar23 * 4,0);
            iVar9 = (int)(uVar12 >> 2);
            if (iVar9 < (int)uVar22) {
              iVar9 = 0x7fffffff;
            }
          }
          local_6c = iVar9 << 5;
          TBitArray<FDefaultBitArrayAllocator>::Realloc
                    ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),local_70);
        }
        local_70 = local_70 + 1;
        uVar22 = local_70 >> 0x1f & 0x1f;
        uVar19 = local_70 + uVar22;
        iVar9 = (uVar19 & 0x1f) - uVar22;
        if (iVar9 != 0) {
          FVar15 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
          if (local_78 != (ForElementType<unsigned_int>)0x0) {
            FVar15 = local_78;
          }
          puVar21 = (uint *)((longlong)FVar15 + (longlong)((int)uVar19 >> 5) * 4);
          *puVar21 = *puVar21 & 0xffffffffU >> (0x20U - (char)iVar9 & 0x1f);
        }
      }
      else {
        iVar20 = (int)(local_70 + (local_70 >> 0x1f & 0x1fU)) >> 5;
        if (iVar20 != (int)((local_70 + -1 >> 0x1f & 0x1fU) + local_70 + -1) >> 5)
        goto LAB_14e81c4f1;
        local_70 = local_70 + 1;
      }
      FVar15 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar15 = local_78;
      }
      puVar21 = (uint *)((longlong)FVar15 + (longlong)iVar20 * 4);
      *puVar21 = *puVar21 & ~(1 << ((byte)iVar7 & 0x1f));
      iVar7 = local_68;
    }
    else {
      iVar7 = *(int *)(local_98._0_8_ + (longlong)local_68 * 0xc + 4);
      local_64 = local_64 + -1;
      iVar8 = local_68;
      if (local_64 != 0) {
        *(undefined4 *)(local_98._0_8_ + (longlong)iVar7 * 0xc) = 0xffffffff;
      }
    }
    local_68 = iVar7;
    puVar21 = (uint *)0x0;
    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,&local_b8,iVar8);
    if (local_b8.Pointer != (uint *)0x0) {
      *(uint *)local_b8.Pointer = uVar6;
      *(uint *)((longlong)local_b8.Pointer + 4) = 0xffffffff;
      puVar21 = local_b8.Pointer;
    }
    uVar6 = *puVar21;
    if ((local_98._8_4_ - local_64 != 1) && (local_98._8_4_ != local_64)) {
      FVar16.Data = local_60;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FVar16.Data = local_58.Data;
      }
      for (iVar7 = *(int *)(FVar16.Data + (ulonglong)(local_50 - 1 & uVar6) * 4); iVar7 != -1;
          iVar7 = *(int *)(local_98._0_8_ + (longlong)iVar7 * 0xc + 4)) {
        if (*(uint *)(local_98._0_8_ + (longlong)iVar7 * 0xc) == uVar6) {
          if (iVar7 != -1) {
            *(uint *)(local_98._0_8_ + (longlong)iVar7 * 0xc) = uVar6;
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_98,local_b8.Index,1);
            pTVar11 = local_120;
            goto LAB_14e81c925;
          }
          break;
        }
      }
    }
    uVar22 = local_98._8_4_ - local_64;
    uVar19 = 1;
    if (3 < uVar22) {
      uVar14 = (ulonglong)((uVar22 >> 1) + 7) * 2 + 1;
      lVar18 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_f4 = (undefined4)lVar18;
      uVar19 = 1 << ((byte)lVar18 & 0x1f);
    }
    if (((int)uVar22 < 1) || ((int)uVar19 <= (int)local_50)) {
      uVar6 = local_50 - 1 & uVar6;
      puVar21[2] = uVar6;
      FVar16.Data = local_60;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FVar16.Data = local_58.Data;
      }
      uVar14 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar6;
      puVar21[1] = *(uint *)(FVar16.Data + uVar14 * 4);
      *(int *)(FVar16.Data + uVar14 * 4) = local_b8.Index;
      pTVar11 = local_120;
    }
    else {
      local_50 = uVar19;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
      }
      if (uVar19 != 0) {
        uVar6 = uVar19;
        if (uVar19 < 2) {
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            uVar6 = 0;
            goto LAB_14e81c745;
          }
        }
        else {
LAB_14e81c745:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar6,4);
        }
        if (0 < (int)uVar19) {
          uVar23 = (ulonglong)uVar19;
          uVar14 = 0;
          do {
            FVar16.Data = local_60;
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              FVar16.Data = local_58.Data;
            }
            uVar13 = uVar14 & (longlong)(int)uVar19 - 1U;
            uVar14 = uVar14 + 1;
            *(undefined4 *)(FVar16.Data + uVar13 * 4) = 0xffffffff;
            uVar23 = uVar23 - 1;
          } while (uVar23 != 0);
        }
      }
      pTVar11 = local_120;
      if (local_50 != 0) {
        pTStack_110 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
        local_118 = 0;
        uStack_114 = 1;
        iStack_104 = 0;
        iStack_100 = 0;
        if (local_70 != 0) {
          FVar15 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
          if (local_78 != (ForElementType<unsigned_int>)0x0) {
            FVar15 = local_78;
          }
          uVar6 = *(uint *)FVar15;
          while (uVar6 == 0) {
            iStack_100 = iStack_100 + 0x20;
            lVar18 = (longlong)local_118;
            local_118 = local_118 + 1;
            if ((int)(local_70 + -1 + (local_70 + -1 >> 0x1f & 0x1fU)) >> 5 < local_118)
            goto LAB_14e81c854;
            uVar6 = ((uint *)((longlong)FVar15 + 4))[lVar18];
          }
          uStack_114 = -uVar6 & uVar6;
          uVar14 = (ulonglong)uStack_114 * 2 + 1;
          lVar18 = 0x3f;
          if (uVar14 != 0) {
            for (; uVar14 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          local_f0 = (int)lVar18;
          iStack_104 = local_f0 + -1 + iStack_100;
          if (local_70 < iStack_104) {
LAB_14e81c854:
            iStack_104 = local_70;
          }
        }
        local_108 = 0xffffffff;
        local_e0 = (longlong *)local_98;
        local_d8._padding_ = CONCAT44(uStack_114,local_118);
        local_d8.CurrentBitIndex = iStack_104;
        local_d8.UnvisitedBitMask = 0xffffffff;
        local_d8._28_4_ = uStack_fc;
        local_d8.BaseBitIndex = iStack_100;
        local_d8.Array = pTStack_110;
        iVar7 = iStack_104;
        if (iStack_104 < local_70) {
          do {
            uVar6 = local_50 - 1 & *(uint *)(*local_e0 + (longlong)iVar7 * 0xc);
            lVar18 = *local_e0 + (longlong)iVar7 * 0xc;
            *(uint *)(lVar18 + 8) = uVar6;
            FVar16.Data = local_60;
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              FVar16.Data = local_58.Data;
            }
            uVar14 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar6;
            *(undefined4 *)(lVar18 + 4) = *(undefined4 *)(FVar16.Data + uVar14 * 4);
            *(int *)(FVar16.Data + uVar14 * 4) = iVar7;
            local_d8.UnvisitedBitMask = local_d8.UnvisitedBitMask & ~local_d8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_d8);
            pTVar11 = local_120;
            iVar7 = local_d8.CurrentBitIndex;
          } while (local_d8.CurrentBitIndex < (local_d8.Array)->NumBits);
        }
      }
    }
  }
LAB_14e81c925:
  uVar14 = (ulonglong)local_124;
  pFVar24 = pFVar24 + 4;
  goto LAB_14e81c3f2;
}

// SelectSiblings @ 14e81ca10

void __cdecl
FFractureEngineSelection::SelectSiblings
          (FManagedArrayCollection *param_1,FDataflowTransformSelection *param_2)

{
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  FDataflowSelection::AsArray((FDataflowSelection *)param_2,&local_18);
  SelectSiblings(param_1,&local_18);
  FDataflowSelection::SetFromArray((FDataflowSelection *)param_2,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// SelectSiblings @ 14e81ca80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FFractureEngineSelection::SelectSiblings
          (FManagedArrayCollection *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  FName FVar2;
  FName FVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  FName *pFVar9;
  TManagedArray<int> *pTVar10;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  TBitArray<FDefaultBitArrayAllocator> *pTVar18;
  FScriptContainerElement *pFVar19;
  longlong *plVar20;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  longlong local_180;
  undefined1 local_178;
  undefined1 local_177 [3];
  undefined4 local_174;
  uint local_170;
  int local_16c;
  int local_168;
  int local_164;
  TManagedArray<int> *local_160;
  TArray<int,TSizedDefaultAllocator<32>_> *local_158;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *local_150;
  FScriptContainerElement *local_148;
  longlong *local_140;
  uint uStack_138;
  uint uStack_134;
  TBitArray<FDefaultBitArrayAllocator> *local_130;
  undefined4 uStack_128;
  uint uStack_124;
  uint local_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  longlong *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  FName local_e0;
  FName local_d8;
  FName local_d0;
  FName local_c8 [4];
  undefined4 local_a4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  FVar2 = FTransformCollection::TransformGroup;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  local_158 = param_2;
  uVar7 = ::GetTypeHash(FTransformCollection::TransformGroup.ComparisonIndex.Value);
  FVar3 = FTransformCollection::TransformGroup;
  if (*(int *)&(param_1->GroupInfo).field_0x8 != *(int *)&(param_1->GroupInfo).field_0x34) {
    puVar14 = *(undefined1 **)&(param_1->GroupInfo).field_0x40;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = &(param_1->GroupInfo).field_0x38;
    }
    iVar16 = *(int *)(puVar14 +
                     (ulonglong)
                     (*(int *)&(param_1->GroupInfo).field_0x48 - 1U & FVar2.Number + uVar7) * 4);
    if (iVar16 != -1) {
      do {
        if (*(FName *)(*(longlong *)&param_1->GroupInfo + (longlong)iVar16 * 0x14) == FVar2) {
          pFVar9 = ::FName::FName(&local_e0,"Parent");
          bVar6 = FManagedArrayCollection::HasAttribute(param_1,*pFVar9,FVar3);
          FVar2 = FTransformCollection::TransformGroup;
          if (!bVar6) {
            return;
          }
          pFVar9 = ::FName::FName(&local_d8,"Children");
          bVar6 = FManagedArrayCollection::HasAttribute(param_1,*pFVar9,FVar2);
          FVar2 = FTransformCollection::TransformGroup;
          if (!bVar6) {
            return;
          }
          pFVar9 = ::FName::FName(&local_d0,"Parent");
          pTVar10 = FManagedArrayCollection::GetAttribute<int>(param_1,*pFVar9,FVar2);
          FVar2 = FTransformCollection::TransformGroup;
          local_160 = pTVar10;
          pFVar9 = ::FName::FName(local_c8,"Children");
          pTVar11 = FManagedArrayCollection::
                    GetAttribute<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                              (param_1,*pFVar9,FVar2);
          local_170 = param_2->ArrayNum;
          uVar13 = (ulonglong)(int)local_170;
          pFVar19 = (param_2->AllocatorInstance).Data;
          local_98.Elements._0_8_ = 0;
          local_98.Elements._8_8_ = 0;
          local_148 = pFVar19 + uVar13 * 4;
          local_98.Elements._32_8_ = 0;
          local_98.Elements._40_4_ = 0;
          local_98.Elements._44_4_ = 0x80;
          local_98.Elements._48_4_ = 0xffffffff;
          local_98.Elements._52_4_ = 0;
          local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
          local_98.HashSize = 0;
          local_150 = pTVar11;
          do {
            pFVar4 = local_148;
            if (param_2->ArrayNum != (int)uVar13) {
              local_178 = 0;
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (&local_178);
            }
            if (pFVar19 == pFVar4) {
              ConvertSelectionSetToSelectionArr(&local_98,param_2);
              local_98.HashSize = 0;
              if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FMemory::Free((void *)local_98.Hash.SecondaryData);
              }
              TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        (&local_98.Elements);
              return;
            }
            uVar7 = *(uint *)pFVar19;
            uVar12 = 0;
            if ((int)uVar7 < *(int *)&pTVar10->field_0x18) {
              uVar12 = ~uVar7 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (local_188 = (longlong)(int)uVar7, local_180 = (longlong)*(int *)&pTVar10->field_0x18
               , bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            uVar7 = *(uint *)(*(longlong *)&pTVar10->field_0x10 + (longlong)(int)uVar7 * 4);
            if (uVar7 != (int)FManagedArrayCollection::Invalid) {
              uVar12 = 0;
              uVar8 = uVar12;
              if ((int)uVar7 < *(int *)&pTVar11->field_0x18) {
                uVar8 = ~uVar7 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (local_188 = (longlong)(int)uVar7,
                 local_180 = (longlong)*(int *)&pTVar11->field_0x18,
                 bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              uStack_134 = 1;
              plVar20 = (longlong *)
                        ((longlong)(int)uVar7 * 0x50 + *(longlong *)&pTVar11->field_0x10);
              uVar7 = *(uint *)(plVar20 + 5);
              local_130 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar20 + 2);
              uStack_124 = uVar12;
              local_120 = uVar12;
              if (uVar7 != 0) {
                pTVar18 = local_130;
                if ((TBitArray<FDefaultBitArrayAllocator> *)plVar20[4] !=
                    (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                  pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)plVar20[4];
                }
                uVar8 = *(uint *)(pTVar18->AllocatorInstance).InlineData;
                local_120 = 0;
                uVar12 = 0;
                while (uVar8 == 0) {
                  lVar15 = (longlong)(int)uVar12;
                  local_120 = local_120 + 0x20;
                  uVar12 = uVar12 + 1;
                  uStack_124 = uVar7;
                  if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar12)
                  goto LAB_14e81cd8f;
                  uVar8 = *(uint *)((pTVar18->AllocatorInstance).InlineData + lVar15 * 4 + 4);
                }
                uStack_134 = -uVar8 & uVar8;
                uVar13 = (ulonglong)uStack_134 * 2 + 1;
                lVar15 = 0x3f;
                if (uVar13 != 0) {
                  for (; uVar13 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                  }
                }
                local_16c = (int)lVar15;
                uStack_124 = (local_120 - 1) + local_16c;
                if ((int)uVar7 < (int)uStack_124) {
                  uStack_124 = uVar7;
                }
              }
LAB_14e81cd8f:
              uVar8 = *(uint *)(plVar20 + 5);
              uStack_11c = local_a4;
              iStack_118 = (int)plVar20[1] - *(int *)((longlong)plVar20 + 0x34);
              uVar17 = uVar8 & 0xffffffe0;
              TStack_108._padding_ = CONCAT44(uStack_134,uVar12);
              uStack_128 = 0xffffffff;
              TStack_108.CurrentBitIndex = uStack_124;
              TStack_108.UnvisitedBitMask = 0xffffffff;
              iVar16 = (int)uVar8 >> 5;
              TStack_108._28_4_ = local_a4;
              TStack_108.BaseBitIndex = local_120;
              uStack_e8 = CONCAT44(uStack_114,iStack_118);
              local_140 = plVar20;
              uStack_138 = uVar12;
              local_110 = plVar20;
              TStack_108.Array = local_130;
              if ((((int)uVar8 < 0) || ((int)uVar7 < (int)uVar8)) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                     ,0x7af,L""), bVar6)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              uVar7 = *(uint *)(plVar20 + 5);
              if (uVar8 != uVar7) {
                pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar20 + 2);
                if ((TBitArray<FDefaultBitArrayAllocator> *)plVar20[4] !=
                    (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                  pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)plVar20[4];
                }
                uVar12 = -1 << ((byte)uVar8 & 0x1f) &
                         *(uint *)((pTVar18->AllocatorInstance).InlineData + (longlong)iVar16 * 4);
                while (uVar12 == 0) {
                  lVar15 = (longlong)iVar16;
                  uVar17 = uVar17 + 0x20;
                  iVar16 = iVar16 + 1;
                  uVar8 = uVar7;
                  if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
                  goto LAB_14e81cea0;
                  uVar12 = *(uint *)((pTVar18->AllocatorInstance).InlineData + lVar15 * 4 + 4);
                }
                uVar13 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
                lVar15 = 0x3f;
                if (uVar13 != 0) {
                  for (; uVar13 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                  }
                }
                local_168 = (int)lVar15;
                uVar8 = local_168 + -1 + uVar17;
                if ((int)uVar7 < (int)uVar8) {
                  uVar8 = uVar7;
                }
              }
LAB_14e81cea0:
              while( true ) {
                plVar5 = local_110;
                if ((int)local_110[1] - *(int *)((longlong)local_110 + 0x34) != (int)uStack_e8) {
                  local_177[0] = 0;
                  `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_177);
                }
                if (((TStack_108.CurrentBitIndex == uVar8) &&
                    (TStack_108.Array == (TBitArray<FDefaultBitArrayAllocator> *)(plVar20 + 2))) &&
                   (pTVar10 = local_160, pTVar11 = local_150, param_2 = local_158, plVar5 == plVar20
                   )) break;
                local_174 = *(undefined4 *)(*plVar5 + (longlong)TStack_108.CurrentBitIndex * 0xc);
                TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                          (&local_98,&local_164,(bool *)&local_174);
                TStack_108.UnvisitedBitMask =
                     TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
              }
            }
            uVar13 = (ulonglong)local_170;
            pFVar19 = pFVar19 + 4;
          } while( true );
        }
        iVar16 = *(int *)(*(longlong *)&param_1->GroupInfo + 0xc + (longlong)iVar16 * 0x14);
      } while (iVar16 != -1);
    }
  }
  return;
}

