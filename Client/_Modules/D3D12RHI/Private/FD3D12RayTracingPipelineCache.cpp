// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 3

// FD3D12RayTracingPipelineCache @ 1459f16b0

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

FD3D12RayTracingPipelineCache * __thiscall
FD3D12RayTracingPipelineCache::FD3D12RayTracingPipelineCache
          (FD3D12RayTracingPipelineCache *this,FD3D12Adapter *param_1)

{
  code *pcVar1;
  void *pvVar2;
  bool bVar3;
  ShaderStage *pSVar4;
  FD3D12RayTracingPipelineCache *pFVar5;
  longlong lVar6;
  ulonglong uVar7;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  D3D12_VERSIONED_ROOT_SIGNATURE_DESC local_38;
  
  this->_padding_ = (longlong)param_1;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  pSVar4 = (this->DefaultLocalRootSignature).Stage;
  *(undefined8 *)&this->Cache = 0;
  lVar6 = 0xc;
  *(undefined8 *)&(this->Cache).field_0x8 = 0;
  *(undefined8 *)&(this->Cache).field_0x20 = 0;
  *(undefined4 *)&(this->Cache).field_0x28 = 0;
  *(undefined4 *)&(this->Cache).field_0x2c = 0x80;
  *(undefined4 *)&(this->Cache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Cache).field_0x34 = 0;
  *(undefined8 *)&(this->Cache).field_0x40 = 0;
  *(undefined4 *)&(this->Cache).field_0x48 = 0;
  (this->DefaultLocalRootSignature)._padding_ = (longlong)param_1;
  (this->DefaultLocalRootSignature).RootSignature.Reference = (ID3D12RootSignature *)0x0;
  do {
    pSVar4->MaxCBVCount = '\0';
    pSVar4->MaxSRVCount = '\0';
    pSVar4->MaxSamplerCount = '\0';
    pSVar4->MaxUAVCount = '\0';
    pSVar4->CBVRegisterMask = 0;
    pSVar4->bVisible = false;
    pvVar2 = ThreadLocalStoragePointer;
    pSVar4 = pSVar4 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  uVar7 = (ulonglong)_tls_index;
  (this->DefaultLocalRootSignature).RootSignatureBlob.Reference = (ID3D10Blob *)0x0;
  (this->DefaultLocalRootSignature).BindSlotOffsetsInDWORDs[0] = '\0';
  (this->DefaultLocalRootSignature).BindSlotOffsetsInDWORDs[1] = '\0';
  (this->DefaultLocalRootSignature).BindSlotOffsetsInDWORDs[2] = '\0';
  (this->DefaultLocalRootSignature).BindSlotOffsetsInDWORDs[3] = '\0';
  (this->DefaultLocalRootSignature).BindSlotOffsetsInDWORDs[4] = '\0';
  (this->DefaultLocalRootSignature).BindSlotOffsetsInDWORDs[5] = '\0';
  (this->DefaultLocalRootSignature).BindSlotOffsetsInDWORDs[6] = '\0';
  (this->DefaultLocalRootSignature).BindSlotOffsetsInDWORDs[7] = '\0';
  (this->DefaultLocalRootSignature).BindSlotOffsetsInDWORDs[8] = '\0';
  (this->DefaultLocalRootSignature).BindSlotOffsetsInDWORDs[9] = '\0';
  (this->DefaultLocalRootSignature).BindSlotOffsetsInDWORDs[10] = '\0';
  (this->DefaultLocalRootSignature).BindSlotOffsetsInDWORDs[0xb] = '\0';
  (this->DefaultLocalRootSignature).BindSlotOffsetsInDWORDs[0xc] = '\0';
  (this->DefaultLocalRootSignature).BindSlotOffsetsInDWORDs[0xd] = '\0';
  (this->DefaultLocalRootSignature).BindSlotOffsetsInDWORDs[0xe] = '\0';
  (this->DefaultLocalRootSignature).BindSlotOffsetsInDWORDs[0xf] = '\0';
  lVar6 = *(longlong *)((longlong)pvVar2 + uVar7 * 8);
  (this->DefaultLocalRootSignature).BindSlotOffsetsInDWORDs[0x10] = '\0';
  (this->DefaultLocalRootSignature).BindSlotOffsetsInDWORDs[0x11] = '\0';
  (this->DefaultLocalRootSignature).BindSlotOffsetsInDWORDs[0x12] = '\0';
  (this->DefaultLocalRootSignature).BindSlotOffsetsInDWORDs[0x13] = '\0';
  (this->DefaultLocalRootSignature).BindSlotOffsetsInDWORDs[0x14] = '\0';
  (this->DefaultLocalRootSignature).BindSlotOffsetsInDWORDs[0x15] = '\0';
  (this->DefaultLocalRootSignature).BindSlotOffsetsInDWORDs[0x16] = '\0';
  (this->DefaultLocalRootSignature).BindSlotOffsetsInDWORDs[0x17] = '\0';
  (this->DefaultLocalRootSignature).BindSlotOffsetsInDWORDs[0x18] = '\0';
  (this->DefaultLocalRootSignature).BindSlotOffsetsInDWORDs[0x19] = '\0';
  (this->DefaultLocalRootSignature).BindSlotOffsetsInDWORDs[0x1a] = '\0';
  (this->DefaultLocalRootSignature).BindSlotOffsetsInDWORDs[0x1b] = '\0';
  (this->DefaultLocalRootSignature).BindSlotOffsetsInDWORDs[0x1c] = '\0';
  (this->DefaultLocalRootSignature).BindSlotOffsetsInDWORDs[0x1d] = '\0';
  (this->DefaultLocalRootSignature).BindSlotOffsetsInDWORDs[0x1e] = '\0';
  (this->DefaultLocalRootSignature).BindSlotOffsetsInDWORDs[0x1f] = '\0';
  (this->DefaultLocalRootSignature).TotalRootSignatureSizeInDWORDs = '\0';
  (this->DefaultLocalRootSignature).RootConstantsSlot = -1;
  (this->DefaultLocalRootSignature).DiagnosticBufferSlot = -1;
  (this->DefaultLocalRootSignature).StaticShaderBindingSlot = -1;
  (this->DefaultLocalRootSignature).StaticShaderBindingCount = -1;
  if (*(int *)(lVar6 + 0x9d4c) <
      `public:___cdecl_FD3D12RayTracingPipelineCache::FD3D12RayTracingPipelineCache(FD3D12Adapter*___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:___cdecl_FD3D12RayTracingPipelineCache::FD3D12RayTracingPipelineCache(FD3D12Adapter*___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:___cdecl_FD3D12RayTracingPipelineCache::FD3D12RayTracingPipelineCache(FD3D12Adapter*___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:___cdecl_FD3D12RayTracingPipelineCache::FD3D12RayTracingPipelineCache(FD3D12Adapter*___ptr64)___ptr64'
                      ::__l2::LLMScope_Name903,L"FD3D12RT/PipelineCache");
      _Init_thread_footer(&`public:___cdecl_FD3D12RayTracingPipelineCache::FD3D12RayTracingPipelineCache(FD3D12Adapter*___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:___cdecl_FD3D12RayTracingPipelineCache::FD3D12RayTracingPipelineCache(FD3D12Adapter*___ptr64)___ptr64'
             ::__l2::LLMScope_Name903,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res10,
             &`public:___cdecl_FD3D12RayTracingPipelineCache::FD3D12RayTracingPipelineCache(FD3D12Adapter*___ptr64)___ptr64'
              ::__l2::LLMScope_Name903,true);
  local_38.Version = 0;
  local_38._4_4_ = 0;
  local_38.field1_0x8._0_8_ = 0;
  local_38.field1_0x8.Desc_1_0.pParameters = (D3D12_ROOT_PARAMETER *)0x0;
  local_38.field1_0x8._16_8_ = 0;
  local_38.field1_0x8.Desc_1_0.pStaticSamplers = (D3D12_STATIC_SAMPLER_DESC *)0x0;
  local_38.field1_0x8._32_8_ = 0;
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentAdapter != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x41,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FD3D12RayTracingPipelineCache *)(*pcVar1)();
      return pFVar5;
    }
  }
  local_38.Version = D3D_ROOT_SIGNATURE_VERSION_1_1;
  if (*(int *)(this->_padding_ + 0xc0) < 2) {
    local_38.Version = D3D_ROOT_SIGNATURE_VERSION_1;
  }
  local_38.field1_0x8._32_8_ = local_38.field1_0x8._32_8_ | 0x80;
  FD3D12RootSignature::Init(&this->DefaultLocalRootSignature,&local_38,RS_RayTracingLocal);
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return this;
}

// GetOrCompileShader @ 145a19ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145a1a1c4) */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FEntry * __thiscall
FD3D12RayTracingPipelineCache::GetOrCompileShader
          (FD3D12RayTracingPipelineCache *this,FD3D12Device *param_1,FD3D12RayTracingShader *param_2
          ,ID3D12RootSignature *param_3,uint param_4,uint param_5,bool param_6,
          ECollectionType param_7,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_8,bool *param_9)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TMap<FD3D12RayTracingPipelineCache::FKey,FD3D12RayTracingPipelineCache::FEntry_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FD3D12RayTracingPipelineCache::FKey,FD3D12RayTracingPipelineCache::FEntry_*,0>_>
  *this_00;
  ID3D12StateObject *pIVar1;
  ForElementType<FString> *pFVar2;
  atomic<unsigned_int> *paVar3;
  FString *pFVar4;
  TTypeCompatibleBytes<FString> *pTVar5;
  atomic<unsigned_int> aVar6;
  FD3D12RayTracingShader *this_01;
  ID3D12StateObject IVar7;
  undefined8 uVar8;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong64 uVar14;
  bool bVar15;
  ECollectionType EVar16;
  Type TVar17;
  int iVar18;
  ECollectionType *pEVar19;
  TRefCountPtr<ID3D12StateObject> TVar20;
  FD3D12ShaderIdentifier *pFVar21;
  FTaskBase *pFVar22;
  undefined8 *puVar23;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar24;
  FEntry *pFVar25;
  longlong lVar26;
  FTaskBase *this_02;
  undefined1 *puVar27;
  ECollectionType *pEVar28;
  ulonglong *puVar29;
  wchar_t *pwVar30;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar31;
  undefined1 auStackY_118 [32];
  EExtendedTaskPriority local_c8;
  ETaskPriority local_c7;
  bool local_c6 [6];
  undefined1 local_c0 [24];
  D3D12_SHADER_BYTECODE local_a8;
  ulonglong *local_98;
  ulonglong local_90;
  uint uStack_88;
  uint uStack_84;
  ID3D12RootSignature *local_80;
  ID3D12RootSignature *pIStack_78;
  ID3D12RootSignature local_68;
  longlong local_60;
  ECollectionType local_58 [2];
  FD3D12ShaderIdentifier local_50;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_118;
  lpCriticalSection = &this->CriticalSection;
  local_a8.pShaderBytecode = param_3;
  local_a8.BytecodeLength = (ulong64)param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_90 = param_2->_padding_;
  if (param_7 == RayGen) {
    pIStack_78 = (this->DefaultLocalRootSignature).RootSignature.Reference;
  }
  else {
    pIStack_78 = (param_2->LocalRootSignature->RootSignature).Reference;
  }
  this_00 = &this->Cache;
  uStack_88 = param_4;
  uStack_84 = param_5;
  local_80 = param_3;
  if (*(int *)&(this->Cache).field_0x8 != *(int *)&(this->Cache).field_0x34) {
    puVar27 = *(undefined1 **)&(this->Cache).field_0x40;
    if (puVar27 == (undefined1 *)0x0) {
      puVar27 = &(this->Cache).field_0x38;
    }
    iVar18 = *(int *)(puVar27 +
                     ((ulonglong)(*(int *)&(this->Cache).field_0x48 - 1) & local_90 & 0xffffffff) *
                     4);
    if (iVar18 != -1) {
      do {
        puVar29 = (ulonglong *)((longlong)iVar18 * 0x30 + *(longlong *)&this_00->field_0x0);
        if ((((*puVar29 == local_90) && ((uint)puVar29[1] == param_4)) &&
            (*(uint *)((longlong)puVar29 + 0xc) == param_5)) &&
           (((ID3D12RootSignature *)puVar29[2] == param_3 &&
            ((ID3D12RootSignature *)puVar29[3] == pIStack_78)))) {
          if ((iVar18 != -1) && (puVar29 != (ulonglong *)0x0)) goto LAB_145a19e0b;
          break;
        }
        iVar18 = (int)puVar29[5];
      } while (iVar18 != -1);
    }
  }
  local_98 = &local_90;
  TSet<TTuple<FD3D12RayTracingPipelineCache::FKey,FD3D12RayTracingPipelineCache::FEntry_*>,TDefaultMapHashableKeyFuncs<FD3D12RayTracingPipelineCache::FKey,FD3D12RayTracingPipelineCache::FEntry_*,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FD3D12RayTracingPipelineCache::FKey_const_&>_>
            ((TSet<TTuple<FD3D12RayTracingPipelineCache::FKey,FD3D12RayTracingPipelineCache::FEntry_*>,TDefaultMapHashableKeyFuncs<FD3D12RayTracingPipelineCache::FKey,FD3D12RayTracingPipelineCache::FEntry_*,0>,FDefaultSetAllocator>
              *)this_00,(int)local_c0 + 0x10,
             (TKeyInitializer<FD3D12RayTracingPipelineCache::FKey_const_&> *)(local_90 & 0xffffffff)
             ,(bool *)&local_98);
  puVar29 = (ulonglong *)((longlong)(int)local_c0._16_4_ * 0x30 + *(longlong *)&this_00->field_0x0);
LAB_145a19e0b:
  pEVar28 = (ECollectionType *)0x0;
  if (puVar29[4] == 0) {
    if (param_9 != (bool *)0x0) {
      *param_9 = false;
    }
    pEVar19 = (ECollectionType *)puVar29[4];
    if ((ECollectionType *)puVar29[4] == (ECollectionType *)0x0) {
      pEVar19 = ::operator_new(0xb0);
      if (pEVar19 != (ECollectionType *)0x0) {
        *pEVar19 = Unknown;
        pEVar19[2] = Unknown;
        pEVar19[3] = Unknown;
        pEVar19[4] = Unknown;
        pEVar19[5] = Unknown;
        pEVar19[6] = Unknown;
        pEVar19[7] = Unknown;
        pEVar19[8] = Unknown;
        pEVar19[9] = Unknown;
        pEVar19[10] = Unknown;
        pEVar19[0xc] = Unknown;
        pEVar19[0xd] = Unknown;
        *(undefined1 *)(pEVar19 + 0xe) = Unknown;
        pEVar19[0x20] = Unknown;
        pEVar19[0x21] = Callable;
        pEVar19[0x22] = ~Unknown;
        pEVar19[0x23] = ~Unknown;
        pEVar19[0x24] = ~Unknown;
        pEVar19[0x25] = ~Unknown;
        pEVar19[0x26] = ~Unknown;
        pEVar19[0x27] = ~Unknown;
        pEVar19[0x28] = ~Unknown;
        pEVar19[0x29] = ~Unknown;
        pEVar19[0x2a] = Unknown;
        pEVar28 = pEVar19;
      }
      puVar29[4] = (ulonglong)pEVar28;
      pEVar19 = pEVar28;
    }
    *pEVar19 = param_7;
    this_01 = *(FD3D12RayTracingShader **)(pEVar19 + 2);
    if (this_01 != param_2) {
      *(FD3D12RayTracingShader **)(pEVar19 + 2) = param_2;
      FRHIResource::AddRef((FRHIResource *)param_2);
      if (this_01 != (FD3D12RayTracingShader *)0x0) {
        FRHIResource::Release((FRHIResource *)this_01);
      }
    }
    uVar14 = local_a8.BytecodeLength;
    if (param_2->bPrecompiledPSO == false) {
      pFVar2 = (ForElementType<FString> *)(pEVar19 + 0x10);
      ::FString::PrintfImpl((FString *)local_c0,L"%s_%016llx");
      if (((pFVar2 <= (ForElementType<FString> *)local_c0) &&
          (local_c0 < pFVar2->InlineData + (int)pEVar19[0x21])) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar10 = (code *)swi(3);
        pFVar25 = (FEntry *)(*pcVar10)();
        return pFVar25;
      }
      EVar16 = pEVar19[0x20];
      if (EVar16 == pEVar19[0x21]) {
        EVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<4>::ForElementType<FString>_>
                           (0x810,pFVar2,(int *)(pEVar19 + 0x21));
      }
      this_02 = (FTaskBase *)0x0;
      pEVar19[0x20] = EVar16 + RayGen;
      lVar26 = (longlong)(int)EVar16;
      pTVar5 = pFVar2->InlineData + lVar26;
      pTVar5->Pad[0] = '\0';
      pTVar5->Pad[1] = '\0';
      pTVar5->Pad[2] = '\0';
      pTVar5->Pad[3] = '\0';
      pTVar5->Pad[4] = '\0';
      pTVar5->Pad[5] = '\0';
      pTVar5->Pad[6] = '\0';
      pTVar5->Pad[7] = '\0';
      *(undefined8 *)pFVar2->InlineData[lVar26].Pad = local_c0._0_8_;
      pEVar19[lVar26 * 4 + 0x12] = local_c0._8_4_;
      pEVar19[lVar26 * 4 + 0x13] = local_c0._12_4_;
      local_c0._8_4_ = 0;
      local_c0._12_4_ = 0;
      local_c0._0_8_ = (FScriptContainerElement *)0x0;
      if ((pEVar19[0x20] != RayGen) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Entry.ExportNames.Num() == 1",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                              ,0x4e1,L"Primary export name must always be first."), bVar15)) {
        pcVar10 = (code *)swi(3);
        pFVar25 = (FEntry *)(*pcVar10)();
        return pFVar25;
      }
      pFVar22 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x118,8);
      if (pFVar22 != (FTaskBase *)0x0) {
        FBaseGraphTask::FBaseGraphTask
                  ((FBaseGraphTask *)pFVar22,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)0x0);
        pFVar22->_padding_ =
             (longlong)&___7__TGraphTask_VFShaderCompileTask_FD3D12RayTracingPipelineCache____6B_;
        this_02 = pFVar22;
      }
      uVar14 = local_a8.BytecodeLength;
      this_02[1]._padding_ = (longlong)pEVar19;
      this_02[1]._padding_ = local_90;
      this_02[1]._padding_ = CONCAT44(uStack_84,uStack_88);
      this_02[1]._padding_ = local_a8.BytecodeLength;
      this_02[1]._padding_ = (longlong)local_80;
      this_02[1]._padding_ = (longlong)pIStack_78;
      if ((*(longlong *)(local_a8.BytecodeLength + 0x10) == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("ParentAdapter != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                              ,0x41,L""), bVar15)) {
        pcVar10 = (code *)swi(3);
        pFVar25 = (FEntry *)(*pcVar10)();
        return pFVar25;
      }
      uVar8 = *(undefined8 *)(*(longlong *)(uVar14 + 0x10) + 0x30);
      this_02[1].RefCount = (atomic<unsigned_int>)(int)uVar8;
      this_02[1].NumLocks = (atomic<unsigned_int>)(int)((ulonglong)uVar8 >> 0x20);
      *(ECollectionType *)&this_02[1].Pipe = param_7;
      *(bool *)((longlong)&this_02[1].Pipe + 4) = param_6;
      UE::Tasks::Private::TranslatePriority(AnyHiPriThreadHiPriTask,&local_c7,&local_c8);
      FBaseGraphTask::Init((FBaseGraphTask *)this_02,L"GraphTask",local_c7,local_c8,None);
      if (this_02 != (FTaskBase *)0x0) {
        LOCK();
        this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
        UNLOCK();
      }
      if (-1 < TaskTrace::TaskChannel->Enabled) {
        TVar17 = UE::Tasks::Private::TranslatePriority
                           ((ETaskPriority)
                            ((ulonglong)*(undefined8 *)&(this_02->LowLevelTask).field_0x38 >> 0x3b)
                            & (Inherit|Default),this_02->ExtendedPriority);
        TaskTrace::Launched((ulong64)this_02->TraceId,
                            (wchar_t *)
                            (*(ulonglong *)&(this_02->LowLevelTask).field_0x38 >> 6 &
                            0x1fffffffffffff),true,TVar17,0x118);
      }
      local_c6[0] = true;
      UE::Tasks::Private::FTaskBase::TryUnlock(this_02,local_c6);
      pEVar19 = pEVar19 + 0xc;
      if (pEVar19 == local_58) {
        if (this_02 == (FTaskBase *)0x0) goto LAB_145a1a399;
        LOCK();
        paVar3 = &this_02->RefCount;
        aVar6 = *paVar3;
        *paVar3 = (atomic<unsigned_int>)((int)*paVar3 + -1);
        UNLOCK();
        if (aVar6 != (atomic<unsigned_int>)0x1) goto LAB_145a1a399;
        puVar23 = (undefined8 *)this_02->_padding_;
      }
      else {
        pFVar22 = *(FTaskBase **)pEVar19;
        *(FTaskBase **)pEVar19 = this_02;
        if (pFVar22 == (FTaskBase *)0x0) goto LAB_145a1a399;
        LOCK();
        paVar3 = &pFVar22->RefCount;
        aVar6 = *paVar3;
        *paVar3 = (atomic<unsigned_int>)((int)*paVar3 + -1);
        UNLOCK();
        if (aVar6 != (atomic<unsigned_int>)0x1) goto LAB_145a1a399;
        puVar23 = (undefined8 *)pFVar22->_padding_;
        this_02 = pFVar22;
      }
      (*(code *)*puVar23)(this_02,1);
    }
    else {
      local_68 = (ID3D12RootSignature)param_2->_padding_;
      local_60 = (longlong)(int)param_2->_padding_;
      TVar20 = FD3D12Device::DeserializeRayTracingStateObject
                         ((FD3D12Device *)local_a8.BytecodeLength,&local_a8,&local_68);
      pIVar1 = (ID3D12StateObject *)(pEVar19 + 4);
      if (pIVar1 != TVar20.Reference) {
        IVar7 = *pIVar1;
        *pIVar1 = *TVar20.Reference;
        *TVar20.Reference = (ID3D12StateObject)0x0;
        if (IVar7 != (ID3D12StateObject)0x0) {
          (**(code **)(*(longlong *)IVar7 + 0x10))();
        }
      }
      if (local_a8.pShaderBytecode != (ID3D12RootSignature *)0x0) {
        (**(code **)((longlong)*(ID3D12RootSignature *)local_a8.pShaderBytecode + 0x10))();
      }
      if (*pIVar1 != (ID3D12StateObject)0x0) {
        FD3D12Device::GetRayTracingPipelineInfo
                  ((FD3D12Device *)uVar14,(ID3D12StateObject *)*pIVar1,
                   (FD3D12RayTracingPipelineInfo *)(pEVar19 + 6));
      }
      if ((*pIVar1 == (ID3D12StateObject)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Entry.StateObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                              ,0x4d7,L"Failed to deserialize RTPSO"), bVar15)) {
        pcVar10 = (code *)swi(3);
        pFVar25 = (FEntry *)(*pcVar10)();
        return pFVar25;
      }
      pFVar2 = (ForElementType<FString> *)(pEVar19 + 0x10);
      pFVar4 = &param_2->EntryPoint;
      if (((pFVar2 <= pFVar4) && (pFVar4 < pFVar2->InlineData + (int)pEVar19[0x21])) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar10 = (code *)swi(3);
        pFVar25 = (FEntry *)(*pcVar10)();
        return pFVar25;
      }
      EVar16 = pEVar19[0x20];
      if (EVar16 == pEVar19[0x21]) {
        EVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<4>::ForElementType<FString>_>
                           (0x810,pFVar2,(int *)(pEVar19 + 0x21));
      }
      pEVar19[0x20] = EVar16 + RayGen;
      ::FString::FString((FString *)(pFVar2->InlineData + (int)EVar16),pFVar4);
      if ((param_2->EntryPoint).Data.ArrayNum == 0) {
        pwVar30 = L"";
      }
      else {
        pwVar30 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar21 = GetShaderIdentifier(&local_50,(ID3D12StateObject *)*pIVar1,pwVar30);
      uVar8 = pFVar21->Data[0];
      uVar11 = pFVar21->Data[1];
      uVar12 = pFVar21->Data[2];
      uVar13 = pFVar21->Data[3];
      *(undefined1 *)(pEVar19 + 0xe) = RayGen;
      *(undefined8 *)(pEVar19 + 0x22) = uVar8;
      *(undefined8 *)(pEVar19 + 0x24) = uVar11;
      *(undefined8 *)(pEVar19 + 0x26) = uVar12;
      *(undefined8 *)(pEVar19 + 0x28) = uVar13;
    }
  }
  else if (param_9 != (bool *)0x0) {
    *param_9 = true;
  }
LAB_145a1a399:
  lVar26 = *(longlong *)(puVar29[4] + 0x30);
  if (lVar26 == 0) {
    if ((param_6) && (*(longlong *)(puVar29[4] + 0x10) == 0)) {
      UE::Logging::Private::BasicFatalLog
                (&`public:_struct_FD3D12RayTracingPipelineCache::FEntry*___ptr64___cdecl_FD3D12RayTracingPipelineCache::GetOrCompileShader(FD3D12Device*___ptr64,FD3D12RayTracingShader*___ptr64,ID3D12RootSignature*___ptr64,unsigned_int,unsigned_int,bool,FD3D12RayTracingPipelineCache::ECollectionType,TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>&___ptr64,bool*___ptr64)___ptr64'
                  ::__l57::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    }
  }
  else if (*(char *)(lVar26 + 0xd0) == '\0') {
    FVar31 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)(puVar29[4] + 0x30);
    FVar9 = (param_8->AllocatorInstance).SecondaryData;
    FVar24 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_8;
    if (FVar9 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar24 = FVar9;
    }
    if ((ulonglong)FVar24 <= (ulonglong)FVar31) {
      FVar24 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_8;
      if (FVar9 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar24 = FVar9;
      }
      if (((ulonglong)FVar31 < (ulonglong)((longlong)FVar24 + (longlong)param_8->ArrayMax * 8)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar10 = (code *)swi(3);
        pFVar25 = (FEntry *)(*pcVar10)();
        return pFVar25;
      }
    }
    iVar18 = param_8->ArrayNum;
    if (iVar18 == param_8->ArrayMax) {
      iVar18 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                         (0x808,&param_8->AllocatorInstance,&param_8->ArrayMax);
    }
    param_8->ArrayNum = iVar18 + 1;
    FVar9 = (param_8->AllocatorInstance).SecondaryData;
    if (FVar9 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      param_8 = (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar9;
    }
    *(undefined8 *)((longlong)param_8 + (longlong)iVar18 * 8) = 0;
    lVar26 = *(longlong *)FVar31;
    *(longlong *)((longlong)param_8 + (longlong)iVar18 * 8) = lVar26;
    if (lVar26 != 0) {
      LOCK();
      *(int *)(lVar26 + 0x30) = *(int *)(lVar26 + 0x30) + 1;
      UNLOCK();
    }
  }
  pFVar25 = (FEntry *)puVar29[4];
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return pFVar25;
}

// Reset @ 145a2e7f0

void __thiscall FD3D12RayTracingPipelineCache::Reset(FD3D12RayTracingPipelineCache *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  int *piVar2;
  ulonglong uVar3;
  void *pvVar4;
  int iVar5;
  undefined8 *puVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  int local_res10;
  int local_78;
  int iStack_74;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar12 = 0;
  iVar5 = *(int *)&(this->Cache).field_0x28;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Cache).field_0x10;
  uVar9 = 1;
  TStack_60.BaseBitIndex = 0;
  TStack_60._28_4_ = 0;
  if (iVar5 != 0) {
    puVar14 = *(uint **)&(this->Cache).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)TStack_60.Array;
    }
    uVar11 = *puVar14;
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      TStack_60.BaseBitIndex = TStack_60.BaseBitIndex + 0x20;
      iVar12 = iVar12 + 1;
      TStack_60._28_4_ = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_145a2e8bf;
      uVar11 = puVar14[lVar10 + 1];
    }
    uVar9 = -uVar11 & uVar11;
    uVar3 = (ulonglong)uVar9 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    TStack_60._28_4_ = TStack_60.BaseBitIndex + -1 + local_res10;
    if (iVar5 < (int)TStack_60._28_4_) {
      TStack_60._28_4_ = iVar5;
    }
  }
