// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 16

// Find @ 145f0cea0

FTexture2DResourceSubregion * __thiscall
TMapBase<UE::Math::TIntPoint<int>,UE::Landscape::Private::RenderMergedTexture_RenderThread::FTexture2DResourceSubregion,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,UE::Landscape::Private::RenderMergedTexture_RenderThread::FTexture2DResourceSubregion,0>_>
::Find(TMapBase<UE::Math::TIntPoint<int>,UE::Landscape::Private::RenderMergedTexture_RenderThread::FTexture2DResourceSubregion,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,UE::Landscape::Private::RenderMergedTexture_RenderThread::FTexture2DResourceSubregion,0>_>
       *this,TIntPoint<int> param_1)

{
  FTexture2DResourceSubregion *pFVar1;
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
        puVar5 = (undefined8 *)((longlong)iVar7 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (((int)*puVar5 == param_1.field0_0x0._0_4_) &&
           ((uint)((ulonglong)*puVar5 >> 0x20) == uVar8)) {
          if (iVar7 == -1) {
            return (FTexture2DResourceSubregion *)0x0;
          }
          pFVar1 = (FTexture2DResourceSubregion *)0x0;
          if (puVar5 != (undefined8 *)0x0) {
            pFVar1 = (FTexture2DResourceSubregion *)(puVar5 + 1);
          }
          return pFVar1;
        }
        iVar7 = *(int *)(puVar5 + 5);
      } while (iVar7 != -1);
    }
  }
  return (FTexture2DResourceSubregion *)0x0;
}

// FindChecked @ 145f0d290

int * __thiscall
TMapBase<void_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,int,0>_>::FindChecked
          (TMapBase<void_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,int,0>_>
           *this,void *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int *piVar6;
  ForElementType<FSetElementId> FVar7;
  uint uVar8;
  
  uVar8 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(void **)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (int *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (int *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  piVar6 = (int *)(*pcVar3)();
  return piVar6;
}

// FindOrAddImpl<unsigned_int_const_&> @ 145f72e80

FLandscapeRenderSystem ** __thiscall
TMapBase<unsigned_int,FLandscapeRenderSystem_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeRenderSystem_*,0>_>
::FindOrAddImpl<unsigned_int_const_&>
          (TMapBase<unsigned_int,FLandscapeRenderSystem_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeRenderSystem_*,0>_>
           *this,uint param_1,uint *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  uint *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x18;
        if (*(uint *)(lVar1 + (longlong)iVar2 * 0x18) == *param_2) {
          if (lVar3 != 0) goto LAB_145f72f12;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned_int,FLandscapeRenderSystem_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeRenderSystem_*,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
LAB_145f72f12:
  return (FLandscapeRenderSystem **)(lVar3 + 8);
}

// FindOrAddImpl<unsigned_int_const_&> @ 145f72f30

TMap<UE::Math::TIntPoint<int>,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,float,0>_>
* __thiscall
TMapBase<unsigned_int,TMap<UE::Math::TIntPoint<int>,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,float,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TMap<UE::Math::TIntPoint<int>,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,float,0>_>,0>_>
::FindOrAddImpl<unsigned_int_const_&>
          (TMapBase<unsigned_int,TMap<UE::Math::TIntPoint<int>,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,float,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TMap<UE::Math::TIntPoint<int>,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,float,0>_>,0>_>
           *this,uint param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  uint *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (uint *)0x0) {
            return (TMap<UE::Math::TIntPoint<int>,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,float,0>_>
                    *)(puVar2 + 2);
          }
          break;
        }
        uVar1 = puVar2[0x16];
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned_int,TMap<UE::Math::TIntPoint<int>,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,float,0>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TMap<UE::Math::TIntPoint<int>,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,float,0>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (TMap<UE::Math::TIntPoint<int>,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,float,0>_>
          *)(*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x60);
}

// FindOrAddImpl<unsigned_int_const_&> @ 145f72fe0

TResourceArray<float,0> * __thiscall
TMapBase<unsigned_int,TResourceArray<float,0>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TResourceArray<float,0>,0>_>
::FindOrAddImpl<unsigned_int_const_&>
          (TMapBase<unsigned_int,TResourceArray<float,0>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TResourceArray<float,0>,0>_>
           *this,uint param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  uint *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (uint *)0x0) {
            return (TResourceArray<float,0> *)(puVar2 + 2);
          }
          break;
        }
        uVar1 = puVar2[10];
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned_int,TResourceArray<float,0>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TResourceArray<float,0>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (TResourceArray<float,0> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x30);
}

