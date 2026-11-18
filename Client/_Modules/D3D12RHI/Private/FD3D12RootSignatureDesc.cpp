// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 1

// FD3D12RootSignatureDesc @ 145a45340

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FD3D12RootSignatureDesc * __thiscall
FD3D12RootSignatureDesc::FD3D12RootSignatureDesc
          (FD3D12RootSignatureDesc *this,FD3D12QuantizedBoundShaderState *param_1,
          D3D12_RESOURCE_BINDING_TIER param_2)

{
  FShaderRegisterCounts *pFVar1;
  CD3DX12_DESCRIPTOR_RANGE1 *pCVar2;
  ERootSignatureType EVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  byte bVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  FD3D12RootSignatureDesc *pFVar11;
  char cVar12;
  uint uVar13;
  uint *puVar14;
  D3D12_STATIC_SAMPLER_DESC *pDVar15;
  D3D12_STATIC_SAMPLER_DESC *pDVar16;
  uint uVar17;
  uint uVar18;
  D3D12_STATIC_SAMPLER_DESC *pDVar19;
  longlong lVar20;
  D3D12_STATIC_SAMPLER_DESC *pDVar21;
  int local_res20;
  longlong local_90;
  uint local_88;
  int local_78 [2];
  uint *local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 local_4c;
  
  pDVar21 = (D3D12_STATIC_SAMPLER_DESC *)0x0;
  uVar18 = 0;
  uVar13 = 0;
  local_60 = ___xmm_00000003000000020000000000000001;
  uStack_58 = _UNK_151092418;
  local_50 = 4;
  local_78[0] = 0;
  local_78[1] = 2;
  local_4c = 5;
  this->RootParametersSize = 0;
  this->RootConstantsSlot = -1;
  this->DiagnosticBufferSlot = -1;
  this->StaticShaderBindingSlot = -1;
  this->StaticShaderBindingCount = -1;
  EVar3 = param_1->RootSignatureType;
  bVar7 = (param_1->field3_0xec).Flags;
  if (((((bVar7 & 4) == 0) || (EVar3 == RS_RayTracingLocal)) || (EVar3 == RS_WorkGraphLocalCompute))
     || (bVar8 = true, EVar3 == RS_WorkGraphLocalRaster)) {
    bVar8 = false;
  }
  pDVar15 = pDVar21;
  if (EVar3 == RS_RayTracingLocal) {
    *(undefined4 *)this->TableSlots = 1;
    *(undefined4 *)&this->TableSlots[0].field_0x18 = 0;
    *(undefined4 *)&this->TableSlots[0].field_0x8 = 0;
    *(undefined4 *)&this->TableSlots[0].field_0xc = 2;
    if ((bVar7 & 8) == 0) {
      *(undefined4 *)&this->TableSlots[0].field_0x10 = 4;
      pDVar15 = (D3D12_STATIC_SAMPLER_DESC *)0x3;
      this->RootParametersSize = this->RootParametersSize + 4;
      *(undefined4 *)(this->TableSlots + 1) = 3;
      *(undefined4 *)&this->TableSlots[1].field_0x18 = 0;
      *(undefined4 *)&this->TableSlots[1].field_0x8 = 0;
      *(undefined8 *)&this->TableSlots[1].field_0xc = 2;
      this->RootParametersSize = this->RootParametersSize + 2;
      *(undefined4 *)(this->TableSlots + 2) = 3;
      *(undefined4 *)&this->TableSlots[2].field_0x18 = 0;
      *(undefined4 *)&this->TableSlots[2].field_0x8 = 1;
      *(undefined8 *)&this->TableSlots[2].field_0xc = 2;
      this->RootParametersSize = this->RootParametersSize + 2;
    }
    else {
      *(undefined4 *)&this->TableSlots[0].field_0x10 = 8;
      pDVar15 = (D3D12_STATIC_SAMPLER_DESC *)0x1;
      this->RootParametersSize = this->RootParametersSize + 8;
    }
  }
  EVar3 = param_1->RootSignatureType;
  if (((EVar3 == RS_RayTracingLocal) || (EVar3 == RS_WorkGraphLocalCompute)) ||
     (local_res20 = 1, EVar3 == RS_WorkGraphLocalRaster)) {
    local_res20 = 2;
  }
  local_88 = 0;
  local_90 = 0;
  do {
    local_70 = (uint *)&local_60;
    local_68 = 6;
    pDVar16 = pDVar15;
    do {
      uVar10 = *local_70;
      EVar3 = param_1->RootSignatureType;
      uVar5 = uVar10;
      if (EVar3 == RS_WorkGraphLocalRaster) {
        uVar5 = 5;
      }
      pFVar1 = (param_1->RegisterCounts).Elements + uVar10;
      if (EVar3 == RS_RayTracingGlobal) {
LAB_145a45555:
        uVar17 = 1;
      }
      else {
        uVar17 = uVar13;
        if (EVar3 != RS_RayTracingLocal) {
          if (EVar3 == RS_WorkGraphGlobal) goto LAB_145a45555;
          if (EVar3 == RS_WorkGraphLocalCompute) {
            uVar17 = 2;
          }
          else if ((EVar3 == RS_WorkGraphLocalRaster) && (uVar17 = 2, uVar10 == 1)) {
            uVar17 = uVar18;
          }
        }
      }
      if (*(int *)((longlong)local_78 + local_90) == 0) {
        pDVar15 = pDVar16;
        if (pFVar1->ShaderResourceCount != '\0') {
          if ((0x1f < (uint)pDVar16) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("RootParameterCount < MaxRootParameters",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
                                 ,0x123,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            pFVar11 = (FD3D12RootSignatureDesc *)(*pcVar4)();
            return pFVar11;
          }
          pCVar2 = this->DescriptorRanges + (longlong)pDVar16;
          bVar7 = pFVar1->ShaderResourceCount;
          *(uint *)&pCVar2->field_0x10 = (1 < (int)param_2) + 4;
          *(uint *)&pCVar2->field_0x4 = (uint)bVar7;
          *(undefined4 *)pCVar2 = 0;
          *(undefined4 *)&pCVar2->field_0x8 = 0;
          *(uint *)&pCVar2->field_0xc = uVar17;
          *(undefined4 *)&pCVar2->field_0x14 = 0xffffffff;
          switch(uVar5) {
          case 0:
            uVar10 = 1;
            break;
          case 1:
            uVar10 = 5;
            break;
          case 2:
            uVar10 = 4;
            break;
          case 3:
            uVar10 = 7;
            break;
          case 4:
            uVar10 = 6;
            break;
          case 5:
            uVar10 = uVar18;
            break;
          default:
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("false",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
                               ,0x54,L"");
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              pFVar11 = (FD3D12RootSignatureDesc *)(*pcVar4)();
              return pFVar11;
            }
            uVar10 = 0xffffffff;
          }
          pDVar15 = (D3D12_STATIC_SAMPLER_DESC *)(ulonglong)((uint)pDVar16 + 1);
          *(uint *)&this->TableSlots[(longlong)pDVar16].field_0x18 = uVar10;
          *(undefined4 *)(this->TableSlots + (longlong)pDVar16) = 0;
          *(undefined4 *)&this->TableSlots[(longlong)pDVar16].field_0x8 = 1;
          *(CD3DX12_DESCRIPTOR_RANGE1 **)&this->TableSlots[(longlong)pDVar16].field_0x10 = pCVar2;
          this->RootParametersSize = this->RootParametersSize + local_res20;
        }
        pDVar16 = pDVar15;
        if (0x10 < pFVar1->ConstantBufferCount) {
          EVar3 = param_1->RootSignatureType;
          if ((((EVar3 == RS_RayTracingLocal) || (EVar3 == RS_WorkGraphLocalCompute)) ||
              (EVar3 == RS_WorkGraphLocalRaster)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("!IsLocalRootSignature(QBSS.RootSignatureType)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
                                 ,300,
                                 L"CBV descriptor tables are not implemented for local root signatures"
                                ), bVar6)) {
            pcVar4 = (code *)swi(3);
            pFVar11 = (FD3D12RootSignatureDesc *)(*pcVar4)();
            return pFVar11;
          }
          if ((0x1f < (uint)pDVar15) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("RootParameterCount < MaxRootParameters",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
                                 ,0x12f,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            pFVar11 = (FD3D12RootSignatureDesc *)(*pcVar4)();
            return pFVar11;
          }
          pCVar2 = this->DescriptorRanges + (longlong)pDVar15;
          bVar7 = pFVar1->ConstantBufferCount;
          *(undefined4 *)pCVar2 = 2;
          *(uint *)&pCVar2->field_0x4 = bVar7 - 0x10;
          *(uint *)&pCVar2->field_0x10 = (2 < (int)param_2) + 4;
          *(undefined4 *)&pCVar2->field_0x8 = 0x10;
          *(uint *)&pCVar2->field_0xc = uVar17;
          *(undefined4 *)&pCVar2->field_0x14 = 0xffffffff;
          switch(uVar5) {
          case 0:
            uVar10 = 1;
            break;
          case 1:
            uVar10 = 5;
            break;
          case 2:
            uVar10 = 4;
            break;
          case 3:
            uVar10 = 7;
            break;
          case 4:
            uVar10 = 6;
            break;
          case 5:
            uVar10 = uVar18;
            break;
          default:
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("false",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
                               ,0x54,L"");
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              pFVar11 = (FD3D12RootSignatureDesc *)(*pcVar4)();
              return pFVar11;
            }
            uVar10 = 0xffffffff;
          }
          *(uint *)&this->TableSlots[(longlong)pDVar15].field_0x18 = uVar10;
          pDVar16 = (D3D12_STATIC_SAMPLER_DESC *)(ulonglong)((uint)pDVar15 + 1);
          *(undefined4 *)(this->TableSlots + (longlong)pDVar15) = 0;
          *(undefined4 *)&this->TableSlots[(longlong)pDVar15].field_0x8 = 1;
          *(CD3DX12_DESCRIPTOR_RANGE1 **)&this->TableSlots[(longlong)pDVar15].field_0x10 = pCVar2;
          this->RootParametersSize = this->RootParametersSize + local_res20;
        }
        pDVar15 = pDVar16;
        if (pFVar1->SamplerCount != '\0') {
          if ((0x1f < (uint)pDVar16) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("RootParameterCount < MaxRootParameters",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
                                 ,0x138,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            pFVar11 = (FD3D12RootSignatureDesc *)(*pcVar4)();
            return pFVar11;
          }
          pCVar2 = this->DescriptorRanges + (longlong)pDVar16;
          *(uint *)&pCVar2->field_0x4 = (uint)pFVar1->SamplerCount;
          *(uint *)&pCVar2->field_0x10 = (uint)(1 < (int)param_2);
          *(undefined4 *)pCVar2 = 3;
          *(undefined4 *)&pCVar2->field_0x8 = 0;
          *(uint *)&pCVar2->field_0xc = uVar17;
          *(undefined4 *)&pCVar2->field_0x14 = 0xffffffff;
          switch(uVar5) {
          case 0:
            uVar10 = 1;
            break;
          case 1:
            uVar10 = 5;
            break;
          case 2:
            uVar10 = 4;
            break;
          case 3:
            uVar10 = 7;
            break;
          case 4:
            uVar10 = 6;
            break;
          case 5:
            uVar10 = uVar18;
            break;
          default:
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("false",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
                               ,0x54,L"");
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              pFVar11 = (FD3D12RootSignatureDesc *)(*pcVar4)();
              return pFVar11;
            }
            uVar10 = 0xffffffff;
          }
          *(uint *)&this->TableSlots[(longlong)pDVar16].field_0x18 = uVar10;
          pDVar15 = (D3D12_STATIC_SAMPLER_DESC *)(ulonglong)((uint)pDVar16 + 1);
          *(undefined4 *)(this->TableSlots + (longlong)pDVar16) = 0;
          *(undefined4 *)&this->TableSlots[(longlong)pDVar16].field_0x8 = 1;
          *(CD3DX12_DESCRIPTOR_RANGE1 **)&this->TableSlots[(longlong)pDVar16].field_0x10 = pCVar2;
          this->RootParametersSize = this->RootParametersSize + local_res20;
        }
        if (pFVar1->UnorderedAccessCount != '\0') {
          if ((0x1f < (uint)pDVar15) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("RootParameterCount < MaxRootParameters",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
                                 ,0x141,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            pFVar11 = (FD3D12RootSignatureDesc *)(*pcVar4)();
            return pFVar11;
          }
          pCVar2 = this->DescriptorRanges + (longlong)pDVar15;
          *(uint *)&pCVar2->field_0x4 = (uint)pFVar1->UnorderedAccessCount;
          *(uint *)&pCVar2->field_0x10 = (2 < (int)param_2) + 2;
          *(undefined4 *)pCVar2 = 1;
          *(undefined4 *)&pCVar2->field_0x8 = 0;
          *(uint *)&pCVar2->field_0xc = uVar17;
          *(undefined4 *)&pCVar2->field_0x14 = 0xffffffff;
          switch(uVar5) {
          case 0:
            uVar10 = 1;
            break;
          case 1:
            uVar10 = 5;
            break;
          case 2:
            uVar10 = 4;
            break;
          case 3:
            uVar10 = 7;
            break;
          case 4:
            uVar10 = 6;
            break;
          case 5:
            uVar10 = uVar13;
            break;
          default:
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("false",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
                               ,0x54,L"");
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              pFVar11 = (FD3D12RootSignatureDesc *)(*pcVar4)();
              return pFVar11;
            }
            uVar10 = 0xffffffff;
          }
          *(uint *)&this->TableSlots[(longlong)pDVar15].field_0x18 = uVar10;
          *(CD3DX12_DESCRIPTOR_RANGE1 **)&this->TableSlots[(longlong)pDVar15].field_0x10 = pCVar2;
          *(undefined4 *)(this->TableSlots + (longlong)pDVar15) = 0;
          *(undefined4 *)&this->TableSlots[(longlong)pDVar15].field_0x8 = 1;
          this->RootParametersSize = this->RootParametersSize + local_res20;
          pDVar15 = (D3D12_STATIC_SAMPLER_DESC *)(ulonglong)((uint)pDVar15 + 1);
        }
      }
      else {
        pDVar15 = pDVar16;
        if (*(int *)((longlong)local_78 + local_90) == 2) {
          pDVar19 = pDVar21;
          if (pFVar1->ConstantBufferCount != '\0') {
            do {
              uVar10 = (uint)pDVar19;
              pDVar15 = pDVar16;
              if (0xf < uVar10) break;
              if ((0x1f < (uint)pDVar16) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("RootParameterCount < MaxRootParameters",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
                                     ,0x14e,L""), bVar6)) {
                pcVar4 = (code *)swi(3);
                pFVar11 = (FD3D12RootSignatureDesc *)(*pcVar4)();
                return pFVar11;
              }
              switch(uVar5) {
              case 0:
                uVar9 = 1;
                break;
              case 1:
                uVar9 = 5;
                break;
              case 2:
                uVar9 = 4;
                break;
              case 3:
                uVar9 = 7;
                break;
              case 4:
                uVar9 = 6;
                break;
              case 5:
                uVar9 = uVar18;
                break;
              default:
                bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("false",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
                                   ,0x54,L"");
                if (bVar6) {
                  pcVar4 = (code *)swi(3);
                  pFVar11 = (FD3D12RootSignatureDesc *)(*pcVar4)();
                  return pFVar11;
                }
                uVar9 = 0xffffffff;
              }
              *(uint *)&this->TableSlots[(longlong)pDVar16].field_0x8 = uVar10;
              pDVar15 = (D3D12_STATIC_SAMPLER_DESC *)(ulonglong)((uint)pDVar16 + 1);
              *(undefined4 *)(this->TableSlots + (longlong)pDVar16) = 2;
              *(uint *)&this->TableSlots[(longlong)pDVar16].field_0x18 = uVar9;
              *(uint *)&this->TableSlots[(longlong)pDVar16].field_0xc = uVar17;
              *(undefined4 *)&this->TableSlots[(longlong)pDVar16].field_0x10 = 8;
              this->RootParametersSize = this->RootParametersSize + 2;
              pDVar16 = pDVar15;
              pDVar19 = (D3D12_STATIC_SAMPLER_DESC *)(ulonglong)(uVar10 + 1);
            } while (uVar10 + 1 < (uint)pFVar1->ConstantBufferCount);
          }
        }
        else {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
                             ,0x157,L"");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            pFVar11 = (FD3D12RootSignatureDesc *)(*pcVar4)();
            return pFVar11;
          }
        }
      }
      local_70 = local_70 + 1;
      local_68 = local_68 + -1;
      pDVar16 = pDVar15;
    } while (local_68 != 0);
    local_90 = local_90 + 4;
    local_88 = local_88 + 1;
  } while (local_88 < 2);
  bVar7 = (param_1->field3_0xec).Flags;
  uVar18 = (bVar7 & 8) << 7;
  if ((bVar7 & 0x10) != 0) {
    uVar18 = uVar18 | 0x800;
  }
  EVar3 = param_1->RootSignatureType;
  if (((EVar3 == RS_RayTracingLocal) || (EVar3 == RS_WorkGraphLocalCompute)) ||
     (EVar3 == RS_WorkGraphLocalRaster)) {
    uVar18 = 0x80;
  }
  else if (EVar3 == RS_Raster) {
    if ((bVar7 & 1) != 0) {
      uVar18 = uVar18 | 1;
    }
    if ((param_1->ShaderBindingLayout).NumUniformBufferEntries == 0) {
      puVar14 = (uint *)&local_60;
      lVar20 = 6;
      cVar12 = GRHIGlobals.SupportsMeshShadersTier0;
      do {
        uVar10 = *puVar14;
        if ((((param_1->RegisterCounts).Elements[uVar10].ShaderResourceCount == '\0') &&
            ((param_1->RegisterCounts).Elements[uVar10].ConstantBufferCount == '\0')) &&
           (((param_1->RegisterCounts).Elements[uVar10].UnorderedAccessCount == '\0' &&
            ((param_1->RegisterCounts).Elements[uVar10].SamplerCount == '\0')))) {
          switch(uVar10) {
          case 0:
            uVar10 = 2;
            break;
          case 1:
            uVar10 = 0x20;
            break;
          case 2:
            uVar10 = 0x10;
            break;
          case 3:
            uVar10 = -(uint)(cVar12 != '\0') & 0x200;
            break;
          case 4:
            uVar10 = -(uint)(cVar12 != '\0') & 0x100;
            break;
          case 5:
            uVar10 = uVar13;
            break;
          default:
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("false",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
                               ,0x6d,L"");
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              pFVar11 = (FD3D12RootSignatureDesc *)(*pcVar4)();
              return pFVar11;
            }
            uVar10 = 0xffffffff;
            cVar12 = GRHIGlobals.SupportsMeshShadersTier0;
          }
          uVar18 = uVar18 | uVar10;
        }
        puVar14 = puVar14 + 1;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
    }
  }
  if (((param_1->field3_0xec).Flags & 2) != 0) {
    if ((0x1f < (uint)pDVar15) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("RootParameterCount < MaxRootParameters",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
                           ,0x194,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar11 = (FD3D12RootSignatureDesc *)(*pcVar4)();
      return pFVar11;
    }
    pDVar16 = (D3D12_STATIC_SAMPLER_DESC *)(ulonglong)((uint)pDVar15 + 1);
    *(undefined4 *)(this->TableSlots + (longlong)pDVar15) = 4;
    *(undefined4 *)&this->TableSlots[(longlong)pDVar15].field_0x18 = 0;
    *(undefined4 *)&this->TableSlots[(longlong)pDVar15].field_0x8 = 0;
    *(undefined4 *)&this->TableSlots[(longlong)pDVar15].field_0xc = 0x7fff0ade;
    *(undefined4 *)&this->TableSlots[(longlong)pDVar15].field_0x10 = 2;
    this->RootParametersSize = this->RootParametersSize + 2;
  }
  if ((param_1->ShaderBindingLayout).NumUniformBufferEntries != 0) {
    this->StaticShaderBindingSlot = (schar)pDVar16;
    this->StaticShaderBindingCount = '\0';
    uVar13 = (param_1->ShaderBindingLayout).NumUniformBufferEntries;
    if (uVar13 != 0) {
      pDVar15 = pDVar21;
      if ((uVar13 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < NumUniformBufferEntries",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderBindingLayout.h"
                             ,0x61,L""), pDVar15 = (D3D12_STATIC_SAMPLER_DESC *)0x0, bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar11 = (FD3D12RootSignatureDesc *)(*pcVar4)();
        return pFVar11;
      }
      do {
        if ((0x1f < (uint)pDVar16) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("RootParameterCount < MaxRootParameters",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
                               ,0x1a4,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar11 = (FD3D12RootSignatureDesc *)(*pcVar4)();
          return pFVar11;
        }
        if (((*(byte *)&(param_1->ShaderBindingLayout).UniformBufferEntries.Elements
                        [(longlong)pDVar15].field1_0x10 & 0xf) == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("UniformBufferSBLayout.RegisterSpace > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
                               ,0x1a5,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          pFVar11 = (FD3D12RootSignatureDesc *)(*pcVar4)();
          return pFVar11;
        }
        uVar13 = (param_1->ShaderBindingLayout).UniformBufferEntries.Elements[(longlong)pDVar15].
                 field1_0x10.Flags;
        *(undefined4 *)(this->TableSlots + (longlong)pDVar16) = 2;
        *(undefined4 *)&this->TableSlots[(longlong)pDVar16].field_0x18 = 0;
        *(uint *)&this->TableSlots[(longlong)pDVar16].field_0x8 = uVar13 >> 4 & 0x3f;
        *(uint *)&this->TableSlots[(longlong)pDVar16].field_0xc = uVar13 & 0xf;
        *(undefined4 *)&this->TableSlots[(longlong)pDVar16].field_0x10 = 8;
        bVar7 = ((byte)((param_1->ShaderBindingLayout).UniformBufferEntries.Elements
                        [(longlong)pDVar15].field1_0x10.Flags >> 4) & 0x3f) + 1;
        if ((int)(uint)bVar7 < (int)this->StaticShaderBindingCount) {
          bVar7 = this->StaticShaderBindingCount;
        }
        this->RootParametersSize = this->RootParametersSize + 2;
        this->StaticShaderBindingCount = bVar7;
        pDVar16 = (D3D12_STATIC_SAMPLER_DESC *)(ulonglong)((uint)pDVar16 + 1);
        uVar13 = (int)pDVar15 + 1;
        pDVar15 = (D3D12_STATIC_SAMPLER_DESC *)(ulonglong)uVar13;
      } while (uVar13 < (param_1->ShaderBindingLayout).NumUniformBufferEntries);
    }
  }
  pDVar15 = pDVar16;
  if (((param_1->field3_0xec).Flags & 0x20) != 0) {
    if ((0x1f < (uint)pDVar16) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("RootParameterCount < MaxRootParameters",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
                           ,0x1b0,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar11 = (FD3D12RootSignatureDesc *)(*pcVar4)();
      return pFVar11;
    }
    this->RootConstantsSlot = (schar)pDVar16;
    pDVar15 = (D3D12_STATIC_SAMPLER_DESC *)(ulonglong)((uint)pDVar16 + 1);
    *(undefined4 *)(this->TableSlots + (longlong)pDVar16) = 1;
    *(undefined4 *)&this->TableSlots[(longlong)pDVar16].field_0x18 = 0;
    *(undefined4 *)&this->TableSlots[(longlong)pDVar16].field_0x10 = 4;
    *(undefined4 *)&this->TableSlots[(longlong)pDVar16].field_0x8 = 0;
    *(undefined4 *)&this->TableSlots[(longlong)pDVar16].field_0xc = 3;
    this->RootParametersSize = this->RootParametersSize + 2;
  }
  pDVar16 = pDVar15;
  if ((param_1->RootSignatureType == RS_RayTracingGlobal) && (bVar6 = IsRHIDeviceNVIDIA(), bVar6)) {
    if ((0x1f < (uint)pDVar15) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("RootParameterCount < MaxRootParameters",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
                           ,0x1ba,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar11 = (FD3D12RootSignatureDesc *)(*pcVar4)();
      return pFVar11;
    }
    pDVar16 = (D3D12_STATIC_SAMPLER_DESC *)(ulonglong)((uint)pDVar15 + 1);
    pCVar2 = this->DescriptorRanges + (longlong)pDVar15;
    *(undefined4 *)pCVar2 = 1;
    *(undefined8 *)&pCVar2->field_0x4 = 1;
    *(undefined8 *)&pCVar2->field_0xc = 0x3e9;
    *(undefined4 *)&pCVar2->field_0x14 = 0;
    *(undefined4 *)(this->TableSlots + (longlong)pDVar15) = 0;
    *(undefined4 *)&this->TableSlots[(longlong)pDVar15].field_0x18 = 0;
    *(undefined4 *)&this->TableSlots[(longlong)pDVar15].field_0x8 = 1;
    *(CD3DX12_DESCRIPTOR_RANGE1 **)&this->TableSlots[(longlong)pDVar15].field_0x10 = pCVar2;
    this->RootParametersSize = this->RootParametersSize + 2;
  }
  uVar13 = (uint)pDVar16;
  if (bVar8) {
    if ((0x1f < uVar13) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("RootParameterCount < MaxRootParameters",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
                           ,0x1c6,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      pFVar11 = (FD3D12RootSignatureDesc *)(*pcVar4)();
      return pFVar11;
    }
    this->DiagnosticBufferSlot = (schar)pDVar16;
    uVar13 = uVar13 + 1;
    *(undefined4 *)(this->TableSlots + (longlong)pDVar16) = 4;
    *(undefined4 *)&this->TableSlots[(longlong)pDVar16].field_0x18 = 0;
    *(undefined4 *)&this->TableSlots[(longlong)pDVar16].field_0x8 = 0;
    *(undefined4 *)&this->TableSlots[(longlong)pDVar16].field_0xc = 999;
    *(undefined4 *)&this->TableSlots[(longlong)pDVar16].field_0x10 = 2;
    this->RootParametersSize = this->RootParametersSize + 2;
  }
  if (((0xc < this->RootParametersSize) && (param_1->RootSignatureType == RS_Raster)) &&
     (5 < (byte)LogD3D12RHI._0_1_)) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
  }
  EVar3 = param_1->RootSignatureType;
  if (((EVar3 == RS_RayTracingLocal) || (EVar3 == RS_WorkGraphLocalCompute)) ||
     (EVar3 == RS_WorkGraphLocalRaster)) {
    *(undefined4 *)&this->RootDesc = 2;
  }
  else {
    *(undefined4 *)&this->RootDesc = 2;
    if (1 < (int)param_2) {
      *(undefined4 *)&(this->RootDesc).field_0x18 = 6;
      pDVar21 = StaticSamplerDescs;
      goto LAB_145a46020;
    }
  }
  *(undefined4 *)&(this->RootDesc).field_0x18 = 0;
LAB_145a46020:
  *(uint *)&(this->RootDesc).field_0x8 = uVar13;
  *(CD3DX12_ROOT_PARAMETER1 **)&(this->RootDesc).field_0x10 = this->TableSlots;
  *(D3D12_STATIC_SAMPLER_DESC **)&(this->RootDesc).field_0x20 = pDVar21;
  *(uint *)&(this->RootDesc).field_0x28 = uVar18;
  return this;
}

