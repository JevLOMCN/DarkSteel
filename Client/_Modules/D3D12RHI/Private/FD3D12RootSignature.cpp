// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 20

// ShaderStage @ 1459f59a0

ShaderStage * __thiscall FD3D12RootSignature::ShaderStage::ShaderStage(ShaderStage *this)

{
  this->MaxCBVCount = '\0';
  this->MaxSRVCount = '\0';
  this->MaxSamplerCount = '\0';
  this->MaxUAVCount = '\0';
  this->CBVRegisterMask = 0;
  this->bVisible = false;
  return this;
}

// CBVRDBaseBindSlot @ 145a05690

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

uint __thiscall
FD3D12RootSignature::CBVRDBaseBindSlot(FD3D12RootSignature *this,EShaderFrequency param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  switch(param_1) {
  case SF_Vertex:
    return (uint)this->BindSlotMap[6];
  case SF_Mesh:
    return (uint)this->BindSlotMap[0xf];
  case SF_Amplification:
    return (uint)this->BindSlotMap[0x13];
  case SF_Pixel:
    return (uint)this->BindSlotMap[2];
  case SF_Geometry:
    return (uint)this->BindSlotMap[0xb];
  case SF_Compute:
  case SF_NumFrequencies:
    return (uint)this->BindSlotMap[0x17];
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.h"
                     ,0xab,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return 0xffffffff;
}

// InternalAnalyzeSignature<D3D12_ROOT_SIGNATURE_DESC1> @ 145a3d0a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FD3D12RootSignature::InternalAnalyzeSignature<D3D12_ROOT_SIGNATURE_DESC1>
          (FD3D12RootSignature *this,D3D12_ROOT_SIGNATURE_DESC1 *param_1,ERootSignatureType param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  D3D12_ROOT_SIGNATURE_FLAGS DVar3;
  D3D12_ROOT_PARAMETER_TYPE DVar4;
  D3D12_DESCRIPTOR_RANGE_TYPE DVar5;
  D3D12_DESCRIPTOR_RANGE1 *pDVar6;
  uint uVar7;
  code *pcVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  bool bVar17;
  char cVar18;
  uchar uVar19;
  EShaderFrequency EVar20;
  EShaderFrequency EVar21;
  uint uVar22;
  byte bVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  uint uVar27;
  uchar uVar28;
  D3D12_ROOT_PARAMETER1 *pDVar29;
  EShaderFrequency EVar30;
  uint local_res8;
  
  uVar16 = _UNK_15060db2e;
  uVar15 = _UNK_15060db2c;
  uVar14 = _UNK_15060db2a;
  uVar13 = _UNK_15060db28;
  uVar12 = _UNK_15060db26;
  uVar11 = _UNK_15060db24;
  uVar10 = _UNK_15060db22;
  uVar9 = ___xmm_ffffffffffffffffffffffffffffffff;
  *(undefined2 *)this->BindSlotMap = ___xmm_ffffffffffffffffffffffffffffffff;
  *(undefined2 *)(this->BindSlotMap + 2) = uVar10;
  *(undefined2 *)(this->BindSlotMap + 4) = uVar11;
  *(undefined2 *)(this->BindSlotMap + 6) = uVar12;
  *(undefined2 *)(this->BindSlotMap + 8) = uVar13;
  *(undefined2 *)(this->BindSlotMap + 10) = uVar14;
  *(undefined2 *)(this->BindSlotMap + 0xc) = uVar15;
  *(undefined2 *)(this->BindSlotMap + 0xe) = uVar16;
  *(undefined2 *)(this->BindSlotMap + 0x10) = uVar9;
  *(undefined2 *)(this->BindSlotMap + 0x12) = uVar10;
  *(undefined2 *)(this->BindSlotMap + 0x14) = uVar11;
  *(undefined2 *)(this->BindSlotMap + 0x16) = uVar12;
  *(undefined2 *)(this->BindSlotMap + 0x18) = uVar9;
  this->bHasUAVs = '\0';
  this->bHasSamplers = '\0';
  this->bHasRootCBs = '\0';
  this->bHasCBVs = '\0';
  this->bHasSRVs = '\0';
  this->BindSlotOffsetsInDWORDs[0] = '\0';
  this->BindSlotOffsetsInDWORDs[1] = '\0';
  this->BindSlotOffsetsInDWORDs[2] = '\0';
  this->BindSlotOffsetsInDWORDs[3] = '\0';
  this->BindSlotOffsetsInDWORDs[4] = '\0';
  this->BindSlotOffsetsInDWORDs[5] = '\0';
  this->BindSlotOffsetsInDWORDs[6] = '\0';
  this->BindSlotOffsetsInDWORDs[7] = '\0';
  this->BindSlotOffsetsInDWORDs[8] = '\0';
  this->BindSlotOffsetsInDWORDs[9] = '\0';
  this->BindSlotOffsetsInDWORDs[10] = '\0';
  this->BindSlotOffsetsInDWORDs[0xb] = '\0';
  this->BindSlotOffsetsInDWORDs[0xc] = '\0';
  this->BindSlotOffsetsInDWORDs[0xd] = '\0';
  this->BindSlotOffsetsInDWORDs[0xe] = '\0';
  this->BindSlotOffsetsInDWORDs[0xf] = '\0';
  this->BindSlotOffsetsInDWORDs[0x10] = '\0';
  this->BindSlotOffsetsInDWORDs[0x11] = '\0';
  this->BindSlotOffsetsInDWORDs[0x12] = '\0';
  this->BindSlotOffsetsInDWORDs[0x13] = '\0';
  this->BindSlotOffsetsInDWORDs[0x14] = '\0';
  this->BindSlotOffsetsInDWORDs[0x15] = '\0';
  this->BindSlotOffsetsInDWORDs[0x16] = '\0';
  this->BindSlotOffsetsInDWORDs[0x17] = '\0';
  this->BindSlotOffsetsInDWORDs[0x18] = '\0';
  this->BindSlotOffsetsInDWORDs[0x19] = '\0';
  this->BindSlotOffsetsInDWORDs[0x1a] = '\0';
  this->BindSlotOffsetsInDWORDs[0x1b] = '\0';
  this->BindSlotOffsetsInDWORDs[0x1c] = '\0';
  this->BindSlotOffsetsInDWORDs[0x1d] = '\0';
  this->BindSlotOffsetsInDWORDs[0x1e] = '\0';
  this->BindSlotOffsetsInDWORDs[0x1f] = '\0';
  this->TotalRootSignatureSizeInDWORDs = '\0';
  bVar23 = ((char)(param_1->Flags >> 10) << 5 ^ this->field_0xbd) & 0x20U ^ this->field_0xbd;
  this->field_0xbd = bVar23;
  this->field_0xbd = ((char)(param_1->Flags >> 0xb) << 6 ^ bVar23) & 0x40 ^ bVar23;
  DVar3 = param_1->Flags;
  local_res8 = 0;
  if (param_1->NumParameters != 0) {
    do {
      uVar24 = 0xffffffff;
      pDVar29 = param_1->pParameters + local_res8;
      uVar26 = (ulonglong)local_res8;
      DVar4 = pDVar29->ParameterType;
      if (DVar4 == D3D12_ROOT_PARAMETER_TYPE_DESCRIPTOR_TABLE) {
        if (((pDVar29->field1_0x8).DescriptorTable.NumDescriptorRanges != 1) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentParameter.DescriptorTable.NumDescriptorRanges == 1",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
                                ,0x297,L""), bVar17)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar24 = ((pDVar29->field1_0x8).DescriptorTable.pDescriptorRanges)->RegisterSpace;
        this->BindSlotOffsetsInDWORDs[uVar26] = this->TotalRootSignatureSizeInDWORDs;
        cVar18 = ((DVar3 & D3D12_ROOT_SIGNATURE_FLAG_LOCAL_ROOT_SIGNATURE) !=
                 D3D12_ROOT_SIGNATURE_FLAG_NONE) + '\x01';
LAB_145a3d27a:
        this->TotalRootSignatureSizeInDWORDs = this->TotalRootSignatureSizeInDWORDs + cVar18;
      }
      else {
        if (DVar4 == D3D12_ROOT_PARAMETER_TYPE_32BIT_CONSTANTS) {
          uVar24 = (pDVar29->field1_0x8).Constants.RegisterSpace;
          this->BindSlotOffsetsInDWORDs[uVar26] = this->TotalRootSignatureSizeInDWORDs;
          cVar18 = *(char *)((longlong)&pDVar29->field1_0x8 + 8);
          goto LAB_145a3d27a;
        }
        if (((DVar4 == D3D12_ROOT_PARAMETER_TYPE_CBV) || (DVar4 == D3D12_ROOT_PARAMETER_TYPE_SRV))
           || (DVar4 == D3D12_ROOT_PARAMETER_TYPE_UAV)) {
          uVar24 = (pDVar29->field1_0x8).Constants.RegisterSpace;
          this->BindSlotOffsetsInDWORDs[uVar26] = this->TotalRootSignatureSizeInDWORDs;
          this->TotalRootSignatureSizeInDWORDs = this->TotalRootSignatureSizeInDWORDs + '\x02';
        }
        else {
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("!\"Enclosing block should never be called\"",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
                              ,0x2a9,L"");
          if (bVar17) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
      }
      EVar30 = SF_NumFrequencies;
      switch(pDVar29->ShaderVisibility) {
      case D3D12_SHADER_VISIBILITY_ALL:
        if (param_2 != RS_WorkGraphLocalRaster) break;
        if (uVar24 == 2) {
          EVar30 = SF_Mesh;
        }
        else if (uVar24 == 0) {
          EVar30 = SF_Pixel;
        }
        goto LAB_145a3d2b3;
      case D3D12_SHADER_VISIBILITY_VERTEX:
        EVar30 = SF_Vertex;
        break;
      default:
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
                            ,0x2d4,L"");
        if (bVar17) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        break;
      case D3D12_SHADER_VISIBILITY_GEOMETRY:
        EVar30 = SF_Geometry;
        break;
      case D3D12_SHADER_VISIBILITY_PIXEL:
        EVar30 = SF_Pixel;
        break;
      case D3D12_SHADER_VISIBILITY_AMPLIFICATION:
        EVar30 = SF_Amplification;
        break;
      case D3D12_SHADER_VISIBILITY_MESH:
        EVar30 = SF_Mesh;
      }
      if (param_2 == RS_RayTracingGlobal) {
LAB_145a3d33b:
        uVar22 = 1;
      }
      else if (param_2 == RS_RayTracingLocal) {
LAB_145a3d32e:
        uVar22 = 0;
      }
      else {
        if (param_2 == RS_WorkGraphGlobal) goto LAB_145a3d33b;
        if (param_2 == RS_WorkGraphLocalCompute) {
          uVar22 = 2;
        }
        else {
          if (param_2 != RS_WorkGraphLocalRaster) goto LAB_145a3d32e;
LAB_145a3d2b3:
          uVar22 = 2;
          if (EVar30 == SF_Pixel) {
            uVar22 = 0;
          }
        }
      }
      uVar28 = (uchar)local_res8;
      if (uVar24 == 4) {
        uVar19 = this->StaticShaderBindingSlot;
        if (this->StaticShaderBindingSlot < '\0') {
          this->StaticShaderBindingSlot = uVar28;
          this->StaticShaderBindingCount = '\0';
          uVar19 = uVar28;
        }
        this->StaticShaderBindingCount = this->StaticShaderBindingCount + '\x01';
        if ((local_res8 !=
             (int)(char)uVar19 + (pDVar29->field1_0x8).DescriptorTable.NumDescriptorRanges) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("i == StaticShaderBindingSlot + CurrentParameter.Descriptor.ShaderRegister"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
                                ,0x2e6,L""), bVar17)) {
code_r0x000145a3d6ee:
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      else if (uVar22 == uVar24) {
        if ((this->Stage[0].bVisible == false) &&
           (((DVar3 >> 1 & 1) != 0 ||
            ((pDVar29->ShaderVisibility != D3D12_SHADER_VISIBILITY_ALL &&
             (pDVar29->ShaderVisibility != D3D12_SHADER_VISIBILITY_VERTEX)))))) {
          bVar17 = false;
        }
        else {
          bVar17 = true;
        }
        bVar2 = this->Stage[4].bVisible;
        this->Stage[0].bVisible = bVar17;
        if ((bVar2 == false) &&
           (((DVar3 >> 4 & 1) != 0 ||
            ((pDVar29->ShaderVisibility != D3D12_SHADER_VISIBILITY_ALL &&
             (pDVar29->ShaderVisibility != D3D12_SHADER_VISIBILITY_GEOMETRY)))))) {
          bVar17 = false;
        }
        else {
          bVar17 = true;
        }
        this->Stage[4].bVisible = bVar17;
        if ((this->Stage[3].bVisible == false) &&
           (((DVar3 >> 5 & 1) != 0 ||
            ((pDVar29->ShaderVisibility != D3D12_SHADER_VISIBILITY_ALL &&
             (pDVar29->ShaderVisibility != D3D12_SHADER_VISIBILITY_PIXEL)))))) {
          bVar17 = false;
        }
        else {
          bVar17 = true;
        }
        this->Stage[3].bVisible = bVar17;
        if ((this->Stage[1].bVisible == false) &&
           (((DVar3 >> 9 & 1) != 0 ||
            ((pDVar29->ShaderVisibility != D3D12_SHADER_VISIBILITY_ALL &&
             (pDVar29->ShaderVisibility != D3D12_SHADER_VISIBILITY_MESH)))))) {
          bVar17 = false;
        }
        else {
          bVar17 = true;
        }
        this->Stage[1].bVisible = bVar17;
        if ((this->Stage[2].bVisible == false) &&
           (((DVar3 & D3D12_ROOT_SIGNATURE_FLAG_DENY_AMPLIFICATION_SHADER_ROOT_ACCESS) !=
             D3D12_ROOT_SIGNATURE_FLAG_NONE ||
            ((pDVar29->ShaderVisibility != D3D12_SHADER_VISIBILITY_ALL &&
             (pDVar29->ShaderVisibility != D3D12_SHADER_VISIBILITY_AMPLIFICATION)))))) {
          bVar17 = false;
        }
        else {
          bVar17 = true;
        }
        this->Stage[2].bVisible = bVar17;
        if ((this->Stage[5].bVisible == false) &&
           (pDVar29->ShaderVisibility != D3D12_SHADER_VISIBILITY_ALL)) {
          bVar17 = false;
        }
        else {
          bVar17 = true;
        }
        this->Stage[5].bVisible = bVar17;
        if (pDVar29->ParameterType == D3D12_ROOT_PARAMETER_TYPE_DESCRIPTOR_TABLE) {
          if (((pDVar29->field1_0x8).DescriptorTable.NumDescriptorRanges != 1) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("CurrentParameter.DescriptorTable.NumDescriptorRanges == 1",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
                                  ,0x304,L""), bVar17)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pDVar6 = (pDVar29->field1_0x8).DescriptorTable.pDescriptorRanges;
          if ((pDVar6->BaseShaderRegister != 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("CurrentRange.BaseShaderRegister == 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
                                  ,0x307,L""), bVar17)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if ((pDVar6->RegisterSpace != uVar22) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("CurrentRange.RegisterSpace == BindingSpace",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
                                  ,0x308,L""), bVar17)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          DVar5 = pDVar6->RangeType;
          if (DVar5 == D3D12_DESCRIPTOR_RANGE_TYPE_SRV) {
            uVar19 = (uchar)pDVar6->NumDescriptors;
            if (EVar30 == SF_NumFrequencies) {
              this->Stage[0].MaxSRVCount = uVar19;
              this->Stage[1].MaxSRVCount = uVar19;
              this->Stage[2].MaxSRVCount = uVar19;
              this->Stage[3].MaxSRVCount = uVar19;
              this->Stage[4].MaxSRVCount = uVar19;
              this->Stage[5].MaxSRVCount = uVar19;
              SetSRVRDTBindSlot(this,SF_NumFrequencies,uVar28);
            }
            else {
              this->Stage[EVar30].MaxSRVCount = uVar19;
              SetSRVRDTBindSlot(this,EVar30,uVar28);
            }
          }
          else if (DVar5 == D3D12_DESCRIPTOR_RANGE_TYPE_UAV) {
            uVar19 = (uchar)pDVar6->NumDescriptors;
            if (EVar30 == SF_NumFrequencies) {
              this->Stage[0].MaxUAVCount = uVar19;
              this->Stage[1].MaxUAVCount = uVar19;
              this->Stage[2].MaxUAVCount = uVar19;
              this->Stage[3].MaxUAVCount = uVar19;
              this->Stage[4].MaxUAVCount = uVar19;
              this->Stage[5].MaxUAVCount = uVar19;
              SetUAVRDTBindSlot(this,SF_NumFrequencies,uVar28);
            }
            else {
              this->Stage[EVar30].MaxUAVCount = uVar19;
              SetUAVRDTBindSlot(this,EVar30,uVar28);
            }
          }
          else if (DVar5 == D3D12_DESCRIPTOR_RANGE_TYPE_CBV) {
            cVar18 = (char)pDVar6->NumDescriptors;
            if (EVar30 == SF_NumFrequencies) {
              this->Stage[0].MaxCBVCount = this->Stage[0].MaxCBVCount + cVar18;
              this->Stage[1].MaxCBVCount = this->Stage[1].MaxCBVCount + cVar18;
              this->Stage[2].MaxCBVCount = this->Stage[2].MaxCBVCount + cVar18;
              this->Stage[3].MaxCBVCount = this->Stage[3].MaxCBVCount + cVar18;
              this->Stage[4].MaxCBVCount = this->Stage[4].MaxCBVCount + cVar18;
              this->Stage[5].MaxCBVCount = this->Stage[5].MaxCBVCount + cVar18;
            }
            else {
              this->Stage[EVar30].MaxCBVCount = this->Stage[EVar30].MaxCBVCount + cVar18;
            }
            SetCBVRDTBindSlot(this,EVar30,uVar28);
            uVar24 = pDVar6->BaseShaderRegister;
            uVar22 = pDVar6->NumDescriptors + uVar24;
            EVar20 = EVar30;
            if (EVar30 == SF_NumFrequencies) {
              EVar20 = SF_Compute;
              EVar30 = SF_Vertex;
            }
            uVar26 = (ulonglong)EVar30;
            uVar27 = (uint)EVar30;
            while (uVar27 <= EVar20) {
              if (uVar24 < uVar22) {
                bVar23 = (byte)uVar24 & 0x1f;
                uVar25 = 1 << bVar23 | 1U >> 0x20 - bVar23;
                uVar27 = uVar24;
                do {
                  if (((uVar25 & this->Stage[uVar26].CBVRegisterMask) != 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Stage[CurrentStage].CBVRegisterMask & (1 << Register)) == 0"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.h"
                                          ,0x18d,L""), bVar17)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  uVar7 = uVar27 & 0x1f;
                  uVar25 = uVar25 << 1 | (uint)((int)uVar25 < 0);
                  uVar27 = uVar27 + 1;
                  this->Stage[uVar26].CBVRegisterMask =
                       this->Stage[uVar26].CBVRegisterMask | (ushort)(1 << uVar7);
                } while (uVar27 < uVar22);
              }
              uVar27 = (int)uVar26 + 1;
              uVar26 = (ulonglong)uVar27;
            }
          }
          else if (DVar5 == D3D12_DESCRIPTOR_RANGE_TYPE_SAMPLER) {
            uVar19 = (uchar)pDVar6->NumDescriptors;
            if (EVar30 == SF_NumFrequencies) {
              this->Stage[0].MaxSamplerCount = uVar19;
              this->Stage[1].MaxSamplerCount = uVar19;
              this->Stage[2].MaxSamplerCount = uVar19;
              this->Stage[3].MaxSamplerCount = uVar19;
              this->Stage[4].MaxSamplerCount = uVar19;
              this->Stage[5].MaxSamplerCount = uVar19;
              SetSamplersRDTBindSlot(this,SF_NumFrequencies,uVar28);
            }
            else {
              this->Stage[EVar30].MaxSamplerCount = uVar19;
              SetSamplersRDTBindSlot(this,EVar30,uVar28);
            }
          }
          else {
            bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
                                ,0x31e,L"");
            if (bVar17) goto code_r0x000145a3d6ee;
          }
        }
        else if (pDVar29->ParameterType == D3D12_ROOT_PARAMETER_TYPE_CBV) {
          if (((pDVar29->field1_0x8).Constants.RegisterSpace != uVar22) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("CurrentParameter.Descriptor.RegisterSpace == BindingSpace",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
                                  ,0x325,L""), bVar17)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (EVar30 == SF_NumFrequencies) {
            this->Stage[0].MaxCBVCount = this->Stage[0].MaxCBVCount + '\x01';
            this->Stage[1].MaxCBVCount = this->Stage[1].MaxCBVCount + '\x01';
            this->Stage[2].MaxCBVCount = this->Stage[2].MaxCBVCount + '\x01';
            this->Stage[3].MaxCBVCount = this->Stage[3].MaxCBVCount + '\x01';
            this->Stage[4].MaxCBVCount = this->Stage[4].MaxCBVCount + '\x01';
            this->Stage[5].MaxCBVCount = this->Stage[5].MaxCBVCount + '\x01';
          }
          else {
            this->Stage[EVar30].MaxCBVCount = this->Stage[EVar30].MaxCBVCount + '\x01';
          }
          if ((pDVar29->field1_0x8).DescriptorTable.NumDescriptorRanges == 0) {
            SetCBVRDBindSlot(this,EVar30,uVar28);
          }
          EVar21 = EVar30;
          EVar20 = EVar30;
          if (EVar30 == SF_NumFrequencies) {
            EVar20 = SF_Compute;
            EVar21 = SF_Vertex;
          }
          uVar24 = (uint)EVar21;
          uVar26 = (ulonglong)EVar21;
          while (uVar24 <= EVar20) {
            if (((this->Stage[uVar26].CBVRegisterMask >>
                  ((pDVar29->field1_0x8).DescriptorTable.NumDescriptorRanges & 0x1f) & 1) != 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Stage[CurrentStage].CBVRegisterMask & (1 << Register)) == 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.h"
                                    ,0x19d,L""), bVar17)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar24 = (int)uVar26 + 1;
            this->Stage[uVar26].CBVRegisterMask =
                 this->Stage[uVar26].CBVRegisterMask |
                 (ushort)(1 << ((pDVar29->field1_0x8).DescriptorTable.NumDescriptorRanges & 0x1f));
            uVar26 = (ulonglong)uVar24;
          }
          uVar24 = CBVRDBindSlot(this,EVar30,0);
          if ((uVar24 == 0xff) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InvalidBindSlotMapIndex != CBVRDBindSlot(CurrentVisibleSF, 0)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
                                  ,0x331,L""), bVar17)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar24 = (pDVar29->field1_0x8).DescriptorTable.NumDescriptorRanges;
          uVar22 = CBVRDBindSlot(this,EVar30,0);
          if ((local_res8 != uVar22 + uVar24) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("i == CBVRDBindSlot(CurrentVisibleSF, 0) + CurrentParameter.Descriptor.ShaderRegister"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
                                  ,0x332,L""), bVar17)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        else {
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("false",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
                              ,0x338,L"");
          if (bVar17) goto code_r0x000145a3d6ee;
        }
      }
      local_res8 = local_res8 + 1;
    } while (local_res8 < param_1->NumParameters);
  }
  return;
}

