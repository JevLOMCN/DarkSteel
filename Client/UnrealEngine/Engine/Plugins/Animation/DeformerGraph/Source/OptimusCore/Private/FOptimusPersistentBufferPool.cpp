// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 5

// AllocateBuffers @ 14e179d60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FOptimusPersistentBufferPool::AllocateBuffers
          (FOptimusPersistentBufferPool *this,FRDGBuilder *param_1,int param_2,int param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4,
          TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_> *param_5,
          TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_> *param_6)

{
  longlong *plVar1;
  uint uVar2;
  FRDGPooledBuffer *pFVar3;
  FRDGPooledBuffer *pFVar4;
  code *pcVar5;
  longlong lVar6;
  FRDGUserValidation *this_00;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  FRDGBuffer *pFVar11;
  TRefCountPtr<FRDGPooledBuffer> *pTVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  longlong lVar15;
  FRDGBuffer *local_90;
  FRDGUserValidation *local_88;
  FRDGBufferDesc local_80;
  uint local_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  FMemStackBase *local_50;
  FRDGTrace *local_48;
  
  uVar2 = param_4->ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (param_5->ArrayMax < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar2,&param_5->AllocatorInstance,param_5->ArrayNum,&param_5->ArrayMax);
  }
  if (((param_3 != 0) && (param_2 % param_3 != 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRawStride == 0 || InElementStride % InRawStride == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDeformerInstance.cpp"
                         ,0x69,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = 1;
  uVar2 = param_2;
  if (param_3 != 0) {
    iVar8 = param_2 / param_3;
    uVar2 = param_3;
  }
  iVar10 = param_4->ArrayNum;
  uVar14 = 0;
  if (0 < iVar10) {
    local_50 = (FMemStackBase *)&param_1->_padding_;
    local_88 = &param_1->UserValidation;
    local_48 = &param_1->Trace;
    lVar15 = 0;
    do {
      this_00 = local_88;
      uVar9 = 0;
      if ((int)uVar14 < iVar10) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uStack_60 = 0x10109;
      local_58 = 0;
      uStack_64 = iVar8 * *(int *)((param_4->AllocatorInstance).Data + lVar15);
      local_80.Metadata = (FShaderParametersMetadata *)0x0;
      local_80._12_4_ = uStack_5c;
      local_80.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
      local_68 = uVar2;
      local_80.BytesPerElement = uVar2;
      local_80.NumElements = uStack_64;
      FRDGUserValidation::ValidateCreateBuffer(this_00,&local_80,L"FOptimusPersistentBuffer",None);
      if (local_80.BytesPerElement == 0) {
        local_80.BytesPerElement = 1;
      }
      if (local_80.NumElements == 0) {
        local_80.NumElements = 1;
      }
      pFVar11 = FMemStackBase::Alloc(local_50,0x130,8);
      pFVar11 = FRDGBuffer::FRDGBuffer(pFVar11,L"FOptimusPersistentBuffer",&local_80,None);
      iVar10 = (param_1->Buffers).Array.ArrayNum;
      if (iVar10 == (param_1->Buffers).Array.ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuffer_*>_>
                           (0x808,(ForElementType<FRDGBuffer_*> *)&param_1->Buffers,
                            &(param_1->Buffers).Array.ArrayMax);
      }
      (param_1->Buffers).Array.ArrayNum = iVar10 + 1;
      (param_1->Buffers).Array.AllocatorInstance.Data[iVar10] = pFVar11;
      (pFVar11->Handle).Index = (param_1->Buffers).Array.ArrayNum - 1;
      FRDGUserValidation::ValidateCreateBuffer(local_88,pFVar11);
      FRDGTrace::AddResource(local_48,(FRDGViewableResource *)pFVar11);
      pFVar13 = (param_6->AllocatorInstance).Data;
      local_90 = pFVar11;
      if (((pFVar13 <= (FScriptContainerElement *)&local_90) &&
          ((FScriptContainerElement *)&local_90 < pFVar13 + (longlong)param_6->ArrayMax * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar10 = param_6->ArrayNum;
      if (iVar10 == param_6->ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&param_6->AllocatorInstance,&param_6->ArrayMax);
      }
      param_6->ArrayNum = iVar10 + 1;
      *(FRDGBuffer **)((param_6->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_90;
      iVar10 = param_5->ArrayNum;
      if (iVar10 == param_5->ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_5->AllocatorInstance,&param_5->ArrayMax);
      }
      param_5->ArrayNum = iVar10 + 1;
      pFVar13 = (param_5->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
      DefaultConstructItems<FOptimusPersistentStructuredBuffer,int>(pFVar13,1);
      *(int *)(pFVar13 + 8) = param_2;
      uVar9 = 0;
      if ((int)uVar14 < param_4->ArrayNum) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(undefined4 *)(pFVar13 + 0xc) = *(undefined4 *)((param_4->AllocatorInstance).Data + lVar15);
      pTVar12 = FRDGBuilder::ConvertToExternalBuffer(param_1,local_90);
      pFVar3 = *(FRDGPooledBuffer **)pFVar13;
      pFVar4 = pTVar12->Reference;
      if (pFVar3 != pFVar4) {
        *(FRDGPooledBuffer **)pFVar13 = pFVar4;
        if (pFVar4 != (FRDGPooledBuffer *)0x0) {
          LOCK();
          *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
          UNLOCK();
        }
        if (pFVar3 != (FRDGPooledBuffer *)0x0) {
          plVar1 = &pFVar3->_padding_;
          LOCK();
          lVar6 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if (((int)lVar6 == 1) && (plVar1 != (longlong *)0x0)) {
            (**(code **)pFVar3->_padding_)(pFVar3,1);
          }
        }
      }
      iVar10 = param_4->ArrayNum;
      uVar14 = uVar14 + 1;
      lVar15 = lVar15 + 4;
    } while ((int)uVar14 < iVar10);
  }
  return;
}

// GetImplicitPersistentBuffers @ 14e1c85b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FOptimusPersistentBufferPool::GetImplicitPersistentBuffers
          (FOptimusPersistentBufferPool *this,FRDGBuilder *param_1,FName param_2,int param_3,
          int param_4,int param_5,TArray<int,TSizedDefaultAllocator<32>_> *param_6,
          TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_> *param_7,bool *param_8)

{
  FName FVar1;
  TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_> *pTVar2;
  bool *pbVar3;
  uint uVar4;
  TSet<TTuple<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *this_00;
  TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_> *pTVar5;
  uint *puVar6;
  ForElementType<FSetElementId> FVar7;
  FName local_res18;
  uint local_res20 [2];
  TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_> local_48;
  uint *local_38;
  TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_> *local_30;
  
  pTVar2 = param_7;
  param_7->ArrayNum = 0;
  local_res18 = param_2;
  local_res20[0] = param_3;
  if (param_7->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_7->AllocatorInstance,0,&param_7->ArrayMax);
  }
  pbVar3 = param_8;
  FVar1 = local_res18;
  *param_8 = false;
  uVar4 = ::GetTypeHash(local_res18.ComparisonIndex.Value);
  this_00 = (TSet<TTuple<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             *)TMapBase<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>,0>_>
               ::FindOrAddImpl<FName_const_&>
                         ((TMapBase<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>,0>_>
                           *)&this->ImplicitBuffersMap,uVar4 + FVar1.Number,&local_res18);
  if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
    FVar7 = (this_00->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this_00->Hash;
    }
    uVar4 = *(uint *)((longlong)FVar7 + (ulonglong)(this_00->HashSize - 1U & local_res20[0]) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar6 = (uint *)((longlong)(int)uVar4 * 0x20 + *(longlong *)&this_00->Elements);
        if (*puVar6 == local_res20[0]) {
          pTVar5 = (TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_> *)
                   (puVar6 + 2);
          if (puVar6 == (uint *)0x0) {
            pTVar5 = (TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_> *)0x0;
          }
          if (pTVar5 != (TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_> *)
                        0x0) {
            ValidateAndGetBuffers(this,param_1,param_4,param_6,pTVar5,pTVar2);
            return;
          }
          break;
        }
        uVar4 = puVar6[6];
      } while (uVar4 != 0xffffffff);
    }
  }
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  AllocateBuffers(this,param_1,param_4,param_5,param_6,&local_48,pTVar2);
  local_38 = local_res20;
  local_30 = &local_48;
  TSet<TTuple<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<int_const_&,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>_&&>_>
            (this_00,(TPairInitializer<int_const_&,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>_&&>
                      *)&param_7,(bool *)&local_38);
  *pbVar3 = true;
  DestructItems<FOptimusPersistentStructuredBuffer,int>
            ((FOptimusPersistentStructuredBuffer *)local_48.AllocatorInstance.Data,local_48.ArrayNum
            );
  if ((FOptimusPersistentStructuredBuffer *)local_48.AllocatorInstance.Data !=
      (FOptimusPersistentStructuredBuffer *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// GetResourceBuffers @ 14e1dfc00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FOptimusPersistentBufferPool::GetResourceBuffers
          (FOptimusPersistentBufferPool *this,FRDGBuilder *param_1,FName param_2,int param_3,
          int param_4,int param_5,TArray<int,TSizedDefaultAllocator<32>_> *param_6,
          TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_> *param_7,bool *param_8)

{
  FName FVar1;
  TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_> *pTVar2;
  bool *pbVar3;
  uint uVar4;
  TSet<TTuple<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *this_00;
  TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_> *pTVar5;
  uint *puVar6;
  ForElementType<FSetElementId> FVar7;
  FName local_res18;
  uint local_res20 [2];
  TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_> local_48;
  uint *local_38;
  TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_> *local_30;
  
  pTVar2 = param_7;
  param_7->ArrayNum = 0;
  local_res18 = param_2;
  local_res20[0] = param_3;
  if (param_7->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_7->AllocatorInstance,0,&param_7->ArrayMax);
  }
  pbVar3 = param_8;
  FVar1 = local_res18;
  *param_8 = false;
  uVar4 = ::GetTypeHash(local_res18.ComparisonIndex.Value);
  this_00 = (TSet<TTuple<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             *)TMapBase<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>,0>_>
               ::FindOrAddImpl<FName_const_&>
                         ((TMapBase<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>,0>_>
                           *)this,uVar4 + FVar1.Number,&local_res18);
  if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
    FVar7 = (this_00->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this_00->Hash;
    }
    uVar4 = *(uint *)((longlong)FVar7 + (ulonglong)(this_00->HashSize - 1U & local_res20[0]) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar6 = (uint *)((longlong)(int)uVar4 * 0x20 + *(longlong *)&this_00->Elements);
        if (*puVar6 == local_res20[0]) {
          pTVar5 = (TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_> *)
                   (puVar6 + 2);
          if (puVar6 == (uint *)0x0) {
            pTVar5 = (TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_> *)0x0;
          }
          if (pTVar5 != (TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_> *)
                        0x0) {
            ValidateAndGetBuffers(this,param_1,param_4,param_6,pTVar5,pTVar2);
            return;
          }
          break;
        }
        uVar4 = puVar6[6];
      } while (uVar4 != 0xffffffff);
    }
  }
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  AllocateBuffers(this,param_1,param_4,param_5,param_6,&local_48,pTVar2);
  local_38 = local_res20;
  local_30 = &local_48;
  TSet<TTuple<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<int_const_&,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>_&&>_>
            (this_00,(TPairInitializer<int_const_&,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>_&&>
                      *)&param_7,(bool *)&local_38);
  *pbVar3 = true;
  DestructItems<FOptimusPersistentStructuredBuffer,int>
            ((FOptimusPersistentStructuredBuffer *)local_48.AllocatorInstance.Data,local_48.ArrayNum
            );
  if ((FOptimusPersistentStructuredBuffer *)local_48.AllocatorInstance.Data !=
      (FOptimusPersistentStructuredBuffer *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// ReleaseResources @ 14e211410

void __thiscall FOptimusPersistentBufferPool::ReleaseResources(FOptimusPersistentBufferPool *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDeformerInstance.cpp"
                       ,0x9d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TSet<TTuple<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
           *)this);
  TSet<TTuple<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
           *)&this->ImplicitBuffersMap);
  return;
}

// ValidateAndGetBuffers @ 14e22ecc0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FOptimusPersistentBufferPool::ValidateAndGetBuffers
          (FOptimusPersistentBufferPool *this,FRDGBuilder *param_1,int param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_> *param_4,
          TArray<FRDGBuffer_*,TSizedDefaultAllocator<32>_> *param_5)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  longlong lVar8;
  FRDGBuffer *local_48 [2];
  
  iVar4 = param_4->ArrayNum;
  if (iVar4 == param_3->ArrayNum) {
    uVar5 = 0;
    if (0 < iVar4) {
      lVar8 = 0;
      lVar7 = 0;
      do {
        uVar3 = 0;
        if ((int)uVar5 < iVar4) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar6 = (param_4->AllocatorInstance).Data + lVar7;
        if (*(FRDGPooledBuffer **)&pFVar6->field_0x0 == (FRDGPooledBuffer *)0x0) {
          bVar2 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<3054348559278145677>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDeformerInstance.cpp"
                             ,0x8d,"PersistentBuffer.PooledBuffer.IsValid()");
          if (bVar2) {
code_r0x00014e22ef78:
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
LAB_14e22ef79:
          param_5->ArrayNum = 0;
          if (-1 < param_5->ArrayMax) {
            return;
          }
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&param_5->AllocatorInstance,0,&param_5->ArrayMax);
          return;
        }
        if (*(int *)&pFVar6[8].field_0x0 != param_2) {
          bVar2 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<3054348559278145678>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDeformerInstance.cpp"
                             ,0x8e,"PersistentBuffer.ElementStride == InElementStride");
          if (bVar2) goto code_r0x00014e22ef78;
          goto LAB_14e22ef79;
        }
        uVar3 = 0;
        if ((int)uVar5 < param_3->ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (*(int *)(pFVar6 + 0xc) != *(int *)((param_3->AllocatorInstance).Data + lVar8 * 4)) {
          bVar2 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<3054348559278145679>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDeformerInstance.cpp"
                             ,0x8f,"PersistentBuffer.ElementCount == InElementCounts[Index]");
          if (bVar2) goto code_r0x00014e22ef78;
          goto LAB_14e22ef79;
        }
        local_48[0] = FRDGBuilder::RegisterExternalBuffer
                                (param_1,(TRefCountPtr<FRDGPooledBuffer> *)pFVar6,None);
        pFVar6 = (param_5->AllocatorInstance).Data;
        if (((pFVar6 <= (FScriptContainerElement *)local_48) &&
            ((FScriptContainerElement *)local_48 < pFVar6 + (longlong)param_5->ArrayMax * 8)) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        iVar4 = param_5->ArrayNum;
        if (iVar4 == param_5->ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_5->AllocatorInstance,&param_5->ArrayMax);
        }
        param_5->ArrayNum = iVar4 + 1;
        uVar5 = uVar5 + 1;
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + 0x10;
        *(FRDGBuffer **)((param_5->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_48[0];
        iVar4 = param_4->ArrayNum;
      } while ((int)uVar5 < iVar4);
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3054348559278145669>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusDeformerInstance.cpp"
                       ,0x85,"InResourceBuffers.Num() == InElementCounts.Num()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

