// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 8

// Emplace<FImagePixelData_*,FString_const_&> @ 14ddbdca0

FString * __thiscall
TMapBase<FImagePixelData_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FImagePixelData_*,FString,0>_>
::Emplace<FImagePixelData_*,FString_const_&>
          (TMapBase<FImagePixelData_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FImagePixelData_*,FString,0>_>
           *this,FImagePixelData **param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  TSparseSetElement<TTuple<FImagePixelData_*,FString>_> *local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar2 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar6);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar6) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar4);
  local_res8[0] = local_28.Pointer;
  if (local_28.Pointer != (TSparseSetElement<TTuple<FImagePixelData_*,FString>_> *)0x0) {
    *(FImagePixelData **)local_28.Pointer = *param_1;
    ::FString::FString((FString *)((longlong)local_28.Pointer + 8),param_2);
    *(undefined4 *)((longlong)local_28.Pointer + 0x18) = 0xffffffff;
  }
  local_res8[0] =
       (TSparseSetElement<TTuple<FImagePixelData_*,FString>_> *)
       CONCAT44(local_res8[0]._4_4_,local_28.Index);
  uVar5 = ((uint)(*(ulonglong *)local_28.Pointer >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)local_28.Pointer >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  bVar3 = TSet<TTuple<FImagePixelData_*,FString>,TDefaultMapHashableKeyFuncs<FImagePixelData_*,FString,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar5,local_28.Pointer,(int *)local_res8,(bool *)0x0);
  lVar6 = (longlong)(int)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<FImagePixelData_*,FString>,TDefaultMapHashableKeyFuncs<FImagePixelData_*,FString,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar5,local_28.Pointer,(int)local_res8[0]);
  }
  return (FString *)(*(longlong *)&(this->Pairs).Elements + 8 + lVar6 * 0x20);
}

// EmplaceByHash<FImagePixelData_*_const_&> @ 14ddbefa0

FString * __thiscall
TMapBase<FImagePixelData_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FImagePixelData_*,FString,0>_>
::EmplaceByHash<FImagePixelData_*_const_&>
          (TMapBase<FImagePixelData_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FImagePixelData_*,FString,0>_>
           *this,uint param_1,FImagePixelData **param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  TSparseSetElement<TTuple<FImagePixelData_*,FString>_> *pTVar5;
  longlong lVar6;
  TSparseSetElement<TTuple<FImagePixelData_*,FString>_> *local_res8;
  FSparseArrayAllocationInfo local_38 [2];
  
  pTVar5 = (TSparseSetElement<TTuple<FImagePixelData_*,FString>_> *)0x0;
  local_res8 = (TSparseSetElement<TTuple<FImagePixelData_*,FString>_> *)
               ((ulonglong)local_res8 & 0xffffffff00000000);
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar2 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar6);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar6) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,local_38,iVar4);
  local_res8 = local_38[0].Pointer;
  if (local_38[0].Pointer != (TSparseSetElement<TTuple<FImagePixelData_*,FString>_> *)0x0) {
    *(FImagePixelData **)local_38[0].Pointer = *param_2;
    local_res8 = (TSparseSetElement<TTuple<FImagePixelData_*,FString>_> *)
                 ((longlong)local_38[0].Pointer + 8);
    *(undefined8 *)local_res8 = 0;
    *(undefined8 *)((longlong)local_38[0].Pointer + 0x10) = 0;
    *(undefined4 *)((longlong)local_38[0].Pointer + 0x18) = 0xffffffff;
    pTVar5 = local_38[0].Pointer;
  }
  local_res8 = (TSparseSetElement<TTuple<FImagePixelData_*,FString>_> *)
               CONCAT44(local_res8._4_4_,local_38[0].Index);
  bVar3 = TSet<TTuple<FImagePixelData_*,FString>,TDefaultMapHashableKeyFuncs<FImagePixelData_*,FString,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,pTVar5,(int *)&local_res8,(bool *)0x0);
  lVar6 = (longlong)(int)local_res8;
  if (!bVar3) {
    TSet<TTuple<FImagePixelData_*,FString>,TDefaultMapHashableKeyFuncs<FImagePixelData_*,FString,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,pTVar5,(int)local_res8);
  }
  return (FString *)(*(longlong *)&(this->Pairs).Elements + 8 + lVar6 * 0x20);
}

// EmplaceByHash<FImagePixelData_*,FString_const_&> @ 14ddbf0e0

