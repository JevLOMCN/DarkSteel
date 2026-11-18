// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 2

// FResidencyManager @ 1459f5510

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FResidencyManager * __thiscall
FD3D12Device::FResidencyManager::FResidencyManager(FResidencyManager *this,FD3D12Device *param_1)

{
  code *pcVar1;
  IDXGIAdapter *pIVar2;
  bool bVar3;
  int iVar4;
  undefined1 *puVar5;
  FResidencyManager *pFVar6;
  undefined8 *puVar7;
  longlong lVar8;
  uint uVar9;
  IDXGIAdapter *local_res8;
  FString local_38;
  FString local_28;
  
  *(undefined8 *)this = 0xffffffffffffffff;
  *(undefined8 *)&this->field_0x8 = 7;
  *(undefined8 *)&this->field_0x18 = 0xffffffffffffffff;
  *(undefined8 *)&this->field_0x10 = 0;
  lVar8 = 8;
  *(undefined8 *)&this->field_0x20 = 0xffffffffffffffff;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->field_0x28,8);
  puVar5 = &this->field_0x90;
  this->field_0x50 = 0;
  *(undefined1 **)&this->field_0x98 = puVar5;
  *(undefined1 **)puVar5 = puVar5;
  puVar5 = &this->field_0xe8;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x108 = 0;
  *(undefined8 *)&this->field_0x110 = 0;
  *(undefined1 **)&this->field_0xf0 = puVar5;
  *(undefined1 **)puVar5 = puVar5;
  puVar5 = &this->field_0xf8;
  *(undefined8 *)&this->field_0x60 = 0;
  uVar9 = 0;
  *(undefined4 *)&this->field_0x78 = 0;
  *(undefined8 *)&this->field_0x80 = 0;
  *(undefined1 **)&this->field_0x100 = puVar5;
  *(undefined1 **)puVar5 = puVar5;
  *(undefined8 *)&this->field_0x88 = 0;
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined8 *)&this->field_0xb8 = 0xffffffffffffffff;
  *(undefined8 *)&this->field_0xc0 = 0xffffffffffffffff;
  *(undefined8 *)&this->field_0xc8 = 0;
  *(undefined8 *)&this->field_0xd0 = 0;
  *(undefined4 *)&this->field_0xd8 = 0;
  *(undefined8 *)&this->field_0xe0 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->field_0x118,8);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->field_0x140,8);
  puVar5 = &this->field_0x68;
  this->field_0x168 = 0;
  *(undefined1 **)&this->field_0x70 = puVar5;
  *(undefined1 **)puVar5 = puVar5;
  puVar5 = &this->field_0xa0;
  *(undefined4 *)&this->field_0x16c = 0x3f800000;
  *(undefined1 **)&this->field_0xa8 = puVar5;
  *(undefined1 **)puVar5 = puVar5;
  *(undefined4 *)&this->field_0x178 = 0x42700000;
  *(undefined4 *)&this->field_0x188 = 0x3f333333;
  *(undefined4 *)&this->field_0x18c = 6;
  *(undefined1 **)&this->field_0x198 = &this->field_0x1a0;
  AllocateLocallyUniqueId((PLUID)&this->field_0x190);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->field_0x1a0,8);
  puVar7 = (undefined8 *)&this->field_0x1c8;
  do {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    puVar7[0xf] = 0;
    lVar8 = lVar8 + -1;
    puVar7 = puVar7 + 0x10;
  } while (lVar8 != 0);
  local_res8 = (IDXGIAdapter *)0x0;
  if (*(longlong *)&param_1->field_0x10 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentAdapter != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x41,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FResidencyManager *)(*pcVar1)();
      return pFVar6;
    }
  }
  puVar7 = *(undefined8 **)(*(longlong *)&param_1->field_0x10 + 0x230);
  iVar4 = (**(code **)*puVar7)(puVar7,&_GUID_645967a4_1392_4310_a798_8053ce3e93fd,&local_res8);
  if (iVar4 < 0) {
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    D3D12RHI::VerifyD3D12Result
              (iVar4,
               "Parent.GetParentAdapter()->GetAdapter()->QueryInterface(IID_PPV_ARGS(&DxgiAdapter3))"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Device.cpp"
               ,0xaf,(ID3D12Device *)0x0,&local_38);
  }
  pIVar2 = local_res8;
  if (GVirtualMGPU == 0) {
    uVar9 = *(uint *)&param_1->field_0x8;
  }
  if (*(longlong *)&param_1->field_0x10 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentAdapter != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x41,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar6 = (FResidencyManager *)(*pcVar1)();
      return pFVar6;
    }
  }
  if (GEnableResidencyManagement != false) {
    iVar4 = D3DX12Residency::Internal::ResidencyManagerInternal::Initialize
                      ((ResidencyManagerInternal *)this,
                       *(ID3D12Device **)(*(longlong *)&param_1->field_0x10 + 8),uVar9,pIVar2,6);
    if (iVar4 < 0) {
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      D3D12RHI::VerifyD3D12Result
                (iVar4,"ResidencyManager.Initialize(Device, GPUIndex, Adapter, MaxLatency)",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Residency.h"
                 ,0x6e,(ID3D12Device *)0x0,&local_28);
    }
  }
  return this;
}

// ~FResidencyManager @ 1459f9ab0

void __thiscall FD3D12Device::FResidencyManager::~FResidencyManager(FResidencyManager *this)

{
  if (GEnableResidencyManagement) {
    D3DX12Residency::Internal::ResidencyManagerInternal::Destroy((ResidencyManagerInternal *)this);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->field_0x1a0);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->field_0x140);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->field_0x118);
                    /* WARNING: Could not recover jumptable at 0x0001459f9af7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->field_0x28);
  return;
}

