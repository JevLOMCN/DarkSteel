// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 35

// Emplace<TObjectPtr<UMaterialInterface>_> @ 14ddbddf0

FSetElementId __thiscall
TSet<TObjectPtr<UMaterialInterface>,DefaultKeyFuncs<TObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator>
::Emplace<TObjectPtr<UMaterialInterface>_>
          (TSet<TObjectPtr<UMaterialInterface>,DefaultKeyFuncs<TObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator>
           *this,TObjectPtr<UMaterialInterface> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  UObject *pUVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  char *in_R9;
  int iVar10;
  bool bVar11;
  TObjectPtr<UMaterialInterface_const_>_u_0 local_res8;
  FSparseArrayAllocationInfo local_48;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar10 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    lVar2 = *(longlong *)&this->Elements;
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x10);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    iVar10 = iVar10 + -1;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  local_res8.DebugPtr = local_48.Pointer;
  if (local_48.Pointer != (UMaterialInterface *)0x0) {
    pUVar3 = *(UObject **)param_2;
    *(UObject **)local_48.Pointer = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    *(undefined4 *)((longlong)local_48.Pointer + 8) = 0xffffffff;
  }
  pUVar3 = *(UObject **)local_48.Pointer;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  uVar5 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  bVar11 = false;
  iVar10 = local_48.Index;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    local_res8.DebugPtr = *(UMaterialInterface **)local_48.Pointer;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res8.DebugPtr != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
    }
    iVar4 = FindIndexByHash<TObjectPtr<UMaterialInterface_const_>_>
                      (this,uVar5,(TObjectPtr<UMaterialInterface_const_> *)&local_res8.ObjectPtr);
    bVar11 = iVar4 != -1;
    if (bVar11) {
      *(longlong *)(*(longlong *)&this->Elements + (longlong)iVar4 * 0x10) =
           *(longlong *)local_48.Pointer;
      TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      iVar10 = iVar4;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & uVar5;
      *(uint *)((longlong)((longlong)local_48.Pointer + 8) + 4) = uVar5;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)((longlong)local_48.Pointer + 8) = *(undefined4 *)((longlong)FVar8 + uVar6 * 4)
      ;
      *(int *)((longlong)FVar8 + uVar6 * 4) = iVar10;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->field0_0x0 = iVar10;
  return (FSetElementId)(int)param_1;
}

// Emplace<TKeyInitializer<UE::Math::TIntPoint<int>_&&>_> @ 14ddbe020

FSetElementId __thiscall
TSet<TTuple<UE::Math::TIntPoint<int>,FSceneViewStateReference>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FSceneViewStateReference,0>,FDefaultSetAllocator>
::Emplace<TKeyInitializer<UE::Math::TIntPoint<int>_&&>_>
          (TSet<TTuple<UE::Math::TIntPoint<int>,FSceneViewStateReference>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FSceneViewStateReference,0>,FDefaultSetAllocator>
           *this,TKeyInitializer<UE::Math::TIntPoint<int>_&&> *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  uint uVar10;
  int iVar11;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar5 * 0x48);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x48) = 0xffffffff;
    }
  }
  TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,FSceneViewStateReference>_> *)0x0) {
    TKeyInitializer<UE::Math::TIntPoint<int>_&&>::
    operator<UE::Math::TIntPoint<int>,FSceneViewStateReference>_TTuple<UE::Math::TIntPoint<int>,FSceneViewStateReference>
              ((TKeyInitializer<UE::Math::TIntPoint<int>_&&> *)param_2,local_38.Pointer);
    *(undefined4 *)((longlong)local_38.Pointer + 0x40) = 0xffffffff;
  }
  local_res8[0] = local_38.Index;
  uVar10 = (uint)((ulonglong)*(undefined8 *)local_38.Pointer >> 0x20);
  uVar8 = (int)*(undefined8 *)local_38.Pointer - uVar10 ^ uVar10 >> 0xd;
  uVar6 = (-0x61c88647 - uVar8) - uVar10 ^ uVar8 << 8;
  uVar10 = (uVar10 - uVar6) - uVar8 ^ uVar6 >> 0xd;
  uVar8 = (uVar8 - uVar10) - uVar6 ^ uVar10 >> 0xc;
  uVar6 = (uVar6 - uVar8) - uVar10 ^ uVar8 << 0x10;
  uVar10 = (uVar10 - uVar6) - uVar8 ^ uVar6 >> 5;
  uVar8 = (uVar8 - uVar10) - uVar6 ^ uVar10 >> 3;
  uVar6 = (uVar6 - uVar8) - uVar10 ^ uVar8 << 10;
  uVar6 = (uVar10 - uVar6) - uVar8 ^ uVar6 >> 0xf;
  bVar4 = TryReplaceExisting(this,uVar6,local_38.Pointer,local_res8,in_R9);
  if (!bVar4) {
    uVar8 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar8) {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar11 <= this->HashSize)) {
      uVar6 = this->HashSize - 1U & uVar6;
      *(uint *)((longlong)local_38.Pointer + 0x44) = uVar6;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)((longlong)local_38.Pointer + 0x40) =
           *(undefined4 *)((longlong)FVar9 + uVar7 * 4);
      *(int *)((longlong)FVar9 + uVar7 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// Emplace<TKeyInitializer<UPrimitiveComponent_*_const_&>_> @ 14ddbe210

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FSetElementId __thiscall
TSet<TTuple<UPrimitiveComponent_*,`UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl'::__l46::FStencilValues>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,`UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl'::__l46::FStencilValues,0>,FDefaultSetAllocator>
::Emplace<TKeyInitializer<UPrimitiveComponent_*_const_&>_>
          (void *this,TKeyInitializer<UPrimitiveComponent_*_const_&> *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  bool *in_R9;
  undefined2 local_res8;
  ushort uStackX_a;
  undefined4 uStackX_c;
  FSparseArrayAllocationInfo local_38;
  
  iVar10 = 1;
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar4 = *(int *)((longlong)this + 0x30);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    iVar2 = *(int *)(*(longlong *)this + 4 + (longlong)iVar4 * 0x18);
    *(int *)((longlong)this + 0x30) = iVar2;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*(longlong *)this + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_38,iVar4);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<UPrimitiveComponent_*,_protected:_virtual_void___cdecl_UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl(FMoviePipelineRenderPassMetrics_const_&)_::_46_::FStencilValues>_>
       *)0x0) {
    uStackX_c = 0;
    *(undefined8 *)local_38.Pointer = **(undefined8 **)param_2;
    *(ulonglong *)((longlong)local_38.Pointer + 8) = (ulonglong)uStackX_a << 0x10;
    *(undefined4 *)((longlong)local_38.Pointer + 0x10) = 0xffffffff;
  }
  local_res8 = (undefined2)local_38.Index;
  uStackX_a = (ushort)((uint)local_38.Index >> 0x10);
  uVar6 = ((uint)(*(ulonglong *)local_38.Pointer >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)local_38.Pointer >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  bVar3 = TryReplaceExisting(this,uVar6,local_38.Pointer,(int *)&local_res8,in_R9);
  if (!bVar3) {
    uVar8 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
    if (3 < uVar8) {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= *(int *)((longlong)this + 0x48))) {
      uVar6 = *(int *)((longlong)this + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_38.Pointer + 0x14) = uVar6;
      lVar9 = *(longlong *)((longlong)this + 0x40);
      if (*(longlong *)((longlong)this + 0x40) == 0) {
        lVar9 = (longlong)this + 0x38;
      }
      uVar7 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)uVar6;
      *(undefined4 *)((longlong)local_38.Pointer + 0x10) = *(undefined4 *)(lVar9 + uVar7 * 4);
      uVar5 = CONCAT22(uStackX_a,local_res8);
      *(undefined4 *)(lVar9 + uVar7 * 4) = uVar5;
      goto LAB_14ddbe36c;
    }
    *(int *)((longlong)this + 0x48) = iVar10;
    Rehash(this);
  }
  uVar5 = CONCAT22(uStackX_a,local_res8);
