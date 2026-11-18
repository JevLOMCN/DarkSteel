// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 8

// FindOrAddImpl<FFieldClass_const_*_const_&> @ 14d82d940

FPropertyViewerMapItem * __thiscall
TMapBase<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>_>
::FindOrAddImpl<FFieldClass_const_*_const_&>
          (TMapBase<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>_>
           *this,uint param_1,FFieldClass **param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FFieldClass **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if ((FFieldClass *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (FPropertyViewerMapItem *)(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[5];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem>,TDefaultMapHashableKeyFuncs<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FFieldClass_const_*_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FFieldClass_const_*_const_&> *)(ulonglong)param_1,(bool *)&local_res20
            );
  return (FPropertyViewerMapItem *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x30);
}

// FindOrAddImpl<FTopLevelAssetPath> @ 14d82d9f0

FPropertyViewerMapItem * __thiscall
TMapBase<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>_>
::FindOrAddImpl<FTopLevelAssetPath>
          (TMapBase<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>_>
           *this,uint param_1,FTopLevelAssetPath *param_2)

{
  FName *pFVar1;
  uint uVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [2];
  FTopLevelAssetPath *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar2 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        pFVar1 = (FName *)((longlong)(int)uVar2 * 0x38 + *(longlong *)&(this->Pairs).Elements);
        if ((*pFVar1 == param_2->PackageName) && (pFVar1[1] == param_2->AssetName)) {
          if ((uVar2 != 0xffffffff) && (pFVar1 != (FName *)0x0)) {
            return (FPropertyViewerMapItem *)(pFVar1 + 2);
          }
          break;
        }
        uVar2 = pFVar1[6].ComparisonIndex.Value;
      } while (uVar2 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FTopLevelAssetPath_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FTopLevelAssetPath_&&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (FPropertyViewerMapItem *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x38 + 0x10);
}

// Find @ 14d861420

FPropertyViewerMapItem * __thiscall
TMapBase<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>_>
::Find(TMapBase<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FFieldClass_const_*,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>_>
       *this,FFieldClass *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  FPropertyViewerMapItem *pFVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if ((FFieldClass *)*plVar2 == param_1) {
          pFVar4 = (FPropertyViewerMapItem *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pFVar4 = (FPropertyViewerMapItem *)(plVar2 + 1);
          }
          return pFVar4;
        }
        iVar1 = (int)plVar2[5];
      } while (iVar1 != -1);
    }
  }
  return (FPropertyViewerMapItem *)0x0;
}

// Find @ 14d8614d0

TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> * __thiscall
TMapBase<ITableRow_const_*,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,0>_>
::Find(TMapBase<ITableRow_const_*,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,0>_>
       *this,ITableRow *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *pTVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((ITableRow *)*plVar2 == param_1) {
          pTVar4 = (TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1> *)0x0;
}

// Find @ 14d861570

FPropertyViewerMapItem * __thiscall
TMapBase<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>_>
::Find(TMapBase<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,UE::PropertyViewer::Private::FPropertyViewerMapItem,0>_>
       *this,FTopLevelAssetPath *param_1)

{
  FName FVar1;
  FName FVar2;
  uint uVar3;
  uint uVar4;
  FName *pFVar5;
  ForElementType<FSetElementId> FVar6;
  
  FVar1 = param_1->AssetName;
  uVar3 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  FVar2 = param_1->PackageName;
  uVar4 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  uVar4 = uVar4 + FVar2.Number;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar6 +
                     (ulonglong)
                     ((this->Pairs).HashSize - 1U &
                     (uVar4 * 0x40 + uVar3 + FVar1.Number + -0x61c88647 + (uVar4 >> 2) ^ uVar4)) * 4
                     );
    if (uVar3 != 0xffffffff) {
      do {
        pFVar5 = (FName *)((longlong)(int)uVar3 * 0x38 + *(longlong *)&(this->Pairs).Elements);
        if ((*pFVar5 == param_1->PackageName) && (pFVar5[1] == param_1->AssetName)) {
          if (uVar3 == 0xffffffff) {
            return (FPropertyViewerMapItem *)0x0;
          }
          if (pFVar5 != (FName *)0x0) {
            return (FPropertyViewerMapItem *)(pFVar5 + 2);
          }
          return (FPropertyViewerMapItem *)0x0;
        }
        uVar3 = pFVar5[6].ComparisonIndex.Value;
      } while (uVar3 != 0xffffffff);
    }
  }
  return (FPropertyViewerMapItem *)0x0;
}

// Find @ 14d861660

FSparseItemInfo * __thiscall
TMapBase<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,FSparseItemInfo,0>_>
::Find(TMapBase<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,FSparseItemInfo,0>_>
       *this,TSharedPtr<UE::PropertyViewer::Private::FTreeNode_const_,1> *param_1)

{
  int iVar1;
  uint uVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode_const_,1> local_18;
  
  local_18.Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar2 = ((uint)((ulonglong)local_18.Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)local_18.Object >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  local_18.SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  iVar1 = TSet<TTuple<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSharedPtr<UE::PropertyViewer::Private::FTreeNode_const_,1>_>
                    (&this->Pairs,uVar2 >> 0x10 ^ uVar2,&local_18);
  if (iVar1 == -1) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  }
  else {
    lVar4 = (longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
    if (lVar4 != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return (FSparseItemInfo *)(lVar4 + 0x10);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return (FSparseItemInfo *)0x0;
}

// Find @ 14d861730

TSharedRef<ITableRow,1> * __thiscall
TMapBase<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<ITableRow,1>,0>_>
::Find(TMapBase<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<ITableRow,1>,0>_>
       *this,TSharedPtr<UE::PropertyViewer::Private::FTreeNode_const_,1> *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<UE::PropertyViewer::Private::FTreeNode_const_,1> local_18;
  
  local_18.Object = param_1->Object;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar3 = ((uint)((ulonglong)local_18.Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)local_18.Object >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  local_18.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  iVar2 = TSet<TTuple<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::PropertyViewer::Private::FTreeNode,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSharedPtr<UE::PropertyViewer::Private::FTreeNode_const_,1>_>
                    (&this->Pairs,uVar3 >> 0x10 ^ uVar3,&local_18);
  if (iVar2 == -1) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  }
  else {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar2 * 0x28;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
    if (lVar1 != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return (TSharedRef<ITableRow,1> *)(lVar1 + 0x10);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TSharedRef<ITableRow,1> *)0x0;
}

// Find @ 14d861800

FLinearColor * __thiscall
TMapBase<FString,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FLinearColor,0>_>
::Find(TMapBase<FString,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FLinearColor,0>_>
       *this,FString *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  FLinearColor *pFVar6;
  
  iVar3 = (param_1->Data).ArrayNum;
  if (iVar3 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar4 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar4 = 0;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  iVar3 = TSet<TTuple<FString,FLinearColor>,TDefaultMapHashableKeyFuncs<FString,FLinearColor,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar2,param_1);
  if (iVar3 != -1) {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar3 * 0x28;
    pFVar6 = (FLinearColor *)0x0;
    if (lVar1 != 0) {
      pFVar6 = (FLinearColor *)(lVar1 + 0x10);
    }
    return pFVar6;
  }
  return (FLinearColor *)0x0;
}

