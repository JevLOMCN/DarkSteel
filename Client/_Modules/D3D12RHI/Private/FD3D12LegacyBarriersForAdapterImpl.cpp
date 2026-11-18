// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 9

// ConfigureDevice @ 145a094b0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl FD3D12LegacyBarriersForAdapterImpl::ConfigureDevice(ID3D12Device *param_1,bool param_2)

{
  FD3D12DynamicRHI::SetFormatAliasedTexturesMustBeCreatedUsingCommonLayout(true);
  GRHIGlobals.NeedsTransientDiscardStateTracking = true;
  GRHIGlobals.NeedsTransientDiscardOnGraphicsWorkaround = true;
  return;
}

// CreateCommittedResource @ 145a0ae00

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

undefined4 __cdecl
FD3D12LegacyBarriersForAdapterImpl::CreateCommittedResource
          (FD3D12Adapter *param_1,D3D12_HEAP_PROPERTIES *param_2,D3D12_HEAP_FLAGS param_3,
          FD3D12ResourceDesc *param_4,ED3D12Access param_5,D3D12_CLEAR_VALUE *param_6,
          TRefCountPtr<ID3D12Resource> *param_7)

{
  ID3D12Resource *pIVar1;
  ID3D12Device12 *pIVar2;
  ID3D12Device *pIVar3;
  code *pcVar4;
  bool bVar5;
  D3D12_RESOURCE_STATES DVar6;
  undefined4 uVar7;
  undefined1 auStack_188 [32];
  D3D12_RESOURCE_STATES local_168;
  D3D12_CLEAR_VALUE *local_160;
  GUID *local_158;
  TRefCountPtr<ID3D12Resource> *local_150;
  ForElementType<DXGI_FORMAT> local_148;
  GUID *local_140;
  TRefCountPtr<ID3D12Resource> *local_138;
  D3D12_HEAP_FLAGS local_128;
  D3D12_CLEAR_VALUE *local_120;
  undefined8 local_118;
  undefined4 local_110;
  longlong *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_e8 [2];
  longlong local_e0;
  longlong local_d8;
  undefined4 local_d0;
  undefined2 local_cc;
  undefined2 local_ca;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  TArray<DXGI_FORMAT,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_a8;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_188;
  local_120 = param_6;
  local_128 = param_3;
  DVar6 = GetD3D12ResourceState(param_5,Direct,param_4,(FD3D12Texture *)0x0);
  if (((param_4->bRequires64BitAtomicSupport) && (bVar5 = IsRHIDeviceIntel(), bVar5)) &&
     (GDX12INTCAtomicUInt64Emulation != false)) {
    local_88 = param_4->_padding_;
    lStack_80 = param_4->_padding_;
    pIVar1 = param_7->Reference;
    local_100 = 0;
    local_f8 = 1;
    local_78 = param_4->_padding_;
    lStack_70 = param_4->_padding_;
    local_68 = (undefined4)param_4->_padding_;
    uStack_64 = *(undefined4 *)((longlong)&param_4->_padding_ + 4);
    uStack_60 = (undefined4)param_4->_padding_;
    uStack_5c = *(undefined4 *)((longlong)&param_4->_padding_ + 4);
    local_58 = param_4->_padding_;
    local_108 = &local_88;
    if (pIVar1 != (ID3D12Resource *)0x0) {
      param_7->Reference = (ID3D12Resource *)0x0;
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
    local_150 = param_7;
    local_158 = &_GUID_696442be_a72e_4059_bc79_5b5c98040fad;
    local_160 = local_120;
    local_168 = DVar6;
    uVar7 = INTC_D3D12_CreateCommittedResource
                      (FD3D12DynamicRHI::SingleD3DRHI->IntelExtensionContext,param_2,param_3,
                       &local_108);
  }
  else if (param_4->UAVPixelFormat == PF_Unknown) {
    pIVar3 = (param_1->RootDevice).Reference;
    pIVar1 = param_7->Reference;
    pcVar4 = *(code **)((longlong)*pIVar3 + 0xd8);
    if (pIVar1 != (ID3D12Resource *)0x0) {
      param_7->Reference = (ID3D12Resource *)0x0;
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
    local_150 = param_7;
    local_158 = &_GUID_696442be_a72e_4059_bc79_5b5c98040fad;
    local_160 = local_120;
    local_168 = DVar6;
    uVar7 = (*pcVar4)(pIVar3,param_2,local_128,param_4);
  }
  else {
    local_e8[0] = (undefined4)param_4->_padding_;
    local_e0 = param_4->_padding_;
    local_d8 = param_4->_padding_;
    local_d0 = (undefined4)param_4->_padding_;
    local_cc = *(undefined2 *)((longlong)&param_4->_padding_ + 4);
    local_ca = *(undefined2 *)((longlong)&param_4->_padding_ + 6);
    local_c8 = (undefined4)param_4->_padding_;
    local_c4 = *(undefined8 *)((longlong)&param_4->_padding_ + 4);
    local_bc = *(undefined4 *)((longlong)&param_4->_padding_ + 4);
    local_b8 = (undefined4)param_4->_padding_;
    local_118 = 0;
    local_b4 = 0;
    local_110 = 0;
    local_ac = 0;
    if ((DVar6 != D3D12_RESOURCE_STATE_COMMON) &&
       (local_168 = DVar6,
       bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("InitialState == D3D12_RESOURCE_STATE_COMMON",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12LegacyBarriers.cpp"
                          ,0x1e9,
                          L"RESOURCE_STATE_COMMON is required for castable resources (Given: %d)"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return uVar7;
    }
    FD3D12ResourceDesc::GetCastableFormats(param_4,&local_a8);
    pIVar2 = (param_1->RootDevice12).Reference;
    pIVar1 = param_7->Reference;
    pcVar4 = *(code **)((longlong)*pIVar2 + 0x260);
    if (pIVar1 != (ID3D12Resource *)0x0) {
      param_7->Reference = (ID3D12Resource *)0x0;
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
    local_138 = param_7;
    local_148 = (ForElementType<DXGI_FORMAT>)&local_a8;
    if (local_a8.AllocatorInstance.SecondaryData != (ForElementType<DXGI_FORMAT>)0x0) {
      local_148 = local_a8.AllocatorInstance.SecondaryData;
    }
    local_140 = &_GUID_696442be_a72e_4059_bc79_5b5c98040fad;
    local_150 = (TRefCountPtr<ID3D12Resource> *)CONCAT44(local_150._4_4_,local_a8.ArrayNum);
    local_158 = (GUID *)0x0;
    local_160 = local_120;
    local_168 = 0;
    uVar7 = (*pcVar4)(pIVar2,param_2,param_3,local_e8);
    if (local_a8.AllocatorInstance.SecondaryData != (ForElementType<DXGI_FORMAT>)0x0) {
      FMemory::Free((void *)local_a8.AllocatorInstance.SecondaryData);
    }
  }
  return uVar7;
}

// CreatePlacedResource @ 145a0c0a0

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

undefined4 __cdecl
FD3D12LegacyBarriersForAdapterImpl::CreatePlacedResource
          (FD3D12Adapter *param_1,ID3D12Heap *param_2,ulong64 param_3,FD3D12ResourceDesc *param_4,
          ED3D12Access param_5,D3D12_CLEAR_VALUE *param_6,TRefCountPtr<ID3D12Resource> *param_7)

{
  ID3D12Resource *pIVar1;
  ID3D12Device10 *pIVar2;
  ID3D12Device *pIVar3;
  code *pcVar4;
  bool bVar5;
  D3D12_RESOURCE_STATES DVar6;
  undefined4 uVar7;
  undefined1 auStack_178 [32];
  D3D12_RESOURCE_STATES local_158;
  D3D12_CLEAR_VALUE *local_150;
  GUID *local_148;
  ForElementType<DXGI_FORMAT> local_140;
  GUID *local_138;
  TRefCountPtr<ID3D12Resource> *local_130;
  code *local_128;
  D3D12_CLEAR_VALUE *local_118;
  longlong *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8 [2];
  longlong local_f0;
  longlong local_e8;
  undefined4 local_e0;
  undefined2 local_dc;
  undefined2 local_da;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  TArray<DXGI_FORMAT,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_b8;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong lStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_118 = param_6;
  DVar6 = GetD3D12ResourceState(param_5,Direct,param_4,(FD3D12Texture *)0x0);
  if (((param_4->bRequires64BitAtomicSupport) && (bVar5 = IsRHIDeviceIntel(), bVar5)) &&
     (GDX12INTCAtomicUInt64Emulation != false)) {
    local_98 = param_4->_padding_;
    lStack_90 = param_4->_padding_;
    pIVar1 = param_7->Reference;
    local_108 = 0;
    local_110 = &local_98;
    local_100 = 1;
    local_88 = param_4->_padding_;
    lStack_80 = param_4->_padding_;
    local_78 = (undefined4)param_4->_padding_;
    uStack_74 = *(undefined4 *)((longlong)&param_4->_padding_ + 4);
    uStack_70 = (undefined4)param_4->_padding_;
    uStack_6c = *(undefined4 *)((longlong)&param_4->_padding_ + 4);
    local_68 = (undefined4)param_4->_padding_;
    uStack_64 = *(undefined4 *)((longlong)&param_4->_padding_ + 4);
    uStack_60._0_1_ = param_4->PixelFormat;
    uStack_60._1_1_ = param_4->UAVPixelFormat;
    uStack_60._2_2_ = *(undefined2 *)&param_4->field_0x3a;
    uStack_5c = *(undefined4 *)&param_4->field_0x3c;
    if (pIVar1 != (ID3D12Resource *)0x0) {
      param_7->Reference = (ID3D12Resource *)0x0;
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
    local_140 = (ForElementType<DXGI_FORMAT>)param_7;
    local_148 = &_GUID_696442be_a72e_4059_bc79_5b5c98040fad;
    local_150 = param_6;
    local_158 = DVar6;
    uVar7 = INTC_D3D12_CreatePlacedResource
                      (FD3D12DynamicRHI::SingleD3DRHI->IntelExtensionContext,param_2,param_3,
                       &local_110);
  }
  else if (param_4->UAVPixelFormat == PF_Unknown) {
    pIVar3 = (param_1->RootDevice).Reference;
    pIVar1 = param_7->Reference;
    local_128 = *(code **)((longlong)*pIVar3 + 0xe8);
    if (pIVar1 != (ID3D12Resource *)0x0) {
      param_7->Reference = (ID3D12Resource *)0x0;
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
    local_140 = (ForElementType<DXGI_FORMAT>)param_7;
    local_148 = &_GUID_696442be_a72e_4059_bc79_5b5c98040fad;
    local_150 = local_118;
    local_158 = DVar6;
    uVar7 = (*local_128)(pIVar3,param_2,param_3,param_4);
  }
  else {
    if ((DVar6 != D3D12_RESOURCE_STATE_COMMON) &&
       (local_158 = DVar6,
       bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("InitialState == D3D12_RESOURCE_STATE_COMMON",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12LegacyBarriers.cpp"
                          ,0x256,
                          L"RESOURCE_STATE_COMMON is required for castable resources (Given: %d)"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return uVar7;
    }
    local_f8[0] = (undefined4)param_4->_padding_;
    local_f0 = param_4->_padding_;
    local_e8 = param_4->_padding_;
    local_e0 = (undefined4)param_4->_padding_;
    local_dc = *(undefined2 *)((longlong)&param_4->_padding_ + 4);
    local_da = *(undefined2 *)((longlong)&param_4->_padding_ + 6);
    local_d8 = (undefined4)param_4->_padding_;
    local_d4 = *(undefined8 *)((longlong)&param_4->_padding_ + 4);
    local_cc = *(undefined4 *)((longlong)&param_4->_padding_ + 4);
    local_c8 = (undefined4)param_4->_padding_;
    local_128 = (code *)0x0;
    local_c4 = 0;
    local_bc = 0;
    FD3D12ResourceDesc::GetCastableFormats(param_4,&local_b8);
    pIVar2 = (param_1->RootDevice10).Reference;
    pIVar1 = param_7->Reference;
    pcVar4 = *(code **)((longlong)*pIVar2 + 0x268);
    if (pIVar1 != (ID3D12Resource *)0x0) {
      param_7->Reference = (ID3D12Resource *)0x0;
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
    local_130 = param_7;
    local_140 = (ForElementType<DXGI_FORMAT>)&local_b8;
    if (local_b8.AllocatorInstance.SecondaryData != (ForElementType<DXGI_FORMAT>)0x0) {
      local_140 = local_b8.AllocatorInstance.SecondaryData;
    }
    local_138 = &_GUID_696442be_a72e_4059_bc79_5b5c98040fad;
    local_148 = (GUID *)CONCAT44(local_148._4_4_,local_b8.ArrayNum);
    local_150 = param_6;
    local_158 = 0;
    uVar7 = (*pcVar4)(pIVar2,param_2,param_3,local_f8);
    if (local_b8.AllocatorInstance.SecondaryData != (ForElementType<DXGI_FORMAT>)0x0) {
      FMemory::Free((void *)local_b8.AllocatorInstance.SecondaryData);
    }
  }
  return uVar7;
}

// CreateReservedResource @ 145a0dae0

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
/* WARNING: Enum "D3D12_RESOURCE_STATES": Some values do not have unique names */

undefined4 __cdecl
FD3D12LegacyBarriersForAdapterImpl::CreateReservedResource
          (FD3D12Adapter *param_1,FD3D12ResourceDesc *param_2,ED3D12Access param_3,
          D3D12_CLEAR_VALUE *param_4,TRefCountPtr<ID3D12Resource> *param_5)

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

// CreateTransition @ 145a10090

/* WARNING: Removing unreachable block (ram,0x000145a10214) */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
FD3D12LegacyBarriersForAdapterImpl::CreateTransition
          (FRHITransition *param_1,FRHITransitionCreateInfo *param_2)

{
  int *piVar1;
  longlong *plVar2;
  ForElementType<FRHITransientAliasingInfo> *pFVar3;
  ForElementType<FRHITransientAliasingOverlap> *pFVar4;
  ERHITransitionCreateFlags EVar5;
  FRHITransientAliasingInfo *_Src;
  void *_Src_00;
  code *pcVar6;
  bool bVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  atomic<void_*> aVar11;
  longlong lVar12;
  atomic<void_*> *paVar13;
  undefined8 *puVar14;
  ForElementType<FRHITransientAliasingInfo> *pFVar15;
  FRHITransitionInfo *pFVar16;
  atomic<void_*> aVar17;
  ulonglong uVar18;
  ForElementType<FRHITransientAliasingOverlap> *pFVar19;
  FRHITransitionInfo *pFVar20;
  ForElementType<TRHIPipelineArray<TRefCountPtr<FD3D12SyncPoint>_>_> *pFVar21;
  ERHIPipeline EVar22;
  ulong64 uVar23;
  ERHIPipeline EVar24;
  int iVar25;
  uchar *puVar26;
  ERHIPipeline *pEVar27;
  ERHIPipeline *pEVar28;
  longlong lVar29;
  uint local_res8 [2];
  FRHITransitionCreateInfo *local_res10;
  FLLMScope local_res18 [2];
  undefined4 local_res20;
  undefined4 uStack_6c;
  FMemScope local_68;
  ERHIPipeline *local_60;
  atomic<void_*> local_58 [3];
  
  pEVar27 = (ERHIPipeline *)
            ((ulonglong)(&param_1->field_0x8f + GRHITransitionPrivateData_AlignInBytes) &
            ~(GRHITransitionPrivateData_AlignInBytes - 1));
  pEVar27[4] = None;
  pEVar27[5] = None;
  pEVar27[6] = None;
  pEVar27[7] = None;
  pEVar27[200] = None;
  pEVar27[0xc9] = None;
  pEVar27[0xca] = None;
  pEVar27[0xcb] = None;
  pEVar27[0xcc] = None;
  pEVar27[0xcd] = None;
  pEVar27[0xce] = None;
  pEVar27[0xcf] = None;
  pEVar27[0xd0] = None;
  pEVar27[0xd1] = None;
  pEVar27[0xd2] = None;
  pEVar27[0xd3] = None;
  pEVar27[0xd4] = 4;
  pEVar27[0xd5] = None;
  pEVar27[0xd6] = None;
  pEVar27[0xd7] = None;
  pEVar27[0x158] = None;
  pEVar27[0x159] = None;
  pEVar27[0x15a] = None;
  pEVar27[0x15b] = None;
  pEVar27[0x15c] = None;
  pEVar27[0x15d] = None;
  pEVar27[0x15e] = None;
  pEVar27[0x15f] = None;
  pEVar27[0x160] = None;
  pEVar27[0x161] = None;
  pEVar27[0x162] = None;
  pEVar27[0x163] = None;
  pEVar27[0x164] = 4;
  pEVar27[0x165] = None;
  pEVar27[0x166] = None;
  pEVar27[0x167] = None;
  pEVar27[0x1a8] = None;
  pEVar27[0x1a9] = None;
  pEVar27[0x1aa] = None;
  pEVar27[0x1ab] = None;
  pEVar27[0x1ac] = None;
  pEVar27[0x1ad] = None;
  pEVar27[0x1ae] = None;
  pEVar27[0x1af] = None;
  pEVar27[0x1b0] = None;
  pEVar27[0x1b1] = None;
  pEVar27[0x1b2] = None;
  pEVar27[0x1b3] = None;
  pEVar27[0x1b4] = 4;
  pEVar27[0x1b5] = None;
  pEVar27[0x1b6] = None;
  pEVar27[0x1b7] = None;
  pEVar27[0x238] = None;
  pEVar27[0x239] = None;
  pEVar27[0x23a] = None;
  pEVar27[0x23b] = None;
  pEVar27[0x23c] = None;
  pEVar27[0x23d] = None;
  pEVar27[0x23e] = None;
  pEVar27[0x23f] = None;
  pEVar27[0x240] = None;
  pEVar27[0x241] = None;
  pEVar27[0x242] = None;
  pEVar27[0x243] = None;
  pEVar27[0x244] = 8;
  pEVar27[0x245] = None;
  pEVar27[0x246] = None;
  pEVar27[0x247] = None;
  pEVar27[0x248] = None;
  pEVar27[0x249] = None;
  *pEVar27 = param_2->SrcPipelines;
  pEVar27[1] = param_2->DstPipelines;
  EVar5 = param_2->Flags;
  *(ERHITransitionCreateFlags *)(pEVar27 + 4) = EVar5;
  if ((param_2->SrcPipelines == param_2->DstPipelines) || ((EVar5 & NoFence) != None)) {
    EVar24 = None;
  }
  else {
    EVar24 = Graphics;
  }
  if ((param_2->SrcPipelines == AsyncCompute) && (param_2->DstPipelines == All)) {
    pEVar27[0x248] = EVar24;
    pFVar16 = (param_2->TransitionInfos).DataPtr;
    pFVar20 = pFVar16 + (param_2->TransitionInfos).ArrayNum;
    for (; pFVar16 != pFVar20; pFVar16 = pFVar16 + 1) {
      if ((pFVar16->AccessAfter & SRVGraphics) != None) {
        pEVar27[0x248] = None;
        pEVar27[0x249] = Graphics;
        break;
      }
    }
  }
  else {
    pEVar27[0x248] = EVar24;
  }
  local_res10 = param_2;
  local_60 = pEVar27;
  if ((pEVar27[0x248] != None) || (uVar8 = local_res20, pEVar27[0x249] != None)) {
    local_res8[0] = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
    local_res20 = 0;
    if (local_res8[0] != 0) {
      for (; (local_res8[0] >> local_res20 & 1) == 0; local_res20 = local_res20 + 1) {
      }
    }
    uVar8 = 0x20;
    if (local_res8[0] != 0) {
      plVar2 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      do {
        uVar8 = *(undefined4 *)(pEVar27 + 0x240);
        if (uVar8 == *(undefined4 *)(pEVar27 + 0x244)) {
          uVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TRHIPipelineArray<TRefCountPtr<FD3D12SyncPoint>_>_>_>
                            (0x810,(ForElementType<TRHIPipelineArray<TRefCountPtr<FD3D12SyncPoint>_>_>
                                    *)(pEVar27 + 0x1b8),(int *)(pEVar27 + 0x244));
        }
        *(undefined4 *)(pEVar27 + 0x240) = uVar8 + Graphics;
        pFVar21 = (ForElementType<TRHIPipelineArray<TRefCountPtr<FD3D12SyncPoint>_>_> *)
                  (pEVar27 + 0x1b8);
        if (*(ForElementType<TRHIPipelineArray<TRefCountPtr<FD3D12SyncPoint>_>_> **)
             (pEVar27 + 0x238) !=
            (ForElementType<TRHIPipelineArray<TRefCountPtr<FD3D12SyncPoint>_>_> *)0x0) {
          pFVar21 = *(ForElementType<TRHIPipelineArray<TRefCountPtr<FD3D12SyncPoint>_>_> **)
                     (pEVar27 + 0x238);
        }
        puVar26 = pFVar21->InlineData + (longlong)(int)uVar8 * 0x10;
        puVar26[0] = '\0';
        puVar26[1] = '\0';
        puVar26[2] = '\0';
        puVar26[3] = '\0';
        puVar26[4] = '\0';
        puVar26[5] = '\0';
        puVar26[6] = '\0';
        puVar26[7] = '\0';
        puVar26[8] = '\0';
        puVar26[9] = '\0';
        puVar26[10] = '\0';
        puVar26[0xb] = '\0';
        puVar26[0xc] = '\0';
        puVar26[0xd] = '\0';
        puVar26[0xe] = '\0';
        puVar26[0xf] = '\0';
        EVar24 = param_2->SrcPipelines;
        if (EVar24 != None) {
          lVar29 = *plVar2;
          do {
            EVar22 = ~EVar24 + Graphics & EVar24;
            if ((*(int *)(lVar29 + 0x9d4c) <
                 `public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
                 ::__l2::_thread_safe_static_guard_0__) &&
               (_Init_thread_header(&`public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
                                     ::__l2::_thread_safe_static_guard_0__),
               `public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
               ::__l2::_thread_safe_static_guard_0__ == -1)) {
              ::FName::FName(&`public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
                              ::__l2::LLMScope_Name103,L"RHIMisc/CreateSyncPoint");
              _Init_thread_footer(&`public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
                                   ::__l2::_thread_safe_static_guard_0__);
            }
            FLLMScope::FLLMScope
                      (local_res18,
                       `public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
                       ::__l2::LLMScope_Name103,false,None,Default,true);
            FMemScope::FMemScope
                      (&local_68,
                       &`public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
                        ::__l2::LLMScope_Name103,true);
            uVar9 = FLockFreePointerListLIFORoot<64,1>::Pop
                              ((FLockFreePointerListLIFORoot<64,1> *)&FD3D12SyncPoint::MemoryPool);
            aVar17 = (atomic<void_*>)0x0;
            aVar11 = aVar17;
            if (uVar9 != 0) {
              aVar11 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar9 >> 0xe][uVar9 & 0x3fff].
                       Payload;
              FLockFreeLinkPolicy::FreeLockFreeLink(uVar9);
            }
            if ((aVar11 != (atomic<void_*>)0x0) ||
               (aVar11 = (atomic<void_*>)FMemory::Malloc(0x38,8), aVar11 != (atomic<void_*>)0x0)) {
              aVar17 = aVar11;
              *(undefined4 *)((longlong)aVar17 + 8) = 0;
              *(undefined ***)aVar17 = &___7FD3D12SyncPoint__6B_;
              *(undefined1 *)((longlong)aVar17 + 0x20) = 0;
              *(undefined8 *)((longlong)aVar17 + 0x28) = 0;
              *(wchar_t **)((longlong)aVar17 + 0x30) = L"Transition";
              LOCK();
              *(int *)((longlong)aVar17 + 8) = *(int *)((longlong)aVar17 + 8) + 1;
              UNLOCK();
            }
            FMemScope::~FMemScope(&local_68);
            FLLMScope::~FLLMScope(local_res18);
            if ((EVar22 == Graphics) || (EVar22 != AsyncCompute)) {
              lVar12 = 0;
            }
            else {
              lVar12 = 8;
            }
            paVar13 = (atomic<void_*> *)(puVar26 + lVar12);
            if (paVar13 == local_58) {
              if (aVar17 != (atomic<void_*>)0x0) {
                piVar1 = (int *)((longlong)aVar17 + 8);
                LOCK();
                iVar25 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar25 == 1) {
                  if (piVar1 == (int *)0x0) {
                    aVar17 = (atomic<void_*>)0x0;
                  }
                  if (aVar17 != (atomic<void_*>)0x0) {
                    puVar14 = *(undefined8 **)aVar17;
                    goto LAB_145a10443;
                  }
                }
              }
            }
            else {
              aVar11 = *paVar13;
              *paVar13 = aVar17;
              if (aVar11 != (atomic<void_*>)0x0) {
                piVar1 = (int *)((longlong)aVar11 + 8);
                LOCK();
                iVar25 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar25 == 1) {
                  aVar17 = aVar11;
                  if (piVar1 == (int *)0x0) {
                    aVar17 = (atomic<void_*>)0x0;
                  }
                  if (aVar17 != (atomic<void_*>)0x0) {
                    puVar14 = *(undefined8 **)aVar17;
LAB_145a10443:
                    (*(code *)*puVar14)(aVar17,1);
                  }
                }
              }
            }
            EVar24 = EVar24 & ~(~EVar24 + Graphics);
            param_2 = local_res10;
          } while (EVar24 != None);
        }
        local_res8[0] = local_res8[0] & ~(1 << ((byte)local_res20 & 0x1f));
        local_res20 = 0;
        if (local_res8[0] != 0) {
          for (; (local_res8[0] >> local_res20 & 1) == 0; local_res20 = local_res20 + 1) {
          }
        }
      } while (local_res8[0] != 0);
      local_res8[0] = 0;
      uVar8 = 0x20;
    }
  }
  local_res20 = uVar8;
  pEVar28 = pEVar27 + 0x164;
  uVar23 = 0;
  TArray<FRHITransitionInfo,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  ::operator=<FRHITransitionInfo_const_,int>
            ((TArray<FRHITransitionInfo,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
              *)(pEVar27 + 8),&param_2->TransitionInfos);
  uVar8 = (param_2->AliasingInfos).ArrayNum;
  pFVar3 = (ForElementType<FRHITransientAliasingInfo> *)(pEVar27 + 0xd8);
  _Src = (param_2->AliasingInfos).DataPtr;
  *(undefined4 *)(pEVar27 + 0x160) = uVar8;
  if ((uVar8 == None) && (*(undefined4 *)pEVar28 == None)) {
    pEVar28[0] = 4;
    pEVar28[1] = None;
    pEVar28[2] = None;
    pEVar28[3] = None;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<FRHITransientAliasingInfo>_>
              (0x20,8,uVar8,*(undefined4 *)pEVar28,pFVar3,uVar8,(int *)pEVar28);
    if (uVar8 != None) {
      pFVar15 = *(ForElementType<FRHITransientAliasingInfo> **)(pEVar27 + 0x158);
      if (*(ForElementType<FRHITransientAliasingInfo> **)(pEVar27 + 0x158) ==
          (ForElementType<FRHITransientAliasingInfo> *)0x0) {
        pFVar15 = pFVar3;
      }
      memcpy(pFVar15,_Src,(longlong)(int)uVar8 << 5);
    }
  }
  uVar8 = *(undefined4 *)(pEVar27 + 0x160);
  pFVar15 = *(ForElementType<FRHITransientAliasingInfo> **)(pEVar27 + 0x158);
  if (*(ForElementType<FRHITransientAliasingInfo> **)(pEVar27 + 0x158) ==
      (ForElementType<FRHITransientAliasingInfo> *)0x0) {
    pFVar15 = pFVar3;
  }
  puVar26 = pFVar15->InlineData;
  while( true ) {
    if (*(undefined4 *)(pEVar27 + 0x160) != uVar8) {
      local_res10 = (FRHITransitionCreateInfo *)((ulonglong)local_res10 & 0xffffffffffffff00);
      `TCheckedPointerIterator<FRHITransientAliasingInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res10);
    }
    iVar25 = (int)uVar23;
    if (pFVar15 ==
        (ForElementType<FRHITransientAliasingInfo> *)(puVar26 + (longlong)(int)uVar8 * 0x20)) break;
    uVar23 = (ulong64)(uint)(iVar25 + *(int *)(pFVar15->InlineData + 0x10));
    pFVar15 = (ForElementType<FRHITransientAliasingInfo> *)(pFVar15->InlineData + 0x20);
  }
  pFVar4 = (ForElementType<FRHITransientAliasingOverlap> *)(pEVar27 + 0x168);
  if (iVar25 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar23);
  }
  if ((int)*(undefined4 *)(pEVar27 + 0x1b4) < iVar25) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<FRHITransientAliasingOverlap>_>
              (0x10,8,iVar25,pFVar4,*(undefined4 *)(pEVar27 + 0x1b0),(int *)(pEVar27 + 0x1b4));
  }
  local_res20 = *(undefined4 *)(pEVar27 + 0x160);
  uVar18 = (ulonglong)(int)local_res20;
  pFVar15 = *(ForElementType<FRHITransientAliasingInfo> **)(pEVar27 + 0x158);
  if (*(ForElementType<FRHITransientAliasingInfo> **)(pEVar27 + 0x158) ==
      (ForElementType<FRHITransientAliasingInfo> *)0x0) {
    pFVar15 = pFVar3;
  }
  lVar29 = uVar18 * 0x20;
  puVar26 = pFVar15->InlineData + 8;
  pEVar28 = pEVar27;
  do {
    if (*(undefined4 *)(pEVar27 + 0x160) != (int)uVar18) {
      local_res8[0] = local_res8[0] & 0xffffff00;
      `TCheckedPointerIterator<FRHITransientAliasingInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if ((ForElementType<FRHITransientAliasingInfo> *)(puVar26 + -8) ==
        (ForElementType<FRHITransientAliasingInfo> *)(pFVar15->InlineData + lVar29)) {
      return;
    }
    iVar25 = *(int *)(puVar26 + 8);
    if (0 < iVar25) {
      uVar8 = *(undefined4 *)(pEVar28 + 0x1b0);
      _Src_00 = *(void **)puVar26;
      if ((_Src_00 == (void *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr || Count == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9c1,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = UE::Core::Private::
               ReallocGrow<2,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<FRHITransientAliasingOverlap>_>
                         (0x10,8,iVar25,pFVar4,(int *)(pEVar27 + 0x1b0),(int *)(pEVar27 + 0x1b4));
      pFVar19 = pFVar4;
      if (*(ForElementType<FRHITransientAliasingOverlap> **)(pEVar27 + 0x1a8) !=
          (ForElementType<FRHITransientAliasingOverlap> *)0x0) {
        pFVar19 = *(ForElementType<FRHITransientAliasingOverlap> **)(pEVar27 + 0x1a8);
      }
      memcpy(pFVar19->InlineData + (longlong)iVar10 * 0x10,_Src_00,(longlong)iVar25 << 4);
      uVar9 = 0;
      if ((int)uVar8 < (int)*(undefined4 *)(pEVar27 + 0x1b0)) {
        uVar9 = (uint)~uVar8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar19 = pFVar4;
      if (*(ForElementType<FRHITransientAliasingOverlap> **)(pEVar27 + 0x1a8) !=
          (ForElementType<FRHITransientAliasingOverlap> *)0x0) {
        pFVar19 = *(ForElementType<FRHITransientAliasingOverlap> **)(pEVar27 + 0x1a8);
      }
      *(uchar **)puVar26 = pFVar19->InlineData + (longlong)(int)uVar8 * 0x10;
      *(ulonglong *)(puVar26 + 8) = CONCAT44(uStack_6c,iVar25);
      pEVar28 = local_60;
    }
    uVar18 = (ulonglong)(uint)local_res20;
    puVar26 = puVar26 + 0x20;
  } while( true );
}

// GetInitialState @ 145a19430

/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "D3D12_RESOURCE_STATES": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */

D3D12_RESOURCE_STATES __cdecl
FD3D12LegacyBarriersForAdapterImpl::GetInitialState
          (ED3D12Access param_1,FD3D12ResourceDesc *param_2)

{
  D3D12_RESOURCE_STATES DVar1;
  
  DVar1 = GetD3D12ResourceState(param_1,Direct,param_2,(FD3D12Texture *)0x0);
  return DVar1;
}

// GetTransitionDataAlignmentBytes @ 145a1b7b0

ulong64 __cdecl FD3D12LegacyBarriersForAdapterImpl::GetTransitionDataAlignmentBytes(void)

{
  return 8;
}

// GetTransitionDataSizeBytes @ 145a1b7f0

ulong64 __cdecl FD3D12LegacyBarriersForAdapterImpl::GetTransitionDataSizeBytes(void)

{
  return 0x250;
}

// ReleaseTransition @ 145a2bdf0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl FD3D12LegacyBarriersForAdapterImpl::ReleaseTransition(FRHITransition *param_1)

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