// InternalAnalyzeSignature<D3D12_ROOT_SIGNATURE_DESC> @ 145a3d930

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FD3D12RootSignature::InternalAnalyzeSignature<D3D12_ROOT_SIGNATURE_DESC>
          (FD3D12RootSignature *this,D3D12_ROOT_SIGNATURE_DESC *param_1,ERootSignatureType param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  D3D12_ROOT_SIGNATURE_FLAGS DVar3;
  D3D12_ROOT_PARAMETER_TYPE DVar4;
  D3D12_DESCRIPTOR_RANGE_TYPE DVar5;
  D3D12_DESCRIPTOR_RANGE *pDVar6;
  uint uVar7;
  code *pcVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  bool bVar17;
  char cVar18;
  uchar uVar19;
  EShaderFrequency EVar20;
  EShaderFrequency EVar21;
  uint uVar22;
  byte bVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  uint uVar27;
  uchar uVar28;
  D3D12_ROOT_PARAMETER *pDVar29;
  EShaderFrequency EVar30;
  uint local_res8;
  
  uVar16 = _UNK_15060db2e;
  uVar15 = _UNK_15060db2c;
  uVar14 = _UNK_15060db2a;
  uVar13 = _UNK_15060db28;
  uVar12 = _UNK_15060db26;
  uVar11 = _UNK_15060db24;
  uVar10 = _UNK_15060db22;
  uVar9 = ___xmm_ffffffffffffffffffffffffffffffff;
  *(undefined2 *)this->BindSlotMap = ___xmm_ffffffffffffffffffffffffffffffff;
  *(undefined2 *)(this->BindSlotMap + 2) = uVar10;
  *(undefined2 *)(this->BindSlotMap + 4) = uVar11;
  *(undefined2 *)(this->BindSlotMap + 6) = uVar12;
  *(undefined2 *)(this->BindSlotMap + 8) = uVar13;
  *(undefined2 *)(this->BindSlotMap + 10) = uVar14;
  *(undefined2 *)(this->BindSlotMap + 0xc) = uVar15;
  *(undefined2 *)(this->BindSlotMap + 0xe) = uVar16;
  *(undefined2 *)(this->BindSlotMap + 0x10) = uVar9;
  *(undefined2 *)(this->BindSlotMap + 0x12) = uVar10;
  *(undefined2 *)(this->BindSlotMap + 0x14) = uVar11;
  *(undefined2 *)(this->BindSlotMap + 0x16) = uVar12;
  *(undefined2 *)(this->BindSlotMap + 0x18) = uVar9;
  this->bHasUAVs = '\0';
  this->bHasSamplers = '\0';
  this->bHasRootCBs = '\0';
  this->bHasCBVs = '\0';
  this->bHasSRVs = '\0';
  this->BindSlotOffsetsInDWORDs[0] = '\0';
  this->BindSlotOffsetsInDWORDs[1] = '\0';
  this->BindSlotOffsetsInDWORDs[2] = '\0';
  this->BindSlotOffsetsInDWORDs[3] = '\0';
  this->BindSlotOffsetsInDWORDs[4] = '\0';
  this->BindSlotOffsetsInDWORDs[5] = '\0';
  this->BindSlotOffsetsInDWORDs[6] = '\0';
  this->BindSlotOffsetsInDWORDs[7] = '\0';
  this->BindSlotOffsetsInDWORDs[8] = '\0';
  this->BindSlotOffsetsInDWORDs[9] = '\0';
  this->BindSlotOffsetsInDWORDs[10] = '\0';
  this->BindSlotOffsetsInDWORDs[0xb] = '\0';
  this->BindSlotOffsetsInDWORDs[0xc] = '\0';
  this->BindSlotOffsetsInDWORDs[0xd] = '\0';
  this->BindSlotOffsetsInDWORDs[0xe] = '\0';
  this->BindSlotOffsetsInDWORDs[0xf] = '\0';
  this->BindSlotOffsetsInDWORDs[0x10] = '\0';
  this->BindSlotOffsetsInDWORDs[0x11] = '\0';
  this->BindSlotOffsetsInDWORDs[0x12] = '\0';
  this->BindSlotOffsetsInDWORDs[0x13] = '\0';
  this->BindSlotOffsetsInDWORDs[0x14] = '\0';
  this->BindSlotOffsetsInDWORDs[0x15] = '\0';
  this->BindSlotOffsetsInDWORDs[0x16] = '\0';
  this->BindSlotOffsetsInDWORDs[0x17] = '\0';
  this->BindSlotOffsetsInDWORDs[0x18] = '\0';
  this->BindSlotOffsetsInDWORDs[0x19] = '\0';
  this->BindSlotOffsetsInDWORDs[0x1a] = '\0';
  this->BindSlotOffsetsInDWORDs[0x1b] = '\0';
  this->BindSlotOffsetsInDWORDs[0x1c] = '\0';
  this->BindSlotOffsetsInDWORDs[0x1d] = '\0';
  this->BindSlotOffsetsInDWORDs[0x1e] = '\0';
  this->BindSlotOffsetsInDWORDs[0x1f] = '\0';
  this->TotalRootSignatureSizeInDWORDs = '\0';
  bVar23 = ((char)(param_1->Flags >> 10) << 5 ^ this->field_0xbd) & 0x20U ^ this->field_0xbd;
  this->field_0xbd = bVar23;
  this->field_0xbd = ((char)(param_1->Flags >> 0xb) << 6 ^ bVar23) & 0x40 ^ bVar23;
  DVar3 = param_1->Flags;
  local_res8 = 0;
  if (param_1->NumParameters != 0) {
    do {
      uVar24 = 0xffffffff;
      pDVar29 = param_1->pParameters + local_res8;
      uVar26 = (ulonglong)local_res8;
      DVar4 = pDVar29->ParameterType;
      if (DVar4 == D3D12_ROOT_PARAMETER_TYPE_DESCRIPTOR_TABLE) {
        if (((pDVar29->field1_0x8).DescriptorTable.NumDescriptorRanges != 1) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("CurrentParameter.DescriptorTable.NumDescriptorRanges == 1",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
                                ,0x297,L""), bVar17)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar24 = ((pDVar29->field1_0x8).DescriptorTable.pDescriptorRanges)->RegisterSpace;
        this->BindSlotOffsetsInDWORDs[uVar26] = this->TotalRootSignatureSizeInDWORDs;
        cVar18 = ((DVar3 & D3D12_ROOT_SIGNATURE_FLAG_LOCAL_ROOT_SIGNATURE) !=
                 D3D12_ROOT_SIGNATURE_FLAG_NONE) + '\x01';
LAB_145a3db0a:
        this->TotalRootSignatureSizeInDWORDs = this->TotalRootSignatureSizeInDWORDs + cVar18;
      }
      else {
        if (DVar4 == D3D12_ROOT_PARAMETER_TYPE_32BIT_CONSTANTS) {
          uVar24 = (pDVar29->field1_0x8).Constants.RegisterSpace;
          this->BindSlotOffsetsInDWORDs[uVar26] = this->TotalRootSignatureSizeInDWORDs;
          cVar18 = *(char *)((longlong)&pDVar29->field1_0x8 + 8);
          goto LAB_145a3db0a;
        }
        if (((DVar4 == D3D12_ROOT_PARAMETER_TYPE_CBV) || (DVar4 == D3D12_ROOT_PARAMETER_TYPE_SRV))
           || (DVar4 == D3D12_ROOT_PARAMETER_TYPE_UAV)) {
          uVar24 = (pDVar29->field1_0x8).Constants.RegisterSpace;
          this->BindSlotOffsetsInDWORDs[uVar26] = this->TotalRootSignatureSizeInDWORDs;
          this->TotalRootSignatureSizeInDWORDs = this->TotalRootSignatureSizeInDWORDs + '\x02';
        }
        else {
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("!\"Enclosing block should never be called\"",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
                              ,0x2a9,L"");
          if (bVar17) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
      }
      EVar30 = SF_NumFrequencies;
      switch(pDVar29->ShaderVisibility) {
      case D3D12_SHADER_VISIBILITY_ALL:
        if (param_2 != RS_WorkGraphLocalRaster) break;
        if (uVar24 == 2) {
          EVar30 = SF_Mesh;
        }
        else if (uVar24 == 0) {
          EVar30 = SF_Pixel;
        }
        goto LAB_145a3db43;
      case D3D12_SHADER_VISIBILITY_VERTEX:
        EVar30 = SF_Vertex;
        break;
      default:
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
                            ,0x2d4,L"");
        if (bVar17) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        break;
      case D3D12_SHADER_VISIBILITY_GEOMETRY:
        EVar30 = SF_Geometry;
        break;
      case D3D12_SHADER_VISIBILITY_PIXEL:
        EVar30 = SF_Pixel;
        break;
      case D3D12_SHADER_VISIBILITY_AMPLIFICATION:
        EVar30 = SF_Amplification;
        break;
      case D3D12_SHADER_VISIBILITY_MESH:
        EVar30 = SF_Mesh;
      }
      if (param_2 == RS_RayTracingGlobal) {
LAB_145a3dbcb:
        uVar22 = 1;
      }
      else if (param_2 == RS_RayTracingLocal) {
LAB_145a3dbbe:
        uVar22 = 0;
      }
      else {
        if (param_2 == RS_WorkGraphGlobal) goto LAB_145a3dbcb;
        if (param_2 == RS_WorkGraphLocalCompute) {
          uVar22 = 2;
        }
        else {
          if (param_2 != RS_WorkGraphLocalRaster) goto LAB_145a3dbbe;
LAB_145a3db43:
          uVar22 = 2;
          if (EVar30 == SF_Pixel) {
            uVar22 = 0;
          }
        }
      }
      uVar28 = (uchar)local_res8;
      if (uVar24 == 4) {
        uVar19 = this->StaticShaderBindingSlot;
        if (this->StaticShaderBindingSlot < '\0') {
          this->StaticShaderBindingSlot = uVar28;
          this->StaticShaderBindingCount = '\0';
          uVar19 = uVar28;
        }
        this->StaticShaderBindingCount = this->StaticShaderBindingCount + '\x01';
        if ((local_res8 !=
             (int)(char)uVar19 + (pDVar29->field1_0x8).DescriptorTable.NumDescriptorRanges) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("i == StaticShaderBindingSlot + CurrentParameter.Descriptor.ShaderRegister"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
                                ,0x2e6,L""), bVar17)) {
code_r0x000145a3df7e:
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      else if (uVar22 == uVar24) {
        if ((this->Stage[0].bVisible == false) &&
           (((DVar3 >> 1 & 1) != 0 ||
            ((pDVar29->ShaderVisibility != D3D12_SHADER_VISIBILITY_ALL &&
             (pDVar29->ShaderVisibility != D3D12_SHADER_VISIBILITY_VERTEX)))))) {
          bVar17 = false;
        }
        else {
          bVar17 = true;
        }
        bVar2 = this->Stage[4].bVisible;
        this->Stage[0].bVisible = bVar17;
        if ((bVar2 == false) &&
           (((DVar3 >> 4 & 1) != 0 ||
            ((pDVar29->ShaderVisibility != D3D12_SHADER_VISIBILITY_ALL &&
             (pDVar29->ShaderVisibility != D3D12_SHADER_VISIBILITY_GEOMETRY)))))) {
          bVar17 = false;
        }
        else {
          bVar17 = true;
        }
        this->Stage[4].bVisible = bVar17;
        if ((this->Stage[3].bVisible == false) &&
           (((DVar3 >> 5 & 1) != 0 ||
            ((pDVar29->ShaderVisibility != D3D12_SHADER_VISIBILITY_ALL &&
             (pDVar29->ShaderVisibility != D3D12_SHADER_VISIBILITY_PIXEL)))))) {
          bVar17 = false;
        }
        else {
          bVar17 = true;
        }
        this->Stage[3].bVisible = bVar17;
        if ((this->Stage[1].bVisible == false) &&
           (((DVar3 >> 9 & 1) != 0 ||
            ((pDVar29->ShaderVisibility != D3D12_SHADER_VISIBILITY_ALL &&
             (pDVar29->ShaderVisibility != D3D12_SHADER_VISIBILITY_MESH)))))) {
          bVar17 = false;
        }
        else {
          bVar17 = true;
        }
        this->Stage[1].bVisible = bVar17;
        if ((this->Stage[2].bVisible == false) &&
           (((DVar3 & D3D12_ROOT_SIGNATURE_FLAG_DENY_AMPLIFICATION_SHADER_ROOT_ACCESS) !=
             D3D12_ROOT_SIGNATURE_FLAG_NONE ||
            ((pDVar29->ShaderVisibility != D3D12_SHADER_VISIBILITY_ALL &&
             (pDVar29->ShaderVisibility != D3D12_SHADER_VISIBILITY_AMPLIFICATION)))))) {
          bVar17 = false;
        }
        else {
          bVar17 = true;
        }
        this->Stage[2].bVisible = bVar17;
        if ((this->Stage[5].bVisible == false) &&
           (pDVar29->ShaderVisibility != D3D12_SHADER_VISIBILITY_ALL)) {
          bVar17 = false;
        }
        else {
          bVar17 = true;
        }
        this->Stage[5].bVisible = bVar17;
        if (pDVar29->ParameterType == D3D12_ROOT_PARAMETER_TYPE_DESCRIPTOR_TABLE) {
          if (((pDVar29->field1_0x8).DescriptorTable.NumDescriptorRanges != 1) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("CurrentParameter.DescriptorTable.NumDescriptorRanges == 1",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
                                  ,0x304,L""), bVar17)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pDVar6 = (pDVar29->field1_0x8).DescriptorTable.pDescriptorRanges;
          if ((pDVar6->BaseShaderRegister != 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("CurrentRange.BaseShaderRegister == 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
                                  ,0x307,L""), bVar17)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if ((pDVar6->RegisterSpace != uVar22) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("CurrentRange.RegisterSpace == BindingSpace",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
                                  ,0x308,L""), bVar17)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          DVar5 = pDVar6->RangeType;
          if (DVar5 == D3D12_DESCRIPTOR_RANGE_TYPE_SRV) {
            uVar19 = (uchar)pDVar6->NumDescriptors;
            if (EVar30 == SF_NumFrequencies) {
              this->Stage[0].MaxSRVCount = uVar19;
              this->Stage[1].MaxSRVCount = uVar19;
              this->Stage[2].MaxSRVCount = uVar19;
              this->Stage[3].MaxSRVCount = uVar19;
              this->Stage[4].MaxSRVCount = uVar19;
              this->Stage[5].MaxSRVCount = uVar19;
              SetSRVRDTBindSlot(this,SF_NumFrequencies,uVar28);
            }
            else {
              this->Stage[EVar30].MaxSRVCount = uVar19;
              SetSRVRDTBindSlot(this,EVar30,uVar28);
            }
          }
          else if (DVar5 == D3D12_DESCRIPTOR_RANGE_TYPE_UAV) {
            uVar19 = (uchar)pDVar6->NumDescriptors;
            if (EVar30 == SF_NumFrequencies) {
              this->Stage[0].MaxUAVCount = uVar19;
              this->Stage[1].MaxUAVCount = uVar19;
              this->Stage[2].MaxUAVCount = uVar19;
              this->Stage[3].MaxUAVCount = uVar19;
              this->Stage[4].MaxUAVCount = uVar19;
              this->Stage[5].MaxUAVCount = uVar19;
              SetUAVRDTBindSlot(this,SF_NumFrequencies,uVar28);
            }
            else {
              this->Stage[EVar30].MaxUAVCount = uVar19;
              SetUAVRDTBindSlot(this,EVar30,uVar28);
            }
          }
          else if (DVar5 == D3D12_DESCRIPTOR_RANGE_TYPE_CBV) {
            cVar18 = (char)pDVar6->NumDescriptors;
            if (EVar30 == SF_NumFrequencies) {
              this->Stage[0].MaxCBVCount = this->Stage[0].MaxCBVCount + cVar18;
              this->Stage[1].MaxCBVCount = this->Stage[1].MaxCBVCount + cVar18;
              this->Stage[2].MaxCBVCount = this->Stage[2].MaxCBVCount + cVar18;
              this->Stage[3].MaxCBVCount = this->Stage[3].MaxCBVCount + cVar18;
              this->Stage[4].MaxCBVCount = this->Stage[4].MaxCBVCount + cVar18;
              this->Stage[5].MaxCBVCount = this->Stage[5].MaxCBVCount + cVar18;
            }
            else {
              this->Stage[EVar30].MaxCBVCount = this->Stage[EVar30].MaxCBVCount + cVar18;
            }
            SetCBVRDTBindSlot(this,EVar30,uVar28);
            uVar24 = pDVar6->BaseShaderRegister;
            uVar22 = pDVar6->NumDescriptors + uVar24;
            EVar20 = EVar30;
            if (EVar30 == SF_NumFrequencies) {
              EVar20 = SF_Compute;
              EVar30 = SF_Vertex;
            }
            uVar26 = (ulonglong)EVar30;
            uVar27 = (uint)EVar30;
            while (uVar27 <= EVar20) {
              if (uVar24 < uVar22) {
                bVar23 = (byte)uVar24 & 0x1f;
                uVar25 = 1 << bVar23 | 1U >> 0x20 - bVar23;
                uVar27 = uVar24;
                do {
                  if (((uVar25 & this->Stage[uVar26].CBVRegisterMask) != 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Stage[CurrentStage].CBVRegisterMask & (1 << Register)) == 0"
                                          ,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.h"
                                          ,0x18d,L""), bVar17)) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                  uVar7 = uVar27 & 0x1f;
                  uVar25 = uVar25 << 1 | (uint)((int)uVar25 < 0);
                  uVar27 = uVar27 + 1;
                  this->Stage[uVar26].CBVRegisterMask =
                       this->Stage[uVar26].CBVRegisterMask | (ushort)(1 << uVar7);
                } while (uVar27 < uVar22);
              }
              uVar27 = (int)uVar26 + 1;
              uVar26 = (ulonglong)uVar27;
            }
          }
          else if (DVar5 == D3D12_DESCRIPTOR_RANGE_TYPE_SAMPLER) {
            uVar19 = (uchar)pDVar6->NumDescriptors;
            if (EVar30 == SF_NumFrequencies) {
              this->Stage[0].MaxSamplerCount = uVar19;
              this->Stage[1].MaxSamplerCount = uVar19;
              this->Stage[2].MaxSamplerCount = uVar19;
              this->Stage[3].MaxSamplerCount = uVar19;
              this->Stage[4].MaxSamplerCount = uVar19;
              this->Stage[5].MaxSamplerCount = uVar19;
              SetSamplersRDTBindSlot(this,SF_NumFrequencies,uVar28);
            }
            else {
              this->Stage[EVar30].MaxSamplerCount = uVar19;
              SetSamplersRDTBindSlot(this,EVar30,uVar28);
            }
          }
          else {
            bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("false",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
                                ,0x31e,L"");
            if (bVar17) goto code_r0x000145a3df7e;
          }
        }
        else if (pDVar29->ParameterType == D3D12_ROOT_PARAMETER_TYPE_CBV) {
          if (((pDVar29->field1_0x8).Constants.RegisterSpace != uVar22) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("CurrentParameter.Descriptor.RegisterSpace == BindingSpace",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
                                  ,0x325,L""), bVar17)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (EVar30 == SF_NumFrequencies) {
            this->Stage[0].MaxCBVCount = this->Stage[0].MaxCBVCount + '\x01';
            this->Stage[1].MaxCBVCount = this->Stage[1].MaxCBVCount + '\x01';
            this->Stage[2].MaxCBVCount = this->Stage[2].MaxCBVCount + '\x01';
            this->Stage[3].MaxCBVCount = this->Stage[3].MaxCBVCount + '\x01';
            this->Stage[4].MaxCBVCount = this->Stage[4].MaxCBVCount + '\x01';
            this->Stage[5].MaxCBVCount = this->Stage[5].MaxCBVCount + '\x01';
          }
          else {
            this->Stage[EVar30].MaxCBVCount = this->Stage[EVar30].MaxCBVCount + '\x01';
          }
          if ((pDVar29->field1_0x8).DescriptorTable.NumDescriptorRanges == 0) {
            SetCBVRDBindSlot(this,EVar30,uVar28);
          }
          EVar21 = EVar30;
          EVar20 = EVar30;
          if (EVar30 == SF_NumFrequencies) {
            EVar20 = SF_Compute;
            EVar21 = SF_Vertex;
          }
          uVar24 = (uint)EVar21;
          uVar26 = (ulonglong)EVar21;
          while (uVar24 <= EVar20) {
            if (((this->Stage[uVar26].CBVRegisterMask >>
                  ((pDVar29->field1_0x8).DescriptorTable.NumDescriptorRanges & 0x1f) & 1) != 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Stage[CurrentStage].CBVRegisterMask & (1 << Register)) == 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.h"
                                    ,0x19d,L""), bVar17)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar24 = (int)uVar26 + 1;
            this->Stage[uVar26].CBVRegisterMask =
                 this->Stage[uVar26].CBVRegisterMask |
                 (ushort)(1 << ((pDVar29->field1_0x8).DescriptorTable.NumDescriptorRanges & 0x1f));
            uVar26 = (ulonglong)uVar24;
          }
          uVar24 = CBVRDBindSlot(this,EVar30,0);
          if ((uVar24 == 0xff) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InvalidBindSlotMapIndex != CBVRDBindSlot(CurrentVisibleSF, 0)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
                                  ,0x331,L""), bVar17)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar24 = (pDVar29->field1_0x8).DescriptorTable.NumDescriptorRanges;
          uVar22 = CBVRDBindSlot(this,EVar30,0);
          if ((local_res8 != uVar22 + uVar24) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("i == CBVRDBindSlot(CurrentVisibleSF, 0) + CurrentParameter.Descriptor.ShaderRegister"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
                                  ,0x332,L""), bVar17)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        else {
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("false",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
                              ,0x338,L"");
          if (bVar17) goto code_r0x000145a3df7e;
        }
      }
      local_res8 = local_res8 + 1;
    } while (local_res8 < param_1->NumParameters);
  }
  return;
}

