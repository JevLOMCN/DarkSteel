// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 5

// FD3D12AdapterDesc @ 1459a7a30

/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */

FD3D12AdapterDesc * __thiscall
FD3D12AdapterDesc::FD3D12AdapterDesc
          (FD3D12AdapterDesc *this,DXGI_ADAPTER_DESC *param_1,int param_2,
          FD3D12DeviceBasicInfo *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FD3D12AdapterDesc *pFVar3;
  FD3D12AdapterDesc *pFVar4;
  DXGI_ADAPTER_DESC *pDVar5;
  longlong lVar6;
  
  lVar6 = 2;
  pFVar3 = this;
  do {
    pDVar5 = param_1;
    pFVar4 = pFVar3;
    pFVar3 = (FD3D12AdapterDesc *)((pFVar4->Desc).Description + 0x40);
    uVar1 = *(undefined8 *)(pDVar5->Description + 4);
    *(undefined8 *)(pFVar4->Desc).Description = *(undefined8 *)pDVar5->Description;
    *(undefined8 *)((pFVar4->Desc).Description + 4) = uVar1;
    uVar1 = *(undefined8 *)(pDVar5->Description + 0xc);
    *(undefined8 *)((pFVar4->Desc).Description + 8) = *(undefined8 *)(pDVar5->Description + 8);
    *(undefined8 *)((pFVar4->Desc).Description + 0xc) = uVar1;
    uVar1 = *(undefined8 *)(pDVar5->Description + 0x14);
    *(undefined8 *)((pFVar4->Desc).Description + 0x10) = *(undefined8 *)(pDVar5->Description + 0x10)
    ;
    *(undefined8 *)((pFVar4->Desc).Description + 0x14) = uVar1;
    uVar1 = *(undefined8 *)(pDVar5->Description + 0x1c);
    *(undefined8 *)((pFVar4->Desc).Description + 0x18) = *(undefined8 *)(pDVar5->Description + 0x18)
    ;
    *(undefined8 *)((pFVar4->Desc).Description + 0x1c) = uVar1;
    uVar1 = *(undefined8 *)(pDVar5->Description + 0x24);
    *(undefined8 *)((pFVar4->Desc).Description + 0x20) = *(undefined8 *)(pDVar5->Description + 0x20)
    ;
    *(undefined8 *)((pFVar4->Desc).Description + 0x24) = uVar1;
    uVar1 = *(undefined8 *)(pDVar5->Description + 0x2c);
    *(undefined8 *)((pFVar4->Desc).Description + 0x28) = *(undefined8 *)(pDVar5->Description + 0x28)
    ;
    *(undefined8 *)((pFVar4->Desc).Description + 0x2c) = uVar1;
    uVar1 = *(undefined8 *)(pDVar5->Description + 0x34);
    *(undefined8 *)((pFVar4->Desc).Description + 0x30) = *(undefined8 *)(pDVar5->Description + 0x30)
    ;
    *(undefined8 *)((pFVar4->Desc).Description + 0x34) = uVar1;
    uVar1 = *(undefined8 *)(pDVar5->Description + 0x3c);
    *(undefined8 *)((pFVar4->Desc).Description + 0x38) = *(undefined8 *)(pDVar5->Description + 0x38)
    ;
    *(undefined8 *)((pFVar4->Desc).Description + 0x3c) = uVar1;
    lVar6 = lVar6 + -1;
    param_1 = (DXGI_ADAPTER_DESC *)(pDVar5->Description + 0x40);
  } while (lVar6 != 0);
  uVar1 = *(undefined8 *)(pDVar5->Description + 0x44);
  *(undefined8 *)(pFVar3->Desc).Description =
       *(undefined8 *)((DXGI_ADAPTER_DESC *)(pDVar5->Description + 0x40))->Description;
  *(undefined8 *)((pFVar4->Desc).Description + 0x44) = uVar1;
  uVar1 = *(undefined8 *)(pDVar5->Description + 0x4c);
  *(undefined8 *)((pFVar4->Desc).Description + 0x48) = *(undefined8 *)(pDVar5->Description + 0x48);
  *(undefined8 *)((pFVar4->Desc).Description + 0x4c) = uVar1;
  uVar1 = *(undefined8 *)(pDVar5->Description + 0x50);
  uVar2 = *(undefined8 *)(pDVar5->Description + 0x54);
  this->AdapterIndex = param_2;
  *(undefined8 *)((pFVar4->Desc).Description + 0x50) = uVar1;
  *(undefined8 *)((pFVar4->Desc).Description + 0x54) = uVar2;
  this->MaxSupportedFeatureLevel = param_3->MaxFeatureLevel;
  this->MaxSupportedShaderModel = param_3->MaxShaderModel;
  this->ResourceBindingTier = param_3->ResourceBindingTier;
  this->ResourceHeapTier = param_3->ResourceHeapTier;
  this->MaxRHIFeatureLevel = param_3->MaxRHIFeatureLevel;
  this->NumDeviceNodes = 1;
  this->bUMA = param_3->bUMA;
  this->bSupportsWaveOps = param_3->bSupportsWaveOps;
  this->bSupportsAtomic64 = param_3->bSupportsAtomic64;
  this->GpuPreference = DXGI_GPU_PREFERENCE_UNSPECIFIED;
  return this;
}