LAB_14ddbe36c:
  *(undefined4 *)&param_1->Key = uVar5;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FName_&&,TSharedPtr<FImagePixelPipe,1>_&&>_> @ 14ddbe3d0

FSetElementId __thiscall
TSet<TTuple<FName,TSharedPtr<FImagePixelPipe,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FImagePixelPipe,1>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FName_&&,TSharedPtr<FImagePixelPipe,1>_&&>_>
          (TSet<TTuple<FName,TSharedPtr<FImagePixelPipe,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<FImagePixelPipe,1>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FName_&&,TSharedPtr<FImagePixelPipe,1>_&&> *param_1,bool *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  void *_Dst;
  int iVar8;
  char *in_R9;
  int iVar9;
  int iVar10;
  bool bVar11;
  FSparseArrayAllocationInfo local_48;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar8 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    lVar1 = *(longlong *)&this->Elements;
    iVar3 = *(int *)&(this->Elements).field_0x30;
    iVar9 = *(int *)((longlong)iVar3 * 0x20 + 4 + lVar1);
    *(int *)&(this->Elements).field_0x30 = iVar9;
    iVar8 = iVar8 + -1;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar9 * 0x20 + lVar1) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 8);
    *(longlong *)local_48.Pointer = **(longlong **)param_2;
    *(longlong *)((longlong)local_48.Pointer + 8) = *plVar2;
    *(longlong *)((longlong)local_48.Pointer + 0x10) = plVar2[1];
    plVar2[1] = 0;
    *plVar2 = 0;
    *(undefined4 *)((longlong)local_48.Pointer + 0x18) = 0xffffffff;
  }
  lVar1 = *(longlong *)local_48.Pointer;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  uVar4 = uVar4 + (int)((ulonglong)lVar1 >> 0x20);
  bVar11 = false;
  iVar8 = *(int *)&(this->Elements).field_0x8;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  iVar9 = local_48.Index;
  if ((iVar8 - iVar3 != 1) && (iVar8 != iVar3)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar4) * 4);
    if (iVar8 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)((longlong)iVar8 * 0x20 + lVar1) == *(longlong *)local_48.Pointer) {
          bVar11 = iVar8 != -1;
          if (bVar11) {
            _Dst = (void *)((longlong)iVar8 * 0x20 + lVar1);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)((longlong)_Dst + 0x10));
            memmove(_Dst,local_48.Pointer,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            iVar9 = iVar8;
          }
          break;
        }
        iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + lVar1);
      } while (iVar8 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar6 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar1 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar10 <= this->HashSize)) {
      uVar4 = this->HashSize - 1U & uVar4;
      *(uint *)((longlong)local_48.Pointer + 0x1c) = uVar4;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)((longlong)local_48.Pointer + 0x18) =
           *(undefined4 *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = iVar9;
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar9;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FName_&&,TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1>_&>_> @ 14ddbe620

FSetElementId __thiscall
TSet<TTuple<FName,TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<FName_&&,TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1>_&>_>
          (TSet<TTuple<FName,TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FName_&&,TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1>_&>
                 *param_1,bool *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  void *_Dst;
  int iVar8;
  char *in_R9;
  int iVar9;
  int iVar10;
  bool bVar11;
  FSparseArrayAllocationInfo local_48;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar8 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    lVar1 = *(longlong *)&this->Elements;
    iVar3 = *(int *)&(this->Elements).field_0x30;
    iVar9 = *(int *)((longlong)iVar3 * 0x20 + 4 + lVar1);
    *(int *)&(this->Elements).field_0x30 = iVar9;
    iVar8 = iVar8 + -1;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar9 * 0x20 + lVar1) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 8);
    *(longlong *)local_48.Pointer = **(longlong **)param_2;
    *(longlong *)((longlong)local_48.Pointer + 8) = *plVar2;
    lVar1 = plVar2[1];
    *(longlong *)((longlong)local_48.Pointer + 0x10) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)((longlong)local_48.Pointer + 0x18) = 0xffffffff;
  }
  lVar1 = *(longlong *)local_48.Pointer;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  uVar4 = uVar4 + (int)((ulonglong)lVar1 >> 0x20);
  bVar11 = false;
  iVar8 = *(int *)&(this->Elements).field_0x8;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  iVar9 = local_48.Index;
  if ((iVar8 - iVar3 != 1) && (iVar8 != iVar3)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar4) * 4);
    if (iVar8 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)((longlong)iVar8 * 0x20 + lVar1) == *(longlong *)local_48.Pointer) {
          bVar11 = iVar8 != -1;
          if (bVar11) {
            _Dst = (void *)((longlong)iVar8 * 0x20 + lVar1);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)((longlong)_Dst + 0x10));
            memmove(_Dst,local_48.Pointer,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            iVar9 = iVar8;
          }
          break;
        }
        iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + lVar1);
      } while (iVar8 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar6 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar1 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar10 <= this->HashSize)) {
      uVar4 = this->HashSize - 1U & uVar4;
      *(uint *)((longlong)local_48.Pointer + 0x1c) = uVar4;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)((longlong)local_48.Pointer + 0x18) =
           *(undefined4 *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = iVar9;
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar9;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<UE::Math::TIntPoint<int>_const_&,TWeakObjectPtr<UTextureRenderTarget2D,FWeakObjectPtr>_const_&>_> @ 14ddbe880

FSetElementId __thiscall
TSet<TTuple<UE::Math::TIntPoint<int>,TWeakObjectPtr<UTextureRenderTarget2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TWeakObjectPtr<UTextureRenderTarget2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<UE::Math::TIntPoint<int>_const_&,TWeakObjectPtr<UTextureRenderTarget2D,FWeakObjectPtr>_const_&>_>
          (TSet<TTuple<UE::Math::TIntPoint<int>,TWeakObjectPtr<UTextureRenderTarget2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TWeakObjectPtr<UTextureRenderTarget2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<UE::Math::TIntPoint<int>_const_&,TWeakObjectPtr<UTextureRenderTarget2D,FWeakObjectPtr>_const_&>
                 *param_1,bool *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  char *in_R9;
  uint uVar13;
  undefined1 *puVar14;
  bool bVar15;
  FSparseArrayAllocationInfo local_48;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar10 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar10 = iVar10 + -1;
    lVar1 = *(longlong *)&this->Elements;
    iVar12 = *(int *)(lVar1 + 4 + (longlong)iVar4 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar12;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(lVar1 + (longlong)iVar12 * 0x18) = 0xffffffff;
    }
  }
  puVar14 = &(this->Elements).field_0x8;
  TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 8);
    *(undefined8 *)local_48.Pointer = **(undefined8 **)param_2;
    *(undefined8 *)((longlong)local_48.Pointer + 8) = *puVar2;
    *(undefined4 *)((longlong)local_48.Pointer + 0x10) = 0xffffffff;
  }
  iVar12 = (int)*(undefined8 *)local_48.Pointer;
  uVar11 = (uint)((ulonglong)*(undefined8 *)local_48.Pointer >> 0x20);
  uVar7 = iVar12 - uVar11 ^ uVar11 >> 0xd;
  bVar15 = false;
  uVar5 = (-0x61c88647 - uVar7) - uVar11 ^ uVar7 << 8;
  uVar13 = (uVar11 - uVar5) - uVar7 ^ uVar5 >> 0xd;
  uVar7 = (uVar7 - uVar13) - uVar5 ^ uVar13 >> 0xc;
  uVar5 = (uVar5 - uVar7) - uVar13 ^ uVar7 << 0x10;
  uVar13 = (uVar13 - uVar5) - uVar7 ^ uVar5 >> 5;
  uVar7 = (uVar7 - uVar13) - uVar5 ^ uVar13 >> 3;
  uVar5 = (uVar5 - uVar7) - uVar13 ^ uVar7 << 10;
  iVar10 = *(int *)puVar14;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar5 = (uVar13 - uVar5) - uVar7 ^ uVar5 >> 0xf;
  if ((iVar10 - iVar4 != 1) && (iVar10 != iVar4)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar10 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & uVar5) * 4);
    if (iVar10 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        uVar3 = *(undefined8 *)(lVar1 + (longlong)iVar10 * 0x18);
        if (((int)uVar3 == iVar12) && ((uint)((ulonglong)uVar3 >> 0x20) == uVar11)) {
          bVar15 = iVar10 != -1;
          if (bVar15) {
            memmove((void *)(lVar1 + (longlong)iVar10 * 0x18),local_48.Pointer,0x10);
            TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar10;
          }
          break;
        }
        iVar10 = *(int *)(lVar1 + 0x10 + (longlong)iVar10 * 0x18);
      } while (iVar10 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar15;
  }
  if (bVar15 == false) {
    uVar7 = *(int *)puVar14 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar1 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & uVar5;
      *(uint *)((longlong)local_48.Pointer + 0x14) = uVar5;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)((longlong)local_48.Pointer + 0x10) =
           *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<UE::Math::TIntPoint<int>_const_&,TSharedPtr<FMoviePipelineSurfaceQueue,1>_const_&>_> @ 14ddbeb30

