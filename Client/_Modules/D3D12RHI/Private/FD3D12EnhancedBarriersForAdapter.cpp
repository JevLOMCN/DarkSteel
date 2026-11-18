// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 10

// ~FD3D12EnhancedBarriersForAdapter @ 1459f7790

void __thiscall
FD3D12EnhancedBarriersForAdapter::~FD3D12EnhancedBarriersForAdapter
          (FD3D12EnhancedBarriersForAdapter *this)

{
  *this = (FD3D12EnhancedBarriersForAdapter)&___7FD3D12EnhancedBarriersForAdapter__6B_;
  return;
}

// ConfigureDevice @ 145a09450

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FD3D12EnhancedBarriersForAdapter::ConfigureDevice
          (FD3D12EnhancedBarriersForAdapter *this,ID3D12Device *param_1,bool param_2)

{
  FD3D12DynamicRHI::SetFormatAliasedTexturesMustBeCreatedUsingCommonLayout(false);
  GRHIGlobals.NeedsTransientDiscardStateTracking = false;
  GRHIGlobals.NeedsTransientDiscardOnGraphicsWorkaround = false;
  return;
}

// CreateCommittedResource @ 145a0aa00

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
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "D3D12_BARRIER_LAYOUT": Some values do not have unique names */

undefined4 __thiscall
FD3D12EnhancedBarriersForAdapter::CreateCommittedResource
          (FD3D12EnhancedBarriersForAdapter *this,FD3D12Adapter *param_1,
          D3D12_HEAP_PROPERTIES *param_2,D3D12_HEAP_FLAGS param_3,FD3D12ResourceDesc *param_4,
          ED3D12Access param_5,D3D12_CLEAR_VALUE *param_6,TRefCountPtr<ID3D12Resource> *param_7)

{
  ID3D12Device10 *pIVar1;
  ID3D12Resource *pIVar2;
  code *pcVar3;
  undefined4 uVar4;
  ForElementType<DXGI_FORMAT> FVar5;
  undefined1 auStack_128 [32];
  D3D12_BARRIER_LAYOUT local_108;
  D3D12_CLEAR_VALUE *local_100;
  undefined8 local_f8;
  ForElementType<DXGI_FORMAT> local_e8;
  GUID *local_e0;
  TRefCountPtr<ID3D12Resource> *local_d8;
  D3D12_CLEAR_VALUE *local_c8;
  undefined8 local_c0;
  undefined4 local_a8 [2];
  longlong local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined2 local_8c;
  undefined2 local_8a;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  TArray<DXGI_FORMAT,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_c8 = param_6;
  local_a8[0] = (undefined4)param_4->_padding_;
  local_a0 = param_4->_padding_;
  local_98 = param_4->_padding_;
  local_90 = (undefined4)param_4->_padding_;
  local_8c = *(undefined2 *)((longlong)&param_4->_padding_ + 4);
  local_8a = *(undefined2 *)((longlong)&param_4->_padding_ + 6);
  local_88 = (undefined4)param_4->_padding_;
  local_84 = *(undefined8 *)((longlong)&param_4->_padding_ + 4);
  local_7c = *(undefined4 *)((longlong)&param_4->_padding_ + 4);
  local_78 = (undefined4)param_4->_padding_;
  local_c0 = 0;
  local_74 = 0;
  local_6c = 0;
  FD3D12ResourceDesc::GetCastableFormats(param_4,&local_68);
  if (local_68.ArrayNum == 0) {
    FVar5 = (ForElementType<DXGI_FORMAT>)0x0;
  }
  else {
    FVar5 = (ForElementType<DXGI_FORMAT>)&local_68;
    if (local_68.AllocatorInstance.SecondaryData != (ForElementType<DXGI_FORMAT>)0x0) {
      FVar5 = local_68.AllocatorInstance.SecondaryData;
    }
  }
  if ((int)param_4->_padding_ == 1) {
    local_108 = D3D12_BARRIER_LAYOUT_UNDEFINED;
  }
  else {
    local_108 = GetEBLayout(param_5,Graphics,(FD3D12Texture *)0x0);
  }
  pIVar1 = (param_1->RootDevice10).Reference;
  pIVar2 = param_7->Reference;
  pcVar3 = *(code **)((longlong)*pIVar1 + 0x260);
  if (pIVar2 != (ID3D12Resource *)0x0) {
    param_7->Reference = (ID3D12Resource *)0x0;
    (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
  }
  local_d8 = param_7;
  local_e0 = &_GUID_696442be_a72e_4059_bc79_5b5c98040fad;
  local_f8 = 0;
  local_100 = local_c8;
  local_e8 = FVar5;
  uVar4 = (*pcVar3)(pIVar1,param_2,param_3,local_a8);
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<DXGI_FORMAT>)0x0) {
    FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
  }
  return uVar4;
}

