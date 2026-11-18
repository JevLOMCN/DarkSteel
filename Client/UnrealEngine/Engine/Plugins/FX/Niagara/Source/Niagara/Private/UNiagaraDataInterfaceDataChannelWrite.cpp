// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 41

// StaticClass @ 148e42170

UClass * __cdecl UNiagaraDataInterfaceDataChannelWrite::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceDataChannelWrite.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceDataChannelWrite",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceDataChannelWrite.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceDataChannelWrite,0x120,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceDataChannelWrite>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceDataChannelWrite>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceDataChannelWrite.InnerSingleton;
}

// UNiagaraDataInterfaceDataChannelWrite @ 148e55280

UNiagaraDataInterfaceDataChannelWrite * __thiscall
UNiagaraDataInterfaceDataChannelWrite::UNiagaraDataInterfaceDataChannelWrite
          (UNiagaraDataInterfaceDataChannelWrite *this,FVTableHelper *param_1)

{
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  this->AllocationMode = Static;
  this->_padding_ = (longlong)&_vftable__for__UNiagaraDataInterface__;
  this->bPublishToGame = false;
  this->bPublishToCPU = false;
  this->bPublishToGPU = false;
  this->bUpdateDestinationDataEveryTick = true;
  this->_padding_ = (longlong)&_vftable__for__INiagaraSimCacheCustomStorageInterface__;
  this->AllocationCount = 0;
  this->bOnlyWriteOnceOnSubticks = true;
  (this->Channel).field0_0x0.DebugPtr = (UNiagaraDataChannelAsset *)0x0;
  FInstancedStruct::FInstancedStruct(&(this->AccessContext).AccessContext);
  (this->CompiledData)._padding_ = 0;
  (this->CompiledData)._padding_ = 0;
  (this->CompiledData)._padding_ = 0;
  (this->CompiledData)._padding_ = 0;
  (this->CompiledData)._padding_ = 0;
  *(undefined4 *)&(this->CompiledData)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->CompiledData)._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->CompiledData)._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->CompiledData)._padding_ + 4) = 0;
  (this->CompiledData)._padding_ = 0;
  *(undefined4 *)&(this->CompiledData)._padding_ = 0;
  *(undefined4 *)&(this->CompiledData)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->CompiledData)._padding_ + 4) = 0x10000;
  *(undefined1 *)&(this->CompiledData)._padding_ = 0;
  FNiagaraDataSetCompiledData::FNiagaraDataSetCompiledData(&(this->CompiledData).DataLayout);
  return this;
}

// UNiagaraDataInterfaceDataChannelWrite @ 148e55350