// AnalyzeSignature @ 145a51c70

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */

void __thiscall
FD3D12RootSignature::AnalyzeSignature
          (FD3D12RootSignature *this,D3D12_VERSIONED_ROOT_SIGNATURE_DESC *param_1,
          ERootSignatureType param_2)

{
  D3D12_VERSIONED_ROOT_SIGNATURE_DESC *local_res10 [3];
  
  if (param_1->Version == D3D_ROOT_SIGNATURE_VERSION_1) {
    InternalAnalyzeSignature<D3D12_ROOT_SIGNATURE_DESC>
              (this,&(param_1->field1_0x8).Desc_1_0,param_2);
    return;
  }
  if (param_1->Version != D3D_ROOT_SIGNATURE_VERSION_1_1) {
    local_res10[0] = param_1;
    `FD3D12RootSignature::AnalyzeSignature'::__l4::<lambda_1>::operator()(local_res10);
    return;
  }
  InternalAnalyzeSignature<D3D12_ROOT_SIGNATURE_DESC1>(this,&(param_1->field1_0x8).Desc_1_1,param_2)
  ;
  return;
}

// CBVRDBindSlot @ 145a54020

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

uint __thiscall
FD3D12RootSignature::CBVRDBindSlot(FD3D12RootSignature *this,EShaderFrequency param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  switch(param_1) {
  case SF_Vertex:
    return this->BindSlotMap[6] + param_2;
  case SF_Mesh:
    return this->BindSlotMap[0xf] + param_2;
  case SF_Amplification:
    return this->BindSlotMap[0x13] + param_2;
  case SF_Pixel:
    return this->BindSlotMap[2] + param_2;
  case SF_Geometry:
    return this->BindSlotMap[0xb] + param_2;
  case SF_Compute:
  case SF_NumFrequencies:
    return this->BindSlotMap[0x17] + param_2;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.h"
                     ,0xab,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return param_2 - 1;
}

// Init @ 145a6b5a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FD3D12RootSignature::Init
          (FD3D12RootSignature *this,D3D12_VERSIONED_ROOT_SIGNATURE_DESC *param_1,
          ERootSignatureType param_2)

{
  D3D_ROOT_SIGNATURE_VERSION DVar1;
  ID3D10Blob *pIVar2;
  ID3D12RootSignature *pIVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  char *_Str;
  size_t sVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  int iVar11;
  undefined1 auStackY_1d8 [32];
  ID3D10Blob *local_1a0;
  longlong *local_198;
  D3D12_VERSIONED_ROOT_SIGNATURE_DESC *local_190;
  FString local_188;
  FString local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if ((this->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  plVar10 = *(longlong **)(this->_padding_ + 8);
  local_1a0 = (ID3D10Blob *)0x0;
  local_198 = plVar10;
  if ((this->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  DVar1 = *(D3D_ROOT_SIGNATURE_VERSION *)(this->_padding_ + 0xc0);
  if (local_1a0 != (ID3D10Blob *)0x0) {
    (**(code **)((longlong)*local_1a0 + 0x10))();
  }
  pIVar2 = (this->RootSignatureBlob).Reference;
  if (pIVar2 != (ID3D10Blob *)0x0) {
    (this->RootSignatureBlob).Reference = (ID3D10Blob *)0x0;
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  iVar6 = D3DX12SerializeVersionedRootSignature
                    (param_1,DVar1,&(this->RootSignatureBlob).Reference,&local_1a0);
  iVar11 = 1;
  if (local_1a0 != (ID3D10Blob *)0x0) {
    _Str = (char *)(**(code **)((longlong)*local_1a0 + 0x18))();
    local_168._padding_ = 0;
    if (_Str == (char *)0x0) {
      local_168.Ptr = (wchar_t *)0x0;
      local_168.StringLength = 0;
    }
    else {
      sVar7 = strlen(_Str);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_168,_Str,(int)sVar7,Yes);
    }
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    plVar10 = local_198;
    if ((void *)local_168._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_168._padding_);
      plVar10 = local_198;
    }
  }
  if (iVar6 < 0) {
    local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_188.Data.ArrayNum = 0;
    local_188.Data.ArrayMax = 0;
    D3D12RHI::VerifyD3D12Result
              (iVar6,"SerializeHR",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
               ,0x24c,(ID3D12Device *)0x0,&local_188);
  }
  pIVar3 = (this->RootSignature).Reference;
  pcVar4 = *(code **)(*plVar10 + 0x80);
  if (pIVar3 != (ID3D12RootSignature *)0x0) {
    (this->RootSignature).Reference = (ID3D12RootSignature *)0x0;
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  uVar8 = (**(code **)((longlong)*(this->RootSignatureBlob).Reference + 0x20))();
  pIVar2 = (this->RootSignatureBlob).Reference;
  uVar9 = (**(code **)((longlong)*pIVar2 + 0x18))(pIVar2);
  if (GVirtualMGPU == 0) {
    iVar11 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  }
  iVar6 = (*pcVar4)(local_198,iVar11,uVar9,uVar8);
  if (iVar6 < 0) {
    local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_178.Data.ArrayNum = 0;
    local_178.Data.ArrayMax = 0;
    D3D12RHI::VerifyD3D12Result
              (iVar6,
               "Device->CreateRootSignature(FRHIGPUMask::All().GetNative(), RootSignatureBlob->GetBufferPointer(), RootSignatureBlob->GetBufferSize(), IID_PPV_ARGS(RootSignature.GetInitReference()))"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.cpp"
               ,0x252,(ID3D12Device *)0x0,&local_178);
  }
  if (param_1->Version == D3D_ROOT_SIGNATURE_VERSION_1) {
    InternalAnalyzeSignature<D3D12_ROOT_SIGNATURE_DESC>
              (this,&(param_1->field1_0x8).Desc_1_0,param_2);
  }
  else if (param_1->Version == D3D_ROOT_SIGNATURE_VERSION_1_1) {
    InternalAnalyzeSignature<D3D12_ROOT_SIGNATURE_DESC1>
              (this,&(param_1->field1_0x8).Desc_1_1,param_2);
  }
  else {
    local_190 = param_1;
    `FD3D12RootSignature::AnalyzeSignature'::__l4::<lambda_1>::operator()(&local_190);
  }
  if (local_1a0 != (ID3D10Blob *)0x0) {
    (**(code **)((longlong)*local_1a0 + 0x10))();
  }
  return;
}

