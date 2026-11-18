// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 9

// ConfigureDevice @ 145a09470

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
FD3D12EnhancedBarriersForAdapterImpl::ConfigureDevice(ID3D12Device *param_1,bool param_2)

{
  FD3D12DynamicRHI::SetFormatAliasedTexturesMustBeCreatedUsingCommonLayout(false);
  GRHIGlobals.NeedsTransientDiscardStateTracking = false;
  GRHIGlobals.NeedsTransientDiscardOnGraphicsWorkaround = false;
  return;
}

// CreateCommittedResource @ 145a0abe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "D3D12_BARRIER_LAYOUT": Some values do not have unique names */

undefined4 __cdecl
FD3D12EnhancedBarriersForAdapterImpl::CreateCommittedResource
          (FD3D12Adapter *param_1,D3D12_HEAP_PROPERTIES *param_2,D3D12_HEAP_FLAGS param_3,
          FD3D12ResourceDesc *param_4,ED3D12Access param_5,D3D12_CLEAR_VALUE *param_6,
          TRefCountPtr<ID3D12Resource> *param_7)

{
  ID3D12Device10 *pIVar1;
  code *pcVar2;
  ID3D12Resource *pIVar3;
  undefined4 uVar4;
  ForElementType<DXGI_FORMAT> FVar5;
  undefined1 auStack_138 [32];
  D3D12_BARRIER_LAYOUT local_118;
  D3D12_CLEAR_VALUE *local_110;
  undefined8 local_108;
  ForElementType<DXGI_FORMAT> local_f8;
  GUID *local_f0;
  TRefCountPtr<ID3D12Resource> *local_e8;
  D3D12_CLEAR_VALUE *local_d8;
  undefined8 local_d0;
  undefined4 local_b8 [2];
  longlong local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined2 local_9a;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  TArray<DXGI_FORMAT,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_78;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_d8 = param_6;
  local_b8[0] = (undefined4)param_4->_padding_;
  local_b0 = param_4->_padding_;
  local_a8 = param_4->_padding_;
  local_a0 = (undefined4)param_4->_padding_;
  local_9c = *(undefined2 *)((longlong)&param_4->_padding_ + 4);
  local_9a = *(undefined2 *)((longlong)&param_4->_padding_ + 6);
  local_98 = (undefined4)param_4->_padding_;
  local_94 = *(undefined8 *)((longlong)&param_4->_padding_ + 4);
  local_8c = *(undefined4 *)((longlong)&param_4->_padding_ + 4);
  local_88 = (undefined4)param_4->_padding_;
  local_d0 = 0;
  local_84 = 0;
  local_7c = 0;
  FD3D12ResourceDesc::GetCastableFormats(param_4,&local_78);
  if (local_78.ArrayNum == 0) {
    FVar5 = (ForElementType<DXGI_FORMAT>)0x0;
  }
  else {
    FVar5 = (ForElementType<DXGI_FORMAT>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData != (ForElementType<DXGI_FORMAT>)0x0) {
      FVar5 = local_78.AllocatorInstance.SecondaryData;
    }
  }
  if ((int)param_4->_padding_ == 1) {
    local_118 = D3D12_BARRIER_LAYOUT_UNDEFINED;
  }
  else {
    local_118 = GetEBLayout(param_5,Graphics,(FD3D12Texture *)0x0);
  }
  pIVar1 = (param_1->RootDevice10).Reference;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0x260);
  pIVar3 = param_7->Reference;
  if (pIVar3 != (ID3D12Resource *)0x0) {
    param_7->Reference = (ID3D12Resource *)0x0;
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  local_e8 = param_7;
  local_f0 = &_GUID_696442be_a72e_4059_bc79_5b5c98040fad;
  local_108 = 0;
  local_110 = local_d8;
  local_f8 = FVar5;
  uVar4 = (*pcVar2)(pIVar1,param_2,param_3,local_b8);
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<DXGI_FORMAT>)0x0) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
  return uVar4;
}

// CreatePlacedResource @ 145a0be90

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

