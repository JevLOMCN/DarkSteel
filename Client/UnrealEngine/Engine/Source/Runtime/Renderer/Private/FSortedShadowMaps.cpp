// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// ~FSortedShadowMaps @ 1454d75c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall FSortedShadowMaps::~FSortedShadowMaps(FSortedShadowMaps *this)

{
  FSortedShadowMapAtlas *pFVar1;
  FProjectedShadowInfo **ppFVar2;
  IPooledRenderTarget *pIVar3;
  ForElementType<TRefCountPtr<IPooledRenderTarget>_> FVar4;
  
  DestructItems<FSortedShadowMapAtlas,int>
            ((this->CompleteShadowMapAtlases).AllocatorInstance.Data,
             (this->CompleteShadowMapAtlases).ArrayNum);
  pFVar1 = (this->CompleteShadowMapAtlases).AllocatorInstance.Data;
  if (pFVar1 != (FSortedShadowMapAtlas *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar1);
  }
  ppFVar2 = (this->VirtualShadowMapShadows).AllocatorInstance.Data;
  if (ppFVar2 != (FProjectedShadowInfo **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar2);
  }
  DestructItems<FSortedShadowMapAtlas,int>
            ((this->TranslucencyShadowMapAtlases).AllocatorInstance.Data,
             (this->TranslucencyShadowMapAtlases).ArrayNum);
  pFVar1 = (this->TranslucencyShadowMapAtlases).AllocatorInstance.Data;
  if (pFVar1 != (FSortedShadowMapAtlas *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar1);
  }
  ppFVar2 = (this->PreshadowCache).Shadows.AllocatorInstance.Data;
  if (ppFVar2 != (FProjectedShadowInfo **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar2);
  }
  pIVar3 = (this->PreshadowCache).RenderTargets.DepthTarget.Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  FVar4 = (this->PreshadowCache).RenderTargets.ColorTargets.AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<TRefCountPtr<IPooledRenderTarget>_>)0x0) {
    FVar4 = (ForElementType<TRefCountPtr<IPooledRenderTarget>_>)&this->PreshadowCache;
  }
  DestructItems<TRefCountPtr<IPooledRenderTarget>,int>
            ((TRefCountPtr<IPooledRenderTarget> *)FVar4,
             (this->PreshadowCache).RenderTargets.ColorTargets.ArrayNum);
  FVar4 = (this->PreshadowCache).RenderTargets.ColorTargets.AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<TRefCountPtr<IPooledRenderTarget>_>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  DestructItems<FSortedShadowMapAtlas,int>
            ((this->ShadowMapCubemaps).AllocatorInstance.Data,(this->ShadowMapCubemaps).ArrayNum);
  pFVar1 = (this->ShadowMapCubemaps).AllocatorInstance.Data;
  if (pFVar1 != (FSortedShadowMapAtlas *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar1);
  }
  DestructItems<FSortedShadowMapAtlas,int>
            ((this->ShadowMapAtlases).AllocatorInstance.Data,(this->ShadowMapAtlases).ArrayNum);
  pFVar1 = (this->ShadowMapAtlases).AllocatorInstance.Data;
  if (pFVar1 != (FSortedShadowMapAtlas *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar1);
  }
  return;
}

