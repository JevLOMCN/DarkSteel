// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// FPCGMetaDataPartitionProviderProxy @ 149738910

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FPCGMetaDataPartitionProviderProxy * __thiscall
FPCGMetaDataPartitionProviderProxy::FPCGMetaDataPartitionProviderProxy
          (FPCGMetaDataPartitionProviderProxy *this,int param_1,int param_2,
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  int *piVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [16];
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *local_res20;
  
  this->PartitionAttributeId = param_1;
  this->_padding_ = (longlong)&___7FPCGMetaDataPartitionProviderProxy__6B_;
  this->NumInputData = param_2;
  iVar8 = -1;
  this->NumPartitions = -1;
  (this->UniqueStringKeyValuesPerInputData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UniqueStringKeyValuesPerInputData).AllocatorInstance.Data =
       (param_3->AllocatorInstance).Data;
  (param_3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->UniqueStringKeyValuesPerInputData).ArrayNum = param_3->ArrayNum;
  (this->UniqueStringKeyValuesPerInputData).ArrayMax = param_3->ArrayMax;
  param_3->ArrayNum = 0;
  param_3->ArrayMax = 0;
  this->AttributeValueToOutputDataIndexSRV = (FRDGBufferSRV *)0x0;
  this->WriteCountersUAV = (FRDGBufferUAV *)0x0;
  iVar2 = (this->UniqueStringKeyValuesPerInputData).ArrayNum;
  pFVar7 = (this->UniqueStringKeyValuesPerInputData).AllocatorInstance.Data;
  pFVar9 = pFVar7 + (longlong)iVar2 * 0x10;
  local_res20 = param_3;
  while( true ) {
    if ((this->UniqueStringKeyValuesPerInputData).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    pTVar4 = local_res20;
    if (pFVar7 == pFVar9) break;
    piVar6 = *(int **)pFVar7;
    iVar3 = *(int *)(pFVar7 + 8);
    piVar1 = piVar6 + iVar3;
    while( true ) {
      if (*(int *)(pFVar7 + 8) != iVar3) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (piVar6 == piVar1) break;
      iVar5 = *piVar6;
      if (*piVar6 < iVar8) {
        iVar5 = iVar8;
      }
      iVar8 = iVar5;
      piVar6 = piVar6 + 1;
    }
    pFVar7 = pFVar7 + 0x10;
  }
  this->NumPartitions = iVar8 + 1;
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(local_res20->AllocatorInstance).Data,
             local_res20->ArrayNum);
  pFVar7 = (pTVar4->AllocatorInstance).Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  return this;
}