undefined4 __cdecl
FD3D12EnhancedBarriersForAdapterImpl::CreatePlacedResource
          (FD3D12Adapter *param_1,ID3D12Heap *param_2,ulong64 param_3,FD3D12ResourceDesc *param_4,
          ED3D12Access param_5,D3D12_CLEAR_VALUE *param_6,TRefCountPtr<ID3D12Resource> *param_7)

{
  ID3D12Device10 *pIVar1;
  code *pcVar2;
  ID3D12Resource *pIVar3;
  undefined4 uVar4;
  ForElementType<DXGI_FORMAT> FVar5;
  undefined1 auStack_128 [32];
  D3D12_BARRIER_LAYOUT local_108;
  D3D12_CLEAR_VALUE *local_100;
  ForElementType<DXGI_FORMAT> local_f0;
  GUID *local_e8;
  TRefCountPtr<ID3D12Resource> *local_e0;
  D3D12_CLEAR_VALUE *local_d8;
  undefined8 local_d0;
  undefined4 local_b8 [2];
  longlong local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined2 local_9a;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  TArray<DXGI_FORMAT,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_78;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_d8 = param_6;
  local_b8[0] = (undefined4)param_4->_padding_;
  local_b0 = param_4->_padding_;
  local_a8 = param_4->_padding_;
  local_a0 = (undefined4)param_4->_padding_;
  local_9c = *(undefined2 *)((longlong)&param_4->_padding_ + 4);
  local_9a = *(undefined2 *)((longlong)&param_4->_padding_ + 6);
  local_98 = (undefined4)param_4->_padding_;
  local_94 = *(undefined8 *)((longlong)&param_4->_padding_ + 4);
  local_8c = *(undefined4 *)((longlong)&param_4->_padding_ + 4);
  local_88 = (undefined4)param_4->_padding_;
  local_d0 = 0;
  local_84 = 0;
  local_7c = 0;
  FD3D12ResourceDesc::GetCastableFormats(param_4,&local_78);
  if (local_78.ArrayNum == 0) {
    FVar5 = (ForElementType<DXGI_FORMAT>)0x0;
  }
  else {
    FVar5 = (ForElementType<DXGI_FORMAT>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData != (ForElementType<DXGI_FORMAT>)0x0) {
      FVar5 = local_78.AllocatorInstance.SecondaryData;
    }
  }
  if ((int)param_4->_padding_ == 1) {
    local_108 = D3D12_BARRIER_LAYOUT_UNDEFINED;
  }
  else {
    local_108 = GetEBLayout(param_5,Graphics,(FD3D12Texture *)0x0);
  }
  pIVar1 = (param_1->RootDevice10).Reference;
  pcVar2 = *(code **)((longlong)*pIVar1 + 0x268);
  pIVar3 = param_7->Reference;
  if (pIVar3 != (ID3D12Resource *)0x0) {
    param_7->Reference = (ID3D12Resource *)0x0;
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  local_e0 = param_7;
  local_e8 = &_GUID_696442be_a72e_4059_bc79_5b5c98040fad;
  local_100 = local_d8;
  local_f0 = FVar5;
  uVar4 = (*pcVar2)(pIVar1,param_2,param_3,local_b8);
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<DXGI_FORMAT>)0x0) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
  return uVar4;
}

// CreateReservedResource @ 145a0d850

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

undefined4 __cdecl
FD3D12EnhancedBarriersForAdapterImpl::CreateReservedResource
          (FD3D12Adapter *param_1,FD3D12ResourceDesc *param_2,ED3D12Access param_3,
          D3D12_CLEAR_VALUE *param_4,TRefCountPtr<ID3D12Resource> *param_5)