FSetElementId __thiscall
TSet<TTuple<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<UE::Math::TIntPoint<int>_const_&,TSharedPtr<FMoviePipelineSurfaceQueue,1>_const_&>_>
          (TSet<TTuple<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<UE::Math::TIntPoint<int>_const_&,TSharedPtr<FMoviePipelineSurfaceQueue,1>_const_&>
                 *param_1,bool *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  int iVar10;
  void *_Dst;
  uint uVar11;
  char *in_R9;
  int iVar12;
  uint uVar13;
  bool bVar14;
  FSparseArrayAllocationInfo local_48;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar10 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    lVar1 = *(longlong *)&this->Elements;
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar12 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar1);
    *(int *)&(this->Elements).field_0x30 = iVar12;
    iVar10 = iVar10 + -1;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)((longlong)iVar12 * 0x20 + lVar1) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 8);
    *(undefined8 *)local_48.Pointer = **(undefined8 **)param_2;
    *(undefined8 *)((longlong)local_48.Pointer + 8) = *puVar2;
    lVar1 = puVar2[1];
    *(longlong *)((longlong)local_48.Pointer + 0x10) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)((longlong)local_48.Pointer + 0x18) = 0xffffffff;
  }
  iVar12 = (int)*(undefined8 *)local_48.Pointer;
  uVar11 = (uint)((ulonglong)*(undefined8 *)local_48.Pointer >> 0x20);
  uVar7 = iVar12 - uVar11 ^ uVar11 >> 0xd;
  uVar5 = (-0x61c88647 - uVar7) - uVar11 ^ uVar7 << 8;
  uVar13 = (uVar11 - uVar5) - uVar7 ^ uVar5 >> 0xd;
  uVar7 = (uVar7 - uVar13) - uVar5 ^ uVar13 >> 0xc;
  uVar5 = (uVar5 - uVar7) - uVar13 ^ uVar7 << 0x10;
  uVar13 = (uVar13 - uVar5) - uVar7 ^ uVar5 >> 5;
  uVar7 = (uVar7 - uVar13) - uVar5 ^ uVar13 >> 3;
  uVar5 = (uVar5 - uVar7) - uVar13 ^ uVar7 << 10;
  uVar5 = (uVar13 - uVar5) - uVar7 ^ uVar5 >> 0xf;
  bVar14 = false;
  iVar10 = *(int *)&(this->Elements).field_0x8;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  if ((iVar10 - iVar4 != 1) && (iVar10 != iVar4)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar10 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & uVar5) * 4);
    if (iVar10 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        uVar3 = *(undefined8 *)((longlong)iVar10 * 0x20 + lVar1);
        if (((int)uVar3 == iVar12) && ((uint)((ulonglong)uVar3 >> 0x20) == uVar11)) {
          bVar14 = iVar10 != -1;
          if (bVar14) {
            _Dst = (void *)((longlong)iVar10 * 0x20 + lVar1);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)((longlong)_Dst + 0x10));
            memmove(_Dst,local_48.Pointer,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar10;
          }
          break;
        }
        iVar10 = *(int *)((longlong)iVar10 * 0x20 + 0x18 + lVar1);
      } while (iVar10 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar14;
  }
  if (bVar14 == false) {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar1 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & uVar5;
      *(uint *)((longlong)local_48.Pointer + 0x1c) = uVar5;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)((longlong)local_48.Pointer + 0x18) =
           *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FString_const_&,FString_const_&>_> @ 14ddbee10

FSetElementId __thiscall
TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
          (TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FString_const_&,FString_const_&> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FString *pFVar6;
  int iVar7;
  wchar_t *pwVar8;
  TSparseSetElement<TTuple<FString,FStringFormatArg>_> *pTVar9;
  bool *in_R9;
  TSparseSetElement<TTuple<FString,FStringFormatArg>_> *local_res8;
  TSparseSetElement<TTuple<FString,FStringFormatArg>_> *local_res10;
  FString local_48;
  FSparseArrayAllocationInfo local_38;
  
  pTVar9 = (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)0x0;
  iVar7 = *(int *)&(this->Elements).field_0x34;
  if (iVar7 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    lVar2 = *(longlong *)&this->Elements;
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar1 = *(int *)((longlong)iVar4 * 0x38 + 4 + lVar2);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    iVar7 = iVar7 + -1;
    *(int *)&(this->Elements).field_0x34 = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x38 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  local_res8 = local_38.Pointer;
  if (local_38.Pointer != (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)0x0) {
    local_res10 = local_38.Pointer;
    pFVar6 = *(FString **)(param_2 + 8);
    ::FString::FString(local_38.Pointer,*(FString **)param_2);
    pFVar6 = ::FString::FString(&local_48,pFVar6);
    FStringFormatArg::FStringFormatArg
              ((FStringFormatArg *)((longlong)local_38.Pointer + 0x10),pFVar6);
    *(undefined4 *)((longlong)local_38.Pointer + 0x30) = 0xffffffff;
    pTVar9 = local_38.Pointer;
  }
  local_res8 = (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)
               CONCAT44(local_res8._4_4_,local_38.Index);
  iVar7 = *(int *)&pTVar9->field_0x8 + -1;
  if (*(int *)&pTVar9->field_0x8 == 0) {
    pwVar8 = L"";
    iVar7 = 0;
  }
  else {
    pwVar8 = *(wchar_t **)pTVar9;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,pwVar8);
  bVar3 = TryReplaceExisting(this,uVar5,pTVar9,(int *)&local_res8,in_R9);
  iVar7 = (int)local_res8;
  if (bVar3) {
    *(int *)&param_1->Key = (int)local_res8;
  }
  else {
    RehashOrLink(this,uVar5,pTVar9,(int)local_res8);
    *(int *)&param_1->Key = iVar7;
  }
  return (FSetElementId)(int)param_1;
}

// EmplaceByHash<TKeyInitializer<UE::Math::TIntPoint<int>_&&>_> @ 14ddbf210

FSetElementId __thiscall
TSet<TTuple<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<UE::Math::TIntPoint<int>_&&>_>
          (TSet<TTuple<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<UE::Math::TIntPoint<int>_&&> *param_2,bool *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  int iVar9;
  undefined8 *_Src;
  void *_Dst;
  bool bVar10;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_58 [2];
  
  _Src = (undefined8 *)0x0;
  iVar9 = *(int *)&(this->Elements).field_0x34;
  iVar8 = 1;
  if (iVar9 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    lVar2 = *(longlong *)&this->Elements;
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar1 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar2);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    iVar9 = iVar9 + -1;
    *(int *)&(this->Elements).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,local_58,iVar4);
  if (local_58[0].Pointer != (undefined8 *)0x0) {
    *(undefined8 *)local_58[0].Pointer = **(undefined8 **)param_3;
    *(undefined8 *)((longlong)local_58[0].Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_58[0].Pointer + 0x10) = 0;
    DestructItems<FSceneViewStateReference,int>((FSceneViewStateReference *)0x0,0);
    *(undefined4 *)((longlong)local_58[0].Pointer + 0x18) = 0xffffffff;
    _Src = local_58[0].Pointer;
  }
  bVar10 = false;
  iVar9 = *(int *)&(this->Elements).field_0x8;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  if ((iVar9 - iVar4 != 1) && (iVar9 != iVar4)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar9 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & (uint)param_2) * 4);
    if (iVar9 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        uVar3 = *(undefined8 *)((longlong)iVar9 * 0x20 + lVar2);
        if (((int)uVar3 == (int)*_Src) &&
           ((int)((ulonglong)uVar3 >> 0x20) == (int)((ulonglong)*_Src >> 0x20))) {
          bVar10 = iVar9 != -1;
          if (bVar10) {
            _Dst = (void *)((longlong)iVar9 * 0x20 + lVar2);
            DestructItems<FSceneViewStateReference,int>
                      (*(FSceneViewStateReference **)((longlong)_Dst + 8),
                       *(int *)((longlong)_Dst + 0x10));
            if (*(void **)((longlong)_Dst + 8) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 8));
            }
            memmove(_Dst,_Src,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_58[0].Index,1);
            local_58[0].Index = iVar9;
          }
          break;
        }
        iVar9 = *(int *)((longlong)iVar9 * 0x20 + 0x18 + lVar2);
      } while (iVar9 != -1);
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar10;
  }
  if (bVar10 == false) {
    uVar6 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= this->HashSize)) {
      uVar6 = this->HashSize - 1U & (uint)param_2;
      *(uint *)((longlong)_Src + 0x1c) = uVar6;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)(_Src + 3) = *(undefined4 *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = local_58[0].Index;
    }
    else {
      this->HashSize = iVar8;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_58[0].Index;
  return (FSetElementId)param_1;
}