// CreatePlacedResource @ 145a0bcc0

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
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "D3D12_BARRIER_LAYOUT": Some values do not have unique names */

undefined4 __thiscall
FD3D12EnhancedBarriersForAdapter::CreatePlacedResource
          (FD3D12EnhancedBarriersForAdapter *this,FD3D12Adapter *param_1,ID3D12Heap *param_2,
          ulong64 param_3,FD3D12ResourceDesc *param_4,ED3D12Access param_5,
          D3D12_CLEAR_VALUE *param_6,TRefCountPtr<ID3D12Resource> *param_7)

{
  ID3D12Device10 *pIVar1;
  ID3D12Resource *pIVar2;
  code *pcVar3;
  undefined4 uVar4;
  ForElementType<DXGI_FORMAT> FVar5;
  undefined1 auStack_118 [32];
  D3D12_BARRIER_LAYOUT local_f8;
  D3D12_CLEAR_VALUE *local_f0;
  ForElementType<DXGI_FORMAT> local_e0;
  GUID *local_d8;
  TRefCountPtr<ID3D12Resource> *local_d0;
  D3D12_CLEAR_VALUE *local_c8;
  undefined8 local_c0;
  undefined4 local_a8 [2];
  longlong local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined2 local_8c;
  undefined2 local_8a;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  TArray<DXGI_FORMAT,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_c8 = param_6;
  local_a8[0] = (undefined4)param_4->_padding_;
  local_a0 = param_4->_padding_;
  local_98 = param_4->_padding_;
  local_90 = (undefined4)param_4->_padding_;
  local_8c = *(undefined2 *)((longlong)&param_4->_padding_ + 4);
  local_8a = *(undefined2 *)((longlong)&param_4->_padding_ + 6);
  local_88 = (undefined4)param_4->_padding_;
  local_84 = *(undefined8 *)((longlong)&param_4->_padding_ + 4);
  local_7c = *(undefined4 *)((longlong)&param_4->_padding_ + 4);
  local_78 = (undefined4)param_4->_padding_;
  local_c0 = 0;
  local_74 = 0;
  local_6c = 0;
  FD3D12ResourceDesc::GetCastableFormats(param_4,&local_68);
  if (local_68.ArrayNum == 0) {
    FVar5 = (ForElementType<DXGI_FORMAT>)0x0;
  }
  else {
    FVar5 = (ForElementType<DXGI_FORMAT>)&local_68;
    if (local_68.AllocatorInstance.SecondaryData != (ForElementType<DXGI_FORMAT>)0x0) {
      FVar5 = local_68.AllocatorInstance.SecondaryData;
    }
  }
  if ((int)param_4->_padding_ == 1) {
    local_f8 = D3D12_BARRIER_LAYOUT_UNDEFINED;
  }
  else {
    local_f8 = GetEBLayout(param_5,Graphics,(FD3D12Texture *)0x0);
  }
  pIVar1 = (param_1->RootDevice10).Reference;
  pIVar2 = param_7->Reference;
  pcVar3 = *(code **)((longlong)*pIVar1 + 0x268);
  if (pIVar2 != (ID3D12Resource *)0x0) {
    param_7->Reference = (ID3D12Resource *)0x0;
    (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
  }
  local_d0 = param_7;
  local_d8 = &_GUID_696442be_a72e_4059_bc79_5b5c98040fad;
  local_f0 = local_c8;
  local_e0 = FVar5;
  uVar4 = (*pcVar3)(pIVar1,param_2,param_3,local_a8);
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<DXGI_FORMAT>)0x0) {
    FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
  }
  return uVar4;
}

// CreateReservedResource @ 145a0d730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "D3D12_BARRIER_LAYOUT": Some values do not have unique names */

undefined4 __thiscall
FD3D12EnhancedBarriersForAdapter::CreateReservedResource
          (FD3D12EnhancedBarriersForAdapter *this,FD3D12Adapter *param_1,FD3D12ResourceDesc *param_2
          ,ED3D12Access param_3,D3D12_CLEAR_VALUE *param_4,TRefCountPtr<ID3D12Resource> *param_5)

