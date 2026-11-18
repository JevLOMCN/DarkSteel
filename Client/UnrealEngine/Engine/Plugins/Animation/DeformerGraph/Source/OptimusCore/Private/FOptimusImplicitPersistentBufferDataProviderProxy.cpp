// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 4

// FOptimusImplicitPersistentBufferDataProviderProxy @ 14e1520e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FOptimusImplicitPersistentBufferDataProviderProxy * __thiscall
FOptimusImplicitPersistentBufferDataProviderProxy::FOptimusImplicitPersistentBufferDataProviderProxy
          (FOptimusImplicitPersistentBufferDataProviderProxy *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,int param_2,int param_3,bool param_4,
          TSharedPtr<FOptimusPersistentBufferPool,1> *param_5,FName param_6,int param_7)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedPtr<FOptimusPersistentBufferPool,1> *pTVar6;
  FScriptContainerElement *pFVar7;
  
  pTVar1 = &this->InvocationElementCounts;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7FOptimusImplicitPersistentBufferDataProviderProxy__6B_;
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
  pTVar6 = param_5;
  this->ElementStride = param_2;
  this->TotalElementCount = 0;
  this->RawStride = param_3;
  this->bZeroInitForAtomicWrites = param_4;
  (this->BufferPool).Object = param_5->Object;
  pTVar5 = (param_5->SharedReferenceCount).ReferenceController;
  (this->BufferPool).SharedReferenceCount.ReferenceController = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->DataInterfaceName = param_6;
  this->LODIndex = param_7;
  pFVar7 = (pTVar1->AllocatorInstance).Data;
  iVar3 = (this->InvocationElementCounts).ArrayNum;
  pFVar4 = pFVar7 + (longlong)iVar3 * 4;
  while( true ) {
    if ((this->InvocationElementCounts).ArrayNum != iVar3) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&param_4);
    }
    if (pFVar7 == pFVar4) break;
    this->TotalElementCount = this->TotalElementCount + *(int *)pFVar7;
    pFVar7 = pFVar7 + 4;
  }
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar6->SharedReferenceCount).ReferenceController);
  return this;
}

// AllocateResources @ 14e17ca00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FOptimusImplicitPersistentBufferDataProviderProxy::AllocateResources
          (FOptimusImplicitPersistentBufferDataProviderProxy *this,FRDGBuilder *param_1,
          FAllocationData *param_2)

