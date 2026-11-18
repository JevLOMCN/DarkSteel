// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// AllocateResources @ 149746ac0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FPCGDebugDataProviderProxy::AllocateResources
          (FPCGDebugDataProviderProxy *this,FRDGBuilder *param_1,FAllocationData *param_2)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  FRDGBufferUAV *pFVar4;
  uint uVar5;
  longlong lVar6;
  FLLMScope local_res8 [2];
  FName local_res20;
  FMemScope local_68;
  TArray<float,TSizedDefaultAllocator<32>_> local_60;
  FRDGBufferUAVDesc local_50;
  undefined8 local_40;
  FRDGBufferDesc local_38;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(&local_68,&local_res20,true);
  local_50.Buffer = (FRDGBuffer *)CONCAT44(local_50.Buffer._4_4_,0x10119);
  local_50._padding_._0_1_ = 4;
  local_50._padding_._1_1_ = 0;
  local_50._padding_._2_1_ = 0;
  local_50._padding_._3_1_ = 0;
  uVar5 = 1;
  if (1 < this->DebugBufferSizeFloats) {
    uVar5 = this->DebugBufferSizeFloats;
  }
  local_50._padding_._4_4_ = uVar5 & 0x3fffffff;
  local_40 = 0;
  local_38._0_8_ = CONCAT44(uVar5,4) & 0x3fffffffffffffff;
  local_38.Metadata = (FShaderParametersMetadata *)0x0;
  local_38._12_4_ = local_50.Buffer._4_4_;
  local_38.Usage =
       StructuredBuffer|ShaderResource|SourceCopy|ByteAddressBuffer|UnorderedAccess|Static;
  local_50.Buffer = FRDGBuilder::CreateBuffer(param_1,&local_38,L"PCGDebugBuffer",None);
  this->DebugBuffer = local_50.Buffer;
  local_50._padding_._2_1_ = 0;
  local_50._padding_._1_1_ = 0;
  local_50._padding_._0_1_ = 0;
  if ((((local_50.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_50._padding_._0_1_ = 0x1c;
  }
  pFVar4 = FRDGBuilder::CreateUAV(param_1,&local_50,None);
  this->DebugBufferUAV = pFVar4;
  local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.ArrayNum = 0;
  local_60.ArrayMax = 0;
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed(&local_60,uVar5,Default);
  FVar2.Data = local_60.AllocatorInstance.Data;
  lVar6 = (longlong)local_60.ArrayNum;
  if (local_60.ArrayNum < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRDGBuilder::QueueBufferUpload(param_1,this->DebugBuffer,FVar2.Data,lVar6 << 2,None);
  if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.AllocatorInstance.Data);
  }
  FMemScope::~FMemScope(&local_68);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// GatherDispatchData @ 149751c80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FPCGDebugDataProviderProxy::GatherDispatchData
          (FPCGDebugDataProviderProxy *this,FDispatchData *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uchar *puVar7;
  
  puVar7 = param_1->ParameterBuffer + param_1->ParameterBufferOffset;
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
      *(FRDGBufferUAV **)puVar7 = this->DebugBufferUAV;
      puVar7 = puVar7 + iVar2;
    } while ((int)uVar6 < param_1->NumInvocations);
  }
  return;
}

// GetReadbackData @ 14975d560

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FPCGDebugDataProviderProxy::GetReadbackData
          (FPCGDebugDataProviderProxy *this,
          TArray<FComputeDataProviderRenderProxy::FReadbackData,TSizedDefaultAllocator<32>_>
          *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FRDGBuffer *local_28;
  int iStack_20;
  undefined4 uStack_1c;
  TFunction<void___cdecl(void_const_*,int)> *local_18;
  
  local_28 = this->DebugBuffer;
  pFVar1 = (param_1->AllocatorInstance).Data;
  iStack_20 = this->DebugBufferSizeFloats << 2;
  local_18 = &this->AsyncReadbackCallback_RenderThread;
  if ((pFVar1 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 < pFVar1 + (longlong)param_1->ArrayMax * 0x18)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = param_1->ArrayNum;
  if (iVar5 == param_1->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar5 + 1;
  pFVar2 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar2 + (longlong)iVar5 * 0x18;
  *(FRDGBuffer **)pFVar1 = local_28;
  *(ulonglong *)(pFVar1 + 8) = CONCAT44(uStack_1c,iStack_20);
  *(TFunction<void___cdecl(void_const_*,int)> **)(pFVar2 + (longlong)iVar5 * 0x18 + 0x10) = local_18
  ;
  return;
}

// IsValid @ 14976c020

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
FPCGDebugDataProviderProxy::IsValid(FPCGDebugDataProviderProxy *this,FValidationData *param_1)

{
  return param_1->ParameterStructSize == 0x10;
}

