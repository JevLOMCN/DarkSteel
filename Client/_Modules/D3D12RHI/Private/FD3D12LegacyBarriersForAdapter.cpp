// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 10

// ~FD3D12LegacyBarriersForAdapter @ 1459f8430

void __thiscall
FD3D12LegacyBarriersForAdapter::~FD3D12LegacyBarriersForAdapter
          (FD3D12LegacyBarriersForAdapter *this)

{
  *this = (FD3D12LegacyBarriersForAdapter)&___7FD3D12LegacyBarriersForAdapter__6B_;
  return;
}

// ConfigureDevice @ 145a09490

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FD3D12LegacyBarriersForAdapter::ConfigureDevice
          (FD3D12LegacyBarriersForAdapter *this,ID3D12Device *param_1,bool param_2)

{
  FD3D12DynamicRHI::SetFormatAliasedTexturesMustBeCreatedUsingCommonLayout(true);
  GRHIGlobals.NeedsTransientDiscardStateTracking = true;
  GRHIGlobals.NeedsTransientDiscardOnGraphicsWorkaround = true;
  return;
}

// CreateCommittedResource @ 145a0adb0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

undefined4 __thiscall
FD3D12LegacyBarriersForAdapter::CreateCommittedResource
          (FD3D12LegacyBarriersForAdapter *this,FD3D12Adapter *param_1,
          D3D12_HEAP_PROPERTIES *param_2,D3D12_HEAP_FLAGS param_3,FD3D12ResourceDesc *param_4,
          ED3D12Access param_5,D3D12_CLEAR_VALUE *param_6,TRefCountPtr<ID3D12Resource> *param_7)

{
  T_HRESULT TVar1;
  
  TVar1 = FD3D12LegacyBarriersForAdapterImpl::CreateCommittedResource
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return TVar1;
}

// CreatePlacedResource @ 145a0c050

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

undefined4 __thiscall
FD3D12LegacyBarriersForAdapter::CreatePlacedResource
          (FD3D12LegacyBarriersForAdapter *this,FD3D12Adapter *param_1,ID3D12Heap *param_2,
          ulong64 param_3,FD3D12ResourceDesc *param_4,ED3D12Access param_5,
          D3D12_CLEAR_VALUE *param_6,TRefCountPtr<ID3D12Resource> *param_7)

{
  T_HRESULT TVar1;
  
  TVar1 = FD3D12LegacyBarriersForAdapterImpl::CreatePlacedResource
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return TVar1;
}

// CreateReservedResource @ 145a0d960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "D3D12_RESOURCE_STATES": Some values do not have unique names */

undefined4 __thiscall
FD3D12LegacyBarriersForAdapter::CreateReservedResource
          (FD3D12LegacyBarriersForAdapter *this,FD3D12Adapter *param_1,FD3D12ResourceDesc *param_2,
          ED3D12Access param_3,D3D12_CLEAR_VALUE *param_4,TRefCountPtr<ID3D12Resource> *param_5)