// Release @ 145502bc0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall FSortedShadowMaps::Release(FSortedShadowMaps *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ForElementType<TRefCountPtr<IPooledRenderTarget>_> FVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  ForElementType<TRefCountPtr<IPooledRenderTarget>_> FVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  iVar7 = (this->ShadowMapAtlases).ArrayNum;
  uVar13 = 0;
  uVar4 = 0;
  uVar9 = uVar13;
  uVar14 = uVar13;
  if (0 < iVar7) {
    do {
      uVar10 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar10 < iVar7) {
        uVar5 = ~uVar10 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar12 = (ForElementType<TRefCountPtr<IPooledRenderTarget>_>)
               ((longlong)
                (((this->ShadowMapAtlases).AllocatorInstance.Data)->RenderTargets).ColorTargets.
                AllocatorInstance.InlineData + uVar14);
      iVar7 = *(int *)((ForElementType<TRefCountPtr<IPooledRenderTarget>_> *)
                      ((longlong)FVar12 + 0x28))->InlineData;
      uVar9 = uVar13;
      uVar11 = uVar13;
      if (0 < iVar7) {
        do {
          uVar8 = (uint)uVar9;
          uVar5 = uVar4;
          if ((int)uVar8 < iVar7) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FVar6 = FVar12;
          if (*(ForElementType<TRefCountPtr<IPooledRenderTarget>_> *)((longlong)FVar12 + 0x20) !=
              (ForElementType<TRefCountPtr<IPooledRenderTarget>_>)0x0) {
            FVar6 = *(ForElementType<TRefCountPtr<IPooledRenderTarget>_> *)((longlong)FVar12 + 0x20)
            ;
          }
          plVar1 = *(longlong **)(uVar11 + (longlong)FVar6);
          if (plVar1 != (longlong *)0x0) {
            *(undefined8 *)(uVar11 + (longlong)FVar6) = 0;
            (**(code **)(*plVar1 + 0x38))();
          }
          iVar7 = *(int *)((longlong)FVar12 + 0x28);
          uVar9 = (ulonglong)(uVar8 + 1);
          uVar11 = uVar11 + 8;
        } while ((int)(uVar8 + 1) < iVar7);
      }
      FVar6 = FVar12;
      if (*(ForElementType<TRefCountPtr<IPooledRenderTarget>_> *)((longlong)FVar12 + 0x20) !=
          (ForElementType<TRefCountPtr<IPooledRenderTarget>_>)0x0) {
        FVar6 = *(ForElementType<TRefCountPtr<IPooledRenderTarget>_> *)((longlong)FVar12 + 0x20);
      }
      DestructItems<TRefCountPtr<IPooledRenderTarget>,int>
                ((TRefCountPtr<IPooledRenderTarget> *)FVar6,iVar7);
      *(undefined4 *)((longlong)FVar12 + 0x28) = 0;
      if (*(int *)((longlong)FVar12 + 0x2c) != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<IPooledRenderTarget>_>_>
                  (8,8,0,(ForElementType<TRefCountPtr<IPooledRenderTarget>_> *)FVar12,0,
                   (int *)((longlong)FVar12 + 0x2c));
      }
      plVar1 = *(longlong **)((longlong)FVar12 + 0x30);
      if (plVar1 != (longlong *)0x0) {
        *(undefined8 *)((longlong)FVar12 + 0x30) = 0;
        (**(code **)(*plVar1 + 0x38))();
      }
      iVar7 = (this->ShadowMapAtlases).ArrayNum;
      uVar9 = (ulonglong)(uVar10 + 1);
      uVar14 = uVar14 + 0x48;
    } while ((int)(uVar10 + 1) < iVar7);
  }
  uVar9 = uVar13;
  uVar14 = uVar13;
  if (0 < (this->ShadowMapCubemaps).ArrayNum) {
    do {
      uVar10 = (uint)uVar9;
      uVar5 = uVar4;
      if ((int)uVar10 < (this->ShadowMapCubemaps).ArrayNum) {
        uVar5 = ~uVar10 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar12 = (ForElementType<TRefCountPtr<IPooledRenderTarget>_>)
               ((longlong)
                (((this->ShadowMapCubemaps).AllocatorInstance.Data)->RenderTargets).ColorTargets.
                AllocatorInstance.InlineData + uVar14);
      iVar7 = *(int *)((ForElementType<TRefCountPtr<IPooledRenderTarget>_> *)
                      ((longlong)FVar12 + 0x28))->InlineData;
      uVar9 = uVar13;
      uVar11 = uVar13;
      if (0 < iVar7) {
        do {
          uVar8 = (uint)uVar9;
          uVar5 = uVar4;
          if ((int)uVar8 < iVar7) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FVar6 = FVar12;
          if (*(ForElementType<TRefCountPtr<IPooledRenderTarget>_> *)((longlong)FVar12 + 0x20) !=
              (ForElementType<TRefCountPtr<IPooledRenderTarget>_>)0x0) {
            FVar6 = *(ForElementType<TRefCountPtr<IPooledRenderTarget>_> *)((longlong)FVar12 + 0x20)
            ;
          }
          plVar1 = *(longlong **)(uVar11 + (longlong)FVar6);
          if (plVar1 != (longlong *)0x0) {
            *(undefined8 *)(uVar11 + (longlong)FVar6) = 0;
            (**(code **)(*plVar1 + 0x38))();
          }
          iVar7 = *(int *)((longlong)FVar12 + 0x28);
          uVar9 = (ulonglong)(uVar8 + 1);
          uVar11 = uVar11 + 8;
        } while ((int)(uVar8 + 1) < iVar7);
      }
      FVar6 = FVar12;
      if (*(ForElementType<TRefCountPtr<IPooledRenderTarget>_> *)((longlong)FVar12 + 0x20) !=
          (ForElementType<TRefCountPtr<IPooledRenderTarget>_>)0x0) {
        FVar6 = *(ForElementType<TRefCountPtr<IPooledRenderTarget>_> *)((longlong)FVar12 + 0x20);
      }
      DestructItems<TRefCountPtr<IPooledRenderTarget>,int>
                ((TRefCountPtr<IPooledRenderTarget> *)FVar6,iVar7);
      *(undefined4 *)((longlong)FVar12 + 0x28) = 0;
      if (*(int *)((longlong)FVar12 + 0x2c) != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<IPooledRenderTarget>_>_>
                  (8,8,0,(ForElementType<TRefCountPtr<IPooledRenderTarget>_> *)FVar12,0,
                   (int *)((longlong)FVar12 + 0x2c));
      }
      plVar1 = *(longlong **)((longlong)FVar12 + 0x30);
      if (plVar1 != (longlong *)0x0) {
        *(undefined8 *)((longlong)FVar12 + 0x30) = 0;
        (**(code **)(*plVar1 + 0x38))();
      }
      uVar9 = (ulonglong)(uVar10 + 1);
      uVar14 = uVar14 + 0x48;
    } while ((int)(uVar10 + 1) < (this->ShadowMapCubemaps).ArrayNum);
  }
  FShadowMapRenderTargetsRefCounted::Release(&(this->PreshadowCache).RenderTargets);
  return;
}

