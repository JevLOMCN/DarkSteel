// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 3

// FD3D12QuantizedBoundShaderState @ 145a443b0

FD3D12QuantizedBoundShaderState * __thiscall
FD3D12QuantizedBoundShaderState::FD3D12QuantizedBoundShaderState
          (FD3D12QuantizedBoundShaderState *this,FD3D12QuantizedBoundShaderState *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  
  (this->ShaderBindingLayout).Hash = (param_1->ShaderBindingLayout).Hash;
  (this->ShaderBindingLayout).Flags = (param_1->ShaderBindingLayout).Flags;
  (this->ShaderBindingLayout).NumUniformBufferEntries =
       (param_1->ShaderBindingLayout).NumUniformBufferEntries;
  TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295>::
  TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295>
            (&(this->ShaderBindingLayout).UniformBufferEntries,
             &(param_1->ShaderBindingLayout).UniformBufferEntries);
  uVar1 = *(undefined8 *)((param_1->RegisterCounts).Elements + 2);
  *(undefined8 *)(this->RegisterCounts).Elements = *(undefined8 *)(param_1->RegisterCounts).Elements
  ;
  *(undefined8 *)((this->RegisterCounts).Elements + 2) = uVar1;
  *(undefined8 *)((this->RegisterCounts).Elements + 4) =
       *(undefined8 *)((param_1->RegisterCounts).Elements + 4);
  this->RootSignatureType = param_1->RootSignatureType;
  bVar2 = ((this->field3_0xec).Flags ^ (param_1->field3_0xec).Flags) & 1 ^ (this->field3_0xec).Flags
  ;
  (this->field3_0xec).Flags = bVar2;
  bVar2 = (bVar2 ^ (param_1->field3_0xec).Flags) & 2 ^ bVar2;
  (this->field3_0xec).Flags = bVar2;
  bVar2 = (bVar2 ^ (param_1->field3_0xec).Flags) & 4 ^ bVar2;
  (this->field3_0xec).Flags = bVar2;
  bVar2 = (bVar2 ^ (param_1->field3_0xec).Flags) & 8 ^ bVar2;
  (this->field3_0xec).Flags = bVar2;
  bVar2 = (bVar2 ^ (param_1->field3_0xec).Flags) & 0x10 ^ bVar2;
  (this->field3_0xec).Flags = bVar2;
  bVar2 = (bVar2 ^ (param_1->field3_0xec).Flags) & 0x20 ^ bVar2;
  (this->field3_0xec).Flags = bVar2;
  (this->field3_0xec).Flags =
       (bVar2 ^ (param_1->field3_0xec).Flags) & 0x3f ^ (param_1->field3_0xec).Flags;
  this->field3_0xec = param_1->field3_0xec;
  return this;
}

// operator== @ 145a49820

bool __thiscall
FD3D12QuantizedBoundShaderState::operator==
          (FD3D12QuantizedBoundShaderState *this,FD3D12QuantizedBoundShaderState *param_1)

{
  bool bVar1;
  
  if ((((this->ShaderBindingLayout).Hash == (param_1->ShaderBindingLayout).Hash) &&
      ((this->ShaderBindingLayout).Flags == (param_1->ShaderBindingLayout).Flags)) &&
     ((this->ShaderBindingLayout).NumUniformBufferEntries ==
      (param_1->ShaderBindingLayout).NumUniformBufferEntries)) {
    bVar1 = TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295>::operator==
                      (&(this->ShaderBindingLayout).UniformBufferEntries,
                       &(param_1->ShaderBindingLayout).UniformBufferEntries);
    if (((((bVar1) &&
          ((this->RegisterCounts).Elements[0].SamplerCount ==
           (param_1->RegisterCounts).Elements[0].SamplerCount)) &&
         (((this->RegisterCounts).Elements[0].ConstantBufferCount ==
           (param_1->RegisterCounts).Elements[0].ConstantBufferCount &&
          (((this->RegisterCounts).Elements[0].ShaderResourceCount ==
            (param_1->RegisterCounts).Elements[0].ShaderResourceCount &&
           ((this->RegisterCounts).Elements[0].UnorderedAccessCount ==
            (param_1->RegisterCounts).Elements[0].UnorderedAccessCount)))))) &&
        ((((this->RegisterCounts).Elements[1].SamplerCount ==
           (param_1->RegisterCounts).Elements[1].SamplerCount &&
          ((((((this->RegisterCounts).Elements[1].ConstantBufferCount ==
               (param_1->RegisterCounts).Elements[1].ConstantBufferCount &&
              ((this->RegisterCounts).Elements[1].ShaderResourceCount ==
               (param_1->RegisterCounts).Elements[1].ShaderResourceCount)) &&
             ((this->RegisterCounts).Elements[1].UnorderedAccessCount ==
              (param_1->RegisterCounts).Elements[1].UnorderedAccessCount)) &&
            (((this->RegisterCounts).Elements[2].SamplerCount ==
              (param_1->RegisterCounts).Elements[2].SamplerCount &&
             ((this->RegisterCounts).Elements[2].ConstantBufferCount ==
              (param_1->RegisterCounts).Elements[2].ConstantBufferCount)))) &&
           ((((this->RegisterCounts).Elements[2].ShaderResourceCount ==
              (param_1->RegisterCounts).Elements[2].ShaderResourceCount &&
             (((this->RegisterCounts).Elements[2].UnorderedAccessCount ==
               (param_1->RegisterCounts).Elements[2].UnorderedAccessCount &&
              ((this->RegisterCounts).Elements[3].SamplerCount ==
               (param_1->RegisterCounts).Elements[3].SamplerCount)))) &&
            ((this->RegisterCounts).Elements[3].ConstantBufferCount ==
             (param_1->RegisterCounts).Elements[3].ConstantBufferCount)))))) &&
         ((((((this->RegisterCounts).Elements[3].ShaderResourceCount ==
              (param_1->RegisterCounts).Elements[3].ShaderResourceCount &&
             ((this->RegisterCounts).Elements[3].UnorderedAccessCount ==
              (param_1->RegisterCounts).Elements[3].UnorderedAccessCount)) &&
            ((this->RegisterCounts).Elements[4].SamplerCount ==
             (param_1->RegisterCounts).Elements[4].SamplerCount)) &&
           (((this->RegisterCounts).Elements[4].ConstantBufferCount ==
             (param_1->RegisterCounts).Elements[4].ConstantBufferCount &&
            ((this->RegisterCounts).Elements[4].ShaderResourceCount ==
             (param_1->RegisterCounts).Elements[4].ShaderResourceCount)))) &&
          (((this->RegisterCounts).Elements[4].UnorderedAccessCount ==
            (param_1->RegisterCounts).Elements[4].UnorderedAccessCount &&
           (((this->RegisterCounts).Elements[5].SamplerCount ==
             (param_1->RegisterCounts).Elements[5].SamplerCount &&
            ((this->RegisterCounts).Elements[5].ConstantBufferCount ==
             (param_1->RegisterCounts).Elements[5].ConstantBufferCount)))))))))) &&
       (((this->RegisterCounts).Elements[5].ShaderResourceCount ==
         (param_1->RegisterCounts).Elements[5].ShaderResourceCount &&
        ((((this->RegisterCounts).Elements[5].UnorderedAccessCount ==
           (param_1->RegisterCounts).Elements[5].UnorderedAccessCount &&
          (this->RootSignatureType == param_1->RootSignatureType)) &&
         ((this->field3_0xec).Flags == (param_1->field3_0xec).Flags)))))) {
      return true;
    }
  }
  return false;
}

