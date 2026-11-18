// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 1

// CreateCommandSignatures @ 145a9ea50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FWindowsD3D12Adapter::CreateCommandSignatures(FWindowsD3D12Adapter *this)

{
  undefined1 *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined1 auStackY_108 [32];
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 *local_d0;
  int local_c8;
  undefined4 local_c4;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  FString local_80;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 *local_68;
  int local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_108;
  plVar2 = *(longlong **)&this->field_0x8;
  iVar7 = 1;
  if (GRHIGlobals.RayTracing.Supported) {
    local_48 = 0;
    local_40 = 0;
    iVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,0x1b,&local_48,0xc);
    if ((iVar6 < 0) || (local_40 < 0xb)) goto LAB_145a9eac1;
    GRHIGlobals.RayTracing.SupportsDispatchIndirect = true;
  }
  else {
LAB_145a9eac1:
    if (GRHIGlobals.RayTracing.SupportsDispatchIndirect == false) goto LAB_145a9ebb5;
  }
  local_60 = 1;
  local_5c = 0;
  local_6c = 1;
  local_70 = 0x68;
  if (GVirtualMGPU == 0) {
    local_60 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  }
  puVar1 = &this->field_0x4f0;
  local_68 = &local_58;
  uStack_50 = 0;
  local_58 = 9;
  if (*(longlong *)puVar1 != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("DispatchRaysIndirectCommandSignature == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Device.cpp"
                       ,0x863,
                       L"Indirect ray tracing dispatch command signature is expected to be initialized by FWindowsD3D12Adapter."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  plVar3 = *(longlong **)puVar1;
  pcVar4 = *(code **)(*plVar2 + 0x148);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)puVar1 = 0;
    (**(code **)(*plVar3 + 0x10))();
  }
  iVar6 = (*pcVar4)(plVar2,&local_70,0,&_GUID_c36a797c_ec80_4f0a_8985_a7b2475082d1);
  if (iVar6 < 0) {
    local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c0.Data.ArrayNum = 0;
    local_c0.Data.ArrayMax = 0;
    D3D12RHI::VerifyD3D12Result
              (iVar6,
               "Device->CreateCommandSignature(&SignatureDesc, nullptr, IID_PPV_ARGS(DispatchRaysIndirectCommandSignature.GetInitReference()))"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Device.cpp"
               ,0x864,(ID3D12Device *)0x0,&local_c0);
  }
LAB_145a9ebb5:
  local_c4 = 0;
  local_d4 = 1;
  local_d8 = 0xc;
  if (GVirtualMGPU == 0) {
    iVar7 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  }
  local_d0 = &local_90;
  puVar1 = &this->field_0x4d8;
  uStack_88 = 0;
  local_90 = 2;
  local_c8 = iVar7;
  if (*(longlong *)puVar1 != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("DispatchIndirectGraphicsCommandSignature == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Device.cpp"
                       ,0x874,
                       L"Indirect graphics dispatch command signature is expected to be initialized by FWindowsD3D12Adapter."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  plVar3 = *(longlong **)puVar1;
  pcVar4 = *(code **)(*plVar2 + 0x148);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)puVar1 = 0;
    (**(code **)(*plVar3 + 0x10))();
  }
  iVar7 = (*pcVar4)(plVar2,&local_d8,0,&_GUID_c36a797c_ec80_4f0a_8985_a7b2475082d1);
  if (iVar7 < 0) {
    local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b0.Data.ArrayNum = 0;
    local_b0.Data.ArrayMax = 0;
    D3D12RHI::VerifyD3D12Result
              (iVar7,
               "Device->CreateCommandSignature(&CommandSignatureDesc, nullptr, IID_PPV_ARGS(DispatchIndirectGraphicsCommandSignature.GetInitReference()))"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Device.cpp"
               ,0x875,(ID3D12Device *)0x0,&local_b0);
  }
  puVar1 = &this->field_0x4e0;
  if (*(longlong *)puVar1 != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("DispatchIndirectComputeCommandSignature == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Device.cpp"
                       ,0x877,
                       L"Indirect compute dispatch command signature is expected to be initialized by FWindowsD3D12Adapter."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  plVar3 = *(longlong **)puVar1;
  pcVar4 = *(code **)(*plVar2 + 0x148);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)puVar1 = 0;
    (**(code **)(*plVar3 + 0x10))();
  }
  iVar7 = (*pcVar4)(plVar2,&local_d8,0,&_GUID_c36a797c_ec80_4f0a_8985_a7b2475082d1);
  if (iVar7 < 0) {
    local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a0.Data.ArrayNum = 0;
    local_a0.Data.ArrayMax = 0;
    D3D12RHI::VerifyD3D12Result
              (iVar7,
               "Device->CreateCommandSignature(&CommandSignatureDesc, nullptr, IID_PPV_ARGS(DispatchIndirectComputeCommandSignature.GetInitReference()))"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Device.cpp"
               ,0x878,(ID3D12Device *)0x0,&local_a0);
  }
  if (GRHIGlobals.SupportsMeshShadersTier0 != false) {
    plVar3 = *(longlong **)&this->field_0x4e8;
    local_90 = CONCAT44(local_90._4_4_,10);
    local_d8 = 0xc;
    pcVar4 = *(code **)(*plVar2 + 0x148);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)&this->field_0x4e8 = 0;
      (**(code **)(*plVar3 + 0x10))();
    }
    iVar7 = (*pcVar4)(plVar2,&local_d8,0,&_GUID_c36a797c_ec80_4f0a_8985_a7b2475082d1);
    if (iVar7 < 0) {
      local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_80.Data.ArrayNum = 0;
      local_80.Data.ArrayMax = 0;
      D3D12RHI::VerifyD3D12Result
                (iVar7,
                 "Device->CreateCommandSignature(&CommandSignatureDesc, nullptr, IID_PPV_ARGS(DispatchIndirectMeshCommandSignature.GetInitReference()))"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12Device.cpp"
                 ,0x87f,(ID3D12Device *)0x0,&local_80);
    }
  }
  FD3D12Adapter::CreateCommandSignatures((FD3D12Adapter *)this);
  return;
}