UNiagaraDataInterfaceDataChannelWrite * __thiscall
UNiagaraDataInterfaceDataChannelWrite::UNiagaraDataInterfaceDataChannelWrite
          (UNiagaraDataInterfaceDataChannelWrite *this,FObjectInitializer *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  UNiagaraDataInterface::UNiagaraDataInterface((UNiagaraDataInterface *)this,param_1);
  this->AllocationMode = Static;
  this->_padding_ = (longlong)&_vftable__for__UNiagaraDataInterface__;
  this->bPublishToGame = false;
  this->bPublishToCPU = false;
  this->bPublishToGPU = false;
  this->bUpdateDestinationDataEveryTick = true;
  puVar2 = (undefined8 *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INiagaraSimCacheCustomStorageInterface__;
  this->AllocationCount = 0;
  this->bOnlyWriteOnceOnSubticks = true;
  (this->Channel).field0_0x0.DebugPtr = (UNiagaraDataChannelAsset *)0x0;
  FInstancedStruct::FInstancedStruct(&(this->AccessContext).AccessContext);
  (this->CompiledData)._padding_ = 0;
  (this->CompiledData)._padding_ = 0;
  (this->CompiledData)._padding_ = 0;
  (this->CompiledData)._padding_ = 0;
  (this->CompiledData)._padding_ = 0;
  *(undefined4 *)&(this->CompiledData)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->CompiledData)._padding_ + 4) = 0x80;
  *(undefined4 *)&(this->CompiledData)._padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&(this->CompiledData)._padding_ + 4) = 0;
  (this->CompiledData)._padding_ = 0;
  *(undefined4 *)&(this->CompiledData)._padding_ = 0;
  *(undefined4 *)&(this->CompiledData)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->CompiledData)._padding_ + 4) = 0x10000;
  *(undefined1 *)&(this->CompiledData)._padding_ = 0;
  FNiagaraDataSetCompiledData::FNiagaraDataSetCompiledData(&(this->CompiledData).DataLayout);
  puVar1 = ::operator_new(0x60);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &___7FNiagaraDataInterfaceProxy_DataChannelWrite__6B_;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 7) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x80;
    *(undefined4 *)(puVar1 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
    puVar1[10] = 0;
    *(undefined4 *)(puVar1 + 0xb) = 0;
    puVar2 = puVar1;
  }
  puVar1 = (undefined8 *)this->_padding_;
  if ((puVar1 != puVar2) && (this->_padding_ = (longlong)puVar2, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return this;
}

// ~UNiagaraDataInterfaceDataChannelWrite @ 148e56980

void __thiscall
UNiagaraDataInterfaceDataChannelWrite::~UNiagaraDataInterfaceDataChannelWrite
          (UNiagaraDataInterfaceDataChannelWrite *this)

{
  this->_padding_ = (longlong)&_vftable__for__UNiagaraDataInterface__;
  this->_padding_ = (longlong)&_vftable__for__INiagaraSimCacheCustomStorageInterface__;
  FNDIDataChannelWriteCompiledData::~FNDIDataChannelWriteCompiledData(&this->CompiledData);
  FInstancedStruct::Reset(&(this->AccessContext).AccessContext);
  this->_padding_ = (longlong)&___7INiagaraSimCacheCustomStorageInterface__6B_;
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// operator() @ 148e58080

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
`UNiagaraDataInterfaceDataChannelWrite::GetVMExternalFunction'::__l5::<lambda_1>::operator()
          (void *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  int local_20 [2];
  FUserPtrHandler<FNDIDataChannelWriteInstanceData> local_18;
  
  VectorVM::FUserPtrHandler<FNDIDataChannelWriteInstanceData>::
  FUserPtrHandler<FNDIDataChannelWriteInstanceData>(&local_18,param_1);
  iVar2 = 0;
  local_20[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar1 = pfVar1 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  fVar3 = 0.0;
  if (((local_18.Ptr)->DestinationData != (FNiagaraDataBuffer *)0x0) &&
     (fVar3 = 0.0, INiagaraModule::bDataChannelsEnabled != false)) {
    fVar3 = (float)(local_18.Ptr)->DestinationData->NumInstancesAllocated;
  }
  if (0 < param_1->NumInstances) {
    do {
      iVar2 = iVar2 + 1;
      *pfVar1 = fVar3;
      pfVar1 = pfVar1 + local_20[0];
    } while (iVar2 < param_1->NumInstances);
  }
  return;
}

// operator() @ 148e581f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
`UNiagaraDataInterfaceDataChannelWrite::SimCacheWriteFrame'::__l23::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  longlong *plVar3;
  FNiagaraDataBufferReadback *this_00;
  longlong lVar4;
  longlong lVar5;
  FNiagaraGpuReadbackManager *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  FInstanceData *pFVar11;
  ulonglong uVar12;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  undefined1 local_res8 [8];
  FRHICommandListImmediate *local_res10;
  uint local_res18;
  longlong local_res20;
  TReferenceControllerBase<1> *local_60;
  TReferenceControllerBase<1> *local_58;
  
  local_res10 = param_1;
  pFVar11 = TMapBase<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData,0>_>
            ::Find((TMapBase<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData,0>_>
                    *)(*(longlong *)this + 0x10),*(ulong64 *)((longlong)this + 8));
  if (pFVar11 != (FInstanceData *)0x0) {
    pFVar17 = (pFVar11->PendingSimCacheReadbacks).AllocatorInstance.Data;
    local_res18 = (pFVar11->PendingSimCacheReadbacks).ArrayNum;
    uVar12 = (ulonglong)(int)local_res18;
    pFVar7 = pFVar17 + uVar12 * 8;
    while( true ) {
      pTVar14 = (TReferenceControllerBase<1> *)0x0;
      if ((pFVar11->PendingSimCacheReadbacks).ArrayNum != (int)uVar12) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TRefCountPtr<FNiagaraDataBuffer>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar17 == pFVar7) break;
      pFVar2 = *(ForAnyElementType **)((longlong)this + 0x20);
      pTVar13 = ::operator_new(0x90);
      if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
        pTVar15 = (TReferenceControllerBase<1> *)&DAT_00000010;
LAB_148e58354:
        if (((pTVar15->_padding_ == 0) || (*(longlong *)&pTVar15->SharedReferenceCount == 0)) ||
           (*(int *)(*(longlong *)&pTVar15->SharedReferenceCount + 8) < 1)) {
          if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
            UNLOCK();
          }
          pTVar15->_padding_ = (longlong)pTVar15;
          if (pTVar14 != *(TReferenceControllerBase<1> **)&pTVar15->SharedReferenceCount) {
            if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar14->WeakReferenceCount = (atomic<int>)((int)pTVar14->WeakReferenceCount + 1);
              UNLOCK();
            }
            plVar3 = *(longlong **)&pTVar15->SharedReferenceCount;
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              iVar10 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar10 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
            *(TReferenceControllerBase<1> **)&pTVar15->SharedReferenceCount = pTVar14;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar14);
        }
      }
      else {
        pTVar13->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFNiagaraDataBufferReadback___00_SharedPointerInternals__6B_
        ;
        pTVar13->SharedReferenceCount = (atomic<int>)0x1;
        pTVar13->WeakReferenceCount = (atomic<int>)0x1;
        pTVar13[2]._padding_ = 0;
        pTVar13[3].SharedReferenceCount = (atomic<int>)0x0;
        pTVar13[3].WeakReferenceCount = (atomic<int>)0x0;
        pTVar13[8].SharedReferenceCount = (atomic<int>)0x0;
        pTVar13[8].WeakReferenceCount = (atomic<int>)0x0;
        pTVar13[1]._padding_ = 0;
        pTVar13[1].SharedReferenceCount = (atomic<int>)0x0;
        pTVar13[1].WeakReferenceCount = (atomic<int>)0x0;
        pTVar13[2].SharedReferenceCount = (atomic<int>)0x0;
        pTVar13[2].WeakReferenceCount = (atomic<int>)0x0;
        pTVar13[3]._padding_ = 0;
        pTVar13[4]._padding_ = 0;
        pTVar13[5]._padding_ = 0;
        pTVar13[6]._padding_ = 0;
        pTVar15 = pTVar13 + 1;
        pTVar13[4].SharedReferenceCount = (atomic<int>)0x0;
        pTVar13[4].WeakReferenceCount = (atomic<int>)0x0;
        pTVar13[5].SharedReferenceCount = (atomic<int>)0x0;
        pTVar13[5].WeakReferenceCount = (atomic<int>)0x0;
        pTVar13[6].SharedReferenceCount = (atomic<int>)0x0;
        pTVar13[6].WeakReferenceCount = (atomic<int>)0x0;
        pTVar13[7]._padding_ = 0;
        pTVar13[7].SharedReferenceCount = (atomic<int>)0x0;
        pTVar13[7].WeakReferenceCount = (atomic<int>)0x0;
        pTVar13[8]._padding_ = 0;
        pTVar14 = pTVar13;
        if (pTVar15 != (TReferenceControllerBase<1> *)0x0) goto LAB_148e58354;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_60 = pTVar15;
      local_58 = pTVar14;
      if (((pFVar2->Data <= (FScriptContainerElement *)&local_60) &&
          ((FScriptContainerElement *)&local_60 <
           pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x10)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar10 = *(int *)&pFVar2[1].Data;
      piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,pFVar2,piVar1);
      }
      *(int *)&pFVar2[1].Data = iVar10 + 1;
      pFVar16 = pFVar2->Data + (longlong)iVar10 * 0x10;
      *(TReferenceControllerBase<1> **)pFVar16 = local_60;
      *(TReferenceControllerBase<1> **)(pFVar16 + 8) = local_58;
      local_58 = (TReferenceControllerBase<1> *)0x0;
      local_60 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
      if ((*(longlong *)pFVar16 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      this_00 = *(FNiagaraDataBufferReadback **)pFVar16;
      lVar4 = *(longlong *)((longlong)this + 0x28);
      bVar9 = IsInParallelRenderingThread();
      if ((!bVar9) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInParallelRenderingThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                             ,0x6a,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar5 = *(longlong *)pFVar17;
      pFVar6 = *(FNiagaraGpuReadbackManager **)(*(longlong *)((longlong)this + 0x28) + 0x38);
      local_res20 = lVar5;
      if (lVar5 != 0) {
        if ((*(int *)(lVar5 + 8) == -1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("!IsBeingWritten()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                               ,0x26,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
      FNiagaraDataBufferReadback::EnqueueReadback
                (this_00,(FRHICommandList *)local_res10,(FNiagaraDataBuffer *)&local_res20,pFVar6,
                 (FNiagaraGPUInstanceCountManager *)(lVar4 + 0x48));
      uVar12 = (ulonglong)local_res18;
      pFVar17 = pFVar17 + 8;
    }
    piVar1 = &(pFVar11->PendingSimCacheReadbacks).ArrayMax;
    pFVar7 = (pFVar11->PendingSimCacheReadbacks).AllocatorInstance.Data;
    iVar10 = (pFVar11->PendingSimCacheReadbacks).ArrayNum;
    if ((pFVar11->PendingSimCacheReadbacks).ArrayMax < 0) {
      DestructItems<TRefCountPtr<FNiagaraDataBuffer>,int>
                ((TRefCountPtr<FNiagaraDataBuffer> *)pFVar7,iVar10);
      (pFVar11->PendingSimCacheReadbacks).ArrayNum = 0;
      param_1 = local_res10;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(pFVar11->PendingSimCacheReadbacks).AllocatorInstance,0,piVar1);
        param_1 = local_res10;
      }
    }
    else {
      DestructItems<TRefCountPtr<FNiagaraDataBuffer>,int>
                ((TRefCountPtr<FNiagaraDataBuffer> *)pFVar7,iVar10);
      (pFVar11->PendingSimCacheReadbacks).ArrayNum = 0;
      param_1 = local_res10;
    }
  }
  FNiagaraGpuReadbackManager::WaitCompletion
            (*(FNiagaraGpuReadbackManager **)(*(longlong *)((longlong)this + 0x28) + 0x38),param_1);
  return;
}

// operator() @ 148e58e10

void __thiscall
`UNiagaraDataInterfaceDataChannelWrite::Append'::__l27::<lambda_2>::operator()
          (void *this,FNDIDataChannelRegisterBinding *param_1,FNDIInputParam<int> *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  ulonglong uVar4;
  void *_Dst;
  
  if (param_1->DataSetRegisterIndex == 0xffffffff) {
    **(undefined1 **)((longlong)this + 0x10) = 0;
  }
  else {
    iVar1 = (param_2->Data).AdvanceOffset;
    _Dst = (void *)(*(longlong *)(*(longlong *)this + 0x28) +
                   (ulonglong)(param_1->DataSetRegisterIndex * *(int *)(*(longlong *)this + 0x130))
                   + (ulonglong)*(uint *)((longlong)this + 8) * 4);
    if (0 < iVar1) {
      memcpy(_Dst,(param_2->Data).InputPtr,(ulonglong)*(uint *)((longlong)this + 0xc) << 2);
      return;
    }
    piVar2 = (param_2->Data).InputPtr;
    uVar4 = 0;
    (param_2->Data).InputPtr = piVar2 + iVar1;
    iVar1 = *piVar2;
    if (*(int *)((longlong)this + 0xc) != 0) {
      do {
        *(int *)((longlong)_Dst + uVar4 * 4) = iVar1;
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
      } while (uVar3 < *(uint *)((longlong)this + 0xc));
      return;
    }
  }
  return;
}

// Allocate @ 148e5b420

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceDataChannelWrite::Allocate
          (UNiagaraDataInterfaceDataChannelWrite *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  float *pfVar4;
  FUserPtrHandler<FNDIDataChannelWriteInstanceData> local_48;
  float *local_38;
  float *local_30;
  int local_28 [2];
  float *local_20;
  float *local_18;
  int local_10 [2];
  
  VectorVM::FUserPtrHandler<FNDIDataChannelWriteInstanceData>::
  FUserPtrHandler<FNDIDataChannelWriteInstanceData>(&local_48,param_1);
  local_10[0] = 0;
  local_20 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_10);
  local_28[0] = 0;
  local_20 = local_20 + local_10[0] * param_1->PerInstanceFnInstanceIdx;
  local_18 = local_20;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_28);
  pfVar4 = pfVar4 + local_28[0] * param_1->PerInstanceFnInstanceIdx;
  local_38 = pfVar4;
  local_30 = pfVar4;
  if (param_1->NumInstances != 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Context.GetNumInstances() == 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDataChannelWrite.cpp"
                       ,0x4f0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  fVar1 = *pfVar4;
  (local_48.Ptr)->DynamicAllocationCount = (local_48.Ptr)->DynamicAllocationCount + (int)fVar1;
  if ((local_48.Ptr)->DestinationData != (FNiagaraDataBuffer *)0x0) {
    FNiagaraDataBuffer::Allocate((local_48.Ptr)->DestinationData,(uint)fVar1,true);
  }
  return;
}

// Append @ 148e5b640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceDataChannelWrite::Append
          (UNiagaraDataInterfaceDataChannelWrite *this,FVectorVMExternalFunctionContext *param_1,
          int param_2)

{
  uint uVar1;
  FName FVar2;
  FNiagaraSystemInstance *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  float fVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_NDIDataChannelWrite_Append> FVar9;
  float *pfVar10;
  FNDIDataChannel_FunctionToDataSetBinding *pFVar11;
  atomic<unsigned_int> *paVar12;
  ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_> FVar13;
  FNDIDataChannel_FunctionToDataSetBinding *pFVar14;
  FName FVar15;
  float *pfVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  byte bVar20;
  FColor_u_0 FVar21;
  FColor_u_0 FVar22;
  undefined1 auStackY_698 [32];
  bool local_638;
  bool local_637;
  byte local_636;
  FColor_u_0 local_634;
  FName local_630;
  UNiagaraDataInterfaceDataChannelWrite *local_628;
  FNiagaraSystemSimulation *local_620;
  atomic<unsigned_int> *local_618;
  atomic<unsigned_int> *local_610;
  atomic<unsigned_int> *local_608;
  uint local_600 [2];
  <lambda_3> local_5f8;
  <lambda_2> local_5d8;
  <lambda_1> local_5b8;
  FName local_598;
  float *local_590;
  int local_588 [2];
  FName local_580;
  FUserPtrHandler<FNDIDataChannelWriteInstanceData> local_570;
  FName local_560;
  <lambda_6> local_558;
  <lambda_5> local_538;
  <lambda_4> local_518;
  FNDIVariadicInputHandler<16> local_4f8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_698;
  pFVar14 = (FNDIDataChannel_FunctionToDataSetBinding *)0x0;
  FVar9 = StatPtr_STAT_NDIDataChannelWrite_Append;
  local_628 = this;
  if (StatPtr_STAT_NDIDataChannelWrite_Append ==
      (FThreadSafeStaticStat<FStat_STAT_NDIDataChannelWrite_Append>)0x0) {
    pFVar8 = ::FName::FName(&local_560,"STAT_NDIDataChannelWrite_Append");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_NDIDataChannelWrite_Append>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NDIDataChannelWrite_Append,*pFVar8
                       ,L"NDIDataChannelWrite Append","STATGROUP_NiagaraDataChannels",
                       "STATCAT_Niagara",L"Niagara Data Channels",true,true,ST_int64,true,false,
                       MCR_Invalid);
  }
  FVar2 = *(FName *)FVar9;
  bVar20 = 0;
  local_580.ComparisonIndex.Value = 0;
  local_580.Number = 0;
  local_636 = 0;
  if ((FVar2.ComparisonIndex.Value.Value != 0) || (FVar15 = local_580, FVar2.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_634.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_634._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar20 = 1;
      local_636 = 1;
      if (-1 < CpuChannel->Enabled) {
        local_598.ComparisonIndex.Value = FVar2.ComparisonIndex.Value.Value;
        local_598.Number = FVar2.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_598,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDataChannelWrite.cpp"
                   ,0x574);
        bVar20 = 3;
        local_636 = 3;
      }
    }
    FVar15 = local_580;
    if (FThreadStats::bPrimaryEnable != false) {
      local_630 = FVar2;
      FThreadStats::AddMessage(FVar2,CycleScopeStart);
      local_636 = bVar20 | 4;
      FVar15 = FVar2;
    }
  }
  VectorVM::FUserPtrHandler<FNDIDataChannelWriteInstanceData>::
  FUserPtrHandler<FNDIDataChannelWriteInstanceData>(&local_570,param_1);
  local_600[0] = 0;
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)local_600);
  paVar12 = (atomic<unsigned_int> *)
            (pfVar10 + (int)(local_600[0] * param_1->PerInstanceFnInstanceIdx));
  pFVar11 = pFVar14;
  local_610 = paVar12;
  local_608 = paVar12;
  if ((-1 < param_2) && (param_2 < ((local_570.Ptr)->FunctionToDatSetBindingInfo).ArrayNum)) {
    fVar7 = 0.0;
    if (param_2 < ((local_570.Ptr)->FunctionToDatSetBindingInfo).ArrayNum) {
      fVar7 = (float)((uint)~param_2 >> 0x1f);
    }
    if ((fVar7 == 0.0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar13 = ((local_570.Ptr)->FunctionToDatSetBindingInfo).AllocatorInstance.SecondaryData;
    if (FVar13 == (ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>)0x0) {
      FVar13 = (ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>)
               &(local_570.Ptr)->FunctionToDatSetBindingInfo;
    }
    pFVar11 = *(FNDIDataChannel_FunctionToDataSetBinding **)
               ((longlong)FVar13 + (longlong)param_2 * 0x10);
  }
  local_630 = (FName)pFVar11;
  FNDIVariadicInputHandler<16>::FNDIVariadicInputHandler<16>(&local_4f8,param_1,pFVar11);
  local_588[0] = 0;
  pfVar10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_588);
  iVar5 = local_588[0];
  local_618 = &(local_570.Ptr)->AtomicNumInstances;
  pfVar10 = pfVar10 + local_588[0] * param_1->PerInstanceFnInstanceIdx;
  bVar6 = true;
  local_590 = pfVar10;
  if ((local_628->bOnlyWriteOnceOnSubticks != false) &&
     (pFVar3 = (local_570.Ptr)->Owner, pFVar3 != (FNiagaraSystemInstance *)0x0)) {
    local_620 = (pFVar3->SystemSimulation).Object;
    local_628 = (UNiagaraDataInterfaceDataChannelWrite *)
                (pFVar3->SystemSimulation).SharedReferenceCount.ReferenceController;
    if (local_628 != (UNiagaraDataInterfaceDataChannelWrite *)0x0) {
      LOCK();
      *(int *)&local_628->_padding_ = (int)local_628->_padding_ + 1;
      UNLOCK();
    }
    if ((local_620 == (FNiagaraSystemSimulation *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_628);
    bVar6 = (local_620->TickInfo).TickNumber == (local_620->TickInfo).TickCount + -1;
  }
  local_620 = (FNiagaraSystemSimulation *)(local_570.Ptr)->DestinationData;
  if ((((local_620 != (FNiagaraSystemSimulation *)0x0) && (local_630 != (FName)0x0)) &&
      (INiagaraModule::bDataChannelsEnabled != false)) && (bVar6)) {
    uVar19 = (ulonglong)(int)local_600[0];
    if ((int)local_600[0] < 1) {
      if (*paVar12 != (atomic<unsigned_int>)0x0) {
        uVar17 = param_1->NumInstances;
LAB_148e5b9ca:
        if (uVar17 != 0) {
          local_634 = (FColor_u_0)((FNiagaraDataBuffer *)local_620)->NumInstancesAllocated;
          LOCK();
          FVar21.Bits = *(uint *)local_618;
          *local_618 = (atomic<unsigned_int>)((int)*local_618 + uVar17);
          UNLOCK();
          uVar1 = param_1->NumInstances;
          if (uVar17 == uVar1) {
            local_638 = true;
            FVar22 = local_634;
            if (FVar21.Bits < local_634.Bits) {
              FVar22.Bits = FVar21.Bits;
            }
            local_5f8.bAllWritesSuccess = &local_638;
            local_5f8.LocalNumToEmit = local_634.Bits - FVar22.Bits;
            if (uVar17 < local_634.Bits - FVar22.Bits) {
              local_5f8.LocalNumToEmit = uVar17;
            }
            local_5d8.bAllWritesSuccess = &local_638;
            local_5b8.bAllWritesSuccess = &local_638;
            local_5f8.Data = (FNiagaraDataBuffer *)local_620;
            local_5f8.Index = FVar21.Bits;
            local_5d8.Data = (FNiagaraDataBuffer *)local_620;
            local_5d8.Index = FVar21.Bits;
            local_5d8.LocalNumToEmit = local_5f8.LocalNumToEmit;
            local_5b8.Data = (FNiagaraDataBuffer *)local_620;
            local_5b8.Index = FVar21.Bits;
            local_5b8.LocalNumToEmit = local_5f8.LocalNumToEmit;
            bVar6 = FNDIVariadicInputHandler<16>::
                    Process<_UNiagaraDataInterfaceDataChannelWrite::Append_::__l27::<lambda_1>,_UNiagaraDataInterfaceDataChannelWrite::Append_::__l27::<lambda_2>,_UNiagaraDataInterfaceDataChannelWrite::Append_::__l27::<lambda_3>_>
                              (&local_4f8,true,uVar1,
                               (FNDIDataChannel_FunctionToDataSetBinding *)local_630,&local_5b8,
                               &local_5d8,&local_5f8);
            if ((!bVar6) || (fVar7 = -NAN, local_638 == false)) {
              fVar7 = 0.0;
            }
            if ((0 < iVar5) && (0 < param_1->NumInstances)) {
              do {
                uVar17 = (int)pFVar14 + 1;
                pFVar14 = (FNDIDataChannel_FunctionToDataSetBinding *)(ulonglong)uVar17;
                *pfVar10 = fVar7;
                pfVar10 = pfVar10 + iVar5;
              } while ((int)uVar17 < param_1->NumInstances);
            }
          }
          else {
            paVar12 = local_608;
            if (0 < (int)uVar1) {
              do {
                if (local_634.Bits <= FVar21.Bits) break;
                local_618 = paVar12 + (int)uVar19;
                local_637 = true;
                FVar22 = FVar21;
                if (*paVar12 != (atomic<unsigned_int>)0x0) {
                  FVar22.Bits = FVar21.Bits + 1;
                }
                local_5f8.bAllWritesSuccess = &local_637;
                local_5d8.bAllWritesSuccess = &local_637;
                local_5b8.bAllWritesSuccess = &local_637;
                local_558._12_4_ = local_5b8.LocalNumToEmit;
                local_558.Index = FVar21.Bits;
                local_538._12_4_ = local_5d8.LocalNumToEmit;
                local_538.Index = FVar21.Bits;
                local_518._12_4_ = local_5f8.LocalNumToEmit;
                local_518.Index = FVar21.Bits;
                local_5f8.Data = (FNiagaraDataBuffer *)local_620;
                local_5f8.Index = FVar21.Bits;
                local_5d8.Data = (FNiagaraDataBuffer *)local_620;
                local_5d8.Index = FVar21.Bits;
                local_5b8.Data = (FNiagaraDataBuffer *)local_620;
                local_5b8.Index = FVar21.Bits;
                local_558.Data = (FNiagaraDataBuffer *)local_620;
                local_558.bAllWritesSuccess = local_5b8.bAllWritesSuccess;
                local_538.Data = (FNiagaraDataBuffer *)local_620;
                local_538.bAllWritesSuccess = local_5d8.bAllWritesSuccess;
                local_518.Data = (FNiagaraDataBuffer *)local_620;
                local_518.bAllWritesSuccess = local_5f8.bAllWritesSuccess;
                bVar6 = FNDIVariadicInputHandler<16>::
                        Process<_UNiagaraDataInterfaceDataChannelWrite::Append_::__l36::<lambda_4>,_UNiagaraDataInterfaceDataChannelWrite::Append_::__l36::<lambda_5>,_UNiagaraDataInterfaceDataChannelWrite::Append_::__l36::<lambda_6>_>
                                  (&local_4f8,*paVar12 != (atomic<unsigned_int>)0x0,1,
                                   (FNDIDataChannel_FunctionToDataSetBinding *)local_630,&local_518,
                                   &local_538,&local_558);
                if ((!bVar6) || (fVar7 = -NAN, local_637 == false)) {
                  fVar7 = 0.0;
                }
                pfVar16 = pfVar10;
                if (0 < iVar5) {
                  pfVar16 = pfVar10 + iVar5;
                  *pfVar10 = fVar7;
                }
                uVar17 = (int)pFVar14 + 1;
                pFVar14 = (FNDIDataChannel_FunctionToDataSetBinding *)(ulonglong)uVar17;
                uVar19 = (ulonglong)local_600[0];
                paVar12 = local_618;
                pfVar10 = pfVar16;
                FVar21 = FVar22;
              } while ((int)uVar17 < param_1->NumInstances);
            }
          }
          goto LAB_148e5bbf9;
        }
      }
    }
    else if (0 < param_1->NumInstances) {
      uVar18 = (ulonglong)(uint)param_1->NumInstances;
      pFVar11 = pFVar14;
      do {
        uVar17 = (uint)pFVar11 + 1;
        if (*paVar12 == (atomic<unsigned_int>)0x0) {
          uVar17 = (uint)pFVar11;
        }
        pFVar11 = (FNDIDataChannel_FunctionToDataSetBinding *)(ulonglong)uVar17;
        uVar18 = uVar18 - 1;
        paVar12 = paVar12 + uVar19;
      } while (uVar18 != 0);
      uVar19 = (ulonglong)local_600[0];
      goto LAB_148e5b9ca;
    }
  }
  if (0 < param_1->NumInstances) {
    do {
      pfVar16 = pfVar10;
      if (0 < iVar5) {
        pfVar16 = pfVar10 + iVar5;
        *pfVar10 = 0.0;
      }
      uVar17 = (int)pFVar14 + 1;
      pFVar14 = (FNDIDataChannel_FunctionToDataSetBinding *)(ulonglong)uVar17;
      pfVar10 = pfVar16;
    } while ((int)uVar17 < param_1->NumInstances);
  }
LAB_148e5bbf9:
  if (local_4f8.HalfInputs.AllocatorInstance.SecondaryData !=
      (ForElementType<FNDIInputParam<FFloat16>_>)0x0) {
    FMemory::Free((void *)local_4f8.HalfInputs.AllocatorInstance.SecondaryData);
  }
  if (local_4f8.IntInputs.AllocatorInstance.SecondaryData !=
      (ForElementType<FNDIInputParam<int>_>)0x0) {
    FMemory::Free((void *)local_4f8.IntInputs.AllocatorInstance.SecondaryData);
  }
  if (local_4f8.FloatInputs.AllocatorInstance.SecondaryData !=
      (ForElementType<FNDIInputParam<float>_>)0x0) {
    FMemory::Free((void *)local_4f8.FloatInputs.AllocatorInstance.SecondaryData);
  }
  bVar20 = local_636;
  if ((local_636 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((bVar20 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((bVar20 & 4) != 0) {
    FThreadStats::AddMessage(FVar15,CycleScopeEnd);
  }
  return;
}

// BuildShaderParameters @ 148e5c580

void __thiscall
UNiagaraDataInterfaceDataChannelWrite::BuildShaderParameters
          (UNiagaraDataInterfaceDataChannelWrite *this,FNiagaraShaderParametersBuilder *param_1)

{
  int *piVar1;
  uint uVar2;
  FShaderParametersMetadataBuilder *pFVar3;
  int iVar4;
  FShaderParametersMetadata *pFVar5;
  FScriptContainerElement *pFVar6;
  wchar_t *pwVar7;
  
  pFVar3 = param_1->MetadataBuilder;
  if ((param_1->GPUParamInfo->DataInterfaceHLSLSymbol).Data.ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->GPUParamInfo->DataInterfaceHLSLSymbol).Data.AllocatorInstance.Data
    ;
  }
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0xf & 0xfffffff0;
  pFVar5 = TShaderParameterStructTypeInfo<NDIDataChannelWriteLocal::FShaderParameters>::
           GetStructMetadata();
  piVar1 = &(pFVar3->Members).ArrayMax;
  iVar4 = (pFVar3->Members).ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)pFVar3,piVar1);
  }
  (pFVar3->Members).ArrayNum = iVar4 + 1;
  uVar2 = pFVar3->NextMemberOffset;
  pFVar6 = (pFVar3->Members).AllocatorInstance.Data + (longlong)iVar4 * 0x30;
  *(wchar_t **)(pFVar6 + 8) = L"";
  *(FShaderParametersMetadata **)(pFVar6 + 0x28) = pFVar5;
  *(wchar_t **)pFVar6 = pwVar7;
  *(undefined4 *)(pFVar6 + 0x10) = 0x7b;
  *(uint *)(pFVar6 + 0x14) = uVar2;
  *(undefined2 *)(pFVar6 + 0x18) = 0x14;
  *(undefined4 *)(pFVar6 + 0x1c) = 1;
  *(undefined8 *)(pFVar6 + 0x20) = 1;
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0x50;
  return;
}

// CalculateFinalTickGroup @ 148e5cac0

ETickingGroup __thiscall
UNiagaraDataInterfaceDataChannelWrite::CalculateFinalTickGroup
          (UNiagaraDataInterfaceDataChannelWrite *this,void *param_1)

{
  UNiagaraDataChannelAsset *pUVar1;
  UNiagaraDataChannel *pUVar2;
  
  pUVar1 = (this->Channel).field0_0x0.DebugPtr;
  if (((pUVar1 != (UNiagaraDataChannelAsset *)0x0) &&
      (pUVar2 = (pUVar1->DataChannel).field0_0x0.DebugPtr, pUVar2 != (UNiagaraDataChannel *)0x0)) &&
     (pUVar2->bEnforceTickGroupReadWriteOrder != false)) {
    return (ETickingGroup)(pUVar2->FinalWriteTickGroup).Value;
  }
  return TG_LastDemotable;
}

// CanExecuteOnTarget @ 148e5cfd0

bool __thiscall
UNiagaraDataInterfaceDataChannelWrite::CanExecuteOnTarget
          (UNiagaraDataInterfaceDataChannelWrite *this,ENiagaraSimTarget param_1)

{
  return true;
}

// CopyToInternal @ 148e5f2d0

bool __thiscall
UNiagaraDataInterfaceDataChannelWrite::CopyToInternal
          (UNiagaraDataInterfaceDataChannelWrite *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  UNiagaraDataChannelAsset *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  bVar3 = UNiagaraDataInterface::CopyToInternal((UNiagaraDataInterface *)this,param_1);
  if (!bVar3) {
    return false;
  }
  if (param_1 != (UNiagaraDataInterface *)0x0) {
    pUVar4 = StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) {
      *(ENiagaraDataChannelAllocationMode *)&param_1[1]._padding_ = this->AllocationMode;
      *(uint *)((longlong)&param_1[1]._padding_ + 4) = this->AllocationCount;
      *(bool *)&param_1[1]._padding_ = this->bPublishToGame;
      *(bool *)((longlong)&param_1[1]._padding_ + 1) = this->bPublishToCPU;
      *(bool *)((longlong)&param_1[1]._padding_ + 2) = this->bPublishToGPU;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 = (this->Channel).field0_0x0.DebugPtr, pUVar2 != (UNiagaraDataChannelAsset *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      param_1[1]._padding_ = (longlong)(this->Channel).field0_0x0;
      if ((FNDCAccessContextInst *)&param_1[1]._padding_ != &this->AccessContext) {
        FInstancedStruct::InitializeAs
                  ((FInstancedStruct *)&param_1[1]._padding_,
                   (this->AccessContext).AccessContext.ScriptStruct.field0_0x0.DebugPtr,
                   (this->AccessContext).AccessContext.StructMemory);
      }
      FNDIDataChannelCompiledData::operator=
                ((FNDIDataChannelCompiledData *)&param_1[1].field_0x30,
                 (FNDIDataChannelCompiledData *)&this->CompiledData);
      FNiagaraDataSetCompiledData::operator=
                ((FNiagaraDataSetCompiledData *)&param_1[3].field_0x30,
                 &(this->CompiledData).DataLayout);
      *(bool *)((longlong)&param_1[1]._padding_ + 3) = this->bUpdateDestinationDataEveryTick;
      *(bool *)((longlong)&param_1[1]._padding_ + 4) = this->bOnlyWriteOnceOnSubticks;
      return true;
    }
    pFVar5 = GetTypeName<UNiagaraDataInterfaceDataChannelWrite>(&local_28);
    pwVar6 = L"";
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    pFVar5 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
    if ((pFVar5->Data).ArrayNum != 0) {
      pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar6,pwVar7);
  }
  pFVar5 = GetTypeName<UNiagaraDataInterfaceDataChannelWrite>(&local_28);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar6);
}

// DestroyPerInstanceData @ 148e63440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceDataChannelWrite::DestroyPerInstanceData
          (UNiagaraDataInterfaceDataChannelWrite *this,void *param_1,FNiagaraSystemInstance *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1> *pTVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_b8 [32];
  code *local_98 [2];
  undefined **local_88;
  longlong lStack_80;
  ulong64 local_78;
  undefined ***local_70;
  undefined1 local_68 [16];
  undefined **local_58;
  longlong lStack_50;
  ulong64 local_48;
  undefined ***local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pTVar4 = *(TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1> **)((longlong)param_1 + 0xb0);
  if (*(TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1> **)((longlong)param_1 + 0xb0) ==
      (TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1> *)0x0) {
    pTVar4 = (TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1> *)((longlong)param_1 + 0x30);
  }
  DestructItems<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>,int>
            (pTVar4,*(int *)((longlong)param_1 + 0xb8));
  if (*(void **)((longlong)param_1 + 0xb0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0xb0));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0x20));
  FInstancedStruct::Reset((FInstancedStruct *)((longlong)param_1 + 8));
  lStack_80 = this->_padding_;
  if (lStack_80 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_88 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UNiagaraDataInterfaceDataChannelWrite::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_78 = param_2->ID;
  local_98[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UNiagaraDataInterfaceDataChannelWrite::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  local_70 = (undefined ***)0x0;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceDataChannelWrite::DestroyPerInstanceData_::__l2::TSTR_RemoveProxy533>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_68._0_8_ = local_98[0];
    local_40 = local_70;
    local_58 = local_88;
    lStack_50 = lStack_80;
    local_48 = local_78;
    local_98[0] = (code *)0x0;
    local_38 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`UNiagaraDataInterfaceDataChannelWrite::DestroyPerInstanceData'::__l2::TSTR_RemoveProxy533>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_68,pFVar3);
    uVar6 = (ulonglong)local_38;
    if (2 < uVar6) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_68._0_8_ != (code *)0x0) {
        pppuVar5 = (undefined ***)(local_68 + 0x10);
        if (local_40 != (undefined ***)0x0) {
          pppuVar5 = local_40;
        }
        (*(code *)(*pppuVar5)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6])(local_68);
    }
  }
  if (local_98[0] != (code *)0x0) {
    pppuVar5 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar5 = local_70;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  return;
}

