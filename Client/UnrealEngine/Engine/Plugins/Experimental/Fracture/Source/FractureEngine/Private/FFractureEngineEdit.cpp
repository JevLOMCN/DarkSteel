// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FractureEngine
// Functions: 4

// DeleteBranch @ 14e80ebc0

void __cdecl
FFractureEngineEdit::DeleteBranch
          (FGeometryCollection *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  FName *pFVar5;
  TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *pTVar6;
  ulonglong uVar7;
  ForAnyElementType FVar8;
  longlong lVar9;
  FName local_res8;
  FName local_res10;
  TArray<int,TSizedDefaultAllocator<32>_> local_2b8;
  TArray<int,TSizedDefaultAllocator<32>_> local_2a8;
  FCollectionTransformSelectionFacade local_298;
  
  GeometryCollection::Facades::FCollectionTransformSelectionFacade::
  FCollectionTransformSelectionFacade(&local_298,(FManagedArrayCollection *)param_1);
  local_2b8.ArrayNum = param_2->ArrayNum;
  lVar9 = (longlong)local_2b8.ArrayNum;
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_2b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_2b8.ArrayNum == 0) {
    local_2b8.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_2b8.ArrayNum,0,&local_2b8.AllocatorInstance,local_2b8.ArrayNum,
               &local_2b8.ArrayMax);
    memcpy(local_2b8.AllocatorInstance.Data,pFVar1,lVar9 << 2);
  }
  GeometryCollection::Facades::FCollectionTransformSelectionFacade::RemoveRootNodes
            (&local_298,&local_2b8);
  GeometryCollection::Facades::FCollectionTransformSelectionFacade::Sanitize
            (&local_298,&local_2b8,true);
  FVar2 = FTransformCollection::TransformGroup;
  local_2a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2a8.ArrayNum = 0;
  local_2a8.ArrayMax = 0;
  pFVar5 = ::FName::FName(&local_res10,"Children");
  pTVar6 = FManagedArrayCollection::
           GetAttribute<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                     ((FManagedArrayCollection *)param_1,*pFVar5,FVar2);
  iVar3 = local_2b8.ArrayNum;
  uVar7 = (ulonglong)local_2b8.ArrayNum;
  pFVar1 = local_2b8.AllocatorInstance.Data + uVar7 * 4;
  FVar8.Data = local_2b8.AllocatorInstance.Data;
  while( true ) {
    if ((uint)uVar7 != iVar3) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (FVar8.Data == pFVar1) break;
    FGeometryCollectionClusteringUtility::RecursiveAddAllChildren
              (pTVar6,*(int *)FVar8.Data,&local_2a8);
    uVar7 = (ulonglong)(uint)local_2b8.ArrayNum;
    FVar8.Data = FVar8.Data + 4;
  }
  AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
            ((int *)local_2a8.AllocatorInstance.Data,local_2a8.ArrayNum,
             local_res8.ComparisonIndex.Value._0_1_,(TLess<void> *)&local_res8);
  (**(code **)(param_1->_padding_ + 0x28))
            (param_1,&FTransformCollection::TransformGroup,&local_2a8,0x101);
  FGeometryCollectionClusteringUtility::RemoveDanglingClusters(param_1);
  FVar2 = FGeometryCollection::GeometryGroup;
  pFVar5 = ::FName::FName(&local_res8,"Proximity");
  bVar4 = FManagedArrayCollection::HasAttribute((FManagedArrayCollection *)param_1,*pFVar5,FVar2);
  FVar2 = FGeometryCollection::GeometryGroup;
  if (bVar4) {
    pFVar5 = ::FName::FName(&local_res8,"Proximity");
    FManagedArrayCollection::RemoveAttribute((FManagedArrayCollection *)param_1,*pFVar5,FVar2);
  }
  if (local_2a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.AllocatorInstance.Data);
  }
  if (local_2b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.AllocatorInstance.Data);
  }
  return;
}

// Merge @ 14e816140

