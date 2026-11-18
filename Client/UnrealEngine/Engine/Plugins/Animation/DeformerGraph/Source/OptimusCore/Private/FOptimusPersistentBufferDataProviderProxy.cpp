// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 4

// FOptimusPersistentBufferDataProviderProxy @ 14e155930

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FOptimusPersistentBufferDataProviderProxy * __thiscall
FOptimusPersistentBufferDataProviderProxy::FOptimusPersistentBufferDataProviderProxy
          (FOptimusPersistentBufferDataProviderProxy *this,
          TArray<int,TSizedDefaultAllocator<32>_> *param_1,int param_2,int param_3,
          TSharedPtr<FOptimusPersistentBufferPool,1> *param_4,FName param_5,int param_6)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FScriptContainerElement *pFVar6;
  
  pTVar1 = &this->InvocationElementCounts;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7FOptimusPersistentBufferDataProviderProxy__6B_;
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
  this->TotalElementCount = 0;
  this->ElementStride = param_2;
  this->RawStride = param_3;
  (this->BufferPool).Object = param_4->Object;
  pTVar5 = (param_4->SharedReferenceCount).ReferenceController;
  (this->BufferPool).SharedReferenceCount.ReferenceController = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->ResourceName = param_5;
  this->LODIndex = param_6;
  (this->BufferUAVs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BufferUAVs).ArrayNum = 0;
  (this->BufferUAVs).ArrayMax = 0;
  pFVar6 = (pTVar1->AllocatorInstance).Data;
  iVar3 = (this->InvocationElementCounts).ArrayNum;
  pFVar4 = pFVar6 + (longlong)iVar3 * 4;
  while( true ) {
    if ((this->InvocationElementCounts).ArrayNum != iVar3) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&param_6);
    }
    if (pFVar6 == pFVar4) break;
    this->TotalElementCount = this->TotalElementCount + *(int *)pFVar6;
    pFVar6 = pFVar6 + 4;
  }
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return this;
}

// AllocateResources @ 14e17cd40

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FOptimusPersistentBufferDataProviderProxy::AllocateResources
          (FOptimusPersistentBufferDataProviderProxy *this,FRDGBuilder *param_1,
          FAllocationData *param_2)