// Init @ 145a6b880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */

void __thiscall
FD3D12RootSignature::Init(FD3D12RootSignature *this,FD3D12QuantizedBoundShaderState *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 auStack_778 [32];
  FD3D12RootSignatureDesc local_758;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_778;
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentAdapter != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x41,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FD3D12RootSignatureDesc::FD3D12RootSignatureDesc
            (&local_758,param_1,*(D3D12_RESOURCE_BINDING_TIER *)(this->_padding_ + 0x214));
  this->RootConstantsSlot = local_758.RootConstantsSlot;
  this->StaticShaderBindingSlot = local_758.StaticShaderBindingSlot;
  this->StaticShaderBindingCount = local_758.StaticShaderBindingCount;
  this->DiagnosticBufferSlot = local_758.DiagnosticBufferSlot;
  Init(this,(D3D12_VERSIONED_ROOT_SIGNATURE_DESC *)&local_758.RootDesc,param_1->RootSignatureType);
  return;
}

// InitStaticComputeRootSignatureDesc @ 145a6b960

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */

void __thiscall
FD3D12RootSignature::InitStaticComputeRootSignatureDesc
          (FD3D12RootSignature *this,EShaderBindingLayoutFlags param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  CD3DX12_ROOT_PARAMETER1 *pCVar5;
  D3D12_VERSIONED_ROOT_SIGNATURE_DESC *pDVar6;
  int iVar7;
  uint uVar8;
  FBinaryRootSignatureCreator local_a8;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uVar8 = 0;
  local_a8._padding_._4_4_ = 0;
  local_a8._padding_ = (longlong)&___7FBinaryRootSignatureCreator_D3D12ShaderUtils__6B_;
  local_a8.DescriptorRanges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.DescriptorRanges.ArrayNum = 0;
  local_a8.DescriptorRanges.ArrayMax = 0;
  local_a8.Parameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.RootFlags = (D3D12_ROOT_SIGNATURE_FLAGS)((param_1 & InputAssembler) != None);
  local_a8.Parameters.ArrayNum = 0;
  local_a8.Parameters.ArrayMax = 0;
  local_a8.PendingTables.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.PendingTables.ArrayNum = 0;
  local_a8.PendingTables.ArrayMax = 0;
  if ((param_1 & BindlessResources) != None) {
    local_a8.RootFlags =
         local_a8.RootFlags | D3D12_ROOT_SIGNATURE_FLAG_CBV_SRV_UAV_HEAP_DIRECTLY_INDEXED;
  }
  if ((param_1 & BindlessSamplers) != None) {
    local_a8.RootFlags =
         local_a8.RootFlags | D3D12_ROOT_SIGNATURE_FLAG_SAMPLER_HEAP_DIRECTLY_INDEXED;
  }
  local_a8._padding_._0_1_ = param_1;
  D3D12ShaderUtils::FBinaryRootSignatureCreator::AddUnorderedAccessViewParameter
            (&local_a8,0,999,All);
  if ((param_1 & RootConstants) != None) {
    if (*(code **)(local_a8._padding_ + 0x30) ==
        D3D12ShaderUtils::FBinaryRootSignatureCreator::AddConstantsParameter) {
      pCVar5 = TArray<CD3DX12_ROOT_PARAMETER1,TSizedDefaultAllocator<32>_>::AddZeroed_GetRef
                         (&local_a8.Parameters);
      *(undefined4 *)pCVar5 = 1;
      *(undefined4 *)&pCVar5->field_0x18 = 0;
      *(undefined4 *)&pCVar5->field_0x10 = 4;
      *(undefined4 *)&pCVar5->field_0x8 = 0;
      *(undefined4 *)&pCVar5->field_0xc = 3;
    }
    else {
      (**(code **)(local_a8._padding_ + 0x30))(&local_a8,4,0,3);
    }
  }
  if (*(code **)(local_a8._padding_ + 0x28) ==
      D3D12ShaderUtils::FBinaryRootSignatureCreator::AddTable) {
    D3D12ShaderUtils::FBinaryRootSignatureCreator::AddTable
              (&local_a8,All,SRV,0x40,D3D12_DESCRIPTOR_RANGE_FLAG_NONE);
  }
  else {
    (**(code **)(local_a8._padding_ + 0x28))();
  }
  if (*(code **)(local_a8._padding_ + 0x28) ==
      D3D12ShaderUtils::FBinaryRootSignatureCreator::AddTable) {
    D3D12ShaderUtils::FBinaryRootSignatureCreator::AddTable
              (&local_a8,All,CBV,0x10,D3D12_DESCRIPTOR_RANGE_FLAG_NONE);
  }
  else {
    (**(code **)(local_a8._padding_ + 0x28))();
  }
  if (*(code **)(local_a8._padding_ + 0x28) ==
      D3D12ShaderUtils::FBinaryRootSignatureCreator::AddTable) {
    D3D12ShaderUtils::FBinaryRootSignatureCreator::AddTable
              (&local_a8,All,Sampler,0x20,D3D12_DESCRIPTOR_RANGE_FLAG_NONE);
  }
  else {
    (**(code **)(local_a8._padding_ + 0x28))();
  }
  if (*(code **)(local_a8._padding_ + 0x28) ==
      D3D12ShaderUtils::FBinaryRootSignatureCreator::AddTable) {
    D3D12ShaderUtils::FBinaryRootSignatureCreator::AddTable
              (&local_a8,All,UAV,0x10,D3D12_DESCRIPTOR_RANGE_FLAG_NONE);
  }
  else {
    (**(code **)(local_a8._padding_ + 0x28))();
  }
  pDVar6 = D3D12ShaderUtils::FBinaryRootSignatureCreator::Finalize(&local_a8);
  Init(this,pDVar6,RS_Raster);
  iVar7 = local_a8.Parameters.ArrayNum;
  if (0 < local_a8.Parameters.ArrayNum) {
    do {
      uVar4 = 0;
      if ((int)uVar8 < iVar7) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar7 = local_a8.Parameters.ArrayNum;
      }
      local_18 = *(undefined8 *)
                  (local_a8.Parameters.AllocatorInstance.Data + (longlong)(int)uVar8 * 0x20 + 0x10);
      uStack_10 = *(undefined8 *)
                   (local_a8.Parameters.AllocatorInstance.Data + (longlong)(int)uVar8 * 0x20 + 0x10
                   + 8);
      pFVar1 = local_a8.Parameters.AllocatorInstance.Data + (longlong)(int)uVar8 * 0x20;
      if (*(int *)pFVar1 == 1) {
        if ((*(int *)(pFVar1 + 0xc) == 3) && (*(int *)(pFVar1 + 8) == 0)) {
          this->RootConstantsSlot = (schar)uVar8;
        }
      }
      else if (((*(int *)pFVar1 == 4) && (*(int *)(pFVar1 + 0xc) == 999)) &&
              (*(int *)(pFVar1 + 8) == 0)) {
        this->DiagnosticBufferSlot = (schar)uVar8;
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < iVar7);
  }
  if (local_a8.PendingTables.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.PendingTables.AllocatorInstance.Data);
  }
  if (local_a8.Parameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Parameters.AllocatorInstance.Data);
  }
  if (local_a8.DescriptorRanges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.DescriptorRanges.AllocatorInstance.Data);
  }
  return;
}