// ComputeMemorySize @ 145621740

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

long64 __thiscall FSortedShadowMaps::ComputeMemorySize(FSortedShadowMaps *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  long64 lVar4;
  ulonglong uVar5;
  ForElementType<TRefCountPtr<IPooledRenderTarget>_> FVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  ForElementType<TRefCountPtr<IPooledRenderTarget>_> FVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  
  iVar7 = (this->ShadowMapAtlases).ArrayNum;
  lVar12 = 0;
  uVar9 = 0;
  if (0 < iVar7) {
    lVar14 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar9 < iVar7) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          lVar4 = (*pcVar1)();
          return lVar4;
        }
      }
      lVar10 = 0;
      FVar11 = (ForElementType<TRefCountPtr<IPooledRenderTarget>_>)
               ((longlong)
                (((this->ShadowMapAtlases).AllocatorInstance.Data)->RenderTargets).ColorTargets.
                AllocatorInstance.InlineData + lVar14);
      uVar8 = 0;
      iVar7 = *(int *)((longlong)FVar11 + 0x28);
      if (0 < iVar7) {
        lVar13 = 0;
        do {
          uVar3 = 0;
          if ((int)uVar8 < iVar7) {
            uVar3 = ~uVar8 >> 0x1f;
          }
          if (uVar3 == 0) {
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              lVar4 = (*pcVar1)();
              return lVar4;
            }
          }
          FVar6 = FVar11;
          if (*(ForElementType<TRefCountPtr<IPooledRenderTarget>_> *)((longlong)FVar11 + 0x20) !=
              (ForElementType<TRefCountPtr<IPooledRenderTarget>_>)0x0) {
            FVar6 = *(ForElementType<TRefCountPtr<IPooledRenderTarget>_> *)((longlong)FVar11 + 0x20)
            ;
          }
          uVar3 = (**(code **)(**(longlong **)(lVar13 + (longlong)FVar6) + 0x18))();
          iVar7 = *(int *)((longlong)FVar11 + 0x28);
          uVar8 = uVar8 + 1;
          lVar13 = lVar13 + 8;
          lVar10 = lVar10 + (ulonglong)uVar3;
        } while ((int)uVar8 < iVar7);
      }
      if (*(longlong **)((longlong)FVar11 + 0x30) != (longlong *)0x0) {
        uVar8 = (**(code **)(**(longlong **)((longlong)FVar11 + 0x30) + 0x18))();
        lVar10 = lVar10 + (ulonglong)uVar8;
      }
      iVar7 = (this->ShadowMapAtlases).ArrayNum;
      lVar12 = lVar12 + lVar10;
      uVar9 = uVar9 + 1;
      lVar14 = lVar14 + 0x48;
    } while ((int)uVar9 < iVar7);
  }
  uVar9 = 0;
  if (0 < (this->ShadowMapCubemaps).ArrayNum) {
    lVar14 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar9 < (this->ShadowMapCubemaps).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          lVar4 = (*pcVar1)();
          return lVar4;
        }
      }
      lVar10 = 0;
      FVar11 = (ForElementType<TRefCountPtr<IPooledRenderTarget>_>)
               ((longlong)
                (((this->ShadowMapCubemaps).AllocatorInstance.Data)->RenderTargets).ColorTargets.
                AllocatorInstance.InlineData + lVar14);
      uVar8 = 0;
      iVar7 = *(int *)((longlong)FVar11 + 0x28);
      if (0 < iVar7) {
        lVar13 = 0;
        do {
          uVar3 = 0;
          if ((int)uVar8 < iVar7) {
            uVar3 = ~uVar8 >> 0x1f;
          }
          if (uVar3 == 0) {
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              lVar4 = (*pcVar1)();
              return lVar4;
            }
          }
          FVar6 = FVar11;
          if (*(ForElementType<TRefCountPtr<IPooledRenderTarget>_> *)((longlong)FVar11 + 0x20) !=
              (ForElementType<TRefCountPtr<IPooledRenderTarget>_>)0x0) {
            FVar6 = *(ForElementType<TRefCountPtr<IPooledRenderTarget>_> *)((longlong)FVar11 + 0x20)
            ;
          }
          uVar3 = (**(code **)(**(longlong **)(lVar13 + (longlong)FVar6) + 0x18))();
          iVar7 = *(int *)((longlong)FVar11 + 0x28);
          uVar8 = uVar8 + 1;
          lVar13 = lVar13 + 8;
          lVar10 = lVar10 + (ulonglong)uVar3;
        } while ((int)uVar8 < iVar7);
      }
      if (*(longlong **)((longlong)FVar11 + 0x30) != (longlong *)0x0) {
        uVar8 = (**(code **)(**(longlong **)((longlong)FVar11 + 0x30) + 0x18))();
        lVar10 = lVar10 + (ulonglong)uVar8;
      }
      lVar12 = lVar12 + lVar10;
      uVar9 = uVar9 + 1;
      lVar14 = lVar14 + 0x48;
    } while ((int)uVar9 < (this->ShadowMapCubemaps).ArrayNum);
  }
  lVar4 = FShadowMapRenderTargetsRefCounted::ComputeMemorySize
                    (&(this->PreshadowCache).RenderTargets);
  lVar12 = lVar12 + lVar4;
  uVar9 = 0;
  if (0 < (this->TranslucencyShadowMapAtlases).ArrayNum) {
    lVar14 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar9 < (this->TranslucencyShadowMapAtlases).ArrayNum) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          lVar4 = (*pcVar1)();
          return lVar4;
        }
      }
      lVar10 = 0;
      FVar11 = (ForElementType<TRefCountPtr<IPooledRenderTarget>_>)
               ((longlong)
                (((this->TranslucencyShadowMapAtlases).AllocatorInstance.Data)->RenderTargets).
                ColorTargets.AllocatorInstance.InlineData + lVar14);
      uVar8 = 0;
      iVar7 = *(int *)((longlong)FVar11 + 0x28);
      if (0 < iVar7) {
        lVar13 = 0;
        do {
          uVar3 = 0;
          if ((int)uVar8 < iVar7) {
            uVar3 = ~uVar8 >> 0x1f;
          }
          if (uVar3 == 0) {
            bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar2) {
              pcVar1 = (code *)swi(3);
              lVar4 = (*pcVar1)();
              return lVar4;
            }
          }
          FVar6 = FVar11;
          if (*(ForElementType<TRefCountPtr<IPooledRenderTarget>_> *)((longlong)FVar11 + 0x20) !=
              (ForElementType<TRefCountPtr<IPooledRenderTarget>_>)0x0) {
            FVar6 = *(ForElementType<TRefCountPtr<IPooledRenderTarget>_> *)((longlong)FVar11 + 0x20)
            ;
          }
          uVar3 = (**(code **)(**(longlong **)((longlong)FVar6 + lVar13) + 0x18))();
          iVar7 = *(int *)((longlong)FVar11 + 0x28);
          uVar8 = uVar8 + 1;
          lVar13 = lVar13 + 8;
          lVar10 = lVar10 + (ulonglong)uVar3;
        } while ((int)uVar8 < iVar7);
      }
      if (*(longlong **)((longlong)FVar11 + 0x30) != (longlong *)0x0) {
        uVar5 = (**(code **)(**(longlong **)((longlong)FVar11 + 0x30) + 0x18))();
        lVar10 = lVar10 + (uVar5 & 0xffffffff);
      }
      lVar12 = lVar12 + lVar10;
      uVar9 = uVar9 + 1;
      lVar14 = lVar14 + 0x48;
    } while ((int)uVar9 < (this->TranslucencyShadowMapAtlases).ArrayNum);
  }
  return lVar12;
}