{
  int *piVar1;
  int iVar2;
  FOptimusPersistentBufferPool *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FRDGBuffer *pFVar5;
  FName FVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  TSet<TTuple<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *this_01;
  FRDGBufferUAV *pFVar10;
  TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_> *pTVar11;
  uint *puVar12;
  ForElementType<FSetElementId> FVar13;
  uint local_res8 [2];
  int local_res20;
  TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_> local_b8;
  FRDGBufferUAV *local_a8;
  TArray<int,TSizedDefaultAllocator<32>_> local_a0;
  TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_> local_90;
  FRDGBufferUAVDesc local_80;
  FName local_70;
  FRDGUserValidation *local_68;
  TPairInitializer<int_const_&,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>_&&>
  local_60;
  uint *local_50;
  TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_> *local_48;
  
  local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.ArrayNum = 0;
  local_a0.ArrayMax = 0;
  iVar8 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x404,&local_a0.AllocatorInstance,&local_a0.ArrayMax);
  local_a0.ArrayNum = iVar8 + 1;
  *(int *)(local_a0.AllocatorInstance.Data + (longlong)iVar8 * 4) = this->TotalElementCount;
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.ArrayMax = 0;
  if (((this->BufferPool).Object == (FOptimusPersistentBufferPool *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_70 = this->ResourceName;
  local_res8[0] = this->LODIndex;
  this_00 = (this->BufferPool).Object;
  iVar8 = this->RawStride;
  iVar2 = this->ElementStride;
  local_b8.ArrayNum = 0;
  if ((local_b8.ArrayMax < 0) && (local_b8.ArrayMax != 0)) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&local_b8.AllocatorInstance,0,&local_b8.ArrayMax);
  }
  FVar6 = local_70;
  uVar9 = ::GetTypeHash(local_70.ComparisonIndex.Value);
  this_01 = (TSet<TTuple<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             *)TMapBase<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>,0>_>
               ::FindOrAddImpl<FName_const_&>
                         ((TMapBase<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>,0>_>
                           *)this_00,uVar9 + FVar6.Number,&local_70);
  if (*(int *)&(this_01->Elements).field_0x8 != *(int *)&(this_01->Elements).field_0x34) {
    FVar13 = (this_01->Hash).SecondaryData;
    if (FVar13 == (ForElementType<FSetElementId>)0x0) {
      FVar13 = (ForElementType<FSetElementId>)&this_01->Hash;
    }
    uVar9 = *(uint *)((longlong)FVar13 + (ulonglong)(this_01->HashSize - 1U & local_res8[0]) * 4);
    if (uVar9 != 0xffffffff) {
      do {
        puVar12 = (uint *)((longlong)(int)uVar9 * 0x20 + *(longlong *)&this_01->Elements);
        if (*puVar12 == local_res8[0]) {
          pTVar11 = (TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_> *)
                    (puVar12 + 2);
          if (puVar12 == (uint *)0x0) {
            pTVar11 = (TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_> *)0x0;
          }
          if (pTVar11 !=
              (TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_> *)0x0) {
            FOptimusPersistentBufferPool::ValidateAndGetBuffers
                      (this_00,param_1,iVar2,&local_a0,pTVar11,&local_b8);
            goto LAB_14e17cefe;
          }
          break;
        }
        uVar9 = puVar12[6];
      } while (uVar9 != 0xffffffff);
    }
  }
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  FOptimusPersistentBufferPool::AllocateBuffers
            (this_00,param_1,iVar2,iVar8,&local_a0,&local_90,&local_b8);
  local_50 = local_res8;
  local_48 = &local_90;
  TSet<TTuple<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<int_const_&,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>_&&>_>
            (this_01,&local_60,(bool *)&local_50);
  DestructItems<FOptimusPersistentStructuredBuffer,int>
            ((FOptimusPersistentStructuredBuffer *)local_90.AllocatorInstance.Data,local_90.ArrayNum
            );
  if ((FOptimusPersistentStructuredBuffer *)local_90.AllocatorInstance.Data !=
      (FOptimusPersistentStructuredBuffer *)0x0) {
    FMemory::Free(local_90.AllocatorInstance.Data);
  }
LAB_14e17cefe:
  if ((local_b8.ArrayNum != 1) &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4193897210762493454>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\DataInterfaces\\OptimusDataInterfaceRawBuffer.cpp"
                         ,0x1f2,"Buffers.Num() == 1"), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((local_b8.ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this->Buffer = *(FRDGBuffer **)local_b8.AllocatorInstance.Data;
  uVar9 = param_2->NumGraphKernels;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  piVar1 = &(this->BufferUAVs).ArrayMax;
  if ((this->BufferUAVs).ArrayMax < (int)uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar9,&(this->BufferUAVs).AllocatorInstance,(this->BufferUAVs).ArrayNum,piVar1);
  }
  local_res20 = 0;
  if (0 < param_2->NumGraphKernels) {
    local_68 = &param_1->UserValidation;
    local_60.Value =
         (TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_> *)
         &param_1->_padding_;
    do {
      pTVar11 = local_60.Value;
      local_80.Buffer = this->Buffer;
      local_80._padding_._1_1_ = 0;
      local_80._padding_._2_1_ = 0;
      local_80._padding_._0_1_ = 0;
      if ((((local_80.Buffer)->Desc).Usage & DrawIndirect) != None) {
        local_80._padding_._0_1_ = 0x1c;
      }
      FRDGUserValidation::ValidateCreateUAV(local_68,&local_80);
      pFVar5 = local_80.Buffer;
      pFVar10 = FMemStackBase::Alloc((FMemStackBase *)pTVar11,0x48,8);
      pFVar10->_padding_ = pFVar5->_padding_;
      *(byte *)&pFVar10->_padding_ = (byte)pFVar10->_padding_ & 0xfe;
      pFVar10->_padding_ = 0;
      *(undefined8 *)((longlong)&pFVar10->_padding_ + 4) = 0xffffffffffffffff;
      pFVar10->_padding_ = (longlong)&___7FRDGBufferUAV__6B_;
      *(undefined1 *)&pFVar10->_padding_ = 2;
      *(undefined1 *)&pFVar10->_padding_ = 1;
      (pFVar10->Desc)._padding_ =
           CONCAT53(local_80._padding_._3_5_,
                    CONCAT12(local_80._padding_._2_1_,
                             CONCAT11(local_80._padding_._1_1_,(undefined1)local_80._padding_)));
      (pFVar10->Desc).Buffer = local_80.Buffer;
      iVar8 = (param_1->Views).Array.ArrayNum;
      if (iVar8 == (param_1->Views).Array.ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                          (0x808,(ForElementType<FRDGView_*> *)&param_1->Views,
                           &(param_1->Views).Array.ArrayMax);
      }
      (param_1->Views).Array.ArrayNum = iVar8 + 1;
      (param_1->Views).Array.AllocatorInstance.Data[iVar8] = (FRDGView *)pFVar10;
      *(int *)((longlong)&pFVar10->_padding_ + 4) = (param_1->Views).Array.ArrayNum + -1;
      FRDGUserValidation::ValidateCreateUAV(local_68,pFVar10);
      pFVar3 = (this->BufferUAVs).AllocatorInstance.Data;
      local_a8 = pFVar10;
      if (((pFVar3 <= (FScriptContainerElement *)&local_a8) &&
          ((FScriptContainerElement *)&local_a8 < pFVar3 + (longlong)*piVar1 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar8 = (this->BufferUAVs).ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->BufferUAVs).AllocatorInstance,piVar1);
        (this->BufferUAVs).ArrayNum = iVar8;
      }
      (this->BufferUAVs).ArrayNum = iVar8 + 1;
      *(FRDGBufferUAV **)((this->BufferUAVs).AllocatorInstance.Data + (longlong)iVar8 * 8) =
           local_a8;
      local_res20 = local_res20 + 1;
    } while (local_res20 < param_2->NumGraphKernels);
  }
  if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.AllocatorInstance.Data);
  }
  return;
}

