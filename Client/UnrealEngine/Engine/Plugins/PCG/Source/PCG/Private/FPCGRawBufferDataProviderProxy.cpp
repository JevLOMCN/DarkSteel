// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// FPCGRawBufferDataProviderProxy @ 149738bc0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FPCGRawBufferDataProviderProxy * __thiscall
FPCGRawBufferDataProviderProxy::FPCGRawBufferDataProviderProxy
          (FPCGRawBufferDataProviderProxy *this,FParams *param_1)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  longlong lVar4;
  undefined8 *puVar5;
  UPCGRawBufferData *pUVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  FPCGRawBufferDataProviderProxy *pFVar11;
  undefined8 *puVar12;
  
  this->SizeBytes = -1;
  this->_padding_ = (longlong)&___7FPCGRawBufferDataProviderProxy__6B_;
  pTVar1 = &this->DataToUpload;
  this->bZeroInitialize = param_1->bZeroInitialize;
  piVar2 = &(this->DataToUpload).ArrayNum;
  piVar3 = &(this->DataToUpload).ArrayMax;
  this->ExportMode = param_1->ExportMode;
  this->OutputPinLabel = param_1->OutputPinLabel;
  this->OutputPinLabelAlias = param_1->OutputPinLabelAlias;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  *piVar3 = 0;
  this->Data = (FRDGBuffer *)0x0;
  this->DataUAV = (FRDGBufferUAV *)0x0;
  (this->DataProviderWeakPtr).WeakPtr = (param_1->DataProviderWeakPtr).WeakPtr;
  lVar4 = *(longlong *)&param_1->AsyncReadbackCallback_RenderThread;
  *(undefined8 *)&(this->AsyncReadbackCallback_RenderThread).field_0x28 = 0;
  *(longlong *)&this->AsyncReadbackCallback_RenderThread = lVar4;
  if (lVar4 != 0) {
    puVar5 = *(undefined8 **)&(param_1->AsyncReadbackCallback_RenderThread).field_0x28;
    puVar12 = (undefined8 *)&(param_1->AsyncReadbackCallback_RenderThread).field_0x10;
    if (puVar5 != (undefined8 *)0x0) {
      puVar12 = puVar5;
    }
    (**(code **)*puVar12)();
  }
  iVar9 = param_1->SizeBytes;
  if (iVar9 < 4) {
    iVar9 = 4;
  }
  this->SizeBytes = iVar9;
  pUVar6 = param_1->DataToUpload;
  if (pUVar6 != (UPCGRawBufferData *)0x0) {
    if ((pTVar1 == &pUVar6->Data) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar11 = (FPCGRawBufferDataProviderProxy *)(*pcVar7)();
      return pFVar11;
    }
    iVar9 = (pUVar6->Data).ArrayNum;
    if (iVar9 != 0) {
      iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,iVar9,&pTVar1->AllocatorInstance,piVar2,piVar3);
      memcpy((pTVar1->AllocatorInstance).Data + (longlong)iVar10 * 4,
             (pUVar6->Data).AllocatorInstance.Data,(longlong)iVar9 << 2);
    }
  }
  return this;
}

// AllocateResources @ 149747780

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FPCGRawBufferDataProviderProxy::AllocateResources
          (FPCGRawBufferDataProviderProxy *this,FRDGBuilder *param_1,FAllocationData *param_2)

