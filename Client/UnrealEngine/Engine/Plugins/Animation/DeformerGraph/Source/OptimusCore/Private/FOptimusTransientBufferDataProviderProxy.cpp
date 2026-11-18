// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 4

// FOptimusTransientBufferDataProviderProxy @ 14e156900

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FOptimusTransientBufferDataProviderProxy * __thiscall
FOptimusTransientBufferDataProviderProxy::FOptimusTransientBufferDataProviderProxy
          (FOptimusTransientBufferDataProviderProxy *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,int param_2,int param_3,bool param_4)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  
  pTVar1 = &this->InvocationElementCounts;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7FOptimusTransientBufferDataProviderProxy__6B_;
  iVar3 = param_1->ArrayNum;
  piVar2 = &(this->InvocationElementCounts).ArrayMax;
  pFVar4 = (param_1->AllocatorInstance).Data;
  (this->InvocationElementCounts).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 2);
  }
  this->RawStride = param_3;
  this->bZeroInitForAtomicWrites = param_4;
  this->TotalElementCount = 0;
  this->ElementStride = param_2;
  pFVar5 = (pTVar1->AllocatorInstance).Data;
  iVar3 = (this->InvocationElementCounts).ArrayNum;
  pFVar4 = pFVar5 + (longlong)iVar3 * 4;
  while( true ) {
    if ((this->InvocationElementCounts).ArrayNum != iVar3) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&param_4);
    }
    if (pFVar5 == pFVar4) break;
    this->TotalElementCount = this->TotalElementCount + *(int *)pFVar5;
    pFVar5 = pFVar5 + 4;
  }
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return this;
}

// AllocateResources @ 14e17df90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FOptimusTransientBufferDataProviderProxy::AllocateResources
          (FOptimusTransientBufferDataProviderProxy *this,FRDGBuilder *param_1,
          FAllocationData *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  FRDGBufferSRV *pFVar5;
  FRDGBufferUAV *pFVar6;
  byte bVar7;
  FRDGBufferUAVDesc local_58;
  FRDGBufferSRVDesc local_48;
  FRDGBufferDesc local_28;
  
  if ((this->RawStride != 0) && (this->ElementStride % this->RawStride != 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("RawStride == 0 || ElementStride % RawStride == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\DataInterfaces\\OptimusDataInterfaceRawBuffer.cpp"
                       ,0x15e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_48._padding_._0_4_ = this->RawStride;
  if ((uint)local_48._padding_ == 0) {
    local_48._padding_._0_4_ = this->ElementStride;
    iVar4 = 1;
  }
  else {
    iVar4 = this->ElementStride / (int)(uint)local_48._padding_;
  }
  local_48._padding_._4_4_ = iVar4 * this->TotalElementCount;
  local_48._padding_._0_4_ = 0x10109;
  local_48._padding_ = 0;
  local_28.NumElements = local_48._padding_._4_4_;
  local_28.BytesPerElement = (uint)local_48._padding_;
  local_28._12_4_ = local_48._padding_._4_4_;
  local_28.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  local_28.Metadata = (FShaderParametersMetadata *)0x0;
  local_48.Buffer = FRDGBuilder::CreateBuffer(param_1,&local_28,L"TransientBuffer",None);
  this->Buffer = local_48.Buffer;
  local_48._padding_._4_4_ = 0;
  local_48._padding_ = 0;
  local_48._padding_._0_4_ = 0xffffffff;
  uVar3 = 0;
  if ((((local_48.Buffer)->Desc).Usage & DrawIndirect) != None) {
    uVar3 = 0x1c;
  }
  local_48._padding_._0_4_ = CONCAT31((int3)((uint)local_48._padding_ >> 8),uVar3);
  pFVar5 = FRDGBuilder::CreateSRV(param_1,&local_48);
  this->BufferSRV = pFVar5;
  local_58.Buffer = this->Buffer;
  bVar7 = 0;
  local_58._padding_._2_1_ = 0;
  if ((((local_58.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar7 = 0x1c;
  }
  local_58._padding_._0_2_ = (ushort)bVar7;
  pFVar6 = FRDGBuilder::CreateUAV(param_1,&local_58,SkipBarrier);
  this->BufferUAV = pFVar6;
  if (this->bZeroInitForAtomicWrites != false) {
    AddClearUAVPass(param_1,pFVar6,0,Compute);
  }
  return;
}

// GatherDispatchData @ 14e1b58b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FOptimusTransientBufferDataProviderProxy::GatherDispatchData
          (FOptimusTransientBufferDataProviderProxy *this,FDispatchData *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uchar *puVar7;
  
  iVar1 = param_1->ParameterBufferOffset;
  puVar7 = param_1->ParameterBuffer;
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
  iVar6 = 0;
  if (0 < iVar2) {
    puVar7 = puVar7 + (longlong)iVar1 + 0x10;
    do {
      if ((iVar6 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                             ,0x96,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = iVar6 + 1;
      *(int *)(puVar7 + -0x10) = this->TotalElementCount;
      *(FRDGBufferSRV **)(puVar7 + -8) = this->BufferSRV;
      *(FRDGBufferUAV **)puVar7 = this->BufferUAV;
      puVar7 = puVar7 + iVar3;
    } while (iVar6 < iVar2);
  }
  return;
}

// IsValid @ 14e1f0d50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
FOptimusTransientBufferDataProviderProxy::IsValid
          (FOptimusTransientBufferDataProviderProxy *this,FValidationData *param_1)

{
  if (param_1->ParameterStructSize == 0x20) {
    return 0 < this->TotalElementCount;
  }
  return false;
}