{
  ID3D12Device10 *pIVar1;
  code *pcVar2;
  ID3D12Resource *pIVar3;
  D3D12_BARRIER_LAYOUT DVar4;
  undefined4 uVar5;
  ForElementType<DXGI_FORMAT> FVar6;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  ForElementType<DXGI_FORMAT> local_98;
  GUID *local_90;
  TRefCountPtr<ID3D12Resource> *local_88;
  TArray<DXGI_FORMAT,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_78;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_c8;
  FD3D12ResourceDesc::GetCastableFormats(param_2,&local_78);
  if (local_78.ArrayNum == 0) {
    FVar6 = (ForElementType<DXGI_FORMAT>)0x0;
  }
  else {
    FVar6 = (ForElementType<DXGI_FORMAT>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData != (ForElementType<DXGI_FORMAT>)0x0) {
      FVar6 = local_78.AllocatorInstance.SecondaryData;
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
  local_88 = param_5;
  local_90 = &_GUID_696442be_a72e_4059_bc79_5b5c98040fad;
  local_a8 = 0;
  local_98 = FVar6;
  uVar5 = (*pcVar2)(pIVar1,param_2,DVar4,param_4);
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<DXGI_FORMAT>)0x0) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
  return uVar5;
}

// CreateTransition @ 145a0fc80

/* WARNING: Removing unreachable block (ram,0x000145a0fd38) */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
FD3D12EnhancedBarriersForAdapterImpl::CreateTransition
          (FRHITransition *param_1,FRHITransitionCreateInfo *param_2)

