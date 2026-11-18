// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 8

// BuildRayTracingMeshCommands<FMeshMaterialShader,TBasePassShaderElementData<FUniformLightMapPolicy>_> @ 1450a82c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
FRayTracingMeshProcessor::
BuildRayTracingMeshCommands<FMeshMaterialShader,TBasePassShaderElementData<FUniformLightMapPolicy>_>
          (FRayTracingMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,FMaterialRenderProxy *param_4,FMaterial *param_5,
          TShaderRefBase<FMeshMaterialShader,FShaderMapPointerTable> *param_6,
          TBasePassShaderElementData<FUniformLightMapPolicy> *param_7)

{
  int iVar1;
  int iVar2;
  FGenericStaticFeatureLevel FVar3;
  FVertexFactory *this_00;
  FSceneView *pFVar4;
  FShaderMapBase *pFVar5;
  FScene *pFVar6;
  FMeshMaterialShader *this_01;
  code *pcVar7;
  bool bVar8;
  byte bVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ForElementType<FMeshDrawShaderBindingsLayout> FVar15;
  ForElementType<FMeshBatchElement> FVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  longlong *plVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  TShaderRefBase<FMeshMaterialShader,FShaderMapPointerTable> *pTVar25;
  undefined1 auStackY_278 [32];
  undefined1 local_208;
  undefined1 local_207 [3];
  int local_204;
  uint local_200;
  uint local_1fc;
  TShaderRefBase<FMeshMaterialShader,FShaderMapPointerTable> *local_1f8;
  FMaterialRenderProxy *local_1f0;
  ForElementType<FMeshBatchElement> local_1e8;
  FMaterial *local_1e0;
  ulonglong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  FRayTracingMeshProcessor *local_1c0;
  TBasePassShaderElementData<FUniformLightMapPolicy> *local_1b8;
  FPrimitiveSceneProxy *local_1b0;
  ulonglong local_1a8;
  FMeshDrawSingleShaderBindings local_1a0;
  FMeshDrawSingleShaderBindings local_190;
  ulonglong local_180;
  FMeshBatchElement *local_178;
  FVertexFactory *local_170;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_168;
  FRayTracingMeshCommand local_158;
  TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_> local_b8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_278;
  this_00 = param_1->VertexFactory;
  local_1f8 = param_6;
  local_1f0 = param_4;
  local_1e0 = param_5;
  local_1b8 = param_7;
  local_1e8 = (ForElementType<FMeshBatchElement>)param_1;
  local_1c0 = this;
  local_1b0 = param_3;
  local_1a8 = param_2;
  local_170 = this_00;
  if (((param_4->ImmutableSamplerState).ImmutableSamplers.Elements[0] != (FRHISamplerState *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaterialRenderProxy.ImmutableSamplerState.ImmutableSamplers[0] == nullptr"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingMaterialHitShaders.h"
                         ,0x3d,L"Immutable samplers not yet supported in Mesh Draw Command pipeline"
                        ), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_158.bCanBeCached = false;
  local_158.bNaniteRayTracing = false;
  local_158.ShaderBindings.ShaderLayouts.ArrayMax = 2;
  local_158.ShaderBindings.ShaderLayouts.AllocatorInstance.SecondaryData =
       (ForElementType<FMeshDrawShaderBindingsLayout>)0x0;
  local_158.ShaderBindings.ShaderLayouts.ArrayNum = 0;
  local_158.ShaderBindings.ShaderFrequencyBits = 0;
  local_158.ShaderBindings.Size = 0;
  local_158.MaterialShader = (FRHIRayTracingShader *)0x0;
  local_158.MaterialShaderIndex = 0xffffffff;
  local_158.GeometrySegmentIndex = 0xffffffff;
  local_158.NaniteUniformBufferParameter.BaseIndex = 0xffff;
  local_158.ShaderBindings.Data.InlineStorage[0] = (uchar *)0x0;
  local_158.ShaderBindings.Data.InlineStorage[1] = (uchar *)0x0;
  local_158.InstanceMask = 0xff;
  local_158._137_1_ = 3;
  local_158.ShaderBindings.Data.InlineStorage[2] = (uchar *)0x0;
  local_158.ShaderBindings.Data.InlineStorage[3] = (uchar *)0x0;
  local_158.ViewUniformBufferParameter.BaseIndex = 0xffff;
  local_158.SceneUniformBufferParameter.BaseIndex = 0xffff;
  local_158.ShaderBindings.Data.InlineStorage[4] = (uchar *)0x0;
  local_158.ShaderBindings.Data.InlineStorage[5] = (uchar *)0x0;
  local_158.ShaderBindings.Data.InlineStorage[6] = (uchar *)0x0;
  local_158.ShaderBindings.Data.InlineStorage[7] = (uchar *)0x0;
  local_158.ShaderBindings.Data.InlineStorage[8] = (uchar *)0x0;
  local_158.ShaderBindings.Data.InlineStorage[9] = (uchar *)0x0;
  SetupRayTracingMeshCommandMaskAndStatus(&local_158,param_1,param_3,param_5,this->RayTracingType);
  if (GRHIGlobals.RayTracing.SupportsShaders != false) {
    local_168.ShaderContent = (FShader *)param_6->ShaderContent;
    local_168.ShaderMap = param_6->ShaderMap;
    FRayTracingMeshCommand::SetShader(&local_158,&local_168);
  }
  uVar19 = 0;
  local_b8.ArrayMax = 7;
  local_b8.AllocatorInstance.SecondaryData = (ForElementType<FVertexInputStream>)0x0;
  local_b8.ArrayNum = 0;
  FVertexFactory::GetStreams(this_00,this->FeatureLevel,Default,&local_b8);
  if (param_6->ShaderContent != (FMeshMaterialShader *)0x0) {
    local_204 = 0;
    uVar14 = (ulonglong)(local_158.ShaderBindings.ShaderFrequencyBits & 0x1ff) -
             ((ulonglong)((local_158.ShaderBindings.ShaderFrequencyBits & 0x1ff) >> 1) &
             0x5555555555555555);
    uVar14 = (uVar14 >> 2 & 0x3333333333333333) + (uVar14 & 0x3333333333333333);
    local_1fc = (uint)(byte)((uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                            0x38);
    uVar14 = (ulonglong)local_1fc - 1;
    local_1fc = local_1fc - 1;
    uVar24 = uVar19;
    local_1d8 = uVar14;
    if (0 < (longlong)uVar14) {
      do {
        iVar20 = 0;
        uVar23 = (uint)uVar19;
        uVar17 = 0;
        if ((int)uVar23 < local_158.ShaderBindings.ShaderLayouts.ArrayNum) {
          uVar17 = ~uVar23 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar15 = (ForElementType<FMeshDrawShaderBindingsLayout>)&local_158;
        if (local_158.ShaderBindings.ShaderLayouts.AllocatorInstance.SecondaryData !=
            (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
          FVar15 = local_158.ShaderBindings.ShaderLayouts.AllocatorInstance.SecondaryData;
        }
        lVar12 = *(longlong *)((longlong)FVar15 + uVar24 * 8);
        iVar1 = *(int *)(lVar12 + 0x28);
        iVar10 = iVar1 + 7;
        if (iVar10 < 0) {
          iVar10 = iVar1 + 0xe;
        }
        uVar19 = *(ulonglong *)(lVar12 + 0x30);
        iVar2 = *(int *)(lVar12 + 0x38);
        local_200 = (iVar10 >> 3) + (*(int *)(lVar12 + 0x18) + *(int *)(lVar12 + 8) + iVar1) * 8;
        lVar11 = (longlong)uVar19 >> 0x18;
        uVar22 = uVar19;
        if ((uVar19 & 1) != 0) {
          uVar19 = lVar12 + 0x30 + lVar11;
          uVar22 = lVar12 + 0x30 + lVar11;
        }
        while( true ) {
          if (*(int *)(lVar12 + 0x38) != iVar2) {
            local_208 = 0;
            `TCheckedPointerIterator<FShaderLooseParameterBufferInfo_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(&local_208);
          }
          uVar14 = local_1d8;
          if (uVar19 == uVar22 + (longlong)iVar2 * 0x18) break;
          iVar20 = iVar20 + (uint)*(ushort *)(uVar19 + 2);
          uVar19 = uVar19 + 0x18;
        }
        uVar19 = (ulonglong)(uVar23 + 1);
        uVar24 = uVar24 + 1;
        local_204 = local_204 + (local_200 + 7 + iVar20 & 0xfffffff8);
      } while ((longlong)uVar24 < (longlong)local_1d8);
      param_5 = local_1e0;
      param_6 = local_1f8;
      param_4 = local_1f0;
      param_1 = (FMeshBatch *)local_1e8;
      if ((local_204 != 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("CheckedDataOffset == DataOffset",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.h"
                             ,0x3dc,
                             L"GetSingleShaderBindings was not called in the order of ShaderFrequencies"
                            ), param_5 = local_1e0, param_6 = local_1f8, param_4 = local_1f0,
         param_1 = (FMeshBatch *)local_1e8, bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    uVar17 = local_1fc;
    if ((int)local_1fc < 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.h"
                         ,0x3e5,L"Invalid shader binding frequency requested");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                         ,0x1a,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_1a0._padding_ = 0x58;
      local_1a0.Data = (uchar *)0x0;
    }
    else {
      uVar18 = ~local_1fc;
      uVar23 = 0;
      if ((int)local_1fc < local_158.ShaderBindings.ShaderLayouts.ArrayNum) {
        uVar23 = uVar18 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar15 = (ForElementType<FMeshDrawShaderBindingsLayout>)&local_158;
      if (local_158.ShaderBindings.ShaderLayouts.AllocatorInstance.SecondaryData !=
          (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
        FVar15 = local_158.ShaderBindings.ShaderLayouts.AllocatorInstance.SecondaryData;
      }
      FMeshDrawShaderBindingsLayout::GetDataSizeBytes
                ((FMeshDrawShaderBindingsLayout *)((longlong)FVar15 + uVar14 * 8));
      local_1a0.Data = (uchar *)&local_158.ShaderBindings.Data;
      if (0x50 < local_158.ShaderBindings.Size) {
        local_1a0.Data = local_158.ShaderBindings.Data.InlineStorage[0];
      }
      uVar23 = 0;
      if ((int)uVar17 < local_158.ShaderBindings.ShaderLayouts.ArrayNum) {
        uVar23 = uVar18 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar15 = (ForElementType<FMeshDrawShaderBindingsLayout>)&local_158;
      if (local_158.ShaderBindings.ShaderLayouts.AllocatorInstance.SecondaryData !=
          (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
        FVar15 = local_158.ShaderBindings.ShaderLayouts.AllocatorInstance.SecondaryData;
      }
      local_1a0._padding_ = *(longlong *)((longlong)FVar15 + uVar14 * 8);
      param_5 = local_1e0;
    }
    this = local_1c0;
    FMeshMaterialShader::GetShaderBindings
              (param_6->ShaderContent,local_1c0->Scene,local_1c0->FeatureLevel,local_1b0,param_4,
               param_5,(FMeshMaterialShaderElementData *)local_1b8,&local_1a0);
  }
  uVar19 = 0;
  iVar20 = *(int *)((longlong)param_1 + 0xa0);
  local_1f0 = (FMaterialRenderProxy *)CONCAT44(local_1f0._4_4_,iVar20);
  local_200 = 0;
  if (0 < iVar20) {
    local_1d8 = 1;
    uVar14 = local_1a8;
    pTVar25 = local_1f8;
    do {
      uVar24 = local_1d8;
      uVar17 = (uint)uVar19;
      if ((uVar14 & local_1d8) != 0) {
        uVar23 = 0;
        if ((int)uVar17 < *(int *)((longlong)param_1 + 0xa0)) {
          uVar23 = ~uVar17 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar16 = (ForElementType<FMeshBatchElement>)param_1;
        if (*(ForElementType<FMeshBatchElement> *)((longlong)param_1 + 0x98) !=
            (ForElementType<FMeshBatchElement>)0x0) {
          FVar16 = *(ForElementType<FMeshBatchElement> *)((longlong)param_1 + 0x98);
        }
        local_178 = (FMeshBatchElement *)(uVar19 * 0x98 + (longlong)FVar16);
        lVar12 = (**(code **)((longlong)*this->CommandContext + 8))(this->CommandContext,&local_158)
        ;
        if (pTVar25->ShaderContent != (FMeshMaterialShader *)0x0) {
          uVar23 = 0;
          uVar17 = *(ushort *)(lVar12 + 0x70) & 0x1ff;
          local_204 = 0;
          uVar19 = (ulonglong)uVar17 - ((ulonglong)(uVar17 >> 1) & 0x5555555555555555);
          uVar19 = (uVar19 >> 2 & 0x3333333333333333) + (uVar19 & 0x3333333333333333);
          uVar14 = ((uVar19 >> 4) + uVar19 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          uVar19 = uVar14 >> 0x38;
          uVar17 = (byte)(uVar14 >> 0x38) - 1;
          local_180 = uVar19;
          if (0 < (int)uVar17) {
            local_1d0 = 0;
            local_1c8 = 0;
            do {
              lVar11 = local_1c8;
              iVar20 = 0;
              uVar17 = 0;
              if ((int)uVar23 < *(int *)(lVar12 + 0x18)) {
                uVar17 = ~uVar23 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              lVar13 = lVar12;
              if (*(longlong *)(lVar12 + 0x10) != 0) {
                lVar13 = *(longlong *)(lVar12 + 0x10);
              }
              lVar11 = *(longlong *)(lVar11 + lVar13);
              iVar1 = *(int *)(lVar11 + 0x28);
              iVar10 = iVar1 + 7;
              if (iVar10 < 0) {
                iVar10 = iVar1 + 0xe;
              }
              uVar14 = *(ulonglong *)(lVar11 + 0x30);
              iVar2 = *(int *)(lVar11 + 0x38);
              local_1fc = (iVar10 >> 3) +
                          (*(int *)(lVar11 + 0x18) + *(int *)(lVar11 + 8) + iVar1) * 8;
              lVar13 = (longlong)uVar14 >> 0x18;
              uVar24 = uVar14;
              if ((uVar14 & 1) != 0) {
                uVar14 = lVar13 + 0x30 + lVar11;
                uVar24 = lVar13 + 0x30 + lVar11;
              }
              while( true ) {
                if (*(int *)(lVar11 + 0x38) != iVar2) {
                  local_207[0] = 0;
                  `TCheckedPointerIterator<FShaderLooseParameterBufferInfo_const_,int,0>::
                  operator!='::__l2::<lambda_1>::operator()(local_207);
                }
                uVar19 = local_180;
                if (uVar24 == uVar14 + (longlong)iVar2 * 0x18) break;
                iVar20 = iVar20 + (uint)*(ushort *)(uVar24 + 2);
                uVar24 = uVar24 + 0x18;
              }
              uVar23 = uVar23 + 1;
              local_1d0 = local_1d0 + 1;
              local_1c8 = local_1c8 + 8;
              local_204 = local_204 + (local_1fc + 7 + iVar20 & 0xfffffff8);
              uVar17 = (int)local_180 - 1;
            } while ((int)uVar23 < (int)uVar17);
            if ((local_204 != 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("CheckedDataOffset == DataOffset",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.h"
                                   ,0x3dc,
                                   L"GetSingleShaderBindings was not called in the order of ShaderFrequencies"
                                  ), bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          if ((int)uVar17 < 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.h"
                               ,0x3e5,L"Invalid shader binding frequency requested");
            if (bVar8) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Shader.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                               ,0x1a,L"");
            if (bVar8) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_190._padding_ = 0x58;
            local_190.Data = (uchar *)0x0;
          }
          else {
            uVar23 = 0;
            if ((int)uVar17 < *(int *)(lVar12 + 0x18)) {
              uVar23 = ~uVar17 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar11 = lVar12;
            if (*(longlong *)(lVar12 + 0x10) != 0) {
              lVar11 = *(longlong *)(lVar12 + 0x10);
            }
            FMeshDrawShaderBindingsLayout::GetDataSizeBytes
                      ((FMeshDrawShaderBindingsLayout *)(lVar11 + (uVar19 & 0xffffffff) * 8 + -8));
            plVar21 = (longlong *)(lVar12 + 0x20);
            if (0x50 < *(ushort *)(lVar12 + 0x72)) {
              plVar21 = (longlong *)*plVar21;
            }
            uVar23 = 0;
            if ((int)uVar17 < *(int *)(lVar12 + 0x18)) {
              uVar23 = ~uVar17 >> 0x1f;
            }
            if ((uVar23 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar11 = lVar12;
            if (*(longlong *)(lVar12 + 0x10) != 0) {
              lVar11 = *(longlong *)(lVar12 + 0x10);
            }
            local_190._padding_ = *(longlong *)(lVar11 + ((uVar19 & 0xffffffff) - 1) * 8);
            local_190.Data = (uchar *)plVar21;
          }
          this = local_1c0;
          pFVar4 = local_1c0->ViewIfDynamicMeshCommand;
          pFVar5 = local_1f8->ShaderMap;
          pFVar6 = local_1c0->Scene;
          this_01 = local_1f8->ShaderContent;
          FVar3.FeatureLevel = local_1c0->FeatureLevel;
          if ((pFVar5->PointerTable == (FShaderMapPointerTable *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("PointerTable",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                 ,0x9b4,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          FMeshMaterialShader::GetElementShaderBindings
                    (this_01,pFVar5->PointerTable,pFVar6,pFVar4,local_170,Default,FVar3,local_1b0,
                     (FMeshBatch *)local_1e8,local_178,(FMeshMaterialShaderElementData *)local_1b8,
                     &local_190,&local_b8);
          if (((*(short *)(lVar12 + 0x8c) == -1) && (*(short *)(lVar12 + 0x8e) == -1)) &&
             (*(short *)(lVar12 + 0x90) == -1)) {
            bVar9 = 2;
          }
          else {
            bVar9 = 0;
          }
          *(byte *)(lVar12 + 0x8a) = *(byte *)(lVar12 + 0x8a) & 0xfd;
          *(byte *)(lVar12 + 0x8a) = *(byte *)(lVar12 + 0x8a) | bVar9;
          uVar24 = local_1d8;
          pTVar25 = local_1f8;
          param_1 = (FMeshBatch *)local_1e8;
          iVar20 = (int)local_1f0;
          uVar17 = local_200;
        }
        *(uint *)(lVar12 + 0x84) = *(int *)((longlong)param_1 + 0xcc) + uVar17;
        bVar8 = FMeshBatch::IsTranslucent(param_1,local_1e0->FeatureLevel);
        *(byte *)(lVar12 + 0x89) = *(byte *)(lVar12 + 0x89) & 0xdf;
        *(byte *)(lVar12 + 0x89) = *(byte *)(lVar12 + 0x89) | bVar8 << 5;
        (**(code **)((longlong)*this->CommandContext + 0x10))(this->CommandContext,lVar12);
        uVar14 = local_1a8;
      }
      local_200 = uVar17 + 1;
      uVar19 = (ulonglong)local_200;
      local_1d8 = uVar24 << 1 | (ulonglong)((longlong)uVar24 < 0);
    } while ((int)local_200 < iVar20);
  }
  if (local_b8.AllocatorInstance.SecondaryData != (ForElementType<FVertexInputStream>)0x0) {
    FMemory::Free((void *)local_b8.AllocatorInstance.SecondaryData);
  }
  FMeshDrawShaderBindings::~FMeshDrawShaderBindings(&local_158.ShaderBindings);
  return;
}

// ProcessPathTracing @ 1450e6650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EBlendMode": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FRayTracingMeshProcessor::ProcessPathTracing
          (FRayTracingMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,FMaterialRenderProxy *param_4,FMaterial *param_5)

{
  byte bVar1;
  code *pcVar2;
  TConsoleVariableData<bool> *pTVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  EBlendMode EVar9;
  FShaderType *pFVar10;
  longlong lVar11;
  FVertexFactoryType *pFVar12;
  undefined1 auStackY_1c8 [32];
  TShaderRefBase<FMeshMaterialShader,FShaderMapPointerTable> local_180;
  TBasePassShaderElementData<FUniformLightMapPolicy> local_170;
  FMaterialShaders local_158;
  FMaterialShaderTypes local_e8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_e8.PipelineType = (FShaderPipelineType *)0x0;
  local_e8.ShaderType[0] = (FShaderType *)0x0;
  local_e8.ShaderType[1] = (FShaderType *)0x0;
  local_e8.ShaderType[2] = (FShaderType *)0x0;
  local_e8.ShaderType[3] = (FShaderType *)0x0;
  local_e8.ShaderType[4] = (FShaderType *)0x0;
  local_e8.ShaderType[5] = (FShaderType *)0x0;
  local_e8.ShaderType[6] = (FShaderType *)0x0;
  local_e8.ShaderType[7] = (FShaderType *)0x0;
  local_e8.ShaderType[8] = (FShaderType *)0x0;
  local_e8.ShaderType[9] = (FShaderType *)0x0;
  local_e8.ShaderType[10] = (FShaderType *)0x0;
  local_e8.ShaderType[0xb] = (FShaderType *)0x0;
  local_e8.PermutationId[0] = 0;
  local_e8.PermutationId[1] = 0;
  local_e8.PermutationId[2] = 0;
  local_e8.PermutationId[3] = 0;
  local_e8.PermutationId[4] = 0;
  local_e8.PermutationId[5] = 0;
  local_e8.PermutationId[6] = 0;
  local_e8.PermutationId[7] = 0;
  local_e8.PermutationId[8] = 0;
  local_e8.PermutationId[9] = 0;
  local_e8.PermutationId[10] = 0;
  local_e8.PermutationId[0xb] = 0;
  iVar8 = (**(code **)(param_5->_padding_ + 0x40))(param_5);
  if (iVar8 == 1) {
    EVar9 = (**(code **)(param_5->_padding_ + 0x268))(param_5);
    pFVar10 = GetRayTracingDecalMaterialShaderType(EVar9);
    goto LAB_1450e6829;
  }
  lVar11 = (**(code **)(param_1->VertexFactory->_padding_ + 0x30))();
  if (((*(uint *)(lVar11 + 0x38) & 0x800) == 0) ||
     (bVar6 = FGenericDataDrivenShaderPlatformInfo::GetSupportsRayTracingProceduralPrimitive
                        ((FStaticShaderPlatform)GMaxRHIShaderPlatform), !bVar6)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (this->RayTracingType != PathTracing) {
    if (this->RayTracingType != LightMapTracing) {
      return false;
    }
    EVar9 = (**(code **)(param_5->_padding_ + 0x268))(param_5);
    bVar6 = NeedsAnyHitShader(EVar9);
    if (bVar6) {
      pFVar10 = (FShaderType *)TPathTracingMaterial<1,0,1,1>::GetStaticType();
    }
    else {
      pFVar10 = (FShaderType *)TPathTracingMaterial<0,0,1,1>::GetStaticType();
    }
    goto LAB_1450e6829;
  }
  bVar4 = Substrate::IsSubstrateEnabled();
  pTVar3 = CVarPathTracingSubstrateCompileSimplifiedMaterial.Ref;
  if (bVar4) {
    bVar4 = IsInParallelRenderingThread();
    if ((!bVar4) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007955>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6d3,"IsInParallelRenderingThread()"), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
    if ((pTVar3->ShadowedValue[1] == false) ||
       (bVar4 = TAutoConsoleVariable<bool>::GetValueOnRenderThread
                          (&CVarPathTracingSubstrateUseSimplifiedMaterial), !bVar4))
    goto LAB_1450e67bf;
    bVar4 = true;
  }
  else {
LAB_1450e67bf:
    bVar4 = false;
  }
  EVar9 = (**(code **)(param_5->_padding_ + 0x268))(param_5);
  bVar5 = NeedsAnyHitShader(EVar9);
  if (bVar5) {
    if (bVar4) {
      if (bVar6) {
        pFVar10 = (FShaderType *)TPathTracingMaterial<1,1,0,1>::GetStaticType();
      }
      else {
        pFVar10 = (FShaderType *)TPathTracingMaterial<1,0,0,1>::GetStaticType();
      }
    }
    else if (bVar6) {
      pFVar10 = (FShaderType *)TPathTracingMaterial<1,1,0,0>::GetStaticType();
    }
    else {
      pFVar10 = (FShaderType *)TPathTracingMaterial<1,0,0,0>::GetStaticType();
    }
  }
  else if (bVar4) {
    if (bVar6) {
      pFVar10 = (FShaderType *)TPathTracingMaterial<0,1,0,1>::GetStaticType();
    }
    else {
      pFVar10 = (FShaderType *)TPathTracingMaterial<0,0,0,1>::GetStaticType();
    }
  }
  else if (bVar6) {
    pFVar10 = (FShaderType *)TPathTracingMaterial<0,1,0,0>::GetStaticType();
  }
  else {
    pFVar10 = (FShaderType *)TPathTracingMaterial<0,0,0,0>::GetStaticType();
  }
LAB_1450e6829:
  bVar1 = (byte)pFVar10->Frequency;
  if ((local_e8.ShaderType[bVar1] != (FShaderType *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderType[Frequency] == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MaterialShaderType.h"
                         ,0xd0,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    uVar7 = (*pcVar2)();
    return (bool)uVar7;
  }
  local_e8.ShaderType[bVar1] = pFVar10;
  local_158.ShaderMap = (FShaderMapBase *)0x0;
  local_158.Pipeline = (FShaderPipeline *)0x0;
  local_158.Shaders[0] = (FShader *)0x0;
  local_158.Shaders[1] = (FShader *)0x0;
  local_e8.PermutationId[bVar1] = 0;
  local_158.Shaders[2] = (FShader *)0x0;
  local_158.Shaders[3] = (FShader *)0x0;
  local_158.Shaders[4] = (FShader *)0x0;
  local_158.Shaders[5] = (FShader *)0x0;
  local_158.Shaders[6] = (FShader *)0x0;
  local_158.Shaders[7] = (FShader *)0x0;
  local_158.Shaders[8] = (FShader *)0x0;
  local_158.Shaders[9] = (FShader *)0x0;
  local_158.Shaders[10] = (FShader *)0x0;
  local_158.Shaders[0xb] = (FShader *)0x0;
  pFVar12 = (FVertexFactoryType *)(**(code **)(param_1->VertexFactory->_padding_ + 0x30))();
  bVar6 = FMaterial::TryGetShaders(param_5,&local_e8,pFVar12,&local_158);
  if ((bVar6) && ((FMeshMaterialShader *)local_158.Shaders[8] != (FMeshMaterialShader *)0x0)) {
    local_180.ShaderContent = (FMeshMaterialShader *)local_158.Shaders[8];
    local_180.ShaderMap = local_158.ShaderMap;
    local_170._padding_ = 0;
    local_170._padding_ = 0;
    local_170.LightMapPolicyElementData = (FLightCacheInterface *)0x0;
    FMeshMaterialShaderElementData::InitializeMeshMaterialData
              ((FMeshMaterialShaderElementData *)&local_170,this->ViewIfDynamicMeshCommand,param_3,
               param_1,-1,true);
    BuildRayTracingMeshCommands<FMeshMaterialShader,TBasePassShaderElementData<FUniformLightMapPolicy>_>
              (this,param_1,param_2,param_3,param_4,param_5,&local_180,&local_170);
    return true;
  }
  return false;
}

// BuildRayTracingMeshCommands<FMaterialCHS,TBasePassShaderElementData<FUniformLightMapPolicy>_> @ 145358a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
FRayTracingMeshProcessor::
BuildRayTracingMeshCommands<FMaterialCHS,TBasePassShaderElementData<FUniformLightMapPolicy>_>
          (FRayTracingMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,FMaterialRenderProxy *param_4,FMaterial *param_5,
          TShaderRefBase<FMaterialCHS,FShaderMapPointerTable> *param_6,
          TBasePassShaderElementData<FUniformLightMapPolicy> *param_7)

{
  int iVar1;
  int iVar2;
  FGenericStaticFeatureLevel FVar3;
  FVertexFactory *this_00;
  FMaterialCHS *pFVar4;
  FShaderMapBase *pFVar5;
  FSceneView *pFVar6;
  FScene *pFVar7;
  code *pcVar8;
  TBasePassShaderElementData<FUniformLightMapPolicy> *pTVar9;
  bool bVar10;
  byte bVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  ForElementType<FMeshDrawShaderBindingsLayout> FVar17;
  ForElementType<FMeshBatchElement> FVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  int iVar22;
  longlong *plVar23;
  ulonglong uVar24;
  FUniformLightMapPolicyShaderParametersType *pFVar25;
  uint uVar26;
  ulonglong uVar27;
  TShaderRefBase<FMaterialCHS,FShaderMapPointerTable> *pTVar28;
  undefined1 auStackY_278 [32];
  undefined1 local_208;
  undefined1 local_207 [3];
  int local_204;
  uint local_200;
  uint local_1fc;
  TShaderRefBase<FMaterialCHS,FShaderMapPointerTable> *local_1f8;
  FMaterialRenderProxy *local_1f0;
  FPrimitiveSceneProxy *local_1e8;
  ForElementType<FMeshBatchElement> local_1e0;
  ulonglong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  FRayTracingMeshProcessor *local_1c0;
  TBasePassShaderElementData<FUniformLightMapPolicy> *local_1b8;
  FMaterial *local_1b0;
  ulonglong local_1a8;
  FMeshDrawSingleShaderBindings local_1a0;
  FMeshDrawSingleShaderBindings local_190;
  ulonglong local_180;
  FMeshBatchElement *local_178;
  FVertexFactory *local_170;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_168;
  FRayTracingMeshCommand local_158;
  TArray<FVertexInputStream,TSizedInlineAllocator<7,32,TSizedDefaultAllocator<32>_>_> local_b8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_278;
  this_00 = param_1->VertexFactory;
  local_1f8 = param_6;
  local_1f0 = param_4;
  local_1b0 = param_5;
  local_1b8 = param_7;
  local_1e8 = param_3;
  local_1e0 = (ForElementType<FMeshBatchElement>)param_1;
  local_1c0 = this;
  local_1a8 = param_2;
  local_170 = this_00;
  if (((param_4->ImmutableSamplerState).ImmutableSamplers.Elements[0] != (FRHISamplerState *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("MaterialRenderProxy.ImmutableSamplerState.ImmutableSamplers[0] == nullptr"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingMaterialHitShaders.h"
                          ,0x3d,
                          L"Immutable samplers not yet supported in Mesh Draw Command pipeline"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_158.bCanBeCached = false;
  local_158.bNaniteRayTracing = false;
  local_158.ShaderBindings.ShaderLayouts.ArrayMax = 2;
  local_158.ShaderBindings.ShaderLayouts.AllocatorInstance.SecondaryData =
       (ForElementType<FMeshDrawShaderBindingsLayout>)0x0;
  local_158.ShaderBindings.ShaderLayouts.ArrayNum = 0;
  local_158.ShaderBindings.ShaderFrequencyBits = 0;
  local_158.ShaderBindings.Size = 0;
  local_158.MaterialShader = (FRHIRayTracingShader *)0x0;
  local_158.MaterialShaderIndex = 0xffffffff;
  local_158.GeometrySegmentIndex = 0xffffffff;
  local_158.NaniteUniformBufferParameter.BaseIndex = 0xffff;
  local_158.ShaderBindings.Data.InlineStorage[0] = (uchar *)0x0;
  local_158.ShaderBindings.Data.InlineStorage[1] = (uchar *)0x0;
  local_158.InstanceMask = 0xff;
  local_158._137_1_ = 3;
  local_158.ShaderBindings.Data.InlineStorage[2] = (uchar *)0x0;
  local_158.ShaderBindings.Data.InlineStorage[3] = (uchar *)0x0;
  local_158.ViewUniformBufferParameter.BaseIndex = 0xffff;
  local_158.SceneUniformBufferParameter.BaseIndex = 0xffff;
  local_158.ShaderBindings.Data.InlineStorage[4] = (uchar *)0x0;
  local_158.ShaderBindings.Data.InlineStorage[5] = (uchar *)0x0;
  local_158.ShaderBindings.Data.InlineStorage[6] = (uchar *)0x0;
  local_158.ShaderBindings.Data.InlineStorage[7] = (uchar *)0x0;
  local_158.ShaderBindings.Data.InlineStorage[8] = (uchar *)0x0;
  local_158.ShaderBindings.Data.InlineStorage[9] = (uchar *)0x0;
  SetupRayTracingMeshCommandMaskAndStatus(&local_158,param_1,param_3,param_5,this->RayTracingType);
  if (GRHIGlobals.RayTracing.SupportsShaders != false) {
    local_168.ShaderContent = (FShader *)param_6->ShaderContent;
    local_168.ShaderMap = param_6->ShaderMap;
    FRayTracingMeshCommand::SetShader(&local_158,&local_168);
  }
  uVar21 = 0;
  local_b8.ArrayMax = 7;
  local_b8.AllocatorInstance.SecondaryData = (ForElementType<FVertexInputStream>)0x0;
  local_b8.ArrayNum = 0;
  FVertexFactory::GetStreams(this_00,this->FeatureLevel,Default,&local_b8);
  if (param_6->ShaderContent != (FMaterialCHS *)0x0) {
    local_204 = 0;
    uVar16 = (ulonglong)(local_158.ShaderBindings.ShaderFrequencyBits & 0x1ff) -
             ((ulonglong)((local_158.ShaderBindings.ShaderFrequencyBits & 0x1ff) >> 1) &
             0x5555555555555555);
    uVar16 = (uVar16 >> 2 & 0x3333333333333333) + (uVar16 & 0x3333333333333333);
    local_1fc = (uint)(byte)((uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                            0x38);
    uVar16 = (ulonglong)local_1fc - 1;
    local_1fc = local_1fc - 1;
    uVar27 = uVar21;
    local_1d8 = uVar16;
    if (0 < (longlong)uVar16) {
      do {
        iVar22 = 0;
        uVar26 = (uint)uVar21;
        uVar19 = 0;
        if ((int)uVar26 < local_158.ShaderBindings.ShaderLayouts.ArrayNum) {
          uVar19 = ~uVar26 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar17 = (ForElementType<FMeshDrawShaderBindingsLayout>)&local_158;
        if (local_158.ShaderBindings.ShaderLayouts.AllocatorInstance.SecondaryData !=
            (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
          FVar17 = local_158.ShaderBindings.ShaderLayouts.AllocatorInstance.SecondaryData;
        }
        lVar14 = *(longlong *)((longlong)FVar17 + uVar27 * 8);
        iVar1 = *(int *)(lVar14 + 0x28);
        iVar12 = iVar1 + 7;
        if (iVar12 < 0) {
          iVar12 = iVar1 + 0xe;
        }
        uVar21 = *(ulonglong *)(lVar14 + 0x30);
        iVar2 = *(int *)(lVar14 + 0x38);
        local_200 = (iVar12 >> 3) + (*(int *)(lVar14 + 0x18) + *(int *)(lVar14 + 8) + iVar1) * 8;
        lVar13 = (longlong)uVar21 >> 0x18;
        uVar24 = uVar21;
        if ((uVar21 & 1) != 0) {
          uVar21 = lVar14 + 0x30 + lVar13;
          uVar24 = lVar14 + 0x30 + lVar13;
        }
        while( true ) {
          if (*(int *)(lVar14 + 0x38) != iVar2) {
            local_208 = 0;
            `TCheckedPointerIterator<FShaderLooseParameterBufferInfo_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(&local_208);
          }
          uVar16 = local_1d8;
          if (uVar21 == uVar24 + (longlong)iVar2 * 0x18) break;
          iVar22 = iVar22 + (uint)*(ushort *)(uVar21 + 2);
          uVar21 = uVar21 + 0x18;
        }
        uVar21 = (ulonglong)(uVar26 + 1);
        uVar27 = uVar27 + 1;
        local_204 = local_204 + (local_200 + 7 + iVar22 & 0xfffffff8);
      } while ((longlong)uVar27 < (longlong)local_1d8);
      param_3 = local_1e8;
      param_6 = local_1f8;
      param_4 = local_1f0;
      param_1 = (FMeshBatch *)local_1e0;
      if ((local_204 != 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("CheckedDataOffset == DataOffset",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.h"
                              ,0x3dc,
                              L"GetSingleShaderBindings was not called in the order of ShaderFrequencies"
                             ), param_3 = local_1e8, param_6 = local_1f8, param_4 = local_1f0,
         param_1 = (FMeshBatch *)local_1e0, bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    uVar19 = local_1fc;
    if ((int)local_1fc < 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.h"
                          ,0x3e5,L"Invalid shader binding frequency requested");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Shader.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                          ,0x1a,L"");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_1a0._padding_ = 0x58;
      local_1a0.Data = (uchar *)0x0;
    }
    else {
      uVar20 = ~local_1fc;
      uVar26 = 0;
      if ((int)local_1fc < local_158.ShaderBindings.ShaderLayouts.ArrayNum) {
        uVar26 = uVar20 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FVar17 = (ForElementType<FMeshDrawShaderBindingsLayout>)&local_158;
      if (local_158.ShaderBindings.ShaderLayouts.AllocatorInstance.SecondaryData !=
          (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
        FVar17 = local_158.ShaderBindings.ShaderLayouts.AllocatorInstance.SecondaryData;
      }
      FMeshDrawShaderBindingsLayout::GetDataSizeBytes
                ((FMeshDrawShaderBindingsLayout *)((longlong)FVar17 + uVar16 * 8));
      local_1a0.Data = (uchar *)&local_158.ShaderBindings.Data;
      if (0x50 < local_158.ShaderBindings.Size) {
        local_1a0.Data = local_158.ShaderBindings.Data.InlineStorage[0];
      }
      uVar26 = 0;
      if ((int)uVar19 < local_158.ShaderBindings.ShaderLayouts.ArrayNum) {
        uVar26 = uVar20 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FVar17 = (ForElementType<FMeshDrawShaderBindingsLayout>)&local_158;
      if (local_158.ShaderBindings.ShaderLayouts.AllocatorInstance.SecondaryData !=
          (ForElementType<FMeshDrawShaderBindingsLayout>)0x0) {
        FVar17 = local_158.ShaderBindings.ShaderLayouts.AllocatorInstance.SecondaryData;
      }
      local_1a0._padding_ = *(longlong *)((longlong)FVar17 + uVar16 * 8);
      param_3 = local_1e8;
    }
    pTVar9 = local_1b8;
    this = local_1c0;
    pFVar4 = param_6->ShaderContent;
    FMeshMaterialShader::GetShaderBindings
              ((FMeshMaterialShader *)pFVar4,local_1c0->Scene,local_1c0->FeatureLevel,param_3,
               param_4,local_1b0,(FMeshMaterialShaderElementData *)local_1b8,&local_1a0);
    pFVar25 = (FUniformLightMapPolicyShaderParametersType *)&pFVar4->field_0x108;
    if (pFVar4 == (FMaterialCHS *)0x0) {
      pFVar25 = (FUniformLightMapPolicyShaderParametersType *)0x0;
    }
    FUniformLightMapPolicy::GetPixelShaderBindings
              (param_3,&pTVar9->LightMapPolicyElementData,pFVar25,&local_1a0);
  }
  uVar21 = 0;
  iVar22 = *(int *)((longlong)param_1 + 0xa0);
  local_1f0 = (FMaterialRenderProxy *)CONCAT44(local_1f0._4_4_,iVar22);
  local_200 = 0;
  if (0 < iVar22) {
    local_1d8 = 1;
    uVar16 = local_1a8;
    pTVar28 = local_1f8;
    do {
      uVar27 = local_1d8;
      uVar19 = (uint)uVar21;
      if ((uVar16 & local_1d8) != 0) {
        uVar26 = 0;
        if ((int)uVar19 < *(int *)((longlong)param_1 + 0xa0)) {
          uVar26 = ~uVar19 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar18 = (ForElementType<FMeshBatchElement>)param_1;
        if (*(ForElementType<FMeshBatchElement> *)((longlong)param_1 + 0x98) !=
            (ForElementType<FMeshBatchElement>)0x0) {
          FVar18 = *(ForElementType<FMeshBatchElement> *)((longlong)param_1 + 0x98);
        }
        local_178 = (FMeshBatchElement *)(uVar21 * 0x98 + (longlong)FVar18);
        lVar14 = (**(code **)((longlong)*this->CommandContext + 8))(this->CommandContext,&local_158)
        ;
        if (pTVar28->ShaderContent != (FMaterialCHS *)0x0) {
          uVar26 = 0;
          uVar19 = *(ushort *)(lVar14 + 0x70) & 0x1ff;
          local_204 = 0;
          uVar21 = (ulonglong)uVar19 - ((ulonglong)(uVar19 >> 1) & 0x5555555555555555);
          uVar21 = (uVar21 >> 2 & 0x3333333333333333) + (uVar21 & 0x3333333333333333);
          uVar16 = ((uVar21 >> 4) + uVar21 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          uVar21 = uVar16 >> 0x38;
          uVar19 = (byte)(uVar16 >> 0x38) - 1;
          local_180 = uVar21;
          if (0 < (int)uVar19) {
            local_1d0 = 0;
            local_1c8 = 0;
            do {
              lVar13 = local_1c8;
              iVar22 = 0;
              uVar19 = 0;
              if ((int)uVar26 < *(int *)(lVar14 + 0x18)) {
                uVar19 = ~uVar26 >> 0x1f;
              }
              if ((uVar19 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              lVar15 = lVar14;
              if (*(longlong *)(lVar14 + 0x10) != 0) {
                lVar15 = *(longlong *)(lVar14 + 0x10);
              }
              lVar13 = *(longlong *)(lVar13 + lVar15);
              iVar1 = *(int *)(lVar13 + 0x28);
              iVar12 = iVar1 + 7;
              if (iVar12 < 0) {
                iVar12 = iVar1 + 0xe;
              }
              uVar16 = *(ulonglong *)(lVar13 + 0x30);
              iVar2 = *(int *)(lVar13 + 0x38);
              local_1fc = (iVar12 >> 3) +
                          (*(int *)(lVar13 + 0x18) + *(int *)(lVar13 + 8) + iVar1) * 8;
              lVar15 = (longlong)uVar16 >> 0x18;
              uVar27 = uVar16;
              if ((uVar16 & 1) != 0) {
                uVar16 = lVar15 + 0x30 + lVar13;
                uVar27 = lVar15 + 0x30 + lVar13;
              }
              while( true ) {
                if (*(int *)(lVar13 + 0x38) != iVar2) {
                  local_207[0] = 0;
                  `TCheckedPointerIterator<FShaderLooseParameterBufferInfo_const_,int,0>::
                  operator!='::__l2::<lambda_1>::operator()(local_207);
                }
                uVar21 = local_180;
                if (uVar27 == uVar16 + (longlong)iVar2 * 0x18) break;
                iVar22 = iVar22 + (uint)*(ushort *)(uVar27 + 2);
                uVar27 = uVar27 + 0x18;
              }
              uVar26 = uVar26 + 1;
              local_1d0 = local_1d0 + 1;
              local_1c8 = local_1c8 + 8;
              local_204 = local_204 + (local_1fc + 7 + iVar22 & 0xfffffff8);
              uVar19 = (int)local_180 - 1;
            } while ((int)uVar26 < (int)uVar19);
            if ((local_204 != 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("CheckedDataOffset == DataOffset",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.h"
                                    ,0x3dc,
                                    L"GetSingleShaderBindings was not called in the order of ShaderFrequencies"
                                   ), bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          if ((int)uVar19 < 0) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshPassProcessor.h"
                                ,0x3e5,L"Invalid shader binding frequency requested");
            if (bVar10) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Shader.IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Public\\MeshDrawShaderBindings.h"
                                ,0x1a,L"");
            if (bVar10) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            local_190._padding_ = 0x58;
            local_190.Data = (uchar *)0x0;
          }
          else {
            uVar26 = 0;
            if ((int)uVar19 < *(int *)(lVar14 + 0x18)) {
              uVar26 = ~uVar19 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            lVar13 = lVar14;
            if (*(longlong *)(lVar14 + 0x10) != 0) {
              lVar13 = *(longlong *)(lVar14 + 0x10);
            }
            FMeshDrawShaderBindingsLayout::GetDataSizeBytes
                      ((FMeshDrawShaderBindingsLayout *)(lVar13 + (uVar21 & 0xffffffff) * 8 + -8));
            plVar23 = (longlong *)(lVar14 + 0x20);
            if (0x50 < *(ushort *)(lVar14 + 0x72)) {
              plVar23 = (longlong *)*plVar23;
            }
            uVar26 = 0;
            if ((int)uVar19 < *(int *)(lVar14 + 0x18)) {
              uVar26 = ~uVar19 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            lVar13 = lVar14;
            if (*(longlong *)(lVar14 + 0x10) != 0) {
              lVar13 = *(longlong *)(lVar14 + 0x10);
            }
            local_190._padding_ = *(longlong *)(lVar13 + ((uVar21 & 0xffffffff) - 1) * 8);
            local_190.Data = (uchar *)plVar23;
          }
          this = local_1c0;
          FVar3.FeatureLevel = local_1c0->FeatureLevel;
          pFVar5 = local_1f8->ShaderMap;
          pFVar6 = local_1c0->ViewIfDynamicMeshCommand;
          pFVar7 = local_1c0->Scene;
          pFVar4 = local_1f8->ShaderContent;
          if ((pFVar5->PointerTable == (FShaderMapPointerTable *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("PointerTable",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                  ,0x9b4,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          FMeshMaterialShader::GetElementShaderBindings
                    ((FMeshMaterialShader *)pFVar4,pFVar5->PointerTable,pFVar7,pFVar6,local_170,
                     Default,FVar3,local_1e8,(FMeshBatch *)local_1e0,local_178,
                     (FMeshMaterialShaderElementData *)local_1b8,&local_190,&local_b8);
          if (((*(short *)(lVar14 + 0x8c) == -1) && (*(short *)(lVar14 + 0x8e) == -1)) &&
             (*(short *)(lVar14 + 0x90) == -1)) {
            bVar11 = 2;
          }
          else {
            bVar11 = 0;
          }
          *(byte *)(lVar14 + 0x8a) = *(byte *)(lVar14 + 0x8a) & 0xfd;
          *(byte *)(lVar14 + 0x8a) = *(byte *)(lVar14 + 0x8a) | bVar11;
          uVar27 = local_1d8;
          pTVar28 = local_1f8;
          param_1 = (FMeshBatch *)local_1e0;
          iVar22 = (int)local_1f0;
          uVar19 = local_200;
        }
        *(uint *)(lVar14 + 0x84) = *(int *)((longlong)param_1 + 0xcc) + uVar19;
        bVar10 = FMeshBatch::IsTranslucent(param_1,local_1b0->FeatureLevel);
        *(byte *)(lVar14 + 0x89) = *(byte *)(lVar14 + 0x89) & 0xdf;
        *(byte *)(lVar14 + 0x89) = *(byte *)(lVar14 + 0x89) | bVar10 << 5;
        (**(code **)((longlong)*this->CommandContext + 0x10))(this->CommandContext,lVar14);
        uVar16 = local_1a8;
      }
      local_200 = uVar19 + 1;
      uVar21 = (ulonglong)local_200;
      local_1d8 = uVar27 << 1 | (ulonglong)((longlong)uVar27 < 0);
    } while ((int)local_200 < iVar22);
  }
  if (local_b8.AllocatorInstance.SecondaryData != (ForElementType<FVertexInputStream>)0x0) {
    FMemory::Free((void *)local_b8.AllocatorInstance.SecondaryData);
  }
  FMeshDrawShaderBindings::~FMeshDrawShaderBindings(&local_158.ShaderBindings);
  return;
}

// FRayTracingMeshProcessor @ 145362d80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRayTracingMeshProcessor * __thiscall
FRayTracingMeshProcessor::FRayTracingMeshProcessor
          (FRayTracingMeshProcessor *this,FRayTracingMeshCommandContext *param_1,FScene *param_2,
          FSceneView *param_3,ERayTracingType param_4)

{
  this->CommandContext = param_1;
  this->Scene = param_2;
  this->ViewIfDynamicMeshCommand = param_3;
  if (param_2 != (FScene *)0x0) {
    this->FeatureLevel = *(Type *)&param_2->field_0x8;
    this->RayTracingType = param_4;
    return this;
  }
  this->FeatureLevel = GMaxRHIFeatureLevel;
  this->RayTracingType = param_4;
  return this;
}

// ~FRayTracingMeshProcessor @ 145363b40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FRayTracingMeshProcessor::~FRayTracingMeshProcessor(FRayTracingMeshProcessor *this)

{
  return;
}

// AddMeshBatch @ 14536b3d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRayTracingMeshProcessor::AddMeshBatch
          (FRayTracingMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3)

{
  bool bVar1;
  longlong lVar2;
  FMaterial *this_00;
  FMaterialShaderMap *pFVar3;
  FMaterialRenderProxy *pFVar4;
  
  if ((param_1->bUseForMaterial != 0) &&
     (lVar2 = (**(code **)(param_1->VertexFactory->_padding_ + 0x30))(),
     (*(uint *)(lVar2 + 0x38) & 0x200) != 0)) {
    pFVar4 = param_1->MaterialRenderProxy;
    while ((pFVar4 != (FMaterialRenderProxy *)0x0 &&
           (((this_00 = (FMaterial *)
                        (**(code **)(pFVar4->_padding_ + 0x30))(pFVar4,this->FeatureLevel),
             this_00 == (FMaterial *)0x0 ||
             (pFVar3 = FMaterial::GetRenderingThreadShaderMap(this_00),
             pFVar3 == (FMaterialShaderMap *)0x0)) ||
            (bVar1 = TryAddMeshBatch(this,param_1,param_2,param_3,-1,pFVar4,this_00), !bVar1))))) {
      pFVar4 = (FMaterialRenderProxy *)
               (**(code **)(pFVar4->_padding_ + 0x38))(pFVar4,this->FeatureLevel);
    }
  }
  return;
}

// Process @ 14539ec50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FRayTracingMeshProcessor::Process
          (FRayTracingMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,FMaterialRenderProxy *param_4,FMaterial *param_5,
          FUniformLightMapPolicy *param_6)

{
  bool bVar1;
  EShaderPlatform EVar2;
  TShaderRefBase<FMaterialCHS,FShaderMapPointerTable> local_38;
  TBasePassShaderElementData<FUniformLightMapPolicy> local_28;
  
  local_38.ShaderContent = (FMaterialCHS *)0x0;
  local_38.ShaderMap = (FShaderMapBase *)0x0;
  if (GRHIGlobals.RayTracing.SupportsShaders) {
    EVar2 = FSceneInterface::GetShaderPlatform((FSceneInterface *)this->Scene);
    bVar1 = GetRayTracingMeshProcessorShaders
                      (param_6,param_1->VertexFactory,param_5,EVar2,&local_38);
    if (!bVar1) {
      return bVar1;
    }
  }
  local_28.LightMapPolicyElementData = param_1->LCI;
  local_28._padding_ = 0;
  local_28._padding_ = 0;
  FMeshMaterialShaderElementData::InitializeMeshMaterialData
            ((FMeshMaterialShaderElementData *)&local_28,this->ViewIfDynamicMeshCommand,param_3,
             param_1,-1,true);
  BuildRayTracingMeshCommands<FMaterialCHS,TBasePassShaderElementData<FUniformLightMapPolicy>_>
            (this,param_1,param_2,param_3,param_4,param_5,&local_38,&local_28);
  return true;
}

// TryAddMeshBatch @ 1453b32e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
FRayTracingMeshProcessor::TryAddMeshBatch
          (FRayTracingMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4,FMaterialRenderProxy *param_5,FMaterial *param_6
          )

{
  uchar uVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  TVector4<float>_u_0 *pTVar5;
  longlong lVar6;
  FShadowMapInteraction *pFVar7;
  IConsoleManager *pIVar8;
  longlong *plVar9;
  TConsoleVariableData<int> *pTVar10;
  byte bVar11;
  undefined1 auStackY_418 [32];
  FUniformLightMapPolicy local_3d8;
  char local_3d4;
  longlong local_3d0;
  TConsoleVariableData<int> *local_3c8;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  ULightMapTexture2D *local_318;
  ULightMapTexture2D *pUStack_310;
  ULightMapTexture2D *local_308;
  longlong lStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  ULightMapTexture2D *local_2b8;
  undefined8 uStack_2b0;
  ULightMapVirtualTexture2D *local_2a8;
  undefined8 uStack_2a0;
  double local_298;
  undefined8 uStack_290;
  double local_288;
  undefined8 uStack_280;
  FShadowMapInteraction local_278;
  TVector4<float>_u_0 local_218;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_168;
  undefined4 local_160;
  FLightMapInteraction local_138;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_418;
  if (((param_3 != (FPrimitiveSceneProxy *)0x0) && (param_3->bRenderInMainPass == '\0')) ||
     (iVar3 = (**(code **)(param_6->_padding_ + 0x40))(param_6), iVar3 == 3)) {
    return true;
  }
  if ((this->RayTracingType == PathTracing) || (this->RayTracingType == LightMapTracing)) {
    bVar2 = ProcessPathTracing(this,param_1,param_2,param_3,param_5,param_6);
    return bVar2;
  }
  pbVar4 = (byte *)(**(code **)(param_6->_padding_ + 0x280))(param_6);
  bVar11 = *pbVar4 & 1;
  local_3d8.IndirectPolicy._0_1_ = FReadOnlyCVARCache::bAllowStaticLighting;
  if (((FReadOnlyCVARCache::bAllowStaticLighting == false) ||
      (param_1->LCI == (FLightCacheInterface *)0x0)) || (bVar11 != 0)) {
    pTVar5 = &local_218;
    local_218._0_8_ = ___xmm_3f800000000000000000000000000000;
    local_218._8_8_ = _UNK_150689648;
    local_208 = ___xmm_3f800000000000000000000000000000;
    uStack_200 = _UNK_150689648;
    local_1f8 = ___xmm_3f800000000000000000000000000000;
    uStack_1f0 = _UNK_150689648;
    local_1e8 = ___xmm_3f800000000000000000000000000000;
    uStack_1e0 = _UNK_150689648;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1b8 = ___xmm_3f800000000000000000000000000000;
    uStack_1b0 = _UNK_150689648;
    local_1a8 = ___xmm_3f800000000000000000000000000000;
    uStack_1a0 = _UNK_150689648;
    local_198 = ___xmm_3f800000000000000000000000000000;
    uStack_190 = _UNK_150689648;
    local_188 = ___xmm_3f800000000000000000000000000000;
    uStack_180 = _UNK_150689648;
    local_1c8 = 0;
    local_178 = 0;
    local_168 = 0;
    local_160 = 0;
  }
  else {
    pTVar5 = (TVector4<float>_u_0 *)
             FLightCacheInterface::GetLightMapInteraction
                       (param_1->LCI,&local_138,this->FeatureLevel);
  }
  local_358 = *(undefined8 *)&((TVector4<float> *)&(pTVar5->_s_0).X)->field0_0x0;
  uStack_350._0_4_ = *(float *)((longlong)pTVar5 + 8);
  uStack_350._4_4_ = *(float *)((longlong)pTVar5 + 0xc);
  local_348 = *(undefined8 *)&(&pTVar5->_s_0)[1].X;
  uStack_340._0_4_ = ((TVector4<float>_u_0_s_0 *)(pTVar5 + 1))->Z;
  uStack_340._4_4_ = ((TVector4<float>_u_0_s_0 *)(pTVar5 + 1))->W;
  local_3d0 = 0x18;
  local_338 = *(undefined8 *)&((TVector4<float> *)(pTVar5->XYZW + 8))->field0_0x0;
  uStack_330 = *(undefined8 *)(pTVar5->XYZW + 10);
  local_328 = *(undefined8 *)&((TVector4<float> *)(pTVar5->XYZW + 0xc))->field0_0x0;
  uStack_320 = *(undefined8 *)(pTVar5->XYZW + 0xe);
  local_318 = *(ULightMapTexture2D **)(pTVar5->XYZW + 0x10);
  pUStack_310 = *(ULightMapTexture2D **)(pTVar5->XYZW + 0x12);
  local_308 = *(ULightMapTexture2D **)(pTVar5->XYZW + 0x14);
  lStack_300 = *(longlong *)(pTVar5->XYZW + 0x16);
  local_2f8 = *(undefined8 *)&((TVector4<float> *)(pTVar5->XYZW + 0x18))->field0_0x0;
  uStack_2f0 = *(undefined8 *)(pTVar5->XYZW + 0x1a);
  local_2d8 = *(undefined8 *)&((TVector4<float> *)(pTVar5->XYZW + 0x20))->field0_0x0;
  uStack_2d0 = *(undefined8 *)(pTVar5->XYZW + 0x22);
  local_2e8 = *(undefined8 *)&((TVector4<float> *)(pTVar5->XYZW + 0x1c))->field0_0x0;
  uStack_2e0 = *(undefined8 *)(pTVar5->XYZW + 0x1e);
  local_2c8 = *(undefined8 *)&((TVector4<float> *)(pTVar5->XYZW + 0x24))->field0_0x0;
  uStack_2c0 = *(undefined8 *)(pTVar5->XYZW + 0x26);
  local_2b8 = *(ULightMapTexture2D **)(pTVar5->XYZW + 0x28);
  uStack_2b0 = *(undefined8 *)(pTVar5->XYZW + 0x2a);
  local_2a8 = *(ULightMapVirtualTexture2D **)(pTVar5->XYZW + 0x2c);
  uStack_2a0 = *(undefined8 *)(pTVar5->XYZW + 0x2e);
  local_298 = (((TVector2<double> *)(pTVar5->XYZW + 0x30))->field0_0x0)._s_0.X;
  uStack_290 = *(undefined8 *)(pTVar5->XYZW + 0x32);
  local_288 = (((TVector2<double> *)(pTVar5->XYZW + 0x34))->field0_0x0)._s_0.X;
  uStack_280 = *(undefined8 *)(pTVar5->XYZW + 0x36);
  bVar2 = AllowHighQualityLightmaps((FGenericStaticFeatureLevel)this->FeatureLevel);
  if (bVar2) {
    local_3d4 = '\x01';
    if ((char)uStack_2b0 == '\0') goto LAB_1453b34c2;
  }
  else {
LAB_1453b34c2:
    local_3d4 = '\0';
  }
  if (this->Scene != (FScene *)0x0) {
    FVolumetricLightmapSceneData::HasData(&this->Scene->VolumetricLightmapSceneData);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar8 = IConsoleManager::Get();
    plVar9 = (longlong *)
             (**(code **)((longlong)*pIVar8 + 0xc0))(pIVar8,L"r.SupportLowQualityLightmaps",1);
    pTVar10 = (TConsoleVariableData<int> *)0x0;
    if (plVar9 != (longlong *)0x0) {
      pTVar10 = (TConsoleVariableData<int> *)(**(code **)(*plVar9 + 0x68))(plVar9);
    }
    CVarSupportLowQualityLightmap = pTVar10;
    _Init_thread_footer(&::_TSS0);
  }
  local_3c8 = CVarSupportLowQualityLightmap;
  if (CVarSupportLowQualityLightmap != (TConsoleVariableData<int> *)0x0) {
    bVar2 = IsInParallelGameThread();
    if ((bVar2) || (bVar2 = IsInGameThread(), bVar2)) {
      lVar6 = 0;
    }
    else {
      lVar6 = 4;
    }
    if (*(int *)((longlong)local_3c8->ShadowedValue + lVar6) == 0) {
      bVar2 = false;
      goto LAB_1453b3540;
    }
  }
  bVar2 = true;
LAB_1453b3540:
  if ((int)uStack_2a0 == 2) {
    if (local_3d4 == '\0') {
      if (bVar2) {
        local_3d8.IndirectPolicy = LMP_LQ_LIGHTMAP;
      }
      else {
        local_3d8.IndirectPolicy = LMP_NO_LIGHTMAP;
      }
    }
    else {
      if ((((undefined1)local_3d8.IndirectPolicy == LMP_NO_LIGHTMAP) ||
          (param_1->LCI == (FLightCacheInterface *)0x0)) || (bVar11 != 0)) {
        local_278.Type = SMIT_None;
        local_278.ShadowTexture = (UShadowMapTexture2D *)0x0;
        local_278.VirtualTexture = (ULightMapVirtualTexture2D *)0x0;
        local_278.InvUniformPenumbraSize.field0_0x0._0_8_ = 0;
        local_278.InvUniformPenumbraSize.field0_0x0._8_8_ = 0;
        pFVar7 = &local_278;
        local_278.bChannelValid[0] = false;
        local_278.bChannelValid[1] = false;
        local_278.bChannelValid[2] = false;
        local_278.bChannelValid[3] = false;
      }
      else {
        pFVar7 = FLightCacheInterface::GetShadowMapInteraction
                           (param_1->LCI,&local_278,
                            *(Type *)((longlong)&this->CommandContext + local_3d0));
      }
      if ((int)*(undefined8 *)&pFVar7->Type == 2) {
        local_3d8.IndirectPolicy = LMP_DISTANCE_FIELD_SHADOWS_AND_HQ_LIGHTMAP;
      }
      else {
        local_3d8.IndirectPolicy = LMP_HQ_LIGHTMAP;
      }
    }
  }
  else if ((((bVar11 == 0) && ((undefined1)local_3d8.IndirectPolicy != LMP_NO_LIGHTMAP)) &&
           ((this->Scene != (FScene *)0x0 &&
            ((bVar2 = FVolumetricLightmapSceneData::HasData
                                (&this->Scene->VolumetricLightmapSceneData), bVar2 &&
             (param_3 != (FPrimitiveSceneProxy *)0x0)))))) &&
          ((uVar1 = (param_3->Mobility).Value, uVar1 == '\x02' ||
           (((uVar1 == '\x01' || (param_3->bNeedsUnbuiltPreviewLighting != '\0')) ||
            (param_3->LightmapType == ForceVolumetric)))))) {
    local_3d8.IndirectPolicy = LMP_PRECOMPUTED_IRRADIANCE_VOLUME_INDIRECT_LIGHTING;
  }
  else {
    local_3d8.IndirectPolicy = LMP_NO_LIGHTMAP;
  }
  bVar2 = Process(this,param_1,param_2,param_3,param_5,param_6,&local_3d8);
  return bVar2;
}