LAB_145a2e8bf:
  puVar1 = &(this->Cache).field_0x10;
  uVar11 = *(uint *)&(this->Cache).field_0x28;
  uVar15 = uVar11 & 0xffffffe0;
  TStack_60.CurrentBitIndex = TStack_60._28_4_;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uVar9,iVar12);
  iVar12 = (int)uVar11 >> 5;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->Cache).field_0x8 - *(int *)&(this->Cache).field_0x34);
  if ((((int)uVar11 < 0) || (iVar5 < (int)uVar11)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar9 = *(uint *)&(this->Cache).field_0x28;
  if (uVar11 != uVar9) {
    puVar13 = *(undefined1 **)&(this->Cache).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      uVar15 = uVar15 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_145a2e9d0;
      uVar11 = *(uint *)(puVar13 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar11 = (int)lVar10 + -1 + uVar15;
    if ((int)uVar9 < (int)uVar11) {
      uVar11 = uVar9;
    }
  }
LAB_145a2e9d0:
  while( true ) {
    if (*(int *)&(this->Cache).field_0x8 - *(int *)&(this->Cache).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FD3D12RayTracingPipelineCache::FKey,FD3D12RayTracingPipelineCache::FEntry_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pvVar4 = *(void **)(*(longlong *)&(this->Cache).field_0x0 + 0x20 +
                       (longlong)TStack_60.CurrentBitIndex * 0x30);
    if (pvVar4 != (void *)0x0) {
      DestructItems<FString,int>
                ((FString *)((longlong)pvVar4 + 0x40),*(int *)((longlong)pvVar4 + 0x80));
      puVar6 = *(undefined8 **)((longlong)pvVar4 + 0x30);
      if (puVar6 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(puVar6 + 6);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)*puVar6)(puVar6,1);
        }
      }
      if (*(longlong **)((longlong)pvVar4 + 0x10) != (longlong *)0x0) {
        (**(code **)(**(longlong **)((longlong)pvVar4 + 0x10) + 0x10))();
      }
      if (*(FRHIResource **)((longlong)pvVar4 + 8) != (FRHIResource *)0x0) {
        FRHIResource::Release(*(FRHIResource **)((longlong)pvVar4 + 8));
      }
      ::operator_delete(pvVar4,0xb0);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  TSet<TTuple<FD3D12RayTracingPipelineCache::FKey,FD3D12RayTracingPipelineCache::FEntry_*>,TDefaultMapHashableKeyFuncs<FD3D12RayTracingPipelineCache::FKey,FD3D12RayTracingPipelineCache::FEntry_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FD3D12RayTracingPipelineCache::FKey,FD3D12RayTracingPipelineCache::FEntry_*>,TDefaultMapHashableKeyFuncs<FD3D12RayTracingPipelineCache::FKey,FD3D12RayTracingPipelineCache::FEntry_*,0>,FDefaultSetAllocator>
           *)&this->Cache);
                    /* WARNING: Could not recover jumptable at 0x000145a2eac2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