// FindOrAddImpl<UE::Renderer::Private::IShadowInvalidatingInstances_*_const_&> @ 145f73090

TArray<FPrimitiveSceneInfo_const_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<UE::Renderer::Private::IShadowInvalidatingInstances_*,TArray<FPrimitiveSceneInfo_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Renderer::Private::IShadowInvalidatingInstances_*,TArray<FPrimitiveSceneInfo_const_*,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<UE::Renderer::Private::IShadowInvalidatingInstances_*_const_&>
          (TMapBase<UE::Renderer::Private::IShadowInvalidatingInstances_*,TArray<FPrimitiveSceneInfo_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Renderer::Private::IShadowInvalidatingInstances_*,TArray<FPrimitiveSceneInfo_const_*,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,IShadowInvalidatingInstances **param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  IShadowInvalidatingInstances **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((IShadowInvalidatingInstances *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (TArray<FPrimitiveSceneInfo_const_*,TSizedDefaultAllocator<32>_> *)(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<UE::Renderer::Private::IShadowInvalidatingInstances_*,TArray<FPrimitiveSceneInfo_const_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UE::Renderer::Private::IShadowInvalidatingInstances_*,TArray<FPrimitiveSceneInfo_const_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UE::Renderer::Private::IShadowInvalidatingInstances_*_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<UE::Renderer::Private::IShadowInvalidatingInstances_*_const_&> *)
             (ulonglong)param_1,(bool *)&local_res20);
  return (TArray<FPrimitiveSceneInfo_const_*,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// FindOrAddImpl<FSceneView_const_*> @ 145f73140

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TResourceArray<float,0> * __thiscall
TMapBase<FSceneView_const_*,TResourceArray<float,0>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneView_const_*,TResourceArray<float,0>,0>_>
::FindOrAddImpl<FSceneView_const_*>
          (TMapBase<FSceneView_const_*,TResourceArray<float,0>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneView_const_*,TResourceArray<float,0>,0>_>
           *this,uint param_1,FSceneView **param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FSceneView **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if ((FSceneView *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (TResourceArray<float,0> *)(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[5];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FSceneView_const_*,TResourceArray<float,0>_>,TDefaultMapHashableKeyFuncs<FSceneView_const_*,TResourceArray<float,0>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FSceneView_const_*_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FSceneView_const_*_&&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (TResourceArray<float,0> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x30);
}

// FindOrAddImpl<TObjectPtr<UTexture2D>_> @ 145f731f0

TObjectPtr<ULandscapeComponent> * __thiscall
TMapBase<TObjectPtr<UTexture2D>,TObjectPtr<ULandscapeComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UTexture2D>,TObjectPtr<ULandscapeComponent>,0>_>
::FindOrAddImpl<TObjectPtr<UTexture2D>_>
          (TMapBase<TObjectPtr<UTexture2D>,TObjectPtr<ULandscapeComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UTexture2D>,TObjectPtr<ULandscapeComponent>,0>_>
           *this,uint param_1,TObjectPtr<UTexture2D> *param_2)

{
  int iVar1;
  UTexture2D *pUVar2;
  UTexture2D *pUVar3;
  longlong lVar4;
  ForElementType<FSetElementId> FVar5;
  int local_res8 [2];
  TObjectPtr<UTexture2D> *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar5 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    while (iVar1 != -1) {
      pUVar2 = (param_2->field0_0x0).DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UTexture2D *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      lVar4 = (longlong)iVar1 * 0x18;
      pUVar3 = *(UTexture2D **)(lVar4 + *(longlong *)&(this->Pairs).Elements);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UTexture2D *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      if (pUVar3 == pUVar2) {
        if ((iVar1 != -1) && (lVar4 = *(longlong *)&(this->Pairs).Elements + lVar4, lVar4 != 0))
        goto LAB_145f732da;
        break;
      }
      iVar1 = *(int *)(lVar4 + 0x10 + *(longlong *)&(this->Pairs).Elements);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<TObjectPtr<UTexture2D>,TObjectPtr<ULandscapeComponent>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UTexture2D>,TObjectPtr<ULandscapeComponent>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TObjectPtr<UTexture2D>_&&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<TObjectPtr<UTexture2D>_&&> *)(ulonglong)param_1,(bool *)&local_res20);
  lVar4 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
LAB_145f732da:
  return (TObjectPtr<ULandscapeComponent> *)(lVar4 + 8);
}

// GenerateValueArray<TSizedDefaultAllocator<32>_> @ 145f73300

void __thiscall
TMapBase<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>_>
::GenerateValueArray<TSizedDefaultAllocator<32>_>
          (TMapBase<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>_>
           *this,TArray<TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,TSizedDefaultAllocator<32>_>
                 *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  UObject *pUVar7;
  code *pcVar8;
  bool bVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar12 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  piVar1 = &param_1->ArrayMax;
  iVar11 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar12,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar12 = 1;
  iVar13 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar4 != 0) {
    puVar14 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)TStack_40.Array;
    }
    uVar5 = *puVar14;
    while (uVar5 == 0) {
      lVar10 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_145f733d3;
      uVar5 = puVar14[lVar10 + 1];
    }
    uVar12 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar12 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar10 + -1 + iVar13;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_145f733d3:
  TStack_40._padding_ = CONCAT44(uVar12,iVar11);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar13;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar2 = (FScriptContainerElement *)
               (*(longlong *)&(this->Pairs).Elements +
               ((longlong)TStack_40.CurrentBitIndex * 3 + 1) * 8);
      pFVar6 = (param_1->AllocatorInstance).Data;
      if (((pFVar6 <= pFVar2) && (pFVar2 < pFVar6 + (longlong)*piVar1 * 8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar11 = param_1->ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&param_1->AllocatorInstance,piVar1);
      }
      pFVar6 = (param_1->AllocatorInstance).Data;
      param_1->ArrayNum = iVar11 + 1;
      pUVar7 = *(UObject **)pFVar2;
      *(UObject **)(pFVar6 + (longlong)iVar11 * 8) = pUVar7;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar7);
      }
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// Find @ 145f8cd30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TResourceArray<float,0> * __thiscall
TMapBase<FSceneView_const_*,TResourceArray<float,0>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneView_const_*,TResourceArray<float,0>,0>_>
::Find(TMapBase<FSceneView_const_*,TResourceArray<float,0>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSceneView_const_*,TResourceArray<float,0>,0>_>
       *this,FSceneView *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TResourceArray<float,0> *pTVar4;
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
        if ((FSceneView *)*plVar2 == param_1) {
          pTVar4 = (TResourceArray<float,0> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TResourceArray<float,0> *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[5];
      } while (iVar1 != -1);
    }
  }
  return (TResourceArray<float,0> *)0x0;
}

// Find @ 145f8cde0

TObjectPtr<ULandscapeHeightmapTextureEdgeFixup> * __thiscall
TMapBase<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>_>
::Find(TMapBase<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,TObjectPtr<ULandscapeHeightmapTextureEdgeFixup>,0>_>
       *this,TIntPoint<int> param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  TObjectPtr<ULandscapeHeightmapTextureEdgeFixup> *pTVar4;
  uint uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  uVar10 = param_1.field0_0x0._4_4_;
  uVar8 = param_1.field0_0x0._0_4_ - uVar10 ^ uVar10 >> 0xd;
  uVar6 = (-0x61c88647 - uVar8) - uVar10 ^ uVar8 << 8;
  uVar5 = (uVar10 - uVar8) - uVar6 ^ uVar6 >> 0xd;
  uVar8 = (uVar8 - uVar5) - uVar6 ^ uVar5 >> 0xc;
  uVar6 = (uVar6 - uVar8) - uVar5 ^ uVar8 << 0x10;
  uVar5 = (uVar5 - uVar6) - uVar8 ^ uVar6 >> 5;
  uVar8 = (uVar8 - uVar5) - uVar6 ^ uVar5 >> 3;
  uVar6 = (uVar6 - uVar8) - uVar5 ^ uVar8 << 10;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar9 = *(int *)((longlong)FVar7 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & ((uVar5 - uVar6) - uVar8 ^ uVar6 >> 0xf)) * 4);
    if (iVar9 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        uVar3 = *(undefined8 *)(lVar2 + (longlong)iVar9 * 0x18);
        lVar1 = lVar2 + (longlong)iVar9 * 0x18;
        if (((int)uVar3 == param_1.field0_0x0._0_4_) && ((uint)((ulonglong)uVar3 >> 0x20) == uVar10)
           ) {
          if (iVar9 == -1) {
            return (TObjectPtr<ULandscapeHeightmapTextureEdgeFixup> *)0x0;
          }
          pTVar4 = (TObjectPtr<ULandscapeHeightmapTextureEdgeFixup> *)0x0;
          if (lVar1 != 0) {
            pTVar4 = (TObjectPtr<ULandscapeHeightmapTextureEdgeFixup> *)(lVar1 + 8);
          }
          return pTVar4;
        }
        iVar9 = *(int *)(lVar1 + 0x10);
      } while (iVar9 != -1);
    }
  }
  return (TObjectPtr<ULandscapeHeightmapTextureEdgeFixup> *)0x0;
}

