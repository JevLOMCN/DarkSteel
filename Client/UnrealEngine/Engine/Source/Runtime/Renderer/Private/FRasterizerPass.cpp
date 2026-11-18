// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// CalcSortKey @ 144f84ac0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

uint __thiscall Nanite::FRasterizerPass::CalcSortKey(FRasterizerPass *this)

{
  undefined1 *puVar1;
  uint uVar2;
  FRHIPixelShader *pFVar3;
  FRHIVertexShader *pFVar4;
  FRHIShader *pFVar5;
  FRHIShader *pFVar6;
  FHWRasterizeMS *pFVar7;
  FMicropolyRasterizeCS *pFVar8;
  uint uVar9;
  FRHIShader *pFVar10;
  uint uVar11;
  
  uVar2 = FGlobalResources::GetFixedFunctionBinMask();
  uVar9 = this->RasterBin;
  pFVar6 = (FRHIShader *)0x0;
  uVar11 = 0;
  if (uVar2 < uVar9) {
    pFVar3 = TShaderRefBase<FHWRasterizePS,FShaderMapPointerTable>::GetPixelShader
                       (&this->RasterPixelShader,true);
    pFVar10 = pFVar6;
    if (pFVar3 != (FRHIPixelShader *)0x0) {
      pFVar3 = TShaderRefBase<FHWRasterizePS,FShaderMapPointerTable>::GetPixelShader
                         (&this->RasterPixelShader,true);
      pFVar10 = (FRHIShader *)(ulonglong)*(uint *)&pFVar3->field_0xf0;
    }
    pFVar4 = TShaderRefBase<FHWRasterizeVS,FShaderMapPointerTable>::GetVertexShader
                       (&this->RasterVertexShader,true);
    if (pFVar4 != (FRHIVertexShader *)0x0) {
      pFVar4 = TShaderRefBase<FHWRasterizeVS,FShaderMapPointerTable>::GetVertexShader
                         (&this->RasterVertexShader,true);
      pFVar10 = (FRHIShader *)
                (ulonglong)
                ((uint)pFVar10 ^
                *(int *)&pFVar4->field_0xf0 + -0x61c88647 +
                (uint)pFVar10 * 0x40 + (int)((ulonglong)pFVar10 >> 2));
    }
    pFVar7 = (this->RasterMeshShader).ShaderContent;
    if (pFVar7 != (FHWRasterizeMS *)0x0) {
      if ((pFVar7->field_0xd0 & 0xf) == 1) {
        pFVar5 = TShaderRefBase<FHWRasterizeMS,FShaderMapPointerTable>::GetRHIShaderBase
                           (&this->RasterMeshShader,SF_Mesh,true);
        pFVar7 = (this->RasterMeshShader).ShaderContent;
        if (pFVar5 != (FRHIShader *)0x0) {
          pFVar5 = pFVar6;
          if ((pFVar7 != (FHWRasterizeMS *)0x0) && ((pFVar7->field_0xd0 & 0xf) == 1)) {
            pFVar5 = TShaderRefBase<FHWRasterizeMS,FShaderMapPointerTable>::GetRHIShaderBase
                               (&this->RasterMeshShader,SF_Mesh,true);
            pFVar7 = (this->RasterMeshShader).ShaderContent;
          }
          pFVar10 = (FRHIShader *)
                    (ulonglong)
                    ((uint)pFVar10 ^
                    (int)((ulonglong)pFVar10 >> 2) + -0x61c88647 +
                    *(int *)(pFVar5->Hash).Hash + (uint)pFVar10 * 0x40);
        }
      }
      if (((pFVar7 != (FHWRasterizeMS *)0x0) && ((pFVar7->field_0xd0 & 0xf) == 0xb)) &&
         (pFVar5 = TShaderRefBase<FHWRasterizeMS,FShaderMapPointerTable>::GetRHIShaderBase
                             (&this->RasterMeshShader,SF_WorkGraphComputeNode,true),
         pFVar5 != (FRHIShader *)0x0)) {
        pFVar7 = (this->RasterMeshShader).ShaderContent;
        pFVar5 = pFVar6;
        if ((pFVar7 != (FHWRasterizeMS *)0x0) && ((pFVar7->field_0xd0 & 0xf) == 0xb)) {
          pFVar5 = TShaderRefBase<FHWRasterizeMS,FShaderMapPointerTable>::GetRHIShaderBase
                             (&this->RasterMeshShader,SF_WorkGraphComputeNode,true);
        }
        pFVar10 = (FRHIShader *)
                  (ulonglong)
                  ((uint)pFVar10 ^
                  (int)((ulonglong)pFVar10 >> 2) + -0x61c88647 +
                  *(int *)(pFVar5->Hash).Hash + (uint)pFVar10 * 0x40);
      }
    }
    pFVar8 = (this->ClusterComputeShader).ShaderContent;
    if (pFVar8 != (FMicropolyRasterizeCS *)0x0) {
      if ((pFVar8->field_0xd0 & 0xf) == 5) {
        pFVar5 = TShaderRefBase<FMicropolyRasterizeCS,FShaderMapPointerTable>::GetRHIShaderBase
                           (&this->ClusterComputeShader,SF_Compute,true);
        pFVar8 = (this->ClusterComputeShader).ShaderContent;
        if (pFVar5 != (FRHIShader *)0x0) {
          pFVar5 = pFVar6;
          if ((pFVar8 != (FMicropolyRasterizeCS *)0x0) && ((pFVar8->field_0xd0 & 0xf) == 5)) {
            pFVar5 = TShaderRefBase<FMicropolyRasterizeCS,FShaderMapPointerTable>::GetRHIShaderBase
                               (&this->ClusterComputeShader,SF_Compute,true);
            pFVar8 = (this->ClusterComputeShader).ShaderContent;
          }
          pFVar10 = (FRHIShader *)
                    (ulonglong)
                    ((uint)pFVar10 ^
                    (int)((ulonglong)pFVar10 >> 2) + -0x61c88647 +
                    *(int *)(pFVar5->Hash).Hash + (uint)pFVar10 * 0x40);
        }
      }
      if (((pFVar8 != (FMicropolyRasterizeCS *)0x0) && ((pFVar8->field_0xd0 & 0xf) == 0xb)) &&
         (pFVar5 = TShaderRefBase<FMicropolyRasterizeCS,FShaderMapPointerTable>::GetRHIShaderBase
                             (&this->ClusterComputeShader,SF_WorkGraphComputeNode,true),
         pFVar5 != (FRHIShader *)0x0)) {
        pFVar8 = (this->ClusterComputeShader).ShaderContent;
        if ((pFVar8 != (FMicropolyRasterizeCS *)0x0) && ((pFVar8->field_0xd0 & 0xf) == 0xb)) {
          pFVar6 = TShaderRefBase<FMicropolyRasterizeCS,FShaderMapPointerTable>::GetRHIShaderBase
                             (&this->ClusterComputeShader,SF_WorkGraphComputeNode,true);
        }
        pFVar10 = (FRHIShader *)
                  (ulonglong)
                  ((uint)pFVar10 ^
                  (int)((ulonglong)pFVar10 >> 2) + -0x61c88647 +
                  *(int *)(pFVar6->Hash).Hash + (uint)pFVar10 * 0x40);
      }
    }
    uVar9 = (uint)pFVar10;
    pFVar6 = TShaderRefBase<FMicropolyRasterizeCS,FShaderMapPointerTable>::GetRHIShaderBase
                       (&this->PatchComputeShader,SF_Compute,true);
    if (pFVar6 != (FRHIShader *)0x0) {
      pFVar6 = TShaderRefBase<FMicropolyRasterizeCS,FShaderMapPointerTable>::GetRHIShaderBase
                         (&this->PatchComputeShader,SF_Compute,true);
      uVar9 = uVar9 ^ (int)((ulonglong)pFVar10 >> 2) + -0x61c88647 +
                      *(int *)(pFVar6->Hash).Hash + uVar9 * 0x40;
    }
    uVar9 = uVar9 >> 5 | 0x8000000;
  }
  puVar1 = &(this->RasterPipeline).field_0x18;
  if ((this->bPixelProgrammable == false) && (!(this->RasterPipeline).bVoxel)) {
    return uVar9;
  }
  uVar2 = (uint)(byte)*puVar1;
  if (this->bVertexProgrammable == false) {
    uVar11 = 0x10000000;
  }
  return -(uint)(this->bPixelProgrammable != false) & 0x40000000 |
         ~(uVar2 << 0x18) & 0x20000000 | uVar11 | (uVar2 & 0xffffffc0) << 0x19 | uVar9;
}