// EmplaceByHash<TKeyInitializer<FString_const_&>_> @ 14ddbf490

FSetElementId __thiscall
TSet<TTuple<FString,UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename>,TDefaultMapHashableKeyFuncs<FString,UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<FString_const_&>_>
          (TSet<TTuple<FString,UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename>,TDefaultMapHashableKeyFuncs<FString,UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<FString_const_&> *param_2,bool *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  TSparseSetElement<TTuple<FString,UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename>_>
  *local_res8;
  bool *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xe0,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    lVar3 = *(longlong *)&this->Elements;
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar2 = *(int *)((longlong)iVar5 * 0xe0 + 4 + lVar3);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    iVar1 = iVar1 + -1;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0xe0 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<224,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<224,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  local_res8 = local_38.Pointer;
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<FString,UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename>_>
       *)0x0) {
    TKeyInitializer<FString_const_&>::
    operator<FString,UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename>_TTuple<FString,UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename>
              ((TKeyInitializer<FString_const_&> *)param_3,local_38.Pointer);
    *(undefined4 *)((longlong)local_38.Pointer + 0xd8) = 0xffffffff;
  }
  local_res8 = (TSparseSetElement<TTuple<FString,UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename>_>
                *)CONCAT44(local_res8._4_4_,local_38.Index);
  bVar4 = TryReplaceExisting(this,(uint)param_2,local_38.Pointer,(int *)&local_res8,
                             in_stack_00000028);
  if (!bVar4) {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= this->HashSize)) {
      uVar7 = this->HashSize - 1U & (uint)param_2;
      *(uint *)((longlong)local_38.Pointer + 0xdc) = uVar7;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      *(undefined4 *)((longlong)local_38.Pointer + 0xd8) =
           *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
      *(undefined4 *)((longlong)FVar8 + uVar6 * 4) = local_res8._0_4_;
      goto LAB_14ddbf5c0;
    }
    this->HashSize = iVar9;
    Rehash(this);
  }
LAB_14ddbf5c0:
  *(undefined4 *)CONCAT44(in_register_00000014,param_1) = local_res8._0_4_;
  return (FSetElementId)param_1;
}

// FindIndexByHash<UE::Math::TIntPoint<int>_> @ 14ddc0890

int __thiscall
TSet<TTuple<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile,0>,FDefaultSetAllocator>
::FindIndexByHash<UE::Math::TIntPoint<int>_>
          (TSet<TTuple<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile,0>,FDefaultSetAllocator>
           *this,uint param_1,TIntPoint<int> *param_2)

{
  undefined8 uVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar3 = (this->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        uVar1 = *(undefined8 *)((longlong)iVar2 * 0x20 + *(longlong *)&this->Elements);
        if (((int)uVar1 == (param_2->field0_0x0)._s_0.X) &&
           ((int)((ulonglong)uVar1 >> 0x20) == (param_2->field0_0x0)._s_0.Y)) {
          return iVar2;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + 0x18 + *(longlong *)&this->Elements);
      } while (iVar2 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<TObjectPtr<UMaterialInterface_const_>_> @ 14ddc0910

int __thiscall
TSet<TObjectPtr<UMaterialInterface>,DefaultKeyFuncs<TObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator>
::FindIndexByHash<TObjectPtr<UMaterialInterface_const_>_>
          (TSet<TObjectPtr<UMaterialInterface>,DefaultKeyFuncs<TObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator>
           *this,uint param_1,TObjectPtr<UMaterialInterface_const_> *param_2)

{
  int iVar1;
  UMaterialInterface *pUVar2;
  UMaterialInterface *pUVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
        iVar1 != -1; iVar1 = *(int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar1 * 0x10)) {
      pUVar2 = (param_2->field0_0x0).DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 != (UMaterialInterface *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      pUVar3 = *(UMaterialInterface **)(*(longlong *)&this->Elements + (longlong)iVar1 * 0x10);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UMaterialInterface *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      if (pUVar3 == pUVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}

// FindIndexByHash<FString> @ 14ddc09e0

int __thiscall
TSet<TTuple<FString,UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename>,TDefaultMapHashableKeyFuncs<FString,UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename,0>,FDefaultSetAllocator>
::FindIndexByHash<FString>
          (TSet<TTuple<FString,UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename>,TDefaultMapHashableKeyFuncs<FString,UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename,0>,FDefaultSetAllocator>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ForElementType<FSetElementId> FVar5;
  bool bVar6;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar5 = (this->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar1 = *(int *)((longlong)FVar5 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    while (iVar1 != -1) {
      iVar3 = (param_2->Data).ArrayNum;
      lVar4 = (longlong)iVar1 * 0xe0;
      iVar2 = *(int *)(*(longlong *)&this->Elements + 8 + lVar4);
      if (iVar2 == iVar3) {
        if (iVar2 < 2) {
          return iVar1;
        }
        iVar3 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(*(longlong *)&this->Elements + lVar4),
                           (wchar_t *)(param_2->Data).AllocatorInstance.Data);
        bVar6 = iVar3 == 0;
      }
      else {
        bVar6 = iVar2 + iVar3 == 1;
      }
      if (bVar6) {
        return iVar1;
      }
      iVar1 = *(int *)(lVar4 + 0xd8 + *(longlong *)&this->Elements);
    }
  }
  return -1;
}

// RemoveImpl<FString> @ 14ddc43a0

int __thiscall
TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
::RemoveImpl<FString>
          (TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint *puVar9;
  longlong lVar10;
  bool bVar11;
  
  FVar6 = (this->Hash).SecondaryData;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar7 = *(uint *)((longlong)FVar6 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar7 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    lVar3 = *(longlong *)&this->Elements;
    iVar5 = (param_2->Data).ArrayNum;
    lVar10 = (longlong)(int)uVar7 * 0x38;
    iVar1 = *(int *)(lVar3 + 8 + lVar10);
    if (iVar1 == iVar5) break;
    bVar11 = iVar1 + iVar5 == 1;
LAB_14ddc4413:
    if (bVar11) goto LAB_14ddc4439;
    uVar7 = *(uint *)(lVar3 + 0x30 + lVar10);
    if (uVar7 == 0xffffffff) {
      return 0;
    }
  }
  if (1 < iVar1) {
    iVar5 = FGenericPlatformStricmp::Stricmp
                      (*(wchar_t **)(lVar3 + lVar10),
                       (wchar_t *)(param_2->Data).AllocatorInstance.Data);
    bVar11 = iVar5 == 0;
    goto LAB_14ddc4413;
  }
LAB_14ddc4439:
  if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)&(this->Elements).field_0x28)) {
    puVar8 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar8 + (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar7 & 0x1f) & 1) != 0) goto LAB_14ddc4498;
  }
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("Elements.IsValidIndex(ElementIndex)",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                      ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar11) {
    pcVar4 = (code *)swi(3);
    iVar5 = (*pcVar4)();
    return iVar5;
  }