void __cdecl
FFractureEngineEdit::Merge
          (FGeometryCollection *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *_Src;
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  FName *pFVar4;
  longlong lVar5;
  FName local_res8;
  FName local_res10;
  TArray<int,TSizedDefaultAllocator<32>_> local_2a8;
  TArrayView<int_const_,int> local_298;
  FCollectionTransformSelectionFacade local_288;
  
  GeometryCollection::Facades::FCollectionTransformSelectionFacade::
  FCollectionTransformSelectionFacade(&local_288,(FManagedArrayCollection *)param_1);
  local_2a8.ArrayNum = param_2->ArrayNum;
  lVar5 = (longlong)local_2a8.ArrayNum;
  _Src = (param_2->AllocatorInstance).Data;
  local_2a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_2a8.ArrayNum == 0) {
    local_2a8.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_2a8.ArrayNum,0,&local_2a8.AllocatorInstance,local_2a8.ArrayNum,
               &local_2a8.ArrayMax);
    memcpy(local_2a8.AllocatorInstance.Data,_Src,lVar5 << 2);
  }
  GeometryCollection::Facades::FCollectionTransformSelectionFacade::Sanitize
            (&local_288,&local_2a8,true);
  local_298.DataPtr = (int *)(param_2->AllocatorInstance).Data;
  local_298.ArrayNum = param_2->ArrayNum;
  if (local_298.ArrayNum < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  MergeAllSelectedBones(param_1,&local_298,false);
  FVar2 = FGeometryCollection::GeometryGroup;
  pFVar4 = ::FName::FName(&local_res8,"Proximity");
  bVar3 = FManagedArrayCollection::HasAttribute((FManagedArrayCollection *)param_1,*pFVar4,FVar2);
  FVar2 = FGeometryCollection::GeometryGroup;
  if (bVar3) {
    pFVar4 = ::FName::FName(&local_res10,"Proximity");
    FManagedArrayCollection::RemoveAttribute((FManagedArrayCollection *)param_1,*pFVar4,FVar2);
  }
  if (local_2a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.AllocatorInstance.Data);
  }
  return;
}

// SetVisibilityInCollectionFromFaceSelection @ 14e81fb00

void __cdecl
FFractureEngineEdit::SetVisibilityInCollectionFromFaceSelection
          (FManagedArrayCollection *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          bool param_3)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FName *pFVar10;
  TManagedArray<bool> *pTVar11;
  FScriptContainerElement *pFVar12;
  undefined1 *puVar13;
  undefined1 local_res10 [16];
  FName local_res20;
  
  FVar6 = FGeometryCollection::FacesGroup;
  pFVar10 = ::FName::FName(&local_res20,"Visible");
  pTVar11 = FManagedArrayCollection::ModifyAttribute<bool>(param_1,*pFVar10,FVar6);
  FManagedArrayCollection::NumElements(param_1,FGeometryCollection::FacesGroup);
  pFVar12 = (param_2->AllocatorInstance).Data;
  iVar3 = param_2->ArrayNum;
  pFVar1 = pFVar12 + (longlong)iVar3 * 4;
  while( true ) {
    if (param_2->ArrayNum != iVar3) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar12 == pFVar1) break;
    iVar4 = *(int *)pFVar12;
    if ((iVar4 < 0) || (*(int *)&pTVar11->field_0x28 <= iVar4)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    puVar13 = &pTVar11->field_0x10;
    if (*(undefined1 **)&pTVar11->field_0x20 != (undefined1 *)0x0) {
      puVar13 = *(undefined1 **)&pTVar11->field_0x20;
    }
    iVar8 = iVar4;
    if (iVar4 < 0) {
      iVar8 = iVar4 + 0x1f;
    }
    lVar2 = (longlong)(iVar8 >> 5) * 4;
    uVar9 = 1 << ((byte)iVar4 & 0x1f);
    if (param_3) {
      *(uint *)(puVar13 + lVar2) = uVar9 | *(uint *)(puVar13 + lVar2);
      pFVar12 = pFVar12 + 4;
    }
    else {
      *(uint *)(puVar13 + lVar2) = ~uVar9 & *(uint *)(puVar13 + lVar2);
      pFVar12 = pFVar12 + 4;
    }
  }
  return;
}

// SetVisibilityInCollectionFromTransformSelection @ 14e81fc30

