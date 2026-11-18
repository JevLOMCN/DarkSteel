// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// SetShaderBindings @ 144f2a0f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
FReadOnlyMeshDrawSingleShaderBindings::SetShaderBindings
          (FRHIBatchedShaderParameters *param_1,FReadOnlyMeshDrawSingleShaderBindings *param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong *puVar3;
  FRHIUniformBuffer *pFVar4;
  FRHIBatchedShaderParametersAllocator *pFVar5;
  FRHIBatchedShaderParameters *pFVar6;
  longlong lVar7;
  FRHISamplerState *pFVar8;
  uchar *puVar9;
  FRHITexture *pFVar10;
  FShaderParameterMapInfo *pFVar11;
  code *pcVar12;
  bool bVar13;
  ushort uVar14;
  int iVar15;
  char cVar16;
  uint uVar17;
  ulonglong uVar18;
  byte bVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint *puVar23;
  uchar *puVar24;
  ushort local_res18 [4];
  ushort local_res20 [4];
  ushort local_58 [4];
  FRHIUniformBuffer *local_50;
  FRHITexture *local_48;
  FRHITexture *local_40;
  
  puVar3 = (ulonglong *)param_2->_padding_;
  puVar24 = param_2->Data;
  uVar22 = *puVar3;
  if ((uVar22 & 1) != 0) {
    uVar22 = ((longlong)uVar22 >> 0x18) + (longlong)puVar3;
  }
  uVar18 = puVar3[1];
  uVar21 = 0;
  uVar20 = uVar21;
  if (0 < (longlong)(int)uVar18) {
    do {
      pFVar4 = *(FRHIUniformBuffer **)(puVar24 + uVar20 * 8);
      uVar14 = *(ushort *)(uVar22 + uVar20 * 2);
      if (pFVar4 != (FRHIUniformBuffer *)0x0) {
        pFVar5 = param_1->Allocator;
        pFVar6 = pFVar5->AttachedParameters;
        local_50 = pFVar4;
        if (pFVar6 != param_1) {
          if ((pFVar6 != (FRHIBatchedShaderParameters *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!AttachedParameters",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                                  ,0x82,
                                  L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                                 ), bVar13)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar5->AttachedParameters = param_1;
        }
        pFVar5 = param_1->Allocator;
        pFVar6 = pFVar5->AttachedParameters;
        local_res18[0] = uVar14;
        if (pFVar6 != param_1) {
          if ((pFVar6 != (FRHIBatchedShaderParameters *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!AttachedParameters",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                                  ,0x82,
                                  L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                                 ), bVar13)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          pFVar5->AttachedParameters = param_1;
        }
        FRHIBatchedShaderParametersAllocator::
        Emplace<FRHIShaderParameterResource,FRHIUniformBuffer_*_&,unsigned_short_&>
                  (param_1->Allocator,&param_1->Allocator->ResourceParameters,
                   &param_1->ResourceParameters,&local_50,local_res18);
      }
      uVar20 = uVar20 + 1;
    } while ((longlong)uVar20 < (longlong)(int)uVar18);
  }
  lVar7 = param_2->_padding_;
  uVar22 = *(ulonglong *)(lVar7 + 0x10);
  iVar1 = *(int *)(lVar7 + 8);
  puVar24 = param_2->Data;
  if ((uVar22 & 1) != 0) {
    uVar22 = ((longlong)uVar22 >> 0x18) + lVar7 + 0x10;
  }
  iVar15 = *(int *)(lVar7 + 0x18);
  uVar18 = uVar21;
  if (0 < (longlong)iVar15) {
    do {
      pFVar8 = *(FRHISamplerState **)(puVar24 + uVar18 * 8 + (ulonglong)(uint)(iVar1 << 3));
      uVar2 = *(uint *)(uVar22 + uVar18 * 4);
      if (pFVar8 != (FRHISamplerState *)0x0) {
        uVar17 = uVar2 & 0xffff;
        if ((char)(uVar2 >> 0x18) == '\x05') {
          FRHIBatchedShaderParameters::SetBindlessSampler(param_1,uVar17,pFVar8);
        }
        else {
          FRHIBatchedShaderParameters::SetShaderSampler(param_1,uVar17,pFVar8);
        }
      }
      uVar18 = uVar18 + 1;
    } while ((longlong)uVar18 < (longlong)iVar15);
  }
  lVar7 = param_2->_padding_;
  uVar2 = *(uint *)(lVar7 + 0x28);
  uVar22 = (ulonglong)uVar2;
  puVar23 = *(uint **)(lVar7 + 0x20);
  iVar1 = *(int *)(lVar7 + 8) * 8;
  iVar15 = *(int *)(lVar7 + 0x18) * 8;
  puVar9 = param_2->Data;
  puVar24 = param_2->Data + (uint)(iVar15 + iVar1);
  if (((ulonglong)puVar23 & 1) != 0) {
    puVar23 = (uint *)(((longlong)puVar23 >> 0x18) + lVar7 + 0x20);
  }
  if (uVar2 != 0) {
    bVar19 = 1;
    do {
      uVar17 = *puVar23;
      pFVar10 = *(FRHITexture **)puVar24;
      cVar16 = (char)(uVar17 >> 0x18);
      uVar14 = (ushort)uVar17;
      if ((puVar9[(uVar21 >> 3) + (ulonglong)(iVar15 + uVar2 * 8 + iVar1)] & bVar19) == 0) {
        if (pFVar10 != (FRHITexture *)0x0) {
          if (cVar16 == '\x06') {
            FRHIBatchedShaderParameters::SetBindlessTexture(param_1,uVar17 & 0xffff,pFVar10);
          }
          else {
            FRHIBatchedShaderParameters::SetShaderTexture(param_1,uVar17 & 0xffff,pFVar10);
          }
        }
      }
      else if (pFVar10 != (FRHITexture *)0x0) {
        pFVar5 = param_1->Allocator;
        pFVar6 = pFVar5->AttachedParameters;
        if (cVar16 == '\x06') {
          local_res20[0] = uVar14;
          local_48 = pFVar10;
          if (pFVar6 != param_1) {
            if ((pFVar6 != (FRHIBatchedShaderParameters *)0x0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!AttachedParameters",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                                    ,0x82,
                                    L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                                   ), bVar13)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar5->AttachedParameters = param_1;
          }
          FRHIBatchedShaderParametersAllocator::
          Emplace<FRHIShaderParameterResource,FRHIShaderResourceView_*_&,unsigned_short_&>
                    (param_1->Allocator,&param_1->Allocator->BindlessParameters,
                     &param_1->BindlessParameters,(FRHIShaderResourceView **)&local_48,local_res20);
        }
        else {
          local_58[0] = uVar14;
          local_40 = pFVar10;
          if (pFVar6 != param_1) {
            if ((pFVar6 != (FRHIBatchedShaderParameters *)0x0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!AttachedParameters",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                                    ,0x82,
                                    L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                                   ), bVar13)) {
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
              return;
            }
            pFVar5->AttachedParameters = param_1;
          }
          FRHIBatchedShaderParametersAllocator::
          Emplace<FRHIShaderParameterResource,FRHIShaderResourceView_*_&,unsigned_short_&>
                    (param_1->Allocator,&param_1->Allocator->ResourceParameters,
                     &param_1->ResourceParameters,(FRHIShaderResourceView **)&local_40,local_58);
        }
      }
      uVar21 = uVar21 + 1;
      bVar19 = bVar19 << 1 | (char)bVar19 < '\0';
      puVar23 = puVar23 + 1;
      puVar24 = puVar24 + 8;
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
  }
  pFVar11 = (FShaderParameterMapInfo *)param_2->_padding_;
  iVar1 = (pFVar11->SRVs).ArrayNum;
  iVar15 = iVar1 + 7;
  SetLooseParameters(param_1,pFVar11,
                     param_2->Data +
                     (uint)(((int)(iVar15 + (iVar15 >> 0x1f & 7U)) >> 3) +
                           ((pFVar11->TextureSamplers).ArrayNum + (pFVar11->UniformBuffers).ArrayNum
                           + iVar1) * 8));
  return;
}

// SetShaderBindings @ 144f2a470

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
FReadOnlyMeshDrawSingleShaderBindings::SetShaderBindings
          (FRHIBatchedShaderParameters *param_1,FReadOnlyMeshDrawSingleShaderBindings *param_2,
          FShaderBindingState *param_3)

{
  int iVar1;
  ulonglong *puVar2;
  FRHIUniformBuffer *pFVar3;
  FRHIBatchedShaderParametersAllocator *pFVar4;
  FRHIBatchedShaderParameters *pFVar5;
  uchar *puVar6;
  FRHITexture *pFVar7;
  FShaderParameterMapInfo *pFVar8;
  code *pcVar9;
  bool bVar10;
  ushort uVar11;
  int iVar12;
  uint uVar13;
  char cVar14;
  uint uVar15;
  byte bVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint *puVar21;
  uchar *puVar22;
  ushort local_res20 [4];
  ushort local_68;
  ushort local_66 [3];
  FRHIUniformBuffer *local_60;
  uchar *local_58;
  FRHITexture *local_50;
  FRHITexture *local_48 [2];
  
  puVar2 = (ulonglong *)param_2->_padding_;
  local_58 = param_2->Data;
  uVar20 = *puVar2;
  if ((uVar20 & 1) != 0) {
    uVar20 = ((longlong)uVar20 >> 0x18) + (longlong)puVar2;
  }
  uVar17 = puVar2[1];
  if (0 < (longlong)(int)uVar17) {
    lVar18 = 0;
    do {
      puVar22 = local_58;
      uVar11 = *(ushort *)(uVar20 + lVar18 * 2);
      if ((0xd < uVar11) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Parameter.BaseIndex < FShaderBindingState::MAX_UNIFORM_BUFFERS_PER_STAGE"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                              ,0xa0,L""), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar3 = *(FRHIUniformBuffer **)(puVar22 + lVar18 * 8);
      if (pFVar3 != param_3->UniformBuffers[uVar11]) {
        pFVar4 = param_1->Allocator;
        pFVar5 = pFVar4->AttachedParameters;
        local_60 = pFVar3;
        if (pFVar5 != param_1) {
          if ((pFVar5 != (FRHIBatchedShaderParameters *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!AttachedParameters",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                                  ,0x82,
                                  L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                                 ), bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar4->AttachedParameters = param_1;
        }
        pFVar4 = param_1->Allocator;
        pFVar5 = pFVar4->AttachedParameters;
        local_res20[0] = uVar11;
        if (pFVar5 != param_1) {
          if ((pFVar5 != (FRHIBatchedShaderParameters *)0x0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!AttachedParameters",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                                  ,0x82,
                                  L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                                 ), bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar4->AttachedParameters = param_1;
        }
        FRHIBatchedShaderParametersAllocator::
        Emplace<FRHIShaderParameterResource,FRHIUniformBuffer_*_&,unsigned_short_&>
                  (param_1->Allocator,&param_1->Allocator->ResourceParameters,
                   &param_1->ResourceParameters,&local_60,local_res20);
        param_3->UniformBuffers[uVar11] = pFVar3;
        uVar13 = param_3->MaxUniformBufferUsed;
        if ((int)uVar13 < (int)(uint)uVar11) {
          uVar13 = (uint)uVar11;
        }
        param_3->MaxUniformBufferUsed = uVar13;
      }
      lVar18 = lVar18 + 1;
    } while (lVar18 < (int)uVar17);
  }
  lVar18 = param_2->_padding_;
  uVar20 = *(ulonglong *)(lVar18 + 0x10);
  iVar1 = *(int *)(lVar18 + 8);
  puVar22 = param_2->Data;
  if ((uVar20 & 1) != 0) {
    uVar20 = ((longlong)uVar20 >> 0x18) + lVar18 + 0x10;
  }
  iVar12 = *(int *)(lVar18 + 0x18);
  uVar19 = 0;
  uVar17 = uVar19;
  if (0 < (longlong)iVar12) {
    do {
      uVar13 = *(uint *)(uVar20 + uVar17 * 4);
      uVar15 = uVar13 & 0xffff;
      if ((char)(uVar13 >> 0x18) == '\x05') {
        FRHIBatchedShaderParameters::SetBindlessSampler
                  (param_1,uVar15,
                   *(FRHISamplerState **)(puVar22 + uVar17 * 8 + (ulonglong)(uint)(iVar1 << 3)));
      }
      else {
        FRHIBatchedShaderParameters::SetShaderSampler
                  (param_1,uVar15,
                   *(FRHISamplerState **)(puVar22 + uVar17 * 8 + (ulonglong)(uint)(iVar1 << 3)));
      }
      uVar17 = uVar17 + 1;
    } while ((longlong)uVar17 < (longlong)iVar12);
  }
  lVar18 = param_2->_padding_;
  uVar13 = *(uint *)(lVar18 + 0x28);
  uVar20 = (ulonglong)uVar13;
  puVar21 = *(uint **)(lVar18 + 0x20);
  iVar1 = *(int *)(lVar18 + 8) * 8;
  iVar12 = *(int *)(lVar18 + 0x18) * 8;
  puVar6 = param_2->Data;
  puVar22 = param_2->Data + (uint)(iVar12 + iVar1);
  if (((ulonglong)puVar21 & 1) != 0) {
    puVar21 = (uint *)(((longlong)puVar21 >> 0x18) + lVar18 + 0x20);
  }
  if (uVar13 != 0) {
    bVar16 = 1;
    do {
      uVar15 = *puVar21;
      pFVar7 = *(FRHITexture **)puVar22;
      cVar14 = (char)(uVar15 >> 0x18);
      uVar11 = (ushort)uVar15;
      if ((puVar6[(uVar19 >> 3) + (ulonglong)(iVar12 + uVar13 * 8 + iVar1)] & bVar16) == 0) {
        if (cVar14 == '\x06') {
          FRHIBatchedShaderParameters::SetBindlessTexture(param_1,uVar15 & 0xffff,pFVar7);
        }
        else {
          FRHIBatchedShaderParameters::SetShaderTexture(param_1,uVar15 & 0xffff,pFVar7);
        }
      }
      else {
        pFVar4 = param_1->Allocator;
        pFVar5 = pFVar4->AttachedParameters;
        if (cVar14 == '\x06') {
          local_68 = uVar11;
          local_50 = pFVar7;
          if (pFVar5 != param_1) {
            if ((pFVar5 != (FRHIBatchedShaderParameters *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!AttachedParameters",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                                    ,0x82,
                                    L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                                   ), bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar4->AttachedParameters = param_1;
          }
          FRHIBatchedShaderParametersAllocator::
          Emplace<FRHIShaderParameterResource,FRHIShaderResourceView_*_&,unsigned_short_&>
                    (param_1->Allocator,&param_1->Allocator->BindlessParameters,
                     &param_1->BindlessParameters,(FRHIShaderResourceView **)&local_50,&local_68);
        }
        else {
          local_66[0] = uVar11;
          local_48[0] = pFVar7;
          if (pFVar5 != param_1) {
            if ((pFVar5 != (FRHIBatchedShaderParameters *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!AttachedParameters",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderParameters.h"
                                    ,0x82,
                                    L"Only one FRHIBatchedShaderParameters instance can be used at a time with this allocator. You must call FRHIBatchedShaderParameters::{Reset, Finish} to start processing a new one."
                                   ), bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar4->AttachedParameters = param_1;
          }
          FRHIBatchedShaderParametersAllocator::
          Emplace<FRHIShaderParameterResource,FRHIShaderResourceView_*_&,unsigned_short_&>
                    (param_1->Allocator,&param_1->Allocator->ResourceParameters,
                     &param_1->ResourceParameters,(FRHIShaderResourceView **)local_48,local_66);
        }
      }
      uVar19 = uVar19 + 1;
      bVar16 = bVar16 << 1 | (char)bVar16 < '\0';
      puVar21 = puVar21 + 1;
      puVar22 = puVar22 + 8;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
  pFVar8 = (FShaderParameterMapInfo *)param_2->_padding_;
  iVar1 = (pFVar8->SRVs).ArrayNum;
  iVar12 = iVar1 + 7;
  SetLooseParameters(param_1,pFVar8,
                     param_2->Data +
                     (uint)(((int)(iVar12 + (iVar12 >> 0x1f & 7U)) >> 3) +
                           ((pFVar8->TextureSamplers).ArrayNum + (pFVar8->UniformBuffers).ArrayNum +
                           iVar1) * 8));
  return;
}