// Equals @ 148e64330

bool __thiscall
UNiagaraDataInterfaceDataChannelWrite::Equals
          (UNiagaraDataInterfaceDataChannelWrite *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraDataInterface *)0x0) {
    pFVar4 = GetTypeName<UNiagaraDataInterfaceDataChannelWrite>(&local_28);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar6);
  }
  pUVar3 = StaticClass();
  iVar1 = (int)pUVar3->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar3->_padding_)) {
    bVar2 = UNiagaraDataInterface::Equals((UNiagaraDataInterface *)this,param_1);
    if (((((bVar2) &&
          (this->AllocationMode == (ENiagaraDataChannelAllocationMode)param_1[1]._padding_)) &&
         (this->AllocationCount == *(uint *)((longlong)&param_1[1]._padding_ + 4))) &&
        ((this->bPublishToGame == (bool)(char)param_1[1]._padding_ &&
         (this->bPublishToCPU == (bool)*(char *)((longlong)&param_1[1]._padding_ + 1))))) &&
       ((this->bPublishToGPU == (bool)*(char *)((longlong)&param_1[1]._padding_ + 2) &&
        ((this->Channel).field0_0x0.DebugPtr == (UNiagaraDataChannelAsset *)param_1[1]._padding_))))
    {
      bVar2 = FInstancedStruct::Identical
                        (&(this->AccessContext).AccessContext,
                         (FInstancedStruct *)&param_1[1]._padding_,0);
      if ((bVar2) &&
         (this->bOnlyWriteOnceOnSubticks == (bool)*(char *)((longlong)&param_1[1]._padding_ + 4))) {
        return this->bUpdateDestinationDataEveryTick ==
               (bool)*(char *)((longlong)&param_1[1]._padding_ + 3);
      }
    }
    return false;
  }
  pFVar4 = GetTypeName<UNiagaraDataInterfaceDataChannelWrite>(&local_28);
  pwVar6 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar6,pwVar5);
}

// GetGpuCountBufferEstimate @ 148e6ca70

uint __thiscall
UNiagaraDataInterfaceDataChannelWrite::GetGpuCountBufferEstimate
          (UNiagaraDataInterfaceDataChannelWrite *this)

{
  return 1;
}

// GetPrivateStaticClass @ 148e6e4e0

UClass * __cdecl UNiagaraDataInterfaceDataChannelWrite::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceDataChannelWrite.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceDataChannelWrite",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceDataChannelWrite.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceDataChannelWrite,0x120,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceDataChannelWrite>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceDataChannelWrite>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceDataChannelWrite.InnerSingleton;
}

// GetVMExternalFunction @ 148e71e60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceDataChannelWrite::GetVMExternalFunction
          (UNiagaraDataInterfaceDataChannelWrite *this,FVMExternalFunctionBindingInfo *param_1,
          void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  int iVar1;
  FNiagaraFunctionSignature *pFVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  pFVar2 = NDIDataChannelWriteLocal::GetFunctionSig_Num();
  if (param_1->Name == pFVar2->Name) {
    local_48 = (undefined1  [8])0x0;
    local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_40.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
               (FWriteAccessScope *)&local_68);
    local_50 = &local_40;
    puVar3 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceDataChannelWrite::GetVMExternalFunction'::`5'::<lambda_1>_>
                 ::_vftable_;
      puVar3[3] = this;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)
                 CONCAT44(local_68.Accessor._4_4_,(int)local_68.Accessor),&local_68);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_48);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
               (FWriteAccessScope *)&local_68);
    if ((local_40.DelegateSize != 0) &&
       (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_40,0,0,0x10);
      local_40.DelegateSize = 0;
    }
    if (local_68.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)
                 CONCAT44(local_68.Accessor._4_4_,(int)local_68.Accessor),&local_68);
    }
    if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_40.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_48);
  }
  else {
    iVar1 = FNDIDataChannelCompiledData::FindFunctionInfoIndex
                      ((FNDIDataChannelCompiledData *)&this->CompiledData,param_1->Name,
                       &param_1->VariadicInputs,&param_1->VariadicOutputs);
    pFVar2 = NDIDataChannelWriteLocal::GetFunctionSig_Write();
    local_68.Accessor._0_4_ = iVar1;
    if (param_1->Name == pFVar2->Name) {
      local_48 = (undefined1  [8])0x0;
      local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_40.DelegateSize = 0;
      local_68._0_8_ = this;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
                 (FWriteAccessScope *)&local_30);
      local_18 = &local_40;
      puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_40);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar4 = FDelegateHandle::GenerateNewID();
        puVar3[2] = uVar4;
        *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceDataChannelWrite::GetVMExternalFunction'::`10'::<lambda_2>_>
                   ::_vftable_;
        puVar3[3] = local_68._0_8_;
        puVar3[4] = CONCAT44(local_68.Accessor._4_4_,(int)local_68.Accessor);
      }
      if (local_30.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
      }
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_48);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
                 (FWriteAccessScope *)&local_68);
      if ((local_40.DelegateSize != 0) &&
         (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&local_40,0,0,0x10);
        local_40.DelegateSize = 0;
      }
      if (local_68.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)
                   CONCAT44(local_68.Accessor._4_4_,(int)local_68.Accessor),&local_68);
      }
      if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)local_40.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_48);
    }
    else {
      pFVar2 = NDIDataChannelWriteLocal::GetFunctionSig_Append();
      if (param_1->Name == pFVar2->Name) {
        local_48 = (undefined1  [8])0x0;
        local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_40.DelegateSize = 0;
        local_68._0_8_ = this;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
                   (FWriteAccessScope *)&local_30);
        local_18 = &local_40;
        puVar3 = UE::Core::Private::DelegateAllocate(0x28,&local_40);
        if (puVar3 != (undefined8 *)0x0) {
          *puVar3 = &
                    ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar4 = FDelegateHandle::GenerateNewID();
          puVar3[2] = uVar4;
          *puVar3 = &TBaseFunctorDelegateInstance<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy,`UNiagaraDataInterfaceDataChannelWrite::GetVMExternalFunction'::`14'::<lambda_3>_>
                     ::_vftable_;
          puVar3[3] = local_68._0_8_;
          puVar3[4] = CONCAT44(local_68.Accessor._4_4_,(int)local_68.Accessor);
        }
        if (local_30.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
        }
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_48);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
                   (FWriteAccessScope *)&local_68);
        if ((local_40.DelegateSize != 0) &&
           (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_40,0,0,0x10);
          local_40.DelegateSize = 0;
        }
        if (local_68.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    ((FMRSWRecursiveAccessDetector *)
                     CONCAT44(local_68.Accessor._4_4_,(int)local_68.Accessor),&local_68);
        }
        if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_40.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_48);
      }
      else if (3 < (byte)LogTemp._0_1_) {
        ::FName::ToString(&param_1->Name,(FString *)local_48);
        if (this == (UNiagaraDataInterfaceDataChannelWrite *)0x0) {
          ::FString::FString((FString *)&local_68,L"None");
        }
        else {
          UObjectBaseUtility::GetPathName
                    ((UObjectBaseUtility *)this,(FString *)&local_68,(UObject *)0x0);
        }
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
        if ((void *)local_68._0_8_ != (void *)0x0) {
          FMemory::Free((void *)local_68._0_8_);
        }
        if ((atomic<unsigned___int64>)local_48 != (atomic<unsigned___int64>)0x0) {
          FMemory::Free((void *)local_48);
        }
      }
    }
  }
  return;
}

// HasPostSimulateTick @ 148e72970

bool __thiscall
UNiagaraDataInterfaceDataChannelWrite::HasPostSimulateTick
          (UNiagaraDataInterfaceDataChannelWrite *this)

{
  return true;
}

// HasPreSimulateTick @ 148e729e0

bool __thiscall
UNiagaraDataInterfaceDataChannelWrite::HasPreSimulateTick
          (UNiagaraDataInterfaceDataChannelWrite *this)

{
  return true;
}

// HasTickGroupPostreqs @ 148e72bd0

bool __thiscall
UNiagaraDataInterfaceDataChannelWrite::HasTickGroupPostreqs
          (UNiagaraDataInterfaceDataChannelWrite *this)

{
  UNiagaraDataChannelAsset *pUVar1;
  UNiagaraDataChannel *pUVar2;
  
  pUVar1 = (this->Channel).field0_0x0.DebugPtr;
  if ((pUVar1 != (UNiagaraDataChannelAsset *)0x0) &&
     (pUVar2 = (pUVar1->DataChannel).field0_0x0.DebugPtr, pUVar2 != (UNiagaraDataChannel *)0x0)) {
    return pUVar2->bEnforceTickGroupReadWriteOrder;
  }
  return false;
}

// InitPerInstanceData @ 148e75040

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceDataChannelWrite::InitPerInstanceData
          (UNiagaraDataInterfaceDataChannelWrite *this,void *param_1,FNiagaraSystemInstance *param_2
          )

{
  bool bVar1;
  
  *(undefined8 *)param_1 = 0;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)((longlong)param_1 + 8));
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0xb8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 8;
  *(undefined1 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)((longlong)param_1 + 200) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  if (INiagaraModule::bDataChannelsEnabled == false) {
    bVar1 = false;
  }
  else {
    bVar1 = FNDIDataChannelWriteInstanceData::Init(param_1,this,param_2);
  }
  return bVar1;
}

// Num @ 148e75760

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceDataChannelWrite::Num
          (UNiagaraDataInterfaceDataChannelWrite *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  int local_20 [2];
  FUserPtrHandler<FNDIDataChannelWriteInstanceData> local_18;
  
  VectorVM::FUserPtrHandler<FNDIDataChannelWriteInstanceData>::
  FUserPtrHandler<FNDIDataChannelWriteInstanceData>(&local_18,param_1);
  iVar2 = 0;
  local_20[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar1 = pfVar1 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  fVar3 = 0.0;
  if (((local_18.Ptr)->DestinationData != (FNiagaraDataBuffer *)0x0) &&
     (fVar3 = 0.0, INiagaraModule::bDataChannelsEnabled != false)) {
    fVar3 = (float)(local_18.Ptr)->DestinationData->NumInstancesAllocated;
  }
  if (0 < param_1->NumInstances) {
    do {
      iVar2 = iVar2 + 1;
      *pfVar1 = fVar3;
      pfVar1 = pfVar1 + local_20[0];
    } while (iVar2 < param_1->NumInstances);
  }
  return;
}

// PerInstanceDataSize @ 148e75aa0

int __thiscall
UNiagaraDataInterfaceDataChannelWrite::PerInstanceDataSize
          (UNiagaraDataInterfaceDataChannelWrite *this)

{
  return 0xe8;
}

// PerInstanceTick @ 148e762f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceDataChannelWrite::PerInstanceTick
          (UNiagaraDataInterfaceDataChannelWrite *this,void *param_1,FNiagaraSystemInstance *param_2
          ,float param_3)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 uVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_NDIDataChannelWrite_Tick> FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  FColor_u_0 local_58 [2];
  FName local_50;
  LARGE_INTEGER local_48;
  FName local_40;
  FName local_38;
  FStatMessage local_28;
  
  if (!INiagaraModule::bDataChannelsEnabled) {
    return true;
  }
  FVar9 = StatPtr_STAT_NDIDataChannelWrite_Tick;
  if (StatPtr_STAT_NDIDataChannelWrite_Tick ==
      (FThreadSafeStaticStat<FStat_STAT_NDIDataChannelWrite_Tick>)0x0) {
    pFVar8 = ::FName::FName(&local_40,"STAT_NDIDataChannelWrite_Tick");
    FVar9 = (FThreadSafeStaticStat<FStat_STAT_NDIDataChannelWrite_Tick>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NDIDataChannelWrite_Tick,*pFVar8,
                       L"NDIDataChannelWrite Tick","STATGROUP_NiagaraDataChannels","STATCAT_Niagara"
                       ,L"Niagara Data Channels",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar9;
  bVar3 = false;
  bVar5 = false;
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value == 0) && (uVar10 == 0)) {
LAB_148e76462:
    bVar4 = false;
    FVar12 = local_38;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_58[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_58[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_50.ComparisonIndex.Value = FVar11.Value;
        local_50.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_50,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDataChannelWrite.cpp"
                   ,0x279);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_148e76462;
    local_48.s.LowPart = FVar11.Value;
    local_48.s.HighPart = uVar10;
    FThreadStats::AddMessage(FVar12,CycleScopeStart);
    bVar4 = true;
  }
  if (param_2 == (FNiagaraSystemInstance *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("SystemInstance",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDataChannelWrite.cpp"
                       ,0x27a,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      uVar7 = (*pcVar2)();
      return (bool)uVar7;
    }
  }
  if (param_1 != (void *)0x0) {
    bVar6 = FNDIDataChannelWriteInstanceData::Tick(param_1,this,param_2);
    if (bVar6) {
      bVar6 = false;
      goto LAB_148e764bc;
    }
  }
  bVar6 = true;
LAB_148e764bc:
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_28.NameAndInfo.Index = FVar12.ComparisonIndex.Value;
      local_28.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_48);
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_28.StatData.Pad[0] = local_48.s.LowPart._0_1_;
      local_28.StatData.Pad[1] = local_48.s.LowPart._1_1_;
      local_28.StatData.Pad[2] = local_48.s.LowPart._2_1_;
      local_28.StatData.Pad[3] = local_48.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_28);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return bVar6;
}

// PerInstanceTickPostSimulate @ 148e76880

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceDataChannelWrite::PerInstanceTickPostSimulate
          (UNiagaraDataInterfaceDataChannelWrite *this,void *param_1,FNiagaraSystemInstance *param_2
          ,float param_3)

{
  bool bVar1;
  
  if (param_1 != (void *)0x0) {
    bVar1 = FNDIDataChannelWriteInstanceData::PostSimTick(param_1,this,param_2);
    return !bVar1;
  }
  return true;
}

// PostInitProperties @ 148e76c60

void __thiscall
UNiagaraDataInterfaceDataChannelWrite::PostInitProperties
          (UNiagaraDataInterfaceDataChannelWrite *this)

{
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  UObject::PostInitProperties((UObject *)this);
  if (((this->_padding_ & 0x10) != 0) && (INiagaraModule::bDataChannelsEnabled != false)) {
    local_28 = (TObjectPtr<UObject>_u_0)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_28.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_28.DebugPtr);
    }
    local_1e = 0;
    local_20 = 1;
    local_1c = 0xffffffffffffffff;
    local_14 = 0xffffffff;
    FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
    FNiagaraTypeRegistry::Register
              ((FNiagaraTypeDefinition *)&local_28.ObjectPtr,AllowParameter|AllowNotUserVariable);
  }
  return;
}

// PostLoad @ 148e76d70

void __thiscall
UNiagaraDataInterfaceDataChannelWrite::PostLoad(UNiagaraDataInterfaceDataChannelWrite *this)

{
  FNDCAccessContextInst *this_00;
  UNiagaraDataChannelAsset *this_01;
  longlong *plVar1;
  UScriptStruct *pUVar2;
  longlong *plVar3;
  UScriptStruct *pUVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  
  UNiagaraDataInterface::PostLoad((UNiagaraDataInterface *)this);
  this_01 = (this->Channel).field0_0x0.DebugPtr;
  this_00 = &this->AccessContext;
  if (this_01 != (UNiagaraDataChannelAsset *)0x0) {
    UObject::ConditionalPostLoad((UObject *)this_01);
    plVar1 = *(longlong **)((longlong)(this->Channel).field0_0x0 + 0x28);
    if (plVar1 != (longlong *)0x0) {
      plVar3 = (longlong *)(**(code **)(*plVar1 + 0x2b0))(plVar1,local_res8);
      pUVar2 = (UScriptStruct *)*plVar3;
      pUVar4 = FNDCAccessContextLegacy::StaticStruct();
      if (pUVar2 != pUVar4) {
        if ((this_00->AccessContext).ScriptStruct.field0_0x0.DebugPtr == pUVar2) {
          return;
        }
        puVar5 = (undefined8 *)(**(code **)(*plVar1 + 0x2b0))(plVar1,local_res8);
        FInstancedStruct::InitializeAs
                  (&this_00->AccessContext,(UScriptStruct *)*puVar5,(uchar *)0x0);
        return;
      }
    }
  }
  FInstancedStruct::Reset(&this_00->AccessContext);
  return;
}

// PostSimulateCanOverlapFrames @ 148e77870

bool __thiscall
UNiagaraDataInterfaceDataChannelWrite::PostSimulateCanOverlapFrames
          (UNiagaraDataInterfaceDataChannelWrite *this)

{
  return false;
}

// PostStageCanOverlapTickGroups @ 148e77a20

bool __thiscall
UNiagaraDataInterfaceDataChannelWrite::PostStageCanOverlapTickGroups
          (UNiagaraDataInterfaceDataChannelWrite *this)

{
  return false;
}

// ProvidePerInstanceDataForRenderThread @ 148e797d0

void __thiscall
UNiagaraDataInterfaceDataChannelWrite::ProvidePerInstanceDataForRenderThread
          (UNiagaraDataInterfaceDataChannelWrite *this,void *param_1,void *param_2,ulong64 *param_3)

