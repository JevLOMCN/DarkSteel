// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// AllocateResources @ 149746090

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPCGCopyPointsDataProviderProxy::AllocateResources
          (FPCGCopyPointsDataProviderProxy *this,FRDGBuilder *param_1,FAllocationData *param_2)

{
  uint uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 uVar5;
  bool bVar6;
  FRDGBufferSRV *pFVar7;
  bool bVar8;
  FLLMScope local_res8 [2];
  FName local_res20;
  FMemScope local_88;
  FRDGBufferSRVDesc local_80;
  FRDGBufferDesc local_60;
  FRDGBufferSRVDesc local_48;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId302,"FPCGCopyPointsDataProviderProxy::AllocateResources",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\Elements\\PCGCopyPointsDataInterface.cpp"
               ,0x12e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId302);
  }
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(&local_88,&local_res20,true);
  uVar1 = (this->Data).SourceAndTargetDataIndices.ArrayNum;
  if (uVar1 == 0) {
    local_48.Buffer =
         FSystemTextures::GetDefaultStructuredBuffer((FSystemTextures *)&GSystemTextures,param_1,8);
    local_48._padding_._0_4_ = 0xffffffff;
    local_48._padding_._4_4_ = 0;
    local_48._padding_ = 0;
    local_48._padding_._0_1_ = 0;
    if ((((local_48.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_48._padding_._0_1_ = 0x1c;
    }
    pFVar7 = FRDGBuilder::CreateSRV(param_1,&local_48);
    this->SourceAndTargetDataIndicesBufferSRV = pFVar7;
  }
  else {
    local_80._padding_._0_4_ = 0x10109;
    local_80._padding_._0_4_ = 8;
    local_60.NumElements = uVar1;
    local_60.BytesPerElement = 8;
    local_60._12_4_ = local_80._padding_._4_4_;
    local_60.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
    local_80._padding_ = 0;
    local_60.Metadata = (FShaderParametersMetadata *)0x0;
    local_80._padding_._4_4_ = uVar1;
    local_80.Buffer =
         FRDGBuilder::CreateBuffer
                   (param_1,&local_60,L"PCGCopyPoints_SourceAndTargetDataIndices",None);
    this->SourceAndTargetDataIndicesBuffer = local_80.Buffer;
    local_80._padding_._4_4_ = 0;
    local_80._padding_._0_4_ = 0xffffffff;
    local_80._padding_ = 0;
    uVar5 = 0;
    if ((((local_80.Buffer)->Desc).Usage & DrawIndirect) != None) {
      uVar5 = 0x1c;
    }
    local_80._padding_._0_4_ = CONCAT31((int3)((uint)(undefined4)local_80._padding_ >> 8),uVar5);
    pFVar7 = FRDGBuilder::CreateSRV(param_1,&local_80);
    this->SourceAndTargetDataIndicesBufferSRV = pFVar7;
    iVar2 = (this->Data).SourceAndTargetDataIndices.ArrayNum;
    pFVar3 = (this->Data).SourceAndTargetDataIndices.AllocatorInstance.Data;
    if ((iVar2 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FRDGBuilder::QueueBufferUpload
              (param_1,this->SourceAndTargetDataIndicesBuffer,pFVar3,(longlong)iVar2 << 3,None);
  }
  FMemScope::~FMemScope(&local_88);
  FLLMScope::~FLLMScope(local_res8);
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GatherDispatchData @ 149751170

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FPCGCopyPointsDataProviderProxy::GatherDispatchData
          (FPCGCopyPointsDataProviderProxy *this,FDispatchData *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uchar *puVar4;
  code *pcVar5;
  bool bVar6;
  uint *puVar7;
  int iVar8;
  
  iVar1 = param_1->ParameterBufferOffset;
  puVar4 = param_1->ParameterBuffer;
  iVar2 = param_1->NumInvocations;
  iVar3 = param_1->ParameterBufferStride;
  if ((iVar2 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((iVar3 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x40,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((((longlong)iVar3 & 0xfU) != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements % alignof(ElementType) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x41,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = 0;
  if (0 < iVar2) {
    puVar7 = (uint *)(puVar4 + (longlong)iVar1 + 8);
    do {
      if ((iVar8 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                             ,0x96,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = iVar8 + 1;
      puVar7[-2] = (this->Data).RotationInheritance;
      puVar7[-1] = (this->Data).ApplyTargetRotationToPositions;
      *puVar7 = (this->Data).ScaleInheritance;
      puVar7[1] = (this->Data).ApplyTargetScaleToPositions;
      puVar7[2] = (this->Data).ColorInheritance;
      puVar7[3] = (this->Data).SeedInheritance;
      puVar7[4] = (this->Data).AttributeInheritance;
      puVar7[5] = (this->Data).bCopyEachSourceOnEveryTarget;
      *(FRDGBufferSRV **)(puVar7 + 6) = this->SourceAndTargetDataIndicesBufferSRV;
      puVar7 = (uint *)((longlong)puVar7 + (longlong)iVar3);
    } while (iVar8 < iVar2);
  }
  return;
}

// GatherPermutations @ 149753d10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FPCGCopyPointsDataProviderProxy::GatherPermutations
          (FPCGCopyPointsDataProviderProxy *this,FPermutationData *param_1)

{
  FScriptContainerElement *pFVar1;
  FComputeKernelPermutationVector *this_00;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  
  this_00 = param_1->PermutationVector;
  piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar7 < `public:___cdecl_FCopyPointsDataInterfacePermutationIds::FCopyPointsDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                 ::__l3::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_FCopyPointsDataInterfacePermutationIds::FCopyPointsDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                           ::__l3::_thread_safe_static_guard_0__),
     `public:___cdecl_FCopyPointsDataInterfacePermutationIds::FCopyPointsDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
     ::__l3::_thread_safe_static_guard_0__ == -1)) {
    ::FString::FString(&`public:___cdecl_FCopyPointsDataInterfacePermutationIds::FCopyPointsDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                        ::__l3::Name,L"USE_INPUT_DATA_INDICES_BUFFER");
    atexit(`FCopyPointsDataInterfacePermutationIds::FCopyPointsDataInterfacePermutationIds'::__l3::
           _dynamic_atexit_destructor_for__Name__);
    _Init_thread_footer(&`public:___cdecl_FCopyPointsDataInterfacePermutationIds::FCopyPointsDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                         ::__l3::_thread_safe_static_guard_0__);
  }
  uVar8 = 0;
  if ((*piVar7 < `public:___cdecl_FCopyPointsDataInterfacePermutationIds::FCopyPointsDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                 ::__l3::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:___cdecl_FCopyPointsDataInterfacePermutationIds::FCopyPointsDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                           ::__l3::_thread_safe_static_guard_1__),
     `public:___cdecl_FCopyPointsDataInterfacePermutationIds::FCopyPointsDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
     ::__l3::_thread_safe_static_guard_1__ == -1)) {
    uVar5 = `public:___cdecl_FCopyPointsDataInterfacePermutationIds::FCopyPointsDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
            ::__l3::Name.Data.ArrayNum - 1;
    FVar3 = `public:___cdecl_FCopyPointsDataInterfacePermutationIds::FCopyPointsDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
            ::__l3::Name.Data.AllocatorInstance;
    if (`public:___cdecl_FCopyPointsDataInterfacePermutationIds::FCopyPointsDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
        ::__l3::Name.Data.ArrayNum == 0) {
      uVar5 = 0;
      FVar3.Data = (FScriptContainerElement *)L"";
    }
    `public:___cdecl_FCopyPointsDataInterfacePermutationIds::FCopyPointsDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
    ::__l3::Hash = FCrc::Strihash_DEPRECATED<wchar_t>(uVar5,(wchar_t *)FVar3.Data);
    _Init_thread_footer(&`public:___cdecl_FCopyPointsDataInterfacePermutationIds::FCopyPointsDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                         ::__l3::_thread_safe_static_guard_1__);
  }
  uVar5 = FComputeKernelPermutationVector::GetPermutationBits
                    (this_00,&`public:___cdecl_FCopyPointsDataInterfacePermutationIds::FCopyPointsDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                              ::__l3::Name,
                     `public:___cdecl_FCopyPointsDataInterfacePermutationIds::FCopyPointsDataInterfacePermutationIds(FComputeKernelPermutationVector_const&___ptr64)___ptr64'
                     ::__l3::Hash,1);
  uVar10 = uVar8;
  if (0 < param_1->NumInvocations) {
    do {
      uVar9 = (uint)uVar10;
      uVar11 = uVar5;
      if ((this->Data).SourceAndTargetDataIndices.ArrayNum == 0) {
        uVar11 = 0;
      }
      uVar6 = 0;
      if ((int)uVar9 < (param_1->PermutationIds).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (param_1->PermutationIds).AllocatorInstance.Data + uVar8;
      *(uint *)pFVar1 = *(uint *)pFVar1 | uVar11;
      uVar8 = uVar8 + 4;
      uVar10 = (ulonglong)(uVar9 + 1);
    } while ((int)(uVar9 + 1) < param_1->NumInvocations);
  }
  return;
}

// IsValid @ 14976be90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
FPCGCopyPointsDataProviderProxy::IsValid
          (FPCGCopyPointsDataProviderProxy *this,FValidationData *param_1)

{
  return param_1->ParameterStructSize == 0x30;
}