LAB_14ddc4498:
  FVar6 = (this->Hash).SecondaryData;
  lVar3 = *(longlong *)&this->Elements;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar9 = (uint *)((longlong)FVar6 + (longlong)*(int *)(lVar3 + 0x34 + lVar10) * 4);
  while( true ) {
    uVar2 = *puVar9;
    if ((uVar2 == 0xffffffff) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("NextElementIndex != INDEX_NONE",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                            ,0x2b5,L"Corrupt hash"), bVar11)) break;
    if (uVar2 == uVar7) {
      *puVar9 = *(uint *)(lVar3 + 0x30 + lVar10);
      TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar7,1);
      TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar7,1);
      return 1;
    }
    puVar9 = (uint *)(*(longlong *)&this->Elements + 0x30 + (longlong)(int)uVar2 * 0x38);
  }
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}

// ~TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator> @ 14ddc9c40

void __thiscall
TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>::
~TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>
          (TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>
           *this)

{
  ForElementType<FSetElementId> FVar1;
  
  this->HashSize = 0;
  FVar1 = (this->Hash).SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<UMaterialInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UMaterialInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->Elements);
  return;
}

// ~TSet<TObjectPtr<UMaterialInterface>,DefaultKeyFuncs<TObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator> @ 14ddc9c80

void __thiscall
TSet<TObjectPtr<UMaterialInterface>,DefaultKeyFuncs<TObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator>
::
~TSet<TObjectPtr<UMaterialInterface>,DefaultKeyFuncs<TObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator>
          (TSet<TObjectPtr<UMaterialInterface>,DefaultKeyFuncs<TObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator>
           *this)

{
  ForElementType<FSetElementId> FVar1;
  
  this->HashSize = 0;
  FVar1 = (this->Hash).SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UMaterialInterface>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UMaterialInterface>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->Elements);
  return;
}

// Rehash @ 14ddf36c0