// FindChecked @ 145f8d040

FLandscapeRenderSystem ** __thiscall
TMapBase<unsigned_int,FLandscapeRenderSystem_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeRenderSystem_*,0>_>
::FindChecked(TMapBase<unsigned_int,FLandscapeRenderSystem_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FLandscapeRenderSystem_*,0>_>
              *this,uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FLandscapeRenderSystem **ppFVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(uint *)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (FLandscapeRenderSystem **)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (FLandscapeRenderSystem **)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  ppFVar6 = (FLandscapeRenderSystem **)(*pcVar3)();
  return ppFVar6;
}

// FindOrAddImpl<FTextureResource_*_const_&> @ 145fb1120

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

ERHIAccess * __thiscall
TMapBase<FTextureResource_*,enum_ERHIAccess,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextureResource_*,enum_ERHIAccess,0>_>
::FindOrAddImpl<FTextureResource_*_const_&>(void *this,uint param_1,FTextureResource **param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [6];
  FTextureResource **local_res20;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar2 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar2 = (longlong)this + 0x38;
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)this + (longlong)iVar1 * 0x18;
        if (*(FTextureResource **)(*(longlong *)this + (longlong)iVar1 * 0x18) == *param_2) {
          if (lVar2 != 0) goto LAB_145fb11b2;
          break;
        }
        iVar1 = *(int *)(lVar2 + 0x10);
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FTextureResource_*,enum_ERHIAccess>,TDefaultMapHashableKeyFuncs<FTextureResource_*,enum_ERHIAccess,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FTextureResource_*_const_&>_>
            (this,(uint)local_res8,(TKeyInitializer<FTextureResource_*_const_&> *)(ulonglong)param_1
             ,(bool *)&local_res20);
  lVar2 = *(longlong *)this + (longlong)local_res8[0] * 0x18;