{
  int iVar1;
  FOptimusPersistentBufferPool *this_00;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  TSet<TTuple<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *this_01;
  FRDGBufferSRV *pFVar8;
  FRDGBufferUAV *pFVar9;
  TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_> *pTVar10;
  byte bVar11;
  uint *puVar12;
  ForElementType<FSetElementId> FVar13;
  uint local_res8 [2];
  FName local_b8;
  TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_> local_b0;
  TArray<int,TSizedDefaultAllocator<32>_> local_a0;
  TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_> local_90;
  FRDGBufferUAVDesc local_80;
  uint *local_70;
  TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_> *local_68;
  FRDGBufferSRVDesc local_60;
  
  local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ArrayNum = 0;
  local_a0.ArrayMax = 0;
  iVar6 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x404,&local_a0.AllocatorInstance,&local_a0.ArrayMax);
  local_a0.ArrayNum = iVar6 + 1;
  *(int *)(local_a0.AllocatorInstance.Data + (longlong)iVar6 * 4) = this->TotalElementCount;
  local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.ArrayMax = 0;
  if (((this->BufferPool).Object == (FOptimusPersistentBufferPool *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_b8 = this->DataInterfaceName;
  local_res8[0] = this->LODIndex;
  this_00 = (this->BufferPool).Object;
  iVar6 = this->RawStride;
  iVar1 = this->ElementStride;
  local_b0.ArrayNum = 0;
  if ((local_b0.ArrayMax < 0) && (local_b0.ArrayMax != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&local_b0.AllocatorInstance,0,&local_b0.ArrayMax);
  }
  FVar3 = local_b8;
  bVar4 = false;
  uVar7 = ::GetTypeHash(local_b8.ComparisonIndex.Value);
  this_01 = (TSet<TTuple<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             *)TMapBase<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>,0>_>
               ::FindOrAddImpl<FName_const_&>
                         ((TMapBase<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>,0>_>
                           *)&this_00->ImplicitBuffersMap,uVar7 + FVar3.Number,&local_b8);
  if (*(int *)&(this_01->Elements).field_0x8 != *(int *)&(this_01->Elements).field_0x34) {
    FVar13 = (this_01->Hash).SecondaryData;
    if (FVar13 == (ForElementType<FSetElementId>)0x0) {
      FVar13 = (ForElementType<FSetElementId>)&this_01->Hash;
    }
    uVar7 = *(uint *)((longlong)FVar13 + (ulonglong)(this_01->HashSize - 1U & local_res8[0]) * 4);
    if (uVar7 != 0xffffffff) {
      do {
        puVar12 = (uint *)((longlong)(int)uVar7 * 0x20 + *(longlong *)&this_01->Elements);
        if (*puVar12 == local_res8[0]) {
          pTVar10 = (TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_> *)
                    (puVar12 + 2);
          if (puVar12 == (uint *)0x0) {
            pTVar10 = (TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_> *)0x0;
          }
          if (pTVar10 !=
              (TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_> *)0x0) {
            FOptimusPersistentBufferPool::ValidateAndGetBuffers
                      (this_00,param_1,iVar1,&local_a0,pTVar10,&local_b0);
            goto LAB_14e17cbb3;
          }
          break;
        }
        uVar7 = puVar12[6];
      } while (uVar7 != 0xffffffff);
    }
  }
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  FOptimusPersistentBufferPool::AllocateBuffers
            (this_00,param_1,iVar1,iVar6,&local_a0,&local_90,&local_b0);
  local_70 = local_res8;
  local_68 = &local_90;
  TSet<TTuple<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<int_const_&,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>_&&>_>
            (this_01,(TPairInitializer<int_const_&,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>_&&>
                      *)&stack0x00000020,(bool *)&local_70);
  bVar4 = true;
  DestructItems<FOptimusPersistentStructuredBuffer,int>
            ((FOptimusPersistentStructuredBuffer *)local_90.AllocatorInstance.Data,local_90.ArrayNum
            );
  if ((FOptimusPersistentStructuredBuffer *)local_90.AllocatorInstance.Data !=
      (FOptimusPersistentStructuredBuffer *)0x0) {
    FMemory::Free(local_90.AllocatorInstance.Data);
  }
LAB_14e17cbb3:
  if ((local_b0.ArrayNum != 1) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4193897210762493524>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\DataInterfaces\\OptimusDataInterfaceRawBuffer.cpp"
                         ,0x1ac,"Buffers.Num() == 1"), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((local_b0.ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_60._padding_._4_4_ = 0;
  local_60._padding_ = 0;
  local_60._padding_._0_4_ = 0xffffffff;
  local_60.Buffer = *(FRDGBuffer **)local_b0.AllocatorInstance.Data;
  this->Buffer = local_60.Buffer;
  local_60._padding_._0_1_ = 0;
  if ((((local_60.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_60._padding_._0_1_ = 0x1c;
  }
  pFVar8 = FRDGBuilder::CreateSRV(param_1,&local_60);
  this->BufferSRV = pFVar8;
  local_80.Buffer = this->Buffer;
  bVar11 = 0;
  local_80._padding_._2_1_ = 0;
  if ((((local_80.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar11 = 0x1c;
  }
  local_80._padding_._0_2_ = (ushort)bVar11;
  pFVar9 = FRDGBuilder::CreateUAV(param_1,&local_80,SkipBarrier);
  this->BufferUAV = pFVar9;
  if ((this->bZeroInitForAtomicWrites != false) && (bVar4)) {
    AddClearUAVPass(param_1,pFVar9,0,Compute);
  }
  if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.AllocatorInstance.Data);
  }
  if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.AllocatorInstance.Data);
  }
  return;
}

// GatherDispatchData @ 14e1b42e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FOptimusImplicitPersistentBufferDataProviderProxy::GatherDispatchData
          (FOptimusImplicitPersistentBufferDataProviderProxy *this,FDispatchData *param_1)

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

// IsValid @ 14e1f0810

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
FOptimusImplicitPersistentBufferDataProviderProxy::IsValid
          (FOptimusImplicitPersistentBufferDataProviderProxy *this,FValidationData *param_1)

{
  if ((param_1->ParameterStructSize == 0x20) && (0 < this->TotalElementCount)) {
    return this->DataInterfaceName != (FName)0x0;
  }
  return false;
}