{
  ID3D12Device12 *pIVar1;
  ID3D12Resource *pIVar2;
  ID3D12Device *pIVar3;
  code *pcVar4;
  bool bVar5;
  D3D12_RESOURCE_STATES DVar6;
  undefined4 uVar7;
  undefined1 auStack_b8 [32];
  GUID *local_98;
  TRefCountPtr<ID3D12Resource> *local_90;
  ForElementType<DXGI_FORMAT> local_88;
  GUID *local_80;
  TRefCountPtr<ID3D12Resource> *local_78;
  TArray<DXGI_FORMAT,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_b8;
  DVar6 = GetD3D12ResourceState(param_3,Direct,param_2,(FD3D12Texture *)0x0);
  if (param_2->UAVPixelFormat == PF_Unknown) {
    pIVar3 = (param_1->RootDevice).Reference;
    pIVar2 = param_5->Reference;
    pcVar4 = *(code **)((longlong)*pIVar3 + 0xf0);
    if (pIVar2 != (ID3D12Resource *)0x0) {
      param_5->Reference = (ID3D12Resource *)0x0;
      (**(code **)((longlong)*pIVar2 + 0x10))();
    }
    local_90 = param_5;
    local_98 = &_GUID_696442be_a72e_4059_bc79_5b5c98040fad;
    uVar7 = (*pcVar4)(pIVar3,param_2,DVar6,param_4);
  }
  else {
    if (param_3 != Common) {
      local_98 = (GUID *)CONCAT44(local_98._4_4_,param_3);
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InInitialD3D12Access == ED3D12Access::Common",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12LegacyBarriers.cpp"
                         ,0x216,
                         L"RESOURCE_STATE_COMMON is required for castable resources (Given: %d)");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return uVar7;
      }
    }
    FD3D12ResourceDesc::GetCastableFormats(param_2,&local_68);
    pIVar1 = (param_1->RootDevice12).Reference;
    pIVar2 = param_5->Reference;
    pcVar4 = *(code **)((longlong)*pIVar1 + 0x270);
    if (pIVar2 != (ID3D12Resource *)0x0) {
      param_5->Reference = (ID3D12Resource *)0x0;
      (**(code **)((longlong)*pIVar2 + 0x10))();
    }
    local_78 = param_5;
    local_88 = (ForElementType<DXGI_FORMAT>)&local_68;
    if (local_68.AllocatorInstance.SecondaryData != (ForElementType<DXGI_FORMAT>)0x0) {
      local_88 = local_68.AllocatorInstance.SecondaryData;
    }
    local_80 = &_GUID_696442be_a72e_4059_bc79_5b5c98040fad;
    local_90 = (TRefCountPtr<ID3D12Resource> *)CONCAT44(local_90._4_4_,local_68.ArrayNum);
    local_98 = (GUID *)0x0;
    uVar7 = (*pcVar4)(pIVar1,param_2,0,param_4);
    if (local_68.AllocatorInstance.SecondaryData != (ForElementType<DXGI_FORMAT>)0x0) {
      FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
    }
  }
  return uVar7;
}

// CreateTransition @ 145a10070

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FD3D12LegacyBarriersForAdapter::CreateTransition
          (FD3D12LegacyBarriersForAdapter *this,FRHITransition *param_1,
          FRHITransitionCreateInfo *param_2)

{
  FD3D12LegacyBarriersForAdapterImpl::CreateTransition(param_1,param_2);
  return;
}

// GetImplementationName @ 145a19400

wchar_t * __thiscall
FD3D12LegacyBarriersForAdapter::GetImplementationName(FD3D12LegacyBarriersForAdapter *this)

{
  return L"D3D12LegacyBarriers";
}

// GetTransitionDataAlignmentBytes @ 145a1b7a0

ulong64 __thiscall
FD3D12LegacyBarriersForAdapter::GetTransitionDataAlignmentBytes
          (FD3D12LegacyBarriersForAdapter *this)

{
  return 8;
}

// GetTransitionDataSizeBytes @ 145a1b7e0

ulong64 __thiscall
FD3D12LegacyBarriersForAdapter::GetTransitionDataSizeBytes(FD3D12LegacyBarriersForAdapter *this)

{
  return 0x250;
}

// ReleaseTransition @ 145a2bd50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FD3D12LegacyBarriersForAdapter::ReleaseTransition
          (FD3D12LegacyBarriersForAdapter *this,FRHITransition *param_1)

{
  TRHIPipelineArray<TRefCountPtr<FD3D12SyncPoint>_> *pTVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)(&param_1->field_0x8f + GRHITransitionPrivateData_AlignInBytes) &
          ~(GRHITransitionPrivateData_AlignInBytes - 1);
  pTVar1 = *(TRHIPipelineArray<TRefCountPtr<FD3D12SyncPoint>_> **)(uVar2 + 0x238);
  if (*(TRHIPipelineArray<TRefCountPtr<FD3D12SyncPoint>_> **)(uVar2 + 0x238) ==
      (TRHIPipelineArray<TRefCountPtr<FD3D12SyncPoint>_> *)0x0) {
    pTVar1 = (TRHIPipelineArray<TRefCountPtr<FD3D12SyncPoint>_> *)(uVar2 + 0x1b8);
  }
  DestructItems<TRHIPipelineArray<TRefCountPtr<FD3D12SyncPoint>_>,int>
            (pTVar1,*(int *)(uVar2 + 0x240));
  if (*(void **)(uVar2 + 0x238) != (void *)0x0) {
    FMemory::Free(*(void **)(uVar2 + 0x238));
  }
  if (*(void **)(uVar2 + 0x1a8) != (void *)0x0) {
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(*(void **)(uVar2 + 0x1a8));
  }
  if (*(void **)(uVar2 + 0x158) != (void *)0x0) {
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(*(void **)(uVar2 + 0x158));
  }
  if (*(void **)(uVar2 + 200) != (void *)0x0) {
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(*(void **)(uVar2 + 200));
  }
  return;
}