// GatherDispatchData @ 14e1b4730

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FOptimusPersistentBufferDataProviderProxy::GatherDispatchData
          (FOptimusPersistentBufferDataProviderProxy *this,FDispatchData *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  
  piVar8 = (int *)(param_1->ParameterBuffer + param_1->ParameterBufferOffset);
  iVar1 = param_1->NumInvocations;
  iVar2 = param_1->ParameterBufferStride;
  if ((iVar1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((iVar2 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x40,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((((longlong)iVar2 & 0xfU) != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements % alignof(ElementType) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x41,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = 0;
  if (0 < iVar1) {
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
      *piVar8 = this->TotalElementCount;
      uVar3 = param_1->GraphKernelIndex;
      uVar6 = 0;
      if ((int)uVar3 < (this->BufferUAVs).ArrayNum) {
        uVar6 = ~uVar3 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar7 = iVar7 + 1;
      *(undefined8 *)(piVar8 + 2) =
           *(undefined8 *)((this->BufferUAVs).AllocatorInstance.Data + (longlong)(int)uVar3 * 8);
      piVar8 = (int *)((longlong)piVar8 + (longlong)iVar2);
    } while (iVar7 < iVar1);
  }
  return;
}

// IsValid @ 14e1f0900

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
FOptimusPersistentBufferDataProviderProxy::IsValid
          (FOptimusPersistentBufferDataProviderProxy *this,FValidationData *param_1)

{
  if (param_1->ParameterStructSize == 0x10) {
    return 0 < this->TotalElementCount;
  }
  return false;
}