// FD3D12AdapterDesc @ 1459a7b20

/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */

FD3D12AdapterDesc * __thiscall FD3D12AdapterDesc::FD3D12AdapterDesc(FD3D12AdapterDesc *this)

{
  memset(this,0,0x130);
  this->AdapterIndex = -1;
  this->MaxSupportedFeatureLevel = 0;
  this->MaxSupportedShaderModel = D3D_SHADER_MODEL_NONE;
  this->bUMA = false;
  this->bSupportsWaveOps = false;
  this->bSupportsAtomic64 = false;
  this->GpuPreference = DXGI_GPU_PREFERENCE_UNSPECIFIED;
  this->ResourceBindingTier = D3D12_RESOURCE_BINDING_TIER_1;
  this->ResourceHeapTier = D3D12_RESOURCE_HEAP_TIER_1;
  this->MaxRHIFeatureLevel = Num;
  this->NumDeviceNodes = 1;
  return this;
}

// EnumAdapters @ 1459bf4b0

/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */

undefined4 __thiscall
FD3D12AdapterDesc::EnumAdapters
          (FD3D12AdapterDesc *this,IDXGIFactory2 *param_1,IDXGIFactory6 *param_2,
          IDXGIAdapter **param_3)

{
  undefined4 uVar1;
  
  if ((param_2 != (IDXGIFactory6 *)0x0) && (this->GpuPreference != DXGI_GPU_PREFERENCE_UNSPECIFIED))
  {
    uVar1 = (**(code **)((longlong)*param_2 + 0xe8))
                      (param_2,this->AdapterIndex,this->GpuPreference,
                       &_GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,param_3);
    return uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001459bf4fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*param_1 + 0x38))(param_1,this->AdapterIndex,param_3);
  return uVar1;
}

// EnumAdapters @ 1459bf510

undefined4 __cdecl
FD3D12AdapterDesc::EnumAdapters
          (int param_1,DXGI_GPU_PREFERENCE param_2,IDXGIFactory2 *param_3,IDXGIFactory6 *param_4,
          IDXGIAdapter **param_5)

{
  undefined4 uVar1;
  
  if ((param_4 != (IDXGIFactory6 *)0x0) && (param_2 != DXGI_GPU_PREFERENCE_UNSPECIFIED)) {
                    /* WARNING: Could not recover jumptable at 0x0001459bf538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((longlong)*param_4 + 0xe8))
                      (param_4,param_1,param_2,&_GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0);
    return uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001459bf548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*param_3 + 0x38))(param_3,param_1,param_5);
  return uVar1;
}

// IsValid @ 1459c7530

/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */

bool __thiscall FD3D12AdapterDesc::IsValid(FD3D12AdapterDesc *this)

{
  if ((this->MaxSupportedFeatureLevel != 0) && (-1 < this->AdapterIndex)) {
    return true;
  }
  return false;
}