void __thiscall
TSet<TObjectPtr<UMaterialInterface>,DefaultKeyFuncs<TObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator>
::Rehash(TSet<TObjectPtr<UMaterialInterface>,DefaultKeyFuncs<TObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  UObject *pUVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  undefined8 *puVar9;
  uint *puVar10;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_40.Array;
      }
      uVar5 = *puVar10;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14ddf3797;
        uVar5 = puVar10[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14ddf3797:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_ = CONCAT44(uStack_64,local_68);
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        puVar9 = (undefined8 *)
                 ((longlong)local_40.CurrentBitIndex * 0x10 + *(longlong *)&this->Elements);
        pUVar3 = (UObject *)*puVar9;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        uVar5 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
                -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar5 = (uVar5 >> 0x10 ^ uVar5) & *piVar1 - 1U;
        *(uint *)((longlong)puVar9 + 0xc) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(puVar9 + 1) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14ddf3890

void __thiscall
TSet<TTuple<FImagePixelData_*,FString>,TDefaultMapHashableKeyFuncs<FImagePixelData_*,FString,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FImagePixelData_*,FString>,TDefaultMapHashableKeyFuncs<FImagePixelData_*,FString,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  ulonglong *puVar8;
  uint *puVar9;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar4 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14ddf396c;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14ddf396c:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        puVar8 = (ulonglong *)
                 ((longlong)local_30.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        uVar4 = ((uint)(*puVar8 >> 0x14) & 0xffff ^ (uint)(*puVar8 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uVar4 >> 0x10 ^ uVar4) & *piVar1 - 1U;
        *(uint *)((longlong)puVar8 + 0x1c) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar8 + 3) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14ddf3a50

void __thiscall
TSet<TTuple<UPrimitiveComponent_*,`UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl'::__l46::FStencilValues>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,`UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl'::__l46::FStencilValues,0>,FDefaultSetAllocator>
::Rehash(void *this)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> *pFVar6;
  TBitArray<FDefaultBitArrayAllocator> *pTVar7;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = (int *)((longlong)this + 0x48);
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            ((ForElementType<FSetElementId> *)((longlong)this + 0x38),
             *(int *)((longlong)this + 0x48));
  if (*piVar1 != 0) {
    iVar2 = *(int *)((longlong)this + 0x28);
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      pTVar7 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar7 = local_30.Array;
      }
      uVar3 = *(uint *)(pTVar7->AllocatorInstance).InlineData;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar3 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar4 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14ddf3b2c;
        uVar3 = *(uint *)((pTVar7->AllocatorInstance).InlineData + lVar4 * 4 + 4);
      }
      uStack_54 = -uVar3 & uVar3;
      uVar5 = (ulonglong)uStack_54 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iStack_44 = (int)lVar4 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14ddf3b2c:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        lVar4 = *(longlong *)this + (longlong)local_30.CurrentBitIndex * 0x18;
        uVar5 = *(ulonglong *)(*(longlong *)this + (longlong)local_30.CurrentBitIndex * 0x18);
        uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar3 = (uVar3 >> 0x10 ^ uVar3) & *piVar1 - 1U;
        *(uint *)(lVar4 + 0x14) = uVar3;
        pFVar6 = (ForElementType<FSetElementId> *)((longlong)this + 0x38);
        if (*(ForElementType<FSetElementId> **)((longlong)this + 0x40) !=
            (ForElementType<FSetElementId> *)0x0) {
          pFVar6 = *(ForElementType<FSetElementId> **)((longlong)this + 0x40);
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar3;
        *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)(pFVar6->InlineData + uVar5 * 4);
        *(int *)(pFVar6->InlineData + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14ddf3c10

void __thiscall
TSet<TTuple<UE::Math::TIntPoint<int>,TWeakObjectPtr<UTextureRenderTarget2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TWeakObjectPtr<UTextureRenderTarget2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<UE::Math::TIntPoint<int>,TWeakObjectPtr<UTextureRenderTarget2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TWeakObjectPtr<UTextureRenderTarget2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  uint uVar10;
  uint *puVar11;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar3 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_30.Array;
      }
      uVar5 = *puVar11;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar6 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14ddf3cec;
        uVar5 = puVar11[lVar6 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_54 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_44 = (int)lVar6 + -1 + iStack_40;
      if (iVar3 < iStack_44) {
LAB_14ddf3cec:
        iStack_44 = iVar3;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar3) {
      do {
        puVar2 = (undefined8 *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x18);
        uVar10 = (uint)((ulonglong)*puVar2 >> 0x20);
        uVar8 = (int)*puVar2 - uVar10 ^ uVar10 >> 0xd;
        uVar5 = (-0x61c88647 - uVar8) - uVar10 ^ uVar8 << 8;
        uVar10 = (uVar10 - uVar5) - uVar8 ^ uVar5 >> 0xd;
        uVar8 = (uVar8 - uVar10) - uVar5 ^ uVar10 >> 0xc;
        uVar5 = (uVar5 - uVar8) - uVar10 ^ uVar8 << 0x10;
        uVar10 = (uVar10 - uVar5) - uVar8 ^ uVar5 >> 5;
        uVar8 = (uVar8 - uVar10) - uVar5 ^ uVar10 >> 3;
        uVar5 = (uVar5 - uVar8) - uVar10 ^ uVar8 << 10;
        uVar5 = ((uVar10 - uVar5) - uVar8 ^ uVar5 >> 0xf) & *piVar1 - 1U;
        *(uint *)((longlong)puVar2 + 0x14) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(puVar2 + 2) = *(undefined4 *)((longlong)FVar9 + uVar7 * 4);
        *(int *)((longlong)FVar9 + uVar7 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14ddf3e30

void __thiscall
TSet<TTuple<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,UMoviePipelineDeferredPassBase::FMultiCameraViewStateData::FPerTile,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  uint uVar9;
  uint *puVar10;
  undefined8 *puVar11;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_30.Array;
      }
      uVar4 = *puVar10;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14ddf3f0c;
        uVar4 = puVar10[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14ddf3f0c:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        puVar11 = (undefined8 *)
                  ((longlong)local_30.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        uVar9 = (uint)((ulonglong)*puVar11 >> 0x20);
        uVar7 = (int)*puVar11 - uVar9 ^ uVar9 >> 0xd;
        uVar4 = (-0x61c88647 - uVar7) - uVar9 ^ uVar7 << 8;
        uVar9 = (uVar9 - uVar4) - uVar7 ^ uVar4 >> 0xd;
        uVar7 = (uVar7 - uVar9) - uVar4 ^ uVar9 >> 0xc;
        uVar4 = (uVar4 - uVar7) - uVar9 ^ uVar7 << 0x10;
        uVar9 = (uVar9 - uVar4) - uVar7 ^ uVar4 >> 5;
        uVar7 = (uVar7 - uVar9) - uVar4 ^ uVar9 >> 3;
        uVar4 = (uVar4 - uVar7) - uVar9 ^ uVar7 << 10;
        uVar4 = ((uVar9 - uVar4) - uVar7 ^ uVar4 >> 0xf) & *piVar1 - 1U;
        *(uint *)((longlong)puVar11 + 0x1c) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar11 + 3) = *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
        *(int *)((longlong)FVar8 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14ddf4040

void __thiscall
TSet<TTuple<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  uint uVar9;
  uint *puVar10;
  undefined8 *puVar11;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_30.Array;
      }
      uVar4 = *puVar10;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14ddf411c;
        uVar4 = puVar10[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14ddf411c:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        puVar11 = (undefined8 *)
                  ((longlong)local_30.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        uVar9 = (uint)((ulonglong)*puVar11 >> 0x20);
        uVar7 = (int)*puVar11 - uVar9 ^ uVar9 >> 0xd;
        uVar4 = (-0x61c88647 - uVar7) - uVar9 ^ uVar7 << 8;
        uVar9 = (uVar9 - uVar4) - uVar7 ^ uVar4 >> 0xd;
        uVar7 = (uVar7 - uVar9) - uVar4 ^ uVar9 >> 0xc;
        uVar4 = (uVar4 - uVar7) - uVar9 ^ uVar7 << 0x10;
        uVar9 = (uVar9 - uVar4) - uVar7 ^ uVar4 >> 5;
        uVar7 = (uVar7 - uVar9) - uVar4 ^ uVar9 >> 3;
        uVar4 = (uVar4 - uVar7) - uVar9 ^ uVar7 << 10;
        uVar4 = ((uVar9 - uVar4) - uVar7 ^ uVar4 >> 0xf) & *piVar1 - 1U;
        *(uint *)((longlong)puVar11 + 0x1c) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar11 + 3) = *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
        *(int *)((longlong)FVar8 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14ddf4250

void __thiscall
TSet<TTuple<UE::Math::TIntPoint<int>,FSceneViewStateReference>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FSceneViewStateReference,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<UE::Math::TIntPoint<int>,FSceneViewStateReference>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FSceneViewStateReference,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  uint uVar10;
  uint *puVar11;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar3 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_30.Array;
      }
      uVar5 = *puVar11;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar6 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14ddf432c;
        uVar5 = puVar11[lVar6 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_54 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_44 = (int)lVar6 + -1 + iStack_40;
      if (iVar3 < iStack_44) {
LAB_14ddf432c:
        iStack_44 = iVar3;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar3) {
      do {
        puVar2 = (undefined8 *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x48);
        uVar10 = (uint)((ulonglong)*puVar2 >> 0x20);
        uVar8 = (int)*puVar2 - uVar10 ^ uVar10 >> 0xd;
        uVar5 = (-0x61c88647 - uVar8) - uVar10 ^ uVar8 << 8;
        uVar10 = (uVar10 - uVar5) - uVar8 ^ uVar5 >> 0xd;
        uVar8 = (uVar8 - uVar10) - uVar5 ^ uVar10 >> 0xc;
        uVar5 = (uVar5 - uVar8) - uVar10 ^ uVar8 << 0x10;
        uVar10 = (uVar10 - uVar5) - uVar8 ^ uVar5 >> 5;
        uVar8 = (uVar8 - uVar10) - uVar5 ^ uVar10 >> 3;
        uVar5 = (uVar5 - uVar8) - uVar10 ^ uVar8 << 10;
        uVar5 = ((uVar10 - uVar5) - uVar8 ^ uVar5 >> 0xf) & *piVar1 - 1U;
        *(uint *)((longlong)puVar2 + 0x44) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(puVar2 + 8) = *(undefined4 *)((longlong)FVar9 + uVar7 * 4);
        *(int *)((longlong)FVar9 + uVar7 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14ddf4470

void __thiscall
TSet<TTuple<FName,TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FName,TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  undefined8 *puVar9;
  uint *puVar10;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_40.Array;
      }
      uVar5 = *puVar10;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14ddf4547;
        uVar5 = puVar10[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14ddf4547:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        puVar9 = (undefined8 *)
                 ((longlong)local_40.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        uVar3 = *puVar9;
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar5 = *piVar1 - 1U & uVar5 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar9 + 0x1c) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(puVar9 + 3) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14ddf4610

void __thiscall
TSet<TTuple<FString,UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename>,TDefaultMapHashableKeyFuncs<FString,UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FString,UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename>,TDefaultMapHashableKeyFuncs<FString,UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  ForElementType<FSetElementId> FVar9;
  undefined8 *puVar10;
  uint *puVar11;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar5 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar5 != 0) {
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_40.Array;
      }
      uVar4 = *puVar11;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar4 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar7 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14ddf46e7;
        uVar4 = puVar11[lVar7 + 1];
      }
      uStack_64 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_64 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_54 = (int)lVar7 + -1 + iStack_50;
      if (iVar5 < iStack_54) {
LAB_14ddf46e7:
        iStack_54 = iVar5;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar5) {
      do {
        iVar3 = local_40.CurrentBitIndex;
        puVar10 = (undefined8 *)
                  (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0xe0);
        iVar5 = *(int *)(puVar10 + 1) + -1;
        if (*(int *)(puVar10 + 1) == 0) {
          pwVar8 = L"";
          iVar5 = 0;
        }
        else {
          pwVar8 = (wchar_t *)*puVar10;
        }
        uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar8);
        uVar4 = *piVar1 - 1U & uVar4;
        *(uint *)((longlong)puVar10 + 0xdc) = uVar4;
        FVar2 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar2;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar10 + 0x1b) = *(undefined4 *)((longlong)FVar9 + uVar6 * 4);
        *(int *)((longlong)FVar9 + uVar6 * 4) = iVar3;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// RehashOrLink @ 14ddf47d0

void __thiscall
TSet<TTuple<FImagePixelData_*,FString>,TDefaultMapHashableKeyFuncs<FImagePixelData_*,FString,0>,FDefaultSetAllocator>
::RehashOrLink(TSet<TTuple<FImagePixelData_*,FString>,TDefaultMapHashableKeyFuncs<FImagePixelData_*,FString,0>,FDefaultSetAllocator>
               *this,uint param_1,TSparseSetElement<TTuple<FImagePixelData_*,FString>_> *param_2,
              int param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  
  uVar5 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if (uVar5 < 4) {
    iVar2 = 1;
  }
  else {
    uVar3 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar2 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((0 < (int)uVar5) && (this->HashSize < iVar2)) {
    this->HashSize = iVar2;
    Rehash(this);
    return;
  }
  uVar5 = this->HashSize - 1U & param_1;
  *(uint *)&param_2->field_0x1c = uVar5;
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
  *(undefined4 *)&param_2->field_0x18 = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
  *(int *)((longlong)FVar4 + uVar3 * 4) = param_3;
  return;
}

// RemoveByIndex @ 14ddf48d0

void __thiscall
TSet<TTuple<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
::RemoveByIndex(TSet<TTuple<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
                *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ForElementType<FSetElementId> FVar4;
  longlong lVar5;
  undefined1 *puVar6;
  int *piVar7;
  
  if ((-1 < param_1) && (param_1 < *(int *)&(this->Elements).field_0x28)) {
    puVar6 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar6 + (ulonglong)((uint)param_1 >> 5) * 4) >> (param_1 & 0x1fU) & 1) != 0)
    goto LAB_14ddf4942;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14ddf4942:
  FVar4 = (this->Hash).SecondaryData;
  lVar5 = (longlong)param_1 * 0x20 + *(longlong *)&this->Elements;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  piVar7 = (int *)((longlong)FVar4 + (longlong)*(int *)(lVar5 + 0x1c) * 4);
  while( true ) {
    iVar1 = *piVar7;
    if (iVar1 == -1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NextElementIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                         ,0x2b5,L"Corrupt hash");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (iVar1 == param_1) break;
    piVar7 = (int *)(*(longlong *)&this->Elements + 0x18 + (longlong)iVar1 * 0x20);
  }
  *piVar7 = *(int *)(lVar5 + 0x18);
  TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(&this->Elements,param_1,1);
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this,param_1,1);
  return;
}

// Reserve @ 14ddfbc20

void __thiscall
TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
::Reserve(TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
          *this,int param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  if ((uint)(*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34) <
      (uint)param_1) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)param_1);
    }
    TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this,param_1);
    if ((uint)param_1 < 4) {
      iVar3 = 1;
    }
    else {
      uVar1 = (ulonglong)(((uint)param_1 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar3 = 1 << ((byte)lVar2 & 0x1f);
    }
    if ((this->HashSize == 0) || (this->HashSize < iVar3)) {
      this->HashSize = iVar3;
      Rehash(this);
    }
  }
  return;
}

// TryReplaceExisting @ 14de00870

bool __thiscall
TSet<TTuple<FImagePixelData_*,FString>,TDefaultMapHashableKeyFuncs<FImagePixelData_*,FString,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FImagePixelData_*,FString>,TDefaultMapHashableKeyFuncs<FImagePixelData_*,FString,0>,FDefaultSetAllocator>
           *this,uint param_1,TSparseSetElement<TTuple<FImagePixelData_*,FString>_> *param_2,
          int *param_3,bool *param_4)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  ForElementType<FSetElementId> FVar4;
  int iVar5;
  void *_Dst;
  bool bVar6;
  
  bVar6 = false;
  iVar5 = *(int *)&(this->Elements).field_0x8;
  iVar1 = *(int *)&(this->Elements).field_0x34;
  if ((iVar5 - iVar1 != 1) && (iVar5 != iVar1)) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar5 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)((longlong)iVar5 * 0x20 + lVar2) == *(longlong *)param_2) {
          bVar6 = iVar5 != -1;
          if (bVar6) {
            _Dst = (void *)((longlong)iVar5 * 0x20 + lVar2);
            pvVar3 = *(void **)((longlong)_Dst + 8);
            if (pvVar3 != (void *)0x0) {
              FMemory::Free(pvVar3);
            }
            memmove(_Dst,param_2,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,*param_3,1);
            *param_3 = iVar5;
          }
          break;
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + lVar2);
      } while (iVar5 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar6;
  }
  return bVar6;
}

