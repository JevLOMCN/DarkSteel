// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 1

// FD3D12WorkGraphPipelineState @ 145a91c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */

FD3D12WorkGraphPipelineState * __thiscall
FD3D12WorkGraphPipelineState::FD3D12WorkGraphPipelineState
          (FD3D12WorkGraphPipelineState *this,FD3D12Device *param_1,
          FWorkGraphPipelineStateInitializer *param_2)

{
  D3D12_EXPORT_DESC **ppDVar1;
  wchar_t ***pppwVar2;
  D3D12_NODE_ID **ppDVar3;
  FD3D12Adapter *this_00;
  ID3D12RootSignature *pIVar4;
  D3D12_NODE_ID *pDVar5;
  D3D12_NODE *pDVar6;
  FScriptContainerElement *pFVar7;
  ID3D12StateObject *pIVar8;
  _List_node<D3D12_GENERIC_PROGRAM_DESC,void_*> *p_Var9;
  _List_node<D3D12_SUBOBJECT_TO_EXPORTS_ASSOCIATION,void_*> *p_Var10;
  _List_node<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_WRAPPER,void_*> *p_Var11;
  _List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
  *p_Var12;
  D3D12_EXPORT_DESC *pDVar13;
  wchar_t **ppwVar14;
  code *pcVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  _List_node<D3D12_GENERIC_PROGRAM_DESC,void_*> *p_Var18;
  _List_node<D3D12_SUBOBJECT_TO_EXPORTS_ASSOCIATION,void_*> *p_Var19;
  _List_node<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_WRAPPER,void_*> *p_Var20;
  void *pvVar21;
  FD3D12Device *this_01;
  bool bVar22;
  int iVar23;
  int iVar24;
  undefined4 uVar25;
  uint uVar26;
  FRHIWorkGraphShader **ppFVar27;
  FD3D12WorkGraphPipelineState *pFVar28;
  FD3D12RootSignature *pFVar29;
  CD3DX12_GLOBAL_ROOT_SIGNATURE_SUBOBJECT *this_02;
  CD3DX12_WORK_GRAPH_SUBOBJECT *this_03;
  _List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
  *p_Var30;
  wchar_t *pwVar31;
  ID3D12Device *pIVar32;
  D3D12_STATE_OBJECT_DESC *pDVar33;
  undefined4 *puVar34;
  ulong64 uVar35;
  longlong lVar36;
  uint *puVar37;
  CD3DX12_DXIL_LIBRARY_SUBOBJECT *this_04;
  CD3DX12_LOCAL_ROOT_SIGNATURE_SUBOBJECT *this_05;
  CD3DX12_SUBOBJECT_TO_EXPORTS_ASSOCIATION_SUBOBJECT *this_06;
  CD3DX12_COMMON_COMPUTE_NODE_OVERRIDES *pCVar38;
  _Flist_node<D3D12_NODE_ID,void_*> *p_Var39;
  _Flist_node<unsigned_int,void_*> *p_Var40;
  undefined8 uVar41;
  uint uVar42;
  FString *pFVar43;
  ForAnyElementType FVar44;
  ID3D12RootSignature *pIVar45;
  CD3DX12_GLOBAL_ROOT_SIGNATURE_SUBOBJECT *pCVar46;
  FScriptContainerElement *pFVar47;
  FRHIWorkGraphShader **ppFVar48;
  TArray<TRefCountPtr<FRHIShader>,TSizedDefaultAllocator<32>_> *pTVar49;
  CD3DX12_DXIL_LIBRARY_SUBOBJECT *pCVar50;
  CD3DX12_LOCAL_ROOT_SIGNATURE_SUBOBJECT *pCVar51;
  FRHIWorkGraphShader *pFVar52;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar53;
  undefined1 auStack_3e8 [32];
  FRHIWorkGraphShader **local_3c8;
  FScriptContainerElement *local_3c0;
  GUID *local_3b8;
  longlong **local_3b0;
  undefined8 local_3a8;
  uint local_398;
  uint local_394;
  FRHIWorkGraphShader *local_390;
  longlong *local_388;
  FWorkGraphPipelineStateInitializer *local_380;
  FD3D12WorkGraphPipelineState *local_378;
  longlong *local_370;
  FString local_368;
  FRHIWorkGraphShader *local_358;
  longlong local_350;
  FScriptContainerElement *local_348;
  longlong *local_340;
  FString local_338;
  TMap<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
  *local_328;
  CD3DX12_DXIL_LIBRARY_SUBOBJECT *local_320;
  CD3DX12_LOCAL_ROOT_SIGNATURE_SUBOBJECT *local_318;
  CD3DX12_SUBOBJECT_TO_EXPORTS_ASSOCIATION_SUBOBJECT *local_310;
  wchar_t *local_308;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_300;
  longlong local_2f8;
  TArray<TRefCountPtr<FRHIShader>,TSizedDefaultAllocator<32>_> *local_2f0;
  FD3D12Device *local_2e8;
  TArrayView<FRHIWorkGraphShader_*,int> *local_2e0;
  CD3DX12_GLOBAL_ROOT_SIGNATURE_SUBOBJECT *local_2d8;
  CD3DX12_WORK_GRAPH_SUBOBJECT *local_2d0;
  D3D12_NODE_ID local_2c8;
  D3D12_EXPORT_DESC local_2b8;
  wchar_t *local_2a0;
  uint uStack_298;
  undefined4 uStack_294;
  CD3DX12_STATE_OBJECT_DESC local_288;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_190 [2];
  undefined8 local_188;
  ulong64 local_180;
  undefined4 local_178;
  undefined8 local_174;
  undefined8 local_16c;
  undefined4 local_164;
  undefined4 local_160;
  undefined8 local_158;
  ulong64 uStack_150;
  undefined8 local_148;
  undefined1 local_140 [40];
  FRHIShaderBindingLayout local_118;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_3e8;
  local_380 = param_2;
  local_378 = this;
  local_2e8 = param_1;
  FRHIResource::FRHIResource((FRHIResource *)this,RRT_WorkGraphPipelineState);
  pCVar46 = (CD3DX12_GLOBAL_ROOT_SIGNATURE_SUBOBJECT *)0x0;
  this->Device = param_1;
  pTVar53 = &this->RootArgOffsets;
  pTVar49 = &this->Shaders;
  this->_padding_ = (longlong)&___7FD3D12WorkGraphPipelineState__6B_;
  local_328 = &this->NodeCountPerName;
  (this->RootSignature).Reference = (ID3D12RootSignature *)0x0;
  (this->StateObject).Reference = (ID3D12StateObject *)0x0;
  (this->ProgramIdentifier).OpaqueData[0] = 0;
  (this->ProgramIdentifier).OpaqueData[1] = 0;
  (this->ProgramIdentifier).OpaqueData[2] = 0;
  (this->ProgramIdentifier).OpaqueData[3] = 0;
  (this->BackingMemoryAddressRange).StartAddress = 0;
  (this->BackingMemoryAddressRange).SizeInBytes = 0;
  this->MaxRootArgOffset = 0;
  (pTVar53->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->RootArgOffsets).ArrayNum = 0;
  (this->RootArgOffsets).ArrayMax = 0;
  *(undefined8 *)local_328 = 0;
  *(undefined8 *)&(this->NodeCountPerName).field_0x8 = 0;
  *(undefined8 *)&(this->NodeCountPerName).field_0x20 = 0;
  *(undefined4 *)&(this->NodeCountPerName).field_0x28 = 0;
  *(undefined4 *)&(this->NodeCountPerName).field_0x2c = 0x80;
  *(undefined4 *)&(this->NodeCountPerName).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NodeCountPerName).field_0x34 = 0;
  *(undefined8 *)&(this->NodeCountPerName).field_0x40 = 0;
  *(undefined4 *)&(this->NodeCountPerName).field_0x48 = 0;
  (this->FrameCounter).LastUsedFrame = (atomic<unsigned_int>)0x0;
  (pTVar49->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Shaders).ArrayNum = 0;
  (this->Shaders).ArrayMax = 0;
  this->RootArgStrideInBytes = 0;
  this->bInitialized = false;
  iVar24 = param_2->RootShaderIndex;
  local_300 = pTVar53;
  local_2f0 = pTVar49;
  if (((iVar24 != -1) && (-1 < iVar24)) && (iVar24 < (param_2->ShaderTable).ArrayNum)) {
    ppFVar27 = TArrayView<FRHIWorkGraphShader_*,int>::operator[](&param_2->ShaderTable,iVar24);
    pFVar52 = *ppFVar27;
    if (((pFVar52 != (FRHIWorkGraphShader *)0x0) && (pFVar52->field_0x104 == '\n')) &&
       (pIVar45 = *(ID3D12RootSignature **)(*(longlong *)&pFVar52[1].field_0x38 + 8),
       pIVar45 != (ID3D12RootSignature *)0x0)) goto LAB_145a91db9;
  }
  if ((*(longlong *)&param_1->field_0x10 == 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("ParentAdapter != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x41,L""), bVar22)) {
    pcVar15 = (code *)swi(3);
    pFVar28 = (FD3D12WorkGraphPipelineState *)(*pcVar15)();
    return pFVar28;
  }
  this_00 = *(FD3D12Adapter **)&param_1->field_0x10;
  FRHIShaderBindingLayout::FRHIShaderBindingLayout(&local_118);
  pFVar29 = FD3D12Adapter::GetGlobalWorkGraphRootSignature(this_00,&local_118);
  pIVar45 = (pFVar29->RootSignature).Reference;
  TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295>::
  ~TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295>(&local_118.UniformBufferEntries);
LAB_145a91db9:
  pIVar4 = (this->RootSignature).Reference;
  if (pIVar4 != pIVar45) {
    (this->RootSignature).Reference = pIVar45;
    if (pIVar45 != (ID3D12RootSignature *)0x0) {
      (**(code **)((longlong)*pIVar45 + 8))(pIVar45);
    }
    if (pIVar4 != (ID3D12RootSignature *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
    }
  }
  CD3DX12_STATE_OBJECT_DESC::CD3DX12_STATE_OBJECT_DESC
            (&local_288,D3D12_STATE_OBJECT_TYPE_EXECUTABLE);
  this_02 = ::operator_new(0x18);
  if (this_02 != (CD3DX12_GLOBAL_ROOT_SIGNATURE_SUBOBJECT *)0x0) {
    (this_02->m_pRootSig).ptr_ = (ID3D12RootSignature *)0x0;
    this_02->_padding_ = (longlong)&___7CD3DX12_GLOBAL_ROOT_SIGNATURE_SUBOBJECT__6B_;
    this_02->_padding_ = 0;
    CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE::AddToStateObject
              ((SUBOBJECT_HELPER_BASE *)this_02,&local_288);
    pCVar46 = this_02;
  }
  local_2d8 = pCVar46;
  std::
  list<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>,std::allocator<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>_>_>
  ::emplace_back<CD3DX12_GLOBAL_ROOT_SIGNATURE_SUBOBJECT_*_&>
            (&local_288.m_OwnedSubobjectHelpers,&local_2d8);
  pIVar45 = (this->RootSignature).Reference;
  if ((pCVar46->m_pRootSig).ptr_ != pIVar45) {
    if (pIVar45 != (ID3D12RootSignature *)0x0) {
      (**(code **)((longlong)*pIVar45 + 8))(pIVar45);
    }
    pIVar4 = (pCVar46->m_pRootSig).ptr_;
    (pCVar46->m_pRootSig).ptr_ = pIVar45;
    if (pIVar4 != (ID3D12RootSignature *)0x0) {
      (**(code **)((longlong)*pIVar4 + 0x10))();
    }
  }
  this_03 = ::operator_new(0x90);
  if (this_03 != (CD3DX12_WORK_GRAPH_SUBOBJECT *)0x0) {
    this_03->_padding_ = 0;
    this_03->_padding_ = (longlong)&___7CD3DX12_WORK_GRAPH_SUBOBJECT__6B_;
    (this_03->m_Entrypoints)._Mypair._Myval2._Myfirst = (D3D12_NODE_ID *)0x0;
    (this_03->m_Entrypoints)._Mypair._Myval2._Mylast = (D3D12_NODE_ID *)0x0;
    (this_03->m_Entrypoints)._Mypair._Myval2._Myend = (D3D12_NODE_ID *)0x0;
    (this_03->m_NodeDescs)._Mypair._Myval2._Myfirst = (D3D12_NODE *)0x0;
    (this_03->m_NodeDescs)._Mypair._Myval2._Mylast = (D3D12_NODE *)0x0;
    (this_03->m_NodeDescs)._Mypair._Myval2._Myend = (D3D12_NODE *)0x0;
    (this_03->m_Strings).m_Strings._Mypair._Myval2._Myhead =
         (_List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
          *)0x0;
    (this_03->m_Strings).m_Strings._Mypair._Myval2._Mysize = 0;
    p_Var30 = ::operator_new(0x30);
    local_1f0 = 0;
    uStack_1e8 = 0;
    p_Var30->_Next = p_Var30;
    p_Var30->_Prev = p_Var30;
    (this_03->m_Strings).m_Strings._Mypair._Myval2._Myhead = p_Var30;
    (this_03->m_OwnedNodeHelpers)._Mypair._Myval2._Myfirst =
         (unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>
          *)0x0;
    (this_03->m_OwnedNodeHelpers)._Mypair._Myval2._Mylast =
         (unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>
          *)0x0;
    (this_03->m_OwnedNodeHelpers)._Mypair._Myval2._Myend =
         (unique_ptr<CD3DX12_NODE_HELPER_BASE_const_,std::default_delete<CD3DX12_NODE_HELPER_BASE_const_>_>
          *)0x0;
    (this_03->m_Desc).ProgramName = (wchar_t *)0x0;
    (this_03->m_Desc).Flags = D3D12_WORK_GRAPH_FLAG_NONE;
    (this_03->m_Desc).NumEntrypoints = 0;
    local_1d0 = 0;
    (this_03->m_Desc).pEntrypoints = (D3D12_NODE_ID *)0x0;
    *(undefined8 *)&(this_03->m_Desc).NumExplicitlyDefinedNodes = 0;
    this_03->_padding_ = 0;
    local_1e0 = 0;
    uStack_1d8 = 0;
    (this_03->m_Desc).pExplicitlyDefinedNodes = (D3D12_NODE *)0x0;
    pDVar5 = (this_03->m_Entrypoints)._Mypair._Myval2._Myfirst;
    if (pDVar5 != (this_03->m_Entrypoints)._Mypair._Myval2._Mylast) {
      (this_03->m_Entrypoints)._Mypair._Myval2._Mylast = pDVar5;
    }
    pDVar6 = (this_03->m_NodeDescs)._Mypair._Myval2._Myfirst;
    if (pDVar6 != (this_03->m_NodeDescs)._Mypair._Myval2._Mylast) {
      (this_03->m_NodeDescs)._Mypair._Myval2._Mylast = pDVar6;
    }
    CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE::AddToStateObject
              ((SUBOBJECT_HELPER_BASE *)this_03,&local_288);
  }
  local_2d0 = this_03;
  std::
  list<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>,std::allocator<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>_>_>
  ::emplace_back<CD3DX12_WORK_GRAPH_SUBOBJECT_*_&>(&local_288.m_OwnedSubobjectHelpers,&local_2d0);
  local_348 = (FScriptContainerElement *)0x151097530;
  if (1 < (param_2->ProgramName).Data.ArrayNum) {
    local_348 = (param_2->ProgramName).Data.AllocatorInstance.Data;
  }
  pwVar31 = CD3DX12_STATE_OBJECT_DESC::
            StringContainer<wchar_t_const_*,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
            ::LocalCopy(&this_03->m_Strings,(wchar_t *)local_348,false);
  (this_03->m_Desc).ProgramName = pwVar31;
  local_2e0 = &param_2->ShaderTable;
  ppFVar27 = TArrayView<FRHIWorkGraphShader_*,int>::operator[](local_2e0,0);
  if (*(int *)&(*ppFVar27)[1].field_0x48 == 0) {
    pwVar31 = L"";
  }
  else {
    pwVar31 = *(wchar_t **)&(*ppFVar27)[1].field_0x40;
  }
  local_2c8.Name =
       CD3DX12_STATE_OBJECT_DESC::
       StringContainer<wchar_t_const_*,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
       ::LocalCopy(&this_03->m_Strings,pwVar31,false);
  pDVar5 = (this_03->m_Entrypoints)._Mypair._Myval2._Mylast;
  local_2c8.ArrayIndex = 0;
  if (pDVar5 == (this_03->m_Entrypoints)._Mypair._Myval2._Myend) {
    std::vector<D3D12_NODE_ID,std::allocator<D3D12_NODE_ID>_>::_Emplace_reallocate<D3D12_NODE_ID>
              (&this_03->m_Entrypoints,pDVar5,&local_2c8);
  }
  else {
    pDVar5->Name = local_2c8.Name;
    *(ulonglong *)&pDVar5->ArrayIndex = (ulonglong)(uint)local_2c8._12_4_ << 0x20;
    ppDVar3 = &(this_03->m_Entrypoints)._Mypair._Myval2._Mylast;
    *ppDVar3 = *ppDVar3 + 1;
  }
  pDVar5 = (this_03->m_Entrypoints)._Mypair._Myval2._Myfirst;
  puVar37 = &(this_03->m_Desc).NumEntrypoints;
  *puVar37 = *puVar37 + 1;
  (this_03->m_Desc).pEntrypoints = pDVar5;
  iVar24 = (param_2->ShaderTable).ArrayNum;
  local_394 = 0;
  if (0 < iVar24) {
    local_350 = 0;
    local_2f8 = (longlong)iVar24;
    do {
      lVar36 = local_350;
      pvVar21 = ThreadLocalStoragePointer;
      iVar24 = (param_2->ShaderTable).ArrayNum;
      uVar26 = 0;
      if ((int)local_394 < iVar24) {
        uVar26 = ~local_394 >> 0x1f;
      }
      if (uVar26 == 0) {
        local_3c8 = (FRHIWorkGraphShader **)(longlong)(int)local_394;
        local_3c0 = (FScriptContainerElement *)(longlong)iVar24;
        bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar22) {
          pcVar15 = (code *)swi(3);
          pFVar28 = (FD3D12WorkGraphPipelineState *)(*pcVar15)();
          return pFVar28;
        }
      }
      pFVar52 = (param_2->ShaderTable).DataPtr[lVar36];
      local_358 = pFVar52;
      if ((*(int *)(*(longlong *)((longlong)pvVar21 + (ulonglong)_tls_index * 8) + 0x9d4c) < ::_TSS0
          ) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        atexit(`FD3D12WorkGraphPipelineState::FD3D12WorkGraphPipelineState'::__l17::
               _dynamic_atexit_destructor_for__EmptyString__);
        _Init_thread_footer(&::_TSS0);
      }
      pFVar43 = &::EmptyString;
      if (pFVar52 != (FRHIWorkGraphShader *)0x0) {
        pFVar43 = (FString *)&pFVar52[1].field_0x40;
      }
      ::FString::FString(&local_338,pFVar43);
      pFVar7 = (param_2->NameMaps).AllocatorInstance.Data;
      iVar24 = (param_2->NameMaps).ArrayNum;
      uVar41 = local_338.Data._8_8_;
      for (pFVar47 = pFVar7; pFVar47 != pFVar7 + (longlong)iVar24 * 0x28; pFVar47 = pFVar47 + 0x28)
      {
        iVar23 = *(int *)(pFVar47 + 8);
        if (iVar23 == (int)uVar41) {
          if (1 < iVar23) {
            iVar23 = FGenericPlatformStricmp::Stricmp
                               (*(wchar_t **)pFVar47,
                                (wchar_t *)local_338.Data.AllocatorInstance.Data);
            bVar22 = iVar23 == 0;
            uVar41 = local_338.Data._8_8_;
            goto LAB_145a92140;
          }
LAB_145a926a0:
          uVar26 = (uint)(((longlong)pFVar47 - (longlong)pFVar7) / 0x28);
          if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_338.Data.AllocatorInstance.Data);
          }
          if (uVar26 == 0xffffffff) goto LAB_145a92162;
          iVar24 = (param_2->NameMaps).ArrayNum;
          pCVar50 = (CD3DX12_DXIL_LIBRARY_SUBOBJECT *)0x0;
          uVar42 = 0;
          if ((int)uVar26 < iVar24) {
            uVar42 = ~uVar26 >> 0x1f;
          }
          if (uVar42 == 0) {
            local_3c8 = (FRHIWorkGraphShader **)(longlong)(int)uVar26;
            local_3c0 = (FScriptContainerElement *)(longlong)iVar24;
            bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar22) {
              pcVar15 = (code *)swi(3);
              pFVar28 = (FD3D12WorkGraphPipelineState *)(*pcVar15)();
              return pFVar28;
            }
          }
          lVar36 = (longlong)(int)uVar26;
          pFVar7 = (param_2->NameMaps).AllocatorInstance.Data;
          iVar24 = *(int *)(pFVar7 + lVar36 * 0x28 + 0x18) + -1;
          if (*(int *)(pFVar7 + lVar36 * 0x28 + 0x18) == 0) {
            pwVar31 = L"";
            iVar24 = 0;
          }
          else {
            pwVar31 = *(wchar_t **)(pFVar7 + lVar36 * 0x28 + 0x10);
          }
          uVar26 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar24,pwVar31);
          puVar37 = TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
                    ::FindOrAddImpl<FString_const_&>
                              ((TMapBase<FString,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_int,0>_>
                                *)local_328,uVar26,(FString *)(pFVar7 + lVar36 * 0x28 + 0x10));
          uVar26 = *puVar37;
          *puVar37 = uVar26 + 1;
          param_2 = local_380;
          pTVar53 = local_300;
          this = local_378;
          if (pFVar52 != (FRHIWorkGraphShader *)0x0) {
            ::FString::PrintfImpl(&local_368,L"%s_%d");
            this_04 = ::operator_new(0x58);
            if (this_04 != (CD3DX12_DXIL_LIBRARY_SUBOBJECT *)0x0) {
              this_04->_padding_ = 0;
              (this_04->m_Strings).m_Strings._Mypair._Myval2._Myhead =
                   (_List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
                    *)0x0;
              this_04->_padding_ = (longlong)&___7CD3DX12_DXIL_LIBRARY_SUBOBJECT__6B_;
              (this_04->m_Strings).m_Strings._Mypair._Myval2._Mysize = 0;
              p_Var30 = ::operator_new(0x30);
              local_1c8 = 0;
              uStack_1c0 = 0;
              p_Var30->_Next = p_Var30;
              p_Var30->_Prev = p_Var30;
              (this_04->m_Strings).m_Strings._Mypair._Myval2._Myhead = p_Var30;
              (this_04->m_Exports)._Mypair._Myval2._Myfirst = (D3D12_EXPORT_DESC *)0x0;
              (this_04->m_Exports)._Mypair._Myval2._Mylast = (D3D12_EXPORT_DESC *)0x0;
              (this_04->m_Exports)._Mypair._Myval2._Myend = (D3D12_EXPORT_DESC *)0x0;
              (this_04->m_Desc).DXILLibrary.pShaderBytecode = (void *)0x0;
              (this_04->m_Desc).DXILLibrary.BytecodeLength = 0;
              this_04->_padding_ = 0;
              *(undefined8 *)&(this_04->m_Desc).NumExports = 0;
              (this_04->m_Desc).pExports = (D3D12_EXPORT_DESC *)0x0;
              local_1b8 = 0;
              uStack_1b0 = 0;
              p_Var30->_Prev->_Next =
                   (_List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
                    *)0x0;
              p_Var30 = p_Var30->_Next;
              while (p_Var30 !=
                     (_List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
                      *)0x0) {
                p_Var12 = p_Var30->_Next;
                std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
                ~basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                          (&p_Var30->_Myval);
                ::operator_delete(p_Var30,0x30);
                p_Var30 = p_Var12;
              }
              p_Var30 = (this_04->m_Strings).m_Strings._Mypair._Myval2._Myhead;
              p_Var30->_Next = p_Var30;
              p_Var30 = (this_04->m_Strings).m_Strings._Mypair._Myval2._Myhead;
              p_Var30->_Prev = p_Var30;
              (this_04->m_Strings).m_Strings._Mypair._Myval2._Mysize = 0;
              pDVar13 = (this_04->m_Exports)._Mypair._Myval2._Myfirst;
              if (pDVar13 != (this_04->m_Exports)._Mypair._Myval2._Mylast) {
                (this_04->m_Exports)._Mypair._Myval2._Mylast = pDVar13;
              }
              CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE::AddToStateObject
                        ((SUBOBJECT_HELPER_BASE *)this_04,&local_288);
              pCVar50 = this_04;
            }
            local_320 = pCVar50;
            std::
            list<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>,std::allocator<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>_>_>
            ::emplace_back<CD3DX12_DXIL_LIBRARY_SUBOBJECT_*_&>
                      (&local_288.m_OwnedSubobjectHelpers,&local_320);
            iVar24 = *(int *)&pFVar52[1].field_0x8;
            (pCVar50->m_Desc).DXILLibrary.pShaderBytecode = *(void **)(pFVar52 + 1);
            (pCVar50->m_Desc).DXILLibrary.BytecodeLength = (longlong)iVar24;
            if (*(int *)&pFVar52[1].field_0x48 == 0) {
              pwVar31 = L"";
            }
            else {
              pwVar31 = *(wchar_t **)&pFVar52[1].field_0x40;
            }
            FVar44.Data = (FScriptContainerElement *)L"";
            if (local_368.Data.ArrayNum != 0) {
              FVar44.Data = local_368.Data.AllocatorInstance.Data;
            }
            local_2b8.Name =
                 CD3DX12_STATE_OBJECT_DESC::
                 StringContainer<wchar_t_const_*,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
                 ::LocalCopy(&pCVar50->m_Strings,(wchar_t *)FVar44.Data,false);
            local_2b8.ExportToRename =
                 CD3DX12_STATE_OBJECT_DESC::
                 StringContainer<wchar_t_const_*,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
                 ::LocalCopy(&pCVar50->m_Strings,pwVar31,false);
            pDVar13 = (pCVar50->m_Exports)._Mypair._Myval2._Mylast;
            pCVar51 = (CD3DX12_LOCAL_ROOT_SIGNATURE_SUBOBJECT *)0x0;
            local_2b8.Flags = D3D12_EXPORT_FLAG_NONE;
            if (pDVar13 == (pCVar50->m_Exports)._Mypair._Myval2._Myend) {
              std::vector<D3D12_EXPORT_DESC,std::allocator<D3D12_EXPORT_DESC>_>::
              _Emplace_reallocate<D3D12_EXPORT_DESC_const_&>(&pCVar50->m_Exports,pDVar13,&local_2b8)
              ;
            }
            else {
              pDVar13->Name = local_2b8.Name;
              pDVar13->ExportToRename = local_2b8.ExportToRename;
              *(ulonglong *)&pDVar13->Flags = (ulonglong)(uint)local_2b8._20_4_ << 0x20;
              ppDVar1 = &(pCVar50->m_Exports)._Mypair._Myval2._Mylast;
              *ppDVar1 = *ppDVar1 + 1;
            }
            pDVar13 = (pCVar50->m_Exports)._Mypair._Myval2._Myfirst;
            (pCVar50->m_Desc).pExports = pDVar13;
            (pCVar50->m_Desc).NumExports =
                 (uint)(((longlong)(pCVar50->m_Exports)._Mypair._Myval2._Mylast - (longlong)pDVar13)
                       / 0x18);
            this_05 = ::operator_new(0x18);
            if (this_05 != (CD3DX12_LOCAL_ROOT_SIGNATURE_SUBOBJECT *)0x0) {
              (this_05->m_pRootSig).ptr_ = (ID3D12RootSignature *)0x0;
              this_05->_padding_ = (longlong)&___7CD3DX12_LOCAL_ROOT_SIGNATURE_SUBOBJECT__6B_;
              this_05->_padding_ = 0;
              CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE::AddToStateObject
                        ((SUBOBJECT_HELPER_BASE *)this_05,&local_288);
              pCVar51 = this_05;
            }
            local_318 = pCVar51;
            std::
            list<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>,std::allocator<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>_>_>
            ::emplace_back<CD3DX12_LOCAL_ROOT_SIGNATURE_SUBOBJECT_*_&>
                      (&local_288.m_OwnedSubobjectHelpers,&local_318);
            pFVar52 = local_358;
            pIVar45 = *(ID3D12RootSignature **)(*(longlong *)&local_358[1].field_0x38 + 8);
            if ((pCVar51->m_pRootSig).ptr_ != pIVar45) {
              if (pIVar45 != (ID3D12RootSignature *)0x0) {
                (**(code **)((longlong)*pIVar45 + 8))(pIVar45);
              }
              pIVar4 = (pCVar51->m_pRootSig).ptr_;
              (pCVar51->m_pRootSig).ptr_ = pIVar45;
              if (pIVar4 != (ID3D12RootSignature *)0x0) {
                (**(code **)((longlong)*pIVar4 + 0x10))();
              }
            }
            this_06 = ::operator_new(0x50);
            if (this_06 != (CD3DX12_SUBOBJECT_TO_EXPORTS_ASSOCIATION_SUBOBJECT *)0x0) {
              this_06->_padding_ = 0;
              this_06->_padding_ =
                   (longlong)&___7CD3DX12_SUBOBJECT_TO_EXPORTS_ASSOCIATION_SUBOBJECT__6B_;
              (this_06->m_Strings).m_Strings._Mypair._Myval2._Myhead =
                   (_List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
                    *)0x0;
              (this_06->m_Strings).m_Strings._Mypair._Myval2._Mysize = 0;
              p_Var30 = ::operator_new(0x30);
              local_208 = 0;
              uStack_200 = 0;
              p_Var30->_Next = p_Var30;
              p_Var30->_Prev = p_Var30;
              (this_06->m_Strings).m_Strings._Mypair._Myval2._Myhead = p_Var30;
              (this_06->m_Exports)._Mypair._Myval2._Myfirst = (wchar_t **)0x0;
              (this_06->m_Exports)._Mypair._Myval2._Mylast = (wchar_t **)0x0;
              (this_06->m_Exports)._Mypair._Myval2._Myend = (wchar_t **)0x0;
              (this_06->m_Desc).pSubobjectToAssociate = (D3D12_STATE_SUBOBJECT *)0x0;
              *(undefined8 *)&(this_06->m_Desc).NumExports = 0;
              this_06->_padding_ = 0;
              local_1f8 = 0;
              (this_06->m_Desc).pExports = (wchar_t **)0x0;
              p_Var30->_Prev->_Next =
                   (_List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
                    *)0x0;
              p_Var30 = p_Var30->_Next;
              while (p_Var30 !=
                     (_List_node<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>,void_*>
                      *)0x0) {
                p_Var12 = p_Var30->_Next;
                std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
                ~basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                          (&p_Var30->_Myval);
                ::operator_delete(p_Var30,0x30);
                p_Var30 = p_Var12;
              }
              p_Var30 = (this_06->m_Strings).m_Strings._Mypair._Myval2._Myhead;
              p_Var30->_Next = p_Var30;
              p_Var30 = (this_06->m_Strings).m_Strings._Mypair._Myval2._Myhead;
              p_Var30->_Prev = p_Var30;
              (this_06->m_Strings).m_Strings._Mypair._Myval2._Mysize = 0;
              ppwVar14 = (this_06->m_Exports)._Mypair._Myval2._Myfirst;
              if (ppwVar14 != (this_06->m_Exports)._Mypair._Myval2._Mylast) {
                (this_06->m_Exports)._Mypair._Myval2._Mylast = ppwVar14;
              }
              CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE::AddToStateObject
                        ((SUBOBJECT_HELPER_BASE *)this_06,&local_288);
              pFVar52 = local_358;
            }
            local_310 = this_06;
            std::
            list<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>,std::allocator<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>_>_>
            ::emplace_back<CD3DX12_SUBOBJECT_TO_EXPORTS_ASSOCIATION_SUBOBJECT_*_&>
                      (&local_288.m_OwnedSubobjectHelpers,&local_310);
            (this_06->m_Desc).pSubobjectToAssociate = (D3D12_STATE_SUBOBJECT *)pCVar51->_padding_;
            FVar44.Data = (FScriptContainerElement *)L"";
            if (local_368.Data.ArrayNum != 0) {
              FVar44.Data = local_368.Data.AllocatorInstance.Data;
            }
            puVar37 = &(this_06->m_Desc).NumExports;
            *puVar37 = *puVar37 + 1;
            local_308 = CD3DX12_STATE_OBJECT_DESC::
                        StringContainer<wchar_t_const_*,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
                        ::LocalCopy(&this_06->m_Strings,(wchar_t *)FVar44.Data,false);
            ppwVar14 = (this_06->m_Exports)._Mypair._Myval2._Mylast;
            if (ppwVar14 == (this_06->m_Exports)._Mypair._Myval2._Myend) {
              std::vector<wchar_t_const_*,std::allocator<wchar_t_const_*>_>::
              _Emplace_reallocate<wchar_t_const_*>(&this_06->m_Exports,ppwVar14,&local_308);
            }
            else {
              *ppwVar14 = local_308;
              pppwVar2 = &(this_06->m_Exports)._Mypair._Myval2._Mylast;
              *pppwVar2 = *pppwVar2 + 1;
            }
            (this_06->m_Desc).pExports = (this_06->m_Exports)._Mypair._Myval2._Myfirst;
            FVar44.Data = (FScriptContainerElement *)L"";
            if (local_368.Data.ArrayNum != 0) {
              FVar44.Data = local_368.Data.AllocatorInstance.Data;
            }
            pCVar38 = CD3DX12_WORK_GRAPH_SUBOBJECT::CreateCommonComputeNodeOverrides
                                (this_03,(wchar_t *)FVar44.Data);
            if (*(int *)(pFVar7 + lVar36 * 0x28 + 0x18) == 0) {
              pwVar31 = L"";
            }
            else {
              pwVar31 = *(wchar_t **)(pFVar7 + lVar36 * 0x28 + 0x10);
            }
            local_2a0 = CD3DX12_STATE_OBJECT_DESC::
                        StringContainer<wchar_t_const_*,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
                        ::LocalCopy((StringContainer<wchar_t_const_*,std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
                                     *)&pCVar38->_padding_,pwVar31,false);
            uStack_298 = uVar26;
            p_Var39 = ::operator_new(0x18);
            this = local_378;
            pTVar53 = &local_378->RootArgOffsets;
            (p_Var39->_Myval).Name = local_2a0;
            *(ulonglong *)&(p_Var39->_Myval).ArrayIndex = CONCAT44(uStack_294,uStack_298);
            p_Var39->_Next = (pCVar38->m_NodeIDs)._Mypair._Myval2._Myhead;
            (pCVar38->m_NodeIDs)._Mypair._Myval2._Myhead = p_Var39;
            (pCVar38->Overrides).pNewName = &p_Var39->_Myval;
            pFVar7 = (pTVar53->AllocatorInstance).Data;
            uVar26 = (local_378->RootArgOffsets).ArrayNum;
            local_398 = uVar26;
            if ((pFVar7 <= (FScriptContainerElement *)&local_398) &&
               (lVar36 = (longlong)(local_378->RootArgOffsets).ArrayMax,
               (FScriptContainerElement *)&local_398 < pFVar7 + lVar36 * 4)) {
              local_3a8 = 4;
              local_3c8 = (FRHIWorkGraphShader **)&local_398;
              local_3c0 = pFVar7;
              local_3b8 = (GUID *)lVar36;
              local_3b0 = (longlong **)(longlong)(int)uVar26;
              bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 );
              if (bVar22) {
                pcVar15 = (code *)swi(3);
                pFVar28 = (FD3D12WorkGraphPipelineState *)(*pcVar15)();
                return pFVar28;
              }
            }
            iVar24 = (this->RootArgOffsets).ArrayNum;
            if (iVar24 == (this->RootArgOffsets).ArrayMax) {
              iVar24 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&pTVar53->AllocatorInstance,&(this->RootArgOffsets).ArrayMax
                                 );
            }
            (this->RootArgOffsets).ArrayNum = iVar24 + 1;
            *(uint *)((pTVar53->AllocatorInstance).Data + (longlong)iVar24 * 4) = local_398;
            p_Var40 = ::operator_new(0x10);
            p_Var40->_Myval = uVar26;
            p_Var40->_Next = (pCVar38->m_UINTs)._Mypair._Myval2._Myhead;
            (pCVar38->m_UINTs)._Mypair._Myval2._Myhead = p_Var40;
            (pCVar38->Overrides).pLocalRootArgumentsTableIndex = &p_Var40->_Myval;
            uVar26 = (uint)*(byte *)(*(longlong *)&pFVar52[1].field_0x38 + 0xb8) << 2;
            if (uVar26 < this->RootArgStrideInBytes) {
              uVar26 = this->RootArgStrideInBytes;
            }
            this->RootArgStrideInBytes = uVar26;
            param_2 = local_380;
            if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_368.Data.AllocatorInstance.Data);
              param_2 = local_380;
            }
          }
          goto LAB_145a92166;
        }
        bVar22 = iVar23 + (int)uVar41 == 1;
LAB_145a92140:
        if (bVar22) goto LAB_145a926a0;
      }
      if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_338.Data.AllocatorInstance.Data);
      }
LAB_145a92162:
      pTVar53 = &this->RootArgOffsets;
LAB_145a92166:
      local_394 = local_394 + 1;
      local_350 = local_350 + 1;
      pTVar49 = local_2f0;
    } while (local_350 < local_2f8);
  }
  this->RootArgStrideInBytes = this->RootArgStrideInBytes + 0xf & 0xfffffff0;
  iVar24 = pTVar53->ArrayNum;
  uVar42 = iVar24 - 1;
  uVar26 = 0;
  if ((int)uVar42 < iVar24) {
    uVar26 = ~uVar42 >> 0x1f;
  }
  if (uVar26 == 0) {
    local_3c8 = (FRHIWorkGraphShader **)(longlong)(int)uVar42;
    local_3c0 = (FScriptContainerElement *)(longlong)iVar24;
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar22) {
      pcVar15 = (code *)swi(3);
      pFVar28 = (FD3D12WorkGraphPipelineState *)(*pcVar15)();
      return pFVar28;
    }
  }
  this_01 = local_2e8;
  this->MaxRootArgOffset =
       *(uint *)((pTVar53->AllocatorInstance).Data + (longlong)pTVar53->ArrayNum * 4 + -4);
  pIVar32 = FD3D12Device::GetDevice(local_2e8);
  pIVar8 = (this->StateObject).Reference;
  pcVar15 = *(code **)((longlong)*pIVar32 + 0x1f0);
  if (pIVar8 != (ID3D12StateObject *)0x0) {
    (this->StateObject).Reference = (ID3D12StateObject *)0x0;
    (**(code **)((longlong)*pIVar8 + 0x10))(pIVar8);
  }
  pDVar33 = CD3DX12_STATE_OBJECT_DESC::operator_D3D12_STATE_OBJECT_DESC_const__(&local_288);
  iVar24 = (*pcVar15)(pIVar32,pDVar33,&_GUID_47016943_fca8_4594_93ea_af258b55346d,&this->StateObject
                     );
  if (iVar24 < 0) {
    local_3c8 = (FRHIWorkGraphShader **)CONCAT44(local_3c8._4_4_,iVar24);
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("(((HRESULT)(HResult)) >= 0)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12WorkGraph.cpp"
                        ,0x101,L"Failed to create work graph state object. Result=%08x");
    if (bVar22) {
      pcVar15 = (code *)swi(3);
      pFVar28 = (FD3D12WorkGraphPipelineState *)(*pcVar15)();
      return pFVar28;
    }
  }
  pIVar8 = (this->StateObject).Reference;
  local_370 = (longlong *)0x0;
  iVar24 = (**(code **)*pIVar8)(pIVar8,&_GUID_460caac7_1d24_446a_a184_ca67db494138,&local_370);
  if (iVar24 < 0) {
    local_3c8 = (FRHIWorkGraphShader **)CONCAT44(local_3c8._4_4_,iVar24);
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("(((HRESULT)(HResult)) >= 0)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12WorkGraph.cpp"
                        ,0x105,
                        L"Failed to query pipeline properties from the work graph pipeline state object. Result=%08x"
                       );
    if (bVar22) {
      pcVar15 = (code *)swi(3);
      pFVar28 = (FD3D12WorkGraphPipelineState *)(*pcVar15)();
      return pFVar28;
    }
  }
  pFVar7 = local_348;
  puVar34 = (undefined4 *)(**(code **)(*local_370 + 0x38))(local_370,local_140,local_348);
  pIVar8 = (this->StateObject).Reference;
  uVar25 = puVar34[1];
  uVar16 = puVar34[2];
  uVar17 = puVar34[3];
  *(undefined4 *)(this->ProgramIdentifier).OpaqueData = *puVar34;
  *(undefined4 *)((longlong)(this->ProgramIdentifier).OpaqueData + 4) = uVar25;
  *(undefined4 *)((this->ProgramIdentifier).OpaqueData + 1) = uVar16;
  *(undefined4 *)((longlong)(this->ProgramIdentifier).OpaqueData + 0xc) = uVar17;
  uVar25 = puVar34[5];
  uVar16 = puVar34[6];
  uVar17 = puVar34[7];
  local_388 = (longlong *)0x0;
  *(undefined4 *)((this->ProgramIdentifier).OpaqueData + 2) = puVar34[4];
  *(undefined4 *)((longlong)(this->ProgramIdentifier).OpaqueData + 0x14) = uVar25;
  *(undefined4 *)((this->ProgramIdentifier).OpaqueData + 3) = uVar16;
  *(undefined4 *)((longlong)(this->ProgramIdentifier).OpaqueData + 0x1c) = uVar17;
  iVar24 = (**(code **)*pIVar8)(pIVar8,&_GUID_065acf71_f863_4b89_82f4_02e4d5886757,&local_388);
  if (iVar24 < 0) {
    local_3c8 = (FRHIWorkGraphShader **)CONCAT44(local_3c8._4_4_,iVar24);
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("(((HRESULT)(HResult)) >= 0)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12WorkGraph.cpp"
                        ,0x110,
                        L"Failed to query work graph properties from the work graph pipeline state object. Result=%08x"
                       );
    if (bVar22) {
      pcVar15 = (code *)swi(3);
      pFVar28 = (FD3D12WorkGraphPipelineState *)(*pcVar15)();
      return pFVar28;
    }
  }
  uVar25 = (**(code **)(*local_388 + 0x28))(local_388,pFVar7);
  local_148 = 0;
  local_158 = 0;
  uStack_150 = 0;
  (**(code **)(*local_388 + 0x70))(local_388,uVar25,&local_158);
  local_190[0] = 1;
  local_178 = 1;
  local_16c = 1;
  local_164 = 1;
  local_1a8 = 1;
  local_19c = 1;
  local_198 = 1;
  local_340 = (longlong *)0x0;
  local_188 = 0x10000;
  local_180 = uStack_150;
  local_174 = 0x10001;
  local_160 = 4;
  local_1a0 = 0;
  pIVar32 = FD3D12Device::GetDevice(this_01);
  local_3b0 = &local_340;
  local_3b8 = &_GUID_696442be_a72e_4059_bc79_5b5c98040fad;
  local_3c0 = (FScriptContainerElement *)0x0;
  local_3c8 = (FRHIWorkGraphShader **)CONCAT44(local_3c8._4_4_,8);
  iVar24 = (**(code **)((longlong)*pIVar32 + 0xd8))(pIVar32,&local_1a8,0,local_190);
  if (iVar24 < 0) {
    local_3c8 = (FRHIWorkGraphShader **)CONCAT44(local_3c8._4_4_,iVar24);
    bVar22 = ::FDebug::CheckVerifyFailedImpl2
                       ("(((HRESULT)(HResult)) >= 0)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12WorkGraph.cpp"
                        ,0x126,L"Failed to allocate backing memory for work graph. Result=%08x");
    if (bVar22) {
      pcVar15 = (code *)swi(3);
      pFVar28 = (FD3D12WorkGraphPipelineState *)(*pcVar15)();
      return pFVar28;
    }
  }
  uVar35 = (**(code **)(*local_340 + 0x58))();
  (this->BackingMemoryAddressRange).StartAddress = uVar35;
  (this->BackingMemoryAddressRange).SizeInBytes = uStack_150;
  bVar22 = UE::RHICore::Nvidia::Aftermath::IsShaderRegistrationEnabled();
  if (bVar22) {
    ppFVar48 = local_2e0->DataPtr;
    ppFVar27 = ppFVar48 + local_2e0->ArrayNum;
    for (; ppFVar48 != ppFVar27; ppFVar48 = ppFVar48 + 1) {
      local_390 = *ppFVar48;
      if (local_390 != (FRHIWorkGraphShader *)0x0) {
        FRHIResource::AddRef((FRHIResource *)local_390);
      }
      pFVar7 = (pTVar49->AllocatorInstance).Data;
      if ((pFVar7 <= (FScriptContainerElement *)&local_390) &&
         ((FScriptContainerElement *)&local_390 < pFVar7 + (longlong)pTVar49->ArrayMax * 8)) {
        local_3b0 = (longlong **)(longlong)pTVar49->ArrayNum;
        local_3a8 = 8;
        local_3c8 = &local_390;
        local_3c0 = pFVar7;
        local_3b8 = (GUID *)(longlong)pTVar49->ArrayMax;
        bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar22) {
          pcVar15 = (code *)swi(3);
          pFVar28 = (FD3D12WorkGraphPipelineState *)(*pcVar15)();
          return pFVar28;
        }
      }
      iVar24 = pTVar49->ArrayNum;
      if (iVar24 == pTVar49->ArrayMax) {
        iVar24 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar49->AllocatorInstance,&pTVar49->ArrayMax);
      }
      pTVar49->ArrayNum = iVar24 + 1;
      pFVar7 = (pTVar49->AllocatorInstance).Data;
      *(undefined8 *)(pFVar7 + (longlong)iVar24 * 8) = 0;
      *(FRHIWorkGraphShader **)(pFVar7 + (longlong)iVar24 * 8) = local_390;
      this = local_378;
    }
  }
  if (local_388 != (longlong *)0x0) {
    (**(code **)(*local_388 + 0x10))();
  }
  if (local_370 != (longlong *)0x0) {
    (**(code **)(*local_370 + 0x10))();
  }
  std::
  list<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>,std::allocator<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>_>_>
  ::
  ~list<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>,std::allocator<std::unique_ptr<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE,std::default_delete<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_HELPER_BASE>_>_>_>
            (&local_288.m_OwnedSubobjectHelpers);
  (local_288.m_RepointedPrograms._Mypair._Myval2._Myhead)->_Prev->_Next =
       (_List_node<D3D12_GENERIC_PROGRAM_DESC,void_*> *)0x0;
  p_Var18 = (local_288.m_RepointedPrograms._Mypair._Myval2._Myhead)->_Next;
  while (p_Var18 != (_List_node<D3D12_GENERIC_PROGRAM_DESC,void_*> *)0x0) {
    p_Var9 = p_Var18->_Next;
    ::operator_delete(p_Var18,0x38);
    p_Var18 = p_Var9;
  }
  ::operator_delete(local_288.m_RepointedPrograms._Mypair._Myval2._Myhead,0x38);
  std::
  list<std::vector<D3D12_STATE_SUBOBJECT_const_*,std::allocator<D3D12_STATE_SUBOBJECT_const_*>_>,std::allocator<std::vector<D3D12_STATE_SUBOBJECT_const_*,std::allocator<D3D12_STATE_SUBOBJECT_const_*>_>_>_>
  ::
  ~list<std::vector<D3D12_STATE_SUBOBJECT_const_*,std::allocator<D3D12_STATE_SUBOBJECT_const_*>_>,std::allocator<std::vector<D3D12_STATE_SUBOBJECT_const_*,std::allocator<D3D12_STATE_SUBOBJECT_const_*>_>_>_>
            (&local_288.m_RepointedSubobjectVectors);
  (local_288.m_RepointedAssociations._Mypair._Myval2._Myhead)->_Prev->_Next =
       (_List_node<D3D12_SUBOBJECT_TO_EXPORTS_ASSOCIATION,void_*> *)0x0;
  p_Var19 = (local_288.m_RepointedAssociations._Mypair._Myval2._Myhead)->_Next;
  while (p_Var19 != (_List_node<D3D12_SUBOBJECT_TO_EXPORTS_ASSOCIATION,void_*> *)0x0) {
    p_Var10 = p_Var19->_Next;
    ::operator_delete(p_Var19,0x28);
    p_Var19 = p_Var10;
  }
  ::operator_delete(local_288.m_RepointedAssociations._Mypair._Myval2._Myhead,0x28);
  std::vector<D3D12_STATE_SUBOBJECT,std::allocator<D3D12_STATE_SUBOBJECT>_>::
  ~vector<D3D12_STATE_SUBOBJECT,std::allocator<D3D12_STATE_SUBOBJECT>_>(&local_288.m_SubobjectArray)
  ;
  (local_288.m_SubobjectList._Mypair._Myval2._Myhead)->_Prev->_Next =
       (_List_node<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_WRAPPER,void_*> *)0x0;
  p_Var20 = (local_288.m_SubobjectList._Mypair._Myval2._Myhead)->_Next;
  while (p_Var20 != (_List_node<CD3DX12_STATE_OBJECT_DESC::SUBOBJECT_WRAPPER,void_*> *)0x0) {
    p_Var11 = p_Var20->_Next;
    ::operator_delete(p_Var20,0x28);
    p_Var20 = p_Var11;
  }
  ::operator_delete(local_288.m_SubobjectList._Mypair._Myval2._Myhead,0x28);
  return this;
}