LAB_145fb11b2:
  return (ERHIAccess *)(lVar2 + 8);
}

// FindOrAddImpl<TWeakObjectPtr<UTexture,FWeakObjectPtr>_const_&> @ 145fb11d0

FTextureState * __thiscall
TMapBase<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,FDefaultSetAllocator,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,0>_>
::FindOrAddImpl<TWeakObjectPtr<UTexture,FWeakObjectPtr>_const_&>
          (TMapBase<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,FDefaultSetAllocator,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,0>_>
           *this,uint param_1,TWeakObjectPtr<UTexture,FWeakObjectPtr> *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  int local_res8 [2];
  TWeakObjectPtr<UTexture,FWeakObjectPtr> *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar5 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x18;
        uVar3 = *(undefined8 *)(lVar2 + (longlong)iVar4 * 0x18);
        if (((int)uVar3 == (param_2->WeakPtr).ObjectIndex) &&
           ((int)((ulonglong)uVar3 >> 0x20) == (param_2->WeakPtr).ObjectSerialNumber)) {
          if ((iVar4 != -1) && (lVar1 != 0)) {
            return (FTextureState *)(lVar1 + 8);
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState>,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TWeakObjectPtr<UTexture,FWeakObjectPtr>_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<TWeakObjectPtr<UTexture,FWeakObjectPtr>_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FTextureState *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18 + 8);
}

// GenerateValueArray<TSizedDefaultAllocator<32>_> @ 145fb12a0

void __thiscall
TMapBase<UE::Math::TIntPoint<int>,ULandscapeComponent_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeComponent_*,0>_>
::GenerateValueArray<TSizedDefaultAllocator<32>_>
          (TMapBase<UE::Math::TIntPoint<int>,ULandscapeComponent_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,ULandscapeComponent_*,0>_>
           *this,TArray<ULandscapeComponent_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_1->ArrayMax;
  iVar10 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar11,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar11 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar4 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar5 = *puVar13;
    while (uVar5 == 0) {
      lVar9 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_145fb1373;
      uVar5 = puVar13[lVar9 + 1];
    }
    uVar11 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar11 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar9 + -1 + iVar12;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_145fb1373:
  TStack_40._padding_ = CONCAT44(uVar11,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar2 = (FScriptContainerElement *)
               (*(longlong *)&(this->Pairs).Elements +
               ((longlong)TStack_40.CurrentBitIndex * 3 + 1) * 8);
      pFVar6 = (param_1->AllocatorInstance).Data;
      if (((pFVar6 <= pFVar2) && (pFVar2 < pFVar6 + (longlong)*piVar1 * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar10 = param_1->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) =
           *(undefined8 *)pFVar2;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// Find @ 145fbf470

FTextureState * __thiscall
TMapBase<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,FDefaultSetAllocator,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,0>_>
::Find(TMapBase<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,FDefaultSetAllocator,TWeakObjectPtrMapKeyFuncs<TWeakObjectPtr<UTexture,FWeakObjectPtr>,FLandscapeTextureStreamingManager::FTextureState,0>_>
       *this,TWeakObjectPtr<UTexture_const_,FWeakObjectPtr> param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  FTextureState *pFVar4;
  ForElementType<FSetElementId> FVar5;
  int iVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar6 = *(int *)((longlong)FVar5 +
                    (((ulonglong)param_1.WeakPtr >> 0x20 ^ (ulonglong)param_1.WeakPtr & 0xffffffff)
                    & (ulonglong)((this->Pairs).HashSize - 1)) * 4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        uVar3 = *(undefined8 *)(lVar2 + (longlong)iVar6 * 0x18);
        lVar1 = lVar2 + (longlong)iVar6 * 0x18;
        if (((int)uVar3 == param_1.WeakPtr.ObjectIndex) &&
           ((int)((ulonglong)uVar3 >> 0x20) == param_1.WeakPtr.ObjectSerialNumber)) {
          if (iVar6 == -1) {
            return (FTextureState *)0x0;
          }
          pFVar4 = (FTextureState *)0x0;
          if (lVar1 != 0) {
            pFVar4 = (FTextureState *)(lVar1 + 8);
          }
          return pFVar4;
        }
        iVar6 = *(int *)(lVar1 + 0x10);
      } while (iVar6 != -1);
    }
  }
  return (FTextureState *)0x0;
}