FString * __thiscall
TMapBase<FImagePixelData_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FImagePixelData_*,FString,0>_>
::EmplaceByHash<FImagePixelData_*,FString_const_&>
          (TMapBase<FImagePixelData_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FImagePixelData_*,FString,0>_>
           *this,uint param_1,FImagePixelData **param_2,FString *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  TSparseSetElement<TTuple<FImagePixelData_*,FString>_> *local_res8;
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    lVar5 = *(longlong *)&(this->Pairs).Elements;
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar2 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar5);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar5) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar4);
  local_res8 = local_28.Pointer;
  if (local_28.Pointer != (TSparseSetElement<TTuple<FImagePixelData_*,FString>_> *)0x0) {
    *(FImagePixelData **)local_28.Pointer = *param_2;
    ::FString::FString((FString *)((longlong)local_28.Pointer + 8),param_3);
    *(undefined4 *)((longlong)local_28.Pointer + 0x18) = 0xffffffff;
  }
  local_res8 = (TSparseSetElement<TTuple<FImagePixelData_*,FString>_> *)
               CONCAT44(local_res8._4_4_,local_28.Index);
  bVar3 = TSet<TTuple<FImagePixelData_*,FString>,TDefaultMapHashableKeyFuncs<FImagePixelData_*,FString,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,local_28.Pointer,(int *)&local_res8,(bool *)0x0)
  ;
  lVar5 = (longlong)(int)local_res8;
  if (!bVar3) {
    TSet<TTuple<FImagePixelData_*,FString>,TDefaultMapHashableKeyFuncs<FImagePixelData_*,FString,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,param_1,local_28.Pointer,(int)local_res8);
  }
  return (FString *)(*(longlong *)&(this->Pairs).Elements + 8 + lVar5 * 0x20);
}

// FindOrAddImpl<UE::Math::TIntPoint<int>_> @ 14ddc0aa0

FPerTile * __thiscall
TMapBase<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile,0>_>
::FindOrAddImpl<UE::Math::TIntPoint<int>_>
          (TMapBase<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile,0>_>
           *this,uint param_1,TIntPoint<int> *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  TIntPoint<int> *local_res20;
  
  iVar1 = TSet<TTuple<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile,0>,FDefaultSetAllocator>
          ::FindIndexByHash<UE::Math::TIntPoint<int>_>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (FPerTile *)(lVar2 + 8);
  }
  local_res20 = param_2;
  TSet<TTuple<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UE::Math::TIntPoint<int>_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<UE::Math::TIntPoint<int>_&&> *)(ulonglong)param_1,(bool *)&local_res20
            );
  return (FPerTile *)(*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// Find @ 14dddbcc0

FPerTile * __thiscall
TMapBase<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile,0>_>
::Find(TMapBase<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile,0>_>
       *this,TIntPoint<int> param_1)

{
  FPerTile *pFVar1;
  uint uVar2;
  uint uVar3;
  ForElementType<FSetElementId> FVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  uVar8 = param_1.field0_0x0._4_4_;
  uVar6 = param_1.field0_0x0._0_4_ - uVar8 ^ uVar8 >> 0xd;
  uVar3 = (-0x61c88647 - uVar6) - uVar8 ^ uVar6 << 8;
  uVar2 = (uVar8 - uVar6) - uVar3 ^ uVar3 >> 0xd;
  uVar6 = (uVar6 - uVar2) - uVar3 ^ uVar2 >> 0xc;
  uVar3 = (uVar3 - uVar6) - uVar2 ^ uVar6 << 0x10;
  uVar2 = (uVar2 - uVar3) - uVar6 ^ uVar3 >> 5;
  uVar6 = (uVar6 - uVar2) - uVar3 ^ uVar2 >> 3;
  uVar3 = (uVar3 - uVar6) - uVar2 ^ uVar6 << 10;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar7 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & ((uVar2 - uVar3) - uVar6 ^ uVar3 >> 0xf)) * 4);
    if (iVar7 != -1) {
      do {
        puVar5 = (undefined8 *)((longlong)iVar7 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (((int)*puVar5 == param_1.field0_0x0._0_4_) &&
           ((uint)((ulonglong)*puVar5 >> 0x20) == uVar8)) {
          if (iVar7 == -1) {
            return (FPerTile *)0x0;
          }
          pFVar1 = (FPerTile *)0x0;
          if (puVar5 != (undefined8 *)0x0) {
            pFVar1 = (FPerTile *)(puVar5 + 1);
          }
          return pFVar1;
        }
        iVar7 = *(int *)(puVar5 + 3);
      } while (iVar7 != -1);
    }
  }
  return (FPerTile *)0x0;
}

// FindChecked @ 14dddbec0