// InitStaticGraphicsRootSignature @ 145a6bc40

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */

void __thiscall
FD3D12RootSignature::InitStaticGraphicsRootSignature
          (FD3D12RootSignature *this,EShaderBindingLayoutFlags param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  D3D12_VERSIONED_ROOT_SIGNATURE_DESC *pDVar5;
  int iVar6;
  uint uVar7;
  FBinaryRootSignatureCreator local_a8;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uVar7 = 0;
  local_a8._padding_._0_1_ = 0;
  local_a8._12_8_ = 0;
  local_a8._padding_ = (longlong)&___7FBinaryRootSignatureCreator_D3D12ShaderUtils__6B_;
  local_a8.DescriptorRanges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.DescriptorRanges.ArrayNum = 0;
  local_a8.DescriptorRanges.ArrayMax = 0;
  local_a8.Parameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Parameters.ArrayNum = 0;
  local_a8.Parameters.ArrayMax = 0;
  local_a8.PendingTables.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.PendingTables.ArrayNum = 0;
  local_a8.PendingTables.ArrayMax = 0;
  D3D12ShaderUtils::CreateGfxRootSignature((FRootSignatureCreator *)&local_a8,param_1);
  pDVar5 = D3D12ShaderUtils::FBinaryRootSignatureCreator::Finalize(&local_a8);
  Init(this,pDVar5,RS_Raster);
  iVar6 = local_a8.Parameters.ArrayNum;
  if (0 < local_a8.Parameters.ArrayNum) {
    do {
      uVar4 = 0;
      if ((int)uVar7 < iVar6) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar6 = local_a8.Parameters.ArrayNum;
      }
      local_18 = *(undefined8 *)
                  (local_a8.Parameters.AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20 + 0x10);
      uStack_10 = *(undefined8 *)
                   (local_a8.Parameters.AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20 + 0x10
                   + 8);
      pFVar1 = local_a8.Parameters.AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20;
      if (*(int *)pFVar1 == 1) {
        if ((*(int *)(pFVar1 + 0xc) == 3) && (*(int *)(pFVar1 + 8) == 0)) {
          this->RootConstantsSlot = (schar)uVar7;
        }
      }
      else if (((*(int *)pFVar1 == 4) && (*(int *)(pFVar1 + 0xc) == 999)) &&
              (*(int *)(pFVar1 + 8) == 0)) {
        this->DiagnosticBufferSlot = (schar)uVar7;
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < iVar6);
  }
  if (local_a8.PendingTables.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.PendingTables.AllocatorInstance.Data);
  }
  if (local_a8.Parameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Parameters.AllocatorInstance.Data);
  }
  if (local_a8.DescriptorRanges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.DescriptorRanges.AllocatorInstance.Data);
  }
  return;
}