// TryReplaceExisting @ 14de00970

bool __thiscall
TSet<TTuple<UPrimitiveComponent_*,`UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl'::__l46::FStencilValues>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_*,`UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl'::__l46::FStencilValues,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (void *this,uint param_1,
          TSparseSetElement<TTuple<UPrimitiveComponent_*,_protected:_virtual_void___cdecl_UMoviePipelineDeferredPassBase::RenderSample_GameThreadImpl(FMoviePipelineRenderPassMetrics_const_&)_::_46_::FStencilValues>_>
          *param_2,int *param_3,bool *param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  int iVar4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  bool bVar14;
  
  bVar14 = false;
  if ((*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != 1) &&
     (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34))) {
    lVar10 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar10 = (longlong)this + 0x38;
    }
    iVar11 = *(int *)(lVar10 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (iVar11 != -1) {
      lVar10 = *(longlong *)this;
      do {
        if (*(longlong *)(lVar10 + (longlong)iVar11 * 0x18) == *(longlong *)param_2) {
          bVar14 = iVar11 != -1;
          if (bVar14) {
            memmove((void *)(lVar10 + (longlong)iVar11 * 0x18),param_2,0x10);
            iVar4 = *param_3;
            lVar10 = *(longlong *)this;
            bVar6 = (byte)iVar4 & 0x1f;
            uVar13 = 1 << bVar6 | 1U >> 0x20 - bVar6;
            if (((iVar4 < 0) || (*(int *)((longlong)this + 0x28) <= iVar4)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            lVar3 = (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4;
            lVar12 = *(longlong *)((longlong)this + 0x20);
            if (*(longlong *)((longlong)this + 0x20) == 0) {
              lVar12 = (longlong)this + 0x10;
            }
            if (((*(uint *)(lVar12 + lVar3) & uVar13) == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            if (*(int *)((longlong)this + 0x34) != 0) {
              *(int *)(lVar10 + (longlong)*(int *)((longlong)this + 0x30) * 0x18) = iVar4;
            }
            puVar1 = (undefined4 *)(lVar10 + (longlong)iVar4 * 0x18);
            uVar9 = 0xffffffff;
            *puVar1 = 0xffffffff;
            if (0 < *(int *)((longlong)this + 0x34)) {
              uVar9 = *(undefined4 *)((longlong)this + 0x30);
            }
            puVar1[1] = uVar9;
            *(int *)((longlong)this + 0x34) = *(int *)((longlong)this + 0x34) + 1;
            *(int *)((longlong)this + 0x30) = iVar4;
            if (((iVar4 < 0) || (*(int *)((longlong)this + 0x28) <= iVar4)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            lVar10 = *(longlong *)((longlong)this + 0x20);
            if (*(longlong *)((longlong)this + 0x20) == 0) {
              lVar10 = (longlong)this + 0x10;
            }
            puVar2 = (uint *)(lVar10 + lVar3);
            *puVar2 = *puVar2 & ~uVar13;
            *param_3 = iVar11;
          }
          break;
        }
        iVar11 = *(int *)(lVar10 + 0x10 + (longlong)iVar11 * 0x18);
      } while (iVar11 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar14;
  }
  return bVar14;
}

// TryReplaceExisting @ 14de00ba0

bool __thiscall
TSet<TTuple<UE::Math::TIntPoint<int>,FSceneViewStateReference>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FSceneViewStateReference,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<UE::Math::TIntPoint<int>,FSceneViewStateReference>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FSceneViewStateReference,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,FSceneViewStateReference>_> *param_2,
          int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  void *_Dst;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  code *pcVar7;
  byte bVar8;
  bool bVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  ForElementType<FSetElementId> FVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  
  iVar14 = *(int *)&(this->Elements).field_0x8;
  bVar16 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  if ((iVar14 - iVar4 != 1) && (iVar14 != iVar4)) {
    FVar13 = (this->Hash).SecondaryData;
    if (FVar13 == (ForElementType<FSetElementId>)0x0) {
      FVar13 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar14 = *(int *)((longlong)FVar13 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar14 != -1) {
      lVar5 = *(longlong *)&this->Elements;
      do {
        uVar6 = *(undefined8 *)(lVar5 + (longlong)iVar14 * 0x48);
        if (((int)uVar6 == (int)*(undefined8 *)param_2) &&
           ((int)((ulonglong)uVar6 >> 0x20) == (int)((ulonglong)*(undefined8 *)param_2 >> 0x20))) {
          bVar16 = iVar14 != -1;
          if (bVar16) {
            _Dst = (void *)(lVar5 + (longlong)iVar14 * 0x48);
            FSceneViewStateReference::~FSceneViewStateReference
                      ((FSceneViewStateReference *)((longlong)_Dst + 8));
            memmove(_Dst,param_2,0x40);
            iVar4 = *param_3;
            puVar1 = &(this->Elements).field_0x10;
            lVar5 = *(longlong *)&this->Elements;
            bVar8 = (byte)iVar4 & 0x1f;
            uVar15 = 1 << bVar8 | 1U >> 0x20 - bVar8;
            if (((iVar4 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar4)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar9)) {
              pcVar7 = (code *)swi(3);
              uVar10 = (*pcVar7)();
              return (bool)uVar10;
            }
            puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar3 = (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar12 == (undefined1 *)0x0) {
              puVar12 = puVar1;
            }
            if (((*(uint *)(puVar12 + lVar3) & uVar15) == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar9)) {
              pcVar7 = (code *)swi(3);
              uVar10 = (*pcVar7)();
              return (bool)uVar10;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)(lVar5 + (longlong)*(int *)&(this->Elements).field_0x30 * 0x48) = iVar4;
            }
            puVar2 = (undefined4 *)(lVar5 + (longlong)iVar4 * 0x48);
            uVar11 = 0xffffffff;
            *puVar2 = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar11 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            puVar2[1] = uVar11;
            puVar12 = &(this->Elements).field_0x34;
            *(int *)puVar12 = *(int *)puVar12 + 1;
            *(int *)&(this->Elements).field_0x30 = iVar4;
            if (((iVar4 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar4)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar9)) {
              pcVar7 = (code *)swi(3);
              uVar10 = (*pcVar7)();
              return (bool)uVar10;
            }
            puVar12 = *(undefined1 **)&(this->Elements).field_0x20;
            if (puVar12 == (undefined1 *)0x0) {
              puVar12 = puVar1;
            }
            *(uint *)(puVar12 + lVar3) = *(uint *)(puVar12 + lVar3) & ~uVar15;
            *param_3 = iVar14;
          }
          break;
        }
        iVar14 = *(int *)(lVar5 + (longlong)iVar14 * 0x48 + 0x40);
      } while (iVar14 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar16;
  }
  return bVar16;
}

// TryReplaceExisting @ 14de00dd0

bool __thiscall
TSet<TTuple<FString,UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename>,TDefaultMapHashableKeyFuncs<FString,UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FString,UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename>,TDefaultMapHashableKeyFuncs<FString,UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<FString,UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename>_>
          *param_2,int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  undefined8 *_Dst;
  uint uVar12;
  bool bVar13;
  
  bVar13 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar9 = FindIndexByHash<FString>(this,param_1,(FString *)param_2);
    bVar13 = iVar9 != -1;
    if (bVar13) {
      _Dst = (undefined8 *)((longlong)iVar9 * 0xe0 + *(longlong *)&this->Elements);
      UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename::
      ~FEXROutputConfigForFilename((FEXROutputConfigForFilename *)(_Dst + 2));
      if ((void *)*_Dst != (void *)0x0) {
        FMemory::Free((void *)*_Dst);
      }
      memmove(_Dst,param_2,0xd8);
      iVar3 = *param_3;
      lVar4 = *(longlong *)&this->Elements;
      bVar6 = (byte)iVar3 & 0x1f;
      uVar12 = 1 << bVar6 | 1U >> 0x20 - bVar6;
      puVar1 = &(this->Elements).field_0x10;
      if ((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
      lVar2 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = puVar1;
      }
      if ((*(uint *)(puVar11 + lVar2) & uVar12) == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("AllocationFlags[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                           ,0xc5,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      if (*(int *)&(this->Elements).field_0x34 != 0) {
        *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 0xe0 + lVar4) = iVar3;
      }
      uVar10 = 0xffffffff;
      *(undefined4 *)((longlong)iVar3 * 0xe0 + lVar4) = 0xffffffff;
      if (0 < *(int *)&(this->Elements).field_0x34) {
        uVar10 = *(undefined4 *)&(this->Elements).field_0x30;
      }
      *(undefined4 *)((longlong)iVar3 * 0xe0 + 4 + lVar4) = uVar10;
      *(int *)&(this->Elements).field_0x30 = iVar3;
      puVar11 = &(this->Elements).field_0x34;
      *(int *)puVar11 = *(int *)puVar11 + 1;
      if ((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
      }
      puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = puVar1;
      }
      *(uint *)(puVar11 + lVar2) = *(uint *)(puVar11 + lVar2) & ~uVar12;
      *param_3 = iVar9;
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar13;
  }
  return bVar13;
}

// UnhashElements @ 14de00fa0

void __thiscall
TSet<TObjectPtr<UMaterialInterface>,DefaultKeyFuncs<TObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TObjectPtr<UMaterialInterface>,DefaultKeyFuncs<TObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator>
                 *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<FSetElementId> local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  local_res18 = (this->Hash).SecondaryData;
  iVar3 = this->HashSize;
  if (local_res18 == (ForElementType<FSetElementId>)0x0) {
    local_res18 = (ForElementType<FSetElementId>)&this->Hash;
  }
  local_40 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset((void *)local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Elements).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar9 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14de0109b;
      uVar9 = puVar12[lVar8 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_14de0109b:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Elements).field_0x28;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar10 = (int)uVar9 >> 5;
  uVar13 = uVar9 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = local_res18;
  uVar4 = *(uint *)&(this->Elements).field_0x28;
  if (uVar9 != uVar4) {
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14de01190;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_14de01190:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TObjectPtr<UMaterialInterface>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)(*(longlong *)&this->Elements + 0xc + (longlong)local_60.CurrentBitIndex * 0x10) * 4) =
         0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 14de01230

void __thiscall
TSet<TTuple<UE::Math::TIntPoint<int>,TWeakObjectPtr<UTextureRenderTarget2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TWeakObjectPtr<UTextureRenderTarget2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<UE::Math::TIntPoint<int>,TWeakObjectPtr<UTextureRenderTarget2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TWeakObjectPtr<UTextureRenderTarget2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                 *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<FSetElementId> local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  local_res18 = (this->Hash).SecondaryData;
  iVar3 = this->HashSize;
  if (local_res18 == (ForElementType<FSetElementId>)0x0) {
    local_res18 = (ForElementType<FSetElementId>)&this->Hash;
  }
  local_40 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset((void *)local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Elements).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar9 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14de0132b;
      uVar9 = puVar12[lVar8 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_14de0132b:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Elements).field_0x28;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar10 = (int)uVar9 >> 5;
  uVar13 = uVar9 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = local_res18;
  uVar4 = *(uint *)&(this->Elements).field_0x28;
  if (uVar9 != uVar4) {
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14de01420;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_14de01420:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,TWeakObjectPtr<UTextureRenderTarget2D,FWeakObjectPtr>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)(*(longlong *)&this->Elements + 0x14 + (longlong)local_60.CurrentBitIndex * 0x18) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 14de014c0

void __thiscall
TSet<TTuple<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>,0>,FDefaultSetAllocator>
                 *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<FSetElementId> local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  local_res18 = (this->Hash).SecondaryData;
  iVar3 = this->HashSize;
  if (local_res18 == (ForElementType<FSetElementId>)0x0) {
    local_res18 = (ForElementType<FSetElementId>)&this->Hash;
  }
  local_40 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset((void *)local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Elements).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar9 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14de015bb;
      uVar9 = puVar12[lVar8 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_14de015bb:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Elements).field_0x28;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar10 = (int)uVar9 >> 5;
  uVar13 = uVar9 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = local_res18;
  uVar4 = *(uint *)&(this->Elements).field_0x28;
  if (uVar9 != uVar4) {
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14de016b0;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_14de016b0:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntPoint<int>,TSharedPtr<FMoviePipelineSurfaceQueue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)((longlong)local_60.CurrentBitIndex * 0x20 + 0x1c + *(longlong *)&this->Elements) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