FString * __thiscall
TMapBase<FImagePixelData_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FImagePixelData_*,FString,0>_>
::FindChecked(TMapBase<FImagePixelData_*,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FImagePixelData_*,FString,0>_>
              *this,FImagePixelData *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FString *pFVar4;
  ForElementType<FSetElementId> FVar5;
  longlong *plVar6;
  uint uVar7;
  
  uVar7 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
    if (iVar3 != -1) {
      do {
        plVar6 = (longlong *)((longlong)iVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((FImagePixelData *)*plVar6 == param_1) {
          if (plVar6 != (longlong *)0x0) {
            return (FString *)(plVar6 + 1);
          }
          break;
        }
        iVar3 = (int)plVar6[3];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FString *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FString *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14dddbf90

FSceneViewStateReference * __thiscall
TMapBase<UE::Math::TIntPoint<int>,FSceneViewStateReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FSceneViewStateReference,0>_>
::FindChecked(TMapBase<UE::Math::TIntPoint<int>,FSceneViewStateReference,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FSceneViewStateReference,0>_>
              *this,TIntPoint<int> param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  FSceneViewStateReference *pFVar6;
  uint uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  
  uVar12 = param_1.field0_0x0._4_4_;
  uVar10 = param_1.field0_0x0._0_4_ - uVar12 ^ uVar12 >> 0xd;
  uVar8 = (-0x61c88647 - uVar10) - uVar12 ^ uVar10 << 8;
  uVar7 = (uVar12 - uVar10) - uVar8 ^ uVar8 >> 0xd;
  uVar10 = (uVar10 - uVar7) - uVar8 ^ uVar7 >> 0xc;
  uVar8 = (uVar8 - uVar10) - uVar7 ^ uVar10 << 0x10;
  uVar7 = (uVar7 - uVar8) - uVar10 ^ uVar8 >> 5;
  uVar10 = (uVar10 - uVar7) - uVar8 ^ uVar7 >> 3;
  uVar8 = (uVar8 - uVar10) - uVar7 ^ uVar10 << 10;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar9 = (this->Pairs).Hash.SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar11 = *(int *)((longlong)FVar9 +
                     (ulonglong)
                     ((this->Pairs).HashSize - 1U & ((uVar7 - uVar8) - uVar10 ^ uVar8 >> 0xf)) * 4);
    if (iVar11 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        uVar3 = *(undefined8 *)(lVar2 + (longlong)iVar11 * 0x48);
        lVar1 = lVar2 + (longlong)iVar11 * 0x48;
        if (((int)uVar3 == param_1.field0_0x0._0_4_) && ((uint)((ulonglong)uVar3 >> 0x20) == uVar12)
           ) {
          if ((iVar11 != -1) && (lVar1 != 0)) {
            return (FSceneViewStateReference *)(lVar1 + 8);
          }
          break;
        }
        iVar11 = *(int *)(lVar1 + 0x40);
      } while (iVar11 != -1);
    }
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar5) {
    return (FSceneViewStateReference *)&DAT_00000008;
  }
  pcVar4 = (code *)swi(3);
  pFVar6 = (FSceneViewStateReference *)(*pcVar4)();
  return pFVar6;
}

// FindChecked @ 14dddc0e0

TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> * __thiscall
TMapBase<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
::FindChecked(TMapBase<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieGraphRenderDataIdentifier,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>,0>_>
              *this,FMovieGraphRenderDataIdentifier *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *pTVar5;
  longlong lVar6;
  ForElementType<FSetElementId> FVar7;
  FMovieGraphRenderDataIdentifier local_58;
  
  local_58.RootBranchName = param_1->RootBranchName;
  ::FString::FString(&local_58.LayerName,&param_1->LayerName);
  ::FString::FString(&local_58.RendererName,&param_1->RendererName);
  ::FString::FString(&local_58.SubResourceName,&param_1->SubResourceName);
  ::FString::FString(&local_58.CameraName,&param_1->CameraName);
  uVar4 = ::GetTypeHash(&local_58);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & uVar4) * 4);
    while (iVar1 != -1) {
      bVar3 = FMovieGraphRenderDataIdentifier::operator==
                        ((FMovieGraphRenderDataIdentifier *)
                         (*(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x58),param_1);
      lVar6 = (longlong)iVar1 * 0x58 + *(longlong *)&(this->Pairs).Elements;
      if (bVar3) {
        if (lVar6 == 0) goto LAB_14dddc1a5;
        goto LAB_14dddc1cb;
      }
      iVar1 = *(int *)(lVar6 + 0x50);
    }
  }
  lVar6 = 0;
LAB_14dddc1a5:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *)(*pcVar2)();
    return pTVar5;
  }
LAB_14dddc1cb:
  return (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *)(lVar6 + 0x48);
}