{
  uint uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  TConsoleVariableData<bool> *pTVar5;
  bool bVar6;
  byte bVar7;
  bool bVar8;
  FRDGBufferUAV *pFVar9;
  int iVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  FRDGBufferUAVDesc local_68;
  undefined4 local_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  FRDGBufferDesc local_40;
  
  uVar1 = this->SizeBytes;
  if (((uVar1 & 3) != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumBytes % 4 == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                         ,0x3af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uStack_54 = uVar1 >> 2;
  lVar11 = 0;
  uStack_50 = 0x10119;
  local_58 = 4;
  local_40.Usage = StructuredBuffer|ShaderResource|ByteAddressBuffer|UnorderedAccess|Static;
  local_48 = 0;
  local_40.BytesPerElement = 4;
  local_40._12_4_ = uStack_4c;
  local_40.Metadata = (FShaderParametersMetadata *)0x0;
  if (this->ExportMode != NoExport) {
    local_40.Usage =
         StructuredBuffer|ShaderResource|SourceCopy|ByteAddressBuffer|UnorderedAccess|Static;
  }
  local_40.NumElements = uStack_54;
  local_68.Buffer = FRDGBuilder::CreateBuffer(param_1,&local_40,L"PCGRawBuffer",None);
  this->Data = local_68.Buffer;
  local_68._padding_._2_1_ = 0;
  bVar7 = 0;
  if ((((local_68.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar7 = 0x1c;
  }
  local_68._padding_._0_2_ = (ushort)bVar7;
  pFVar9 = FRDGBuilder::CreateUAV(param_1,&local_68,None);
  this->DataUAV = pFVar9;
  pTVar5 = PCGSystemSwitches::CVarFuzzGPUMemory.Ref;
  if ((this->DataToUpload).ArrayNum == 0) {
    if (this->bZeroInitialize == false) {
      bVar6 = IsInParallelGameThread();
      if ((!bVar6) && (bVar6 = IsInGameThread(), !bVar6)) {
        lVar11 = 1;
      }
      if (pTVar5->ShadowedValue[lVar11] == false) {
        return;
      }
      TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&this->DataToUpload,(int)((ulonglong)(longlong)this->SizeBytes >> 2),Default);
      pFVar12 = (this->DataToUpload).AllocatorInstance.Data;
      iVar2 = (this->DataToUpload).ArrayNum;
      pFVar3 = pFVar12 + (longlong)iVar2 * 4;
      iVar10 = (int)GFrameCounter;
      while( true ) {
        if ((this->DataToUpload).ArrayNum != iVar2) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar12 == pFVar3) break;
        iVar10 = iVar10 * 0xbb38435 + 0x3619636b;
        *(int *)pFVar12 = iVar10;
        pFVar12 = pFVar12 + 4;
      }
      iVar2 = (this->DataToUpload).ArrayNum;
      pFVar3 = (this->DataToUpload).AllocatorInstance.Data;
      if ((iVar2 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FRDGBuilder::QueueBufferUpload(param_1,this->Data,pFVar3,(longlong)iVar2 << 2,None);
      return;
    }
    bVar6 = CpuChannel->Enabled < 0;
    if (!bVar6) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId292,
                 "FPCGRawBufferDataProviderProxy::AllocateResources::UploadZeroes",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGRawBufferDataInterface.cpp"
                 ,0x124);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId292);
    }
    TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (&this->DataToUpload,(int)((ulonglong)(longlong)this->SizeBytes >> 2),Default);
    iVar2 = (this->DataToUpload).ArrayNum;
    pFVar3 = (this->DataToUpload).AllocatorInstance.Data;
    if ((iVar2 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FRDGBuilder::QueueBufferUpload(param_1,this->Data,pFVar3,(longlong)iVar2 << 2,None);
  }
  else {
    bVar6 = CpuChannel->Enabled < 0;
    if (!bVar6) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId287,
                 "FPCGRawBufferDataProviderProxy::AllocateResources::UploadData",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Compute\\DataInterfaces\\PCGRawBufferDataInterface.cpp"
                 ,0x11f);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId287);
    }
    iVar2 = (this->DataToUpload).ArrayNum;
    pFVar3 = (this->DataToUpload).AllocatorInstance.Data;
    if ((iVar2 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FRDGBuilder::QueueBufferUpload(param_1,this->Data,pFVar3,(longlong)iVar2 << 2,None);
  }
  if (!bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GatherDispatchData @ 1497523e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FPCGRawBufferDataProviderProxy::GatherDispatchData
          (FPCGRawBufferDataProviderProxy *this,FDispatchData *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uchar *puVar6;
  
  puVar6 = param_1->ParameterBuffer + param_1->ParameterBufferOffset;
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
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      if ((iVar5 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                             ,0x96,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = iVar5 + 1;
      *(FRDGBufferUAV **)puVar6 = this->DataUAV;
      *(int *)(puVar6 + 8) = this->SizeBytes;
      puVar6 = puVar6 + iVar2;
    } while (iVar5 < iVar1);
  }
  return;
}

// GetReadbackData @ 14975d640

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FPCGRawBufferDataProviderProxy::GetReadbackData
          (FPCGRawBufferDataProviderProxy *this,
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
  
  if (this->ExportMode != NoExport) {
    local_28 = this->Data;
    pFVar1 = (param_1->AllocatorInstance).Data;
    iStack_20 = this->SizeBytes;
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
    *(TFunction<void___cdecl(void_const_*,int)> **)(pFVar2 + (longlong)iVar5 * 0x18 + 0x10) =
         local_18;
  }
  return;
}

// IsValid @ 14976c160

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FPCGRawBufferDataProviderProxy::IsValid
          (FPCGRawBufferDataProviderProxy *this,FValidationData *param_1)

{
  if ((this->SizeBytes & 3U) != 0) {
    if (2 < (byte)LogPCG._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
    }
    return false;
  }
  return param_1->ParameterStructSize == 0x10;
}