// InitStaticRayTracingGlobalRootSignatureDesc @ 145a6bdd0

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */

void __thiscall
FD3D12RootSignature::InitStaticRayTracingGlobalRootSignatureDesc
          (FD3D12RootSignature *this,EShaderBindingLayoutFlags param_1)

{
  D3D12_VERSIONED_ROOT_SIGNATURE_DESC *pDVar1;
  FBinaryRootSignatureCreator local_88;
  
  local_88._padding_._0_1_ = 0;
  local_88._12_8_ = 0;
  local_88._padding_ = (longlong)&___7FBinaryRootSignatureCreator_D3D12ShaderUtils__6B_;
  local_88.DescriptorRanges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.DescriptorRanges.ArrayNum = 0;
  local_88.DescriptorRanges.ArrayMax = 0;
  local_88.Parameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Parameters.ArrayNum = 0;
  local_88.Parameters.ArrayMax = 0;
  local_88.PendingTables.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.PendingTables.ArrayNum = 0;
  local_88.PendingTables.ArrayMax = 0;
  D3D12ShaderUtils::CreateRayTracingSignature
            ((FRootSignatureCreator *)&local_88,false,D3D12_ROOT_SIGNATURE_FLAG_NONE,param_1);
  pDVar1 = D3D12ShaderUtils::FBinaryRootSignatureCreator::Finalize(&local_88);
  Init(this,pDVar1,RS_RayTracingGlobal);
  if (local_88.PendingTables.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.PendingTables.AllocatorInstance.Data);
  }
  if (local_88.Parameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Parameters.AllocatorInstance.Data);
  }
  if (local_88.DescriptorRanges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.DescriptorRanges.AllocatorInstance.Data);
  }
  return;
}