{
  ID3D12Device10 *pIVar1;
  code *pcVar2;
  ID3D12Resource *pIVar3;
  D3D12_BARRIER_LAYOUT DVar4;
  undefined4 uVar5;
  ForElementType<DXGI_FORMAT> FVar6;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  ForElementType<DXGI_FORMAT> local_88;
  GUID *local_80;
  TRefCountPtr<ID3D12Resource> *local_78;
  TArray<DXGI_FORMAT,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FD3D12ResourceDesc::GetCastableFormats(param_2,&local_68);
  if (local_68.ArrayNum == 0) {
    FVar6 = (ForElementType<DXGI_FORMAT>)0x0;
  }
  else {
    FVar6 = (ForElementType<DXGI_FORMAT>)&local_68;
    if (local_68.AllocatorInstance.SecondaryData != (ForElementType<DXGI_FORMAT>)0x0) {
      FVar6 = local_68.AllocatorInstance.SecondaryData;
    }
  }
  if ((int)param_2->_padding_ == 1) {
    DVar4 = D3D12_BARRIER_LAYOUT_UNDEFINED;
  }
  else {
    DVar4 = GetEBLayout(param_3,Graphics,(FD3D12Texture *)0x0);
  }
  pIVar1 = (param_1->RootDevice10).Reference;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0x270);
  pIVar3 = param_5->Reference;
  if (pIVar3 != (ID3D12Resource *)0x0) {
    param_5->Reference = (ID3D12Resource *)0x0;
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  local_78 = param_5;
  local_80 = &_GUID_696442be_a72e_4059_bc79_5b5c98040fad;
  local_98 = 0;
  local_88 = FVar6;
  uVar5 = (*pcVar2)(pIVar1,param_2,DVar4,param_4);
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<DXGI_FORMAT>)0x0) {
    FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
  }
  return uVar5;
}

// CreateTransition @ 145a0fc60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FD3D12EnhancedBarriersForAdapter::CreateTransition
          (FD3D12EnhancedBarriersForAdapter *this,FRHITransition *param_1,
          FRHITransitionCreateInfo *param_2)

{
  FD3D12EnhancedBarriersForAdapterImpl::CreateTransition(param_1,param_2);
  return;
}

// GetImplementationName @ 145a193f0

wchar_t * __thiscall
FD3D12EnhancedBarriersForAdapter::GetImplementationName(FD3D12EnhancedBarriersForAdapter *this)

{
  return L"D3D12EnhancedBarriers";
}

// GetTransitionDataAlignmentBytes @ 145a1b780

ulong64 __thiscall
FD3D12EnhancedBarriersForAdapter::GetTransitionDataAlignmentBytes
          (FD3D12EnhancedBarriersForAdapter *this)

{
  return 8;
}

// GetTransitionDataSizeBytes @ 145a1b7c0

ulong64 __thiscall
FD3D12EnhancedBarriersForAdapter::GetTransitionDataSizeBytes(FD3D12EnhancedBarriersForAdapter *this)

{
  return 0x168;
}

// ReleaseTransition @ 145a2bc50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FD3D12EnhancedBarriersForAdapter::ReleaseTransition
          (FD3D12EnhancedBarriersForAdapter *this,FRHITransition *param_1)

{
  TRHIPipelineArray<TRefCountPtr<FD3D12SyncPoint>_> *pTVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)(&param_1->field_0x8f + GRHITransitionPrivateData_AlignInBytes) &
          ~(GRHITransitionPrivateData_AlignInBytes - 1);
  pTVar1 = *(TRHIPipelineArray<TRefCountPtr<FD3D12SyncPoint>_> **)(uVar2 + 0x158);
  if (*(TRHIPipelineArray<TRefCountPtr<FD3D12SyncPoint>_> **)(uVar2 + 0x158) ==
      (TRHIPipelineArray<TRefCountPtr<FD3D12SyncPoint>_> *)0x0) {
    pTVar1 = (TRHIPipelineArray<TRefCountPtr<FD3D12SyncPoint>_> *)(uVar2 + 0xd8);
  }
  DestructItems<TRHIPipelineArray<TRefCountPtr<FD3D12SyncPoint>_>,int>
            (pTVar1,*(int *)(uVar2 + 0x160));
  if (*(void **)(uVar2 + 0x158) != (void *)0x0) {
    FMemory::Free(*(void **)(uVar2 + 0x158));
  }
  if (*(void **)(uVar2 + 200) != (void *)0x0) {
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(*(void **)(uVar2 + 200));
  }
  return;
}