{
  int *piVar1;
  longlong *plVar2;
  ERHITransitionCreateFlags EVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  atomic<void_*> aVar8;
  atomic<void_*> *paVar9;
  undefined8 *puVar10;
  atomic<void_*> aVar11;
  ForElementType<TRHIPipelineArray<TRefCountPtr<FD3D12SyncPoint>_>_> FVar12;
  ERHIPipeline EVar13;
  ERHIPipeline EVar14;
  ERHIPipeline *pEVar15;
  atomic<void_*> aVar16;
  ForElementType<TRHIPipelineArray<TRefCountPtr<FD3D12SyncPoint>_>_> FVar17;
  undefined8 *puVar18;
  undefined4 local_res8 [2];
  FRHITransitionCreateInfo *local_res10;
  uint local_res18;
  int local_res20;
  FMemScope local_70;
  ForElementType<TRHIPipelineArray<TRefCountPtr<FD3D12SyncPoint>_>_> local_68;
  TArray<FRHITransitionInfo,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *local_60;
  atomic<void_*> local_58 [3];
  
  pEVar15 = (ERHIPipeline *)
            ((ulonglong)(&param_1->field_0x8f + GRHITransitionPrivateData_AlignInBytes) &
            ~(GRHITransitionPrivateData_AlignInBytes - 1));
  pEVar15[4] = None;
  pEVar15[5] = None;
  pEVar15[6] = None;
  pEVar15[7] = None;
  local_60 = (TArray<FRHITransitionInfo,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
              *)(pEVar15 + 8);
  pEVar15[200] = None;
  pEVar15[0xc9] = None;
  pEVar15[0xca] = None;
  pEVar15[0xcb] = None;
  pEVar15[0xcc] = None;
  pEVar15[0xcd] = None;
  pEVar15[0xce] = None;
  pEVar15[0xcf] = None;
  pEVar15[0xd0] = None;
  pEVar15[0xd1] = None;
  pEVar15[0xd2] = None;
  pEVar15[0xd3] = None;
  pEVar15[0xd4] = 4;
  pEVar15[0xd5] = None;
  pEVar15[0xd6] = None;
  pEVar15[0xd7] = None;
  pEVar15[0x158] = None;
  pEVar15[0x159] = None;
  pEVar15[0x15a] = None;
  pEVar15[0x15b] = None;
  pEVar15[0x15c] = None;
  pEVar15[0x15d] = None;
  pEVar15[0x15e] = None;
  pEVar15[0x15f] = None;
  pEVar15[0x160] = None;
  pEVar15[0x161] = None;
  pEVar15[0x162] = None;
  pEVar15[0x163] = None;
  pEVar15[0x164] = 8;
  pEVar15[0x165] = None;
  pEVar15[0x166] = None;
  pEVar15[0x167] = None;
  *pEVar15 = param_2->SrcPipelines;
  pEVar15[1] = param_2->DstPipelines;
  EVar3 = param_2->Flags;
  *(ERHITransitionCreateFlags *)(pEVar15 + 4) = EVar3;
  local_res10 = param_2;
  if ((param_2->SrcPipelines != param_2->DstPipelines) && ((EVar3 & NoFence) == None)) {
    local_res18 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
    iVar5 = 0;
    if (local_res18 != 0) {
      for (; (local_res18 >> iVar5 & 1) == 0; iVar5 = iVar5 + 1) {
      }
    }
    local_res20 = 0x20;
    if (local_res18 != 0) {
      local_res20 = iVar5;
    }
    local_res8[0] = 0;
    if (local_res18 != 0) {
      plVar2 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      FVar17 = (ForElementType<TRHIPipelineArray<TRefCountPtr<FD3D12SyncPoint>_>_>)
               ((longlong)pEVar15 + 0xd8);
      pEVar15 = pEVar15 + 0x164;
      local_68 = FVar17;
      do {
        uVar6 = *(undefined4 *)
                 ((ForElementType<TRHIPipelineArray<TRefCountPtr<FD3D12SyncPoint>_>_> *)
                 ((longlong)FVar17 + 0x88))->InlineData;
        if (uVar6 == *(undefined4 *)pEVar15) {
          uVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TRHIPipelineArray<TRefCountPtr<FD3D12SyncPoint>_>_>_>
                            (0x810,(ForElementType<TRHIPipelineArray<TRefCountPtr<FD3D12SyncPoint>_>_>
                                    *)FVar17,(int *)pEVar15);
        }
        *(undefined4 *)
         ((ForElementType<TRHIPipelineArray<TRefCountPtr<FD3D12SyncPoint>_>_> *)
         ((longlong)FVar17 + 0x88))->InlineData = uVar6 + Graphics;
        FVar12 = FVar17;
        if (*(ForElementType<TRHIPipelineArray<TRefCountPtr<FD3D12SyncPoint>_>_> *)
             ((longlong)FVar17 + 0x80) !=
            (ForElementType<TRHIPipelineArray<TRefCountPtr<FD3D12SyncPoint>_>_>)0x0) {
          FVar12 = *(ForElementType<TRHIPipelineArray<TRefCountPtr<FD3D12SyncPoint>_>_> *)
                    ((longlong)FVar17 + 0x80);
        }
        puVar18 = (undefined8 *)((longlong)(int)uVar6 * 0x10 + (longlong)FVar12);
        *puVar18 = 0;
        puVar18[1] = 0;
        EVar14 = param_2->SrcPipelines;
        if (EVar14 != None) {
          lVar4 = *plVar2;
          aVar16 = (atomic<void_*>)0x0;
          do {
            EVar13 = ~EVar14 + Graphics & EVar14;
            if ((*(int *)(lVar4 + 0x9d4c) <
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
                      ((FLLMScope *)local_res8,
                       `public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
                       ::__l2::LLMScope_Name103,false,None,Default,true);
            FMemScope::FMemScope
                      (&local_70,
                       &`public:_static_class_TRefCountPtr<FD3D12SyncPoint>___cdecl_FD3D12SyncPoint::Create(ED3D12SyncPointType,wchar_t_const*___ptr64)'
                        ::__l2::LLMScope_Name103,true);
            uVar7 = FLockFreePointerListLIFORoot<64,1>::Pop
                              ((FLockFreePointerListLIFORoot<64,1> *)&FD3D12SyncPoint::MemoryPool);
            aVar8 = aVar16;
            if (uVar7 != 0) {
              aVar8 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar7 >> 0xe][uVar7 & 0x3fff].Payload
              ;
              FLockFreeLinkPolicy::FreeLockFreeLink(uVar7);
            }
            if ((aVar8 != (atomic<void_*>)0x0) ||
               (aVar8 = (atomic<void_*>)FMemory::Malloc(0x38,8), aVar11 = aVar16,
               aVar8 != (atomic<void_*>)0x0)) {
              *(undefined4 *)((longlong)aVar8 + 8) = 0;
              *(undefined ***)aVar8 = &___7FD3D12SyncPoint__6B_;
              *(undefined1 *)((longlong)aVar8 + 0x20) = 0;
              *(wchar_t **)((longlong)aVar8 + 0x30) = L"Transition";
              *(undefined8 *)((longlong)aVar8 + 0x28) = 0;
              LOCK();
              *(int *)((longlong)aVar8 + 8) = *(int *)((longlong)aVar8 + 8) + 1;
              UNLOCK();
              aVar11 = aVar8;
            }
            FMemScope::~FMemScope(&local_70);
            FLLMScope::~FLLMScope((FLLMScope *)local_res8);
            if ((EVar13 == Graphics) ||
               (aVar8 = (atomic<void_*>)&DAT_00000008, EVar13 != AsyncCompute)) {
              aVar8 = aVar16;
            }
            paVar9 = (atomic<void_*> *)((longlong)aVar8 + (longlong)puVar18);
            if (paVar9 == local_58) {
              if (aVar11 != (atomic<void_*>)0x0) {
                piVar1 = (int *)((longlong)aVar11 + 8);
                LOCK();
                iVar5 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if ((iVar5 == 1) && (piVar1 != (int *)0x0)) {
                  puVar10 = *(undefined8 **)aVar11;
                  goto LAB_145a0ff74;
                }
              }
            }
            else {
              aVar8 = *paVar9;
              *paVar9 = aVar11;
              if (aVar8 != (atomic<void_*>)0x0) {
                piVar1 = (int *)((longlong)aVar8 + 8);
                LOCK();
                iVar5 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if ((iVar5 == 1) && (piVar1 != (int *)0x0)) {
                  puVar10 = *(undefined8 **)aVar8;
                  aVar11 = aVar8;
LAB_145a0ff74:
                  (*(code *)*puVar10)(aVar11,1);
                }
              }
            }
            EVar14 = EVar14 & ~(~EVar14 + Graphics);
            param_2 = local_res10;
            FVar17 = local_68;
          } while (EVar14 != None);
        }
        local_res18 = local_res18 & ~(1 << ((byte)local_res20 & 0x1f));
        local_res20 = 0;
        if (local_res18 != 0) {
          for (; (local_res18 >> local_res20 & 1) == 0; local_res20 = local_res20 + 1) {
          }
        }
        pEVar15 = (ERHIPipeline *)((longlong)FVar17 + 0x8c);
      } while (local_res18 != 0);
      local_res18 = 0;
      local_res20 = 0x20;
    }
  }
  TArray<FRHITransitionInfo,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  ::operator=<FRHITransitionInfo_const_,int>(local_60,&param_2->TransitionInfos);
  return;
}

// GetInitialLayout @ 145a19410

/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "D3D12_BARRIER_LAYOUT": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */

D3D12_BARRIER_LAYOUT __cdecl
FD3D12EnhancedBarriersForAdapterImpl::GetInitialLayout
          (ED3D12Access param_1,FD3D12ResourceDesc *param_2)

{
  D3D12_BARRIER_LAYOUT DVar1;
  
  if ((int)param_2->_padding_ == 1) {
    return D3D12_BARRIER_LAYOUT_UNDEFINED;
  }
  DVar1 = GetEBLayout(param_1,Graphics,(FD3D12Texture *)0x0);
  return DVar1;
}

// GetTransitionDataAlignmentBytes @ 145a1b790

ulong64 __cdecl FD3D12EnhancedBarriersForAdapterImpl::GetTransitionDataAlignmentBytes(void)

{
  return 8;
}

// GetTransitionDataSizeBytes @ 145a1b7d0

ulong64 __cdecl FD3D12EnhancedBarriersForAdapterImpl::GetTransitionDataSizeBytes(void)

{
  return 0x168;
}

// ReleaseTransition @ 145a2bcd0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl FD3D12EnhancedBarriersForAdapterImpl::ReleaseTransition(FRHITransition *param_1)

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