{
  longlong lVar1;
  FNiagaraDataChannelLayoutInfo *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  UObject *pUVar7;
  UNiagaraDataChannel *this_00;
  TSharedPtr<FNiagaraDataChannelLayoutInfo,1> *pTVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 local_48;
  TReferenceControllerBase<1> *local_40;
  undefined8 local_38;
  TReferenceControllerBase<1> *pTStack_30;
  TSharedPtr<FNiagaraDataChannelLayoutInfo,1> local_28;
  
  memset(param_1,0,0xa0);
  *(undefined ***)((longlong)param_1 + 0x10) = &___7__TResourceArray_I_0A___6B_;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x60) = 0xffffffff;
  lVar1 = *(longlong *)((longlong)param_2 + 0x18);
  if (lVar1 == 0) {
    puVar10 = &local_38;
    uVar9 = 0;
    bVar5 = true;
    local_38 = 0;
    pTStack_30 = (TReferenceControllerBase<1> *)0x0;
    bVar4 = false;
  }
  else {
    uVar9 = *(undefined8 *)(lVar1 + 0x48);
    local_40 = *(TReferenceControllerBase<1> **)(lVar1 + 0x50);
    if (local_40 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
      UNLOCK();
    }
    puVar10 = &local_48;
    bVar5 = false;
    bVar4 = true;
    local_48 = uVar9;
  }
  if (param_1 != puVar10) {
    *(undefined8 *)param_1 = uVar9;
    *puVar10 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_1 + 8),(FSharedReferencer<1> *)(puVar10 + 1)
              );
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  }
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  }
  if ((*(char *)((longlong)param_2 + 0xc4) != '\0') &&
     (INiagaraModule::bDataChannelsEnabled != false)) {
    *(undefined1 *)((longlong)param_2 + 0xc4) = 0;
    pUVar7 = FWeakObjectPtr::Get(param_2);
    this_00 = (UNiagaraDataChannel *)FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar7[1].field_0x8);
    if (this_00 == (UNiagaraDataChannel *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ret",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelHandler.h"
                         ,0x3a,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pTVar8 = UNiagaraDataChannel::GetLayoutInfo(this_00,&local_28);
    if (pTVar8->Object == (FNiagaraDataChannelLayoutInfo *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = pTVar8->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    FVariadicParameterGPUScriptInfo::Init
              ((FVariadicParameterGPUScriptInfo *)((longlong)param_1 + 0x10),
               (FNDIDataChannelCompiledData *)&this->CompiledData,&pFVar2->CompiledDataGPU);
  }
  *(undefined4 *)((longlong)param_1 + 0x88) = 0;
  if (this->AllocationMode == Static) {
    uVar6 = this->AllocationCount;
  }
  else {
    if (this->AllocationMode != Dynamic) goto LAB_148e7997f;
    uVar6 = *(uint *)((longlong)param_2 + 200);
  }
  *(uint *)((longlong)param_1 + 0x88) = uVar6;
LAB_148e7997f:
  *(bool *)((longlong)param_1 + 0x8c) = this->bPublishToGame;
  *(bool *)((longlong)param_1 + 0x8d) = this->bPublishToCPU;
  *(bool *)((longlong)param_1 + 0x8e) = this->bPublishToGPU;
  *(undefined8 *)((longlong)param_1 + 0x90) = *(undefined8 *)((longlong)param_2 + 0xcc);
  *(undefined4 *)((longlong)param_1 + 0x98) = *(undefined4 *)((longlong)param_2 + 0xd4);
  return;
}

// SetShaderParameters @ 148e7de20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceDataChannelWrite::SetShaderParameters
          (UNiagaraDataInterfaceDataChannelWrite *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  FNiagaraDataInterfaceProxy *pFVar1;
  FNiagaraShaderScript *pFVar2;
  FScriptContainerElement *_Src;
  FNiagaraDataBuffer *pFVar3;
  FNiagaraDataBuffer *pFVar4;
  FRHIUnorderedAccessView *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulong64 uVar10;
  FInstanceData *pFVar11;
  FShaderParametersMetadata *pFVar12;
  FRHIShaderResourceView *pFVar13;
  longlong lVar14;
  int *piVar15;
  uint uVar16;
  longlong *plVar17;
  int iVar18;
  size_t _Size;
  FNiagaraCompileHash local_28;
  
  if ((param_1->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataInterfaceProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x1c1,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar1 = param_1->DataInterfaceProxy;
  uVar10 = FNiagaraDataInterfaceSetShaderParametersContext::GetSystemInstanceID(param_1);
  pFVar11 = TMapBase<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData,0>_>
            ::Find((TMapBase<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData,0>_>
                    *)(pFVar1 + 1),uVar10);
  uVar16 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar12 = TShaderParameterStructTypeInfo<NDIDataChannelWriteLocal::FShaderParameters>::
            GetStructMetadata();
  bVar7 = false;
  plVar17 = (longlong *)(param_1->BaseParameters + uVar16);
  param_1->ParametersOffset = pFVar12->Size + uVar16;
  if (pFVar11 == (FInstanceData *)0x0) goto LAB_148e7e0d4;
  pFVar2 = param_1->ComputeInstanceData->Context->GPUScript_RT;
  local_28.DataHash.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.DataHash.ArrayNum = (pFVar2->BaseCompileHash).DataHash.ArrayNum;
  _Size = (size_t)local_28.DataHash.ArrayNum;
  _Src = (pFVar2->BaseCompileHash).DataHash.AllocatorInstance.Data;
  if (local_28.DataHash.ArrayNum == 0) {
    local_28.DataHash.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_28.DataHash.ArrayNum,0,(ForAnyElementType *)&local_28,
               local_28.DataHash.ArrayNum,&local_28.DataHash.ArrayMax);
    memcpy(local_28.DataHash.AllocatorInstance.Data,_Src,_Size);
  }
  uVar16 = 0xffffffff;
  uVar8 = FNiagaraCompileHash::GetTypeHash(&local_28);
  iVar9 = TSet<TTuple<FNiagaraCompileHash,unsigned_int>,TDefaultMapHashableKeyFuncs<FNiagaraCompileHash,unsigned_int,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FNiagaraCompileHash>
                    ((TSet<TTuple<FNiagaraCompileHash,unsigned_int>,TDefaultMapHashableKeyFuncs<FNiagaraCompileHash,unsigned_int,0>,FDefaultSetAllocator>
                      *)&pFVar11->GPUScriptParameterTableOffsets,uVar8,&local_28);
  iVar18 = -1;
  if (iVar9 != -1) {
    lVar14 = (longlong)iVar9 * 0x20 + *(longlong *)&pFVar11->GPUScriptParameterTableOffsets;
    piVar15 = (int *)(lVar14 + 0x10);
    if (lVar14 == 0) {
      piVar15 = (int *)0x0;
    }
    iVar18 = -1;
    if (piVar15 != (int *)0x0) {
      iVar18 = *piVar15;
    }
  }
  if (((pFVar11->ChannelDataRTProxy).Object != (FNiagaraDataChannelDataProxy *)0x0) &&
     (iVar18 != -1)) {
    pFVar3 = (pFVar11->GPUBuffer).Reference;
    pFVar4 = (pFVar11->BufferForCPU).Reference;
    if (((pFVar3 != (FNiagaraDataBuffer *)0x0) || (pFVar4 != (FNiagaraDataBuffer *)0x0)) &&
       ((pFVar13 = (pFVar11->ParameterLayoutBuffer).SRV.Reference,
        pFVar13 != (FRHIShaderResourceView *)0x0 && ((pFVar11->ParameterLayoutBuffer).NumBytes != 0)
        ))) {
      *plVar17 = (longlong)pFVar13;
      *(int *)(plVar17 + 1) = iVar18;
      if (pFVar3 == (FNiagaraDataBuffer *)0x0) {
        *(undefined4 *)((longlong)plVar17 + 0xc) = 1;
        *(undefined4 *)(plVar17 + 2) = 1;
LAB_148e7dfdf:
        plVar17[3] = NDIDataChannelUtilities::DummyUAVFloat._48_8_;
        if (pFVar3 != (FNiagaraDataBuffer *)0x0) goto LAB_148e7dfef;
LAB_148e7e00d:
        plVar17[4] = NDIDataChannelUtilities::DummyUAVInt32._48_8_;
        if (pFVar3 == (FNiagaraDataBuffer *)0x0) {
          *(undefined4 *)(plVar17 + 5) = 0xffffffff;
        }
        else {
          *(uint *)(plVar17 + 5) = pFVar3->GPUInstanceCountBufferOffset;
          uVar16 = pFVar3->NumInstancesAllocated;
        }
      }
      else {
        *(uint *)((longlong)plVar17 + 0xc) = pFVar3->FloatStride >> 2;
        *(uint *)(plVar17 + 2) = pFVar3->Int32Stride >> 2;
        pFVar5 = (pFVar3->GPUBufferFloat).UAV.Reference;
        if (pFVar5 == (FRHIUnorderedAccessView *)0x0) goto LAB_148e7dfdf;
        plVar17[3] = (longlong)pFVar5;
LAB_148e7dfef:
        pFVar5 = (pFVar3->GPUBufferInt).UAV.Reference;
        if (pFVar5 == (FRHIUnorderedAccessView *)0x0) goto LAB_148e7e00d;
        plVar17[4] = (longlong)pFVar5;
        *(uint *)(plVar17 + 5) = pFVar3->GPUInstanceCountBufferOffset;
        uVar16 = pFVar3->NumInstancesAllocated;
      }
      *(uint *)((longlong)plVar17 + 0x2c) = uVar16;
      if ((pFVar4 == (FNiagaraDataBuffer *)0x0) ||
         (pFVar5 = (pFVar4->GPUBufferFloat).UAV.Reference, pFVar5 == (FRHIUnorderedAccessView *)0x0)
         ) {
        plVar17[6] = NDIDataChannelUtilities::DummyUAVFloat._48_8_;
        if (pFVar4 != (FNiagaraDataBuffer *)0x0) goto LAB_148e7e059;
LAB_148e7e06b:
        plVar17[7] = NDIDataChannelUtilities::DummyUAVInt32._48_8_;
        if (pFVar4 != (FNiagaraDataBuffer *)0x0) goto LAB_148e7e07b;
        plVar17[8] = -1;
        uVar16 = 4;
        *(undefined4 *)(plVar17 + 9) = 1;
      }
      else {
        plVar17[6] = (longlong)pFVar5;
LAB_148e7e059:
        pFVar5 = (pFVar4->GPUBufferInt).UAV.Reference;
        if (pFVar5 == (FRHIUnorderedAccessView *)0x0) goto LAB_148e7e06b;
        plVar17[7] = (longlong)pFVar5;
LAB_148e7e07b:
        *(uint *)(plVar17 + 8) = pFVar4->GPUInstanceCountBufferOffset;
        *(uint *)((longlong)plVar17 + 0x44) = pFVar4->NumInstancesAllocated;
        *(uint *)(plVar17 + 9) = pFVar4->FloatStride >> 2;
        uVar16 = pFVar4->Int32Stride;
      }
      bVar7 = true;
      *(uint *)((longlong)plVar17 + 0x4c) = uVar16 >> 2;
    }
  }
  if (local_28.DataHash.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.DataHash.AllocatorInstance.Data);
  }
  if (bVar7) {
    return;
  }
LAB_148e7e0d4:
  pFVar13 = FNiagaraRenderer::GetDummyUIntBuffer();
  *plVar17 = (longlong)pFVar13;
  *(undefined4 *)(plVar17 + 1) = 0xffffffff;
  *(undefined8 *)((longlong)plVar17 + 0xc) = 0;
  plVar17[3] = NDIDataChannelUtilities::DummyUAVFloat._48_8_;
  plVar17[4] = NDIDataChannelUtilities::DummyUAVInt32._48_8_;
  plVar17[5] = -1;
  plVar17[6] = NDIDataChannelUtilities::DummyUAVFloat._48_8_;
  plVar17[7] = NDIDataChannelUtilities::DummyUAVInt32._48_8_;
  plVar17[8] = -1;
  return;
}

// SimCacheBeginWrite @ 148e7e150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __thiscall
UNiagaraDataInterfaceDataChannelWrite::SimCacheBeginWrite
          (UNiagaraDataInterfaceDataChannelWrite *this,UObject *param_1,
          FNiagaraSystemInstance *param_2,void *param_3,FNiagaraSimCacheFeedbackContext *param_4)

{
  TArray<FNiagaraVariableLayoutInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar6;
  longlong *plVar7;
  undefined ***pppuVar8;
  ulonglong uVar9;
  undefined1 auStack_138 [32];
  undefined1 local_118 [128];
  code *local_98 [2];
  undefined **local_88;
  longlong lStack_80;
  ulong64 local_78;
  undefined ***local_70;
  undefined1 local_68 [16];
  undefined **local_58;
  longlong lStack_50;
  ulong64 local_48;
  undefined ***local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_138;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = UNDIDataChannelWriteSimCacheData::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_118,pUVar4);
  local_118._8_8_ = param_1;
  pUVar5 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_118);
  if (local_118._64_8_ != 0) {
    plVar7 = (longlong *)(local_118 + 0x50);
    if ((longlong *)local_118._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_118._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  pTVar1 = &this[-1].CompiledData.DataLayout.VariableLayouts;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pTVar1 != (TArray<FNiagaraVariableLayoutInfo,TSizedDefaultAllocator<32>_> *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pTVar1);
  }
  *(TArray<FNiagaraVariableLayoutInfo,TSizedDefaultAllocator<32>_> **)&pUVar5[2].field_0x8 = pTVar1;
  *(ulong64 *)&pUVar5[2].field_0x10 = param_2->ID;
  lStack_80 = *(longlong *)&this[-1].CompiledData.DataLayout.field_0x38;
  if (lStack_80 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a8,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar5 = (UObject *)(*pcVar2)();
      return pUVar5;
    }
  }
  else {
    local_78 = param_2->ID;
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UNiagaraDataInterfaceDataChannelWrite::SimCacheBeginWrite'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_70 = (undefined ***)0x0;
    local_88 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UNiagaraDataInterfaceDataChannelWrite::SimCacheBeginWrite'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceDataChannelWrite::SimCacheBeginWrite_::__l5::TSTR_NDISimCacheGPUBeginWrite868>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_68._0_8_ = local_98[0];
      local_40 = local_70;
      local_58 = local_88;
      lStack_50 = lStack_80;
      local_48 = local_78;
      local_98[0] = (code *)0x0;
      local_38 = 2;
      pFVar6 = (FRenderCommandTag *)
               TRenderCommandTag<`UNiagaraDataInterfaceDataChannelWrite::SimCacheBeginWrite'::__l5::TSTR_NDISimCacheGPUBeginWrite868>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_68,pFVar6);
      uVar9 = (ulonglong)local_38;
      if (2 < uVar9) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          pUVar5 = (UObject *)(*pcVar2)();
          return pUVar5;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar9] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_68._0_8_ != (code *)0x0) {
          pppuVar8 = (undefined ***)(local_68 + 0x10);
          if (local_40 != (undefined ***)0x0) {
            pppuVar8 = local_40;
          }
          (*(code *)(*pppuVar8)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar9])(local_68);
      }
    }
    if (local_98[0] != (code *)0x0) {
      pppuVar8 = &local_88;
      if (local_70 != (undefined ***)0x0) {
        pppuVar8 = local_70;
      }
      (*(code *)(*pppuVar8)[2])();
    }
  }
  return pUVar5;
}

// SimCacheCompareFrame @ 148e7e3e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UNiagaraDataInterfaceDataChannelWrite::SimCacheCompareFrame
          (UNiagaraDataInterfaceDataChannelWrite *this,UObject *param_1,UObject *param_2,int param_3
          ,TOptional<float> param_4,FString *param_5)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  UClass *pUVar5;
  FString *pFVar6;
  undefined8 *puVar7;
  wchar_t *pwVar8;
  uint uVar9;
  undefined8 *puVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  longlong lVar14;
  int *piVar15;
  undefined1 auStackY_288 [32];
  bool local_248;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_240;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_230;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_220;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_210;
  FString *local_200;
  UObject *local_1f8;
  UObject *local_1f0;
  longlong local_1e8;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FStringFormatArg local_188;
  FStringFormatArg local_168;
  FStringFormatArg local_148;
  FStringFormatArg local_128;
  FStringFormatArg local_108;
  FStringFormatArg local_e8;
  FStringFormatArg local_c8;
  FStringFormatArg local_a8;
  FStringFormatArg local_88;
  FStringFormatArg local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_288;
  local_200 = param_5;
  local_1f8 = param_2;
  if (param_1 == (UObject *)0x0) {
LAB_148e7e448:
    param_1 = (UObject *)0x0;
    local_1f0 = (UObject *)0x0;
  }
  else {
    local_1f0 = param_1;
    pUVar5 = UNDIDataChannelWriteSimCacheData::StaticClass();
    iVar11 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar11) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar11 * 8) !=
        &pUVar5->_padding_)) goto LAB_148e7e448;
  }
  if (param_2 == (UObject *)0x0) {
LAB_148e7e477:
    param_2 = (UObject *)0x0;
    local_1f8 = (UObject *)0x0;
  }
  else {
    pUVar5 = UNDIDataChannelWriteSimCacheData::StaticClass();
    iVar11 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&param_2->field_0x10 + 0x38) < iVar11) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar11 * 8) !=
        &pUVar5->_padding_)) goto LAB_148e7e477;
  }
  if (param_1 == (UObject *)0x0) {
    if (param_2 == (UObject *)0x0) {
      return true;
    }
  }
  else if (param_2 != (UObject *)0x0) {
    bVar2 = FSoftObjectPath::operator==
                      ((FSoftObjectPath *)&param_1[1].field_0x10,
                       (FSoftObjectPath *)&param_2[1].field_0x10);
    if (bVar2) {
      iVar11 = *(int *)&param_1[1].field_0x8;
      if (iVar11 != *(int *)&param_2[1].field_0x8) {
        FStringFormatArg::FStringFormatArg(&local_188,iVar11);
        FStringFormatArg::FStringFormatArg(&local_168,*(int *)&param_2[1].field_0x8);
        local_240.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_240.ArrayNum = 2;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,2,0,&local_240.AllocatorInstance,2,&local_240.ArrayMax);
        ConstructItems<FStringFormatArg,FStringFormatArg,int>
                  (local_240.AllocatorInstance.Data,&local_188,2);
        ::FString::FormatImpl(&local_1b0,L"Different frame data count. {0} vs {1}",&local_240);
        ::FString::operator=(param_5,&local_1b0);
        if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
        }
        DestructItems<FStringFormatArg,int>
                  ((FStringFormatArg *)local_240.AllocatorInstance.Data,local_240.ArrayNum);
        if ((FStringFormatArg *)local_240.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
          FMemory::Free(local_240.AllocatorInstance.Data);
        }
        if (local_168.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.StringValue.Data.AllocatorInstance.Data);
        }
        if (local_188.StringValue.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return false;
        }
        FMemory::Free(local_188.StringValue.Data.AllocatorInstance.Data);
        return false;
      }
      uVar13 = 0;
      local_248 = true;
      if (iVar11 < 1) {
        return true;
      }
      local_1e8 = 0;
      do {
        lVar14 = local_1e8;
        uVar9 = 0;
        if ((int)uVar13 < *(int *)&param_1[1].field_0x8) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        piVar15 = (int *)(*(longlong *)(param_1 + 1) + lVar14);
        uVar9 = 0;
        if ((int)uVar13 < *(int *)&param_2[1].field_0x8) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        piVar12 = (int *)(lVar14 + *(longlong *)(param_2 + 1));
        if (*piVar15 == *piVar12) {
          if (piVar15[4] == piVar12[4]) {
            uVar9 = 0;
            param_2 = local_1f8;
            if (0 < piVar15[4]) {
              lVar14 = 0;
              do {
                uVar4 = 0;
                if ((int)uVar9 < piVar15[4]) {
                  uVar4 = ~uVar9 >> 0x1f;
                }
                if ((uVar4 == 0) &&
                   (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar2)) {
                  pcVar1 = (code *)swi(3);
                  uVar3 = (*pcVar1)();
                  return (bool)uVar3;
                }
                puVar10 = (undefined8 *)(*(longlong *)(piVar15 + 2) + lVar14);
                uVar4 = 0;
                if ((int)uVar9 < piVar12[4]) {
                  uVar4 = ~uVar9 >> 0x1f;
                }
                if ((uVar4 == 0) &&
                   (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar2)) {
                  pcVar1 = (code *)swi(3);
                  uVar3 = (*pcVar1)();
                  return (bool)uVar3;
                }
                puVar7 = (undefined8 *)(*(longlong *)(piVar12 + 2) + lVar14);
                if ((*(longlong *)((longlong)puVar10 + 0x14) ==
                     *(longlong *)((longlong)puVar7 + 0x14)) &&
                   (*(int *)((longlong)puVar10 + 0x1c) == *(int *)((longlong)puVar7 + 0x1c))) {
                  iVar11 = *(int *)(puVar10 + 1);
                  if ((iVar11 != *(int *)(puVar7 + 1)) ||
                     ((param_5 = local_200, iVar11 != 0 &&
                      (iVar11 = memcmp((void *)*puVar10,(void *)*puVar7,(longlong)iVar11),
                      param_5 = local_200, iVar11 != 0)))) goto LAB_148e7e9da;
                }
                else {
LAB_148e7e9da:
                  FStringFormatArg::FStringFormatArg(&local_148,uVar13);
                  pFVar6 = ::FName::ToString((FName *)((longlong)puVar10 + 0x14),&local_1a0);
                  if ((pFVar6->Data).ArrayNum == 0) {
                    pwVar8 = L"";
                  }
                  else {
                    pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
                  }
                  FStringFormatArg::FStringFormatArg(&local_128,pwVar8);
                  local_210.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_210.ArrayNum = 2;
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x20,8,2,0,&local_210.AllocatorInstance,2,&local_210.ArrayMax);
                  ConstructItems<FStringFormatArg,FStringFormatArg,int>
                            (local_210.AllocatorInstance.Data,&local_148,2);
                  ::FString::FormatImpl
                            (&local_1c0,
                             L"Frame {0}: different buffers in data channel store for source var {1}\n"
                             ,&local_210);
                  param_5 = local_200;
                  if (local_1c0.Data.ArrayNum == 0) {
                    iVar11 = 0;
                  }
                  else {
                    iVar11 = local_1c0.Data.ArrayNum + -1;
                  }
                  ::FString::AppendChars
                            (local_200,(wchar_t *)local_1c0.Data.AllocatorInstance.Data,iVar11);
                  if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
                  }
                  DestructItems<FStringFormatArg,int>
                            ((FStringFormatArg *)local_210.AllocatorInstance.Data,local_210.ArrayNum
                            );
                  if ((FStringFormatArg *)local_210.AllocatorInstance.Data !=
                      (FStringFormatArg *)0x0) {
                    FMemory::Free(local_210.AllocatorInstance.Data);
                  }
                  if (local_128.StringValue.Data.AllocatorInstance.Data !=
                      (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_128.StringValue.Data.AllocatorInstance.Data);
                  }
                  if (local_148.StringValue.Data.AllocatorInstance.Data !=
                      (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_148.StringValue.Data.AllocatorInstance.Data);
                  }
                  if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
                  }
                }
                uVar9 = uVar9 + 1;
                lVar14 = lVar14 + 0x20;
                param_2 = local_1f8;
                param_1 = local_1f0;
              } while ((int)uVar9 < piVar15[4]);
            }
          }
          else {
            local_248 = false;
            FStringFormatArg::FStringFormatArg(&local_a8,uVar13);
            FStringFormatArg::FStringFormatArg(&local_88,piVar15[4]);
            FStringFormatArg::FStringFormatArg(&local_68,piVar12[4]);
            local_220.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_220.ArrayNum = 3;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,3,0,&local_220.AllocatorInstance,3,&local_220.ArrayMax);
            ConstructItems<FStringFormatArg,FStringFormatArg,int>
                      (local_220.AllocatorInstance.Data,&local_a8,3);
            ::FString::FormatImpl
                      (&local_1d0,
                       L"Frame {0}: different number of variables in data channel store, {1} vs {2}\n"
                       ,&local_220);
            if (local_1d0.Data.ArrayNum == 0) {
              iVar11 = 0;
            }
            else {
              iVar11 = local_1d0.Data.ArrayNum + -1;
            }
            ::FString::AppendChars(param_5,(wchar_t *)local_1d0.Data.AllocatorInstance.Data,iVar11);
            if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
            }
            DestructItems<FStringFormatArg,int>
                      ((FStringFormatArg *)local_220.AllocatorInstance.Data,local_220.ArrayNum);
            if ((FStringFormatArg *)local_220.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
              FMemory::Free(local_220.AllocatorInstance.Data);
            }
            if (local_68.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_68.StringValue.Data.AllocatorInstance.Data);
            }
            if (local_88.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_88.StringValue.Data.AllocatorInstance.Data);
            }
            if (local_a8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_a8.StringValue.Data.AllocatorInstance.Data);
            }
          }
        }
        else {
          local_248 = false;
          FStringFormatArg::FStringFormatArg(&local_108,uVar13);
          FStringFormatArg::FStringFormatArg(&local_e8,*piVar15);
          FStringFormatArg::FStringFormatArg(&local_c8,*piVar12);
          local_230.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_230.ArrayNum = 3;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,3,0,&local_230.AllocatorInstance,3,&local_230.ArrayMax);
          ConstructItems<FStringFormatArg,FStringFormatArg,int>
                    (local_230.AllocatorInstance.Data,&local_108,3);
          ::FString::FormatImpl
                    (&local_1e0,
                     L"Frame {0}: different number of elements in data channel store, {1} vs {2}\n",
                     &local_230);
          if (local_1e0.Data.ArrayNum == 0) {
            iVar11 = 0;
          }
          else {
            iVar11 = local_1e0.Data.ArrayNum + -1;
          }
          ::FString::AppendChars(param_5,(wchar_t *)local_1e0.Data.AllocatorInstance.Data,iVar11);
          if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
          }
          DestructItems<FStringFormatArg,int>
                    ((FStringFormatArg *)local_230.AllocatorInstance.Data,local_230.ArrayNum);
          if ((FStringFormatArg *)local_230.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
            FMemory::Free(local_230.AllocatorInstance.Data);
          }
          if (local_c8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.StringValue.Data.AllocatorInstance.Data);
          }
          if (local_e8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e8.StringValue.Data.AllocatorInstance.Data);
          }
          if (local_108.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_108.StringValue.Data.AllocatorInstance.Data);
          }
        }
        uVar13 = uVar13 + 1;
        local_1e8 = local_1e8 + 0x20;
        if (*(int *)&param_1[1].field_0x8 <= (int)uVar13) {
          return local_248;
        }
      } while( true );
    }
    pwVar8 = L"Different source data channel assets";
    goto LAB_148e7eb57;
  }
  pwVar8 = L"Recevied nullptr storage object for comparison";
LAB_148e7eb57:
  ::FString::operator=(param_5,pwVar8);
  return false;
}

// SimCacheEndWrite @ 148e7eba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UNiagaraDataInterfaceDataChannelWrite::SimCacheEndWrite
          (UNiagaraDataInterfaceDataChannelWrite *this,UObject *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UClass *pUVar5;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar6;
  undefined ***pppuVar7;
  ulonglong uVar8;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  longlong lStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (param_1 != (UObject *)0x0) {
    pUVar5 = UNDIDataChannelWriteSimCacheData::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      if (*(longlong *)&param_1[2].field_0x8 != 0) {
        lStack_70 = *(longlong *)(*(longlong *)&param_1[2].field_0x8 + 0x28);
        if (lStack_70 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypedProxy != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                             ,0x3a8,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
        else {
          local_60 = (undefined ***)0x0;
          local_78 = &UE::Core::Private::Function::
                      TFunction_OwnedObject<`UNiagaraDataInterfaceDataChannelWrite::SimCacheEndWrite'::`11'::<lambda_1>,1,0>
                      ::_vftable_;
          local_68 = *(undefined8 *)&param_1[2].field_0x10;
          local_88[0] = UE::Core::Private::Function::
                        TFunctionRefCaller<`UNiagaraDataInterfaceDataChannelWrite::SimCacheEndWrite'::__l11::<lambda_1>,void,FRHICommandListImmediate_&>
                        ::Call;
          this_00 = FRenderCommandList::GetInstanceTLS();
          if (this_00 == (FRenderCommandList *)0x0) {
            FRenderThreadCommandPipe::
            Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceDataChannelWrite::SimCacheEndWrite_::__l11::TSTR_NDISimCacheGPUBeginWrite892>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                      ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
          }
          else {
            this_01 = FRenderCommandList::GetRenderThread(this_00);
            local_58._0_8_ = local_88[0];
            local_88[0] = (code *)0x0;
            local_30 = local_60;
            local_48 = local_78;
            lStack_40 = lStack_70;
            local_38 = local_68;
            local_28 = 2;
            pFVar6 = (FRenderCommandTag *)
                     TRenderCommandTag<`UNiagaraDataInterfaceDataChannelWrite::SimCacheEndWrite'::__l11::TSTR_NDISimCacheGPUBeginWrite892>
                     ::Get();
            UE::RenderCommandPipe::FCommandList::Enqueue
                      (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                                *)local_58,pFVar6);
            uVar8 = (ulonglong)local_28;
            if ((2 < uVar8) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                   ,0xd4,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
            if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar8] ==
                UE::Core::Private::
                TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
                Destruct) {
              if ((code *)local_58._0_8_ != (code *)0x0) {
                pppuVar7 = (undefined ***)(local_58 + 0x10);
                if (local_30 != (undefined ***)0x0) {
                  pppuVar7 = local_30;
                }
                (*(code *)(*pppuVar7)[2])();
              }
            }
            else {
              (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                          ::__l2::Destructors)[uVar8])(local_58);
            }
          }
          if (local_88[0] != (code *)0x0) {
            pppuVar7 = &local_78;
            if (local_60 != (undefined ***)0x0) {
              pppuVar7 = local_60;
            }
            (*(code *)(*pppuVar7)[2])();
          }
        }
      }
      *(undefined8 *)&param_1[2].field_0x8 = 0;
      *(undefined8 *)&param_1[2].field_0x10 = 0;
    }
  }
  return true;
}