// InitStaticRayTracingLocalRootSignatureDesc @ 145a6be80

/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */

void __thiscall
FD3D12RootSignature::InitStaticRayTracingLocalRootSignatureDesc
          (FD3D12RootSignature *this,EShaderBindingLayoutFlags param_1)

{
  D3D12_VERSIONED_ROOT_SIGNATURE_DESC *pDVar1;
  FBinaryRootSignatureCreator local_88;
  
  local_88._padding_._0_1_ = 0;
  local_88._12_8_ = 0;
  local_88._padding_ = (longlong)&___7FBinaryRootSignatureCreator_D3D12ShaderUtils__6B_;
  local_88.DescriptorRanges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.DescriptorRanges.ArrayNum = 0;
  local_88.DescriptorRanges.ArrayMax = 0;
  local_88.Parameters.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Parameters.ArrayNum = 0;
  local_88.Parameters.ArrayMax = 0;
  local_88.PendingTables.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.PendingTables.ArrayNum = 0;
  local_88.PendingTables.ArrayMax = 0;
  D3D12ShaderUtils::CreateRayTracingSignature
            ((FRootSignatureCreator *)&local_88,true,D3D12_ROOT_SIGNATURE_FLAG_LOCAL_ROOT_SIGNATURE,
             param_1);
  pDVar1 = D3D12ShaderUtils::FBinaryRootSignatureCreator::Finalize(&local_88);
  Init(this,pDVar1,RS_RayTracingLocal);
  if (local_88.PendingTables.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.PendingTables.AllocatorInstance.Data);
  }
  if (local_88.Parameters.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Parameters.AllocatorInstance.Data);
  }
  if (local_88.DescriptorRanges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.DescriptorRanges.AllocatorInstance.Data);
  }
  return;
}