// InitShaderRegisterCounts @ 145aae7c0

void __cdecl
FD3D12QuantizedBoundShaderState::InitShaderRegisterCounts
          (D3D12_RESOURCE_BINDING_TIER param_1,FShaderCodePackedResourceCounts *param_2,
          FShaderRegisterCounts *param_3,bool param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uchar uVar5;
  uint uVar6;
  byte bVar7;
  
  if (((!param_4) && (param_2->NumUAVs != '\0')) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("bAllowUAVs || (!bAllowUAVs && Counts.NumUAVs == 0)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.cpp"
                         ,0x483,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar7 = param_2->NumSamplers;
  uVar6 = (uint)bVar7;
  if ((int)param_1 < 2) {
    if (bVar7 != 0) {
      uVar1 = (ulonglong)(uVar6 - 1) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uVar6 = 1 << ((byte)lVar2 & 0x1f);
      if (0x20 < uVar6) {
        uVar6 = 0x20;
      }
    }
    param_3->SamplerCount = (uchar)uVar6;
    bVar7 = param_2->NumSRVs;
    uVar6 = (uint)bVar7;
    if (bVar7 != 0) {
      uVar1 = (ulonglong)(bVar7 - 1) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uVar6 = 1 << ((byte)lVar2 & 0x1f);
      if (0x40 < uVar6) {
        uVar6 = 0x40;
      }
    }
    param_3->ShaderResourceCount = (uchar)uVar6;
    bVar7 = param_2->NumCBs;
  }
  else {
    uVar5 = '\0';
    if (bVar7 != 0) {
      uVar5 = ' ';
    }
    param_3->SamplerCount = uVar5;
    uVar5 = '\0';
    if (param_2->NumSRVs != '\0') {
      uVar5 = '@';
    }
    param_3->ShaderResourceCount = uVar5;
    bVar7 = param_2->NumCBs;
    if (2 < (int)param_1) {
      uVar5 = '\x10';
      if (0x10 < bVar7) {
        bVar7 = 0x10;
      }
      param_3->ConstantBufferCount = bVar7;
      if ((param_2->NumUAVs == '\0') || (!param_4)) {
        uVar5 = '\0';
      }
      param_3->UnorderedAccessCount = uVar5;
      return;
    }
  }
  uVar6 = (uint)bVar7;
  if (0x10 < bVar7) {
    uVar1 = (ulonglong)(bVar7 - 1) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar6 = 1 << ((byte)lVar2 & 0x1f);
    if (0x10 < uVar6) {
      uVar6 = 0x10;
    }
  }
  param_3->ConstantBufferCount = (uchar)uVar6;
  if ((param_2->NumUAVs == 0) || (!param_4)) {
    param_3->UnorderedAccessCount = '\0';
  }
  else {
    uVar1 = (ulonglong)(param_2->NumUAVs - 1) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar6 = 1 << ((byte)lVar2 & 0x1f);
    uVar5 = (uchar)uVar6;
    if (0x10 < uVar6) {
      uVar5 = '\x10';
    }
    param_3->UnorderedAccessCount = uVar5;
  }
  return;
}