// SimCachePostReadFrame @ 148e7edb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceDataChannelWrite::SimCachePostReadFrame
          (UNiagaraDataInterfaceDataChannelWrite *this,void *param_1,FNiagaraSystemInstance *param_2
          )

{
  return;
}

// SimCacheReadFrame @ 148e7f060

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceDataChannelWrite::SimCacheReadFrame
          (UNiagaraDataInterfaceDataChannelWrite *this,
          FNiagaraSimCacheDataInterfaceReadContext *param_1)

{
  FNDCAccessContextInst *this_00;
  int *piVar1;
  double *pdVar2;
  int iVar3;
  int iVar4;
  UNiagaraDataChannel *this_01;
  FNiagaraSystemInstance *pFVar5;
  UScriptStruct *pUVar6;
  UObject *pUVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  TRefCountPtr<FNiagaraDataBuffer> TVar18;
  bool bVar19;
  undefined1 uVar20;
  FNiagaraWorldManager *pFVar21;
  UNiagaraDataChannelHandler *pUVar22;
  UScriptStruct *pUVar23;
  undefined8 *puVar24;
  FNDCAccessContextBase *pFVar25;
  USceneComponent *pUVar26;
  FNiagaraDataChannelData **ppFVar27;
  UClass *pUVar28;
  TSharedPtr<FNiagaraDataChannelLayoutInfo,1> *pTVar29;
  TReferenceControllerBase<1> *pTVar30;
  FNiagaraTypeDefinition *pFVar31;
  longlong lVar32;
  uint uVar33;
  TReferenceControllerBase<1> *pTVar34;
  int *piVar35;
  uint uVar36;
  TReferenceControllerBase<1> *pTVar37;
  longlong *plVar38;
  FNiagaraDataChannelGameData *pFVar39;
  atomic<int> *paVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined4 uVar50;
  undefined4 uVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  FName local_res18;
  FNiagaraDataChannelGameData *local_res20;
  FNiagaraDataChannelData *local_288;
  FSharedReferencer<1> FStack_280;
  ForAnyElementType local_278;
  int local_270 [2];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_268;
  FNiagaraDataChannelPublishRequest local_258;
  FString local_220;
  undefined8 local_210;
  FSharedReferencer<1> local_208;
  FString local_200;
  uchar *local_1e8;
  int iStack_1e0;
  undefined4 uStack_1dc;
  FScriptContainerElement *local_1d8;
  int iStack_1d0;
  undefined4 uStack_1cc;
  uchar *local_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  UObject *local_1b8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  uint local_198;
  undefined1 local_190 [8];
  undefined1 local_188 [8];
  TReferenceControllerBase<1> *local_180;
  undefined1 local_178 [8];
  TReferenceControllerBase<1> *local_170;
  FString local_168;
  TSharedPtr<FNiagaraDataChannelLayoutInfo,1> local_158;
  TArrayView<unsigned_char_const_,int> local_148;
  TArrayView<unsigned_char_const_,int> local_138;
  TArrayView<unsigned_char_const_,int> local_128;
  undefined1 local_118 [16];
  double local_108;
  FStringFormatArg local_f8;
  FStringFormatArg local_d8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  undefined1 local_88 [16];
  
  if ((this->_padding_ == 0) ||
     (this_01 = *(UNiagaraDataChannel **)(this->_padding_ + 0x28),
     this_01 == (UNiagaraDataChannel *)0x0)) {
    return false;
  }
  pFVar5 = param_1->SystemInstance;
  local_288 = (FNiagaraDataChannelData *)0x0;
  FStack_280.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar21 = FNiagaraWorldManager::Get(pFVar5->World);
  if ((pFVar21 != (FNiagaraWorldManager *)0x0) &&
     (pUVar22 = FNiagaraDataChannelManager::FindDataChannelHandler
                          ((pFVar21->DataChannelManager).Ptr,this_01),
     pUVar22 != (UNiagaraDataChannelHandler *)0x0)) {
    plVar38 = &this->_padding_;
    if ((this->_padding_ == 0) ||
       ((*plVar38 == 0 ||
        (pUVar6 = (UScriptStruct *)*plVar38, pUVar23 = FNDCAccessContextLegacy::StaticStruct(),
        pUVar6 == pUVar23)))) {
      local_1b8 = FWeakObjectPtr::Get(&(pFVar5->AttachComponent).WeakPtr);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1b8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_1b8);
      }
      uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar16 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_a0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      pcVar8 = *(code **)(pUVar22->_padding_ + 0x2e0);
      local_b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_a8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1b8 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_1b8);
      }
      local_198 = local_198 & 0xfffffffe;
      local_1a0 = (double)uVar17;
      local_1b0 = (double)uVar15;
      dStack_1a8 = (double)uVar16;
      ppFVar27 = (FNiagaraDataChannelData **)(*pcVar8)(pUVar22,local_178,&local_1b8);
      if (&local_288 != ppFVar27) {
        local_288 = *ppFVar27;
        *ppFVar27 = (FNiagaraDataChannelData *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&FStack_280,(FSharedReferencer<1> *)(ppFVar27 + 1));
      }
    }
    else {
      bVar19 = IsInGameThread();
      if ((!bVar19) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsInGameThread()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannel.h"
                              ,0x94,L""), bVar19)) {
        pcVar8 = (code *)swi(3);
        uVar20 = (*pcVar8)();
        return (bool)uVar20;
      }
      this_00 = &this_01->TransientAccessContext;
      puVar24 = (undefined8 *)(**(code **)(this_01->_padding_ + 0x2b0))(this_01,local_190);
      FInstancedStruct::InitializeAs(&this_00->AccessContext,(UScriptStruct *)*puVar24,(uchar *)0x0)
      ;
      if (this_00 != (FNDCAccessContextInst *)plVar38) {
        FInstancedStruct::InitializeAs
                  (&this_00->AccessContext,(UScriptStruct *)*plVar38,(uchar *)this->_padding_);
      }
      pFVar25 = FNDCAccessContextInst::GetChecked<FNDCAccessContextBase>(this_00);
      pUVar26 = (USceneComponent *)FWeakObjectPtr::Get(&(pFVar5->AttachComponent).WeakPtr);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar26 != (USceneComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar26);
      }
      (pFVar25->OwningComponent).field0_0x0.DebugPtr = pUVar26;
      ppFVar27 = (FNiagaraDataChannelData **)
                 (**(code **)(pUVar22->_padding_ + 0x2d8))(pUVar22,local_188,this_00);
      local_170 = local_180;
      if (&local_288 != ppFVar27) {
        local_288 = *ppFVar27;
        *ppFVar27 = (FNiagaraDataChannelData *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&FStack_280,(FSharedReferencer<1> *)(ppFVar27 + 1));
        local_170 = local_180;
      }
    }
    pTVar37 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_170);
    if ((local_288 != (FNiagaraDataChannelData *)0x0) &&
       (pUVar7 = param_1->StorageObject, pUVar7 != (UObject *)0x0)) {
      pUVar28 = UNDIDataChannelWriteSimCacheData::StaticClass();
      iVar3 = (int)pUVar28->_padding_;
      if ((iVar3 <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
          &pUVar28->_padding_)) {
        iVar3 = param_1->FrameIndexA;
        if ((-1 < iVar3) && (iVar3 < *(int *)&pUVar7[1].field_0x8)) {
          if ((*(int *)&pUVar7[1].field_0x8 <= iVar3) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar8 = (code *)swi(3);
            uVar20 = (*pcVar8)();
            return (bool)uVar20;
          }
          local_258.LwcTile.field0_0x0._s_0.Z =
               UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          local_258.Data.Reference = (FNiagaraDataBuffer *)0x0;
          local_258.GameData.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          local_258.LwcTile.field0_0x0._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_
          ;
          local_258.DebugSource.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          piVar35 = (int *)((longlong)iVar3 * 0x20 + *(longlong *)(pUVar7 + 1));
          local_258.bVisibleToGame = SUB41(piVar35[6],0);
          local_258.bVisibleToCPUSims = *(bool *)((longlong)piVar35 + 0x19);
          local_258.bVisibleToGPUSims = *(bool *)((longlong)piVar35 + 0x1a);
          local_res18 = (FName)pFVar5->System->_padding_;
          ::FName::ToString(&local_res18,&local_168);
          FStringFormatArg::FStringFormatArg(&local_f8,&local_168);
          if (*(UObjectBaseUtility **)&pUVar7->field_0x20 == (UObjectBaseUtility *)0x0) {
            ::FString::FString(&local_200,L"None");
          }
          else {
            UObjectBaseUtility::GetPathName
                      (*(UObjectBaseUtility **)&pUVar7->field_0x20,&local_200,(UObject *)0x0);
          }
          FStringFormatArg::FStringFormatArg(&local_d8,&local_200);
          local_268.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_268.ArrayNum = 2;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,2,0,&local_268.AllocatorInstance,2,&local_268.ArrayMax);
          ConstructItems<FStringFormatArg,FStringFormatArg,int>
                    (local_268.AllocatorInstance.Data,&local_f8,2);
          ::FString::FormatImpl(&local_220,L"{0} (Sim cache {1})",&local_268);
          if (local_258.DebugSource.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_258.DebugSource.Data.AllocatorInstance.Data);
          }
          local_258.DebugSource.Data.AllocatorInstance.Data = local_220.Data.AllocatorInstance.Data;
          local_258.DebugSource.Data.ArrayNum = local_220.Data.ArrayNum;
          local_258.DebugSource.Data.ArrayMax = local_220.Data.ArrayMax;
          local_220.Data.ArrayNum = 0;
          local_220.Data.ArrayMax = 0;
          local_220.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          DestructItems<FStringFormatArg,int>
                    ((FStringFormatArg *)local_268.AllocatorInstance.Data,local_268.ArrayNum);
          if ((FStringFormatArg *)local_268.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
            FMemory::Free(local_268.AllocatorInstance.Data);
          }
          if (local_d8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.StringValue.Data.AllocatorInstance.Data);
          }
          if (local_f8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_f8.StringValue.Data.AllocatorInstance.Data);
          }
          pTVar29 = UNiagaraDataChannel::GetLayoutInfo(this_01,&local_158);
          pTVar30 = ::operator_new(0x50);
          if (pTVar30 == (TReferenceControllerBase<1> *)0x0) {
            pFVar39 = (FNiagaraDataChannelGameData *)&DAT_00000010;
            pTVar30 = pTVar37;
LAB_148e7f543:
            if (((pFVar39->_padding_ == 0) || (*(longlong *)&pFVar39->_padding_ == 0)) ||
               (*(int *)(*(longlong *)&pFVar39->_padding_ + 8) < 1)) {
              paVar40 = (atomic<int> *)&pFVar39->_padding_;
              if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar30->SharedReferenceCount =
                     (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
                UNLOCK();
              }
              pFVar39->_padding_ = (longlong)pFVar39;
              if (pTVar30 != *(TReferenceControllerBase<1> **)paVar40) {
                if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
                  LOCK();
                  pTVar30->WeakReferenceCount = (atomic<int>)((int)pTVar30->WeakReferenceCount + 1);
                  UNLOCK();
                }
                plVar38 = *(longlong **)paVar40;
                if (plVar38 != (longlong *)0x0) {
                  LOCK();
                  piVar1 = (int *)((longlong)plVar38 + 0xc);
                  iVar3 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*plVar38 + 8))(plVar38,1);
                  }
                }
                *(TReferenceControllerBase<1> **)paVar40 = pTVar30;
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar30);
            }
          }
          else {
            pTVar30->SharedReferenceCount = (atomic<int>)0x1;
            pTVar30->WeakReferenceCount = (atomic<int>)0x1;
            pTVar30->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController_UFNiagaraDataChannelGameData___00_SharedPointerInternals__6B_
            ;
            FNiagaraDataChannelGameData::FNiagaraDataChannelGameData
                      ((FNiagaraDataChannelGameData *)(pTVar30 + 1),pTVar29);
            pFVar39 = (FNiagaraDataChannelGameData *)(pTVar30 + 1);
            if (pFVar39 != (FNiagaraDataChannelGameData *)0x0) goto LAB_148e7f543;
            bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("InObject != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x246,L"");
            if (bVar19) {
              pcVar8 = (code *)swi(3);
              uVar20 = (*pcVar8)();
              return (bool)uVar20;
            }
          }
          if (pTVar30 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar30->SharedReferenceCount = (atomic<int>)((int)pTVar30->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_210 = 0;
          local_258.GameData.Object = pFVar39;
          local_208.ReferenceController = pTVar30;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&local_258.GameData.SharedReferenceCount,&local_208);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_208.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar30);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_158.SharedReferenceCount.ReferenceController);
          if ((local_258.GameData.Object == (FNiagaraDataChannelGameData *)0x0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar19)) {
            pcVar8 = (code *)swi(3);
            uVar20 = (*pcVar8)();
            return (bool)uVar20;
          }
          FNiagaraDataChannelGameData::SetNum(local_258.GameData.Object,*piVar35);
          local_258.LwcTile.field0_0x0._0_8_ = *(undefined8 *)&(param_1->LWCTileA).field0_0x0;
          local_258.LwcTile.field0_0x0._s_0.Z = (param_1->LWCTileA).field0_0x0._s_0.Z;
          if (((param_1->RebaseData).bIsSet == false) || ((param_1->RebaseData).TypedValue != false)
             ) {
            pTVar30 = pTVar37;
            pTVar34 = pTVar37;
            if (0 < piVar35[4]) {
              do {
                uVar36 = (uint)pTVar34;
                uVar33 = 0;
                if ((int)uVar36 < piVar35[4]) {
                  uVar33 = ~uVar36 >> 0x1f;
                }
                if ((uVar33 == 0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar8 = (code *)swi(3);
                  uVar20 = (*pcVar8)();
                  return (bool)uVar20;
                }
                plVar38 = (longlong *)((longlong)&pTVar30->_padding_ + *(longlong *)(piVar35 + 2));
                pFVar31 = FNiagaraTypeDefinitionHandle::Resolve
                                    ((FNiagaraTypeDefinitionHandle *)((longlong)plVar38 + 0x1c));
                if ((((TObjectPtr<UObject>_u_0)(pFVar31->ClassStructOrEnum).field0_0x0.DebugPtr ==
                      FNiagaraTypeDefinition::PositionDef.ClassStructOrEnum.field0_0x0) &&
                    (pFVar31->UnderlyingType == FNiagaraTypeDefinition::PositionDef.UnderlyingType))
                   && (pFVar31->Flags == FNiagaraTypeDefinition::PositionDef.Flags)) {
                  if (((int)plVar38[2] != 0x18) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Buffer.Size == sizeof(FVector)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDataChannelWrite.cpp"
                                          ,0x434,L""), bVar19)) {
                    pcVar8 = (code *)swi(3);
                    uVar20 = (*pcVar8)();
                    return (bool)uVar20;
                  }
                  local_278.Data = (FScriptContainerElement *)0x0;
                  local_270[0] = 0;
                  local_270[1] = 0;
                  UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (1,1,(int)plVar38[1],&local_278,local_270,local_270 + 1);
                  pTVar34 = pTVar37;
                  if (0 < *piVar35) {
                    do {
                      auVar49 = *(undefined1 (*) [16])
                                 (param_1->RebaseTransformA).Rotation.XY.m128d_f64;
                      dVar14 = (param_1->RebaseTransformA).Rotation.ZW.m128d_f64[1];
                      lVar32 = (longlong)(int)pTVar34;
                      uVar33 = (int)pTVar34 + 1;
                      pdVar2 = (double *)(*plVar38 + lVar32 * 0x18);
                      dVar12 = *(double *)(*plVar38 + 0x10 + lVar32 * 0x18) *
                               (param_1->RebaseTransformA).Scale3D.ZW.m128d_f64[0];
                      dVar13 = (param_1->RebaseTransformA).Scale3D.ZW.m128d_f64[1] * 0.0;
                      dVar10 = (param_1->RebaseTransformA).Scale3D.XY.m128d_f64[0] * *pdVar2;
                      dVar11 = (param_1->RebaseTransformA).Scale3D.XY.m128d_f64[1] * pdVar2[1];
                      uVar50 = (undefined4)((ulonglong)dVar11 >> 0x20);
                      local_88 = *(undefined1 (*) [16])
                                  (param_1->RebaseTransformA).Rotation.XY.m128d_f64;
                      auVar43 = blendpd(local_88,*(undefined1 (*) [16])
                                                  (param_1->RebaseTransformA).Rotation.ZW.m128d_f64,
                                        2);
                      auVar52._8_4_ = SUB84(dVar11,0);
                      auVar52._0_8_ = dVar10;
                      auVar52._12_4_ = uVar50;
                      auVar53._0_8_ = auVar52._8_8_ * local_88._0_8_ - local_88._8_8_ * dVar10;
                      auVar53._8_8_ =
                           dVar12 * local_88._8_8_ -
                           (param_1->RebaseTransformA).Rotation.ZW.m128d_f64[0] * dVar11;
                      auVar46._8_4_ = SUB84(dVar11,0);
                      auVar46._0_8_ = dVar10;
                      auVar46._12_4_ = uVar50;
                      auVar41._8_4_ = SUB84(dVar13,0);
                      auVar41._0_8_ = dVar12;
                      auVar41._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
                      auVar41 = blendpd(auVar46,auVar41,2);
                      auVar42._0_8_ =
                           auVar41._0_8_ * (param_1->RebaseTransformA).Rotation.ZW.m128d_f64[0] -
                           auVar43._0_8_ * dVar12;
                      auVar42._8_8_ =
                           auVar41._8_8_ * (param_1->RebaseTransformA).Rotation.ZW.m128d_f64[1] -
                           auVar43._8_8_ * dVar13;
                      auVar41 = blendpd(auVar53,auVar42,2);
                      dVar13 = auVar53._8_8_ + auVar53._8_8_;
                      dVar9 = auVar42._0_8_ + auVar42._0_8_;
                      uVar50 = (undefined4)((ulonglong)dVar9 >> 0x20);
                      auVar54._0_8_ = auVar41._0_8_ + auVar41._0_8_;
                      auVar54._8_8_ = auVar41._8_8_ + auVar41._8_8_;
                      auVar47._8_4_ = SUB84(dVar9,0);
                      auVar47._0_8_ = dVar13;
                      auVar47._12_4_ = uVar50;
                      auVar44._8_4_ = SUB84(dVar9,0);
                      auVar44._0_8_ = dVar13;
                      auVar44._12_4_ = uVar50;
                      auVar41 = blendpd(auVar44,auVar54,2);
                      auVar46 = blendpd(auVar49,*(undefined1 (*) [16])
                                                 (param_1->RebaseTransformA).Rotation.ZW.m128d_f64,2
                                       );
                      auVar48._0_8_ = auVar47._8_8_ * auVar49._0_8_ - auVar49._8_8_ * dVar13;
                      auVar48._8_8_ =
                           auVar54._0_8_ * auVar49._8_8_ -
                           (param_1->RebaseTransformA).Rotation.ZW.m128d_f64[0] * dVar9;
                      auVar45._0_8_ =
                           auVar41._0_8_ * (param_1->RebaseTransformA).Rotation.ZW.m128d_f64[0] -
                           auVar46._0_8_ * auVar54._0_8_;
                      auVar45._8_8_ =
                           auVar41._8_8_ * (param_1->RebaseTransformA).Rotation.ZW.m128d_f64[1] -
                           auVar46._8_8_ * auVar54._8_8_;
                      auVar43._8_4_ = SUB84(auVar48._8_8_,0);
                      auVar43._0_8_ = auVar48._0_8_;
                      auVar43._12_4_ = (int)((ulonglong)auVar48._8_8_ >> 0x20);
                      auVar49 = blendpd(auVar48,auVar45,2);
                      dVar13 = dVar13 * dVar14 + dVar10 + auVar43._8_8_ +
                               (param_1->RebaseTransformA).Translation.XY.m128d_f64[0];
                      dVar9 = dVar9 * dVar14 + dVar11 + auVar45._0_8_ +
                              (param_1->RebaseTransformA).Translation.XY.m128d_f64[1];
                      uVar50 = SUB84(dVar9,0);
                      uVar51 = (undefined4)((ulonglong)dVar9 >> 0x20);
                      local_108 = auVar54._0_8_ * dVar14 + dVar12 + auVar49._0_8_ +
                                  (param_1->RebaseTransformA).Translation.ZW.m128d_f64[0];
                      auVar49._8_4_ = uVar50;
                      auVar49._0_8_ = dVar13;
                      auVar49._12_4_ = uVar51;
                      *(undefined1 (*) [16])(local_278.Data + lVar32 * 0x18) = auVar49;
                      *(double *)(local_278.Data + lVar32 * 0x18 + 0x10) = local_108;
                      local_118._8_4_ = uVar50;
                      local_118._0_8_ = dVar13;
                      local_118._12_4_ = uVar51;
                      pTVar34 = (TReferenceControllerBase<1> *)(ulonglong)uVar33;
                    } while ((int)uVar33 < *piVar35);
                  }
                  if ((local_258.GameData.Object == (FNiagaraDataChannelGameData *)0x0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar19)) {
                    pcVar8 = (code *)swi(3);
                    uVar20 = (*pcVar8)();
                    return (bool)uVar20;
                  }
                  pFVar39 = local_258.GameData.Object;
                  iVar3 = local_270[0];
                  local_1d8 = local_278.Data;
                  if ((local_270[0] < 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("InCount >= 0",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0xeb,L""), bVar19)) {
                    pcVar8 = (code *)swi(3);
                    uVar20 = (*pcVar8)();
                    return (bool)uVar20;
                  }
                  iStack_1d0 = iVar3;
                  local_138._12_4_ = uStack_1cc;
                  local_138.ArrayNum = iVar3;
                  local_138.DataPtr = (uchar *)local_1d8;
                  FNiagaraDataChannelGameData::SetFromSimCache
                            (pFVar39,(FNiagaraVariableBase *)((longlong)plVar38 + 0x14),&local_138,
                             0x18);
                  if (local_278.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_278.Data);
                  }
                }
                else {
                  if ((local_258.GameData.Object == (FNiagaraDataChannelGameData *)0x0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar19)) {
                    pcVar8 = (code *)swi(3);
                    uVar20 = (*pcVar8)();
                    return (bool)uVar20;
                  }
                  iVar3 = (int)plVar38[1];
                  local_res20 = local_258.GameData.Object;
                  lVar32 = plVar38[2];
                  local_1c8 = (uchar *)*plVar38;
                  if ((iVar3 < 0) &&
                     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                         ("InCount >= 0",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0xeb,L""), bVar19)) {
                    pcVar8 = (code *)swi(3);
                    uVar20 = (*pcVar8)();
                    return (bool)uVar20;
                  }
                  local_128._12_4_ = uStack_1bc;
                  local_128.ArrayNum = iVar3;
                  local_128.DataPtr = local_1c8;
                  iStack_1c0 = iVar3;
                  FNiagaraDataChannelGameData::SetFromSimCache
                            (local_res20,(FNiagaraVariableBase *)((longlong)plVar38 + 0x14),
                             &local_128,(int)lVar32);
                }
                pTVar30 = pTVar30 + 2;
                pTVar34 = (TReferenceControllerBase<1> *)(ulonglong)(uVar36 + 1);
              } while ((int)(uVar36 + 1) < piVar35[4]);
            }
          }
          else {
            pTVar30 = pTVar37;
            if (0 < piVar35[4]) {
              do {
                uVar36 = (uint)pTVar37;
                uVar33 = 0;
                if ((int)uVar36 < piVar35[4]) {
                  uVar33 = ~uVar36 >> 0x1f;
                }
                if ((uVar33 == 0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar19)) {
                  pcVar8 = (code *)swi(3);
                  uVar20 = (*pcVar8)();
                  return (bool)uVar20;
                }
                puVar24 = (undefined8 *)((longlong)&pTVar30->_padding_ + *(longlong *)(piVar35 + 2))
                ;
                if ((local_258.GameData.Object == (FNiagaraDataChannelGameData *)0x0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar19)) {
                  pcVar8 = (code *)swi(3);
                  uVar20 = (*pcVar8)();
                  return (bool)uVar20;
                }
                pFVar39 = local_258.GameData.Object;
                iVar3 = *(int *)(puVar24 + 2);
                iVar4 = *(int *)(puVar24 + 1);
                local_1e8 = (uchar *)*puVar24;
                if ((iVar4 < 0) &&
                   (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                       ("InCount >= 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0xeb,L""), bVar19)) {
                  pcVar8 = (code *)swi(3);
                  uVar20 = (*pcVar8)();
                  return (bool)uVar20;
                }
                local_148._12_4_ = uStack_1dc;
                local_148.ArrayNum = iVar4;
                local_148.DataPtr = local_1e8;
                iStack_1e0 = iVar4;
                FNiagaraDataChannelGameData::SetFromSimCache
                          (pFVar39,(FNiagaraVariableBase *)((longlong)puVar24 + 0x14),&local_148,
                           iVar3);
                pTVar37 = (TReferenceControllerBase<1> *)(ulonglong)(uVar36 + 1);
                pTVar30 = pTVar30 + 2;
              } while ((int)(uVar36 + 1) < piVar35[4]);
            }
          }
          if ((local_288 == (FNiagaraDataChannelData *)0x0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar19)) {
            pcVar8 = (code *)swi(3);
            uVar20 = (*pcVar8)();
            return (bool)uVar20;
          }
          FNiagaraDataChannelData::Publish(local_288,&local_258);
          if (local_258.DebugSource.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_258.DebugSource.Data.AllocatorInstance.Data);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_258.GameData.SharedReferenceCount.ReferenceController);
          TVar18.Reference = local_258.Data.Reference;
          if (local_258.Data.Reference != (FNiagaraDataBuffer *)0x0) {
            if (((int)(local_258.Data.Reference)->_padding_ < 1) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsBeingRead()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                                    ,0x2c,L""), bVar19)) {
              pcVar8 = (code *)swi(3);
              uVar20 = (*pcVar8)();
              return (bool)uVar20;
            }
            LOCK();
            *(int *)&(TVar18.Reference)->_padding_ = (int)(TVar18.Reference)->_padding_ + -1;
            UNLOCK();
          }
          bVar19 = true;
          goto LAB_148e7fbbf;
        }
      }
    }
  }
  bVar19 = false;