// SamplerRDTBindSlot @ 145a7caf0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

uint __thiscall
FD3D12RootSignature::SamplerRDTBindSlot(FD3D12RootSignature *this,EShaderFrequency param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  switch(param_1) {
  case SF_Vertex:
    return (uint)this->BindSlotMap[7];
  case SF_Mesh:
    return (uint)this->BindSlotMap[0x10];
  case SF_Amplification:
    return (uint)this->BindSlotMap[0x14];
  case SF_Pixel:
    return (uint)this->BindSlotMap[3];
  case SF_Geometry:
    return (uint)this->BindSlotMap[0xc];
  case SF_Compute:
    return (uint)this->BindSlotMap[0x18];
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.h"
                     ,0x79,L"");
  if (!bVar2) {
    return 0xffffffff;
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}

// SetCBVRDBindSlot @ 145a7cc60

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FD3D12RootSignature::SetCBVRDBindSlot
          (FD3D12RootSignature *this,EShaderFrequency param_1,uchar param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  
  switch(param_1) {
  case SF_Vertex:
    lVar3 = 0x16;
    break;
  case SF_Mesh:
    lVar3 = 0x1f;
    break;
  case SF_Amplification:
    lVar3 = 0x23;
    break;
  case SF_Pixel:
    lVar3 = 0x12;
    break;
  case SF_Geometry:
    lVar3 = 0x1b;
    break;
  case SF_Compute:
  case SF_NumFrequencies:
    lVar3 = 0x27;
    break;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.h"
                       ,0x149,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    return;
  }
  if ((this->BindSlotMap[lVar3 + -0x10] != 0xff) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("*pBindSlot == InvalidBindSlotMapIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.h"
                         ,0x14d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->BindSlotMap[lVar3 + -0x10] = param_2;
  this->bHasRootCBs = '\x01';
  return;
}

// SetCBVRDTBindSlot @ 145a7cd80

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FD3D12RootSignature::SetCBVRDTBindSlot
          (FD3D12RootSignature *this,EShaderFrequency param_1,uchar param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  
  switch(param_1) {
  case SF_Vertex:
    lVar3 = 0x15;
    break;
  case SF_Mesh:
    lVar3 = 0x1e;
    break;
  case SF_Amplification:
    lVar3 = 0x22;
    break;
  case SF_Pixel:
    lVar3 = 0x11;
    break;
  case SF_Geometry:
    lVar3 = 0x1a;
    break;
  case SF_Compute:
  case SF_NumFrequencies:
    lVar3 = 0x26;
    break;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.h"
                       ,0x131,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    return;
  }
  if ((this->BindSlotMap[lVar3 + -0x10] != 0xff) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("*pBindSlot == InvalidBindSlotMapIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.h"
                         ,0x135,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->BindSlotMap[lVar3 + -0x10] = param_2;
  this->bHasCBVs = '\x01';
  return;
}

// SetSRVRDTBindSlot @ 145a7dd20

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FD3D12RootSignature::SetSRVRDTBindSlot
          (FD3D12RootSignature *this,EShaderFrequency param_1,uchar param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  
  switch(param_1) {
  case SF_Vertex:
    lVar3 = 0x14;
    break;
  case SF_Mesh:
    lVar3 = 0x1d;
    break;
  case SF_Amplification:
    lVar3 = 0x21;
    break;
  case SF_Pixel:
    lVar3 = 0x10;
    break;
  case SF_Geometry:
    lVar3 = 0x19;
    break;
  case SF_Compute:
  case SF_NumFrequencies:
    lVar3 = 0x25;
    break;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.h"
                       ,0x119,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    return;
  }
  if ((this->BindSlotMap[lVar3 + -0x10] != 0xff) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("*pBindSlot == InvalidBindSlotMapIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.h"
                         ,0x11d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->BindSlotMap[lVar3 + -0x10] = param_2;
  this->bHasSRVs = '\x01';
  return;
}

// SetSamplersRDTBindSlot @ 145a7de40

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FD3D12RootSignature::SetSamplersRDTBindSlot
          (FD3D12RootSignature *this,EShaderFrequency param_1,uchar param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  
  switch(param_1) {
  case SF_Vertex:
    lVar3 = 0x17;
    break;
  case SF_Mesh:
    lVar3 = 0x20;
    break;
  case SF_Amplification:
    lVar3 = 0x24;
    break;
  case SF_Pixel:
    lVar3 = 0x13;
    break;
  case SF_Geometry:
    lVar3 = 0x1c;
    break;
  case SF_Compute:
  case SF_NumFrequencies:
    lVar3 = 0x28;
    break;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.h"
                       ,0x101,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    return;
  }
  if ((this->BindSlotMap[lVar3 + -0x10] != 0xff) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("*pBindSlot == InvalidBindSlotMapIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.h"
                         ,0x105,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->BindSlotMap[lVar3 + -0x10] = param_2;
  this->bHasSamplers = '\x01';
  return;
}

// SetUAVRDTBindSlot @ 145a7e630

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FD3D12RootSignature::SetUAVRDTBindSlot
          (FD3D12RootSignature *this,EShaderFrequency param_1,uchar param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  
  if ((SF_NumFrequencies < param_1) || ((0x1029U >> (param_1 & 0x1f) & 1) == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SF == SF_Pixel || SF == SF_Vertex || SF == SF_Compute || SF == SF_NumFrequencies"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.h"
                       ,0x155,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  lVar3 = 0x29;
  if (param_1 == SF_Vertex) {
    lVar3 = 0x18;
  }
  if (this->BindSlotMap[lVar3 + -0x10] != 0xff) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("*pBindSlot == InvalidBindSlotMapIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.h"
                       ,0x15a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->BindSlotMap[lVar3 + -0x10] = param_2;
  this->bHasUAVs = '\x01';
  return;
}

// SRVRDTBindSlot @ 145ab8260

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

uint __thiscall
FD3D12RootSignature::SRVRDTBindSlot(FD3D12RootSignature *this,EShaderFrequency param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  switch(param_1) {
  case SF_Vertex:
    return (uint)this->BindSlotMap[4];
  case SF_Mesh:
    return (uint)this->BindSlotMap[0xd];
  case SF_Amplification:
    return (uint)this->BindSlotMap[0x11];
  case SF_Pixel:
    return (uint)this->BindSlotMap[0];
  case SF_Geometry:
    return (uint)this->BindSlotMap[9];
  case SF_Compute:
    return (uint)this->BindSlotMap[0x15];
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.h"
                     ,0x89,L"");
  if (!bVar2) {
    return 0xffffffff;
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return uVar3;
}

// operator() @ 1504d68e0

bool __thiscall `FD3D12RootSignature::AnalyzeSignature'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<84164840557380197>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<84164840557380197>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