// AllocateResources @ 1497472e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FPCGMetaDataPartitionProviderProxy::AllocateResources
          (FPCGMetaDataPartitionProviderProxy *this,FRDGBuilder *param_1,FAllocationData *param_2)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FRDGBuffer *pFVar6;
  FRDGBufferSRV *pFVar7;
  int *piVar8;
  FRDGBufferUAV *pFVar9;
  ForElementType<int> FVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  ForElementType<unsigned_int> FVar15;
  uint uVar16;
  int iVar17;
  undefined1 auStackY_258 [32];
  FLLMScope local_228 [2];
  longlong local_220;
  longlong local_218;
  FRDGBufferUAVDesc local_210;
  undefined8 local_200;
  FName local_1f8;
  FRDGBuilder *local_1f0;
  FRDGBuffer *local_1e8;
  FMemScope local_1e0;
  undefined4 local_1d8;
  uint uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  FRDGBufferSRVDesc local_1c0;
  FRDGBufferDesc local_1a0;
  FRDGBufferDesc local_188;
  TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> local_168;
  TArray<unsigned_int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_> local_d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_258;
  local_1f0 = param_1;
  FLLMScope::FLLMScope(local_228,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_1f8 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(&local_1e0,&local_1f8,true);
  local_210._padding_._4_4_ = this->NumInputData * this->NumPartitions;
  local_168.ArrayMax = 0x20;
  if ((int)local_210._padding_._4_4_ < 1) {
    local_210._padding_._4_4_ = 1;
  }
  local_168.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_168.ArrayNum = 0;
  TArray<int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::SetNumZeroed
            (&local_168,local_210._padding_._4_4_,Default);
  local_210.Buffer = (FRDGBuffer *)CONCAT44(local_210.Buffer._4_4_,0x10109);
  local_210._padding_._0_1_ = 4;
  local_210._padding_._1_1_ = 0;
  local_210._padding_._2_1_ = 0;
  local_210._padding_._3_1_ = 0;
  local_1a0.NumElements = local_210._padding_._4_4_;
  local_1a0.BytesPerElement = 4;
  local_200 = 0;
  local_1a0._12_4_ = local_210.Buffer._4_4_;
  local_1a0.Usage = StructuredBuffer|ShaderResource|SourceCopy|UnorderedAccess|Static;
  local_1a0.Metadata = (FShaderParametersMetadata *)0x0;
  pFVar6 = FRDGBuilder::CreateBuffer(param_1,&local_1a0,L"PCGAttributeValueToOutputDataIndex",None);
  local_1c0._padding_._4_4_ = 0;
  local_1c0._padding_._0_4_ = 0xffffffff;
  local_1c0._padding_ = 0;
  local_1c0._padding_._0_1_ = 0;
  if (((pFVar6->Desc).Usage & DrawIndirect) != None) {
    local_1c0._padding_._0_1_ = 0x1c;
  }
  local_1e8 = pFVar6;
  local_1c0.Buffer = pFVar6;
  pFVar7 = FRDGBuilder::CreateSRV(param_1,&local_1c0);
  iVar17 = 0;
  this->AttributeValueToOutputDataIndexSRV = pFVar7;
  uVar16 = 0;
  if (0 < this->NumInputData) {
    local_218 = 0;
    local_220 = 0;
    do {
      iVar11 = 0;
      if (0 < this->NumPartitions) {
        do {
          lVar14 = local_218;
          uVar5 = 0;
          if ((int)uVar16 < (this->UniqueStringKeyValuesPerInputData).ArrayNum) {
            uVar5 = ~uVar16 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar1 = (this->UniqueStringKeyValuesPerInputData).AllocatorInstance.Data;
          piVar2 = *(int **)(pFVar1 + lVar14);
          for (piVar8 = piVar2; piVar8 != piVar2 + *(int *)(pFVar1 + lVar14 + 8);
              piVar8 = piVar8 + 1) {
            if (*piVar8 == iVar11) {
              if ((int)((longlong)piVar8 - (longlong)piVar2 >> 2) != -1) {
                iVar12 = iVar17;
                iVar17 = iVar17 + 1;
                goto LAB_1497474d6;
              }
              break;
            }
          }
          iVar12 = -1;
LAB_1497474d6:
          uVar13 = uVar16 * this->NumPartitions + iVar11;
          uVar5 = 0;
          if ((int)uVar13 < local_168.ArrayNum) {
            uVar5 = ~uVar13 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          FVar10 = (ForElementType<int>)&local_168;
          if (local_168.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
            FVar10 = local_168.AllocatorInstance.SecondaryData;
          }
          iVar11 = iVar11 + 1;
          *(int *)((longlong)FVar10 + (longlong)(int)uVar13 * 4) = iVar12;
        } while (iVar11 < this->NumPartitions);
      }
      local_220 = local_220 + 1;
      local_218 = local_218 + 0x10;
      uVar16 = uVar16 + 1;
      pFVar6 = local_1e8;
      param_1 = local_1f0;
    } while ((int)uVar16 < this->NumInputData);
  }
  lVar14 = (longlong)local_168.ArrayNum;
  FVar10 = (ForElementType<int>)&local_168;
  if (local_168.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FVar10 = local_168.AllocatorInstance.SecondaryData;
  }
  if ((local_168.ArrayNum < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRDGBuilder::QueueBufferUpload(param_1,pFVar6,(void *)FVar10,lVar14 << 2,None);
  if (local_168.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_168.AllocatorInstance.SecondaryData);
  }
  uStack_1d4 = this->NumInputData * this->NumPartitions;
  uStack_1d0 = 0x10109;
  local_1d8 = 4;
  local_d8.ArrayMax = 0x20;
  if ((int)uStack_1d4 < 1) {
    uStack_1d4 = 1;
  }
  local_188.NumElements = uStack_1d4;
  local_188.BytesPerElement = 4;
  local_1c8 = 0;
  local_188._12_4_ = uStack_1cc;
  local_188.Usage = StructuredBuffer|ShaderResource|SourceCopy|UnorderedAccess|Static;
  local_188.Metadata = (FShaderParametersMetadata *)0x0;
  local_d8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_d8.ArrayNum = 0;
  TArray<unsigned_int,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::SetNumZeroed
            (&local_d8,uStack_1d4,Default);
  pFVar6 = FRDGBuilder::CreateBuffer(param_1,&local_188,L"PCGDataCollection_Counters",None);
  lVar14 = (longlong)local_d8.ArrayNum;
  FVar15 = (ForElementType<unsigned_int>)&local_d8;
  if (local_d8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar15 = local_d8.AllocatorInstance.SecondaryData;
  }
  if ((local_d8.ArrayNum < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FRDGBuilder::QueueBufferUpload(param_1,pFVar6,(void *)FVar15,lVar14 << 2,None);
  local_210._padding_._1_1_ = 0;
  local_210._padding_._2_1_ = 0;
  local_210._padding_._0_1_ = 0;
  if (((pFVar6->Desc).Usage & DrawIndirect) != None) {
    local_210._padding_._0_1_ = 0x1c;
  }
  local_210.Buffer = pFVar6;
  pFVar9 = FRDGBuilder::CreateUAV(param_1,&local_210,None);
  this->WriteCountersUAV = pFVar9;
  if (local_d8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_d8.AllocatorInstance.SecondaryData);
  }
  FMemScope::~FMemScope(&local_1e0);
  FLLMScope::~FLLMScope(local_228);
  return;
}

// GatherDispatchData @ 149752110

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FPCGMetaDataPartitionProviderProxy::GatherDispatchData
          (FPCGMetaDataPartitionProviderProxy *this,FDispatchData *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uchar *puVar6;
  int iVar7;
  
  iVar1 = param_1->ParameterBufferOffset;
  puVar6 = param_1->ParameterBuffer;
  iVar2 = param_1->NumInvocations;
  iVar3 = param_1->ParameterBufferStride;
  if ((iVar2 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((iVar3 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x40,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((((longlong)iVar3 & 0xfU) != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements % alignof(ElementType) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x41,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = 0;
  if (0 < iVar2) {
    puVar6 = puVar6 + (longlong)iVar1 + 8;
    do {
      if ((iVar7 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                             ,0x96,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = iVar7 + 1;
      *(int *)(puVar6 + -8) = this->PartitionAttributeId;
      *(int *)(puVar6 + -4) = this->NumPartitions;
      *(FRDGBufferSRV **)puVar6 = this->AttributeValueToOutputDataIndexSRV;
      *(FRDGBufferUAV **)(puVar6 + 8) = this->WriteCountersUAV;
      puVar6 = puVar6 + iVar3;
    } while (iVar7 < iVar2);
  }
  return;
}

// IsValid @ 14976c070

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FPCGMetaDataPartitionProviderProxy::IsValid
          (FPCGMetaDataPartitionProviderProxy *this,FValidationData *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->UniqueStringKeyValuesPerInputData).ArrayNum;
  pFVar2 = (this->UniqueStringKeyValuesPerInputData).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->UniqueStringKeyValuesPerInputData).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (*(int *)(pFVar2 + 8) == 0) {
      if (2 < (byte)LogPCG._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
      }
      return false;
    }
    pFVar2 = pFVar2 + 0x10;
  }
  if (this->NumPartitions < 1) {
    if ((byte)LogPCG._0_1_ < 3) {
      return false;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    return false;
  }
  if (this->PartitionAttributeId < 0) {
    if ((byte)LogPCG._0_1_ < 3) {
      return false;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    return false;
  }
  return param_1->ParameterStructSize == 0x20;
}