LAB_148e7fbbf:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_280.ReferenceController);
  return bVar19;
}

// SimCacheWriteFrame @ 148e7fef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000148e80ab1) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceDataChannelWrite::SimCacheWriteFrame
          (UNiagaraDataInterfaceDataChannelWrite *this,UObject *param_1,int param_2,
          FNiagaraSystemInstance *param_3,void *param_4,FNiagaraSimCacheFeedbackContext *param_5)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined1 *puVar2;
  int *piVar3;
  FNiagaraDataChannelGameDataLayout *pFVar4;
  FNiagaraDataChannelVariableBuffer *pFVar5;
  float fVar6;
  UWorld *pUVar7;
  code *pcVar8;
  code *pcVar9;
  undefined1 *puVar10;
  longlong lVar11;
  code *pcVar12;
  FNiagaraSystemInstance *pFVar13;
  FNiagaraDataChannelGameDataLayout *pFVar14;
  bool bVar15;
  undefined1 uVar16;
  int iVar17;
  uint uVar18;
  UClass *pUVar19;
  TSharedPtr<FNiagaraDataChannelLayoutInfo,1> *pTVar20;
  FNiagaraGpuComputeDispatchInterface *pFVar21;
  FNiagaraDataInterfaceProxy_DataChannelWrite *pFVar22;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar23;
  FNiagaraDataBuffer *pFVar24;
  FNiagaraDataChannelLayoutInfo *pFVar25;
  code **ppcVar26;
  FScriptContainerElement *pFVar27;
  ulonglong uVar28;
  longlong lVar29;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *this_02;
  uint uVar30;
  TSharedPtr<FNiagaraDataBufferReadback,1> *pTVar31;
  ForAnyElementType FVar32;
  uint uVar33;
  undefined1 *puVar34;
  uint *puVar35;
  TSharedPtr<FNiagaraDataBufferReadback,1> *pTVar36;
  uint uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined1 auStackY_298 [32];
  undefined1 local_248;
  undefined1 local_247;
  undefined1 local_246 [6];
  int *local_240;
  FString local_238;
  FString local_228;
  FString local_218;
  TSharedPtr<FNiagaraDataBufferReadback,1> *local_208;
  undefined8 local_200;
  FSoftObjectPath local_1f8;
  FNiagaraSystemInstance *local_1d8;
  UNiagaraDataInterfaceDataChannelWrite *local_1d0;
  int local_1c8;
  int local_1c4;
  undefined8 local_1c0;
  TVector<float>_u_0 local_1b8;
  TVector<float>_u_0 local_1a8;
  FNiagaraDataChannelGameDataLayout *local_198;
  uint uStack_190;
  uint uStack_18c;
  undefined1 *local_188;
  undefined4 uStack_180;
  uint uStack_17c;
  uint local_178;
  undefined4 uStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  FNiagaraDataChannelGameDataLayout *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_160;
  undefined8 uStack_140;
  FNiagaraDataChannelGameData local_138;
  TSharedPtr<FNiagaraDataChannelLayoutInfo,1> local_f8;
  TSharedPtr<FNiagaraDataChannelLayoutInfo,1> local_e8 [2];
  undefined4 local_bc;
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_298;
  local_1d8 = param_3;
  local_1d0 = this;
  if ((this->_padding_ == 0) || (*(longlong *)(this->_padding_ + 0x28) == 0)) {
    pTVar1 = &param_5->Errors;
    ::FString::FString(&local_218,L"Missing data channel asset for data channel writer DI");
    pFVar27 = (pTVar1->AllocatorInstance).Data;
    if ((pFVar27 <= (FScriptContainerElement *)&local_218) &&
       (((FScriptContainerElement *)&local_218 <
         pFVar27 + (longlong)(param_5->Errors).ArrayMax * 0x10 &&
        (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar15)))) {
      pcVar12 = (code *)swi(3);
      uVar16 = (*pcVar12)();
      return (bool)uVar16;
    }
    iVar17 = (param_5->Errors).ArrayNum;
    piVar3 = &(param_5->Errors).ArrayMax;
    if (iVar17 == *piVar3) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar1->AllocatorInstance,piVar3);
      (param_5->Errors).ArrayNum = iVar17 + 1;
    }
    else {
      (param_5->Errors).ArrayNum = iVar17 + 1;
    }
    pFVar27 = (pTVar1->AllocatorInstance).Data + (longlong)iVar17 * 0x10;
    *(undefined8 *)pFVar27 = 0;
    *(FScriptContainerElement **)pFVar27 = local_218.Data.AllocatorInstance.Data;
    *(int *)(pFVar27 + 8) = local_218.Data.ArrayNum;
    *(int *)(pFVar27 + 0xc) = local_218.Data.ArrayMax;
  }
  else if (param_4 == (void *)0x0) {
    pTVar1 = &param_5->Errors;
    ::FString::FString(&local_238,L"Missing per instance data for data channel writer DI");
    pFVar27 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar27 <= (FScriptContainerElement *)&local_238) &&
        ((FScriptContainerElement *)&local_238 <
         pFVar27 + (longlong)(param_5->Errors).ArrayMax * 0x10)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) {
      pcVar12 = (code *)swi(3);
      uVar16 = (*pcVar12)();
      return (bool)uVar16;
    }
    iVar17 = (param_5->Errors).ArrayNum;
    piVar3 = &(param_5->Errors).ArrayMax;
    if (iVar17 == *piVar3) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar1->AllocatorInstance,piVar3);
      (param_5->Errors).ArrayNum = iVar17 + 1;
    }
    else {
      (param_5->Errors).ArrayNum = iVar17 + 1;
    }
    pFVar27 = (pTVar1->AllocatorInstance).Data + (longlong)iVar17 * 0x10;
    *(undefined8 *)pFVar27 = 0;
    *(FScriptContainerElement **)pFVar27 = local_238.Data.AllocatorInstance.Data;
    *(int *)(pFVar27 + 8) = local_238.Data.ArrayNum;
    *(int *)(pFVar27 + 0xc) = local_238.Data.ArrayMax;
  }
  else {
    pUVar7 = param_3->World;
    if (pUVar7 == (UWorld *)0x0) {
      pTVar1 = &param_5->Errors;
      ::FString::FString(&local_228,L"Missing world for data channel writer DI\'s System Instace.");
      pFVar27 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar27 <= (FScriptContainerElement *)&local_228) &&
          ((FScriptContainerElement *)&local_228 <
           pFVar27 + (longlong)(param_5->Errors).ArrayMax * 0x10)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar12 = (code *)swi(3);
        uVar16 = (*pcVar12)();
        return (bool)uVar16;
      }
      iVar17 = (param_5->Errors).ArrayNum;
      piVar3 = &(param_5->Errors).ArrayMax;
      if (iVar17 == *piVar3) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar1->AllocatorInstance,piVar3);
        (param_5->Errors).ArrayNum = iVar17 + 1;
      }
      else {
        (param_5->Errors).ArrayNum = iVar17 + 1;
      }
      pFVar27 = (pTVar1->AllocatorInstance).Data + (longlong)iVar17 * 0x10;
      *(undefined8 *)pFVar27 = 0;
      *(FScriptContainerElement **)pFVar27 = local_228.Data.AllocatorInstance.Data;
      *(int *)(pFVar27 + 8) = local_228.Data.ArrayNum;
      *(int *)(pFVar27 + 0xc) = local_228.Data.ArrayMax;
    }
    else if (param_1 != (UObject *)0x0) {
      pUVar19 = UNDIDataChannelWriteSimCacheData::StaticClass();
      iVar17 = (int)pUVar19->_padding_;
      if ((iVar17 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar17 * 8) ==
          &pUVar19->_padding_)) {
        if ((*(int *)&param_1[1].field_0x8 != param_2) &&
           (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_5638986249386589271>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDataChannelWrite.cpp"
                                ,0x3a9,"Storage->FrameData.Num() == FrameIndex"), bVar15)) {
          pcVar12 = (code *)swi(3);
          uVar16 = (*pcVar12)();
          return (bool)uVar16;
        }
        local_1f8.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_1f8.AssetPath.PackageName.Number = 0;
        local_1f8.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_1f8.AssetPath.AssetName.Number = 0;
        local_1f8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1f8.SubPathString.Data.ArrayNum = 0;
        local_1f8.SubPathString.Data.ArrayMax = 0;
        FSoftObjectPath::SetPath(&local_1f8,(UObject *)this->_padding_);
        puVar2 = &param_1[1].field_0x20;
        *(uint *)&param_1[1].field_0x10 = local_1f8.AssetPath.PackageName.ComparisonIndex.Value;
        *(uint *)&param_1[1].field_0x14 = local_1f8.AssetPath.PackageName.Number;
        *(uint *)&param_1[1].field_0x18 = local_1f8.AssetPath.AssetName.ComparisonIndex.Value;
        *(uint *)&param_1[1].field_0x1c = local_1f8.AssetPath.AssetName.Number;
        if ((FUtf8String *)puVar2 != &local_1f8.SubPathString) {
          if (*(void **)puVar2 != (void *)0x0) {
            FMemory::Free(*(void **)puVar2);
          }
          *(FScriptContainerElement **)puVar2 = local_1f8.SubPathString.Data.AllocatorInstance.Data;
          *(int *)(param_1 + 2) = local_1f8.SubPathString.Data.ArrayNum;
          *(int *)&param_1[2].field_0x4 = local_1f8.SubPathString.Data.ArrayMax;
          local_1f8.SubPathString.Data.ArrayNum = 0;
          local_1f8.SubPathString.Data.ArrayMax = 0;
          local_1f8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_1f8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f8.SubPathString.Data.AllocatorInstance.Data);
        }
        iVar17 = *(int *)&param_1[1].field_0x8;
        if (iVar17 == *(int *)&param_1[1].field_0xc) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x820,(ForAnyElementType *)(param_1 + 1),(int *)&param_1[1].field_0xc)
          ;
        }
        local_240 = (int *)((longlong)iVar17 * 0x20 + *(longlong *)(param_1 + 1));
        *(int *)&param_1[1].field_0x8 = iVar17 + 1;
        DefaultConstructItems<FNDIDataChannelWriteSimCacheFrame,int>(local_240,1);
        if ((*(longlong *)((longlong)param_4 + 0x18) != 0) &&
           ((((char)this->_padding_ != '\0' || (*(char *)((longlong)&this->_padding_ + 1) != '\0'))
            || (*(char *)((longlong)&this->_padding_ + 2) != '\0')))) {
          pTVar20 = UNiagaraDataChannel::GetLayoutInfo
                              (*(UNiagaraDataChannel **)(this->_padding_ + 0x28),&local_f8);
          FNiagaraDataChannelGameData::FNiagaraDataChannelGameData(&local_138,pTVar20);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_f8.SharedReferenceCount.ReferenceController);
          pFVar24 = *(FNiagaraDataBuffer **)((longlong)param_4 + 0xd8);
          if ((pFVar24 != (FNiagaraDataBuffer *)0x0) && (pFVar24->NumInstances != 0)) {
            local_1b8._0_8_ = *(undefined8 *)&(param_3->LWCTile).field0_0x0;
            local_1b8._s_0.Z = (param_3->LWCTile).field0_0x0._s_0.Z;
            FNiagaraDataChannelGameData::AppendFromDataSet
                      (&local_138,pFVar24,(TVector<float> *)&local_1b8._s_0);
          }
          pFVar21 = FNiagaraGpuComputeDispatchInterface::Get(pUVar7);
          if ((*(char *)((longlong)&(this->CompiledData)._padding_ + 5) != '\0') &&
             (pFVar21 != (FNiagaraGpuComputeDispatchInterface *)0x0)) {
            pFVar22 = UNiagaraDataInterface::GetProxyAs<FNiagaraDataInterfaceProxy_DataChannelWrite>
                                ((UNiagaraDataInterface *)
                                 &this[-1].CompiledData.DataLayout.VariableLayouts);
            pcVar12 = *(code **)((longlong)param_4 + 0x20);
            pcVar8 = (code *)param_3->ID;
            pcVar9 = *(code **)((longlong)param_4 + 0x18);
            local_208 = (TSharedPtr<FNiagaraDataBufferReadback,1> *)0x0;
            local_200 = 0;
            if (pcVar12 != (code *)0x0) {
              LOCK();
              *(int *)(pcVar12 + 8) = *(int *)(pcVar12 + 8) + 1;
              UNLOCK();
            }
            local_b8[0] = (code *)0x0;
            local_90 = FMemory::Malloc(0x38,8);
            local_90[1] = (code *)pFVar22;
            local_90[2] = pcVar8;
            *local_90 = (code *)&UE::Core::Private::Function::
                                 TFunction_OwnedObject<`UNiagaraDataInterfaceDataChannelWrite::SimCacheWriteFrame'::`23'::<lambda_1>,1,1>
                                 ::_vftable_;
            local_90[3] = pcVar9;
            local_90[5] = (code *)&local_208;
            local_90[4] = pcVar12;
            local_90[6] = (code *)pFVar21;
            if (local_90 != (code **)&DAT_fffffffffffffff8) {
              local_b8[0] = UE::Core::Private::Function::
                            TFunctionRefCaller<`UNiagaraDataInterfaceDataChannelWrite::SimCacheWriteFrame'::__l23::<lambda_1>,void,FRHICommandListImmediate_&>
                            ::Call;
            }
            this_00 = FRenderCommandList::GetInstanceTLS();
            if (this_00 == (FRenderCommandList *)0x0) {
              FRenderThreadCommandPipe::
              Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceDataChannelWrite::SimCacheWriteFrame_::__l23::TSTR_NDISimCacheGPUWriteFrame957>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
            }
            else {
              this_01 = FRenderCommandList::GetRenderThread(this_00);
              local_88[0] = local_b8[0];
              local_b8[0] = (code *)0x0;
              local_60 = local_90;
              local_90 = (code **)0x0;
              local_78[0] = local_a8[0];
              local_78[1] = local_a8[1];
              local_78[2] = local_a8[2];
              local_58 = 2;
              pFVar23 = (FRenderCommandTag *)
                        TRenderCommandTag<`UNiagaraDataInterfaceDataChannelWrite::SimCacheWriteFrame'::__l23::TSTR_NDISimCacheGPUWriteFrame957>
                        ::Get();
              UE::RenderCommandPipe::FCommandList::Enqueue
                        (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                                  *)local_88,pFVar23);
              uVar28 = (ulonglong)local_58;
              if ((2 < uVar28) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                      ,0xd4,L""), bVar15)) {
                pcVar12 = (code *)swi(3);
                uVar16 = (*pcVar12)();
                return (bool)uVar16;
              }
              if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[uVar28] ==
                  UE::Core::Private::
                  TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
                  Destruct) {
                if (local_88[0] != (code *)0x0) {
                  ppcVar26 = local_88 + 2;
                  if (local_60 != (code **)0x0) {
                    ppcVar26 = local_60;
                  }
                  (**(code **)(*ppcVar26 + 0x10))();
                }
              }
              else {
                (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                            ::__l2::Destructors)[uVar28])();
              }
            }
            if (local_b8[0] != (code *)0x0) {
              ppcVar26 = local_b8 + 2;
              if (local_90 != (code **)0x0) {
                ppcVar26 = local_90;
              }
              (**(code **)(*ppcVar26 + 0x10))();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            FlushRenderingCommands();
            pFVar13 = local_1d8;
            iVar17 = (int)local_200;
            pTVar36 = local_208 + (int)local_200;
            pTVar31 = local_208;
            while( true ) {
              if ((int)local_200 != iVar17) {
                local_248 = 0;
                `TCheckedPointerIterator<TSharedPtr<FNiagaraDataBufferReadback,1>,int,0>::
                operator!='::__l2::<lambda_1>::operator()(&local_248);
              }
              if (pTVar31 == pTVar36) break;
              if ((*(longlong *)((longlong)param_4 + 0x18) == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar15)) {
                pcVar12 = (code *)swi(3);
                uVar16 = (*pcVar12)();
                return (bool)uVar16;
              }
              pFVar24 = FNiagaraDataChannelData::GetBufferForCPUWrite
                                  (*(FNiagaraDataChannelData **)((longlong)param_4 + 0x18));
              if ((pTVar31->Object == (FNiagaraDataBufferReadback *)0x0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar15)) {
                pcVar12 = (code *)swi(3);
                uVar16 = (*pcVar12)();
                return (bool)uVar16;
              }
              FNiagaraDataBufferReadback::ReadResultsToDataBuffer(pTVar31->Object,pFVar24);
              local_1c0 = *(undefined8 *)&(pFVar13->LWCTile).field0_0x0;
              uVar38 = (undefined4)local_1c0;
              uVar39 = (undefined4)((ulonglong)local_1c0 >> 0x20);
              fVar6 = (pFVar13->LWCTile).field0_0x0._s_0.Z;
              LOCK();
              bVar15 = (int)pFVar24->_padding_ == -1;
              if (bVar15) {
                *(undefined4 *)&pFVar24->_padding_ = 1;
              }
              UNLOCK();
              if (!bVar15) {
                local_247 = 0;
                `FNiagaraDataBuffer::UnlockForRead'::__l2::<lambda_1>::operator()(&local_247);
                uVar38 = (undefined4)local_1c0;
                uVar39 = (undefined4)((ulonglong)local_1c0 >> 0x20);
              }
              local_1a8._0_8_ = CONCAT44(uVar39,uVar38);
              local_1a8._s_0.Z = fVar6;
              FNiagaraDataChannelGameData::AppendFromDataSet
                        (&local_138,pFVar24,(TVector<float> *)&local_1a8._s_0);
              if (pFVar24 != (FNiagaraDataBuffer *)0x0) {
                if (((int)pFVar24->_padding_ < 1) &&
                   (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsBeingRead()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                                        ,0x2c,L""), bVar15)) {
                  pcVar12 = (code *)swi(3);
                  uVar16 = (*pcVar12)();
                  return (bool)uVar16;
                }
                LOCK();
                *(int *)&pFVar24->_padding_ = (int)pFVar24->_padding_ + -1;
                UNLOCK();
              }
              pTVar31 = pTVar31 + 1;
            }
            DestructItems<TSharedPtr<FNiagaraDataBufferReadback,1>,int>(local_208,(int)local_200);
            if (local_208 != (TSharedPtr<FNiagaraDataBufferReadback,1> *)0x0) {
              FMemory::Free(local_208);
            }
          }
          FVar32.Data = local_138.VariableData.AllocatorInstance.Data;
          piVar3 = local_240;
          lVar29 = (longlong)local_138.VariableData.ArrayNum;
          *local_240 = local_138.NumElements;
          if ((local_138.VariableData.ArrayNum < 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar15)) {
            pcVar12 = (code *)swi(3);
            uVar16 = (*pcVar12)();
            return (bool)uVar16;
          }
          pFVar5 = (FNiagaraDataChannelVariableBuffer *)(FVar32.Data + lVar29 * 0x28);
          for (; (FNiagaraDataChannelVariableBuffer *)FVar32.Data != pFVar5;
              FVar32.Data = FVar32.Data + 0x28) {
            iVar17 = piVar3[4];
            if (iVar17 == piVar3[5]) {
              iVar17 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x820,(ForAnyElementType *)(piVar3 + 2),piVar3 + 5);
            }
            piVar3[4] = iVar17 + 1;
            this_02 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                      ((longlong)iVar17 * 0x20 + *(longlong *)(piVar3 + 2));
            DefaultConstructItems<FNDIDataChannelWriteSimCacheFrameBuffer,int>(this_02,1);
            *(int *)&this_02[1].AllocatorInstance.Data =
                 ((FNiagaraDataChannelVariableBuffer *)FVar32.Data)->Size;
            TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
                      (this_02,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)FVar32.Data);
          }
          uVar33 = 0;
          pTVar20 = UNiagaraDataChannel::GetLayoutInfo
                              (*(UNiagaraDataChannel **)(local_1d0->_padding_ + 0x28),local_e8);
          pFVar25 = TSharedPtr<FNiagaraDataChannelLayoutInfo,1>::operator->(pTVar20);
          pFVar4 = &pFVar25->GameDataLayout;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_e8[0].SharedReferenceCount.ReferenceController);
          uVar30 = *(uint *)&(pFVar25->GameDataLayout).VariableIndices.field_0x28;
          local_188 = &(pFVar25->GameDataLayout).VariableIndices.field_0x10;
          uStack_18c = 1;
          uStack_190 = uVar33;
          uStack_17c = uVar33;
          local_178 = uVar33;
          if (uVar30 != 0) {
            puVar35 = *(uint **)&(pFVar25->GameDataLayout).VariableIndices.field_0x20;
            if (puVar35 == (uint *)0x0) {
              puVar35 = (uint *)local_188;
            }
            uVar37 = *puVar35;
            uStack_190 = 0;
            local_178 = 0;
            while (uVar37 == 0) {
              uStack_190 = uStack_190 + 1;
              local_178 = local_178 + 0x20;
              uStack_17c = uVar30;
              if ((int)((uVar30 - 1) + ((int)(uVar30 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_190)
              goto LAB_148e80771;
              uVar37 = puVar35[(int)uStack_190];
            }
            uStack_18c = -uVar37 & uVar37;
            uVar28 = (ulonglong)uStack_18c * 2 + 1;
            lVar29 = 0x3f;
            if (uVar28 != 0) {
              for (; uVar28 >> lVar29 == 0; lVar29 = lVar29 + -1) {
              }
            }
            local_1c8 = (int)lVar29;
            uStack_17c = local_1c8 + -1 + local_178;
            if ((int)uVar30 < (int)uStack_17c) {
              uStack_17c = uVar30;
            }
          }
LAB_148e80771:
          uVar30 = *(uint *)&(pFVar25->GameDataLayout).VariableIndices.field_0x28;
          puVar2 = &(pFVar25->GameDataLayout).VariableIndices.field_0x10;
          uStack_174 = local_bc;
          uVar37 = uVar30 & 0xffffffe0;
          iStack_170 = *(int *)&(pFVar25->GameDataLayout).VariableIndices.field_0x8 -
                       *(int *)&(pFVar25->GameDataLayout).VariableIndices.field_0x34;
          uStack_180 = 0xffffffff;
          TStack_160._padding_ = CONCAT44(uStack_18c,uStack_190);
          TStack_160.CurrentBitIndex = uStack_17c;
          TStack_160.UnvisitedBitMask = 0xffffffff;
          iVar17 = (int)uVar30 >> 5;
          TStack_160._28_4_ = local_bc;
          TStack_160.BaseBitIndex = local_178;
          uStack_140 = CONCAT44(uStack_16c,iStack_170);
          local_198 = pFVar4;
          local_168 = pFVar4;
          TStack_160.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_188;
          if ((((int)uVar30 < 0) ||
              (*(int *)&(pFVar25->GameDataLayout).VariableIndices.field_0x28 < (int)uVar30)) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x7af,L""), bVar15)) {
            pcVar12 = (code *)swi(3);
            uVar16 = (*pcVar12)();
            return (bool)uVar16;
          }
          piVar3 = local_240;
          uVar18 = *(uint *)&(pFVar25->GameDataLayout).VariableIndices.field_0x28;
          if (uVar30 != uVar18) {
            puVar10 = *(undefined1 **)&(pFVar25->GameDataLayout).VariableIndices.field_0x20;
            puVar34 = puVar2;
            if (puVar10 != (undefined1 *)0x0) {
              puVar34 = puVar10;
            }
            uVar30 = -1 << ((byte)uVar30 & 0x1f) & *(uint *)(puVar34 + (longlong)iVar17 * 4);
            while (uVar30 == 0) {
              iVar17 = iVar17 + 1;
              uVar37 = uVar37 + 0x20;
              uVar30 = uVar18;
              if ((int)(((int)(uVar18 - 1) >> 0x1f & 0x1fU) + (uVar18 - 1)) >> 5 < iVar17)
              goto LAB_148e80890;
              uVar30 = *(uint *)(puVar34 + (longlong)iVar17 * 4);
            }
            uVar28 = (ulonglong)(-uVar30 & uVar30) * 2 + 1;
            lVar29 = 0x3f;
            if (uVar28 != 0) {
              for (; uVar28 >> lVar29 == 0; lVar29 = lVar29 + -1) {
              }
            }
            local_1c4 = (int)lVar29;
            uVar30 = local_1c4 + -1 + uVar37;
            if ((int)uVar18 < (int)uVar30) {
              uVar30 = uVar18;
            }
          }
LAB_148e80890:
          while( true ) {
            pFVar14 = local_168;
            if (*(int *)&(local_168->VariableIndices).field_0x8 -
                *(int *)&(local_168->VariableIndices).field_0x34 != (int)uStack_140) {
              local_246[0] = 0;
              `TSparseArray<TSparseSetElement<TTuple<FNiagaraVariableBase,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_246);
            }
            lVar29 = (longlong)TStack_160.CurrentBitIndex;
            if (((TStack_160.CurrentBitIndex == uVar30) &&
                (TStack_160.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
               (pFVar14 == pFVar4)) break;
            lVar11 = *(longlong *)&pFVar14->VariableIndices;
            uVar37 = *(uint *)(lVar11 + 0xc + lVar29 * 0x18);
            local_240 = *(int **)(lVar11 + lVar29 * 0x18);
            uVar39 = SUB84(local_240,0);
            uVar40 = (undefined4)((ulonglong)local_240 >> 0x20);
            uVar38 = *(undefined4 *)(lVar11 + 8 + lVar29 * 0x18);
            uVar18 = uVar33;
            if ((int)uVar37 < piVar3[4]) {
              uVar18 = ~uVar37 >> 0x1f;
            }
            if (uVar18 == 0) {
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar15) {
                pcVar12 = (code *)swi(3);
                uVar16 = (*pcVar12)();
                return (bool)uVar16;
              }
              uVar39 = SUB84(local_240,0);
              uVar40 = (undefined4)((ulonglong)local_240 >> 0x20);
            }
            lVar29 = *(longlong *)(piVar3 + 2);
            *(ulonglong *)((longlong)(int)uVar37 * 0x20 + 0x14 + lVar29) = CONCAT44(uVar40,uVar39);
            *(undefined4 *)((longlong)(int)uVar37 * 0x20 + 0x1c + lVar29) = uVar38;
            TStack_160.UnvisitedBitMask = TStack_160.UnvisitedBitMask & ~TStack_160._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_160);
          }
          *(char *)(piVar3 + 6) = (char)local_1d0->_padding_;
          *(undefined1 *)((longlong)piVar3 + 0x19) =
               *(undefined1 *)((longlong)&local_1d0->_padding_ + 1);
          *(undefined1 *)((longlong)piVar3 + 0x1a) =
               *(undefined1 *)((longlong)&local_1d0->_padding_ + 2);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_138.LayoutInfo.SharedReferenceCount.ReferenceController);
          DestructItems<FNiagaraDataChannelVariableBuffer,int>
                    ((FNiagaraDataChannelVariableBuffer *)
                     local_138.VariableData.AllocatorInstance.Data,local_138.VariableData.ArrayNum);
          if ((FNiagaraDataChannelVariableBuffer *)local_138.VariableData.AllocatorInstance.Data !=
              (FNiagaraDataChannelVariableBuffer *)0x0) {
            FMemory::Free(local_138.VariableData.AllocatorInstance.Data);
          }
          if ((longlong *)local_138._padding_ != (longlong *)0x0) {
            LOCK();
            piVar3 = (int *)(local_138._padding_ + 0xc);
            iVar17 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if ((iVar17 == 1) && ((longlong *)local_138._padding_ != (longlong *)0x0)) {
              (**(code **)(*(longlong *)local_138._padding_ + 8))(local_138._padding_,1);
            }
          }
        }
        return true;
      }
    }
  }
  return false;
}

// StaticRegisterNativesUNiagaraDataInterfaceDataChannelWrite @ 148e81660

void __cdecl
UNiagaraDataInterfaceDataChannelWrite::StaticRegisterNativesUNiagaraDataInterfaceDataChannelWrite
          (void)

{
  return;
}

// Write @ 148e85280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceDataChannelWrite::Write
          (UNiagaraDataInterfaceDataChannelWrite *this,FVectorVMExternalFunctionContext *param_1,
          int param_2)

{
  uint uVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_NDIDataChannelWrite_Write> FVar10;
  float *pfVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  FName FVar15;
  float *pfVar16;
  int iVar17;
  FNiagaraDataBuffer *pFVar18;
  byte bVar19;
  FNiagaraDataBuffer *pFVar20;
  FNiagaraDataBuffer *pFVar21;
  undefined1 auStackY_678 [32];
  bool local_618;
  byte local_617;
  FName local_610;
  uint local_608;
  float local_604;
  FNiagaraDataBuffer *local_600;
  FColor_u_0 local_5f8 [2];
  FNDIDataChannel_FunctionToDataSetBinding *local_5f0;
  FNiagaraDataBuffer *local_5e8;
  FName local_5e0;
  FNiagaraDataBuffer *local_5d8;
  FNiagaraDataBuffer *pFStack_5d0;
  undefined8 local_5c8;
  FNiagaraDataBuffer *local_5c0;
  FNiagaraDataBuffer *pFStack_5b8;
  undefined8 local_5b0;
  float *local_5a8;
  int local_5a0 [2];
  FName local_598;
  FNiagaraDataBuffer *local_590;
  float fStack_588;
  undefined4 uStack_584;
  bool *local_580;
  FName local_578;
  uint *local_568;
  FName local_560;
  undefined1 local_558 [16];
  bool *local_548;
  undefined1 local_538 [16];
  bool *local_528;
  <lambda_1> local_518;
  FNDIVariadicInputHandler<16> local_4f8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_678;
  FVar10 = StatPtr_STAT_NDIDataChannelWrite_Write;
  if (StatPtr_STAT_NDIDataChannelWrite_Write ==
      (FThreadSafeStaticStat<FStat_STAT_NDIDataChannelWrite_Write>)0x0) {
    pFVar9 = ::FName::FName(&local_560,"STAT_NDIDataChannelWrite_Write");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_NDIDataChannelWrite_Write>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NDIDataChannelWrite_Write,*pFVar9
                        ,L"NDIDataChannelWrite Write","STATGROUP_NiagaraDataChannels",
                        "STATCAT_Niagara",L"Niagara Data Channels",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar15 = *(FName *)FVar10;
  bVar19 = 0;
  local_578.ComparisonIndex.Value = 0;
  local_578.Number = 0;
  local_617 = 0;
  if ((FVar15.ComparisonIndex.Value.Value != 0) || (FVar15.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_5f8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_5f8[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar19 = 1;
      local_617 = 1;
      if (-1 < CpuChannel->Enabled) {
        local_5e0 = FVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_5e0,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDataChannelWrite.cpp"
                   ,0x500);
        bVar19 = 3;
        local_617 = 3;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_610 = FVar15;
      local_598 = FVar15;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      local_617 = bVar19 | 4;
      goto LAB_148e853f3;
    }
  }
  local_598 = local_578;
  FVar15 = local_578;
LAB_148e853f3:
  VectorVM::FUserPtrHandler<FNDIDataChannelWriteInstanceData>::
  FUserPtrHandler<FNDIDataChannelWriteInstanceData>
            ((FUserPtrHandler<FNDIDataChannelWriteInstanceData> *)&local_590,param_1);
  local_5b0 = (bool *)((ulonglong)local_5b0._4_4_ << 0x20);
  pfVar11 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)&local_5b0);
  local_5c8 = (bool *)((ulonglong)local_5c8._4_4_ << 0x20);
  local_600 = (FNiagaraDataBuffer *)(pfVar11 + (int)local_5b0 * param_1->PerInstanceFnInstanceIdx);
  local_5c0 = local_600;
  pFStack_5b8 = local_600;
  pfVar11 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)&local_5c8);
  lVar4 = CONCAT44(uStack_584,fStack_588);
  local_5e8 = (FNiagaraDataBuffer *)(pfVar11 + (int)local_5c8 * param_1->PerInstanceFnInstanceIdx);
  local_5d8 = local_5e8;
  pFStack_5d0 = local_5e8;
  if ((param_2 < 0) || (*(int *)(lVar4 + 0xb8) <= param_2)) {
    local_5f0 = (FNDIDataChannel_FunctionToDataSetBinding *)0x0;
  }
  else {
    uVar8 = 0;
    if (param_2 < *(int *)(lVar4 + 0xb8)) {
      uVar8 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar12 = *(longlong *)(lVar4 + 0xb0);
    if (*(longlong *)(lVar4 + 0xb0) == 0) {
      lVar12 = lVar4 + 0x30;
    }
    local_5f0 = *(FNDIDataChannel_FunctionToDataSetBinding **)(lVar12 + (longlong)param_2 * 0x10);
  }
  FNDIVariadicInputHandler<16>::FNDIVariadicInputHandler<16>(&local_4f8,param_1,local_5f0);
  local_5a0[0] = 0;
  pfVar11 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_5a0);
  iVar6 = local_5a0[0];
  local_568 = (uint *)(lVar4 + 0xc0);
  pfVar11 = pfVar11 + local_5a0[0] * param_1->PerInstanceFnInstanceIdx;
  bVar7 = true;
  local_5a8 = pfVar11;
  if ((this->bOnlyWriteOnceOnSubticks != false) &&
     (lVar12 = *(longlong *)(lVar4 + 0xe0), lVar12 != 0)) {
    local_610 = *(FName *)(lVar12 + 0x38);
    pTVar2 = *(TReferenceControllerBase<1> **)(lVar12 + 0x40);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_610 == (FName)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    bVar7 = *(int *)((longlong)local_610 + 0x6bc) == *(int *)((longlong)local_610 + 0x6b8) + -1;
  }
  local_610 = *(FName *)(lVar4 + 0xd8);
  if ((((local_610 == (FName)0x0) || (local_5f0 == (FNDIDataChannel_FunctionToDataSetBinding *)0x0))
      || (INiagaraModule::bDataChannelsEnabled == false)) || (!bVar7)) {
    iVar17 = 0;
    if (0 < param_1->NumInstances) {
      do {
        pfVar16 = pfVar11;
        if (0 < iVar6) {
          pfVar16 = pfVar11 + iVar6;
          *pfVar11 = 0.0;
        }
        iVar17 = iVar17 + 1;
        pfVar11 = pfVar16;
      } while (iVar17 < param_1->NumInstances);
    }
  }
  else {
    local_608 = ((FNiagaraDataBuffer *)local_610)->NumInstancesAllocated;
    local_604 = -NAN;
    if (((int)local_608 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar7))
    {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar17 = 0;
    if (0 < param_1->NumInstances) {
      local_5e0 = (FName)((longlong)(int)local_5c8 << 2);
      pFVar18 = local_600;
      pFVar20 = local_5e8;
      fVar14 = local_604;
      local_600 = (FNiagaraDataBuffer *)((longlong)(int)local_5b0 << 2);
      do {
        pFVar21 = (FNiagaraDataBuffer *)((longlong)&pFVar20->_padding_ + (longlong)local_5e0);
        fVar13 = *(float *)&pFVar20->_padding_;
        plVar5 = &local_600->_padding_;
        if (((*(float *)&pFVar18->_padding_ == 0.0) || ((int)fVar13 < 0)) ||
           ((int)local_608 <= (int)fVar13)) {
          FNDIVariadicInputHandler<16>::Advance(&local_4f8,1);
          if (0 < iVar6) {
            *pfVar11 = 0.0;
            goto LAB_148e857a8;
          }
        }
        else {
          local_580 = &local_618;
          pFStack_5b8 = (FNiagaraDataBuffer *)CONCAT44(pFStack_5b8._4_4_,fVar13);
          local_5c8 = &local_618;
          local_5b0 = &local_618;
          if ((int)fVar14 < (int)fVar13) {
            fVar14 = fVar13;
          }
          pFStack_5d0 = (FNiagaraDataBuffer *)CONCAT44(pFStack_5d0._4_4_,fVar13);
          local_558._8_8_ = pFStack_5b8;
          local_538._8_8_ = pFStack_5d0;
          local_518._12_4_ = uStack_584;
          local_518.Index = (int)fVar13;
          local_618 = true;
          local_5d8 = (FNiagaraDataBuffer *)local_610;
          local_5c0 = (FNiagaraDataBuffer *)local_610;
          local_590 = (FNiagaraDataBuffer *)local_610;
          fStack_588 = fVar13;
          local_558._0_8_ = local_610;
          local_548 = local_5b0;
          local_538._0_8_ = local_610;
          local_528 = local_5c8;
          local_518.Data = (FNiagaraDataBuffer *)local_610;
          local_518.bAllWritesSuccess = local_580;
          bVar7 = FNDIVariadicInputHandler<16>::
                  Process<_UNiagaraDataInterfaceDataChannelWrite::Write_::__l13::<lambda_1>,_UNiagaraDataInterfaceDataChannelWrite::Write_::__l13::<lambda_2>,_UNiagaraDataInterfaceDataChannelWrite::Write_::__l13::<lambda_3>_>
                            (&local_4f8,true,1,local_5f0,&local_518,(<lambda_2> *)local_538,
                             (<lambda_3> *)local_558);
          if ((bVar7) && (local_618 != false)) {
            fVar13 = -NAN;
          }
          else {
            fVar13 = 0.0;
          }
          if (0 < iVar6) {
            *pfVar11 = fVar13;
LAB_148e857a8:
            pfVar11 = pfVar11 + iVar6;
          }
        }
        iVar17 = iVar17 + 1;
        pFVar18 = (FNiagaraDataBuffer *)((longlong)plVar5 + (longlong)&pFVar18->_padding_);
        pFVar20 = pFVar21;
      } while (iVar17 < param_1->NumInstances);
      FVar15 = local_598;
      local_604 = fVar14;
      if (fVar14 != -NAN) {
        uVar8 = *local_568;
        while (uVar8 < (int)fVar14 + 1U) {
          LOCK();
          uVar1 = *local_568;
          if (uVar8 == uVar1) {
            *local_568 = (int)fVar14 + 1U;
          }
          UNLOCK();
          if (uVar8 == uVar1) break;
          uVar8 = *local_568;
        }
      }
    }
  }
  if (local_4f8.HalfInputs.AllocatorInstance.SecondaryData !=
      (ForElementType<FNDIInputParam<FFloat16>_>)0x0) {
    FMemory::Free((void *)local_4f8.HalfInputs.AllocatorInstance.SecondaryData);
  }
  if (local_4f8.IntInputs.AllocatorInstance.SecondaryData !=
      (ForElementType<FNDIInputParam<int>_>)0x0) {
    FMemory::Free((void *)local_4f8.IntInputs.AllocatorInstance.SecondaryData);
  }
  if (local_4f8.FloatInputs.AllocatorInstance.SecondaryData !=
      (ForElementType<FNDIInputParam<float>_>)0x0) {
    FMemory::Free((void *)local_4f8.FloatInputs.AllocatorInstance.SecondaryData);
  }
  bVar19 = local_617;
  if ((local_617 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((bVar19 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((bVar19 & 4) != 0) {
    FThreadStats::AddMessage(FVar15,CycleScopeEnd);
  }
  return;
}

// _getUObject @ 148e867d0

UObject * __thiscall
UNiagaraDataInterfaceDataChannelWrite::_getUObject(UNiagaraDataInterfaceDataChannelWrite *this)

{
  return (UObject *)&this[-1].CompiledData.DataLayout.VariableLayouts;
}