void __cdecl
FFractureEngineEdit::SetVisibilityInCollectionFromTransformSelection
          (FManagedArrayCollection *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          bool param_3)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  FName FVar4;
  TManagedArray<bool> *pTVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FName *pFVar10;
  TManagedArray<int> *pTVar11;
  TManagedArray<int> *pTVar12;
  TManagedArray<int> *pTVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  ForAnyElementType FVar17;
  undefined1 *puVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  undefined1 local_res10 [8];
  char local_res18;
  uint local_res20;
  TArray<int,TSizedDefaultAllocator<32>_> local_308;
  FScriptContainerElement *local_2f8;
  TManagedArray<bool> *local_2f0;
  longlong local_2e8;
  TManagedArray<int> *local_2e0;
  FScriptContainerElement *local_2d8;
  FName local_2d0;
  FName local_2c8;
  FName local_2c0;
  FName local_2b8 [2];
  FCollectionTransformSelectionFacade local_2a8;
  
  local_res18 = param_3;
  GeometryCollection::Facades::FCollectionTransformSelectionFacade::
  FCollectionTransformSelectionFacade(&local_2a8,param_1);
  FVar4 = FTransformCollection::TransformGroup;
  pFVar10 = ::FName::FName(&local_2d0,"TransformToGeometryIndex");
  pTVar11 = FManagedArrayCollection::GetAttribute<int>(param_1,*pFVar10,FVar4);
  FVar4 = FGeometryCollection::GeometryGroup;
  pFVar10 = ::FName::FName(&local_2c8,"FaceStart");
  pTVar12 = FManagedArrayCollection::GetAttribute<int>(param_1,*pFVar10,FVar4);
  FVar4 = FGeometryCollection::GeometryGroup;
  local_2e0 = pTVar12;
  pFVar10 = ::FName::FName(&local_2c0,"FaceCount");
  pTVar13 = FManagedArrayCollection::GetAttribute<int>(param_1,*pFVar10,FVar4);
  FVar4 = FGeometryCollection::FacesGroup;
  pFVar10 = ::FName::FName(local_2b8,"Visible");
  local_2f0 = FManagedArrayCollection::ModifyAttribute<bool>(param_1,*pFVar10,FVar4);
  local_308.ArrayNum = param_2->ArrayNum;
  lVar16 = (longlong)local_308.ArrayNum;
  pFVar19 = (param_2->AllocatorInstance).Data;
  local_308.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_308.ArrayNum == 0) {
    local_308.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_308.ArrayNum,0,&local_308.AllocatorInstance,local_308.ArrayNum,
               &local_308.ArrayMax);
    memcpy(local_308.AllocatorInstance.Data,pFVar19,lVar16 << 2);
  }
  GeometryCollection::Facades::FCollectionTransformSelectionFacade::ConvertSelectionToRigidNodes
            (&local_2a8,&local_308);
  uVar14 = (ulonglong)local_308.ArrayNum;
  local_res20 = local_308.ArrayNum;
  pFVar19 = local_308.AllocatorInstance.Data + uVar14 * 4;
  FVar17.Data = local_308.AllocatorInstance.Data;
  local_2d8 = pFVar19;
  do {
    local_2f8 = FVar17.Data;
    if (local_308.ArrayNum != (uint)uVar14) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (FVar17.Data == pFVar19) {
      if (local_308.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_308.AllocatorInstance.Data);
      }
      return;
    }
    uVar1 = *(uint *)FVar17.Data;
    uVar20 = ~uVar1 >> 0x1f;
    uVar9 = 0;
    if ((int)uVar1 < *(int *)&pTVar11->field_0x18) {
      uVar9 = uVar20;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar16 = (longlong)(int)uVar1 * 4;
    if (-1 < *(int *)(lVar16 + *(longlong *)&pTVar11->field_0x10)) {
      uVar9 = 0;
      if ((int)uVar1 < *(int *)&pTVar11->field_0x18) {
        uVar9 = uVar20;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar9 = *(uint *)(lVar16 + *(longlong *)&pTVar11->field_0x10);
      uVar7 = 0;
      if ((int)uVar9 < *(int *)&pTVar12->field_0x18) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_2e8 = (longlong)(int)uVar1 * 4;
      iVar2 = *(int *)(*(longlong *)&pTVar12->field_0x10 + (longlong)(int)uVar9 * 4);
      iVar15 = iVar2;
      while( true ) {
        lVar16 = local_2e8;
        uVar9 = 0;
        if ((int)uVar1 < *(int *)&pTVar11->field_0x18) {
          uVar9 = uVar20;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar9 = *(uint *)(lVar16 + *(longlong *)&pTVar11->field_0x10);
        uVar7 = 0;
        if ((int)uVar9 < *(int *)&pTVar13->field_0x18) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar5 = local_2f0;
        pFVar19 = local_2d8;
        pTVar12 = local_2e0;
        if (*(int *)(*(longlong *)&pTVar13->field_0x10 + (longlong)(int)uVar9 * 4) <= iVar15 - iVar2
           ) break;
        puVar18 = &local_2f0->field_0x10;
        if (((iVar15 < 0) || (*(int *)&local_2f0->field_0x28 <= iVar15)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(undefined1 **)&pTVar5->field_0x20 != (undefined1 *)0x0) {
          puVar18 = *(undefined1 **)&pTVar5->field_0x20;
        }
        iVar8 = iVar15;
        if (iVar15 < 0) {
          iVar8 = iVar15 + 0x1f;
        }
        lVar16 = (longlong)(iVar8 >> 5) * 4;
        uVar9 = 1 << ((byte)iVar15 & 0x1f);
        if (local_res18 == '\0') {
          *(uint *)(puVar18 + lVar16) = ~uVar9 & *(uint *)(puVar18 + lVar16);
          iVar15 = iVar15 + 1;
        }
        else {
          *(uint *)(puVar18 + lVar16) = uVar9 | *(uint *)(puVar18 + lVar16);
          iVar15 = iVar15 + 1;
        }
      }
    }
    uVar14 = (ulonglong)local_res20;
    FVar17.Data = local_2f8 + 4;
  } while( true );
}

