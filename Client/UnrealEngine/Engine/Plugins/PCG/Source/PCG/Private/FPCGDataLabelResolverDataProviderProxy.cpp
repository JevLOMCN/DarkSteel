// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 3

// AllocateResources @ 149746900

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FPCGDataLabelResolverDataProviderProxy::AllocateResources
          (FPCGDataLabelResolverDataProviderProxy *this,FRDGBuilder *param_1,
          FAllocationData *param_2)

{
  uint uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FRDGBuffer *pFVar6;
  FRDGBufferSRV *pFVar7;
  undefined1 uVar8;
  FLLMScope local_res8 [2];
  FName local_res20;
  FMemScope local_78;
  FRDGBufferSRVDesc local_70;
  FRDGBufferDesc local_50;
  FRDGBufferSRVDesc local_38;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(&local_78,&local_res20,true);
  uVar1 = (this->DataIdToDataIndexMap).ArrayNum;
  if (uVar1 == 0) {
    local_38.Buffer =
         FSystemTextures::GetDefaultStructuredBuffer((FSystemTextures *)&GSystemTextures,param_1,4);
    local_38._padding_._4_4_ = 0;
    local_38._padding_._0_4_ = 0xffffffff;
    local_38._padding_ = 0;
    local_38._padding_._0_1_ = 0;
    if ((((local_38.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_38._padding_._0_1_ = 0x1c;
    }
    pFVar7 = FRDGBuilder::CreateSRV(param_1,&local_38);
    this->DataIdToDataIndexBufferSRV = pFVar7;
  }
  else {
    local_70._padding_._0_4_ = 0x10109;
    local_70._padding_._0_4_ = 4;
    local_50.NumElements = uVar1;
    local_50.BytesPerElement = 4;
    local_50._12_4_ = local_70._padding_._4_4_;
    local_50.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
    local_70._padding_ = 0;
    local_50.Metadata = (FShaderParametersMetadata *)0x0;
    local_70._padding_._4_4_ = uVar1;
    pFVar6 = FRDGBuilder::CreateBuffer
                       (param_1,&local_50,L"PCGDataLabelResolver_DataIdToDataIndexMap",None);
    local_70._padding_._4_4_ = 0;
    local_70._padding_._0_4_ = 0xffffffff;
    local_70._padding_ = 0;
    uVar8 = 0;
    if (((pFVar6->Desc).Usage & DrawIndirect) != None) {
      uVar8 = 0x1c;
    }
    local_70._padding_._0_4_ = CONCAT31((int3)((uint)(undefined4)local_70._padding_ >> 8),uVar8);
    local_70.Buffer = pFVar6;
    pFVar7 = FRDGBuilder::CreateSRV(param_1,&local_70);
    this->DataIdToDataIndexBufferSRV = pFVar7;
    pFVar3 = (this->DataIdToDataIndexMap).AllocatorInstance.Data;
    iVar2 = (this->DataIdToDataIndexMap).ArrayNum;
    if (iVar2 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FRDGBuilder::QueueBufferUpload(param_1,pFVar6,pFVar3,(longlong)iVar2 << 2,None);
  }
  FMemScope::~FMemScope(&local_78);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// GatherDispatchData @ 149751a20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FPCGDataLabelResolverDataProviderProxy::GatherDispatchData
          (FPCGDataLabelResolverDataProviderProxy *this,FDispatchData *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  
  piVar7 = (int *)(param_1->ParameterBuffer + param_1->ParameterBufferOffset);
  iVar1 = param_1->NumInvocations;
  iVar2 = param_1->ParameterBufferStride;
  if ((iVar1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((iVar2 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x40,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((((longlong)iVar2 & 0xfU) != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements % alignof(ElementType) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x41,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = 0;
  if (0 < param_1->NumInvocations) {
    do {
      uVar5 = 0;
      if ((int)uVar6 < iVar1) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                             ,0x96,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar6 = uVar6 + 1;
      *piVar7 = (this->DataIdToDataIndexMap).ArrayNum;
      *(FRDGBufferSRV **)(piVar7 + 2) = this->DataIdToDataIndexBufferSRV;
      piVar7 = (int *)((longlong)piVar7 + (longlong)iVar2);
    } while ((int)uVar6 < param_1->NumInvocations);
  }
  return;
}

// IsValid @ 14976bf90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
FPCGDataLabelResolverDataProviderProxy::IsValid
          (FPCGDataLabelResolverDataProviderProxy *this,FValidationData *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res10 [8];
  
  if (param_1->ParameterStructSize == 0x10) {
    pFVar3 = (this->DataIdToDataIndexMap).AllocatorInstance.Data;
    iVar2 = (this->DataIdToDataIndexMap).ArrayNum;
    pFVar1 = pFVar3 + (longlong)iVar2 * 4;
    while( true ) {
      if ((this->DataIdToDataIndexMap).ArrayNum != iVar2) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar3 == pFVar1) {
        return true;
      }
      if (*(int *)pFVar3 < 0) break;
      pFVar3 = pFVar3 + 4;
    }
  }
  return false;
}

